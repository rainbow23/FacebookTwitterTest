#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t1569193387_0;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t_2071804368_0;

#include "mscorlib_System_Object1919833728.h"
#include "mscorlib_System_DateTime_173468004.h"

// Mono.Security.X509.X509Crl/X509CrlEntry
struct  X509CrlEntry_t_1906958790_0  : public Object_t
{
	// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::sn
	ByteU5BU5D_t1569193387_0* ___sn_0;
	// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::revocationDate
	DateTime_t_173468004_0  ___revocationDate_1;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::extensions
	X509ExtensionCollection_t_2071804368_0 * ___extensions_2;
};
