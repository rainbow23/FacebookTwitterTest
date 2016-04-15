#pragma once

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

#include "mscorlib_System_Security_Cryptography_AsymmetricSi1537773533.h"

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t860974151_0  : public AsymmetricSignatureFormatter_t1537773533_0
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t506645067_0 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t_1917115060_0 * ___hash_1;
};
