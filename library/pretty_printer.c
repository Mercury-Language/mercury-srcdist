/*
** Automatically generated from `pretty_printer.m'
** by the Mercury compiler,
** version rotd-2020-07-29
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
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
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
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mercury__pretty_printer__list__pti_list_1__plain_type_desc__type_ctor_info_type_desc_0;

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

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_indent_stack_0_1[2];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_1;

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_indent_stack_0_0[1];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_indent_stack_0_1[1];

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_indent_stack_0[2];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_indent_stack_0[2];

static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_indent_stack_0[2];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_0;

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_1;

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_2[1];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_2;

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_3;

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_4[1];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_4;

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_5[1];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_5;

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_0[3];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_1[1];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_2[1];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_3[1];

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_internal_0[4];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_pp_internal_0[6];

static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_pp_internal_0[6];

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_params_0_0[3];

static const MR_ConstString mercury__pretty_printer__pretty_printer__field_names_pp_params_0_0[3];

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_params_0_0;

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_params_0_0[1];

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_params_0[1];

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_pp_params_0[1];

static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_pp_params_0[1];

static MR_Integer MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__pretty_printer__pre_initialise_mutable_io_pp_params_0_p_0(void);

static void MR_CALL 
mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0(void);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_tree234_2_f_0(
  MR_Word Univ_4,
  MR_Word ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_list_2_f_0(
  MR_Word Univ_4,
  MR_Word ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_version_array_2_f_0(
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
mercury__pretty_printer__fmt_uint_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_95_95_91_50_93_95_48_2_f_0(
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

static void MR_CALL 
mercury__pretty_printer__expand_docs_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word STATE_VARIABLE_Limit_0_6,
  MR_Word * STATE_VARIABLE_Limit_7,
  MR_Integer STATE_VARIABLE_Pri_0_8,
  MR_Integer * STATE_VARIABLE_Pri_9,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_10,
  MR_Integer * STATE_VARIABLE_RemainingWidth_11);

static void MR_CALL 
mercury__pretty_printer__expand_pp_7_p_0(
  MR_Word Canonicalize_8,
  MR_Word FMap_9,
  MR_Word Univ_10,
  MR_Word * Doc_11,
  MR_Word STATE_VARIABLE_Limit_0_25,
  MR_Word * STATE_VARIABLE_Limit_26,
  MR_Integer CurrentPri_13);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho9_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho9_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho8_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho8_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho7_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho7_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho6_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho6_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho5_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho5_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho4_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho4_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho3_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho3_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho2_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho1_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17);

static void MR_CALL 
mercury__pretty_printer__expand_docs_11_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word STATE_VARIABLE_Limit_0_6,
  MR_Word * STATE_VARIABLE_Limit_7,
  MR_Integer STATE_VARIABLE_Pri_0_8,
  MR_Integer * STATE_VARIABLE_Pri_9,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_10,
  MR_Integer * STATE_VARIABLE_RemainingWidth_11);

static void MR_CALL 
mercury__pretty_printer__expand_format_susp_4_p_0(
  MR_Word Susp_5,
  MR_Word * Doc_6,
  MR_Word STATE_VARIABLE_Limit_0_9,
  MR_Word * STATE_VARIABLE_Limit_10);

static void MR_CALL 
mercury__pretty_printer__expand_format_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Limit_0_4,
  MR_Word * STATE_VARIABLE_Limit_5);

static void MR_CALL 
mercury__pretty_printer__expand_pp_7_p_1(
  MR_Word Canonicalize_8,
  MR_Word FMap_9,
  MR_Word Univ_10,
  MR_Word * Doc_11,
  MR_Word STATE_VARIABLE_Limit_0_25,
  MR_Word * STATE_VARIABLE_Limit_26,
  MR_Integer CurrentPri_13);

static void MR_CALL 
mercury__pretty_printer__expand_format_term_6_p_0(
  MR_String Name_7,
  MR_Word Args_8,
  MR_Word * Doc_9,
  MR_Word STATE_VARIABLE_Limit_0_14,
  MR_Word * STATE_VARIABLE_Limit_15,
  MR_Integer CurrentPri_11);

static void MR_CALL 
mercury__pretty_printer__decrement_limit_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
mercury__pretty_printer__set_func_symbol_limit_correctly_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Doc_3);

static MR_bool MR_CALL 
mercury__pretty_printer__expand_format_op_4_p_0(
  MR_String Op_1,
  MR_Word HeadVar__2_2,
  MR_Integer CurrentPri_3,
  MR_Word * Docs_4);

static MR_Integer MR_CALL 
mercury__pretty_printer__adjust_priority_2_f_0(
  MR_Integer Priority_4,
  MR_Word Assoc_5);

static MR_Word MR_CALL 
mercury__pretty_printer__add_parens_if_needed_3_f_0(
  MR_Integer OpPriority_5,
  MR_Integer EnclosingPriority_6,
  MR_Word Doc_7);

static void MR_CALL 
mercury__pretty_printer__output_current_group_12_p_0(
  MR_Word TypeClassInfo_for_writer_71,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_7,
  MR_Integer * STATE_VARIABLE_RemainingWidth_8,
  MR_Integer STATE_VARIABLE_RemainingLines_0_9,
  MR_Integer * STATE_VARIABLE_RemainingLines_10,
  MR_Box STATE_VARIABLE_IO_0_11,
  MR_Box * STATE_VARIABLE_IO_12);

static void MR_CALL 
mercury__pretty_printer__format_nl_8_p_0(
  MR_Word TypeClassInfo_for_writer_24,
  MR_Box Stream_9,
  MR_Integer LineWidth_10,
  MR_Word Indents_11,
  MR_Integer * RemainingWidth_12,
  MR_Integer STATE_VARIABLE_RemainingLines_0_15,
  MR_Integer * STATE_VARIABLE_RemainingLines_16,
  MR_Box STATE_VARIABLE_IO_0_17,
  MR_Box * STATE_VARIABLE_IO_18);

static void MR_CALL 
mercury__pretty_printer__output_indentation_6_p_0(
  MR_Word TypeClassInfo_for_writer_28,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_3,
  MR_Integer * STATE_VARIABLE_RemainingWidth_4,
  MR_Box STATE_VARIABLE_IO_0_5,
  MR_Box * STATE_VARIABLE_IO_6);

static MR_Integer MR_CALL 
mercury__pretty_printer__count_indent_codepoints_1_f_0(
  MR_Word HeadVar__1_1);

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


static /* final */ const MR_Box mercury__pretty_printer_scalar_common_1[13][2];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_2[14][3];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_4[3][5];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_5[19][1];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_6[1][6];




static /* final */ const MR_Box mercury__pretty_printer_scalar_common_1[13][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[0])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_2[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_4[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_2[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_2[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho1_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho2_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho3_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho4_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho5_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho6_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho7_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho8_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho9_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 78)),
    ((MR_Box) ((MR_Integer) 100)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[18])))
  },
};

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_4[3][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_func_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_1[1])),
    ((MR_Box) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_5[19][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "  "))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "("))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) " "))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "..."))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "{"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) ", "))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "}"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "\?char\?"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "\?float\?"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "\?int\?"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "\?uint\?"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "\?string\?"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "\?array\?"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "\?version_array\?"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "\?list\?"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "\?tree234\?"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Integer) 100))
  },
};

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__pretty_printer__list__pti_list_1__plain_type_desc__type_ctor_info_type_desc_0)),
    ((MR_Box) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0))
  },
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
#include "math.mh"
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
#line 1218 "pretty_printer.m"
MR_Word mercury__pretty_printer__mutable_variable_io_pp_params;
#ifdef MR_THREAD_SAFE
    MercuryLock mercury__pretty_printer__mutable_variable_io_pp_params_lock;
#endif

#line 970 "pretty_printer.m"

    MR_Bool ML_pretty_printer_is_initialised = MR_NO;
    MR_Word ML_pretty_printer_default_formatter_map = 0;


#line 1218 "pretty_printer.m"
void 
mercury__pretty_printer__user_init_pred_0(void)
#line 1218 "pretty_printer.m"
{
#line 1218 "pretty_printer.m"
	mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct1 mercury__pretty_printer__list__pti_list_1__plain_type_desc__type_ctor_info_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0)
  }
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

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
  {
    (MR_TypeInfo) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0)
  }
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__pretty_printer__list__ti_list_1pretty_printer__type_ctor_info_doc_0)
};

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

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0)
};

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
  {
    (MR_TypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0)
  }
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
  {
    (MR_TypeInfo) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0)
  }
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_7[1] = {
  (MR_PseudoTypeInfo) (&mercury__pretty_printer____vti_func_1pretty_printer__type_ctor_info_doc_0)
};

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

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_8[1] = {
  (MR_PseudoTypeInfo) (&mercury__pretty_printer__pretty_printer__type_ctor_info_pp_internal_0)
};

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

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_1[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_0
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_2[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_3
};

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
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(5),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_3,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____doc_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____doc_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "doc",
  {     mercury__pretty_printer__pretty_printer__du_name_ordered_doc_0 },
  {     mercury__pretty_printer__pretty_printer__du_ptag_ordered_doc_0 },
  (MR_Integer) 9,
  UINT16_C(4),
  mercury__pretty_printer__pretty_printer__functor_number_map_doc_0
};

const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_docs_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pretty_printer____Unify____docs_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____docs_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "docs",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__pretty_printer__list__ti_list_1pretty_printer__type_ctor_info_doc_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1type_desc__type_ctor_info_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0)
  }
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pretty_printer____Unify____formatter_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____formatter_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "formatter",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__pretty_printer____vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pretty_printer____Unify____formatter_map_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____formatter_map_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "formatter_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_func_symbol_limit_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_func_symbol_limit_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_func_symbol_limit_0_0[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_func_symbol_limit_0_0
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_func_symbol_limit_0_1[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_func_symbol_limit_0_1
};

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_func_symbol_limit_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_func_symbol_limit_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_func_symbol_limit_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____func_symbol_limit_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____func_symbol_limit_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "func_symbol_limit",
  {     mercury__pretty_printer__pretty_printer__du_name_ordered_func_symbol_limit_0 },
  {     mercury__pretty_printer__pretty_printer__du_ptag_ordered_func_symbol_limit_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__pretty_printer__pretty_printer__functor_number_map_func_symbol_limit_0
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

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_indent_stack_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__pretty_printer__pretty_printer__type_ctor_info_indent_stack_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_1 = {
  (MR_String) "indent_nonempty",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__pretty_printer__pretty_printer__field_types_indent_stack_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_indent_stack_0_0[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_0
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_indent_stack_0_1[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_1
};

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_indent_stack_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_indent_stack_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_indent_stack_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_indent_stack_0[2] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_0,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_1
};

static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_indent_stack_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_indent_stack_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____indent_stack_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____indent_stack_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "indent_stack",
  {     mercury__pretty_printer__pretty_printer__du_name_ordered_indent_stack_0 },
  {     mercury__pretty_printer__pretty_printer__du_ptag_ordered_indent_stack_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__pretty_printer__pretty_printer__functor_number_map_indent_stack_0
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

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_2 = {
  (MR_String) "indent",
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
  (MR_String) "outdent",
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

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_4 = {
  (MR_String) "set_op_priority",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(4),
  mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_5[1] = {
  (MR_PseudoTypeInfo) (&mercury__pretty_printer__pretty_printer__type_ctor_info_func_symbol_limit_0)
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_5 = {
  (MR_String) "set_limit",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(5),
  mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_0[3] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_0,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_1,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_3
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_1[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_2
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_2[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_4
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_3[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_5
};

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_internal_0[4] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_pp_internal_0[6] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_1,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_2,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_0,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_3,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_5,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_4
};

static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_pp_internal_0[6] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_pp_internal_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____pp_internal_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____pp_internal_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "pp_internal",
  {     mercury__pretty_printer__pretty_printer__du_name_ordered_pp_internal_0 },
  {     mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_internal_0 },
  (MR_Integer) 6,
  UINT16_C(4),
  mercury__pretty_printer__pretty_printer__functor_number_map_pp_internal_0
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

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_params_0_0[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_params_0_0
};

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_params_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_pp_params_0[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_params_0_0
};

static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_pp_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_pp_params_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____pp_params_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____pp_params_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "pp_params",
  {     mercury__pretty_printer__pretty_printer__du_name_ordered_pp_params_0 },
  {     mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_params_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__pretty_printer__pretty_printer__functor_number_map_pp_params_0
};

static MR_Integer MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

void MR_CALL 
mercury__pretty_printer____Compare____pp_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
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
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

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
}

void MR_CALL 
mercury__pretty_printer____Compare____indent_stack_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_String Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_String ArgY2_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_10;

        mercury__pretty_printer____Compare____indent_stack_0_0(&SubResult1_10, Var_18, ArgY1_9);
        succeeded = (SubResult1_10 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
        {
          MR_Integer V_7_22;

{
#define MR_PROC_LABEL mercury__pretty_printer____Compare____indent_stack_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_17 ;
	S2 = ArgY2_12 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_22  = Res;
}
          succeeded = (V_7_22 < (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (V_7_22 == (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 0;
            else
              *HeadVar__1_1 = (MR_Integer) 2;
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____indent_stack_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = mercury__pretty_printer____Unify____indent_stack_0_0(ArgX1_5, ArgY1_6);
        if (succeeded)
          succeeded = (strcmp(ArgX2_7, ArgY2_8) == 0);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__pretty_printer____Compare____formatter_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
mercury__pretty_printer____Compare____formatter_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_4[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
mercury__pretty_printer____Compare____docs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____docs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
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
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
            MR_String Var_187 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer V_7_196;

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
	 V_7_196  = Res;
}
                  succeeded = (V_7_196 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_196 == (MR_Integer) 0);
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
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
            MR_Word Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_179)), ((MR_Box) (ArgY1_45)));
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ArgY1_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

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
                MR_Word Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_91;

                          mercury__builtin__compare_3_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), &SubResult1_91, ((MR_Box) (Var_181)), ((MR_Box) (ArgY1_90)));
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
                MR_Word Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_String Var_184 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_String ArgY1_122 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_123;
                          MR_Integer V_7_191;

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
	 V_7_191  = Res;
}
                          succeeded = (V_7_191 < (MR_Integer) 0);
                          if (succeeded)
                            SubResult1_123 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (V_7_191 == (MR_Integer) 0);
                            if (succeeded)
                              SubResult1_123 = (MR_Integer) 0;
                            else
                              SubResult1_123 = (MR_Integer) 2;
                          }
                          succeeded = (SubResult1_123 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_123;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_183)), ((MR_Box) (ArgY2_125)));
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
                MR_Word Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                          MR_Word ArgY1_147 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

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
                MR_Word Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                          MR_Word ArgY1_167 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

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
  {
    MR_bool succeeded;
    MR_Integer CastX_40 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_41 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_40 == CastY_41);
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
            MR_String Var_45 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgY1_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer V_7_51;

{
#define MR_PROC_LABEL mercury__pretty_printer____Compare____pp_internal_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_45 ;
	S2 = ArgY1_13 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_51  = Res;
}
                  succeeded = (V_7_51 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_51 == (MR_Integer) 0);
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
            MR_Integer Var_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ArgY1_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  succeeded = (Var_47 < ArgY1_28);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_47 == ArgY1_28);
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
            MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__pretty_printer____Compare____func_symbol_limit_0_0(HeadVar__1_1, Var_46, ArgY1_39);
                }
                break;
            }
          }
          break;
      }
  }
}

