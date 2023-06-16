/*
** Automatically generated from `pretty_printer.m'
** by the Mercury compiler,
** version rotd-2023-06-16
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


// :- module pretty_printer.
// :- implementation.

/*
INIT mercury__pretty_printer__init
REQUIRED_INIT mercury__pretty_printer__required_init
ENDINIT
*/

#include "pretty_printer.mih"
#include "pretty_printer.mh"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mercury__pretty_printer__list__pti_list_1__plain_type_desc__type_ctor_info_type_desc_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__pretty_printer__array__pti_array_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__pretty_printer__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__pretty_printer__tree234__pti_tree234_lazy_list_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__pretty_printer__version_array__pti_version_array_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_0[1];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_0;

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_1;

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_2;

static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1pretty_printer__type_ctor_info_doc_0;

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_3[1];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_3;

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_4[1];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_4;

static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1univ__type_ctor_info_univ_0;

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_5[2];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_5;

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_6[2];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_6;

static const MR_VA_TypeInfo_Struct1 mercury__pretty_printer____vti_func_1pretty_printer__type_ctor_info_doc_0;

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_7[1];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_7;

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_8[1];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_8;

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_0[2];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_1[1];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_2[1];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_3[5];

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_doc_0[4];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_doc_0[9];

static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_doc_0[9];

static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1type_desc__type_ctor_info_type_desc_0;

static const MR_VA_TypeInfo_Struct3 mercury__pretty_printer____vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0;

static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0;

static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0;

static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0;

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_formatter_map_entry_0_0[3];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_formatter_map_entry_0_0;

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_formatter_map_entry_0_0[1];

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_formatter_map_entry_0[1];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_formatter_map_entry_0[1];

static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_formatter_map_entry_0[1];

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_func_symbol_limit_0_0[1];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_func_symbol_limit_0_0;

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_func_symbol_limit_0_1[1];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_func_symbol_limit_0_1;

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_func_symbol_limit_0_0[1];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_func_symbol_limit_0_1[1];

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_func_symbol_limit_0[2];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_func_symbol_limit_0[2];

static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_func_symbol_limit_0[2];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_0;

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_indent_stack_0_1[3];

static const MR_ConstString mercury__pretty_printer__pretty_printer__field_names_indent_stack_0_1[3];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_1;

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_indent_stack_0_2[3];

static const MR_ConstString mercury__pretty_printer__pretty_printer__field_names_indent_stack_0_2[3];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_2;

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_indent_stack_0_0[1];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_indent_stack_0_1[1];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_indent_stack_0_2[1];

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_indent_stack_0[3];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_indent_stack_0[3];

static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_indent_stack_0[3];

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_key_value_pair_2_0[2];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_key_value_pair_2_0;

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_key_value_pair_2_0[1];

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_key_value_pair_2[1];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_key_value_pair_2[1];

static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_key_value_pair_2[1];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_0;

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_1;

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_2[1];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_2;

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_3;

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_4;

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_5;

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_6[1];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_6;

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_7[1];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_7;

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_0[5];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_1[1];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_2[1];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_3[1];

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_internal_0[4];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_pp_internal_0[8];

static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_pp_internal_0[8];

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_params_0_0[3];

static const MR_ConstString mercury__pretty_printer__pretty_printer__field_names_pp_params_0_0[3];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_params_0_0;

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_params_0_0[1];

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_params_0[1];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_pp_params_0[1];

static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_pp_params_0[1];

static MR_Box MR_CALL 
mercury__pretty_printer__IntroducedFrom__func__version_array_to_doc_loop__1840__1_3_f_0_1(
  MR_Box closure_arg);

static MR_Word MR_CALL 
mercury__pretty_printer__IntroducedFrom__func__version_array_to_doc_loop__1840__1_3_f_0(
  MR_Word TypeInfo_for_T_29,
  MR_Box VA_4,
  MR_Integer I_5);

static MR_Box MR_CALL 
mercury__pretty_printer__IntroducedFrom__func__array_to_doc_loop__1753__1_3_f_0_1(
  MR_Box closure_arg);

static MR_Word MR_CALL 
mercury__pretty_printer__IntroducedFrom__func__array_to_doc_loop__1753__1_3_f_0(
  MR_Word TypeInfo_for_T_29,
  MR_ArrayPtr A_4,
  MR_Integer I_5);

static void MR_CALL 
mercury__pretty_printer__pre_initialise_mutable_io_pp_params_0_p_0(void);

static void MR_CALL 
mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0(void);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_version_array_2_f_0(
  MR_Word Univ_4,
  MR_Word ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_tree234_2_f_0(
  MR_Word Univ_4,
  MR_Word ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_one_or_more_2_f_0(
  MR_Word Univ_4,
  MR_Word ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_list_2_f_0(
  MR_Word Univ_4,
  MR_Word ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_array_2_f_0(
  MR_Word Univ_4,
  MR_Word ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_string_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_uint64_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_54_52_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_uint32_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_51_50_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_uint16_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_49_54_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_uint8_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_56_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_uint_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_int64_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_54_52_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_int32_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_51_50_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_int16_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_49_54_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_int8_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_56_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_int_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_float_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_char_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4);

static MR_Box MR_CALL 
mercury__pretty_printer__version_array_to_doc_1_f_0_1(
  MR_Box closure_arg);

static MR_Box MR_CALL 
mercury__pretty_printer__tree234_elements_to_doc_1_f_0_1(
  MR_Box closure_arg);

static MR_Word MR_CALL 
mercury__pretty_printer__tree234_elements_to_doc_1_f_0(
  MR_Word TypeInfo_for_K_36,
  MR_Word TypeInfo_for_V_37,
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
mercury__pretty_printer__one_or_more_to_doc_1_f_0_1(
  MR_Box closure_arg);

static MR_Box MR_CALL 
mercury__pretty_printer__list_to_doc_loop_1_f_0_1(
  MR_Box closure_arg);

static MR_Word MR_CALL 
mercury__pretty_printer__list_to_doc_loop_1_f_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
mercury__pretty_printer__array_to_doc_1_f_0_1(
  MR_Box closure_arg);

static void MR_CALL 
mercury__pretty_printer__foldr__ho33_4_p_in__tree234_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_p_in__tree234_0(
  MR_String Var_53,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_51_53_95_95_91_51_93_95_48_4_p_in__tree234_0(
  MR_String Var_53,
  MR_String Var_54,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__pretty_printer__format_nl_8_p_0(
  MR_Word TypeClassInfo_for_writer_25,
  MR_Box Stream_9,
  MR_Integer LineWidth_10,
  MR_Word Indents_11,
  MR_Integer * RemainingWidth_12,
  MR_Integer STATE_VARIABLE_RemainingLines_0_15,
  MR_Integer * STATE_VARIABLE_RemainingLines_16,
  MR_Box STATE_VARIABLE_IO_0_17,
  MR_Box * STATE_VARIABLE_IO_18);

static void MR_CALL 
mercury__pretty_printer__expand_docs_to_line_end_11_p_0(
  MR_Word Canonicalize_1,
  MR_Word FMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word STATE_VARIABLE_Limit_0_6,
  MR_Word * STATE_VARIABLE_Limit_7,
  MR_Word STATE_VARIABLE_Pri_0_8,
  MR_Word * STATE_VARIABLE_Pri_9,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_10,
  MR_Integer * STATE_VARIABLE_RemainingWidth_11);

static void MR_CALL 
mercury__pretty_printer__LCMC__pred__expand_docs_to_line_end__1_11_p_0(
  MR_Word Canonicalize_1,
  MR_Word FMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_122,
  MR_Integer HeadVar__5_5,
  MR_Word STATE_VARIABLE_Limit_0_6,
  MR_Word * STATE_VARIABLE_Limit_7,
  MR_Word STATE_VARIABLE_Pri_0_8,
  MR_Word * STATE_VARIABLE_Pri_9,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_10,
  MR_Integer * STATE_VARIABLE_RemainingWidth_11);

static void MR_CALL 
mercury__pretty_printer__expand_format_univ_8_p_0(
  MR_Word Canonicalize_9,
  MR_Word FMap_10,
  MR_Word Univ_11,
  MR_Word TailDocs_12,
  MR_Word * Docs_13,
  MR_Word STATE_VARIABLE_Limit_0_29,
  MR_Word * STATE_VARIABLE_Limit_30,
  MR_Word CurrentPri_15);

static void MR_CALL 
mercury__pretty_printer__output_current_group_12_p_0(
  MR_Word TypeClassInfo_for_writer_85,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Integer HeadVar__6_6,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_7,
  MR_Integer * STATE_VARIABLE_RemainingWidth_8,
  MR_Integer STATE_VARIABLE_RemainingLines_0_9,
  MR_Integer * STATE_VARIABLE_RemainingLines_10,
  MR_Box STATE_VARIABLE_IO_0_11,
  MR_Box * STATE_VARIABLE_IO_12);

static void MR_CALL 
mercury__pretty_printer__output_indent_stack_4_p_0(
  MR_Word TypeClassInfo_for_writer_20,
  MR_Box Stream_5,
  MR_Word IndentStack_6,
  MR_Box STATE_VARIABLE_IO_0_12,
  MR_Box * STATE_VARIABLE_IO_13);

static void MR_CALL 
mercury__pretty_printer__output_std_indent_levels_4_p_0(
  MR_Word TypeClassInfo_for_writer_21,
  MR_Box Stream_5,
  MR_Integer NumLevels_6,
  MR_Box STATE_VARIABLE_IO_0_9,
  MR_Box * STATE_VARIABLE_IO_10);

static void MR_CALL 
mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_117_114_114_101_110_116_95_103_114_111_117_112_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_12_p_0(
  MR_Word TypeClassInfo_for_writer_85,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Integer HeadVar__6_6,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_7,
  MR_Integer * STATE_VARIABLE_RemainingWidth_8,
  MR_Integer STATE_VARIABLE_RemainingLines_0_9,
  MR_Integer * STATE_VARIABLE_RemainingLines_10);

static void MR_CALL 
mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_110_108_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(
  MR_Word TypeClassInfo_for_writer_25,
  MR_Word Stream_9,
  MR_Integer LineWidth_10,
  MR_Word Indents_11,
  MR_Integer * RemainingWidth_12,
  MR_Integer STATE_VARIABLE_RemainingLines_0_15,
  MR_Integer * STATE_VARIABLE_RemainingLines_16);

static void MR_CALL 
mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_100_101_110_116_95_115_116_97_99_107_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_20,
  MR_Word Stream_5,
  MR_Word IndentStack_6);

static void MR_CALL 
mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_100_95_105_110_100_101_110_116_95_108_101_118_101_108_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_21,
  MR_Word Stream_5,
  MR_Integer NumLevels_6);

static void MR_CALL 
mercury__pretty_printer__decrement_std_indent_2_p_0(
  MR_Word IndentStack0_3,
  MR_Word * IndentStack_4);

static void MR_CALL 
mercury__pretty_printer__increment_std_indent_2_p_0(
  MR_Word IndentStack0_3,
  MR_Word * IndentStack_4);

static void MR_CALL 
mercury__pretty_printer__increment_user_indent_3_p_0(
  MR_String IndentStr_4,
  MR_Word IndentStack0_5,
  MR_Word * IndentStack_6);

static void MR_CALL 
mercury__pretty_printer__expand_docs_to_line_end_11_p_1(
  MR_Word Canonicalize_1,
  MR_Word FMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word STATE_VARIABLE_Limit_0_6,
  MR_Word * STATE_VARIABLE_Limit_7,
  MR_Word STATE_VARIABLE_Pri_0_8,
  MR_Word * STATE_VARIABLE_Pri_9,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_10,
  MR_Integer * STATE_VARIABLE_RemainingWidth_11);

static void MR_CALL 
mercury__pretty_printer__LCMC__pred__expand_docs_to_line_end__1_11_p_1(
  MR_Word Canonicalize_1,
  MR_Word FMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_122,
  MR_Integer HeadVar__5_5,
  MR_Word STATE_VARIABLE_Limit_0_6,
  MR_Word * STATE_VARIABLE_Limit_7,
  MR_Word STATE_VARIABLE_Pri_0_8,
  MR_Word * STATE_VARIABLE_Pri_9,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_10,
  MR_Integer * STATE_VARIABLE_RemainingWidth_11);

static void MR_CALL 
mercury__pretty_printer__expand_format_susp_5_p_0(
  MR_Word Susp_6,
  MR_Word TailDocs_7,
  MR_Word * Docs_8,
  MR_Word STATE_VARIABLE_Limit_0_11,
  MR_Word * STATE_VARIABLE_Limit_12);

static void MR_CALL 
mercury__pretty_printer__expand_format_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word TailDocs_3,
  MR_Word * Docs_4,
  MR_Word STATE_VARIABLE_Limit_0_5,
  MR_Word * STATE_VARIABLE_Limit_6);

static void MR_CALL 
mercury__pretty_printer__expand_format_univ_8_p_1(
  MR_Word Canonicalize_9,
  MR_Word FMap_10,
  MR_Word Univ_11,
  MR_Word TailDocs_12,
  MR_Word * Docs_13,
  MR_Word STATE_VARIABLE_Limit_0_29,
  MR_Word * STATE_VARIABLE_Limit_30,
  MR_Word CurrentPri_15);

static void MR_CALL 
mercury__pretty_printer__expand_format_term_7_p_0(
  MR_String Name_8,
  MR_Word Args_9,
  MR_Word TailDocs_10,
  MR_Word * Docs_11,
  MR_Word STATE_VARIABLE_Limit_0_17,
  MR_Word * STATE_VARIABLE_Limit_18,
  MR_Word CurrentPri_13);

static void MR_CALL 
mercury__pretty_printer__set_func_limit_in_docs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word TailDocs_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
mercury__pretty_printer__expand_format_op_4_p_0(
  MR_String Op_5,
  MR_Word Args_6,
  MR_Word EnclosingPriority_7,
  MR_Word * Docs_8);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho29_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho29_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho28_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho28_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho27_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho27_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho26_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho26_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho25_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho25_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho24_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho24_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho23_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho23_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho22_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho22_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho21_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho21_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho20_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho20_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho19_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho19_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho18_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho18_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho17_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho17_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho16_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho16_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho15_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho15_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho14_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho14_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho13_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho13_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho12_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho12_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____doc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer____Compare____doc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____docs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer____Compare____docs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer____Compare____formatter_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer____Compare____formatter_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_map_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer____Compare____formatter_map_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____func_symbol_limit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer____Compare____func_symbol_limit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____indent_stack_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer____Compare____indent_stack_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____key_value_pair_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__pretty_printer____Compare____key_value_pair_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____open_groups_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer____Compare____open_groups_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_internal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer____Compare____pp_internal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer____Compare____pp_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__pretty_printer_scalar_common_1[23][3];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_3[3][5];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_4[26][2];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_5[37][1];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_6[2][6];

static /* final */ const MR_Integer mercury__pretty_printer_scalar_common_8[1][2];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_9[3][7];

static /* final */ const MR_Integer mercury__pretty_printer_scalar_common_10[1][3];


struct mercury__pretty_printer__vector_common_type_7_0_s {
  const MR_String mercury__pretty_printer__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct mercury__pretty_printer__vector_common_type_7_0_s mercury__pretty_printer_vector_common_7[58];



static /* final */ const MR_Box mercury__pretty_printer_scalar_common_1[23][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_3[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Integer) 78)),
    ((MR_Box) ((MR_Integer) 100)),
    ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[33])))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho12_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho13_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho14_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho15_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho16_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho17_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho18_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho19_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho20_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho21_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho22_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho23_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho24_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho25_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho26_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho27_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho28_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho29_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_3[3][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_func_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_4[0])),
    ((MR_Box) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_4[26][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[5]))),
    ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[13])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[6]))),
    ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[15])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[11]))),
    ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[10])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[6]))),
    ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[17])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[6]))),
    ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[10])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(2, &mercury__pretty_printer_scalar_common_5[34])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(2, &mercury__pretty_printer_scalar_common_5[35]))),
    ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[10])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[8]))),
    ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[24])))
  },
};

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_5[37][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "array([")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "])")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "[")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "]")) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "one_or_more(")) },
  /* row   5 */
  { ((MR_Box) ((MR_String) ", ")) },
  /* row   6 */
  { ((MR_Box) ((MR_String) "map([")) },
  /* row   7 */
  { ((MR_Box) ((MR_String) "version_array([")) },
  /* row   8 */
  { ((MR_Box) ((MR_String) "{")) },
  /* row   9 */
  { ((MR_Box) ((MR_String) "}")) },
  /* row  10 */
  { ((MR_Box) ((MR_String) "(")) },
  /* row  11 */
  { ((MR_Box) ((MR_String) ")")) },
  /* row  12 */
  { ((MR_Box) ((MR_String) " ")) },
  /* row  13 */
  { ((MR_Box) ((MR_String) "...")) },
  /* row  14 */
  { ((MR_Box) ((MR_String) "\?char\?")) },
  /* row  15 */
  { ((MR_Box) ((MR_String) "\?float\?")) },
  /* row  16 */
  { ((MR_Box) ((MR_String) "\?int\?")) },
  /* row  17 */
  { ((MR_Box) ((MR_String) "\?int8\?")) },
  /* row  18 */
  { ((MR_Box) ((MR_String) "\?int16\?")) },
  /* row  19 */
  { ((MR_Box) ((MR_String) "\?int32\?")) },
  /* row  20 */
  { ((MR_Box) ((MR_String) "\?int64\?")) },
  /* row  21 */
  { ((MR_Box) ((MR_String) "\?uint\?")) },
  /* row  22 */
  { ((MR_Box) ((MR_String) "\?uint8\?")) },
  /* row  23 */
  { ((MR_Box) ((MR_String) "\?uint16\?")) },
  /* row  24 */
  { ((MR_Box) ((MR_String) "\?uint32\?")) },
  /* row  25 */
  { ((MR_Box) ((MR_String) "\?uint64\?")) },
  /* row  26 */
  { ((MR_Box) ((MR_String) "\?string\?")) },
  /* row  27 */
  { ((MR_Box) ((MR_String) "\?array\?")) },
  /* row  28 */
  { ((MR_Box) ((MR_String) "\?list\?")) },
  /* row  29 */
  { ((MR_Box) ((MR_String) "\?one_or_more\?")) },
  /* row  30 */
  { ((MR_Box) ((MR_String) "\?tree234\?")) },
  /* row  31 */
  { ((MR_Box) ((MR_String) "\?version_array\?")) },
  /* row  32 */
  { ((MR_Box) ((MR_String) "")) },
  /* row  33 */
  { ((MR_Box) ((MR_Integer) 100)) },
  /* row  34 */
  { ((MR_Box) (((MR_Box) ((MR_Unsigned) 501U)))) },
  /* row  35 */
  { ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[14]))) },
  /* row  36 */
  { ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[25]))) },
};

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_6[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__pretty_printer__list__pti_list_1__plain_type_desc__type_ctor_info_type_desc_0)),
    ((MR_Box) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&mercury__pretty_printer_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__pretty_printer__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0))
  },
};

static /* final */ const MR_Integer mercury__pretty_printer_scalar_common_8[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_9[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mercury__pretty_printer_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__pretty_printer__array__pti_array_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&mercury__pretty_printer_scalar_common_10[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__pretty_printer__tree234__pti_tree234_lazy_list_2__pseudo_1__pseudo_2)),
    ((MR_Box) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&mercury__pretty_printer_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__pretty_printer__version_array__pti_version_array_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0))
  },
};

static /* final */ const MR_Integer mercury__pretty_printer_scalar_common_10[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};


static /* final */ const struct mercury__pretty_printer__vector_common_type_7_0_s mercury__pretty_printer_vector_common_7[58] = {
  /* row   0 */   { (MR_String) "  " },
  /* row   1 */   { (MR_String) "    " },
  /* row   2 */   { (MR_String) "      " },
  /* row   3 */   { (MR_String) "        " },
  /* row   4 */   { (MR_String) "          " },
  /* row   5 */   { (MR_String) "            " },
  /* row   6 */   { (MR_String) "              " },
  /* row   7 */   { (MR_String) "                " },
  /* row   8 */   { (MR_String) "                  " },
  /* row   9 */   { (MR_String) "                    " },
  /* row  10 */   { (MR_String) "                      " },
  /* row  11 */   { (MR_String) "                        " },
  /* row  12 */   { (MR_String) "                          " },
  /* row  13 */   { (MR_String) "                            " },
  /* row  14 */   { (MR_String) "                              " },
  /* row  15 */   { (MR_String) "                                " },
  /* row  16 */   { (MR_String) "                                  " },
  /* row  17 */   { (MR_String) "                                    " },
  /* row  18 */   { (MR_String) "                                      " },
  /* row  19 */   { (MR_String) "                                        " },
  /* row  20 */   { (MR_String) "                                          " },
  /* row  21 */   { (MR_String) "                                            " },
  /* row  22 */   { (MR_String) "                                              " },
  /* row  23 */   { (MR_String) "                                                " },
  /* row  24 */   { (MR_String) "                                                  " },
  /* row  25 */   { (MR_String) "                                                    " },
  /* row  26 */   { (MR_String) "                                                      " },
  /* row  27 */   { (MR_String) "                                                        " },
  /* row  28 */   { (MR_String) "                                                          " },
  /* row  29 */   { (MR_String) "  " },
  /* row  30 */   { (MR_String) "    " },
  /* row  31 */   { (MR_String) "      " },
  /* row  32 */   { (MR_String) "        " },
  /* row  33 */   { (MR_String) "          " },
  /* row  34 */   { (MR_String) "            " },
  /* row  35 */   { (MR_String) "              " },
  /* row  36 */   { (MR_String) "                " },
  /* row  37 */   { (MR_String) "                  " },
  /* row  38 */   { (MR_String) "                    " },
  /* row  39 */   { (MR_String) "                      " },
  /* row  40 */   { (MR_String) "                        " },
  /* row  41 */   { (MR_String) "                          " },
  /* row  42 */   { (MR_String) "                            " },
  /* row  43 */   { (MR_String) "                              " },
  /* row  44 */   { (MR_String) "                                " },
  /* row  45 */   { (MR_String) "                                  " },
  /* row  46 */   { (MR_String) "                                    " },
  /* row  47 */   { (MR_String) "                                      " },
  /* row  48 */   { (MR_String) "                                        " },
  /* row  49 */   { (MR_String) "                                          " },
  /* row  50 */   { (MR_String) "                                            " },
  /* row  51 */   { (MR_String) "                                              " },
  /* row  52 */   { (MR_String) "                                                " },
  /* row  53 */   { (MR_String) "                                                  " },
  /* row  54 */   { (MR_String) "                                                    " },
  /* row  55 */   { (MR_String) "                                                      " },
  /* row  56 */   { (MR_String) "                                                        " },
  /* row  57 */   { (MR_String) "                                                          " },
};


#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"
#line 1361 "pretty_printer.m"

    MR_Bool ML_pretty_printer_is_initialised = MR_NO;
    MR_Word ML_pretty_printer_default_formatter_map = 0;

#line 1692 "pretty_printer.m"
MR_Word mercury__pretty_printer__mutable_variable_io_pp_params;
#ifdef MR_THREAD_SAFE
    MercuryLock mercury__pretty_printer__mutable_variable_io_pp_params_lock;
#endif


#line 460 "pretty_printer.m"
void 
ML_write_doc_formatted(
  MR_Word TypeInfo_for_T_10,
  MR_Word X_4)
#line 460 "pretty_printer.m"
{
#line 460 "pretty_printer.m"
	mercury__pretty_printer__write_doc_formatted_3_p_0((MR_Word) TypeInfo_for_T_10, (MR_Box) X_4);
}

#line 462 "pretty_printer.m"
void 
ML_write_doc_formatted_to_stream(
  MR_Word TypeInfo_for_T_11,
  MR_Word Stream_5,
  MR_Word X_6)
#line 462 "pretty_printer.m"
{
#line 462 "pretty_printer.m"
	mercury__pretty_printer__write_doc_formatted_4_p_0((MR_Word) TypeInfo_for_T_11, (MR_Word) Stream_5, (MR_Box) X_6);
}

#line 1692 "pretty_printer.m"
void 
mercury__pretty_printer__user_init_pred_247_0(void)
#line 1692 "pretty_printer.m"
{
#line 1692 "pretty_printer.m"
	mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct1 mercury__pretty_printer__list__pti_list_1__plain_type_desc__type_ctor_info_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__pretty_printer__array__pti_array_1__pseudo_1 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__pretty_printer__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__pretty_printer__tree234__pti_tree234_lazy_list_2__pseudo_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_lazy_list_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__pretty_printer__version_array__pti_version_array_1__pseudo_1 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_0 = {
  (MR_String) "str",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__pretty_printer__pretty_printer__field_types_doc_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_1 = {
  (MR_String) "nl",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_2 = {
  (MR_String) "hard_nl",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1pretty_printer__type_ctor_info_doc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0) }
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_3[1] = { (MR_PseudoTypeInfo) (&mercury__pretty_printer__list__ti_list_1pretty_printer__type_ctor_info_doc_0) };

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_3 = {
  (MR_String) "docs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  mercury__pretty_printer__pretty_printer__field_types_doc_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_4[1] = { (MR_PseudoTypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0) };

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_4 = {
  (MR_String) "format_univ",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(4),
  mercury__pretty_printer__pretty_printer__field_types_doc_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0) }
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_5[2] = {
  (MR_PseudoTypeInfo) (&mercury__pretty_printer__list__ti_list_1univ__type_ctor_info_univ_0),
  (MR_PseudoTypeInfo) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0)
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_5 = {
  (MR_String) "format_list",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(5),
  mercury__pretty_printer__pretty_printer__field_types_doc_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_6[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__pretty_printer__list__ti_list_1univ__type_ctor_info_univ_0)
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_6 = {
  (MR_String) "format_term",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(6),
  mercury__pretty_printer__pretty_printer__field_types_doc_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_VA_TypeInfo_Struct1 mercury__pretty_printer____vti_func_1pretty_printer__type_ctor_info_doc_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 1,
  { (MR_TypeInfo) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0) }
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_7[1] = { (MR_PseudoTypeInfo) (&mercury__pretty_printer____vti_func_1pretty_printer__type_ctor_info_doc_0) };

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_7 = {
  (MR_String) "format_susp",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(7),
  mercury__pretty_printer__pretty_printer__field_types_doc_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_8[1] = { (MR_PseudoTypeInfo) (&mercury__pretty_printer__pretty_printer__type_ctor_info_pp_internal_0) };

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_8 = {
  (MR_String) "pp_internal",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(8),
  mercury__pretty_printer__pretty_printer__field_types_doc_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_0[2] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_1,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_2
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_1[1] = { &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_0 };

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_2[1] = { &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_3 };

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_3[5] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_4,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_5,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_6,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_7,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_8
};

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_doc_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(5),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_doc_0[9] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_3,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_5,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_7,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_6,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_4,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_2,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_1,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_8,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_0
};

static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_doc_0[9] = {
  (MR_Integer) 8,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 7
};

const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____doc_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____doc_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "doc",
  { mercury__pretty_printer__pretty_printer__du_name_ordered_doc_0 },
  { mercury__pretty_printer__pretty_printer__du_ptag_ordered_doc_0 },
  (MR_Integer) 9,
  UINT16_C(12),
  mercury__pretty_printer__pretty_printer__functor_number_map_doc_0,

};

const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_docs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pretty_printer____Unify____docs_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____docs_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "docs",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__pretty_printer__list__ti_list_1pretty_printer__type_ctor_info_doc_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1type_desc__type_ctor_info_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0) }
};

static const MR_VA_TypeInfo_Struct3 mercury__pretty_printer____vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0),
    (MR_TypeInfo) (&mercury__pretty_printer__list__ti_list_1type_desc__type_ctor_info_type_desc_0),
    (MR_TypeInfo) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_formatter_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pretty_printer____Unify____formatter_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____formatter_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "formatter",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__pretty_printer____vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__pretty_printer____vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0)
  }
};

static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0)
  }
};

static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_formatter_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pretty_printer____Unify____formatter_map_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____formatter_map_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "formatter_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_formatter_map_entry_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_formatter_map_entry_0_0 = {
  (MR_String) "formatter_map_entry",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__pretty_printer__pretty_printer__field_types_formatter_map_entry_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_formatter_map_entry_0_0[1] = { &mercury__pretty_printer__pretty_printer__du_functor_desc_formatter_map_entry_0_0 };

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_formatter_map_entry_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_formatter_map_entry_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_formatter_map_entry_0[1] = { &mercury__pretty_printer__pretty_printer__du_functor_desc_formatter_map_entry_0_0 };

