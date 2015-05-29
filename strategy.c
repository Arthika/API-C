/*--------------------------------------------------------------------------------------------------
-- Project     :    remoteStub
-- Filename    :    name: strategy.c
--                  created_by: JMG
--                  date_created: May 15, 2015
--------------------------------------------------------------------------------------------------
-- File Purpose: Strategy
--
--------------------------------------------------------------------------------------------------
-- This software is protected by copyright, the design of any article
-- recorded in the software is protected by design right and the
-- information contained in the software is confidential. This software
-- may not be copied, any design may not be reproduced and the information
-- contained in the software may not be used or disclosed except with the
-- prior written permission of and in a manner permitted by the proprietors
-- Arthika Trading Solutions, S.L.
--------------------------------------------------------------------------------------------------
-- Changes log:
-- 
--------------------------------------------------------------------------------------------------*/

#include <stdio.h>

#include "hftUtils_types.h"
#include "strategyAPI.h"

/***************************************************************************************************
* 1. USER INCLUDES: Add your includes here                                                         *
***************************************************************************************************/

/***************************************************************************************************
* 2. LOCAL DEFINES AND TYPES: Add here your defines, structures or typedefs                        *
***************************************************************************************************/

/***************************************************************************************************
* 3. GLOBAL VARIABLES: Add here declaration of your static or global variables                     *
***************************************************************************************************/



/***************************************************************************************************
* 4. FUNCTION DEFINITIONS: You must add your strategy code inside next three functions             *
***************************************************************************************************/

void strategyInit ()
{

    /***************************************************************************/
    /* 4.1 ADD YOUR INITIALIZATION CODE HERE IF NEEDED                         */
    /* This function will be called only one time at start                     */
    /*                                                                         */

	char 	name[NAME_SIZE] ={0};
    uint16 	tiIndex, pbIndex;
    idtype 	asset, security;
    number 	price, exposure;

    fprintf (stdout, "\nInitializing strategy Id %d\n", strategyId());

    fprintf (stdout, "\nList of Trading interfaces available:\n");
    for(tiIndex = 0; tiIndex < numberOfTradingInterfaces(); tiIndex++)
    {
    	tradingInterfaceNameFromIndex(tiIndex, name);
        fprintf (stdout, "Trading Interface %s, has index:%d, Id:%d (and is %sOK)\n",
        		name, tiIndex, tradingInterfaceId(tiIndex), tradingInterfaceOK(tiIndex) ? "" : "not ");
    }

    fprintf (stdout, "\nList of Prime Brokers available:\n");
    for(pbIndex = 0; pbIndex < numberOfPrimeBrokers(); pbIndex++)
    {
    	primeBrokerNameFromIndex(pbIndex, name);
        fprintf (stdout, "Prime Broker %s, has index:%d, Id:%d\n", name, pbIndex, primeBrokerId(pbIndex));
        for (security = 1; security < NUM_SECURITIES; security++)
        {
    		exposure = securityExposure(pbIndex, security, &price);
    		if ((exposure != 0)&&(securityName(security, name)==OK))
    		{
    			fprintf (stdout, "	%s, security exposure:%f, price:%f\n", name, exposure, price);
    		}
        }
        for (asset = 1; asset < NUM_ASSETS; asset++)
        {
        	exposure = assetExposure(pbIndex, asset);
    		if ((exposure != 0)&&(assetName(asset, name)==OK))
    		{
    			fprintf (stdout, "	%s, asset exposure:%f\n", name, exposure);
    		}

        }
    }

	fprintf (stdout, "\n");
    /*                                                                         */
    /***************************************************************************/

}


