/*
** Automatically generated from `pretty_printer.m'
** by the Mercury compiler,
** version 2016-10-30
** configured for x86_64-apple-darwin13.4.0.
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


/* :- module pretty_printer. */
/* :- implementation. */

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

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____doc_0_0_10001(
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer____Compare____doc_0_0_10001(
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2,
  MR_Box mercury__pretty_printer__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____docs_0_0_10001(
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer____Compare____docs_0_0_10001(
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2,
  MR_Box mercury__pretty_printer__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_0_0_10001(
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer____Compare____formatter_0_0_10001(
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2,
  MR_Box mercury__pretty_printer__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_map_0_0_10001(
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer____Compare____formatter_map_0_0_10001(
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2,
  MR_Box mercury__pretty_printer__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____func_symbol_limit_0_0_10001(
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer____Compare____func_symbol_limit_0_0_10001(
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2,
  MR_Box mercury__pretty_printer__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____indent_stack_0_0_10001(
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer____Compare____indent_stack_0_0_10001(
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2,
  MR_Box mercury__pretty_printer__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_internal_0_0_10001(
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer____Compare____pp_internal_0_0_10001(
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2,
  MR_Box mercury__pretty_printer__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_params_0_0_10001(
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer____Compare____pp_params_0_0_10001(
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2,
  MR_Box mercury__pretty_printer__wrapper_arg_3);

static MR_Integer MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4);

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4);

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4);

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho8_6_p_0_1(
  MR_Box mercury__pretty_printer__closure_arg,
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho8_6_p_0(
  MR_String mercury__pretty_printer__ModuleName_7,
  MR_String mercury__pretty_printer__TypeName_8,
  MR_Integer mercury__pretty_printer__Arity_9,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_FMap_0_16,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho7_6_p_0_1(
  MR_Box mercury__pretty_printer__closure_arg,
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho7_6_p_0(
  MR_String mercury__pretty_printer__ModuleName_7,
  MR_String mercury__pretty_printer__TypeName_8,
  MR_Integer mercury__pretty_printer__Arity_9,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_FMap_0_16,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho6_6_p_0_1(
  MR_Box mercury__pretty_printer__closure_arg,
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho6_6_p_0(
  MR_String mercury__pretty_printer__ModuleName_7,
  MR_String mercury__pretty_printer__TypeName_8,
  MR_Integer mercury__pretty_printer__Arity_9,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_FMap_0_16,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho5_6_p_0_1(
  MR_Box mercury__pretty_printer__closure_arg,
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho5_6_p_0(
  MR_String mercury__pretty_printer__ModuleName_7,
  MR_String mercury__pretty_printer__TypeName_8,
  MR_Integer mercury__pretty_printer__Arity_9,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_FMap_0_16,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho4_6_p_0_1(
  MR_Box mercury__pretty_printer__closure_arg,
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho4_6_p_0(
  MR_String mercury__pretty_printer__ModuleName_7,
  MR_String mercury__pretty_printer__TypeName_8,
  MR_Integer mercury__pretty_printer__Arity_9,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_FMap_0_16,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho3_6_p_0_1(
  MR_Box mercury__pretty_printer__closure_arg,
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho3_6_p_0(
  MR_String mercury__pretty_printer__ModuleName_7,
  MR_String mercury__pretty_printer__TypeName_8,
  MR_Integer mercury__pretty_printer__Arity_9,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_FMap_0_16,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho2_6_p_0_1(
  MR_Box mercury__pretty_printer__closure_arg,
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho2_6_p_0(
  MR_String mercury__pretty_printer__ModuleName_7,
  MR_String mercury__pretty_printer__TypeName_8,
  MR_Integer mercury__pretty_printer__Arity_9,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_FMap_0_16,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_FMap_17);

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho1_6_p_0_1(
  MR_Box mercury__pretty_printer__closure_arg,
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2);

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho1_6_p_0(
  MR_String mercury__pretty_printer__ModuleName_7,
  MR_String mercury__pretty_printer__TypeName_8,
  MR_Integer mercury__pretty_printer__Arity_9,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_FMap_0_16,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_FMap_17);

static void MR_CALL 
mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0(void);

static void MR_CALL 
mercury__pretty_printer__pre_initialise_mutable_io_pp_params_0_p_0(void);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_tree234_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4,
  MR_Word mercury__pretty_printer__ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_list_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4,
  MR_Word mercury__pretty_printer__ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_version_array_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4,
  MR_Word mercury__pretty_printer__ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_array_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4,
  MR_Word mercury__pretty_printer__ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_string_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4,
  MR_Word mercury__pretty_printer___ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_int_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4,
  MR_Word mercury__pretty_printer___ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_float_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4,
  MR_Word mercury__pretty_printer___ArgDescs_5);

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_char_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4,
  MR_Word mercury__pretty_printer___ArgDescs_5);

static void MR_CALL 
mercury__pretty_printer__decrement_limit_2_p_0(
  MR_Word mercury__pretty_printer__HeadVar__1_1,
  MR_Word * mercury__pretty_printer__HeadVar__2_2);

static void MR_CALL 
mercury__pretty_printer__set_func_symbol_limit_correctly_3_p_0(
  MR_Word mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Word * mercury__pretty_printer__Doc_3);

static MR_Integer MR_CALL 
mercury__pretty_printer__adjust_priority_2_f_0(
  MR_Integer mercury__pretty_printer__Priority_4,
  MR_Word mercury__pretty_printer__Assoc_5);

static MR_Word MR_CALL 
mercury__pretty_printer__add_parens_if_needed_3_f_0(
  MR_Integer mercury__pretty_printer__OpPriority_5,
  MR_Integer mercury__pretty_printer__EnclosingPriority_6,
  MR_Word mercury__pretty_printer__Doc_7);

static MR_bool MR_CALL 
mercury__pretty_printer__expand_format_op_4_p_0(
  MR_String mercury__pretty_printer__Op_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Integer mercury__pretty_printer__CurrentPri_3,
  MR_Word * mercury__pretty_printer__Docs_4);

static void MR_CALL 
mercury__pretty_printer__expand_format_susp_4_p_0(
  MR_Word mercury__pretty_printer__Susp_5,
  MR_Word * mercury__pretty_printer__Doc_6,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_9,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_10);

static void MR_CALL 
mercury__pretty_printer__expand_format_term_6_p_0(
  MR_String mercury__pretty_printer__Name_7,
  MR_Word mercury__pretty_printer__Args_8,
  MR_Word * mercury__pretty_printer__Doc_9,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_14,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_15,
  MR_Integer mercury__pretty_printer__CurrentPri_11);

static void MR_CALL 
mercury__pretty_printer__expand_format_list_5_p_0(
  MR_Word mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Word * mercury__pretty_printer__HeadVar__3_3,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_4,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_5);

static void MR_CALL 
mercury__pretty_printer__expand_pp_7_p_1(
  MR_Word mercury__pretty_printer__Canonicalize_8,
  MR_Word mercury__pretty_printer__FMap_9,
  MR_Word mercury__pretty_printer__Univ_10,
  MR_Word * mercury__pretty_printer__Doc_11,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_25,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_26,
  MR_Integer mercury__pretty_printer__CurrentPri_13);

static void MR_CALL 
mercury__pretty_printer__expand_pp_7_p_0(
  MR_Word mercury__pretty_printer__Canonicalize_8,
  MR_Word mercury__pretty_printer__FMap_9,
  MR_Word mercury__pretty_printer__Univ_10,
  MR_Word * mercury__pretty_printer__Doc_11,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_25,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_26,
  MR_Integer mercury__pretty_printer__CurrentPri_13);

static void MR_CALL 
mercury__pretty_printer__output_indentation_6_p_0(
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_28,
  MR_Box mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_3,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_4,
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_5,
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_6);

static void MR_CALL 
mercury__pretty_printer__format_nl_8_p_0(
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_24,
  MR_Box mercury__pretty_printer__Stream_9,
  MR_Integer mercury__pretty_printer__LineWidth_10,
  MR_Word mercury__pretty_printer__Indents_11,
  MR_Integer * mercury__pretty_printer__RemainingWidth_12,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_15,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_16,
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_17,
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_18);

static void MR_CALL 
mercury__pretty_printer__expand_docs_11_p_1(
  MR_Word mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Word mercury__pretty_printer__HeadVar__3_3,
  MR_Word * mercury__pretty_printer__HeadVar__4_4,
  MR_Integer mercury__pretty_printer__HeadVar__5_5,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_6,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_7,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_8,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_9,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);

static void MR_CALL 
mercury__pretty_printer__expand_docs_11_p_0(
  MR_Word mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Word mercury__pretty_printer__HeadVar__3_3,
  MR_Word * mercury__pretty_printer__HeadVar__4_4,
  MR_Integer mercury__pretty_printer__HeadVar__5_5,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_6,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_7,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_8,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_9,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);

static void MR_CALL 
mercury__pretty_printer__output_current_group_12_p_0(
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_71,
  MR_Box mercury__pretty_printer__HeadVar__1_1,
  MR_Integer mercury__pretty_printer__HeadVar__2_2,
  MR_Word mercury__pretty_printer__HeadVar__3_3,
  MR_Integer mercury__pretty_printer__HeadVar__4_4,
  MR_Word mercury__pretty_printer__HeadVar__5_5,
  MR_Word * mercury__pretty_printer__HeadVar__6_6,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_8,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_10,
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_11,
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_12);

static MR_Integer MR_CALL 
mercury__pretty_printer__count_indent_codepoints_1_f_0(
  MR_Word mercury__pretty_printer__HeadVar__1_1);


static /* final */ const MR_Box mercury__pretty_printer_scalar_common_1[14][2];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_2[13][3];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_4[3][5];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_5[19][1];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_6[1][6];




static /* final */ const MR_Box mercury__pretty_printer_scalar_common_1[14][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[0])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_2[13][3] = {
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
    ((MR_Box) ((MR_Integer) 78)),
    ((MR_Box) ((MR_Integer) 100)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[13])))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho1_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho2_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho3_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho4_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho5_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho6_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho7_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter__ho8_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
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
    ((MR_Box) ((MR_String) "..."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "{"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) ", "))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "}"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "("))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) " "))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "\?array\?"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "\?version_array\?"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "\?list\?"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "\?tree234\?"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 100))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "\?char\?"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "\?float\?"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "\?int\?"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "\""))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "\?string\?"))
  },
};

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
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
#include "version_array.mh"
#line 969 "pretty_printer.m"

    MR_Bool ML_pretty_printer_is_initialised = MR_NO;
    MR_Word ML_pretty_printer_default_formatter_map = 0;

#line 1211 "pretty_printer.m"
MR_Word mercury__pretty_printer__mutable_variable_io_pp_params;
#ifdef MR_THREAD_SAFE
    MercuryLock mercury__pretty_printer__mutable_variable_io_pp_params_lock;
#endif

#line 1211 "pretty_printer.m"
void 
mercury__pretty_printer__user_init_pred_0(void)
#line 1211 "pretty_printer.m"
{
#line 1211 "pretty_printer.m"
	mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct1 mercury__pretty_printer__list__pti_list_1__plain_type_desc__type_ctor_info_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0
  }
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_0 = {
  (MR_String) "str",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__pretty_printer__pretty_printer__field_types_doc_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_1 = {
  (MR_String) "nl",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_2 = {
  (MR_String) "hard_nl",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1pretty_printer__type_ctor_info_doc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0
  }
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer__list__ti_list_1pretty_printer__type_ctor_info_doc_0
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_3 = {
  (MR_String) "docs",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mercury__pretty_printer__pretty_printer__field_types_doc_0_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_4 = {
  (MR_String) "format_univ",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 4,
  mercury__pretty_printer__pretty_printer__field_types_doc_0_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_5[2] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer__list__ti_list_1univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_5 = {
  (MR_String) "format_list",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 5,
  mercury__pretty_printer__pretty_printer__field_types_doc_0_5,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_6[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__pretty_printer__list__ti_list_1univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_6 = {
  (MR_String) "format_term",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 6,
  mercury__pretty_printer__pretty_printer__field_types_doc_0_6,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_VA_TypeInfo_Struct1 mercury__pretty_printer____vti_func_1pretty_printer__type_ctor_info_doc_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 1,
  {
    (MR_TypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0
  }
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer____vti_func_1pretty_printer__type_ctor_info_doc_0
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_7 = {
  (MR_String) "format_susp",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__pretty_printer__pretty_printer__field_types_doc_0_7,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_pp_internal_0
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_8 = {
  (MR_String) "pp_internal",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 8,
  mercury__pretty_printer__pretty_printer__field_types_doc_0_8,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_2
  },
  {
    (MR_Integer) 5,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____doc_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____doc_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "doc",
  {     mercury__pretty_printer__pretty_printer__du_name_ordered_doc_0 },
  {     mercury__pretty_printer__pretty_printer__du_ptag_ordered_doc_0 },
  (MR_Integer) 9,
  (MR_Integer) 4,
  mercury__pretty_printer__pretty_printer__functor_number_map_doc_0
};

const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_docs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pretty_printer____Unify____docs_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____docs_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "docs",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__pretty_printer__list__ti_list_1pretty_printer__type_ctor_info_doc_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1type_desc__type_ctor_info_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0
  }
};

static const MR_VA_TypeInfo_Struct3 mercury__pretty_printer____vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0,
    (MR_TypeInfo) &mercury__pretty_printer__list__ti_list_1type_desc__type_ctor_info_type_desc_0,
    (MR_TypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0
  }
};

const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_formatter_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pretty_printer____Unify____formatter_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____formatter_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "formatter",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__pretty_printer____vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__pretty_printer____vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0
  }
};

static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0
  }
};

static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0
  }
};

const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_formatter_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pretty_printer____Unify____formatter_map_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____formatter_map_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "formatter_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_func_symbol_limit_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_func_symbol_limit_0_0 = {
  (MR_String) "linear",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__pretty_printer__pretty_printer__field_types_func_symbol_limit_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_func_symbol_limit_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_func_symbol_limit_0_1 = {
  (MR_String) "triangular",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__pretty_printer__pretty_printer__field_types_func_symbol_limit_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_func_symbol_limit_0_0[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_func_symbol_limit_0_0
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_func_symbol_limit_0_1[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_func_symbol_limit_0_1
};

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_func_symbol_limit_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_func_symbol_limit_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_func_symbol_limit_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____func_symbol_limit_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____func_symbol_limit_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "func_symbol_limit",
  {     mercury__pretty_printer__pretty_printer__du_name_ordered_func_symbol_limit_0 },
  {     mercury__pretty_printer__pretty_printer__du_ptag_ordered_func_symbol_limit_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__pretty_printer__pretty_printer__functor_number_map_func_symbol_limit_0
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_0 = {
  (MR_String) "indent_empty",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_indent_stack_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_indent_stack_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_1 = {
  (MR_String) "indent_nonempty",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__pretty_printer__pretty_printer__field_types_indent_stack_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_indent_stack_0_0[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_0
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_indent_stack_0_1[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_indent_stack_0_1
};

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_indent_stack_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_indent_stack_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_indent_stack_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____indent_stack_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____indent_stack_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "indent_stack",
  {     mercury__pretty_printer__pretty_printer__du_name_ordered_indent_stack_0 },
  {     mercury__pretty_printer__pretty_printer__du_ptag_ordered_indent_stack_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__pretty_printer__pretty_printer__functor_number_map_indent_stack_0
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_0 = {
  (MR_String) "open_group",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_1 = {
  (MR_String) "close_group",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_2 = {
  (MR_String) "indent",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_3 = {
  (MR_String) "outdent",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_4 = {
  (MR_String) "set_op_priority",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 4,
  mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_func_symbol_limit_0
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_5 = {
  (MR_String) "set_limit",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 5,
  mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_5,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____pp_internal_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____pp_internal_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "pp_internal",
  {     mercury__pretty_printer__pretty_printer__du_name_ordered_pp_internal_0 },
  {     mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_internal_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mercury__pretty_printer__pretty_printer__functor_number_map_pp_internal_0
};

static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_params_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_func_symbol_limit_0
};

static const MR_ConstString mercury__pretty_printer__pretty_printer__field_names_pp_params_0_0[3] = {
  (MR_String) "pp_line_width",
  (MR_String) "pp_max_lines",
  (MR_String) "pp_limit"
};

static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_params_0_0 = {
  (MR_String) "pp_params",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__pretty_printer__pretty_printer__field_types_pp_params_0_0,
  mercury__pretty_printer__pretty_printer__field_names_pp_params_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_params_0_0[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_params_0_0
};

static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_params_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____pp_params_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____pp_params_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "pp_params",
  {     mercury__pretty_printer__pretty_printer__du_name_ordered_pp_params_0 },
  {     mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__pretty_printer__pretty_printer__functor_number_map_pp_params_0
};

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____doc_0_0_10001(
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

    {
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____doc_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
    return mercury__pretty_printer__succeeded;
  }
}

static void MR_CALL 
mercury__pretty_printer____Compare____doc_0_0_10001(
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2,
  MR_Box mercury__pretty_printer__wrapper_arg_3)
{
  {
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

    {
      mercury__pretty_printer____Compare____doc_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____docs_0_0_10001(
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

    {
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____docs_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
    return mercury__pretty_printer__succeeded;
  }
}

static void MR_CALL 
mercury__pretty_printer____Compare____docs_0_0_10001(
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2,
  MR_Box mercury__pretty_printer__wrapper_arg_3)
{
  {
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

    {
      mercury__pretty_printer____Compare____docs_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_0_0_10001(
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

    {
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____formatter_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
    return mercury__pretty_printer__succeeded;
  }
}

static void MR_CALL 
mercury__pretty_printer____Compare____formatter_0_0_10001(
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2,
  MR_Box mercury__pretty_printer__wrapper_arg_3)
{
  {
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

    {
      mercury__pretty_printer____Compare____formatter_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_map_0_0_10001(
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

    {
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____formatter_map_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
    return mercury__pretty_printer__succeeded;
  }
}

static void MR_CALL 
mercury__pretty_printer____Compare____formatter_map_0_0_10001(
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2,
  MR_Box mercury__pretty_printer__wrapper_arg_3)
{
  {
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

    {
      mercury__pretty_printer____Compare____formatter_map_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____func_symbol_limit_0_0_10001(
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

    {
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____func_symbol_limit_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
    return mercury__pretty_printer__succeeded;
  }
}

static void MR_CALL 
mercury__pretty_printer____Compare____func_symbol_limit_0_0_10001(
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2,
  MR_Box mercury__pretty_printer__wrapper_arg_3)
{
  {
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

    {
      mercury__pretty_printer____Compare____func_symbol_limit_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____indent_stack_0_0_10001(
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

    {
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____indent_stack_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
    return mercury__pretty_printer__succeeded;
  }
}

static void MR_CALL 
mercury__pretty_printer____Compare____indent_stack_0_0_10001(
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2,
  MR_Box mercury__pretty_printer__wrapper_arg_3)
{
  {
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

    {
      mercury__pretty_printer____Compare____indent_stack_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_internal_0_0_10001(
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

    {
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____pp_internal_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
    return mercury__pretty_printer__succeeded;
  }
}

static void MR_CALL 
mercury__pretty_printer____Compare____pp_internal_0_0_10001(
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2,
  MR_Box mercury__pretty_printer__wrapper_arg_3)
{
  {
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

    {
      mercury__pretty_printer____Compare____pp_internal_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_params_0_0_10001(
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

    {
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____pp_params_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
    return mercury__pretty_printer__succeeded;
  }
}

static void MR_CALL 
mercury__pretty_printer____Compare____pp_params_0_0_10001(
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2,
  MR_Box mercury__pretty_printer__wrapper_arg_3)
{
  {
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

    {
      mercury__pretty_printer____Compare____pp_params_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

    return (MR_Integer) 1200;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__HeadVar__3_3;
    MR_String mercury__pretty_printer__X_6;
    MR_Word mercury__pretty_printer__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Box mercury__pretty_printer__conv0_X_6;

    {
      mercury__pretty_printer__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__pretty_printer__TypeCtorInfo_8_8, &mercury__pretty_printer__conv0_X_6, mercury__pretty_printer__Univ_4);
    }
    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__X_6 = ((MR_String) mercury__pretty_printer__conv0_X_6);
        mercury__pretty_printer__succeeded = MR_TRUE;
      }
    if (mercury__pretty_printer__succeeded)
      {
        MR_Word mercury__pretty_printer__V_4_12;
        MR_Word mercury__pretty_printer__V_7_14;
        MR_Word mercury__pretty_printer__V_8_16;
        MR_Word mercury__pretty_printer__V_9_17;
        MR_Word mercury__pretty_printer__V_10_18 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[17]);
        MR_Word mercury__pretty_printer__V_12_19;

        {
          mercury__pretty_printer__V_8_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_8_16, 0) = ((MR_Box) (mercury__pretty_printer__X_6));
        }
        mercury__pretty_printer__V_12_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__pretty_printer__V_9_17 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[13]);
        {
          mercury__pretty_printer__V_7_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_14, 0) = ((MR_Box) (mercury__pretty_printer__V_8_16));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_14, 1) = ((MR_Box) (mercury__pretty_printer__V_9_17));
        }
        {
          mercury__pretty_printer__V_4_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_12, 0) = ((MR_Box) (mercury__pretty_printer__V_10_18));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_12, 1) = ((MR_Box) (mercury__pretty_printer__V_7_14));
        }
        {
          mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_4_12));
        }
      }
    else
      {
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[18]);
      }
    return mercury__pretty_printer__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__HeadVar__3_3;
    MR_Integer mercury__pretty_printer__X_6;
    MR_Word mercury__pretty_printer__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Box mercury__pretty_printer__conv0_X_6;

    {
      mercury__pretty_printer__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__pretty_printer__TypeCtorInfo_8_8, &mercury__pretty_printer__conv0_X_6, mercury__pretty_printer__Univ_4);
    }
    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__X_6 = ((MR_Integer) mercury__pretty_printer__conv0_X_6);
        mercury__pretty_printer__succeeded = MR_TRUE;
      }
    if (mercury__pretty_printer__succeeded)
      {
        MR_String mercury__pretty_printer__V_4_12;

        {
          mercury__string__int_to_base_string_3_p_0(mercury__pretty_printer__X_6, (MR_Integer) 10, &mercury__pretty_printer__V_4_12);
        }
        {
          mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_4_12));
        }
      }
    else
      {
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[16]);
      }
    return mercury__pretty_printer__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__HeadVar__3_3;
    MR_Float mercury__pretty_printer__X_6;
    MR_Word mercury__pretty_printer__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
    MR_Box mercury__pretty_printer__conv0_X_6;

    {
      mercury__pretty_printer__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__pretty_printer__TypeCtorInfo_8_8, &mercury__pretty_printer__conv0_X_6, mercury__pretty_printer__Univ_4);
    }
    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__X_6 = MR_unbox_float(mercury__pretty_printer__conv0_X_6);
        mercury__pretty_printer__succeeded = MR_TRUE;
      }
    if (mercury__pretty_printer__succeeded)
      {
        MR_String mercury__pretty_printer__V_4_12;

{
#define MR_PROC_LABEL mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__pretty_printer__X_6 ;
		{
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_4_12  = Str;
}
        {
          mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_4_12));
        }
      }
    else
      {
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[15]);
      }
    return mercury__pretty_printer__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__HeadVar__3_3;
    MR_Char mercury__pretty_printer__X_6;
    MR_Word mercury__pretty_printer__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
    MR_Box mercury__pretty_printer__conv0_X_6;

    {
      mercury__pretty_printer__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__pretty_printer__TypeCtorInfo_8_8, &mercury__pretty_printer__conv0_X_6, mercury__pretty_printer__Univ_4);
    }
    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__X_6 = ((MR_Char) (MR_Word) mercury__pretty_printer__conv0_X_6);
        mercury__pretty_printer__succeeded = MR_TRUE;
      }
    if (mercury__pretty_printer__succeeded)
      {
        MR_String mercury__pretty_printer__V_4_12;

        {
          mercury__pretty_printer__V_4_12 = mercury__term_io__quoted_char_1_f_0(mercury__pretty_printer__X_6);
        }
        {
          mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_4_12));
        }
      }
    else
      {
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[14]);
      }
    return mercury__pretty_printer__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho8_6_p_0_1(
  MR_Box mercury__pretty_printer__closure_arg,
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2)
{
  {
    MR_Box mercury__pretty_printer__wrapper_arg_3;
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

    {
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_char_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
    return mercury__pretty_printer__wrapper_arg_3;
  }
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho8_6_p_0(
  MR_String mercury__pretty_printer__ModuleName_7,
  MR_String mercury__pretty_printer__TypeName_8,
  MR_Integer mercury__pretty_printer__Arity_9,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_FMap_0_16,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_FMap_17)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__Formatter_10 = (MR_Word) &mercury__pretty_printer_scalar_common_2[12];
    MR_Word mercury__pretty_printer__FMapTypeArity0_12;
    MR_Word mercury__pretty_printer__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mercury__pretty_printer__TypeInfo_24_24 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
    MR_Box mercury__pretty_printer__conv1_FMapTypeArity0_12;

    {
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_23_23, mercury__pretty_printer__TypeInfo_24_24, mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMapTypeArity0_12);
    }
    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__FMapTypeArity0_12 = ((MR_Word) mercury__pretty_printer__conv1_FMapTypeArity0_12);
        mercury__pretty_printer__succeeded = MR_TRUE;
      }
    if (mercury__pretty_printer__succeeded)
      {
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_35;
        MR_Word mercury__pretty_printer__TypeInfo_36_36;
        MR_Word mercury__pretty_printer__FMapTypeArity_15;
        MR_Word mercury__pretty_printer__FMapArity0_13;
        MR_Word mercury__pretty_printer__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word mercury__pretty_printer__TypeInfo_26_26 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
        MR_Box mercury__pretty_printer__conv2_FMapArity0_13;

        {
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_25_25, mercury__pretty_printer__TypeInfo_26_26, mercury__pretty_printer__FMapTypeArity0_12, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMapArity0_13);
        }
        if (mercury__pretty_printer__succeeded)
          {
            mercury__pretty_printer__FMapArity0_13 = ((MR_Word) mercury__pretty_printer__conv2_FMapArity0_13);
            mercury__pretty_printer__succeeded = MR_TRUE;
          }
        if (mercury__pretty_printer__succeeded)
          {
            MR_Word mercury__pretty_printer__TypeInfo_28_28 = (MR_Word) &mercury__pretty_printer_scalar_common_4[1];
            MR_Word mercury__pretty_printer__TypeCtorInfo_29_29;
            MR_Word mercury__pretty_printer__TypeInfo_30_30;
            MR_Word mercury__pretty_printer__FMapArity_14;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__pretty_printer__TypeInfo_28_28, mercury__pretty_printer__Arity_9, ((MR_Box) (mercury__pretty_printer__Formatter_10)), mercury__pretty_printer__FMapArity0_13, &mercury__pretty_printer__FMapArity_14);
            }
            mercury__pretty_printer__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            mercury__pretty_printer__TypeInfo_30_30 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
            {
              mercury__map__det_update_4_p_0(mercury__pretty_printer__TypeCtorInfo_29_29, mercury__pretty_printer__TypeInfo_30_30, ((MR_Box) (mercury__pretty_printer__TypeName_8)), ((MR_Box) (mercury__pretty_printer__FMapArity_14)), mercury__pretty_printer__FMapTypeArity0_12, &mercury__pretty_printer__FMapTypeArity_15);
            }
          }
        else
          {
            MR_Word mercury__pretty_printer__TypeCtorInfo_33_33;
            MR_Word mercury__pretty_printer__TypeInfo_34_34;
            MR_Word mercury__pretty_printer__FMapArity_20;
            MR_Word mercury__pretty_printer__V_6_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word mercury__pretty_printer__V_7_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__pretty_printer__FMapArity_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 0) = ((MR_Box) (mercury__pretty_printer__Arity_9));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 1) = ((MR_Box) (mercury__pretty_printer__Formatter_10));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 2) = ((MR_Box) (mercury__pretty_printer__V_6_53));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 3) = ((MR_Box) (mercury__pretty_printer__V_7_54));
            }
            mercury__pretty_printer__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            mercury__pretty_printer__TypeInfo_34_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
            {
              mercury__map__det_insert_4_p_0(mercury__pretty_printer__TypeCtorInfo_33_33, mercury__pretty_printer__TypeInfo_34_34, ((MR_Box) (mercury__pretty_printer__TypeName_8)), ((MR_Box) (mercury__pretty_printer__FMapArity_20)), mercury__pretty_printer__FMapTypeArity0_12, &mercury__pretty_printer__FMapTypeArity_15);
            }
          }
        mercury__pretty_printer__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__pretty_printer__TypeInfo_36_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
        {
          mercury__map__det_update_4_p_0(mercury__pretty_printer__TypeCtorInfo_35_35, mercury__pretty_printer__TypeInfo_36_36, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), ((MR_Box) (mercury__pretty_printer__FMapTypeArity_15)), mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, mercury__pretty_printer__STATE_VARIABLE_FMap_17);
        }
      }
    else
      {
        MR_Word mercury__pretty_printer__TypeCtorInfo_39_39;
        MR_Word mercury__pretty_printer__TypeInfo_41_41;
        MR_Word mercury__pretty_printer__FMapArity_21;
        MR_Word mercury__pretty_printer__FMapTypeArity_22;
        MR_Word mercury__pretty_printer__V_6_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__pretty_printer__V_7_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__pretty_printer__V_6_71;
        MR_Word mercury__pretty_printer__V_7_72;

        {
          mercury__pretty_printer__FMapArity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 0) = ((MR_Box) (mercury__pretty_printer__Arity_9));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 1) = ((MR_Box) (mercury__pretty_printer__Formatter_10));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 2) = ((MR_Box) (mercury__pretty_printer__V_6_62));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 3) = ((MR_Box) (mercury__pretty_printer__V_7_63));
        }
        mercury__pretty_printer__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__pretty_printer__V_6_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__pretty_printer__V_7_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__pretty_printer__FMapTypeArity_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 0) = ((MR_Box) (mercury__pretty_printer__TypeName_8));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 1) = ((MR_Box) (mercury__pretty_printer__FMapArity_21));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 2) = ((MR_Box) (mercury__pretty_printer__V_6_71));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 3) = ((MR_Box) (mercury__pretty_printer__V_7_72));
        }
        mercury__pretty_printer__TypeInfo_41_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
        {
          mercury__map__det_insert_4_p_0(mercury__pretty_printer__TypeCtorInfo_39_39, mercury__pretty_printer__TypeInfo_41_41, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), ((MR_Box) (mercury__pretty_printer__FMapTypeArity_22)), mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, mercury__pretty_printer__STATE_VARIABLE_FMap_17);
        }
      }
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho7_6_p_0_1(
  MR_Box mercury__pretty_printer__closure_arg,
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2)
{
  {
    MR_Box mercury__pretty_printer__wrapper_arg_3;
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

    {
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_float_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
    return mercury__pretty_printer__wrapper_arg_3;
  }
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho7_6_p_0(
  MR_String mercury__pretty_printer__ModuleName_7,
  MR_String mercury__pretty_printer__TypeName_8,
  MR_Integer mercury__pretty_printer__Arity_9,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_FMap_0_16,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_FMap_17)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__Formatter_10 = (MR_Word) &mercury__pretty_printer_scalar_common_2[11];
    MR_Word mercury__pretty_printer__FMapTypeArity0_12;
    MR_Word mercury__pretty_printer__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mercury__pretty_printer__TypeInfo_24_24 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
    MR_Box mercury__pretty_printer__conv1_FMapTypeArity0_12;

    {
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_23_23, mercury__pretty_printer__TypeInfo_24_24, mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMapTypeArity0_12);
    }
    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__FMapTypeArity0_12 = ((MR_Word) mercury__pretty_printer__conv1_FMapTypeArity0_12);
        mercury__pretty_printer__succeeded = MR_TRUE;
      }
    if (mercury__pretty_printer__succeeded)
      {
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_35;
        MR_Word mercury__pretty_printer__TypeInfo_36_36;
        MR_Word mercury__pretty_printer__FMapTypeArity_15;
        MR_Word mercury__pretty_printer__FMapArity0_13;
        MR_Word mercury__pretty_printer__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word mercury__pretty_printer__TypeInfo_26_26 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
        MR_Box mercury__pretty_printer__conv2_FMapArity0_13;

        {
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_25_25, mercury__pretty_printer__TypeInfo_26_26, mercury__pretty_printer__FMapTypeArity0_12, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMapArity0_13);
        }
        if (mercury__pretty_printer__succeeded)
          {
            mercury__pretty_printer__FMapArity0_13 = ((MR_Word) mercury__pretty_printer__conv2_FMapArity0_13);
            mercury__pretty_printer__succeeded = MR_TRUE;
          }
        if (mercury__pretty_printer__succeeded)
          {
            MR_Word mercury__pretty_printer__TypeInfo_28_28 = (MR_Word) &mercury__pretty_printer_scalar_common_4[1];
            MR_Word mercury__pretty_printer__TypeCtorInfo_29_29;
            MR_Word mercury__pretty_printer__TypeInfo_30_30;
            MR_Word mercury__pretty_printer__FMapArity_14;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__pretty_printer__TypeInfo_28_28, mercury__pretty_printer__Arity_9, ((MR_Box) (mercury__pretty_printer__Formatter_10)), mercury__pretty_printer__FMapArity0_13, &mercury__pretty_printer__FMapArity_14);
            }
            mercury__pretty_printer__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            mercury__pretty_printer__TypeInfo_30_30 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
            {
              mercury__map__det_update_4_p_0(mercury__pretty_printer__TypeCtorInfo_29_29, mercury__pretty_printer__TypeInfo_30_30, ((MR_Box) (mercury__pretty_printer__TypeName_8)), ((MR_Box) (mercury__pretty_printer__FMapArity_14)), mercury__pretty_printer__FMapTypeArity0_12, &mercury__pretty_printer__FMapTypeArity_15);
            }
          }
        else
          {
            MR_Word mercury__pretty_printer__TypeCtorInfo_33_33;
            MR_Word mercury__pretty_printer__TypeInfo_34_34;
            MR_Word mercury__pretty_printer__FMapArity_20;
            MR_Word mercury__pretty_printer__V_6_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word mercury__pretty_printer__V_7_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__pretty_printer__FMapArity_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 0) = ((MR_Box) (mercury__pretty_printer__Arity_9));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 1) = ((MR_Box) (mercury__pretty_printer__Formatter_10));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 2) = ((MR_Box) (mercury__pretty_printer__V_6_53));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 3) = ((MR_Box) (mercury__pretty_printer__V_7_54));
            }
            mercury__pretty_printer__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            mercury__pretty_printer__TypeInfo_34_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
            {
              mercury__map__det_insert_4_p_0(mercury__pretty_printer__TypeCtorInfo_33_33, mercury__pretty_printer__TypeInfo_34_34, ((MR_Box) (mercury__pretty_printer__TypeName_8)), ((MR_Box) (mercury__pretty_printer__FMapArity_20)), mercury__pretty_printer__FMapTypeArity0_12, &mercury__pretty_printer__FMapTypeArity_15);
            }
          }
        mercury__pretty_printer__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__pretty_printer__TypeInfo_36_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
        {
          mercury__map__det_update_4_p_0(mercury__pretty_printer__TypeCtorInfo_35_35, mercury__pretty_printer__TypeInfo_36_36, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), ((MR_Box) (mercury__pretty_printer__FMapTypeArity_15)), mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, mercury__pretty_printer__STATE_VARIABLE_FMap_17);
        }
      }
    else
      {
        MR_Word mercury__pretty_printer__TypeCtorInfo_39_39;
        MR_Word mercury__pretty_printer__TypeInfo_41_41;
        MR_Word mercury__pretty_printer__FMapArity_21;
        MR_Word mercury__pretty_printer__FMapTypeArity_22;
        MR_Word mercury__pretty_printer__V_6_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__pretty_printer__V_7_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__pretty_printer__V_6_71;
        MR_Word mercury__pretty_printer__V_7_72;

        {
          mercury__pretty_printer__FMapArity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 0) = ((MR_Box) (mercury__pretty_printer__Arity_9));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 1) = ((MR_Box) (mercury__pretty_printer__Formatter_10));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 2) = ((MR_Box) (mercury__pretty_printer__V_6_62));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 3) = ((MR_Box) (mercury__pretty_printer__V_7_63));
        }
        mercury__pretty_printer__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__pretty_printer__V_6_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__pretty_printer__V_7_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__pretty_printer__FMapTypeArity_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 0) = ((MR_Box) (mercury__pretty_printer__TypeName_8));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 1) = ((MR_Box) (mercury__pretty_printer__FMapArity_21));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 2) = ((MR_Box) (mercury__pretty_printer__V_6_71));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 3) = ((MR_Box) (mercury__pretty_printer__V_7_72));
        }
        mercury__pretty_printer__TypeInfo_41_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
        {
          mercury__map__det_insert_4_p_0(mercury__pretty_printer__TypeCtorInfo_39_39, mercury__pretty_printer__TypeInfo_41_41, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), ((MR_Box) (mercury__pretty_printer__FMapTypeArity_22)), mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, mercury__pretty_printer__STATE_VARIABLE_FMap_17);
        }
      }
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho6_6_p_0_1(
  MR_Box mercury__pretty_printer__closure_arg,
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2)
{
  {
    MR_Box mercury__pretty_printer__wrapper_arg_3;
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

    {
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_int_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
    return mercury__pretty_printer__wrapper_arg_3;
  }
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho6_6_p_0(
  MR_String mercury__pretty_printer__ModuleName_7,
  MR_String mercury__pretty_printer__TypeName_8,
  MR_Integer mercury__pretty_printer__Arity_9,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_FMap_0_16,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_FMap_17)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__Formatter_10 = (MR_Word) &mercury__pretty_printer_scalar_common_2[10];
    MR_Word mercury__pretty_printer__FMapTypeArity0_12;
    MR_Word mercury__pretty_printer__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mercury__pretty_printer__TypeInfo_24_24 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
    MR_Box mercury__pretty_printer__conv1_FMapTypeArity0_12;

    {
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_23_23, mercury__pretty_printer__TypeInfo_24_24, mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMapTypeArity0_12);
    }
    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__FMapTypeArity0_12 = ((MR_Word) mercury__pretty_printer__conv1_FMapTypeArity0_12);
        mercury__pretty_printer__succeeded = MR_TRUE;
      }
    if (mercury__pretty_printer__succeeded)
      {
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_35;
        MR_Word mercury__pretty_printer__TypeInfo_36_36;
        MR_Word mercury__pretty_printer__FMapTypeArity_15;
        MR_Word mercury__pretty_printer__FMapArity0_13;
        MR_Word mercury__pretty_printer__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word mercury__pretty_printer__TypeInfo_26_26 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
        MR_Box mercury__pretty_printer__conv2_FMapArity0_13;

        {
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_25_25, mercury__pretty_printer__TypeInfo_26_26, mercury__pretty_printer__FMapTypeArity0_12, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMapArity0_13);
        }
        if (mercury__pretty_printer__succeeded)
          {
            mercury__pretty_printer__FMapArity0_13 = ((MR_Word) mercury__pretty_printer__conv2_FMapArity0_13);
            mercury__pretty_printer__succeeded = MR_TRUE;
          }
        if (mercury__pretty_printer__succeeded)
          {
            MR_Word mercury__pretty_printer__TypeInfo_28_28 = (MR_Word) &mercury__pretty_printer_scalar_common_4[1];
            MR_Word mercury__pretty_printer__TypeCtorInfo_29_29;
            MR_Word mercury__pretty_printer__TypeInfo_30_30;
            MR_Word mercury__pretty_printer__FMapArity_14;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__pretty_printer__TypeInfo_28_28, mercury__pretty_printer__Arity_9, ((MR_Box) (mercury__pretty_printer__Formatter_10)), mercury__pretty_printer__FMapArity0_13, &mercury__pretty_printer__FMapArity_14);
            }
            mercury__pretty_printer__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            mercury__pretty_printer__TypeInfo_30_30 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
            {
              mercury__map__det_update_4_p_0(mercury__pretty_printer__TypeCtorInfo_29_29, mercury__pretty_printer__TypeInfo_30_30, ((MR_Box) (mercury__pretty_printer__TypeName_8)), ((MR_Box) (mercury__pretty_printer__FMapArity_14)), mercury__pretty_printer__FMapTypeArity0_12, &mercury__pretty_printer__FMapTypeArity_15);
            }
          }
        else
          {
            MR_Word mercury__pretty_printer__TypeCtorInfo_33_33;
            MR_Word mercury__pretty_printer__TypeInfo_34_34;
            MR_Word mercury__pretty_printer__FMapArity_20;
            MR_Word mercury__pretty_printer__V_6_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word mercury__pretty_printer__V_7_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__pretty_printer__FMapArity_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 0) = ((MR_Box) (mercury__pretty_printer__Arity_9));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 1) = ((MR_Box) (mercury__pretty_printer__Formatter_10));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 2) = ((MR_Box) (mercury__pretty_printer__V_6_53));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 3) = ((MR_Box) (mercury__pretty_printer__V_7_54));
            }
            mercury__pretty_printer__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            mercury__pretty_printer__TypeInfo_34_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
            {
              mercury__map__det_insert_4_p_0(mercury__pretty_printer__TypeCtorInfo_33_33, mercury__pretty_printer__TypeInfo_34_34, ((MR_Box) (mercury__pretty_printer__TypeName_8)), ((MR_Box) (mercury__pretty_printer__FMapArity_20)), mercury__pretty_printer__FMapTypeArity0_12, &mercury__pretty_printer__FMapTypeArity_15);
            }
          }
        mercury__pretty_printer__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__pretty_printer__TypeInfo_36_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
        {
          mercury__map__det_update_4_p_0(mercury__pretty_printer__TypeCtorInfo_35_35, mercury__pretty_printer__TypeInfo_36_36, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), ((MR_Box) (mercury__pretty_printer__FMapTypeArity_15)), mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, mercury__pretty_printer__STATE_VARIABLE_FMap_17);
        }
      }
    else
      {
        MR_Word mercury__pretty_printer__TypeCtorInfo_39_39;
        MR_Word mercury__pretty_printer__TypeInfo_41_41;
        MR_Word mercury__pretty_printer__FMapArity_21;
        MR_Word mercury__pretty_printer__FMapTypeArity_22;
        MR_Word mercury__pretty_printer__V_6_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__pretty_printer__V_7_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__pretty_printer__V_6_71;
        MR_Word mercury__pretty_printer__V_7_72;

        {
          mercury__pretty_printer__FMapArity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 0) = ((MR_Box) (mercury__pretty_printer__Arity_9));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 1) = ((MR_Box) (mercury__pretty_printer__Formatter_10));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 2) = ((MR_Box) (mercury__pretty_printer__V_6_62));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 3) = ((MR_Box) (mercury__pretty_printer__V_7_63));
        }
        mercury__pretty_printer__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__pretty_printer__V_6_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__pretty_printer__V_7_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__pretty_printer__FMapTypeArity_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 0) = ((MR_Box) (mercury__pretty_printer__TypeName_8));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 1) = ((MR_Box) (mercury__pretty_printer__FMapArity_21));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 2) = ((MR_Box) (mercury__pretty_printer__V_6_71));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 3) = ((MR_Box) (mercury__pretty_printer__V_7_72));
        }
        mercury__pretty_printer__TypeInfo_41_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
        {
          mercury__map__det_insert_4_p_0(mercury__pretty_printer__TypeCtorInfo_39_39, mercury__pretty_printer__TypeInfo_41_41, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), ((MR_Box) (mercury__pretty_printer__FMapTypeArity_22)), mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, mercury__pretty_printer__STATE_VARIABLE_FMap_17);
        }
      }
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho5_6_p_0_1(
  MR_Box mercury__pretty_printer__closure_arg,
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2)
{
  {
    MR_Box mercury__pretty_printer__wrapper_arg_3;
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

    {
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_string_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
    return mercury__pretty_printer__wrapper_arg_3;
  }
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho5_6_p_0(
  MR_String mercury__pretty_printer__ModuleName_7,
  MR_String mercury__pretty_printer__TypeName_8,
  MR_Integer mercury__pretty_printer__Arity_9,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_FMap_0_16,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_FMap_17)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__Formatter_10 = (MR_Word) &mercury__pretty_printer_scalar_common_2[9];
    MR_Word mercury__pretty_printer__FMapTypeArity0_12;
    MR_Word mercury__pretty_printer__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mercury__pretty_printer__TypeInfo_24_24 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
    MR_Box mercury__pretty_printer__conv1_FMapTypeArity0_12;

    {
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_23_23, mercury__pretty_printer__TypeInfo_24_24, mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMapTypeArity0_12);
    }
    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__FMapTypeArity0_12 = ((MR_Word) mercury__pretty_printer__conv1_FMapTypeArity0_12);
        mercury__pretty_printer__succeeded = MR_TRUE;
      }
    if (mercury__pretty_printer__succeeded)
      {
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_35;
        MR_Word mercury__pretty_printer__TypeInfo_36_36;
        MR_Word mercury__pretty_printer__FMapTypeArity_15;
        MR_Word mercury__pretty_printer__FMapArity0_13;
        MR_Word mercury__pretty_printer__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word mercury__pretty_printer__TypeInfo_26_26 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
        MR_Box mercury__pretty_printer__conv2_FMapArity0_13;

        {
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_25_25, mercury__pretty_printer__TypeInfo_26_26, mercury__pretty_printer__FMapTypeArity0_12, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMapArity0_13);
        }
        if (mercury__pretty_printer__succeeded)
          {
            mercury__pretty_printer__FMapArity0_13 = ((MR_Word) mercury__pretty_printer__conv2_FMapArity0_13);
            mercury__pretty_printer__succeeded = MR_TRUE;
          }
        if (mercury__pretty_printer__succeeded)
          {
            MR_Word mercury__pretty_printer__TypeInfo_28_28 = (MR_Word) &mercury__pretty_printer_scalar_common_4[1];
            MR_Word mercury__pretty_printer__TypeCtorInfo_29_29;
            MR_Word mercury__pretty_printer__TypeInfo_30_30;
            MR_Word mercury__pretty_printer__FMapArity_14;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__pretty_printer__TypeInfo_28_28, mercury__pretty_printer__Arity_9, ((MR_Box) (mercury__pretty_printer__Formatter_10)), mercury__pretty_printer__FMapArity0_13, &mercury__pretty_printer__FMapArity_14);
            }
            mercury__pretty_printer__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            mercury__pretty_printer__TypeInfo_30_30 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
            {
              mercury__map__det_update_4_p_0(mercury__pretty_printer__TypeCtorInfo_29_29, mercury__pretty_printer__TypeInfo_30_30, ((MR_Box) (mercury__pretty_printer__TypeName_8)), ((MR_Box) (mercury__pretty_printer__FMapArity_14)), mercury__pretty_printer__FMapTypeArity0_12, &mercury__pretty_printer__FMapTypeArity_15);
            }
          }
        else
          {
            MR_Word mercury__pretty_printer__TypeCtorInfo_33_33;
            MR_Word mercury__pretty_printer__TypeInfo_34_34;
            MR_Word mercury__pretty_printer__FMapArity_20;
            MR_Word mercury__pretty_printer__V_6_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word mercury__pretty_printer__V_7_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__pretty_printer__FMapArity_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 0) = ((MR_Box) (mercury__pretty_printer__Arity_9));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 1) = ((MR_Box) (mercury__pretty_printer__Formatter_10));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 2) = ((MR_Box) (mercury__pretty_printer__V_6_53));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 3) = ((MR_Box) (mercury__pretty_printer__V_7_54));
            }
            mercury__pretty_printer__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            mercury__pretty_printer__TypeInfo_34_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
            {
              mercury__map__det_insert_4_p_0(mercury__pretty_printer__TypeCtorInfo_33_33, mercury__pretty_printer__TypeInfo_34_34, ((MR_Box) (mercury__pretty_printer__TypeName_8)), ((MR_Box) (mercury__pretty_printer__FMapArity_20)), mercury__pretty_printer__FMapTypeArity0_12, &mercury__pretty_printer__FMapTypeArity_15);
            }
          }
        mercury__pretty_printer__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__pretty_printer__TypeInfo_36_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
        {
          mercury__map__det_update_4_p_0(mercury__pretty_printer__TypeCtorInfo_35_35, mercury__pretty_printer__TypeInfo_36_36, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), ((MR_Box) (mercury__pretty_printer__FMapTypeArity_15)), mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, mercury__pretty_printer__STATE_VARIABLE_FMap_17);
        }
      }
    else
      {
        MR_Word mercury__pretty_printer__TypeCtorInfo_39_39;
        MR_Word mercury__pretty_printer__TypeInfo_41_41;
        MR_Word mercury__pretty_printer__FMapArity_21;
        MR_Word mercury__pretty_printer__FMapTypeArity_22;
        MR_Word mercury__pretty_printer__V_6_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__pretty_printer__V_7_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__pretty_printer__V_6_71;
        MR_Word mercury__pretty_printer__V_7_72;

        {
          mercury__pretty_printer__FMapArity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 0) = ((MR_Box) (mercury__pretty_printer__Arity_9));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 1) = ((MR_Box) (mercury__pretty_printer__Formatter_10));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 2) = ((MR_Box) (mercury__pretty_printer__V_6_62));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 3) = ((MR_Box) (mercury__pretty_printer__V_7_63));
        }
        mercury__pretty_printer__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__pretty_printer__V_6_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__pretty_printer__V_7_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__pretty_printer__FMapTypeArity_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 0) = ((MR_Box) (mercury__pretty_printer__TypeName_8));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 1) = ((MR_Box) (mercury__pretty_printer__FMapArity_21));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 2) = ((MR_Box) (mercury__pretty_printer__V_6_71));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 3) = ((MR_Box) (mercury__pretty_printer__V_7_72));
        }
        mercury__pretty_printer__TypeInfo_41_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
        {
          mercury__map__det_insert_4_p_0(mercury__pretty_printer__TypeCtorInfo_39_39, mercury__pretty_printer__TypeInfo_41_41, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), ((MR_Box) (mercury__pretty_printer__FMapTypeArity_22)), mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, mercury__pretty_printer__STATE_VARIABLE_FMap_17);
        }
      }
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho4_6_p_0_1(
  MR_Box mercury__pretty_printer__closure_arg,
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2)
{
  {
    MR_Box mercury__pretty_printer__wrapper_arg_3;
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

    {
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_array_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
    return mercury__pretty_printer__wrapper_arg_3;
  }
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho4_6_p_0(
  MR_String mercury__pretty_printer__ModuleName_7,
  MR_String mercury__pretty_printer__TypeName_8,
  MR_Integer mercury__pretty_printer__Arity_9,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_FMap_0_16,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_FMap_17)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__Formatter_10 = (MR_Word) &mercury__pretty_printer_scalar_common_2[8];
    MR_Word mercury__pretty_printer__FMapTypeArity0_12;
    MR_Word mercury__pretty_printer__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mercury__pretty_printer__TypeInfo_24_24 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
    MR_Box mercury__pretty_printer__conv1_FMapTypeArity0_12;

    {
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_23_23, mercury__pretty_printer__TypeInfo_24_24, mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMapTypeArity0_12);
    }
    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__FMapTypeArity0_12 = ((MR_Word) mercury__pretty_printer__conv1_FMapTypeArity0_12);
        mercury__pretty_printer__succeeded = MR_TRUE;
      }
    if (mercury__pretty_printer__succeeded)
      {
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_35;
        MR_Word mercury__pretty_printer__TypeInfo_36_36;
        MR_Word mercury__pretty_printer__FMapTypeArity_15;
        MR_Word mercury__pretty_printer__FMapArity0_13;
        MR_Word mercury__pretty_printer__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word mercury__pretty_printer__TypeInfo_26_26 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
        MR_Box mercury__pretty_printer__conv2_FMapArity0_13;

        {
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_25_25, mercury__pretty_printer__TypeInfo_26_26, mercury__pretty_printer__FMapTypeArity0_12, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMapArity0_13);
        }
        if (mercury__pretty_printer__succeeded)
          {
            mercury__pretty_printer__FMapArity0_13 = ((MR_Word) mercury__pretty_printer__conv2_FMapArity0_13);
            mercury__pretty_printer__succeeded = MR_TRUE;
          }
        if (mercury__pretty_printer__succeeded)
          {
            MR_Word mercury__pretty_printer__TypeInfo_28_28 = (MR_Word) &mercury__pretty_printer_scalar_common_4[1];
            MR_Word mercury__pretty_printer__TypeCtorInfo_29_29;
            MR_Word mercury__pretty_printer__TypeInfo_30_30;
            MR_Word mercury__pretty_printer__FMapArity_14;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__pretty_printer__TypeInfo_28_28, mercury__pretty_printer__Arity_9, ((MR_Box) (mercury__pretty_printer__Formatter_10)), mercury__pretty_printer__FMapArity0_13, &mercury__pretty_printer__FMapArity_14);
            }
            mercury__pretty_printer__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            mercury__pretty_printer__TypeInfo_30_30 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
            {
              mercury__map__det_update_4_p_0(mercury__pretty_printer__TypeCtorInfo_29_29, mercury__pretty_printer__TypeInfo_30_30, ((MR_Box) (mercury__pretty_printer__TypeName_8)), ((MR_Box) (mercury__pretty_printer__FMapArity_14)), mercury__pretty_printer__FMapTypeArity0_12, &mercury__pretty_printer__FMapTypeArity_15);
            }
          }
        else
          {
            MR_Word mercury__pretty_printer__TypeCtorInfo_33_33;
            MR_Word mercury__pretty_printer__TypeInfo_34_34;
            MR_Word mercury__pretty_printer__FMapArity_20;
            MR_Word mercury__pretty_printer__V_6_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word mercury__pretty_printer__V_7_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__pretty_printer__FMapArity_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 0) = ((MR_Box) (mercury__pretty_printer__Arity_9));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 1) = ((MR_Box) (mercury__pretty_printer__Formatter_10));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 2) = ((MR_Box) (mercury__pretty_printer__V_6_53));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 3) = ((MR_Box) (mercury__pretty_printer__V_7_54));
            }
            mercury__pretty_printer__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            mercury__pretty_printer__TypeInfo_34_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
            {
              mercury__map__det_insert_4_p_0(mercury__pretty_printer__TypeCtorInfo_33_33, mercury__pretty_printer__TypeInfo_34_34, ((MR_Box) (mercury__pretty_printer__TypeName_8)), ((MR_Box) (mercury__pretty_printer__FMapArity_20)), mercury__pretty_printer__FMapTypeArity0_12, &mercury__pretty_printer__FMapTypeArity_15);
            }
          }
        mercury__pretty_printer__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__pretty_printer__TypeInfo_36_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
        {
          mercury__map__det_update_4_p_0(mercury__pretty_printer__TypeCtorInfo_35_35, mercury__pretty_printer__TypeInfo_36_36, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), ((MR_Box) (mercury__pretty_printer__FMapTypeArity_15)), mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, mercury__pretty_printer__STATE_VARIABLE_FMap_17);
        }
      }
    else
      {
        MR_Word mercury__pretty_printer__TypeCtorInfo_39_39;
        MR_Word mercury__pretty_printer__TypeInfo_41_41;
        MR_Word mercury__pretty_printer__FMapArity_21;
        MR_Word mercury__pretty_printer__FMapTypeArity_22;
        MR_Word mercury__pretty_printer__V_6_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__pretty_printer__V_7_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__pretty_printer__V_6_71;
        MR_Word mercury__pretty_printer__V_7_72;

        {
          mercury__pretty_printer__FMapArity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 0) = ((MR_Box) (mercury__pretty_printer__Arity_9));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 1) = ((MR_Box) (mercury__pretty_printer__Formatter_10));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 2) = ((MR_Box) (mercury__pretty_printer__V_6_62));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 3) = ((MR_Box) (mercury__pretty_printer__V_7_63));
        }
        mercury__pretty_printer__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__pretty_printer__V_6_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__pretty_printer__V_7_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__pretty_printer__FMapTypeArity_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 0) = ((MR_Box) (mercury__pretty_printer__TypeName_8));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 1) = ((MR_Box) (mercury__pretty_printer__FMapArity_21));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 2) = ((MR_Box) (mercury__pretty_printer__V_6_71));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 3) = ((MR_Box) (mercury__pretty_printer__V_7_72));
        }
        mercury__pretty_printer__TypeInfo_41_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
        {
          mercury__map__det_insert_4_p_0(mercury__pretty_printer__TypeCtorInfo_39_39, mercury__pretty_printer__TypeInfo_41_41, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), ((MR_Box) (mercury__pretty_printer__FMapTypeArity_22)), mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, mercury__pretty_printer__STATE_VARIABLE_FMap_17);
        }
      }
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho3_6_p_0_1(
  MR_Box mercury__pretty_printer__closure_arg,
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2)
{
  {
    MR_Box mercury__pretty_printer__wrapper_arg_3;
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

    {
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_list_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
    return mercury__pretty_printer__wrapper_arg_3;
  }
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho3_6_p_0(
  MR_String mercury__pretty_printer__ModuleName_7,
  MR_String mercury__pretty_printer__TypeName_8,
  MR_Integer mercury__pretty_printer__Arity_9,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_FMap_0_16,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_FMap_17)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__Formatter_10 = (MR_Word) &mercury__pretty_printer_scalar_common_2[7];
    MR_Word mercury__pretty_printer__FMapTypeArity0_12;
    MR_Word mercury__pretty_printer__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mercury__pretty_printer__TypeInfo_24_24 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
    MR_Box mercury__pretty_printer__conv1_FMapTypeArity0_12;

    {
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_23_23, mercury__pretty_printer__TypeInfo_24_24, mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMapTypeArity0_12);
    }
    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__FMapTypeArity0_12 = ((MR_Word) mercury__pretty_printer__conv1_FMapTypeArity0_12);
        mercury__pretty_printer__succeeded = MR_TRUE;
      }
    if (mercury__pretty_printer__succeeded)
      {
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_35;
        MR_Word mercury__pretty_printer__TypeInfo_36_36;
        MR_Word mercury__pretty_printer__FMapTypeArity_15;
        MR_Word mercury__pretty_printer__FMapArity0_13;
        MR_Word mercury__pretty_printer__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word mercury__pretty_printer__TypeInfo_26_26 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
        MR_Box mercury__pretty_printer__conv2_FMapArity0_13;

        {
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_25_25, mercury__pretty_printer__TypeInfo_26_26, mercury__pretty_printer__FMapTypeArity0_12, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMapArity0_13);
        }
        if (mercury__pretty_printer__succeeded)
          {
            mercury__pretty_printer__FMapArity0_13 = ((MR_Word) mercury__pretty_printer__conv2_FMapArity0_13);
            mercury__pretty_printer__succeeded = MR_TRUE;
          }
        if (mercury__pretty_printer__succeeded)
          {
            MR_Word mercury__pretty_printer__TypeInfo_28_28 = (MR_Word) &mercury__pretty_printer_scalar_common_4[1];
            MR_Word mercury__pretty_printer__TypeCtorInfo_29_29;
            MR_Word mercury__pretty_printer__TypeInfo_30_30;
            MR_Word mercury__pretty_printer__FMapArity_14;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__pretty_printer__TypeInfo_28_28, mercury__pretty_printer__Arity_9, ((MR_Box) (mercury__pretty_printer__Formatter_10)), mercury__pretty_printer__FMapArity0_13, &mercury__pretty_printer__FMapArity_14);
            }
            mercury__pretty_printer__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            mercury__pretty_printer__TypeInfo_30_30 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
            {
              mercury__map__det_update_4_p_0(mercury__pretty_printer__TypeCtorInfo_29_29, mercury__pretty_printer__TypeInfo_30_30, ((MR_Box) (mercury__pretty_printer__TypeName_8)), ((MR_Box) (mercury__pretty_printer__FMapArity_14)), mercury__pretty_printer__FMapTypeArity0_12, &mercury__pretty_printer__FMapTypeArity_15);
            }
          }
        else
          {
            MR_Word mercury__pretty_printer__TypeCtorInfo_33_33;
            MR_Word mercury__pretty_printer__TypeInfo_34_34;
            MR_Word mercury__pretty_printer__FMapArity_20;
            MR_Word mercury__pretty_printer__V_6_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word mercury__pretty_printer__V_7_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__pretty_printer__FMapArity_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 0) = ((MR_Box) (mercury__pretty_printer__Arity_9));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 1) = ((MR_Box) (mercury__pretty_printer__Formatter_10));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 2) = ((MR_Box) (mercury__pretty_printer__V_6_53));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 3) = ((MR_Box) (mercury__pretty_printer__V_7_54));
            }
            mercury__pretty_printer__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            mercury__pretty_printer__TypeInfo_34_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
            {
              mercury__map__det_insert_4_p_0(mercury__pretty_printer__TypeCtorInfo_33_33, mercury__pretty_printer__TypeInfo_34_34, ((MR_Box) (mercury__pretty_printer__TypeName_8)), ((MR_Box) (mercury__pretty_printer__FMapArity_20)), mercury__pretty_printer__FMapTypeArity0_12, &mercury__pretty_printer__FMapTypeArity_15);
            }
          }
        mercury__pretty_printer__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__pretty_printer__TypeInfo_36_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
        {
          mercury__map__det_update_4_p_0(mercury__pretty_printer__TypeCtorInfo_35_35, mercury__pretty_printer__TypeInfo_36_36, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), ((MR_Box) (mercury__pretty_printer__FMapTypeArity_15)), mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, mercury__pretty_printer__STATE_VARIABLE_FMap_17);
        }
      }
    else
      {
        MR_Word mercury__pretty_printer__TypeCtorInfo_39_39;
        MR_Word mercury__pretty_printer__TypeInfo_41_41;
        MR_Word mercury__pretty_printer__FMapArity_21;
        MR_Word mercury__pretty_printer__FMapTypeArity_22;
        MR_Word mercury__pretty_printer__V_6_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__pretty_printer__V_7_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__pretty_printer__V_6_71;
        MR_Word mercury__pretty_printer__V_7_72;

        {
          mercury__pretty_printer__FMapArity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 0) = ((MR_Box) (mercury__pretty_printer__Arity_9));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 1) = ((MR_Box) (mercury__pretty_printer__Formatter_10));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 2) = ((MR_Box) (mercury__pretty_printer__V_6_62));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 3) = ((MR_Box) (mercury__pretty_printer__V_7_63));
        }
        mercury__pretty_printer__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__pretty_printer__V_6_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__pretty_printer__V_7_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__pretty_printer__FMapTypeArity_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 0) = ((MR_Box) (mercury__pretty_printer__TypeName_8));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 1) = ((MR_Box) (mercury__pretty_printer__FMapArity_21));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 2) = ((MR_Box) (mercury__pretty_printer__V_6_71));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 3) = ((MR_Box) (mercury__pretty_printer__V_7_72));
        }
        mercury__pretty_printer__TypeInfo_41_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
        {
          mercury__map__det_insert_4_p_0(mercury__pretty_printer__TypeCtorInfo_39_39, mercury__pretty_printer__TypeInfo_41_41, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), ((MR_Box) (mercury__pretty_printer__FMapTypeArity_22)), mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, mercury__pretty_printer__STATE_VARIABLE_FMap_17);
        }
      }
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho2_6_p_0_1(
  MR_Box mercury__pretty_printer__closure_arg,
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2)
{
  {
    MR_Box mercury__pretty_printer__wrapper_arg_3;
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

    {
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_tree234_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
    return mercury__pretty_printer__wrapper_arg_3;
  }
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho2_6_p_0(
  MR_String mercury__pretty_printer__ModuleName_7,
  MR_String mercury__pretty_printer__TypeName_8,
  MR_Integer mercury__pretty_printer__Arity_9,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_FMap_0_16,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_FMap_17)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__Formatter_10 = (MR_Word) &mercury__pretty_printer_scalar_common_2[6];
    MR_Word mercury__pretty_printer__FMapTypeArity0_12;
    MR_Word mercury__pretty_printer__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mercury__pretty_printer__TypeInfo_24_24 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
    MR_Box mercury__pretty_printer__conv1_FMapTypeArity0_12;

    {
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_23_23, mercury__pretty_printer__TypeInfo_24_24, mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMapTypeArity0_12);
    }
    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__FMapTypeArity0_12 = ((MR_Word) mercury__pretty_printer__conv1_FMapTypeArity0_12);
        mercury__pretty_printer__succeeded = MR_TRUE;
      }
    if (mercury__pretty_printer__succeeded)
      {
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_35;
        MR_Word mercury__pretty_printer__TypeInfo_36_36;
        MR_Word mercury__pretty_printer__FMapTypeArity_15;
        MR_Word mercury__pretty_printer__FMapArity0_13;
        MR_Word mercury__pretty_printer__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word mercury__pretty_printer__TypeInfo_26_26 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
        MR_Box mercury__pretty_printer__conv2_FMapArity0_13;

        {
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_25_25, mercury__pretty_printer__TypeInfo_26_26, mercury__pretty_printer__FMapTypeArity0_12, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMapArity0_13);
        }
        if (mercury__pretty_printer__succeeded)
          {
            mercury__pretty_printer__FMapArity0_13 = ((MR_Word) mercury__pretty_printer__conv2_FMapArity0_13);
            mercury__pretty_printer__succeeded = MR_TRUE;
          }
        if (mercury__pretty_printer__succeeded)
          {
            MR_Word mercury__pretty_printer__TypeInfo_28_28 = (MR_Word) &mercury__pretty_printer_scalar_common_4[1];
            MR_Word mercury__pretty_printer__TypeCtorInfo_29_29;
            MR_Word mercury__pretty_printer__TypeInfo_30_30;
            MR_Word mercury__pretty_printer__FMapArity_14;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__pretty_printer__TypeInfo_28_28, mercury__pretty_printer__Arity_9, ((MR_Box) (mercury__pretty_printer__Formatter_10)), mercury__pretty_printer__FMapArity0_13, &mercury__pretty_printer__FMapArity_14);
            }
            mercury__pretty_printer__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            mercury__pretty_printer__TypeInfo_30_30 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
            {
              mercury__map__det_update_4_p_0(mercury__pretty_printer__TypeCtorInfo_29_29, mercury__pretty_printer__TypeInfo_30_30, ((MR_Box) (mercury__pretty_printer__TypeName_8)), ((MR_Box) (mercury__pretty_printer__FMapArity_14)), mercury__pretty_printer__FMapTypeArity0_12, &mercury__pretty_printer__FMapTypeArity_15);
            }
          }
        else
          {
            MR_Word mercury__pretty_printer__TypeCtorInfo_33_33;
            MR_Word mercury__pretty_printer__TypeInfo_34_34;
            MR_Word mercury__pretty_printer__FMapArity_20;
            MR_Word mercury__pretty_printer__V_6_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word mercury__pretty_printer__V_7_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__pretty_printer__FMapArity_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 0) = ((MR_Box) (mercury__pretty_printer__Arity_9));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 1) = ((MR_Box) (mercury__pretty_printer__Formatter_10));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 2) = ((MR_Box) (mercury__pretty_printer__V_6_53));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 3) = ((MR_Box) (mercury__pretty_printer__V_7_54));
            }
            mercury__pretty_printer__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            mercury__pretty_printer__TypeInfo_34_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
            {
              mercury__map__det_insert_4_p_0(mercury__pretty_printer__TypeCtorInfo_33_33, mercury__pretty_printer__TypeInfo_34_34, ((MR_Box) (mercury__pretty_printer__TypeName_8)), ((MR_Box) (mercury__pretty_printer__FMapArity_20)), mercury__pretty_printer__FMapTypeArity0_12, &mercury__pretty_printer__FMapTypeArity_15);
            }
          }
        mercury__pretty_printer__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__pretty_printer__TypeInfo_36_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
        {
          mercury__map__det_update_4_p_0(mercury__pretty_printer__TypeCtorInfo_35_35, mercury__pretty_printer__TypeInfo_36_36, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), ((MR_Box) (mercury__pretty_printer__FMapTypeArity_15)), mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, mercury__pretty_printer__STATE_VARIABLE_FMap_17);
        }
      }
    else
      {
        MR_Word mercury__pretty_printer__TypeCtorInfo_39_39;
        MR_Word mercury__pretty_printer__TypeInfo_41_41;
        MR_Word mercury__pretty_printer__FMapArity_21;
        MR_Word mercury__pretty_printer__FMapTypeArity_22;
        MR_Word mercury__pretty_printer__V_6_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__pretty_printer__V_7_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__pretty_printer__V_6_71;
        MR_Word mercury__pretty_printer__V_7_72;

        {
          mercury__pretty_printer__FMapArity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 0) = ((MR_Box) (mercury__pretty_printer__Arity_9));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 1) = ((MR_Box) (mercury__pretty_printer__Formatter_10));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 2) = ((MR_Box) (mercury__pretty_printer__V_6_62));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 3) = ((MR_Box) (mercury__pretty_printer__V_7_63));
        }
        mercury__pretty_printer__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__pretty_printer__V_6_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__pretty_printer__V_7_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__pretty_printer__FMapTypeArity_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 0) = ((MR_Box) (mercury__pretty_printer__TypeName_8));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 1) = ((MR_Box) (mercury__pretty_printer__FMapArity_21));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 2) = ((MR_Box) (mercury__pretty_printer__V_6_71));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 3) = ((MR_Box) (mercury__pretty_printer__V_7_72));
        }
        mercury__pretty_printer__TypeInfo_41_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
        {
          mercury__map__det_insert_4_p_0(mercury__pretty_printer__TypeCtorInfo_39_39, mercury__pretty_printer__TypeInfo_41_41, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), ((MR_Box) (mercury__pretty_printer__FMapTypeArity_22)), mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, mercury__pretty_printer__STATE_VARIABLE_FMap_17);
        }
      }
  }
}