void MR_CALL 
mercury__pretty_printer____Compare____func_symbol_limit_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
      MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

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
      MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Integer ArgY1_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

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
            MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_27_27;
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_27_27 = (MR_Word) (&mercury__pretty_printer_scalar_common_1[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = mercury__univ____Unify____univ_0_0(ArgX1_11, ArgY1_12);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_28_28;
                MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_14;
                MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_16;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_HeadVar__2_2;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  TypeInfo_28_28 = (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]);
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
                MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_18;
                MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_20;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_18 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
                  if (succeeded)
                  {
                    TypeInfo_29_29 = (MR_Word) (&mercury__pretty_printer_scalar_common_1[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX2_19)), ((MR_Box) (ArgY2_20)));
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_22;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_21), (MR_Word) (ArgY1_22));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ArgX1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_24;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
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
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
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
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_11 == ArgY1_12);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = mercury__pretty_printer____Unify____func_symbol_limit_0_0(ArgX1_13, ArgY1_14);
            }
          }
          break;
      }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____func_symbol_limit_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (ArgX1_3 == ArgY1_4);
      }
    }
    else
    {
      MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__pretty_printer__unlock_io_pp_params_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__pretty_printer__unlock_io_pp_params_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__pretty_printer__lock_io_pp_params_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__pretty_printer__lock_io_pp_params_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__pretty_printer__unsafe_set_io_pp_params_1_p_0(
  MR_Word X_1)
{
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
}

void MR_CALL 
mercury__pretty_printer__unsafe_get_io_pp_params_1_p_0(
  MR_Word * X_1)
{
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
}

static void MR_CALL 
mercury__pretty_printer__pre_initialise_mutable_io_pp_params_0_p_0(void)
{
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
}

static void MR_CALL 
mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0(void)
{
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
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0

	MR_Word X;

	X = (MR_Word) (&mercury__pretty_printer_scalar_common_2[13]) ;
		{
mercury__pretty_printer__mutable_variable_io_pp_params = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__pretty_printer__set_io_pp_params_3_p_0(
  MR_Word X_4)
{
  {
{
#define MR_PROC_LABEL mercury__pretty_printer__set_io_pp_params_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
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
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__pretty_printer__get_io_pp_params_3_p_0(
  MR_Word * X_4)
{
  {
{
#define MR_PROC_LABEL mercury__pretty_printer__get_io_pp_params_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
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
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_tree234_2_f_0(
  MR_Word Univ_4,
  MR_Word ArgDescs_5)
{
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
      ArgDescA_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgDescs_5, (MR_Integer) 0))));
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgDescs_5, (MR_Integer) 1))));
      succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgDescB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0))));
        Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 1))));
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
          TypeInfo_22_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_4, (MR_Integer) 0))));
          Value_12 = (MR_hl_field(MR_mktag(0), Univ_4, (MR_Integer) 1));
          TypeCtorInfo_23_23 = (MR_Word) (&mercury__tree234__tree234__type_ctor_info_tree234_2);
          {
            TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_24_24, 0) = ((MR_Box) (TypeCtorInfo_23_23));
            MR_hl_field(MR_mktag(0), TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_20_20));
            MR_hl_field(MR_mktag(0), TypeInfo_24_24, 2) = ((MR_Box) (TypeInfo_21_21));
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
      HeadVar__3_3 = mercury__tree234__tree234_to_doc_1_f_0(TypeInfo_20_20, TypeInfo_21_21, X_13);
    else
      HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[17]));
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_list_2_f_0(
  MR_Word Univ_4,
  MR_Word ArgDescs_5)
{
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
      ArgDesc_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgDescs_5, (MR_Integer) 0))));
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgDescs_5, (MR_Integer) 1))));
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
        TypeInfo_16_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_4, (MR_Integer) 0))));
        Value_9 = (MR_hl_field(MR_mktag(0), Univ_4, (MR_Integer) 1));
        TypeCtorInfo_17_17 = (MR_Word) (&mercury__list__list__type_ctor_info_list_1);
        {
          TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (TypeCtorInfo_17_17));
          MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_15_15));
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
      HeadVar__3_3 = mercury__list__list_to_doc_1_f_0(TypeInfo_15_15, X_10);
    else
      HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[16]));
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_version_array_2_f_0(
  MR_Word Univ_4,
  MR_Word ArgDescs_5)
{
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
      ArgDesc_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgDescs_5, (MR_Integer) 0))));
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgDescs_5, (MR_Integer) 1))));
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
        TypeInfo_16_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_4, (MR_Integer) 0))));
        Value_9 = (MR_hl_field(MR_mktag(0), Univ_4, (MR_Integer) 1));
        TypeCtorInfo_17_17 = (MR_Word) (&mercury__version_array__version_array__type_ctor_info_version_array_1);
        {
          TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (TypeCtorInfo_17_17));
          MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_15_15));
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
      HeadVar__3_3 = mercury__version_array__version_array_to_doc_1_f_0(TypeInfo_15_15, X_10);
    else
      HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[15]));
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_array_2_f_0(
  MR_Word Univ_4,
  MR_Word ArgDescs_5)
{
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
      ArgDesc_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgDescs_5, (MR_Integer) 0))));
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgDescs_5, (MR_Integer) 1))));
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
        TypeInfo_16_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_4, (MR_Integer) 0))));
        Value_9 = (MR_hl_field(MR_mktag(0), Univ_4, (MR_Integer) 1));
        TypeCtorInfo_17_17 = (MR_Word) (&mercury__array__array__type_ctor_info_array_1);
        {
          TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (TypeCtorInfo_17_17));
          MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_15_15));
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
      HeadVar__3_3 = mercury__array__array_to_doc_1_f_0(TypeInfo_15_15, (MR_ArrayPtr) (X_10));
    else
      HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[14]));
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_string_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_f_0(Univ_4);
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4)
{
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
      MR_Word V_4_12;
      MR_Word V_5_13;
      MR_String V_6_15;

      V_6_15 = mercury__term_io__quoted_string_1_f_0(X_6);
      {
        V_5_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), V_5_13, 0) = ((MR_Box) (V_6_15));
      }
      {
        V_4_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), V_4_12, 0) = ((MR_Box) (V_5_13));
        MR_hl_field(MR_mktag(1), V_4_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (V_4_12));
      }
    }
    else
      HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[13]));
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_uint_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_95_95_91_50_93_95_48_2_f_0(Univ_4);
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4)
{
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
      MR_String V_4_12;

{
#define MR_PROC_LABEL mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_117_105_110_116_95_95_91_50_93_95_48_2_f_0

	MR_Unsigned U;
	MR_String Str;

	U = X_6 ;
		{

    char buffer[21];
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "u", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	 V_4_12  = Str;
}
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_4_12));
      }
    }
    else
      HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[12]));
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_int_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_f_0(Univ_4);
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4)
{
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
      MR_String V_4_12;

      mercury__string__int_to_base_string_3_p_0(X_6, (MR_Integer) 10, &V_4_12);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_4_12));
      }
    }
    else
      HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[11]));
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_float_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0(Univ_4);
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4)
{
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
      MR_String V_4_12;

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
	 V_4_12  = Str;
}
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_4_12));
      }
    }
    else
      HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[10]));
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_char_2_f_0(
  MR_Word Univ_4,
  MR_Word _ArgDescs_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_f_0(Univ_4);
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_f_0(
  MR_Word Univ_4)
{
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
      MR_String V_4_12;

      V_4_12 = mercury__term_io__quoted_char_1_f_0(X_6);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_4_12));
      }
    }
    else
      HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[9]));
    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__pretty_printer__unsafe_get_default_formatter_map_3_p_0(
  MR_Word * FMap_1)
{
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
}

void MR_CALL 
mercury__pretty_printer__pretty_printer_is_initialised_3_p_0(
  MR_Word * Okay_1)
{
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
}

void MR_CALL 
mercury__pretty_printer__set_default_params_3_p_0(
  MR_Word Params_4)
{
  {
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_params_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
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
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__pretty_printer__get_default_params_3_p_0(
  MR_Word * Params_4)
{
  {
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_params_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
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
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__pretty_printer__set_default_formatter_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer TypeArity_9,
  MR_Word Formatter_10)
{
  {
    MR_Word FMap0_12;
    MR_Word FMap_13;
    MR_Word Okay_22;

{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_6_p_0

	MR_Word Okay;

		{

    Okay = ML_pretty_printer_is_initialised;


		;}
#undef MR_PROC_LABEL
	 Okay_22  = Okay;
}
    switch (Okay_22) {
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
}

void MR_CALL 
mercury__pretty_printer__set_default_formatter_map_3_p_0(
  MR_Word FMap_1)
{
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
}

void MR_CALL 
mercury__pretty_printer__get_default_formatter_map_3_p_0(
  MR_Word * FMap_4)
{
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
  {
    MR_bool succeeded;
    MR_Word FMapTypeArity0_12;
    MR_Box conv0_FMapTypeArity0_12;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv0_FMapTypeArity0_12);
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

      succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv1_FMapArity0_13);
      if (succeeded)
      {
        FMapArity0_13 = ((MR_Word) (conv1_FMapArity0_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word FMapArity_14;

        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_4[1]), Arity_9, ((MR_Box) (Formatter_10)), FMapArity0_13, &FMapArity_14);
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
      }
      else
      {
        MR_Word FMapArity_20;

        {
          FMapArity_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FMapArity_20, 0) = ((MR_Box) (Arity_9));
          MR_hl_field(MR_mktag(1), FMapArity_20, 1) = ((MR_Box) (Formatter_10));
          MR_hl_field(MR_mktag(1), FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
      }
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
    }
    else
    {
      MR_Word FMapArity_21;
      MR_Word FMapTypeArity_22;

      {
        FMapArity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FMapArity_21, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(MR_mktag(1), FMapArity_21, 1) = ((MR_Box) (Formatter_10));
        MR_hl_field(MR_mktag(1), FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        FMapTypeArity_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
    }
  }
}

MR_Word MR_CALL 
mercury__pretty_printer__new_formatter_map_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
mercury__pretty_printer__put_doc_7_p_0(
  MR_Word TypeClassInfo_for_writer_31,
  MR_Box Stream_8,
  MR_Word Canonicalize_9,
  MR_Word FMap_10,
  MR_Word Params_11,
  MR_Word Doc_12,
  MR_Box STATE_VARIABLE_IO_0_25,
  MR_Box * STATE_VARIABLE_IO_26)
{
  {
    MR_Integer Pri_14;
    MR_Integer MaxLines_16;
    MR_Word Limit_17;
    MR_Integer RemainingWidth_18;
    MR_Word Var_28;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Pri_14;
    MR_Integer Var_20;
    MR_Word Var_21;
    MR_Integer Var_22;
    MR_Word Var_23;
    MR_Integer Var_24;

    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    conv1_Pri_14 = func_0(((MR_Box) ((MR_Word) (&mercury__pretty_printer_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Pri_14 = ((MR_Integer) (conv1_Pri_14));
    RemainingWidth_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_11, (MR_Integer) 0))));
    MaxLines_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_11, (MR_Integer) 1))));
    Limit_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_11, (MR_Integer) 2))));
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Doc_12));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__pretty_printer__do_put_doc_17_p_0(TypeClassInfo_for_writer_31, Stream_8, Canonicalize_9, FMap_10, RemainingWidth_18, Var_28, RemainingWidth_18, &Var_20, (MR_Word) ((MR_Unsigned) 0U), &Var_21, MaxLines_16, &Var_22, Limit_17, &Var_23, Pri_14, &Var_24, STATE_VARIABLE_IO_0_25, STATE_VARIABLE_IO_26);
  }
}

