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
// System.Collections.Generic.List`1<Facebook.FacebookDelegate>
struct List_1_t2041708579_0;
// System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>
struct Dictionary_2_t414354054_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "mscorlib_System_DateTime_173468004.h"

// Facebook.AbstractFacebook
struct  AbstractFacebook_t_1272854506_0  : public MonoBehaviour_t_92453903_0
{
	// System.Boolean Facebook.AbstractFacebook::isInitialized
	bool ___isInitialized_2;
	// System.Boolean Facebook.AbstractFacebook::isLoggedIn
	bool ___isLoggedIn_3;
	// System.String Facebook.AbstractFacebook::userId
	String_t* ___userId_4;
	// System.String Facebook.AbstractFacebook::accessToken
	String_t* ___accessToken_5;
	// System.DateTime Facebook.AbstractFacebook::accessTokenExpiresAt
	DateTime_t_173468004_0  ___accessTokenExpiresAt_6;
	// System.Boolean Facebook.AbstractFacebook::limitEventUsage
	bool ___limitEventUsage_7;
	// System.Collections.Generic.List`1<Facebook.FacebookDelegate> Facebook.AbstractFacebook::authDelegates
	List_1_t2041708579_0 * ___authDelegates_8;
	// System.Int32 Facebook.AbstractFacebook::nextAsyncId
	int32_t ___nextAsyncId_9;
	// System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate> Facebook.AbstractFacebook::facebookDelegates
	Dictionary_2_t414354054_0 * ___facebookDelegates_10;
};
