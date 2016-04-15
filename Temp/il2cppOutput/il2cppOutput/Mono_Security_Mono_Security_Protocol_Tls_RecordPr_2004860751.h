#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.ManualResetEvent
struct ManualResetEvent_t_2139627160_0;
// System.IO.Stream
struct Stream_t_1021953369_0;
// Mono.Security.Protocol.Tls.Context
struct Context_t_1281777657_0;

#include "mscorlib_System_Object1919833728.h"

// Mono.Security.Protocol.Tls.RecordProtocol
struct  RecordProtocol_t_2004860751_0  : public Object_t
{
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol::innerStream
	Stream_t_1021953369_0 * ___innerStream_1;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::context
	Context_t_1281777657_0 * ___context_2;
};
struct RecordProtocol_t_2004860751_0_StaticFields{
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol::record_processing
	ManualResetEvent_t_2139627160_0 * ___record_processing_0;
};
