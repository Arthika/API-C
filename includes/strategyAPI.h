/*--------------------------------------------------------------------------------------------------
-- Project     :    remoteStubGUI
-- Filename    :    name: strategyApi.h
--                  created_by: JMG
--                  date_created: May 15, 2015
--------------------------------------------------------------------------------------------------
-- File Purpose: Basic strategy API header file
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

#ifndef STRATEGYAPI_H_
#define STRATEGYAPI_H_

/***************************************************************************************************
 * DEFINITIONS                                                                                   *
 ***************************************************************************************************/

extern void strategyInit ();
extern void strategy ();
extern void strategyFinish ();


#define NAME_SIZE            32
/** ************************************************************************************************
* NAME_SIZE
* @details Maximum string length
***************************************************************************************************/

#define MAX_PRICE_LEVELS	256
/** ************************************************************************************************
* MAX_PRICE_LEVELS
* @details Maximum price levels in a list
***************************************************************************************************/

#include "hftUtils_types.h"

/***************************************************************************************************
 * CONFIGURATION                                                                                   *
 ***************************************************************************************************/

extern idtype 	strategyId ();
/** ************************************************************************************************
* strategyId
* @details Returns the strategy identification
* @return  Strategy identification (returns 0 on error)
***************************************************************************************************/

extern int32 	securityName (idtype security, char* name);
/** ************************************************************************************************
* securityName
* @details Returns the security name for a given security
* @param   security we request the name for
* @param   name (output parameter). Security name string
* @return  result of the operation (OK or ERROR, defined in hftUtils_types.h)
***************************************************************************************************/

extern int32 	assetName (idtype asset, char* name);
/** ************************************************************************************************
* assetName
* @details Returns the asset name for a given asset
* @param   asset we request the name for
* @param   name (output parameter). asset name string
* @return  result of the operation (OK or ERROR, defined in hftUtils_types.h)
***************************************************************************************************/

extern uint16 	numberOfPrimeBrokers ();
/** ************************************************************************************************
* numberOfPrimeBrokers
* @details Provides the number of Prime Brokers
* @return  number of Prime Brokers (returns 0 on error)
***************************************************************************************************/

extern idtype 	primeBrokerId (uint16 pbIndex);
/** ************************************************************************************************
* primeBrokerId
* @details Returns the Prime Broker Identification from the Prime Broker index
* @param   pbIndex Prime Broker index, 0 to number of Prime Brokers
* @return  Primer Broker identification (returns 0 on error)
***************************************************************************************************/

extern uint16  	primeBrokerIndex (idtype pbId);
/** ************************************************************************************************
* primeBrokerIndex
* @details Returns the Prime Broker index from the Primer Broker Identification
* @param   pbId Prime Broker identification
* @return  Primer Broker index (returns 0xFFFF on error)
***************************************************************************************************/

extern int32  	primeBrokerNameFromId (idtype pbId, char* name);
/** ************************************************************************************************
* primeBrokerNameFromId
* @details Returns the Prime Broker name from the Prime Broker Identification
* @param   pbId Prime Broker identification
* @param   name (output parameter). Prime Broker name string
* @return  result of the operation (OK or ERROR, defined in hftUtils_types.h)
***************************************************************************************************/

extern int32  	primeBrokerNameFromIndex (uint16 pbIndex, char* name);
/** ************************************************************************************************
* primeBrokerNameFromIndex
* @details Returns the Prime Broker name from Prime Broker Index
* @param   pbIndex Prime Broker index
* @param   name (Output parameter). Prime Broker name string
* @return  result of the operation (OK or ERROR, defined in hftUtils_types.h)
***************************************************************************************************/

extern uint16 	numberOfTradingInterfaces ();
/** ************************************************************************************************
* numberOfTradingInterfaces
* @details Provides the number of Trading Interfaces
* @return  number of Prime Brokers (returns 0 on error)
***************************************************************************************************/

extern boolean 	tradingInterfaceOK (uint16 tiIndex);
/** ************************************************************************************************
* tradingInterfaceOK
* @details Returns the Trading Interface status for a given Prime Broker Index
* @param   pbIndex Prime Broker index
* @return  status of the Trading Interface (true on OK, false on NOK)
***************************************************************************************************/