void MR_CALL 
mercury__pretty_printer__do_put_doc_17_p_0(
  MR_Word TypeClassInfo_for_writer_127,
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
  MR_Integer STATE_VARIABLE_Pri_0_14,
  MR_Integer * STATE_VARIABLE_Pri_15,
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
      MR_Word Doc_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Docs0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));

      succeeded = (STATE_VARIABLE_RemainingLines_0_10 <= (MR_Integer) 0);
      if (succeeded)
      {
        mercury__stream__put_4_p_0(TypeClassInfo_for_writer_127, HeadVar__1_1, ((MR_Box) ((MR_String) "...")), STATE_VARIABLE_IO_0_16, STATE_VARIABLE_IO_17);
        *STATE_VARIABLE_Pri_15 = STATE_VARIABLE_Pri_0_14;
        *STATE_VARIABLE_Limit_13 = STATE_VARIABLE_Limit_0_12;
        *STATE_VARIABLE_RemainingLines_11 = STATE_VARIABLE_RemainingLines_0_10;
        *STATE_VARIABLE_Indents_9 = STATE_VARIABLE_Indents_0_8;
        *STATE_VARIABLE_RemainingWidth_7 = STATE_VARIABLE_RemainingWidth_0_6;
      }
      else
      {
        MR_Word Docs_53;
        MR_Integer STATE_VARIABLE_Pri_91_91;
        MR_Word STATE_VARIABLE_Indents_101_101;
        MR_Word STATE_VARIABLE_Limit_105_105;
        MR_Integer STATE_VARIABLE_RemainingLines_111_111;
        MR_Box STATE_VARIABLE_IO_113_113;
        MR_Integer STATE_VARIABLE_RemainingWidth_114_114;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Integer next_value_of_STATE_VARIABLE_RemainingWidth_0_6;
        MR_Word next_value_of_STATE_VARIABLE_Indents_0_8;
        MR_Integer next_value_of_STATE_VARIABLE_RemainingLines_0_10;
        MR_Word next_value_of_STATE_VARIABLE_Limit_0_12;
        MR_Integer next_value_of_STATE_VARIABLE_Pri_0_14;
        MR_Box next_value_of_STATE_VARIABLE_IO_0_16;

        switch (MR_tag((MR_Word) Doc_44)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Doc_44)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer IndentWidth_54;
                  MR_Integer Var_109;

                  IndentWidth_54 = mercury__pretty_printer__count_indent_codepoints_1_f_0(STATE_VARIABLE_Indents_0_8);
                  Var_109 = (MR_Integer) ((MR_Unsigned) HeadVar__4_4 - (MR_Unsigned) IndentWidth_54);
                  succeeded = (STATE_VARIABLE_RemainingWidth_0_6 < Var_109);
                  if (succeeded)
                    mercury__pretty_printer__format_nl_8_p_0(TypeClassInfo_for_writer_127, HeadVar__1_1, HeadVar__4_4, STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_RemainingWidth_114_114, STATE_VARIABLE_RemainingLines_0_10, &STATE_VARIABLE_RemainingLines_111_111, STATE_VARIABLE_IO_0_16, &STATE_VARIABLE_IO_113_113);
                  else
                  {
                    STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
                    STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                    STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                  }
                  Docs_53 = Docs0_45;
                  STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_Limit_105_105 = STATE_VARIABLE_Limit_0_12;
                  STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__pretty_printer__format_nl_8_p_0(TypeClassInfo_for_writer_127, HeadVar__1_1, HeadVar__4_4, STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_RemainingWidth_114_114, STATE_VARIABLE_RemainingLines_0_10, &STATE_VARIABLE_RemainingLines_111_111, STATE_VARIABLE_IO_0_16, &STATE_VARIABLE_IO_113_113);
                  Docs_53 = Docs0_45;
                  STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_Limit_105_105 = STATE_VARIABLE_Limit_0_12;
                  STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String String_52 = ((MR_String) ((MR_hl_field(MR_mktag(1), Doc_44, (MR_Integer) 0))));
              MR_Integer Var_115;

              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_127, HeadVar__1_1, ((MR_Box) (String_52)), STATE_VARIABLE_IO_0_16, &STATE_VARIABLE_IO_113_113);
              Var_115 = mercury__string__count_codepoints_1_f_0(String_52);
              STATE_VARIABLE_RemainingWidth_114_114 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingWidth_0_6 - (MR_Unsigned) Var_115);
              Docs_53 = Docs0_45;
              STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
              STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
              STATE_VARIABLE_Limit_105_105 = STATE_VARIABLE_Limit_0_12;
              STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Docs1_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Doc_44, (MR_Integer) 0))));

              Docs_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0), Docs1_55, Docs0_45);
              STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
              STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
              STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
              STATE_VARIABLE_Limit_105_105 = STATE_VARIABLE_Limit_0_12;
              STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
              STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Doc_44, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Univ_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_44, (MR_Integer) 1))));
                  MR_Word Doc1_57;

                  mercury__pretty_printer__expand_pp_7_p_0(HeadVar__2_2, HeadVar__3_3, Univ_56, &Doc1_57, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_105_105, STATE_VARIABLE_Pri_0_14);
                  {
                    Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Docs_53, 0) = ((MR_Box) (Doc1_57));
                    MR_hl_field(MR_mktag(1), Docs_53, 1) = ((MR_Box) (Docs0_45));
                  }
                  STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
                  STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Univs_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_44, (MR_Integer) 1))));
                  MR_Word Sep_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_44, (MR_Integer) 2))));
                  MR_Word Doc1_122;

                  mercury__pretty_printer__expand_format_list_5_p_0(Univs_58, Sep_59, &Doc1_122, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_105_105);
                  {
                    Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Docs_53, 0) = ((MR_Box) (Doc1_122));
                    MR_hl_field(MR_mktag(1), Docs_53, 1) = ((MR_Box) (Docs0_45));
                  }
                  STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
                  STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Name_60 = ((MR_String) ((MR_hl_field(MR_mktag(3), Doc_44, (MR_Integer) 1))));
                  MR_Word Doc1_123;
                  MR_Word Univs_124 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_44, (MR_Integer) 2))));

                  mercury__pretty_printer__expand_format_term_6_p_0(Name_60, Univs_124, &Doc1_123, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_105_105, STATE_VARIABLE_Pri_0_14);
                  {
                    Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Docs_53, 0) = ((MR_Box) (Doc1_123));
                    MR_hl_field(MR_mktag(1), Docs_53, 1) = ((MR_Box) (Docs0_45));
                  }
                  STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
                  STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Susp_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_44, (MR_Integer) 1))));
                  MR_Word Doc1_125;

                  mercury__pretty_printer__expand_format_susp_4_p_0(Susp_61, &Doc1_125, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_105_105);
                  {
                    Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Docs_53, 0) = ((MR_Box) (Doc1_125));
                    MR_hl_field(MR_mktag(1), Docs_53, 1) = ((MR_Box) (Docs0_45));
                  }
                  STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
                  STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_44, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) Var_129)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(Var_129)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Integer RemainingWidthAfterGroup_66;
                            MR_Word Docs1_126;

                            mercury__pretty_printer__expand_docs_11_p_0(HeadVar__2_2, HeadVar__3_3, Docs0_45, &Docs1_126, (MR_Integer) 1, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_105_105, STATE_VARIABLE_Pri_0_14, &STATE_VARIABLE_Pri_91_91, STATE_VARIABLE_RemainingWidth_0_6, &RemainingWidthAfterGroup_66);
                            succeeded = (RemainingWidthAfterGroup_66 >= (MR_Integer) 0);
                            if (succeeded)
                              mercury__pretty_printer__output_current_group_12_p_0(TypeClassInfo_for_writer_127, HeadVar__1_1, HeadVar__4_4, STATE_VARIABLE_Indents_0_8, (MR_Integer) 1, Docs1_126, &Docs_53, STATE_VARIABLE_RemainingWidth_0_6, &STATE_VARIABLE_RemainingWidth_114_114, STATE_VARIABLE_RemainingLines_0_10, &STATE_VARIABLE_RemainingLines_111_111, STATE_VARIABLE_IO_0_16, &STATE_VARIABLE_IO_113_113);
                            else
                            {
                              Docs_53 = Docs1_126;
                              STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
                              STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                              STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                            }
                            STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            Docs_53 = Docs0_45;
                            STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                            STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
                            STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                            STATE_VARIABLE_Limit_105_105 = STATE_VARIABLE_Limit_0_12;
                            STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
                            STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            if ((STATE_VARIABLE_Indents_0_8 == (MR_Word) ((MR_Unsigned) 0U)))
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140pretty_printer.do_put_doc\'/17", (MR_String) "cannot pop empty indent stack");
                                return;
                              }
                            else
                              STATE_VARIABLE_Indents_101_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Indents_0_8, (MR_Integer) 0))));
                            Docs_53 = Docs0_45;
                            STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                            STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                            STATE_VARIABLE_Limit_105_105 = STATE_VARIABLE_Limit_0_12;
                            STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
                            STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String Indent_62 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_129, (MR_Integer) 0))));

                        {
                          STATE_VARIABLE_Indents_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Indents_101_101, 0) = ((MR_Box) (STATE_VARIABLE_Indents_0_8));
                          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Indents_101_101, 1) = ((MR_Box) (Indent_62));
                        }
                        Docs_53 = Docs0_45;
                        STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                        STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                        STATE_VARIABLE_Limit_105_105 = STATE_VARIABLE_Limit_0_12;
                        STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
                        STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_Pri_91_91 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_129, (MR_Integer) 0))));
                        Docs_53 = Docs0_45;
                        STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                        STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
                        STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                        STATE_VARIABLE_Limit_105_105 = STATE_VARIABLE_Limit_0_12;
                        STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_Limit_105_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_129, (MR_Integer) 0))));
                        Docs_53 = Docs0_45;
                        STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                        STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
                        STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                        STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
                        STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
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
        next_value_of_HeadVar__5_5 = Docs_53;
        next_value_of_STATE_VARIABLE_RemainingWidth_0_6 = STATE_VARIABLE_RemainingWidth_114_114;
        next_value_of_STATE_VARIABLE_Indents_0_8 = STATE_VARIABLE_Indents_101_101;
        next_value_of_STATE_VARIABLE_RemainingLines_0_10 = STATE_VARIABLE_RemainingLines_111_111;
        next_value_of_STATE_VARIABLE_Limit_0_12 = STATE_VARIABLE_Limit_105_105;
        next_value_of_STATE_VARIABLE_Pri_0_14 = STATE_VARIABLE_Pri_91_91;
        next_value_of_STATE_VARIABLE_IO_0_16 = STATE_VARIABLE_IO_113_113;
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
mercury__pretty_printer__expand_docs_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word STATE_VARIABLE_Limit_0_6,
  MR_Word * STATE_VARIABLE_Limit_7,
  MR_Integer STATE_VARIABLE_Pri_0_8,
  MR_Integer * STATE_VARIABLE_Pri_9,
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
      MR_Word Doc_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Docs0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));

      succeeded = (HeadVar__5_5 <= (MR_Integer) 0);
      if (succeeded)
      {
        if ((Doc_26 == (MR_Word) ((MR_Unsigned) 4U)))
          succeeded = MR_TRUE;
        else
        if ((Doc_26 == (MR_Word) ((MR_Unsigned) 0U)))
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
        switch (MR_tag((MR_Word) Doc_26)) {
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
                MR_Word Docs1_116;

                mercury__pretty_printer__expand_docs_11_p_0(HeadVar__1_1, HeadVar__2_2, Docs0_27, &Docs1_116, HeadVar__5_5, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Doc_26));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Docs1_116));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String String_33 = ((MR_String) ((MR_hl_field(MR_mktag(1), Doc_26, (MR_Integer) 0))));
              MR_Word Docs1_34;
              MR_Integer STATE_VARIABLE_RemainingWidth_111_111;
              MR_Integer Var_112;

              Var_112 = mercury__string__count_codepoints_1_f_0(String_33);
              STATE_VARIABLE_RemainingWidth_111_111 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingWidth_0_10 - (MR_Unsigned) Var_112);
              mercury__pretty_printer__expand_docs_11_p_0(HeadVar__1_1, HeadVar__2_2, Docs0_27, &Docs1_34, HeadVar__5_5, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_111_111, STATE_VARIABLE_RemainingWidth_11);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Doc_26));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Docs1_34));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_103;
              MR_Word Docs1_119 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Doc_26, (MR_Integer) 0))));
              MR_Word next_value_of_HeadVar__3_3;

              Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0), Docs1_119, Docs0_27);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__3_3 = Var_103;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Doc_26, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Univ_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_26, (MR_Integer) 1))));
                  MR_Word Doc1_36;
                  MR_Word STATE_VARIABLE_Limit_98_98;
                  MR_Word Var_99;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_pp_7_p_0(HeadVar__1_1, HeadVar__2_2, Univ_35, &Doc1_36, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_98_98, STATE_VARIABLE_Pri_0_8);
                  {
                    Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Doc1_36));
                    MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Docs0_27));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Var_99;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_98_98;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Univs_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_26, (MR_Integer) 1))));
                  MR_Word Sep_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_26, (MR_Integer) 2))));
                  MR_Word STATE_VARIABLE_Limit_93_93;
                  MR_Word Var_94;
                  MR_Word Doc1_120;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_list_5_p_0(Univs_37, Sep_38, &Doc1_120, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_93_93);
                  {
                    Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Doc1_120));
                    MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Docs0_27));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Var_94;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_93_93;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Name_39 = ((MR_String) ((MR_hl_field(MR_mktag(3), Doc_26, (MR_Integer) 1))));
                  MR_Word STATE_VARIABLE_Limit_88_88;
                  MR_Word Var_89;
                  MR_Word Doc1_121;
                  MR_Word Univs_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_26, (MR_Integer) 2))));
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_term_6_p_0(Name_39, Univs_122, &Doc1_121, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_88_88, STATE_VARIABLE_Pri_0_8);
                  {
                    Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Doc1_121));
                    MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Docs0_27));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Var_89;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_88_88;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Susp_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_26, (MR_Integer) 1))));
                  MR_Word STATE_VARIABLE_Limit_83_83;
                  MR_Word Var_84;
                  MR_Word Doc1_123;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_susp_4_p_0(Susp_40, &Doc1_123, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_83_83);
                  {
                    Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Doc1_123));
                    MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Docs0_27));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Var_84;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_83_83;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_26, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) Var_130)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(Var_130)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Integer OpenGroups1_42;
                            MR_Integer Var_70;
                            MR_Word Docs1_126;

                            succeeded = (HeadVar__5_5 > (MR_Integer) 0);
                            if (succeeded)
                              Var_70 = (MR_Integer) 1;
                            else
                              Var_70 = (MR_Integer) 0;
                            OpenGroups1_42 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) Var_70);
                            mercury__pretty_printer__expand_docs_11_p_0(HeadVar__1_1, HeadVar__2_2, Docs0_27, &Docs1_126, OpenGroups1_42, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Doc_26));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Docs1_126));
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Integer Var_64;
                            MR_Word Docs1_127;
                            MR_Integer OpenGroups1_128;

                            succeeded = (HeadVar__5_5 > (MR_Integer) 0);
                            if (succeeded)
                              Var_64 = (MR_Integer) 1;
                            else
                              Var_64 = (MR_Integer) 0;
                            OpenGroups1_128 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 - (MR_Unsigned) Var_64);
                            mercury__pretty_printer__expand_docs_11_p_0(HeadVar__1_1, HeadVar__2_2, Docs0_27, &Docs1_127, OpenGroups1_128, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Doc_26));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Docs1_127));
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word Docs1_125;

                            mercury__pretty_printer__expand_docs_11_p_0(HeadVar__1_1, HeadVar__2_2, Docs0_27, &Docs1_125, HeadVar__5_5, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Doc_26));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Docs1_125));
                            }
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Docs1_124;

                        mercury__pretty_printer__expand_docs_11_p_0(HeadVar__1_1, HeadVar__2_2, Docs0_27, &Docs1_124, HeadVar__5_5, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *HeadVar__4_4 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Doc_26));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Docs1_124));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Integer STATE_VARIABLE_Pri_54_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_130, (MR_Integer) 0))));
                        MR_Word next_value_of_HeadVar__3_3 = Docs0_27;
                        MR_Integer next_value_of_STATE_VARIABLE_Pri_0_8 = STATE_VARIABLE_Pri_54_54;

                        // direct tailcall eliminated
                        ;
                        HeadVar__3_3 = next_value_of_HeadVar__3_3;
                        STATE_VARIABLE_Pri_0_8 = next_value_of_STATE_VARIABLE_Pri_0_8;
                        continue;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word STATE_VARIABLE_Limit_59_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_130, (MR_Integer) 0))));
                        MR_Word next_value_of_HeadVar__3_3 = Docs0_27;
                        MR_Word next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_59_59;

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
mercury__pretty_printer__expand_pp_7_p_0(
  MR_Word Canonicalize_8,
  MR_Word FMap_9,
  MR_Word Univ_10,
  MR_Word * Doc_11,
  MR_Word STATE_VARIABLE_Limit_0_25,
  MR_Word * STATE_VARIABLE_Limit_26,
  MR_Integer CurrentPri_13)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) STATE_VARIABLE_Limit_0_25)) == (MR_Integer) 0))
    {
      MR_Integer N_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Limit_0_25, (MR_Integer) 0))));

      succeeded = (N_35 <= (MR_Integer) 0);
    }
    else
    {
      MR_Integer N_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Limit_0_25, (MR_Integer) 0))));

      succeeded = (N_37 <= (MR_Integer) 0);
    }
    if (succeeded)
    {
      *Doc_11 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[4]));
      *STATE_VARIABLE_Limit_26 = STATE_VARIABLE_Limit_0_25;
    }
    else
    {
      MR_Word ArgTypeDescs_16;
      MR_Word Formatter_20;
      MR_Word TypeInfo_31_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_10, (MR_Integer) 0))));
      MR_Word TypeInfo_15_63;
      MR_Word TypeInfo_17_65;
      MR_Word TypeCtorDesc_15;
      MR_String ModuleName_17;
      MR_String TypeName_18;
      MR_Integer Arity_19;
      MR_Word Var_27;
      MR_Word FMapTypeArity_59;
      MR_Word FMapArity_60;
      MR_String V_5_43;
      MR_Integer V_6_44;
      MR_String V_5_47;
      MR_Integer V_6_48;
      MR_Box conv0_FMapTypeArity_59;
      MR_Box conv1_FMapArity_60;
      MR_Box conv2_Formatter_20;