static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_formatter_map_entry_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_formatter_map_entry_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____formatter_map_entry_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____formatter_map_entry_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "formatter_map_entry",
  { mercury__pretty_printer__pretty_printer__du_name_ordered_formatter_map_entry_0 },
  { mercury__pretty_printer__pretty_printer__du_ptag_ordered_formatter_map_entry_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__pretty_printer__pretty_printer__functor_number_map_formatter_map_entry_0,

};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_func_symbol_limit_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_func_symbol_limit_0_0 = {
  (MR_String) "linear",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__pretty_printer__pretty_printer__field_types_func_symbol_limit_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_func_symbol_limit_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_func_symbol_limit_0_1 = {
  (MR_String) "triangular",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__pretty_printer__pretty_printer__field_types_func_symbol_limit_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_func_symbol_limit_0_0[1] = { &mercury__pretty_printer__pretty_printer__du_functor_desc_func_symbol_limit_0_0 };

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_func_symbol_limit_0_1[1] = { &mercury__pretty_printer__pretty_printer__du_functor_desc_func_symbol_limit_0_1 };

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_func_symbol_limit_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_func_symbol_limit_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_func_symbol_limit_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_func_symbol_limit_0[2] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_func_symbol_limit_0_0,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_func_symbol_limit_0_1
};

static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_func_symbol_limit_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_func_symbol_limit_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____func_symbol_limit_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____func_symbol_limit_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "func_symbol_limit",
  { mercury__pretty_printer__pretty_printer__du_name_ordered_func_symbol_limit_0 },
  { mercury__pretty_printer__pretty_printer__du_ptag_ordered_func_symbol_limit_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__pretty_printer__pretty_printer__functor_number_map_func_symbol_limit_0,

};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_0 = {
  (MR_String) "indent_empty",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_indent_stack_0_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__pretty_printer__pretty_printer__type_ctor_info_indent_stack_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mercury__pretty_printer__pretty_printer__field_names_indent_stack_0_1[3] = {
  (MR_String) "user_prevstack",
  (MR_String) "user_indent_string",
  (MR_String) "user_total_code_points"
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_1 = {
  (MR_String) "indent_user",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__pretty_printer__pretty_printer__field_types_indent_stack_0_1,
  mercury__pretty_printer__pretty_printer__field_names_indent_stack_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_indent_stack_0_2[3] = {
  (MR_PseudoTypeInfo) (&mercury__pretty_printer__pretty_printer__type_ctor_info_indent_stack_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mercury__pretty_printer__pretty_printer__field_names_indent_stack_0_2[3] = {
  (MR_String) "std_prevstack",
  (MR_String) "std_extra_indent_levels",
  (MR_String) "std_total_code_points"
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_2 = {
  (MR_String) "indent_std",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__pretty_printer__pretty_printer__field_types_indent_stack_0_2,
  mercury__pretty_printer__pretty_printer__field_names_indent_stack_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_indent_stack_0_0[1] = { &mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_0 };

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_indent_stack_0_1[1] = { &mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_1 };

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_indent_stack_0_2[1] = { &mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_2 };

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_indent_stack_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_indent_stack_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_indent_stack_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_indent_stack_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_indent_stack_0[3] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_0,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_2,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_1
};

static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_indent_stack_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_indent_stack_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____indent_stack_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____indent_stack_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "indent_stack",
  { mercury__pretty_printer__pretty_printer__du_name_ordered_indent_stack_0 },
  { mercury__pretty_printer__pretty_printer__du_ptag_ordered_indent_stack_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__pretty_printer__pretty_printer__functor_number_map_indent_stack_0,

};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_key_value_pair_2_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2)
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_key_value_pair_2_0 = {
  (MR_String) "->",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__pretty_printer__pretty_printer__field_types_key_value_pair_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_key_value_pair_2_0[1] = { &mercury__pretty_printer__pretty_printer__du_functor_desc_key_value_pair_2_0 };

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_key_value_pair_2[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_key_value_pair_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_key_value_pair_2[1] = { &mercury__pretty_printer__pretty_printer__du_functor_desc_key_value_pair_2_0 };

static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_key_value_pair_2[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_key_value_pair_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____key_value_pair_2_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____key_value_pair_2_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "key_value_pair",
  { mercury__pretty_printer__pretty_printer__du_name_ordered_key_value_pair_2 },
  { mercury__pretty_printer__pretty_printer__du_ptag_ordered_key_value_pair_2 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__pretty_printer__pretty_printer__functor_number_map_key_value_pair_2,

};

const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_open_groups_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pretty_printer____Unify____open_groups_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____open_groups_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "open_groups",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_0 = {
  (MR_String) "open_group",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_1 = {
  (MR_String) "close_group",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_2 = {
  (MR_String) "add_indent",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_3 = {
  (MR_String) "remove_indent",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_4 = {
  (MR_String) "inc_std_indent",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_5 = {
  (MR_String) "dec_std_indent",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_6[1] = { (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_priority_0) };

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_6 = {
  (MR_String) "set_op_priority",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(6),
  mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_7[1] = { (MR_PseudoTypeInfo) (&mercury__pretty_printer__pretty_printer__type_ctor_info_func_symbol_limit_0) };

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_7 = {
  (MR_String) "set_limit",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(7),
  mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_0[5] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_0,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_1,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_3,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_4,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_5
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_1[1] = { &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_2 };

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_2[1] = { &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_6 };

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_3[1] = { &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_7 };

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_internal_0[4] = {
  {
    UINT32_C(5),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_pp_internal_0[8] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_2,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_1,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_5,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_4,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_0,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_3,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_7,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_6
};

static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_pp_internal_0[8] = {
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 7,
  (MR_Integer) 6
};

const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_pp_internal_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____pp_internal_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____pp_internal_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "pp_internal",
  { mercury__pretty_printer__pretty_printer__du_name_ordered_pp_internal_0 },
  { mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_internal_0 },
  (MR_Integer) 8,
  UINT16_C(12),
  mercury__pretty_printer__pretty_printer__functor_number_map_pp_internal_0,

};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_params_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__pretty_printer__pretty_printer__type_ctor_info_func_symbol_limit_0)
};

static const MR_ConstString mercury__pretty_printer__pretty_printer__field_names_pp_params_0_0[3] = {
  (MR_String) "pp_line_width",
  (MR_String) "pp_max_lines",
  (MR_String) "pp_limit"
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_params_0_0 = {
  (MR_String) "pp_params",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__pretty_printer__pretty_printer__field_types_pp_params_0_0,
  mercury__pretty_printer__pretty_printer__field_names_pp_params_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_params_0_0[1] = { &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_params_0_0 };

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_pp_params_0[1] = { &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_params_0_0 };

static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_pp_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_pp_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____pp_params_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____pp_params_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "pp_params",
  { mercury__pretty_printer__pretty_printer__du_name_ordered_pp_params_0 },
  { mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__pretty_printer__pretty_printer__functor_number_map_pp_params_0,

};

void MR_CALL 
mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_117_116_95_100_111_99_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_writer_30,
  MR_Word Stream_8,
  MR_Word Canonicalize_9,
  MR_Word FMap_10,
  MR_Word Params_11,
  MR_Word Doc_12)
{
  MR_Integer MaxLines_16 = ((MR_Integer) ((MR_hl_field(0, Params_11, (MR_Integer) 1))));
  MR_Word Limit_17 = ((MR_Word) ((MR_hl_field(0, Params_11, (MR_Integer) 2))));
  MR_Integer RemainingWidth_18 = ((MR_Integer) ((MR_hl_field(0, Params_11, (MR_Integer) 0))));
  MR_Word Var_27;
  MR_Integer Var_20;
  MR_Word Var_21;
  MR_Integer Var_22;
  MR_Word Var_23;
  MR_Word Var_24;

  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Doc_12));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_112_117_116_95_100_111_99_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_17_p_0(TypeClassInfo_for_writer_30, Stream_8, Canonicalize_9, FMap_10, RemainingWidth_18, Var_27, RemainingWidth_18, &Var_20, (MR_Word) ((MR_Unsigned) 0U), &Var_21, MaxLines_16, &Var_22, Limit_17, &Var_23, (MR_Word) (((MR_Box) ((MR_Unsigned) 1U))), &Var_24);
}

void MR_CALL 
mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_117_116_95_100_111_99_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_7_p_1(
  MR_Word TypeClassInfo_for_writer_30,
  MR_Word Stream_8,
  MR_Word Canonicalize_9,
  MR_Word FMap_10,
  MR_Word Params_11,
  MR_Word Doc_12)
{
  MR_Integer MaxLines_16 = ((MR_Integer) ((MR_hl_field(0, Params_11, (MR_Integer) 1))));
  MR_Word Limit_17 = ((MR_Word) ((MR_hl_field(0, Params_11, (MR_Integer) 2))));
  MR_Integer RemainingWidth_18 = ((MR_Integer) ((MR_hl_field(0, Params_11, (MR_Integer) 0))));
  MR_Word Var_27;
  MR_Integer Var_20;
  MR_Word Var_21;
  MR_Integer Var_22;
  MR_Word Var_23;
  MR_Word Var_24;

  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Doc_12));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_112_117_116_95_100_111_99_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_17_p_1(TypeClassInfo_for_writer_30, Stream_8, Canonicalize_9, FMap_10, RemainingWidth_18, Var_27, RemainingWidth_18, &Var_20, (MR_Word) ((MR_Unsigned) 0U), &Var_21, MaxLines_16, &Var_22, Limit_17, &Var_23, (MR_Word) (((MR_Box) ((MR_Unsigned) 1U))), &Var_24);
}

void MR_CALL 
mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_112_117_116_95_100_111_99_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_17_p_0(
  MR_Word TypeClassInfo_for_writer_115,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_6,
  MR_Integer * STATE_VARIABLE_RemainingWidth_7,
  MR_Word STATE_VARIABLE_Indents_0_8,
  MR_Word * STATE_VARIABLE_Indents_9,
  MR_Integer STATE_VARIABLE_RemainingLines_0_10,
  MR_Integer * STATE_VARIABLE_RemainingLines_11,
  MR_Word STATE_VARIABLE_Limit_0_12,
  MR_Word * STATE_VARIABLE_Limit_13,
  MR_Word STATE_VARIABLE_Pri_0_14,
  MR_Word * STATE_VARIABLE_Pri_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Pri_15 = STATE_VARIABLE_Pri_0_14;
      *STATE_VARIABLE_Limit_13 = STATE_VARIABLE_Limit_0_12;
      *STATE_VARIABLE_RemainingLines_11 = STATE_VARIABLE_RemainingLines_0_10;
      *STATE_VARIABLE_Indents_9 = STATE_VARIABLE_Indents_0_8;
      *STATE_VARIABLE_RemainingWidth_7 = STATE_VARIABLE_RemainingWidth_0_6;
    }
    else
    {
      MR_Word HeadDoc0_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word TailDocs0_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));

      succeeded = (STATE_VARIABLE_RemainingLines_0_10 <= (MR_Integer) 0);
      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_115, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv1_STATE_VARIABLE_IO_17;

        func_0(((MR_Box) (TypeClassInfo_for_writer_115)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) ((MR_String) "...")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_17);
        *STATE_VARIABLE_Pri_15 = STATE_VARIABLE_Pri_0_14;
        *STATE_VARIABLE_Limit_13 = STATE_VARIABLE_Limit_0_12;
        *STATE_VARIABLE_RemainingLines_11 = STATE_VARIABLE_RemainingLines_0_10;
        *STATE_VARIABLE_Indents_9 = STATE_VARIABLE_Indents_0_8;
        *STATE_VARIABLE_RemainingWidth_7 = STATE_VARIABLE_RemainingWidth_0_6;
      }
      else
      {
        MR_Word Docs_54;
        MR_Integer STATE_VARIABLE_RemainingWidth_84_84;
        MR_Integer STATE_VARIABLE_RemainingLines_87_87;
        MR_Word STATE_VARIABLE_Limit_92_92;
        MR_Word STATE_VARIABLE_Pri_97_97;
        MR_Word STATE_VARIABLE_Indents_102_102;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Integer next_value_of_STATE_VARIABLE_RemainingWidth_0_6;
        MR_Word next_value_of_STATE_VARIABLE_Indents_0_8;
        MR_Integer next_value_of_STATE_VARIABLE_RemainingLines_0_10;
        MR_Word next_value_of_STATE_VARIABLE_Limit_0_12;
        MR_Word next_value_of_STATE_VARIABLE_Pri_0_14;

        switch (MR_tag((MR_Word) HeadDoc0_44)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadDoc0_44)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer IndentWidth_55;
                  MR_Integer Var_85;

                  switch (MR_tag((MR_Word) STATE_VARIABLE_Indents_0_8)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      IndentWidth_55 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      IndentWidth_55 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_Indents_0_8, (MR_Integer) 2))));
                      break;
                    case (MR_Integer) 2:
                      IndentWidth_55 = ((MR_Integer) ((MR_hl_field(2, STATE_VARIABLE_Indents_0_8, (MR_Integer) 2))));
                      break;
                  }
                  Var_85 = (MR_Integer) ((MR_Unsigned) HeadVar__4_4 - (MR_Unsigned) IndentWidth_55);
                  succeeded = (STATE_VARIABLE_RemainingWidth_0_6 < Var_85);
                  if (succeeded)
                    mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_110_108_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeClassInfo_for_writer_115, HeadVar__1_1, HeadVar__4_4, STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_RemainingWidth_84_84, STATE_VARIABLE_RemainingLines_0_10, &STATE_VARIABLE_RemainingLines_87_87);
                  else
                  {
                    STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                    STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                  }
                  Docs_54 = TailDocs0_45;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_110_108_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeClassInfo_for_writer_115, HeadVar__1_1, HeadVar__4_4, STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_RemainingWidth_84_84, STATE_VARIABLE_RemainingLines_0_10, &STATE_VARIABLE_RemainingLines_87_87);
                  Docs_54 = TailDocs0_45;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String String_52 = ((MR_String) ((MR_hl_field(1, HeadDoc0_44, (MR_Integer) 0))));
              MR_Integer StrWidth_53;
              void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_115, (MR_Integer) 0)), (MR_Integer) 5))));
              MR_Box conv3_STATE_VARIABLE_IO_83_83;

              func_2(((MR_Box) (TypeClassInfo_for_writer_115)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (String_52)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_83_83);
              mercury__string__count_code_points_loop_4_p_0(String_52, (MR_Integer) 0, (MR_Integer) 0, &StrWidth_53);
              STATE_VARIABLE_RemainingWidth_84_84 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingWidth_0_6 - (MR_Unsigned) StrWidth_53);
              Docs_54 = TailDocs0_45;
              STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
              STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
              STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
              STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HeadDocs0_56 = ((MR_Word) ((MR_hl_field(2, HeadDoc0_44, (MR_Integer) 0))));

              mercury__list__append_3_p_1((MR_Word) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0), HeadDocs0_56, TailDocs0_45, &Docs_54);
              STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
              STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
              STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
              STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
              STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Univ_57 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 1))));

                  mercury__pretty_printer__expand_format_univ_8_p_0(HeadVar__2_2, HeadVar__3_3, Univ_57, TailDocs0_45, &Docs_54, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_92_92, STATE_VARIABLE_Pri_0_14);
                  STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Univs_58 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 1))));
                  MR_Word Sep_59 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 2))));

                  mercury__pretty_printer__expand_format_list_6_p_0(Univs_58, Sep_59, TailDocs0_45, &Docs_54, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_92_92);
                  STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Name_60 = ((MR_String) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 1))));
                  MR_Word Univs_114 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 2))));

                  mercury__pretty_printer__expand_format_term_7_p_0(Name_60, Univs_114, TailDocs0_45, &Docs_54, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_92_92, STATE_VARIABLE_Pri_0_14);
                  STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Susp_61 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 1))));

                  mercury__pretty_printer__expand_format_susp_5_p_0(Susp_61, TailDocs0_45, &Docs_54, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_92_92);
                  STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Internal_62 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) Internal_62)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(Internal_62)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word Docs1_65;
                            MR_Integer RemainingWidthAfterGroup_66;

                            mercury__pretty_printer__expand_docs_to_line_end_11_p_0(HeadVar__2_2, HeadVar__3_3, TailDocs0_45, &Docs1_65, (MR_Integer) 1, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_92_92, STATE_VARIABLE_Pri_0_14, &STATE_VARIABLE_Pri_97_97, STATE_VARIABLE_RemainingWidth_0_6, &RemainingWidthAfterGroup_66);
                            succeeded = (RemainingWidthAfterGroup_66 >= (MR_Integer) 0);
                            if (succeeded)
                              mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_117_114_114_101_110_116_95_103_114_111_117_112_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_12_p_0(TypeClassInfo_for_writer_115, HeadVar__1_1, HeadVar__4_4, STATE_VARIABLE_Indents_0_8, Docs1_65, &Docs_54, (MR_Integer) 1, STATE_VARIABLE_RemainingWidth_0_6, &STATE_VARIABLE_RemainingWidth_84_84, STATE_VARIABLE_RemainingLines_0_10, &STATE_VARIABLE_RemainingLines_87_87);
                            else
                            {
                              Docs_54 = Docs1_65;
                              STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                              STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                            }
                            STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                            STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                            STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                            Docs_54 = TailDocs0_45;
                            STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                            STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            switch (MR_tag((MR_Word) STATE_VARIABLE_Indents_0_8)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140pretty_printer.decrement_user_indent\'/2", (MR_String) "last indent is not user indent");
                                  return;
                                }
                                break;
                              case (MR_Integer) 1:
                                STATE_VARIABLE_Indents_102_102 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Indents_0_8, (MR_Integer) 0))));
                                break;
                              case (MR_Integer) 2:
                                {
                                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140pretty_printer.decrement_user_indent\'/2", (MR_String) "last indent is not user indent");
                                  return;
                                }
                                break;
                            }
                            STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                            STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                            Docs_54 = TailDocs0_45;
                            STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                            STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            mercury__pretty_printer__increment_std_indent_2_p_0(STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_Indents_102_102);
                            STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                            STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                            Docs_54 = TailDocs0_45;
                            STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                            STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                          }
                          break;
                        case (MR_Integer) 4:
                          {
                            mercury__pretty_printer__decrement_std_indent_2_p_0(STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_Indents_102_102);
                            STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                            STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                            Docs_54 = TailDocs0_45;
                            STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                            STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String IndentStr_67 = ((MR_String) ((MR_hl_field(1, Internal_62, (MR_Integer) 0))));

                        mercury__pretty_printer__increment_user_indent_3_p_0(IndentStr_67, STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_Indents_102_102);
                        STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                        STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                        Docs_54 = TailDocs0_45;
                        STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                        STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_Pri_97_97 = ((MR_Word) ((MR_hl_field(2, Internal_62, (MR_Integer) 0))));
                        STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                        STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                        Docs_54 = TailDocs0_45;
                        STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                        STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_Limit_92_92 = ((MR_Word) ((MR_hl_field(3, Internal_62, (MR_Integer) 0))));
                        STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                        STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                        Docs_54 = TailDocs0_45;
                        STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                        STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__5_5 = Docs_54;
        next_value_of_STATE_VARIABLE_RemainingWidth_0_6 = STATE_VARIABLE_RemainingWidth_84_84;
        next_value_of_STATE_VARIABLE_Indents_0_8 = STATE_VARIABLE_Indents_102_102;
        next_value_of_STATE_VARIABLE_RemainingLines_0_10 = STATE_VARIABLE_RemainingLines_87_87;
        next_value_of_STATE_VARIABLE_Limit_0_12 = STATE_VARIABLE_Limit_92_92;
        next_value_of_STATE_VARIABLE_Pri_0_14 = STATE_VARIABLE_Pri_97_97;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        STATE_VARIABLE_RemainingWidth_0_6 = next_value_of_STATE_VARIABLE_RemainingWidth_0_6;
        STATE_VARIABLE_Indents_0_8 = next_value_of_STATE_VARIABLE_Indents_0_8;
        STATE_VARIABLE_RemainingLines_0_10 = next_value_of_STATE_VARIABLE_RemainingLines_0_10;
        STATE_VARIABLE_Limit_0_12 = next_value_of_STATE_VARIABLE_Limit_0_12;
        STATE_VARIABLE_Pri_0_14 = next_value_of_STATE_VARIABLE_Pri_0_14;
        continue;
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__IntroducedFrom__func__version_array_to_doc_loop__1840__1_3_f_0_1(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_1;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__1_25;

  conv0_LambdaHeadVar__1_25 = mercury__pretty_printer__IntroducedFrom__func__version_array_to_doc_loop__1840__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Box) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
  wrapper_arg_1 = ((MR_Box) (conv0_LambdaHeadVar__1_25));
  return wrapper_arg_1;
}

static MR_Word MR_CALL 
mercury__pretty_printer__IntroducedFrom__func__version_array_to_doc_loop__1840__1_3_f_0(
  MR_Word TypeInfo_for_T_29,
  MR_Box VA_4,
  MR_Integer I_5)
{
  MR_bool succeeded;
  MR_Word LambdaHeadVar__1_25;
  MR_Integer Var_26 = (MR_Integer) ((MR_Unsigned) I_5 + (MR_Unsigned) 1);
  MR_Integer Var_31;
  MR_Integer Var_43;

{
#define MR_PROC_LABEL mercury__pretty_printer__IntroducedFrom__func__version_array_to_doc_loop__1840__1_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_4 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_43  = N;
}
  Var_31 = (MR_Integer) ((MR_Unsigned) Var_43 - (MR_Unsigned) 1);
  succeeded = (Var_26 > Var_31);
  if (succeeded)
    LambdaHeadVar__1_25 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[32]));
  else
  {
    MR_Box Elem_30;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_54;
    MR_Box Var_45;
    MR_Integer Var_42;
    MR_Integer Var_58;

{
#define MR_PROC_LABEL mercury__pretty_printer__IntroducedFrom__func__version_array_to_doc_loop__1840__1_3_f_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *)VA_4 ;
	I = Var_26 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_45  = (MR_Box) X;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Elem_30 = Var_45;
    else
    {
      MR_Integer Var_46;
      MR_Integer Var_48;

{
#define MR_PROC_LABEL mercury__pretty_printer__IntroducedFrom__func__version_array_to_doc_loop__1840__1_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_4 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_48  = N;
}
      Var_46 = (MR_Integer) ((MR_Unsigned) Var_48 - (MR_Unsigned) 1);
      mercury__version_array__out_of_bounds_error_3_p_0(Var_26, Var_46, (MR_String) "version_array.lookup");
    }
    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_29, Elem_30, &Var_50);
    {
      Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_34, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_34));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[23])));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_33, 0) = ((MR_Box) (Var_51));
    }
{
#define MR_PROC_LABEL mercury__pretty_printer__IntroducedFrom__func__version_array_to_doc_loop__1840__1_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_4 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_58  = N;
}
    Var_42 = (MR_Integer) ((MR_Unsigned) Var_58 - (MR_Unsigned) 1);
    succeeded = (Var_26 == Var_42);
    if (succeeded)
      Var_36 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[32]));
    else
      Var_36 = (MR_Word) (MR_mkword(2, &mercury__pretty_printer_scalar_common_5[36]));
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (&mercury__pretty_printer_scalar_common_9[2]));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (mercury__pretty_printer__IntroducedFrom__func__version_array_to_doc_loop__1840__1_3_f_0_1));
      MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_40, 3) = ((MR_Box) (TypeInfo_for_T_29));
      MR_hl_field(0, Var_40, 4) = ((MR_Box) (VA_4));
      MR_hl_field(0, Var_40, 5) = ((MR_Box) (Var_26));
    }
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      LambdaHeadVar__1_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, LambdaHeadVar__1_25, 0) = ((MR_Box) (Var_32));
    }
  }
  return LambdaHeadVar__1_25;
}

static MR_Box MR_CALL 
mercury__pretty_printer__IntroducedFrom__func__array_to_doc_loop__1753__1_3_f_0_1(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_1;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__1_25;

  conv0_LambdaHeadVar__1_25 = mercury__pretty_printer__IntroducedFrom__func__array_to_doc_loop__1753__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_ArrayPtr) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
  wrapper_arg_1 = ((MR_Box) (conv0_LambdaHeadVar__1_25));
  return wrapper_arg_1;
}

static MR_Word MR_CALL 
mercury__pretty_printer__IntroducedFrom__func__array_to_doc_loop__1753__1_3_f_0(
  MR_Word TypeInfo_for_T_29,
  MR_ArrayPtr A_4,
  MR_Integer I_5)
{
  MR_bool succeeded;
  MR_Word LambdaHeadVar__1_25;
  MR_Integer Var_26 = (MR_Integer) ((MR_Unsigned) I_5 + (MR_Unsigned) 1);
  MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__pretty_printer__IntroducedFrom__func__array_to_doc_loop__1753__1_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_4 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_31  = Max;
}
  succeeded = (Var_26 > Var_31);
  if (succeeded)
    LambdaHeadVar__1_25 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[32]));
  else
  {
    MR_Box Elem_30;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Integer Var_42;

{
#define MR_PROC_LABEL mercury__pretty_printer__IntroducedFrom__func__array_to_doc_loop__1753__1_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_4 ;
	Index = Var_26 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Elem_30  = (MR_Box) Item;
}
    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_29, Elem_30, &Var_43);
    {
      Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_34, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_34));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[23])));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_33, 0) = ((MR_Box) (Var_44));
    }
{
#define MR_PROC_LABEL mercury__pretty_printer__IntroducedFrom__func__array_to_doc_loop__1753__1_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_4 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_42  = Max;
}
    succeeded = (Var_26 == Var_42);
    if (succeeded)
      Var_36 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[32]));
    else
      Var_36 = (MR_Word) (MR_mkword(2, &mercury__pretty_printer_scalar_common_5[36]));
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (&mercury__pretty_printer_scalar_common_9[0]));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (mercury__pretty_printer__IntroducedFrom__func__array_to_doc_loop__1753__1_3_f_0_1));
      MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_40, 3) = ((MR_Box) (TypeInfo_for_T_29));
      MR_hl_field(0, Var_40, 4) = ((MR_Box) (A_4));
      MR_hl_field(0, Var_40, 5) = ((MR_Box) (Var_26));
    }
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      LambdaHeadVar__1_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, LambdaHeadVar__1_25, 0) = ((MR_Box) (Var_32));
    }
  }
  return LambdaHeadVar__1_25;
}

void MR_CALL 
mercury__pretty_printer____Compare____pp_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 == ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
        SubResult1_6 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 == ArgY2_8);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 0;
        else
          SubResult2_9 = (MR_Integer) 2;
      }
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__pretty_printer____Compare____func_symbol_limit_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = mercury__pretty_printer____Unify____func_symbol_limit_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__pretty_printer____Compare____open_groups_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____open_groups_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__pretty_printer____Compare____key_value_pair_2_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0));
    MR_Box ArgX2_7 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));
    MR_Box ArgY2_8 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0(TypeInfo_for_K_11, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0(TypeInfo_for_V_12, HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____key_value_pair_2_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgX2_5 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY2_6 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));

    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_9, ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_10, ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
mercury__pretty_printer____Compare____indent_stack_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_44 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_45 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_44 == CastY_45);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_String Var_56 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_57 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_String ArgY2_17 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Integer ArgY3_20 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_15;

                mercury__pretty_printer____Compare____indent_stack_0_0(&SubResult1_15, Var_57, ArgY1_14);
                succeeded = (SubResult1_15 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_15;
                else
                {
                  MR_Word SubResult2_18;
                  MR_Integer Var_58;

{
#define MR_PROC_LABEL mercury__pretty_printer____Compare____indent_stack_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_56 ;
	S2 = ArgY2_17 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_58  = Res;
}
                  succeeded = (Var_58 < (MR_Integer) 0);
                  if (succeeded)
                    SubResult2_18 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_58 == (MR_Integer) 0);
                    if (succeeded)
                      SubResult2_18 = (MR_Integer) 0;
                    else
                      SubResult2_18 = (MR_Integer) 2;
                  }
                  succeeded = (SubResult2_18 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_18;
                  else
                  {
                    succeeded = (Var_55 < ArgY3_20);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_55 == ArgY3_20);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *HeadVar__1_1 = (MR_Integer) 2;
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_52 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
          MR_Integer Var_53 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_54 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_37 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer ArgY2_40 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Integer ArgY3_43 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_38;

                mercury__pretty_printer____Compare____indent_stack_0_0(&SubResult1_38, Var_54, ArgY1_37);
                succeeded = (SubResult1_38 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_38;
                else
                {
                  MR_Word SubResult2_41;

                  succeeded = (Var_53 < ArgY2_40);
                  if (succeeded)
                    SubResult2_41 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_53 == ArgY2_40);
                    if (succeeded)
                      SubResult2_41 = (MR_Integer) 0;
                    else
                      SubResult2_41 = (MR_Integer) 2;
                  }
                  succeeded = (SubResult2_41 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_41;
                  else
                  {
                    succeeded = (Var_52 < ArgY3_43);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_52 == ArgY3_43);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *HeadVar__1_1 = (MR_Integer) 2;
                    }
                  }
                }
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____indent_stack_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_4 == CastX_3);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;
          MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_String ArgY2_8;
          MR_Integer ArgX3_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            succeeded = mercury__pretty_printer____Unify____indent_stack_0_0(ArgX1_5, ArgY1_6);
            if (succeeded)
            {
              succeeded = (strcmp(ArgX2_7, ArgY2_8) == 0);
              if (succeeded)
                succeeded = (ArgX3_9 == ArgY3_10);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_12;
          MR_Integer ArgX2_13 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_14;
          MR_Integer ArgX3_15 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_14 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_16 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
            succeeded = mercury__pretty_printer____Unify____indent_stack_0_0(ArgX1_11, ArgY1_12);
            if (succeeded)
            {
              succeeded = (ArgX2_13 == ArgY2_14);
              if (succeeded)
                succeeded = (ArgX3_15 == ArgY3_16);
            }
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__pretty_printer____Compare____formatter_map_entry_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_17;

{
#define MR_PROC_LABEL mercury__pretty_printer____Compare____formatter_map_entry_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_17  = Res;
}
    succeeded = (Var_17 < (MR_Integer) 0);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_17 == (MR_Integer) 0);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
        SubResult1_6 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__pretty_printer____Compare____formatter_map_entry_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX2_7 ;
	S2 = ArgY2_8 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_19  = Res;
}
      succeeded = (Var_19 < (MR_Integer) 0);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_19 == (MR_Integer) 0);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 0;
        else
          SubResult2_9 = (MR_Integer) 2;
      }
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 == ArgY3_11);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 0;
          else
            *HeadVar__1_1 = (MR_Integer) 2;
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_map_entry_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__pretty_printer____Compare____formatter_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mercury__pretty_printer____Compare____formatter_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_3[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mercury__pretty_printer____Compare____docs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_4[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____docs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_4[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mercury__pretty_printer____Compare____doc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_168 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_169 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_168 == CastY_169);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_187 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer Var_190;

{
#define MR_PROC_LABEL mercury__pretty_printer____Compare____doc_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_187 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_190  = Res;
}
                  succeeded = (Var_190 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_190 == (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_179 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_45 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_4[2]), HeadVar__1_1, ((MR_Box) (Var_179)), ((MR_Box) (ArgY1_45)));
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_185 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ArgY1_65 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                          mercury__univ____Compare____univ_0_0(HeadVar__1_1, Var_185, ArgY1_65);
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_180 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_181 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_90 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_93 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_91;

                          mercury__builtin__compare_3_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_4[1]), &SubResult1_91, ((MR_Box) (Var_181)), ((MR_Box) (ArgY1_90)));
                          succeeded = (SubResult1_91 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_91;
                          else
                          {
                            MR_Word next_value_of_HeadVar__2_2 = Var_180;
                            MR_Word next_value_of_HeadVar__3_3 = ArgY2_93;

                            // direct tailcall eliminated
                            ;
                            HeadVar__2_2 = next_value_of_HeadVar__2_2;
                            HeadVar__3_3 = next_value_of_HeadVar__3_3;
                            continue;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_183 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                MR_String Var_184 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_String ArgY1_122 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_125 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_123;
                          MR_Integer Var_188;

{
#define MR_PROC_LABEL mercury__pretty_printer____Compare____doc_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_184 ;
	S2 = ArgY1_122 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_188  = Res;
}
                          succeeded = (Var_188 < (MR_Integer) 0);
                          if (succeeded)
                            SubResult1_123 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_188 == (MR_Integer) 0);
                            if (succeeded)
                              SubResult1_123 = (MR_Integer) 0;
                            else
                              SubResult1_123 = (MR_Integer) 2;
                          }
                          succeeded = (SubResult1_123 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_123;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_4[1]), HeadVar__1_1, ((MR_Box) (Var_183)), ((MR_Box) (ArgY2_125)));
                        }
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_182 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word ArgY1_147 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                          mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Var_182), (MR_Word) (ArgY1_147));
                        }
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_186 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word ArgY1_167 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                          mercury__pretty_printer____Compare____pp_internal_0_0(HeadVar__1_1, Var_186, ArgY1_167);
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
    break;
  }
}

void MR_CALL 
mercury__pretty_printer____Compare____pp_internal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_52 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_53 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_52 == CastY_53);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 4:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_57 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgY1_13 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer Var_62;

{
#define MR_PROC_LABEL mercury__pretty_printer____Compare____pp_internal_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_57 ;
	S2 = ArgY1_13 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_62  = Res;
}
                succeeded = (Var_62 < (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_62 == (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 0;
                  else
                    *HeadVar__1_1 = (MR_Integer) 2;
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_59 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_38 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Unsigned Var_60 = (MR_Unsigned) (Var_59);
                MR_Unsigned Var_61 = (MR_Unsigned) (ArgY1_38);

                succeeded = (Var_60 < Var_61);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_60 == Var_61);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 0;
                  else
                    *HeadVar__1_1 = (MR_Integer) 2;
                }
              }
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_58 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgY1_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));

                mercury__pretty_printer____Compare____func_symbol_limit_0_0(HeadVar__1_1, Var_58, ArgY1_51);
              }
              break;
          }
        }
        break;
    }
}

void MR_CALL 
mercury__pretty_printer____Compare____func_symbol_limit_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      succeeded = (Var_16 < ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_16 == ArgY1_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Integer ArgY1_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      succeeded = (Var_17 < ArgY1_11);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_17 == ArgY1_11);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____doc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_25 == CastY_26);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_27_27;
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_27_27 = (MR_Word) (&mercury__pretty_printer_scalar_common_4[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = mercury__univ____Unify____univ_0_0(ArgX1_11, ArgY1_12);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_28_28;
                MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_14;
                MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_16;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_HeadVar__2_2;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  TypeInfo_28_28 = (MR_Word) (&mercury__pretty_printer_scalar_common_4[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX1_13)), ((MR_Box) (ArgY1_14)));
                  if (succeeded)
                  {
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__1_1 = ArgX2_15;
                    next_value_of_HeadVar__2_2 = ArgY2_16;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    HeadVar__2_2 = next_value_of_HeadVar__2_2;
                    continue;
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeInfo_29_29;
                MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_18;
                MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_20;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_18 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
                  if (succeeded)
                  {
                    TypeInfo_29_29 = (MR_Word) (&mercury__pretty_printer_scalar_common_4[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX2_19)), ((MR_Box) (ArgY2_20)));
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_22;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_21), (MR_Word) (ArgY1_22));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ArgX1_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_24;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = mercury__pretty_printer____Unify____pp_internal_0_0(ArgX1_23, ArgY1_24);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_internal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_4 == CastX_3);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_6 == CastX_5);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_12 == CastX_11);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_14 == CastX_13);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_16;
          MR_Unsigned Var_22;
          MR_Unsigned Var_23;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_16 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            Var_22 = (MR_Unsigned) (ArgX1_15);
            Var_23 = (MR_Unsigned) (ArgY1_16);
            succeeded = (Var_22 == Var_23);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__pretty_printer____Unify____func_symbol_limit_0_0(ArgX1_17, ArgY1_18);
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____func_symbol_limit_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  else
  {
    MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (ArgX1_5 == ArgY1_6);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__pretty_printer__unsafe_set_io_pp_params_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL mercury__pretty_printer__unsafe_set_io_pp_params_1_p_0

	MR_Word X;

	X = X_1 ;
		{
mercury__pretty_printer__mutable_variable_io_pp_params = X;


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__pretty_printer__unsafe_get_io_pp_params_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL mercury__pretty_printer__unsafe_get_io_pp_params_1_p_0

	MR_Word X;

		{
X = mercury__pretty_printer__mutable_variable_io_pp_params;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

void MR_CALL 
mercury__pretty_printer__unlock_io_pp_params_0_p_0(void)
{
{
#define MR_PROC_LABEL mercury__pretty_printer__unlock_io_pp_params_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__pretty_printer__lock_io_pp_params_0_p_0(void)
{
{
#define MR_PROC_LABEL mercury__pretty_printer__lock_io_pp_params_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
mercury__pretty_printer__pre_initialise_mutable_io_pp_params_0_p_0(void)
{
{
#define MR_PROC_LABEL mercury__pretty_printer__pre_initialise_mutable_io_pp_params_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__pretty_printer__set_io_pp_params_3_p_0(
  MR_Word X_4)
{
{
#define MR_PROC_LABEL mercury__pretty_printer__set_io_pp_params_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__pretty_printer__set_io_pp_params_3_p_0

	MR_Word X;

	X = X_4 ;
		{
mercury__pretty_printer__mutable_variable_io_pp_params = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__pretty_printer__set_io_pp_params_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__pretty_printer__get_io_pp_params_3_p_0(
  MR_Word * X_4)
{
{
#define MR_PROC_LABEL mercury__pretty_printer__get_io_pp_params_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__pretty_printer__get_io_pp_params_3_p_0

	MR_Word X;

		{
X = mercury__pretty_printer__mutable_variable_io_pp_params;


		;}
#undef MR_PROC_LABEL
	*X_4  = X;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__get_io_pp_params_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0(void)
{
{
#define MR_PROC_LABEL mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0

	MR_Word X;

	X = (MR_Word) (&mercury__pretty_printer_scalar_common_1[4]) ;
		{
mercury__pretty_printer__mutable_variable_io_pp_params = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_version_array_2_f_0(
  MR_Word Univ_4,
  MR_Word ArgDescs_5)
{
  MR_bool succeeded = (ArgDescs_5 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word HeadVar__3_3;
  MR_Word TypeInfo_15_15;
  MR_Box X_10;
  MR_Word TypeInfo_16_16;
  MR_Word TypeCtorInfo_17_17;
  MR_Word TypeInfo_18_18;
  MR_Word ArgDesc_6;
  MR_Box Value_9;
  MR_Word Var_11;
  MR_Box conv0_X_10;

  if (succeeded)
  {
    ArgDesc_6 = ((MR_Word) ((MR_hl_field(1, ArgDescs_5, (MR_Integer) 0))));
    Var_11 = ((MR_Word) ((MR_hl_field(1, ArgDescs_5, (MR_Integer) 1))));
    succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_version_array_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = ArgDesc_6 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_15_15  = TypeInfo_for_T;
}
      TypeInfo_16_16 = ((MR_Word) ((MR_hl_field(0, Univ_4, (MR_Integer) 0))));
      Value_9 = (MR_hl_field(0, Univ_4, (MR_Integer) 1));
      TypeCtorInfo_17_17 = (MR_Word) (&mercury__version_array__version_array__type_ctor_info_version_array_1);
      {
        TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (TypeCtorInfo_17_17));
        MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_15_15));
      }
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_16_16, TypeInfo_18_18, Value_9, &conv0_X_10);
      if (succeeded)
      {
        X_10 = ((MR_Box) (conv0_X_10));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
    HeadVar__3_3 = mercury__pretty_printer__version_array_to_doc_1_f_0(TypeInfo_15_15, X_10);
  else
    HeadVar__3_3 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[31]));
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_tree234_2_f_0(
  MR_Word Univ_4,
  MR_Word ArgDescs_5)
{
  MR_bool succeeded = (ArgDescs_5 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word HeadVar__3_3;
  MR_Word TypeInfo_20_20;
  MR_Word TypeInfo_21_21;
  MR_Word X_13;
  MR_Word TypeInfo_22_22;
  MR_Word TypeCtorInfo_23_23;
  MR_Word TypeInfo_24_24;
  MR_Word ArgDescA_6;
  MR_Word ArgDescB_7;
  MR_Box Value_12;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Box conv0_X_13;

  if (succeeded)
  {
    ArgDescA_6 = ((MR_Word) ((MR_hl_field(1, ArgDescs_5, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(1, ArgDescs_5, (MR_Integer) 1))));
    succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgDescB_7 = ((MR_Word) ((MR_hl_field(1, Var_14, (MR_Integer) 0))));
      Var_15 = ((MR_Word) ((MR_hl_field(1, Var_14, (MR_Integer) 1))));
      succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_tree234_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = ArgDescA_6 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_20_20  = TypeInfo_for_T;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_tree234_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = ArgDescB_7 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_21_21  = TypeInfo_for_T;
}
        TypeInfo_22_22 = ((MR_Word) ((MR_hl_field(0, Univ_4, (MR_Integer) 0))));
        Value_12 = (MR_hl_field(0, Univ_4, (MR_Integer) 1));
        TypeCtorInfo_23_23 = (MR_Word) (&mercury__tree234__tree234__type_ctor_info_tree234_2);
        {
          TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_24_24, 0) = ((MR_Box) (TypeCtorInfo_23_23));
          MR_hl_field(0, TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_20_20));
          MR_hl_field(0, TypeInfo_24_24, 2) = ((MR_Box) (TypeInfo_21_21));
        }
        succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_22_22, TypeInfo_24_24, Value_12, &conv0_X_13);
        if (succeeded)
        {
          X_13 = ((MR_Word) (conv0_X_13));
          succeeded = MR_TRUE;
        }
      }
    }
  }
  if (succeeded)
    HeadVar__3_3 = mercury__pretty_printer__tree234_to_doc_1_f_0(TypeInfo_20_20, TypeInfo_21_21, X_13);
  else
    HeadVar__3_3 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[30]));
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_one_or_more_2_f_0(
  MR_Word Univ_4,
  MR_Word ArgDescs_5)
{
  MR_bool succeeded = (ArgDescs_5 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word HeadVar__3_3;
  MR_Word TypeInfo_15_15;
  MR_Word X_10;
  MR_Word TypeInfo_16_16;
  MR_Word TypeCtorInfo_17_17;
  MR_Word TypeInfo_18_18;
  MR_Word ArgDesc_6;
  MR_Box Value_9;
  MR_Word Var_11;
  MR_Box conv0_X_10;

  if (succeeded)
  {
    ArgDesc_6 = ((MR_Word) ((MR_hl_field(1, ArgDescs_5, (MR_Integer) 0))));
    Var_11 = ((MR_Word) ((MR_hl_field(1, ArgDescs_5, (MR_Integer) 1))));
    succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_one_or_more_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = ArgDesc_6 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_15_15  = TypeInfo_for_T;
}
      TypeInfo_16_16 = ((MR_Word) ((MR_hl_field(0, Univ_4, (MR_Integer) 0))));
      Value_9 = (MR_hl_field(0, Univ_4, (MR_Integer) 1));
      TypeCtorInfo_17_17 = (MR_Word) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1);
      {
        TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (TypeCtorInfo_17_17));
        MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_15_15));
      }
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_16_16, TypeInfo_18_18, Value_9, &conv0_X_10);
      if (succeeded)
      {
        X_10 = ((MR_Word) (conv0_X_10));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
    HeadVar__3_3 = mercury__pretty_printer__one_or_more_to_doc_1_f_0(TypeInfo_15_15, X_10);
  else
    HeadVar__3_3 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[29]));
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_list_2_f_0(
  MR_Word Univ_4,
  MR_Word ArgDescs_5)
{
  MR_bool succeeded = (ArgDescs_5 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word HeadVar__3_3;
  MR_Word TypeInfo_15_15;
  MR_Word X_10;
  MR_Word TypeInfo_16_16;
  MR_Word TypeCtorInfo_17_17;
  MR_Word TypeInfo_18_18;
  MR_Word ArgDesc_6;
  MR_Box Value_9;
  MR_Word Var_11;
  MR_Box conv0_X_10;

  if (succeeded)
  {
    ArgDesc_6 = ((MR_Word) ((MR_hl_field(1, ArgDescs_5, (MR_Integer) 0))));
    Var_11 = ((MR_Word) ((MR_hl_field(1, ArgDescs_5, (MR_Integer) 1))));
    succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_list_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = ArgDesc_6 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_15_15  = TypeInfo_for_T;
}
      TypeInfo_16_16 = ((MR_Word) ((MR_hl_field(0, Univ_4, (MR_Integer) 0))));
      Value_9 = (MR_hl_field(0, Univ_4, (MR_Integer) 1));
      TypeCtorInfo_17_17 = (MR_Word) (&mercury__list__list__type_ctor_info_list_1);
      {
        TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (TypeCtorInfo_17_17));
        MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_15_15));
      }
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_16_16, TypeInfo_18_18, Value_9, &conv0_X_10);
      if (succeeded)
      {
        X_10 = ((MR_Word) (conv0_X_10));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Word Var_23;

    Var_23 = mercury__pretty_printer__list_to_doc_loop_1_f_0(TypeInfo_15_15, X_10);
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[12])));
    }
    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[2])));
      MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_22));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, HeadVar__3_3, 0) = ((MR_Box) (Var_19));
    }
  }
  else
    HeadVar__3_3 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[28]));
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_array_2_f_0(
  MR_Word Univ_4,
  MR_Word ArgDescs_5)
{
  MR_bool succeeded = (ArgDescs_5 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word HeadVar__3_3;
  MR_Word TypeInfo_15_15;
  MR_ArrayPtr X_10;
  MR_Word TypeInfo_16_16;
  MR_Word TypeCtorInfo_17_17;
  MR_Word TypeInfo_18_18;
  MR_Word ArgDesc_6;
  MR_Box Value_9;
  MR_Word Var_11;
  MR_Box conv0_X_10;

  if (succeeded)
  {
    ArgDesc_6 = ((MR_Word) ((MR_hl_field(1, ArgDescs_5, (MR_Integer) 0))));
    Var_11 = ((MR_Word) ((MR_hl_field(1, ArgDescs_5, (MR_Integer) 1))));
    succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_array_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = ArgDesc_6 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_15_15  = TypeInfo_for_T;
}
      TypeInfo_16_16 = ((MR_Word) ((MR_hl_field(0, Univ_4, (MR_Integer) 0))));
      Value_9 = (MR_hl_field(0, Univ_4, (MR_Integer) 1));
      TypeCtorInfo_17_17 = (MR_Word) (&mercury__array__array__type_ctor_info_array_1);
      {
        TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (TypeCtorInfo_17_17));
        MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_15_15));
      }
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_16_16, TypeInfo_18_18, Value_9, &conv0_X_10);
      if (succeeded)
      {
        X_10 = ((MR_ArrayPtr) (conv0_X_10));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
    HeadVar__3_3 = mercury__pretty_printer__array_to_doc_1_f_0(TypeInfo_15_15, (MR_ArrayPtr) (X_10));
  else
    HeadVar__3_3 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[27]));
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_string_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_f_0(Univ_4);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_String X_6;
  MR_Box conv0_X_6;

  succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &conv0_X_6, Univ_4);
  if (succeeded)
  {
    X_6 = ((MR_String) (conv0_X_6));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String Var_9;

    Var_9 = mercury__term_io__quoted_string_1_f_0(X_6);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_9));
    }
  }
  else
    HeadVar__3_3 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[26]));
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_uint64_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_54_52_95_95_91_50_93_95_48_2_f_0(Univ_4);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_54_52_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  uint64_t X_6;
  MR_Box conv0_X_6;

  succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0), &conv0_X_6, Univ_4);
  if (succeeded)
  {
    X_6 = MR_unbox_uint64(conv0_X_6);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String Var_9;

{
#define MR_PROC_LABEL mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_54_52_95_95_91_50_93_95_48_2_f_0

	uint64_t U64;
	MR_String S;

	U64 = X_6 ;
		{

    char buffer[21]; // 20 for digits, 1 for nul.
    sprintf(buffer, "%" PRIu64, U64);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_9  = S;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_9));
    }
  }
  else
    HeadVar__3_3 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[25]));
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_uint32_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_51_50_95_95_91_50_93_95_48_2_f_0(Univ_4);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_51_50_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  uint32_t X_6;
  MR_Box conv0_X_6;

  succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), &conv0_X_6, Univ_4);
  if (succeeded)
  {
    X_6 = ((uint32_t) (MR_Word) conv0_X_6);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String Var_9;

{
#define MR_PROC_LABEL mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_51_50_95_95_91_50_93_95_48_2_f_0

	uint32_t U32;
	MR_String S;

	U32 = X_6 ;
		{

    int num_digits;
    if (U32 < 10) {
        num_digits = 1;
    } else if (U32 < 100) {
        num_digits = 2;
    } else if (U32 < 1000) {
        num_digits = 3;
    } else if (U32 < 10000) {
        num_digits = 4;
    } else if (U32 < 100000) {
        num_digits = 5;
    } else if (U32 < 1000000) {
        num_digits = 6;
    } else if (U32 < 10000000) {
        num_digits = 7;
    } else if (U32 < 100000000) {
        num_digits = 8;
    } else if (U32 < 1000000000) {
        num_digits = 9;
    } else {
        num_digits = 10;
    }

    MR_allocate_aligned_string_msg(S, num_digits, MR_ALLOC_ID);
    S[num_digits] = '\0';
    int i = num_digits - 1;
    do {
        S[i] = "0123456789"[U32 % 10];
        i--;
        U32 /= 10;
    } while(U32 > 0);


		;}
#undef MR_PROC_LABEL
	Var_9  = S;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_9));
    }
  }
  else
    HeadVar__3_3 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[24]));
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_uint16_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_49_54_95_95_91_50_93_95_48_2_f_0(Univ_4);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_49_54_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  uint16_t X_6;
  MR_Box conv0_X_6;

  succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), &conv0_X_6, Univ_4);
  if (succeeded)
  {
    X_6 = ((uint16_t) (MR_Word) conv0_X_6);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String Var_9;

{
#define MR_PROC_LABEL mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_49_54_95_95_91_50_93_95_48_2_f_0

	uint16_t U16;
	MR_String S;

	U16 = X_6 ;
		{

    char buffer[6]; // 5 for digits, 1 for nul.
    sprintf(buffer, "%" PRIu16, U16);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_9  = S;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_9));
    }
  }
  else
    HeadVar__3_3 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[23]));
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_uint8_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_56_95_95_91_50_93_95_48_2_f_0(Univ_4);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_56_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  uint8_t X_6;
  MR_Box conv0_X_6;

  succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), &conv0_X_6, Univ_4);
  if (succeeded)
  {
    X_6 = ((uint8_t) (MR_Word) conv0_X_6);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String Var_9;

{
#define MR_PROC_LABEL mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_56_95_95_91_50_93_95_48_2_f_0

	uint8_t U8;
	MR_String S;

	U8 = X_6 ;
		{

    // Use a larger buffer than necessary (3 bytes for digits, 1 for nul)
    // to avoid spurious warning from gcc -Werror=format-overflow.
    char buffer[24];
    sprintf(buffer, "%" PRIu8, U8);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_9  = S;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_9));
    }
  }
  else
    HeadVar__3_3 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[22]));
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_uint_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_95_95_91_50_93_95_48_2_f_0(Univ_4);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Unsigned X_6;
  MR_Box conv0_X_6;

  succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), &conv0_X_6, Univ_4);
  if (succeeded)
  {
    X_6 = ((MR_Unsigned) (conv0_X_6));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String Var_9;

{
#define MR_PROC_LABEL mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_95_95_91_50_93_95_48_2_f_0

	MR_Unsigned U;
	MR_String Str;

	U = X_6 ;
		{

    char buffer[21]; // 20 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "u", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	Var_9  = Str;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_9));
    }
  }
  else
    HeadVar__3_3 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[21]));
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_int64_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_54_52_95_95_91_50_93_95_48_2_f_0(Univ_4);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_54_52_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  int64_t X_6;
  MR_Box conv0_X_6;

  succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0), &conv0_X_6, Univ_4);
  if (succeeded)
  {
    X_6 = MR_unbox_int64(conv0_X_6);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String Var_9;

{
#define MR_PROC_LABEL mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_54_52_95_95_91_50_93_95_48_2_f_0

	int64_t I64;
	MR_String S;

	I64 = X_6 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" PRId64, I64);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_9  = S;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_9));
    }
  }
  else
    HeadVar__3_3 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[20]));
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_int32_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_51_50_95_95_91_50_93_95_48_2_f_0(Univ_4);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_51_50_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  int32_t X_6;
  MR_Box conv0_X_6;

  succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), &conv0_X_6, Univ_4);
  if (succeeded)
  {
    X_6 = ((int32_t) (MR_Word) conv0_X_6);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String Var_9;

{
#define MR_PROC_LABEL mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_51_50_95_95_91_50_93_95_48_2_f_0

	int32_t I32;
	MR_String S;

	I32 = X_6 ;
		{

    char buffer[12]; // 1 for sign, 10 for digits, 1 for nul.
    sprintf(buffer, "%" PRId32, I32);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_9  = S;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_9));
    }
  }
  else
    HeadVar__3_3 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[19]));
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_int16_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_49_54_95_95_91_50_93_95_48_2_f_0(Univ_4);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_49_54_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  int16_t X_6;
  MR_Box conv0_X_6;

  succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), &conv0_X_6, Univ_4);
  if (succeeded)
  {
    X_6 = ((int16_t) (MR_Word) conv0_X_6);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String Var_9;

{
#define MR_PROC_LABEL mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_49_54_95_95_91_50_93_95_48_2_f_0

	int16_t I16;
	MR_String S;

	I16 = X_6 ;
		{

    char buffer[7]; // 1 for sign, 5 for digits, 1 for nul.
    sprintf(buffer, "%" PRId16, I16);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_9  = S;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_9));
    }
  }
  else
    HeadVar__3_3 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[18]));
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_int8_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_56_95_95_91_50_93_95_48_2_f_0(Univ_4);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_56_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  int8_t X_6;
  MR_Box conv0_X_6;

  succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), &conv0_X_6, Univ_4);
  if (succeeded)
  {
    X_6 = ((int8_t) (MR_Word) conv0_X_6);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String Var_9;

{
#define MR_PROC_LABEL mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_56_95_95_91_50_93_95_48_2_f_0

	int8_t I8;
	MR_String S;

	I8 = X_6 ;
		{

    char buffer[5]; // 1 for sign, 3 for digits, 1 for nul.
    sprintf(buffer, "%" PRId8, I8);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_9  = S;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_9));
    }
  }
  else
    HeadVar__3_3 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[17]));
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_int_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_f_0(Univ_4);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Integer X_6;
  MR_Box conv0_X_6;

  succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &conv0_X_6, Univ_4);
  if (succeeded)
  {
    X_6 = ((MR_Integer) (conv0_X_6));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String Var_9;

{
#define MR_PROC_LABEL mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_f_0

	MR_Integer I;
	MR_String S;

	I = X_6 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_9  = S;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_9));
    }
  }
  else
    HeadVar__3_3 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[16]));
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_float_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0(Univ_4);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Float X_6;
  MR_Box conv0_X_6;

  succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), &conv0_X_6, Univ_4);
  if (succeeded)
  {
    X_6 = MR_unbox_float(conv0_X_6);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String Var_9;

{
#define MR_PROC_LABEL mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0

	MR_Float Flt;
	MR_String Str;

	Flt = X_6 ;
		{
{
    // For efficiency reasons we duplicate the C implementation
    // of lowlevel_float_to_string.
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	Var_9  = Str;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_9));
    }
  }
  else
    HeadVar__3_3 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[15]));
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_char_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_f_0(Univ_4);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Char X_6;
  MR_Box conv0_X_6;

  succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), &conv0_X_6, Univ_4);
  if (succeeded)
  {
    X_6 = ((MR_Char) (MR_Word) conv0_X_6);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String Var_9;

    Var_9 = mercury__term_io__quoted_char_1_f_0(X_6);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_9));
    }
  }
  else
    HeadVar__3_3 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[14]));
  return HeadVar__3_3;
}