extern idtype 	tradingInterfaceId (uint16 tiIndex);
/** ************************************************************************************************
* tradingInterfaceId
* @details Returns the Trading Interface Identification from the Trading Interface index
* @param   tiIndex Trading Interface index
* @return  Trading Interface identification (returns 0 on error)
***************************************************************************************************/

extern uint16  	tradingInterfaceIndex (idtype tiId);
/** ************************************************************************************************
* tradingInterfaceIndex
* @details Returns the Trading Interface index from the Trading Interface Identification
* @param   tiId Trading Interface Identification
* @return  Trading Interface index (returns 0xFFFF on error)
***************************************************************************************************/

extern int32  	tradingInterfaceNameFromId (idtype tiId, char* name);
/** ************************************************************************************************
* tradingInterfaceNameFromId
* @details Returns the Trading Interface name from the Trading Interface Identification
* @param   tiId Trading Interface Identification
* @param   name (output parameter). Trading Interface name string
* @return  result of the operation (OK or ERROR)
***************************************************************************************************/

extern int32  	tradingInterfaceNameFromIndex (uint16 tiIndex, char* name);
/** ************************************************************************************************
* tradingInterfaceNameFromIndex
* @details Returns the Trading Interface name from the Trading Interface index
* @param   tiIndex Trading Interface index
* @param   name (output parameter). Trading Interface name string
* @return  result of the operation (OK or ERROR)
***************************************************************************************************/

extern idtype 	primeBrokerForTradingInterfaceIndex (uint16 tiIndex);
/** ************************************************************************************************
* primeBrokerForTradingInterfaceIndex
* @details Returns the Prime Broker Identification from the Trading Interface index
* @param   tiIndex Trading Interface index
* @return  Primer Broker Identification (returns 0 on error)
***************************************************************************************************/

extern idtype 	primeBrokerForTradingInterfaceId (idtype tiId);
/** ************************************************************************************************
* primeBrokerForTradingInterfaceId
* @details Returns the Prime Broker Identification from the Trading Interface Identification
* @param   tiId Trading Interface Identification
* @return  Primer Broker Identification (returns 0 on error)
***************************************************************************************************/

extern idtype 	venueForTradingInterfaceIndex (uint16 tiIndex);
/** ************************************************************************************************
* venueForTradingInterfaceIndex
* @details Returns the Venue Identification from the Trading Interface index
* @param   tiIndex Trading Interface index
* @return  Venue Identification (returns 0 on error)
***************************************************************************************************/

extern idtype 	venueForTradingInterfaceId (idtype tiId);
/** ************************************************************************************************
* venueForTradingInterfaceId
* @details Returns the Venue Identification from the Trading Interface Identification
* @param   tiId Trading Interface Identification
* @return  Venue Identification (returns 0 on error)
***************************************************************************************************/

extern idtype 	venueTypeForTradingInterfaceIndex (uint16 tiIndex);
/** ************************************************************************************************
* venueTypeForTradingInterfaceIndex
* @details Returns the Venue type from the Trading Interface index
* @param   tiIndex Trading Interface index
* @return  Venue type (returns 0 on error)
***************************************************************************************************/

extern idtype 	venueTypeForTradingInterfaceId (idtype tiId);
/** ************************************************************************************************
* venueTypeForTradingInterfaceId
* @details Returns the Venue Identification from the Trading Interface index
* @param   tiIndex Trading Interface index
* @return  Venue type (returns 0 on error)
***************************************************************************************************/

extern void  exitStrategy (void);
/** ************************************************************************************************
* exitStub
* @details exit strategy, stops program
***************************************************************************************************/

/***************************************************************************************************
 * PRICES                                                                                          *
 ***************************************************************************************************/

extern int32 	topOfBookSortedAskPrices (idtype security, uint32* priceList, uint32* liquidityList, idtype* tiIdList, int32* tiIndexList);
/** ************************************************************************************************
* topOfBookSortedAskPrices
* @details Returns the available Top of Book Ask prices (sorted) for a given security
* @param   security we request the prices for
* @param   priceList (output parameter). List of available prices, price value
* @param   liquidityList (output parameter). List of available prices, liquidity value
* @param   tiIdList (output parameter). List of available prices, trading interface identification
* @param   tiIdList (output parameter). List of available prices, trading interface index
* @return  number of prices available in the list (0 if none is available)
***************************************************************************************************/