{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_31_31 ;
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
	 Var_27  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Var_27 ;
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
	 TypeCtorDesc_15  = TypeCtorDesc;
	 ArgTypeDescs_16  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtorDesc_15 ;
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
	 ModuleName_17  = TypeCtorModuleName;
	 V_5_43  = TypeCtorName;
	 V_6_44  = TypeCtorArity;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtorDesc_15 ;
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
	 V_5_47  = TypeCtorModuleName;
	 TypeName_18  = TypeCtorName;
	 V_6_48  = TypeCtorArity;
}
      mercury__list__length_acc_3_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), ArgTypeDescs_16, (MR_Integer) 0, &Arity_19);
      succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), FMap_9, ((MR_Box) (ModuleName_17)), &conv0_FMapTypeArity_59);
      if (succeeded)
      {
        FMapTypeArity_59 = ((MR_Word) (conv0_FMapTypeArity_59));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        TypeInfo_15_63 = (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]);
        succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_15_63, FMapTypeArity_59, ((MR_Box) (TypeName_18)), &conv1_FMapArity_60);
        if (succeeded)
        {
          FMapArity_60 = ((MR_Word) (conv1_FMapArity_60));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          TypeInfo_17_65 = (MR_Word) (&mercury__pretty_printer_scalar_common_4[1]);
          succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_17_65, FMapArity_60, Arity_19, &conv2_Formatter_20);
          if (succeeded)
          {
            Formatter_20 = ((MR_Word) (conv2_Formatter_20));
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
      {
        MR_Word Doc0_21;
        MR_Box MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box);
        MR_Box conv4_Doc0_21;

        if (((MR_tag((MR_Word) STATE_VARIABLE_Limit_0_25)) == (MR_Integer) 0))
        {
          MR_Integer N_76 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Limit_0_25, (MR_Integer) 0))));
          MR_Integer Var_77 = (MR_Integer) ((MR_Unsigned) N_76 - (MR_Unsigned) 1);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Limit_26 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_77));
          }
        }
        else
        {
          MR_Integer N_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Limit_0_25, (MR_Integer) 0))));
          MR_Integer Var_80 = (MR_Integer) ((MR_Unsigned) N_79 - (MR_Unsigned) 1);

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Limit_26 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_80));
          }
        }
        func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Formatter_20, (MR_Integer) 1))));
        conv4_Doc0_21 = func_3(((MR_Box) (Formatter_20)), ((MR_Box) (Univ_10)), ((MR_Box) (ArgTypeDescs_16)));
        Doc0_21 = ((MR_Word) (conv4_Doc0_21));
        if (((MR_tag((MR_Word) *STATE_VARIABLE_Limit_26)) == (MR_Integer) 0))
          *Doc_11 = Doc0_21;
        else
        {
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word Var_90;
          MR_Word Var_91;

          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) (*STATE_VARIABLE_Limit_26));
          }
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (Var_91));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Doc0_21));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_89));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Doc_11 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_88));
          }
        }
      }
      else
      {
        MR_Word TypeInfo_33_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_10, (MR_Integer) 0))));
        MR_String Name_22;
        MR_Word Args_24;
        MR_Box Var_29 = (MR_hl_field(MR_mktag(0), Univ_10, (MR_Integer) 1));
        MR_Integer _Arity_23;

        mercury__deconstruct__deconstruct_5_p_1(TypeInfo_33_33, Var_29, Canonicalize_8, &Name_22, &_Arity_23, &Args_24);
        mercury__pretty_printer__expand_format_term_6_p_0(Name_22, Args_24, Doc_11, STATE_VARIABLE_Limit_0_25, STATE_VARIABLE_Limit_26, CurrentPri_13);
      }
    }
  }
}

void MR_CALL 
mercury__pretty_printer__write_doc_3_p_0(
  MR_Word Doc_4)
{
  {
    MR_Word Var_8;
    MR_Box V_2_10;

{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	 V_2_10  = (MR_Box) Stream;
}
    Var_8 = (MR_Word) (V_2_10);
    mercury__pretty_printer__write_doc_4_p_0(Var_8, Doc_4);
  }
}

void MR_CALL 
mercury__pretty_printer__write_doc_4_p_0(
  MR_Word Stream_5,
  MR_Word Doc_6)
{
  {
    MR_Word Formatters_8;
    MR_Word Params_9;
    MR_Word Okay_21;
    MR_Box conv0_STATE_VARIABLE_IO_11;

{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0

	MR_Word Okay;

		{

    Okay = ML_pretty_printer_is_initialised;


		;}
#undef MR_PROC_LABEL
	 Okay_21  = Okay;
}
    switch (Okay_21) {
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
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
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
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    mercury__pretty_printer__put_doc_7_p_1((MR_Word) (&mercury__pretty_printer_scalar_common_4[0]), ((MR_Box) (Stream_5)), (MR_Integer) 2, Formatters_8, Params_9, Doc_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

MR_Word MR_CALL 
mercury__pretty_printer__initial_formatter_map_0_f_0(void)
{
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

    mercury__pretty_printer__set_formatter__ho9_6_p_0((MR_String) "builtin", (MR_String) "character", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Formatters_9_9);
    mercury__pretty_printer__set_formatter__ho8_6_p_0((MR_String) "builtin", (MR_String) "float", (MR_Integer) 0, STATE_VARIABLE_Formatters_9_9, &STATE_VARIABLE_Formatters_14_14);
    mercury__pretty_printer__set_formatter__ho7_6_p_0((MR_String) "builtin", (MR_String) "int", (MR_Integer) 0, STATE_VARIABLE_Formatters_14_14, &STATE_VARIABLE_Formatters_19_19);
    mercury__pretty_printer__set_formatter__ho6_6_p_0((MR_String) "builtin", (MR_String) "uint", (MR_Integer) 0, STATE_VARIABLE_Formatters_19_19, &STATE_VARIABLE_Formatters_24_24);
    mercury__pretty_printer__set_formatter__ho5_6_p_0((MR_String) "builtin", (MR_String) "string", (MR_Integer) 0, STATE_VARIABLE_Formatters_24_24, &STATE_VARIABLE_Formatters_29_29);
    mercury__pretty_printer__set_formatter__ho4_6_p_0((MR_String) "array", (MR_String) "array", (MR_Integer) 1, STATE_VARIABLE_Formatters_29_29, &STATE_VARIABLE_Formatters_34_34);
    mercury__pretty_printer__set_formatter__ho3_6_p_0((MR_String) "list", (MR_String) "list", (MR_Integer) 1, STATE_VARIABLE_Formatters_34_34, &STATE_VARIABLE_Formatters_39_39);
    mercury__pretty_printer__set_formatter__ho2_6_p_0((MR_String) "tree234", (MR_String) "tree234", (MR_Integer) 2, STATE_VARIABLE_Formatters_39_39, &STATE_VARIABLE_Formatters_44_44);
    mercury__pretty_printer__set_formatter__ho1_6_p_0((MR_String) "version_array", (MR_String) "version_array", (MR_Integer) 1, STATE_VARIABLE_Formatters_44_44, &STATE_VARIABLE_Formatters_3);
    return STATE_VARIABLE_Formatters_3;
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho9_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_char_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho9_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  {
    MR_bool succeeded;
    MR_Word FMapTypeArity0_12;
    MR_Box conv1_FMapTypeArity0_12;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
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

      succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
      if (succeeded)
      {
        FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word FMapArity_14;

        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_4[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_2[12])), FMapArity0_13, &FMapArity_14);
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
      }
      else
      {
        MR_Word FMapArity_20;

        {
          FMapArity_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FMapArity_20, 0) = ((MR_Box) (Arity_9));
          MR_hl_field(MR_mktag(1), FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_2[12]));
          MR_hl_field(MR_mktag(1), FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
      }
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
    }
    else
    {
      MR_Word FMapArity_21;
      MR_Word FMapTypeArity_22;

      {
        FMapArity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FMapArity_21, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(MR_mktag(1), FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_2[12]));
        MR_hl_field(MR_mktag(1), FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        FMapTypeArity_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
    }
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho8_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_float_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho8_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  {
    MR_bool succeeded;
    MR_Word FMapTypeArity0_12;
    MR_Box conv1_FMapTypeArity0_12;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
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

      succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
      if (succeeded)
      {
        FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word FMapArity_14;

        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_4[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_2[11])), FMapArity0_13, &FMapArity_14);
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
      }
      else
      {
        MR_Word FMapArity_20;

        {
          FMapArity_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FMapArity_20, 0) = ((MR_Box) (Arity_9));
          MR_hl_field(MR_mktag(1), FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_2[11]));
          MR_hl_field(MR_mktag(1), FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
      }
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
    }
    else
    {
      MR_Word FMapArity_21;
      MR_Word FMapTypeArity_22;

      {
        FMapArity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FMapArity_21, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(MR_mktag(1), FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_2[11]));
        MR_hl_field(MR_mktag(1), FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        FMapTypeArity_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
    }
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho7_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_int_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho7_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  {
    MR_bool succeeded;
    MR_Word FMapTypeArity0_12;
    MR_Box conv1_FMapTypeArity0_12;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
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

      succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
      if (succeeded)
      {
        FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word FMapArity_14;

        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_4[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_2[10])), FMapArity0_13, &FMapArity_14);
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
      }
      else
      {
        MR_Word FMapArity_20;

        {
          FMapArity_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FMapArity_20, 0) = ((MR_Box) (Arity_9));
          MR_hl_field(MR_mktag(1), FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_2[10]));
          MR_hl_field(MR_mktag(1), FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
      }
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
    }
    else
    {
      MR_Word FMapArity_21;
      MR_Word FMapTypeArity_22;

      {
        FMapArity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FMapArity_21, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(MR_mktag(1), FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_2[10]));
        MR_hl_field(MR_mktag(1), FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        FMapTypeArity_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
    }
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho6_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_uint_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho6_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  {
    MR_bool succeeded;
    MR_Word FMapTypeArity0_12;
    MR_Box conv1_FMapTypeArity0_12;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
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

      succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
      if (succeeded)
      {
        FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word FMapArity_14;

        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_4[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_2[9])), FMapArity0_13, &FMapArity_14);
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
      }
      else
      {
        MR_Word FMapArity_20;

        {
          FMapArity_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FMapArity_20, 0) = ((MR_Box) (Arity_9));
          MR_hl_field(MR_mktag(1), FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_2[9]));
          MR_hl_field(MR_mktag(1), FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
      }
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
    }
    else
    {
      MR_Word FMapArity_21;
      MR_Word FMapTypeArity_22;

      {
        FMapArity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FMapArity_21, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(MR_mktag(1), FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_2[9]));
        MR_hl_field(MR_mktag(1), FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        FMapTypeArity_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
    }
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho5_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_string_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho5_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  {
    MR_bool succeeded;
    MR_Word FMapTypeArity0_12;
    MR_Box conv1_FMapTypeArity0_12;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
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

      succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
      if (succeeded)
      {
        FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word FMapArity_14;

        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_4[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_2[8])), FMapArity0_13, &FMapArity_14);
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
      }
      else
      {
        MR_Word FMapArity_20;

        {
          FMapArity_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FMapArity_20, 0) = ((MR_Box) (Arity_9));
          MR_hl_field(MR_mktag(1), FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_2[8]));
          MR_hl_field(MR_mktag(1), FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
      }
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
    }
    else
    {
      MR_Word FMapArity_21;
      MR_Word FMapTypeArity_22;

      {
        FMapArity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FMapArity_21, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(MR_mktag(1), FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_2[8]));
        MR_hl_field(MR_mktag(1), FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        FMapTypeArity_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
    }
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho4_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_array_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho4_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  {
    MR_bool succeeded;
    MR_Word FMapTypeArity0_12;
    MR_Box conv1_FMapTypeArity0_12;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
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

      succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
      if (succeeded)
      {
        FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word FMapArity_14;

        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_4[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_2[7])), FMapArity0_13, &FMapArity_14);
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
      }
      else
      {
        MR_Word FMapArity_20;

        {
          FMapArity_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FMapArity_20, 0) = ((MR_Box) (Arity_9));
          MR_hl_field(MR_mktag(1), FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_2[7]));
          MR_hl_field(MR_mktag(1), FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
      }
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
    }
    else
    {
      MR_Word FMapArity_21;
      MR_Word FMapTypeArity_22;

      {
        FMapArity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FMapArity_21, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(MR_mktag(1), FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_2[7]));
        MR_hl_field(MR_mktag(1), FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        FMapTypeArity_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
    }
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho3_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_list_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho3_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  {
    MR_bool succeeded;
    MR_Word FMapTypeArity0_12;
    MR_Box conv1_FMapTypeArity0_12;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
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

      succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
      if (succeeded)
      {
        FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word FMapArity_14;

        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_4[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_2[6])), FMapArity0_13, &FMapArity_14);
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
      }
      else
      {
        MR_Word FMapArity_20;

        {
          FMapArity_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FMapArity_20, 0) = ((MR_Box) (Arity_9));
          MR_hl_field(MR_mktag(1), FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_2[6]));
          MR_hl_field(MR_mktag(1), FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
      }
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
    }
    else
    {
      MR_Word FMapArity_21;
      MR_Word FMapTypeArity_22;

      {
        FMapArity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FMapArity_21, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(MR_mktag(1), FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_2[6]));
        MR_hl_field(MR_mktag(1), FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        FMapTypeArity_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
    }
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_tree234_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho2_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  {
    MR_bool succeeded;
    MR_Word FMapTypeArity0_12;
    MR_Box conv1_FMapTypeArity0_12;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
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

      succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
      if (succeeded)
      {
        FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word FMapArity_14;

        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_4[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_2[5])), FMapArity0_13, &FMapArity_14);
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
      }
      else
      {
        MR_Word FMapArity_20;

        {
          FMapArity_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FMapArity_20, 0) = ((MR_Box) (Arity_9));
          MR_hl_field(MR_mktag(1), FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_2[5]));
          MR_hl_field(MR_mktag(1), FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
      }
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
    }
    else
    {
      MR_Word FMapArity_21;
      MR_Word FMapTypeArity_22;

      {
        FMapArity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FMapArity_21, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(MR_mktag(1), FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_2[5]));
        MR_hl_field(MR_mktag(1), FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        FMapTypeArity_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
    }
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_version_array_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho1_6_p_0(
  MR_String ModuleName_7,
  MR_String TypeName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_FMap_0_16,
  MR_Word * STATE_VARIABLE_FMap_17)
{
  {
    MR_bool succeeded;
    MR_Word FMapTypeArity0_12;
    MR_Box conv1_FMapTypeArity0_12;

    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), STATE_VARIABLE_FMap_0_16, ((MR_Box) (ModuleName_7)), &conv1_FMapTypeArity0_12);
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

      succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), FMapTypeArity0_12, ((MR_Box) (TypeName_8)), &conv2_FMapArity0_13);
      if (succeeded)
      {
        FMapArity0_13 = ((MR_Word) (conv2_FMapArity0_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word FMapArity_14;

        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_4[1]), Arity_9, ((MR_Box) (&mercury__pretty_printer_scalar_common_2[4])), FMapArity0_13, &FMapArity_14);
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_14)), FMapTypeArity0_12, &FMapTypeArity_15);
      }
      else
      {
        MR_Word FMapArity_20;

        {
          FMapArity_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FMapArity_20, 0) = ((MR_Box) (Arity_9));
          MR_hl_field(MR_mktag(1), FMapArity_20, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_2[4]));
          MR_hl_field(MR_mktag(1), FMapArity_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), FMapArity_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]), ((MR_Box) (TypeName_8)), ((MR_Box) (FMapArity_20)), FMapTypeArity0_12, &FMapTypeArity_15);
      }
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_15)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
    }
    else
    {
      MR_Word FMapArity_21;
      MR_Word FMapTypeArity_22;

      {
        FMapArity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FMapArity_21, 0) = ((MR_Box) (Arity_9));
        MR_hl_field(MR_mktag(1), FMapArity_21, 1) = ((MR_Box) (&mercury__pretty_printer_scalar_common_2[4]));
        MR_hl_field(MR_mktag(1), FMapArity_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FMapArity_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        FMapTypeArity_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 0) = ((MR_Box) (TypeName_8));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 1) = ((MR_Box) (FMapArity_21));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FMapTypeArity_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), ((MR_Box) (ModuleName_7)), ((MR_Box) (FMapTypeArity_22)), STATE_VARIABLE_FMap_0_16, STATE_VARIABLE_FMap_17);
    }
  }
}

