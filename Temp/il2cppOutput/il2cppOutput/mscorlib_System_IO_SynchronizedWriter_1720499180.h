#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextWriter
struct TextWriter_t689662915_0;

#include "mscorlib_System_IO_TextWriter689662915.h"

// System.IO.SynchronizedWriter
struct  SynchronizedWriter_t_1720499180_0  : public TextWriter_t689662915_0
{
	// System.IO.TextWriter System.IO.SynchronizedWriter::writer
	TextWriter_t689662915_0 * ___writer_2;
	// System.Boolean System.IO.SynchronizedWriter::neverClose
	bool ___neverClose_3;
};