extern int32 	topOfBookSortedBidPrices (idtype security, uint32* priceList, uint32* liquidityList, idtype* tiIdList, int32* tiIndexList);
/** ************************************************************************************************
* topOfBookSortedBidPrices
* @details Returns the available Top of Book Bid prices (sorted) for a given security
* @param   security we request the prices for
* @param   priceList (output parameter). List of available prices, price value
* @param   liquidityList (output parameter). List of available prices, liquidity value
* @param   tiIdList (output parameter). List of available prices, trading interface identification
* @param   tiIdList (output parameter). List of available prices, trading interface index
* @return  number of prices available in the list (0 if none is available)
***************************************************************************************************/

extern int32 	fbdSortedBidPrices (idtype security, idtype tiId, uint32* priceList, uint32* liquidityList, idtype* quoteList);
/** ************************************************************************************************
* fbdSortedBidPrices
* @details Returns the available Full Book Bid prices (sorted) for a given security
* @param   security we request the prices for
* @param   priceList (output parameter). List of available prices, price value
* @param   liquidityList (output parameter). List of available prices, liquidity value
* @param   quoteList (output parameter). List of available prices, quote index
* @return  number of prices available in the list (0 if none is available)
***************************************************************************************************/

extern int32 	fbdSortedAskPrices (idtype security, idtype tiId, uint32* priceList, uint32* liquidityList, idtype* quoteList);
/** ************************************************************************************************
* fbdSortedAskPrices
* @details Returns the available Full Book Ask prices (sorted) for a given security
* @param   security we request the prices for
* @param   priceList (output parameter). List of available prices, price value
* @param   liquidityList (output parameter). List of available prices, liquidity value
* @param   quoteList (output parameter). List of available prices, quote index
* @return  number of prices available in the list (0 if none is available)
***************************************************************************************************/

extern uint32 	topOfBookAsk (uint16 security);
/** ************************************************************************************************
* topOfBookAsk
* @details Returns the best Top of Book Ask price for a given security
* @param   security we request the price for
* @return  best Top of Book price (0 if none is available)
***************************************************************************************************/

extern uint32 	topOfBookBid (uint16 security);
/** ************************************************************************************************
* topOfBookBid
* @details Returns the best Top of Book Bid price for a given security
* @param   security we request the price for
* @return  best Top of Book price (0 if none is available)
***************************************************************************************************/

extern uint32 	numberOfDecimalPositions (uint16 security);
/** ************************************************************************************************
* numberOfDecimals
* @details Returns number of decimal positions for a given integer security price
* @param   security we request the decimals for
* @return  Number of decimals (0 if none is available or error)
***************************************************************************************************/

extern idtype 	topOfBookTradingIfIdAsk (uint16 security);
/** ************************************************************************************************
* topOfBookTradingIfAsk
* @details Returns the best Top of Book Ask Trading Interface for a given security
* @param   security we request the TI for
* @return  best price Trading Interface Id (0 if none is available or error)
***************************************************************************************************/

extern idtype 	topOfBookTradingIfIdBid (uint16 security);
/** ************************************************************************************************
* topOfBookTradingIfBid
* @details Returns the best Top of Book Bid Trading Interface for a given security
* @param   security we request the TI for
* @return  best price Trading Interface Id (0 if none is available or error)
***************************************************************************************************/

extern uint32 	topOfBookLiquidityAsk (uint16 security);
/** ************************************************************************************************
* topOfBookLiquidityAsk
* @details Returns the best Top of Book Ask liquidity for a given security
* @param   security we request the liquidity for
* @return  best Top of Book liquidity (0 if none is available)
***************************************************************************************************/

extern uint32 	topOfBookLiquidityBid (uint16 security);
/** ************************************************************************************************
* topOfBookLiquidityBid
* @details Returns the best Top of Book Bid liquidity for a given security
* @param   security we request the liquidity for
* @return  security best Top of Book liquidity (0 if none is available)
***************************************************************************************************/

extern uint32 	topOfBookTiIndexAsk (uint16 security);
/** ************************************************************************************************
* topOfBookTiIndexAsk
* @details Returns the best Top of Book Ask Trading Interface index for a given security
* @param   security we request the Trading Interface for
* @return  best Top of Book Trading Interface index (0 if none is available)
***************************************************************************************************/

extern uint32 	topOfBookTiIndexBid (uint16 security);
/** ************************************************************************************************
* topOfBookTiIndexBid
* @details Returns the best Top of Book Bid Trading Interface index for a given security
* @param   security we request the Trading Interface for
* @return  best Top of Book Trading Interface index (0 if none is available)
***************************************************************************************************/

