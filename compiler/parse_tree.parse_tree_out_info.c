/*
** Automatically generated from `parse_tree_out_info.m'
** by the Mercury compiler,
** version rotd-2018-02-04
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
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


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
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
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_maybe_output_line_numbers_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_output_line_numbers_0[2];

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_output_line_numbers_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_maybe_qualified_item_names_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_qualified_item_names_0[2];

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_qualified_item_names_0[2];

static const MR_PseudoTypeInfo parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_types_merc_out_info_0_0[3];

static const MR_ConstString parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_names_merc_out_info_0_0[3];

static const MR_DuArgLocn parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_locns_merc_out_info_0_0[3];

static const MR_DuFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_functor_desc_merc_out_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_stag_ordered_merc_out_info_0_0[1];

static const MR_DuPtagLayout parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_ptag_ordered_merc_out_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_name_ordered_merc_out_info_0[1];

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_merc_out_info_0[1];

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_output_lang_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_output_lang_0[2];

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_output_lang_0[2];

static const MR_ConstString parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_var_names_output_1[1];

static const MR_TypeClassMethod parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_method_ids_output_1[23];

static const MR_TypeClassId parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_output_1;

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0(
  MR_String HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0(void);

static void MR_CALL 
parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_111_117_116_112_117_116_95_95_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_97_100_100_95_108_97_109_98_100_97_95_101_118_97_108_95_109_101_116_104_111_100_95_51_95_95_91_49_93_95_48_3_p_0(void);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0(
  MR_String HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0(
  MR_String HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0(
  MR_Float HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint64_3_3_p_0(
  uint64_t HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int64_3_3_p_0(
  int64_t HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint32_3_3_p_0(
  uint32_t HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int32_3_3_p_0(
  int32_t HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint16_3_3_p_0(
  uint16_t HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int16_3_3_p_0(
  int16_t HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint8_3_3_p_0(
  uint8_t HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int8_3_3_p_0(
  int8_t HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint_3_3_p_0(
  MR_Unsigned HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0(
  MR_Integer HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0(
  MR_Char HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0(
  MR_String HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_String HeadVar__4_4,
  MR_String * HeadVar__5_5);

static void MR_CALL 
parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_108_105_115_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String Sep_2,
  MR_Word Pred_3,
  MR_String STATE_VARIABLE_Str_0_4,
  MR_String * STATE_VARIABLE_Str_5);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0(
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_111_117_116_112_117_116_95_95_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_97_100_100_95_108_97_109_98_100_97_95_101_118_97_108_95_109_101_116_104_111_100_95_51_95_95_91_49_93_95_48_3_p_0(
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0(
  MR_Float HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint64_3_3_p_0(
  uint64_t HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int64_3_3_p_0(
  int64_t HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint32_3_3_p_0(
  uint32_t HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int32_3_3_p_0(
  int32_t HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint16_3_3_p_0(
  uint16_t HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int16_3_3_p_0(
  int16_t HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint8_3_3_p_0(
  uint8_t HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int8_3_3_p_0(
  int8_t HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint_3_3_p_0(
  MR_Unsigned HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0(
  MR_Integer HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0(
  MR_Char HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3);

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

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int8_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint8_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int16_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint16_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int32_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint32_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int64_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint64_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int8_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint8_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int16_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint16_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int32_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint32_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int64_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint64_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);


static /* final */ const MR_Box parse_tree__parse_tree_out_info_scalar_common_1[1][1];




