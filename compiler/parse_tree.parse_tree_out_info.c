/*
** Automatically generated from `parse_tree_out_info.m'
** by the Mercury compiler,
** version rotd-2022-07-20
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


// :- module parse_tree.parse_tree_out_info.
// :- implementation.

/*
INIT mercury__parse_tree__parse_tree_out_info__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_info.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_maybe_output_line_numbers_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_output_line_numbers_0[2];

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_output_line_numbers_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_maybe_qualified_item_names_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_qualified_item_names_0[2];

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_qualified_item_names_0[2];

static const MR_PseudoTypeInfo parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_types_merc_out_info_0_0[5];

static const MR_ConstString parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_names_merc_out_info_0_0[5];

static const MR_DuArgLocn parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_locns_merc_out_info_0_0[5];

static const MR_DuFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_functor_desc_merc_out_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_stag_ordered_merc_out_info_0_0[1];

static const MR_DuPtagLayout parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_ptag_ordered_merc_out_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_name_ordered_merc_out_info_0[1];

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_merc_out_info_0[1];

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_output_lang_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_output_lang_0[2];

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_output_lang_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_type_repn_for_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_type_repn_for_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_type_repn_for_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_type_repn_for_0[2];

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_type_repn_for_0[2];

static const MR_ConstString parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_var_names_output_2[2];

static const MR_TypeClassMethod parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_method_ids_output_2[23];

static const MR_TypeClassId parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_output_2;

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_list_6_6_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_format_5_5_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_4_4_p_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_constant_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_float_4_4_p_0(
  MR_Float HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint64_4_4_p_0(
  uint64_t HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int64_4_4_p_0(
  int64_t HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint32_4_4_p_0(
  uint32_t HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int32_4_4_p_0(
  int32_t HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint16_4_4_p_0(
  uint16_t HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int16_4_4_p_0(
  int16_t HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint8_4_4_p_0(
  uint8_t HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int8_4_4_p_0(
  int8_t HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint_4_4_p_0(
  MR_Unsigned HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int_4_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_char_4_4_p_0(
  MR_Char HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_strings_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_list_6_6_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_String HeadVar__5_5,
  MR_String * HeadVar__6_6);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_format_5_5_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String HeadVar__4_4,
  MR_String * HeadVar__5_5);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_4_4_p_0(
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_eval_method_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_constant_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_float_4_4_p_0(
  MR_Float HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint64_4_4_p_0(
  uint64_t HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int64_4_4_p_0(
  int64_t HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint32_4_4_p_0(
  uint32_t HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int32_4_4_p_0(
  int32_t HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint16_4_4_p_0(
  uint16_t HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int16_4_4_p_0(
  int16_t HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint8_4_4_p_0(
  uint8_t HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int8_4_4_p_0(
  int8_t HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint_4_4_p_0(
  MR_Unsigned HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int_4_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_char_4_4_p_0(
  MR_Char HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_strings_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__output_list_lag_6_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word OutputPred_7,
  MR_String Sep_8,
  MR_Box Item1_9,
  MR_Word Items_10,
  MR_String STATE_VARIABLE_Str_0_14,
  MR_String * STATE_VARIABLE_Str_15);

static void MR_CALL 
parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_108_105_115_116_95_108_97_103_95_95_91_49_93_95_48_6_p_0(
  MR_Word OutputPred_7,
  MR_String Sep_8,
  MR_Box Item1_9,
  MR_Word Items_10,
  MR_String STATE_VARIABLE_Str_0_14,
  MR_String * STATE_VARIABLE_Str_15);

static void MR_CALL 
parse_tree__parse_tree_out_info__write_out_list_lag_7_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word WritePred_8,
  MR_String Separator_9,
  MR_Box Item1_10,
  MR_Word Items2plus_11,
  MR_Word Stream_12);

static void MR_CALL 
parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_111_117_116_95_108_105_115_116_95_108_97_103_95_95_91_49_93_95_48_7_p_0(
  MR_Word WritePred_8,
  MR_String Separator_9,
  MR_Box Item1_10,
  MR_Word Items2plus_11,
  MR_Word Stream_12);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____output_lang_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____output_lang_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____type_repn_for_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____type_repn_for_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_strings_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_char_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_float_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_constant_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_eval_method_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_format_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_list_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_strings_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_char_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_float_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_constant_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_format_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_list_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);


static /* final */ const MR_Box parse_tree__parse_tree_out_info_scalar_common_1[1][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_info_scalar_common_2[1][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_info_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_info_scalar_common_4[1][2];




static /* final */ const MR_Box parse_tree__parse_tree_out_info_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_info_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_info_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_info_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_info_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_info_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_info_scalar_common_4[1][2] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 1U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 1U << 1)))))),
    ((MR_Box) ((MR_String) ", "))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_0 = {
  (MR_String) "dont_output_line_numbers",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_1 = {
  (MR_String) "do_output_line_numbers",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_maybe_output_line_numbers_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_0,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_output_line_numbers_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_1,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_0
};

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_output_line_numbers_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_output_line_numbers_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "maybe_output_line_numbers",
  { parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_output_line_numbers_0 },
  { parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_maybe_output_line_numbers_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_output_line_numbers_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_0 = {
  (MR_String) "unqualified_item_names",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_1 = {
  (MR_String) "qualified_item_names",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_maybe_qualified_item_names_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_0,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_qualified_item_names_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_1,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_0
};

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_qualified_item_names_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_qualified_item_names_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "maybe_qualified_item_names",
  { parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_qualified_item_names_0 },
  { parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_maybe_qualified_item_names_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_qualified_item_names_0,

};

static const MR_PseudoTypeInfo parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_types_merc_out_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_qualified_item_names_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_output_line_numbers_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_type_repn_for_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_names_merc_out_info_0_0[5] = {
  (MR_String) "moi_qualify_item_names",
  (MR_String) "moi_output_line_numbers",
  (MR_String) "moi_output_lang",
  (MR_String) "moi_type_repn_for",
  (MR_String) "moi_human_comma_sep"
};

static const MR_DuArgLocn parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_locns_merc_out_info_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_functor_desc_merc_out_info_0_0 = {
  (MR_String) "merc_out_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_types_merc_out_info_0_0,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_names_merc_out_info_0_0,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_locns_merc_out_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_stag_ordered_merc_out_info_0_0[1] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_functor_desc_merc_out_info_0_0
};

static const MR_DuPtagLayout parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_ptag_ordered_merc_out_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_stag_ordered_merc_out_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_name_ordered_merc_out_info_0[1] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_functor_desc_merc_out_info_0_0
};

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_merc_out_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "merc_out_info",
  { parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_name_ordered_merc_out_info_0 },
  { parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_ptag_ordered_merc_out_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_merc_out_info_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_0 = {
  (MR_String) "output_mercury",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_1 = {
  (MR_String) "output_debug",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_output_lang_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_0,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_output_lang_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_1,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_0
};

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_output_lang_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_info____Unify____output_lang_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info____Compare____output_lang_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "output_lang",
  { parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_output_lang_0 },
  { parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_output_lang_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_output_lang_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_type_repn_for_0_0 = {
  (MR_String) "type_repn_for_machines",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_type_repn_for_0_1 = {
  (MR_String) "type_repn_for_humans",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_type_repn_for_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_type_repn_for_0_0,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_type_repn_for_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_type_repn_for_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_type_repn_for_0_1,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_type_repn_for_0_0
};

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_type_repn_for_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_type_repn_for_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_info____Unify____type_repn_for_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info____Compare____type_repn_for_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "type_repn_for",
  { parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_type_repn_for_0 },
  { parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_type_repn_for_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_type_repn_for_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_parse_tree__parse_tree_out_info__output__arity2__unit__unit__arity0__string__arity0__[28] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 23)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_string_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_strings_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_char_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int8_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint8_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int16_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint16_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int32_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint32_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int64_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint64_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_float_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_constant_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_eval_method_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_format_5_5_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_list_6_6_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_parse_tree__parse_tree_out_info__output__arity2__io__output_stream__arity0__io__state__arity0__[28] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 23)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_string_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_strings_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_char_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int8_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint8_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int16_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint16_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int32_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint32_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int64_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint64_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_float_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_constant_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_format_5_5_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_list_6_6_p_0_10001))
};

static const MR_ConstString parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_var_names_output_2[2] = {
  (MR_String) "S",
  (MR_String) "U"
};

static const MR_TypeClassMethod parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_method_ids_output_2[23] = {
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
    (MR_String) "add_char",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_int",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_uint",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_int8",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_uint8",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_int16",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_uint16",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_int32",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_uint32",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_int64",
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
    (MR_String) "add_quoted_string",
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
    (MR_String) "add_lambda_eval_method",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_escaped_string",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_format",
    (MR_Integer) 5,
    MR_PREDICATE
  },
  {
    (MR_String) "add_list",
    (MR_Integer) 6,
    MR_PREDICATE
  }
};

static const MR_TypeClassId parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_output_2 = {
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "output",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 23,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_var_names_output_2,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_method_ids_output_2
};

const MR_TypeClassDeclStruct parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_decl_output_2 = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_output_2,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_list_6_6_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Box Item_16 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
    MR_Word Items_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));

    parse_tree__parse_tree_out_info__write_out_list_lag_7_p_0(TypeInfo_for_T_7, HeadVar__1_1, HeadVar__2_2, Item_16, Items_17, HeadVar__4_4);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_format_5_5_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__io__format_5_p_0(HeadVar__3_3, HeadVar__1_1, HeadVar__2_2);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_out_info_scalar_common_3[0]), (MR_Word) (&parse_tree__parse_tree_out_info_scalar_common_3[1]), HeadVar__2_2, HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_4_4_p_0(
  MR_Word HeadVar__2_2)
{
  MR_String LambdaEvalMethodStr_10;

  LambdaEvalMethodStr_10 = mercury__string__f_43_43_2_f_0((MR_String) "", (MR_String) "normal");
  mercury__io__write_string_4_p_0(HeadVar__2_2, LambdaEvalMethodStr_10);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_String EvalMethodStr_10;
  MR_String STATE_VARIABLE_Str_12_20;
  MR_String Var_21;

  STATE_VARIABLE_Str_12_20 = mercury__string__f_43_43_2_f_0((MR_String) "", (MR_String) "eval_");
  Var_21 = parse_tree__prog_out__eval_method_to_string_1_f_0(HeadVar__1_1);
  EvalMethodStr_10 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_Str_12_20, Var_21);
  mercury__io__write_string_4_p_0(HeadVar__2_2, EvalMethodStr_10);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_constant_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__term_io__write_constant_4_p_0(HeadVar__2_2, HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_out_info_scalar_common_3[0]), (MR_Word) (&parse_tree__parse_tree_out_info_scalar_common_3[1]), HeadVar__2_2, HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_out_info_scalar_common_3[0]), (MR_Word) (&parse_tree__parse_tree_out_info_scalar_common_3[1]), HeadVar__2_2, HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_String PurityPrefixStr_10;

  PurityPrefixStr_10 = parse_tree__prog_out__purity_prefix_to_string_1_f_0(HeadVar__1_1);
  mercury__io__write_string_4_p_0(HeadVar__2_2, PurityPrefixStr_10);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_float_4_4_p_0(
  MR_Float HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_float_4_p_0(HeadVar__2_2, HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint64_4_4_p_0(
  uint64_t HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_uint64_4_p_0(HeadVar__2_2, HeadVar__1_1);
  mercury__io__write_string_4_p_0(HeadVar__2_2, (MR_String) "u64");
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int64_4_4_p_0(
  int64_t HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_int64_4_p_0(HeadVar__2_2, HeadVar__1_1);
  mercury__io__write_string_4_p_0(HeadVar__2_2, (MR_String) "i64");
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint32_4_4_p_0(
  uint32_t HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_uint32_4_p_0(HeadVar__2_2, HeadVar__1_1);
  mercury__io__write_string_4_p_0(HeadVar__2_2, (MR_String) "u32");
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int32_4_4_p_0(
  int32_t HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_int32_4_p_0(HeadVar__2_2, HeadVar__1_1);
  mercury__io__write_string_4_p_0(HeadVar__2_2, (MR_String) "i32");
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint16_4_4_p_0(
  uint16_t HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_uint16_4_p_0(HeadVar__2_2, HeadVar__1_1);
  mercury__io__write_string_4_p_0(HeadVar__2_2, (MR_String) "u16");
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int16_4_4_p_0(
  int16_t HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_int16_4_p_0(HeadVar__2_2, HeadVar__1_1);
  mercury__io__write_string_4_p_0(HeadVar__2_2, (MR_String) "i16");
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint8_4_4_p_0(
  uint8_t HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_uint8_4_p_0(HeadVar__2_2, HeadVar__1_1);
  mercury__io__write_string_4_p_0(HeadVar__2_2, (MR_String) "u8");
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int8_4_4_p_0(
  int8_t HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_int8_4_p_0(HeadVar__2_2, HeadVar__1_1);
  mercury__io__write_string_4_p_0(HeadVar__2_2, (MR_String) "i8");
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint_4_4_p_0(
  MR_Unsigned HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_uint_4_p_0(HeadVar__2_2, HeadVar__1_1);
  mercury__io__write_char_4_p_0(HeadVar__2_2, (MR_Char) 117);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int_4_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_int_4_p_0(HeadVar__2_2, HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_char_4_4_p_0(
  MR_Char HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_char_4_p_0(HeadVar__2_2, HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_strings_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_strings_4_p_0(HeadVar__2_2, HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__write_string_4_p_0(HeadVar__2_2, HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_list_6_6_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_String HeadVar__5_5,
  MR_String * HeadVar__6_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__6_6 = HeadVar__5_5;
  else
  {
    MR_Box Item_16 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
    MR_Word Items_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));

    parse_tree__parse_tree_out_info__output_list_lag_6_p_0(TypeInfo_for_T_7, HeadVar__1_1, HeadVar__2_2, Item_16, Items_17, HeadVar__5_5, HeadVar__6_6);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_format_5_5_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String HeadVar__4_4,
  MR_String * HeadVar__5_5)
{
  MR_String Var_11;

  Var_11 = mercury__string__format_2_f_0(HeadVar__1_1, HeadVar__2_2);
  *HeadVar__5_5 = mercury__string__f_43_43_2_f_0(HeadVar__4_4, Var_11);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_String ES_9;

  ES_9 = mercury__term_io__escaped_string_1_f_0(HeadVar__1_1);
  mercury__string__append_3_p_2(HeadVar__3_3, ES_9, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_4_4_p_0(
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  *HeadVar__4_4 = mercury__string__f_43_43_2_f_0(HeadVar__3_3, (MR_String) "normal");
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_eval_method_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_String STATE_VARIABLE_Str_12_12;
  MR_String Var_13;

  STATE_VARIABLE_Str_12_12 = mercury__string__f_43_43_2_f_0(HeadVar__3_3, (MR_String) "eval_");
  Var_13 = parse_tree__prog_out__eval_method_to_string_1_f_0(HeadVar__1_1);
  *HeadVar__4_4 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_Str_12_12, Var_13);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_constant_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_String CS_9;

  CS_9 = mercury__term_io__format_constant_1_f_0(HeadVar__1_1);
  mercury__string__append_3_p_2(HeadVar__3_3, CS_9, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_String QA_9;

  QA_9 = mercury__term_io__quoted_string_1_f_0(HeadVar__1_1);
  mercury__string__append_3_p_2(HeadVar__3_3, QA_9, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_String QA_9;

  QA_9 = mercury__term_io__quoted_atom_1_f_0(HeadVar__1_1);
  mercury__string__append_3_p_2(HeadVar__3_3, QA_9, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_String S_9;

  S_9 = parse_tree__prog_out__purity_prefix_to_string_1_f_0(HeadVar__1_1);
  mercury__string__append_3_p_2(HeadVar__3_3, S_9, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_float_4_4_p_0(
  MR_Float HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_String S_9;

  mercury__string__float_to_string_2_p_0(HeadVar__1_1, &S_9);
  mercury__string__append_3_p_2(HeadVar__3_3, S_9, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint64_4_4_p_0(
  uint64_t HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_String S_9;
  MR_String Var_10;

  Var_10 = mercury__string__uint64_to_string_1_f_0(HeadVar__1_1);
  S_9 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) "u64");
  mercury__string__append_3_p_2(HeadVar__3_3, S_9, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int64_4_4_p_0(
  int64_t HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_String S_9;
  MR_String Var_10;

  Var_10 = mercury__string__int64_to_string_1_f_0(HeadVar__1_1);
  S_9 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) "i64");
  mercury__string__append_3_p_2(HeadVar__3_3, S_9, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint32_4_4_p_0(
  uint32_t HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_String S_9;
  MR_String Var_10;

  Var_10 = mercury__string__uint32_to_string_1_f_0(HeadVar__1_1);
  S_9 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) "u32");
  mercury__string__append_3_p_2(HeadVar__3_3, S_9, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int32_4_4_p_0(
  int32_t HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_String S_9;
  MR_String Var_10;

  Var_10 = mercury__string__int32_to_string_1_f_0(HeadVar__1_1);
  S_9 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) "i32");
  mercury__string__append_3_p_2(HeadVar__3_3, S_9, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint16_4_4_p_0(
  uint16_t HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_String S_9;
  MR_String Var_10;

  Var_10 = mercury__string__uint16_to_string_1_f_0(HeadVar__1_1);
  S_9 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) "u16");
  mercury__string__append_3_p_2(HeadVar__3_3, S_9, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int16_4_4_p_0(
  int16_t HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_String S_9;
  MR_String Var_10;

  Var_10 = mercury__string__int16_to_string_1_f_0(HeadVar__1_1);
  S_9 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) "i16");
  mercury__string__append_3_p_2(HeadVar__3_3, S_9, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint8_4_4_p_0(
  uint8_t HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_String S_9;
  MR_String Var_10;

  Var_10 = mercury__string__uint8_to_string_1_f_0(HeadVar__1_1);
  S_9 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) "u8");
  mercury__string__append_3_p_2(HeadVar__3_3, S_9, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int8_4_4_p_0(
  int8_t HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_String S_9;
  MR_String Var_10;

  Var_10 = mercury__string__int8_to_string_1_f_0(HeadVar__1_1);
  S_9 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) "i8");
  mercury__string__append_3_p_2(HeadVar__3_3, S_9, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint_4_4_p_0(
  MR_Unsigned HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_String Var_9;
  MR_String Var_10;

  Var_10 = mercury__string__uint_to_string_1_f_0(HeadVar__1_1);
  Var_9 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) "u");
  *HeadVar__4_4 = mercury__string__f_43_43_2_f_0(HeadVar__3_3, Var_9);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int_4_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_String Var_9;

  Var_9 = mercury__string__int_to_string_1_f_0(HeadVar__1_1);
  *HeadVar__4_4 = mercury__string__f_43_43_2_f_0(HeadVar__3_3, Var_9);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_char_4_4_p_0(
  MR_Char HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_String Var_9;

  Var_9 = mercury__string__char_to_string_1_f_0(HeadVar__1_1);
  *HeadVar__4_4 = mercury__string__f_43_43_2_f_0(HeadVar__3_3, Var_9);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_strings_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_Word Var_9;

  {
    Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (HeadVar__3_3));
    MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (HeadVar__1_1));
  }
  mercury__string__append_list_2_p_0(Var_9, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_string_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  *HeadVar__4_4 = mercury__string__f_43_43_2_f_0(HeadVar__3_3, HeadVar__1_1);
}

void MR_CALL 
parse_tree__parse_tree_out_info____Compare____type_repn_for_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

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
parse_tree__parse_tree_out_info____Unify____type_repn_for_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_tree_out_info____Compare____output_lang_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

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
parse_tree__parse_tree_out_info____Unify____output_lang_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_String ArgX5_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY5_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_25 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_26 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_25 < Var_26);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_25 > Var_26);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_27 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_28 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_27 < Var_28);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_27 > Var_28);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_29 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_30 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_29 < Var_30);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_29 > Var_30);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_31 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_32 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_31 < Var_32);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_31 > Var_32);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_String ArgX5_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY5_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
            succeeded = (strcmp(ArgX5_11, ArgY5_12) == 0);
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

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
parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

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
parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_list_6_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeClassInfo_for_output_7,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * HeadVar__6_6)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_7, (MR_Integer) 0)), (MR_Integer) 27))));

  func_0(((MR_Box) (TypeClassInfo_for_output_7)), ((MR_Box) (TypeInfo_for_T_8)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)), HeadVar__4_4, HeadVar__5_5, HeadVar__6_6);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_format_5_p_0(
  MR_Word TypeClassInfo_for_output_6,
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box * HeadVar__5_5)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 26))));

  func_0(((MR_Box) (TypeClassInfo_for_output_6)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), HeadVar__3_3, HeadVar__4_4, HeadVar__5_5);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_escaped_string_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  MR_String HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 25))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_lambda_eval_method_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 24))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), ((MR_Box) ((MR_Integer) 0)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_eval_method_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 23))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_constant_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 22))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_quoted_string_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  MR_String HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 21))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_quoted_atom_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  MR_String HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 20))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_purity_prefix_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 19))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_float_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  MR_Float HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 18))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), MR_box_float(HeadVar__1_1), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_uint64_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  uint64_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 17))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), MR_box_uint64(HeadVar__1_1), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_int64_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  int64_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 16))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), MR_box_int64(HeadVar__1_1), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_uint32_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  uint32_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 15))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_int32_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  int32_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 14))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_uint16_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  uint16_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 13))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_int16_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  int16_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 12))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_uint8_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  uint8_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 11))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_int8_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  int8_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 10))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_uint_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  MR_Unsigned HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 9))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_int_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  MR_Integer HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 8))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_char_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  MR_Char HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 7))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_strings_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 6))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_string_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  MR_String HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 5))));

  func_0(((MR_Box) (TypeClassInfo_for_output_5)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__output_list_lag_6_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word OutputPred_7,
  MR_String Sep_8,
  MR_Box Item1_9,
  MR_Word Items_10,
  MR_String STATE_VARIABLE_Str_0_14,
  MR_String * STATE_VARIABLE_Str_15)
{
  parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_108_105_115_116_95_108_97_103_95_95_91_49_93_95_48_6_p_0(OutputPred_7, Sep_8, Item1_9, Items_10, STATE_VARIABLE_Str_0_14, STATE_VARIABLE_Str_15);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_108_105_115_116_95_108_97_103_95_95_91_49_93_95_48_6_p_0(
  MR_Word OutputPred_7,
  MR_String Sep_8,
  MR_Box Item1_9,
  MR_Word Items_10,
  MR_String STATE_VARIABLE_Str_0_14,
  MR_String * STATE_VARIABLE_Str_15)
{
  while (MR_TRUE)
  {
    MR_String STATE_VARIABLE_Str_17_17;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_Str_17_17;

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), OutputPred_7, (MR_Integer) 1))));
    func_0(((MR_Box) (OutputPred_7)), Item1_9, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_Str_0_14)), &conv1_STATE_VARIABLE_Str_17_17);
    STATE_VARIABLE_Str_17_17 = ((MR_String) (conv1_STATE_VARIABLE_Str_17_17));
    if ((Items_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Str_15 = STATE_VARIABLE_Str_17_17;
    else
    {
      MR_Box Item2_12 = (MR_hl_field(MR_mktag(1), Items_10, (MR_Integer) 0));
      MR_Word Items3plus_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Items_10, (MR_Integer) 1))));
      MR_String STATE_VARIABLE_Str_19_19;
      MR_Box next_value_of_Item1_9;
      MR_Word next_value_of_Items_10;
      MR_String next_value_of_STATE_VARIABLE_Str_0_14;

      STATE_VARIABLE_Str_19_19 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_Str_17_17, Sep_8);
      // direct tailcall eliminated
      ;
      next_value_of_Item1_9 = Item2_12;
      next_value_of_Items_10 = Items3plus_13;
      next_value_of_STATE_VARIABLE_Str_0_14 = STATE_VARIABLE_Str_19_19;
      Item1_9 = next_value_of_Item1_9;
      Items_10 = next_value_of_Items_10;
      STATE_VARIABLE_Str_0_14 = next_value_of_STATE_VARIABLE_Str_0_14;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__write_out_list_lag_7_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word WritePred_8,
  MR_String Separator_9,
  MR_Box Item1_10,
  MR_Word Items2plus_11,
  MR_Word Stream_12)
{
  parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_111_117_116_95_108_105_115_116_95_108_97_103_95_95_91_49_93_95_48_7_p_0(WritePred_8, Separator_9, Item1_10, Items2plus_11, Stream_12);
}