extern number	securityPrice (uint16 security);
/** ************************************************************************************************
* securityPrice
* @details Returns the Book price for a given security
* @param   security we request the price for
* @return  security price (0 if none is available)
***************************************************************************************************/

extern number	assetPrice (uint16 asset);
/** ************************************************************************************************
* assetPrice
* @details Returns the Book price for a given asset
* @param   asset we request the price for
* @return  asset price (0 if none is available)
***************************************************************************************************/


/***************************************************************************************************
 * CHANGES                                                                                         *
 ***************************************************************************************************/

extern uint32	changeTopOfBookAsk (uint16 tiIndex, uint16 security);
/** ************************************************************************************************
* changeTopOfBookAsk
* @details Returns the best Top of Book Ask price for a given security and a trading interface
* @param   tiIndex  we request the price for
* @param   security we request the price for
* @return  best Top of Book price (0 if there is no change from the last strategy call)
***************************************************************************************************/

extern uint32	changeTopOfBookBid (uint16 tiIndex, uint16 security);
/** ************************************************************************************************
* changeTopOfBookBid
* @details Returns the best Top of Book Bid price for a given security and a trading interface
* @param   tiIndex  we request the price for
* @param   security we request the price for
* @return  best Top of Book price (0 if there is no change from the last strategy call)
***************************************************************************************************/

extern uint32	changeSortingAsk (uint16 security);
/** ************************************************************************************************
* changeSortingAsk
* @details Returns the best Top of Book Ask price for a given security
* @param   security we request the price for
* @return  best Top of Book price (0 if there is no change from the last strategy call)
***************************************************************************************************/

extern uint32	changeSortingBid (uint16 security);
/** ************************************************************************************************
* changeSortingBid
* @details Returns the best Top of Book Bid price for a given security
* @param   security we request the price for
* @return  best Top of Book price (0 if there is no change from the last strategy call)
***************************************************************************************************/

extern number	changeSecurityPrice (uint16 security);
/** ************************************************************************************************
* changeSecurityPrice
* @details Returns the security price for a given security
* @param   security we request the price for
* @return  security price (0 if there is no change from the last strategy call)
***************************************************************************************************/

extern number	changeAssetPrice (uint16 asset);
/** ************************************************************************************************
* changeAssetPrice
* @details Returns the asset price for a given asset
* @param   asset we request the price for
* @return  asset price (0 if there is no change from the last strategy call)
***************************************************************************************************/

extern number	changeAccounting (idtype pbIndex);
/** ************************************************************************************************
* changeAccounting
* @details Returns the Equity value for a given Primer Broker Index
* @param   pbIndex Primer Broker we request the equity for
* @return  Equity value (0 if there is no Accounting change from the last strategy call)
***************************************************************************************************/

extern number	changeAssetExposure (uint16 pbIndex, uint16 asset);
/** ************************************************************************************************
* changeExposureAsset
* @details Returns the asset exposure for a given Prime Broker
* @param   pbIndex we request for
* @param   asset   we request for
* @return  asset exposure (0 if there is no change from the last strategy call)
***************************************************************************************************/

extern number	changeSecurityExposure (uint16 pbIndex, uint16 security, number *price);
/** ************************************************************************************************
* changeSecurityExposure
* @details Returns the asset exposure for a given Prime Broker
* @param   pbIndex  we request for
* @param   security we request for
* @param   price (output parameter). Exposure average price
* @return  security exposure (0 if there is no change from the last strategy call)
***************************************************************************************************/

extern number	changeTotalAssetExposure (uint16 pbIndex, uint16 asset);
/** ************************************************************************************************
* changeTotalAssetExposure
* @details Returns the total asset exposure for a given Prime Broker
* @param   pbIndex we request for
* @param   asset   we request for
* @return  total asset exposure (0 if there is no change from the last strategy call)
***************************************************************************************************/

extern number	changeGlobalAssetExposure ( uint16 asset);
/** ************************************************************************************************
* changeGlobalAssetExposure
* @details Returns the asset exposure for a given Prime Broker
* @param   asset we request for
* @return  asset global exposure (0 if there is no change from the last strategy call)
***************************************************************************************************/