static /* final */ const MR_Box parse_tree__parse_tree_out_info_scalar_common_1[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_0 = {
  (MR_String) "dont_output_line_numbers",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_1 = {
  (MR_String) "do_output_line_numbers",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_maybe_output_line_numbers_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "maybe_output_line_numbers",
  {     parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_output_line_numbers_0 },
  {     parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_maybe_output_line_numbers_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_output_line_numbers_0
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_0 = {
  (MR_String) "unqualified_item_names",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_1 = {
  (MR_String) "qualified_item_names",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_maybe_qualified_item_names_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "maybe_qualified_item_names",
  {     parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_qualified_item_names_0 },
  {     parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_maybe_qualified_item_names_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_qualified_item_names_0
};

static const MR_PseudoTypeInfo parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_types_merc_out_info_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_qualified_item_names_0,
  (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_output_line_numbers_0,
  (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0
};

static const MR_ConstString parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_names_merc_out_info_0_0[3] = {
  (MR_String) "moi_qualify_item_names",
  (MR_String) "moi_output_line_numbers",
  (MR_String) "moi_output_lang"
};

static const MR_DuArgLocn parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_locns_merc_out_info_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_functor_desc_merc_out_info_0_0 = {
  (MR_String) "merc_out_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_types_merc_out_info_0_0,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_names_merc_out_info_0_0,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_locns_merc_out_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_stag_ordered_merc_out_info_0_0[1] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_functor_desc_merc_out_info_0_0
};

static const MR_DuPtagLayout parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_ptag_ordered_merc_out_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_stag_ordered_merc_out_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "merc_out_info",
  {     parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_name_ordered_merc_out_info_0 },
  {     parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_ptag_ordered_merc_out_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_merc_out_info_0
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_0 = {
  (MR_String) "output_mercury",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_1 = {
  (MR_String) "output_debug",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_output_lang_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_info____Unify____output_lang_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info____Compare____output_lang_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "output_lang",
  {     parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_output_lang_0 },
  {     parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_output_lang_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_output_lang_0
};

const MR_BaseTypeclassInfo base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__string__arity0__[28] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 23)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int8_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint8_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int16_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint16_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int32_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint32_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int64_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint64_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__io__state__arity0__[28] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 23)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int8_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint8_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int16_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint16_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int32_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint32_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int64_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint64_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0_10001))
};

static const MR_ConstString parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_var_names_output_1[1] = {
  (MR_String) "U"
};

static const MR_TypeClassMethod parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_method_ids_output_1[23] = {
  {
    (MR_String) "add_string",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_strings",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_char",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_int",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_uint",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_int8",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_uint8",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_int16",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_uint16",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_int32",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_uint32",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_int64",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_uint64",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_float",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_purity_prefix",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_quoted_atom",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_quoted_string",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_constant",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_eval_method",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_lambda_eval_method",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_escaped_string",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "add_format",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "add_list",
    (MR_Integer) 5,
    MR_PREDICATE
  }
};

static const MR_TypeClassId parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_output_1 = {
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "output",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 23,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_var_names_output_1,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_method_ids_output_1
};

const MR_TypeClassDeclStruct parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_decl_output_1 = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_output_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__io__write_list_5_p_0(TypeInfo_for_T_6, HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__io__format_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0(
  MR_String HeadVar__1_1)
{
  mercury__term_io__write_escaped_string_3_p_0(HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0(void)
{
  parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_111_117_116_112_117_116_95_95_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_97_100_100_95_108_97_109_98_100_97_95_101_118_97_108_95_109_101_116_104_111_100_95_51_95_95_91_49_93_95_48_3_p_0();
}

static void MR_CALL 
parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_111_117_116_112_117_116_95_95_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_97_100_100_95_108_97_109_98_100_97_95_101_118_97_108_95_109_101_116_104_111_100_95_51_95_95_91_49_93_95_48_3_p_0(void)
{
  {
    MR_String LambdaEvalMethodStr_8;

    mercury__string__append_3_p_2((MR_String) "", (MR_String) "normal", &LambdaEvalMethodStr_8);
    mercury__io__write_string_3_p_0(LambdaEvalMethodStr_8);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String EvalMethodStr_8;
    MR_String STATE_VARIABLE_Str_9_16;
    MR_String Var_17;

    mercury__string__append_3_p_2((MR_String) "", (MR_String) "eval_", &STATE_VARIABLE_Str_9_16);
    Var_17 = parse_tree__prog_out__eval_method_to_string_1_f_0(HeadVar__1_1);
    mercury__string__append_3_p_2(STATE_VARIABLE_Str_9_16, Var_17, &EvalMethodStr_8);
    mercury__io__write_string_3_p_0(EvalMethodStr_8);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0(
  MR_Word HeadVar__1_1)
{
  mercury__term_io__write_constant_3_p_0(HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0(
  MR_String HeadVar__1_1)
{
  mercury__term_io__quote_string_3_p_0(HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0(
  MR_String HeadVar__1_1)
{
  mercury__term_io__quote_atom_3_p_0(HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0(
  MR_Word HeadVar__1_1)
{
  parse_tree__prog_out__write_purity_prefix_3_p_0(HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0(
  MR_Float HeadVar__1_1)
{
  mercury__io__write_float_3_p_0(HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint64_3_3_p_0(
  uint64_t HeadVar__1_1)
{
  {
    mercury__io__write_uint64_3_p_0(HeadVar__1_1);
    mercury__io__write_string_3_p_0((MR_String) "u64");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int64_3_3_p_0(
  int64_t HeadVar__1_1)
{
  {
    mercury__io__write_int64_3_p_0(HeadVar__1_1);
    mercury__io__write_string_3_p_0((MR_String) "i64");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint32_3_3_p_0(
  uint32_t HeadVar__1_1)
{
  {
    mercury__io__write_uint32_3_p_0(HeadVar__1_1);
    mercury__io__write_string_3_p_0((MR_String) "u32");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int32_3_3_p_0(
  int32_t HeadVar__1_1)
{
  {
    mercury__io__write_int32_3_p_0(HeadVar__1_1);
    mercury__io__write_string_3_p_0((MR_String) "i32");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint16_3_3_p_0(
  uint16_t HeadVar__1_1)
{
  {
    mercury__io__write_uint16_3_p_0(HeadVar__1_1);
    mercury__io__write_string_3_p_0((MR_String) "u16");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int16_3_3_p_0(
  int16_t HeadVar__1_1)
{
  {
    mercury__io__write_int16_3_p_0(HeadVar__1_1);
    mercury__io__write_string_3_p_0((MR_String) "i16");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint8_3_3_p_0(
  uint8_t HeadVar__1_1)
{
  {
    mercury__io__write_uint8_3_p_0(HeadVar__1_1);
    mercury__io__write_string_3_p_0((MR_String) "u8");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int8_3_3_p_0(
  int8_t HeadVar__1_1)
{
  {
    mercury__io__write_int8_3_p_0(HeadVar__1_1);
    mercury__io__write_string_3_p_0((MR_String) "i8");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint_3_3_p_0(
  MR_Unsigned HeadVar__1_1)
{
  {
    mercury__io__write_uint_3_p_0(HeadVar__1_1);
    mercury__io__write_char_3_p_0((MR_Char) 117);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0(
  MR_Integer HeadVar__1_1)
{
  mercury__io__write_int_3_p_0(HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0(
  MR_Char HeadVar__1_1)
{
  mercury__io__write_char_3_p_0(HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0(
  MR_Word HeadVar__1_1)
{
  mercury__io__write_strings_3_p_0(HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0(
  MR_String HeadVar__1_1)
{
  mercury__io__write_string_3_p_0(HeadVar__1_1);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_String HeadVar__4_4,
  MR_String * HeadVar__5_5)
{
  parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_108_105_115_116_95_95_91_49_93_95_48_5_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_108_105_115_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String Sep_2,
  MR_Word Pred_3,
  MR_String STATE_VARIABLE_Str_0_4,
  MR_String * STATE_VARIABLE_Str_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Str_5 = STATE_VARIABLE_Str_0_4;
    else
    {
      MR_Box Item_11 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_String STATE_VARIABLE_Str_20_20;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_3, (MR_Integer) 1)));
      MR_Box conv1_STATE_VARIABLE_Str_20_20;

      func_0(((MR_Box) Pred_3), Item_11, ((MR_Box) (STATE_VARIABLE_Str_0_4)), &conv1_STATE_VARIABLE_Str_20_20);
      STATE_VARIABLE_Str_20_20 = ((MR_String) conv1_STATE_VARIABLE_Str_20_20);
      if ((Items_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *STATE_VARIABLE_Str_5 = STATE_VARIABLE_Str_20_20;
      else
      {
        MR_String STATE_VARIABLE_Str_21_21;
        MR_Box Item_32;
        MR_Word Items_33;
        MR_String STATE_VARIABLE_Str_20_41;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_Str_20_41;

        mercury__string__append_3_p_2(STATE_VARIABLE_Str_20_20, Sep_2, &STATE_VARIABLE_Str_21_21);
        Item_32 = (MR_hl_field(MR_mktag(1), Items_12, (MR_Integer) 0));
        Items_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), Items_12, (MR_Integer) 1)));
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_3, (MR_Integer) 1)));
        func_2(((MR_Box) Pred_3), Item_32, ((MR_Box) (STATE_VARIABLE_Str_21_21)), &conv3_STATE_VARIABLE_Str_20_41);
        STATE_VARIABLE_Str_20_41 = ((MR_String) conv3_STATE_VARIABLE_Str_20_41);
        if ((Items_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *STATE_VARIABLE_Str_5 = STATE_VARIABLE_Str_20_41;
        else
        {
          MR_String STATE_VARIABLE_Str_21_42;
          MR_Word next_value_of_HeadVar__1_1;
          MR_String next_value_of_STATE_VARIABLE_Str_0_4;

          mercury__string__append_3_p_2(STATE_VARIABLE_Str_20_41, Sep_2, &STATE_VARIABLE_Str_21_42);
          // direct tailcall eliminated
          next_value_of_HeadVar__1_1 = Items_33;
          next_value_of_STATE_VARIABLE_Str_0_4 = STATE_VARIABLE_Str_21_42;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_Str_0_4 = next_value_of_STATE_VARIABLE_Str_0_4;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  {
    MR_String S_9;

    S_9 = mercury__string__format_2_f_0(HeadVar__1_1, HeadVar__2_2);
    mercury__string__append_3_p_2(HeadVar__3_3, S_9, HeadVar__4_4);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    MR_String ES_7;

    ES_7 = mercury__term_io__escaped_string_1_f_0(HeadVar__1_1);
    mercury__string__append_3_p_2(HeadVar__2_2, ES_7, HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0(
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_111_117_116_112_117_116_95_95_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_97_100_100_95_108_97_109_98_100_97_95_101_118_97_108_95_109_101_116_104_111_100_95_51_95_95_91_49_93_95_48_3_p_0(HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_111_117_116_112_117_116_95_95_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_97_100_100_95_108_97_109_98_100_97_95_101_118_97_108_95_109_101_116_104_111_100_95_51_95_95_91_49_93_95_48_3_p_0(
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    mercury__string__append_3_p_2(HeadVar__2_2, (MR_String) "normal", HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    MR_String STATE_VARIABLE_Str_9_9;
    MR_String Var_10;

    mercury__string__append_3_p_2(HeadVar__2_2, (MR_String) "eval_", &STATE_VARIABLE_Str_9_9);
    Var_10 = parse_tree__prog_out__eval_method_to_string_1_f_0(HeadVar__1_1);
    mercury__string__append_3_p_2(STATE_VARIABLE_Str_9_9, Var_10, HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    MR_String CS_7;

    CS_7 = mercury__term_io__format_constant_1_f_0(HeadVar__1_1);
    mercury__string__append_3_p_2(HeadVar__2_2, CS_7, HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    MR_String QA_7;

    QA_7 = mercury__term_io__quoted_string_1_f_0(HeadVar__1_1);
    mercury__string__append_3_p_2(HeadVar__2_2, QA_7, HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    MR_String QA_7;

    QA_7 = mercury__term_io__quoted_atom_1_f_0(HeadVar__1_1);
    mercury__string__append_3_p_2(HeadVar__2_2, QA_7, HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    MR_String S_7;

    S_7 = parse_tree__prog_out__purity_prefix_to_string_1_f_0(HeadVar__1_1);
    mercury__string__append_3_p_2(HeadVar__2_2, S_7, HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0(
  MR_Float HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    MR_String S_7;

    mercury__string__float_to_string_2_p_0(HeadVar__1_1, &S_7);
    mercury__string__append_3_p_2(HeadVar__2_2, S_7, HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint64_3_3_p_0(
  uint64_t HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    MR_String S_7;
    MR_String Var_8;

    Var_8 = mercury__string__uint64_to_string_1_f_0(HeadVar__1_1);
    S_7 = mercury__string__f_43_43_2_f_0(Var_8, (MR_String) "u64");
    mercury__string__append_3_p_2(HeadVar__2_2, S_7, HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int64_3_3_p_0(
  int64_t HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    MR_String S_7;
    MR_String Var_8;

    Var_8 = mercury__string__int64_to_string_1_f_0(HeadVar__1_1);
    S_7 = mercury__string__f_43_43_2_f_0(Var_8, (MR_String) "i64");
    mercury__string__append_3_p_2(HeadVar__2_2, S_7, HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint32_3_3_p_0(
  uint32_t HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    MR_String S_7;
    MR_String Var_8;

    Var_8 = mercury__string__uint32_to_string_1_f_0(HeadVar__1_1);
    S_7 = mercury__string__f_43_43_2_f_0(Var_8, (MR_String) "u32");
    mercury__string__append_3_p_2(HeadVar__2_2, S_7, HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int32_3_3_p_0(
  int32_t HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    MR_String S_7;
    MR_String Var_8;

    Var_8 = mercury__string__int32_to_string_1_f_0(HeadVar__1_1);
    S_7 = mercury__string__f_43_43_2_f_0(Var_8, (MR_String) "i32");
    mercury__string__append_3_p_2(HeadVar__2_2, S_7, HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint16_3_3_p_0(
  uint16_t HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    MR_String S_7;
    MR_String Var_8;

    Var_8 = mercury__string__uint16_to_string_1_f_0(HeadVar__1_1);
    S_7 = mercury__string__f_43_43_2_f_0(Var_8, (MR_String) "u16");
    mercury__string__append_3_p_2(HeadVar__2_2, S_7, HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int16_3_3_p_0(
  int16_t HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    MR_String S_7;
    MR_String Var_8;

    Var_8 = mercury__string__int16_to_string_1_f_0(HeadVar__1_1);
    S_7 = mercury__string__f_43_43_2_f_0(Var_8, (MR_String) "i16");
    mercury__string__append_3_p_2(HeadVar__2_2, S_7, HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint8_3_3_p_0(
  uint8_t HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    MR_String S_7;
    MR_String Var_8;

    Var_8 = mercury__string__uint8_to_string_1_f_0(HeadVar__1_1);
    S_7 = mercury__string__f_43_43_2_f_0(Var_8, (MR_String) "u8");
    mercury__string__append_3_p_2(HeadVar__2_2, S_7, HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int8_3_3_p_0(
  int8_t HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    MR_String S_7;
    MR_String Var_8;

    Var_8 = mercury__string__int8_to_string_1_f_0(HeadVar__1_1);
    S_7 = mercury__string__f_43_43_2_f_0(Var_8, (MR_String) "i8");
    mercury__string__append_3_p_2(HeadVar__2_2, S_7, HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint_3_3_p_0(
  MR_Unsigned HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    MR_String S_7;
    MR_String Var_8;

    Var_8 = mercury__string__uint_to_string_1_f_0(HeadVar__1_1);
    S_7 = mercury__string__f_43_43_2_f_0(Var_8, (MR_String) "u");
    mercury__string__append_3_p_2(HeadVar__2_2, S_7, HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0(
  MR_Integer HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    MR_String S_7;

    mercury__string__int_to_string_2_p_0(HeadVar__1_1, &S_7);
    mercury__string__append_3_p_2(HeadVar__2_2, S_7, HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0(
  MR_Char HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    MR_String S_7;

    mercury__string__char_to_string_2_p_0(HeadVar__1_1, &S_7);
    mercury__string__append_3_p_2(HeadVar__2_2, S_7, HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_7, 0) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(MR_mktag(1), Var_7, 1) = ((MR_Box) (HeadVar__1_1));
    }
    mercury__string__append_list_2_p_0(Var_7, HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  mercury__string__append_3_p_2(HeadVar__2_2, HeadVar__1_1, HeadVar__3_3);
}

void MR_CALL 
parse_tree__parse_tree_out_info____Compare____output_lang_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____output_lang_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ArgX2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY2_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_10;
      MR_Integer Var_17 = (MR_Integer) ArgX1_4;
      MR_Integer Var_18 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_10, Var_17, Var_18);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;
        MR_Integer Var_19 = (MR_Integer) ArgX2_6;
        MR_Integer Var_20 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_11, Var_19, Var_20);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          MR_Integer Var_21 = (MR_Integer) ArgX3_8;
          MR_Integer Var_22 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_21, Var_22);
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
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_list_5_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word TypeClassInfo_for_output_6,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box * HeadVar__5_5)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 27)));

    func_0(((MR_Box) TypeClassInfo_for_output_6), ((MR_Box) (TypeInfo_for_T_7)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)), HeadVar__4_4, HeadVar__5_5);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_format_4_p_0(
  MR_Word TypeClassInfo_for_output_5,
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 26)));

    func_0(((MR_Box) TypeClassInfo_for_output_5), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), HeadVar__3_3, HeadVar__4_4);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_escaped_string_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  MR_String HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 25)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_lambda_eval_method_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 24)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), ((MR_Box) ((MR_Integer) 0)), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_eval_method_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 23)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_constant_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 22)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_quoted_string_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  MR_String HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 21)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_quoted_atom_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  MR_String HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 20)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_purity_prefix_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 19)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_float_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  MR_Float HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 18)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), MR_box_float(HeadVar__1_1), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_uint64_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  uint64_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 17)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), MR_box_uint64(HeadVar__1_1), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_int64_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  int64_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 16)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), MR_box_int64(HeadVar__1_1), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_uint32_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  uint32_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 15)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_int32_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  int32_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 14)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_uint16_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  uint16_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 13)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_int16_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  int16_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 12)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_uint8_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  uint8_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 11)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_int8_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  int8_t HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 10)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_uint_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  MR_Unsigned HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 9)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_int_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  MR_Integer HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 8)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_char_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  MR_Char HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 7)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), ((MR_Box) (MR_Word) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_strings_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 6)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__add_string_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  MR_String HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 5)));

    func_0(((MR_Box) TypeClassInfo_for_output_4), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(
  MR_Word Info_4,
  MR_Word SymName_5,
  MR_Word * OutSymName_6)
{
  {
    MR_Word MaybeQualifiedItemNames_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

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
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *OutSymName_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_8));
          }
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(
  MR_Word Info_5,
  MR_Word Context_6)
{
  {
    MR_Word LineNumbers_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    switch (LineNumbers_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "\t% ");
          parse_tree__prog_out__write_context_3_p_0(Context_6);
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
  }
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__get_output_lang_1_f_0(
  MR_Word Info_3)
{
  {
    MR_Word HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__get_output_line_numbers_1_f_0(
  MR_Word Info_3)
{
  {
    MR_Word HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__get_maybe_qualified_item_names_1_f_0(
  MR_Word Info_3)
{
  {
    MR_Word HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__merc_out_info_disable_line_numbers_1_f_0(
  MR_Word Info0_3)
{
  {
    MR_Word Info_4;
    MR_Word Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info0_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info0_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info0_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

    {
      Info_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_4, 0) = ((MR_Box) ((Var_6 | (((((MR_Integer) 0 << (MR_Integer) 1)) | ((Var_8 << (MR_Integer) 2)))))));
    }
    return Info_4;
  }
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(
  MR_Word Globals_5,
  MR_Word MaybeQualifiedItemNames_6,
  MR_Word Lang_7)
{
  {
    MR_Word Info_8;
    MR_Word LineNumbersOpt_9;
    MR_Word LineNumbers_10;

    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 150, &LineNumbersOpt_9);
    switch (LineNumbersOpt_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        LineNumbers_10 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        LineNumbers_10 = (MR_Integer) 1;
        break;
    }
    {
      Info_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_8, 0) = ((MR_Box) ((MaybeQualifiedItemNames_6 | ((((LineNumbers_10 << (MR_Integer) 1)) | ((Lang_7 << (MR_Integer) 2)))))));
    }
    return Info_8;
  }
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__init_debug_merc_out_info_0_f_0(void)
{
  {
    return (MR_Word) &parse_tree__parse_tree_out_info_scalar_common_1[0];
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____output_lang_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_tree_out_info____Unify____output_lang_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____output_lang_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_tree_out_info____Compare____output_lang_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0(((MR_String) wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0(((MR_Word) wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0(((MR_Integer) wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint_3_3_p_0(((MR_Unsigned) wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int8_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int8_3_3_p_0(((int8_t) (MR_Word) wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint8_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint8_3_3_p_0(((uint8_t) (MR_Word) wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int16_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int16_3_3_p_0(((int16_t) (MR_Word) wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint16_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint16_3_3_p_0(((uint16_t) (MR_Word) wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int32_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int32_3_3_p_0(((int32_t) (MR_Word) wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint32_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint32_3_3_p_0(((uint32_t) (MR_Word) wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int64_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int64_3_3_p_0(MR_unbox_int64(wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint64_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_uint64_3_3_p_0(MR_unbox_uint64(wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0(MR_unbox_float(wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0(((MR_Word) wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0(((MR_String) wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0(((MR_String) wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0(((MR_Word) wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0(((MR_Word) wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0(((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0(((MR_String) wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__4_4;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0(((MR_String) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_String) wrapper_arg_3), &conv0_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__5_5;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_String) wrapper_arg_3), ((MR_Word) wrapper_arg_4), ((MR_String) wrapper_arg_5), &conv0_HeadVar__5_5);
    *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0(((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0(((MR_Integer) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint_3_3_p_0(((MR_Unsigned) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int8_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int8_3_3_p_0(((int8_t) (MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint8_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint8_3_3_p_0(((uint8_t) (MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int16_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int16_3_3_p_0(((int16_t) (MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint16_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint16_3_3_p_0(((uint16_t) (MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int32_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int32_3_3_p_0(((int32_t) (MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint32_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint32_3_3_p_0(((uint32_t) (MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int64_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int64_3_3_p_0(MR_unbox_int64(wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint64_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_uint64_3_3_p_0(MR_unbox_uint64(wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0(MR_unbox_float(wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0(((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0(((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0();
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0(((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0(((MR_String) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_String) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
  }
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