void MR_CALL 
mercury__pretty_printer__put_doc_7_p_1(
  MR_Word TypeClassInfo_for_writer_31,
  MR_Box Stream_8,
  MR_Word Canonicalize_9,
  MR_Word FMap_10,
  MR_Word Params_11,
  MR_Word Doc_12,
  MR_Box STATE_VARIABLE_IO_0_25,
  MR_Box * STATE_VARIABLE_IO_26)
{
  {
    MR_Integer Pri_14;
    MR_Integer MaxLines_16;
    MR_Word Limit_17;
    MR_Integer RemainingWidth_18;
    MR_Word Var_28;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Pri_14;
    MR_Integer Var_20;
    MR_Word Var_21;
    MR_Integer Var_22;
    MR_Word Var_23;
    MR_Integer Var_24;

    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    conv1_Pri_14 = func_0(((MR_Box) ((MR_Word) (&mercury__pretty_printer_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Pri_14 = ((MR_Integer) (conv1_Pri_14));
    RemainingWidth_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_11, (MR_Integer) 0))));
    MaxLines_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_11, (MR_Integer) 1))));
    Limit_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_11, (MR_Integer) 2))));
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Doc_12));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__pretty_printer__do_put_doc_17_p_1(TypeClassInfo_for_writer_31, Stream_8, Canonicalize_9, FMap_10, RemainingWidth_18, Var_28, RemainingWidth_18, &Var_20, (MR_Word) ((MR_Unsigned) 0U), &Var_21, MaxLines_16, &Var_22, Limit_17, &Var_23, Pri_14, &Var_24, STATE_VARIABLE_IO_0_25, STATE_VARIABLE_IO_26);
  }
}