extern number	changeGlobalSecurityExposure (uint16 seurity, number *price);
/** ************************************************************************************************
* changeGlobalSecurityExposure
* @details Returns the asset exposure for a given Prime Broker
* @param   security we request for
* @param   price (output parameter). Exposure average price
* @return  security global exposure (0 if there is no change from the last strategy call)
***************************************************************************************************/

extern number	changeGlobalTotalAssetExposure (uint16 asset);
/** ************************************************************************************************
* changeGlobalTotalAssetExposure
* @details Returns the total asset exposure for a given Prime Broker
* @param   asset we request for
* @return  total global asset exposure (0 if there is no change from the last strategy call)
***************************************************************************************************/


/***************************************************************************************************
 * ACCOUNTING                                                                                      *
 ***************************************************************************************************/

extern number	equity (idtype pbIndex);
/** ************************************************************************************************
* equity
* @details Returns the Equity value for a given Primer Broker Index
* @param   pbIndex Primer Broker we request the equity for
* @return  Equity value
***************************************************************************************************/

extern number	usedMargin (idtype pbIndex);
/** ************************************************************************************************
* usedMargin
* @details Returns the used Margin value for a given Primer Broker Index
* @param   pbIndex Primer Broker we request the equity for
* @return  used Margin value
***************************************************************************************************/

extern number	reservedMargin (idtype pbIndex);
/** ************************************************************************************************
* reserved Margin
* @details Returns the reserved Margin value for a given Primer Broker Index
* @param   pbIndex Primer Broker we request the equity for
* @return  reserved Margin value
***************************************************************************************************/

extern number	globalEquity ();
/** ************************************************************************************************
* globalEquity
* @details Returns the aggregated equity value for all Primer Brokers
* @return  Equity value
***************************************************************************************************/

extern number	assetExposure (uint16 pbIndex, uint16 asset);
/** ************************************************************************************************
* assetExposure
* @details Returns the asset exposure for a given a Prime Broker
* @param   pbIndex  we request the price for
* @param   asset we request for
* @return  asset exposure
***************************************************************************************************/

extern number	securityExposure (uint16 pbIndex, uint16 seurity, number *price);
/** ************************************************************************************************
* securityExposure
* @details Returns the seurity exposure for a given Prime Broker
* @param   pbIndex  we request for
* @param   security we request for
* @param   price (output parameter). Exposure average price
* @return  security exposure
***************************************************************************************************/

extern number	totalAssetExposure (uint16 pbIndex, uint16 asset);
/** ************************************************************************************************
* totalAssetExposure
* @details Returns the asset exposure for a given a Prime Broker
* @param   pbIndex we request for
* @param   asset   we request for
* @return  asset exposure
***************************************************************************************************/

extern number	globalAssetExposure (uint16 asset);
/** ************************************************************************************************
* globalAssetExposure
* @details Returns the asset exposure for a given a Prime Broker
* @param   asset we request for
* @return  asset exposure
***************************************************************************************************/

extern number	globalSecurityExposure (uint16 seurity, number *price);
/** ************************************************************************************************
* globalSecurityExposure
* @details Returns the seurity exposure for a given Prime Broker
* @param   security we request for
* @param   price (output parameter). Exposure average price
* @return  security exposure
***************************************************************************************************/

extern number	globalTotalAssetExposure (uint16 asset);
/** ************************************************************************************************
* globalTotalAssetExposure
* @details Returns the asset exposure for a given a Prime Broker
* @param   asset we request for
* @return  asset exposure
***************************************************************************************************/


/***************************************************************************************************
 * TRADE                                                                                           *
 ***************************************************************************************************/

#define MINUMUM_ORDER 			50000 	// Minimum order size in base currency to reject trade
#define MAXIMUM_ORDER 			500000 	// Maximum order size in base currency to reject trade
#define MINUMUM_STEP			10000 	// Trade step to round odd size trades

#define ERROR_TRADINGINTERFACE	-1001 // Trading Interface Not OK on trade
#define ERROR_ORDERTOOSMALL		-1002 // Order too small on send trade
#define ERROR_ORDERTOOBIG		-1003 // Order too big on send trade
#define ERROR_NOMARGIN			-1004 // No margin
// Trades side
#define TRADE_SIDE_BUY                     1
#define TRADE_SIDE_SELL                    2

