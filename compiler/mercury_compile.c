/*
** Automatically generated from `mercury_compile.m'
** by the Mercury compiler,
** version rotd-2023-10-13
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module mercury_compile.
// :- implementation.

/*
INIT mercury__mercury_compile__init
ENDINIT
*/

#include "mercury_compile.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "top_level.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "libs.globals.mih"
#include "top_level.mercury_compile_main.mih"










#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


void MR_CALL 
main_2_p_0(void)
{
  top_level__mercury_compile_main__real_main_2_p_0();
}

void mercury__mercury_compile__init(void)
{
}

void mercury__mercury_compile__init_type_tables(void)
{
}

void mercury__mercury_compile__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mercury_compile__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mercury_compile.
