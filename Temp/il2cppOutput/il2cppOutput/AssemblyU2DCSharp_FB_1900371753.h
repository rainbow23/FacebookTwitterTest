#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Facebook.InitDelegate
struct InitDelegate_t_1491310397_0;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t_949090134_0;
// Facebook.IFacebook
struct IFacebook_t_113896638_0;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_ScriptableObject_1571582451.h"

// FB
struct  FB_t_1900371753_0  : public ScriptableObject_t_1571582451_0
{
};
struct FB_t_1900371753_0_StaticFields{
	// Facebook.InitDelegate FB::OnInitComplete
	InitDelegate_t_1491310397_0 * ___OnInitComplete_1;
	// Facebook.HideUnityDelegate FB::OnHideUnity
	HideUnityDelegate_t_949090134_0 * ___OnHideUnity_2;
	// Facebook.IFacebook FB::facebook
	Object_t * ___facebook_3;
	// System.String FB::authResponse
	String_t* ___authResponse_4;
	// System.Boolean FB::isInitCalled
	bool ___isInitCalled_5;
	// System.String FB::appId
	String_t* ___appId_6;
	// System.Boolean FB::cookie
	bool ___cookie_7;
	// System.Boolean FB::logging
	bool ___logging_8;
	// System.Boolean FB::status
	bool ___status_9;
	// System.Boolean FB::xfbml
	bool ___xfbml_10;
	// System.Boolean FB::frictionlessRequests
	bool ___frictionlessRequests_11;
};
