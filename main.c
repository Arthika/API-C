/*--------------------------------------------------------------------------------------------------
-- Project     :    StubHFT
-- Filename    :    name: main.c
--                  created_by: carlos
--                  date_created: Jun 12, 2013
--------------------------------------------------------------------------------------------------
-- File Purpose: Main application to run remote stub
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
-- TODO
--
--------------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <unistd.h>

#include "hftUtils_types.h"

/* Strategy thread control (used by main, don't use at user strategy functions) */
extern int32 strategyStart (void);
extern int32 strategyStop  (void);

/* Parameters management from main loop (don't needed by user) */
extern int32 checkParams (int argc, char* argv[]);

/* Static data */
static boolean exitProgram = false;


/* Main function definition: don touch it */
int main(int argc, char* argv[])
{
    // main application
    int32  result = OK;

    /* Get parameters and check it */
    /* Main parameters are:
     * First: accounting Id identifier (supplied by your manager)
     * Second: IP address of core machine in IPv4 dot notation
     * Third: Port number of core machine server (1234 as default)
     */
    if (checkParams (argc, argv) == OK)
    {

        /* Launch strategy thread and memory map initialization */
        result = strategyStart ();

        if (result == OK)
        {

            /* If strategy was initialized properly stays in this loop as supervision */
            while (!exitProgram)
            {
                /* Watch dog can use 'exitProgram' to finish the program */

                /* Watch dog supervision */
                /* Wait for 1 seconds to evaluate watch dog again */
                usleep (1000000);
            }

            /* If exit is called from this thread, stops strategy before exiting */
            strategyStop ();
        }
        else
        {
            fprintf (stderr, "remoteStub: ERROR starting strategy thread (result = %d)\n", result);
        }
    }

    return result;
}

/* terminate program */
void exitStub (void)
{
    exitProgram = true;

    return;
}


