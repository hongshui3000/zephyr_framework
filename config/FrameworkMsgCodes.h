//=============================================================================
//! @file FrameworkMsgCodes.h
//!
//! @brief Defines the couple of messages reserved by Framework.
//! Application message types are also define here.
//!
//! @copyright Copyright 2020 Laird
//!            All Rights Reserved.
//=============================================================================

#ifndef FRAMEWORK_MSG_CODES_H
#define FRAMEWORK_MSG_CODES_H

#ifdef __cplusplus
extern "C" {
#endif

//=============================================================================
// Global Constants, Macros and Type Definitions
//=============================================================================

typedef enum FwkMsgCodeEnum {
	// Reserved by Framework (DO NOT DELETE)
	FMC_INVALID = 0,
	FMC_PERIODIC,
	FMC_SOFTWARE_RESET,
	FMC_WATCHDOG_CHALLENGE,
	FMC_WATCHDOG_RESPONSE,

	// Application Specific

	// last
	NUMBER_OF_FRAMEWORK_MSG_CODES
} FwkMsgCode_t;

//=============================================================================
// Global Data Definitions
//=============================================================================
// NA

//=============================================================================
// Global Function Prototypes
//=============================================================================
// NA

#ifdef __cplusplus
}
#endif

#endif

// end