void MR_CALL 
mercury__pretty_printer__unsafe_get_default_formatter_map_3_p_0(
  MR_Word * FMap_1)
{
{
#define MR_PROC_LABEL mercury__pretty_printer__unsafe_get_default_formatter_map_3_p_0

	MR_Word FMap;

		{

    FMap = ML_pretty_printer_default_formatter_map;


		;}
#undef MR_PROC_LABEL
	*FMap_1  = FMap;
}
}

void MR_CALL 
mercury__pretty_printer__pretty_printer_is_initialised_3_p_0(
  MR_Word * Okay_1)
{
{
#define MR_PROC_LABEL mercury__pretty_printer__pretty_printer_is_initialised_3_p_0

	MR_Word Okay;

		{

    Okay = ML_pretty_printer_is_initialised;


		;}
#undef MR_PROC_LABEL
	*Okay_1  = Okay;
}
}

void MR_CALL 
mercury__pretty_printer__get_fmap_entries_arity_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word _Formatter_10,
  MR_Word STATE_VARIABLE_Entries_0_13,
  MR_Word * STATE_VARIABLE_Entries_14)
{
  mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_109_97_112_95_101_110_116_114_105_101_115_95_97_114_105_116_121_95_95_91_52_93_95_48_6_p_0(ModuleName_7, TypeName_8, Arity_9, STATE_VARIABLE_Entries_0_13, STATE_VARIABLE_Entries_14);
}

void MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_109_97_112_95_101_110_116_114_105_101_115_95_97_114_105_116_121_95_95_91_52_93_95_48_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_Entries_0_13,
  MR_Word * STATE_VARIABLE_Entries_14)
{
  MR_Word Entry_12;

  {
    Entry_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_12, 0) = ((MR_Box) (ModuleName_7));
    MR_hl_field(0, Entry_12, 1) = ((MR_Box) (TypeName_8));
    MR_hl_field(0, Entry_12, 2) = ((MR_Box) (Arity_9));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Entries_14 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Entry_12));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Entries_0_13));
  }
}

MR_Word MR_CALL 
mercury__pretty_printer__set_arg_priority_0_f_0(void)
{
  return (MR_Word) (MR_mkword(2, &mercury__pretty_printer_scalar_common_5[34]));
}

static MR_Box MR_CALL 
mercury__pretty_printer__version_array_to_doc_1_f_0_1(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_1;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__1_25;

  conv0_LambdaHeadVar__1_25 = mercury__pretty_printer__IntroducedFrom__func__version_array_to_doc_loop__1840__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Box) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
  wrapper_arg_1 = ((MR_Box) (conv0_LambdaHeadVar__1_25));
  return wrapper_arg_1;
}

MR_Word MR_CALL 
mercury__pretty_printer__version_array_to_doc_1_f_0(
  MR_Word TypeInfo_for_T_14,
  MR_Box A_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Integer Var_16;
  MR_Integer Var_28;

{
#define MR_PROC_LABEL mercury__pretty_printer__version_array_to_doc_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)A_3 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_28  = N;
}
  Var_16 = (MR_Integer) ((MR_Unsigned) Var_28 - (MR_Unsigned) 1);
  succeeded = ((MR_Integer) 0 > Var_16);
  if (succeeded)
    Var_8 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[32]));
  else
  {
    MR_Box Elem_15;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Box Var_30;
    MR_Integer Var_27;
    MR_Integer Var_43;

{
#define MR_PROC_LABEL mercury__pretty_printer__version_array_to_doc_1_f_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *)A_3 ;
	I = (MR_Integer) 0 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_30  = (MR_Box) X;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Elem_15 = Var_30;
    else
    {
      MR_Integer Var_31;
      MR_Integer Var_33;

{
#define MR_PROC_LABEL mercury__pretty_printer__version_array_to_doc_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)A_3 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_33  = N;
}
      Var_31 = (MR_Integer) ((MR_Unsigned) Var_33 - (MR_Unsigned) 1);
      mercury__version_array__out_of_bounds_error_3_p_0((MR_Integer) 0, Var_31, (MR_String) "version_array.lookup");
    }
    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_14, Elem_15, &Var_35);
    {
      Var_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_19, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_19));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[23])));
      MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_18, 0) = ((MR_Box) (Var_36));
    }
{
#define MR_PROC_LABEL mercury__pretty_printer__version_array_to_doc_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)A_3 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_43  = N;
}
    Var_27 = (MR_Integer) ((MR_Unsigned) Var_43 - (MR_Unsigned) 1);
    succeeded = ((MR_Integer) 0 == Var_27);
    if (succeeded)
      Var_21 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[32]));
    else
      Var_21 = (MR_Word) (MR_mkword(2, &mercury__pretty_printer_scalar_common_5[36]));
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_25, 0) = ((MR_Box) (&mercury__pretty_printer_scalar_common_9[2]));
      MR_hl_field(0, Var_25, 1) = ((MR_Box) (mercury__pretty_printer__version_array_to_doc_1_f_0_1));
      MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_25, 3) = ((MR_Box) (TypeInfo_for_T_14));
      MR_hl_field(0, Var_25, 4) = ((MR_Box) (A_3));
      MR_hl_field(0, Var_25, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_24, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_8, 0) = ((MR_Box) (Var_17));
    }
  }
  {
    Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_7, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, Var_7, 1) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[11])));
  }
  {
    Var_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_4, 0) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[7])));
    MR_hl_field(1, Var_4, 1) = ((MR_Box) (Var_7));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pretty_printer__tree234_to_doc_1_f_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word T_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Word Var_9;

  Var_9 = mercury__tree234__tree234_to_lazy_list_2_f_0(TypeInfo_for_K_15, TypeInfo_for_V_16, T_3, (MR_Word) ((MR_Unsigned) 0U));
  Var_8 = mercury__pretty_printer__tree234_elements_to_doc_1_f_0(TypeInfo_for_K_15, TypeInfo_for_V_16, Var_9);
  {
    Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_7, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, Var_7, 1) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[11])));
  }
  {
    Var_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_4, 0) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[6])));
    MR_hl_field(1, Var_4, 1) = ((MR_Box) (Var_7));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
mercury__pretty_printer__tree234_elements_to_doc_1_f_0_1(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_1;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = mercury__pretty_printer__tree234_elements_to_doc_1_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
  wrapper_arg_1 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_1;
}

static MR_Word MR_CALL 
mercury__pretty_printer__tree234_elements_to_doc_1_f_0(
  MR_Word TypeInfo_for_K_36,
  MR_Word TypeInfo_for_V_37,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[32]));
  else
  {
    MR_Box K_4 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Box V_5 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1));
    MR_Word Susp_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word LL_8;
    MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, Susp_6, (MR_Integer) 1))));
    MR_Box conv1_LL_8;

    conv1_LL_8 = func_0(((MR_Box) (Susp_6)));
    LL_8 = ((MR_Word) (conv1_LL_8));
    if ((LL_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TypeInfo_39_39;
      MR_Word Var_12;
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Word Var_17;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_63;
      MR_Word Var_67;
      MR_Word Var_70;
      MR_Word Var_71;

      {
        TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_39_39, 0) = ((MR_Box) (&mercury__pretty_printer__pretty_printer__type_ctor_info_key_value_pair_2));
        MR_hl_field(0, TypeInfo_39_39, 1) = ((MR_Box) (TypeInfo_for_K_36));
        MR_hl_field(0, TypeInfo_39_39, 2) = ((MR_Box) (TypeInfo_for_V_37));
      }
      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_17, 0) = K_4;
        MR_hl_field(0, Var_17, 1) = V_5;
      }
      mercury__univ__type_to_univ_2_p_1(TypeInfo_39_39, ((MR_Box) (Var_17)), &Var_59);
      {
        Var_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_16, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_16));
        MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[23])));
        MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
      }
      {
        Var_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_15, 0) = ((MR_Box) (Var_60));
      }
      {
        Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
        MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_14));
      }
      {
        Var_71 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_71, 0) = ((MR_Box) (Var_12));
      }
      {
        Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
        MR_hl_field(1, Var_70, 1) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[10])));
      }
      {
        Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_67, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[8])));
        MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_70));
      }
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, HeadVar__2_2, 0) = ((MR_Box) (Var_67));
      }
    }
    else
    {
      MR_Word TypeInfo_41_41;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_46;
      MR_Word Var_50;
      MR_Word Var_53;
      MR_Word Var_54;

      {
        TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_41_41, 0) = ((MR_Box) (&mercury__pretty_printer__pretty_printer__type_ctor_info_key_value_pair_2));
        MR_hl_field(0, TypeInfo_41_41, 1) = ((MR_Box) (TypeInfo_for_K_36));
        MR_hl_field(0, TypeInfo_41_41, 2) = ((MR_Box) (TypeInfo_for_V_37));
      }
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = K_4;
        MR_hl_field(0, Var_26, 1) = V_5;
      }
      mercury__univ__type_to_univ_2_p_1(TypeInfo_41_41, ((MR_Box) (Var_26)), &Var_42);
      {
        Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_25, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_25));
        MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[23])));
        MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_24, 0) = ((MR_Box) (Var_43));
      }
      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[22])));
      }
      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_23));
      }
      {
        Var_54 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_54, 0) = ((MR_Box) (Var_21));
      }
      {
        Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(1, Var_53, 1) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[10])));
      }
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[8])));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
      }
      {
        Var_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_20, 0) = ((MR_Box) (Var_50));
      }
      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_33, 0) = ((MR_Box) (&mercury__pretty_printer_scalar_common_9[1]));
        MR_hl_field(0, Var_33, 1) = ((MR_Box) (mercury__pretty_printer__tree234_elements_to_doc_1_f_0_1));
        MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_33, 3) = ((MR_Box) (TypeInfo_for_K_36));
        MR_hl_field(0, Var_33, 4) = ((MR_Box) (TypeInfo_for_V_37));
        MR_hl_field(0, Var_33, 5) = ((MR_Box) (LL_8));
      }
      {
        Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, Var_32, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
        MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_31));
      }
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, HeadVar__2_2, 0) = ((MR_Box) (Var_19));
      }
    }
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
mercury__pretty_printer__one_or_more_to_doc_1_f_0_1(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_1;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__pretty_printer__list_to_doc_loop_1_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_1;
}

MR_Word MR_CALL 
mercury__pretty_printer__one_or_more_to_doc_1_f_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Box H_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
  MR_Word T_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word Var_5;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_19;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_35;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_30, H_3, &Var_31);
  {
    Var_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_10, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_10));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[23])));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_9 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_9, 0) = ((MR_Box) (Var_32));
  }
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&mercury__pretty_printer_scalar_common_6[1]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (mercury__pretty_printer__one_or_more_to_doc_1_f_0_1));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (TypeInfo_for_T_30));
    MR_hl_field(0, Var_24, 4) = ((MR_Box) (T_4));
  }
  {
    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_23, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[11])));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[2])));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_22));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (MR_mkword(2, &mercury__pretty_printer_scalar_common_5[36])));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_9));
    MR_hl_field(1, Var_8, 1) = ((MR_Box) (Var_11));
  }
  {
    Var_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_5, 0) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[4])));
    MR_hl_field(1, Var_5, 1) = ((MR_Box) (Var_8));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pretty_printer__list_to_doc_1_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Xs_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_7;
  MR_Word Var_8;

  Var_8 = mercury__pretty_printer__list_to_doc_loop_1_f_0(TypeInfo_for_T_13, Xs_3);
  {
    Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_7, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, Var_7, 1) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[12])));
  }
  {
    Var_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_4, 0) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[2])));
    MR_hl_field(1, Var_4, 1) = ((MR_Box) (Var_7));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
mercury__pretty_printer__list_to_doc_loop_1_f_0_1(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_1;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__pretty_printer__list_to_doc_loop_1_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_1;
}

static MR_Word MR_CALL 
mercury__pretty_printer__list_to_doc_loop_1_f_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[32]));
  else
  {
    MR_Box X_4 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Word Xs_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

    if ((Xs_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_9;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_31;

      mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_26, X_4, &Var_27);
      {
        Var_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_9, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_9, 1) = ((MR_Box) (Var_27));
      }
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_9));
        MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[23])));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
      }
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, HeadVar__2_2, 0) = ((MR_Box) (Var_28));
      }
    }
    else
    {
      MR_Word Var_10;
      MR_Word Var_11;
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_39;

      mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_26, X_4, &Var_35);
      {
        Var_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_12, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_12));
        MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[23])));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_11, 0) = ((MR_Box) (Var_36));
      }
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_23, 0) = ((MR_Box) (&mercury__pretty_printer_scalar_common_6[1]));
        MR_hl_field(0, Var_23, 1) = ((MR_Box) (mercury__pretty_printer__list_to_doc_loop_1_f_0_1));
        MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_23, 3) = ((MR_Box) (TypeInfo_for_T_26));
        MR_hl_field(0, Var_23, 4) = ((MR_Box) (Xs_5));
      }
      {
        Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, Var_22, 1) = ((MR_Box) (Var_23));
      }
      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_13, 0) = ((MR_Box) (MR_mkword(2, &mercury__pretty_printer_scalar_common_5[36])));
        MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_21));
      }
      {
        Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_10, 0) = ((MR_Box) (Var_11));
        MR_hl_field(1, Var_10, 1) = ((MR_Box) (Var_13));
      }
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, HeadVar__2_2, 0) = ((MR_Box) (Var_10));
      }
    }
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
mercury__pretty_printer__array_to_doc_1_f_0_1(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_1;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__1_25;

  conv0_LambdaHeadVar__1_25 = mercury__pretty_printer__IntroducedFrom__func__array_to_doc_loop__1753__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_ArrayPtr) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
  wrapper_arg_1 = ((MR_Box) (conv0_LambdaHeadVar__1_25));
  return wrapper_arg_1;
}

