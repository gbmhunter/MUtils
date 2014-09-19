//!
//! @file 			BitMacroTests.cpp
//! @author 		Geoffrey Hunter <gbmhunter@gmail.com> (www.mbedded.ninja)
//! @created		2014-09-19
//! @last-modified 	2014-09-19
//! @brief 			Contains unit tests which makes sure the bit macros work as expected.
//! @details
//!					See README.rst in root dir for more info.

//===== SYSTEM LIBRARIES =====//
#include <cstdint>	// uint32_t, e.t.c

//====== USER LIBRARIES =====//
#include "MUnitTest/api/MUnitTestApi.hpp"

//===== USER SOURCE =====//
#include "../api/MUtilsApi.hpp"


namespace MUtilsTestsNs
{

	MTEST(BitMacroTest1)
	{
		// 0xB3 = 0b10110011
		CHECK_EQUAL(BITS_TO_NUM(0xB3, 4, 2), 3);
	}

	MTEST(BitMacroTest2)
	{
		// 0xB3 = 0b10110011
		CHECK_EQUAL(BITS_TO_NUM(0xB3, 7, 1), 1);
	}

	MTEST(BitMacroTest3)
	{
		// 0xB3 = 0b10110011
		CHECK_EQUAL(BITS_TO_NUM(0xB3, 5, 3), 5);
	}

	MTEST(BitMacroTest4)
	{
		// 0xB3 = 0b10110011
		CHECK_EQUAL(BITS_TO_NUM(0xB3, 0, 1), 1);
	}

	MTEST(BitMacroTest5)
	{
		// 0xB3 = 0b10110011
		CHECK_EQUAL(BITS_TO_NUM(0xB3, 0, 2), 3);
	}

	MTEST(BitMacroTest6)
	{
		// 0xB3 = 0b10110011
		// Lets convert the whole byte to a number, so
		// it should really just equal itself
		CHECK_EQUAL(BITS_TO_NUM(0xB3, 0, 8), 0xB3);
	}

	MTEST(BitMacroTest7)
	{
		// Lets convert the whole byte to a number, so
		// it should really just equal itself
		CHECK_EQUAL(BITS_TO_NUM(0x0, 0, 3), 0);
	}

	MTEST(BitMacroTest8)
	{
		// Lets convert the whole byte to a number, so
		// it should really just equal itself
		CHECK_EQUAL(BITS_TO_NUM(0xFF, 1, 3), 7);
	}

} // namespace MUtilsTestsNs
