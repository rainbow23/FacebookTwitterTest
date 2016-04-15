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
// Facebook.FacebookDelegate
struct FacebookDelegate_t_1539649159_0;
// Facebook.InitDelegate
struct InitDelegate_t_1491310397_0;

#include "IFacebook_Facebook_AbstractFacebook_1272854506.h"

// Facebook.AndroidFacebook
struct  AndroidFacebook_t1205084424_0  : public AbstractFacebook_t_1272854506_0
{
	// System.String Facebook.AndroidFacebook::keyHash
	String_t* ___keyHash_14;
	// Facebook.FacebookDelegate Facebook.AndroidFacebook::deepLinkDelegate
	FacebookDelegate_t_1539649159_0 * ___deepLinkDelegate_15;
	// Facebook.InitDelegate Facebook.AndroidFacebook::onInitComplete
	InitDelegate_t_1491310397_0 * ___onInitComplete_16;
};