MR_Word MR_CALL 
mercury__pretty_printer__array_to_doc_1_f_0(
  MR_Word TypeInfo_for_T_14,
  MR_ArrayPtr A_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__pretty_printer__array_to_doc_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_3 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_16  = Max;
}
  succeeded = ((MR_Integer) 0 > Var_16);
  if (succeeded)
    Var_8 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[32]));
  else
  {
    MR_Box Elem_15;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Integer Var_27;

{
#define MR_PROC_LABEL mercury__pretty_printer__array_to_doc_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_3 ;
	Index = (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Elem_15  = (MR_Box) Item;
}
    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_14, Elem_15, &Var_28);
    {
      Var_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_19, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_19));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[23])));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_18, 0) = ((MR_Box) (Var_29));
    }
{
#define MR_PROC_LABEL mercury__pretty_printer__array_to_doc_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_3 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_27  = Max;
}
    succeeded = ((MR_Integer) 0 == Var_27);
    if (succeeded)
      Var_21 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[32]));
    else
      Var_21 = (MR_Word) (MR_mkword(2, &mercury__pretty_printer_scalar_common_5[36]));
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_25, 0) = ((MR_Box) (&mercury__pretty_printer_scalar_common_9[0]));
      MR_hl_field(0, Var_25, 1) = ((MR_Box) (mercury__pretty_printer__array_to_doc_1_f_0_1));
      MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_25, 3) = ((MR_Box) (TypeInfo_for_T_14));
      MR_hl_field(0, Var_25, 4) = ((MR_Box) (A_3));
      MR_hl_field(0, Var_25, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_24, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_8, 0) = ((MR_Box) (Var_17));
    }
  }
  {
    Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_7, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, Var_7, 1) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[11])));
  }
  {
    Var_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_4, 0) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[0])));
    MR_hl_field(1, Var_4, 1) = ((MR_Box) (Var_7));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pretty_printer__uint64_to_doc_1_f_0(
  uint64_t U_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

{
#define MR_PROC_LABEL mercury__pretty_printer__uint64_to_doc_1_f_0

	uint64_t U64;
	MR_String S;

	U64 = U_3 ;
		{

    char buffer[21]; // 20 for digits, 1 for nul.
    sprintf(buffer, "%" PRIu64, U64);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_4  = S;
}
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pretty_printer__uint32_to_doc_1_f_0(
  uint32_t U_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

{
#define MR_PROC_LABEL mercury__pretty_printer__uint32_to_doc_1_f_0

	uint32_t U32;
	MR_String S;

	U32 = U_3 ;
		{

    int num_digits;
    if (U32 < 10) {
        num_digits = 1;
    } else if (U32 < 100) {
        num_digits = 2;
    } else if (U32 < 1000) {
        num_digits = 3;
    } else if (U32 < 10000) {
        num_digits = 4;
    } else if (U32 < 100000) {
        num_digits = 5;
    } else if (U32 < 1000000) {
        num_digits = 6;
    } else if (U32 < 10000000) {
        num_digits = 7;
    } else if (U32 < 100000000) {
        num_digits = 8;
    } else if (U32 < 1000000000) {
        num_digits = 9;
    } else {
        num_digits = 10;
    }

    MR_allocate_aligned_string_msg(S, num_digits, MR_ALLOC_ID);
    S[num_digits] = '\0';
    int i = num_digits - 1;
    do {
        S[i] = "0123456789"[U32 % 10];
        i--;
        U32 /= 10;
    } while(U32 > 0);


		;}
#undef MR_PROC_LABEL
	Var_4  = S;
}
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pretty_printer__uint16_to_doc_1_f_0(
  uint16_t U_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

{
#define MR_PROC_LABEL mercury__pretty_printer__uint16_to_doc_1_f_0

	uint16_t U16;
	MR_String S;

	U16 = U_3 ;
		{

    char buffer[6]; // 5 for digits, 1 for nul.
    sprintf(buffer, "%" PRIu16, U16);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_4  = S;
}
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pretty_printer__uint8_to_doc_1_f_0(
  uint8_t U_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

{
#define MR_PROC_LABEL mercury__pretty_printer__uint8_to_doc_1_f_0

	uint8_t U8;
	MR_String S;

	U8 = U_3 ;
		{

    // Use a larger buffer than necessary (3 bytes for digits, 1 for nul)
    // to avoid spurious warning from gcc -Werror=format-overflow.
    char buffer[24];
    sprintf(buffer, "%" PRIu8, U8);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_4  = S;
}
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pretty_printer__uint_to_doc_1_f_0(
  MR_Unsigned U_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

{
#define MR_PROC_LABEL mercury__pretty_printer__uint_to_doc_1_f_0

	MR_Unsigned U;
	MR_String Str;

	U = U_3 ;
		{

    char buffer[21]; // 20 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "u", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	Var_4  = Str;
}
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pretty_printer__int64_to_doc_1_f_0(
  int64_t I_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

{
#define MR_PROC_LABEL mercury__pretty_printer__int64_to_doc_1_f_0

	int64_t I64;
	MR_String S;

	I64 = I_3 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" PRId64, I64);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_4  = S;
}
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pretty_printer__int32_to_doc_1_f_0(
  int32_t I_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

{
#define MR_PROC_LABEL mercury__pretty_printer__int32_to_doc_1_f_0

	int32_t I32;
	MR_String S;

	I32 = I_3 ;
		{

    char buffer[12]; // 1 for sign, 10 for digits, 1 for nul.
    sprintf(buffer, "%" PRId32, I32);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_4  = S;
}
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pretty_printer__int16_to_doc_1_f_0(
  int16_t I_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

{
#define MR_PROC_LABEL mercury__pretty_printer__int16_to_doc_1_f_0

	int16_t I16;
	MR_String S;

	I16 = I_3 ;
		{

    char buffer[7]; // 1 for sign, 5 for digits, 1 for nul.
    sprintf(buffer, "%" PRId16, I16);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_4  = S;
}
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pretty_printer__int8_to_doc_1_f_0(
  int8_t I_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

{
#define MR_PROC_LABEL mercury__pretty_printer__int8_to_doc_1_f_0

	int8_t I8;
	MR_String S;

	I8 = I_3 ;
		{

    char buffer[5]; // 1 for sign, 3 for digits, 1 for nul.
    sprintf(buffer, "%" PRId8, I8);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_4  = S;
}
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pretty_printer__int_to_doc_1_f_0(
  MR_Integer I_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

{
#define MR_PROC_LABEL mercury__pretty_printer__int_to_doc_1_f_0

	MR_Integer I;
	MR_String S;

	I = I_3 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_4  = S;
}
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pretty_printer__float_to_doc_1_f_0(
  MR_Float F_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

{
#define MR_PROC_LABEL mercury__pretty_printer__float_to_doc_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt = F_3 ;
		{
{
    // For efficiency reasons we duplicate the C implementation
    // of lowlevel_float_to_string.
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	Var_4  = Str;
}
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pretty_printer__string_to_doc_1_f_0(
  MR_String S_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

  Var_4 = mercury__term_io__quoted_string_1_f_0(S_3);
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pretty_printer__char_to_doc_1_f_0(
  MR_Char C_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

  Var_4 = mercury__term_io__quoted_char_1_f_0(C_3);
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

void MR_CALL 
mercury__pretty_printer__set_default_params_3_p_0(
  MR_Word Params_4)
{
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_params_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_params_3_p_0

	MR_Word X;

	X = Params_4 ;
		{
mercury__pretty_printer__mutable_variable_io_pp_params = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_params_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__pretty_printer__get_default_params_3_p_0(
  MR_Word * Params_4)
{
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_params_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_params_3_p_0

	MR_Word X;

		{
X = mercury__pretty_printer__mutable_variable_io_pp_params;


		;}
#undef MR_PROC_LABEL
	*Params_4  = X;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_params_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__pretty_printer__set_default_formatter_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer TypeArity_9,
  MR_Word Formatter_10)
{
  MR_Word FMap0_12;
  MR_Word FMap_13;
  MR_Word Okay_17;

{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_6_p_0

	MR_Word Okay;

		{

    Okay = ML_pretty_printer_is_initialised;


		;}
#undef MR_PROC_LABEL
	Okay_17  = Okay;
}
  switch (Okay_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        FMap0_12 = mercury__pretty_printer__initial_formatter_map_0_f_0();
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_6_p_0

	MR_Word FMap;

	FMap = FMap0_12 ;
		{

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;


		;}
#undef MR_PROC_LABEL
}
      }
      break;
    case (MR_Integer) 1:
      {
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_6_p_0

	MR_Word FMap;

		{

    FMap = ML_pretty_printer_default_formatter_map;


		;}
#undef MR_PROC_LABEL
	FMap0_12  = FMap;
}
      }
      break;
  }
  mercury__pretty_printer__set_formatter_6_p_0(ModuleName_7, TypeName_8, TypeArity_9, Formatter_10, FMap0_12, &FMap_13);
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_6_p_0

	MR_Word FMap;

	FMap = FMap_13 ;
		{

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__pretty_printer__set_default_formatter_map_3_p_0(
  MR_Word FMap_1)
{
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_map_3_p_0

	MR_Word FMap;

	FMap = FMap_1 ;
		{

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__pretty_printer__get_default_formatter_map_3_p_0(
  MR_Word * FMap_4)
{
  MR_Word Okay_6;

{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_formatter_map_3_p_0

	MR_Word Okay;

		{

    Okay = ML_pretty_printer_is_initialised;


		;}
#undef MR_PROC_LABEL
	Okay_6  = Okay;
}
  switch (Okay_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *FMap_4 = mercury__pretty_printer__initial_formatter_map_0_f_0();
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_formatter_map_3_p_0

	MR_Word FMap;

	FMap = *FMap_4 ;
		{

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;


		;}
#undef MR_PROC_LABEL
}
      }
      break;
    case (MR_Integer) 1:
      {
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_formatter_map_3_p_0

	MR_Word FMap;

		{

    FMap = ML_pretty_printer_default_formatter_map;


		;}
#undef MR_PROC_LABEL
	*FMap_4  = FMap;
}
      }
      break;
  }
}

MR_Word MR_CALL 
mercury__pretty_printer__get_formatter_map_entry_types_1_f_0(
  MR_Word FMap_3)
{
  MR_Word Entries_4;

  mercury__pretty_printer__foldr__ho33_4_p_in__tree234_0(FMap_3, (MR_Word) ((MR_Unsigned) 0U), &Entries_4);
  return Entries_4;
}

static void MR_CALL 
mercury__pretty_printer__foldr__ho33_4_p_in__tree234_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__4_4 = HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_9 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
          MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_15;
          MR_Word Var_16;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__pretty_printer__foldr__ho33_4_p_in__tree234_0(Var_12, HeadVar__3_3, &Var_15);
          mercury__pretty_printer__get_fmap_entries_module_4_p_0(Var_9, Var_10, Var_15, &Var_16);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_11;
          next_value_of_HeadVar__3_3 = Var_16;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_18 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
          MR_Word Var_19 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_20 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__pretty_printer__foldr__ho33_4_p_in__tree234_0(Var_24, HeadVar__3_3, &Var_27);
          mercury__pretty_printer__get_fmap_entries_module_4_p_0(Var_20, Var_21, Var_27, &Var_28);
          mercury__pretty_printer__foldr__ho33_4_p_in__tree234_0(Var_23, Var_28, &Var_29);
          mercury__pretty_printer__get_fmap_entries_module_4_p_0(Var_18, Var_19, Var_29, &Var_30);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_22;
          next_value_of_HeadVar__3_3 = Var_30;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String Var_32 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
          MR_Word Var_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_34 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
          MR_String Var_36 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 7))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 8))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 9))));
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__pretty_printer__foldr__ho33_4_p_in__tree234_0(Var_41, HeadVar__3_3, &Var_44);
          mercury__pretty_printer__get_fmap_entries_module_4_p_0(Var_36, Var_37, Var_44, &Var_45);
          mercury__pretty_printer__foldr__ho33_4_p_in__tree234_0(Var_40, Var_45, &Var_46);
          mercury__pretty_printer__get_fmap_entries_module_4_p_0(Var_34, Var_35, Var_46, &Var_47);
          mercury__pretty_printer__foldr__ho33_4_p_in__tree234_0(Var_39, Var_47, &Var_48);
          mercury__pretty_printer__get_fmap_entries_module_4_p_0(Var_32, Var_33, Var_48, &Var_49);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_38;
          next_value_of_HeadVar__3_3 = Var_49;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__pretty_printer__get_fmap_entries_module_4_p_0(
  MR_String ModuleName_5,
  MR_Word TypeNameArityMap_6,
  MR_Word STATE_VARIABLE_Entries_0_8,
  MR_Word * STATE_VARIABLE_Entries_9)
{
  mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_p_in__tree234_0(ModuleName_5, TypeNameArityMap_6, STATE_VARIABLE_Entries_0_8, STATE_VARIABLE_Entries_9);
}

static void MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_p_in__tree234_0(
  MR_String Var_53,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__4_4 = HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_9 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
          MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_15;
          MR_Word Var_16;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_p_in__tree234_0(Var_53, Var_12, HeadVar__3_3, &Var_15);
          mercury__pretty_printer__get_fmap_entries_type_5_p_0(Var_53, Var_9, Var_10, Var_15, &Var_16);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_11;
          next_value_of_HeadVar__3_3 = Var_16;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_18 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
          MR_Word Var_19 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_20 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_p_in__tree234_0(Var_53, Var_24, HeadVar__3_3, &Var_27);
          mercury__pretty_printer__get_fmap_entries_type_5_p_0(Var_53, Var_20, Var_21, Var_27, &Var_28);
          mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_p_in__tree234_0(Var_53, Var_23, Var_28, &Var_29);
          mercury__pretty_printer__get_fmap_entries_type_5_p_0(Var_53, Var_18, Var_19, Var_29, &Var_30);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_22;
          next_value_of_HeadVar__3_3 = Var_30;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String Var_32 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
          MR_Word Var_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_34 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
          MR_String Var_36 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 7))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 8))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 9))));
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_p_in__tree234_0(Var_53, Var_41, HeadVar__3_3, &Var_44);
          mercury__pretty_printer__get_fmap_entries_type_5_p_0(Var_53, Var_36, Var_37, Var_44, &Var_45);
          mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_p_in__tree234_0(Var_53, Var_40, Var_45, &Var_46);
          mercury__pretty_printer__get_fmap_entries_type_5_p_0(Var_53, Var_34, Var_35, Var_46, &Var_47);
          mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_51_52_95_95_91_50_93_95_48_4_p_in__tree234_0(Var_53, Var_39, Var_47, &Var_48);
          mercury__pretty_printer__get_fmap_entries_type_5_p_0(Var_53, Var_32, Var_33, Var_48, &Var_49);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_38;
          next_value_of_HeadVar__3_3 = Var_49;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__pretty_printer__get_fmap_entries_type_5_p_0(
  MR_String ModuleName_6,
  MR_String TypeName_7,
  MR_Word ArityMap_8,
  MR_Word STATE_VARIABLE_Entries_0_10,
  MR_Word * STATE_VARIABLE_Entries_11)
{
  mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_51_53_95_95_91_51_93_95_48_4_p_in__tree234_0(ModuleName_6, TypeName_7, ArityMap_8, STATE_VARIABLE_Entries_0_10, STATE_VARIABLE_Entries_11);
}

static void MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_51_53_95_95_91_51_93_95_48_4_p_in__tree234_0(
  MR_String Var_53,
  MR_String Var_54,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__4_4 = HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_15;
          MR_Word Var_16;
          MR_Word Entry_60;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_51_53_95_95_91_51_93_95_48_4_p_in__tree234_0(Var_53, Var_54, Var_12, HeadVar__3_3, &Var_15);
          {
            Entry_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Entry_60, 0) = ((MR_Box) (Var_53));
            MR_hl_field(0, Entry_60, 1) = ((MR_Box) (Var_54));
            MR_hl_field(0, Entry_60, 2) = ((MR_Box) (Var_9));
          }
          {
            Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_16, 0) = ((MR_Box) (Entry_60));
            MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_15));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_11;
          next_value_of_HeadVar__3_3 = Var_16;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
          MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Entry_58;
          MR_Word Entry_59;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_51_53_95_95_91_51_93_95_48_4_p_in__tree234_0(Var_53, Var_54, Var_24, HeadVar__3_3, &Var_27);
          {
            Entry_58 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Entry_58, 0) = ((MR_Box) (Var_53));
            MR_hl_field(0, Entry_58, 1) = ((MR_Box) (Var_54));
            MR_hl_field(0, Entry_58, 2) = ((MR_Box) (Var_20));
          }
          {
            Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_28, 0) = ((MR_Box) (Entry_58));
            MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_27));
          }
          mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_51_53_95_95_91_51_93_95_48_4_p_in__tree234_0(Var_53, Var_54, Var_23, Var_28, &Var_29);
          {
            Entry_59 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Entry_59, 0) = ((MR_Box) (Var_53));
            MR_hl_field(0, Entry_59, 1) = ((MR_Box) (Var_54));
            MR_hl_field(0, Entry_59, 2) = ((MR_Box) (Var_18));
          }
          {
            Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_30, 0) = ((MR_Box) (Entry_59));
            MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_29));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_22;
          next_value_of_HeadVar__3_3 = Var_30;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer Var_32 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
          MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
          MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 7))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 8))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 9))));
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Entry_55;
          MR_Word Entry_56;
          MR_Word Entry_57;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_51_53_95_95_91_51_93_95_48_4_p_in__tree234_0(Var_53, Var_54, Var_41, HeadVar__3_3, &Var_44);
          {
            Entry_55 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Entry_55, 0) = ((MR_Box) (Var_53));
            MR_hl_field(0, Entry_55, 1) = ((MR_Box) (Var_54));
            MR_hl_field(0, Entry_55, 2) = ((MR_Box) (Var_36));
          }
          {
            Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_45, 0) = ((MR_Box) (Entry_55));
            MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_44));
          }
          mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_51_53_95_95_91_51_93_95_48_4_p_in__tree234_0(Var_53, Var_54, Var_40, Var_45, &Var_46);
          {
            Entry_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Entry_56, 0) = ((MR_Box) (Var_53));
            MR_hl_field(0, Entry_56, 1) = ((MR_Box) (Var_54));
            MR_hl_field(0, Entry_56, 2) = ((MR_Box) (Var_34));
          }
          {
            Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_47, 0) = ((MR_Box) (Entry_56));
            MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_46));
          }
          mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_51_53_95_95_91_51_93_95_48_4_p_in__tree234_0(Var_53, Var_54, Var_39, Var_47, &Var_48);
          {
            Entry_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Entry_57, 0) = ((MR_Box) (Var_53));
            MR_hl_field(0, Entry_57, 1) = ((MR_Box) (Var_54));
            MR_hl_field(0, Entry_57, 2) = ((MR_Box) (Var_32));
          }
          {
            Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_49, 0) = ((MR_Box) (Entry_57));
            MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_48));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_38;
          next_value_of_HeadVar__3_3 = Var_49;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__pretty_printer__set_formatter_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word Formatter_10,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  MR_bool succeeded;
  MR_Word FMapTypeArity0_12;
  MR_Box conv0_FMapTypeArity0_12;

  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv0_FMapTypeArity0_12);
  if (succeeded)
  {
    FMapTypeArity0_12 = ((MR_Word) (conv0_FMapTypeArity0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word FMapTypeArity_15;
    MR_Word FMapArity0_13;
    MR_Box conv1_FMapArity0_13;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv1_FMapArity0_13);
    if (succeeded)
    {
      FMapArity0_13 = ((MR_Word) (conv1_FMapArity0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FMapArity_14;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_3[1]), Arity_9, ((MR_Box) (Formatter_10)), FMapArity0_13, &FMapArity_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    else
    {
      MR_Word FMapArity_20;

      {
        FMapArity_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FMapArity_20, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(1, FMapArity_20, 1) = ((MR_Box) (Formatter_10));
        MR_hl_field(1, FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
  else
  {
    MR_Word FMapArity_21;
    MR_Word FMapTypeArity_22;

    {
      FMapArity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapArity_21, 0) = ((MR_Box) (Arity_9));
      MR_hl_field(1, FMapArity_21, 1) = ((MR_Box) (Formatter_10));
      MR_hl_field(1, FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FMapTypeArity_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
      MR_hl_field(1, FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
      MR_hl_field(1, FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
}

MR_Word MR_CALL 
mercury__pretty_printer__new_formatter_map_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
mercury__pretty_printer__put_doc_7_p_1(
  MR_Word TypeClassInfo_for_writer_30,
  MR_Box Stream_8,
  MR_Word Canonicalize_9,
  MR_Word FMap_10,
  MR_Word Params_11,
  MR_Word Doc_12,
  MR_Box STATE_VARIABLE_IO_0_25,
  MR_Box * STATE_VARIABLE_IO_26)
{
  MR_Integer MaxLines_16 = ((MR_Integer) ((MR_hl_field(0, Params_11, (MR_Integer) 1))));
  MR_Word Limit_17 = ((MR_Word) ((MR_hl_field(0, Params_11, (MR_Integer) 2))));
  MR_Integer RemainingWidth_18 = ((MR_Integer) ((MR_hl_field(0, Params_11, (MR_Integer) 0))));
  MR_Word Var_27;
  MR_Integer Var_20;
  MR_Word Var_21;
  MR_Integer Var_22;
  MR_Word Var_23;
  MR_Word Var_24;

  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Doc_12));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__pretty_printer__do_put_docs_17_p_1(TypeClassInfo_for_writer_30, Stream_8, Canonicalize_9, FMap_10, RemainingWidth_18, Var_27, RemainingWidth_18, &Var_20, (MR_Word) ((MR_Unsigned) 0U), &Var_21, MaxLines_16, &Var_22, Limit_17, &Var_23, (MR_Word) (((MR_Box) ((MR_Unsigned) 1U))), &Var_24, STATE_VARIABLE_IO_0_25, STATE_VARIABLE_IO_26);
}

void MR_CALL 
mercury__pretty_printer__do_put_docs_17_p_1(
  MR_Word TypeClassInfo_for_writer_115,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_6,
  MR_Integer * STATE_VARIABLE_RemainingWidth_7,
  MR_Word STATE_VARIABLE_Indents_0_8,
  MR_Word * STATE_VARIABLE_Indents_9,
  MR_Integer STATE_VARIABLE_RemainingLines_0_10,
  MR_Integer * STATE_VARIABLE_RemainingLines_11,
  MR_Word STATE_VARIABLE_Limit_0_12,
  MR_Word * STATE_VARIABLE_Limit_13,
  MR_Word STATE_VARIABLE_Pri_0_14,
  MR_Word * STATE_VARIABLE_Pri_15,
  MR_Box STATE_VARIABLE_IO_0_16,
  MR_Box * STATE_VARIABLE_IO_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_IO_17 = STATE_VARIABLE_IO_0_16;
      *STATE_VARIABLE_Pri_15 = STATE_VARIABLE_Pri_0_14;
      *STATE_VARIABLE_Limit_13 = STATE_VARIABLE_Limit_0_12;
      *STATE_VARIABLE_RemainingLines_11 = STATE_VARIABLE_RemainingLines_0_10;
      *STATE_VARIABLE_Indents_9 = STATE_VARIABLE_Indents_0_8;
      *STATE_VARIABLE_RemainingWidth_7 = STATE_VARIABLE_RemainingWidth_0_6;
    }
    else
    {
      MR_Word HeadDoc0_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word TailDocs0_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));

      succeeded = (STATE_VARIABLE_RemainingLines_0_10 <= (MR_Integer) 0);
      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_115, (MR_Integer) 0)), (MR_Integer) 5))));

        func_0(((MR_Box) (TypeClassInfo_for_writer_115)), HeadVar__1_1, ((MR_Box) ((MR_String) "...")), STATE_VARIABLE_IO_0_16, STATE_VARIABLE_IO_17);
        *STATE_VARIABLE_Pri_15 = STATE_VARIABLE_Pri_0_14;
        *STATE_VARIABLE_Limit_13 = STATE_VARIABLE_Limit_0_12;
        *STATE_VARIABLE_RemainingLines_11 = STATE_VARIABLE_RemainingLines_0_10;
        *STATE_VARIABLE_Indents_9 = STATE_VARIABLE_Indents_0_8;
        *STATE_VARIABLE_RemainingWidth_7 = STATE_VARIABLE_RemainingWidth_0_6;
      }
      else
      {
        MR_Word Docs_54;
        MR_Box STATE_VARIABLE_IO_83_83;
        MR_Integer STATE_VARIABLE_RemainingWidth_84_84;
        MR_Integer STATE_VARIABLE_RemainingLines_87_87;
        MR_Word STATE_VARIABLE_Limit_92_92;
        MR_Word STATE_VARIABLE_Pri_97_97;
        MR_Word STATE_VARIABLE_Indents_102_102;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Integer next_value_of_STATE_VARIABLE_RemainingWidth_0_6;
        MR_Word next_value_of_STATE_VARIABLE_Indents_0_8;
        MR_Integer next_value_of_STATE_VARIABLE_RemainingLines_0_10;
        MR_Word next_value_of_STATE_VARIABLE_Limit_0_12;
        MR_Word next_value_of_STATE_VARIABLE_Pri_0_14;
        MR_Box next_value_of_STATE_VARIABLE_IO_0_16;

        switch (MR_tag((MR_Word) HeadDoc0_44)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadDoc0_44)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer IndentWidth_55;
                  MR_Integer Var_85;

                  switch (MR_tag((MR_Word) STATE_VARIABLE_Indents_0_8)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      IndentWidth_55 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      IndentWidth_55 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_Indents_0_8, (MR_Integer) 2))));
                      break;
                    case (MR_Integer) 2:
                      IndentWidth_55 = ((MR_Integer) ((MR_hl_field(2, STATE_VARIABLE_Indents_0_8, (MR_Integer) 2))));
                      break;
                  }
                  Var_85 = (MR_Integer) ((MR_Unsigned) HeadVar__4_4 - (MR_Unsigned) IndentWidth_55);
                  succeeded = (STATE_VARIABLE_RemainingWidth_0_6 < Var_85);
                  if (succeeded)
                    mercury__pretty_printer__format_nl_8_p_0(TypeClassInfo_for_writer_115, HeadVar__1_1, HeadVar__4_4, STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_RemainingWidth_84_84, STATE_VARIABLE_RemainingLines_0_10, &STATE_VARIABLE_RemainingLines_87_87, STATE_VARIABLE_IO_0_16, &STATE_VARIABLE_IO_83_83);
                  else
                  {
                    STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                    STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                    STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                  }
                  Docs_54 = TailDocs0_45;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__pretty_printer__format_nl_8_p_0(TypeClassInfo_for_writer_115, HeadVar__1_1, HeadVar__4_4, STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_RemainingWidth_84_84, STATE_VARIABLE_RemainingLines_0_10, &STATE_VARIABLE_RemainingLines_87_87, STATE_VARIABLE_IO_0_16, &STATE_VARIABLE_IO_83_83);
                  Docs_54 = TailDocs0_45;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String String_52 = ((MR_String) ((MR_hl_field(1, HeadDoc0_44, (MR_Integer) 0))));
              MR_Integer StrWidth_53;
              void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_115, (MR_Integer) 0)), (MR_Integer) 5))));

              func_1(((MR_Box) (TypeClassInfo_for_writer_115)), HeadVar__1_1, ((MR_Box) (String_52)), STATE_VARIABLE_IO_0_16, &STATE_VARIABLE_IO_83_83);
              mercury__string__count_code_points_loop_4_p_0(String_52, (MR_Integer) 0, (MR_Integer) 0, &StrWidth_53);
              STATE_VARIABLE_RemainingWidth_84_84 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingWidth_0_6 - (MR_Unsigned) StrWidth_53);
              Docs_54 = TailDocs0_45;
              STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
              STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
              STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
              STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HeadDocs0_56 = ((MR_Word) ((MR_hl_field(2, HeadDoc0_44, (MR_Integer) 0))));

              mercury__list__append_3_p_1((MR_Word) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0), HeadDocs0_56, TailDocs0_45, &Docs_54);
              STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
              STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
              STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
              STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
              STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
              STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Univ_57 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 1))));

                  mercury__pretty_printer__expand_format_univ_8_p_1(HeadVar__2_2, HeadVar__3_3, Univ_57, TailDocs0_45, &Docs_54, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_92_92, STATE_VARIABLE_Pri_0_14);
                  STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                  STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Univs_58 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 1))));
                  MR_Word Sep_59 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 2))));

                  mercury__pretty_printer__expand_format_list_6_p_0(Univs_58, Sep_59, TailDocs0_45, &Docs_54, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_92_92);
                  STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                  STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Name_60 = ((MR_String) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 1))));
                  MR_Word Univs_114 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 2))));

                  mercury__pretty_printer__expand_format_term_7_p_0(Name_60, Univs_114, TailDocs0_45, &Docs_54, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_92_92, STATE_VARIABLE_Pri_0_14);
                  STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                  STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Susp_61 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 1))));

                  mercury__pretty_printer__expand_format_susp_5_p_0(Susp_61, TailDocs0_45, &Docs_54, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_92_92);
                  STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                  STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Internal_62 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) Internal_62)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(Internal_62)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word Docs1_65;
                            MR_Integer RemainingWidthAfterGroup_66;

                            mercury__pretty_printer__expand_docs_to_line_end_11_p_1(HeadVar__2_2, HeadVar__3_3, TailDocs0_45, &Docs1_65, (MR_Integer) 1, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_92_92, STATE_VARIABLE_Pri_0_14, &STATE_VARIABLE_Pri_97_97, STATE_VARIABLE_RemainingWidth_0_6, &RemainingWidthAfterGroup_66);
                            succeeded = (RemainingWidthAfterGroup_66 >= (MR_Integer) 0);
                            if (succeeded)
                              mercury__pretty_printer__output_current_group_12_p_0(TypeClassInfo_for_writer_115, HeadVar__1_1, HeadVar__4_4, STATE_VARIABLE_Indents_0_8, Docs1_65, &Docs_54, (MR_Integer) 1, STATE_VARIABLE_RemainingWidth_0_6, &STATE_VARIABLE_RemainingWidth_84_84, STATE_VARIABLE_RemainingLines_0_10, &STATE_VARIABLE_RemainingLines_87_87, STATE_VARIABLE_IO_0_16, &STATE_VARIABLE_IO_83_83);
                            else
                            {
                              Docs_54 = Docs1_65;
                              STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                              STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                              STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                            }
                            STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                            STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                            STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                            Docs_54 = TailDocs0_45;
                            STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                            STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                            STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            switch (MR_tag((MR_Word) STATE_VARIABLE_Indents_0_8)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140pretty_printer.decrement_user_indent\'/2", (MR_String) "last indent is not user indent");
                                  return;
                                }
                                break;
                              case (MR_Integer) 1:
                                STATE_VARIABLE_Indents_102_102 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Indents_0_8, (MR_Integer) 0))));
                                break;
                              case (MR_Integer) 2:
                                {
                                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140pretty_printer.decrement_user_indent\'/2", (MR_String) "last indent is not user indent");
                                  return;
                                }
                                break;
                            }
                            STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                            STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                            Docs_54 = TailDocs0_45;
                            STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                            STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                            STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            mercury__pretty_printer__increment_std_indent_2_p_0(STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_Indents_102_102);
                            STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                            STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                            Docs_54 = TailDocs0_45;
                            STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                            STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                            STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                          }
                          break;
                        case (MR_Integer) 4:
                          {
                            mercury__pretty_printer__decrement_std_indent_2_p_0(STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_Indents_102_102);
                            STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                            STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                            Docs_54 = TailDocs0_45;
                            STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                            STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                            STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String IndentStr_67 = ((MR_String) ((MR_hl_field(1, Internal_62, (MR_Integer) 0))));

                        mercury__pretty_printer__increment_user_indent_3_p_0(IndentStr_67, STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_Indents_102_102);
                        STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                        STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                        Docs_54 = TailDocs0_45;
                        STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                        STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                        STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_Pri_97_97 = ((MR_Word) ((MR_hl_field(2, Internal_62, (MR_Integer) 0))));
                        STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                        STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                        Docs_54 = TailDocs0_45;
                        STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                        STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                        STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_Limit_92_92 = ((MR_Word) ((MR_hl_field(3, Internal_62, (MR_Integer) 0))));
                        STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                        STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                        Docs_54 = TailDocs0_45;
                        STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                        STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                        STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__5_5 = Docs_54;
        next_value_of_STATE_VARIABLE_RemainingWidth_0_6 = STATE_VARIABLE_RemainingWidth_84_84;
        next_value_of_STATE_VARIABLE_Indents_0_8 = STATE_VARIABLE_Indents_102_102;
        next_value_of_STATE_VARIABLE_RemainingLines_0_10 = STATE_VARIABLE_RemainingLines_87_87;
        next_value_of_STATE_VARIABLE_Limit_0_12 = STATE_VARIABLE_Limit_92_92;
        next_value_of_STATE_VARIABLE_Pri_0_14 = STATE_VARIABLE_Pri_97_97;
        next_value_of_STATE_VARIABLE_IO_0_16 = STATE_VARIABLE_IO_83_83;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        STATE_VARIABLE_RemainingWidth_0_6 = next_value_of_STATE_VARIABLE_RemainingWidth_0_6;
        STATE_VARIABLE_Indents_0_8 = next_value_of_STATE_VARIABLE_Indents_0_8;
        STATE_VARIABLE_RemainingLines_0_10 = next_value_of_STATE_VARIABLE_RemainingLines_0_10;
        STATE_VARIABLE_Limit_0_12 = next_value_of_STATE_VARIABLE_Limit_0_12;
        STATE_VARIABLE_Pri_0_14 = next_value_of_STATE_VARIABLE_Pri_0_14;
        STATE_VARIABLE_IO_0_16 = next_value_of_STATE_VARIABLE_IO_0_16;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__pretty_printer__put_doc_7_p_0(
  MR_Word TypeClassInfo_for_writer_30,
  MR_Box Stream_8,
  MR_Word Canonicalize_9,
  MR_Word FMap_10,
  MR_Word Params_11,
  MR_Word Doc_12,
  MR_Box STATE_VARIABLE_IO_0_25,
  MR_Box * STATE_VARIABLE_IO_26)
{
  MR_Integer MaxLines_16 = ((MR_Integer) ((MR_hl_field(0, Params_11, (MR_Integer) 1))));
  MR_Word Limit_17 = ((MR_Word) ((MR_hl_field(0, Params_11, (MR_Integer) 2))));
  MR_Integer RemainingWidth_18 = ((MR_Integer) ((MR_hl_field(0, Params_11, (MR_Integer) 0))));
  MR_Word Var_27;
  MR_Integer Var_20;
  MR_Word Var_21;
  MR_Integer Var_22;
  MR_Word Var_23;
  MR_Word Var_24;

  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Doc_12));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__pretty_printer__do_put_docs_17_p_0(TypeClassInfo_for_writer_30, Stream_8, Canonicalize_9, FMap_10, RemainingWidth_18, Var_27, RemainingWidth_18, &Var_20, (MR_Word) ((MR_Unsigned) 0U), &Var_21, MaxLines_16, &Var_22, Limit_17, &Var_23, (MR_Word) (((MR_Box) ((MR_Unsigned) 1U))), &Var_24, STATE_VARIABLE_IO_0_25, STATE_VARIABLE_IO_26);
}

void MR_CALL 
mercury__pretty_printer__do_put_docs_17_p_0(
  MR_Word TypeClassInfo_for_writer_115,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_6,
  MR_Integer * STATE_VARIABLE_RemainingWidth_7,
  MR_Word STATE_VARIABLE_Indents_0_8,
  MR_Word * STATE_VARIABLE_Indents_9,
  MR_Integer STATE_VARIABLE_RemainingLines_0_10,
  MR_Integer * STATE_VARIABLE_RemainingLines_11,
  MR_Word STATE_VARIABLE_Limit_0_12,
  MR_Word * STATE_VARIABLE_Limit_13,
  MR_Word STATE_VARIABLE_Pri_0_14,
  MR_Word * STATE_VARIABLE_Pri_15,
  MR_Box STATE_VARIABLE_IO_0_16,
  MR_Box * STATE_VARIABLE_IO_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_IO_17 = STATE_VARIABLE_IO_0_16;
      *STATE_VARIABLE_Pri_15 = STATE_VARIABLE_Pri_0_14;
      *STATE_VARIABLE_Limit_13 = STATE_VARIABLE_Limit_0_12;
      *STATE_VARIABLE_RemainingLines_11 = STATE_VARIABLE_RemainingLines_0_10;
      *STATE_VARIABLE_Indents_9 = STATE_VARIABLE_Indents_0_8;
      *STATE_VARIABLE_RemainingWidth_7 = STATE_VARIABLE_RemainingWidth_0_6;
    }
    else
    {
      MR_Word HeadDoc0_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word TailDocs0_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));

      succeeded = (STATE_VARIABLE_RemainingLines_0_10 <= (MR_Integer) 0);
      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_115, (MR_Integer) 0)), (MR_Integer) 5))));

        func_0(((MR_Box) (TypeClassInfo_for_writer_115)), HeadVar__1_1, ((MR_Box) ((MR_String) "...")), STATE_VARIABLE_IO_0_16, STATE_VARIABLE_IO_17);
        *STATE_VARIABLE_Pri_15 = STATE_VARIABLE_Pri_0_14;
        *STATE_VARIABLE_Limit_13 = STATE_VARIABLE_Limit_0_12;
        *STATE_VARIABLE_RemainingLines_11 = STATE_VARIABLE_RemainingLines_0_10;
        *STATE_VARIABLE_Indents_9 = STATE_VARIABLE_Indents_0_8;
        *STATE_VARIABLE_RemainingWidth_7 = STATE_VARIABLE_RemainingWidth_0_6;
      }
      else
      {
        MR_Word Docs_54;
        MR_Box STATE_VARIABLE_IO_83_83;
        MR_Integer STATE_VARIABLE_RemainingWidth_84_84;
        MR_Integer STATE_VARIABLE_RemainingLines_87_87;
        MR_Word STATE_VARIABLE_Limit_92_92;
        MR_Word STATE_VARIABLE_Pri_97_97;
        MR_Word STATE_VARIABLE_Indents_102_102;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Integer next_value_of_STATE_VARIABLE_RemainingWidth_0_6;
        MR_Word next_value_of_STATE_VARIABLE_Indents_0_8;
        MR_Integer next_value_of_STATE_VARIABLE_RemainingLines_0_10;
        MR_Word next_value_of_STATE_VARIABLE_Limit_0_12;
        MR_Word next_value_of_STATE_VARIABLE_Pri_0_14;
        MR_Box next_value_of_STATE_VARIABLE_IO_0_16;

        switch (MR_tag((MR_Word) HeadDoc0_44)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadDoc0_44)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer IndentWidth_55;
                  MR_Integer Var_85;

                  switch (MR_tag((MR_Word) STATE_VARIABLE_Indents_0_8)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      IndentWidth_55 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      IndentWidth_55 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_Indents_0_8, (MR_Integer) 2))));
                      break;
                    case (MR_Integer) 2:
                      IndentWidth_55 = ((MR_Integer) ((MR_hl_field(2, STATE_VARIABLE_Indents_0_8, (MR_Integer) 2))));
                      break;
                  }
                  Var_85 = (MR_Integer) ((MR_Unsigned) HeadVar__4_4 - (MR_Unsigned) IndentWidth_55);
                  succeeded = (STATE_VARIABLE_RemainingWidth_0_6 < Var_85);
                  if (succeeded)
                    mercury__pretty_printer__format_nl_8_p_0(TypeClassInfo_for_writer_115, HeadVar__1_1, HeadVar__4_4, STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_RemainingWidth_84_84, STATE_VARIABLE_RemainingLines_0_10, &STATE_VARIABLE_RemainingLines_87_87, STATE_VARIABLE_IO_0_16, &STATE_VARIABLE_IO_83_83);
                  else
                  {
                    STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                    STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                    STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                  }
                  Docs_54 = TailDocs0_45;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__pretty_printer__format_nl_8_p_0(TypeClassInfo_for_writer_115, HeadVar__1_1, HeadVar__4_4, STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_RemainingWidth_84_84, STATE_VARIABLE_RemainingLines_0_10, &STATE_VARIABLE_RemainingLines_87_87, STATE_VARIABLE_IO_0_16, &STATE_VARIABLE_IO_83_83);
                  Docs_54 = TailDocs0_45;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String String_52 = ((MR_String) ((MR_hl_field(1, HeadDoc0_44, (MR_Integer) 0))));
              MR_Integer StrWidth_53;
              void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_115, (MR_Integer) 0)), (MR_Integer) 5))));

              func_1(((MR_Box) (TypeClassInfo_for_writer_115)), HeadVar__1_1, ((MR_Box) (String_52)), STATE_VARIABLE_IO_0_16, &STATE_VARIABLE_IO_83_83);
              mercury__string__count_code_points_loop_4_p_0(String_52, (MR_Integer) 0, (MR_Integer) 0, &StrWidth_53);
              STATE_VARIABLE_RemainingWidth_84_84 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingWidth_0_6 - (MR_Unsigned) StrWidth_53);
              Docs_54 = TailDocs0_45;
              STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
              STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
              STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
              STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HeadDocs0_56 = ((MR_Word) ((MR_hl_field(2, HeadDoc0_44, (MR_Integer) 0))));

              mercury__list__append_3_p_1((MR_Word) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0), HeadDocs0_56, TailDocs0_45, &Docs_54);
              STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
              STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
              STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
              STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
              STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
              STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Univ_57 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 1))));

                  mercury__pretty_printer__expand_format_univ_8_p_0(HeadVar__2_2, HeadVar__3_3, Univ_57, TailDocs0_45, &Docs_54, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_92_92, STATE_VARIABLE_Pri_0_14);
                  STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                  STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Univs_58 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 1))));
                  MR_Word Sep_59 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 2))));

                  mercury__pretty_printer__expand_format_list_6_p_0(Univs_58, Sep_59, TailDocs0_45, &Docs_54, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_92_92);
                  STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                  STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Name_60 = ((MR_String) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 1))));
                  MR_Word Univs_114 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 2))));

                  mercury__pretty_printer__expand_format_term_7_p_0(Name_60, Univs_114, TailDocs0_45, &Docs_54, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_92_92, STATE_VARIABLE_Pri_0_14);
                  STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                  STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Susp_61 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 1))));

                  mercury__pretty_printer__expand_format_susp_5_p_0(Susp_61, TailDocs0_45, &Docs_54, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_92_92);
                  STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                  STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Internal_62 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) Internal_62)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(Internal_62)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word Docs1_65;
                            MR_Integer RemainingWidthAfterGroup_66;

                            mercury__pretty_printer__expand_docs_to_line_end_11_p_0(HeadVar__2_2, HeadVar__3_3, TailDocs0_45, &Docs1_65, (MR_Integer) 1, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_92_92, STATE_VARIABLE_Pri_0_14, &STATE_VARIABLE_Pri_97_97, STATE_VARIABLE_RemainingWidth_0_6, &RemainingWidthAfterGroup_66);
                            succeeded = (RemainingWidthAfterGroup_66 >= (MR_Integer) 0);
                            if (succeeded)
                              mercury__pretty_printer__output_current_group_12_p_0(TypeClassInfo_for_writer_115, HeadVar__1_1, HeadVar__4_4, STATE_VARIABLE_Indents_0_8, Docs1_65, &Docs_54, (MR_Integer) 1, STATE_VARIABLE_RemainingWidth_0_6, &STATE_VARIABLE_RemainingWidth_84_84, STATE_VARIABLE_RemainingLines_0_10, &STATE_VARIABLE_RemainingLines_87_87, STATE_VARIABLE_IO_0_16, &STATE_VARIABLE_IO_83_83);
                            else
                            {
                              Docs_54 = Docs1_65;
                              STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                              STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                              STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                            }
                            STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                            STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                            STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                            Docs_54 = TailDocs0_45;
                            STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                            STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                            STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            switch (MR_tag((MR_Word) STATE_VARIABLE_Indents_0_8)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140pretty_printer.decrement_user_indent\'/2", (MR_String) "last indent is not user indent");
                                  return;
                                }
                                break;
                              case (MR_Integer) 1:
                                STATE_VARIABLE_Indents_102_102 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Indents_0_8, (MR_Integer) 0))));
                                break;
                              case (MR_Integer) 2:
                                {
                                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140pretty_printer.decrement_user_indent\'/2", (MR_String) "last indent is not user indent");
                                  return;
                                }
                                break;
                            }
                            STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                            STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                            Docs_54 = TailDocs0_45;
                            STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                            STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                            STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            mercury__pretty_printer__increment_std_indent_2_p_0(STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_Indents_102_102);
                            STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                            STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                            Docs_54 = TailDocs0_45;
                            STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                            STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                            STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                          }
                          break;
                        case (MR_Integer) 4:
                          {
                            mercury__pretty_printer__decrement_std_indent_2_p_0(STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_Indents_102_102);
                            STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                            STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                            Docs_54 = TailDocs0_45;
                            STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                            STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                            STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String IndentStr_67 = ((MR_String) ((MR_hl_field(1, Internal_62, (MR_Integer) 0))));

                        mercury__pretty_printer__increment_user_indent_3_p_0(IndentStr_67, STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_Indents_102_102);
                        STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                        STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                        Docs_54 = TailDocs0_45;
                        STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                        STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                        STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_Pri_97_97 = ((MR_Word) ((MR_hl_field(2, Internal_62, (MR_Integer) 0))));
                        STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                        STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                        Docs_54 = TailDocs0_45;
                        STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                        STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                        STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_Limit_92_92 = ((MR_Word) ((MR_hl_field(3, Internal_62, (MR_Integer) 0))));
                        STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                        STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                        Docs_54 = TailDocs0_45;
                        STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                        STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                        STATE_VARIABLE_IO_83_83 = STATE_VARIABLE_IO_0_16;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__5_5 = Docs_54;
        next_value_of_STATE_VARIABLE_RemainingWidth_0_6 = STATE_VARIABLE_RemainingWidth_84_84;
        next_value_of_STATE_VARIABLE_Indents_0_8 = STATE_VARIABLE_Indents_102_102;
        next_value_of_STATE_VARIABLE_RemainingLines_0_10 = STATE_VARIABLE_RemainingLines_87_87;
        next_value_of_STATE_VARIABLE_Limit_0_12 = STATE_VARIABLE_Limit_92_92;
        next_value_of_STATE_VARIABLE_Pri_0_14 = STATE_VARIABLE_Pri_97_97;
        next_value_of_STATE_VARIABLE_IO_0_16 = STATE_VARIABLE_IO_83_83;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        STATE_VARIABLE_RemainingWidth_0_6 = next_value_of_STATE_VARIABLE_RemainingWidth_0_6;
        STATE_VARIABLE_Indents_0_8 = next_value_of_STATE_VARIABLE_Indents_0_8;
        STATE_VARIABLE_RemainingLines_0_10 = next_value_of_STATE_VARIABLE_RemainingLines_0_10;
        STATE_VARIABLE_Limit_0_12 = next_value_of_STATE_VARIABLE_Limit_0_12;
        STATE_VARIABLE_Pri_0_14 = next_value_of_STATE_VARIABLE_Pri_0_14;
        STATE_VARIABLE_IO_0_16 = next_value_of_STATE_VARIABLE_IO_0_16;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__pretty_printer__format_nl_8_p_0(
  MR_Word TypeClassInfo_for_writer_25,
  MR_Box Stream_9,
  MR_Integer LineWidth_10,
  MR_Word Indents_11,
  MR_Integer * RemainingWidth_12,
  MR_Integer STATE_VARIABLE_RemainingLines_0_15,
  MR_Integer * STATE_VARIABLE_RemainingLines_16,
  MR_Box STATE_VARIABLE_IO_0_17,
  MR_Box * STATE_VARIABLE_IO_18)
{
  MR_Box STATE_VARIABLE_IO_20_20;
  MR_Integer Var_21;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_25, (MR_Integer) 0)), (MR_Integer) 5))));

  func_0(((MR_Box) (TypeClassInfo_for_writer_25)), Stream_9, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_IO_0_17, &STATE_VARIABLE_IO_20_20);
  switch (MR_tag((MR_Word) Indents_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Var_21 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      Var_21 = ((MR_Integer) ((MR_hl_field(1, Indents_11, (MR_Integer) 2))));
      break;
    case (MR_Integer) 2:
      Var_21 = ((MR_Integer) ((MR_hl_field(2, Indents_11, (MR_Integer) 2))));
      break;
  }
  *RemainingWidth_12 = (MR_Integer) ((MR_Unsigned) LineWidth_10 - (MR_Unsigned) Var_21);
  mercury__pretty_printer__output_indent_stack_4_p_0(TypeClassInfo_for_writer_25, Stream_9, Indents_11, STATE_VARIABLE_IO_20_20, STATE_VARIABLE_IO_18);
  *STATE_VARIABLE_RemainingLines_16 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingLines_0_15 - (MR_Unsigned) 1);
}