void MR_CALL 
mercury__pretty_printer__do_put_doc_17_p_1(
  MR_Word TypeClassInfo_for_writer_127,
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
  MR_Integer STATE_VARIABLE_Pri_0_14,
  MR_Integer * STATE_VARIABLE_Pri_15,
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
      MR_Word Doc_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Docs0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));

      succeeded = (STATE_VARIABLE_RemainingLines_0_10 <= (MR_Integer) 0);
      if (succeeded)
      {
        mercury__stream__put_4_p_0(TypeClassInfo_for_writer_127, HeadVar__1_1, ((MR_Box) ((MR_String) "...")), STATE_VARIABLE_IO_0_16, STATE_VARIABLE_IO_17);
        *STATE_VARIABLE_Pri_15 = STATE_VARIABLE_Pri_0_14;
        *STATE_VARIABLE_Limit_13 = STATE_VARIABLE_Limit_0_12;
        *STATE_VARIABLE_RemainingLines_11 = STATE_VARIABLE_RemainingLines_0_10;
        *STATE_VARIABLE_Indents_9 = STATE_VARIABLE_Indents_0_8;
        *STATE_VARIABLE_RemainingWidth_7 = STATE_VARIABLE_RemainingWidth_0_6;
      }
      else
      {
        MR_Word Docs_53;
        MR_Integer STATE_VARIABLE_Pri_91_91;
        MR_Word STATE_VARIABLE_Indents_101_101;
        MR_Word STATE_VARIABLE_Limit_105_105;
        MR_Integer STATE_VARIABLE_RemainingLines_111_111;
        MR_Box STATE_VARIABLE_IO_113_113;
        MR_Integer STATE_VARIABLE_RemainingWidth_114_114;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Integer next_value_of_STATE_VARIABLE_RemainingWidth_0_6;
        MR_Word next_value_of_STATE_VARIABLE_Indents_0_8;
        MR_Integer next_value_of_STATE_VARIABLE_RemainingLines_0_10;
        MR_Word next_value_of_STATE_VARIABLE_Limit_0_12;
        MR_Integer next_value_of_STATE_VARIABLE_Pri_0_14;
        MR_Box next_value_of_STATE_VARIABLE_IO_0_16;

        switch (MR_tag((MR_Word) Doc_44)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Doc_44)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer IndentWidth_54;
                  MR_Integer Var_109;

                  IndentWidth_54 = mercury__pretty_printer__count_indent_codepoints_1_f_0(STATE_VARIABLE_Indents_0_8);
                  Var_109 = (MR_Integer) ((MR_Unsigned) HeadVar__4_4 - (MR_Unsigned) IndentWidth_54);
                  succeeded = (STATE_VARIABLE_RemainingWidth_0_6 < Var_109);
                  if (succeeded)
                    mercury__pretty_printer__format_nl_8_p_0(TypeClassInfo_for_writer_127, HeadVar__1_1, HeadVar__4_4, STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_RemainingWidth_114_114, STATE_VARIABLE_RemainingLines_0_10, &STATE_VARIABLE_RemainingLines_111_111, STATE_VARIABLE_IO_0_16, &STATE_VARIABLE_IO_113_113);
                  else
                  {
                    STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
                    STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                    STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                  }
                  Docs_53 = Docs0_45;
                  STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_Limit_105_105 = STATE_VARIABLE_Limit_0_12;
                  STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__pretty_printer__format_nl_8_p_0(TypeClassInfo_for_writer_127, HeadVar__1_1, HeadVar__4_4, STATE_VARIABLE_Indents_0_8, &STATE_VARIABLE_RemainingWidth_114_114, STATE_VARIABLE_RemainingLines_0_10, &STATE_VARIABLE_RemainingLines_111_111, STATE_VARIABLE_IO_0_16, &STATE_VARIABLE_IO_113_113);
                  Docs_53 = Docs0_45;
                  STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_Limit_105_105 = STATE_VARIABLE_Limit_0_12;
                  STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String String_52 = ((MR_String) ((MR_hl_field(MR_mktag(1), Doc_44, (MR_Integer) 0))));
              MR_Integer Var_115;

              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_127, HeadVar__1_1, ((MR_Box) (String_52)), STATE_VARIABLE_IO_0_16, &STATE_VARIABLE_IO_113_113);
              Var_115 = mercury__string__count_codepoints_1_f_0(String_52);
              STATE_VARIABLE_RemainingWidth_114_114 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingWidth_0_6 - (MR_Unsigned) Var_115);
              Docs_53 = Docs0_45;
              STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
              STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
              STATE_VARIABLE_Limit_105_105 = STATE_VARIABLE_Limit_0_12;
              STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Docs1_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Doc_44, (MR_Integer) 0))));

              Docs_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0), Docs1_55, Docs0_45);
              STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
              STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
              STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
              STATE_VARIABLE_Limit_105_105 = STATE_VARIABLE_Limit_0_12;
              STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
              STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Doc_44, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Univ_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_44, (MR_Integer) 1))));
                  MR_Word Doc1_57;

                  mercury__pretty_printer__expand_pp_7_p_1(HeadVar__2_2, HeadVar__3_3, Univ_56, &Doc1_57, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_105_105, STATE_VARIABLE_Pri_0_14);
                  {
                    Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Docs_53, 0) = ((MR_Box) (Doc1_57));
                    MR_hl_field(MR_mktag(1), Docs_53, 1) = ((MR_Box) (Docs0_45));
                  }
                  STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
                  STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Univs_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_44, (MR_Integer) 1))));
                  MR_Word Sep_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_44, (MR_Integer) 2))));
                  MR_Word Doc1_122;

                  mercury__pretty_printer__expand_format_list_5_p_0(Univs_58, Sep_59, &Doc1_122, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_105_105);
                  {
                    Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Docs_53, 0) = ((MR_Box) (Doc1_122));
                    MR_hl_field(MR_mktag(1), Docs_53, 1) = ((MR_Box) (Docs0_45));
                  }
                  STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
                  STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Name_60 = ((MR_String) ((MR_hl_field(MR_mktag(3), Doc_44, (MR_Integer) 1))));
                  MR_Word Doc1_123;
                  MR_Word Univs_124 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_44, (MR_Integer) 2))));

                  mercury__pretty_printer__expand_format_term_6_p_0(Name_60, Univs_124, &Doc1_123, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_105_105, STATE_VARIABLE_Pri_0_14);
                  {
                    Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Docs_53, 0) = ((MR_Box) (Doc1_123));
                    MR_hl_field(MR_mktag(1), Docs_53, 1) = ((MR_Box) (Docs0_45));
                  }
                  STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
                  STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Susp_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_44, (MR_Integer) 1))));
                  MR_Word Doc1_125;

                  mercury__pretty_printer__expand_format_susp_4_p_0(Susp_61, &Doc1_125, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_105_105);
                  {
                    Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Docs_53, 0) = ((MR_Box) (Doc1_125));
                    MR_hl_field(MR_mktag(1), Docs_53, 1) = ((MR_Box) (Docs0_45));
                  }
                  STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                  STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
                  STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                  STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
                  STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_44, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) Var_129)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(Var_129)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Integer RemainingWidthAfterGroup_66;
                            MR_Word Docs1_126;

                            mercury__pretty_printer__expand_docs_11_p_1(HeadVar__2_2, HeadVar__3_3, Docs0_45, &Docs1_126, (MR_Integer) 1, STATE_VARIABLE_Limit_0_12, &STATE_VARIABLE_Limit_105_105, STATE_VARIABLE_Pri_0_14, &STATE_VARIABLE_Pri_91_91, STATE_VARIABLE_RemainingWidth_0_6, &RemainingWidthAfterGroup_66);
                            succeeded = (RemainingWidthAfterGroup_66 >= (MR_Integer) 0);
                            if (succeeded)
                              mercury__pretty_printer__output_current_group_12_p_0(TypeClassInfo_for_writer_127, HeadVar__1_1, HeadVar__4_4, STATE_VARIABLE_Indents_0_8, (MR_Integer) 1, Docs1_126, &Docs_53, STATE_VARIABLE_RemainingWidth_0_6, &STATE_VARIABLE_RemainingWidth_114_114, STATE_VARIABLE_RemainingLines_0_10, &STATE_VARIABLE_RemainingLines_111_111, STATE_VARIABLE_IO_0_16, &STATE_VARIABLE_IO_113_113);
                            else
                            {
                              Docs_53 = Docs1_126;
                              STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
                              STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                              STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                            }
                            STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            Docs_53 = Docs0_45;
                            STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                            STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
                            STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                            STATE_VARIABLE_Limit_105_105 = STATE_VARIABLE_Limit_0_12;
                            STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
                            STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            if ((STATE_VARIABLE_Indents_0_8 == (MR_Word) ((MR_Unsigned) 0U)))
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140pretty_printer.do_put_doc\'/17", (MR_String) "cannot pop empty indent stack");
                                return;
                              }
                            else
                              STATE_VARIABLE_Indents_101_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Indents_0_8, (MR_Integer) 0))));
                            Docs_53 = Docs0_45;
                            STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                            STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                            STATE_VARIABLE_Limit_105_105 = STATE_VARIABLE_Limit_0_12;
                            STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
                            STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String Indent_62 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_129, (MR_Integer) 0))));

                        {
                          STATE_VARIABLE_Indents_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Indents_101_101, 0) = ((MR_Box) (STATE_VARIABLE_Indents_0_8));
                          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Indents_101_101, 1) = ((MR_Box) (Indent_62));
                        }
                        Docs_53 = Docs0_45;
                        STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                        STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                        STATE_VARIABLE_Limit_105_105 = STATE_VARIABLE_Limit_0_12;
                        STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
                        STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_Pri_91_91 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_129, (MR_Integer) 0))));
                        Docs_53 = Docs0_45;
                        STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                        STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
                        STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                        STATE_VARIABLE_Limit_105_105 = STATE_VARIABLE_Limit_0_12;
                        STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_Limit_105_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_129, (MR_Integer) 0))));
                        Docs_53 = Docs0_45;
                        STATE_VARIABLE_RemainingWidth_114_114 = STATE_VARIABLE_RemainingWidth_0_6;
                        STATE_VARIABLE_Indents_101_101 = STATE_VARIABLE_Indents_0_8;
                        STATE_VARIABLE_RemainingLines_111_111 = STATE_VARIABLE_RemainingLines_0_10;
                        STATE_VARIABLE_Pri_91_91 = STATE_VARIABLE_Pri_0_14;
                        STATE_VARIABLE_IO_113_113 = STATE_VARIABLE_IO_0_16;
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
        next_value_of_HeadVar__5_5 = Docs_53;
        next_value_of_STATE_VARIABLE_RemainingWidth_0_6 = STATE_VARIABLE_RemainingWidth_114_114;
        next_value_of_STATE_VARIABLE_Indents_0_8 = STATE_VARIABLE_Indents_101_101;
        next_value_of_STATE_VARIABLE_RemainingLines_0_10 = STATE_VARIABLE_RemainingLines_111_111;
        next_value_of_STATE_VARIABLE_Limit_0_12 = STATE_VARIABLE_Limit_105_105;
        next_value_of_STATE_VARIABLE_Pri_0_14 = STATE_VARIABLE_Pri_91_91;
        next_value_of_STATE_VARIABLE_IO_0_16 = STATE_VARIABLE_IO_113_113;
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
mercury__pretty_printer__expand_docs_11_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word STATE_VARIABLE_Limit_0_6,
  MR_Word * STATE_VARIABLE_Limit_7,
  MR_Integer STATE_VARIABLE_Pri_0_8,
  MR_Integer * STATE_VARIABLE_Pri_9,
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
      MR_Word Doc_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Docs0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));

      succeeded = (HeadVar__5_5 <= (MR_Integer) 0);
      if (succeeded)
      {
        if ((Doc_26 == (MR_Word) ((MR_Unsigned) 4U)))
          succeeded = MR_TRUE;
        else
        if ((Doc_26 == (MR_Word) ((MR_Unsigned) 0U)))
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
        switch (MR_tag((MR_Word) Doc_26)) {
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
                MR_Word Docs1_116;

                mercury__pretty_printer__expand_docs_11_p_1(HeadVar__1_1, HeadVar__2_2, Docs0_27, &Docs1_116, HeadVar__5_5, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Doc_26));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Docs1_116));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String String_33 = ((MR_String) ((MR_hl_field(MR_mktag(1), Doc_26, (MR_Integer) 0))));
              MR_Word Docs1_34;
              MR_Integer STATE_VARIABLE_RemainingWidth_111_111;
              MR_Integer Var_112;

              Var_112 = mercury__string__count_codepoints_1_f_0(String_33);
              STATE_VARIABLE_RemainingWidth_111_111 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingWidth_0_10 - (MR_Unsigned) Var_112);
              mercury__pretty_printer__expand_docs_11_p_1(HeadVar__1_1, HeadVar__2_2, Docs0_27, &Docs1_34, HeadVar__5_5, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_111_111, STATE_VARIABLE_RemainingWidth_11);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Doc_26));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Docs1_34));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_103;
              MR_Word Docs1_119 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Doc_26, (MR_Integer) 0))));
              MR_Word next_value_of_HeadVar__3_3;

              Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0), Docs1_119, Docs0_27);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__3_3 = Var_103;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Doc_26, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Univ_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_26, (MR_Integer) 1))));
                  MR_Word Doc1_36;
                  MR_Word STATE_VARIABLE_Limit_98_98;
                  MR_Word Var_99;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_pp_7_p_1(HeadVar__1_1, HeadVar__2_2, Univ_35, &Doc1_36, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_98_98, STATE_VARIABLE_Pri_0_8);
                  {
                    Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Doc1_36));
                    MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Docs0_27));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Var_99;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_98_98;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Univs_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_26, (MR_Integer) 1))));
                  MR_Word Sep_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_26, (MR_Integer) 2))));
                  MR_Word STATE_VARIABLE_Limit_93_93;
                  MR_Word Var_94;
                  MR_Word Doc1_120;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_list_5_p_0(Univs_37, Sep_38, &Doc1_120, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_93_93);
                  {
                    Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Doc1_120));
                    MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Docs0_27));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Var_94;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_93_93;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Name_39 = ((MR_String) ((MR_hl_field(MR_mktag(3), Doc_26, (MR_Integer) 1))));
                  MR_Word STATE_VARIABLE_Limit_88_88;
                  MR_Word Var_89;
                  MR_Word Doc1_121;
                  MR_Word Univs_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_26, (MR_Integer) 2))));
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_term_6_p_0(Name_39, Univs_122, &Doc1_121, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_88_88, STATE_VARIABLE_Pri_0_8);
                  {
                    Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Doc1_121));
                    MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Docs0_27));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Var_89;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_88_88;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Susp_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_26, (MR_Integer) 1))));
                  MR_Word STATE_VARIABLE_Limit_83_83;
                  MR_Word Var_84;
                  MR_Word Doc1_123;
                  MR_Word next_value_of_HeadVar__3_3;
                  MR_Word next_value_of_STATE_VARIABLE_Limit_0_6;

                  mercury__pretty_printer__expand_format_susp_4_p_0(Susp_40, &Doc1_123, STATE_VARIABLE_Limit_0_6, &STATE_VARIABLE_Limit_83_83);
                  {
                    Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Doc1_123));
                    MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Docs0_27));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = Var_84;
                  next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_83_83;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Limit_0_6 = next_value_of_STATE_VARIABLE_Limit_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_26, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) Var_130)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(Var_130)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Integer OpenGroups1_42;
                            MR_Integer Var_70;
                            MR_Word Docs1_126;

                            succeeded = (HeadVar__5_5 > (MR_Integer) 0);
                            if (succeeded)
                              Var_70 = (MR_Integer) 1;
                            else
                              Var_70 = (MR_Integer) 0;
                            OpenGroups1_42 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) Var_70);
                            mercury__pretty_printer__expand_docs_11_p_1(HeadVar__1_1, HeadVar__2_2, Docs0_27, &Docs1_126, OpenGroups1_42, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Doc_26));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Docs1_126));
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Integer Var_64;
                            MR_Word Docs1_127;
                            MR_Integer OpenGroups1_128;

                            succeeded = (HeadVar__5_5 > (MR_Integer) 0);
                            if (succeeded)
                              Var_64 = (MR_Integer) 1;
                            else
                              Var_64 = (MR_Integer) 0;
                            OpenGroups1_128 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 - (MR_Unsigned) Var_64);
                            mercury__pretty_printer__expand_docs_11_p_1(HeadVar__1_1, HeadVar__2_2, Docs0_27, &Docs1_127, OpenGroups1_128, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Doc_26));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Docs1_127));
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word Docs1_125;

                            mercury__pretty_printer__expand_docs_11_p_1(HeadVar__1_1, HeadVar__2_2, Docs0_27, &Docs1_125, HeadVar__5_5, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Doc_26));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Docs1_125));
                            }
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Docs1_124;

                        mercury__pretty_printer__expand_docs_11_p_1(HeadVar__1_1, HeadVar__2_2, Docs0_27, &Docs1_124, HeadVar__5_5, STATE_VARIABLE_Limit_0_6, STATE_VARIABLE_Limit_7, STATE_VARIABLE_Pri_0_8, STATE_VARIABLE_Pri_9, STATE_VARIABLE_RemainingWidth_0_10, STATE_VARIABLE_RemainingWidth_11);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *HeadVar__4_4 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Doc_26));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Docs1_124));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Integer STATE_VARIABLE_Pri_54_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_130, (MR_Integer) 0))));
                        MR_Word next_value_of_HeadVar__3_3 = Docs0_27;
                        MR_Integer next_value_of_STATE_VARIABLE_Pri_0_8 = STATE_VARIABLE_Pri_54_54;

                        // direct tailcall eliminated
                        ;
                        HeadVar__3_3 = next_value_of_HeadVar__3_3;
                        STATE_VARIABLE_Pri_0_8 = next_value_of_STATE_VARIABLE_Pri_0_8;
                        continue;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word STATE_VARIABLE_Limit_59_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_130, (MR_Integer) 0))));
                        MR_Word next_value_of_HeadVar__3_3 = Docs0_27;
                        MR_Word next_value_of_STATE_VARIABLE_Limit_0_6 = STATE_VARIABLE_Limit_59_59;

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
mercury__pretty_printer__expand_format_susp_4_p_0(
  MR_Word Susp_5,
  MR_Word * Doc_6,
  MR_Word STATE_VARIABLE_Limit_0_9,
  MR_Word * STATE_VARIABLE_Limit_10)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) STATE_VARIABLE_Limit_0_9)) == (MR_Integer) 0))
    {
      MR_Integer N_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Limit_0_9, (MR_Integer) 0))));

      succeeded = (N_12 <= (MR_Integer) 0);
    }
    else
    {
      MR_Integer N_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Limit_0_9, (MR_Integer) 0))));

      succeeded = (N_14 <= (MR_Integer) 0);
    }
    if (succeeded)
    {
      *Doc_6 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[4]));
      *STATE_VARIABLE_Limit_10 = STATE_VARIABLE_Limit_0_9;
    }
    else
    {
      MR_Word Doc0_8;
      MR_Box MR_CALL (* func_0)(MR_Box);
      MR_Box conv1_Doc0_8;

      if (((MR_tag((MR_Word) STATE_VARIABLE_Limit_0_9)) == (MR_Integer) 0))
      {
        MR_Integer N_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Limit_0_9, (MR_Integer) 0))));
        MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) N_17 - (MR_Unsigned) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Limit_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
        }
      }
      else
      {
        MR_Integer N_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Limit_0_9, (MR_Integer) 0))));
        MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) N_20 - (MR_Unsigned) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Limit_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_21));
        }
      }
      func_0 = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), Susp_5, (MR_Integer) 1))));
      conv1_Doc0_8 = func_0(((MR_Box) (Susp_5)));
      Doc0_8 = ((MR_Word) (conv1_Doc0_8));
      if (((MR_tag((MR_Word) *STATE_VARIABLE_Limit_10)) == (MR_Integer) 0))
        *Doc_6 = Doc0_8;
      else
      {
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_32;

        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) (*STATE_VARIABLE_Limit_10));
        }
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Var_32));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Doc0_8));
          MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_30));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Doc_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_29));
        }
      }
    }
  }
}

static void MR_CALL 
mercury__pretty_printer__expand_format_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Limit_0_4,
  MR_Word * STATE_VARIABLE_Limit_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(2), &mercury__pretty_printer_scalar_common_5[8]));
      *STATE_VARIABLE_Limit_5 = STATE_VARIABLE_Limit_0_4;
    }
    else
    {
      MR_Word Univ_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Univs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      if (((MR_tag((MR_Word) STATE_VARIABLE_Limit_0_4)) == (MR_Integer) 0))
      {
        MR_Integer N_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Limit_0_4, (MR_Integer) 0))));

        succeeded = (N_38 <= (MR_Integer) 0);
      }
      else
      {
        MR_Integer N_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Limit_0_4, (MR_Integer) 0))));

        succeeded = (N_40 <= (MR_Integer) 0);
      }
      if (succeeded)
        *HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[4]));
      else
      if ((Univs_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_44;
        MR_Word Var_47;
        MR_Word Var_48;

        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Univ_11));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_48, 0) = ((MR_Box) (Var_33));
        }
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[9])));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[7])));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_32, 0) = ((MR_Box) (Var_44));
        }
        *HeadVar__3_3 = mercury__pretty_printer__format_arg_1_f_0(Var_32);
      }
      else
      {
        MR_Word Var_20;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word Var_25;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_54;
        MR_Word Var_57;
        MR_Word Var_58;

        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (Univ_11));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
        }
        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_58, 0) = ((MR_Box) (Var_23));
        }
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[9])));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[7])));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
        }
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_22, 0) = ((MR_Box) (Var_54));
        }
        Var_21 = mercury__pretty_printer__format_arg_1_f_0(Var_22);
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Univs_12));
          MR_hl_field(MR_mktag(3), Var_30, 2) = ((MR_Box) (HeadVar__2_2));
        }
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
          MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_29));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_20));
        }
      }
      *STATE_VARIABLE_Limit_5 = STATE_VARIABLE_Limit_0_4;
    }
  }
}

static void MR_CALL 
mercury__pretty_printer__expand_pp_7_p_1(
  MR_Word Canonicalize_8,
  MR_Word FMap_9,
  MR_Word Univ_10,
  MR_Word * Doc_11,
  MR_Word STATE_VARIABLE_Limit_0_25,
  MR_Word * STATE_VARIABLE_Limit_26,
  MR_Integer CurrentPri_13)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) STATE_VARIABLE_Limit_0_25)) == (MR_Integer) 0))
    {
      MR_Integer N_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Limit_0_25, (MR_Integer) 0))));

      succeeded = (N_35 <= (MR_Integer) 0);
    }
    else
    {
      MR_Integer N_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Limit_0_25, (MR_Integer) 0))));

      succeeded = (N_37 <= (MR_Integer) 0);
    }
    if (succeeded)
    {
      *Doc_11 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[4]));
      *STATE_VARIABLE_Limit_26 = STATE_VARIABLE_Limit_0_25;
    }
    else
    {
      MR_Word ArgTypeDescs_16;
      MR_Word Formatter_20;
      MR_Word TypeInfo_31_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_10, (MR_Integer) 0))));
      MR_Word TypeInfo_15_63;
      MR_Word TypeInfo_17_65;
      MR_Word TypeCtorDesc_15;
      MR_String ModuleName_17;
      MR_String TypeName_18;
      MR_Integer Arity_19;
      MR_Word Var_27;
      MR_Word FMapTypeArity_59;
      MR_Word FMapArity_60;
      MR_String V_5_43;
      MR_Integer V_6_44;
      MR_String V_5_47;
      MR_Integer V_6_48;
      MR_Box conv0_FMapTypeArity_59;
      MR_Box conv1_FMapArity_60;
      MR_Box conv2_Formatter_20;