static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter__ho1_6_p_0_1(
  MR_Box mercury__pretty_printer__closure_arg,
  MR_Box mercury__pretty_printer__wrapper_arg_1,
  MR_Box mercury__pretty_printer__wrapper_arg_2)
{
  {
    MR_Box mercury__pretty_printer__wrapper_arg_3;
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

    {
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_version_array_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
    return mercury__pretty_printer__wrapper_arg_3;
  }
}

static void MR_CALL 
mercury__pretty_printer__set_formatter__ho1_6_p_0(
  MR_String mercury__pretty_printer__ModuleName_7,
  MR_String mercury__pretty_printer__TypeName_8,
  MR_Integer mercury__pretty_printer__Arity_9,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_FMap_0_16,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_FMap_17)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__Formatter_10 = (MR_Word) &mercury__pretty_printer_scalar_common_2[5];
    MR_Word mercury__pretty_printer__FMapTypeArity0_12;
    MR_Word mercury__pretty_printer__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mercury__pretty_printer__TypeInfo_24_24 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
    MR_Box mercury__pretty_printer__conv1_FMapTypeArity0_12;

    {
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_23_23, mercury__pretty_printer__TypeInfo_24_24, mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMapTypeArity0_12);
    }
    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__FMapTypeArity0_12 = ((MR_Word) mercury__pretty_printer__conv1_FMapTypeArity0_12);
        mercury__pretty_printer__succeeded = MR_TRUE;
      }
    if (mercury__pretty_printer__succeeded)
      {
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_35;
        MR_Word mercury__pretty_printer__TypeInfo_36_36;
        MR_Word mercury__pretty_printer__FMapTypeArity_15;
        MR_Word mercury__pretty_printer__FMapArity0_13;
        MR_Word mercury__pretty_printer__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word mercury__pretty_printer__TypeInfo_26_26 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
        MR_Box mercury__pretty_printer__conv2_FMapArity0_13;

        {
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_25_25, mercury__pretty_printer__TypeInfo_26_26, mercury__pretty_printer__FMapTypeArity0_12, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMapArity0_13);
        }
        if (mercury__pretty_printer__succeeded)
          {
            mercury__pretty_printer__FMapArity0_13 = ((MR_Word) mercury__pretty_printer__conv2_FMapArity0_13);
            mercury__pretty_printer__succeeded = MR_TRUE;
          }
        if (mercury__pretty_printer__succeeded)
          {
            MR_Word mercury__pretty_printer__TypeInfo_28_28 = (MR_Word) &mercury__pretty_printer_scalar_common_4[1];
            MR_Word mercury__pretty_printer__TypeCtorInfo_29_29;
            MR_Word mercury__pretty_printer__TypeInfo_30_30;
            MR_Word mercury__pretty_printer__FMapArity_14;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__pretty_printer__TypeInfo_28_28, mercury__pretty_printer__Arity_9, ((MR_Box) (mercury__pretty_printer__Formatter_10)), mercury__pretty_printer__FMapArity0_13, &mercury__pretty_printer__FMapArity_14);
            }
            mercury__pretty_printer__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            mercury__pretty_printer__TypeInfo_30_30 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
            {
              mercury__map__det_update_4_p_0(mercury__pretty_printer__TypeCtorInfo_29_29, mercury__pretty_printer__TypeInfo_30_30, ((MR_Box) (mercury__pretty_printer__TypeName_8)), ((MR_Box) (mercury__pretty_printer__FMapArity_14)), mercury__pretty_printer__FMapTypeArity0_12, &mercury__pretty_printer__FMapTypeArity_15);
            }
          }
        else
          {
            MR_Word mercury__pretty_printer__TypeCtorInfo_33_33;
            MR_Word mercury__pretty_printer__TypeInfo_34_34;
            MR_Word mercury__pretty_printer__FMapArity_20;
            MR_Word mercury__pretty_printer__V_6_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word mercury__pretty_printer__V_7_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__pretty_printer__FMapArity_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 0) = ((MR_Box) (mercury__pretty_printer__Arity_9));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 1) = ((MR_Box) (mercury__pretty_printer__Formatter_10));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 2) = ((MR_Box) (mercury__pretty_printer__V_6_53));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 3) = ((MR_Box) (mercury__pretty_printer__V_7_54));
            }
            mercury__pretty_printer__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            mercury__pretty_printer__TypeInfo_34_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
            {
              mercury__map__det_insert_4_p_0(mercury__pretty_printer__TypeCtorInfo_33_33, mercury__pretty_printer__TypeInfo_34_34, ((MR_Box) (mercury__pretty_printer__TypeName_8)), ((MR_Box) (mercury__pretty_printer__FMapArity_20)), mercury__pretty_printer__FMapTypeArity0_12, &mercury__pretty_printer__FMapTypeArity_15);
            }
          }
        mercury__pretty_printer__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__pretty_printer__TypeInfo_36_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
        {
          mercury__map__det_update_4_p_0(mercury__pretty_printer__TypeCtorInfo_35_35, mercury__pretty_printer__TypeInfo_36_36, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), ((MR_Box) (mercury__pretty_printer__FMapTypeArity_15)), mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, mercury__pretty_printer__STATE_VARIABLE_FMap_17);
        }
      }
    else
      {
        MR_Word mercury__pretty_printer__TypeCtorInfo_39_39;
        MR_Word mercury__pretty_printer__TypeInfo_41_41;
        MR_Word mercury__pretty_printer__FMapArity_21;
        MR_Word mercury__pretty_printer__FMapTypeArity_22;
        MR_Word mercury__pretty_printer__V_6_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__pretty_printer__V_7_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__pretty_printer__V_6_71;
        MR_Word mercury__pretty_printer__V_7_72;

        {
          mercury__pretty_printer__FMapArity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 0) = ((MR_Box) (mercury__pretty_printer__Arity_9));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 1) = ((MR_Box) (mercury__pretty_printer__Formatter_10));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 2) = ((MR_Box) (mercury__pretty_printer__V_6_62));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 3) = ((MR_Box) (mercury__pretty_printer__V_7_63));
        }
        mercury__pretty_printer__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__pretty_printer__V_6_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__pretty_printer__V_7_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__pretty_printer__FMapTypeArity_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 0) = ((MR_Box) (mercury__pretty_printer__TypeName_8));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 1) = ((MR_Box) (mercury__pretty_printer__FMapArity_21));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 2) = ((MR_Box) (mercury__pretty_printer__V_6_71));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 3) = ((MR_Box) (mercury__pretty_printer__V_7_72));
        }
        mercury__pretty_printer__TypeInfo_41_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
        {
          mercury__map__det_insert_4_p_0(mercury__pretty_printer__TypeCtorInfo_39_39, mercury__pretty_printer__TypeInfo_41_41, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), ((MR_Box) (mercury__pretty_printer__FMapTypeArity_22)), mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, mercury__pretty_printer__STATE_VARIABLE_FMap_17);
        }
      }
  }
}