// Trade types
#define TRADE_TYPE_MARKET                  1
#define TRADE_TYPE_LIMIT                   2
#define TRADE_TYPE_ICEBERG                 3

// Time in force Valid values (not all type trades support all time in force values):
#define TRADE_TIMEINFORCE_DAY              0   // 0 = Day
#define TRADE_TIMEINFORCE_GOOD_TILL_CANCEL 1   // 1 = Good Till Cancel (GTC)
#define TRADE_TIMEINFORCE_INMED_OR_CANCEL  3   // 3 = Immediate or Cancel (OC)
#define TRADE_TIMEINFORCE_FILL_OR_KILL     4   // 4 = Fill or Kill (FOK)

// Trades status
#define TRADE_STATE_INVALID                0
#define TRADE_STATE_IN_FLUX                1
#define TRADE_STATE_PENDING                2
#define TRADE_STATE_INDETERMINED           3
#define TRADE_STATE_EXECUTED               4
#define TRADE_STATE_CANCELED               5
#define TRADE_STATE_REJECTED               6
#define TRADE_STATE_ERROR_SEND             7
#define TRADE_STATE_REPLACED_TO_NEW        8
#define TRADE_STATE_REPLACED_TO_CANCEL     9
#define TRADE_STATE_CANCELED_BY_USER       10

extern int32 sendTrade (uint8 tradeType, uint32 limitPrice, uint8 side, uint8 timeInForce, idtype tiId, int32 amount, idtype security, uint32 *tradeId);
/** ************************************************************************************************
* sendTrade
* @details Send trade
* @param   tradeType we request, see types above
* @param   limtPrice we request, only for type limit trades
* @param   tradeSide we request, buy or sell
* @param   timeInForce we request, see timeInForce types above
* @param   tiId trading interface to route the trade
* @param   amount to send
* @param   security  we request
* @param   tradeId (output parameter) identification of the trade
* @return  result of the operation (OK or ERROR type, see specific trade errors above)
***************************************************************************************************/

extern int32 cancelTrade (uint32 tradeId);
/** ************************************************************************************************
* cancelTrade
* @details Cancels a trade for a given tradeId
* @param   tradeId we request the cancel for
* @return  result of the operation (OK or ERROR, defined in hftUtils_types.h)
***************************************************************************************************/

extern int32 modifyTrade(uint32 tradeId, uint32 price, int32 quantity);
/** ************************************************************************************************
* modifyTrade
* @details Modifies a trade for a given tradeId
* @param   tradeId we request the modification for
* @param   price to modify, only for type limit trades
* @param   amount to modify
* @return  result of the operation (OK or ERROR)
***************************************************************************************************/

extern uint32 tradesAlive();
/** ************************************************************************************************
* tradesAlive
* @details Returns the number of trades Alive
* @return  number of trades Alive (0 if none found)
***************************************************************************************************/

extern int32 tradeAliveInfo(uint32 tradeId, uint8 *tradeType, uint32 *limitPrice, uint8 *side, idtype *tiId, int32 *amount, idtype *security);
/** ************************************************************************************************
* tradeAliveInfo
* @details Returns information of a trade if this is an alive trade
* @param   tradeId we request the information for
* @param   all the rest (output parameters) identification of the trade
* @return  result of the operation (OK or ERROR)
***************************************************************************************************/

extern uint32 	tradeAliveId(uint32 tradeIndex);
/** ************************************************************************************************
* tradeAliveId
* @details Returns trade Id from trade alive list index
* @param   tradeIndex we request the information for
* @return  trade Id (0 when not found)
***************************************************************************************************/


/***************************************************************************************************
 * CODES FOR ASSETS AND SECURITIES                                                                 *
 ***************************************************************************************************/