{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_31_31 ;
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
	 Var_27  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_1

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Var_27 ;
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
	 TypeCtorDesc_15  = TypeCtorDesc;
	 ArgTypeDescs_16  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_1

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtorDesc_15 ;
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
	 ModuleName_17  = TypeCtorModuleName;
	 V_5_43  = TypeCtorName;
	 V_6_44  = TypeCtorArity;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_1

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtorDesc_15 ;
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
	 V_5_47  = TypeCtorModuleName;
	 TypeName_18  = TypeCtorName;
	 V_6_48  = TypeCtorArity;
}
      mercury__list__length_acc_3_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), ArgTypeDescs_16, (MR_Integer) 0, &Arity_19);
      succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__pretty_printer_scalar_common_2[2]), FMap_9, ((MR_Box) (ModuleName_17)), &conv0_FMapTypeArity_59);
      if (succeeded)
      {
        FMapTypeArity_59 = ((MR_Word) (conv0_FMapTypeArity_59));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        TypeInfo_15_63 = (MR_Word) (&mercury__pretty_printer_scalar_common_2[1]);
        succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_15_63, FMapTypeArity_59, ((MR_Box) (TypeName_18)), &conv1_FMapArity_60);
        if (succeeded)
        {
          FMapArity_60 = ((MR_Word) (conv1_FMapArity_60));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          TypeInfo_17_65 = (MR_Word) (&mercury__pretty_printer_scalar_common_4[1]);
          succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_17_65, FMapArity_60, Arity_19, &conv2_Formatter_20);
          if (succeeded)
          {
            Formatter_20 = ((MR_Word) (conv2_Formatter_20));
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
      {
        MR_Word Doc0_21;
        MR_Box MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box);
        MR_Box conv4_Doc0_21;

        if (((MR_tag((MR_Word) STATE_VARIABLE_Limit_0_25)) == (MR_Integer) 0))
        {
          MR_Integer N_76 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Limit_0_25, (MR_Integer) 0))));
          MR_Integer Var_77 = (MR_Integer) ((MR_Unsigned) N_76 - (MR_Unsigned) 1);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Limit_26 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_77));
          }
        }
        else
        {
          MR_Integer N_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Limit_0_25, (MR_Integer) 0))));
          MR_Integer Var_80 = (MR_Integer) ((MR_Unsigned) N_79 - (MR_Unsigned) 1);

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Limit_26 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_80));
          }
        }
        func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Formatter_20, (MR_Integer) 1))));
        conv4_Doc0_21 = func_3(((MR_Box) (Formatter_20)), ((MR_Box) (Univ_10)), ((MR_Box) (ArgTypeDescs_16)));
        Doc0_21 = ((MR_Word) (conv4_Doc0_21));
        if (((MR_tag((MR_Word) *STATE_VARIABLE_Limit_26)) == (MR_Integer) 0))
          *Doc_11 = Doc0_21;
        else
        {
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word Var_90;
          MR_Word Var_91;

          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) (*STATE_VARIABLE_Limit_26));
          }
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (Var_91));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Doc0_21));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_89));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Doc_11 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_88));
          }
        }
      }
      else
      {
        MR_Word TypeInfo_33_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_10, (MR_Integer) 0))));
        MR_String Name_22;
        MR_Word Args_24;
        MR_Box Var_29 = (MR_hl_field(MR_mktag(0), Univ_10, (MR_Integer) 1));
        MR_Integer _Arity_23;

        mercury__deconstruct__deconstruct_5_p_2(TypeInfo_33_33, Var_29, Canonicalize_8, &Name_22, &_Arity_23, &Args_24);
        mercury__pretty_printer__expand_format_term_6_p_0(Name_22, Args_24, Doc_11, STATE_VARIABLE_Limit_0_25, STATE_VARIABLE_Limit_26, CurrentPri_13);
      }
    }
  }
}

static void MR_CALL 
mercury__pretty_printer__expand_format_term_6_p_0(
  MR_String Name_7,
  MR_Word Args_8,
  MR_Word * Doc_9,
  MR_Word STATE_VARIABLE_Limit_0_14,
  MR_Word * STATE_VARIABLE_Limit_15,
  MR_Integer CurrentPri_11)
{
  {
    MR_bool succeeded = (Args_8 == (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Doc0_12;

    if (succeeded)
    {
      MR_String Var_16;

      Var_16 = mercury__term_io__quoted_atom_agt_2_f_0(Name_7, (MR_Integer) 1);
      {
        Doc0_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Doc0_12, 0) = ((MR_Box) (Var_16));
      }
    }
    else
    {
      if (((MR_tag((MR_Word) STATE_VARIABLE_Limit_0_14)) == (MR_Integer) 0))
      {
        MR_Integer N_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Limit_0_14, (MR_Integer) 0))));

        succeeded = (N_54 <= (MR_Integer) 0);
      }
      else
      {
        MR_Integer N_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Limit_0_14, (MR_Integer) 0))));

        succeeded = (N_56 <= (MR_Integer) 0);
      }
      if (succeeded)
        Doc0_12 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[4]));
      else
      {
        MR_Word OpDoc_13;

        succeeded = mercury__pretty_printer__expand_format_op_4_p_0(Name_7, Args_8, CurrentPri_11, &OpDoc_13);
        if (succeeded)
          Doc0_12 = OpDoc_13;
        else
        {
          succeeded = (strcmp(Name_7, (MR_String) "{}") == 0);
          if (succeeded)
          {
            MR_Word Var_17;
            MR_Word Var_20;
            MR_Word Var_21;
            MR_Word Var_22;
            MR_Word Var_23;
            MR_Word Var_63;
            MR_Word Var_66;
            MR_Word Var_67;

            {
              Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (Args_8));
              MR_hl_field(MR_mktag(3), Var_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[6])));
            }
            {
              Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
              MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_67, 0) = ((MR_Box) (Var_22));
            }
            {
              Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
              MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[5])));
            }
            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[6])));
              MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
            }
            {
              Var_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_21, 0) = ((MR_Box) (Var_63));
            }
            {
              Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
              MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[12])));
            }
            {
              Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[5])));
              MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
            }
            {
              Doc0_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Doc0_12, 0) = ((MR_Box) (Var_17));
            }
          }
          else
          {
            MR_Word Var_31;
            MR_Word Var_33;
            MR_Word Var_34;
            MR_String Var_35;
            MR_Word Var_36;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_41;
            MR_Word Var_42;
            MR_Word Var_79;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_89;
            MR_Word Var_92;
            MR_Word Var_93;

            Var_35 = mercury__term_io__quoted_atom_agt_2_f_0(Name_7, (MR_Integer) 1);
            {
              Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
            }
            {
              Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Args_8));
              MR_hl_field(MR_mktag(3), Var_42, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[6])));
            }
            {
              Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
              MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_83, 0) = ((MR_Box) (Var_41));
            }
            {
              Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
              MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[5])));
            }
            {
              Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[6])));
              MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_82));
            }
            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_40, 0) = ((MR_Box) (Var_79));
            }
            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
              MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[10])));
            }
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1])));
              MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
            }
            {
              Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
              MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
            }
            {
              Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
            }
            {
              Var_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_93, 0) = ((MR_Box) (Var_31));
            }
            {
              Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
              MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[9])));
            }
            {
              Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[7])));
              MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_92));
            }
            {
              Doc0_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Doc0_12, 0) = ((MR_Box) (Var_89));
            }
          }
        }
      }
    }
    mercury__pretty_printer__decrement_limit_2_p_0(STATE_VARIABLE_Limit_0_14, STATE_VARIABLE_Limit_15);
    mercury__pretty_printer__set_func_symbol_limit_correctly_3_p_0(*STATE_VARIABLE_Limit_15, Doc0_12, Doc_9);
  }
}

static void MR_CALL 
mercury__pretty_printer__decrement_limit_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Integer N_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Var_4 = (MR_Integer) ((MR_Unsigned) N_3 - (MR_Unsigned) 1);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_4));
    }
  }
  else
  {
    MR_Integer N_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Var_7 = (MR_Integer) ((MR_Unsigned) N_6 - (MR_Unsigned) 1);

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_7));
    }
  }
}

static void MR_CALL 
mercury__pretty_printer__set_func_symbol_limit_correctly_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Doc_3)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    *Doc_3 = HeadVar__2_2;
  else
  {
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) (HeadVar__1_1));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_12, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Var_12, 1) = ((MR_Box) (Var_13));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (Var_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Doc_3 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_10));
    }
  }
}

static MR_bool MR_CALL 
mercury__pretty_printer__expand_format_op_4_p_0(
  MR_String Op_1,
  MR_Word HeadVar__2_2,
  MR_Integer CurrentPri_3,
  MR_Word * Docs_4)
{
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_110;
    MR_Word Var_111;

    if (succeeded)
    {
      Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      if ((Var_110 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer OpPri_9;
        MR_Word Assoc_10;

        mercury__ops__init_mercury_op_table_0_f_0();
        succeeded = mercury__ops__lookup_prefix_op_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Op_1, &OpPri_9, &Assoc_10);
        if (succeeded)
        {
          MR_Word Doc_11;
          MR_Word Var_14;
          MR_Word Var_15;
          MR_Word Var_16;
          MR_Word Var_17;
          MR_Word Var_18;
          MR_Integer Var_19;
          MR_Word Var_20;
          MR_Word Var_21;

          {
            Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Op_1));
          }
          Var_19 = mercury__pretty_printer__adjust_priority_2_f_0(OpPri_9, Assoc_10);
          {
            Var_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_18, 0) = ((MR_Box) (Var_19));
          }
          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (Var_18));
          }
          {
            Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (Var_111));
          }
          {
            Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
            MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
            MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_20));
          }
          {
            Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Var_15));
            MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_16));
          }
          Doc_11 = mercury__pretty_printer__group_1_f_0(Var_14);
          *Docs_4 = mercury__pretty_printer__add_parens_if_needed_3_f_0(OpPri_9, CurrentPri_3, Doc_11);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Var_24;
          MR_Word Var_25;
          MR_Word Var_26;
          MR_Integer Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Integer OpPri_33;
          MR_Word Assoc_34;
          MR_Word Doc_35;

          mercury__ops__init_mercury_op_table_0_f_0();
          succeeded = mercury__ops__lookup_postfix_op_4_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Op_1, &OpPri_33, &Assoc_34);
          if (succeeded)
          {
            Var_27 = mercury__pretty_printer__adjust_priority_2_f_0(OpPri_33, Assoc_34);
            Var_32 = (MR_Word) ((MR_Unsigned) 0U);
            {
              Var_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_26, 0) = ((MR_Box) (Var_27));
            }
            {
              Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (Var_26));
            }
            {
              Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (Var_111));
            }
            {
              Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Op_1));
            }
            {
              Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
              MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
            }
            {
              Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
              MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
            }
            {
              Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
              MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_28));
            }
            Doc_35 = mercury__pretty_printer__group_1_f_0(Var_24);
            *Docs_4 = mercury__pretty_printer__add_parens_if_needed_3_f_0(OpPri_33, CurrentPri_3, Doc_35);
            succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        MR_Word ArgB_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_110, (MR_Integer) 0))));
        MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_110, (MR_Integer) 1))));
        MR_Integer OpPri_41;
        MR_Word AssocA_42;
        MR_Word AssocB_43;
        MR_Word TypeClassInfo_for_op_table_108;

        succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          mercury__ops__init_mercury_op_table_0_f_0();
          TypeClassInfo_for_op_table_108 = (MR_Word) (&mercury__pretty_printer_scalar_common_1[0]);
          succeeded = mercury__ops__lookup_infix_op_5_p_0(TypeClassInfo_for_op_table_108, ((MR_Box) ((MR_Integer) 0)), Op_1, &OpPri_41, &AssocA_42, &AssocB_43);
          if (succeeded)
          {
            MR_Word Doc_44;
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Integer Var_51;
            MR_Word Var_52;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Word Var_67;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Integer Var_72;
            MR_Word Var_73;
            MR_Word Var_74;

            Var_51 = mercury__pretty_printer__adjust_priority_2_f_0(OpPri_41, AssocA_42);
            {
              Var_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_50, 0) = ((MR_Box) (Var_51));
            }
            {
              Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (Var_50));
            }
            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (Var_111));
            }
            succeeded = (strcmp(Op_1, (MR_String) ".") == 0);
            if (succeeded)
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Op_1));
              }
            else
            {
              MR_Word Var_56;
              MR_Word Var_59;
              MR_Word Var_60;

              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Op_1));
              }
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
                MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[11])));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[3])));
                MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_55, 0) = ((MR_Box) (Var_56));
              }
            }
            Var_72 = mercury__pretty_printer__adjust_priority_2_f_0(OpPri_41, AssocB_43);
            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_71, 0) = ((MR_Box) (Var_72));
            }
            {
              Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (Var_71));
            }
            {
              Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (ArgB_38));
            }
            {
              Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
              MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
              MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_73));
            }
            {
              Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_69));
            }
            Var_66 = mercury__pretty_printer__indent_1_f_0(Var_67);
            {
              Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
              MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
              MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_65));
            }
            {
              Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
              MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_54));
            }
            {
              Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
              MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_52));
            }
            Doc_44 = mercury__pretty_printer__group_1_f_0(Var_48);
            *Docs_4 = mercury__pretty_printer__add_parens_if_needed_3_f_0(OpPri_41, CurrentPri_3, Doc_44);
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Integer Var_86;
            MR_Word Var_87;
            MR_Word Var_88;
            MR_Word Var_89;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_95;
            MR_Word Var_96;
            MR_Integer Var_97;
            MR_Word Var_98;
            MR_Word Var_99;
            MR_Word Var_100;
            MR_Word Var_101;
            MR_Integer OpPri_102;
            MR_Word AssocA_103;
            MR_Word AssocB_104;
            MR_Word Doc_105;

            mercury__ops__init_mercury_op_table_0_f_0();
            succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0((MR_Word) (&mercury__pretty_printer_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Op_1, &OpPri_102, &AssocA_103, &AssocB_104);
            if (succeeded)
            {
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Op_1));
              }
              Var_81 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[3]));
              Var_86 = mercury__pretty_printer__adjust_priority_2_f_0(OpPri_102, AssocA_103);
              {
                Var_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_85, 0) = ((MR_Box) (Var_86));
              }
              {
                Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (Var_85));
              }
              {
                Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) (Var_111));
              }
              Var_97 = mercury__pretty_printer__adjust_priority_2_f_0(OpPri_102, AssocB_104);
              Var_100 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_96, 0) = ((MR_Box) (Var_97));
              }
              {
                Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (Var_96));
              }
              {
                Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (ArgB_38));
              }
              {
                Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
                MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_100));
              }
              {
                Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
                MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_98));
              }
              Var_93 = mercury__pretty_printer__indent_1_f_0(Var_94);
              Var_101 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
                MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_101));
              }
              {
                Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_81));
                MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_92));
              }
              {
                Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
                MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_89));
              }
              {
                Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
                MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_87));
              }
              {
                Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
                MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_83));
              }
              {
                Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
                MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_80));
              }
              Doc_105 = mercury__pretty_printer__group_1_f_0(Var_78);
              *Docs_4 = mercury__pretty_printer__add_parens_if_needed_3_f_0(OpPri_102, CurrentPri_3, Doc_105);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_Integer MR_CALL 