void MR_CALL 
mercury__pretty_printer____Compare____pp_params_0_0(
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Word mercury__pretty_printer__HeadVar__3_3)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Integer mercury__pretty_printer__CastX_12 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;
    MR_Integer mercury__pretty_printer__CastY_13 = (MR_Integer) mercury__pretty_printer__HeadVar__3_3;

    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_12 == mercury__pretty_printer__CastY_13);
    if (mercury__pretty_printer__succeeded)
      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__pretty_printer__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__pretty_printer__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__pretty_printer__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mercury__pretty_printer__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mercury__pretty_printer__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__pretty_printer__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__pretty_printer__V_10_10;

        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_4_4 < mercury__pretty_printer__V_7_7);
        if (mercury__pretty_printer__succeeded)
          mercury__pretty_printer__V_10_10 = (MR_Integer) 1;
        else
          {
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_4_4 == mercury__pretty_printer__V_7_7);
            if (mercury__pretty_printer__succeeded)
              mercury__pretty_printer__V_10_10 = (MR_Integer) 0;
            else
              mercury__pretty_printer__V_10_10 = (MR_Integer) 2;
          }
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_10_10 == (MR_Integer) 0);
        mercury__pretty_printer__succeeded = !(mercury__pretty_printer__succeeded);
        if (mercury__pretty_printer__succeeded)
          *mercury__pretty_printer__HeadVar__1_1 = mercury__pretty_printer__V_10_10;
        else
          {
            MR_Word mercury__pretty_printer__V_11_11;

            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_5_5 < mercury__pretty_printer__V_8_8);
            if (mercury__pretty_printer__succeeded)
              mercury__pretty_printer__V_11_11 = (MR_Integer) 1;
            else
              {
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_5_5 == mercury__pretty_printer__V_8_8);
                if (mercury__pretty_printer__succeeded)
                  mercury__pretty_printer__V_11_11 = (MR_Integer) 0;
                else
                  mercury__pretty_printer__V_11_11 = (MR_Integer) 2;
              }
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_11_11 == (MR_Integer) 0);
            mercury__pretty_printer__succeeded = !(mercury__pretty_printer__succeeded);
            if (mercury__pretty_printer__succeeded)
              *mercury__pretty_printer__HeadVar__1_1 = mercury__pretty_printer__V_11_11;
            else
              {
                mercury__pretty_printer____Compare____func_symbol_limit_0_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__V_6_6, mercury__pretty_printer__V_9_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_params_0_0(
  MR_Word mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Integer mercury__pretty_printer__CastX_9 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
    MR_Integer mercury__pretty_printer__CastY_10 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_9 == mercury__pretty_printer__CastY_10);
    if (mercury__pretty_printer__succeeded)
      mercury__pretty_printer__succeeded = MR_TRUE;
    else
      {
        MR_Integer mercury__pretty_printer__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__pretty_printer__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__pretty_printer__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer mercury__pretty_printer__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__pretty_printer__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__pretty_printer__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 2)));

        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_3_3 == mercury__pretty_printer__V_6_6);
        if (mercury__pretty_printer__succeeded)
          {
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_4_4 == mercury__pretty_printer__V_7_7);
            if (mercury__pretty_printer__succeeded)
              {
                mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____func_symbol_limit_0_0(mercury__pretty_printer__V_5_5, mercury__pretty_printer__V_8_8);
              }
          }
      }
    return mercury__pretty_printer__succeeded;
  }
}

void MR_CALL 
mercury__pretty_printer____Compare____pp_internal_0_0(
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Word mercury__pretty_printer__HeadVar__3_3)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Integer mercury__pretty_printer__CastX_40 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;
    MR_Integer mercury__pretty_printer__CastY_41 = (MR_Integer) mercury__pretty_printer__HeadVar__3_3;

    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_40 == mercury__pretty_printer__CastY_41);
    if (mercury__pretty_printer__succeeded)
      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__pretty_printer__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mercury__pretty_printer__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__pretty_printer__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__pretty_printer__V_7_51;

{
#define MR_PROC_LABEL mercury__pretty_printer____Compare____pp_internal_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__pretty_printer__V_45_45 ;
	S2 =  mercury__pretty_printer__V_13_13 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_7_51  = Res;
}
                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_7_51 < (MR_Integer) 0);
                  if (mercury__pretty_printer__succeeded)
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                  else
                    {
                      mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_7_51 == (MR_Integer) 0);
                      if (mercury__pretty_printer__succeeded)
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                    }
                }
                break;
              case (MR_Integer) 2:
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mercury__pretty_printer__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer mercury__pretty_printer__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_47_47 < mercury__pretty_printer__V_28_28);
                  if (mercury__pretty_printer__succeeded)
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                  else
                    {
                      mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_47_47 == mercury__pretty_printer__V_28_28);
                      if (mercury__pretty_printer__succeeded)
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                    }
                }
                break;
              case (MR_Integer) 3:
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word mercury__pretty_printer__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word mercury__pretty_printer__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__pretty_printer____Compare____func_symbol_limit_0_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__V_46_46, mercury__pretty_printer__V_39_39);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_internal_0_0(
  MR_Word mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Integer mercury__pretty_printer__CastX_15 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
    MR_Integer mercury__pretty_printer__CastY_16 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_15 == mercury__pretty_printer__CastY_16);
    if (mercury__pretty_printer__succeeded)
      mercury__pretty_printer__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__pretty_printer__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__pretty_printer__CastX_3 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
                MR_Integer mercury__pretty_printer__CastY_4 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

                mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastY_4 == mercury__pretty_printer__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mercury__pretty_printer__CastX_5 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
                MR_Integer mercury__pretty_printer__CastY_6 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

                mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastY_6 == mercury__pretty_printer__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mercury__pretty_printer__CastX_9 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
                MR_Integer mercury__pretty_printer__CastY_10 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

                mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastY_10 == mercury__pretty_printer__CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mercury__pretty_printer__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__pretty_printer__V_8_8;

            mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__pretty_printer__succeeded)
              {
                mercury__pretty_printer__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
                mercury__pretty_printer__succeeded = (strcmp(mercury__pretty_printer__V_7_7, mercury__pretty_printer__V_8_8) == 0);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mercury__pretty_printer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__pretty_printer__V_12_12;

            mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__pretty_printer__succeeded)
              {
                mercury__pretty_printer__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_11_11 == mercury__pretty_printer__V_12_12);
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word mercury__pretty_printer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__pretty_printer__V_14_14;

            mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (mercury__pretty_printer__succeeded)
              {
                mercury__pretty_printer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
                {
                  mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____func_symbol_limit_0_0(mercury__pretty_printer__V_13_13, mercury__pretty_printer__V_14_14);
                }
              }
          }
          break;
      }
    return mercury__pretty_printer__succeeded;
  }
}

void MR_CALL 
mercury__pretty_printer____Compare____indent_stack_0_0(
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Word mercury__pretty_printer__HeadVar__3_3)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Integer mercury__pretty_printer__CastX_13 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;
    MR_Integer mercury__pretty_printer__CastY_14 = (MR_Integer) mercury__pretty_printer__HeadVar__3_3;

    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_13 == mercury__pretty_printer__CastY_14);
    if (mercury__pretty_printer__succeeded)
      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((mercury__pretty_printer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_String mercury__pretty_printer__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__pretty_printer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

        if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word mercury__pretty_printer__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));
            MR_String mercury__pretty_printer__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__pretty_printer__V_12_12;

            {
              mercury__pretty_printer____Compare____indent_stack_0_0(&mercury__pretty_printer__V_12_12, mercury__pretty_printer__V_18_18, mercury__pretty_printer__V_10_10);
            }
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_12_12 == (MR_Integer) 0);
            mercury__pretty_printer__succeeded = !(mercury__pretty_printer__succeeded);
            if (mercury__pretty_printer__succeeded)
              *mercury__pretty_printer__HeadVar__1_1 = mercury__pretty_printer__V_12_12;
            else
              {
                MR_Integer mercury__pretty_printer__V_7_22;

{
#define MR_PROC_LABEL mercury__pretty_printer____Compare____indent_stack_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__pretty_printer__V_17_17 ;
	S2 =  mercury__pretty_printer__V_11_11 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_7_22  = Res;
}
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_7_22 < (MR_Integer) 0);
                if (mercury__pretty_printer__succeeded)
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                else
                  {
                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_7_22 == (MR_Integer) 0);
                    if (mercury__pretty_printer__succeeded)
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____indent_stack_0_0(
  MR_Word mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Integer mercury__pretty_printer__CastX_9 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
    MR_Integer mercury__pretty_printer__CastY_10 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_9 == mercury__pretty_printer__CastY_10);
    if (mercury__pretty_printer__succeeded)
      mercury__pretty_printer__succeeded = MR_TRUE;
    else
    if ((mercury__pretty_printer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mercury__pretty_printer__CastX_3 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
        MR_Integer mercury__pretty_printer__CastY_4 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

        mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastY_4 == mercury__pretty_printer__CastX_3);
      }
    else
      {
        MR_Word mercury__pretty_printer__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
        MR_String mercury__pretty_printer__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__pretty_printer__V_7_7;
        MR_String mercury__pretty_printer__V_8_8;

        mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__pretty_printer__succeeded)
          {
            mercury__pretty_printer__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
            mercury__pretty_printer__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
            {
              mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____indent_stack_0_0(mercury__pretty_printer__V_5_5, mercury__pretty_printer__V_7_7);
            }
            if (mercury__pretty_printer__succeeded)
              mercury__pretty_printer__succeeded = (strcmp(mercury__pretty_printer__V_6_6, mercury__pretty_printer__V_8_8) == 0);
          }
      }
    return mercury__pretty_printer__succeeded;
  }
}

void MR_CALL 
mercury__pretty_printer____Compare____func_symbol_limit_0_0(
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Word mercury__pretty_printer__HeadVar__3_3)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Integer mercury__pretty_printer__CastX_12 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;
    MR_Integer mercury__pretty_printer__CastY_13 = (MR_Integer) mercury__pretty_printer__HeadVar__3_3;

    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_12 == mercury__pretty_printer__CastY_13);
    if (mercury__pretty_printer__succeeded)
      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer mercury__pretty_printer__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Integer mercury__pretty_printer__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));

            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_16_16 < mercury__pretty_printer__V_5_5);
            if (mercury__pretty_printer__succeeded)
              *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
            else
              {
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_16_16 == mercury__pretty_printer__V_5_5);
                if (mercury__pretty_printer__succeeded)
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
                else
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
              }
          }
        else
          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Integer mercury__pretty_printer__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Integer mercury__pretty_printer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));

            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_17_17 < mercury__pretty_printer__V_11_11);
            if (mercury__pretty_printer__succeeded)
              *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
            else
              {
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_17_17 == mercury__pretty_printer__V_11_11);
                if (mercury__pretty_printer__succeeded)
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
                else
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____func_symbol_limit_0_0(
  MR_Word mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Integer mercury__pretty_printer__CastX_7 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
    MR_Integer mercury__pretty_printer__CastY_8 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_7 == mercury__pretty_printer__CastY_8);
    if (mercury__pretty_printer__succeeded)
      mercury__pretty_printer__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer mercury__pretty_printer__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__pretty_printer__V_4_4;

        mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__pretty_printer__succeeded)
          {
            mercury__pretty_printer__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_3_3 == mercury__pretty_printer__V_4_4);
          }
      }
    else
      {
        MR_Integer mercury__pretty_printer__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__pretty_printer__V_6_6;

        mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__pretty_printer__succeeded)
          {
            mercury__pretty_printer__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_5_5 == mercury__pretty_printer__V_6_6);
          }
      }
    return mercury__pretty_printer__succeeded;
  }
}

void MR_CALL 
mercury__pretty_printer____Compare____formatter_map_0_0(
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Word mercury__pretty_printer__HeadVar__3_3)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__TypeInfo_6_6 = (MR_Word) &mercury__pretty_printer_scalar_common_2[3];
    MR_Word mercury__pretty_printer__Cast_HeadVar1_4 = mercury__pretty_printer__HeadVar__2_2;
    MR_Word mercury__pretty_printer__Cast_HeadVar2_5 = mercury__pretty_printer__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_6_6, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_4)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_map_0_0(
  MR_Word mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__TypeInfo_5_5 = (MR_Word) &mercury__pretty_printer_scalar_common_2[3];
    MR_Word mercury__pretty_printer__Cast_HeadVar1_3 = mercury__pretty_printer__HeadVar__1_1;
    MR_Word mercury__pretty_printer__Cast_HeadVar2_4 = mercury__pretty_printer__HeadVar__2_2;

    {
      mercury__pretty_printer__succeeded = mercury__builtin__unify_2_p_0(mercury__pretty_printer__TypeInfo_5_5, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_3)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_4)));
    }
    return mercury__pretty_printer__succeeded;
  }
}

void MR_CALL 
mercury__pretty_printer____Compare____formatter_0_0(
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Word mercury__pretty_printer__HeadVar__3_3)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__TypeInfo_6_6 = (MR_Word) &mercury__pretty_printer_scalar_common_4[1];
    MR_Word mercury__pretty_printer__Cast_HeadVar1_4 = mercury__pretty_printer__HeadVar__2_2;
    MR_Word mercury__pretty_printer__Cast_HeadVar2_5 = mercury__pretty_printer__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_6_6, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_4)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_0_0(
  MR_Word mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__Cast_HeadVar1_3 = mercury__pretty_printer__HeadVar__1_1;
    MR_Word mercury__pretty_printer__Cast_HeadVar2_4 = mercury__pretty_printer__HeadVar__2_2;

    {
      mercury__pretty_printer__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__pretty_printer__Cast_HeadVar1_3, (MR_Word) mercury__pretty_printer__Cast_HeadVar2_4);
    }
    return mercury__pretty_printer__succeeded;
  }
}

void MR_CALL 
mercury__pretty_printer____Compare____docs_0_0(
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Word mercury__pretty_printer__HeadVar__3_3)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__TypeInfo_6_6 = (MR_Word) &mercury__pretty_printer_scalar_common_1[3];
    MR_Word mercury__pretty_printer__Cast_HeadVar1_4 = mercury__pretty_printer__HeadVar__2_2;
    MR_Word mercury__pretty_printer__Cast_HeadVar2_5 = mercury__pretty_printer__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_6_6, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_4)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____docs_0_0(
  MR_Word mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__TypeInfo_5_5 = (MR_Word) &mercury__pretty_printer_scalar_common_1[3];
    MR_Word mercury__pretty_printer__Cast_HeadVar1_3 = mercury__pretty_printer__HeadVar__1_1;
    MR_Word mercury__pretty_printer__Cast_HeadVar2_4 = mercury__pretty_printer__HeadVar__2_2;

    {
      mercury__pretty_printer__succeeded = mercury__builtin__unify_2_p_0(mercury__pretty_printer__TypeInfo_5_5, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_3)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_4)));
    }
    return mercury__pretty_printer__succeeded;
  }
}

void MR_CALL 
mercury__pretty_printer____Compare____doc_0_0(
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Word mercury__pretty_printer__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pretty_printer__succeeded;
        MR_Integer mercury__pretty_printer__CastX_168 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;
        MR_Integer mercury__pretty_printer__CastY_169 = (MR_Integer) mercury__pretty_printer__HeadVar__3_3;

        mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_168 == mercury__pretty_printer__CastY_169);
        if (mercury__pretty_printer__succeeded)
          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
        else
          switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(mercury__pretty_printer__HeadVar__2_2)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 1:
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 1:
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 2:
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 3:
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 4:
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 1:
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 2:
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 3:
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 4:
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String mercury__pretty_printer__V_187_187 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

                switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String mercury__pretty_printer__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));
                      MR_Integer mercury__pretty_printer__V_7_196;

{
#define MR_PROC_LABEL mercury__pretty_printer____Compare____doc_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__pretty_printer__V_187_187 ;
	S2 =  mercury__pretty_printer__V_5_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_7_196  = Res;
}
                      mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_7_196 < (MR_Integer) 0);
                      if (mercury__pretty_printer__succeeded)
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                      else
                        {
                          mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_7_196 == (MR_Integer) 0);
                          if (mercury__pretty_printer__succeeded)
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__pretty_printer__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

                switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word mercury__pretty_printer__TypeInfo_177_177 = (MR_Word) &mercury__pretty_printer_scalar_common_1[3];
                      MR_Word mercury__pretty_printer__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));

                      {
                        mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_177_177, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__V_179_179)), ((MR_Box) (mercury__pretty_printer__V_45_45)));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word mercury__pretty_printer__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word mercury__pretty_printer__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));

                              {
                                mercury__univ____Compare____univ_0_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__V_185_185, mercury__pretty_printer__V_65_65);
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 2:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 3:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 4:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word mercury__pretty_printer__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word mercury__pretty_printer__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word mercury__pretty_printer__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));
                              MR_Word mercury__pretty_printer__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 2)));
                              MR_Word mercury__pretty_printer__V_93_93;
                              MR_Word mercury__pretty_printer__TypeInfo_174_174 = (MR_Word) &mercury__pretty_printer_scalar_common_1[2];

                              {
                                mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_174_174, &mercury__pretty_printer__V_93_93, ((MR_Box) (mercury__pretty_printer__V_181_181)), ((MR_Box) (mercury__pretty_printer__V_91_91)));
                              }
                              mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_93_93 == (MR_Integer) 0);
                              mercury__pretty_printer__succeeded = !(mercury__pretty_printer__succeeded);
                              if (mercury__pretty_printer__succeeded)
                                *mercury__pretty_printer__HeadVar__1_1 = mercury__pretty_printer__V_93_93;
                              else
                                {
                                  /* direct tailcall eliminated */
                                  {
                                    MR_Word mercury__pretty_printer__HeadVar__2__tmp_copy_2 = mercury__pretty_printer__V_180_180;
                                    MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_92_92;

                                    mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
                                    mercury__pretty_printer__HeadVar__2_2 = mercury__pretty_printer__HeadVar__2__tmp_copy_2;
                                  }
                                  continue;
                                }
                            }
                            break;
                          case (MR_Integer) 2:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 3:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 4:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word mercury__pretty_printer__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 2)));
                    MR_String mercury__pretty_printer__V_184_184 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_String mercury__pretty_printer__V_123_123 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));
                              MR_Word mercury__pretty_printer__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 2)));
                              MR_Word mercury__pretty_printer__V_125_125;
                              MR_Integer mercury__pretty_printer__V_7_191;

