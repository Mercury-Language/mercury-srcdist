/*
** Automatically generated from `string_encoding.m'
** by the Mercury compiler,
** version rotd-2024-07-21
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


// :- module backend_libs.string_encoding.
// :- implementation.

/*
INIT mercury__backend_libs__string_encoding__init
ENDINIT
*/

#include "backend_libs.string_encoding.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"










#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


void MR_CALL 
backend_libs__string_encoding__det_from_code_unit_list_in_encoding_allow_ill_formed_3_p_0(
  MR_Word Encoding_4,
  MR_Word CodeUnits_5,
  MR_String * String_6)
{
  MR_bool succeeded;
  MR_String StringPrime_7;

  succeeded = backend_libs__string_encoding__from_code_unit_list_in_encoding_allow_ill_formed_3_p_0(Encoding_4, CodeUnits_5, &StringPrime_7);
  if (succeeded)
    *String_6 = StringPrime_7;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.string_encoding.det_from_code_unit_list_in_encoding_allow_ill_formed\'/3", (MR_String) "from_code_unit_list_in_encoding_allow_ill_formed failed");
      return;
    }
}

MR_bool MR_CALL 
backend_libs__string_encoding__from_code_unit_list_in_encoding_allow_ill_formed_3_p_0(
  MR_Word Encoding_4,
  MR_Word CodeUnits_5,
  MR_String * String_6)
{
  MR_bool succeeded;

  switch (Encoding_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.string_encoding.from_code_unit_list_in_encoding_allow_ill_formed\'/3", (MR_String) "utf16 is nyi");
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word InternalEncoding_7;

        InternalEncoding_7 = mercury__string__internal_string_encoding_0_f_0();
        switch (InternalEncoding_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.string_encoding.from_code_unit_list_in_encoding_allow_ill_formed\'/3", (MR_String) "implementing on utf16 is nyi");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 0:
            succeeded = mercury__string__from_code_unit_list_allow_ill_formed_2_p_0(CodeUnits_5, String_6);
            break;
        }
      }
      break;
  }
  return succeeded;
}

void MR_CALL 
backend_libs__string_encoding__det_from_code_unit_list_in_encoding_3_p_0(
  MR_Word Encoding_4,
  MR_Word CodeUnits_5,
  MR_String * String_6)
{
  MR_bool succeeded;
  MR_String StringPrime_7;

  switch (Encoding_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      succeeded = mercury__string__from_utf16_code_unit_list_2_p_0(CodeUnits_5, &StringPrime_7);
      break;
    case (MR_Integer) 0:
      succeeded = mercury__string__from_utf8_code_unit_list_2_p_0(CodeUnits_5, &StringPrime_7);
      break;
  }
  if (succeeded)
    *String_6 = StringPrime_7;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.string_encoding.det_from_code_unit_list_in_encoding\'/3", (MR_String) "from_code_unit_list_in_encoding failed");
      return;
    }
}

MR_bool MR_CALL 
backend_libs__string_encoding__from_code_unit_list_in_encoding_3_p_0(
  MR_Word Encoding_4,
  MR_Word CodeUnits_5,
  MR_String * String_6)
{
  MR_bool succeeded;

  switch (Encoding_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      succeeded = mercury__string__from_utf16_code_unit_list_2_p_0(CodeUnits_5, String_6);
      break;
    case (MR_Integer) 0:
      succeeded = mercury__string__from_utf8_code_unit_list_2_p_0(CodeUnits_5, String_6);
      break;
  }
  return succeeded;
}

void MR_CALL 
backend_libs__string_encoding__to_code_unit_list_in_encoding_3_p_0(
  MR_Word Encoding_4,
  MR_String String_5,
  MR_Word * CodeUnits_6)
{
  switch (Encoding_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__string__to_utf16_code_unit_list_2_p_0(String_5, CodeUnits_6);
      break;
    case (MR_Integer) 0:
      mercury__string__to_utf8_code_unit_list_2_p_0(String_5, CodeUnits_6);
      break;
  }
}

MR_Word MR_CALL 
backend_libs__string_encoding__target_string_encoding_1_f_0(
  MR_Word Target_3)
{
  MR_Word Encoding_4;

  switch (Target_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Encoding_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      Encoding_4 = (MR_Integer) 1;
      break;
  }
  return Encoding_4;
}

void MR_CALL 
backend_libs__string_encoding__target_char_range_3_p_0(
  MR_Word _Target_4,
  MR_Integer * Min_5,
  MR_Integer * Max_6)
{
  backend_libs__string_encoding__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_99_104_97_114_95_114_97_110_103_101_95_95_91_49_93_95_48_3_p_0(Min_5, Max_6);
}

void MR_CALL 
backend_libs__string_encoding__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_99_104_97_114_95_114_97_110_103_101_95_95_91_49_93_95_48_3_p_0(
  MR_Integer * Min_5,
  MR_Integer * Max_6)
{
  *Min_5 = (MR_Integer) 0;
  *Max_6 = (MR_Integer) 1114111;
}

void mercury__backend_libs__string_encoding__init(void)
{
}

void mercury__backend_libs__string_encoding__init_type_tables(void)
{
}

void mercury__backend_libs__string_encoding__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__string_encoding__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module backend_libs.string_encoding.