mercury__pretty_printer__adjust_priority_2_f_0(
  MR_Integer Priority_4,
  MR_Word Assoc_5)
{
  {
    MR_Integer AdjustedPriority_6;

    switch (Assoc_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        AdjustedPriority_6 = (MR_Integer) ((MR_Unsigned) Priority_4 - (MR_Unsigned) 1);
        break;
      case (MR_Integer) 1:
        AdjustedPriority_6 = Priority_4;
        break;
    }
    return AdjustedPriority_6;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__add_parens_if_needed_3_f_0(
  MR_Integer OpPriority_5,
  MR_Integer EnclosingPriority_6,
  MR_Word Doc_7)
{
  {
    MR_bool succeeded = (OpPriority_5 > EnclosingPriority_6);
    MR_Word HeadVar__4_4;

    if (succeeded)
    {
      MR_Word Var_8;
      MR_Word Var_11;

      {
        Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Doc_7));
        MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[10])));
      }
      {
        Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1])));
        MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_11));
      }
      {
        HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), HeadVar__4_4, 0) = ((MR_Box) (Var_8));
      }
    }
    else
      HeadVar__4_4 = Doc_7;
    return HeadVar__4_4;
  }
}

static void MR_CALL 
mercury__pretty_printer__output_current_group_12_p_0(
  MR_Word TypeClassInfo_for_writer_71,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
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
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_IO_12 = STATE_VARIABLE_IO_0_11;
      *STATE_VARIABLE_RemainingLines_10 = STATE_VARIABLE_RemainingLines_0_9;
      *STATE_VARIABLE_RemainingWidth_8 = STATE_VARIABLE_RemainingWidth_0_7;
    }
    else
    {
      MR_Word Doc_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Docs0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_String String_36;

      succeeded = ((MR_tag((MR_Word) Doc_30)) == (MR_Integer) 1);
      if (succeeded)
      {
        String_36 = ((MR_String) ((MR_hl_field(MR_mktag(1), Doc_30, (MR_Integer) 0))));
        {
          MR_Box STATE_VARIABLE_IO_43_43;
          MR_Integer STATE_VARIABLE_RemainingWidth_44_44;
          MR_Integer Var_45;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_71, (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Word next_value_of_HeadVar__5_5;
          MR_Integer next_value_of_STATE_VARIABLE_RemainingWidth_0_7;
          MR_Box next_value_of_STATE_VARIABLE_IO_0_11;

          func_0(((MR_Box) (TypeClassInfo_for_writer_71)), HeadVar__1_1, ((MR_Box) (String_36)), STATE_VARIABLE_IO_0_11, &STATE_VARIABLE_IO_43_43);
          mercury__string__count_codepoints_loop_4_p_0(String_36, (MR_Integer) 0, (MR_Integer) 0, &Var_45);
          STATE_VARIABLE_RemainingWidth_44_44 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingWidth_0_7 - (MR_Unsigned) Var_45);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__5_5 = Docs0_31;
          next_value_of_STATE_VARIABLE_RemainingWidth_0_7 = STATE_VARIABLE_RemainingWidth_44_44;
          next_value_of_STATE_VARIABLE_IO_0_11 = STATE_VARIABLE_IO_43_43;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          STATE_VARIABLE_RemainingWidth_0_7 = next_value_of_STATE_VARIABLE_RemainingWidth_0_7;
          STATE_VARIABLE_IO_0_11 = next_value_of_STATE_VARIABLE_IO_0_11;
          continue;
        }
      }
      else
      {
        succeeded = (Doc_30 == (MR_Word) ((MR_Unsigned) 4U));
        if (succeeded)
        {
          MR_Integer STATE_VARIABLE_RemainingWidth_49_49;
          MR_Integer STATE_VARIABLE_RemainingLines_50_50;
          MR_Box STATE_VARIABLE_IO_51_51;

          mercury__pretty_printer__format_nl_8_p_0(TypeClassInfo_for_writer_71, HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, &STATE_VARIABLE_RemainingWidth_49_49, STATE_VARIABLE_RemainingLines_0_9, &STATE_VARIABLE_RemainingLines_50_50, STATE_VARIABLE_IO_0_11, &STATE_VARIABLE_IO_51_51);
          succeeded = (STATE_VARIABLE_RemainingLines_50_50 <= (MR_Integer) 0);
          if (succeeded)
          {
            *HeadVar__6_6 = Docs0_31;
            *STATE_VARIABLE_IO_12 = STATE_VARIABLE_IO_51_51;
            *STATE_VARIABLE_RemainingLines_10 = STATE_VARIABLE_RemainingLines_50_50;
            *STATE_VARIABLE_RemainingWidth_8 = STATE_VARIABLE_RemainingWidth_49_49;
          }
          else
          {
            MR_Word next_value_of_HeadVar__5_5 = Docs0_31;
            MR_Integer next_value_of_STATE_VARIABLE_RemainingWidth_0_7 = STATE_VARIABLE_RemainingWidth_49_49;
            MR_Integer next_value_of_STATE_VARIABLE_RemainingLines_0_9 = STATE_VARIABLE_RemainingLines_50_50;
            MR_Box next_value_of_STATE_VARIABLE_IO_0_11 = STATE_VARIABLE_IO_51_51;

            // direct tailcall eliminated
            ;
            HeadVar__5_5 = next_value_of_HeadVar__5_5;
            STATE_VARIABLE_RemainingWidth_0_7 = next_value_of_STATE_VARIABLE_RemainingWidth_0_7;
            STATE_VARIABLE_RemainingLines_0_9 = next_value_of_STATE_VARIABLE_RemainingLines_0_9;
            STATE_VARIABLE_IO_0_11 = next_value_of_STATE_VARIABLE_IO_0_11;
            continue;
          }
        }
        else
        {
          MR_Word Var_56;

          succeeded = ((((MR_tag((MR_Word) Doc_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Doc_30, (MR_Integer) 0)))) == (MR_Integer) 4)));
          if (succeeded)
          {
            Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_30, (MR_Integer) 1))));
            succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            MR_Integer Var_57 = (MR_Integer) ((MR_Unsigned) HeadVar__4_4 + (MR_Unsigned) 1);
            MR_Integer next_value_of_HeadVar__4_4 = Var_57;
            MR_Word next_value_of_HeadVar__5_5 = Docs0_31;

            // direct tailcall eliminated
            ;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            HeadVar__5_5 = next_value_of_HeadVar__5_5;
            continue;
          }
          else
          {
            MR_Word Var_62;

            succeeded = ((((MR_tag((MR_Word) Doc_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Doc_30, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Doc_30, (MR_Integer) 1))));
              succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 4U));
            }
            if (succeeded)
            {
              succeeded = (HeadVar__4_4 == (MR_Integer) 1);
              if (succeeded)
              {
                *HeadVar__6_6 = Docs0_31;
                *STATE_VARIABLE_IO_12 = STATE_VARIABLE_IO_0_11;
                *STATE_VARIABLE_RemainingLines_10 = STATE_VARIABLE_RemainingLines_0_9;
                *STATE_VARIABLE_RemainingWidth_8 = STATE_VARIABLE_RemainingWidth_0_7;
              }
              else
              {
                MR_Integer Var_63 = (MR_Integer) ((MR_Unsigned) HeadVar__4_4 - (MR_Unsigned) 1);
                MR_Integer next_value_of_HeadVar__4_4 = Var_63;
                MR_Word next_value_of_HeadVar__5_5 = Docs0_31;

                // direct tailcall eliminated
                ;
                HeadVar__4_4 = next_value_of_HeadVar__4_4;
                HeadVar__5_5 = next_value_of_HeadVar__5_5;
                continue;
              }
            }
            else
            {
              MR_Word next_value_of_HeadVar__5_5 = Docs0_31;

              // direct tailcall eliminated
              ;
              HeadVar__5_5 = next_value_of_HeadVar__5_5;
              continue;
            }
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__pretty_printer__format_nl_8_p_0(
  MR_Word TypeClassInfo_for_writer_24,
  MR_Box Stream_9,
  MR_Integer LineWidth_10,
  MR_Word Indents_11,
  MR_Integer * RemainingWidth_12,
  MR_Integer STATE_VARIABLE_RemainingLines_0_15,
  MR_Integer * STATE_VARIABLE_RemainingLines_16,
  MR_Box STATE_VARIABLE_IO_0_17,
  MR_Box * STATE_VARIABLE_IO_18)
{
  {
    MR_Box STATE_VARIABLE_IO_20_20;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_24, (MR_Integer) 0)), (MR_Integer) 5))));

    func_0(((MR_Box) (TypeClassInfo_for_writer_24)), Stream_9, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_IO_0_17, &STATE_VARIABLE_IO_20_20);
    mercury__pretty_printer__output_indentation_6_p_0(TypeClassInfo_for_writer_24, Stream_9, Indents_11, LineWidth_10, RemainingWidth_12, STATE_VARIABLE_IO_20_20, STATE_VARIABLE_IO_18);
    *STATE_VARIABLE_RemainingLines_16 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingLines_0_15 - (MR_Unsigned) 1);
  }
}

static void MR_CALL 
mercury__pretty_printer__output_indentation_6_p_0(
  MR_Word TypeClassInfo_for_writer_28,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_RemainingWidth_0_3,
  MR_Integer * STATE_VARIABLE_RemainingWidth_4,
  MR_Box STATE_VARIABLE_IO_0_5,
  MR_Box * STATE_VARIABLE_IO_6)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_IO_6 = STATE_VARIABLE_IO_0_5;
    *STATE_VARIABLE_RemainingWidth_4 = STATE_VARIABLE_RemainingWidth_0_3;
  }
  else
  {
    MR_Word IndentStack_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_String Indent_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer STATE_VARIABLE_RemainingWidth_23_23;
    MR_Box STATE_VARIABLE_IO_24_24;
    MR_Integer Var_27;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__pretty_printer__output_indentation_6_p_0(TypeClassInfo_for_writer_28, HeadVar__1_1, IndentStack_15, STATE_VARIABLE_RemainingWidth_0_3, &STATE_VARIABLE_RemainingWidth_23_23, STATE_VARIABLE_IO_0_5, &STATE_VARIABLE_IO_24_24);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_28, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_writer_28)), HeadVar__1_1, ((MR_Box) (Indent_16)), STATE_VARIABLE_IO_24_24, STATE_VARIABLE_IO_6);
    mercury__string__count_codepoints_loop_4_p_0(Indent_16, (MR_Integer) 0, (MR_Integer) 0, &Var_27);
    *STATE_VARIABLE_RemainingWidth_4 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RemainingWidth_23_23 - (MR_Unsigned) Var_27);
  }
}

static MR_Integer MR_CALL 
mercury__pretty_printer__count_indent_codepoints_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word IndentStack_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String Indent_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Var_5;
      MR_Integer Var_6;

      Var_5 = mercury__pretty_printer__count_indent_codepoints_1_f_0(IndentStack_3);
      mercury__string__count_codepoints_loop_4_p_0(Indent_4, (MR_Integer) 0, (MR_Integer) 0, &Var_6);
      HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Var_5 + (MR_Unsigned) Var_6);
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pretty_printer__format_arg_1_f_0(
  MR_Word Doc_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;
    MR_Word Var_5;
    MR_Word Var_6;
    MR_Integer Var_7;
    MR_Word Var_9;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_7;

    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pretty_printer_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 13))));
    conv1_Var_7 = func_0(((MR_Box) ((MR_Word) (&mercury__pretty_printer_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_7 = ((MR_Integer) (conv1_Var_7));
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_6, 0) = ((MR_Box) (Var_7));
    }
    {
      Var_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_5, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Var_5, 1) = ((MR_Box) (Var_6));
    }
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Doc_3));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_4, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), Var_4, 1) = ((MR_Box) (Var_9));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pretty_printer__format_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box X_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_5, X_3, &Var_4);
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pretty_printer__group_1_f_0(
  MR_Word Docs_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;
    MR_Word Var_7;
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_8, 0) = ((MR_Box) (Docs_3));
    }
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_7, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), Var_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[9])));
    }
    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[7])));
      MR_hl_field(MR_mktag(1), Var_4, 1) = ((MR_Box) (Var_7));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pretty_printer__indent_1_f_0(
  MR_Word Docs_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_7;
    MR_Word Var_10;
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_11, 0) = ((MR_Box) (Docs_3));
    }
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[5])));
    }
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[6])));
      MR_hl_field(MR_mktag(1), Var_7, 1) = ((MR_Box) (Var_10));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_7));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pretty_printer__indent_2_f_0(
  MR_String Indent_4,
  MR_Word Docs_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Indent_4));
    }
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_7, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Var_7, 1) = ((MR_Box) (Var_8));
    }
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_10, 0) = ((MR_Box) (Docs_5));
    }
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[5])));
    }
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) (Var_9));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____doc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__pretty_printer____Unify____doc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__pretty_printer____Compare____doc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__pretty_printer____Compare____doc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____docs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__pretty_printer____Unify____docs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__pretty_printer____Compare____docs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__pretty_printer____Compare____docs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__pretty_printer____Unify____formatter_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__pretty_printer____Compare____formatter_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__pretty_printer____Compare____formatter_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__pretty_printer____Unify____formatter_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__pretty_printer____Compare____formatter_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__pretty_printer____Compare____formatter_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____func_symbol_limit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__pretty_printer____Unify____func_symbol_limit_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__pretty_printer____Compare____func_symbol_limit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__pretty_printer____Compare____func_symbol_limit_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____indent_stack_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__pretty_printer____Unify____indent_stack_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__pretty_printer____Compare____indent_stack_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__pretty_printer____Compare____indent_stack_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_internal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__pretty_printer____Unify____pp_internal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__pretty_printer____Compare____pp_internal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__pretty_printer____Compare____pp_internal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__pretty_printer____Unify____pp_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__pretty_printer____Compare____pp_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__pretty_printer____Compare____pp_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_func_symbol_limit_0);
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_indent_stack_0);
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_pp_internal_0);
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_pp_params_0);
}

void mercury__pretty_printer__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__pretty_printer__required_init(void)
{
	mercury__pretty_printer__user_init_pred_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__pretty_printer__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module pretty_printer.