{
#define MR_PROC_LABEL mercury__pretty_printer____Compare____doc_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__pretty_printer__V_184_184 ;
	S2 =  mercury__pretty_printer__V_123_123 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_7_191  = Res;
}
                              mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_7_191 < (MR_Integer) 0);
                              if (mercury__pretty_printer__succeeded)
                                mercury__pretty_printer__V_125_125 = (MR_Integer) 1;
                              else
                                {
                                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_7_191 == (MR_Integer) 0);
                                  if (mercury__pretty_printer__succeeded)
                                    mercury__pretty_printer__V_125_125 = (MR_Integer) 0;
                                  else
                                    mercury__pretty_printer__V_125_125 = (MR_Integer) 2;
                                }
                              mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_125_125 == (MR_Integer) 0);
                              mercury__pretty_printer__succeeded = !(mercury__pretty_printer__succeeded);
                              if (mercury__pretty_printer__succeeded)
                                *mercury__pretty_printer__HeadVar__1_1 = mercury__pretty_printer__V_125_125;
                              else
                                {
                                  MR_Word mercury__pretty_printer__TypeInfo_173_173 = (MR_Word) &mercury__pretty_printer_scalar_common_1[2];

                                  {
                                    mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_173_173, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__V_183_183)), ((MR_Box) (mercury__pretty_printer__V_124_124)));
                                  }
                                }
                            }
                            break;
                          case (MR_Integer) 3:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 4:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word mercury__pretty_printer__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 2:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 3:
                            {
                              MR_Word mercury__pretty_printer__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));

                              {
                                mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__pretty_printer__HeadVar__1_1, (MR_Word) mercury__pretty_printer__V_182_182, (MR_Word) mercury__pretty_printer__V_147_147);
                              }
                            }
                            break;
                          case (MR_Integer) 4:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word mercury__pretty_printer__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 2:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 3:
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 4:
                            {
                              MR_Word mercury__pretty_printer__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));

                              {
                                mercury__pretty_printer____Compare____pp_internal_0_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__V_186_186, mercury__pretty_printer__V_167_167);
                              }
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
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__pretty_printer____Unify____doc_0_0(
  MR_Word mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pretty_printer__succeeded;
        MR_Integer mercury__pretty_printer__CastX_25 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
        MR_Integer mercury__pretty_printer__CastY_26 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

        mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_25 == mercury__pretty_printer__CastY_26);
        if (mercury__pretty_printer__succeeded)
          mercury__pretty_printer__succeeded = MR_TRUE;
        else
          switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(mercury__pretty_printer__HeadVar__1_1)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer mercury__pretty_printer__CastX_5 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
                    MR_Integer mercury__pretty_printer__CastY_6 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastY_6 == mercury__pretty_printer__CastX_5);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer mercury__pretty_printer__CastX_7 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
                    MR_Integer mercury__pretty_printer__CastY_8 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastY_8 == mercury__pretty_printer__CastX_7);
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String mercury__pretty_printer__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
                MR_String mercury__pretty_printer__V_4_4;

                mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__pretty_printer__succeeded)
                  {
                    mercury__pretty_printer__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
                    mercury__pretty_printer__succeeded = (strcmp(mercury__pretty_printer__V_3_3, mercury__pretty_printer__V_4_4) == 0);
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__pretty_printer__TypeInfo_27_27;
                MR_Word mercury__pretty_printer__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
                MR_Word mercury__pretty_printer__V_10_10;

                mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
                if (mercury__pretty_printer__succeeded)
                  {
                    mercury__pretty_printer__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
                    mercury__pretty_printer__TypeInfo_27_27 = (MR_Word) &mercury__pretty_printer_scalar_common_1[3];
                    {
                      mercury__pretty_printer__succeeded = mercury__builtin__unify_2_p_0(mercury__pretty_printer__TypeInfo_27_27, ((MR_Box) (mercury__pretty_printer__V_9_9)), ((MR_Box) (mercury__pretty_printer__V_10_10)));
                    }
                  }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word mercury__pretty_printer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word mercury__pretty_printer__V_12_12;

                    mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (mercury__pretty_printer__succeeded)
                      {
                        mercury__pretty_printer__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
                        {
                          mercury__pretty_printer__succeeded = mercury__univ____Unify____univ_0_0(mercury__pretty_printer__V_11_11, mercury__pretty_printer__V_12_12);
                        }
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word mercury__pretty_printer__TypeInfo_28_28;
                    MR_Word mercury__pretty_printer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word mercury__pretty_printer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 2)));
                    MR_Word mercury__pretty_printer__V_15_15;
                    MR_Word mercury__pretty_printer__V_16_16;

                    mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (mercury__pretty_printer__succeeded)
                      {
                        mercury__pretty_printer__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
                        mercury__pretty_printer__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 2)));
                        mercury__pretty_printer__TypeInfo_28_28 = (MR_Word) &mercury__pretty_printer_scalar_common_1[2];
                        {
                          mercury__pretty_printer__succeeded = mercury__builtin__unify_2_p_0(mercury__pretty_printer__TypeInfo_28_28, ((MR_Box) (mercury__pretty_printer__V_13_13)), ((MR_Box) (mercury__pretty_printer__V_15_15)));
                        }
                        if (mercury__pretty_printer__succeeded)
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word mercury__pretty_printer__HeadVar__1__tmp_copy_1 = mercury__pretty_printer__V_14_14;
                              MR_Word mercury__pretty_printer__HeadVar__2__tmp_copy_2 = mercury__pretty_printer__V_16_16;

                              mercury__pretty_printer__HeadVar__2_2 = mercury__pretty_printer__HeadVar__2__tmp_copy_2;
                              mercury__pretty_printer__HeadVar__1_1 = mercury__pretty_printer__HeadVar__1__tmp_copy_1;
                            }
                            continue;
                          }
                      }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word mercury__pretty_printer__TypeInfo_29_29;
                    MR_String mercury__pretty_printer__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word mercury__pretty_printer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 2)));
                    MR_String mercury__pretty_printer__V_19_19;
                    MR_Word mercury__pretty_printer__V_20_20;

                    mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (mercury__pretty_printer__succeeded)
                      {
                        mercury__pretty_printer__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
                        mercury__pretty_printer__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 2)));
                        mercury__pretty_printer__succeeded = (strcmp(mercury__pretty_printer__V_17_17, mercury__pretty_printer__V_19_19) == 0);
                        if (mercury__pretty_printer__succeeded)
                          {
                            mercury__pretty_printer__TypeInfo_29_29 = (MR_Word) &mercury__pretty_printer_scalar_common_1[2];
                            {
                              mercury__pretty_printer__succeeded = mercury__builtin__unify_2_p_0(mercury__pretty_printer__TypeInfo_29_29, ((MR_Box) (mercury__pretty_printer__V_18_18)), ((MR_Box) (mercury__pretty_printer__V_20_20)));
                            }
                          }
                      }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word mercury__pretty_printer__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word mercury__pretty_printer__V_22_22;

                    mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (mercury__pretty_printer__succeeded)
                      {
                        mercury__pretty_printer__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
                        {
                          mercury__pretty_printer__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__pretty_printer__V_21_21, (MR_Word) mercury__pretty_printer__V_22_22);
                        }
                      }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word mercury__pretty_printer__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word mercury__pretty_printer__V_24_24;

                    mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (mercury__pretty_printer__succeeded)
                      {
                        mercury__pretty_printer__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
                        {
                          mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____pp_internal_0_0(mercury__pretty_printer__V_23_23, mercury__pretty_printer__V_24_24);
                        }
                      }
                  }
                  break;
              }
              break;
          }
        return mercury__pretty_printer__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__pretty_printer__set_io_pp_params_3_p_0(
  MR_Word mercury__pretty_printer__X_4)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

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

	X =  mercury__pretty_printer__X_4 ;
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
  MR_Word * mercury__pretty_printer__X_4)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

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
	 *mercury__pretty_printer__X_4  = X;
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

void MR_CALL 
mercury__pretty_printer__unsafe_set_io_pp_params_1_p_0(
  MR_Word mercury__pretty_printer__X_1)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

{
#define MR_PROC_LABEL mercury__pretty_printer__unsafe_set_io_pp_params_1_p_0

	MR_Word X;

	X =  mercury__pretty_printer__X_1 ;
		{
mercury__pretty_printer__mutable_variable_io_pp_params = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__pretty_printer__unsafe_get_io_pp_params_1_p_0(
  MR_Word * mercury__pretty_printer__X_1)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

{
#define MR_PROC_LABEL mercury__pretty_printer__unsafe_get_io_pp_params_1_p_0

	MR_Word X;

		{
X = mercury__pretty_printer__mutable_variable_io_pp_params;


		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__X_1  = X;
}
  }
}

void MR_CALL 
mercury__pretty_printer__unlock_io_pp_params_0_p_0(void)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

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
    MR_bool mercury__pretty_printer__succeeded;

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

static void MR_CALL 
mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0(void)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__X_1;
    MR_Word mercury__pretty_printer__V_4_4;

{
#define MR_PROC_LABEL mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
    mercury__pretty_printer__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[13]);
    mercury__pretty_printer__X_1 = (MR_Word) &mercury__pretty_printer_scalar_common_2[4];
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

	X =  mercury__pretty_printer__X_1 ;
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

static void MR_CALL 
mercury__pretty_printer__pre_initialise_mutable_io_pp_params_0_p_0(void)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

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

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_tree234_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4,
  MR_Word mercury__pretty_printer__ArgDescs_5)
{
  {
    MR_bool mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__ArgDescs_5)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__pretty_printer__HeadVar__3_3;
    MR_Word mercury__pretty_printer__TypeInfo_20_20;
    MR_Word mercury__pretty_printer__TypeInfo_21_21;
    MR_Word mercury__pretty_printer__X_13;
    MR_Word mercury__pretty_printer__TypeInfo_22_22;
    MR_Word mercury__pretty_printer__TypeCtorInfo_23_23;
    MR_Word mercury__pretty_printer__TypeInfo_24_24;
    MR_Word mercury__pretty_printer__ArgDescA_6;
    MR_Word mercury__pretty_printer__ArgDescB_7;
    MR_Box mercury__pretty_printer__Value_12;
    MR_Word mercury__pretty_printer__V_14_14;
    MR_Word mercury__pretty_printer__V_15_15;
    MR_Box mercury__pretty_printer__V_16_16;
    MR_Box mercury__pretty_printer__V_17_17;
    MR_Box mercury__pretty_printer__conv0_X_13;

    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__ArgDescA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 0)));
        mercury__pretty_printer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 1)));
        mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__V_14_14)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__pretty_printer__succeeded)
          {
            mercury__pretty_printer__ArgDescB_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_14_14, (MR_Integer) 0)));
            mercury__pretty_printer__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_14_14, (MR_Integer) 1)));
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (mercury__pretty_printer__succeeded)
              {
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_tree234_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pretty_printer__ArgDescA_6 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeInfo_20_20  = TypeInfo_for_T;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_tree234_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pretty_printer__ArgDescB_7 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeInfo_21_21  = TypeInfo_for_T;
}
                mercury__pretty_printer__TypeInfo_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 0)));
                mercury__pretty_printer__Value_12 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 1));
                mercury__pretty_printer__TypeCtorInfo_23_23 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
                {
                  mercury__pretty_printer__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_24_24, 0) = ((MR_Box) (mercury__pretty_printer__TypeCtorInfo_23_23));
                  MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_24_24, 1) = ((MR_Box) (mercury__pretty_printer__TypeInfo_20_20));
                  MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_24_24, 2) = ((MR_Box) (mercury__pretty_printer__TypeInfo_21_21));
                }
                {
                  mercury__pretty_printer__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pretty_printer__TypeInfo_22_22, mercury__pretty_printer__TypeInfo_24_24, mercury__pretty_printer__Value_12, &mercury__pretty_printer__conv0_X_13);
                }
                if (mercury__pretty_printer__succeeded)
                  {
                    mercury__pretty_printer__X_13 = ((MR_Word) mercury__pretty_printer__conv0_X_13);
                    mercury__pretty_printer__succeeded = MR_TRUE;
                  }
              }
          }
      }
    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__HeadVar__3_3 = mercury__tree234__tree234_to_doc_1_f_0(mercury__pretty_printer__TypeInfo_20_20, mercury__pretty_printer__TypeInfo_21_21, mercury__pretty_printer__X_13);
      }
    else
      {
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[12]);
      }
    return mercury__pretty_printer__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_list_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4,
  MR_Word mercury__pretty_printer__ArgDescs_5)
{
  {
    MR_bool mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__ArgDescs_5)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__pretty_printer__HeadVar__3_3;
    MR_Word mercury__pretty_printer__TypeInfo_15_15;
    MR_Word mercury__pretty_printer__X_10;
    MR_Word mercury__pretty_printer__TypeInfo_16_16;
    MR_Word mercury__pretty_printer__TypeCtorInfo_17_17;
    MR_Word mercury__pretty_printer__TypeInfo_18_18;
    MR_Word mercury__pretty_printer__ArgDesc_6;
    MR_Box mercury__pretty_printer__Value_9;
    MR_Word mercury__pretty_printer__V_11_11;
    MR_Box mercury__pretty_printer__V_12_12;
    MR_Box mercury__pretty_printer__conv0_X_10;

    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__ArgDesc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 0)));
        mercury__pretty_printer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 1)));
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mercury__pretty_printer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_list_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pretty_printer__ArgDesc_6 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeInfo_15_15  = TypeInfo_for_T;
}
            mercury__pretty_printer__TypeInfo_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 0)));
            mercury__pretty_printer__Value_9 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 1));
            mercury__pretty_printer__TypeCtorInfo_17_17 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
            {
              mercury__pretty_printer__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 0) = ((MR_Box) (mercury__pretty_printer__TypeCtorInfo_17_17));
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 1) = ((MR_Box) (mercury__pretty_printer__TypeInfo_15_15));
            }
            {
              mercury__pretty_printer__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pretty_printer__TypeInfo_16_16, mercury__pretty_printer__TypeInfo_18_18, mercury__pretty_printer__Value_9, &mercury__pretty_printer__conv0_X_10);
            }
            if (mercury__pretty_printer__succeeded)
              {
                mercury__pretty_printer__X_10 = ((MR_Word) mercury__pretty_printer__conv0_X_10);
                mercury__pretty_printer__succeeded = MR_TRUE;
              }
          }
      }
    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__HeadVar__3_3 = mercury__list__list_to_doc_1_f_0(mercury__pretty_printer__TypeInfo_15_15, mercury__pretty_printer__X_10);
      }
    else
      {
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[11]);
      }
    return mercury__pretty_printer__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_version_array_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4,
  MR_Word mercury__pretty_printer__ArgDescs_5)
{
  {
    MR_bool mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__ArgDescs_5)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__pretty_printer__HeadVar__3_3;
    MR_Word mercury__pretty_printer__TypeInfo_15_15;
    MR_Box mercury__pretty_printer__X_10;
    MR_Word mercury__pretty_printer__TypeInfo_16_16;
    MR_Word mercury__pretty_printer__TypeCtorInfo_17_17;
    MR_Word mercury__pretty_printer__TypeInfo_18_18;
    MR_Word mercury__pretty_printer__ArgDesc_6;
    MR_Box mercury__pretty_printer__Value_9;
    MR_Word mercury__pretty_printer__V_11_11;
    MR_Box mercury__pretty_printer__V_12_12;
    MR_Box mercury__pretty_printer__conv0_X_10;

    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__ArgDesc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 0)));
        mercury__pretty_printer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 1)));
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mercury__pretty_printer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_version_array_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pretty_printer__ArgDesc_6 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeInfo_15_15  = TypeInfo_for_T;
}
            mercury__pretty_printer__TypeInfo_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 0)));
            mercury__pretty_printer__Value_9 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 1));
            mercury__pretty_printer__TypeCtorInfo_17_17 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
            {
              mercury__pretty_printer__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 0) = ((MR_Box) (mercury__pretty_printer__TypeCtorInfo_17_17));
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 1) = ((MR_Box) (mercury__pretty_printer__TypeInfo_15_15));
            }
            {
              mercury__pretty_printer__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pretty_printer__TypeInfo_16_16, mercury__pretty_printer__TypeInfo_18_18, mercury__pretty_printer__Value_9, &mercury__pretty_printer__conv0_X_10);
            }
            if (mercury__pretty_printer__succeeded)
              {
                mercury__pretty_printer__X_10 = ((MR_Box) mercury__pretty_printer__conv0_X_10);
                mercury__pretty_printer__succeeded = MR_TRUE;
              }
          }
      }
    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__HeadVar__3_3 = mercury__version_array__version_array_to_doc_1_f_0(mercury__pretty_printer__TypeInfo_15_15, mercury__pretty_printer__X_10);
      }
    else
      {
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[10]);
      }
    return mercury__pretty_printer__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_array_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4,
  MR_Word mercury__pretty_printer__ArgDescs_5)
{
  {
    MR_bool mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__ArgDescs_5)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__pretty_printer__HeadVar__3_3;
    MR_Word mercury__pretty_printer__TypeInfo_15_15;
    MR_ArrayPtr mercury__pretty_printer__X_10;
    MR_Word mercury__pretty_printer__TypeInfo_16_16;
    MR_Word mercury__pretty_printer__TypeCtorInfo_17_17;
    MR_Word mercury__pretty_printer__TypeInfo_18_18;
    MR_Word mercury__pretty_printer__ArgDesc_6;
    MR_Box mercury__pretty_printer__Value_9;
    MR_Word mercury__pretty_printer__V_11_11;
    MR_Box mercury__pretty_printer__V_12_12;
    MR_Box mercury__pretty_printer__conv0_X_10;

    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__ArgDesc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 0)));
        mercury__pretty_printer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 1)));
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mercury__pretty_printer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_array_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pretty_printer__ArgDesc_6 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeInfo_15_15  = TypeInfo_for_T;
}
            mercury__pretty_printer__TypeInfo_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 0)));
            mercury__pretty_printer__Value_9 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 1));
            mercury__pretty_printer__TypeCtorInfo_17_17 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
            {
              mercury__pretty_printer__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 0) = ((MR_Box) (mercury__pretty_printer__TypeCtorInfo_17_17));
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 1) = ((MR_Box) (mercury__pretty_printer__TypeInfo_15_15));
            }
            {
              mercury__pretty_printer__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pretty_printer__TypeInfo_16_16, mercury__pretty_printer__TypeInfo_18_18, mercury__pretty_printer__Value_9, &mercury__pretty_printer__conv0_X_10);
            }
            if (mercury__pretty_printer__succeeded)
              {
                mercury__pretty_printer__X_10 = ((MR_ArrayPtr) mercury__pretty_printer__conv0_X_10);
                mercury__pretty_printer__succeeded = MR_TRUE;
              }
          }
      }
    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__HeadVar__3_3 = mercury__array__array_to_doc_1_f_0(mercury__pretty_printer__TypeInfo_15_15, (MR_ArrayPtr) mercury__pretty_printer__X_10);
      }
    else
      {
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[9]);
      }
    return mercury__pretty_printer__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_string_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4,
  MR_Word mercury__pretty_printer___ArgDescs_5)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__HeadVar__3_3;

    {
      mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_f_0(mercury__pretty_printer__Univ_4);
    }
    return mercury__pretty_printer__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_int_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4,
  MR_Word mercury__pretty_printer___ArgDescs_5)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__HeadVar__3_3;

    {
      mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_f_0(mercury__pretty_printer__Univ_4);
    }
    return mercury__pretty_printer__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_float_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4,
  MR_Word mercury__pretty_printer___ArgDescs_5)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__HeadVar__3_3;

    {
      mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0(mercury__pretty_printer__Univ_4);
    }
    return mercury__pretty_printer__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__fmt_char_2_f_0(
  MR_Word mercury__pretty_printer__Univ_4,
  MR_Word mercury__pretty_printer___ArgDescs_5)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__HeadVar__3_3;

    {
      mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_f_0(mercury__pretty_printer__Univ_4);
    }
    return mercury__pretty_printer__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pretty_printer__initial_formatter_map_0_f_0(void)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_3;
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_9_9;
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_14_14;
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_19_19;
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_24_24;
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_29_29;
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_34_34;
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_39_39;

    {
      mercury__pretty_printer__set_formatter__ho8_6_p_0((MR_String) "builtin", (MR_String) "character", (MR_Integer) 0, mercury__pretty_printer__STATE_VARIABLE_Formatters_4_4, &mercury__pretty_printer__STATE_VARIABLE_Formatters_9_9);
    }
    {
      mercury__pretty_printer__set_formatter__ho7_6_p_0((MR_String) "builtin", (MR_String) "float", (MR_Integer) 0, mercury__pretty_printer__STATE_VARIABLE_Formatters_9_9, &mercury__pretty_printer__STATE_VARIABLE_Formatters_14_14);
    }
    {
      mercury__pretty_printer__set_formatter__ho6_6_p_0((MR_String) "builtin", (MR_String) "int", (MR_Integer) 0, mercury__pretty_printer__STATE_VARIABLE_Formatters_14_14, &mercury__pretty_printer__STATE_VARIABLE_Formatters_19_19);
    }
    {
      mercury__pretty_printer__set_formatter__ho5_6_p_0((MR_String) "builtin", (MR_String) "string", (MR_Integer) 0, mercury__pretty_printer__STATE_VARIABLE_Formatters_19_19, &mercury__pretty_printer__STATE_VARIABLE_Formatters_24_24);
    }
    {
      mercury__pretty_printer__set_formatter__ho4_6_p_0((MR_String) "array", (MR_String) "array", (MR_Integer) 1, mercury__pretty_printer__STATE_VARIABLE_Formatters_24_24, &mercury__pretty_printer__STATE_VARIABLE_Formatters_29_29);
    }
    {
      mercury__pretty_printer__set_formatter__ho3_6_p_0((MR_String) "list", (MR_String) "list", (MR_Integer) 1, mercury__pretty_printer__STATE_VARIABLE_Formatters_29_29, &mercury__pretty_printer__STATE_VARIABLE_Formatters_34_34);
    }
    {
      mercury__pretty_printer__set_formatter__ho2_6_p_0((MR_String) "tree234", (MR_String) "tree234", (MR_Integer) 2, mercury__pretty_printer__STATE_VARIABLE_Formatters_34_34, &mercury__pretty_printer__STATE_VARIABLE_Formatters_39_39);
    }
    {
      mercury__pretty_printer__set_formatter__ho1_6_p_0((MR_String) "version_array", (MR_String) "version_array", (MR_Integer) 1, mercury__pretty_printer__STATE_VARIABLE_Formatters_39_39, &mercury__pretty_printer__STATE_VARIABLE_Formatters_3);
    }
    return mercury__pretty_printer__STATE_VARIABLE_Formatters_3;
  }
}

void MR_CALL 
mercury__pretty_printer__unsafe_get_default_formatter_map_3_p_0(
  MR_Word * mercury__pretty_printer__FMap_1)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

{
#define MR_PROC_LABEL mercury__pretty_printer__unsafe_get_default_formatter_map_3_p_0

	MR_Word FMap;

		{

    FMap = ML_pretty_printer_default_formatter_map;


		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__FMap_1  = FMap;
}
  }
}

void MR_CALL 
mercury__pretty_printer__pretty_printer_is_initialised_3_p_0(
  MR_Word * mercury__pretty_printer__Okay_1)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

{
#define MR_PROC_LABEL mercury__pretty_printer__pretty_printer_is_initialised_3_p_0

	MR_Word Okay;

		{

    Okay = ML_pretty_printer_is_initialised;


		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__Okay_1  = Okay;
}
  }
}

static void MR_CALL 
mercury__pretty_printer__decrement_limit_2_p_0(
  MR_Word mercury__pretty_printer__HeadVar__1_1,
  MR_Word * mercury__pretty_printer__HeadVar__2_2)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

    if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer mercury__pretty_printer__N_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__pretty_printer__V_4_4 = (mercury__pretty_printer__N_3 - (MR_Integer) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *mercury__pretty_printer__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__pretty_printer__V_4_4));
        }
      }
    else
      {
        MR_Integer mercury__pretty_printer__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__pretty_printer__V_7_7 = (mercury__pretty_printer__N_6 - (MR_Integer) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__pretty_printer__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__V_7_7));
        }
      }
  }
}

static void MR_CALL 
mercury__pretty_printer__set_func_symbol_limit_correctly_3_p_0(
  MR_Word mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Word * mercury__pretty_printer__Doc_3)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

    if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      *mercury__pretty_printer__Doc_3 = mercury__pretty_printer__HeadVar__2_2;
    else
      {
        MR_Word mercury__pretty_printer__V_10_10;
        MR_Word mercury__pretty_printer__V_11_11;
        MR_Word mercury__pretty_printer__V_12_12;
        MR_Word mercury__pretty_printer__V_13_13;
        MR_Word mercury__pretty_printer__V_14_14;

        {
          mercury__pretty_printer__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_13_13, 0) = ((MR_Box) (mercury__pretty_printer__HeadVar__1_1));
        }
        {
          mercury__pretty_printer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_12_12, 1) = ((MR_Box) (mercury__pretty_printer__V_13_13));
        }
        mercury__pretty_printer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__pretty_printer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_11_11, 0) = ((MR_Box) (mercury__pretty_printer__V_12_12));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_11_11, 1) = ((MR_Box) (mercury__pretty_printer__V_14_14));
        }
        {
          mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_10_10, 0) = ((MR_Box) (mercury__pretty_printer__HeadVar__2_2));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_10_10, 1) = ((MR_Box) (mercury__pretty_printer__V_11_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__pretty_printer__Doc_3 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__pretty_printer__V_10_10));
        }
      }
  }
}

static MR_Integer MR_CALL 
mercury__pretty_printer__adjust_priority_2_f_0(
  MR_Integer mercury__pretty_printer__Priority_4,
  MR_Word mercury__pretty_printer__Assoc_5)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Integer mercury__pretty_printer__AdjustedPriority_6;

    switch (mercury__pretty_printer__Assoc_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__pretty_printer__AdjustedPriority_6 = (mercury__pretty_printer__Priority_4 - (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 1:
        mercury__pretty_printer__AdjustedPriority_6 = mercury__pretty_printer__Priority_4;
        break;
    }
    return mercury__pretty_printer__AdjustedPriority_6;
  }
}

static MR_Word MR_CALL 
mercury__pretty_printer__add_parens_if_needed_3_f_0(
  MR_Integer mercury__pretty_printer__OpPriority_5,
  MR_Integer mercury__pretty_printer__EnclosingPriority_6,
  MR_Word mercury__pretty_printer__Doc_7)
{
  {
    MR_bool mercury__pretty_printer__succeeded = (mercury__pretty_printer__OpPriority_5 > mercury__pretty_printer__EnclosingPriority_6);
    MR_Word mercury__pretty_printer__HeadVar__4_4;

    if (mercury__pretty_printer__succeeded)
      {
        MR_Word mercury__pretty_printer__V_8_8;
        MR_Word mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[6]);
        MR_Word mercury__pretty_printer__V_11_11;
        MR_Word mercury__pretty_printer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[11]);
        MR_Word mercury__pretty_printer__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[7]);
        MR_Word mercury__pretty_printer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__pretty_printer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_11_11, 0) = ((MR_Box) (mercury__pretty_printer__Doc_7));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_11_11, 1) = ((MR_Box) (mercury__pretty_printer__V_12_12));
        }
        {
          mercury__pretty_printer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_8_8, 0) = ((MR_Box) (mercury__pretty_printer__V_9_9));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_8_8, 1) = ((MR_Box) (mercury__pretty_printer__V_11_11));
        }
        {
          mercury__pretty_printer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__4_4, 0) = ((MR_Box) (mercury__pretty_printer__V_8_8));
        }
      }
    else
      mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__Doc_7;
    return mercury__pretty_printer__HeadVar__4_4;
  }
}

