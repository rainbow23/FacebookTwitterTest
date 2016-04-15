#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t_171208140_0;
// System.Int32[]
struct Int32U5BU5D_t_1293503665_0;
// System.Object
struct Object_t;

#include "mscorlib_System_ValueType_1588892310.h"
#include "mscorlib_System_TimeSpan1786341660.h"
#include "mscorlib_System_DateTimeKind1365220554.h"
#include "mscorlib_System_DateTime_173468004.h"

// System.DateTime
struct  DateTime_t_173468004_0 
{
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t1786341660_0  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;
};
struct DateTime_t_173468004_0_StaticFields{
	// System.DateTime System.DateTime::MaxValue
	DateTime_t_173468004_0  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t_173468004_0  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t_171208140_0* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t_171208140_0* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t_171208140_0* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t_171208140_0* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t_171208140_0* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t_171208140_0* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t_171208140_0* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t_1293503665_0* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t_1293503665_0* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	Object_t * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;
};
