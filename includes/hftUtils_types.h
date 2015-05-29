/*--------------------------------------------------------------------------------------------------
 -- Project     :    HFT_Suite
 -- Filename    :    name: HFT_types.h
 --                  created_by: carlos
 --                  date_created: Feb 5, 2013
 --------------------------------------------------------------------------------------------------
 -- File Purpose: HFT data types
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
 -- V1.0
 --
 --------------------------------------------------------------------------------------------------*/

#ifndef HFTUTILS_TYPES_H_
#define HFTUTILS_TYPES_H_

// typedef for basic types
typedef long int int64;
typedef int int32;
typedef short int int16;
typedef char int8;

typedef unsigned long int uint64;
typedef unsigned int uint32;
typedef short unsigned int uint16;
typedef unsigned char uint8;

typedef unsigned char byte;
typedef char character;

typedef double number;

typedef uint16 idtype;

typedef byte boolean;

typedef int socket_t;

#define true 1
#define false (!(true))

#define OK 0
#define ERROR (-1)
#define INVALID_ID 0


#ifndef NULL
#define NULL 0
#endif

#define SLEEP_DEFAULT_uTIME 1

/**
 * @struct time_t
 * @brief  Time struct (for secs and microsecs) and typed as time_t
 */
typedef struct _timetype_t
{
    uint32 sec;  /**< time in secs in unix mode */
    uint32 usec; /**< time in usecs resolution for the current sec*/
}
timetype_t;


typedef struct _timestruct_t
{
    uint16 year;
    uint16 month;
    uint16 day;
    uint16 hour;
    uint16 min;
    uint16 sec;
    uint16 dayofweek;
    uint16 dayofyear;
}
timestruct_t;

#endif /* HFTUTILS_TYPES_H_ */