static void MR_CALL 
mercury__pretty_printer__expand_docs_to_line_end_11_p_0(
  MR_Word Canonicalize_1,
  MR_Word FMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word STATE_VARIABLE_Limit_0_6,
  MR_Word * STATE_VARIABLE_Limit_7,
  MR_Word STATE_VARIABLE_Pri_0_8,
  MR_Word * STATE_VARIABLE_Pri_9,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_10,
  MR_Integer * STATE_VARIABLE_RemainingWidth_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RemainingWidth_11 = STATE_VARIABLE_RemainingWidth_0_10;
      *STATE_VARIABLE_Pri_9 = STATE_VARIABLE_Pri_0_8;
      *STATE_VARIABLE_Limit_7 = STATE_VARIABLE_Limit_0_6;
    }
    else
    {
      MR_Word HeadDoc0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TailDocs0_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));

      succeeded = (HeadVar__5_5 <= (MR_Integer) 0);
      if (succeeded)
      {
        if ((HeadDoc0_27 == (MR_Word) ((MR_Unsigned) 4U)))
          succeeded = MR_TRUE;
        else
        if ((HeadDoc0_27 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      if (!(succeeded))
        succeeded = (STATE_VARIABLE_RemainingWidth_0_10 < (MR_Integer) 0);
      if (succeeded)
      {
        *HeadVar__4_4 = HeadVar__3_3;
        *STATE_VARIABLE_RemainingWidth_11 = STATE_VARIABLE_RemainingWidth_0_10;
        *STATE_VARIABLE_Pri_9 = STATE_VARIABLE_Pri_0_8;
        *STATE_VARIABLE_Limit_7 = STATE_VARIABLE_Limit_0_6;
      }
      else
        switch (MR_tag((MR_Word) HeadDoc0_27)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = (HeadVar__5_5 <= (MR_Integer) 0);
              if (succeeded)
              {
                *HeadVar__4_4 = HeadVar__3_3;
                *STATE_VARIABLE_RemainingWidth_11 = STATE_VARIABLE_RemainingWidth_0_10;
                *STATE_VARIABLE_Pri_9 = STATE_VARIABLE_Pri_0_8;
                *STATE_VARIABLE_Limit_7 = STATE_VARIABLE_Limit_0_6;
              }
              else
              {
                MR_Word * AddrTailDocs_114;

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_27));
                  MR_hl_field(1, base, 1) = NULL;
                }
                AddrTailDocs_114 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
                mercury__pretty_printer__LCMC__pred__expand_docs_to_line_end__1_11_p_0(Canonicalize_1, FMap_2, TailDocs0_28, AddrTailDocs_114, HeadVar__5_5, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String String_34 = ((MR_String) ((MR_hl_field(1, HeadDoc0_27, (MR_Integer) 0))));
              MR_Integer StrWidth_35;
              MR_Integer STATE_VARIABLE_RemainingWidth_55_55;
              MR_Word * AddrTailDocs_121;

              mercury__string__count_code_points_loop_4_p_0(String_34, (MR_Integer) 0, (MR_Integer) 0, &StrWidth_35);
              STATE_VARIABLE_RemainingWidth_55_55 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingWidth_0_10 - (MR_Unsigned) StrWidth_35);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_27));
                MR_hl_field(1, base, 1) = NULL;
              }
              AddrTailDocs_121 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
              mercury__pretty_printer__LCMC__pred__expand_docs_to_line_end__1_11_p_0(Canonicalize_1, FMap_2, TailDocs0_28, AddrTailDocs_121, HeadVar__5_5, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_55_55, STATE_VARIABLE_RemainingWidth_11);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HeadDocs0_37 = ((MR_Word) ((MR_hl_field(2, HeadDoc0_27, (MR_Integer) 0))));
              MR_Word Docs1_38;
              MR_Word next_value_of_HeadVar__3_3;

              mercury__list__append_3_p_1((MR_Word) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0), HeadDocs0_37, TailDocs0_28, &Docs1_38);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__3_3 = Docs1_38;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word HeadUniv_39 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 1))));
                  MR_Word STATE_VARIABLE_Limit_66_98;
                  MR_Word Docs1_99;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_univ_8_p_0(Canonicalize_1, FMap_2, HeadUniv_39, TailDocs0_28, &Docs1_99, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_66_98, STATE_VARIABLE_Pri_0_8);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Docs1_99;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_66_98;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word HeadUnivs_40 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 1))));
                  MR_Word Sep_41 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 2))));
                  MR_Word STATE_VARIABLE_Limit_66_66;
                  MR_Word Docs1_91;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_list_6_p_0(HeadUnivs_40, Sep_41, TailDocs0_28, &Docs1_91, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_66_66);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Docs1_91;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_66_66;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Name_42 = ((MR_String) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 1))));
                  MR_Word HeadUnivs_90 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 2))));
                  MR_Word STATE_VARIABLE_Limit_66_96;
                  MR_Word Docs1_97;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_term_7_p_0(Name_42, HeadUnivs_90, TailDocs0_28, &Docs1_97, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_66_96, STATE_VARIABLE_Pri_0_8);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Docs1_97;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_66_96;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word HeadSusp_43 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 1))));
                  MR_Word STATE_VARIABLE_Limit_66_94;
                  MR_Word Docs1_95;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_susp_5_p_0(HeadSusp_43, TailDocs0_28, &Docs1_95, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_66_94);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Docs1_95;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_66_94;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Internal_44 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) Internal_44)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(Internal_44)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Integer Var_74;
                            MR_Integer STATE_VARIABLE_OpenGroups_73_106;
                            MR_Word * AddrTailDocs_119;

                            succeeded = (HeadVar__5_5 > (MR_Integer) 0);
                            if (succeeded)
                              Var_74 = (MR_Integer) 1;
                            else
                              Var_74 = (MR_Integer) 0;
                            STATE_VARIABLE_OpenGroups_73_106 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) Var_74);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_27));
                              MR_hl_field(1, base, 1) = NULL;
                            }
                            AddrTailDocs_119 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
                            mercury__pretty_printer__LCMC__pred__expand_docs_to_line_end__1_11_p_0(Canonicalize_1, FMap_2, TailDocs0_28, AddrTailDocs_119, STATE_VARIABLE_OpenGroups_73_106, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Integer Var_77;
                            MR_Integer STATE_VARIABLE_OpenGroups_73_100;
                            MR_Word * AddrTailDocs_116;

                            succeeded = (HeadVar__5_5 > (MR_Integer) 0);
                            if (succeeded)
                              Var_77 = (MR_Integer) 1;
                            else
                              Var_77 = (MR_Integer) 0;
                            STATE_VARIABLE_OpenGroups_73_100 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 - (MR_Unsigned) Var_77);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_27));
                              MR_hl_field(1, base, 1) = NULL;
                            }
                            AddrTailDocs_116 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
                            mercury__pretty_printer__LCMC__pred__expand_docs_to_line_end__1_11_p_0(Canonicalize_1, FMap_2, TailDocs0_28, AddrTailDocs_116, STATE_VARIABLE_OpenGroups_73_100, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word * AddrTailDocs_120;

                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_27));
                              MR_hl_field(1, base, 1) = NULL;
                            }
                            AddrTailDocs_120 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
                            mercury__pretty_printer__LCMC__pred__expand_docs_to_line_end__1_11_p_0(Canonicalize_1, FMap_2, TailDocs0_28, AddrTailDocs_120, HeadVar__5_5, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            MR_Word * AddrTailDocs_118;

                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_27));
                              MR_hl_field(1, base, 1) = NULL;
                            }
                            AddrTailDocs_118 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
                            mercury__pretty_printer__LCMC__pred__expand_docs_to_line_end__1_11_p_0(Canonicalize_1, FMap_2, TailDocs0_28, AddrTailDocs_118, HeadVar__5_5, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                          }
                          break;
                        case (MR_Integer) 4:
                          {
                            MR_Word * AddrTailDocs_117;

                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_27));
                              MR_hl_field(1, base, 1) = NULL;
                            }
                            AddrTailDocs_117 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
                            mercury__pretty_printer__LCMC__pred__expand_docs_to_line_end__1_11_p_0(Canonicalize_1, FMap_2, TailDocs0_28, AddrTailDocs_117, HeadVar__5_5, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word * AddrTailDocs_115;

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *HeadVar__4_4 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_27));
                          MR_hl_field(1, base, 1) = NULL;
                        }
                        AddrTailDocs_115 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
                        mercury__pretty_printer__LCMC__pred__expand_docs_to_line_end__1_11_p_0(Canonicalize_1, FMap_2, TailDocs0_28, AddrTailDocs_115, HeadVar__5_5, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word STATE_VARIABLE_Pri_83_111 = ((MR_Word) ((MR_hl_field(2, Internal_44, (MR_Integer) 0))));
                        MR_Word next_value_of_HeadVar__3_3 = TailDocs0_28;
                        MR_Word next_value_of_STATE_VARIABLE_Pri_0_8 = STATE_VARIABLE_Pri_83_111;

                        // direct tailcall eliminated
                        ;
                        HeadVar__3_3 = next_value_of_HeadVar__3_3;
                        STATE_VARIABLE_Pri_0_8 = next_value_of_STATE_VARIABLE_Pri_0_8;
                        continue;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word STATE_VARIABLE_Limit_82_82 = ((MR_Word) ((MR_hl_field(3, Internal_44, (MR_Integer) 0))));
                        MR_Word next_value_of_HeadVar__3_3 = TailDocs0_28;
                        MR_Word next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_82_82;

                        // direct tailcall eliminated
                        ;
                        HeadVar__3_3 = next_value_of_HeadVar__3_3;
                        STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                        continue;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
    }
    break;
  }
}

static void MR_CALL 
mercury__pretty_printer__LCMC__pred__expand_docs_to_line_end__1_11_p_0(
  MR_Word Canonicalize_1,
  MR_Word FMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_122,
  MR_Integer HeadVar__5_5,
  MR_Word STATE_VARIABLE_Limit_0_6,
  MR_Word * STATE_VARIABLE_Limit_7,
  MR_Word STATE_VARIABLE_Pri_0_8,
  MR_Word * STATE_VARIABLE_Pri_9,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_10,
  MR_Integer * STATE_VARIABLE_RemainingWidth_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_122 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RemainingWidth_11 = STATE_VARIABLE_RemainingWidth_0_10;
      *STATE_VARIABLE_Pri_9 = STATE_VARIABLE_Pri_0_8;
      *STATE_VARIABLE_Limit_7 = STATE_VARIABLE_Limit_0_6;
    }
    else
    {
      MR_Word HeadDoc0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TailDocs0_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));

      succeeded = (HeadVar__5_5 <= (MR_Integer) 0);
      if (succeeded)
      {
        if ((HeadDoc0_27 == (MR_Word) ((MR_Unsigned) 4U)))
          succeeded = MR_TRUE;
        else
        if ((HeadDoc0_27 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      if (!(succeeded))
        succeeded = (STATE_VARIABLE_RemainingWidth_0_10 < (MR_Integer) 0);
      if (succeeded)
      {
        *AddrOfHeadVar__4_122 = HeadVar__3_3;
        *STATE_VARIABLE_RemainingWidth_11 = STATE_VARIABLE_RemainingWidth_0_10;
        *STATE_VARIABLE_Pri_9 = STATE_VARIABLE_Pri_0_8;
        *STATE_VARIABLE_Limit_7 = STATE_VARIABLE_Limit_0_6;
      }
      else
        switch (MR_tag((MR_Word) HeadDoc0_27)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = (HeadVar__5_5 <= (MR_Integer) 0);
              if (succeeded)
              {
                *AddrOfHeadVar__4_122 = HeadVar__3_3;
                *STATE_VARIABLE_RemainingWidth_11 = STATE_VARIABLE_RemainingWidth_0_10;
                *STATE_VARIABLE_Pri_9 = STATE_VARIABLE_Pri_0_8;
                *STATE_VARIABLE_Limit_7 = STATE_VARIABLE_Limit_0_6;
              }
              else
              {
                MR_Word * AddrTailDocs_114;
                MR_Word HeadVar__4_125;
                MR_Word next_value_of_HeadVar__3_3;
                MR_Word * next_value_of_AddrOfHeadVar__4_122;

                {
                  HeadVar__4_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, HeadVar__4_125, 0) = ((MR_Box) (HeadDoc0_27));
                  MR_hl_field(1, HeadVar__4_125, 1) = NULL;
                }
                AddrTailDocs_114 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_125, (MR_Integer) 1)));
                *AddrOfHeadVar__4_122 = HeadVar__4_125;
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__3_3 = TailDocs0_28;
                next_value_of_AddrOfHeadVar__4_122 = AddrTailDocs_114;
                HeadVar__3_3 = next_value_of_HeadVar__3_3;
                AddrOfHeadVar__4_122 = next_value_of_AddrOfHeadVar__4_122;
                continue;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String String_34 = ((MR_String) ((MR_hl_field(1, HeadDoc0_27, (MR_Integer) 0))));
              MR_Integer StrWidth_35;
              MR_Integer STATE_VARIABLE_RemainingWidth_55_55;
              MR_Word * AddrTailDocs_121;
              MR_Word HeadVar__4_149;
              MR_Word next_value_of_HeadVar__3_3;
              MR_Word * next_value_of_AddrOfHeadVar__4_122;
              MR_Integer next_value_of_STATE_VARIABLE_RemainingWidth_0_10;

              mercury__string__count_code_points_loop_4_p_0(String_34, (MR_Integer) 0, (MR_Integer) 0, &StrWidth_35);
              STATE_VARIABLE_RemainingWidth_55_55 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingWidth_0_10 - (MR_Unsigned) StrWidth_35);
              {
                HeadVar__4_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, HeadVar__4_149, 0) = ((MR_Box) (HeadDoc0_27));
                MR_hl_field(1, HeadVar__4_149, 1) = NULL;
              }
              AddrTailDocs_121 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_149, (MR_Integer) 1)));
              *AddrOfHeadVar__4_122 = HeadVar__4_149;
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__3_3 = TailDocs0_28;
              next_value_of_AddrOfHeadVar__4_122 = AddrTailDocs_121;
              next_value_of_STATE_VARIABLE_RemainingWidth_0_10 = STATE_VARIABLE_RemainingWidth_55_55;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              AddrOfHeadVar__4_122 = next_value_of_AddrOfHeadVar__4_122;
              STATE_VARIABLE_RemainingWidth_0_10 = next_value_of_STATE_VARIABLE_RemainingWidth_0_10;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HeadDocs0_37 = ((MR_Word) ((MR_hl_field(2, HeadDoc0_27, (MR_Integer) 0))));
              MR_Word Docs1_38;
              MR_Word next_value_of_HeadVar__3_3;

              mercury__list__append_3_p_1((MR_Word) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0), HeadDocs0_37, TailDocs0_28, &Docs1_38);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__3_3 = Docs1_38;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word HeadUniv_39 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 1))));
                  MR_Word STATE_VARIABLE_Limit_66_98;
                  MR_Word Docs1_99;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_univ_8_p_0(Canonicalize_1, FMap_2, HeadUniv_39, TailDocs0_28, &Docs1_99, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_66_98, STATE_VARIABLE_Pri_0_8);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Docs1_99;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_66_98;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word HeadUnivs_40 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 1))));
                  MR_Word Sep_41 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 2))));
                  MR_Word STATE_VARIABLE_Limit_66_66;
                  MR_Word Docs1_91;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_list_6_p_0(HeadUnivs_40, Sep_41, TailDocs0_28, &Docs1_91, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_66_66);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Docs1_91;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_66_66;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Name_42 = ((MR_String) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 1))));
                  MR_Word HeadUnivs_90 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 2))));
                  MR_Word STATE_VARIABLE_Limit_66_96;
                  MR_Word Docs1_97;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_term_7_p_0(Name_42, HeadUnivs_90, TailDocs0_28, &Docs1_97, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_66_96, STATE_VARIABLE_Pri_0_8);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Docs1_97;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_66_96;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word HeadSusp_43 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 1))));
                  MR_Word STATE_VARIABLE_Limit_66_94;
                  MR_Word Docs1_95;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_susp_5_p_0(HeadSusp_43, TailDocs0_28, &Docs1_95, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_66_94);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Docs1_95;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_66_94;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Internal_44 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) Internal_44)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(Internal_44)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Integer Var_74;
                            MR_Integer STATE_VARIABLE_OpenGroups_73_106;
                            MR_Word * AddrTailDocs_119;
                            MR_Word HeadVar__4_141;
                            MR_Word next_value_of_HeadVar__3_3;
                            MR_Word * next_value_of_AddrOfHeadVar__4_122;
                            MR_Integer next_value_of_HeadVar__5_5;

                            succeeded = (HeadVar__5_5 > (MR_Integer) 0);
                            if (succeeded)
                              Var_74 = (MR_Integer) 1;
                            else
                              Var_74 = (MR_Integer) 0;
                            STATE_VARIABLE_OpenGroups_73_106 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) Var_74);
                            {
                              HeadVar__4_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, HeadVar__4_141, 0) = ((MR_Box) (HeadDoc0_27));
                              MR_hl_field(1, HeadVar__4_141, 1) = NULL;
                            }
                            AddrTailDocs_119 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_141, (MR_Integer) 1)));
                            *AddrOfHeadVar__4_122 = HeadVar__4_141;
                            // direct tailcall eliminated
                            ;
                            next_value_of_HeadVar__3_3 = TailDocs0_28;
                            next_value_of_AddrOfHeadVar__4_122 = AddrTailDocs_119;
                            next_value_of_HeadVar__5_5 = STATE_VARIABLE_OpenGroups_73_106;
                            HeadVar__3_3 = next_value_of_HeadVar__3_3;
                            AddrOfHeadVar__4_122 = next_value_of_AddrOfHeadVar__4_122;
                            HeadVar__5_5 = next_value_of_HeadVar__5_5;
                            continue;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Integer Var_77;
                            MR_Integer STATE_VARIABLE_OpenGroups_73_100;
                            MR_Word * AddrTailDocs_116;
                            MR_Word HeadVar__4_132;
                            MR_Word next_value_of_HeadVar__3_3;
                            MR_Word * next_value_of_AddrOfHeadVar__4_122;
                            MR_Integer next_value_of_HeadVar__5_5;

                            succeeded = (HeadVar__5_5 > (MR_Integer) 0);
                            if (succeeded)
                              Var_77 = (MR_Integer) 1;
                            else
                              Var_77 = (MR_Integer) 0;
                            STATE_VARIABLE_OpenGroups_73_100 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 - (MR_Unsigned) Var_77);
                            {
                              HeadVar__4_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, HeadVar__4_132, 0) = ((MR_Box) (HeadDoc0_27));
                              MR_hl_field(1, HeadVar__4_132, 1) = NULL;
                            }
                            AddrTailDocs_116 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_132, (MR_Integer) 1)));
                            *AddrOfHeadVar__4_122 = HeadVar__4_132;
                            // direct tailcall eliminated
                            ;
                            next_value_of_HeadVar__3_3 = TailDocs0_28;
                            next_value_of_AddrOfHeadVar__4_122 = AddrTailDocs_116;
                            next_value_of_HeadVar__5_5 = STATE_VARIABLE_OpenGroups_73_100;
                            HeadVar__3_3 = next_value_of_HeadVar__3_3;
                            AddrOfHeadVar__4_122 = next_value_of_AddrOfHeadVar__4_122;
                            HeadVar__5_5 = next_value_of_HeadVar__5_5;
                            continue;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word * AddrTailDocs_120;
                            MR_Word HeadVar__4_144;
                            MR_Word next_value_of_HeadVar__3_3;
                            MR_Word * next_value_of_AddrOfHeadVar__4_122;

                            {
                              HeadVar__4_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, HeadVar__4_144, 0) = ((MR_Box) (HeadDoc0_27));
                              MR_hl_field(1, HeadVar__4_144, 1) = NULL;
                            }
                            AddrTailDocs_120 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_144, (MR_Integer) 1)));
                            *AddrOfHeadVar__4_122 = HeadVar__4_144;
                            // direct tailcall eliminated
                            ;
                            next_value_of_HeadVar__3_3 = TailDocs0_28;
                            next_value_of_AddrOfHeadVar__4_122 = AddrTailDocs_120;
                            HeadVar__3_3 = next_value_of_HeadVar__3_3;
                            AddrOfHeadVar__4_122 = next_value_of_AddrOfHeadVar__4_122;
                            continue;
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            MR_Word * AddrTailDocs_118;
                            MR_Word HeadVar__4_138;
                            MR_Word next_value_of_HeadVar__3_3;
                            MR_Word * next_value_of_AddrOfHeadVar__4_122;

                            {
                              HeadVar__4_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, HeadVar__4_138, 0) = ((MR_Box) (HeadDoc0_27));
                              MR_hl_field(1, HeadVar__4_138, 1) = NULL;
                            }
                            AddrTailDocs_118 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_138, (MR_Integer) 1)));
                            *AddrOfHeadVar__4_122 = HeadVar__4_138;
                            // direct tailcall eliminated
                            ;
                            next_value_of_HeadVar__3_3 = TailDocs0_28;
                            next_value_of_AddrOfHeadVar__4_122 = AddrTailDocs_118;
                            HeadVar__3_3 = next_value_of_HeadVar__3_3;
                            AddrOfHeadVar__4_122 = next_value_of_AddrOfHeadVar__4_122;
                            continue;
                          }
                          break;
                        case (MR_Integer) 4:
                          {
                            MR_Word * AddrTailDocs_117;
                            MR_Word HeadVar__4_135;
                            MR_Word next_value_of_HeadVar__3_3;
                            MR_Word * next_value_of_AddrOfHeadVar__4_122;

                            {
                              HeadVar__4_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, HeadVar__4_135, 0) = ((MR_Box) (HeadDoc0_27));
                              MR_hl_field(1, HeadVar__4_135, 1) = NULL;
                            }
                            AddrTailDocs_117 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_135, (MR_Integer) 1)));
                            *AddrOfHeadVar__4_122 = HeadVar__4_135;
                            // direct tailcall eliminated
                            ;
                            next_value_of_HeadVar__3_3 = TailDocs0_28;
                            next_value_of_AddrOfHeadVar__4_122 = AddrTailDocs_117;
                            HeadVar__3_3 = next_value_of_HeadVar__3_3;
                            AddrOfHeadVar__4_122 = next_value_of_AddrOfHeadVar__4_122;
                            continue;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word * AddrTailDocs_115;
                        MR_Word HeadVar__4_129;
                        MR_Word next_value_of_HeadVar__3_3;
                        MR_Word * next_value_of_AddrOfHeadVar__4_122;

                        {
                          HeadVar__4_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, HeadVar__4_129, 0) = ((MR_Box) (HeadDoc0_27));
                          MR_hl_field(1, HeadVar__4_129, 1) = NULL;
                        }
                        AddrTailDocs_115 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_129, (MR_Integer) 1)));
                        *AddrOfHeadVar__4_122 = HeadVar__4_129;
                        // direct tailcall eliminated
                        ;
                        next_value_of_HeadVar__3_3 = TailDocs0_28;
                        next_value_of_AddrOfHeadVar__4_122 = AddrTailDocs_115;
                        HeadVar__3_3 = next_value_of_HeadVar__3_3;
                        AddrOfHeadVar__4_122 = next_value_of_AddrOfHeadVar__4_122;
                        continue;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word STATE_VARIABLE_Pri_83_111 = ((MR_Word) ((MR_hl_field(2, Internal_44, (MR_Integer) 0))));
                        MR_Word next_value_of_HeadVar__3_3 = TailDocs0_28;
                        MR_Word next_value_of_STATE_VARIABLE_Pri_0_8 = STATE_VARIABLE_Pri_83_111;

                        // direct tailcall eliminated
                        ;
                        HeadVar__3_3 = next_value_of_HeadVar__3_3;
                        STATE_VARIABLE_Pri_0_8 = next_value_of_STATE_VARIABLE_Pri_0_8;
                        continue;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word STATE_VARIABLE_Limit_82_82 = ((MR_Word) ((MR_hl_field(3, Internal_44, (MR_Integer) 0))));
                        MR_Word next_value_of_HeadVar__3_3 = TailDocs0_28;
                        MR_Word next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_82_82;

                        // direct tailcall eliminated
                        ;
                        HeadVar__3_3 = next_value_of_HeadVar__3_3;
                        STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                        continue;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
    }
    break;
  }
}

static void MR_CALL 
mercury__pretty_printer__expand_format_univ_8_p_0(
  MR_Word Canonicalize_9,
  MR_Word FMap_10,
  MR_Word Univ_11,
  MR_Word TailDocs_12,
  MR_Word * Docs_13,
  MR_Word STATE_VARIABLE_Limit_0_29,
  MR_Word * STATE_VARIABLE_Limit_30,
  MR_Word CurrentPri_15)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) STATE_VARIABLE_Limit_0_29)) == (MR_Integer) 0))
  {
    MR_Integer N_41 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Limit_0_29, (MR_Integer) 0))));

    succeeded = (N_41 <= (MR_Integer) 0);
  }
  else
  {
    MR_Integer N_43 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_Limit_0_29, (MR_Integer) 0))));

    succeeded = (N_43 <= (MR_Integer) 0);
  }
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Docs_13 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[13])));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailDocs_12));
    }
    *STATE_VARIABLE_Limit_30 = STATE_VARIABLE_Limit_0_29;
  }
  else
  {
    MR_Word TypeInfo_33_33 = ((MR_Word) ((MR_hl_field(0, Univ_11, (MR_Integer) 0))));
    MR_Box Value_16 = (MR_hl_field(0, Univ_11, (MR_Integer) 1));
    MR_Word ArgTypeDescs_18;
    MR_Word Formatter_24;
    MR_Word TypeInfo_36_36;
    MR_Word TypeCtorInfo_37_37;
    MR_Word TypeInfo_39_39;
    MR_Word TypeCtorDesc_17;
    MR_String ModuleName_19;
    MR_Word FMapTypeArity_20;
    MR_String TypeName_21;
    MR_Word FMapArity_22;
    MR_Integer Arity_23;
    MR_Word Var_32;
    MR_Integer Var_50;
    MR_String Var_46;
    MR_Integer Var_47;
    MR_Box conv0_FMapTypeArity_20;
    MR_String Var_48;
    MR_Integer Var_49;
    MR_Box conv1_FMapArity_22;
    MR_Box conv2_Formatter_24;

{
#define MR_PROC_LABEL mercury__pretty_printer__expand_format_univ_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_33_33 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_32  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_format_univ_8_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Var_32 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}

		;}
#undef MR_PROC_LABEL
	TypeCtorDesc_17  = TypeCtorDesc;
	ArgTypeDescs_18  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_format_univ_8_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtorDesc_17 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	ModuleName_19  = TypeCtorModuleName;
	Var_46  = TypeCtorName;
	Var_47  = TypeCtorArity;
}
    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), FMap_10, ((MR_Box) (ModuleName_19)), &conv0_FMapTypeArity_20);
    if (succeeded)
    {
      FMapTypeArity_20 = ((MR_Word) (conv0_FMapTypeArity_20));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_format_univ_8_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtorDesc_17 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	Var_48  = TypeCtorModuleName;
	TypeName_21  = TypeCtorName;
	Var_49  = TypeCtorArity;
}
      TypeInfo_36_36 = (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]);
      succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_36_36, FMapTypeArity_20, ((MR_Box) (TypeName_21)), &conv1_FMapArity_22);
      if (succeeded)
      {
        FMapArity_22 = ((MR_Word) (conv1_FMapArity_22));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        TypeCtorInfo_37_37 = (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0);
        Var_50 = (MR_Integer) 0;
        mercury__list__length_acc_3_p_0(TypeCtorInfo_37_37, ArgTypeDescs_18, Var_50, &Arity_23);
        TypeInfo_39_39 = (MR_Word) (&mercury__pretty_printer_scalar_common_3[1]);
        succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_39_39, FMapArity_22, Arity_23, &conv2_Formatter_24);
        if (succeeded)
        {
          Formatter_24 = ((MR_Word) (conv2_Formatter_24));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MR_Word Doc0_25;
      MR_Box MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box);
      MR_Box conv4_Doc0_25;

      if (((MR_tag((MR_Word) STATE_VARIABLE_Limit_0_29)) == (MR_Integer) 0))
      {
        MR_Integer N_52 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Limit_0_29, (MR_Integer) 0))));
        MR_Integer Var_53 = (MR_Integer) ((MR_Unsigned) N_52 - (MR_Unsigned) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Limit_30 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_53));
        }
      }
      else
      {
        MR_Integer N_55 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_Limit_0_29, (MR_Integer) 0))));
        MR_Integer Var_56 = (MR_Integer) ((MR_Unsigned) N_55 - (MR_Unsigned) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Limit_30 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_56));
        }
      }
      func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Formatter_24, (MR_Integer) 1))));
      conv4_Doc0_25 = func_3(((MR_Box) (Formatter_24)), ((MR_Box) (Univ_11)), ((MR_Box) (ArgTypeDescs_18)));
      Doc0_25 = ((MR_Word) (conv4_Doc0_25));
      if (((MR_tag((MR_Word) *STATE_VARIABLE_Limit_30)) == (MR_Integer) 0))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Docs_13 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Doc0_25));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailDocs_12));
        }
      else
      {
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;

        {
          Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_68, 0) = ((MR_Box) (*STATE_VARIABLE_Limit_30));
        }
        {
          Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Var_67, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) (TailDocs_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Docs_13 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Doc0_25));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_66));
        }
      }
    }
    else
    {
      MR_String Name_26;
      MR_Word Args_28;
      MR_Integer _Arity_27;

      mercury__deconstruct__deconstruct_5_p_1(TypeInfo_33_33, Value_16, Canonicalize_9, &Name_26, &_Arity_27, &Args_28);
      mercury__pretty_printer__expand_format_term_7_p_0(Name_26, Args_28, TailDocs_12, Docs_13, STATE_VARIABLE_Limit_0_29, STATE_VARIABLE_Limit_30, CurrentPri_15);
    }
  }
}

static void MR_CALL 
mercury__pretty_printer__output_current_group_12_p_0(
  MR_Word TypeClassInfo_for_writer_85,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Integer HeadVar__6_6,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_7,
  MR_Integer * STATE_VARIABLE_RemainingWidth_8,
  MR_Integer STATE_VARIABLE_RemainingLines_0_9,
  MR_Integer * STATE_VARIABLE_RemainingLines_10,
  MR_Box STATE_VARIABLE_IO_0_11,
  MR_Box * STATE_VARIABLE_IO_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_IO_12 = STATE_VARIABLE_IO_0_11;
      *STATE_VARIABLE_RemainingLines_10 = STATE_VARIABLE_RemainingLines_0_9;
      *STATE_VARIABLE_RemainingWidth_8 = STATE_VARIABLE_RemainingWidth_0_7;
    }
    else
    {
      MR_Word HeadDoc0_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word TailDocs0_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) HeadDoc0_29)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadDoc0_29)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_HeadVar__4_4 = TailDocs0_30;

                // direct tailcall eliminated
                ;
                HeadVar__4_4 = next_value_of_HeadVar__4_4;
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer STATE_VARIABLE_RemainingWidth_61_61;
                MR_Integer STATE_VARIABLE_RemainingLines_62_62;
                MR_Box STATE_VARIABLE_IO_63_63;
                MR_Box STATE_VARIABLE_IO_20_87;
                MR_Integer Var_88;
                void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_85, (MR_Integer) 0)), (MR_Integer) 5))));

                func_0(((MR_Box) (TypeClassInfo_for_writer_85)), HeadVar__1_1, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_IO_0_11, &STATE_VARIABLE_IO_20_87);
                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Var_88 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    Var_88 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                    break;
                  case (MR_Integer) 2:
                    Var_88 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
                    break;
                }
                STATE_VARIABLE_RemainingWidth_61_61 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 - (MR_Unsigned) Var_88);
                mercury__pretty_printer__output_indent_stack_4_p_0(TypeClassInfo_for_writer_85, HeadVar__1_1, HeadVar__3_3, STATE_VARIABLE_IO_20_87, &STATE_VARIABLE_IO_63_63);
                STATE_VARIABLE_RemainingLines_62_62 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingLines_0_9 - (MR_Unsigned) 1);
                succeeded = (STATE_VARIABLE_RemainingLines_62_62 <= (MR_Integer) 0);
                if (succeeded)
                {
                  *HeadVar__5_5 = TailDocs0_30;
                  *STATE_VARIABLE_IO_12 = STATE_VARIABLE_IO_63_63;
                  *STATE_VARIABLE_RemainingLines_10 = STATE_VARIABLE_RemainingLines_62_62;
                  *STATE_VARIABLE_RemainingWidth_8 = STATE_VARIABLE_RemainingWidth_61_61;
                }
                else
                {
                  MR_Word next_value_of_HeadVar__4_4 = TailDocs0_30;
                  MR_Integer next_value_of_STATE_VARIABLE_RemainingWidth_0_7 = STATE_VARIABLE_RemainingWidth_61_61;
                  MR_Integer next_value_of_STATE_VARIABLE_RemainingLines_0_9 = STATE_VARIABLE_RemainingLines_62_62;
                  MR_Box next_value_of_STATE_VARIABLE_IO_0_11 = STATE_VARIABLE_IO_63_63;

                  // direct tailcall eliminated
                  ;
                  HeadVar__4_4 = next_value_of_HeadVar__4_4;
                  STATE_VARIABLE_RemainingWidth_0_7 = next_value_of_STATE_VARIABLE_RemainingWidth_0_7;
                  STATE_VARIABLE_RemainingLines_0_9 = next_value_of_STATE_VARIABLE_RemainingLines_0_9;
                  STATE_VARIABLE_IO_0_11 = next_value_of_STATE_VARIABLE_IO_0_11;
                  continue;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String String_36 = ((MR_String) ((MR_hl_field(1, HeadDoc0_29, (MR_Integer) 0))));
            MR_Integer StrWidth_37;
            MR_Box STATE_VARIABLE_IO_56_56;
            MR_Integer STATE_VARIABLE_RemainingWidth_57_57;
            void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_85, (MR_Integer) 0)), (MR_Integer) 5))));
            MR_Word next_value_of_HeadVar__4_4;
            MR_Integer next_value_of_STATE_VARIABLE_RemainingWidth_0_7;
            MR_Box next_value_of_STATE_VARIABLE_IO_0_11;

            func_1(((MR_Box) (TypeClassInfo_for_writer_85)), HeadVar__1_1, ((MR_Box) (String_36)), STATE_VARIABLE_IO_0_11, &STATE_VARIABLE_IO_56_56);
            mercury__string__count_code_points_loop_4_p_0(String_36, (MR_Integer) 0, (MR_Integer) 0, &StrWidth_37);
            STATE_VARIABLE_RemainingWidth_57_57 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingWidth_0_7 - (MR_Unsigned) StrWidth_37);
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__4_4 = TailDocs0_30;
            next_value_of_STATE_VARIABLE_RemainingWidth_0_7 = STATE_VARIABLE_RemainingWidth_57_57;
            next_value_of_STATE_VARIABLE_IO_0_11 = STATE_VARIABLE_IO_56_56;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            STATE_VARIABLE_RemainingWidth_0_7 = next_value_of_STATE_VARIABLE_RemainingWidth_0_7;
            STATE_VARIABLE_IO_0_11 = next_value_of_STATE_VARIABLE_IO_0_11;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_HeadVar__4_4 = TailDocs0_30;

            // direct tailcall eliminated
            ;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            continue;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, HeadDoc0_29, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              {
                MR_Word next_value_of_HeadVar__4_4 = TailDocs0_30;

                // direct tailcall eliminated
                ;
                HeadVar__4_4 = next_value_of_HeadVar__4_4;
                continue;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Internal_38 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_29, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) Internal_38)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(Internal_38)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer STATE_VARIABLE_OpenGroups_68_68 = (MR_Integer) ((MR_Unsigned) HeadVar__6_6 + (MR_Unsigned) 1);
                          MR_Word next_value_of_HeadVar__4_4 = TailDocs0_30;
                          MR_Integer next_value_of_HeadVar__6_6 = STATE_VARIABLE_OpenGroups_68_68;

                          // direct tailcall eliminated
                          ;
                          HeadVar__4_4 = next_value_of_HeadVar__4_4;
                          HeadVar__6_6 = next_value_of_HeadVar__6_6;
                          continue;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          succeeded = (HeadVar__6_6 == (MR_Integer) 1);
                          if (succeeded)
                          {
                            *HeadVar__5_5 = TailDocs0_30;
                            *STATE_VARIABLE_IO_12 = STATE_VARIABLE_IO_0_11;
                            *STATE_VARIABLE_RemainingLines_10 = STATE_VARIABLE_RemainingLines_0_9;
                            *STATE_VARIABLE_RemainingWidth_8 = STATE_VARIABLE_RemainingWidth_0_7;
                          }
                          else
                          {
                            MR_Integer STATE_VARIABLE_OpenGroups_68_84 = (MR_Integer) ((MR_Unsigned) HeadVar__6_6 - (MR_Unsigned) 1);
                            MR_Word next_value_of_HeadVar__4_4 = TailDocs0_30;
                            MR_Integer next_value_of_HeadVar__6_6 = STATE_VARIABLE_OpenGroups_68_84;

                            // direct tailcall eliminated
                            ;
                            HeadVar__4_4 = next_value_of_HeadVar__4_4;
                            HeadVar__6_6 = next_value_of_HeadVar__6_6;
                            continue;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                      case (MR_Integer) 4:
                        {
                          MR_Word next_value_of_HeadVar__4_4 = TailDocs0_30;

                          // direct tailcall eliminated
                          ;
                          HeadVar__4_4 = next_value_of_HeadVar__4_4;
                          continue;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    {
                      MR_Word next_value_of_HeadVar__4_4 = TailDocs0_30;

                      // direct tailcall eliminated
                      ;
                      HeadVar__4_4 = next_value_of_HeadVar__4_4;
                      continue;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__pretty_printer__output_indent_stack_4_p_0(
  MR_Word TypeClassInfo_for_writer_20,
  MR_Box Stream_5,
  MR_Word IndentStack_6,
  MR_Box STATE_VARIABLE_IO_0_12,
  MR_Box * STATE_VARIABLE_IO_13)
{
  switch (MR_tag((MR_Word) IndentStack_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_IO_13 = STATE_VARIABLE_IO_0_12;
      break;
    case (MR_Integer) 1:
      {
        MR_Word PrevStack_8 = ((MR_Word) ((MR_hl_field(1, IndentStack_6, (MR_Integer) 0))));
        MR_String IndentStr_9 = ((MR_String) ((MR_hl_field(1, IndentStack_6, (MR_Integer) 1))));
        MR_Box STATE_VARIABLE_IO_14_14;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        mercury__pretty_printer__output_indent_stack_4_p_0(TypeClassInfo_for_writer_20, Stream_5, PrevStack_8, STATE_VARIABLE_IO_0_12, &STATE_VARIABLE_IO_14_14);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5))));
        func_0(((MR_Box) (TypeClassInfo_for_writer_20)), Stream_5, ((MR_Box) (IndentStr_9)), STATE_VARIABLE_IO_14_14, STATE_VARIABLE_IO_13);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer IndentLevels_11 = ((MR_Integer) ((MR_hl_field(2, IndentStack_6, (MR_Integer) 1))));
        MR_Box STATE_VARIABLE_IO_16_16;
        MR_Word PrevStack_19 = ((MR_Word) ((MR_hl_field(2, IndentStack_6, (MR_Integer) 0))));

        mercury__pretty_printer__output_indent_stack_4_p_0(TypeClassInfo_for_writer_20, Stream_5, PrevStack_19, STATE_VARIABLE_IO_0_12, &STATE_VARIABLE_IO_16_16);
        mercury__pretty_printer__output_std_indent_levels_4_p_0(TypeClassInfo_for_writer_20, Stream_5, IndentLevels_11, STATE_VARIABLE_IO_16_16, STATE_VARIABLE_IO_13);
      }
      break;
  }
}