#define AED    1   /**< Emirates Dirham       */
#define AUD    2   /**< Australia Dollar      */
#define BHD    3   /**< Bahrain Dinar         */
#define CAD    4   /**< Canada Dollar         */
#define CHF    5   /**< Switzerland Franc     */
#define CLP    6   /**< Chile Peso            */
#define CZK    7   /**< Czech Republic Koruna */
#define DKK    8   /**< Denmark Krone         */
#define EUR    9   /**< Euro Member Countries */
#define GBP   10   /**< United Kingdom Pound  */
#define HKD   11   /**< Hong Kong Dollar      */
#define HUF   12   /**< Hungary Forint        */
#define IDR   13   /**< Indonesia Rupiah      */
#define ILS   14   /**< Israel Shekel         */
#define INR   15   /**< India Rupee           */
#define JPY   16   /**< Japan Yen             */
#define KWD   17   /**< Kuwaiti Dinar         */
#define MXN   18   /**< Mexico Peso           */
#define NOK   19   /**< Norway Krone          */
#define NZD   20   /**< New Zealand Dollar    */
#define OMR   21   /**< Oman Rial             */
#define PLN   22   /**< Poland Zloty          */
#define RUB   23   /**< Russia Ruble          */
#define SAR   24   /**< Saudi Arabia Riyal    */
#define SEK   25   /**< Sweden Krona          */
#define SGD   26   /**< Singapore Dollar      */
#define SKK   27   /**< Slovak Koruna         */
#define THB   28   /**< Thailand Baht         */
#define TRY   29   /**< Turkey Lira           */
#define USD   30   /**< United States Dollar  */
#define XAG   31   /**< Silver                */
#define XAU   32   /**< Gold                  */
#define ZAR   33   /**< South Africa Rand     */

#define NUM_ASSETS 34 /**< Total number of defined assets (including blank column with index 0)*/

#define AUD_CAD    1
#define AUD_CHF    2
#define AUD_JPY    3
#define AUD_NZD    4
#define AUD_SGD    5
#define AUD_USD    6
#define CAD_CHF    7
#define CAD_JPY    8
#define CAD_SGD    9
#define CHF_JPY   10
#define CHF_NOK   11
#define CHF_PLN   12
#define CHF_SEK   13
#define CHF_SGD   14
#define CZK_JPY   15
#define EUR_AED   16
#define EUR_AUD   17
#define EUR_BHD   18
#define EUR_CAD   19
#define EUR_CHF   20
#define EUR_CZK   21
#define EUR_DKK   22
#define EUR_GBP   23
#define EUR_HKD   24
#define EUR_HUF   25
#define EUR_ILS   26
#define EUR_INR   27
#define EUR_JPY   28
#define EUR_KWD   29
#define EUR_MXN   30
#define EUR_NOK   31
#define EUR_NZD   32
#define EUR_OMR   33
#define EUR_PLN   34
#define EUR_SAR   35
#define EUR_SEK   36
#define EUR_SGD   37
#define EUR_SKK   38
#define EUR_THB   39
#define EUR_TRY   40
#define EUR_USD   41
#define EUR_ZAR   42
#define GBP_AUD   43
#define GBP_CAD   44
#define GBP_CHF   45
#define GBP_DKK   46
#define GBP_HKD   47
#define GBP_HUF   48
#define GBP_ILS   49
#define GBP_JPY   50
#define GBP_NOK   51
#define GBP_NZD   52
#define GBP_PLN   53
#define GBP_SEK   54
#define GBP_SGD   55
#define GBP_USD   56
#define HKD_JPY   57
#define HUF_JPY   58
#define MXN_JPY   59
#define NOK_JPY   60
#define NOK_SEK   61
#define NZD_CAD   62
#define NZD_CHF   63
#define NZD_DKK   64
#define NZD_JPY   65
#define NZD_SEK   66
#define NZD_SGD   67
#define NZD_USD   68
#define PLN_JPY   69
#define SEK_JPY   70
#define SGD_JPY   71
#define TRY_JPY   72
#define USD_AED   73
#define USD_BHD   74
#define USD_CAD   75
#define USD_CHF   76
#define USD_CLP   77
#define USD_CZK   78
#define USD_DKK   79
#define USD_HKD   80
#define USD_HUF   81
#define USD_IDR   82
#define USD_ILS   83
#define USD_INR   84
#define USD_JPY   85
#define USD_KWD   86
#define USD_MXN   87
#define USD_NOK   88
#define USD_OMR   89
#define USD_PLN   90
#define USD_RUB   91
#define USD_SAR   92
#define USD_SEK   93
#define USD_SGD   94
#define USD_SKK   95
#define USD_THB   96
#define USD_TRY   97
#define USD_ZAR   98
#define XAG_EUR   99
#define XAG_JPY  100
#define XAG_USD  101
#define XAU_EUR  102
#define XAU_USD  103
#define XAU_JPY  104
#define ZAR_JPY  105

#define NUM_SECURITIES 106 /**< Total number of defined securities */

#endif /* STRATEGYAPI_H_ */