static MR_bool MR_CALL 
mercury__pretty_printer__expand_format_op_4_p_0(
  MR_String mercury__pretty_printer__Op_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Integer mercury__pretty_printer__CurrentPri_3,
  MR_Word * mercury__pretty_printer__Docs_4)
{
  {
    MR_bool mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__pretty_printer__V_110_110;
    MR_Word mercury__pretty_printer__V_111_111;

    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
        mercury__pretty_printer__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
        if ((mercury__pretty_printer__V_110_110 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Integer mercury__pretty_printer__OpPri_9;
            MR_Word mercury__pretty_printer__Assoc_10;
            MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_106;

            {
              mercury__ops__init_mercury_op_table_0_f_0();
            }
            mercury__pretty_printer__TypeClassInfo_for_op_table_106 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
            {
              mercury__pretty_printer__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__pretty_printer__TypeClassInfo_for_op_table_106, ((MR_Box) ((MR_Integer) 0)), mercury__pretty_printer__Op_1, &mercury__pretty_printer__OpPri_9, &mercury__pretty_printer__Assoc_10);
            }
            if (mercury__pretty_printer__succeeded)
              {
                MR_Word mercury__pretty_printer__Doc_11;
                MR_Word mercury__pretty_printer__V_14_14;
                MR_Word mercury__pretty_printer__V_15_15;
                MR_Word mercury__pretty_printer__V_16_16;
                MR_Word mercury__pretty_printer__V_17_17;
                MR_Word mercury__pretty_printer__V_18_18;
                MR_Integer mercury__pretty_printer__V_19_19;
                MR_Word mercury__pretty_printer__V_20_20;
                MR_Word mercury__pretty_printer__V_21_21;
                MR_Word mercury__pretty_printer__V_22_22;

                {
                  mercury__pretty_printer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_15_15, 0) = ((MR_Box) (mercury__pretty_printer__Op_1));
                }
                {
                  mercury__pretty_printer__V_19_19 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_9, mercury__pretty_printer__Assoc_10);
                }
                {
                  mercury__pretty_printer__V_18_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_18_18, 0) = ((MR_Box) (mercury__pretty_printer__V_19_19));
                }
                {
                  mercury__pretty_printer__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_17_17, 1) = ((MR_Box) (mercury__pretty_printer__V_18_18));
                }
                {
                  mercury__pretty_printer__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_21_21, 1) = ((MR_Box) (mercury__pretty_printer__V_111_111));
                }
                mercury__pretty_printer__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  mercury__pretty_printer__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_20_20, 0) = ((MR_Box) (mercury__pretty_printer__V_21_21));
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_20_20, 1) = ((MR_Box) (mercury__pretty_printer__V_22_22));
                }
                {
                  mercury__pretty_printer__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_16_16, 0) = ((MR_Box) (mercury__pretty_printer__V_17_17));
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_16_16, 1) = ((MR_Box) (mercury__pretty_printer__V_20_20));
                }
                {
                  mercury__pretty_printer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_14_14, 0) = ((MR_Box) (mercury__pretty_printer__V_15_15));
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_14_14, 1) = ((MR_Box) (mercury__pretty_printer__V_16_16));
                }
                {
                  mercury__pretty_printer__Doc_11 = mercury__pretty_printer__group_1_f_0(mercury__pretty_printer__V_14_14);
                }
                {
                  *mercury__pretty_printer__Docs_4 = mercury__pretty_printer__add_parens_if_needed_3_f_0(mercury__pretty_printer__OpPri_9, mercury__pretty_printer__CurrentPri_3, mercury__pretty_printer__Doc_11);
                }
                mercury__pretty_printer__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_107;
                MR_Word mercury__pretty_printer__V_24_24;
                MR_Word mercury__pretty_printer__V_25_25;
                MR_Word mercury__pretty_printer__V_26_26;
                MR_Integer mercury__pretty_printer__V_27_27;
                MR_Word mercury__pretty_printer__V_28_28;
                MR_Word mercury__pretty_printer__V_29_29;
                MR_Word mercury__pretty_printer__V_30_30;
                MR_Word mercury__pretty_printer__V_31_31;
                MR_Word mercury__pretty_printer__V_32_32;
                MR_Integer mercury__pretty_printer__OpPri_33;
                MR_Word mercury__pretty_printer__Assoc_34;
                MR_Word mercury__pretty_printer__Doc_35;

                {
                  mercury__ops__init_mercury_op_table_0_f_0();
                }
                mercury__pretty_printer__TypeClassInfo_for_op_table_107 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
                {
                  mercury__pretty_printer__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__pretty_printer__TypeClassInfo_for_op_table_107, ((MR_Box) ((MR_Integer) 0)), mercury__pretty_printer__Op_1, &mercury__pretty_printer__OpPri_33, &mercury__pretty_printer__Assoc_34);
                }
                if (mercury__pretty_printer__succeeded)
                  {
                    {
                      mercury__pretty_printer__V_27_27 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_33, mercury__pretty_printer__Assoc_34);
                    }
                    mercury__pretty_printer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_26_26, 0) = ((MR_Box) (mercury__pretty_printer__V_27_27));
                    }
                    {
                      mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_25_25, 1) = ((MR_Box) (mercury__pretty_printer__V_26_26));
                    }
                    {
                      mercury__pretty_printer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_29_29, 1) = ((MR_Box) (mercury__pretty_printer__V_111_111));
                    }
                    {
                      mercury__pretty_printer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_31_31, 0) = ((MR_Box) (mercury__pretty_printer__Op_1));
                    }
                    {
                      mercury__pretty_printer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_30_30, 0) = ((MR_Box) (mercury__pretty_printer__V_31_31));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_30_30, 1) = ((MR_Box) (mercury__pretty_printer__V_32_32));
                    }
                    {
                      mercury__pretty_printer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_28_28, 0) = ((MR_Box) (mercury__pretty_printer__V_29_29));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_28_28, 1) = ((MR_Box) (mercury__pretty_printer__V_30_30));
                    }
                    {
                      mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_24_24, 0) = ((MR_Box) (mercury__pretty_printer__V_25_25));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_24_24, 1) = ((MR_Box) (mercury__pretty_printer__V_28_28));
                    }
                    {
                      mercury__pretty_printer__Doc_35 = mercury__pretty_printer__group_1_f_0(mercury__pretty_printer__V_24_24);
                    }
                    {
                      *mercury__pretty_printer__Docs_4 = mercury__pretty_printer__add_parens_if_needed_3_f_0(mercury__pretty_printer__OpPri_33, mercury__pretty_printer__CurrentPri_3, mercury__pretty_printer__Doc_35);
                    }
                    mercury__pretty_printer__succeeded = MR_TRUE;
                  }
              }
          }
        else
          {
            MR_Word mercury__pretty_printer__ArgB_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_110_110, (MR_Integer) 0)));
            MR_Word mercury__pretty_printer__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_110_110, (MR_Integer) 1)));
            MR_Integer mercury__pretty_printer__OpPri_41;
            MR_Word mercury__pretty_printer__AssocA_42;
            MR_Word mercury__pretty_printer__AssocB_43;
            MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_108;

            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (mercury__pretty_printer__succeeded)
              {
                {
                  mercury__ops__init_mercury_op_table_0_f_0();
                }
                mercury__pretty_printer__TypeClassInfo_for_op_table_108 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
                {
                  mercury__pretty_printer__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__pretty_printer__TypeClassInfo_for_op_table_108, ((MR_Box) ((MR_Integer) 0)), mercury__pretty_printer__Op_1, &mercury__pretty_printer__OpPri_41, &mercury__pretty_printer__AssocA_42, &mercury__pretty_printer__AssocB_43);
                }
                if (mercury__pretty_printer__succeeded)
                  {
                    MR_Word mercury__pretty_printer__Doc_44;
                    MR_Word mercury__pretty_printer__V_48_48;
                    MR_Word mercury__pretty_printer__V_49_49;
                    MR_Word mercury__pretty_printer__V_50_50;
                    MR_Integer mercury__pretty_printer__V_51_51;
                    MR_Word mercury__pretty_printer__V_52_52;
                    MR_Word mercury__pretty_printer__V_53_53;
                    MR_Word mercury__pretty_printer__V_54_54;
                    MR_Word mercury__pretty_printer__V_55_55;
                    MR_Word mercury__pretty_printer__V_65_65;
                    MR_Word mercury__pretty_printer__V_66_66;
                    MR_Word mercury__pretty_printer__V_67_67;
                    MR_Word mercury__pretty_printer__V_68_68;
                    MR_Word mercury__pretty_printer__V_69_69;
                    MR_Word mercury__pretty_printer__V_70_70;
                    MR_Word mercury__pretty_printer__V_71_71;
                    MR_Integer mercury__pretty_printer__V_72_72;
                    MR_Word mercury__pretty_printer__V_73_73;
                    MR_Word mercury__pretty_printer__V_74_74;
                    MR_Word mercury__pretty_printer__V_75_75;
                    MR_Word mercury__pretty_printer__V_76_76;

                    {
                      mercury__pretty_printer__V_51_51 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_41, mercury__pretty_printer__AssocA_42);
                    }
                    {
                      mercury__pretty_printer__V_50_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_50_50, 0) = ((MR_Box) (mercury__pretty_printer__V_51_51));
                    }
                    {
                      mercury__pretty_printer__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_49_49, 1) = ((MR_Box) (mercury__pretty_printer__V_50_50));
                    }
                    {
                      mercury__pretty_printer__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_53_53, 1) = ((MR_Box) (mercury__pretty_printer__V_111_111));
                    }
                    mercury__pretty_printer__succeeded = (strcmp(mercury__pretty_printer__Op_1, (MR_String) ".") == 0);
                    if (mercury__pretty_printer__succeeded)
                      {
                        mercury__pretty_printer__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_55_55, 0) = ((MR_Box) (mercury__pretty_printer__Op_1));
                      }
                    else
                      {
                        MR_Word mercury__pretty_printer__V_56_56;
                        MR_Word mercury__pretty_printer__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[8]);
                        MR_Word mercury__pretty_printer__V_59_59;
                        MR_Word mercury__pretty_printer__V_60_60;
                        MR_Word mercury__pretty_printer__V_61_61;
                        MR_Word mercury__pretty_printer__V_64_64;

                        {
                          mercury__pretty_printer__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_60_60, 0) = ((MR_Box) (mercury__pretty_printer__Op_1));
                        }
                        mercury__pretty_printer__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        mercury__pretty_printer__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[12]);
                        {
                          mercury__pretty_printer__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_59_59, 0) = ((MR_Box) (mercury__pretty_printer__V_60_60));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_59_59, 1) = ((MR_Box) (mercury__pretty_printer__V_61_61));
                        }
                        {
                          mercury__pretty_printer__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_56_56, 0) = ((MR_Box) (mercury__pretty_printer__V_57_57));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_56_56, 1) = ((MR_Box) (mercury__pretty_printer__V_59_59));
                        }
                        {
                          mercury__pretty_printer__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_55_55, 0) = ((MR_Box) (mercury__pretty_printer__V_56_56));
                        }
                      }
                    mercury__pretty_printer__V_68_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      mercury__pretty_printer__V_72_72 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_41, mercury__pretty_printer__AssocB_43);
                    }
                    {
                      mercury__pretty_printer__V_71_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_71_71, 0) = ((MR_Box) (mercury__pretty_printer__V_72_72));
                    }
                    {
                      mercury__pretty_printer__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_70_70, 1) = ((MR_Box) (mercury__pretty_printer__V_71_71));
                    }
                    {
                      mercury__pretty_printer__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_74_74, 1) = ((MR_Box) (mercury__pretty_printer__ArgB_38));
                    }
                    mercury__pretty_printer__V_75_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      mercury__pretty_printer__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_73_73, 0) = ((MR_Box) (mercury__pretty_printer__V_74_74));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_73_73, 1) = ((MR_Box) (mercury__pretty_printer__V_75_75));
                    }
                    {
                      mercury__pretty_printer__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_69_69, 0) = ((MR_Box) (mercury__pretty_printer__V_70_70));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_69_69, 1) = ((MR_Box) (mercury__pretty_printer__V_73_73));
                    }
                    {
                      mercury__pretty_printer__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_67_67, 0) = ((MR_Box) (mercury__pretty_printer__V_68_68));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_67_67, 1) = ((MR_Box) (mercury__pretty_printer__V_69_69));
                    }
                    {
                      mercury__pretty_printer__V_66_66 = mercury__pretty_printer__indent_1_f_0(mercury__pretty_printer__V_67_67);
                    }
                    mercury__pretty_printer__V_76_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      mercury__pretty_printer__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_65_65, 0) = ((MR_Box) (mercury__pretty_printer__V_66_66));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_65_65, 1) = ((MR_Box) (mercury__pretty_printer__V_76_76));
                    }
                    {
                      mercury__pretty_printer__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_54_54, 0) = ((MR_Box) (mercury__pretty_printer__V_55_55));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_54_54, 1) = ((MR_Box) (mercury__pretty_printer__V_65_65));
                    }
                    {
                      mercury__pretty_printer__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_52_52, 0) = ((MR_Box) (mercury__pretty_printer__V_53_53));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_52_52, 1) = ((MR_Box) (mercury__pretty_printer__V_54_54));
                    }
                    {
                      mercury__pretty_printer__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_48_48, 0) = ((MR_Box) (mercury__pretty_printer__V_49_49));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_48_48, 1) = ((MR_Box) (mercury__pretty_printer__V_52_52));
                    }
                    {
                      mercury__pretty_printer__Doc_44 = mercury__pretty_printer__group_1_f_0(mercury__pretty_printer__V_48_48);
                    }
                    {
                      *mercury__pretty_printer__Docs_4 = mercury__pretty_printer__add_parens_if_needed_3_f_0(mercury__pretty_printer__OpPri_41, mercury__pretty_printer__CurrentPri_3, mercury__pretty_printer__Doc_44);
                    }
                    mercury__pretty_printer__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_109;
                    MR_Word mercury__pretty_printer__V_78_78;
                    MR_Word mercury__pretty_printer__V_79_79;
                    MR_Word mercury__pretty_printer__V_80_80;
                    MR_Word mercury__pretty_printer__V_81_81;
                    MR_String mercury__pretty_printer__V_82_82;
                    MR_Word mercury__pretty_printer__V_83_83;
                    MR_Word mercury__pretty_printer__V_84_84;
                    MR_Word mercury__pretty_printer__V_85_85;
                    MR_Integer mercury__pretty_printer__V_86_86;
                    MR_Word mercury__pretty_printer__V_87_87;
                    MR_Word mercury__pretty_printer__V_88_88;
                    MR_Word mercury__pretty_printer__V_89_89;
                    MR_Word mercury__pretty_printer__V_92_92;
                    MR_Word mercury__pretty_printer__V_93_93;
                    MR_Word mercury__pretty_printer__V_94_94;
                    MR_Word mercury__pretty_printer__V_95_95;
                    MR_Word mercury__pretty_printer__V_96_96;
                    MR_Integer mercury__pretty_printer__V_97_97;
                    MR_Word mercury__pretty_printer__V_98_98;
                    MR_Word mercury__pretty_printer__V_99_99;
                    MR_Word mercury__pretty_printer__V_100_100;
                    MR_Word mercury__pretty_printer__V_101_101;
                    MR_Integer mercury__pretty_printer__OpPri_102;
                    MR_Word mercury__pretty_printer__AssocA_103;
                    MR_Word mercury__pretty_printer__AssocB_104;
                    MR_Word mercury__pretty_printer__Doc_105;

                    {
                      mercury__ops__init_mercury_op_table_0_f_0();
                    }
                    mercury__pretty_printer__TypeClassInfo_for_op_table_109 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
                    {
                      mercury__pretty_printer__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__pretty_printer__TypeClassInfo_for_op_table_109, ((MR_Box) ((MR_Integer) 0)), mercury__pretty_printer__Op_1, &mercury__pretty_printer__OpPri_102, &mercury__pretty_printer__AssocA_103, &mercury__pretty_printer__AssocB_104);
                    }
                    if (mercury__pretty_printer__succeeded)
                      {
                        mercury__pretty_printer__V_82_82 = (MR_String) " ";
                        {
                          mercury__pretty_printer__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_79_79, 0) = ((MR_Box) (mercury__pretty_printer__Op_1));
                        }
                        mercury__pretty_printer__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[8]);
                        {
                          mercury__pretty_printer__V_86_86 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_102, mercury__pretty_printer__AssocA_103);
                        }
                        {
                          mercury__pretty_printer__V_85_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_85_85, 0) = ((MR_Box) (mercury__pretty_printer__V_86_86));
                        }
                        {
                          mercury__pretty_printer__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_84_84, 1) = ((MR_Box) (mercury__pretty_printer__V_85_85));
                        }
                        {
                          mercury__pretty_printer__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_88_88, 1) = ((MR_Box) (mercury__pretty_printer__V_111_111));
                        }
                        {
                          mercury__pretty_printer__V_97_97 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_102, mercury__pretty_printer__AssocB_104);
                        }
                        mercury__pretty_printer__V_100_100 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        {
                          mercury__pretty_printer__V_96_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_96_96, 0) = ((MR_Box) (mercury__pretty_printer__V_97_97));
                        }
                        {
                          mercury__pretty_printer__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_95_95, 1) = ((MR_Box) (mercury__pretty_printer__V_96_96));
                        }
                        {
                          mercury__pretty_printer__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_99_99, 1) = ((MR_Box) (mercury__pretty_printer__ArgB_38));
                        }
                        {
                          mercury__pretty_printer__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_98_98, 0) = ((MR_Box) (mercury__pretty_printer__V_99_99));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_98_98, 1) = ((MR_Box) (mercury__pretty_printer__V_100_100));
                        }
                        {
                          mercury__pretty_printer__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 0) = ((MR_Box) (mercury__pretty_printer__V_95_95));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 1) = ((MR_Box) (mercury__pretty_printer__V_98_98));
                        }
                        {
                          mercury__pretty_printer__V_93_93 = mercury__pretty_printer__indent_1_f_0(mercury__pretty_printer__V_94_94);
                        }
                        mercury__pretty_printer__V_101_101 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        {
                          mercury__pretty_printer__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_92_92, 0) = ((MR_Box) (mercury__pretty_printer__V_93_93));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_92_92, 1) = ((MR_Box) (mercury__pretty_printer__V_101_101));
                        }
                        {
                          mercury__pretty_printer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 0) = ((MR_Box) (mercury__pretty_printer__V_81_81));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 1) = ((MR_Box) (mercury__pretty_printer__V_92_92));
                        }
                        {
                          mercury__pretty_printer__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_87_87, 0) = ((MR_Box) (mercury__pretty_printer__V_88_88));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_87_87, 1) = ((MR_Box) (mercury__pretty_printer__V_89_89));
                        }
                        {
                          mercury__pretty_printer__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_83_83, 0) = ((MR_Box) (mercury__pretty_printer__V_84_84));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_83_83, 1) = ((MR_Box) (mercury__pretty_printer__V_87_87));
                        }
                        {
                          mercury__pretty_printer__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_80_80, 0) = ((MR_Box) (mercury__pretty_printer__V_81_81));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_80_80, 1) = ((MR_Box) (mercury__pretty_printer__V_83_83));
                        }
                        {
                          mercury__pretty_printer__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_78_78, 0) = ((MR_Box) (mercury__pretty_printer__V_79_79));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_78_78, 1) = ((MR_Box) (mercury__pretty_printer__V_80_80));
                        }
                        {
                          mercury__pretty_printer__Doc_105 = mercury__pretty_printer__group_1_f_0(mercury__pretty_printer__V_78_78);
                        }
                        {
                          *mercury__pretty_printer__Docs_4 = mercury__pretty_printer__add_parens_if_needed_3_f_0(mercury__pretty_printer__OpPri_102, mercury__pretty_printer__CurrentPri_3, mercury__pretty_printer__Doc_105);
                        }
                        mercury__pretty_printer__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return mercury__pretty_printer__succeeded;
  }
}

static void MR_CALL 
mercury__pretty_printer__expand_format_susp_4_p_0(
  MR_Word mercury__pretty_printer__Susp_5,
  MR_Word * mercury__pretty_printer__Doc_6,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_9,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_10)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

    if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_9)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer mercury__pretty_printer__N_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_9, (MR_Integer) 0)));

        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_12 <= (MR_Integer) 0);
      }
    else
      {
        MR_Integer mercury__pretty_printer__N_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_9, (MR_Integer) 0)));

        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_14 <= (MR_Integer) 0);
      }
    if (mercury__pretty_printer__succeeded)
      {
        *mercury__pretty_printer__Doc_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1]);
        *mercury__pretty_printer__STATE_VARIABLE_Limit_10 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_9;
      }
    else
      {
        MR_Word mercury__pretty_printer__Doc0_8;
        MR_Box MR_CALL (* mercury__pretty_printer__func_0)(MR_Box);
        MR_Box mercury__pretty_printer__conv1_Doc0_8;

        if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_9)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Integer mercury__pretty_printer__N_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_9, (MR_Integer) 0)));
            MR_Integer mercury__pretty_printer__V_18_18 = (mercury__pretty_printer__N_17 - (MR_Integer) 1);

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__pretty_printer__STATE_VARIABLE_Limit_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__pretty_printer__V_18_18));
            }
          }
        else
          {
            MR_Integer mercury__pretty_printer__N_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_9, (MR_Integer) 0)));
            MR_Integer mercury__pretty_printer__V_21_21 = (mercury__pretty_printer__N_20 - (MR_Integer) 1);

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__pretty_printer__STATE_VARIABLE_Limit_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__V_21_21));
            }
          }
        mercury__pretty_printer__func_0 = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Susp_5, (MR_Integer) 1)));
        {
          mercury__pretty_printer__conv1_Doc0_8 = mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__Susp_5));
        }
        mercury__pretty_printer__Doc0_8 = ((MR_Word) mercury__pretty_printer__conv1_Doc0_8);
        if (((MR_tag((MR_Word) *mercury__pretty_printer__STATE_VARIABLE_Limit_10)) == (MR_mktag((MR_Integer) 0))))
          *mercury__pretty_printer__Doc_6 = mercury__pretty_printer__Doc0_8;
        else
          {
            MR_Word mercury__pretty_printer__V_29_29;
            MR_Word mercury__pretty_printer__V_30_30;
            MR_Word mercury__pretty_printer__V_31_31;
            MR_Word mercury__pretty_printer__V_32_32;
            MR_Word mercury__pretty_printer__V_33_33;

            {
              mercury__pretty_printer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_32_32, 0) = ((MR_Box) (*mercury__pretty_printer__STATE_VARIABLE_Limit_10));
            }
            {
              mercury__pretty_printer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_31_31, 1) = ((MR_Box) (mercury__pretty_printer__V_32_32));
            }
            mercury__pretty_printer__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__pretty_printer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_30_30, 0) = ((MR_Box) (mercury__pretty_printer__V_31_31));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_30_30, 1) = ((MR_Box) (mercury__pretty_printer__V_33_33));
            }
            {
              mercury__pretty_printer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 0) = ((MR_Box) (mercury__pretty_printer__Doc0_8));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 1) = ((MR_Box) (mercury__pretty_printer__V_30_30));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__pretty_printer__Doc_6 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__pretty_printer__V_29_29));
            }
          }
      }
  }
}

static void MR_CALL 
mercury__pretty_printer__expand_format_term_6_p_0(
  MR_String mercury__pretty_printer__Name_7,
  MR_Word mercury__pretty_printer__Args_8,
  MR_Word * mercury__pretty_printer__Doc_9,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_14,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_15,
  MR_Integer mercury__pretty_printer__CurrentPri_11)
{
  {
    MR_bool mercury__pretty_printer__succeeded = (mercury__pretty_printer__Args_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__pretty_printer__Doc0_12;

    if (mercury__pretty_printer__succeeded)
      {
        MR_String mercury__pretty_printer__V_16_16;

        {
          mercury__pretty_printer__V_16_16 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__pretty_printer__Name_7, (MR_Integer) 1);
        }
        {
          mercury__pretty_printer__Doc0_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc0_12, 0) = ((MR_Box) (mercury__pretty_printer__V_16_16));
        }
      }
    else
      {
        if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_14)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Integer mercury__pretty_printer__N_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_14, (MR_Integer) 0)));

            mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_54 <= (MR_Integer) 0);
          }
        else
          {
            MR_Integer mercury__pretty_printer__N_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_14, (MR_Integer) 0)));

            mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_56 <= (MR_Integer) 0);
          }
        if (mercury__pretty_printer__succeeded)
          {
            mercury__pretty_printer__Doc0_12 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1]);
          }
        else
          {
            MR_Word mercury__pretty_printer__OpDoc_13;

            {
              mercury__pretty_printer__succeeded = mercury__pretty_printer__expand_format_op_4_p_0(mercury__pretty_printer__Name_7, mercury__pretty_printer__Args_8, mercury__pretty_printer__CurrentPri_11, &mercury__pretty_printer__OpDoc_13);
            }
            if (mercury__pretty_printer__succeeded)
              mercury__pretty_printer__Doc0_12 = mercury__pretty_printer__OpDoc_13;
            else
              {
                mercury__pretty_printer__succeeded = (strcmp(mercury__pretty_printer__Name_7, (MR_String) "{}") == 0);
                if (mercury__pretty_printer__succeeded)
                  {
                    MR_Word mercury__pretty_printer__V_17_17;
                    MR_Word mercury__pretty_printer__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[3]);
                    MR_Word mercury__pretty_printer__V_20_20;
                    MR_Word mercury__pretty_printer__V_21_21;
                    MR_Word mercury__pretty_printer__V_22_22;
                    MR_Word mercury__pretty_printer__V_23_23;
                    MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[4]);
                    MR_Word mercury__pretty_printer__V_26_26;
                    MR_Word mercury__pretty_printer__V_27_27;
                    MR_Word mercury__pretty_printer__V_28_28;
                    MR_Word mercury__pretty_printer__V_30_30;
                    MR_Word mercury__pretty_printer__V_63_63;
                    MR_Word mercury__pretty_printer__V_64_64;
                    MR_Word mercury__pretty_printer__V_65_65;
                    MR_Word mercury__pretty_printer__V_66_66;
                    MR_Word mercury__pretty_printer__V_67_67;
                    MR_Word mercury__pretty_printer__V_68_68;
                    MR_Word mercury__pretty_printer__V_69_69;
                    MR_Word mercury__pretty_printer__V_70_70;
                    MR_Word mercury__pretty_printer__V_71_71;

                    {
                      mercury__pretty_printer__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_23_23, 1) = ((MR_Box) (mercury__pretty_printer__Args_8));
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_23_23, 2) = ((MR_Box) (mercury__pretty_printer__V_24_24));
                    }
                    mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      mercury__pretty_printer__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_22_22, 0) = ((MR_Box) (mercury__pretty_printer__V_23_23));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_22_22, 1) = ((MR_Box) (mercury__pretty_printer__V_26_26));
                    }
                    mercury__pretty_printer__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[0]);
                    mercury__pretty_printer__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[6]);
                    {
                      mercury__pretty_printer__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_67_67, 0) = ((MR_Box) (mercury__pretty_printer__V_22_22));
                    }
                    mercury__pretty_printer__V_70_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                    mercury__pretty_printer__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[4]);
                    mercury__pretty_printer__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mercury__pretty_printer__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[5]);
                    {
                      mercury__pretty_printer__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_66_66, 0) = ((MR_Box) (mercury__pretty_printer__V_67_67));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_66_66, 1) = ((MR_Box) (mercury__pretty_printer__V_68_68));
                    }
                    {
                      mercury__pretty_printer__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_63_63, 0) = ((MR_Box) (mercury__pretty_printer__V_64_64));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_63_63, 1) = ((MR_Box) (mercury__pretty_printer__V_66_66));
                    }
                    {
                      mercury__pretty_printer__V_21_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_21_21, 0) = ((MR_Box) (mercury__pretty_printer__V_63_63));
                    }
                    mercury__pretty_printer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[5]);
                    mercury__pretty_printer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mercury__pretty_printer__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[10]);
                    {
                      mercury__pretty_printer__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_20_20, 0) = ((MR_Box) (mercury__pretty_printer__V_21_21));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_20_20, 1) = ((MR_Box) (mercury__pretty_printer__V_27_27));
                    }
                    {
                      mercury__pretty_printer__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_17_17, 0) = ((MR_Box) (mercury__pretty_printer__V_18_18));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_17_17, 1) = ((MR_Box) (mercury__pretty_printer__V_20_20));
                    }
                    {
                      mercury__pretty_printer__Doc0_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc0_12, 0) = ((MR_Box) (mercury__pretty_printer__V_17_17));
                    }
                  }
                else
                  {
                    MR_Word mercury__pretty_printer__V_31_31;
                    MR_Word mercury__pretty_printer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    MR_Word mercury__pretty_printer__V_33_33;
                    MR_Word mercury__pretty_printer__V_34_34;
                    MR_String mercury__pretty_printer__V_35_35;
                    MR_Word mercury__pretty_printer__V_36_36;
                    MR_Word mercury__pretty_printer__V_37_37;
                    MR_Word mercury__pretty_printer__V_39_39;
                    MR_Word mercury__pretty_printer__V_40_40;
                    MR_Word mercury__pretty_printer__V_41_41;
                    MR_Word mercury__pretty_printer__V_42_42;
                    MR_Word mercury__pretty_printer__V_43_43;
                    MR_Word mercury__pretty_printer__V_45_45;
                    MR_Word mercury__pretty_printer__V_46_46;
                    MR_Word mercury__pretty_printer__V_47_47;
                    MR_Word mercury__pretty_printer__V_49_49;
                    MR_Word mercury__pretty_printer__V_79_79;
                    MR_Word mercury__pretty_printer__V_80_80;
                    MR_Word mercury__pretty_printer__V_81_81;
                    MR_Word mercury__pretty_printer__V_82_82;
                    MR_Word mercury__pretty_printer__V_83_83;
                    MR_Word mercury__pretty_printer__V_84_84;
                    MR_Word mercury__pretty_printer__V_85_85;
                    MR_Word mercury__pretty_printer__V_86_86;
                    MR_Word mercury__pretty_printer__V_87_87;
                    MR_Word mercury__pretty_printer__V_89_89;
                    MR_Word mercury__pretty_printer__V_90_90;
                    MR_Word mercury__pretty_printer__V_91_91;
                    MR_Word mercury__pretty_printer__V_92_92;
                    MR_Word mercury__pretty_printer__V_93_93;
                    MR_Word mercury__pretty_printer__V_94_94;
                    MR_Word mercury__pretty_printer__V_95_95;
                    MR_Word mercury__pretty_printer__V_96_96;
                    MR_Word mercury__pretty_printer__V_97_97;

                    {
                      mercury__pretty_printer__V_35_35 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__pretty_printer__Name_7, (MR_Integer) 1);
                    }
                    {
                      mercury__pretty_printer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_34_34, 0) = ((MR_Box) (mercury__pretty_printer__V_35_35));
                    }
                    mercury__pretty_printer__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[6]);
                    mercury__pretty_printer__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[4]);
                    {
                      mercury__pretty_printer__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_42_42, 1) = ((MR_Box) (mercury__pretty_printer__Args_8));
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_42_42, 2) = ((MR_Box) (mercury__pretty_printer__V_43_43));
                    }
                    mercury__pretty_printer__V_45_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      mercury__pretty_printer__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_41_41, 0) = ((MR_Box) (mercury__pretty_printer__V_42_42));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_41_41, 1) = ((MR_Box) (mercury__pretty_printer__V_45_45));
                    }
                    mercury__pretty_printer__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[0]);
                    mercury__pretty_printer__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[6]);
                    {
                      mercury__pretty_printer__V_83_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_83_83, 0) = ((MR_Box) (mercury__pretty_printer__V_41_41));
                    }
                    mercury__pretty_printer__V_86_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                    mercury__pretty_printer__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[4]);
                    mercury__pretty_printer__V_87_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mercury__pretty_printer__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[5]);
                    {
                      mercury__pretty_printer__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_82_82, 0) = ((MR_Box) (mercury__pretty_printer__V_83_83));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_82_82, 1) = ((MR_Box) (mercury__pretty_printer__V_84_84));
                    }
                    {
                      mercury__pretty_printer__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_79_79, 0) = ((MR_Box) (mercury__pretty_printer__V_80_80));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_79_79, 1) = ((MR_Box) (mercury__pretty_printer__V_82_82));
                    }
                    {
                      mercury__pretty_printer__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_40_40, 0) = ((MR_Box) (mercury__pretty_printer__V_79_79));
                    }
                    mercury__pretty_printer__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[7]);
                    mercury__pretty_printer__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mercury__pretty_printer__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[11]);
                    {
                      mercury__pretty_printer__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_39_39, 0) = ((MR_Box) (mercury__pretty_printer__V_40_40));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_39_39, 1) = ((MR_Box) (mercury__pretty_printer__V_46_46));
                    }
                    {
                      mercury__pretty_printer__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_36_36, 0) = ((MR_Box) (mercury__pretty_printer__V_37_37));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_36_36, 1) = ((MR_Box) (mercury__pretty_printer__V_39_39));
                    }
                    {
                      mercury__pretty_printer__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_33_33, 0) = ((MR_Box) (mercury__pretty_printer__V_34_34));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_33_33, 1) = ((MR_Box) (mercury__pretty_printer__V_36_36));
                    }
                    {
                      mercury__pretty_printer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_31_31, 0) = ((MR_Box) (mercury__pretty_printer__V_32_32));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_31_31, 1) = ((MR_Box) (mercury__pretty_printer__V_33_33));
                    }
                    mercury__pretty_printer__V_91_91 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mercury__pretty_printer__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[7]);
                    {
                      mercury__pretty_printer__V_93_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_93_93, 0) = ((MR_Box) (mercury__pretty_printer__V_31_31));
                    }
                    mercury__pretty_printer__V_96_96 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                    mercury__pretty_printer__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[8]);
                    mercury__pretty_printer__V_97_97 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mercury__pretty_printer__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[9]);
                    {
                      mercury__pretty_printer__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_92_92, 0) = ((MR_Box) (mercury__pretty_printer__V_93_93));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_92_92, 1) = ((MR_Box) (mercury__pretty_printer__V_94_94));
                    }
                    {
                      mercury__pretty_printer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 0) = ((MR_Box) (mercury__pretty_printer__V_90_90));
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 1) = ((MR_Box) (mercury__pretty_printer__V_92_92));
                    }
                    {
                      mercury__pretty_printer__Doc0_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc0_12, 0) = ((MR_Box) (mercury__pretty_printer__V_89_89));
                    }
                  }
              }
          }
      }
    {
      mercury__pretty_printer__decrement_limit_2_p_0(mercury__pretty_printer__STATE_VARIABLE_Limit_0_14, mercury__pretty_printer__STATE_VARIABLE_Limit_15);
    }
    {
      mercury__pretty_printer__set_func_symbol_limit_correctly_3_p_0(*mercury__pretty_printer__STATE_VARIABLE_Limit_15, mercury__pretty_printer__Doc0_12, mercury__pretty_printer__Doc_9);
    }
  }
}