static void MR_CALL 
mercury__pretty_printer__output_std_indent_levels_4_p_0(
  MR_Word TypeClassInfo_for_writer_21,
  MR_Box Stream_5,
  MR_Integer NumLevels_6,
  MR_Box STATE_VARIABLE_IO_0_9,
  MR_Box * STATE_VARIABLE_IO_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (NumLevels_6 >= (MR_Integer) 30);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_IO_12_12;
      MR_Integer Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_21, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Integer next_value_of_NumLevels_6;
      MR_Box next_value_of_STATE_VARIABLE_IO_0_9;

      func_0(((MR_Box) (TypeClassInfo_for_writer_21)), Stream_5, ((MR_Box) ((MR_String) "                                                            ")), STATE_VARIABLE_IO_0_9, &STATE_VARIABLE_IO_12_12);
      Var_13 = (MR_Integer) ((MR_Unsigned) NumLevels_6 - (MR_Unsigned) 30);
      // direct tailcall eliminated
      ;
      next_value_of_NumLevels_6 = Var_13;
      next_value_of_STATE_VARIABLE_IO_0_9 = STATE_VARIABLE_IO_12_12;
      NumLevels_6 = next_value_of_NumLevels_6;
      STATE_VARIABLE_IO_0_9 = next_value_of_STATE_VARIABLE_IO_0_9;
      continue;
    }
    else
    {
      succeeded = (NumLevels_6 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_String IndentStr_20;

        if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) NumLevels_6 - (MR_Unsigned) 1))) <= ((MR_Unsigned) 28)))
        {
          IndentStr_20 = ((&mercury__pretty_printer_vector_common_7[29 + (MR_Integer) ((MR_Unsigned) NumLevels_6 - (MR_Unsigned) 1)]))->mercury__pretty_printer__vector_common_type_7_0__vct_7_f_0;
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_21, (MR_Integer) 0)), (MR_Integer) 5))));

          func_1(((MR_Box) (TypeClassInfo_for_writer_21)), Stream_5, ((MR_Box) (IndentStr_20)), STATE_VARIABLE_IO_0_9, STATE_VARIABLE_IO_10);
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140pretty_printer.output_std_indent_levels\'/4", (MR_String) "std_indent failed");
            return;
          }
      }
      else
        *STATE_VARIABLE_IO_10 = STATE_VARIABLE_IO_0_9;
    }
    break;
  }
}

void MR_CALL 
mercury__pretty_printer__write_doc_3_p_0(
  MR_Word Doc_4)
{
  MR_Word Var_8;
  MR_Box Var_9;

{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	Var_9  = (MR_Box) Stream;
}
  Var_8 = (MR_Word) (Var_9);
  mercury__pretty_printer__write_doc_4_p_0(Var_8, Doc_4);
}

void MR_CALL 
mercury__pretty_printer__write_doc_formatted_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Stream_5,
  MR_Box X_6)
{
  MR_Word Doc_8;
  MR_Word Var_12;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_11, X_6, &Var_12);
  {
    Doc_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Doc_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Doc_8, 1) = ((MR_Box) (Var_12));
  }
  mercury__pretty_printer__write_doc_4_p_0(Stream_5, Doc_8);
}

void MR_CALL 
mercury__pretty_printer__write_doc_formatted_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box X_4)
{
  MR_Word Doc_6;
  MR_Word Var_9;
  MR_Word Var_11;
  MR_Box Var_12;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_10, X_4, &Var_11);
  {
    Doc_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Doc_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Doc_6, 1) = ((MR_Box) (Var_11));
  }
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_formatted_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	Var_12  = (MR_Box) Stream;
}
  Var_9 = (MR_Word) (Var_12);
  mercury__pretty_printer__write_doc_4_p_0(Var_9, Doc_6);
}

void MR_CALL 
mercury__pretty_printer__write_doc_4_p_0(
  MR_Word Stream_5,
  MR_Word Doc_6)
{
  MR_Word Formatters_8;
  MR_Word Params_9;
  MR_Word Okay_16;
  MR_Integer MaxLines_20;
  MR_Word Limit_21;
  MR_Integer RemainingWidth_22;
  MR_Word Var_29;
  MR_Integer Var_24;
  MR_Word Var_25;
  MR_Integer Var_26;
  MR_Word Var_27;
  MR_Word Var_28;

{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0

	MR_Word Okay;

		{

    Okay = ML_pretty_printer_is_initialised;


		;}
#undef MR_PROC_LABEL
	Okay_16  = Okay;
}
  switch (Okay_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        Formatters_8 = mercury__pretty_printer__initial_formatter_map_0_f_0();
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0

	MR_Word FMap;

	FMap = Formatters_8 ;
		{

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;


		;}
#undef MR_PROC_LABEL
}
      }
      break;
    case (MR_Integer) 1:
      {
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0

	MR_Word FMap;

		{

    FMap = ML_pretty_printer_default_formatter_map;


		;}
#undef MR_PROC_LABEL
	Formatters_8  = FMap;
}
      }
      break;
  }
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0

	MR_Word X;

		{
X = mercury__pretty_printer__mutable_variable_io_pp_params;


		;}
#undef MR_PROC_LABEL
	Params_9  = X;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  RemainingWidth_22 = ((MR_Integer) ((MR_hl_field(0, Params_9, (MR_Integer) 0))));
  MaxLines_20 = ((MR_Integer) ((MR_hl_field(0, Params_9, (MR_Integer) 1))));
  Limit_21 = ((MR_Word) ((MR_hl_field(0, Params_9, (MR_Integer) 2))));
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Doc_6));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_112_117_116_95_100_111_99_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_17_p_1((MR_Word) (&mercury__pretty_printer_scalar_common_3[0]), Stream_5, (MR_Integer) 2, Formatters_8, RemainingWidth_22, Var_29, RemainingWidth_22, &Var_24, (MR_Word) ((MR_Unsigned) 0U), &Var_25, MaxLines_20, &Var_26, Limit_21, &Var_27, (MR_Word) (((MR_Box) ((MR_Unsigned) 1U))), &Var_28);
}

void MR_CALL 
mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_112_117_116_95_100_111_99_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_17_p_1(
  MR_Word TypeClassInfo_for_writer_115,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_6,
  MR_Integer * STATE_VARIABLE_RemainingWidth_7,
  MR_Word STATE_VARIABLE_Indents_0_8,
  MR_Word * STATE_VARIABLE_Indents_9,
  MR_Integer STATE_VARIABLE_RemainingLines_0_10,
  MR_Integer * STATE_VARIABLE_RemainingLines_11,
  MR_Word STATE_VARIABLE_Limit_0_12,
  MR_Word * STATE_VARIABLE_Limit_13,
  MR_Word STATE_VARIABLE_Pri_0_14,
  MR_Word * STATE_VARIABLE_Pri_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Pri_15 = STATE_VARIABLE_Pri_0_14;
      *STATE_VARIABLE_Limit_13 = STATE_VARIABLE_Limit_0_12;
      *STATE_VARIABLE_RemainingLines_11 = STATE_VARIABLE_RemainingLines_0_10;
      *STATE_VARIABLE_Indents_9 = STATE_VARIABLE_Indents_0_8;
      *STATE_VARIABLE_RemainingWidth_7 = STATE_VARIABLE_RemainingWidth_0_6;
    }
    else
    {
      MR_Word HeadDoc0_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word TailDocs0_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));

      succeeded = (STATE_VARIABLE_RemainingLines_0_10 <= (MR_Integer) 0);
      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_115, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv1_STATE_VARIABLE_IO_17;

        func_0(((MR_Box) (TypeClassInfo_for_writer_115)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) ((MR_String) "...")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_17);
        *STATE_VARIABLE_Pri_15 = STATE_VARIABLE_Pri_0_14;
        *STATE_VARIABLE_Limit_13 = STATE_VARIABLE_Limit_0_12;
        *STATE_VARIABLE_RemainingLines_11 = STATE_VARIABLE_RemainingLines_0_10;
        *STATE_VARIABLE_Indents_9 = STATE_VARIABLE_Indents_0_8;
        *STATE_VARIABLE_RemainingWidth_7 = STATE_VARIABLE_RemainingWidth_0_6;
      }
      else
      {
        MR_Word Docs_54;
        MR_Integer STATE_VARIABLE_RemainingWidth_84_84;
        MR_Integer STATE_VARIABLE_RemainingLines_87_87;
        MR_Word STATE_VARIABLE_Limit_92_92;
        MR_Word STATE_VARIABLE_Pri_97_97;
        MR_Word STATE_VARIABLE_Indents_102_102;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Integer next_value_of_STATE_VARIABLE_RemainingWidth_0_6;
        MR_Word next_value_of_STATE_VARIABLE_Indents_0_8;
        MR_Integer next_value_of_STATE_VARIABLE_RemainingLines_0_10;
        MR_Word next_value_of_STATE_VARIABLE_Limit_0_12;
        MR_Word next_value_of_STATE_VARIABLE_Pri_0_14;

        switch (MR_tag((MR_Word) HeadDoc0_44)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadDoc0_44)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer IndentWidth_55;
                  MR_Integer Var_85;

                  switch (MR_tag((MR_Word) STATE_VARIABLE_Indents_0_8)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      IndentWidth_55 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      IndentWidth_55 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_Indents_0_8, (MR_Integer) 2))));
                      break;
                    case (MR_Integer) 2:
                      IndentWidth_55 = ((MR_Integer) ((MR_hl_field(2, STATE_VARIABLE_Indents_0_8, (MR_Integer) 2))));
                      break;
                  }
                  Var_85 = (MR_Integer) ((MR_Unsigned) HeadVar__4_4 - (MR_Unsigned) IndentWidth_55);
                  succeeded = (STATE_VARIABLE_RemainingWidth_0_6 < Var_85);
                  if (succeeded)
                    mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_110_108_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeClassInfo_for_writer_115, HeadVar__1_1, HeadVar__4_4, STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_RemainingWidth_84_84, STATE_VARIABLE_RemainingLines_0_10, &STATE_VARIABLE_RemainingLines_87_87);
                  else
                  {
                    STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                    STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                  }
                  Docs_54 = TailDocs0_45;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_110_108_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeClassInfo_for_writer_115, HeadVar__1_1, HeadVar__4_4, STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_RemainingWidth_84_84, STATE_VARIABLE_RemainingLines_0_10, &STATE_VARIABLE_RemainingLines_87_87);
                  Docs_54 = TailDocs0_45;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String String_52 = ((MR_String) ((MR_hl_field(1, HeadDoc0_44, (MR_Integer) 0))));
              MR_Integer StrWidth_53;
              void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_115, (MR_Integer) 0)), (MR_Integer) 5))));
              MR_Box conv3_STATE_VARIABLE_IO_83_83;

              func_2(((MR_Box) (TypeClassInfo_for_writer_115)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (String_52)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_83_83);
              mercury__string__count_code_points_loop_4_p_0(String_52, (MR_Integer) 0, (MR_Integer) 0, &StrWidth_53);
              STATE_VARIABLE_RemainingWidth_84_84 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingWidth_0_6 - (MR_Unsigned) StrWidth_53);
              Docs_54 = TailDocs0_45;
              STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
              STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
              STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
              STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HeadDocs0_56 = ((MR_Word) ((MR_hl_field(2, HeadDoc0_44, (MR_Integer) 0))));

              mercury__list__append_3_p_1((MR_Word) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0), HeadDocs0_56, TailDocs0_45, &Docs_54);
              STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
              STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
              STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
              STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
              STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Univ_57 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 1))));

                  mercury__pretty_printer__expand_format_univ_8_p_1(HeadVar__2_2, HeadVar__3_3, Univ_57, TailDocs0_45, &Docs_54, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_92_92, STATE_VARIABLE_Pri_0_14);
                  STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Univs_58 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 1))));
                  MR_Word Sep_59 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 2))));

                  mercury__pretty_printer__expand_format_list_6_p_0(Univs_58, Sep_59, TailDocs0_45, &Docs_54, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_92_92);
                  STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Name_60 = ((MR_String) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 1))));
                  MR_Word Univs_114 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 2))));

                  mercury__pretty_printer__expand_format_term_7_p_0(Name_60, Univs_114, TailDocs0_45, &Docs_54, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_92_92, STATE_VARIABLE_Pri_0_14);
                  STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Susp_61 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 1))));

                  mercury__pretty_printer__expand_format_susp_5_p_0(Susp_61, TailDocs0_45, &Docs_54, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_92_92);
                  STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Internal_62 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_44, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) Internal_62)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(Internal_62)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word Docs1_65;
                            MR_Integer RemainingWidthAfterGroup_66;

                            mercury__pretty_printer__expand_docs_to_line_end_11_p_1(HeadVar__2_2, HeadVar__3_3, TailDocs0_45, &Docs1_65, (MR_Integer) 1, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_92_92, STATE_VARIABLE_Pri_0_14, &STATE_VARIABLE_Pri_97_97, STATE_VARIABLE_RemainingWidth_0_6, &RemainingWidthAfterGroup_66);
                            succeeded = (RemainingWidthAfterGroup_66 >= (MR_Integer) 0);
                            if (succeeded)
                              mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_117_114_114_101_110_116_95_103_114_111_117_112_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_12_p_0(TypeClassInfo_for_writer_115, HeadVar__1_1, HeadVar__4_4, STATE_VARIABLE_Indents_0_8, Docs1_65, &Docs_54, (MR_Integer) 1, STATE_VARIABLE_RemainingWidth_0_6, &STATE_VARIABLE_RemainingWidth_84_84, STATE_VARIABLE_RemainingLines_0_10, &STATE_VARIABLE_RemainingLines_87_87);
                            else
                            {
                              Docs_54 = Docs1_65;
                              STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                              STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                            }
                            STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                            STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                            STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                            Docs_54 = TailDocs0_45;
                            STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                            STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            switch (MR_tag((MR_Word) STATE_VARIABLE_Indents_0_8)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140pretty_printer.decrement_user_indent\'/2", (MR_String) "last indent is not user indent");
                                  return;
                                }
                                break;
                              case (MR_Integer) 1:
                                STATE_VARIABLE_Indents_102_102 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Indents_0_8, (MR_Integer) 0))));
                                break;
                              case (MR_Integer) 2:
                                {
                                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140pretty_printer.decrement_user_indent\'/2", (MR_String) "last indent is not user indent");
                                  return;
                                }
                                break;
                            }
                            STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                            STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                            Docs_54 = TailDocs0_45;
                            STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                            STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            mercury__pretty_printer__increment_std_indent_2_p_0(STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_Indents_102_102);
                            STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                            STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                            Docs_54 = TailDocs0_45;
                            STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                            STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                          }
                          break;
                        case (MR_Integer) 4:
                          {
                            mercury__pretty_printer__decrement_std_indent_2_p_0(STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_Indents_102_102);
                            STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                            STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                            Docs_54 = TailDocs0_45;
                            STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                            STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String IndentStr_67 = ((MR_String) ((MR_hl_field(1, Internal_62, (MR_Integer) 0))));

                        mercury__pretty_printer__increment_user_indent_3_p_0(IndentStr_67, STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_Indents_102_102);
                        STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                        STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                        Docs_54 = TailDocs0_45;
                        STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                        STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_Pri_97_97 = ((MR_Word) ((MR_hl_field(2, Internal_62, (MR_Integer) 0))));
                        STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                        STATE_VARIABLE_Limit_92_92 = STATE_VARIABLE_Limit_0_12;
                        Docs_54 = TailDocs0_45;
                        STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                        STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_Limit_92_92 = ((MR_Word) ((MR_hl_field(3, Internal_62, (MR_Integer) 0))));
                        STATE_VARIABLE_Indents_102_102 = STATE_VARIABLE_Indents_0_8;
                        STATE_VARIABLE_Pri_97_97 = STATE_VARIABLE_Pri_0_14;
                        Docs_54 = TailDocs0_45;
                        STATE_VARIABLE_RemainingWidth_84_84 = STATE_VARIABLE_RemainingWidth_0_6;
                        STATE_VARIABLE_RemainingLines_87_87 = STATE_VARIABLE_RemainingLines_0_10;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__5_5 = Docs_54;
        next_value_of_STATE_VARIABLE_RemainingWidth_0_6 = STATE_VARIABLE_RemainingWidth_84_84;
        next_value_of_STATE_VARIABLE_Indents_0_8 = STATE_VARIABLE_Indents_102_102;
        next_value_of_STATE_VARIABLE_RemainingLines_0_10 = STATE_VARIABLE_RemainingLines_87_87;
        next_value_of_STATE_VARIABLE_Limit_0_12 = STATE_VARIABLE_Limit_92_92;
        next_value_of_STATE_VARIABLE_Pri_0_14 = STATE_VARIABLE_Pri_97_97;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        STATE_VARIABLE_RemainingWidth_0_6 = next_value_of_STATE_VARIABLE_RemainingWidth_0_6;
        STATE_VARIABLE_Indents_0_8 = next_value_of_STATE_VARIABLE_Indents_0_8;
        STATE_VARIABLE_RemainingLines_0_10 = next_value_of_STATE_VARIABLE_RemainingLines_0_10;
        STATE_VARIABLE_Limit_0_12 = next_value_of_STATE_VARIABLE_Limit_0_12;
        STATE_VARIABLE_Pri_0_14 = next_value_of_STATE_VARIABLE_Pri_0_14;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_117_114_114_101_110_116_95_103_114_111_117_112_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_12_p_0(
  MR_Word TypeClassInfo_for_writer_85,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Integer HeadVar__6_6,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_7,
  MR_Integer * STATE_VARIABLE_RemainingWidth_8,
  MR_Integer STATE_VARIABLE_RemainingLines_0_9,
  MR_Integer * STATE_VARIABLE_RemainingLines_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RemainingLines_10 = STATE_VARIABLE_RemainingLines_0_9;
      *STATE_VARIABLE_RemainingWidth_8 = STATE_VARIABLE_RemainingWidth_0_7;
    }
    else
    {
      MR_Word HeadDoc0_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word TailDocs0_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) HeadDoc0_29)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadDoc0_29)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_HeadVar__4_4 = TailDocs0_30;

                // direct tailcall eliminated
                ;
                HeadVar__4_4 = next_value_of_HeadVar__4_4;
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer STATE_VARIABLE_RemainingWidth_61_61;
                MR_Integer STATE_VARIABLE_RemainingLines_62_62;
                MR_Integer Var_88;
                void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_85, (MR_Integer) 0)), (MR_Integer) 5))));
                MR_Box conv1_STATE_VARIABLE_IO_20_87;

                func_0(((MR_Box) (TypeClassInfo_for_writer_85)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) ((MR_String) "\n")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_87);
                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Var_88 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    Var_88 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                    break;
                  case (MR_Integer) 2:
                    Var_88 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
                    break;
                }
                STATE_VARIABLE_RemainingWidth_61_61 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 - (MR_Unsigned) Var_88);
                mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_100_101_110_116_95_115_116_97_99_107_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_85, HeadVar__1_1, HeadVar__3_3);
                STATE_VARIABLE_RemainingLines_62_62 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingLines_0_9 - (MR_Unsigned) 1);
                succeeded = (STATE_VARIABLE_RemainingLines_62_62 <= (MR_Integer) 0);
                if (succeeded)
                {
                  *HeadVar__5_5 = TailDocs0_30;
                  *STATE_VARIABLE_RemainingLines_10 = STATE_VARIABLE_RemainingLines_62_62;
                  *STATE_VARIABLE_RemainingWidth_8 = STATE_VARIABLE_RemainingWidth_61_61;
                }
                else
                {
                  MR_Word next_value_of_HeadVar__4_4 = TailDocs0_30;
                  MR_Integer next_value_of_STATE_VARIABLE_RemainingWidth_0_7 = STATE_VARIABLE_RemainingWidth_61_61;
                  MR_Integer next_value_of_STATE_VARIABLE_RemainingLines_0_9 = STATE_VARIABLE_RemainingLines_62_62;

                  // direct tailcall eliminated
                  ;
                  HeadVar__4_4 = next_value_of_HeadVar__4_4;
                  STATE_VARIABLE_RemainingWidth_0_7 = next_value_of_STATE_VARIABLE_RemainingWidth_0_7;
                  STATE_VARIABLE_RemainingLines_0_9 = next_value_of_STATE_VARIABLE_RemainingLines_0_9;
                  continue;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String String_36 = ((MR_String) ((MR_hl_field(1, HeadDoc0_29, (MR_Integer) 0))));
            MR_Integer StrWidth_37;
            MR_Integer STATE_VARIABLE_RemainingWidth_57_57;
            void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_85, (MR_Integer) 0)), (MR_Integer) 5))));
            MR_Box conv3_STATE_VARIABLE_IO_56_56;
            MR_Word next_value_of_HeadVar__4_4;
            MR_Integer next_value_of_STATE_VARIABLE_RemainingWidth_0_7;

            func_2(((MR_Box) (TypeClassInfo_for_writer_85)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (String_36)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_56_56);
            mercury__string__count_code_points_loop_4_p_0(String_36, (MR_Integer) 0, (MR_Integer) 0, &StrWidth_37);
            STATE_VARIABLE_RemainingWidth_57_57 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingWidth_0_7 - (MR_Unsigned) StrWidth_37);
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__4_4 = TailDocs0_30;
            next_value_of_STATE_VARIABLE_RemainingWidth_0_7 = STATE_VARIABLE_RemainingWidth_57_57;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            STATE_VARIABLE_RemainingWidth_0_7 = next_value_of_STATE_VARIABLE_RemainingWidth_0_7;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_HeadVar__4_4 = TailDocs0_30;

            // direct tailcall eliminated
            ;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            continue;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, HeadDoc0_29, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              {
                MR_Word next_value_of_HeadVar__4_4 = TailDocs0_30;

                // direct tailcall eliminated
                ;
                HeadVar__4_4 = next_value_of_HeadVar__4_4;
                continue;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Internal_38 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_29, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) Internal_38)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(Internal_38)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer STATE_VARIABLE_OpenGroups_68_68 = (MR_Integer) ((MR_Unsigned) HeadVar__6_6 + (MR_Unsigned) 1);
                          MR_Word next_value_of_HeadVar__4_4 = TailDocs0_30;
                          MR_Integer next_value_of_HeadVar__6_6 = STATE_VARIABLE_OpenGroups_68_68;

                          // direct tailcall eliminated
                          ;
                          HeadVar__4_4 = next_value_of_HeadVar__4_4;
                          HeadVar__6_6 = next_value_of_HeadVar__6_6;
                          continue;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          succeeded = (HeadVar__6_6 == (MR_Integer) 1);
                          if (succeeded)
                          {
                            *HeadVar__5_5 = TailDocs0_30;
                            *STATE_VARIABLE_RemainingLines_10 = STATE_VARIABLE_RemainingLines_0_9;
                            *STATE_VARIABLE_RemainingWidth_8 = STATE_VARIABLE_RemainingWidth_0_7;
                          }
                          else
                          {
                            MR_Integer STATE_VARIABLE_OpenGroups_68_84 = (MR_Integer) ((MR_Unsigned) HeadVar__6_6 - (MR_Unsigned) 1);
                            MR_Word next_value_of_HeadVar__4_4 = TailDocs0_30;
                            MR_Integer next_value_of_HeadVar__6_6 = STATE_VARIABLE_OpenGroups_68_84;

                            // direct tailcall eliminated
                            ;
                            HeadVar__4_4 = next_value_of_HeadVar__4_4;
                            HeadVar__6_6 = next_value_of_HeadVar__6_6;
                            continue;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                      case (MR_Integer) 4:
                        {
                          MR_Word next_value_of_HeadVar__4_4 = TailDocs0_30;

                          // direct tailcall eliminated
                          ;
                          HeadVar__4_4 = next_value_of_HeadVar__4_4;
                          continue;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    {
                      MR_Word next_value_of_HeadVar__4_4 = TailDocs0_30;

                      // direct tailcall eliminated
                      ;
                      HeadVar__4_4 = next_value_of_HeadVar__4_4;
                      continue;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_110_108_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(
  MR_Word TypeClassInfo_for_writer_25,
  MR_Word Stream_9,
  MR_Integer LineWidth_10,
  MR_Word Indents_11,
  MR_Integer * RemainingWidth_12,
  MR_Integer STATE_VARIABLE_RemainingLines_0_15,
  MR_Integer * STATE_VARIABLE_RemainingLines_16)
{
  MR_Integer Var_21;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_25, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_STATE_VARIABLE_IO_20_20;

  func_0(((MR_Box) (TypeClassInfo_for_writer_25)), ((MR_Box) (Stream_9)), ((MR_Box) ((MR_String) "\n")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
  switch (MR_tag((MR_Word) Indents_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Var_21 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      Var_21 = ((MR_Integer) ((MR_hl_field(1, Indents_11, (MR_Integer) 2))));
      break;
    case (MR_Integer) 2:
      Var_21 = ((MR_Integer) ((MR_hl_field(2, Indents_11, (MR_Integer) 2))));
      break;
  }
  *RemainingWidth_12 = (MR_Integer) ((MR_Unsigned) LineWidth_10 - (MR_Unsigned) Var_21);
  mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_100_101_110_116_95_115_116_97_99_107_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_25, Stream_9, Indents_11);
  *STATE_VARIABLE_RemainingLines_16 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingLines_0_15 - (MR_Unsigned) 1);
}

static void MR_CALL 
mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_100_101_110_116_95_115_116_97_99_107_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_20,
  MR_Word Stream_5,
  MR_Word IndentStack_6)
{
  switch (MR_tag((MR_Word) IndentStack_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PrevStack_8 = ((MR_Word) ((MR_hl_field(1, IndentStack_6, (MR_Integer) 0))));
        MR_String IndentStr_9 = ((MR_String) ((MR_hl_field(1, IndentStack_6, (MR_Integer) 1))));
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv1_STATE_VARIABLE_IO_13;

        mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_100_101_110_116_95_115_116_97_99_107_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_20, Stream_5, PrevStack_8);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5))));
        func_0(((MR_Box) (TypeClassInfo_for_writer_20)), ((MR_Box) (Stream_5)), ((MR_Box) (IndentStr_9)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer IndentLevels_11 = ((MR_Integer) ((MR_hl_field(2, IndentStack_6, (MR_Integer) 1))));
        MR_Word PrevStack_19 = ((MR_Word) ((MR_hl_field(2, IndentStack_6, (MR_Integer) 0))));

        mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_105_110_100_101_110_116_95_115_116_97_99_107_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_20, Stream_5, PrevStack_19);
        mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_100_95_105_110_100_101_110_116_95_108_101_118_101_108_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_20, Stream_5, IndentLevels_11);
      }
      break;
  }
}

static void MR_CALL 
mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_100_95_105_110_100_101_110_116_95_108_101_118_101_108_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_21,
  MR_Word Stream_5,
  MR_Integer NumLevels_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (NumLevels_6 >= (MR_Integer) 30);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_21, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv1_STATE_VARIABLE_IO_12_12;
      MR_Integer next_value_of_NumLevels_6;

      func_0(((MR_Box) (TypeClassInfo_for_writer_21)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_String) "                                                            ")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_12_12);
      Var_13 = (MR_Integer) ((MR_Unsigned) NumLevels_6 - (MR_Unsigned) 30);
      // direct tailcall eliminated
      ;
      next_value_of_NumLevels_6 = Var_13;
      NumLevels_6 = next_value_of_NumLevels_6;
      continue;
    }
    else
    {
      succeeded = (NumLevels_6 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_String IndentStr_20;

        if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) NumLevels_6 - (MR_Unsigned) 1))) <= ((MR_Unsigned) 28)))
        {
          IndentStr_20 = ((&mercury__pretty_printer_vector_common_7[0 + (MR_Integer) ((MR_Unsigned) NumLevels_6 - (MR_Unsigned) 1)]))->mercury__pretty_printer__vector_common_type_7_0__vct_7_f_0;
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_21, (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv3_STATE_VARIABLE_IO_10;

          func_2(((MR_Box) (TypeClassInfo_for_writer_21)), ((MR_Box) (Stream_5)), ((MR_Box) (IndentStr_20)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_10);
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140pretty_printer.output_std_indent_levels\'/4", (MR_String) "std_indent failed");
            return;
          }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__pretty_printer__decrement_std_indent_2_p_0(
  MR_Word IndentStack0_3,
  MR_Word * IndentStack_4)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) IndentStack0_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140pretty_printer.decrement_std_indent\'/2", (MR_String) "last indent is not std indent");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140pretty_printer.decrement_std_indent\'/2", (MR_String) "last indent is not std indent");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PrevStack_5 = ((MR_Word) ((MR_hl_field(2, IndentStack0_3, (MR_Integer) 0))));
        MR_Integer NumLevels0_6 = ((MR_Integer) ((MR_hl_field(2, IndentStack0_3, (MR_Integer) 1))));
        MR_Integer NumCPs0_7 = ((MR_Integer) ((MR_hl_field(2, IndentStack0_3, (MR_Integer) 2))));
        MR_Integer NumLevels_8 = (MR_Integer) ((MR_Unsigned) NumLevels0_6 - (MR_Unsigned) 1);

        succeeded = (NumLevels_8 > (MR_Integer) 0);
        if (succeeded)
        {
          MR_Integer NumCPs_9 = (MR_Integer) ((MR_Unsigned) NumCPs0_7 - (MR_Unsigned) 2);

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *IndentStack_4 = base;
            MR_hl_field(2, base, 0) = ((MR_Box) (PrevStack_5));
            MR_hl_field(2, base, 1) = ((MR_Box) (NumLevels_8));
            MR_hl_field(2, base, 2) = ((MR_Box) (NumCPs_9));
          }
        }
        else
          *IndentStack_4 = PrevStack_5;
      }
      break;
  }
}

static void MR_CALL 
mercury__pretty_printer__increment_std_indent_2_p_0(
  MR_Word IndentStack0_3,
  MR_Word * IndentStack_4)
{
  switch (MR_tag((MR_Word) IndentStack0_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *IndentStack_4 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (IndentStack0_3));
        MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(2, base, 2) = ((MR_Box) ((MR_Integer) 2));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer NumCPs0_7 = ((MR_Integer) ((MR_hl_field(1, IndentStack0_3, (MR_Integer) 2))));
        MR_Integer NumCPs_8 = (MR_Integer) ((MR_Unsigned) NumCPs0_7 + (MR_Unsigned) 2);

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *IndentStack_4 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (IndentStack0_3));
          MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(2, base, 2) = ((MR_Box) (NumCPs_8));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PrevStack_9 = ((MR_Word) ((MR_hl_field(2, IndentStack0_3, (MR_Integer) 0))));
        MR_Integer NumLevels0_10 = ((MR_Integer) ((MR_hl_field(2, IndentStack0_3, (MR_Integer) 1))));
        MR_Integer NumLevels_11 = (MR_Integer) ((MR_Unsigned) NumLevels0_10 + (MR_Unsigned) 1);
        MR_Integer NumCPs0_18 = ((MR_Integer) ((MR_hl_field(2, IndentStack0_3, (MR_Integer) 2))));
        MR_Integer NumCPs_19 = (MR_Integer) ((MR_Unsigned) NumCPs0_18 + (MR_Unsigned) 2);

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *IndentStack_4 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (PrevStack_9));
          MR_hl_field(2, base, 1) = ((MR_Box) (NumLevels_11));
          MR_hl_field(2, base, 2) = ((MR_Box) (NumCPs_19));
        }
      }
      break;
  }
}

static void MR_CALL 
mercury__pretty_printer__increment_user_indent_3_p_0(
  MR_String IndentStr_4,
  MR_Word IndentStack0_5,
  MR_Word * IndentStack_6)
{
  MR_Integer NumCPs0_7;
  MR_Integer NumCPs_8;
  MR_Integer Var_9;

  switch (MR_tag((MR_Word) IndentStack0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      NumCPs0_7 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      NumCPs0_7 = ((MR_Integer) ((MR_hl_field(1, IndentStack0_5, (MR_Integer) 2))));
      break;
    case (MR_Integer) 2:
      NumCPs0_7 = ((MR_Integer) ((MR_hl_field(2, IndentStack0_5, (MR_Integer) 2))));
      break;
  }
  mercury__string__count_code_points_loop_4_p_0(IndentStr_4, (MR_Integer) 0, (MR_Integer) 0, &Var_9);
  NumCPs_8 = (MR_Integer) ((MR_Unsigned) NumCPs0_7 + (MR_Unsigned) Var_9);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *IndentStack_6 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (IndentStack0_5));
    MR_hl_field(1, base, 1) = ((MR_Box) (IndentStr_4));
    MR_hl_field(1, base, 2) = ((MR_Box) (NumCPs_8));
  }
}

static void MR_CALL 
mercury__pretty_printer__expand_docs_to_line_end_11_p_1(
  MR_Word Canonicalize_1,
  MR_Word FMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word STATE_VARIABLE_Limit_0_6,
  MR_Word * STATE_VARIABLE_Limit_7,
  MR_Word STATE_VARIABLE_Pri_0_8,
  MR_Word * STATE_VARIABLE_Pri_9,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_10,
  MR_Integer * STATE_VARIABLE_RemainingWidth_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RemainingWidth_11 = STATE_VARIABLE_RemainingWidth_0_10;
      *STATE_VARIABLE_Pri_9 = STATE_VARIABLE_Pri_0_8;
      *STATE_VARIABLE_Limit_7 = STATE_VARIABLE_Limit_0_6;
    }
    else
    {
      MR_Word HeadDoc0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TailDocs0_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));

      succeeded = (HeadVar__5_5 <= (MR_Integer) 0);
      if (succeeded)
      {
        if ((HeadDoc0_27 == (MR_Word) ((MR_Unsigned) 4U)))
          succeeded = MR_TRUE;
        else
        if ((HeadDoc0_27 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      if (!(succeeded))
        succeeded = (STATE_VARIABLE_RemainingWidth_0_10 < (MR_Integer) 0);
      if (succeeded)
      {
        *HeadVar__4_4 = HeadVar__3_3;
        *STATE_VARIABLE_RemainingWidth_11 = STATE_VARIABLE_RemainingWidth_0_10;
        *STATE_VARIABLE_Pri_9 = STATE_VARIABLE_Pri_0_8;
        *STATE_VARIABLE_Limit_7 = STATE_VARIABLE_Limit_0_6;
      }
      else
        switch (MR_tag((MR_Word) HeadDoc0_27)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = (HeadVar__5_5 <= (MR_Integer) 0);
              if (succeeded)
              {
                *HeadVar__4_4 = HeadVar__3_3;
                *STATE_VARIABLE_RemainingWidth_11 = STATE_VARIABLE_RemainingWidth_0_10;
                *STATE_VARIABLE_Pri_9 = STATE_VARIABLE_Pri_0_8;
                *STATE_VARIABLE_Limit_7 = STATE_VARIABLE_Limit_0_6;
              }
              else
              {
                MR_Word * AddrTailDocs_114;

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_27));
                  MR_hl_field(1, base, 1) = NULL;
                }
                AddrTailDocs_114 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
                mercury__pretty_printer__LCMC__pred__expand_docs_to_line_end__1_11_p_1(Canonicalize_1, FMap_2, TailDocs0_28, AddrTailDocs_114, HeadVar__5_5, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String String_34 = ((MR_String) ((MR_hl_field(1, HeadDoc0_27, (MR_Integer) 0))));
              MR_Integer StrWidth_35;
              MR_Integer STATE_VARIABLE_RemainingWidth_55_55;
              MR_Word * AddrTailDocs_121;

              mercury__string__count_code_points_loop_4_p_0(String_34, (MR_Integer) 0, (MR_Integer) 0, &StrWidth_35);
              STATE_VARIABLE_RemainingWidth_55_55 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingWidth_0_10 - (MR_Unsigned) StrWidth_35);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_27));
                MR_hl_field(1, base, 1) = NULL;
              }
              AddrTailDocs_121 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
              mercury__pretty_printer__LCMC__pred__expand_docs_to_line_end__1_11_p_1(Canonicalize_1, FMap_2, TailDocs0_28, AddrTailDocs_121, HeadVar__5_5, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_55_55, STATE_VARIABLE_RemainingWidth_11);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HeadDocs0_37 = ((MR_Word) ((MR_hl_field(2, HeadDoc0_27, (MR_Integer) 0))));
              MR_Word Docs1_38;
              MR_Word next_value_of_HeadVar__3_3;

              mercury__list__append_3_p_1((MR_Word) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0), HeadDocs0_37, TailDocs0_28, &Docs1_38);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__3_3 = Docs1_38;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word HeadUniv_39 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 1))));
                  MR_Word STATE_VARIABLE_Limit_66_98;
                  MR_Word Docs1_99;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_univ_8_p_1(Canonicalize_1, FMap_2, HeadUniv_39, TailDocs0_28, &Docs1_99, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_66_98, STATE_VARIABLE_Pri_0_8);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Docs1_99;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_66_98;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word HeadUnivs_40 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 1))));
                  MR_Word Sep_41 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 2))));
                  MR_Word STATE_VARIABLE_Limit_66_66;
                  MR_Word Docs1_91;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_list_6_p_0(HeadUnivs_40, Sep_41, TailDocs0_28, &Docs1_91, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_66_66);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Docs1_91;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_66_66;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Name_42 = ((MR_String) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 1))));
                  MR_Word HeadUnivs_90 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 2))));
                  MR_Word STATE_VARIABLE_Limit_66_96;
                  MR_Word Docs1_97;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_term_7_p_0(Name_42, HeadUnivs_90, TailDocs0_28, &Docs1_97, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_66_96, STATE_VARIABLE_Pri_0_8);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Docs1_97;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_66_96;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word HeadSusp_43 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 1))));
                  MR_Word STATE_VARIABLE_Limit_66_94;
                  MR_Word Docs1_95;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_susp_5_p_0(HeadSusp_43, TailDocs0_28, &Docs1_95, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_66_94);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Docs1_95;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_66_94;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Internal_44 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) Internal_44)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(Internal_44)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Integer Var_74;
                            MR_Integer STATE_VARIABLE_OpenGroups_73_106;
                            MR_Word * AddrTailDocs_119;

                            succeeded = (HeadVar__5_5 > (MR_Integer) 0);
                            if (succeeded)
                              Var_74 = (MR_Integer) 1;
                            else
                              Var_74 = (MR_Integer) 0;
                            STATE_VARIABLE_OpenGroups_73_106 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) Var_74);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_27));
                              MR_hl_field(1, base, 1) = NULL;
                            }
                            AddrTailDocs_119 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
                            mercury__pretty_printer__LCMC__pred__expand_docs_to_line_end__1_11_p_1(Canonicalize_1, FMap_2, TailDocs0_28, AddrTailDocs_119, STATE_VARIABLE_OpenGroups_73_106, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Integer Var_77;
                            MR_Integer STATE_VARIABLE_OpenGroups_73_100;
                            MR_Word * AddrTailDocs_116;

                            succeeded = (HeadVar__5_5 > (MR_Integer) 0);
                            if (succeeded)
                              Var_77 = (MR_Integer) 1;
                            else
                              Var_77 = (MR_Integer) 0;
                            STATE_VARIABLE_OpenGroups_73_100 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 - (MR_Unsigned) Var_77);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_27));
                              MR_hl_field(1, base, 1) = NULL;
                            }
                            AddrTailDocs_116 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
                            mercury__pretty_printer__LCMC__pred__expand_docs_to_line_end__1_11_p_1(Canonicalize_1, FMap_2, TailDocs0_28, AddrTailDocs_116, STATE_VARIABLE_OpenGroups_73_100, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word * AddrTailDocs_120;

                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_27));
                              MR_hl_field(1, base, 1) = NULL;
                            }
                            AddrTailDocs_120 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
                            mercury__pretty_printer__LCMC__pred__expand_docs_to_line_end__1_11_p_1(Canonicalize_1, FMap_2, TailDocs0_28, AddrTailDocs_120, HeadVar__5_5, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            MR_Word * AddrTailDocs_118;

                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_27));
                              MR_hl_field(1, base, 1) = NULL;
                            }
                            AddrTailDocs_118 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
                            mercury__pretty_printer__LCMC__pred__expand_docs_to_line_end__1_11_p_1(Canonicalize_1, FMap_2, TailDocs0_28, AddrTailDocs_118, HeadVar__5_5, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                          }
                          break;
                        case (MR_Integer) 4:
                          {
                            MR_Word * AddrTailDocs_117;

                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_27));
                              MR_hl_field(1, base, 1) = NULL;
                            }
                            AddrTailDocs_117 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
                            mercury__pretty_printer__LCMC__pred__expand_docs_to_line_end__1_11_p_1(Canonicalize_1, FMap_2, TailDocs0_28, AddrTailDocs_117, HeadVar__5_5, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word * AddrTailDocs_115;

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *HeadVar__4_4 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_27));
                          MR_hl_field(1, base, 1) = NULL;
                        }
                        AddrTailDocs_115 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
                        mercury__pretty_printer__LCMC__pred__expand_docs_to_line_end__1_11_p_1(Canonicalize_1, FMap_2, TailDocs0_28, AddrTailDocs_115, HeadVar__5_5, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word STATE_VARIABLE_Pri_83_111 = ((MR_Word) ((MR_hl_field(2, Internal_44, (MR_Integer) 0))));
                        MR_Word next_value_of_HeadVar__3_3 = TailDocs0_28;
                        MR_Word next_value_of_STATE_VARIABLE_Pri_0_8 = STATE_VARIABLE_Pri_83_111;

                        // direct tailcall eliminated
                        ;
                        HeadVar__3_3 = next_value_of_HeadVar__3_3;
                        STATE_VARIABLE_Pri_0_8 = next_value_of_STATE_VARIABLE_Pri_0_8;
                        continue;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word STATE_VARIABLE_Limit_82_82 = ((MR_Word) ((MR_hl_field(3, Internal_44, (MR_Integer) 0))));
                        MR_Word next_value_of_HeadVar__3_3 = TailDocs0_28;
                        MR_Word next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_82_82;

                        // direct tailcall eliminated
                        ;
                        HeadVar__3_3 = next_value_of_HeadVar__3_3;
                        STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                        continue;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
    }
    break;
  }
}

