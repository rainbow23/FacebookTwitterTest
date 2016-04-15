#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Globalization.CompareInfo
struct CompareInfo_t_1685831899_0;

#include "mscorlib_System_StringComparer1362492675.h"

// System.CultureAwareComparer
struct  CultureAwareComparer_t_2027496040_0  : public StringComparer_t1362492675_0
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t_1685831899_0 * ____compareInfo_5;
};
