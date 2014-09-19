//!
//! @file				BitMacros.hpp
//! @author				Geoffrey Hunter <gbmhunter@gmail.com> (www.mbedded.ninja)
//! @created			2014-09-19
//! @last-modified		2014-09-19
//! @brief
//! @details
//!						See README.rst in repo root dir for more info.

#ifndef __cplusplus
	#error Please build with C++ compiler
#endif

//===============================================================================================//
//======================================== HEADER GUARD =========================================//
//===============================================================================================//

#ifndef MUTILS_BIT_MACROS_H
#define MUTILS_BIT_MACROS_H

//===============================================================================================//
//==================================== FORWARD DECLARATION ======================================//
//===============================================================================================//

// none

//===============================================================================================//
//========================================== INCLUDES ===========================================//
//===============================================================================================//

// none

//! @brief		Converts selected bits from a integer into it's number representation.
//! @details	binarySource is the source number to extract bits from, startBit is the 0-indexed start bit position to extract the number from, and numBits is the number of bits, from the startBit and going left, to include in the number conversion.
//!				For example, BITS_TO_NUM(0xB3, 5, 3) will extract 3-bits from 0xB3, starting at bit position 5 (so will extract bits 5, 6 and 7) and then convert them into a number. 0xB3 is 0b10110011, bits 5-7 are 0b101, and BITS_TO_NUM() will return the number 5.
#define BITS_TO_NUM(binarySource, startBit, numBits)	\
	((binarySource >> startBit) & ((1 << numBits) - 1))


#endif	// #ifndef MUTILS_BIT_MACROS_H

// EOF
