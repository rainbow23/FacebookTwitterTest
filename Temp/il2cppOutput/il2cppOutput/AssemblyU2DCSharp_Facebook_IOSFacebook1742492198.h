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
// Facebook.InitDelegate
struct InitDelegate_t_1491310397_0;
// Facebook.FacebookDelegate
struct FacebookDelegate_t_1539649159_0;

#include "IFacebook_Facebook_AbstractFacebook_1272854506.h"

// Facebook.IOSFacebook
struct  IOSFacebook_t1742492198_0  : public AbstractFacebook_t_1272854506_0
{
	// System.Int32 Facebook.IOSFacebook::dialogMode
	int32_t ___dialogMode_12;
	// Facebook.InitDelegate Facebook.IOSFacebook::externalInitDelegate
	InitDelegate_t_1491310397_0 * ___externalInitDelegate_13;
	// Facebook.FacebookDelegate Facebook.IOSFacebook::deepLinkDelegate
	FacebookDelegate_t_1539649159_0 * ___deepLinkDelegate_14;
};
