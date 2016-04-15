#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Facebook.AbstractFacebook
struct AbstractFacebook_t_1272854506_0;
// Facebook.FacebookDelegate
struct FacebookDelegate_t_1539649159_0;

#include "IFacebook_Facebook_AbstractFacebook_1272854506.h"

// Facebook.EditorFacebook
struct  EditorFacebook_t24311360_0  : public AbstractFacebook_t_1272854506_0
{
	// Facebook.AbstractFacebook Facebook.EditorFacebook::fb
	AbstractFacebook_t_1272854506_0 * ___fb_11;
	// Facebook.FacebookDelegate Facebook.EditorFacebook::loginCallback
	FacebookDelegate_t_1539649159_0 * ___loginCallback_12;
};
