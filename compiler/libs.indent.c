/*
** Automatically generated from `indent.m'
** by the Mercury compiler,
** version rotd-2026-01-05
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
#include "uint.mih"
#include "univ.mih"
#include "string.builder.mih"




static MR_bool MR_CALL 
libs__indent____Unify____indent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__indent____Compare____indent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);







#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


const MR_TypeCtorInfo_Struct libs__indent__libs__indent__type_ctor_info_indent_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__indent____Unify____indent_0_0_10001)),
  ((MR_Box) (libs__indent____Compare____indent_0_0_10001)),
  (MR_String) "libs.indent",
  (MR_String) "indent",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
libs__indent____Compare____indent_0_0(
  MR_Word * HeadVar__1_1,
  MR_Unsigned HeadVar__2_2,
  MR_Unsigned HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Unsigned Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Unsigned Cast_HeadVar2_5 = HeadVar__3_3;

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__indent____Unify____indent_0_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Unsigned Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Unsigned Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

MR_String MR_CALL 
libs__indent__add_indent2_prefix_2_f_0(
  MR_Unsigned Indent_4,
  MR_String Str0_5)
{
  MR_String Str_6;
  MR_String Var_7;

  Var_7 = libs__indent__indent2_string_1_f_0(Indent_4);
  Str_6 = mercury__string__f_43_43_2_f_0(Var_7, Str0_5);
  return Str_6;
}

void MR_CALL 
libs__indent__format_indent2_3_p_0(
  MR_Unsigned Indent_4,
  MR_Word STATE_VARIABLE_State_0_7,
  MR_Word * STATE_VARIABLE_State_8)
{
  MR_String Str_6;

  Str_6 = libs__indent__indent2_string_1_f_0(Indent_4);
  mercury__string__builder__append_string_3_p_0(Str_6, STATE_VARIABLE_State_0_7, STATE_VARIABLE_State_8);
}

void MR_CALL 
libs__indent__write_indent2_4_p_0(
  MR_Word Stream_5,
  MR_Unsigned Indent_6)
{
  MR_String Str_8;

  Str_8 = libs__indent__indent2_string_1_f_0(Indent_6);
  mercury__io__write_string_4_p_0(Stream_5, Str_8);
}

MR_String MR_CALL 
libs__indent__indent2_string_1_f_0(
  MR_Unsigned Indent_3)
{
  MR_bool succeeded;
  MR_String Str_4;
  MR_String StrPrime_5;

  switch (Indent_3) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Unsigned) 0U:
      {
        StrPrime_5 = (MR_String) "";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Unsigned) 1U:
      {
        StrPrime_5 = (MR_String) "  ";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Unsigned) 2U:
      {
        StrPrime_5 = (MR_String) "    ";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Unsigned) 3U:
      {
        StrPrime_5 = (MR_String) "      ";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Unsigned) 4U:
      {
        StrPrime_5 = (MR_String) "        ";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Unsigned) 5U:
      {
        StrPrime_5 = (MR_String) "          ";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Unsigned) 6U:
      {
        StrPrime_5 = (MR_String) "            ";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Unsigned) 7U:
      {
        StrPrime_5 = (MR_String) "              ";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Unsigned) 8U:
      {
        StrPrime_5 = (MR_String) "                ";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Unsigned) 9U:
      {
        StrPrime_5 = (MR_String) "                  ";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Unsigned) 10U:
      {
        StrPrime_5 = (MR_String) "                    ";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Unsigned) 11U:
      {
        StrPrime_5 = (MR_String) "                      ";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Unsigned) 12U:
      {
        StrPrime_5 = (MR_String) "                        ";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Unsigned) 13U:
      {
        StrPrime_5 = (MR_String) "                          ";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Unsigned) 14U:
      {
        StrPrime_5 = (MR_String) "                            ";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Unsigned) 15U:
      {
        StrPrime_5 = (MR_String) "                              ";
        succeeded = MR_TRUE;
      }
      break;
  }
  if (succeeded)
    Str_4 = StrPrime_5;
  else
  {
    succeeded = (Indent_3 > (MR_Unsigned) 0U);
    if (succeeded)
    {
      MR_String Var_8;
      MR_Unsigned Var_9 = (Indent_3 - (MR_Unsigned) 16U);

      Var_8 = libs__indent__indent2_string_1_f_0(Var_9);
      Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "                                ", Var_8);
    }
    else
      Str_4 = (MR_String) "";
  }
  return Str_4;
}

MR_Unsigned MR_CALL 
libs__indent__indent2_increment_0_f_0(void)
{
  return (MR_Unsigned) 2U;
}

static MR_bool MR_CALL 
libs__indent____Unify____indent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__indent____Unify____indent_0_0(((MR_Unsigned) (wrapper_arg_1)), ((MR_Unsigned) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__indent____Compare____indent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__indent____Compare____indent_0_0(&conv0_HeadVar__1_1, ((MR_Unsigned) (wrapper_arg_2)), ((MR_Unsigned) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__libs__indent__init(void)
{
}

void mercury__libs__indent__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&libs__indent__libs__indent__type_ctor_info_indent_0);
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
