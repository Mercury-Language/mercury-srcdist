/*
** Automatically generated from `indent.m'
** by the Mercury compiler,
** version rotd-2023-05-10
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


// :- module libs.indent.
// :- implementation.

/*
INIT mercury__libs__indent__init
ENDINIT
*/

#include "libs.indent.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"






struct libs__indent__vector_common_type_1_0_s {
  const MR_String libs__indent__vector_common_type_1_0__vct_1_f_0;
};

static /* final */ const struct libs__indent__vector_common_type_1_0_s libs__indent_vector_common_1[16];




static /* final */ const struct libs__indent__vector_common_type_1_0_s libs__indent_vector_common_1[16] = {
  /* row   0 */   { (MR_String) "" },
  /* row   1 */   { (MR_String) "  " },
  /* row   2 */   { (MR_String) "    " },
  /* row   3 */   { (MR_String) "      " },
  /* row   4 */   { (MR_String) "        " },
  /* row   5 */   { (MR_String) "          " },
  /* row   6 */   { (MR_String) "            " },
  /* row   7 */   { (MR_String) "              " },
  /* row   8 */   { (MR_String) "                " },
  /* row   9 */   { (MR_String) "                  " },
  /* row  10 */   { (MR_String) "                    " },
  /* row  11 */   { (MR_String) "                      " },
  /* row  12 */   { (MR_String) "                        " },
  /* row  13 */   { (MR_String) "                          " },
  /* row  14 */   { (MR_String) "                            " },
  /* row  15 */   { (MR_String) "                              " },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



void MR_CALL 
libs__indent__write_indent2_4_p_0(
  MR_Word Stream_5,
  MR_Integer Indent_6)
{
  MR_String Str_8;

  Str_8 = libs__indent__indent2_string_1_f_0(Indent_6);
  mercury__io__write_string_4_p_0(Stream_5, Str_8);
}

MR_String MR_CALL 
libs__indent__indent2_string_1_f_0(
  MR_Integer Indent_3)
{
  MR_bool succeeded;
  MR_String Str_4;
  MR_String StrPrime_5;

  if ((((MR_Unsigned) Indent_3) <= ((MR_Unsigned) 15)))
  {
    StrPrime_5 = ((&libs__indent_vector_common_1[0 + Indent_3]))->libs__indent__vector_common_type_1_0__vct_1_f_0;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
    Str_4 = StrPrime_5;
  else
  {
    MR_String Var_7;
    MR_Integer Var_8 = (MR_Integer) ((MR_Unsigned) Indent_3 - (MR_Unsigned) 16);

    Var_7 = libs__indent__indent2_string_1_f_0(Var_8);
    Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "                                ", Var_7);
  }
  return Str_4;
}

MR_Integer MR_CALL 
libs__indent__indent2_increment_0_f_0(void)
{
  return (MR_Integer) 2;
}

void mercury__libs__indent__init(void)
{
}

void mercury__libs__indent__init_type_tables(void)
{
}

void mercury__libs__indent__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__indent__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.indent.