static void MR_CALL 
mercury__pretty_printer__expand_format_list_5_p_0(
  MR_Word mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Word * mercury__pretty_printer__HeadVar__3_3,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_4,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_5)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

    if ((mercury__pretty_printer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        *mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__pretty_printer_scalar_common_5[2]);
        *mercury__pretty_printer__STATE_VARIABLE_Limit_5 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_4;
      }
    else
      {
        MR_Word mercury__pretty_printer__Univ_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__pretty_printer__Univs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));

        if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_4)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Integer mercury__pretty_printer__N_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_4, (MR_Integer) 0)));

            mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_38 <= (MR_Integer) 0);
          }
        else
          {
            MR_Integer mercury__pretty_printer__N_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_4, (MR_Integer) 0)));

            mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_40 <= (MR_Integer) 0);
          }
        if (mercury__pretty_printer__succeeded)
          {
            *mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1]);
          }
        else
        if ((mercury__pretty_printer__Univs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word mercury__pretty_printer__V_32_32;
            MR_Word mercury__pretty_printer__V_33_33;
            MR_Word mercury__pretty_printer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word mercury__pretty_printer__V_35_35;
            MR_Word mercury__pretty_printer__V_36_36;
            MR_Word mercury__pretty_printer__V_37_37;
            MR_Word mercury__pretty_printer__V_44_44;
            MR_Word mercury__pretty_printer__V_45_45;
            MR_Word mercury__pretty_printer__V_46_46;
            MR_Word mercury__pretty_printer__V_47_47;
            MR_Word mercury__pretty_printer__V_48_48;
            MR_Word mercury__pretty_printer__V_49_49;
            MR_Word mercury__pretty_printer__V_50_50;
            MR_Word mercury__pretty_printer__V_51_51;
            MR_Word mercury__pretty_printer__V_52_52;

            {
              mercury__pretty_printer__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_36_36, 1) = ((MR_Box) (mercury__pretty_printer__Univ_11));
            }
            mercury__pretty_printer__V_37_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__pretty_printer__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_35_35, 0) = ((MR_Box) (mercury__pretty_printer__V_36_36));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_35_35, 1) = ((MR_Box) (mercury__pretty_printer__V_37_37));
            }
            {
              mercury__pretty_printer__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_33_33, 0) = ((MR_Box) (mercury__pretty_printer__V_34_34));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_33_33, 1) = ((MR_Box) (mercury__pretty_printer__V_35_35));
            }
            mercury__pretty_printer__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__pretty_printer__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[7]);
            {
              mercury__pretty_printer__V_48_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_48_48, 0) = ((MR_Box) (mercury__pretty_printer__V_33_33));
            }
            mercury__pretty_printer__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            mercury__pretty_printer__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[8]);
            mercury__pretty_printer__V_52_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__pretty_printer__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[9]);
            {
              mercury__pretty_printer__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_47_47, 0) = ((MR_Box) (mercury__pretty_printer__V_48_48));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_47_47, 1) = ((MR_Box) (mercury__pretty_printer__V_49_49));
            }
            {
              mercury__pretty_printer__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_44_44, 0) = ((MR_Box) (mercury__pretty_printer__V_45_45));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_44_44, 1) = ((MR_Box) (mercury__pretty_printer__V_47_47));
            }
            {
              mercury__pretty_printer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_32_32, 0) = ((MR_Box) (mercury__pretty_printer__V_44_44));
            }
            {
              *mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__format_arg_1_f_0(mercury__pretty_printer__V_32_32);
            }
          }
        else
          {
            MR_Word mercury__pretty_printer__V_20_20;
            MR_Word mercury__pretty_printer__V_21_21;
            MR_Word mercury__pretty_printer__V_22_22;
            MR_Word mercury__pretty_printer__V_23_23;
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word mercury__pretty_printer__V_25_25;
            MR_Word mercury__pretty_printer__V_26_26;
            MR_Word mercury__pretty_printer__V_27_27;
            MR_Word mercury__pretty_printer__V_28_28;
            MR_Word mercury__pretty_printer__V_29_29;
            MR_Word mercury__pretty_printer__V_30_30;
            MR_Word mercury__pretty_printer__V_31_31;
            MR_Word mercury__pretty_printer__V_54_54;
            MR_Word mercury__pretty_printer__V_55_55;
            MR_Word mercury__pretty_printer__V_56_56;
            MR_Word mercury__pretty_printer__V_57_57;
            MR_Word mercury__pretty_printer__V_58_58;
            MR_Word mercury__pretty_printer__V_59_59;
            MR_Word mercury__pretty_printer__V_60_60;
            MR_Word mercury__pretty_printer__V_61_61;
            MR_Word mercury__pretty_printer__V_62_62;

            {
              mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_26_26, 1) = ((MR_Box) (mercury__pretty_printer__Univ_11));
            }
            mercury__pretty_printer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__pretty_printer__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_27_27, 0) = ((MR_Box) (mercury__pretty_printer__HeadVar__2_2));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_27_27, 1) = ((MR_Box) (mercury__pretty_printer__V_28_28));
            }
            {
              mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_25_25, 0) = ((MR_Box) (mercury__pretty_printer__V_26_26));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_25_25, 1) = ((MR_Box) (mercury__pretty_printer__V_27_27));
            }
            {
              mercury__pretty_printer__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_23_23, 0) = ((MR_Box) (mercury__pretty_printer__V_24_24));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_23_23, 1) = ((MR_Box) (mercury__pretty_printer__V_25_25));
            }
            mercury__pretty_printer__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__pretty_printer__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[7]);
            {
              mercury__pretty_printer__V_58_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_58_58, 0) = ((MR_Box) (mercury__pretty_printer__V_23_23));
            }
            mercury__pretty_printer__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            mercury__pretty_printer__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[8]);
            mercury__pretty_printer__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__pretty_printer__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[9]);
            {
              mercury__pretty_printer__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_57_57, 0) = ((MR_Box) (mercury__pretty_printer__V_58_58));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_57_57, 1) = ((MR_Box) (mercury__pretty_printer__V_59_59));
            }
            {
              mercury__pretty_printer__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_54_54, 0) = ((MR_Box) (mercury__pretty_printer__V_55_55));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_54_54, 1) = ((MR_Box) (mercury__pretty_printer__V_57_57));
            }
            {
              mercury__pretty_printer__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_22_22, 0) = ((MR_Box) (mercury__pretty_printer__V_54_54));
            }
            {
              mercury__pretty_printer__V_21_21 = mercury__pretty_printer__format_arg_1_f_0(mercury__pretty_printer__V_22_22);
            }
            {
              mercury__pretty_printer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_30_30, 1) = ((MR_Box) (mercury__pretty_printer__Univs_12));
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_30_30, 2) = ((MR_Box) (mercury__pretty_printer__HeadVar__2_2));
            }
            mercury__pretty_printer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__pretty_printer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 0) = ((MR_Box) (mercury__pretty_printer__V_30_30));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 1) = ((MR_Box) (mercury__pretty_printer__V_31_31));
            }
            {
              mercury__pretty_printer__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_20_20, 0) = ((MR_Box) (mercury__pretty_printer__V_21_21));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_20_20, 1) = ((MR_Box) (mercury__pretty_printer__V_29_29));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__pretty_printer__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__pretty_printer__V_20_20));
            }
          }
        *mercury__pretty_printer__STATE_VARIABLE_Limit_5 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_4;
      }
  }
}

static void MR_CALL 
mercury__pretty_printer__expand_pp_7_p_1(
  MR_Word mercury__pretty_printer__Canonicalize_8,
  MR_Word mercury__pretty_printer__FMap_9,
  MR_Word mercury__pretty_printer__Univ_10,
  MR_Word * mercury__pretty_printer__Doc_11,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_25,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_26,
  MR_Integer mercury__pretty_printer__CurrentPri_13)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

    if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_25)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer mercury__pretty_printer__N_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_25, (MR_Integer) 0)));

        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_35 <= (MR_Integer) 0);
      }
    else
      {
        MR_Integer mercury__pretty_printer__N_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_25, (MR_Integer) 0)));

        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_37 <= (MR_Integer) 0);
      }
    if (mercury__pretty_printer__succeeded)
      {
        *mercury__pretty_printer__Doc_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1]);
        *mercury__pretty_printer__STATE_VARIABLE_Limit_26 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_25;
      }
    else
      {
        MR_Word mercury__pretty_printer__ArgTypeDescs_16;
        MR_Word mercury__pretty_printer__Formatter_20;
        MR_Word mercury__pretty_printer__TypeInfo_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 0)));
        MR_Word mercury__pretty_printer__TypeCtorInfo_32_32;
        MR_Word mercury__pretty_printer__TypeCtorInfo_13_61;
        MR_Word mercury__pretty_printer__TypeInfo_14_62;
        MR_Word mercury__pretty_printer__TypeInfo_15_63;
        MR_Word mercury__pretty_printer__TypeInfo_17_65;
        MR_Word mercury__pretty_printer__TypeCtorDesc_15;
        MR_String mercury__pretty_printer__ModuleName_17;
        MR_String mercury__pretty_printer__TypeName_18;
        MR_Integer mercury__pretty_printer__Arity_19;
        MR_Word mercury__pretty_printer__V_27_27;
        MR_Word mercury__pretty_printer__FMapTypeArity_59;
        MR_Word mercury__pretty_printer__FMapArity_60;
        MR_Box mercury__pretty_printer__Value_14 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 1));
        MR_Box mercury__pretty_printer__V_34_34;
        MR_String mercury__pretty_printer__V_5_43;
        MR_Integer mercury__pretty_printer__V_6_44;
        MR_String mercury__pretty_printer__V_5_47;
        MR_Integer mercury__pretty_printer__V_6_48;
        MR_Box mercury__pretty_printer__conv0_FMapTypeArity_59;
        MR_Box mercury__pretty_printer__conv1_FMapArity_60;
        MR_Box mercury__pretty_printer__conv2_Formatter_20;

{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pretty_printer__TypeInfo_31_31 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_27_27  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_1

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pretty_printer__V_27_27 ;
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
	 mercury__pretty_printer__TypeCtorDesc_15  = TypeCtorDesc;
	 mercury__pretty_printer__ArgTypeDescs_16  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_1

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__pretty_printer__TypeCtorDesc_15 ;
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

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__ModuleName_17  = TypeCtorModuleName;
	 mercury__pretty_printer__V_5_43  = TypeCtorName;
	 mercury__pretty_printer__V_6_44  = TypeCtorArity;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_1

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__pretty_printer__TypeCtorDesc_15 ;
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

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_5_47  = TypeCtorModuleName;
	 mercury__pretty_printer__TypeName_18  = TypeCtorName;
	 mercury__pretty_printer__V_6_48  = TypeCtorArity;
}
        mercury__pretty_printer__TypeCtorInfo_32_32 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
        {
          mercury__list__length_acc_3_p_0(mercury__pretty_printer__TypeCtorInfo_32_32, mercury__pretty_printer__ArgTypeDescs_16, (MR_Integer) 0, &mercury__pretty_printer__Arity_19);
        }
        mercury__pretty_printer__TypeCtorInfo_13_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__pretty_printer__TypeInfo_14_62 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
        {
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_13_61, mercury__pretty_printer__TypeInfo_14_62, mercury__pretty_printer__FMap_9, ((MR_Box) (mercury__pretty_printer__ModuleName_17)), &mercury__pretty_printer__conv0_FMapTypeArity_59);
        }
        if (mercury__pretty_printer__succeeded)
          {
            mercury__pretty_printer__FMapTypeArity_59 = ((MR_Word) mercury__pretty_printer__conv0_FMapTypeArity_59);
            mercury__pretty_printer__succeeded = MR_TRUE;
          }
        if (mercury__pretty_printer__succeeded)
          {
            mercury__pretty_printer__TypeInfo_15_63 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
            {
              mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_13_61, mercury__pretty_printer__TypeInfo_15_63, mercury__pretty_printer__FMapTypeArity_59, ((MR_Box) (mercury__pretty_printer__TypeName_18)), &mercury__pretty_printer__conv1_FMapArity_60);
            }
            if (mercury__pretty_printer__succeeded)
              {
                mercury__pretty_printer__FMapArity_60 = ((MR_Word) mercury__pretty_printer__conv1_FMapArity_60);
                mercury__pretty_printer__succeeded = MR_TRUE;
              }
            if (mercury__pretty_printer__succeeded)
              {
                mercury__pretty_printer__TypeInfo_17_65 = (MR_Word) &mercury__pretty_printer_scalar_common_4[1];
                {
                  mercury__pretty_printer__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__pretty_printer__TypeInfo_17_65, mercury__pretty_printer__FMapArity_60, mercury__pretty_printer__Arity_19, &mercury__pretty_printer__conv2_Formatter_20);
                }
                if (mercury__pretty_printer__succeeded)
                  {
                    mercury__pretty_printer__Formatter_20 = ((MR_Word) mercury__pretty_printer__conv2_Formatter_20);
                    mercury__pretty_printer__succeeded = MR_TRUE;
                  }
              }
          }
        if (mercury__pretty_printer__succeeded)
          {
            MR_Word mercury__pretty_printer__Doc0_21;
            MR_Box MR_CALL (* mercury__pretty_printer__func_3)(MR_Box, MR_Box, MR_Box);
            MR_Box mercury__pretty_printer__conv4_Doc0_21;

            if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_25)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Integer mercury__pretty_printer__N_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_25, (MR_Integer) 0)));
                MR_Integer mercury__pretty_printer__V_77_77 = (mercury__pretty_printer__N_76 - (MR_Integer) 1);

                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__pretty_printer__STATE_VARIABLE_Limit_26 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__pretty_printer__V_77_77));
                }
              }
            else
              {
                MR_Integer mercury__pretty_printer__N_79 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_25, (MR_Integer) 0)));
                MR_Integer mercury__pretty_printer__V_80_80 = (mercury__pretty_printer__N_79 - (MR_Integer) 1);

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__pretty_printer__STATE_VARIABLE_Limit_26 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__V_80_80));
                }
              }
            mercury__pretty_printer__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Formatter_20, (MR_Integer) 1)));
            {
              mercury__pretty_printer__conv4_Doc0_21 = mercury__pretty_printer__func_3(((MR_Box) mercury__pretty_printer__Formatter_20), ((MR_Box) (mercury__pretty_printer__Univ_10)), ((MR_Box) (mercury__pretty_printer__ArgTypeDescs_16)));
            }
            mercury__pretty_printer__Doc0_21 = ((MR_Word) mercury__pretty_printer__conv4_Doc0_21);
            if (((MR_tag((MR_Word) *mercury__pretty_printer__STATE_VARIABLE_Limit_26)) == (MR_mktag((MR_Integer) 0))))
              *mercury__pretty_printer__Doc_11 = mercury__pretty_printer__Doc0_21;
            else
              {
                MR_Word mercury__pretty_printer__V_88_88;
                MR_Word mercury__pretty_printer__V_89_89;
                MR_Word mercury__pretty_printer__V_90_90;
                MR_Word mercury__pretty_printer__V_91_91;
                MR_Word mercury__pretty_printer__V_92_92;

                {
                  mercury__pretty_printer__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_91_91, 0) = ((MR_Box) (*mercury__pretty_printer__STATE_VARIABLE_Limit_26));
                }
                {
                  mercury__pretty_printer__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_90_90, 1) = ((MR_Box) (mercury__pretty_printer__V_91_91));
                }
                mercury__pretty_printer__V_92_92 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  mercury__pretty_printer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 0) = ((MR_Box) (mercury__pretty_printer__V_90_90));
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 1) = ((MR_Box) (mercury__pretty_printer__V_92_92));
                }
                {
                  mercury__pretty_printer__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_88_88, 0) = ((MR_Box) (mercury__pretty_printer__Doc0_21));
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_88_88, 1) = ((MR_Box) (mercury__pretty_printer__V_89_89));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__pretty_printer__Doc_11 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__pretty_printer__V_88_88));
                }
              }
          }
        else
          {
            MR_Word mercury__pretty_printer__TypeInfo_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 0)));
            MR_String mercury__pretty_printer__Name_22;
            MR_Word mercury__pretty_printer__Args_24;
            MR_Box mercury__pretty_printer__V_29_29 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 1));
            MR_Integer mercury__pretty_printer___Arity_23;

            {
              mercury__deconstruct__deconstruct_5_p_2(mercury__pretty_printer__TypeInfo_33_33, mercury__pretty_printer__V_29_29, mercury__pretty_printer__Canonicalize_8, &mercury__pretty_printer__Name_22, &mercury__pretty_printer___Arity_23, &mercury__pretty_printer__Args_24);
            }
            {
              mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_22, mercury__pretty_printer__Args_24, mercury__pretty_printer__Doc_11, mercury__pretty_printer__STATE_VARIABLE_Limit_0_25, mercury__pretty_printer__STATE_VARIABLE_Limit_26, mercury__pretty_printer__CurrentPri_13);
            }
          }
      }
  }
}

static void MR_CALL 
mercury__pretty_printer__expand_pp_7_p_0(
  MR_Word mercury__pretty_printer__Canonicalize_8,
  MR_Word mercury__pretty_printer__FMap_9,
  MR_Word mercury__pretty_printer__Univ_10,
  MR_Word * mercury__pretty_printer__Doc_11,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_25,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_26,
  MR_Integer mercury__pretty_printer__CurrentPri_13)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

    if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_25)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer mercury__pretty_printer__N_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_25, (MR_Integer) 0)));

        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_35 <= (MR_Integer) 0);
      }
    else
      {
        MR_Integer mercury__pretty_printer__N_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_25, (MR_Integer) 0)));

        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_37 <= (MR_Integer) 0);
      }
    if (mercury__pretty_printer__succeeded)
      {
        *mercury__pretty_printer__Doc_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1]);
        *mercury__pretty_printer__STATE_VARIABLE_Limit_26 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_25;
      }
    else
      {
        MR_Word mercury__pretty_printer__ArgTypeDescs_16;
        MR_Word mercury__pretty_printer__Formatter_20;
        MR_Word mercury__pretty_printer__TypeInfo_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 0)));
        MR_Word mercury__pretty_printer__TypeCtorInfo_32_32;
        MR_Word mercury__pretty_printer__TypeCtorInfo_13_61;
        MR_Word mercury__pretty_printer__TypeInfo_14_62;
        MR_Word mercury__pretty_printer__TypeInfo_15_63;
        MR_Word mercury__pretty_printer__TypeInfo_17_65;
        MR_Word mercury__pretty_printer__TypeCtorDesc_15;
        MR_String mercury__pretty_printer__ModuleName_17;
        MR_String mercury__pretty_printer__TypeName_18;
        MR_Integer mercury__pretty_printer__Arity_19;
        MR_Word mercury__pretty_printer__V_27_27;
        MR_Word mercury__pretty_printer__FMapTypeArity_59;
        MR_Word mercury__pretty_printer__FMapArity_60;
        MR_Box mercury__pretty_printer__Value_14 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 1));
        MR_Box mercury__pretty_printer__V_34_34;
        MR_String mercury__pretty_printer__V_5_43;
        MR_Integer mercury__pretty_printer__V_6_44;
        MR_String mercury__pretty_printer__V_5_47;
        MR_Integer mercury__pretty_printer__V_6_48;
        MR_Box mercury__pretty_printer__conv0_FMapTypeArity_59;
        MR_Box mercury__pretty_printer__conv1_FMapArity_60;
        MR_Box mercury__pretty_printer__conv2_Formatter_20;

{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pretty_printer__TypeInfo_31_31 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_27_27  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pretty_printer__V_27_27 ;
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
	 mercury__pretty_printer__TypeCtorDesc_15  = TypeCtorDesc;
	 mercury__pretty_printer__ArgTypeDescs_16  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__pretty_printer__TypeCtorDesc_15 ;
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

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__ModuleName_17  = TypeCtorModuleName;
	 mercury__pretty_printer__V_5_43  = TypeCtorName;
	 mercury__pretty_printer__V_6_44  = TypeCtorArity;
}
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__pretty_printer__TypeCtorDesc_15 ;
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

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_5_47  = TypeCtorModuleName;
	 mercury__pretty_printer__TypeName_18  = TypeCtorName;
	 mercury__pretty_printer__V_6_48  = TypeCtorArity;
}
        mercury__pretty_printer__TypeCtorInfo_32_32 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
        {
          mercury__list__length_acc_3_p_0(mercury__pretty_printer__TypeCtorInfo_32_32, mercury__pretty_printer__ArgTypeDescs_16, (MR_Integer) 0, &mercury__pretty_printer__Arity_19);
        }
        mercury__pretty_printer__TypeCtorInfo_13_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__pretty_printer__TypeInfo_14_62 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
        {
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_13_61, mercury__pretty_printer__TypeInfo_14_62, mercury__pretty_printer__FMap_9, ((MR_Box) (mercury__pretty_printer__ModuleName_17)), &mercury__pretty_printer__conv0_FMapTypeArity_59);
        }
        if (mercury__pretty_printer__succeeded)
          {
            mercury__pretty_printer__FMapTypeArity_59 = ((MR_Word) mercury__pretty_printer__conv0_FMapTypeArity_59);
            mercury__pretty_printer__succeeded = MR_TRUE;
          }
        if (mercury__pretty_printer__succeeded)
          {
            mercury__pretty_printer__TypeInfo_15_63 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
            {
              mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_13_61, mercury__pretty_printer__TypeInfo_15_63, mercury__pretty_printer__FMapTypeArity_59, ((MR_Box) (mercury__pretty_printer__TypeName_18)), &mercury__pretty_printer__conv1_FMapArity_60);
            }
            if (mercury__pretty_printer__succeeded)
              {
                mercury__pretty_printer__FMapArity_60 = ((MR_Word) mercury__pretty_printer__conv1_FMapArity_60);
                mercury__pretty_printer__succeeded = MR_TRUE;
              }
            if (mercury__pretty_printer__succeeded)
              {
                mercury__pretty_printer__TypeInfo_17_65 = (MR_Word) &mercury__pretty_printer_scalar_common_4[1];
                {
                  mercury__pretty_printer__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__pretty_printer__TypeInfo_17_65, mercury__pretty_printer__FMapArity_60, mercury__pretty_printer__Arity_19, &mercury__pretty_printer__conv2_Formatter_20);
                }
                if (mercury__pretty_printer__succeeded)
                  {
                    mercury__pretty_printer__Formatter_20 = ((MR_Word) mercury__pretty_printer__conv2_Formatter_20);
                    mercury__pretty_printer__succeeded = MR_TRUE;
                  }
              }
          }
        if (mercury__pretty_printer__succeeded)
          {
            MR_Word mercury__pretty_printer__Doc0_21;
            MR_Box MR_CALL (* mercury__pretty_printer__func_3)(MR_Box, MR_Box, MR_Box);
            MR_Box mercury__pretty_printer__conv4_Doc0_21;

            if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_25)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Integer mercury__pretty_printer__N_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_25, (MR_Integer) 0)));
                MR_Integer mercury__pretty_printer__V_77_77 = (mercury__pretty_printer__N_76 - (MR_Integer) 1);

                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__pretty_printer__STATE_VARIABLE_Limit_26 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__pretty_printer__V_77_77));
                }
              }
            else
              {
                MR_Integer mercury__pretty_printer__N_79 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_25, (MR_Integer) 0)));
                MR_Integer mercury__pretty_printer__V_80_80 = (mercury__pretty_printer__N_79 - (MR_Integer) 1);

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__pretty_printer__STATE_VARIABLE_Limit_26 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__V_80_80));
                }
              }
            mercury__pretty_printer__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Formatter_20, (MR_Integer) 1)));
            {
              mercury__pretty_printer__conv4_Doc0_21 = mercury__pretty_printer__func_3(((MR_Box) mercury__pretty_printer__Formatter_20), ((MR_Box) (mercury__pretty_printer__Univ_10)), ((MR_Box) (mercury__pretty_printer__ArgTypeDescs_16)));
            }
            mercury__pretty_printer__Doc0_21 = ((MR_Word) mercury__pretty_printer__conv4_Doc0_21);
            if (((MR_tag((MR_Word) *mercury__pretty_printer__STATE_VARIABLE_Limit_26)) == (MR_mktag((MR_Integer) 0))))
              *mercury__pretty_printer__Doc_11 = mercury__pretty_printer__Doc0_21;
            else
              {
                MR_Word mercury__pretty_printer__V_88_88;
                MR_Word mercury__pretty_printer__V_89_89;
                MR_Word mercury__pretty_printer__V_90_90;
                MR_Word mercury__pretty_printer__V_91_91;
                MR_Word mercury__pretty_printer__V_92_92;

                {
                  mercury__pretty_printer__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_91_91, 0) = ((MR_Box) (*mercury__pretty_printer__STATE_VARIABLE_Limit_26));
                }
                {
                  mercury__pretty_printer__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_90_90, 1) = ((MR_Box) (mercury__pretty_printer__V_91_91));
                }
                mercury__pretty_printer__V_92_92 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  mercury__pretty_printer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 0) = ((MR_Box) (mercury__pretty_printer__V_90_90));
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 1) = ((MR_Box) (mercury__pretty_printer__V_92_92));
                }
                {
                  mercury__pretty_printer__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_88_88, 0) = ((MR_Box) (mercury__pretty_printer__Doc0_21));
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_88_88, 1) = ((MR_Box) (mercury__pretty_printer__V_89_89));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__pretty_printer__Doc_11 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__pretty_printer__V_88_88));
                }
              }
          }
        else
          {
            MR_Word mercury__pretty_printer__TypeInfo_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 0)));
            MR_String mercury__pretty_printer__Name_22;
            MR_Word mercury__pretty_printer__Args_24;
            MR_Box mercury__pretty_printer__V_29_29 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 1));
            MR_Integer mercury__pretty_printer___Arity_23;

            {
              mercury__deconstruct__deconstruct_5_p_1(mercury__pretty_printer__TypeInfo_33_33, mercury__pretty_printer__V_29_29, mercury__pretty_printer__Canonicalize_8, &mercury__pretty_printer__Name_22, &mercury__pretty_printer___Arity_23, &mercury__pretty_printer__Args_24);
            }
            {
              mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_22, mercury__pretty_printer__Args_24, mercury__pretty_printer__Doc_11, mercury__pretty_printer__STATE_VARIABLE_Limit_0_25, mercury__pretty_printer__STATE_VARIABLE_Limit_26, mercury__pretty_printer__CurrentPri_13);
            }
          }
      }
  }
}

static void MR_CALL 
mercury__pretty_printer__output_indentation_6_p_0(
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_28,
  MR_Box mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_3,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_4,
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_5,
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_6)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

    if ((mercury__pretty_printer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__pretty_printer__STATE_VARIABLE_IO_6 = mercury__pretty_printer__STATE_VARIABLE_IO_0_5;
        *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_4 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_3;
      }
    else
      {
        MR_Word mercury__pretty_printer__IndentStack_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
        MR_String mercury__pretty_printer__Indent_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_23_23;
        MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_24_24;
        MR_Integer mercury__pretty_printer__V_27_27;
        void MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          mercury__pretty_printer__output_indentation_6_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_28, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__IndentStack_15, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_3, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_23_23, mercury__pretty_printer__STATE_VARIABLE_IO_0_5, &mercury__pretty_printer__STATE_VARIABLE_IO_24_24);
        }
        mercury__pretty_printer__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_writer_28, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_writer_28), mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__Indent_16)), mercury__pretty_printer__STATE_VARIABLE_IO_24_24, mercury__pretty_printer__STATE_VARIABLE_IO_6);
        }
        {
          mercury__string__count_codepoints_2_p_0(mercury__pretty_printer__Indent_16, &mercury__pretty_printer__V_27_27);
        }
        *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_4 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_23_23 - mercury__pretty_printer__V_27_27);
      }
  }
}

static void MR_CALL 
mercury__pretty_printer__format_nl_8_p_0(
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_24,
  MR_Box mercury__pretty_printer__Stream_9,
  MR_Integer mercury__pretty_printer__LineWidth_10,
  MR_Word mercury__pretty_printer__Indents_11,
  MR_Integer * mercury__pretty_printer__RemainingWidth_12,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_15,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_16,
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_17,
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_18)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_20_20;
    void MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_writer_24, (MR_Integer) 0)), (MR_Integer) 5)));

    {
      mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_writer_24), mercury__pretty_printer__Stream_9, ((MR_Box) ((MR_String) "\n")), mercury__pretty_printer__STATE_VARIABLE_IO_0_17, &mercury__pretty_printer__STATE_VARIABLE_IO_20_20);
    }
    {
      mercury__pretty_printer__output_indentation_6_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_24, mercury__pretty_printer__Stream_9, mercury__pretty_printer__Indents_11, mercury__pretty_printer__LineWidth_10, mercury__pretty_printer__RemainingWidth_12, mercury__pretty_printer__STATE_VARIABLE_IO_20_20, mercury__pretty_printer__STATE_VARIABLE_IO_18);
    }
    *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_16 = (mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_15 - (MR_Integer) 1);
  }
}

