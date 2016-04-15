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
// FBSettings
struct FBSettings_t_655295974_0;
// System.String[]
struct StringU5BU5D_t_171208140_0;

#include "UnityEngine_UnityEngine_ScriptableObject_1571582451.h"

// FBSettings
struct  FBSettings_t_655295974_0  : public ScriptableObject_t_1571582451_0
{
	// System.Int32 FBSettings::selectedAppIndex
	int32_t ___selectedAppIndex_5;
	// System.String[] FBSettings::appIds
	StringU5BU5D_t_171208140_0* ___appIds_6;
	// System.String[] FBSettings::appLabels
	StringU5BU5D_t_171208140_0* ___appLabels_7;
	// System.Boolean FBSettings::cookie
	bool ___cookie_8;
	// System.Boolean FBSettings::logging
	bool ___logging_9;
	// System.Boolean FBSettings::status
	bool ___status_10;
	// System.Boolean FBSettings::xfbml
	bool ___xfbml_11;
	// System.Boolean FBSettings::frictionlessRequests
	bool ___frictionlessRequests_12;
	// System.String FBSettings::iosURLSuffix
	String_t* ___iosURLSuffix_13;
};
struct FBSettings_t_655295974_0_StaticFields{
	// FBSettings FBSettings::instance
	FBSettings_t_655295974_0 * ___instance_4;
};
