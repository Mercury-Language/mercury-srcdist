/*
** Automatically generated from `parse_tree_output.m'
** by the Mercury compiler,
** version rotd-2024-12-07
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


// :- module parse_tree.parse_tree_output.
// :- implementation.

/*
INIT mercury__parse_tree__parse_tree_output__init
ENDINIT
*/

#include "parse_tree.parse_tree_output.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "integer.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.rat.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.builder.mih"




static const MR_ConstString parse_tree__parse_tree_output__parse_tree__parse_tree_output__type_class_id_var_names_pt_output_2[2];

static const MR_TypeClassMethod parse_tree__parse_tree_output__parse_tree__parse_tree_output__type_class_id_method_ids_pt_output_2[21];

static const MR_TypeClassId parse_tree__parse_tree_output__parse_tree__parse_tree_output__type_class_id_pt_output_2;

static const MR_TypeClassConstraint_3Struct parse_tree__parse_tree_output__parse_tree__parse_tree_output__type_class_decl_super_pt_output_2_1;

static const MR_TypeClassConstraint parse_tree__parse_tree_output__parse_tree__parse_tree_output__type_class_decl_supers_pt_output_2[1];

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_list_6_6_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_eval_method_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_constant_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_quoted_atom_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_purity_prefix_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_float_4_4_p_0(
  MR_Float HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint64_4_4_p_0(
  uint64_t HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint32_4_4_p_0(
  uint32_t HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint16_4_4_p_0(
  uint16_t HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint8_4_4_p_0(
  uint8_t HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint_4_4_p_0(
  MR_Unsigned HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int64_4_4_p_0(
  int64_t HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int32_4_4_p_0(
  int32_t HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int16_4_4_p_0(
  int16_t HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int8_4_4_p_0(
  int8_t HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int_4_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_quoted_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_escaped_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_strings_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_char_4_4_p_0(
  MR_Char HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_list_6_6_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_eval_method_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_constant_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_quoted_atom_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_purity_prefix_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_float_4_4_p_0(
  MR_Float HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint64_4_4_p_0(
  uint64_t HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint32_4_4_p_0(
  uint32_t HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint16_4_4_p_0(
  uint16_t HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint8_4_4_p_0(
  uint8_t HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint_4_4_p_0(
  MR_Unsigned HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int64_4_4_p_0(
  int64_t HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int32_4_4_p_0(
  int32_t HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int16_4_4_p_0(
  int16_t HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int8_4_4_p_0(
  int8_t HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int_4_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_quoted_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_escaped_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_strings_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_char_4_4_p_0(
  MR_Char HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_output__build_list_lag_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word OutputPred_7,
  MR_String Sep_8,
  MR_Box Item1_9,
  MR_Word Items_10,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15);

static void MR_CALL 
parse_tree__parse_tree_output__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_108_105_115_116_95_108_97_103_95_95_91_49_93_95_48_6_p_0(
  MR_Word OutputPred_7,
  MR_String Sep_8,
  MR_Box Item1_9,
  MR_Word Items_10,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15);

static void MR_CALL 
parse_tree__parse_tree_output__write_out_list_lag_7_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word WritePred_8,
  MR_String Separator_9,
  MR_Box Item1_10,
  MR_Word Items2plus_11,
  MR_Word Stream_12);

static void MR_CALL 
parse_tree__parse_tree_output__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_111_117_116_95_108_105_115_116_95_108_97_103_95_95_91_49_93_95_48_7_p_0(
  MR_Word WritePred_8,
  MR_String Separator_9,
  MR_Box Item1_10,
  MR_Word Items2plus_11,
  MR_Word Stream_12);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_char_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_strings_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_escaped_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_quoted_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_float_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_purity_prefix_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_quoted_atom_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_constant_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_eval_method_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_list_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_char_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_strings_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_escaped_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_quoted_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_float_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_purity_prefix_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_quoted_atom_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_constant_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_eval_method_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_list_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);


static /* final */ const MR_Box parse_tree__parse_tree_output_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__parse_tree_output_scalar_common_2[2][4];

static /* final */ const MR_Box parse_tree__parse_tree_output_scalar_common_3[2][5];




static /* final */ const MR_Box parse_tree__parse_tree_output_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_output_scalar_common_2[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_output_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_output_scalar_common_1[1])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_output_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_output_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_output_scalar_common_2[1])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


const MR_BaseTypeclassInfo base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__string__builder__handle__arity0__string__builder__state__arity0__[26] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 21)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_char_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_string_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_strings_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_escaped_string_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_quoted_string_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int8_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int16_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int32_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int64_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint8_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint16_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint32_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint64_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_float_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_purity_prefix_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_quoted_atom_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_constant_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_eval_method_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_list_6_6_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__io__text_output_stream__arity0__io__state__arity0__[26] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 21)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_char_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_string_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_strings_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_escaped_string_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_quoted_string_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int8_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int16_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int32_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int64_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint8_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint16_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint32_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint64_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_float_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_purity_prefix_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_quoted_atom_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_constant_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_eval_method_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_list_6_6_p_0_10001))
};

static const MR_ConstString parse_tree__parse_tree_output__parse_tree__parse_tree_output__type_class_id_var_names_pt_output_2[2] = {
  (MR_String) "S",
  (MR_String) "U"
};

static const MR_TypeClassMethod parse_tree__parse_tree_output__parse_tree__parse_tree_output__type_class_id_method_ids_pt_output_2[21] = {
  {
    (MR_String) "add_char",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_string",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_strings",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_escaped_string",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_quoted_string",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_int",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_int8",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_int16",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_int32",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_int64",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_uint",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_uint8",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_uint16",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_uint32",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_uint64",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_float",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_purity_prefix",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_quoted_atom",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_constant",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_eval_method",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_list",
    (MR_Integer) 6,
    MR_PREDICATE
  }
};

static const MR_TypeClassId parse_tree__parse_tree_output__parse_tree__parse_tree_output__type_class_id_pt_output_2 = {
  (MR_String) "parse_tree.parse_tree_output",
  (MR_String) "pt_output",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 21,
  parse_tree__parse_tree_output__parse_tree__parse_tree_output__type_class_id_var_names_pt_output_2,
  parse_tree__parse_tree_output__parse_tree__parse_tree_output__type_class_id_method_ids_pt_output_2
};

static const MR_TypeClassConstraint_3Struct parse_tree__parse_tree_output__parse_tree__parse_tree_output__type_class_decl_super_pt_output_2_1 = {
  &mercury__stream__stream__type_class_decl_writer_3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_TypeClassConstraint parse_tree__parse_tree_output__parse_tree__parse_tree_output__type_class_decl_supers_pt_output_2[1] = { (MR_TypeClassConstraint) (&parse_tree__parse_tree_output__parse_tree__parse_tree_output__type_class_decl_super_pt_output_2_1) };

const MR_TypeClassDeclStruct parse_tree__parse_tree_output__parse_tree__parse_tree_output__type_class_decl_pt_output_2 = {
  &parse_tree__parse_tree_output__parse_tree__parse_tree_output__type_class_id_pt_output_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_list_6_6_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Box Item_15 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
    MR_Word Items_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));

    parse_tree__parse_tree_output__write_out_list_lag_7_p_0(TypeInfo_for_T_7, HeadVar__1_1, HeadVar__2_2, Item_15, Items_16, HeadVar__4_4);
  }
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_eval_method_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_String Var_7;

  mercury__io__write_string_4_p_0(HeadVar__2_2, (MR_String) "eval_");
  Var_7 = parse_tree__parse_tree_out_misc__eval_method_to_string_1_f_0(HeadVar__1_1);
  mercury__io__write_string_4_p_0(HeadVar__2_2, Var_7);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_constant_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__term_io__write_constant_4_p_0(HeadVar__2_2, HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_quoted_atom_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_output_scalar_common_3[0]), HeadVar__2_2, HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_purity_prefix_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_String PurityPrefixStr_5;

  PurityPrefixStr_5 = parse_tree__parse_tree_out_misc__purity_prefix_to_string_1_f_0(HeadVar__1_1);
  mercury__io__write_string_4_p_0(HeadVar__2_2, PurityPrefixStr_5);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_float_4_4_p_0(
  MR_Float HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_float_4_p_0(HeadVar__2_2, HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint64_4_4_p_0(
  uint64_t HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_uint64_4_p_0(HeadVar__2_2, HeadVar__1_1);
  mercury__io__write_string_4_p_0(HeadVar__2_2, (MR_String) "u64");
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint32_4_4_p_0(
  uint32_t HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_uint32_4_p_0(HeadVar__2_2, HeadVar__1_1);
  mercury__io__write_string_4_p_0(HeadVar__2_2, (MR_String) "u32");
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint16_4_4_p_0(
  uint16_t HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_uint16_4_p_0(HeadVar__2_2, HeadVar__1_1);
  mercury__io__write_string_4_p_0(HeadVar__2_2, (MR_String) "u16");
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint8_4_4_p_0(
  uint8_t HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_uint8_4_p_0(HeadVar__2_2, HeadVar__1_1);
  mercury__io__write_string_4_p_0(HeadVar__2_2, (MR_String) "u8");
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint_4_4_p_0(
  MR_Unsigned HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_uint_4_p_0(HeadVar__2_2, HeadVar__1_1);
  mercury__io__write_char_4_p_0(HeadVar__2_2, (MR_Char) 117);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int64_4_4_p_0(
  int64_t HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_int64_4_p_0(HeadVar__2_2, HeadVar__1_1);
  mercury__io__write_string_4_p_0(HeadVar__2_2, (MR_String) "i64");
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int32_4_4_p_0(
  int32_t HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_int32_4_p_0(HeadVar__2_2, HeadVar__1_1);
  mercury__io__write_string_4_p_0(HeadVar__2_2, (MR_String) "i32");
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int16_4_4_p_0(
  int16_t HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_int16_4_p_0(HeadVar__2_2, HeadVar__1_1);
  mercury__io__write_string_4_p_0(HeadVar__2_2, (MR_String) "i16");
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int8_4_4_p_0(
  int8_t HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_int8_4_p_0(HeadVar__2_2, HeadVar__1_1);
  mercury__io__write_string_4_p_0(HeadVar__2_2, (MR_String) "i8");
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int_4_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_int_4_p_0(HeadVar__2_2, HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_quoted_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_output_scalar_common_3[0]), HeadVar__2_2, HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_escaped_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_output_scalar_common_3[0]), HeadVar__2_2, HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_strings_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_strings_4_p_0(HeadVar__2_2, HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_string_4_p_0(HeadVar__2_2, HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_char_4_4_p_0(
  MR_Char HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_char_4_p_0(HeadVar__2_2, HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_list_6_6_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__6_6 = HeadVar__5_5;
  else
  {
    MR_Box Item_15 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
    MR_Word Items_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));

    parse_tree__parse_tree_output__build_list_lag_6_p_0(TypeInfo_for_T_7, HeadVar__1_1, HeadVar__2_2, Item_15, Items_16, HeadVar__5_5, HeadVar__6_6);
  }
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_eval_method_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_Word STATE_VARIABLE_State_11_6;
  MR_String Var_7;

  mercury__string__builder__append_string_3_p_0((MR_String) "eval_", HeadVar__3_3, &STATE_VARIABLE_State_11_6);
  Var_7 = parse_tree__parse_tree_out_misc__eval_method_to_string_1_f_0(HeadVar__1_1);
  mercury__string__builder__append_string_3_p_0(Var_7, STATE_VARIABLE_State_11_6, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_constant_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_111_110_115_116_97_110_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_output_scalar_common_3[1]), HeadVar__1_1, HeadVar__3_3, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_quoted_atom_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_output_scalar_common_3[1]), HeadVar__1_1, HeadVar__3_3, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_purity_prefix_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_String Var_5;

  Var_5 = parse_tree__parse_tree_out_misc__purity_prefix_to_string_1_f_0(HeadVar__1_1);
  mercury__string__builder__append_string_3_p_0(Var_5, HeadVar__3_3, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_float_4_4_p_0(
  MR_Float HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_String Var_5;

  Var_5 = mercury__string__float_to_string_1_f_0(HeadVar__1_1);
  mercury__string__builder__append_string_3_p_0(Var_5, HeadVar__3_3, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint64_4_4_p_0(
  uint64_t HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_String Var_5;
  MR_Word STATE_VARIABLE_State_11_6;

  Var_5 = mercury__string__uint64_to_string_1_f_0(HeadVar__1_1);
  mercury__string__builder__append_string_3_p_0(Var_5, HeadVar__3_3, &STATE_VARIABLE_State_11_6);
  mercury__string__builder__append_string_3_p_0((MR_String) "u64", STATE_VARIABLE_State_11_6, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint32_4_4_p_0(
  uint32_t HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_String Var_5;
  MR_Word STATE_VARIABLE_State_11_6;

  Var_5 = mercury__string__uint32_to_string_1_f_0(HeadVar__1_1);
  mercury__string__builder__append_string_3_p_0(Var_5, HeadVar__3_3, &STATE_VARIABLE_State_11_6);
  mercury__string__builder__append_string_3_p_0((MR_String) "u32", STATE_VARIABLE_State_11_6, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint16_4_4_p_0(
  uint16_t HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_String Var_5;
  MR_Word STATE_VARIABLE_State_11_6;

  Var_5 = mercury__string__uint16_to_string_1_f_0(HeadVar__1_1);
  mercury__string__builder__append_string_3_p_0(Var_5, HeadVar__3_3, &STATE_VARIABLE_State_11_6);
  mercury__string__builder__append_string_3_p_0((MR_String) "u16", STATE_VARIABLE_State_11_6, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint8_4_4_p_0(
  uint8_t HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_String Var_5;
  MR_Word STATE_VARIABLE_State_11_6;

  Var_5 = mercury__string__uint8_to_string_1_f_0(HeadVar__1_1);
  mercury__string__builder__append_string_3_p_0(Var_5, HeadVar__3_3, &STATE_VARIABLE_State_11_6);
  mercury__string__builder__append_string_3_p_0((MR_String) "u8", STATE_VARIABLE_State_11_6, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint_4_4_p_0(
  MR_Unsigned HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_String Var_5;
  MR_Word STATE_VARIABLE_State_11_6;

  Var_5 = mercury__string__uint_to_string_1_f_0(HeadVar__1_1);
  mercury__string__builder__append_string_3_p_0(Var_5, HeadVar__3_3, &STATE_VARIABLE_State_11_6);
  mercury__string__builder__append_string_3_p_0((MR_String) "u", STATE_VARIABLE_State_11_6, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int64_4_4_p_0(
  int64_t HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_String Var_5;
  MR_Word STATE_VARIABLE_State_11_6;

  Var_5 = mercury__string__int64_to_string_1_f_0(HeadVar__1_1);
  mercury__string__builder__append_string_3_p_0(Var_5, HeadVar__3_3, &STATE_VARIABLE_State_11_6);
  mercury__string__builder__append_string_3_p_0((MR_String) "i64", STATE_VARIABLE_State_11_6, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int32_4_4_p_0(
  int32_t HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_String Var_5;
  MR_Word STATE_VARIABLE_State_11_6;

  Var_5 = mercury__string__int32_to_string_1_f_0(HeadVar__1_1);
  mercury__string__builder__append_string_3_p_0(Var_5, HeadVar__3_3, &STATE_VARIABLE_State_11_6);
  mercury__string__builder__append_string_3_p_0((MR_String) "i32", STATE_VARIABLE_State_11_6, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int16_4_4_p_0(
  int16_t HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_String Var_5;
  MR_Word STATE_VARIABLE_State_11_6;

  Var_5 = mercury__string__int16_to_string_1_f_0(HeadVar__1_1);
  mercury__string__builder__append_string_3_p_0(Var_5, HeadVar__3_3, &STATE_VARIABLE_State_11_6);
  mercury__string__builder__append_string_3_p_0((MR_String) "i16", STATE_VARIABLE_State_11_6, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int8_4_4_p_0(
  int8_t HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_String Var_5;
  MR_Word STATE_VARIABLE_State_11_6;

  Var_5 = mercury__string__int8_to_string_1_f_0(HeadVar__1_1);
  mercury__string__builder__append_string_3_p_0(Var_5, HeadVar__3_3, &STATE_VARIABLE_State_11_6);
  mercury__string__builder__append_string_3_p_0((MR_String) "i8", STATE_VARIABLE_State_11_6, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int_4_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_String Var_5;

  Var_5 = mercury__string__int_to_string_1_f_0(HeadVar__1_1);
  mercury__string__builder__append_string_3_p_0(Var_5, HeadVar__3_3, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_quoted_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_output_scalar_common_3[1]), HeadVar__1_1, HeadVar__3_3, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_escaped_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_output_scalar_common_3[1]), HeadVar__1_1, HeadVar__3_3, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_strings_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  mercury__string__builder__append_strings_3_p_0(HeadVar__1_1, HeadVar__3_3, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  mercury__string__builder__append_string_3_p_0(HeadVar__1_1, HeadVar__3_3, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_char_4_4_p_0(
  MR_Char HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  mercury__string__builder__append_char_3_p_0(HeadVar__1_1, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_output__add_list_6_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeClassInfo_for_pt_output_7,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * HeadVar__6_6)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_7, (MR_Integer) 0)), (MR_Integer) 25))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_7)), ((MR_Box) (TypeInfo_for_T_8)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)), HeadVar__4_4, HeadVar__5_5, HeadVar__6_6);
}

void MR_CALL 
parse_tree__parse_tree_output__add_eval_method_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_5,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_5, (MR_Integer) 0)), (MR_Integer) 24))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_5)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_output__add_constant_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_5,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_5, (MR_Integer) 0)), (MR_Integer) 23))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_5)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_output__add_quoted_atom_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_5,
  MR_String HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_5, (MR_Integer) 0)), (MR_Integer) 22))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_5)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_output__add_purity_prefix_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_5,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_5, (MR_Integer) 0)), (MR_Integer) 21))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_5)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_output__add_float_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_5,
  MR_Float HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_5, (MR_Integer) 0)), (MR_Integer) 20))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_5)), MR_box_float(HeadVar__1_1), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_output__add_uint64_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_5,
  uint64_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_5, (MR_Integer) 0)), (MR_Integer) 19))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_5)), MR_box_uint64(HeadVar__1_1), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_output__add_uint32_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_5,
  uint32_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_5, (MR_Integer) 0)), (MR_Integer) 18))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_5)), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_output__add_uint16_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_5,
  uint16_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_5, (MR_Integer) 0)), (MR_Integer) 17))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_5)), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_output__add_uint8_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_5,
  uint8_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_5, (MR_Integer) 0)), (MR_Integer) 16))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_5)), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_output__add_uint_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_5,
  MR_Unsigned HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_5, (MR_Integer) 0)), (MR_Integer) 15))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_5)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_output__add_int64_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_5,
  int64_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_5, (MR_Integer) 0)), (MR_Integer) 14))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_5)), MR_box_int64(HeadVar__1_1), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_output__add_int32_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_5,
  int32_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_5, (MR_Integer) 0)), (MR_Integer) 13))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_5)), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_output__add_int16_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_5,
  int16_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_5, (MR_Integer) 0)), (MR_Integer) 12))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_5)), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_output__add_int8_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_5,
  int8_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_5, (MR_Integer) 0)), (MR_Integer) 11))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_5)), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_output__add_int_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_5,
  MR_Integer HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_5, (MR_Integer) 0)), (MR_Integer) 10))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_5)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_output__add_quoted_string_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_5,
  MR_String HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_5, (MR_Integer) 0)), (MR_Integer) 9))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_5)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_output__add_escaped_string_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_5,
  MR_String HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_5, (MR_Integer) 0)), (MR_Integer) 8))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_5)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_output__add_strings_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_5,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_5, (MR_Integer) 0)), (MR_Integer) 7))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_5)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_output__add_string_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_5,
  MR_String HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_5, (MR_Integer) 0)), (MR_Integer) 6))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_5)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_output__add_char_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_5,
  MR_Char HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_5, (MR_Integer) 0)), (MR_Integer) 5))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_5)), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_output__build_list_lag_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word OutputPred_7,
  MR_String Sep_8,
  MR_Box Item1_9,
  MR_Word Items_10,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15)
{
  parse_tree__parse_tree_output__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_108_105_115_116_95_108_97_103_95_95_91_49_93_95_48_6_p_0(OutputPred_7, Sep_8, Item1_9, Items_10, STATE_VARIABLE_State_0_14, STATE_VARIABLE_State_15);
}