void MR_CALL 
parse_tree__parse_tree_out_info__write_out_list_6_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word WritePred_1,
  MR_String Separator_2,
  MR_Word HeadVar__3_3,
  MR_Word Stream_4)
{
  if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Box Item_15 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
    MR_Word Items_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));

    parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_111_117_116_95_108_105_115_116_95_108_97_103_95_95_91_49_93_95_48_7_p_0(WritePred_1, Separator_2, Item_15, Items_16, Stream_4);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_111_117_116_95_108_105_115_116_95_108_97_103_95_95_91_49_93_95_48_7_p_0(
  MR_Word WritePred_8,
  MR_String Separator_9,
  MR_Box Item1_10,
  MR_Word Items2plus_11,
  MR_Word Stream_12)
{
  while (MR_TRUE)
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), WritePred_8, (MR_Integer) 1))));
    MR_Box conv1_STATE_VARIABLE_IO_18_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (WritePred_8)), Item1_10, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18_18);
    if (!((Items2plus_11 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Box Item2_14 = (MR_hl_field(MR_mktag(1), Items2plus_11, (MR_Integer) 0));
      MR_Word Items3plus_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Items2plus_11, (MR_Integer) 1))));
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

void MR_CALL 
parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(
  MR_Word Info_4,
  MR_Word SymName_5,
  MR_Word * OutSymName_6)
{
  MR_Word MaybeQualifiedItemNames_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);

  switch (MaybeQualifiedItemNames_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *OutSymName_6 = SymName_5;
      break;
    case (MR_Integer) 0:
      {
        MR_String Var_8;

        Var_8 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_5);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *OutSymName_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_8));
        }
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(
  MR_Word Info_6,
  MR_Word Context_7,
  MR_Word Stream_8)
{
  MR_Word LineNumbers_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

  switch (LineNumbers_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t% ");
        parse_tree__prog_out__write_context_4_p_0(Stream_8, Context_7);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
      }
      break;
    case (MR_Integer) 0:
      {
      }
      break;
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_info__get_human_comma_sep_1_f_0(
  MR_Word Info_3)
{
  MR_String HeadVar__2_2 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__get_type_repn_for_1_f_0(
  MR_Word Info_3)
{
  MR_Word HeadVar__2_2 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))) & (MR_Integer) 1);

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__get_output_lang_1_f_0(
  MR_Word Info_3)
{
  MR_Word HeadVar__2_2 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__get_output_line_numbers_1_f_0(
  MR_Word Info_3)
{
  MR_Word HeadVar__2_2 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__get_maybe_qualified_item_names_1_f_0(
  MR_Word Info_3)
{
  MR_Word HeadVar__2_2 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__merc_out_info_disable_line_numbers_1_f_0(
  MR_Word Info0_3)
{
  MR_Word Info_4;
  MR_String Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info0_3, (MR_Integer) 1))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_3, (MR_Integer) 0)));

  {
    Info_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Info_4, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 2))));
    MR_hl_field(MR_mktag(0), Info_4, 1) = ((MR_Box) (Var_10));
  }
  return Info_4;
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(
  MR_Word Globals_5,
  MR_Word MaybeQualifiedItemNames_6,
  MR_Word Lang_7)
{
  MR_Word Info_8;
  MR_Word LineNumbersOpt_9;
  MR_Word TypeRepnsForHumans_10;
  MR_Word LineNumbers_11;
  MR_Word For_12;
  MR_String CommaSep_13;

  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 172, &LineNumbersOpt_9);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 175, &TypeRepnsForHumans_10);
  switch (LineNumbersOpt_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      LineNumbers_11 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      LineNumbers_11 = (MR_Integer) 1;
      break;
  }
  switch (TypeRepnsForHumans_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        For_12 = (MR_Integer) 0;
        CommaSep_13 = (MR_String) ", ";
      }
      break;
    case (MR_Integer) 1:
      {
        For_12 = (MR_Integer) 1;
        CommaSep_13 = (MR_String) ",\n    ";
      }
      break;
  }
  {
    Info_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Info_8, 0) = (MR_Box) (((((MR_Unsigned) (MaybeQualifiedItemNames_6) << 3)) | (((((MR_Unsigned) (LineNumbers_11) << 2)) | (((((MR_Unsigned) (Lang_7) << 1)) | (MR_Unsigned) (For_12)))))));
    MR_hl_field(MR_mktag(0), Info_8, 1) = ((MR_Box) (CommaSep_13));
  }
  return Info_8;
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__init_debug_merc_out_info_0_f_0(void)
{
  return (MR_Word) (&parse_tree__parse_tree_out_info_scalar_common_4[0]);
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____output_lang_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_info____Unify____output_lang_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____output_lang_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_info____Compare____output_lang_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____type_repn_for_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_info____Unify____type_repn_for_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____type_repn_for_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_info____Compare____type_repn_for_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_string_4_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_strings_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_strings_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_char_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_char_4_4_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int_4_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint_4_4_p_0(((MR_Unsigned) (wrapper_arg_1)), ((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int8_4_4_p_0(((int8_t) (MR_Word) wrapper_arg_1), ((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint8_4_4_p_0(((uint8_t) (MR_Word) wrapper_arg_1), ((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int16_4_4_p_0(((int16_t) (MR_Word) wrapper_arg_1), ((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint16_4_4_p_0(((uint16_t) (MR_Word) wrapper_arg_1), ((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int32_4_4_p_0(((int32_t) (MR_Word) wrapper_arg_1), ((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint32_4_4_p_0(((uint32_t) (MR_Word) wrapper_arg_1), ((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_int64_4_4_p_0(MR_unbox_int64(wrapper_arg_1), ((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_uint64_4_4_p_0(MR_unbox_uint64(wrapper_arg_1), ((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_float_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_float_4_4_p_0(MR_unbox_float(wrapper_arg_1), ((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_4_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_4_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_constant_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_constant_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_eval_method_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_eval_method_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_4_4_p_0(((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_4_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_format_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__5_5;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_format_5_5_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_String) (wrapper_arg_4)), &conv0_HeadVar__5_5);
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_list_6_6_p_0_10001(
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
  MR_String conv0_HeadVar__6_6;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____unit__unit__arity0__string__arity0______parse_tree__parse_tree_out_info__add_list_6_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_String) (wrapper_arg_6)), &conv0_HeadVar__6_6);
  *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_string_4_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_strings_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_strings_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_char_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_char_4_4_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int_4_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint_4_4_p_0(((MR_Unsigned) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int8_4_4_p_0(((int8_t) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint8_4_4_p_0(((uint8_t) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int16_4_4_p_0(((int16_t) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint16_4_4_p_0(((uint16_t) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int32_4_4_p_0(((int32_t) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint32_4_4_p_0(((uint32_t) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_int64_4_4_p_0(MR_unbox_int64(wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_uint64_4_4_p_0(MR_unbox_uint64(wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_float_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_float_4_4_p_0(MR_unbox_float(wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_4_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_4_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_constant_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_constant_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_4_4_p_0(((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_4_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_format_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_format_5_5_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_list_6_6_p_0_10001(
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

  parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__output_stream__arity0__io__state__arity0______parse_tree__parse_tree_out_info__add_list_6_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
}

void mercury__parse_tree__parse_tree_out_info__init(void)
{
}

void mercury__parse_tree__parse_tree_out_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_output_line_numbers_0);
	MR_register_type_ctor_info(&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_qualified_item_names_0);
	MR_register_type_ctor_info(&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0);
	MR_register_type_ctor_info(&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0);
	MR_register_type_ctor_info(&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_type_repn_for_0);
}

void mercury__parse_tree__parse_tree_out_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_tree_out_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_tree_out_info.
