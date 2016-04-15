﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.RSA
struct RSA_t506645067_0;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t_1917115060_0;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1203348336_0;

#include "mscorlib_System_Security_Cryptography_AsymmetricS_1308849220.h"

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct  RSASslSignatureDeformatter_t_687692283_0  : public AsymmetricSignatureDeformatter_t_1308849220_0
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::key
	RSA_t506645067_0 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::hash
	HashAlgorithm_t_1917115060_0 * ___hash_1;
};
struct RSASslSignatureDeformatter_t_687692283_0_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::<>f__switch$map15
	Dictionary_2_t1203348336_0 * ___U3CU3Ef__switchU24map15_2;
};