static void MR_CALL 
parse_tree__parse_tree_output__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_108_105_115_116_95_108_97_103_95_95_91_49_93_95_48_6_p_0(
  MR_Word OutputPred_7,
  MR_String Sep_8,
  MR_Box Item1_9,
  MR_Word Items_10,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15)
{
  while (MR_TRUE)
  {
    MR_Word STATE_VARIABLE_State_17_17;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_State_17_17;

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, OutputPred_7, (MR_Integer) 1))));
    func_0(((MR_Box) (OutputPred_7)), Item1_9, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_State_0_14)), &conv1_STATE_VARIABLE_State_17_17);
    STATE_VARIABLE_State_17_17 = ((MR_Word) (conv1_STATE_VARIABLE_State_17_17));
    if ((Items_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_15 = STATE_VARIABLE_State_17_17;
    else
    {
      MR_Box Item2_12 = (MR_hl_field(1, Items_10, (MR_Integer) 0));
      MR_Word Items3plus_13 = ((MR_Word) ((MR_hl_field(1, Items_10, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_State_18_18;
      MR_Box next_value_of_Item1_9;
      MR_Word next_value_of_Items_10;
      MR_Word next_value_of_STATE_VARIABLE_State_0_14;

      mercury__string__builder__append_string_3_p_0(Sep_8, STATE_VARIABLE_State_17_17, &STATE_VARIABLE_State_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_Item1_9 = Item2_12;
      next_value_of_Items_10 = Items3plus_13;
      next_value_of_STATE_VARIABLE_State_0_14 = STATE_VARIABLE_State_18_18;
      Item1_9 = next_value_of_Item1_9;
      Items_10 = next_value_of_Items_10;
      STATE_VARIABLE_State_0_14 = next_value_of_STATE_VARIABLE_State_0_14;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_output__write_out_list_lag_7_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word WritePred_8,
  MR_String Separator_9,
  MR_Box Item1_10,
  MR_Word Items2plus_11,
  MR_Word Stream_12)
{
  parse_tree__parse_tree_output__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_111_117_116_95_108_105_115_116_95_108_97_103_95_95_91_49_93_95_48_7_p_0(WritePred_8, Separator_9, Item1_10, Items2plus_11, Stream_12);
}

void MR_CALL 
parse_tree__parse_tree_output__write_out_list_6_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word WritePred_1,
  MR_String Separator_2,
  MR_Word HeadVar__3_3,
  MR_Word Stream_4)
{
  if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Box Item_15 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
    MR_Word Items_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));

    parse_tree__parse_tree_output__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_111_117_116_95_108_105_115_116_95_108_97_103_95_95_91_49_93_95_48_7_p_0(WritePred_1, Separator_2, Item_15, Items_16, Stream_4);
  }
}

static void MR_CALL 
parse_tree__parse_tree_output__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_111_117_116_95_108_105_115_116_95_108_97_103_95_95_91_49_93_95_48_7_p_0(
  MR_Word WritePred_8,
  MR_String Separator_9,
  MR_Box Item1_10,
  MR_Word Items2plus_11,
  MR_Word Stream_12)
{
  while (MR_TRUE)
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, WritePred_8, (MR_Integer) 1))));
    MR_Box conv1_STATE_VARIABLE_IO_18_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (WritePred_8)), Item1_10, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18_18);
    if (!((Items2plus_11 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Box Item2_14 = (MR_hl_field(1, Items2plus_11, (MR_Integer) 0));
      MR_Word Items3plus_15 = ((MR_Word) ((MR_hl_field(1, Items2plus_11, (MR_Integer) 1))));
      MR_Box next_value_of_Item1_10;
      MR_Word next_value_of_Items2plus_11;

      mercury__io__write_string_4_p_0(Stream_12, Separator_9);
      // direct tailcall eliminated
      ;
      next_value_of_Item1_10 = Item2_14;
      next_value_of_Items2plus_11 = Items3plus_15;
      Item1_10 = next_value_of_Item1_10;
      Items2plus_11 = next_value_of_Items2plus_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_char_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_char_4_4_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_string_4_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_strings_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_strings_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_escaped_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_escaped_string_4_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_quoted_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_quoted_string_4_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int_4_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int8_4_4_p_0(((int8_t) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int16_4_4_p_0(((int16_t) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int32_4_4_p_0(((int32_t) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_int64_4_4_p_0(MR_unbox_int64(wrapper_arg_1), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint_4_4_p_0(((MR_Unsigned) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint8_4_4_p_0(((uint8_t) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint16_4_4_p_0(((uint16_t) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint32_4_4_p_0(((uint32_t) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_uint64_4_4_p_0(MR_unbox_uint64(wrapper_arg_1), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_float_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_float_4_4_p_0(MR_unbox_float(wrapper_arg_1), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_purity_prefix_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_purity_prefix_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_quoted_atom_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_quoted_atom_4_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_constant_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_constant_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_eval_method_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_eval_method_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_list_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__6_6;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____string__builder__handle__arity0__string__builder__state__arity0______parse_tree__parse_tree_output__add_list_6_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_6)), &conv0_HeadVar__6_6);
  *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_char_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_char_4_4_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_string_4_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_strings_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_strings_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_escaped_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_escaped_string_4_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_quoted_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_quoted_string_4_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int_4_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int8_4_4_p_0(((int8_t) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int16_4_4_p_0(((int16_t) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int32_4_4_p_0(((int32_t) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_int64_4_4_p_0(MR_unbox_int64(wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint_4_4_p_0(((MR_Unsigned) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint8_4_4_p_0(((uint8_t) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint16_4_4_p_0(((uint16_t) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint32_4_4_p_0(((uint32_t) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_uint64_4_4_p_0(MR_unbox_uint64(wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_float_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_float_4_4_p_0(MR_unbox_float(wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_purity_prefix_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_purity_prefix_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_quoted_atom_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_quoted_atom_4_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_constant_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_constant_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_eval_method_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_eval_method_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_list_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__ClassMethod_for_parse_tree__parse_tree_output__pt_output____io__text_output_stream__arity0__io__state__arity0______parse_tree__parse_tree_output__add_list_6_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
}

void mercury__parse_tree__parse_tree_output__init(void)
{
}

void mercury__parse_tree__parse_tree_output__init_type_tables(void)
{
}

void mercury__parse_tree__parse_tree_output__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_tree_output__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_tree_output.
