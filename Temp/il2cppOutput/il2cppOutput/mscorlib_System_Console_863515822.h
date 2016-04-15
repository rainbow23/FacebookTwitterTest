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
// System.IO.TextReader
struct TextReader_t1262698173_0;
// System.Text.Encoding
struct Encoding_t93655731_0;

#include "mscorlib_System_Object1919833728.h"

// System.Console
struct  Console_t_863515822_0  : public Object_t
{
};
struct Console_t_863515822_0_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t689662915_0 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t689662915_0 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1262698173_0 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t93655731_0 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t93655731_0 * ___outputEncoding_4;
};