static void MR_CALL 
mercury__pretty_printer__LCMC__pred__expand_docs_to_line_end__1_11_p_1(
  MR_Word Canonicalize_1,
  MR_Word FMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_122,
  MR_Integer HeadVar__5_5,
  MR_Word STATE_VARIABLE_Limit_0_6,
  MR_Word * STATE_VARIABLE_Limit_7,
  MR_Word STATE_VARIABLE_Pri_0_8,
  MR_Word * STATE_VARIABLE_Pri_9,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_10,
  MR_Integer * STATE_VARIABLE_RemainingWidth_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_122 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RemainingWidth_11 = STATE_VARIABLE_RemainingWidth_0_10;
      *STATE_VARIABLE_Pri_9 = STATE_VARIABLE_Pri_0_8;
      *STATE_VARIABLE_Limit_7 = STATE_VARIABLE_Limit_0_6;
    }
    else
    {
      MR_Word HeadDoc0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TailDocs0_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));

      succeeded = (HeadVar__5_5 <= (MR_Integer) 0);
      if (succeeded)
      {
        if ((HeadDoc0_27 == (MR_Word) ((MR_Unsigned) 4U)))
          succeeded = MR_TRUE;
        else
        if ((HeadDoc0_27 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      if (!(succeeded))
        succeeded = (STATE_VARIABLE_RemainingWidth_0_10 < (MR_Integer) 0);
      if (succeeded)
      {
        *AddrOfHeadVar__4_122 = HeadVar__3_3;
        *STATE_VARIABLE_RemainingWidth_11 = STATE_VARIABLE_RemainingWidth_0_10;
        *STATE_VARIABLE_Pri_9 = STATE_VARIABLE_Pri_0_8;
        *STATE_VARIABLE_Limit_7 = STATE_VARIABLE_Limit_0_6;
      }
      else
        switch (MR_tag((MR_Word) HeadDoc0_27)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = (HeadVar__5_5 <= (MR_Integer) 0);
              if (succeeded)
              {
                *AddrOfHeadVar__4_122 = HeadVar__3_3;
                *STATE_VARIABLE_RemainingWidth_11 = STATE_VARIABLE_RemainingWidth_0_10;
                *STATE_VARIABLE_Pri_9 = STATE_VARIABLE_Pri_0_8;
                *STATE_VARIABLE_Limit_7 = STATE_VARIABLE_Limit_0_6;
              }
              else
              {
                MR_Word * AddrTailDocs_114;
                MR_Word HeadVar__4_125;
                MR_Word next_value_of_HeadVar__3_3;
                MR_Word * next_value_of_AddrOfHeadVar__4_122;

                {
                  HeadVar__4_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, HeadVar__4_125, 0) = ((MR_Box) (HeadDoc0_27));
                  MR_hl_field(1, HeadVar__4_125, 1) = NULL;
                }
                AddrTailDocs_114 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_125, (MR_Integer) 1)));
                *AddrOfHeadVar__4_122 = HeadVar__4_125;
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__3_3 = TailDocs0_28;
                next_value_of_AddrOfHeadVar__4_122 = AddrTailDocs_114;
                HeadVar__3_3 = next_value_of_HeadVar__3_3;
                AddrOfHeadVar__4_122 = next_value_of_AddrOfHeadVar__4_122;
                continue;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String String_34 = ((MR_String) ((MR_hl_field(1, HeadDoc0_27, (MR_Integer) 0))));
              MR_Integer StrWidth_35;
              MR_Integer STATE_VARIABLE_RemainingWidth_55_55;
              MR_Word * AddrTailDocs_121;
              MR_Word HeadVar__4_149;
              MR_Word next_value_of_HeadVar__3_3;
              MR_Word * next_value_of_AddrOfHeadVar__4_122;
              MR_Integer next_value_of_STATE_VARIABLE_RemainingWidth_0_10;

              mercury__string__count_code_points_loop_4_p_0(String_34, (MR_Integer) 0, (MR_Integer) 0, &StrWidth_35);
              STATE_VARIABLE_RemainingWidth_55_55 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingWidth_0_10 - (MR_Unsigned) StrWidth_35);
              {
                HeadVar__4_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, HeadVar__4_149, 0) = ((MR_Box) (HeadDoc0_27));
                MR_hl_field(1, HeadVar__4_149, 1) = NULL;
              }
              AddrTailDocs_121 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_149, (MR_Integer) 1)));
              *AddrOfHeadVar__4_122 = HeadVar__4_149;
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__3_3 = TailDocs0_28;
              next_value_of_AddrOfHeadVar__4_122 = AddrTailDocs_121;
              next_value_of_STATE_VARIABLE_RemainingWidth_0_10 = STATE_VARIABLE_RemainingWidth_55_55;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              AddrOfHeadVar__4_122 = next_value_of_AddrOfHeadVar__4_122;
              STATE_VARIABLE_RemainingWidth_0_10 = next_value_of_STATE_VARIABLE_RemainingWidth_0_10;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HeadDocs0_37 = ((MR_Word) ((MR_hl_field(2, HeadDoc0_27, (MR_Integer) 0))));
              MR_Word Docs1_38;
              MR_Word next_value_of_HeadVar__3_3;

              mercury__list__append_3_p_1((MR_Word) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0), HeadDocs0_37, TailDocs0_28, &Docs1_38);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__3_3 = Docs1_38;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word HeadUniv_39 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 1))));
                  MR_Word STATE_VARIABLE_Limit_66_98;
                  MR_Word Docs1_99;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_univ_8_p_1(Canonicalize_1, FMap_2, HeadUniv_39, TailDocs0_28, &Docs1_99, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_66_98, STATE_VARIABLE_Pri_0_8);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Docs1_99;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_66_98;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word HeadUnivs_40 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 1))));
                  MR_Word Sep_41 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 2))));
                  MR_Word STATE_VARIABLE_Limit_66_66;
                  MR_Word Docs1_91;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_list_6_p_0(HeadUnivs_40, Sep_41, TailDocs0_28, &Docs1_91, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_66_66);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Docs1_91;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_66_66;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Name_42 = ((MR_String) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 1))));
                  MR_Word HeadUnivs_90 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 2))));
                  MR_Word STATE_VARIABLE_Limit_66_96;
                  MR_Word Docs1_97;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_term_7_p_0(Name_42, HeadUnivs_90, TailDocs0_28, &Docs1_97, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_66_96, STATE_VARIABLE_Pri_0_8);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Docs1_97;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_66_96;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word HeadSusp_43 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 1))));
                  MR_Word STATE_VARIABLE_Limit_66_94;
                  MR_Word Docs1_95;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_susp_5_p_0(HeadSusp_43, TailDocs0_28, &Docs1_95, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_66_94);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Docs1_95;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_66_94;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Internal_44 = ((MR_Word) ((MR_hl_field(3, HeadDoc0_27, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) Internal_44)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(Internal_44)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Integer Var_74;
                            MR_Integer STATE_VARIABLE_OpenGroups_73_106;
                            MR_Word * AddrTailDocs_119;
                            MR_Word HeadVar__4_141;
                            MR_Word next_value_of_HeadVar__3_3;
                            MR_Word * next_value_of_AddrOfHeadVar__4_122;
                            MR_Integer next_value_of_HeadVar__5_5;

                            succeeded = (HeadVar__5_5 > (MR_Integer) 0);
                            if (succeeded)
                              Var_74 = (MR_Integer) 1;
                            else
                              Var_74 = (MR_Integer) 0;
                            STATE_VARIABLE_OpenGroups_73_106 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) Var_74);
                            {
                              HeadVar__4_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, HeadVar__4_141, 0) = ((MR_Box) (HeadDoc0_27));
                              MR_hl_field(1, HeadVar__4_141, 1) = NULL;
                            }
                            AddrTailDocs_119 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_141, (MR_Integer) 1)));
                            *AddrOfHeadVar__4_122 = HeadVar__4_141;
                            // direct tailcall eliminated
                            ;
                            next_value_of_HeadVar__3_3 = TailDocs0_28;
                            next_value_of_AddrOfHeadVar__4_122 = AddrTailDocs_119;
                            next_value_of_HeadVar__5_5 = STATE_VARIABLE_OpenGroups_73_106;
                            HeadVar__3_3 = next_value_of_HeadVar__3_3;
                            AddrOfHeadVar__4_122 = next_value_of_AddrOfHeadVar__4_122;
                            HeadVar__5_5 = next_value_of_HeadVar__5_5;
                            continue;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Integer Var_77;
                            MR_Integer STATE_VARIABLE_OpenGroups_73_100;
                            MR_Word * AddrTailDocs_116;
                            MR_Word HeadVar__4_132;
                            MR_Word next_value_of_HeadVar__3_3;
                            MR_Word * next_value_of_AddrOfHeadVar__4_122;
                            MR_Integer next_value_of_HeadVar__5_5;

                            succeeded = (HeadVar__5_5 > (MR_Integer) 0);
                            if (succeeded)
                              Var_77 = (MR_Integer) 1;
                            else
                              Var_77 = (MR_Integer) 0;
                            STATE_VARIABLE_OpenGroups_73_100 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 - (MR_Unsigned) Var_77);
                            {
                              HeadVar__4_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, HeadVar__4_132, 0) = ((MR_Box) (HeadDoc0_27));
                              MR_hl_field(1, HeadVar__4_132, 1) = NULL;
                            }
                            AddrTailDocs_116 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_132, (MR_Integer) 1)));
                            *AddrOfHeadVar__4_122 = HeadVar__4_132;
                            // direct tailcall eliminated
                            ;
                            next_value_of_HeadVar__3_3 = TailDocs0_28;
                            next_value_of_AddrOfHeadVar__4_122 = AddrTailDocs_116;
                            next_value_of_HeadVar__5_5 = STATE_VARIABLE_OpenGroups_73_100;
                            HeadVar__3_3 = next_value_of_HeadVar__3_3;
                            AddrOfHeadVar__4_122 = next_value_of_AddrOfHeadVar__4_122;
                            HeadVar__5_5 = next_value_of_HeadVar__5_5;
                            continue;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word * AddrTailDocs_120;
                            MR_Word HeadVar__4_144;
                            MR_Word next_value_of_HeadVar__3_3;
                            MR_Word * next_value_of_AddrOfHeadVar__4_122;

                            {
                              HeadVar__4_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, HeadVar__4_144, 0) = ((MR_Box) (HeadDoc0_27));
                              MR_hl_field(1, HeadVar__4_144, 1) = NULL;
                            }
                            AddrTailDocs_120 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_144, (MR_Integer) 1)));
                            *AddrOfHeadVar__4_122 = HeadVar__4_144;
                            // direct tailcall eliminated
                            ;
                            next_value_of_HeadVar__3_3 = TailDocs0_28;
                            next_value_of_AddrOfHeadVar__4_122 = AddrTailDocs_120;
                            HeadVar__3_3 = next_value_of_HeadVar__3_3;
                            AddrOfHeadVar__4_122 = next_value_of_AddrOfHeadVar__4_122;
                            continue;
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            MR_Word * AddrTailDocs_118;
                            MR_Word HeadVar__4_138;
                            MR_Word next_value_of_HeadVar__3_3;
                            MR_Word * next_value_of_AddrOfHeadVar__4_122;

                            {
                              HeadVar__4_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, HeadVar__4_138, 0) = ((MR_Box) (HeadDoc0_27));
                              MR_hl_field(1, HeadVar__4_138, 1) = NULL;
                            }
                            AddrTailDocs_118 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_138, (MR_Integer) 1)));
                            *AddrOfHeadVar__4_122 = HeadVar__4_138;
                            // direct tailcall eliminated
                            ;
                            next_value_of_HeadVar__3_3 = TailDocs0_28;
                            next_value_of_AddrOfHeadVar__4_122 = AddrTailDocs_118;
                            HeadVar__3_3 = next_value_of_HeadVar__3_3;
                            AddrOfHeadVar__4_122 = next_value_of_AddrOfHeadVar__4_122;
                            continue;
                          }
                          break;
                        case (MR_Integer) 4:
                          {
                            MR_Word * AddrTailDocs_117;
                            MR_Word HeadVar__4_135;
                            MR_Word next_value_of_HeadVar__3_3;
                            MR_Word * next_value_of_AddrOfHeadVar__4_122;

                            {
                              HeadVar__4_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, HeadVar__4_135, 0) = ((MR_Box) (HeadDoc0_27));
                              MR_hl_field(1, HeadVar__4_135, 1) = NULL;
                            }
                            AddrTailDocs_117 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_135, (MR_Integer) 1)));
                            *AddrOfHeadVar__4_122 = HeadVar__4_135;
                            // direct tailcall eliminated
                            ;
                            next_value_of_HeadVar__3_3 = TailDocs0_28;
                            next_value_of_AddrOfHeadVar__4_122 = AddrTailDocs_117;
                            HeadVar__3_3 = next_value_of_HeadVar__3_3;
                            AddrOfHeadVar__4_122 = next_value_of_AddrOfHeadVar__4_122;
                            continue;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word * AddrTailDocs_115;
                        MR_Word HeadVar__4_129;
                        MR_Word next_value_of_HeadVar__3_3;
                        MR_Word * next_value_of_AddrOfHeadVar__4_122;

                        {
                          HeadVar__4_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, HeadVar__4_129, 0) = ((MR_Box) (HeadDoc0_27));
                          MR_hl_field(1, HeadVar__4_129, 1) = NULL;
                        }
                        AddrTailDocs_115 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_129, (MR_Integer) 1)));
                        *AddrOfHeadVar__4_122 = HeadVar__4_129;
                        // direct tailcall eliminated
                        ;
                        next_value_of_HeadVar__3_3 = TailDocs0_28;
                        next_value_of_AddrOfHeadVar__4_122 = AddrTailDocs_115;
                        HeadVar__3_3 = next_value_of_HeadVar__3_3;
                        AddrOfHeadVar__4_122 = next_value_of_AddrOfHeadVar__4_122;
                        continue;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word STATE_VARIABLE_Pri_83_111 = ((MR_Word) ((MR_hl_field(2, Internal_44, (MR_Integer) 0))));
                        MR_Word next_value_of_HeadVar__3_3 = TailDocs0_28;
                        MR_Word next_value_of_STATE_VARIABLE_Pri_0_8 = STATE_VARIABLE_Pri_83_111;

                        // direct tailcall eliminated
                        ;
                        HeadVar__3_3 = next_value_of_HeadVar__3_3;
                        STATE_VARIABLE_Pri_0_8 = next_value_of_STATE_VARIABLE_Pri_0_8;
                        continue;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word STATE_VARIABLE_Limit_82_82 = ((MR_Word) ((MR_hl_field(3, Internal_44, (MR_Integer) 0))));
                        MR_Word next_value_of_HeadVar__3_3 = TailDocs0_28;
                        MR_Word next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_82_82;

                        // direct tailcall eliminated
                        ;
                        HeadVar__3_3 = next_value_of_HeadVar__3_3;
                        STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                        continue;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
    }
    break;
  }
}

static void MR_CALL 
mercury__pretty_printer__expand_format_susp_5_p_0(
  MR_Word Susp_6,
  MR_Word TailDocs_7,
  MR_Word * Docs_8,
  MR_Word STATE_VARIABLE_Limit_0_11,
  MR_Word * STATE_VARIABLE_Limit_12)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) STATE_VARIABLE_Limit_0_11)) == (MR_Integer) 0))
  {
    MR_Integer N_14 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Limit_0_11, (MR_Integer) 0))));

    succeeded = (N_14 <= (MR_Integer) 0);
  }
  else
  {
    MR_Integer N_16 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_Limit_0_11, (MR_Integer) 0))));

    succeeded = (N_16 <= (MR_Integer) 0);
  }
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Docs_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[13])));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailDocs_7));
    }
    *STATE_VARIABLE_Limit_12 = STATE_VARIABLE_Limit_0_11;
  }
  else
  {
    MR_Word HeadDoc0_10;
    MR_Box MR_CALL (* func_0)(MR_Box);
    MR_Box conv1_HeadDoc0_10;

    if (((MR_tag((MR_Word) STATE_VARIABLE_Limit_0_11)) == (MR_Integer) 0))
    {
      MR_Integer N_19 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Limit_0_11, (MR_Integer) 0))));
      MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) N_19 - (MR_Unsigned) 1);

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Limit_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_20));
      }
    }
    else
    {
      MR_Integer N_22 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_Limit_0_11, (MR_Integer) 0))));
      MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) N_22 - (MR_Unsigned) 1);

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Limit_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_23));
      }
    }
    func_0 = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, Susp_6, (MR_Integer) 1))));
    conv1_HeadDoc0_10 = func_0(((MR_Box) (Susp_6)));
    HeadDoc0_10 = ((MR_Word) (conv1_HeadDoc0_10));
    if (((MR_tag((MR_Word) *STATE_VARIABLE_Limit_12)) == (MR_Integer) 0))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Docs_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_10));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailDocs_7));
      }
    else
    {
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;

      {
        Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_35, 0) = ((MR_Box) (*STATE_VARIABLE_Limit_12));
      }
      {
        Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Var_34, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) (TailDocs_7));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Docs_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_10));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_33));
      }
    }
  }
}

static void MR_CALL 
mercury__pretty_printer__expand_format_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word TailDocs_3,
  MR_Word * Docs_4,
  MR_Word STATE_VARIABLE_Limit_0_5,
  MR_Word * STATE_VARIABLE_Limit_6)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Docs_4 = TailDocs_3;
    *STATE_VARIABLE_Limit_6 = STATE_VARIABLE_Limit_0_5;
  }
  else
  {
    MR_Word HeadUniv_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TailUnivs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

    if (((MR_tag((MR_Word) STATE_VARIABLE_Limit_0_5)) == (MR_Integer) 0))
    {
      MR_Integer N_51 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Limit_0_5, (MR_Integer) 0))));

      succeeded = (N_51 <= (MR_Integer) 0);
    }
    else
    {
      MR_Integer N_53 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_Limit_0_5, (MR_Integer) 0))));

      succeeded = (N_53 <= (MR_Integer) 0);
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Docs_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[13])));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailDocs_3));
      }
    else
    if ((TailUnivs_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_26;
      MR_Word Var_29;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;

      {
        Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_32, 1) = ((MR_Box) (HeadUniv_13));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[9])));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) (TailDocs_3));
      }
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[8])));
        MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Docs_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[23])));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_26));
      }
    }
    else
    {
      MR_Word Var_38;
      MR_Word Var_41;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_49;
      MR_Word Var_50;

      {
        Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_44, 1) = ((MR_Box) (HeadUniv_13));
      }
      {
        Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_50, 1) = ((MR_Box) (TailUnivs_14));
        MR_hl_field(3, Var_50, 2) = ((MR_Box) (HeadVar__2_2));
      }
      {
        Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
        MR_hl_field(1, Var_49, 1) = ((MR_Box) (TailDocs_3));
      }
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[9])));
        MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
      }
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_45));
      }
      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[8])));
        MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Docs_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[23])));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_38));
      }
    }
    *STATE_VARIABLE_Limit_6 = STATE_VARIABLE_Limit_0_5;
  }
}

static void MR_CALL 
mercury__pretty_printer__expand_format_univ_8_p_1(
  MR_Word Canonicalize_9,
  MR_Word FMap_10,
  MR_Word Univ_11,
  MR_Word TailDocs_12,
  MR_Word * Docs_13,
  MR_Word STATE_VARIABLE_Limit_0_29,
  MR_Word * STATE_VARIABLE_Limit_30,
  MR_Word CurrentPri_15)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) STATE_VARIABLE_Limit_0_29)) == (MR_Integer) 0))
  {
    MR_Integer N_41 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Limit_0_29, (MR_Integer) 0))));

    succeeded = (N_41 <= (MR_Integer) 0);
  }
  else
  {
    MR_Integer N_43 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_Limit_0_29, (MR_Integer) 0))));

    succeeded = (N_43 <= (MR_Integer) 0);
  }
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Docs_13 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[13])));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailDocs_12));
    }
    *STATE_VARIABLE_Limit_30 = STATE_VARIABLE_Limit_0_29;
  }
  else
  {
    MR_Word TypeInfo_33_33 = ((MR_Word) ((MR_hl_field(0, Univ_11, (MR_Integer) 0))));
    MR_Box Value_16 = (MR_hl_field(0, Univ_11, (MR_Integer) 1));
    MR_Word ArgTypeDescs_18;
    MR_Word Formatter_24;
    MR_Word TypeInfo_36_36;
    MR_Word TypeCtorInfo_37_37;
    MR_Word TypeInfo_39_39;
    MR_Word TypeCtorDesc_17;
    MR_String ModuleName_19;
    MR_Word FMapTypeArity_20;
    MR_String TypeName_21;
    MR_Word FMapArity_22;
    MR_Integer Arity_23;
    MR_Word Var_32;
    MR_Integer Var_50;
    MR_String Var_46;
    MR_Integer Var_47;
    MR_Box conv0_FMapTypeArity_20;
    MR_String Var_48;
    MR_Integer Var_49;
    MR_Box conv1_FMapArity_22;
    MR_Box conv2_Formatter_24;

{
#define MR_PROC_LABEL mercury__pretty_printer__expand_format_univ_8_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_33_33 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_32  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_format_univ_8_p_1

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Var_32 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}

		;}
#undef MR_PROC_LABEL
	TypeCtorDesc_17  = TypeCtorDesc;
	ArgTypeDescs_18  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_format_univ_8_p_1

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtorDesc_17 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	ModuleName_19  = TypeCtorModuleName;
	Var_46  = TypeCtorName;
	Var_47  = TypeCtorArity;
}
    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), FMap_10, ((MR_Box) (ModuleName_19)), &conv0_FMapTypeArity_20);
    if (succeeded)
    {
      FMapTypeArity_20 = ((MR_Word) (conv0_FMapTypeArity_20));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_format_univ_8_p_1

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtorDesc_17 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	Var_48  = TypeCtorModuleName;
	TypeName_21  = TypeCtorName;
	Var_49  = TypeCtorArity;
}
      TypeInfo_36_36 = (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]);
      succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_36_36, FMapTypeArity_20, ((MR_Box) (TypeName_21)), &conv1_FMapArity_22);
      if (succeeded)
      {
        FMapArity_22 = ((MR_Word) (conv1_FMapArity_22));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        TypeCtorInfo_37_37 = (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0);
        Var_50 = (MR_Integer) 0;
        mercury__list__length_acc_3_p_0(TypeCtorInfo_37_37, ArgTypeDescs_18, Var_50, &Arity_23);
        TypeInfo_39_39 = (MR_Word) (&mercury__pretty_printer_scalar_common_3[1]);
        succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_39_39, FMapArity_22, Arity_23, &conv2_Formatter_24);
        if (succeeded)
        {
          Formatter_24 = ((MR_Word) (conv2_Formatter_24));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MR_Word Doc0_25;
      MR_Box MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box);
      MR_Box conv4_Doc0_25;

      if (((MR_tag((MR_Word) STATE_VARIABLE_Limit_0_29)) == (MR_Integer) 0))
      {
        MR_Integer N_52 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Limit_0_29, (MR_Integer) 0))));
        MR_Integer Var_53 = (MR_Integer) ((MR_Unsigned) N_52 - (MR_Unsigned) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Limit_30 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_53));
        }
      }
      else
      {
        MR_Integer N_55 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_Limit_0_29, (MR_Integer) 0))));
        MR_Integer Var_56 = (MR_Integer) ((MR_Unsigned) N_55 - (MR_Unsigned) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Limit_30 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_56));
        }
      }
      func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Formatter_24, (MR_Integer) 1))));
      conv4_Doc0_25 = func_3(((MR_Box) (Formatter_24)), ((MR_Box) (Univ_11)), ((MR_Box) (ArgTypeDescs_18)));
      Doc0_25 = ((MR_Word) (conv4_Doc0_25));
      if (((MR_tag((MR_Word) *STATE_VARIABLE_Limit_30)) == (MR_Integer) 0))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Docs_13 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Doc0_25));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailDocs_12));
        }
      else
      {
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;

        {
          Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_68, 0) = ((MR_Box) (*STATE_VARIABLE_Limit_30));
        }
        {
          Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Var_67, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) (TailDocs_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Docs_13 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Doc0_25));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_66));
        }
      }
    }
    else
    {
      MR_String Name_26;
      MR_Word Args_28;
      MR_Integer _Arity_27;

      mercury__deconstruct__deconstruct_5_p_2(TypeInfo_33_33, Value_16, Canonicalize_9, &Name_26, &_Arity_27, &Args_28);
      mercury__pretty_printer__expand_format_term_7_p_0(Name_26, Args_28, TailDocs_12, Docs_13, STATE_VARIABLE_Limit_0_29, STATE_VARIABLE_Limit_30, CurrentPri_15);
    }
  }
}

static void MR_CALL 
mercury__pretty_printer__expand_format_term_7_p_0(
  MR_String Name_8,
  MR_Word Args_9,
  MR_Word TailDocs_10,
  MR_Word * Docs_11,
  MR_Word STATE_VARIABLE_Limit_0_17,
  MR_Word * STATE_VARIABLE_Limit_18,
  MR_Word CurrentPri_13)
{
  MR_bool succeeded = (Args_9 == (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
    MR_Word HeadDoc0_14;
    MR_String Var_19;

    Var_19 = mercury__term_io__quoted_atom_agt_2_f_0(Name_8, (MR_Integer) 1);
    {
      HeadDoc0_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadDoc0_14, 0) = ((MR_Box) (Var_19));
    }
    if (((MR_tag((MR_Word) STATE_VARIABLE_Limit_0_17)) == (MR_Integer) 0))
    {
      MR_Integer N_69 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Limit_0_17, (MR_Integer) 0))));
      MR_Integer Var_70 = (MR_Integer) ((MR_Unsigned) N_69 - (MR_Unsigned) 1);

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Limit_18 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_70));
      }
    }
    else
    {
      MR_Integer N_72 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_Limit_0_17, (MR_Integer) 0))));
      MR_Integer Var_73 = (MR_Integer) ((MR_Unsigned) N_72 - (MR_Unsigned) 1);

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Limit_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_73));
      }
    }
    if (((MR_tag((MR_Word) *STATE_VARIABLE_Limit_18)) == (MR_Integer) 0))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Docs_11 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailDocs_10));
      }
    else
    {
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;

      {
        Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_85, 0) = ((MR_Box) (*STATE_VARIABLE_Limit_18));
      }
      {
        Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Var_84, 1) = ((MR_Box) (Var_85));
      }
      {
        Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
        MR_hl_field(1, Var_83, 1) = ((MR_Box) (TailDocs_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Docs_11 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_83));
      }
    }
  }
  else
  {
    if (((MR_tag((MR_Word) STATE_VARIABLE_Limit_0_17)) == (MR_Integer) 0))
    {
      MR_Integer N_86 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Limit_0_17, (MR_Integer) 0))));

      succeeded = (N_86 <= (MR_Integer) 0);
    }
    else
    {
      MR_Integer N_88 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_Limit_0_17, (MR_Integer) 0))));

      succeeded = (N_88 <= (MR_Integer) 0);
    }
    if (succeeded)
    {
      MR_Word HeadDoc0_67 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[13]));

      if (((MR_tag((MR_Word) STATE_VARIABLE_Limit_0_17)) == (MR_Integer) 0))
      {
        MR_Integer N_91 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Limit_0_17, (MR_Integer) 0))));
        MR_Integer Var_92 = (MR_Integer) ((MR_Unsigned) N_91 - (MR_Unsigned) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Limit_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_92));
        }
      }
      else
      {
        MR_Integer N_94 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_Limit_0_17, (MR_Integer) 0))));
        MR_Integer Var_95 = (MR_Integer) ((MR_Unsigned) N_94 - (MR_Unsigned) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Limit_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_95));
        }
      }
      if (((MR_tag((MR_Word) *STATE_VARIABLE_Limit_18)) == (MR_Integer) 0))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Docs_11 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_67));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailDocs_10));
        }
      else
      {
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_107;

        {
          Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_107, 0) = ((MR_Box) (*STATE_VARIABLE_Limit_18));
        }
        {
          Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Var_106, 1) = ((MR_Box) (Var_107));
        }
        {
          Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
          MR_hl_field(1, Var_105, 1) = ((MR_Box) (TailDocs_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Docs_11 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadDoc0_67));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_105));
        }
      }
    }
    else
    {
      MR_Word OpDocs_15;

      succeeded = mercury__pretty_printer__expand_format_op_4_p_0(Name_8, Args_9, CurrentPri_13, &OpDocs_15);
      if (succeeded)
      {
        if (((MR_tag((MR_Word) STATE_VARIABLE_Limit_0_17)) == (MR_Integer) 0))
        {
          MR_Integer N_108 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Limit_0_17, (MR_Integer) 0))));
          MR_Integer Var_109 = (MR_Integer) ((MR_Unsigned) N_108 - (MR_Unsigned) 1);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Limit_18 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_109));
          }
        }
        else
        {
          MR_Integer N_111 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_Limit_0_17, (MR_Integer) 0))));
          MR_Integer Var_112 = (MR_Integer) ((MR_Unsigned) N_111 - (MR_Unsigned) 1);

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Limit_18 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_112));
          }
        }
        mercury__pretty_printer__set_func_limit_in_docs_4_p_0(*STATE_VARIABLE_Limit_18, OpDocs_15, TailDocs_10, Docs_11);
      }
      else
      {
        MR_Word HeadDocs0_16;

        succeeded = (strcmp(Name_8, (MR_String) "{}") == 0);
        if (succeeded)
        {
          MR_Word Var_25;
          MR_Word Var_28;
          MR_Word Var_29;

          {
            Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_29, 1) = ((MR_Box) (Args_9));
            MR_hl_field(3, Var_29, 2) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[5])));
          }
          {
            Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
            MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[16])));
          }
          {
            Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[5])));
            MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
          }
          {
            HeadDocs0_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadDocs0_16, 0) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[8])));
            MR_hl_field(1, HeadDocs0_16, 1) = ((MR_Box) (Var_25));
          }
        }
        else
        {
          MR_Word Var_41;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_String Var_45;
          MR_Word Var_46;
          MR_Word Var_49;
          MR_Word Var_52;
          MR_Word Var_53;

          Var_45 = mercury__term_io__quoted_atom_agt_2_f_0(Name_8, (MR_Integer) 1);
          {
            Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
          }
          {
            Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_53, 1) = ((MR_Box) (Args_9));
            MR_hl_field(3, Var_53, 2) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[5])));
          }
          {
            Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
            MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[18])));
          }
          {
            Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[5])));
            MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
          }
          {
            Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[10])));
            MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
          }
          {
            Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
            MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
          }
          {
            Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_43));
          }
          {
            HeadDocs0_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadDocs0_16, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[8])));
            MR_hl_field(1, HeadDocs0_16, 1) = ((MR_Box) (Var_41));
          }
        }
        if (((MR_tag((MR_Word) STATE_VARIABLE_Limit_0_17)) == (MR_Integer) 0))
        {
          MR_Integer N_115 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Limit_0_17, (MR_Integer) 0))));
          MR_Integer Var_116 = (MR_Integer) ((MR_Unsigned) N_115 - (MR_Unsigned) 1);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Limit_18 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_116));
          }
        }
        else
        {
          MR_Integer N_118 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_Limit_0_17, (MR_Integer) 0))));
          MR_Integer Var_119 = (MR_Integer) ((MR_Unsigned) N_118 - (MR_Unsigned) 1);

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Limit_18 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_119));
          }
        }
        mercury__pretty_printer__set_func_limit_in_docs_4_p_0(*STATE_VARIABLE_Limit_18, HeadDocs0_16, TailDocs_10, Docs_11);
      }
    }
  }
}

static void MR_CALL 
mercury__pretty_printer__set_func_limit_in_docs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word TailDocs_3,
  MR_Word * HeadVar__4_4)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    mercury__list__append_3_p_1((MR_Word) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0), HeadVar__2_2, TailDocs_3, HeadVar__4_4);
  else
  {
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_15, 0) = ((MR_Box) (HeadVar__1_1));
    }
    {
      Var_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_14, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_14, 1) = ((MR_Box) (Var_15));
    }
    {
      Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(1, Var_13, 1) = ((MR_Box) (TailDocs_3));
    }
    mercury__list__append_3_p_1((MR_Word) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0), HeadVar__2_2, Var_13, HeadVar__4_4);
  }
}

