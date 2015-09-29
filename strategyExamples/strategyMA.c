/*--------------------------------------------------------------------------------------------------
-- Project     :    remoteStub
-- Filename    :    name: strategy.c
--                  created_by: Arthika
--                  date_created: September 15, 2015
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
#include "ta_libc.h"
#include "ta_defs.h"

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

    fprintf (stdout, "\nInitializing strategy Id %d\n", strategyId());
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

	int  			i;
	number			price;
    static byte		count = 0;

    int    			startIdx = 0;
    int    			endIdx = 31;
    static double 	inReal[32] = {0};
    int    			optInTimePeriod = 8;
    TA_MAType     	optInMAType = TA_MAType_SMA;
    int          	outBegIdx;
    int          	outNBElement;
    double   		outReal[32];
    TA_RetCode		retCode;

	price = changeSecurityPrice(EUR_USD);
	if (price != 0)
	{
		fprintf (stdout, "EUR/USD New Book price[%d]:%f \n", count, price);
		inReal[count++] = price;

	}

	if (count >= 32)
	{
		count = 0;
		retCode = TA_MA(startIdx, endIdx, &inReal[0], optInTimePeriod, optInMAType, &outBegIdx, &outNBElement, &outReal[0]);

		if (retCode == TA_SUCCESS)
		{
			fprintf (stdout, "Output Begin:%d, Length:%d ", outBegIdx, outNBElement);
			for (i = outBegIdx; i < outNBElement; i++)
			{
				fprintf (stdout,"Moving average[%d]=%f \n", i, outReal[i]);
			}
		}
		else
		{
			fprintf (stdout, "TA LIB Error:%d ", retCode);
		}
	}
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