static void MR_CALL 
mercury__pretty_printer__expand_docs_11_p_1(
  MR_Word mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Word mercury__pretty_printer__HeadVar__3_3,
  MR_Word * mercury__pretty_printer__HeadVar__4_4,
  MR_Integer mercury__pretty_printer__HeadVar__5_5,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_6,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_7,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_8,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_9,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pretty_printer__succeeded;

        if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__pretty_printer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
            *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
            *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
          }
        else
          {
            MR_Word mercury__pretty_printer__Doc_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__pretty_printer__Docs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));

            mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 <= (MR_Integer) 0);
            if (mercury__pretty_printer__succeeded)
              {
                if ((mercury__pretty_printer__Doc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
                  mercury__pretty_printer__succeeded = MR_TRUE;
                else
                if ((mercury__pretty_printer__Doc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  mercury__pretty_printer__succeeded = MR_TRUE;
                else
                  mercury__pretty_printer__succeeded = MR_FALSE;
              }
            if (!(mercury__pretty_printer__succeeded))
              {
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10 < (MR_Integer) 0);
              }
            if (mercury__pretty_printer__succeeded)
              {
                *mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__3_3;
                *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
                *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
                *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
              }
            else
              switch (MR_tag((MR_Word) mercury__pretty_printer__Doc_26)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 <= (MR_Integer) 0);
                    if (mercury__pretty_printer__succeeded)
                      {
                        *mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__3_3;
                        *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
                        *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
                        *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
                      }
                    else
                      {
                        MR_Word mercury__pretty_printer__Docs1_116;

                        {
                          mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_116, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__pretty_printer__HeadVar__4_4 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_116));
                        }
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String mercury__pretty_printer__String_33 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc_26, (MR_Integer) 0)));
                    MR_Word mercury__pretty_printer__Docs1_34;
                    MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111;
                    MR_Integer mercury__pretty_printer__V_112_112;

                    {
                      mercury__pretty_printer__V_112_112 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__String_33);
                    }
                    mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10 - mercury__pretty_printer__V_112_112);
                    {
                      mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_34, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__pretty_printer__HeadVar__4_4 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_34));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word mercury__pretty_printer__TypeCtorInfo_129_129 = (MR_Word) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0;
                    MR_Word mercury__pretty_printer__V_103_103;
                    MR_Word mercury__pretty_printer__Docs1_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc_26, (MR_Integer) 0)));

                    {
                      mercury__pretty_printer__V_103_103 = mercury__list__f_43_43_2_f_0(mercury__pretty_printer__TypeCtorInfo_129_129, mercury__pretty_printer__Docs1_119, mercury__pretty_printer__Docs0_27);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_103_103;

                      mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word mercury__pretty_printer__Univ_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
                        MR_Word mercury__pretty_printer__Doc1_36;
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_98_98;
                        MR_Word mercury__pretty_printer__V_99_99;

                        {
                          mercury__pretty_printer__expand_pp_7_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Univ_35, &mercury__pretty_printer__Doc1_36, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_98_98, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8);
                        }
                        {
                          mercury__pretty_printer__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_99_99, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_36));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_99_99, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_99_99;
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_98_98;

                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word mercury__pretty_printer__Univs_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
                        MR_Word mercury__pretty_printer__Sep_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 2)));
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_93_93;
                        MR_Word mercury__pretty_printer__V_94_94;
                        MR_Word mercury__pretty_printer__Doc1_120;

                        {
                          mercury__pretty_printer__expand_format_list_5_p_0(mercury__pretty_printer__Univs_37, mercury__pretty_printer__Sep_38, &mercury__pretty_printer__Doc1_120, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_93_93);
                        }
                        {
                          mercury__pretty_printer__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_120));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_94_94;
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_93_93;

                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_String mercury__pretty_printer__Name_39 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_88_88;
                        MR_Word mercury__pretty_printer__V_89_89;
                        MR_Word mercury__pretty_printer__Doc1_121;
                        MR_Word mercury__pretty_printer__Univs_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 2)));

                        {
                          mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_39, mercury__pretty_printer__Univs_122, &mercury__pretty_printer__Doc1_121, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_88_88, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8);
                        }
                        {
                          mercury__pretty_printer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_121));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_89_89;
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_88_88;

                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word mercury__pretty_printer__Susp_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_83_83;
                        MR_Word mercury__pretty_printer__V_84_84;
                        MR_Word mercury__pretty_printer__Doc1_123;

                        {
                          mercury__pretty_printer__expand_format_susp_4_p_0(mercury__pretty_printer__Susp_40, &mercury__pretty_printer__Doc1_123, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_83_83);
                        }
                        {
                          mercury__pretty_printer__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_84_84, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_123));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_84_84, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_84_84;
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_83_83;

                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word mercury__pretty_printer__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));

                        switch (MR_tag((MR_Word) mercury__pretty_printer__V_130_130)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(mercury__pretty_printer__V_130_130)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Integer mercury__pretty_printer__OpenGroups1_42;
                                  MR_Integer mercury__pretty_printer__V_70_70;
                                  MR_Word mercury__pretty_printer__Docs1_126;

                                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 > (MR_Integer) 0);
                                  if (mercury__pretty_printer__succeeded)
                                    mercury__pretty_printer__V_70_70 = (MR_Integer) 1;
                                  else
                                    mercury__pretty_printer__V_70_70 = (MR_Integer) 0;
                                  mercury__pretty_printer__OpenGroups1_42 = (mercury__pretty_printer__HeadVar__5_5 + mercury__pretty_printer__V_70_70);
                                  {
                                    mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_126, mercury__pretty_printer__OpenGroups1_42, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                  }
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    *mercury__pretty_printer__HeadVar__4_4 = base;
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_126));
                                  }
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Integer mercury__pretty_printer__V_64_64;
                                  MR_Word mercury__pretty_printer__Docs1_127;
                                  MR_Integer mercury__pretty_printer__OpenGroups1_128;

                                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 > (MR_Integer) 0);
                                  if (mercury__pretty_printer__succeeded)
                                    mercury__pretty_printer__V_64_64 = (MR_Integer) 1;
                                  else
                                    mercury__pretty_printer__V_64_64 = (MR_Integer) 0;
                                  mercury__pretty_printer__OpenGroups1_128 = (mercury__pretty_printer__HeadVar__5_5 - mercury__pretty_printer__V_64_64);
                                  {
                                    mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_127, mercury__pretty_printer__OpenGroups1_128, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                  }
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    *mercury__pretty_printer__HeadVar__4_4 = base;
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_127));
                                  }
                                }
                                break;
                              case (MR_Integer) 2:
                                {
                                  MR_Word mercury__pretty_printer__Docs1_125;

                                  {
                                    mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_125, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                  }
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    *mercury__pretty_printer__HeadVar__4_4 = base;
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_125));
                                  }
                                }
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word mercury__pretty_printer__Docs1_124;

                              {
                                mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_124, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                *mercury__pretty_printer__HeadVar__4_4 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_124));
                              }
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_130_130, (MR_Integer) 0)));

                              /* direct tailcall eliminated */
                              {
                                MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__Docs0_27;
                                MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_8 = mercury__pretty_printer__STATE_VARIABLE_Pri_54_54;

                                mercury__pretty_printer__STATE_VARIABLE_Pri_0_8 = mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_8;
                                mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
                              }
                              continue;
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_130_130, (MR_Integer) 0)));

                              /* direct tailcall eliminated */
                              {
                                MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__Docs0_27;
                                MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_59_59;

                                mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
                                mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
                              }
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
      }
      break;
    }
}

static void MR_CALL 
mercury__pretty_printer__expand_docs_11_p_0(
  MR_Word mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Word mercury__pretty_printer__HeadVar__3_3,
  MR_Word * mercury__pretty_printer__HeadVar__4_4,
  MR_Integer mercury__pretty_printer__HeadVar__5_5,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_6,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_7,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_8,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_9,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pretty_printer__succeeded;

        if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__pretty_printer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
            *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
            *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
          }
        else
          {
            MR_Word mercury__pretty_printer__Doc_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__pretty_printer__Docs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));

            mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 <= (MR_Integer) 0);
            if (mercury__pretty_printer__succeeded)
              {
                if ((mercury__pretty_printer__Doc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
                  mercury__pretty_printer__succeeded = MR_TRUE;
                else
                if ((mercury__pretty_printer__Doc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  mercury__pretty_printer__succeeded = MR_TRUE;
                else
                  mercury__pretty_printer__succeeded = MR_FALSE;
              }
            if (!(mercury__pretty_printer__succeeded))
              {
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10 < (MR_Integer) 0);
              }
            if (mercury__pretty_printer__succeeded)
              {
                *mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__3_3;
                *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
                *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
                *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
              }
            else
              switch (MR_tag((MR_Word) mercury__pretty_printer__Doc_26)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 <= (MR_Integer) 0);
                    if (mercury__pretty_printer__succeeded)
                      {
                        *mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__3_3;
                        *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
                        *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
                        *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
                      }
                    else
                      {
                        MR_Word mercury__pretty_printer__Docs1_116;

                        {
                          mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_116, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__pretty_printer__HeadVar__4_4 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_116));
                        }
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String mercury__pretty_printer__String_33 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc_26, (MR_Integer) 0)));
                    MR_Word mercury__pretty_printer__Docs1_34;
                    MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111;
                    MR_Integer mercury__pretty_printer__V_112_112;

                    {
                      mercury__pretty_printer__V_112_112 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__String_33);
                    }
                    mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10 - mercury__pretty_printer__V_112_112);
                    {
                      mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_34, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__pretty_printer__HeadVar__4_4 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_34));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word mercury__pretty_printer__TypeCtorInfo_129_129 = (MR_Word) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0;
                    MR_Word mercury__pretty_printer__V_103_103;
                    MR_Word mercury__pretty_printer__Docs1_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc_26, (MR_Integer) 0)));

                    {
                      mercury__pretty_printer__V_103_103 = mercury__list__f_43_43_2_f_0(mercury__pretty_printer__TypeCtorInfo_129_129, mercury__pretty_printer__Docs1_119, mercury__pretty_printer__Docs0_27);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_103_103;

                      mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word mercury__pretty_printer__Univ_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
                        MR_Word mercury__pretty_printer__Doc1_36;
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_98_98;
                        MR_Word mercury__pretty_printer__V_99_99;

                        {
                          mercury__pretty_printer__expand_pp_7_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Univ_35, &mercury__pretty_printer__Doc1_36, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_98_98, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8);
                        }
                        {
                          mercury__pretty_printer__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_99_99, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_36));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_99_99, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_99_99;
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_98_98;

                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word mercury__pretty_printer__Univs_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
                        MR_Word mercury__pretty_printer__Sep_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 2)));
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_93_93;
                        MR_Word mercury__pretty_printer__V_94_94;
                        MR_Word mercury__pretty_printer__Doc1_120;

                        {
                          mercury__pretty_printer__expand_format_list_5_p_0(mercury__pretty_printer__Univs_37, mercury__pretty_printer__Sep_38, &mercury__pretty_printer__Doc1_120, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_93_93);
                        }
                        {
                          mercury__pretty_printer__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_120));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_94_94;
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_93_93;

                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_String mercury__pretty_printer__Name_39 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_88_88;
                        MR_Word mercury__pretty_printer__V_89_89;
                        MR_Word mercury__pretty_printer__Doc1_121;
                        MR_Word mercury__pretty_printer__Univs_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 2)));

                        {
                          mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_39, mercury__pretty_printer__Univs_122, &mercury__pretty_printer__Doc1_121, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_88_88, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8);
                        }
                        {
                          mercury__pretty_printer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_121));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_89_89;
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_88_88;

                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word mercury__pretty_printer__Susp_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_83_83;
                        MR_Word mercury__pretty_printer__V_84_84;
                        MR_Word mercury__pretty_printer__Doc1_123;

                        {
                          mercury__pretty_printer__expand_format_susp_4_p_0(mercury__pretty_printer__Susp_40, &mercury__pretty_printer__Doc1_123, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_83_83);
                        }
                        {
                          mercury__pretty_printer__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_84_84, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_123));
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_84_84, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_84_84;
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_83_83;

                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word mercury__pretty_printer__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));

                        switch (MR_tag((MR_Word) mercury__pretty_printer__V_130_130)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(mercury__pretty_printer__V_130_130)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Integer mercury__pretty_printer__OpenGroups1_42;
                                  MR_Integer mercury__pretty_printer__V_70_70;
                                  MR_Word mercury__pretty_printer__Docs1_126;

                                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 > (MR_Integer) 0);
                                  if (mercury__pretty_printer__succeeded)
                                    mercury__pretty_printer__V_70_70 = (MR_Integer) 1;
                                  else
                                    mercury__pretty_printer__V_70_70 = (MR_Integer) 0;
                                  mercury__pretty_printer__OpenGroups1_42 = (mercury__pretty_printer__HeadVar__5_5 + mercury__pretty_printer__V_70_70);
                                  {
                                    mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_126, mercury__pretty_printer__OpenGroups1_42, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                  }
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    *mercury__pretty_printer__HeadVar__4_4 = base;
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_126));
                                  }
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Integer mercury__pretty_printer__V_64_64;
                                  MR_Word mercury__pretty_printer__Docs1_127;
                                  MR_Integer mercury__pretty_printer__OpenGroups1_128;

                                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 > (MR_Integer) 0);
                                  if (mercury__pretty_printer__succeeded)
                                    mercury__pretty_printer__V_64_64 = (MR_Integer) 1;
                                  else
                                    mercury__pretty_printer__V_64_64 = (MR_Integer) 0;
                                  mercury__pretty_printer__OpenGroups1_128 = (mercury__pretty_printer__HeadVar__5_5 - mercury__pretty_printer__V_64_64);
                                  {
                                    mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_127, mercury__pretty_printer__OpenGroups1_128, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                  }
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    *mercury__pretty_printer__HeadVar__4_4 = base;
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_127));
                                  }
                                }
                                break;
                              case (MR_Integer) 2:
                                {
                                  MR_Word mercury__pretty_printer__Docs1_125;

                                  {
                                    mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_125, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                  }
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    *mercury__pretty_printer__HeadVar__4_4 = base;
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_125));
                                  }
                                }
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word mercury__pretty_printer__Docs1_124;

                              {
                                mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_124, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                *mercury__pretty_printer__HeadVar__4_4 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_124));
                              }
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_130_130, (MR_Integer) 0)));

                              /* direct tailcall eliminated */
                              {
                                MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__Docs0_27;
                                MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_8 = mercury__pretty_printer__STATE_VARIABLE_Pri_54_54;

                                mercury__pretty_printer__STATE_VARIABLE_Pri_0_8 = mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_8;
                                mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
                              }
                              continue;
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_130_130, (MR_Integer) 0)));

                              /* direct tailcall eliminated */
                              {
                                MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__Docs0_27;
                                MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_59_59;

                                mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
                                mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
                              }
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
      }
      break;
    }
}

static void MR_CALL 
mercury__pretty_printer__output_current_group_12_p_0(
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_71,
  MR_Box mercury__pretty_printer__HeadVar__1_1,
  MR_Integer mercury__pretty_printer__HeadVar__2_2,
  MR_Word mercury__pretty_printer__HeadVar__3_3,
  MR_Integer mercury__pretty_printer__HeadVar__4_4,
  MR_Word mercury__pretty_printer__HeadVar__5_5,
  MR_Word * mercury__pretty_printer__HeadVar__6_6,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_8,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_10,
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_11,
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pretty_printer__succeeded;

        if ((mercury__pretty_printer__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__pretty_printer__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *mercury__pretty_printer__STATE_VARIABLE_IO_12 = mercury__pretty_printer__STATE_VARIABLE_IO_0_11;
            *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9;
            *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_8 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7;
          }
        else
          {
            MR_Word mercury__pretty_printer__Doc_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word mercury__pretty_printer__Docs0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 1)));
            MR_String mercury__pretty_printer__String_36;

            mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__Doc_30)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__pretty_printer__succeeded)
              {
                mercury__pretty_printer__String_36 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc_30, (MR_Integer) 0)));
                {
                  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_43_43;
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_44_44;
                  MR_Integer mercury__pretty_printer__V_45_45;
                  void MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_writer_71, (MR_Integer) 0)), (MR_Integer) 5)));

                  {
                    mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_writer_71), mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__String_36)), mercury__pretty_printer__STATE_VARIABLE_IO_0_11, &mercury__pretty_printer__STATE_VARIABLE_IO_43_43);
                  }
                  {
                    mercury__string__count_codepoints_2_p_0(mercury__pretty_printer__String_36, &mercury__pretty_printer__V_45_45);
                  }
                  mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_44_44 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7 - mercury__pretty_printer__V_45_45);
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs0_31;
                    MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_44_44;
                    MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_11 = mercury__pretty_printer__STATE_VARIABLE_IO_43_43;

                    mercury__pretty_printer__STATE_VARIABLE_IO_0_11 = mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_11;
                    mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_7;
                    mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
                  }
                  continue;
                }
              }
            else
              {
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__Doc_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                if (mercury__pretty_printer__succeeded)
                  {
                    MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_49_49;
                    MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_50_50;
                    MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_51_51;
                    MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_20_85;
                    void MR_CALL (* mercury__pretty_printer__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_writer_71, (MR_Integer) 0)), (MR_Integer) 5)));

                    {
                      mercury__pretty_printer__func_1(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_writer_71), mercury__pretty_printer__HeadVar__1_1, ((MR_Box) ((MR_String) "\n")), mercury__pretty_printer__STATE_VARIABLE_IO_0_11, &mercury__pretty_printer__STATE_VARIABLE_IO_20_85);
                    }
                    {
                      mercury__pretty_printer__output_indentation_6_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_71, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__3_3, mercury__pretty_printer__HeadVar__2_2, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_49_49, mercury__pretty_printer__STATE_VARIABLE_IO_20_85, &mercury__pretty_printer__STATE_VARIABLE_IO_51_51);
                    }
                    mercury__pretty_printer__STATE_VARIABLE_RemainingLines_50_50 = (mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9 - (MR_Integer) 1);
                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingLines_50_50 <= (MR_Integer) 0);
                    if (mercury__pretty_printer__succeeded)
                      {
                        *mercury__pretty_printer__HeadVar__6_6 = mercury__pretty_printer__Docs0_31;
                        *mercury__pretty_printer__STATE_VARIABLE_IO_12 = mercury__pretty_printer__STATE_VARIABLE_IO_51_51;
                        *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_50_50;
                        *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_8 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_49_49;
                      }
                    else
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs0_31;
                          MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_49_49;
                          MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_9 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_50_50;
                          MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_11 = mercury__pretty_printer__STATE_VARIABLE_IO_51_51;

                          mercury__pretty_printer__STATE_VARIABLE_IO_0_11 = mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_11;
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_9;
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_7;
                          mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
                        }
                        continue;
                      }
                  }
                else
                  {
                    MR_Word mercury__pretty_printer__V_56_56;

                    mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__Doc_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_30, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (mercury__pretty_printer__succeeded)
                      {
                        mercury__pretty_printer__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_30, (MR_Integer) 1)));
                        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                    if (mercury__pretty_printer__succeeded)
                      {
                        MR_Integer mercury__pretty_printer__V_57_57 = (mercury__pretty_printer__HeadVar__4_4 + (MR_Integer) 1);

                        /* direct tailcall eliminated */
                        {
                          MR_Integer mercury__pretty_printer__HeadVar__4__tmp_copy_4 = mercury__pretty_printer__V_57_57;
                          MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs0_31;

                          mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
                          mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__4__tmp_copy_4;
                        }
                        continue;
                      }
                    else
                      {
                        MR_Word mercury__pretty_printer__V_62_62;

                        mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__Doc_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_30, (MR_Integer) 0)))) == (MR_Integer) 4)));
                        if (mercury__pretty_printer__succeeded)
                          {
                            mercury__pretty_printer__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_30, (MR_Integer) 1)));
                            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                          }
                        if (mercury__pretty_printer__succeeded)
                          {
                            mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__4_4 == (MR_Integer) 1);
                            if (mercury__pretty_printer__succeeded)
                              {
                                *mercury__pretty_printer__HeadVar__6_6 = mercury__pretty_printer__Docs0_31;
                                *mercury__pretty_printer__STATE_VARIABLE_IO_12 = mercury__pretty_printer__STATE_VARIABLE_IO_0_11;
                                *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9;
                                *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_8 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7;
                              }
                            else
                              {
                                MR_Integer mercury__pretty_printer__V_63_63 = (mercury__pretty_printer__HeadVar__4_4 - (MR_Integer) 1);

                                /* direct tailcall eliminated */
                                {
                                  MR_Integer mercury__pretty_printer__HeadVar__4__tmp_copy_4 = mercury__pretty_printer__V_63_63;
                                  MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs0_31;

                                  mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
                                  mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__4__tmp_copy_4;
                                }
                                continue;
                              }
                          }
                        else
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs0_31;

                              mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
                            }
                            continue;
                          }
                      }
                  }
              }
          }
      }
      break;
    }
}

void MR_CALL 
mercury__pretty_printer__do_put_doc_17_p_1(
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_127,
  MR_Box mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Word mercury__pretty_printer__HeadVar__3_3,
  MR_Integer mercury__pretty_printer__HeadVar__4_4,
  MR_Word mercury__pretty_printer__HeadVar__5_5,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_0_8,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Indents_9,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_12,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_13,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_14,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_15,
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_16,
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pretty_printer__succeeded;

        if ((mercury__pretty_printer__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__pretty_printer__STATE_VARIABLE_IO_17 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
            *mercury__pretty_printer__STATE_VARIABLE_Pri_15 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
            *mercury__pretty_printer__STATE_VARIABLE_Limit_13 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
            *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
            *mercury__pretty_printer__STATE_VARIABLE_Indents_9 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
            *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
          }
        else
          {
            MR_Word mercury__pretty_printer__Doc_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word mercury__pretty_printer__Docs0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 1)));

            mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10 <= (MR_Integer) 0);
            if (mercury__pretty_printer__succeeded)
              {
                {
                  mercury__stream__put_4_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_127, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) ((MR_String) "...")), mercury__pretty_printer__STATE_VARIABLE_IO_0_16, mercury__pretty_printer__STATE_VARIABLE_IO_17);
                }
                *mercury__pretty_printer__STATE_VARIABLE_Pri_15 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                *mercury__pretty_printer__STATE_VARIABLE_Limit_13 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
                *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                *mercury__pretty_printer__STATE_VARIABLE_Indents_9 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
              }
            else
              {
                MR_Word mercury__pretty_printer__Docs_53;
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_91_91;
                MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_101_101;
                MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_105_105;
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111;
                MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_113_113;
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114;

                switch (MR_tag((MR_Word) mercury__pretty_printer__Doc_44)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mercury__pretty_printer__Doc_44)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer mercury__pretty_printer__IndentWidth_54;
                          MR_Integer mercury__pretty_printer__V_109_109;

                          {
                            mercury__pretty_printer__IndentWidth_54 = mercury__pretty_printer__count_indent_codepoints_1_f_0(mercury__pretty_printer__STATE_VARIABLE_Indents_0_8);
                          }
                          mercury__pretty_printer__V_109_109 = (mercury__pretty_printer__HeadVar__4_4 - mercury__pretty_printer__IndentWidth_54);
                          mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 < mercury__pretty_printer__V_109_109);
                          if (mercury__pretty_printer__succeeded)
                            {
                              mercury__pretty_printer__format_nl_8_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_127, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_113_113);
                            }
                          else
                            {
                              mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                              mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                              mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                            }
                          mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                          mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
                          mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__pretty_printer__format_nl_8_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_127, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_113_113);
                          }
                          mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                          mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
                          mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String mercury__pretty_printer__String_52 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc_44, (MR_Integer) 0)));
                      MR_Integer mercury__pretty_printer__V_115_115;

                      {
                        mercury__stream__put_4_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_127, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__String_52)), mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_113_113);
                      }
                      {
                        mercury__pretty_printer__V_115_115 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__String_52);
                      }
                      mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 - mercury__pretty_printer__V_115_115);
                      mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
                      mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                      mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                      mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
                      mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word mercury__pretty_printer__TypeCtorInfo_128_128 = (MR_Word) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0;
                      MR_Word mercury__pretty_printer__Docs1_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc_44, (MR_Integer) 0)));

                      {
                        mercury__pretty_printer__Docs_53 = mercury__list__f_43_43_2_f_0(mercury__pretty_printer__TypeCtorInfo_128_128, mercury__pretty_printer__Docs1_55, mercury__pretty_printer__Docs0_45);
                      }
                      mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                      mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                      mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                      mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
                      mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                      mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word mercury__pretty_printer__Univ_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
                          MR_Word mercury__pretty_printer__Doc1_57;

                          {
                            mercury__pretty_printer__expand_pp_7_p_1(mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__HeadVar__3_3, mercury__pretty_printer__Univ_56, &mercury__pretty_printer__Doc1_57, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14);
                          }
                          {
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_57));
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
                          }
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                          mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                          mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word mercury__pretty_printer__Univs_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
                          MR_Word mercury__pretty_printer__Sep_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 2)));
                          MR_Word mercury__pretty_printer__Doc1_122;

                          {
                            mercury__pretty_printer__expand_format_list_5_p_0(mercury__pretty_printer__Univs_58, mercury__pretty_printer__Sep_59, &mercury__pretty_printer__Doc1_122, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105);
                          }
                          {
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_122));
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
                          }
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                          mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                          mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_String mercury__pretty_printer__Name_60 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
                          MR_Word mercury__pretty_printer__Doc1_123;
                          MR_Word mercury__pretty_printer__Univs_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 2)));

                          {
                            mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_60, mercury__pretty_printer__Univs_124, &mercury__pretty_printer__Doc1_123, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14);
                          }
                          {
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_123));
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
                          }
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                          mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                          mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word mercury__pretty_printer__Susp_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
                          MR_Word mercury__pretty_printer__Doc1_125;

                          {
                            mercury__pretty_printer__expand_format_susp_4_p_0(mercury__pretty_printer__Susp_61, &mercury__pretty_printer__Doc1_125, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105);
                          }
                          {
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_125));
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
                          }
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                          mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                          mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word mercury__pretty_printer__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));

                          switch (MR_tag((MR_Word) mercury__pretty_printer__V_129_129)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              switch (MR_unmkbody(mercury__pretty_printer__V_129_129)) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  {
                                    MR_Integer mercury__pretty_printer__RemainingWidthAfterGroup_66;
                                    MR_Word mercury__pretty_printer__Docs1_126;

                                    {
                                      mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__HeadVar__3_3, mercury__pretty_printer__Docs0_45, &mercury__pretty_printer__Docs1_126, (MR_Integer) 1, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14, &mercury__pretty_printer__STATE_VARIABLE_Pri_91_91, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6, &mercury__pretty_printer__RemainingWidthAfterGroup_66);
                                    }
                                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__RemainingWidthAfterGroup_66 >= (MR_Integer) 0);
                                    if (mercury__pretty_printer__succeeded)
                                      {
                                        mercury__pretty_printer__output_current_group_12_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_127, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, (MR_Integer) 1, mercury__pretty_printer__Docs1_126, &mercury__pretty_printer__Docs_53, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_113_113);
                                      }
                                    else
                                      {
                                        mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs1_126;
                                        mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                                        mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                                        mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                                      }
                                    mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                                  }
                                  break;
                                case (MR_Integer) 1:
                                  {
                                    mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
                                    mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                                    mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                                    mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                                    mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
                                    mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                                    mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                                  }
                                  break;
                                case (MR_Integer) 2:
                                  {
                                    if ((mercury__pretty_printer__STATE_VARIABLE_Indents_0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                      {
                                        {
                                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140pretty_printer.do_put_doc\'/17", (MR_String) "cannot pop empty indent stack");
                                          return;
                                        }
                                      }
                                    else
                                      {
                                        MR_String mercury__pretty_printer___PoppedIndent_63;

                                        mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, (MR_Integer) 0)));
                                        mercury__pretty_printer___PoppedIndent_63 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, (MR_Integer) 1)));
                                      }
                                    mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
                                    mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                                    mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                                    mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
                                    mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                                    mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                                  }
                                  break;
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_String mercury__pretty_printer__Indent_62 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_129_129, (MR_Integer) 0)));

                                {
                                  mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Indents_101_101, 0) = ((MR_Box) (mercury__pretty_printer__STATE_VARIABLE_Indents_0_8));
                                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Indents_101_101, 1) = ((MR_Box) (mercury__pretty_printer__Indent_62));
                                }
                                mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
                                mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                                mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                                mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
                                mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                                mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_129_129, (MR_Integer) 0)));
                                mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
                                mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                                mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                                mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                                mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
                                mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                              }
                              break;
                            case (MR_Integer) 3:
                              {
                                mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_129_129, (MR_Integer) 0)));
                                mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
                                mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                                mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                                mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                                mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                                mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                              }
                              break;
                          }
                        }
                        break;
                    }
                    break;
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs_53;
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114;
                  MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_0__tmp_copy_8 = mercury__pretty_printer__STATE_VARIABLE_Indents_101_101;
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111;
                  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_12 = mercury__pretty_printer__STATE_VARIABLE_Limit_105_105;
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_14 = mercury__pretty_printer__STATE_VARIABLE_Pri_91_91;
                  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_16 = mercury__pretty_printer__STATE_VARIABLE_IO_113_113;

                  mercury__pretty_printer__STATE_VARIABLE_IO_0_16 = mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_16;
                  mercury__pretty_printer__STATE_VARIABLE_Pri_0_14 = mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_14;
                  mercury__pretty_printer__STATE_VARIABLE_Limit_0_12 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_12;
                  mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_10;
                  mercury__pretty_printer__STATE_VARIABLE_Indents_0_8 = mercury__pretty_printer__STATE_VARIABLE_Indents_0__tmp_copy_8;
                  mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_6;
                  mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
                }
                continue;
              }
          }
      }
      break;
    }
}