static MR_bool MR_CALL 
mercury__pretty_printer__expand_format_op_4_p_0(
  MR_String Op_5,
  MR_Word Args_6,
  MR_Word EnclosingPriority_7,
  MR_Word * Docs_8)
{
  MR_bool succeeded = (Args_6 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word OpPriority_13;
  MR_Word Docs0_15;
  MR_Word Var_154;
  MR_Word Var_155;

  if (succeeded)
  {
    Var_155 = ((MR_Word) ((MR_hl_field(1, Args_6, (MR_Integer) 0))));
    Var_154 = ((MR_Word) ((MR_hl_field(1, Args_6, (MR_Integer) 1))));
    if ((Var_154 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OpInfos_10;
      MR_Word Pri_11;
      MR_Word GtOrGeA_12;
      MR_Word Var_20;

      succeeded = mercury__ops__mercury_op_table_2_p_0(Op_5, &OpInfos_10);
      if (succeeded)
      {
        Var_20 = ((MR_Word) ((MR_hl_field(0, OpInfos_10, (MR_Integer) 2))));
        succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Pri_11 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));
          GtOrGeA_12 = ((MR_Unsigned) ((MR_hl_field(1, Var_20, (MR_Integer) 1))) & (MR_Integer) 1);
          {
            MR_Word PriorityArgA_14;
            MR_Word Var_23;
            MR_Word Var_24;
            MR_Word Var_25;
            MR_Word Var_26;
            MR_Word Var_27;
            MR_Word Var_28;
            MR_Word Var_29;

            OpPriority_13 = Pri_11;
            switch (GtOrGeA_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                PriorityArgA_14 = OpPriority_13;
                break;
              case (MR_Integer) 0:
                PriorityArgA_14 = mercury__ops__increment_priority_1_f_0(OpPriority_13);
                break;
            }
            {
              Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_24, 0) = ((MR_Box) (Op_5));
            }
            {
              Var_27 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_27, 0) = ((MR_Box) (PriorityArgA_14));
            }
            {
              Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Var_26, 1) = ((MR_Box) (Var_27));
            }
            {
              Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_29, 1) = ((MR_Box) (Var_155));
            }
            {
              Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
              MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[10])));
            }
            {
              Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
              MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
            }
            {
              Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
              MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_25));
            }
            {
              Docs0_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Docs0_15, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[8])));
              MR_hl_field(1, Docs0_15, 1) = ((MR_Box) (Var_23));
            }
            succeeded = MR_TRUE;
          }
        }
        else
        {
          MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, OpInfos_10, (MR_Integer) 3))));
          MR_Word Var_35;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word PriorityArgA_124;
          MR_Word GtOrGeA_126;

          succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OpPriority_13 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 0))));
            GtOrGeA_126 = ((MR_Unsigned) ((MR_hl_field(1, Var_34, (MR_Integer) 1))) & (MR_Integer) 1);
            switch (GtOrGeA_126) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                PriorityArgA_124 = OpPriority_13;
                break;
              case (MR_Integer) 0:
                PriorityArgA_124 = mercury__ops__increment_priority_1_f_0(OpPriority_13);
                break;
            }
            Var_35 = (MR_Word) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[8]));
            Var_44 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[10]));
            {
              Var_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_39, 0) = ((MR_Box) (PriorityArgA_124));
            }
            {
              Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Var_38, 1) = ((MR_Box) (Var_39));
            }
            {
              Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_41, 1) = ((MR_Box) (Var_155));
            }
            {
              Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_43, 0) = ((MR_Box) (Op_5));
            }
            {
              Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
              MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_44));
            }
            {
              Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
              MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
            }
            {
              Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
              MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
            }
            {
              Docs0_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Docs0_15, 0) = ((MR_Box) (Var_35));
              MR_hl_field(1, Docs0_15, 1) = ((MR_Box) (Var_37));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    else
    {
      MR_Word ArgB_16 = ((MR_Word) ((MR_hl_field(1, Var_154, (MR_Integer) 0))));
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(1, Var_154, (MR_Integer) 1))));
      MR_Word OpInfos_140;
      MR_Word GtOrGeB_17;
      MR_Word Pri_136;
      MR_Word GtOrGeA_137;
      MR_Word Var_50;

      succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = mercury__ops__mercury_op_table_2_p_0(Op_5, &OpInfos_140);
        if (succeeded)
        {
          Var_50 = ((MR_Word) ((MR_hl_field(0, OpInfos_140, (MR_Integer) 0))));
          succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Pri_136 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 0))));
            GtOrGeA_137 = ((((MR_Unsigned) ((MR_hl_field(1, Var_50, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            GtOrGeB_17 = ((MR_Unsigned) ((MR_hl_field(1, Var_50, (MR_Integer) 1))) & (MR_Integer) 1);
            {
              MR_Word PriorityArgB_18;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word Var_69;
              MR_Word Var_72;
              MR_Word Var_74;
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word PriorityArgA_128;

              OpPriority_13 = Pri_136;
              switch (GtOrGeA_137) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  PriorityArgA_128 = OpPriority_13;
                  break;
                case (MR_Integer) 0:
                  PriorityArgA_128 = mercury__ops__increment_priority_1_f_0(OpPriority_13);
                  break;
              }
              switch (GtOrGeB_17) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  PriorityArgB_18 = OpPriority_13;
                  break;
                case (MR_Integer) 0:
                  PriorityArgB_18 = mercury__ops__increment_priority_1_f_0(OpPriority_13);
                  break;
              }
              {
                Var_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_55, 0) = ((MR_Box) (PriorityArgA_128));
              }
              {
                Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, Var_54, 1) = ((MR_Box) (Var_55));
              }
              {
                Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_57, 1) = ((MR_Box) (Var_155));
              }
              succeeded = (strcmp(Op_5, (MR_String) ".") == 0);
              if (succeeded)
                {
                  Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_59, 0) = ((MR_Box) (Op_5));
                }
              else
              {
                MR_Word Var_60;
                MR_Word Var_63;
                MR_Word Var_64;

                {
                  Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_64, 0) = ((MR_Box) (Op_5));
                }
                {
                  Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
                  MR_hl_field(1, Var_63, 1) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[19])));
                }
                {
                  Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[12])));
                  MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
                }
                {
                  Var_59 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_59, 0) = ((MR_Box) (Var_60));
                }
              }
              {
                Var_76 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_76, 0) = ((MR_Box) (PriorityArgB_18));
              }
              {
                Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, Var_75, 1) = ((MR_Box) (Var_76));
              }
              {
                Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_78, 1) = ((MR_Box) (ArgB_16));
              }
              {
                Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
                MR_hl_field(1, Var_77, 1) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[20])));
              }
              {
                Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
                MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
              }
              {
                Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_74));
              }
              {
                Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_69, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[5])));
                MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_72));
              }
              {
                Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
                MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_69));
              }
              {
                Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
                MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_58));
              }
              {
                Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
                MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
              }
              {
                Docs0_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Docs0_15, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[8])));
                MR_hl_field(1, Docs0_15, 1) = ((MR_Box) (Var_53));
              }
              succeeded = MR_TRUE;
            }
          }
          else
          {
            MR_Word Var_86 = ((MR_Word) ((MR_hl_field(0, OpInfos_140, (MR_Integer) 1))));
            MR_Word Var_87;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_91;
            MR_Word Var_92;
            MR_Word Var_94;
            MR_Word Var_95;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_99;
            MR_Word Var_102;
            MR_Word Var_103;
            MR_Word Var_105;
            MR_Word Var_106;
            MR_Word Var_107;
            MR_Word Var_108;
            MR_Word Var_109;
            MR_Word Var_110;
            MR_Word PriorityArgA_129;
            MR_Word PriorityArgB_130;
            MR_Word GtOrGeA_132;
            MR_Word GtOrGeB_134;

            succeeded = (Var_86 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              OpPriority_13 = ((MR_Word) ((MR_hl_field(1, Var_86, (MR_Integer) 0))));
              GtOrGeA_132 = ((((MR_Unsigned) ((MR_hl_field(1, Var_86, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              GtOrGeB_134 = ((MR_Unsigned) ((MR_hl_field(1, Var_86, (MR_Integer) 1))) & (MR_Integer) 1);
              switch (GtOrGeA_132) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  PriorityArgA_129 = OpPriority_13;
                  break;
                case (MR_Integer) 0:
                  PriorityArgA_129 = mercury__ops__increment_priority_1_f_0(OpPriority_13);
                  break;
              }
              switch (GtOrGeB_134) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  PriorityArgB_130 = OpPriority_13;
                  break;
                case (MR_Integer) 0:
                  PriorityArgB_130 = mercury__ops__increment_priority_1_f_0(OpPriority_13);
                  break;
              }
              Var_87 = (MR_Word) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[8]));
              Var_92 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[12]));
              Var_103 = (MR_Word) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[5]));
              Var_110 = (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[20]));
              {
                Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_90, 0) = ((MR_Box) (Op_5));
              }
              {
                Var_96 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_96, 0) = ((MR_Box) (PriorityArgA_129));
              }
              {
                Var_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, Var_95, 1) = ((MR_Box) (Var_96));
              }
              {
                Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_98, 1) = ((MR_Box) (Var_155));
              }
              {
                Var_107 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_107, 0) = ((MR_Box) (PriorityArgB_130));
              }
              {
                Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, Var_106, 1) = ((MR_Box) (Var_107));
              }
              {
                Var_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_109, 1) = ((MR_Box) (ArgB_16));
              }
              {
                Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_108, 0) = ((MR_Box) (Var_109));
                MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_110));
              }
              {
                Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
                MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_108));
              }
              {
                Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
                MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_105));
              }
              {
                Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_92));
                MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_102));
              }
              {
                Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
                MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_99));
              }
              {
                Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
                MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_97));
              }
              {
                Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
                MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_94));
              }
              {
                Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
                MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_91));
              }
              {
                Docs0_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Docs0_15, 0) = ((MR_Box) (Var_87));
                MR_hl_field(1, Docs0_15, 1) = ((MR_Box) (Var_89));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    if (succeeded)
    {
      succeeded = mercury__ops__priority_lt_2_p_0(OpPriority_13, EnclosingPriority_7);
      if (succeeded)
      {
        MR_Word Var_117;

        {
          Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_117, 0) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_5[10])));
          MR_hl_field(1, Var_117, 1) = ((MR_Box) (Docs0_15));
        }
        *Docs_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0), Var_117, (MR_Word) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[21])));
      }
      else
        *Docs_8 = Docs0_15;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__pretty_printer__initial_formatter_map_0_f_0(void)
{
  MR_Word STATE_VARIABLE_Formatters_3;
  MR_Word STATE_VARIABLE_Formatters_9_9;
  MR_Word STATE_VARIABLE_Formatters_14_14;
  MR_Word STATE_VARIABLE_Formatters_19_19;
  MR_Word STATE_VARIABLE_Formatters_24_24;
  MR_Word STATE_VARIABLE_Formatters_29_29;
  MR_Word STATE_VARIABLE_Formatters_34_34;
  MR_Word STATE_VARIABLE_Formatters_39_39;
  MR_Word STATE_VARIABLE_Formatters_44_44;
  MR_Word STATE_VARIABLE_Formatters_49_49;
  MR_Word STATE_VARIABLE_Formatters_54_54;
  MR_Word STATE_VARIABLE_Formatters_59_59;
  MR_Word STATE_VARIABLE_Formatters_64_64;
  MR_Word STATE_VARIABLE_Formatters_69_69;
  MR_Word STATE_VARIABLE_Formatters_74_74;
  MR_Word STATE_VARIABLE_Formatters_79_79;
  MR_Word STATE_VARIABLE_Formatters_84_84;
  MR_Word STATE_VARIABLE_Formatters_89_89;

  mercury__pretty_printer__set_formatter__ho29_6_p_0((MR_String) "builtin", (MR_String) "character", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Formatters_9_9);
  mercury__pretty_printer__set_formatter__ho28_6_p_0((MR_String) "builtin", (MR_String) "float", (MR_Integer) 0, STATE_VARIABLE_Formatters_9_9, &STATE_VARIABLE_Formatters_14_14);
  mercury__pretty_printer__set_formatter__ho27_6_p_0((MR_String) "builtin", (MR_String) "int", (MR_Integer) 0, STATE_VARIABLE_Formatters_14_14, &STATE_VARIABLE_Formatters_19_19);
  mercury__pretty_printer__set_formatter__ho26_6_p_0((MR_String) "builtin", (MR_String) "int8", (MR_Integer) 0, STATE_VARIABLE_Formatters_19_19, &STATE_VARIABLE_Formatters_24_24);
  mercury__pretty_printer__set_formatter__ho25_6_p_0((MR_String) "builtin", (MR_String) "int16", (MR_Integer) 0, STATE_VARIABLE_Formatters_24_24, &STATE_VARIABLE_Formatters_29_29);
  mercury__pretty_printer__set_formatter__ho24_6_p_0((MR_String) "builtin", (MR_String) "int32", (MR_Integer) 0, STATE_VARIABLE_Formatters_29_29, &STATE_VARIABLE_Formatters_34_34);
  mercury__pretty_printer__set_formatter__ho23_6_p_0((MR_String) "builtin", (MR_String) "int64", (MR_Integer) 0, STATE_VARIABLE_Formatters_34_34, &STATE_VARIABLE_Formatters_39_39);
  mercury__pretty_printer__set_formatter__ho22_6_p_0((MR_String) "builtin", (MR_String) "uint", (MR_Integer) 0, STATE_VARIABLE_Formatters_39_39, &STATE_VARIABLE_Formatters_44_44);
  mercury__pretty_printer__set_formatter__ho21_6_p_0((MR_String) "builtin", (MR_String) "uint8", (MR_Integer) 0, STATE_VARIABLE_Formatters_44_44, &STATE_VARIABLE_Formatters_49_49);
  mercury__pretty_printer__set_formatter__ho20_6_p_0((MR_String) "builtin", (MR_String) "uint16", (MR_Integer) 0, STATE_VARIABLE_Formatters_49_49, &STATE_VARIABLE_Formatters_54_54);
  mercury__pretty_printer__set_formatter__ho19_6_p_0((MR_String) "builtin", (MR_String) "int32", (MR_Integer) 0, STATE_VARIABLE_Formatters_54_54, &STATE_VARIABLE_Formatters_59_59);
  mercury__pretty_printer__set_formatter__ho18_6_p_0((MR_String) "builtin", (MR_String) "uint64", (MR_Integer) 0, STATE_VARIABLE_Formatters_59_59, &STATE_VARIABLE_Formatters_64_64);
  mercury__pretty_printer__set_formatter__ho17_6_p_0((MR_String) "builtin", (MR_String) "string", (MR_Integer) 0, STATE_VARIABLE_Formatters_64_64, &STATE_VARIABLE_Formatters_69_69);
  mercury__pretty_printer__set_formatter__ho16_6_p_0((MR_String) "array", (MR_String) "array", (MR_Integer) 1, STATE_VARIABLE_Formatters_69_69, &STATE_VARIABLE_Formatters_74_74);
  mercury__pretty_printer__set_formatter__ho15_6_p_0((MR_String) "list", (MR_String) "list", (MR_Integer) 1, STATE_VARIABLE_Formatters_74_74, &STATE_VARIABLE_Formatters_79_79);
  mercury__pretty_printer__set_formatter__ho14_6_p_0((MR_String) "one_or_more", (MR_String) "one_or_more", (MR_Integer) 1, STATE_VARIABLE_Formatters_79_79, &STATE_VARIABLE_Formatters_84_84);
  mercury__pretty_printer__set_formatter__ho13_6_p_0((MR_String) "tree234", (MR_String) "tree234", (MR_Integer) 2, STATE_VARIABLE_Formatters_84_84, &STATE_VARIABLE_Formatters_89_89);
  mercury__pretty_printer__set_formatter__ho12_6_p_0((MR_String) "version_array", (MR_String) "version_array", (MR_Integer) 1, STATE_VARIABLE_Formatters_89_89, &STATE_VARIABLE_Formatters_3);
  return STATE_VARIABLE_Formatters_3;
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho29_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_char_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho29_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  MR_bool succeeded;
  MR_Word FMapTypeArity0_12;
  MR_Box conv1_FMapTypeArity0_12;

  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
  if (succeeded)
  {
    FMapTypeArity0_12 = ((MR_Word) (conv1_FMapTypeArity0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word FMapTypeArity_15;
    MR_Word FMapArity0_13;
    MR_Box conv2_FMapArity0_13;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
    if (succeeded)
    {
      FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FMapArity_14;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_3[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_1[22])), FMapArity0_13, &FMapArity_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    else
    {
      MR_Word FMapArity_20;

      {
        FMapArity_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FMapArity_20, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(1, FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[22]));
        MR_hl_field(1, FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
  else
  {
    MR_Word FMapArity_21;
    MR_Word FMapTypeArity_22;

    {
      FMapArity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapArity_21, 0) = ((MR_Box) (Arity_9));
      MR_hl_field(1, FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[22]));
      MR_hl_field(1, FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FMapTypeArity_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
      MR_hl_field(1, FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
      MR_hl_field(1, FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho28_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_float_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho28_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  MR_bool succeeded;
  MR_Word FMapTypeArity0_12;
  MR_Box conv1_FMapTypeArity0_12;

  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
  if (succeeded)
  {
    FMapTypeArity0_12 = ((MR_Word) (conv1_FMapTypeArity0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word FMapTypeArity_15;
    MR_Word FMapArity0_13;
    MR_Box conv2_FMapArity0_13;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
    if (succeeded)
    {
      FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FMapArity_14;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_3[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_1[21])), FMapArity0_13, &FMapArity_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    else
    {
      MR_Word FMapArity_20;

      {
        FMapArity_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FMapArity_20, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(1, FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[21]));
        MR_hl_field(1, FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
  else
  {
    MR_Word FMapArity_21;
    MR_Word FMapTypeArity_22;

    {
      FMapArity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapArity_21, 0) = ((MR_Box) (Arity_9));
      MR_hl_field(1, FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[21]));
      MR_hl_field(1, FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FMapTypeArity_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
      MR_hl_field(1, FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
      MR_hl_field(1, FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho27_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_int_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho27_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  MR_bool succeeded;
  MR_Word FMapTypeArity0_12;
  MR_Box conv1_FMapTypeArity0_12;

  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
  if (succeeded)
  {
    FMapTypeArity0_12 = ((MR_Word) (conv1_FMapTypeArity0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word FMapTypeArity_15;
    MR_Word FMapArity0_13;
    MR_Box conv2_FMapArity0_13;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
    if (succeeded)
    {
      FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FMapArity_14;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_3[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_1[20])), FMapArity0_13, &FMapArity_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    else
    {
      MR_Word FMapArity_20;

      {
        FMapArity_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FMapArity_20, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(1, FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[20]));
        MR_hl_field(1, FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
  else
  {
    MR_Word FMapArity_21;
    MR_Word FMapTypeArity_22;

    {
      FMapArity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapArity_21, 0) = ((MR_Box) (Arity_9));
      MR_hl_field(1, FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[20]));
      MR_hl_field(1, FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FMapTypeArity_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
      MR_hl_field(1, FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
      MR_hl_field(1, FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho26_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_int8_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho26_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  MR_bool succeeded;
  MR_Word FMapTypeArity0_12;
  MR_Box conv1_FMapTypeArity0_12;

  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
  if (succeeded)
  {
    FMapTypeArity0_12 = ((MR_Word) (conv1_FMapTypeArity0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word FMapTypeArity_15;
    MR_Word FMapArity0_13;
    MR_Box conv2_FMapArity0_13;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
    if (succeeded)
    {
      FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FMapArity_14;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_3[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_1[19])), FMapArity0_13, &FMapArity_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    else
    {
      MR_Word FMapArity_20;

      {
        FMapArity_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FMapArity_20, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(1, FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[19]));
        MR_hl_field(1, FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
  else
  {
    MR_Word FMapArity_21;
    MR_Word FMapTypeArity_22;

    {
      FMapArity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapArity_21, 0) = ((MR_Box) (Arity_9));
      MR_hl_field(1, FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[19]));
      MR_hl_field(1, FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FMapTypeArity_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
      MR_hl_field(1, FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
      MR_hl_field(1, FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho25_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_int16_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho25_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  MR_bool succeeded;
  MR_Word FMapTypeArity0_12;
  MR_Box conv1_FMapTypeArity0_12;

  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
  if (succeeded)
  {
    FMapTypeArity0_12 = ((MR_Word) (conv1_FMapTypeArity0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word FMapTypeArity_15;
    MR_Word FMapArity0_13;
    MR_Box conv2_FMapArity0_13;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
    if (succeeded)
    {
      FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FMapArity_14;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_3[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_1[18])), FMapArity0_13, &FMapArity_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    else
    {
      MR_Word FMapArity_20;

      {
        FMapArity_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FMapArity_20, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(1, FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[18]));
        MR_hl_field(1, FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
  else
  {
    MR_Word FMapArity_21;
    MR_Word FMapTypeArity_22;

    {
      FMapArity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapArity_21, 0) = ((MR_Box) (Arity_9));
      MR_hl_field(1, FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[18]));
      MR_hl_field(1, FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FMapTypeArity_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
      MR_hl_field(1, FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
      MR_hl_field(1, FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho24_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_int32_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho24_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  MR_bool succeeded;
  MR_Word FMapTypeArity0_12;
  MR_Box conv1_FMapTypeArity0_12;

  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
  if (succeeded)
  {
    FMapTypeArity0_12 = ((MR_Word) (conv1_FMapTypeArity0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word FMapTypeArity_15;
    MR_Word FMapArity0_13;
    MR_Box conv2_FMapArity0_13;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
    if (succeeded)
    {
      FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FMapArity_14;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_3[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_1[17])), FMapArity0_13, &FMapArity_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    else
    {
      MR_Word FMapArity_20;

      {
        FMapArity_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FMapArity_20, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(1, FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[17]));
        MR_hl_field(1, FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
  else
  {
    MR_Word FMapArity_21;
    MR_Word FMapTypeArity_22;

    {
      FMapArity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapArity_21, 0) = ((MR_Box) (Arity_9));
      MR_hl_field(1, FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[17]));
      MR_hl_field(1, FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FMapTypeArity_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
      MR_hl_field(1, FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
      MR_hl_field(1, FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho23_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_int64_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho23_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  MR_bool succeeded;
  MR_Word FMapTypeArity0_12;
  MR_Box conv1_FMapTypeArity0_12;

  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
  if (succeeded)
  {
    FMapTypeArity0_12 = ((MR_Word) (conv1_FMapTypeArity0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word FMapTypeArity_15;
    MR_Word FMapArity0_13;
    MR_Box conv2_FMapArity0_13;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
    if (succeeded)
    {
      FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FMapArity_14;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_3[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_1[16])), FMapArity0_13, &FMapArity_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    else
    {
      MR_Word FMapArity_20;

      {
        FMapArity_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FMapArity_20, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(1, FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[16]));
        MR_hl_field(1, FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
  else
  {
    MR_Word FMapArity_21;
    MR_Word FMapTypeArity_22;

    {
      FMapArity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapArity_21, 0) = ((MR_Box) (Arity_9));
      MR_hl_field(1, FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[16]));
      MR_hl_field(1, FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FMapTypeArity_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
      MR_hl_field(1, FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
      MR_hl_field(1, FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho22_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_uint_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho22_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  MR_bool succeeded;
  MR_Word FMapTypeArity0_12;
  MR_Box conv1_FMapTypeArity0_12;

  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
  if (succeeded)
  {
    FMapTypeArity0_12 = ((MR_Word) (conv1_FMapTypeArity0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word FMapTypeArity_15;
    MR_Word FMapArity0_13;
    MR_Box conv2_FMapArity0_13;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
    if (succeeded)
    {
      FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FMapArity_14;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_3[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_1[15])), FMapArity0_13, &FMapArity_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    else
    {
      MR_Word FMapArity_20;

      {
        FMapArity_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FMapArity_20, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(1, FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[15]));
        MR_hl_field(1, FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
  else
  {
    MR_Word FMapArity_21;
    MR_Word FMapTypeArity_22;

    {
      FMapArity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapArity_21, 0) = ((MR_Box) (Arity_9));
      MR_hl_field(1, FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[15]));
      MR_hl_field(1, FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FMapTypeArity_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
      MR_hl_field(1, FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
      MR_hl_field(1, FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho21_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_uint8_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho21_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  MR_bool succeeded;
  MR_Word FMapTypeArity0_12;
  MR_Box conv1_FMapTypeArity0_12;

  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
  if (succeeded)
  {
    FMapTypeArity0_12 = ((MR_Word) (conv1_FMapTypeArity0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word FMapTypeArity_15;
    MR_Word FMapArity0_13;
    MR_Box conv2_FMapArity0_13;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
    if (succeeded)
    {
      FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FMapArity_14;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_3[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_1[14])), FMapArity0_13, &FMapArity_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    else
    {
      MR_Word FMapArity_20;

      {
        FMapArity_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FMapArity_20, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(1, FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[14]));
        MR_hl_field(1, FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
  else
  {
    MR_Word FMapArity_21;
    MR_Word FMapTypeArity_22;

    {
      FMapArity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapArity_21, 0) = ((MR_Box) (Arity_9));
      MR_hl_field(1, FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[14]));
      MR_hl_field(1, FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FMapTypeArity_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
      MR_hl_field(1, FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
      MR_hl_field(1, FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho20_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_uint16_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho20_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  MR_bool succeeded;
  MR_Word FMapTypeArity0_12;
  MR_Box conv1_FMapTypeArity0_12;

  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
  if (succeeded)
  {
    FMapTypeArity0_12 = ((MR_Word) (conv1_FMapTypeArity0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word FMapTypeArity_15;
    MR_Word FMapArity0_13;
    MR_Box conv2_FMapArity0_13;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
    if (succeeded)
    {
      FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FMapArity_14;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_3[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_1[13])), FMapArity0_13, &FMapArity_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    else
    {
      MR_Word FMapArity_20;

      {
        FMapArity_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FMapArity_20, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(1, FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[13]));
        MR_hl_field(1, FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
  else
  {
    MR_Word FMapArity_21;
    MR_Word FMapTypeArity_22;

    {
      FMapArity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapArity_21, 0) = ((MR_Box) (Arity_9));
      MR_hl_field(1, FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[13]));
      MR_hl_field(1, FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FMapTypeArity_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
      MR_hl_field(1, FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
      MR_hl_field(1, FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho19_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_uint32_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho19_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  MR_bool succeeded;
  MR_Word FMapTypeArity0_12;
  MR_Box conv1_FMapTypeArity0_12;

  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
  if (succeeded)
  {
    FMapTypeArity0_12 = ((MR_Word) (conv1_FMapTypeArity0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word FMapTypeArity_15;
    MR_Word FMapArity0_13;
    MR_Box conv2_FMapArity0_13;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
    if (succeeded)
    {
      FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FMapArity_14;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_3[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_1[12])), FMapArity0_13, &FMapArity_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    else
    {
      MR_Word FMapArity_20;

      {
        FMapArity_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FMapArity_20, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(1, FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[12]));
        MR_hl_field(1, FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
  else
  {
    MR_Word FMapArity_21;
    MR_Word FMapTypeArity_22;

    {
      FMapArity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapArity_21, 0) = ((MR_Box) (Arity_9));
      MR_hl_field(1, FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[12]));
      MR_hl_field(1, FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FMapTypeArity_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
      MR_hl_field(1, FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
      MR_hl_field(1, FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho18_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_uint64_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho18_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  MR_bool succeeded;
  MR_Word FMapTypeArity0_12;
  MR_Box conv1_FMapTypeArity0_12;

  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
  if (succeeded)
  {
    FMapTypeArity0_12 = ((MR_Word) (conv1_FMapTypeArity0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word FMapTypeArity_15;
    MR_Word FMapArity0_13;
    MR_Box conv2_FMapArity0_13;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
    if (succeeded)
    {
      FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FMapArity_14;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_3[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_1[11])), FMapArity0_13, &FMapArity_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    else
    {
      MR_Word FMapArity_20;

      {
        FMapArity_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FMapArity_20, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(1, FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[11]));
        MR_hl_field(1, FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
  else
  {
    MR_Word FMapArity_21;
    MR_Word FMapTypeArity_22;

    {
      FMapArity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapArity_21, 0) = ((MR_Box) (Arity_9));
      MR_hl_field(1, FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[11]));
      MR_hl_field(1, FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FMapTypeArity_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
      MR_hl_field(1, FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
      MR_hl_field(1, FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho17_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_string_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho17_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  MR_bool succeeded;
  MR_Word FMapTypeArity0_12;
  MR_Box conv1_FMapTypeArity0_12;

  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
  if (succeeded)
  {
    FMapTypeArity0_12 = ((MR_Word) (conv1_FMapTypeArity0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word FMapTypeArity_15;
    MR_Word FMapArity0_13;
    MR_Box conv2_FMapArity0_13;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
    if (succeeded)
    {
      FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FMapArity_14;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_3[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_1[10])), FMapArity0_13, &FMapArity_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    else
    {
      MR_Word FMapArity_20;

      {
        FMapArity_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FMapArity_20, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(1, FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[10]));
        MR_hl_field(1, FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
  else
  {
    MR_Word FMapArity_21;
    MR_Word FMapTypeArity_22;

    {
      FMapArity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapArity_21, 0) = ((MR_Box) (Arity_9));
      MR_hl_field(1, FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[10]));
      MR_hl_field(1, FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FMapTypeArity_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
      MR_hl_field(1, FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
      MR_hl_field(1, FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho16_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_array_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho16_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  MR_bool succeeded;
  MR_Word FMapTypeArity0_12;
  MR_Box conv1_FMapTypeArity0_12;

  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
  if (succeeded)
  {
    FMapTypeArity0_12 = ((MR_Word) (conv1_FMapTypeArity0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word FMapTypeArity_15;
    MR_Word FMapArity0_13;
    MR_Box conv2_FMapArity0_13;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
    if (succeeded)
    {
      FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FMapArity_14;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_3[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_1[9])), FMapArity0_13, &FMapArity_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    else
    {
      MR_Word FMapArity_20;

      {
        FMapArity_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FMapArity_20, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(1, FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[9]));
        MR_hl_field(1, FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
  else
  {
    MR_Word FMapArity_21;
    MR_Word FMapTypeArity_22;

    {
      FMapArity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapArity_21, 0) = ((MR_Box) (Arity_9));
      MR_hl_field(1, FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[9]));
      MR_hl_field(1, FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FMapTypeArity_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
      MR_hl_field(1, FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
      MR_hl_field(1, FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho15_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_list_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho15_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  MR_bool succeeded;
  MR_Word FMapTypeArity0_12;
  MR_Box conv1_FMapTypeArity0_12;

  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
  if (succeeded)
  {
    FMapTypeArity0_12 = ((MR_Word) (conv1_FMapTypeArity0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word FMapTypeArity_15;
    MR_Word FMapArity0_13;
    MR_Box conv2_FMapArity0_13;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
    if (succeeded)
    {
      FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FMapArity_14;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_3[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_1[8])), FMapArity0_13, &FMapArity_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    else
    {
      MR_Word FMapArity_20;

      {
        FMapArity_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FMapArity_20, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(1, FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[8]));
        MR_hl_field(1, FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
  else
  {
    MR_Word FMapArity_21;
    MR_Word FMapTypeArity_22;

    {
      FMapArity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapArity_21, 0) = ((MR_Box) (Arity_9));
      MR_hl_field(1, FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[8]));
      MR_hl_field(1, FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FMapTypeArity_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
      MR_hl_field(1, FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
      MR_hl_field(1, FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho14_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_one_or_more_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho14_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  MR_bool succeeded;
  MR_Word FMapTypeArity0_12;
  MR_Box conv1_FMapTypeArity0_12;

  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
  if (succeeded)
  {
    FMapTypeArity0_12 = ((MR_Word) (conv1_FMapTypeArity0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word FMapTypeArity_15;
    MR_Word FMapArity0_13;
    MR_Box conv2_FMapArity0_13;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
    if (succeeded)
    {
      FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FMapArity_14;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_3[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_1[7])), FMapArity0_13, &FMapArity_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    else
    {
      MR_Word FMapArity_20;

      {
        FMapArity_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FMapArity_20, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(1, FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[7]));
        MR_hl_field(1, FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
  else
  {
    MR_Word FMapArity_21;
    MR_Word FMapTypeArity_22;

    {
      FMapArity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapArity_21, 0) = ((MR_Box) (Arity_9));
      MR_hl_field(1, FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[7]));
      MR_hl_field(1, FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FMapTypeArity_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
      MR_hl_field(1, FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
      MR_hl_field(1, FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho13_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_tree234_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho13_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  MR_bool succeeded;
  MR_Word FMapTypeArity0_12;
  MR_Box conv1_FMapTypeArity0_12;

  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
  if (succeeded)
  {
    FMapTypeArity0_12 = ((MR_Word) (conv1_FMapTypeArity0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word FMapTypeArity_15;
    MR_Word FMapArity0_13;
    MR_Box conv2_FMapArity0_13;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
    if (succeeded)
    {
      FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FMapArity_14;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_3[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_1[6])), FMapArity0_13, &FMapArity_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    else
    {
      MR_Word FMapArity_20;

      {
        FMapArity_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FMapArity_20, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(1, FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[6]));
        MR_hl_field(1, FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
  else
  {
    MR_Word FMapArity_21;
    MR_Word FMapTypeArity_22;

    {
      FMapArity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapArity_21, 0) = ((MR_Box) (Arity_9));
      MR_hl_field(1, FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[6]));
      MR_hl_field(1, FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FMapTypeArity_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
      MR_hl_field(1, FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
      MR_hl_field(1, FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho12_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_version_array_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho12_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  MR_bool succeeded;
  MR_Word FMapTypeArity0_12;
  MR_Box conv1_FMapTypeArity0_12;

  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
  if (succeeded)
  {
    FMapTypeArity0_12 = ((MR_Word) (conv1_FMapTypeArity0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word FMapTypeArity_15;
    MR_Word FMapArity0_13;
    MR_Box conv2_FMapArity0_13;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
    if (succeeded)
    {
      FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FMapArity_14;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_3[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_1[5])), FMapArity0_13, &FMapArity_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    else
    {
      MR_Word FMapArity_20;

      {
        FMapArity_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FMapArity_20, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(1, FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[5]));
        MR_hl_field(1, FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
  else
  {
    MR_Word FMapArity_21;
    MR_Word FMapTypeArity_22;

    {
      FMapArity_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapArity_21, 0) = ((MR_Box) (Arity_9));
      MR_hl_field(1, FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_1[5]));
      MR_hl_field(1, FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FMapTypeArity_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
      MR_hl_field(1, FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
      MR_hl_field(1, FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
  }
}

MR_Word MR_CALL 
mercury__pretty_printer__format_arg_1_f_0(
  MR_Word Doc_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_7, 0) = ((MR_Box) (Doc_3));
    MR_hl_field(1, Var_7, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_4, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[23])));
    MR_hl_field(1, Var_4, 1) = ((MR_Box) (Var_7));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pretty_printer__format_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_5, X_3, &Var_4);
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pretty_printer__group_1_f_0(
  MR_Word Docs_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_7;
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_8, 0) = ((MR_Box) (Docs_3));
  }
  {
    Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_7, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, Var_7, 1) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[10])));
  }
  {
    Var_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_4, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[8])));
    MR_hl_field(1, Var_4, 1) = ((MR_Box) (Var_7));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pretty_printer__indent_1_f_0(
  MR_Word Docs_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_7;
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_8, 0) = ((MR_Box) (Docs_3));
  }
  {
    Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_7, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, Var_7, 1) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[7])));
  }
  {
    Var_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_4, 0) = ((MR_Box) (MR_mkword(3, &mercury__pretty_printer_scalar_common_4[5])));
    MR_hl_field(1, Var_4, 1) = ((MR_Box) (Var_7));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pretty_printer__indent_2_f_0(
  MR_String Indent_4,
  MR_Word Docs_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Word Var_10;

  {
    Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_8, 0) = ((MR_Box) (Indent_4));
  }
  {
    Var_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_7, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_7, 1) = ((MR_Box) (Var_8));
  }
  {
    Var_10 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_10, 0) = ((MR_Box) (Docs_5));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (Var_10));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (MR_mkword(1, &mercury__pretty_printer_scalar_common_4[4])));
  }
  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (Var_7));
    MR_hl_field(1, Var_6, 1) = ((MR_Box) (Var_9));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__3_3, 0) = ((MR_Box) (Var_6));
  }
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____doc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__pretty_printer____Unify____doc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__pretty_printer____Compare____doc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__pretty_printer____Compare____doc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____docs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__pretty_printer____Unify____docs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__pretty_printer____Compare____docs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__pretty_printer____Compare____docs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__pretty_printer____Unify____formatter_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__pretty_printer____Compare____formatter_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__pretty_printer____Compare____formatter_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__pretty_printer____Unify____formatter_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__pretty_printer____Compare____formatter_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__pretty_printer____Compare____formatter_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_map_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__pretty_printer____Unify____formatter_map_entry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__pretty_printer____Compare____formatter_map_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__pretty_printer____Compare____formatter_map_entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____func_symbol_limit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__pretty_printer____Unify____func_symbol_limit_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__pretty_printer____Compare____func_symbol_limit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__pretty_printer____Compare____func_symbol_limit_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____indent_stack_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__pretty_printer____Unify____indent_stack_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__pretty_printer____Compare____indent_stack_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__pretty_printer____Compare____indent_stack_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____key_value_pair_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__pretty_printer____Unify____key_value_pair_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__pretty_printer____Compare____key_value_pair_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__pretty_printer____Compare____key_value_pair_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____open_groups_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__pretty_printer____Unify____open_groups_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__pretty_printer____Compare____open_groups_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__pretty_printer____Compare____open_groups_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_internal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__pretty_printer____Unify____pp_internal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__pretty_printer____Compare____pp_internal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__pretty_printer____Compare____pp_internal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__pretty_printer____Unify____pp_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__pretty_printer____Compare____pp_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__pretty_printer____Compare____pp_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__pretty_printer__init(void)
{
}

void mercury__pretty_printer__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0);
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_docs_0);
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_formatter_0);
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_formatter_map_0);
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_formatter_map_entry_0);
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_func_symbol_limit_0);
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_indent_stack_0);
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_key_value_pair_2);
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_open_groups_0);
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_pp_internal_0);
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_pp_params_0);
}

void mercury__pretty_printer__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__pretty_printer__required_init(void)
{
	mercury__pretty_printer__user_init_pred_247_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__pretty_printer__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module pretty_printer.
