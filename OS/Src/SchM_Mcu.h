#ifndef SCHM_MCU_H
#define SCHM_MCU_H
/*============================================================================*
 * \b Application:        Mcu \n 
 * \b Target:             target independent \n 
 * \b Compiler  :         compiler independent \n 
 * \b Module:             schm_mcu.h \n 
 * \b File-Revision:      1.0.4 \n
 * \b Changeable-by-user: No \n
 * \b Module-Owner:       SSA_Team \n
 * \b Generated on:       2011/03/24 18:28:07 \n
 * \b Classification:     CONFIDENTIAL \n
\*============================================================================*/
/**\file    
 *
 * BSW Scheduler header file.The BSW Scheduler provides services (APIs)
 * for all other BSW modules, except for the OS. Hence, the BSW Scheduler
 * realizes functionality for those BSW modules
 * This file is generated by the SCG framework
 *
 * The configuration parameters was checked statically for correctness
 * by configuration editor tool and code generator. DO NOT EDIT THIS FILE MANUALLY!!! 
 * 
 * \Requirements \n
 * reqtrace{SSA-SDD-SCHM-22-1}{SSA-REQ-SCHM-78-1}
 */

/*============================================================================*
 *
 * Copyright 2010 Delphi Technologies, Inc., All Rights Reserved
 * It is not allowed to reproduce or utilize parts of this document in any form
 * or by any means, including photocopying and microfilm, without permission in
 * writing by Delphi Electronics & Safety Division.
 *
 *============================================================================*/

/*============================================================================*\
 * PREPROCESSOR DIRECTIVES
\*============================================================================*/

/* INCLUDE DIRECTIVES FOR STANDARD HEADERS -----------------------------------*/
#include "OS_Cfg.h"

/* INCLUDE DIRECTIVES FOR OTHER HEADERS --------------------------------------*/

/* EXPORTED DEFINES FOR CONSTANTS --------------------------------------------*/

#define SCHM_MCU_SW_MAJOR_VERSION 1u
#define SCHM_MCU_SW_MINOR_VERSION 0u
#define SCHM_MCU_SW_PATCH_VERSION 4u

#define SCHM_MCU_AR_MAJOR_VERSION 2u
#define SCHM_MCU_AR_MINOR_VERSION 1u
#define SCHM_MCU_AR_PATCH_VERSION 0u

#ifndef SCHM_E_OK
/**
 * \details Return value of SchM_ReturnType.
 *          SCHM_E_OK - no errors occured. 
 *
 * \Requirements \n
 * reqtrace{SSA-SDD-SCHM-11-1}{SSA-REQ-SCHM-110-1}
 */ 
 #define SCHM_E_OK       ((uint8)0x00)
 typedef uint8 SchM_ReturnType;
#endif
#ifndef SCHM_E_LIMIT
/**
 * \details Return value of SchM_ReturnType.
 *          SCHM_E_LIMIT - an internal limit has been exceeded. 
 *
 * \Requirements \n
 * reqtrace{SSA-SDD-SCHM-12-1}{SSA-REQ-SCHM-110-1}
 */ 
 #define SCHM_E_LIMIT    ((uint8)0x04)
#endif
#ifndef SCHM_E_NOFUNC
/**
 * \details Return value of SchM_ReturnType.
 *          SCHM_E_NOFUNC - requsted service has not the desired effect. 
 *
* \Requirements \n
 * reqtrace{SSA-SDD-SCHM-13-1}{SSA-REQ-SCHM-110-1}
 */ 
 #define SCHM_E_NOFUNC   ((uint8)0x05)
#endif
#ifndef SCHM_E_STATE
/**
 * \details Return value of SchM_ReturnType.
 *          SCHM_E_STATE - requsted service is already in use. 
 *
 * \Requirements \n
 * reqtrace{SSA-SDD-SCHM-14-1}{SSA-REQ-SCHM-110-1}
 */ 
 #define SCHM_E_STATE    ((uint8)0x07)
#endif

/*============================================================================*\
 * Sporadic Event literals 
\*============================================================================*/


/*============================================================================*\
 * Activation Point literals 
\*============================================================================*/


/*============================================================================*\
 * Cancelation Point literals 
\*============================================================================*/


/*============================================================================*\
 * Exclusive area literals 
\*============================================================================*/


/*============================================================================*\
 * EXPORTED TYPEDEF DECLARATIONS
\*============================================================================*/

/* ENUMS ---------------------------------------------------------------------*/

/* STRUCTS -------------------------------------------------------------------*/

/* UNIONS --------------------------------------------------------------------*/

/* OTHER TYPEDEFS ------------------------------------------------------------*/

/*============================================================================*\
* EXPORTED OBJECT DECLARATIONS
\*============================================================================*/


/*============================================================================*\
* EXPORTED FUNCTIONS PROTOTYPES
\*============================================================================*/

/*============================================================================*\
* EXPORTED FUNCTION-LIKE-MACROS and INLINE FUNCTIONS
\*============================================================================*/


#endif