void MR_CALL 
mercury__pretty_printer__do_put_doc_17_p_0(
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_127,
  MR_Box mercury__pretty_printer__HeadVar__1_1,
  MR_Word mercury__pretty_printer__HeadVar__2_2,
  MR_Word mercury__pretty_printer__HeadVar__3_3,
  MR_Integer mercury__pretty_printer__HeadVar__4_4,
  MR_Word mercury__pretty_printer__HeadVar__5_5,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_0_8,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Indents_9,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_12,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_13,
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_14,
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_15,
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_16,
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pretty_printer__succeeded;

        if ((mercury__pretty_printer__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__pretty_printer__STATE_VARIABLE_IO_17 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
            *mercury__pretty_printer__STATE_VARIABLE_Pri_15 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
            *mercury__pretty_printer__STATE_VARIABLE_Limit_13 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
            *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
            *mercury__pretty_printer__STATE_VARIABLE_Indents_9 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
            *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
          }
        else
          {
            MR_Word mercury__pretty_printer__Doc_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word mercury__pretty_printer__Docs0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 1)));

            mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10 <= (MR_Integer) 0);
            if (mercury__pretty_printer__succeeded)
              {
                {
                  mercury__stream__put_4_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_127, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) ((MR_String) "...")), mercury__pretty_printer__STATE_VARIABLE_IO_0_16, mercury__pretty_printer__STATE_VARIABLE_IO_17);
                }
                *mercury__pretty_printer__STATE_VARIABLE_Pri_15 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                *mercury__pretty_printer__STATE_VARIABLE_Limit_13 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
                *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                *mercury__pretty_printer__STATE_VARIABLE_Indents_9 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
              }
            else
              {
                MR_Word mercury__pretty_printer__Docs_53;
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_91_91;
                MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_101_101;
                MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_105_105;
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111;
                MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_113_113;
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114;

                switch (MR_tag((MR_Word) mercury__pretty_printer__Doc_44)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mercury__pretty_printer__Doc_44)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer mercury__pretty_printer__IndentWidth_54;
                          MR_Integer mercury__pretty_printer__V_109_109;

                          {
                            mercury__pretty_printer__IndentWidth_54 = mercury__pretty_printer__count_indent_codepoints_1_f_0(mercury__pretty_printer__STATE_VARIABLE_Indents_0_8);
                          }
                          mercury__pretty_printer__V_109_109 = (mercury__pretty_printer__HeadVar__4_4 - mercury__pretty_printer__IndentWidth_54);
                          mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 < mercury__pretty_printer__V_109_109);
                          if (mercury__pretty_printer__succeeded)
                            {
                              mercury__pretty_printer__format_nl_8_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_127, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_113_113);
                            }
                          else
                            {
                              mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                              mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                              mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                            }
                          mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                          mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
                          mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__pretty_printer__format_nl_8_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_127, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_113_113);
                          }
                          mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                          mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
                          mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String mercury__pretty_printer__String_52 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc_44, (MR_Integer) 0)));
                      MR_Integer mercury__pretty_printer__V_115_115;

                      {
                        mercury__stream__put_4_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_127, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__String_52)), mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_113_113);
                      }
                      {
                        mercury__pretty_printer__V_115_115 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__String_52);
                      }
                      mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 - mercury__pretty_printer__V_115_115);
                      mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
                      mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                      mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                      mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
                      mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word mercury__pretty_printer__TypeCtorInfo_128_128 = (MR_Word) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0;
                      MR_Word mercury__pretty_printer__Docs1_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc_44, (MR_Integer) 0)));

                      {
                        mercury__pretty_printer__Docs_53 = mercury__list__f_43_43_2_f_0(mercury__pretty_printer__TypeCtorInfo_128_128, mercury__pretty_printer__Docs1_55, mercury__pretty_printer__Docs0_45);
                      }
                      mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                      mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                      mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                      mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
                      mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                      mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word mercury__pretty_printer__Univ_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
                          MR_Word mercury__pretty_printer__Doc1_57;

                          {
                            mercury__pretty_printer__expand_pp_7_p_0(mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__HeadVar__3_3, mercury__pretty_printer__Univ_56, &mercury__pretty_printer__Doc1_57, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14);
                          }
                          {
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_57));
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
                          }
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                          mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                          mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word mercury__pretty_printer__Univs_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
                          MR_Word mercury__pretty_printer__Sep_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 2)));
                          MR_Word mercury__pretty_printer__Doc1_122;

                          {
                            mercury__pretty_printer__expand_format_list_5_p_0(mercury__pretty_printer__Univs_58, mercury__pretty_printer__Sep_59, &mercury__pretty_printer__Doc1_122, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105);
                          }
                          {
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_122));
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
                          }
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                          mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                          mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_String mercury__pretty_printer__Name_60 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
                          MR_Word mercury__pretty_printer__Doc1_123;
                          MR_Word mercury__pretty_printer__Univs_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 2)));

                          {
                            mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_60, mercury__pretty_printer__Univs_124, &mercury__pretty_printer__Doc1_123, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14);
                          }
                          {
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_123));
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
                          }
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                          mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                          mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word mercury__pretty_printer__Susp_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
                          MR_Word mercury__pretty_printer__Doc1_125;

                          {
                            mercury__pretty_printer__expand_format_susp_4_p_0(mercury__pretty_printer__Susp_61, &mercury__pretty_printer__Doc1_125, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105);
                          }
                          {
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_125));
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
                          }
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                          mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                          mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word mercury__pretty_printer__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));

                          switch (MR_tag((MR_Word) mercury__pretty_printer__V_129_129)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              switch (MR_unmkbody(mercury__pretty_printer__V_129_129)) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  {
                                    MR_Integer mercury__pretty_printer__RemainingWidthAfterGroup_66;
                                    MR_Word mercury__pretty_printer__Docs1_126;

                                    {
                                      mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__HeadVar__3_3, mercury__pretty_printer__Docs0_45, &mercury__pretty_printer__Docs1_126, (MR_Integer) 1, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14, &mercury__pretty_printer__STATE_VARIABLE_Pri_91_91, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6, &mercury__pretty_printer__RemainingWidthAfterGroup_66);
                                    }
                                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__RemainingWidthAfterGroup_66 >= (MR_Integer) 0);
                                    if (mercury__pretty_printer__succeeded)
                                      {
                                        mercury__pretty_printer__output_current_group_12_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_127, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, (MR_Integer) 1, mercury__pretty_printer__Docs1_126, &mercury__pretty_printer__Docs_53, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_113_113);
                                      }
                                    else
                                      {
                                        mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs1_126;
                                        mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                                        mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                                        mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                                      }
                                    mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                                  }
                                  break;
                                case (MR_Integer) 1:
                                  {
                                    mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
                                    mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                                    mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                                    mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                                    mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
                                    mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                                    mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                                  }
                                  break;
                                case (MR_Integer) 2:
                                  {
                                    if ((mercury__pretty_printer__STATE_VARIABLE_Indents_0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                      {
                                        {
                                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140pretty_printer.do_put_doc\'/17", (MR_String) "cannot pop empty indent stack");
                                          return;
                                        }
                                      }
                                    else
                                      {
                                        MR_String mercury__pretty_printer___PoppedIndent_63;

                                        mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, (MR_Integer) 0)));
                                        mercury__pretty_printer___PoppedIndent_63 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, (MR_Integer) 1)));
                                      }
                                    mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
                                    mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                                    mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                                    mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
                                    mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                                    mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                                  }
                                  break;
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_String mercury__pretty_printer__Indent_62 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_129_129, (MR_Integer) 0)));

                                {
                                  mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Indents_101_101, 0) = ((MR_Box) (mercury__pretty_printer__STATE_VARIABLE_Indents_0_8));
                                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Indents_101_101, 1) = ((MR_Box) (mercury__pretty_printer__Indent_62));
                                }
                                mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
                                mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                                mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                                mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
                                mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                                mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_129_129, (MR_Integer) 0)));
                                mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
                                mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                                mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                                mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                                mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
                                mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                              }
                              break;
                            case (MR_Integer) 3:
                              {
                                mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_129_129, (MR_Integer) 0)));
                                mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
                                mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
                                mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
                                mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
                                mercury__pretty_printer__STATE_VARIABLE_Pri_91_91 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
                                mercury__pretty_printer__STATE_VARIABLE_IO_113_113 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
                              }
                              break;
                          }
                        }
                        break;
                    }
                    break;
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs_53;
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_114_114;
                  MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_0__tmp_copy_8 = mercury__pretty_printer__STATE_VARIABLE_Indents_101_101;
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_111_111;
                  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_12 = mercury__pretty_printer__STATE_VARIABLE_Limit_105_105;
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_14 = mercury__pretty_printer__STATE_VARIABLE_Pri_91_91;
                  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_16 = mercury__pretty_printer__STATE_VARIABLE_IO_113_113;

                  mercury__pretty_printer__STATE_VARIABLE_IO_0_16 = mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_16;
                  mercury__pretty_printer__STATE_VARIABLE_Pri_0_14 = mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_14;
                  mercury__pretty_printer__STATE_VARIABLE_Limit_0_12 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_12;
                  mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_10;
                  mercury__pretty_printer__STATE_VARIABLE_Indents_0_8 = mercury__pretty_printer__STATE_VARIABLE_Indents_0__tmp_copy_8;
                  mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_6;
                  mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
                }
                continue;
              }
          }
      }
      break;
    }
}

static MR_Integer MR_CALL 
mercury__pretty_printer__count_indent_codepoints_1_f_0(
  MR_Word mercury__pretty_printer__HeadVar__1_1)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Integer mercury__pretty_printer__HeadVar__2_2;

    if ((mercury__pretty_printer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__pretty_printer__HeadVar__2_2 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__pretty_printer__IndentStack_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
        MR_String mercury__pretty_printer__Indent_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mercury__pretty_printer__V_5_5;
        MR_Integer mercury__pretty_printer__V_6_6;

        {
          mercury__pretty_printer__V_5_5 = mercury__pretty_printer__count_indent_codepoints_1_f_0(mercury__pretty_printer__IndentStack_3);
        }
        {
          mercury__string__count_codepoints_2_p_0(mercury__pretty_printer__Indent_4, &mercury__pretty_printer__V_6_6);
        }
        mercury__pretty_printer__HeadVar__2_2 = (mercury__pretty_printer__V_5_5 + mercury__pretty_printer__V_6_6);
      }
    return mercury__pretty_printer__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__pretty_printer__set_default_params_3_p_0(
  MR_Word mercury__pretty_printer__Params_4)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

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

	X =  mercury__pretty_printer__Params_4 ;
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
  MR_Word * mercury__pretty_printer__Params_4)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

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
	 *mercury__pretty_printer__Params_4  = X;
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
  MR_String mercury__pretty_printer__ModuleName_7,
  MR_String mercury__pretty_printer__TypeName_8,
  MR_Integer mercury__pretty_printer__TypeArity_9,
  MR_Word mercury__pretty_printer__Formatter_10)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__FMap0_12;
    MR_Word mercury__pretty_printer__FMap_13;
    MR_Word mercury__pretty_printer__Okay_22;

{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_6_p_0

	MR_Word Okay;

		{

    Okay = ML_pretty_printer_is_initialised;


		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__Okay_22  = Okay;
}
    switch (mercury__pretty_printer__Okay_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__pretty_printer__FMap0_12 = mercury__pretty_printer__initial_formatter_map_0_f_0();
          }
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_6_p_0

	MR_Word FMap;

	FMap =  mercury__pretty_printer__FMap0_12 ;
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
	 mercury__pretty_printer__FMap0_12  = FMap;
}
        }
        break;
    }
    {
      mercury__pretty_printer__set_formatter_6_p_0(mercury__pretty_printer__ModuleName_7, mercury__pretty_printer__TypeName_8, mercury__pretty_printer__TypeArity_9, mercury__pretty_printer__Formatter_10, mercury__pretty_printer__FMap0_12, &mercury__pretty_printer__FMap_13);
    }
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_6_p_0

	MR_Word FMap;

	FMap =  mercury__pretty_printer__FMap_13 ;
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
  MR_Word mercury__pretty_printer__FMap_1)
{
  {
    MR_bool mercury__pretty_printer__succeeded;

{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_map_3_p_0

	MR_Word FMap;

	FMap =  mercury__pretty_printer__FMap_1 ;
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
  MR_Word * mercury__pretty_printer__FMap_4)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__Okay_6;

{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_formatter_map_3_p_0

	MR_Word Okay;

		{

    Okay = ML_pretty_printer_is_initialised;


		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__Okay_6  = Okay;
}
    switch (mercury__pretty_printer__Okay_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            *mercury__pretty_printer__FMap_4 = mercury__pretty_printer__initial_formatter_map_0_f_0();
          }
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_formatter_map_3_p_0

	MR_Word FMap;

	FMap =  *mercury__pretty_printer__FMap_4 ;
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
	 *mercury__pretty_printer__FMap_4  = FMap;
}
        }
        break;
    }
  }
}

void MR_CALL 
mercury__pretty_printer__set_formatter_6_p_0(
  MR_String mercury__pretty_printer__ModuleName_7,
  MR_String mercury__pretty_printer__TypeName_8,
  MR_Integer mercury__pretty_printer__Arity_9,
  MR_Word mercury__pretty_printer__Formatter_10,
  MR_Word mercury__pretty_printer__STATE_VARIABLE_FMap_0_16,
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_FMap_17)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__FMapTypeArity0_12;
    MR_Word mercury__pretty_printer__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mercury__pretty_printer__TypeInfo_24_24 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
    MR_Box mercury__pretty_printer__conv0_FMapTypeArity0_12;

    {
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_23_23, mercury__pretty_printer__TypeInfo_24_24, mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv0_FMapTypeArity0_12);
    }
    if (mercury__pretty_printer__succeeded)
      {
        mercury__pretty_printer__FMapTypeArity0_12 = ((MR_Word) mercury__pretty_printer__conv0_FMapTypeArity0_12);
        mercury__pretty_printer__succeeded = MR_TRUE;
      }
    if (mercury__pretty_printer__succeeded)
      {
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_35;
        MR_Word mercury__pretty_printer__TypeInfo_36_36;
        MR_Word mercury__pretty_printer__FMapTypeArity_15;
        MR_Word mercury__pretty_printer__FMapArity0_13;
        MR_Word mercury__pretty_printer__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word mercury__pretty_printer__TypeInfo_26_26 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
        MR_Box mercury__pretty_printer__conv1_FMapArity0_13;

        {
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_25_25, mercury__pretty_printer__TypeInfo_26_26, mercury__pretty_printer__FMapTypeArity0_12, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv1_FMapArity0_13);
        }
        if (mercury__pretty_printer__succeeded)
          {
            mercury__pretty_printer__FMapArity0_13 = ((MR_Word) mercury__pretty_printer__conv1_FMapArity0_13);
            mercury__pretty_printer__succeeded = MR_TRUE;
          }
        if (mercury__pretty_printer__succeeded)
          {
            MR_Word mercury__pretty_printer__TypeInfo_28_28 = (MR_Word) &mercury__pretty_printer_scalar_common_4[1];
            MR_Word mercury__pretty_printer__TypeCtorInfo_29_29;
            MR_Word mercury__pretty_printer__TypeInfo_30_30;
            MR_Word mercury__pretty_printer__FMapArity_14;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__pretty_printer__TypeInfo_28_28, mercury__pretty_printer__Arity_9, ((MR_Box) (mercury__pretty_printer__Formatter_10)), mercury__pretty_printer__FMapArity0_13, &mercury__pretty_printer__FMapArity_14);
            }
            mercury__pretty_printer__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            mercury__pretty_printer__TypeInfo_30_30 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
            {
              mercury__map__det_update_4_p_0(mercury__pretty_printer__TypeCtorInfo_29_29, mercury__pretty_printer__TypeInfo_30_30, ((MR_Box) (mercury__pretty_printer__TypeName_8)), ((MR_Box) (mercury__pretty_printer__FMapArity_14)), mercury__pretty_printer__FMapTypeArity0_12, &mercury__pretty_printer__FMapTypeArity_15);
            }
          }
        else
          {
            MR_Word mercury__pretty_printer__TypeCtorInfo_33_33;
            MR_Word mercury__pretty_printer__TypeInfo_34_34;
            MR_Word mercury__pretty_printer__FMapArity_20;
            MR_Word mercury__pretty_printer__V_6_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word mercury__pretty_printer__V_7_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__pretty_printer__FMapArity_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 0) = ((MR_Box) (mercury__pretty_printer__Arity_9));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 1) = ((MR_Box) (mercury__pretty_printer__Formatter_10));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 2) = ((MR_Box) (mercury__pretty_printer__V_6_53));
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_20, 3) = ((MR_Box) (mercury__pretty_printer__V_7_54));
            }
            mercury__pretty_printer__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            mercury__pretty_printer__TypeInfo_34_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
            {
              mercury__map__det_insert_4_p_0(mercury__pretty_printer__TypeCtorInfo_33_33, mercury__pretty_printer__TypeInfo_34_34, ((MR_Box) (mercury__pretty_printer__TypeName_8)), ((MR_Box) (mercury__pretty_printer__FMapArity_20)), mercury__pretty_printer__FMapTypeArity0_12, &mercury__pretty_printer__FMapTypeArity_15);
            }
          }
        mercury__pretty_printer__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__pretty_printer__TypeInfo_36_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
        {
          mercury__map__det_update_4_p_0(mercury__pretty_printer__TypeCtorInfo_35_35, mercury__pretty_printer__TypeInfo_36_36, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), ((MR_Box) (mercury__pretty_printer__FMapTypeArity_15)), mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, mercury__pretty_printer__STATE_VARIABLE_FMap_17);
        }
      }
    else
      {
        MR_Word mercury__pretty_printer__TypeCtorInfo_39_39;
        MR_Word mercury__pretty_printer__TypeInfo_41_41;
        MR_Word mercury__pretty_printer__FMapArity_21;
        MR_Word mercury__pretty_printer__FMapTypeArity_22;
        MR_Word mercury__pretty_printer__V_6_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__pretty_printer__V_7_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__pretty_printer__V_6_71;
        MR_Word mercury__pretty_printer__V_7_72;

        {
          mercury__pretty_printer__FMapArity_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 0) = ((MR_Box) (mercury__pretty_printer__Arity_9));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 1) = ((MR_Box) (mercury__pretty_printer__Formatter_10));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 2) = ((MR_Box) (mercury__pretty_printer__V_6_62));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapArity_21, 3) = ((MR_Box) (mercury__pretty_printer__V_7_63));
        }
        mercury__pretty_printer__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__pretty_printer__V_6_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__pretty_printer__V_7_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__pretty_printer__FMapTypeArity_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 0) = ((MR_Box) (mercury__pretty_printer__TypeName_8));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 1) = ((MR_Box) (mercury__pretty_printer__FMapArity_21));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 2) = ((MR_Box) (mercury__pretty_printer__V_6_71));
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__FMapTypeArity_22, 3) = ((MR_Box) (mercury__pretty_printer__V_7_72));
        }
        mercury__pretty_printer__TypeInfo_41_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[2];
        {
          mercury__map__det_insert_4_p_0(mercury__pretty_printer__TypeCtorInfo_39_39, mercury__pretty_printer__TypeInfo_41_41, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), ((MR_Box) (mercury__pretty_printer__FMapTypeArity_22)), mercury__pretty_printer__STATE_VARIABLE_FMap_0_16, mercury__pretty_printer__STATE_VARIABLE_FMap_17);
        }
      }
  }
}

MR_Word MR_CALL 
mercury__pretty_printer__new_formatter_map_0_f_0(void)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__pretty_printer__HeadVar__1_1;
  }
}

void MR_CALL 
mercury__pretty_printer__put_doc_7_p_1(
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_31,
  MR_Box mercury__pretty_printer__Stream_8,
  MR_Word mercury__pretty_printer__Canonicalize_9,
  MR_Word mercury__pretty_printer__FMap_10,
  MR_Word mercury__pretty_printer__Params_11,
  MR_Word mercury__pretty_printer__Doc_12,
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_25,
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_26)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_32 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
    MR_Integer mercury__pretty_printer__Pri_14;
    MR_Integer mercury__pretty_printer__MaxLines_16;
    MR_Word mercury__pretty_printer__Limit_17;
    MR_Integer mercury__pretty_printer__RemainingWidth_18;
    MR_Word mercury__pretty_printer__Indents_19;
    MR_Word mercury__pretty_printer__V_28_28;
    MR_Word mercury__pretty_printer__V_30_30;
    MR_Box MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box);
    MR_Box mercury__pretty_printer__conv1_Pri_14;
    MR_Integer mercury__pretty_printer__V_20_20;
    MR_Word mercury__pretty_printer__V_21_21;
    MR_Integer mercury__pretty_printer__V_22_22;
    MR_Word mercury__pretty_printer__V_23_23;
    MR_Integer mercury__pretty_printer__V_24_24;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__pretty_printer__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_op_table_32, (MR_Integer) 0)), (MR_Integer) 12)));
    {
      mercury__pretty_printer__conv1_Pri_14 = mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_op_table_32), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__pretty_printer__Pri_14 = ((MR_Integer) mercury__pretty_printer__conv1_Pri_14);
    mercury__pretty_printer__RemainingWidth_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Params_11, (MR_Integer) 0)));
    mercury__pretty_printer__MaxLines_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Params_11, (MR_Integer) 1)));
    mercury__pretty_printer__Limit_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Params_11, (MR_Integer) 2)));
    mercury__pretty_printer__Indents_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__pretty_printer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__pretty_printer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_28_28, 0) = ((MR_Box) (mercury__pretty_printer__Doc_12));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_28_28, 1) = ((MR_Box) (mercury__pretty_printer__V_30_30));
    }
    {
      mercury__pretty_printer__do_put_doc_17_p_1(mercury__pretty_printer__TypeClassInfo_for_writer_31, mercury__pretty_printer__Stream_8, mercury__pretty_printer__Canonicalize_9, mercury__pretty_printer__FMap_10, mercury__pretty_printer__RemainingWidth_18, mercury__pretty_printer__V_28_28, mercury__pretty_printer__RemainingWidth_18, &mercury__pretty_printer__V_20_20, mercury__pretty_printer__Indents_19, &mercury__pretty_printer__V_21_21, mercury__pretty_printer__MaxLines_16, &mercury__pretty_printer__V_22_22, mercury__pretty_printer__Limit_17, &mercury__pretty_printer__V_23_23, mercury__pretty_printer__Pri_14, &mercury__pretty_printer__V_24_24, mercury__pretty_printer__STATE_VARIABLE_IO_0_25, mercury__pretty_printer__STATE_VARIABLE_IO_26);
    }
  }
}

void MR_CALL 
mercury__pretty_printer__put_doc_7_p_0(
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_31,
  MR_Box mercury__pretty_printer__Stream_8,
  MR_Word mercury__pretty_printer__Canonicalize_9,
  MR_Word mercury__pretty_printer__FMap_10,
  MR_Word mercury__pretty_printer__Params_11,
  MR_Word mercury__pretty_printer__Doc_12,
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_25,
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_26)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_32 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
    MR_Integer mercury__pretty_printer__Pri_14;
    MR_Integer mercury__pretty_printer__MaxLines_16;
    MR_Word mercury__pretty_printer__Limit_17;
    MR_Integer mercury__pretty_printer__RemainingWidth_18;
    MR_Word mercury__pretty_printer__Indents_19;
    MR_Word mercury__pretty_printer__V_28_28;
    MR_Word mercury__pretty_printer__V_30_30;
    MR_Box MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box);
    MR_Box mercury__pretty_printer__conv1_Pri_14;
    MR_Integer mercury__pretty_printer__V_20_20;
    MR_Word mercury__pretty_printer__V_21_21;
    MR_Integer mercury__pretty_printer__V_22_22;
    MR_Word mercury__pretty_printer__V_23_23;
    MR_Integer mercury__pretty_printer__V_24_24;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__pretty_printer__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_op_table_32, (MR_Integer) 0)), (MR_Integer) 12)));
    {
      mercury__pretty_printer__conv1_Pri_14 = mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_op_table_32), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__pretty_printer__Pri_14 = ((MR_Integer) mercury__pretty_printer__conv1_Pri_14);
    mercury__pretty_printer__RemainingWidth_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Params_11, (MR_Integer) 0)));
    mercury__pretty_printer__MaxLines_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Params_11, (MR_Integer) 1)));
    mercury__pretty_printer__Limit_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Params_11, (MR_Integer) 2)));
    mercury__pretty_printer__Indents_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__pretty_printer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__pretty_printer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_28_28, 0) = ((MR_Box) (mercury__pretty_printer__Doc_12));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_28_28, 1) = ((MR_Box) (mercury__pretty_printer__V_30_30));
    }
    {
      mercury__pretty_printer__do_put_doc_17_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_31, mercury__pretty_printer__Stream_8, mercury__pretty_printer__Canonicalize_9, mercury__pretty_printer__FMap_10, mercury__pretty_printer__RemainingWidth_18, mercury__pretty_printer__V_28_28, mercury__pretty_printer__RemainingWidth_18, &mercury__pretty_printer__V_20_20, mercury__pretty_printer__Indents_19, &mercury__pretty_printer__V_21_21, mercury__pretty_printer__MaxLines_16, &mercury__pretty_printer__V_22_22, mercury__pretty_printer__Limit_17, &mercury__pretty_printer__V_23_23, mercury__pretty_printer__Pri_14, &mercury__pretty_printer__V_24_24, mercury__pretty_printer__STATE_VARIABLE_IO_0_25, mercury__pretty_printer__STATE_VARIABLE_IO_26);
    }
  }
}

void MR_CALL 
mercury__pretty_printer__write_doc_4_p_0(
  MR_Word mercury__pretty_printer__Stream_5,
  MR_Word mercury__pretty_printer__Doc_6)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__Formatters_8;
    MR_Word mercury__pretty_printer__Params_9;
    MR_Word mercury__pretty_printer__Okay_21;
    MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_16;
    MR_Box mercury__pretty_printer__conv0_STATE_VARIABLE_IO_11;

{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0

	MR_Word Okay;

		{

    Okay = ML_pretty_printer_is_initialised;


		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__Okay_21  = Okay;
}
    switch (mercury__pretty_printer__Okay_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__pretty_printer__Formatters_8 = mercury__pretty_printer__initial_formatter_map_0_f_0();
          }
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0

	MR_Word FMap;

	FMap =  mercury__pretty_printer__Formatters_8 ;
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
	 mercury__pretty_printer__Formatters_8  = FMap;
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
	 mercury__pretty_printer__Params_9  = X;
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
    mercury__pretty_printer__TypeClassInfo_for_writer_16 = (MR_Word) &mercury__pretty_printer_scalar_common_4[0];
    {
      mercury__pretty_printer__put_doc_7_p_1(mercury__pretty_printer__TypeClassInfo_for_writer_16, ((MR_Box) (mercury__pretty_printer__Stream_5)), (MR_Integer) 2, mercury__pretty_printer__Formatters_8, mercury__pretty_printer__Params_9, mercury__pretty_printer__Doc_6, ((MR_Box) ((MR_Integer) 0)), &mercury__pretty_printer__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

void MR_CALL 
mercury__pretty_printer__write_doc_3_p_0(
  MR_Word mercury__pretty_printer__Doc_4)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__V_8_8;
    MR_Box mercury__pretty_printer__V_2_10;

{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_2_10  = (MR_Box) Stream;
}
    mercury__pretty_printer__V_8_8 = (MR_Word) mercury__pretty_printer__V_2_10;
    {
      mercury__pretty_printer__write_doc_4_p_0(mercury__pretty_printer__V_8_8, mercury__pretty_printer__Doc_4);
    }
  }
}

MR_Word MR_CALL 
mercury__pretty_printer__format_arg_1_f_0(
  MR_Word mercury__pretty_printer__Doc_3)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__HeadVar__2_2;
    MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_11 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
    MR_Word mercury__pretty_printer__V_4_4;
    MR_Word mercury__pretty_printer__V_5_5;
    MR_Word mercury__pretty_printer__V_6_6;
    MR_Integer mercury__pretty_printer__V_7_7;
    MR_Word mercury__pretty_printer__V_9_9;
    MR_Word mercury__pretty_printer__V_10_10;
    MR_Box MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box);
    MR_Box mercury__pretty_printer__conv1_V_7_7;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__pretty_printer__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_op_table_11, (MR_Integer) 0)), (MR_Integer) 13)));
    {
      mercury__pretty_printer__conv1_V_7_7 = mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_op_table_11), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__pretty_printer__V_7_7 = ((MR_Integer) mercury__pretty_printer__conv1_V_7_7);
    {
      mercury__pretty_printer__V_6_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_6_6, 0) = ((MR_Box) (mercury__pretty_printer__V_7_7));
    }
    {
      mercury__pretty_printer__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_5_5, 1) = ((MR_Box) (mercury__pretty_printer__V_6_6));
    }
    mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 0) = ((MR_Box) (mercury__pretty_printer__Doc_3));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 1) = ((MR_Box) (mercury__pretty_printer__V_10_10));
    }
    {
      mercury__pretty_printer__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_4, 0) = ((MR_Box) (mercury__pretty_printer__V_5_5));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_4, 1) = ((MR_Box) (mercury__pretty_printer__V_9_9));
    }
    {
      mercury__pretty_printer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, 0) = ((MR_Box) (mercury__pretty_printer__V_4_4));
    }
    return mercury__pretty_printer__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pretty_printer__format_1_f_0(
  MR_Word mercury__pretty_printer__TypeInfo_for_T_5,
  MR_Box mercury__pretty_printer__X_3)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__HeadVar__2_2;
    MR_Word mercury__pretty_printer__V_4_4;

    {
      mercury__univ__type_to_univ_2_p_1(mercury__pretty_printer__TypeInfo_for_T_5, mercury__pretty_printer__X_3, &mercury__pretty_printer__V_4_4);
    }
    {
      mercury__pretty_printer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, 1) = ((MR_Box) (mercury__pretty_printer__V_4_4));
    }
    return mercury__pretty_printer__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pretty_printer__group_1_f_0(
  MR_Word mercury__pretty_printer__Docs_3)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__HeadVar__2_2;
    MR_Word mercury__pretty_printer__V_4_4;
    MR_Word mercury__pretty_printer__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[7]);
    MR_Word mercury__pretty_printer__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__pretty_printer__V_7_7;
    MR_Word mercury__pretty_printer__V_8_8;
    MR_Word mercury__pretty_printer__V_9_9;
    MR_Word mercury__pretty_printer__V_10_10;
    MR_Word mercury__pretty_printer__V_11_11;
    MR_Word mercury__pretty_printer__V_12_12;

    {
      mercury__pretty_printer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_8_8, 0) = ((MR_Box) (mercury__pretty_printer__Docs_3));
    }
    mercury__pretty_printer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
    mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[8]);
    mercury__pretty_printer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[9]);
    {
      mercury__pretty_printer__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_7, 0) = ((MR_Box) (mercury__pretty_printer__V_8_8));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_7, 1) = ((MR_Box) (mercury__pretty_printer__V_9_9));
    }
    {
      mercury__pretty_printer__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_4, 0) = ((MR_Box) (mercury__pretty_printer__V_5_5));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_4, 1) = ((MR_Box) (mercury__pretty_printer__V_7_7));
    }
    {
      mercury__pretty_printer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, 0) = ((MR_Box) (mercury__pretty_printer__V_4_4));
    }
    return mercury__pretty_printer__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pretty_printer__indent_1_f_0(
  MR_Word mercury__pretty_printer__Docs_3)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__HeadVar__2_2;
    MR_Word mercury__pretty_printer__V_7_7;
    MR_Word mercury__pretty_printer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[6]);
    MR_Word mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[0]);
    MR_Word mercury__pretty_printer__V_10_10;
    MR_Word mercury__pretty_printer__V_11_11;
    MR_Word mercury__pretty_printer__V_12_12;
    MR_Word mercury__pretty_printer__V_13_13;
    MR_Word mercury__pretty_printer__V_14_14;
    MR_Word mercury__pretty_printer__V_15_15;

    {
      mercury__pretty_printer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_11_11, 0) = ((MR_Box) (mercury__pretty_printer__Docs_3));
    }
    mercury__pretty_printer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
    mercury__pretty_printer__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[4]);
    mercury__pretty_printer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__pretty_printer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[5]);
    {
      mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_10_10, 0) = ((MR_Box) (mercury__pretty_printer__V_11_11));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_10_10, 1) = ((MR_Box) (mercury__pretty_printer__V_12_12));
    }
    {
      mercury__pretty_printer__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_7, 0) = ((MR_Box) (mercury__pretty_printer__V_8_8));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_7, 1) = ((MR_Box) (mercury__pretty_printer__V_10_10));
    }
    {
      mercury__pretty_printer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, 0) = ((MR_Box) (mercury__pretty_printer__V_7_7));
    }
    return mercury__pretty_printer__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pretty_printer__indent_2_f_0(
  MR_String mercury__pretty_printer__Indent_4,
  MR_Word mercury__pretty_printer__Docs_5)
{
  {
    MR_bool mercury__pretty_printer__succeeded;
    MR_Word mercury__pretty_printer__HeadVar__3_3;
    MR_Word mercury__pretty_printer__V_6_6;
    MR_Word mercury__pretty_printer__V_7_7;
    MR_Word mercury__pretty_printer__V_8_8;
    MR_Word mercury__pretty_printer__V_9_9;
    MR_Word mercury__pretty_printer__V_10_10;
    MR_Word mercury__pretty_printer__V_11_11;
    MR_Word mercury__pretty_printer__V_12_12;
    MR_Word mercury__pretty_printer__V_13_13;
    MR_Word mercury__pretty_printer__V_14_14;

    {
      mercury__pretty_printer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_8_8, 0) = ((MR_Box) (mercury__pretty_printer__Indent_4));
    }
    {
      mercury__pretty_printer__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_7_7, 1) = ((MR_Box) (mercury__pretty_printer__V_8_8));
    }
    {
      mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_10_10, 0) = ((MR_Box) (mercury__pretty_printer__Docs_5));
    }
    mercury__pretty_printer__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
    mercury__pretty_printer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[4]);
    mercury__pretty_printer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__pretty_printer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[5]);
    {
      mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 0) = ((MR_Box) (mercury__pretty_printer__V_10_10));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 1) = ((MR_Box) (mercury__pretty_printer__V_11_11));
    }
    {
      mercury__pretty_printer__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_6_6, 0) = ((MR_Box) (mercury__pretty_printer__V_7_7));
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_6_6, 1) = ((MR_Box) (mercury__pretty_printer__V_9_9));
    }
    {
      mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_6_6));
    }
    return mercury__pretty_printer__HeadVar__3_3;
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

/* :- end_module pretty_printer. */
