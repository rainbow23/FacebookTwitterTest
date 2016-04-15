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
// Facebook.HttpMethod
struct HttpMethod_t1081556247_0;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t_1640843327_0;
// UnityEngine.WWWForm
struct WWWForm_t_251098350_0;
// Facebook.FacebookDelegate
struct FacebookDelegate_t_1539649159_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// Facebook.AsyncRequestString
struct  AsyncRequestString_t_2144043534_0  : public MonoBehaviour_t_92453903_0
{
	// System.String Facebook.AsyncRequestString::url
	String_t* ___url_1;
	// Facebook.HttpMethod Facebook.AsyncRequestString::method
	HttpMethod_t1081556247_0 * ___method_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.AsyncRequestString::formData
	Dictionary_2_t_1640843327_0 * ___formData_3;
	// UnityEngine.WWWForm Facebook.AsyncRequestString::query
	WWWForm_t_251098350_0 * ___query_4;
	// Facebook.FacebookDelegate Facebook.AsyncRequestString::callback
	FacebookDelegate_t_1539649159_0 * ___callback_5;
};