void strategy ()
{

    /***************************************************************************/
    /* 4.2 WRTIE HERE YOUR LOCAL VARIABLES AND ADD YOUR STRATEGY CODE HERE     */
    /* This function will be called just after receiving any data or when      */
    /* timeout is elapsed. Without any received data default timeout is 100ms  */
    /*                                                                         */

	uint16 			tiIndex, pbIndex;
	uint32 			priceAsk, t;
	int32  			p, result;
    uint32 			priceList[MAX_PRICE_LEVELS];
    uint32 			liquidityList[MAX_PRICE_LEVELS];
    idtype 			tiIdList[MAX_PRICE_LEVELS];
    int32  			tiIndexList[MAX_PRICE_LEVELS];
    number 			price, exposure;
    static boolean 	sentMarket = false, sentLimit = false, modifiedLimit = false, cancelled = false;
    static uint32	priceBidForTrade = 0, waitStrategy = 0;
    uint32 			tradeIdAsk = 0, tradeIdBid = 0;

	for(tiIndex = 0; tiIndex < numberOfTradingInterfaces(); tiIndex++)
    {
		priceAsk = changeTopOfBookAsk(tiIndex, EUR_USD);
		if (priceAsk != 0)
		{
			fprintf (stdout, "EUR/USD New Top of Book price Ask:%d, for tiIndex:%d\n", priceAsk, tiIndex);
			for (p = 0; p < topOfBookSortedAskPrices(EUR_USD, priceList, liquidityList, tiIdList, tiIndexList); p++)
			{
				fprintf (stdout,"	Price:%d, Liquidity:%d, Trading I/F Id:%d Index:%d\n",
						priceList[p], liquidityList[p], tiIdList[p], tiIndexList[p]);
			}
		}
    }

	if (changeSortingBid(GBP_USD) != 0)
	{
		fprintf (stdout, "GBP_USD New Sorting BID, Top of Book price:%d, liquidity:%d, tiIndex:%d\n",
				topOfBookBid(GBP_USD), topOfBookLiquidityBid(GBP_USD), topOfBookTiIndexBid(GBP_USD));
	}

	price = changeSecurityPrice(GBP_USD);
	if (price!= 0)
	{
		fprintf (stdout, "GBP_USD new book security price:%f, Asset prices: GBP:%f, USD:%f. Global Equity:%f\n",
				price, assetPrice(GBP), assetPrice(USD), globalEquity());
		if ((!sentMarket)&&(priceBidForTrade>topOfBookBid(GBP_USD)+10)) // If price goes down 1 PIP then BUY!!
		{
			result = sendTrade(TRADE_TYPE_MARKET,0, TRADE_SIDE_BUY, TRADE_TIMEINFORCE_FILL_OR_KILL, topOfBookTradingIfIdBid(GBP_USD), MINUMUM_ORDER, GBP_USD, &tradeIdBid);
			if ( result == OK)
			{
				fprintf (stdout, "Trade sent, type Market Id:%d. Number of trades Alive:%d, First alive Id:%d\n", tradeIdBid, tradesAlive(), tradeAliveId(0));
				sentMarket = true;
				waitStrategy = 0;
			}
			else
			{
				switch (result)
				{
					case ERROR_TRADINGINTERFACE:
					{
						fprintf (stdout, "Trade rejected, Trading Interface Not OK\n");
						break;
					}
					case ERROR_ORDERTOOSMALL:
					{
						fprintf (stdout, "Trade rejected, Order too small\n");
						break;
					}
					case ERROR_ORDERTOOBIG:
					{
						fprintf (stdout, "Trade rejected, Order too big\n");
						break;
					}
					case ERROR_NOMARGIN:
					{
						pbIndex = primeBrokerIndex(primeBrokerForTradingInterfaceIndex(topOfBookTiIndexBid(GBP_USD)));
						fprintf (stdout, "Trade rejected, Prime broker Index:%d, No margin. Equity:%f, Used margin:%f\n", pbIndex, equity(pbIndex), usedMargin(pbIndex));
						break;
					}
					default:
					{
						fprintf (stdout, "Trade rejected\n");
						break;
					}
				}
			}
		}
		priceBidForTrade = topOfBookBid(GBP_USD);
	}

	if ((sentMarket)&&(!sentLimit)&&(waitStrategy > 10))
	{
		result = sendTrade(TRADE_TYPE_LIMIT,topOfBookTradingIfIdAsk(GBP_USD)+100, TRADE_SIDE_SELL, TRADE_TIMEINFORCE_FILL_OR_KILL, topOfBookTradingIfIdAsk(GBP_USD), MINUMUM_ORDER, GBP_USD, &tradeIdAsk);
		if ( result == OK)
		{
			fprintf (stdout, "Trade sent, type Limit Id:%d. Number of trades Alive:%d, First alive Id:%d\n", tradeIdAsk, tradesAlive(), tradeAliveId(0));
			sentLimit = true;
			waitStrategy = true;
		}
		else
		{
			switch (result)
			{
				case ERROR_TRADINGINTERFACE:
				{
					fprintf (stdout, "Trade rejected, Trading Interface Not OK\n");
					break;
				}
				case ERROR_ORDERTOOSMALL:
				{
					fprintf (stdout, "Trade rejected, Order too small\n");
					break;
				}
				case ERROR_ORDERTOOBIG:
				{
					fprintf (stdout, "Trade rejected, Order too big\n");
					break;
				}
				case ERROR_NOMARGIN:
				{
					pbIndex = primeBrokerIndex(primeBrokerForTradingInterfaceIndex(topOfBookTiIndexBid(GBP_USD)));
					fprintf (stdout, "Trade rejected, Prime broker Index:%d, No margin. Equity:%f, Used margin:%f\n", pbIndex, equity(pbIndex), usedMargin(pbIndex));
					break;
				}
				default:
				{
					fprintf (stdout, "Trade rejected\n");
					break;
				}
			}
		}
	}
	else
	{
		waitStrategy++;
	}

	if ((sentLimit)&&(!modifiedLimit)&&(waitStrategy > 10))
	{
		for (t = 0;t < tradesAlive(); t++)
		{
			if (tradeAliveId(t) == tradeIdAsk)
			{
				tradeAliveInfo(tradeIdAsk, NULL, &priceAsk, NULL, NULL, NULL, NULL);
				modifyTrade(tradeIdAsk, priceAsk-50, MINUMUM_ORDER);
				modifiedLimit = true;
				fprintf (stdout, "Trade modified\n");
				waitStrategy = 0;
			}
		}
	}

	if ((modifiedLimit)&&(!cancelled)&&(waitStrategy > 10))
	{
		for (t = 0;t < tradesAlive(); t++)
		{
			if (tradeAliveId(t) == tradeIdAsk)
			{
				cancelTrade(tradeIdAsk);
				cancelled = true;
				fprintf (stdout, "Trade cancelled\n");
			}
		}
	}

	if ((modifiedLimit)&&(!cancelled)&&(waitStrategy > 10))
	{
		exitStrategy();
	}

	for(pbIndex = 0; pbIndex < numberOfPrimeBrokers(); pbIndex++)
    {
		exposure = changeAssetExposure(pbIndex, USD);
		if (exposure != 0)
		{
			fprintf (stdout, "USD new asset exposure:%f-%f\n", exposure, assetExposure(pbIndex, USD));
		}
		exposure = changeSecurityExposure(pbIndex, EUR_USD, &price);
		if (exposure != 0)
		{
			fprintf (stdout, "EUR_USD new security exposure:%f, price:%f\n", exposure, price);
		}
    }

	/*                                                                         */
    /***************************************************************************/

}



void strategyFinish ()
{
    /***************************************************************************/
    /* 4.3 ADD YOUR FINALIZATION CODE HERE IF NEEDED                           */
    /* This function will be called when strategy loop has been finished       */
    /* with exit code number. Put here your code needed before exiting         */
    /*                                                                         */

    fprintf (stdout, "Finishing strategy\n");


    /*                                                                         */
    /***************************************************************************/

}
