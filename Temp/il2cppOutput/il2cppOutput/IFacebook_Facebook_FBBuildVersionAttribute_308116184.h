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

#include "mscorlib_System_Attribute_470352425.h"
#include "mscorlib_System_DateTime_173468004.h"

// Facebook.FBBuildVersionAttribute
struct  FBBuildVersionAttribute_t_308116184_0  : public Attribute_t_470352425_0
{
	// System.DateTime Facebook.FBBuildVersionAttribute::buildDate
	DateTime_t_173468004_0  ___buildDate_0;
	// System.String Facebook.FBBuildVersionAttribute::buildHash
	String_t* ___buildHash_1;
	// System.String Facebook.FBBuildVersionAttribute::buildVersion
	String_t* ___buildVersion_2;
	// System.String Facebook.FBBuildVersionAttribute::sdkVersion
	String_t* ___sdkVersion_3;
};
