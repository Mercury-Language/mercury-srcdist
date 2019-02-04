/*
** Automatically generated from `term_to_xml.m'
** by the Mercury compiler,
** version DEV
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


/* :- module term_to_xml. */
/* :- implementation. */

/*
INIT mercury__term_to_xml__init
ENDINIT
*/

#include "term_to_xml.mih"


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
#include "pretty_printer.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_to_xml__list__pti_list_1__plain_term_to_xml__type_ctor_info_attr_from_source_0;

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_attr_0_0[2];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0;

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_0_0[1];

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_0[1];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_attr_0[1];

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_0[1];

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_attr_from_source_0_0[2];

static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_attr_from_source_0_0[2];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_attr_from_source_0_0;

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_from_source_0_0[1];

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_from_source_0[1];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_attr_from_source_0[1];

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_from_source_0[1];

static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_0;

static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_1;

static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_2;

static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_3;

static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_value_ordered_attr_source_0[4];

static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_name_ordered_attr_source_0[4];

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_source_0[4];

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_0[1];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_0;

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_1[2];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_1;

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_2[1];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_2;

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_0[1];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_1[1];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_2[1];

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_doctype_0[3];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_doctype_0[3];

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_doctype_0[3];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_0;

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_1;

static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1type_desc__type_ctor_info_type_desc_0;

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_2[2];

static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_dtd_generation_result_0_2[2];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_2;

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_3[1];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_3;

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_4[1];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_4;

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_0[2];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_1[1];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_2[1];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_3[1];

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_dtd_generation_result_0[4];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_dtd_generation_result_0[5];

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_dtd_generation_result_0[5];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_0;

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_1;

static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0;

static const MR_VA_TypeInfo_Struct4 mercury__term_to_xml____vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0;

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_element_mapping_0_2[1];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_2;

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_0[2];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_1[1];

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_element_mapping_0[2];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_element_mapping_0[3];

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_element_mapping_0[3];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_0;

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_dtd_0_1[1];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_1;

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_2;

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_0[2];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_1[1];

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_dtd_0[2];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_dtd_0[3];

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_dtd_0[3];

static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_0;

static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_1;

static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_value_ordered_maybe_format_0[2];

static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_name_ordered_maybe_format_0[2];

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_format_0[2];

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_functor_info_0_0[2];

static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_maybe_functor_info_0_0[2];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_0;

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_1;

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_0[1];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_1[1];

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_functor_info_0[2];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_functor_info_0[2];

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_functor_info_0[2];

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_stylesheet_0_0[2];

static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_maybe_stylesheet_0_0[2];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_0;

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_1;

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_0[1];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_1[1];

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_stylesheet_0[2];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_stylesheet_0[2];

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_stylesheet_0[2];

static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_0;

static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_xml_0;

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_0[3];

static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_xml_0_0[3];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_0;

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_1[1];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_1;

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_2[1];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_2;

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_3[1];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_3;

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_4[1];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_4;

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_5[1];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_5;

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_0[1];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_1[1];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_2[1];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_3[3];

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_xml_0[4];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_xml_0[6];

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_xml_0[6];

static const MR_ConstString mercury__term_to_xml__term_to_xml__type_class_id_var_names_xmlable_1[1];

static const MR_TypeClassMethod mercury__term_to_xml__term_to_xml__type_class_id_method_ids_xmlable_1[1];

static const MR_TypeClassId mercury__term_to_xml__term_to_xml__type_class_id_xmlable_1;

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____attr_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_from_source_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____attr_from_source_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_source_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____attr_source_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____doctype_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____doctype_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____dtd_generation_result_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____dtd_generation_result_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_mapping_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____element_mapping_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_pred_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____element_pred_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_dtd_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____maybe_dtd_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_format_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____maybe_format_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_functor_info_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____maybe_functor_info_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_stylesheet_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____maybe_stylesheet_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____xml_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____xml_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(
  MR_Word mercury__term_to_xml__Var_17,
  MR_Box mercury__term_to_xml__Var_18,
  MR_String mercury__term_to_xml__V_8_8,
  MR_Integer mercury__term_to_xml__V_9_9,
  MR_Integer mercury__term_to_xml__V_10_10,
  MR_Box mercury__term_to_xml__V_14_11,
  MR_Box * mercury__term_to_xml__V_15_12);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(
  MR_Word mercury__term_to_xml__Var_16,
  MR_Word mercury__term_to_xml__Var_17,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word * mercury__term_to_xml__HeadVar__3_3,
  MR_Word * mercury__term_to_xml__HeadVar__4_4);

static MR_bool MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(
  MR_Word mercury__term_to_xml__Var_20,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word * mercury__term_to_xml__HeadVar__3_3,
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
  MR_Word * mercury__term_to_xml__HeadVar__5_5);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word mercury__term_to_xml__Var_16,
  MR_Box mercury__term_to_xml__Var_17,
  MR_Word mercury__term_to_xml__Var_18,
  MR_Integer mercury__term_to_xml__Var_19,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Box mercury__term_to_xml__HeadVar__3_3,
  MR_Box * mercury__term_to_xml__HeadVar__4_4);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
  MR_Word mercury__term_to_xml__Var_24,
  MR_Box mercury__term_to_xml__Var_25,
  MR_Word mercury__term_to_xml__Var_26,
  MR_Integer mercury__term_to_xml__Var_27,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3,
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
  MR_Box mercury__term_to_xml__HeadVar__5_5,
  MR_Box * mercury__term_to_xml__HeadVar__6_6);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
  MR_Word mercury__term_to_xml__Var_24,
  MR_Box mercury__term_to_xml__Var_25,
  MR_Word mercury__term_to_xml__Var_26,
  MR_Integer mercury__term_to_xml__Var_27,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3,
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
  MR_Box mercury__term_to_xml__HeadVar__5_5,
  MR_Box * mercury__term_to_xml__HeadVar__6_6);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
  MR_Word mercury__term_to_xml__Var_24,
  MR_Box mercury__term_to_xml__Var_25,
  MR_Word mercury__term_to_xml__Var_26,
  MR_Integer mercury__term_to_xml__Var_27,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3,
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
  MR_Box mercury__term_to_xml__HeadVar__5_5,
  MR_Box * mercury__term_to_xml__HeadVar__6_6);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(
  MR_Word mercury__term_to_xml__Var_16,
  MR_Box mercury__term_to_xml__Var_17,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Box mercury__term_to_xml__HeadVar__3_3,
  MR_Box * mercury__term_to_xml__HeadVar__4_4);

static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(
  MR_Word mercury__term_to_xml__Var_12,
  MR_Word mercury__term_to_xml__Var_13,
  MR_Word mercury__term_to_xml__Var_14,
  MR_Word mercury__term_to_xml__Var_15,
  MR_Word mercury__term_to_xml__HeadVar__2_2);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(
  MR_Word mercury__term_to_xml__Var_12,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word * mercury__term_to_xml__HeadVar__3_3);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_55_44_32_56_93_95_48_4_p_in__list_0(
  MR_Word mercury__term_to_xml__Var_16,
  MR_Box mercury__term_to_xml__Var_17,
  MR_String mercury__term_to_xml__Var_18,
  MR_Word mercury__term_to_xml__Var_19,
  MR_Word mercury__term_to_xml__Var_20,
  MR_Word mercury__term_to_xml__Var_21,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Box mercury__term_to_xml__HeadVar__3_3,
  MR_Box * mercury__term_to_xml__HeadVar__4_4);

static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Word mercury__term_to_xml__Var_12,
  MR_Word mercury__term_to_xml__HeadVar__2_2);

static MR_Integer MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__term_to_xml__foldl_between_2__ho33_6_p_in__string_0(
  MR_String mercury__term_to_xml__V_8_8,
  MR_Integer mercury__term_to_xml__V_9_9,
  MR_Integer mercury__term_to_xml__V_10_10,
  MR_Word mercury__term_to_xml__V_14_11,
  MR_Word * mercury__term_to_xml__V_15_12);

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho25_2_f_in__list_0(
  MR_Word mercury__term_to_xml__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho23_2_f_in__list_0(
  MR_Word mercury__term_to_xml__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho22_2_f_in__list_0(
  MR_Word mercury__term_to_xml__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3);

static void MR_CALL 
mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word * mercury__term_to_xml__HeadVar__3_3);

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho8_2_f_in__list_0(
  MR_Word mercury__term_to_xml__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho3_2_f_in__list_0(
  MR_Word mercury__term_to_xml__HeadVar__2_2);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____list__list_1_1(
  MR_Word mercury__term_to_xml__TypeInfo_for_T_11,
  MR_Word mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2);

static MR_String MR_CALL 
mercury__term_to_xml__dtd_allowed_functors_regex_2_f_0(
  MR_Word mercury__term_to_xml__MakeElement_4,
  MR_Word mercury__term_to_xml__TypeDesc_5);

static void MR_CALL 
mercury__term_to_xml__write_dtd_entries_10_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_79,
  MR_Box mercury__term_to_xml__Stream_1,
  MR_Word mercury__term_to_xml__MakeElement_2,
  MR_Word mercury__term_to_xml__TypeDesc_3,
  MR_Word mercury__term_to_xml__HeadVar__4_4,
  MR_Word mercury__term_to_xml__MaybeFunctorList_5,
  MR_Word mercury__term_to_xml__MaybeArityList_6,
  MR_Word mercury__term_to_xml__ArgTypeListList_7,
  MR_Word mercury__term_to_xml__AttributeListList_8,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10);

static void MR_CALL 
mercury__term_to_xml__write_dtd_attlists_8_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_String mercury__term_to_xml__Element_10,
  MR_Word mercury__term_to_xml__AttrFromSources_11,
  MR_Word mercury__term_to_xml__MaybeFunctor_12,
  MR_Word mercury__term_to_xml__MaybeArity_13,
  MR_Word mercury__term_to_xml__TypeDesc_14,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_16,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_17);

static void MR_CALL 
mercury__term_to_xml__write_dtd_attlist_8_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_34,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_String mercury__term_to_xml__Element_10,
  MR_Word mercury__term_to_xml__MaybeFunctor_11,
  MR_Word mercury__term_to_xml__MaybeArity_12,
  MR_Word mercury__term_to_xml__TypeDesc_13,
  MR_Word mercury__term_to_xml__HeadVar__6_6,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20);

static void MR_CALL 
mercury__term_to_xml__write_dtd_types_6_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_29,
  MR_Box mercury__term_to_xml__Stream_1,
  MR_Word mercury__term_to_xml__MakeElement_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3,
  MR_Word mercury__term_to_xml__AlreadyDone_4,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_5,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_6);

static MR_Word MR_CALL 
mercury__term_to_xml__can_generate_dtd_for_types_4_f_0(
  MR_Word mercury__term_to_xml__MakeElement_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__Done_3,
  MR_Word mercury__term_to_xml__ElementsSoFar_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_char_4_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_14,
  MR_Box mercury__term_to_xml__Stream_5,
  MR_Char mercury__term_to_xml__Chr_6,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10);

static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_string_4_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_12,
  MR_Box mercury__term_to_xml__Stream_5,
  MR_String mercury__term_to_xml__Str_6,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_8,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_9);

static MR_bool MR_CALL 
mercury__term_to_xml__find_field_names_5_p_0(
  MR_Word mercury__term_to_xml__TypeDesc_6,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_String mercury__term_to_xml__Functor_9,
  MR_Integer mercury__term_to_xml__Arity_10,
  MR_Word * mercury__term_to_xml__MaybeFieldNames_11);

static MR_bool MR_CALL 
mercury__term_to_xml__is_array_2_p_0(
  MR_Word mercury__term_to_xml__TypeDesc_3,
  MR_Word * mercury__term_to_xml__ArgPseudoType_4);

static void MR_CALL 
mercury__term_to_xml__maybe_indent_5_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_13,
  MR_Box mercury__term_to_xml__Stream_6,
  MR_Word mercury__term_to_xml__Format_7,
  MR_Integer mercury__term_to_xml__Indent_8,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_10,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_11);

static void MR_CALL 
mercury__term_to_xml__maybe_nl_4_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_15,
  MR_Box mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_3,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_4);

static void MR_CALL 
mercury__term_to_xml__get_elements_and_args_7_p_0(
  MR_Word mercury__term_to_xml__MakeElement_8,
  MR_Word mercury__term_to_xml__TypeDesc_9,
  MR_Word * mercury__term_to_xml__Elements_10,
  MR_Word * mercury__term_to_xml__MaybeFunctors_11,
  MR_Word * mercury__term_to_xml__MaybeArities_12,
  MR_Word * mercury__term_to_xml__ArgTypeLists_13,
  MR_Word * mercury__term_to_xml__AttributeLists_14);

static void MR_CALL 
mercury__term_to_xml__mangle_char_3_p_0(
  MR_Char mercury__term_to_xml__Chr_4,
  MR_Word mercury__term_to_xml__PrevChrs_5,
  MR_Word * mercury__term_to_xml__HeadVar__3_3);

static MR_String MR_CALL 
mercury__term_to_xml__mangle_1_f_0(
  MR_String mercury__term_to_xml__Functor_3);

static MR_bool MR_CALL 
mercury__term_to_xml__is_primitive_type_2_p_0(
  MR_Word mercury__term_to_xml__TypeDesc_3,
  MR_String * mercury__term_to_xml__Element_4);

static void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static MR_Word MR_CALL 
mercury__term_to_xml__all_attr_sources_0_f_0(void);

static void MR_CALL 
mercury__term_to_xml__make_simple_element_4_p_0(
  MR_Word mercury__term_to_xml__TypeDesc_5,
  MR_Word mercury__term_to_xml__MaybeFunctorInfo_6,
  MR_String * mercury__term_to_xml__Element_7,
  MR_Word * mercury__term_to_xml__AttrFromSources_8);

static void MR_CALL 
mercury__term_to_xml__make_unique_element_4_p_0(
  MR_Word mercury__term_to_xml__TypeDesc_5,
  MR_Word mercury__term_to_xml__MaybeFunctorInfo_6,
  MR_String * mercury__term_to_xml__Element_7,
  MR_Word * mercury__term_to_xml__AttrFromSources_8);

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2(
  MR_Word mercury__term_to_xml__TypeInfo_for_T_33,
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_32,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_Word mercury__term_to_xml__NonCanon_10,
  MR_Box mercury__term_to_xml__Term_11,
  MR_Word mercury__term_to_xml__ElementMapping_12,
  MR_Word mercury__term_to_xml__MaybeDTD_13,
  MR_Word * mercury__term_to_xml__DTDResult_14,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_26,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_27);

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0(
  MR_Word mercury__term_to_xml__TypeInfo_for_T_33,
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_32,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_Word mercury__term_to_xml__NonCanon_10,
  MR_Box mercury__term_to_xml__Term_11,
  MR_Word mercury__term_to_xml__ElementMapping_12,
  MR_Word mercury__term_to_xml__MaybeDTD_13,
  MR_Word * mercury__term_to_xml__DTDResult_14,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_26,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_27);

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4);


static /* final */ const MR_Box mercury__term_to_xml_scalar_common_1[21][2];

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_2[1][6];

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_3[23][3];

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_4[1][4];

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_5[2][5];

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_6[1][7];




static /* final */ const MR_Box mercury__term_to_xml_scalar_common_1[21][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_attr_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[0]))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "field")),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "type")),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[11])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "arity")),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[11])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[9])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "functor")),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_2[1][6] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_functor_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_3[23][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_doc_general_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_doc_general_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__can_generate_dtd_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__can_generate_dtd_2_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_dtd_from_type_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_dtd_from_type_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_1_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_1_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_2_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_2_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_3_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_3_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_doctype_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_doctype_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_doctype_8_p_2_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_doctype_8_p_2_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__get_element_pred_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__get_element_pred_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_4[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_to_xml_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_5[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_to_xml_scalar_common_4[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_to_xml_scalar_common_4[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_functor_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__term_to_xml__list__pti_list_1__plain_term_to_xml__type_ctor_info_attr_from_source_0))
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
#include "uint.mh"
#include "version_array.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_to_xml__list__pti_list_1__plain_term_to_xml__type_ctor_info_attr_from_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0
  }
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_attr_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0 = {
  (MR_String) "attr",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_to_xml__term_to_xml__field_types_attr_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0
};

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_0_0
  }
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_attr_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0
};

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_attr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____attr_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____attr_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "attr",
  {     mercury__term_to_xml__term_to_xml__du_name_ordered_attr_0 },
  {     mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_attr_0
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_attr_from_source_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_attr_source_0
};

static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_attr_from_source_0_0[2] = {
  (MR_String) "attr_name",
  (MR_String) "attr_source"
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_attr_from_source_0_0 = {
  (MR_String) "attr_from_source",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_to_xml__term_to_xml__field_types_attr_from_source_0_0,
  mercury__term_to_xml__term_to_xml__field_names_attr_from_source_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_from_source_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_from_source_0_0
};

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_from_source_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_from_source_0_0
  }
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_attr_from_source_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_from_source_0_0
};

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_from_source_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____attr_from_source_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____attr_from_source_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "attr_from_source",
  {     mercury__term_to_xml__term_to_xml__du_name_ordered_attr_from_source_0 },
  {     mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_from_source_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_attr_from_source_0
};

static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_0 = {
  (MR_String) "functor",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_1 = {
  (MR_String) "field_name",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_2 = {
  (MR_String) "type_name",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_3 = {
  (MR_String) "arity",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_value_ordered_attr_source_0[4] = {
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_0,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_1,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_2,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_3
};

static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_name_ordered_attr_source_0[4] = {
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_3,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_1,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_0,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_2
};

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_source_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_attr_source_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term_to_xml____Unify____attr_source_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____attr_source_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "attr_source",
  {     mercury__term_to_xml__term_to_xml__enum_name_ordered_attr_source_0 },
  {     mercury__term_to_xml__term_to_xml__enum_value_ordered_attr_source_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_attr_source_0
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_0 = {
  (MR_String) "public",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_to_xml__term_to_xml__field_types_doctype_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_1 = {
  (MR_String) "public_system",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term_to_xml__term_to_xml__field_types_doctype_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_2 = {
  (MR_String) "system",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__term_to_xml__term_to_xml__field_types_doctype_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_0
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_1
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_2[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_2
};

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_doctype_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_2
  }
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_doctype_0[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_2
};

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_doctype_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_doctype_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____doctype_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____doctype_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "doctype",
  {     mercury__term_to_xml__term_to_xml__du_name_ordered_doctype_0 },
  {     mercury__term_to_xml__term_to_xml__du_ptag_ordered_doctype_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_doctype_0
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_0 = {
  (MR_String) "ok",
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

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_1 = {
  (MR_String) "multiple_functors_for_root",
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

static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1type_desc__type_ctor_info_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0
  }
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term_to_xml__list__ti_list_1type_desc__type_ctor_info_type_desc_0
};

static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_dtd_generation_result_0_2[2] = {
  (MR_String) "duplicate_element",
  (MR_String) "duplicate_types"
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_2 = {
  (MR_String) "duplicate_elements",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_2,
  mercury__term_to_xml__term_to_xml__field_names_dtd_generation_result_0_2,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_3 = {
  (MR_String) "unsupported_dtd_type",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_4 = {
  (MR_String) "type_not_ground",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_1
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_2
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_2[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_3
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_3[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_4
};

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_dtd_generation_result_0[4] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_3
  }
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_dtd_generation_result_0[5] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_2,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_4,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_3
};

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_dtd_generation_result_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_dtd_generation_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____dtd_generation_result_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____dtd_generation_result_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "dtd_generation_result",
  {     mercury__term_to_xml__term_to_xml__du_name_ordered_dtd_generation_result_0 },
  {     mercury__term_to_xml__term_to_xml__du_ptag_ordered_dtd_generation_result_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_dtd_generation_result_0
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_0 = {
  (MR_String) "simple",
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

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_1 = {
  (MR_String) "unique",
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

static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0
  }
};

static const MR_VA_TypeInfo_Struct4 mercury__term_to_xml____vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0,
    (MR_TypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_functor_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0
  }
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_element_mapping_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__term_to_xml____vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_2 = {
  (MR_String) "custom",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__term_to_xml__term_to_xml__field_types_element_mapping_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_1
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_2
};

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_element_mapping_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_1
  }
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_element_mapping_0[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_2,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_1
};

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_element_mapping_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_element_mapping_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____element_mapping_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____element_mapping_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "element_mapping",
  {     mercury__term_to_xml__term_to_xml__du_name_ordered_element_mapping_0 },
  {     mercury__term_to_xml__term_to_xml__du_ptag_ordered_element_mapping_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_element_mapping_0
};

const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_element_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term_to_xml____Unify____element_pred_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____element_pred_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "element_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__term_to_xml____vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_0 = {
  (MR_String) "embed_dtd",
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

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_dtd_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_doctype_0
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_1 = {
  (MR_String) "external_dtd",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term_to_xml__term_to_xml__field_types_maybe_dtd_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_2 = {
  (MR_String) "no_dtd",
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

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_2
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_1
};

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_dtd_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_1
  }
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_dtd_0[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_2
};

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_dtd_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_dtd_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____maybe_dtd_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____maybe_dtd_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "maybe_dtd",
  {     mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_dtd_0 },
  {     mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_dtd_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_maybe_dtd_0
};

static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_0 = {
  (MR_String) "format",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_1 = {
  (MR_String) "no_format",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_value_ordered_maybe_format_0[2] = {
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_0,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_1
};

static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_name_ordered_maybe_format_0[2] = {
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_0,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_1
};

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_format_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_format_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term_to_xml____Unify____maybe_format_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____maybe_format_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "maybe_format",
  {     mercury__term_to_xml__term_to_xml__enum_name_ordered_maybe_format_0 },
  {     mercury__term_to_xml__term_to_xml__enum_value_ordered_maybe_format_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_maybe_format_0
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_functor_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_maybe_functor_info_0_0[2] = {
  (MR_String) "functor_name",
  (MR_String) "functor_arity"
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_0 = {
  (MR_String) "du_functor",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_to_xml__term_to_xml__field_types_maybe_functor_info_0_0,
  mercury__term_to_xml__term_to_xml__field_names_maybe_functor_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_1 = {
  (MR_String) "non_du",
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

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_1
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_0
};

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_functor_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_1
  }
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_functor_info_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_1
};

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_functor_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_functor_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____maybe_functor_info_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____maybe_functor_info_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "maybe_functor_info",
  {     mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_functor_info_0 },
  {     mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_functor_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_maybe_functor_info_0
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_stylesheet_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_maybe_stylesheet_0_0[2] = {
  (MR_String) "stylesheet_type",
  (MR_String) "stylesheet_href"
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_0 = {
  (MR_String) "with_stylesheet",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_to_xml__term_to_xml__field_types_maybe_stylesheet_0_0,
  mercury__term_to_xml__term_to_xml__field_names_maybe_stylesheet_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_1 = {
  (MR_String) "no_stylesheet",
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

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_1
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_0
};

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_stylesheet_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_1
  }
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_stylesheet_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_0
};

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_stylesheet_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_stylesheet_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____maybe_stylesheet_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____maybe_stylesheet_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "maybe_stylesheet",
  {     mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_stylesheet_0 },
  {     mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_stylesheet_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_maybe_stylesheet_0
};

static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_attr_0
  }
};

static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_xml_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0
  }
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_0,
  (MR_PseudoTypeInfo) &mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_xml_0
};

static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_xml_0_0[3] = {
  (MR_String) "element_name",
  (MR_String) "attributes",
  (MR_String) "children"
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_0 = {
  (MR_String) "elem",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_to_xml__term_to_xml__field_types_xml_0_0,
  mercury__term_to_xml__term_to_xml__field_names_xml_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_1 = {
  (MR_String) "data",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term_to_xml__term_to_xml__field_types_xml_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_2 = {
  (MR_String) "cdata",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__term_to_xml__term_to_xml__field_types_xml_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_3 = {
  (MR_String) "comment",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mercury__term_to_xml__term_to_xml__field_types_xml_0_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_4 = {
  (MR_String) "entity",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__field_types_xml_0_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_5 = {
  (MR_String) "raw",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  mercury__term_to_xml__term_to_xml__field_types_xml_0_5,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_0
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_1
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_2[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_2
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_3[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_3,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_4,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_5
};

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_xml_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_2
  },
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_3
  }
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_xml_0[6] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_2,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_3,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_4,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_5
};

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_xml_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____xml_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____xml_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "xml",
  {     mercury__term_to_xml__term_to_xml__du_name_ordered_xml_0 },
  {     mercury__term_to_xml__term_to_xml__du_ptag_ordered_xml_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_xml_0
};

static const MR_ConstString mercury__term_to_xml__term_to_xml__type_class_id_var_names_xmlable_1[1] = {
  (MR_String) "T"
};

static const MR_TypeClassMethod mercury__term_to_xml__term_to_xml__type_class_id_method_ids_xmlable_1[1] = {
  {
    (MR_String) "to_xml",
    (MR_Integer) 2,
    mercury__private_builtin__MR_FUNCTION
  }
};

static const MR_TypeClassId mercury__term_to_xml__term_to_xml__type_class_id_xmlable_1 = {
  (MR_String) "term_to_xml",
  (MR_String) "xmlable",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__term_to_xml__term_to_xml__type_class_id_var_names_xmlable_1,
  mercury__term_to_xml__term_to_xml__type_class_id_method_ids_xmlable_1
};

const MR_TypeClassDeclStruct mercury__term_to_xml__term_to_xml__type_class_decl_xmlable_1 = {
  &mercury__term_to_xml__term_to_xml__type_class_id_xmlable_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    {
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____attr_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
    return mercury__term_to_xml__succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____attr_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3)
{
  {
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

    {
      mercury__term_to_xml____Compare____attr_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_from_source_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    {
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____attr_from_source_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
    return mercury__term_to_xml__succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____attr_from_source_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3)
{
  {
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

    {
      mercury__term_to_xml____Compare____attr_from_source_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_source_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    {
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____attr_source_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
    return mercury__term_to_xml__succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____attr_source_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3)
{
  {
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

    {
      mercury__term_to_xml____Compare____attr_source_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____doctype_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    {
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____doctype_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
    return mercury__term_to_xml__succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____doctype_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3)
{
  {
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

    {
      mercury__term_to_xml____Compare____doctype_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____dtd_generation_result_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    {
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____dtd_generation_result_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
    return mercury__term_to_xml__succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____dtd_generation_result_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3)
{
  {
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

    {
      mercury__term_to_xml____Compare____dtd_generation_result_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_mapping_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    {
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____element_mapping_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
    return mercury__term_to_xml__succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____element_mapping_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3)
{
  {
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

    {
      mercury__term_to_xml____Compare____element_mapping_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_pred_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    {
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____element_pred_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
    return mercury__term_to_xml__succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____element_pred_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3)
{
  {
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

    {
      mercury__term_to_xml____Compare____element_pred_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_dtd_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    {
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____maybe_dtd_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
    return mercury__term_to_xml__succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____maybe_dtd_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3)
{
  {
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

    {
      mercury__term_to_xml____Compare____maybe_dtd_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_format_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    {
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____maybe_format_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
    return mercury__term_to_xml__succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____maybe_format_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3)
{
  {
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

    {
      mercury__term_to_xml____Compare____maybe_format_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_functor_info_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    {
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____maybe_functor_info_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
    return mercury__term_to_xml__succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____maybe_functor_info_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3)
{
  {
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

    {
      mercury__term_to_xml____Compare____maybe_functor_info_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_stylesheet_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    {
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____maybe_stylesheet_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
    return mercury__term_to_xml__succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____maybe_stylesheet_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3)
{
  {
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

    {
      mercury__term_to_xml____Compare____maybe_stylesheet_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____xml_0_0_10001(
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    {
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____xml_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
    return mercury__term_to_xml__succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____xml_0_0_10001(
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box mercury__term_to_xml__wrapper_arg_3)
{
  {
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

    {
      mercury__term_to_xml____Compare____xml_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(
  MR_Word mercury__term_to_xml__Var_17,
  MR_Box mercury__term_to_xml__Var_18,
  MR_String mercury__term_to_xml__V_8_8,
  MR_Integer mercury__term_to_xml__V_9_9,
  MR_Integer mercury__term_to_xml__V_10_10,
  MR_Box mercury__term_to_xml__V_14_11,
  MR_Box * mercury__term_to_xml__V_15_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_9_9 < mercury__term_to_xml__V_10_10);
        MR_Integer mercury__term_to_xml__V_12_13;
        MR_Char mercury__term_to_xml__V_13_14;

        if (mercury__term_to_xml__succeeded)
          {
{
#define MR_PROC_LABEL mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__term_to_xml__V_8_8 ;
	Index =  mercury__term_to_xml__V_9_9 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_12_13  = NextIndex;
	 mercury__term_to_xml__V_13_14  = Ch;
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__term_to_xml__succeeded)
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_12_13 <= mercury__term_to_xml__V_10_10);
          }
        if (mercury__term_to_xml__succeeded)
          {
            MR_Box mercury__term_to_xml__V_16_15;

            {
              mercury__term_to_xml__write_xml_escaped_char_4_p_0(mercury__term_to_xml__Var_17, mercury__term_to_xml__Var_18, mercury__term_to_xml__V_13_14, mercury__term_to_xml__V_14_11, &mercury__term_to_xml__V_16_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__term_to_xml__next_value_of_V_9_9 = mercury__term_to_xml__V_12_13;
              MR_Box mercury__term_to_xml__next_value_of_V_14_11 = mercury__term_to_xml__V_16_15;

              mercury__term_to_xml__V_14_11 = mercury__term_to_xml__next_value_of_V_14_11;
              mercury__term_to_xml__V_9_9 = mercury__term_to_xml__next_value_of_V_9_9;
            }
            continue;
          }
        else
          *mercury__term_to_xml__V_15_12 = mercury__term_to_xml__V_14_11;
      }
      break;
    }
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(
  MR_Word mercury__term_to_xml__Var_16,
  MR_Word mercury__term_to_xml__Var_17,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word * mercury__term_to_xml__HeadVar__3_3,
  MR_Word * mercury__term_to_xml__HeadVar__4_4)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__term_to_xml__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
        MR_String mercury__term_to_xml__V_9_9;
        MR_Word mercury__term_to_xml__V_10_10;
        MR_Word mercury__term_to_xml__V_11_11;
        MR_Word mercury__term_to_xml__V_12_12;
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Var_16, (MR_Integer) 1)));
        MR_Box mercury__term_to_xml__conv2_V_9_9;
        MR_Box mercury__term_to_xml__conv1_V_11_11;

        {
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__Var_16), ((MR_Box) (mercury__term_to_xml__Var_17)), ((MR_Box) (mercury__term_to_xml__V_7_7)), &mercury__term_to_xml__conv2_V_9_9, &mercury__term_to_xml__conv1_V_11_11);
        }
        mercury__term_to_xml__V_9_9 = ((MR_String) mercury__term_to_xml__conv2_V_9_9);
        mercury__term_to_xml__V_11_11 = ((MR_Word) mercury__term_to_xml__conv1_V_11_11);
        {
          mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(mercury__term_to_xml__Var_16, mercury__term_to_xml__Var_17, mercury__term_to_xml__V_8_8, &mercury__term_to_xml__V_10_10, &mercury__term_to_xml__V_12_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__term_to_xml__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_9_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_10_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__term_to_xml__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_11_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_12_12));
        }
      }
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(
  MR_Word mercury__term_to_xml__Var_20,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word * mercury__term_to_xml__HeadVar__3_3,
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
  MR_Word * mercury__term_to_xml__HeadVar__5_5)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__term_to_xml__succeeded = MR_TRUE;
      }
    else
      {
        MR_Integer mercury__term_to_xml__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__term_to_xml__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
        MR_String mercury__term_to_xml__V_10_10;
        MR_Word mercury__term_to_xml__V_11_11;
        MR_Integer mercury__term_to_xml__V_12_12;
        MR_Word mercury__term_to_xml__V_13_13;
        MR_Word mercury__term_to_xml__V_14_14;
        MR_Word mercury__term_to_xml__V_15_15;

        {
          mercury__term_to_xml__succeeded = mercury__construct__get_functor_internal_5_p_0(mercury__term_to_xml__Var_20, mercury__term_to_xml__V_8_8, &mercury__term_to_xml__V_10_10, &mercury__term_to_xml__V_12_12, &mercury__term_to_xml__V_14_14);
        }
        if (mercury__term_to_xml__succeeded)
          {
            {
              mercury__term_to_xml__succeeded = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(mercury__term_to_xml__Var_20, mercury__term_to_xml__V_9_9, &mercury__term_to_xml__V_11_11, &mercury__term_to_xml__V_13_13, &mercury__term_to_xml__V_15_15);
            }
            if (mercury__term_to_xml__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__term_to_xml__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_10_10));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_11_11));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__term_to_xml__HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_12_12));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_13_13));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__term_to_xml__HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_14_14));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_15_15));
                }
                mercury__term_to_xml__succeeded = MR_TRUE;
              }
          }
      }
    return mercury__term_to_xml__succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word mercury__term_to_xml__Var_16,
  MR_Box mercury__term_to_xml__Var_17,
  MR_Word mercury__term_to_xml__Var_18,
  MR_Integer mercury__term_to_xml__Var_19,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Box mercury__term_to_xml__HeadVar__3_3,
  MR_Box * mercury__term_to_xml__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_to_xml__succeeded;

        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
        else
          {
            MR_Word mercury__term_to_xml__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__term_to_xml__V_15_13;

            {
              mercury__term_to_xml__write_xml_element_format_6_p_0(mercury__term_to_xml__Var_16, mercury__term_to_xml__Var_17, mercury__term_to_xml__Var_18, mercury__term_to_xml__Var_19, mercury__term_to_xml__V_10_9, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__V_15_13);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__term_to_xml__next_value_of_HeadVar__2_2 = mercury__term_to_xml__V_11_10;
              MR_Box mercury__term_to_xml__next_value_of_HeadVar__3_3 = mercury__term_to_xml__V_15_13;

              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__next_value_of_HeadVar__3_3;
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
  MR_Word mercury__term_to_xml__Var_24,
  MR_Box mercury__term_to_xml__Var_25,
  MR_Word mercury__term_to_xml__Var_26,
  MR_Integer mercury__term_to_xml__Var_27,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3,
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
  MR_Box mercury__term_to_xml__HeadVar__5_5,
  MR_Box * mercury__term_to_xml__HeadVar__6_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_to_xml__succeeded;

        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__term_to_xml__HeadVar__6_6 = mercury__term_to_xml__HeadVar__5_5;
            *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
          }
        else
          {
            MR_Word mercury__term_to_xml__V_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__V_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__term_to_xml__V_23_19;
            MR_Box mercury__term_to_xml__V_24_20;

            {
              mercury__term_to_xml__write_xml_element_univ_9_p_0(mercury__term_to_xml__Var_24, mercury__term_to_xml__Var_25, (MR_Integer) 0, mercury__term_to_xml__Var_26, mercury__term_to_xml__Var_27, mercury__term_to_xml__V_15_13, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__V_23_19, mercury__term_to_xml__HeadVar__5_5, &mercury__term_to_xml__V_24_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__term_to_xml__next_value_of_HeadVar__2_2 = mercury__term_to_xml__V_16_14;
              MR_Word mercury__term_to_xml__next_value_of_HeadVar__3_3 = mercury__term_to_xml__V_23_19;
              MR_Box mercury__term_to_xml__next_value_of_HeadVar__5_5 = mercury__term_to_xml__V_24_20;

              mercury__term_to_xml__HeadVar__5_5 = mercury__term_to_xml__next_value_of_HeadVar__5_5;
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__next_value_of_HeadVar__3_3;
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
  MR_Word mercury__term_to_xml__Var_24,
  MR_Box mercury__term_to_xml__Var_25,
  MR_Word mercury__term_to_xml__Var_26,
  MR_Integer mercury__term_to_xml__Var_27,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3,
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
  MR_Box mercury__term_to_xml__HeadVar__5_5,
  MR_Box * mercury__term_to_xml__HeadVar__6_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_to_xml__succeeded;

        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__term_to_xml__HeadVar__6_6 = mercury__term_to_xml__HeadVar__5_5;
            *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
          }
        else
          {
            MR_Word mercury__term_to_xml__V_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__V_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__term_to_xml__V_23_19;
            MR_Box mercury__term_to_xml__V_24_20;

            {
              mercury__term_to_xml__write_xml_element_univ_9_p_1(mercury__term_to_xml__Var_24, mercury__term_to_xml__Var_25, (MR_Integer) 1, mercury__term_to_xml__Var_26, mercury__term_to_xml__Var_27, mercury__term_to_xml__V_15_13, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__V_23_19, mercury__term_to_xml__HeadVar__5_5, &mercury__term_to_xml__V_24_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__term_to_xml__next_value_of_HeadVar__2_2 = mercury__term_to_xml__V_16_14;
              MR_Word mercury__term_to_xml__next_value_of_HeadVar__3_3 = mercury__term_to_xml__V_23_19;
              MR_Box mercury__term_to_xml__next_value_of_HeadVar__5_5 = mercury__term_to_xml__V_24_20;

              mercury__term_to_xml__HeadVar__5_5 = mercury__term_to_xml__next_value_of_HeadVar__5_5;
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__next_value_of_HeadVar__3_3;
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
  MR_Word mercury__term_to_xml__Var_24,
  MR_Box mercury__term_to_xml__Var_25,
  MR_Word mercury__term_to_xml__Var_26,
  MR_Integer mercury__term_to_xml__Var_27,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3,
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
  MR_Box mercury__term_to_xml__HeadVar__5_5,
  MR_Box * mercury__term_to_xml__HeadVar__6_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_to_xml__succeeded;

        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__term_to_xml__HeadVar__6_6 = mercury__term_to_xml__HeadVar__5_5;
            *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
          }
        else
          {
            MR_Word mercury__term_to_xml__V_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__V_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__term_to_xml__V_23_19;
            MR_Box mercury__term_to_xml__V_24_20;

            {
              mercury__term_to_xml__write_xml_element_univ_9_p_2(mercury__term_to_xml__Var_24, mercury__term_to_xml__Var_25, (MR_Integer) 2, mercury__term_to_xml__Var_26, mercury__term_to_xml__Var_27, mercury__term_to_xml__V_15_13, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__V_23_19, mercury__term_to_xml__HeadVar__5_5, &mercury__term_to_xml__V_24_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__term_to_xml__next_value_of_HeadVar__2_2 = mercury__term_to_xml__V_16_14;
              MR_Word mercury__term_to_xml__next_value_of_HeadVar__3_3 = mercury__term_to_xml__V_23_19;
              MR_Box mercury__term_to_xml__next_value_of_HeadVar__5_5 = mercury__term_to_xml__V_24_20;

              mercury__term_to_xml__HeadVar__5_5 = mercury__term_to_xml__next_value_of_HeadVar__5_5;
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__next_value_of_HeadVar__3_3;
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(
  MR_Word mercury__term_to_xml__Var_16,
  MR_Box mercury__term_to_xml__Var_17,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Box mercury__term_to_xml__HeadVar__3_3,
  MR_Box * mercury__term_to_xml__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_to_xml__succeeded;

        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
        else
          {
            MR_Word mercury__term_to_xml__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__term_to_xml__V_15_13;

            {
              mercury__term_to_xml__write_attribute_4_p_0(mercury__term_to_xml__Var_16, mercury__term_to_xml__Var_17, mercury__term_to_xml__V_10_9, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__V_15_13);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__term_to_xml__next_value_of_HeadVar__2_2 = mercury__term_to_xml__V_11_10;
              MR_Box mercury__term_to_xml__next_value_of_HeadVar__3_3 = mercury__term_to_xml__V_15_13;

              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__next_value_of_HeadVar__3_3;
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(
  MR_Word mercury__term_to_xml__Var_12,
  MR_Word mercury__term_to_xml__Var_13,
  MR_Word mercury__term_to_xml__Var_14,
  MR_Word mercury__term_to_xml__Var_15,
  MR_Word mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__HeadVar__3_3;

    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__term_to_xml__V_8_8;
        MR_Word mercury__term_to_xml__V_9_9;

        {
          mercury__term_to_xml__V_8_8 = mercury__term_to_xml__attr_from_source_to_maybe_attr_5_f_0(mercury__term_to_xml__Var_12, mercury__term_to_xml__Var_13, mercury__term_to_xml__Var_14, mercury__term_to_xml__Var_15, mercury__term_to_xml__V_6_6);
        }
        {
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__Var_12, mercury__term_to_xml__Var_13, mercury__term_to_xml__Var_14, mercury__term_to_xml__Var_15, mercury__term_to_xml__V_7_7);
        }
        {
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
        }
      }
    return mercury__term_to_xml__HeadVar__3_3;
  }
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(
  MR_Word mercury__term_to_xml__Var_12,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word * mercury__term_to_xml__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_to_xml__succeeded;

        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__term_to_xml__TypeCtorInfo_42_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word mercury__term_to_xml__TypeCtorInfo_43_53 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
            MR_Word mercury__term_to_xml__V_5_61;
            MR_Box mercury__term_to_xml__conv0_V_5_61;

            {
              mercury__term_to_xml__succeeded = mercury__tree234__search_3_p_0(mercury__term_to_xml__TypeCtorInfo_42_52, mercury__term_to_xml__TypeCtorInfo_43_53, mercury__term_to_xml__Var_12, ((MR_Box) (mercury__term_to_xml__V_6_6)), &mercury__term_to_xml__conv0_V_5_61);
            }
            if (mercury__term_to_xml__succeeded)
              {
                mercury__term_to_xml__V_5_61 = ((MR_Word) mercury__term_to_xml__conv0_V_5_61);
                mercury__term_to_xml__succeeded = MR_TRUE;
              }
            if (mercury__term_to_xml__succeeded)
              {
                MR_Word mercury__term_to_xml__V_9_9;

                {
                  mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(mercury__term_to_xml__Var_12, mercury__term_to_xml__V_7_7, &mercury__term_to_xml__V_9_9);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__term_to_xml__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_6_6));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
                }
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__term_to_xml__next_value_of_HeadVar__2_2 = mercury__term_to_xml__V_7_7;

                  mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_55_44_32_56_93_95_48_4_p_in__list_0(
  MR_Word mercury__term_to_xml__Var_16,
  MR_Box mercury__term_to_xml__Var_17,
  MR_String mercury__term_to_xml__Var_18,
  MR_Word mercury__term_to_xml__Var_19,
  MR_Word mercury__term_to_xml__Var_20,
  MR_Word mercury__term_to_xml__Var_21,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Box mercury__term_to_xml__HeadVar__3_3,
  MR_Box * mercury__term_to_xml__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_to_xml__succeeded;

        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
        else
          {
            MR_Word mercury__term_to_xml__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__term_to_xml__V_15_13;

            {
              mercury__term_to_xml__write_dtd_attlist_8_p_0(mercury__term_to_xml__Var_16, mercury__term_to_xml__Var_17, mercury__term_to_xml__Var_18, mercury__term_to_xml__Var_19, mercury__term_to_xml__Var_20, mercury__term_to_xml__Var_21, mercury__term_to_xml__V_10_9, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__V_15_13);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__term_to_xml__next_value_of_HeadVar__2_2 = mercury__term_to_xml__V_11_10;
              MR_Box mercury__term_to_xml__next_value_of_HeadVar__3_3 = mercury__term_to_xml__V_15_13;

              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__next_value_of_HeadVar__3_3;
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Word mercury__term_to_xml__Var_12,
  MR_Word mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__HeadVar__3_3;

    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
        MR_String mercury__term_to_xml__V_8_8;
        MR_Word mercury__term_to_xml__V_9_9;

        {
          mercury__term_to_xml__V_8_8 = mercury__term_to_xml__dtd_allowed_functors_regex_2_f_0(mercury__term_to_xml__Var_12, mercury__term_to_xml__V_6_6);
        }
        {
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(mercury__term_to_xml__Var_12, mercury__term_to_xml__V_7_7);
        }
        {
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
        }
      }
    return mercury__term_to_xml__HeadVar__3_3;
  }
}

static MR_Integer MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_p_2(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_Word mercury__term_to_xml__MakeElement_11,
  MR_Integer mercury__term_to_xml__IndentLevel_12,
  MR_Word mercury__term_to_xml__Args_13,
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__Var_18;

    {
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__Var_18, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
    }
  }
}

void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_p_1(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_Word mercury__term_to_xml__MakeElement_11,
  MR_Integer mercury__term_to_xml__IndentLevel_12,
  MR_Word mercury__term_to_xml__Args_13,
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__Var_17;

    {
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__Var_17, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
    }
  }
}

void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_Word mercury__term_to_xml__MakeElement_11,
  MR_Integer mercury__term_to_xml__IndentLevel_12,
  MR_Word mercury__term_to_xml__Args_13,
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__Var_16;

    {
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__Var_16, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__foldl_between_2__ho33_6_p_in__string_0(
  MR_String mercury__term_to_xml__V_8_8,
  MR_Integer mercury__term_to_xml__V_9_9,
  MR_Integer mercury__term_to_xml__V_10_10,
  MR_Word mercury__term_to_xml__V_14_11,
  MR_Word * mercury__term_to_xml__V_15_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_9_9 < mercury__term_to_xml__V_10_10);
        MR_Integer mercury__term_to_xml__V_12_13;
        MR_Char mercury__term_to_xml__V_13_14;

        if (mercury__term_to_xml__succeeded)
          {
{
#define MR_PROC_LABEL mercury__term_to_xml__foldl_between_2__ho33_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__term_to_xml__V_8_8 ;
	Index =  mercury__term_to_xml__V_9_9 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_12_13  = NextIndex;
	 mercury__term_to_xml__V_13_14  = Ch;
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__term_to_xml__succeeded)
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_12_13 <= mercury__term_to_xml__V_10_10);
          }
        if (mercury__term_to_xml__succeeded)
          {
            MR_Word mercury__term_to_xml__V_16_15;

            {
              mercury__term_to_xml__mangle_char_3_p_0(mercury__term_to_xml__V_13_14, mercury__term_to_xml__V_14_11, &mercury__term_to_xml__V_16_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__term_to_xml__next_value_of_V_9_9 = mercury__term_to_xml__V_12_13;
              MR_Word mercury__term_to_xml__next_value_of_V_14_11 = mercury__term_to_xml__V_16_15;

              mercury__term_to_xml__V_14_11 = mercury__term_to_xml__next_value_of_V_14_11;
              mercury__term_to_xml__V_9_9 = mercury__term_to_xml__next_value_of_V_9_9;
            }
            continue;
          }
        else
          *mercury__term_to_xml__V_15_12 = mercury__term_to_xml__V_14_11;
      }
      break;
    }
}

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho25_2_f_in__list_0(
  MR_Word mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__HeadVar__3_3;

    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__term_to_xml__V_8_8;
        MR_Word mercury__term_to_xml__V_9_9;

        {
          mercury__term_to_xml__V_8_8 = mercury__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_f_0(mercury__term_to_xml__V_6_6);
        }
        {
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho25_2_f_in__list_0(mercury__term_to_xml__V_7_7);
        }
        {
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
        }
      }
    return mercury__term_to_xml__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho23_2_f_in__list_0(
  MR_Word mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__HeadVar__3_3;

    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__term_to_xml__V_8_8;
        MR_Word mercury__term_to_xml__V_9_9;

        {
          mercury__term_to_xml__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_8_8, 0) = ((MR_Box) (mercury__term_to_xml__V_6_6));
        }
        {
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho23_2_f_in__list_0(mercury__term_to_xml__V_7_7);
        }
        {
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
        }
      }
    return mercury__term_to_xml__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho22_2_f_in__list_0(
  MR_Word mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__HeadVar__3_3;

    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Integer mercury__term_to_xml__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__term_to_xml__V_8_8;
        MR_Word mercury__term_to_xml__V_9_9;

        {
          mercury__term_to_xml__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_8_8, 0) = ((MR_Box) (mercury__term_to_xml__V_6_6));
        }
        {
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho22_2_f_in__list_0(mercury__term_to_xml__V_7_7);
        }
        {
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
        }
      }
    return mercury__term_to_xml__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__HeadVar__4_4;

    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
          }
        }
    else
      {
        MR_Word mercury__term_to_xml__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
        MR_String mercury__term_to_xml__Var_35 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

        if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
            }
          }
        else
          {
            MR_Integer mercury__term_to_xml__V_21_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__V_22_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__term_to_xml__V_23_25;
            MR_Word mercury__term_to_xml__V_24_26;

            {
              mercury__term_to_xml__V_23_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_23_25, 0) = ((MR_Box) (mercury__term_to_xml__Var_35));
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_23_25, 1) = ((MR_Box) (mercury__term_to_xml__V_21_23));
            }
            {
              mercury__term_to_xml__V_24_26 = mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(mercury__term_to_xml__Var_34, mercury__term_to_xml__V_22_24);
            }
            {
              mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__4_4, 0) = ((MR_Box) (mercury__term_to_xml__V_23_25));
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__4_4, 1) = ((MR_Box) (mercury__term_to_xml__V_24_26));
            }
          }
      }
    return mercury__term_to_xml__HeadVar__4_4;
  }
}

static void MR_CALL 
mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word * mercury__term_to_xml__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_to_xml__succeeded;

        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__term_to_xml__V_9_9;

            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_6_6)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__term_to_xml__succeeded)
              {
                mercury__term_to_xml__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_6_6, (MR_Integer) 0)));
                {
                  MR_Word mercury__term_to_xml__V_10_10;

                  {
                    mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__V_7_7, &mercury__term_to_xml__V_10_10);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__term_to_xml__HeadVar__3_3 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_9_9));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_10_10));
                  }
                }
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__term_to_xml__next_value_of_HeadVar__2_2 = mercury__term_to_xml__V_7_7;

                  mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho8_2_f_in__list_0(
  MR_Word mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__HeadVar__3_3;

    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__term_to_xml__V_8_8;
        MR_Word mercury__term_to_xml__V_9_9;

        {
          mercury__term_to_xml__V_8_8 = mercury__term_to_xml__map__ho25_2_f_in__list_0(mercury__term_to_xml__V_6_6);
        }
        {
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho8_2_f_in__list_0(mercury__term_to_xml__V_7_7);
        }
        {
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
        }
      }
    return mercury__term_to_xml__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho3_2_f_in__list_0(
  MR_Word mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__HeadVar__3_3;

    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__term_to_xml__V_8_8;
        MR_Word mercury__term_to_xml__V_9_9;

{
#define MR_PROC_LABEL mercury__term_to_xml__map__ho3_2_f_in__list_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_to_xml__V_6_6 ;
		{

    SUCCESS_INDICATOR = (S == NULL);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__term_to_xml__succeeded)
          mercury__term_to_xml__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            mercury__term_to_xml__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_8_8, 0) = ((MR_Box) (mercury__term_to_xml__V_6_6));
          }
        {
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho3_2_f_in__list_0(mercury__term_to_xml__V_7_7);
        }
        {
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
        }
      }
    return mercury__term_to_xml__HeadVar__3_3;
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____list__list_1_1(
  MR_Word mercury__term_to_xml__TypeInfo_for_T_11,
  MR_Word mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__term_to_xml__Var_6;
    MR_Box mercury__term_to_xml__Var_7;
    MR_Word mercury__term_to_xml__Var_8;

    if (mercury__term_to_xml__succeeded)
      {
        mercury__term_to_xml__Var_7 = (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0));
        mercury__term_to_xml__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
        (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)) = mercury__term_to_xml__Var_7;
        mercury__term_to_xml__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
        {
          mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_for_T_11, mercury__term_to_xml__Var_6, mercury__term_to_xml__Var_8);
        }
      }
    return mercury__term_to_xml__succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____xml_0_0(
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__CastX_102 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
    MR_Integer mercury__term_to_xml__CastY_103 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_102 == mercury__term_to_xml__CastY_103);
    if (mercury__term_to_xml__succeeded)
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mercury__term_to_xml__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mercury__term_to_xml__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
            MR_String mercury__term_to_xml__Var_117 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String mercury__term_to_xml__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mercury__term_to_xml__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__term_to_xml__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mercury__term_to_xml__Var_10;
                  MR_Integer mercury__term_to_xml__V_7_138;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__Var_117 ;
	S2 =  mercury__term_to_xml__Var_7 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_138  = Res;
}
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_138 < (MR_Integer) 0);
                  if (mercury__term_to_xml__succeeded)
                    mercury__term_to_xml__Var_10 = (MR_Integer) 1;
                  else
                    {
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_138 == (MR_Integer) 0);
                      if (mercury__term_to_xml__succeeded)
                        mercury__term_to_xml__Var_10 = (MR_Integer) 0;
                      else
                        mercury__term_to_xml__Var_10 = (MR_Integer) 2;
                    }
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_10 == (MR_Integer) 0);
                  mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
                  if (mercury__term_to_xml__succeeded)
                    *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__Var_10;
                  else
                    {
                      MR_Word mercury__term_to_xml__Var_11;
                      MR_Word mercury__term_to_xml__TypeInfo_110_110 = (MR_Word) &mercury__term_to_xml_scalar_common_1[5];

                      {
                        mercury__builtin__compare_3_p_0(mercury__term_to_xml__TypeInfo_110_110, &mercury__term_to_xml__Var_11, ((MR_Box) (mercury__term_to_xml__Var_116)), ((MR_Box) (mercury__term_to_xml__Var_8)));
                      }
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_11 == (MR_Integer) 0);
                      mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
                      if (mercury__term_to_xml__succeeded)
                        *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__Var_11;
                      else
                        {
                          MR_Word mercury__term_to_xml__TypeInfo_111_111 = (MR_Word) &mercury__term_to_xml_scalar_common_1[6];

                          {
                            mercury__builtin__compare_3_p_0(mercury__term_to_xml__TypeInfo_111_111, mercury__term_to_xml__HeadVar__1_1, ((MR_Box) (mercury__term_to_xml__Var_115)), ((MR_Box) (mercury__term_to_xml__Var_9)));
                          }
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mercury__term_to_xml__Var_114 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__term_to_xml__Var_37 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__term_to_xml__V_7_133;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__Var_114 ;
	S2 =  mercury__term_to_xml__Var_37 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_133  = Res;
}
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_133 < (MR_Integer) 0);
                  if (mercury__term_to_xml__succeeded)
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                  else
                    {
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_133 == (MR_Integer) 0);
                      if (mercury__term_to_xml__succeeded)
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    }
                }
                break;
              case (MR_Integer) 2:
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mercury__term_to_xml__Var_112 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String mercury__term_to_xml__Var_53 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__term_to_xml__V_7_123;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__Var_112 ;
	S2 =  mercury__term_to_xml__Var_53 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_123  = Res;
}
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_123 < (MR_Integer) 0);
                  if (mercury__term_to_xml__succeeded)
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                  else
                    {
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_123 == (MR_Integer) 0);
                      if (mercury__term_to_xml__succeeded)
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mercury__term_to_xml__Var_113 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String mercury__term_to_xml__Var_69 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mercury__term_to_xml__V_7_128;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__Var_113 ;
	S2 =  mercury__term_to_xml__Var_69 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_128  = Res;
}
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_128 < (MR_Integer) 0);
                          if (mercury__term_to_xml__succeeded)
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                          else
                            {
                              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_128 == (MR_Integer) 0);
                              if (mercury__term_to_xml__succeeded)
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String mercury__term_to_xml__Var_118 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String mercury__term_to_xml__Var_85 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mercury__term_to_xml__V_7_143;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__Var_118 ;
	S2 =  mercury__term_to_xml__Var_85 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_143  = Res;
}
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_143 < (MR_Integer) 0);
                          if (mercury__term_to_xml__succeeded)
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                          else
                            {
                              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_143 == (MR_Integer) 0);
                              if (mercury__term_to_xml__succeeded)
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String mercury__term_to_xml__Var_119 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_String mercury__term_to_xml__Var_101 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mercury__term_to_xml__V_7_148;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__Var_119 ;
	S2 =  mercury__term_to_xml__Var_101 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_148  = Res;
}
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_148 < (MR_Integer) 0);
                          if (mercury__term_to_xml__succeeded)
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                          else
                            {
                              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_148 == (MR_Integer) 0);
                              if (mercury__term_to_xml__succeeded)
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
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
}

MR_bool MR_CALL 
mercury__term_to_xml____Unify____xml_0_0(
  MR_Word mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__CastX_19 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
    MR_Integer mercury__term_to_xml__CastY_20 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_19 == mercury__term_to_xml__CastY_20);
    if (mercury__term_to_xml__succeeded)
      mercury__term_to_xml__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mercury__term_to_xml__TypeInfo_21_21;
            MR_Word mercury__term_to_xml__TypeInfo_22_22;
            MR_String mercury__term_to_xml__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__term_to_xml__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 2)));
            MR_String mercury__term_to_xml__Var_6;
            MR_Word mercury__term_to_xml__Var_7;
            MR_Word mercury__term_to_xml__Var_8;

            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (mercury__term_to_xml__succeeded)
              {
                mercury__term_to_xml__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
                mercury__term_to_xml__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
                mercury__term_to_xml__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 2)));
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_3, mercury__term_to_xml__Var_6) == 0);
                if (mercury__term_to_xml__succeeded)
                  {
                    mercury__term_to_xml__TypeInfo_21_21 = (MR_Word) &mercury__term_to_xml_scalar_common_1[5];
                    {
                      mercury__term_to_xml__succeeded = mercury__builtin__unify_2_p_0(mercury__term_to_xml__TypeInfo_21_21, ((MR_Box) (mercury__term_to_xml__Var_4)), ((MR_Box) (mercury__term_to_xml__Var_7)));
                    }
                    if (mercury__term_to_xml__succeeded)
                      {
                        mercury__term_to_xml__TypeInfo_22_22 = (MR_Word) &mercury__term_to_xml_scalar_common_1[6];
                        {
                          mercury__term_to_xml__succeeded = mercury__builtin__unify_2_p_0(mercury__term_to_xml__TypeInfo_22_22, ((MR_Box) (mercury__term_to_xml__Var_5)), ((MR_Box) (mercury__term_to_xml__Var_8)));
                        }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mercury__term_to_xml__Var_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__term_to_xml__Var_10;

            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__term_to_xml__succeeded)
              {
                mercury__term_to_xml__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_9, mercury__term_to_xml__Var_10) == 0);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mercury__term_to_xml__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__term_to_xml__Var_12;

            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__term_to_xml__succeeded)
              {
                mercury__term_to_xml__Var_12 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_11, mercury__term_to_xml__Var_12) == 0);
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mercury__term_to_xml__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mercury__term_to_xml__Var_14;

                mercury__term_to_xml__succeeded = ((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mercury__term_to_xml__succeeded)
                  {
                    mercury__term_to_xml__Var_14 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_13, mercury__term_to_xml__Var_14) == 0);
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String mercury__term_to_xml__Var_15 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mercury__term_to_xml__Var_16;

                mercury__term_to_xml__succeeded = ((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mercury__term_to_xml__succeeded)
                  {
                    mercury__term_to_xml__Var_16 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_15, mercury__term_to_xml__Var_16) == 0);
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String mercury__term_to_xml__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mercury__term_to_xml__Var_18;

                mercury__term_to_xml__succeeded = ((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (mercury__term_to_xml__succeeded)
                  {
                    mercury__term_to_xml__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_17, mercury__term_to_xml__Var_18) == 0);
                  }
              }
              break;
          }
          break;
      }
    return mercury__term_to_xml__succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____maybe_stylesheet_0_0(
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__CastX_13 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
    MR_Integer mercury__term_to_xml__CastY_14 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_13 == mercury__term_to_xml__CastY_14);
    if (mercury__term_to_xml__succeeded)
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_String mercury__term_to_xml__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
        MR_String mercury__term_to_xml__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

        if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_String mercury__term_to_xml__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
            MR_String mercury__term_to_xml__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__term_to_xml__Var_8;
            MR_Integer mercury__term_to_xml__V_7_22;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_stylesheet_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__Var_18 ;
	S2 =  mercury__term_to_xml__Var_6 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_22  = Res;
}
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_22 < (MR_Integer) 0);
            if (mercury__term_to_xml__succeeded)
              mercury__term_to_xml__Var_8 = (MR_Integer) 1;
            else
              {
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_22 == (MR_Integer) 0);
                if (mercury__term_to_xml__succeeded)
                  mercury__term_to_xml__Var_8 = (MR_Integer) 0;
                else
                  mercury__term_to_xml__Var_8 = (MR_Integer) 2;
              }
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_8 == (MR_Integer) 0);
            mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
            if (mercury__term_to_xml__succeeded)
              *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__Var_8;
            else
              {
                MR_Integer mercury__term_to_xml__V_7_27;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_stylesheet_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__Var_17 ;
	S2 =  mercury__term_to_xml__Var_7 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_27  = Res;
}
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_27 < (MR_Integer) 0);
                if (mercury__term_to_xml__succeeded)
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                else
                  {
                    mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_27 == (MR_Integer) 0);
                    if (mercury__term_to_xml__succeeded)
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_stylesheet_0_0(
  MR_Word mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__CastX_9 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
    MR_Integer mercury__term_to_xml__CastY_10 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_9 == mercury__term_to_xml__CastY_10);
    if (mercury__term_to_xml__succeeded)
      mercury__term_to_xml__succeeded = MR_TRUE;
    else
    if ((mercury__term_to_xml__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mercury__term_to_xml__CastX_7 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
        MR_Integer mercury__term_to_xml__CastY_8 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

        mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_8 == mercury__term_to_xml__CastX_7);
      }
    else
      {
        MR_String mercury__term_to_xml__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
        MR_String mercury__term_to_xml__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
        MR_String mercury__term_to_xml__Var_5;
        MR_String mercury__term_to_xml__Var_6;

        mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__term_to_xml__succeeded)
          {
            mercury__term_to_xml__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
            mercury__term_to_xml__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
            mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_3, mercury__term_to_xml__Var_5) == 0);
            if (mercury__term_to_xml__succeeded)
              mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_4, mercury__term_to_xml__Var_6) == 0);
          }
      }
    return mercury__term_to_xml__succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____maybe_functor_info_0_0(
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__CastX_13 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
    MR_Integer mercury__term_to_xml__CastY_14 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_13 == mercury__term_to_xml__CastY_14);
    if (mercury__term_to_xml__succeeded)
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Integer mercury__term_to_xml__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
        MR_String mercury__term_to_xml__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

        if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_String mercury__term_to_xml__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer mercury__term_to_xml__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__term_to_xml__Var_8;
            MR_Integer mercury__term_to_xml__V_7_22;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_functor_info_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__Var_18 ;
	S2 =  mercury__term_to_xml__Var_6 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_22  = Res;
}
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_22 < (MR_Integer) 0);
            if (mercury__term_to_xml__succeeded)
              mercury__term_to_xml__Var_8 = (MR_Integer) 1;
            else
              {
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_22 == (MR_Integer) 0);
                if (mercury__term_to_xml__succeeded)
                  mercury__term_to_xml__Var_8 = (MR_Integer) 0;
                else
                  mercury__term_to_xml__Var_8 = (MR_Integer) 2;
              }
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_8 == (MR_Integer) 0);
            mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
            if (mercury__term_to_xml__succeeded)
              *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__Var_8;
            else
              {
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_17 < mercury__term_to_xml__Var_7);
                if (mercury__term_to_xml__succeeded)
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                else
                  {
                    mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_17 == mercury__term_to_xml__Var_7);
                    if (mercury__term_to_xml__succeeded)
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_functor_info_0_0(
  MR_Word mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__CastX_9 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
    MR_Integer mercury__term_to_xml__CastY_10 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_9 == mercury__term_to_xml__CastY_10);
    if (mercury__term_to_xml__succeeded)
      mercury__term_to_xml__succeeded = MR_TRUE;
    else
    if ((mercury__term_to_xml__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mercury__term_to_xml__CastX_7 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
        MR_Integer mercury__term_to_xml__CastY_8 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

        mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_8 == mercury__term_to_xml__CastX_7);
      }
    else
      {
        MR_String mercury__term_to_xml__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__term_to_xml__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
        MR_String mercury__term_to_xml__Var_5;
        MR_Integer mercury__term_to_xml__Var_6;

        mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__term_to_xml__succeeded)
          {
            mercury__term_to_xml__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
            mercury__term_to_xml__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
            mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_3, mercury__term_to_xml__Var_5) == 0);
            if (mercury__term_to_xml__succeeded)
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_4 == mercury__term_to_xml__Var_6);
          }
      }
    return mercury__term_to_xml__succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____maybe_format_0_0(
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__Cast_HeadVar1_4 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
    MR_Integer mercury__term_to_xml__Cast_HeadVar2_5 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

    mercury__term_to_xml__succeeded = (mercury__term_to_xml__Cast_HeadVar1_4 < mercury__term_to_xml__Cast_HeadVar2_5);
    if (mercury__term_to_xml__succeeded)
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Cast_HeadVar1_4 == mercury__term_to_xml__Cast_HeadVar2_5);
        if (mercury__term_to_xml__succeeded)
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_format_0_0(
  MR_Word mercury__term_to_xml__HeadVar__2_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__HeadVar__2_1 == mercury__term_to_xml__HeadVar__2_2);

    return mercury__term_to_xml__succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____maybe_dtd_0_0(
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__CastX_10 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
    MR_Integer mercury__term_to_xml__CastY_11 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_10 == mercury__term_to_xml__CastY_11);
    if (mercury__term_to_xml__succeeded)
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__term_to_xml__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__term_to_xml__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mercury__term_to_xml__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__term_to_xml____Compare____doctype_0_0(mercury__term_to_xml__HeadVar__1_1, mercury__term_to_xml__Var_13, mercury__term_to_xml__Var_7);
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
mercury__term_to_xml____Unify____maybe_dtd_0_0(
  MR_Word mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__CastX_9 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
    MR_Integer mercury__term_to_xml__CastY_10 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_9 == mercury__term_to_xml__CastY_10);
    if (mercury__term_to_xml__succeeded)
      mercury__term_to_xml__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__term_to_xml__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__term_to_xml__CastX_3 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
                MR_Integer mercury__term_to_xml__CastY_4 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

                mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_4 == mercury__term_to_xml__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mercury__term_to_xml__CastX_7 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
                MR_Integer mercury__term_to_xml__CastY_8 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

                mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_8 == mercury__term_to_xml__CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__term_to_xml__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__Var_6;

            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__term_to_xml__succeeded)
              {
                mercury__term_to_xml__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
                {
                  mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____doctype_0_0(mercury__term_to_xml__Var_5, mercury__term_to_xml__Var_6);
                }
              }
          }
          break;
      }
    return mercury__term_to_xml__succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____element_pred_0_0(
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__TypeInfo_6_6 = (MR_Word) &mercury__term_to_xml_scalar_common_2[0];
    MR_Word mercury__term_to_xml__Cast_HeadVar1_4 = mercury__term_to_xml__HeadVar__2_2;
    MR_Word mercury__term_to_xml__Cast_HeadVar2_5 = mercury__term_to_xml__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0(mercury__term_to_xml__TypeInfo_6_6, mercury__term_to_xml__HeadVar__1_1, ((MR_Box) (mercury__term_to_xml__Cast_HeadVar1_4)), ((MR_Box) (mercury__term_to_xml__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_pred_0_0(
  MR_Word mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__Cast_HeadVar1_3 = mercury__term_to_xml__HeadVar__1_1;
    MR_Word mercury__term_to_xml__Cast_HeadVar2_4 = mercury__term_to_xml__HeadVar__2_2;

    {
      mercury__term_to_xml__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__term_to_xml__Cast_HeadVar1_3, (MR_Word) mercury__term_to_xml__Cast_HeadVar2_4);
    }
    return mercury__term_to_xml__succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____element_mapping_0_0(
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__CastX_10 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
    MR_Integer mercury__term_to_xml__CastY_11 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_10 == mercury__term_to_xml__CastY_11);
    if (mercury__term_to_xml__succeeded)
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__term_to_xml__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__term_to_xml__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mercury__term_to_xml__TypeInfo_12_12 = (MR_Word) &mercury__term_to_xml_scalar_common_2[0];
                  MR_Word mercury__term_to_xml__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0(mercury__term_to_xml__TypeInfo_12_12, mercury__term_to_xml__HeadVar__1_1, ((MR_Box) (mercury__term_to_xml__Var_13)), ((MR_Box) (mercury__term_to_xml__Var_9)));
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
mercury__term_to_xml____Unify____element_mapping_0_0(
  MR_Word mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__CastX_9 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
    MR_Integer mercury__term_to_xml__CastY_10 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_9 == mercury__term_to_xml__CastY_10);
    if (mercury__term_to_xml__succeeded)
      mercury__term_to_xml__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__term_to_xml__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__term_to_xml__CastX_3 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
                MR_Integer mercury__term_to_xml__CastY_4 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

                mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_4 == mercury__term_to_xml__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mercury__term_to_xml__CastX_5 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
                MR_Integer mercury__term_to_xml__CastY_6 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

                mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_6 == mercury__term_to_xml__CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__term_to_xml__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__Var_8;

            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__term_to_xml__succeeded)
              {
                mercury__term_to_xml__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
                {
                  mercury__term_to_xml__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__term_to_xml__Var_7, (MR_Word) mercury__term_to_xml__Var_8);
                }
              }
          }
          break;
      }
    return mercury__term_to_xml__succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____dtd_generation_result_0_0(
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__CastX_45 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
    MR_Integer mercury__term_to_xml__CastY_46 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_45 == mercury__term_to_xml__CastY_46);
    if (mercury__term_to_xml__succeeded)
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__term_to_xml__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__term_to_xml__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
            MR_String mercury__term_to_xml__Var_52 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__term_to_xml__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mercury__term_to_xml__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__term_to_xml__Var_20;
                  MR_Integer mercury__term_to_xml__V_7_58;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____dtd_generation_result_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__Var_52 ;
	S2 =  mercury__term_to_xml__Var_18 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_58  = Res;
}
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_58 < (MR_Integer) 0);
                  if (mercury__term_to_xml__succeeded)
                    mercury__term_to_xml__Var_20 = (MR_Integer) 1;
                  else
                    {
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_58 == (MR_Integer) 0);
                      if (mercury__term_to_xml__succeeded)
                        mercury__term_to_xml__Var_20 = (MR_Integer) 0;
                      else
                        mercury__term_to_xml__Var_20 = (MR_Integer) 2;
                    }
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_20 == (MR_Integer) 0);
                  mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
                  if (mercury__term_to_xml__succeeded)
                    *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__Var_20;
                  else
                    {
                      MR_Word mercury__term_to_xml__TypeInfo_50_50 = (MR_Word) &mercury__term_to_xml_scalar_common_1[4];

                      {
                        mercury__builtin__compare_3_p_0(mercury__term_to_xml__TypeInfo_50_50, mercury__term_to_xml__HeadVar__1_1, ((MR_Box) (mercury__term_to_xml__Var_51)), ((MR_Box) (mercury__term_to_xml__Var_19)));
                      }
                    }
                }
                break;
              case (MR_Integer) 2:
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__term_to_xml__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__term_to_xml__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__type_desc____Compare____type_desc_0_0(mercury__term_to_xml__HeadVar__1_1, mercury__term_to_xml__Var_54, mercury__term_to_xml__Var_33);
                  }
                }
                break;
              case (MR_Integer) 3:
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word mercury__term_to_xml__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word mercury__term_to_xml__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__type_desc____Compare____pseudo_type_desc_0_0(mercury__term_to_xml__HeadVar__1_1, mercury__term_to_xml__Var_53, mercury__term_to_xml__Var_44);
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
mercury__term_to_xml____Unify____dtd_generation_result_0_0(
  MR_Word mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__CastX_15 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
    MR_Integer mercury__term_to_xml__CastY_16 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_15 == mercury__term_to_xml__CastY_16);
    if (mercury__term_to_xml__succeeded)
      mercury__term_to_xml__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__term_to_xml__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__term_to_xml__CastX_3 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
                MR_Integer mercury__term_to_xml__CastY_4 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

                mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_4 == mercury__term_to_xml__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mercury__term_to_xml__CastX_5 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
                MR_Integer mercury__term_to_xml__CastY_6 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

                mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_6 == mercury__term_to_xml__CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__term_to_xml__TypeInfo_17_17;
            MR_String mercury__term_to_xml__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
            MR_String mercury__term_to_xml__Var_9;
            MR_Word mercury__term_to_xml__Var_10;

            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__term_to_xml__succeeded)
              {
                mercury__term_to_xml__Var_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
                mercury__term_to_xml__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_7, mercury__term_to_xml__Var_9) == 0);
                if (mercury__term_to_xml__succeeded)
                  {
                    mercury__term_to_xml__TypeInfo_17_17 = (MR_Word) &mercury__term_to_xml_scalar_common_1[4];
                    {
                      mercury__term_to_xml__succeeded = mercury__builtin__unify_2_p_0(mercury__term_to_xml__TypeInfo_17_17, ((MR_Box) (mercury__term_to_xml__Var_8)), ((MR_Box) (mercury__term_to_xml__Var_10)));
                    }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__term_to_xml__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__Var_12;

            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__term_to_xml__succeeded)
              {
                mercury__term_to_xml__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
                {
                  mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__Var_11, mercury__term_to_xml__Var_12);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word mercury__term_to_xml__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__Var_14;

            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (mercury__term_to_xml__succeeded)
              {
                mercury__term_to_xml__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
                {
                  mercury__term_to_xml__succeeded = mercury__type_desc____Unify____pseudo_type_desc_0_0(mercury__term_to_xml__Var_13, mercury__term_to_xml__Var_14);
                }
              }
          }
          break;
      }
    return mercury__term_to_xml__succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____doctype_0_0(
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__CastX_29 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
    MR_Integer mercury__term_to_xml__CastY_30 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_29 == mercury__term_to_xml__CastY_30);
    if (mercury__term_to_xml__succeeded)
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String mercury__term_to_xml__Var_35 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String mercury__term_to_xml__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__term_to_xml__V_7_42;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__Var_35 ;
	S2 =  mercury__term_to_xml__Var_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_42  = Res;
}
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_42 < (MR_Integer) 0);
                  if (mercury__term_to_xml__succeeded)
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                  else
                    {
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_42 == (MR_Integer) 0);
                      if (mercury__term_to_xml__succeeded)
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                    }
                }
                break;
              case (MR_Integer) 1:
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mercury__term_to_xml__Var_36 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
            MR_String mercury__term_to_xml__Var_37 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__term_to_xml__Var_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String mercury__term_to_xml__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__term_to_xml__Var_18;
                  MR_Integer mercury__term_to_xml__V_7_47;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__Var_37 ;
	S2 =  mercury__term_to_xml__Var_16 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_47  = Res;
}
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_47 < (MR_Integer) 0);
                  if (mercury__term_to_xml__succeeded)
                    mercury__term_to_xml__Var_18 = (MR_Integer) 1;
                  else
                    {
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_47 == (MR_Integer) 0);
                      if (mercury__term_to_xml__succeeded)
                        mercury__term_to_xml__Var_18 = (MR_Integer) 0;
                      else
                        mercury__term_to_xml__Var_18 = (MR_Integer) 2;
                    }
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_18 == (MR_Integer) 0);
                  mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
                  if (mercury__term_to_xml__succeeded)
                    *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__Var_18;
                  else
                    {
                      MR_Integer mercury__term_to_xml__V_7_52;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__Var_36 ;
	S2 =  mercury__term_to_xml__Var_17 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_52  = Res;
}
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_52 < (MR_Integer) 0);
                      if (mercury__term_to_xml__succeeded)
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                      else
                        {
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_52 == (MR_Integer) 0);
                          if (mercury__term_to_xml__succeeded)
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mercury__term_to_xml__Var_38 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String mercury__term_to_xml__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__term_to_xml__V_7_57;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__Var_38 ;
	S2 =  mercury__term_to_xml__Var_28 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_57  = Res;
}
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_57 < (MR_Integer) 0);
                  if (mercury__term_to_xml__succeeded)
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
                  else
                    {
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_57 == (MR_Integer) 0);
                      if (mercury__term_to_xml__succeeded)
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
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
mercury__term_to_xml____Unify____doctype_0_0(
  MR_Word mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__CastX_11 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
    MR_Integer mercury__term_to_xml__CastY_12 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_11 == mercury__term_to_xml__CastY_12);
    if (mercury__term_to_xml__succeeded)
      mercury__term_to_xml__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String mercury__term_to_xml__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__term_to_xml__Var_4;

            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (mercury__term_to_xml__succeeded)
              {
                mercury__term_to_xml__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_3, mercury__term_to_xml__Var_4) == 0);
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mercury__term_to_xml__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__term_to_xml__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
            MR_String mercury__term_to_xml__Var_7;
            MR_String mercury__term_to_xml__Var_8;

            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__term_to_xml__succeeded)
              {
                mercury__term_to_xml__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
                mercury__term_to_xml__Var_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_5, mercury__term_to_xml__Var_7) == 0);
                if (mercury__term_to_xml__succeeded)
                  mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_6, mercury__term_to_xml__Var_8) == 0);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mercury__term_to_xml__Var_9 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__term_to_xml__Var_10;

            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__term_to_xml__succeeded)
              {
                mercury__term_to_xml__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_9, mercury__term_to_xml__Var_10) == 0);
              }
          }
          break;
      }
    return mercury__term_to_xml__succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____attr_source_0_0(
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__Cast_HeadVar1_4 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
    MR_Integer mercury__term_to_xml__Cast_HeadVar2_5 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

    mercury__term_to_xml__succeeded = (mercury__term_to_xml__Cast_HeadVar1_4 < mercury__term_to_xml__Cast_HeadVar2_5);
    if (mercury__term_to_xml__succeeded)
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Cast_HeadVar1_4 == mercury__term_to_xml__Cast_HeadVar2_5);
        if (mercury__term_to_xml__succeeded)
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_source_0_0(
  MR_Word mercury__term_to_xml__HeadVar__2_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__HeadVar__2_1 == mercury__term_to_xml__HeadVar__2_2);

    return mercury__term_to_xml__succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____attr_from_source_0_0(
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__CastX_9 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
    MR_Integer mercury__term_to_xml__CastY_10 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_9 == mercury__term_to_xml__CastY_10);
    if (mercury__term_to_xml__succeeded)
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String mercury__term_to_xml__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__term_to_xml__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
        MR_String mercury__term_to_xml__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__term_to_xml__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__term_to_xml__Var_8;
        MR_Integer mercury__term_to_xml__V_7_18;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_from_source_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__Var_4 ;
	S2 =  mercury__term_to_xml__Var_6 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_18  = Res;
}
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_18 < (MR_Integer) 0);
        if (mercury__term_to_xml__succeeded)
          mercury__term_to_xml__Var_8 = (MR_Integer) 1;
        else
          {
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_18 == (MR_Integer) 0);
            if (mercury__term_to_xml__succeeded)
              mercury__term_to_xml__Var_8 = (MR_Integer) 0;
            else
              mercury__term_to_xml__Var_8 = (MR_Integer) 2;
          }
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_8 == (MR_Integer) 0);
        mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
        if (mercury__term_to_xml__succeeded)
          *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__Var_8;
        else
          {
            MR_Integer mercury__term_to_xml__Var_13 = (MR_Integer) mercury__term_to_xml__Var_5;
            MR_Integer mercury__term_to_xml__Var_14 = (MR_Integer) mercury__term_to_xml__Var_7;

            mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_13 < mercury__term_to_xml__Var_14);
            if (mercury__term_to_xml__succeeded)
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
            else
              {
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_13 == mercury__term_to_xml__Var_14);
                if (mercury__term_to_xml__succeeded)
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
                else
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_from_source_0_0(
  MR_Word mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__CastX_7 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
    MR_Integer mercury__term_to_xml__CastY_8 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_7 == mercury__term_to_xml__CastY_8);
    if (mercury__term_to_xml__succeeded)
      mercury__term_to_xml__succeeded = MR_TRUE;
    else
      {
        MR_String mercury__term_to_xml__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__term_to_xml__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
        MR_String mercury__term_to_xml__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__term_to_xml__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));

        mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_3, mercury__term_to_xml__Var_5) == 0);
        if (mercury__term_to_xml__succeeded)
          mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_4 == mercury__term_to_xml__Var_6);
      }
    return mercury__term_to_xml__succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____attr_0_0(
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__CastX_9 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
    MR_Integer mercury__term_to_xml__CastY_10 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_9 == mercury__term_to_xml__CastY_10);
    if (mercury__term_to_xml__succeeded)
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String mercury__term_to_xml__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
        MR_String mercury__term_to_xml__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
        MR_String mercury__term_to_xml__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
        MR_String mercury__term_to_xml__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__term_to_xml__Var_8;
        MR_Integer mercury__term_to_xml__V_7_16;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__Var_4 ;
	S2 =  mercury__term_to_xml__Var_6 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_16  = Res;
}
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_16 < (MR_Integer) 0);
        if (mercury__term_to_xml__succeeded)
          mercury__term_to_xml__Var_8 = (MR_Integer) 1;
        else
          {
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_16 == (MR_Integer) 0);
            if (mercury__term_to_xml__succeeded)
              mercury__term_to_xml__Var_8 = (MR_Integer) 0;
            else
              mercury__term_to_xml__Var_8 = (MR_Integer) 2;
          }
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_8 == (MR_Integer) 0);
        mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
        if (mercury__term_to_xml__succeeded)
          *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__Var_8;
        else
          {
            MR_Integer mercury__term_to_xml__V_7_21;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__Var_5 ;
	S2 =  mercury__term_to_xml__Var_7 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_21  = Res;
}
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_21 < (MR_Integer) 0);
            if (mercury__term_to_xml__succeeded)
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
            else
              {
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_21 == (MR_Integer) 0);
                if (mercury__term_to_xml__succeeded)
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
                else
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_0_0(
  MR_Word mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__CastX_7 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
    MR_Integer mercury__term_to_xml__CastY_8 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_7 == mercury__term_to_xml__CastY_8);
    if (mercury__term_to_xml__succeeded)
      mercury__term_to_xml__succeeded = MR_TRUE;
    else
      {
        MR_String mercury__term_to_xml__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
        MR_String mercury__term_to_xml__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
        MR_String mercury__term_to_xml__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
        MR_String mercury__term_to_xml__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));

        mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_3, mercury__term_to_xml__Var_5) == 0);
        if (mercury__term_to_xml__succeeded)
          mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_4, mercury__term_to_xml__Var_6) == 0);
      }
    return mercury__term_to_xml__succeeded;
  }
}

MR_Word MR_CALL 
mercury__term_to_xml__to_xml_1_f_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_xmlable_3,
  MR_Box mercury__term_to_xml__HeadVar__1_1)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__HeadVar__2_2;
    MR_Box MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_xmlable_3, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box mercury__term_to_xml__conv1_HeadVar__2_2;

    {
      mercury__term_to_xml__conv1_HeadVar__2_2 = mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_xmlable_3), mercury__term_to_xml__HeadVar__1_1);
    }
    mercury__term_to_xml__HeadVar__2_2 = ((MR_Word) mercury__term_to_xml__conv1_HeadVar__2_2);
    return mercury__term_to_xml__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
mercury__term_to_xml__dtd_allowed_functors_regex_2_f_0(
  MR_Word mercury__term_to_xml__MakeElement_4,
  MR_Word mercury__term_to_xml__TypeDesc_5)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_String mercury__term_to_xml__Regex_6;
    MR_Word mercury__term_to_xml__Elements_7;
    MR_String mercury__term_to_xml__ElementsStr_12;
    MR_Word mercury__term_to_xml__Var_8;
    MR_Word mercury__term_to_xml__Var_9;
    MR_Word mercury__term_to_xml__Var_10;
    MR_Word mercury__term_to_xml__Var_11;
    MR_Word mercury__term_to_xml__TypeCtorInfo_19_19;
    MR_Integer mercury__term_to_xml__Var_14;

    {
      mercury__term_to_xml__get_elements_and_args_7_p_0(mercury__term_to_xml__MakeElement_4, mercury__term_to_xml__TypeDesc_5, &mercury__term_to_xml__Elements_7, &mercury__term_to_xml__Var_8, &mercury__term_to_xml__Var_9, &mercury__term_to_xml__Var_10, &mercury__term_to_xml__Var_11);
    }
    {
      mercury__term_to_xml__ElementsStr_12 = mercury__string__join_list_2_f_0((MR_String) "|", mercury__term_to_xml__Elements_7);
    }
    mercury__term_to_xml__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__length_acc_3_p_0(mercury__term_to_xml__TypeCtorInfo_19_19, mercury__term_to_xml__Elements_7, (MR_Integer) 0, &mercury__term_to_xml__Var_14);
    }
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_14 > (MR_Integer) 1);
    if (mercury__term_to_xml__succeeded)
      {
        MR_String mercury__term_to_xml__Var_17;

        {
          mercury__string__append_3_p_2(mercury__term_to_xml__ElementsStr_12, (MR_String) ")", &mercury__term_to_xml__Var_17);
        }
        {
          mercury__string__append_3_p_2((MR_String) "(", mercury__term_to_xml__Var_17, &mercury__term_to_xml__Regex_6);
        }
      }
    else
      mercury__term_to_xml__Regex_6 = mercury__term_to_xml__ElementsStr_12;
    return mercury__term_to_xml__Regex_6;
  }
}

static void MR_CALL 
mercury__term_to_xml__write_dtd_entries_10_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_79,
  MR_Box mercury__term_to_xml__Stream_1,
  MR_Word mercury__term_to_xml__MakeElement_2,
  MR_Word mercury__term_to_xml__TypeDesc_3,
  MR_Word mercury__term_to_xml__HeadVar__4_4,
  MR_Word mercury__term_to_xml__MaybeFunctorList_5,
  MR_Word mercury__term_to_xml__MaybeArityList_6,
  MR_Word mercury__term_to_xml__ArgTypeListList_7,
  MR_Word mercury__term_to_xml__AttributeListList_8,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_to_xml__succeeded;

        if ((mercury__term_to_xml__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__term_to_xml__STATE_VARIABLE_State_10 = mercury__term_to_xml__STATE_VARIABLE_State_0_9;
        else
          {
            MR_Word mercury__term_to_xml__TypeInfo_80_80 = (MR_Word) &mercury__term_to_xml_scalar_common_1[1];
            MR_Word mercury__term_to_xml__TypeInfo_81_81;
            MR_Word mercury__term_to_xml__TypeInfo_82_82;
            MR_Word mercury__term_to_xml__TypeInfo_83_83;
            MR_String mercury__term_to_xml__Element_24 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__Elements_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word mercury__term_to_xml__MaybeFunctor_31;
            MR_Word mercury__term_to_xml__MaybeFunctors_32;
            MR_Word mercury__term_to_xml__MaybeArity_33;
            MR_Word mercury__term_to_xml__MaybeArities_34;
            MR_Word mercury__term_to_xml__ArgTypeList_35;
            MR_Word mercury__term_to_xml__ArgTypeLists_36;
            MR_Word mercury__term_to_xml__AttributeList_37;
            MR_Word mercury__term_to_xml__AttributeLists_38;
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_52_52;
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_53_53;
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_55_55;
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_57_57;
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_75_75;
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_77_77;
            MR_Box mercury__term_to_xml__conv0_MaybeFunctor_31;
            MR_Box mercury__term_to_xml__conv1_MaybeArity_33;
            MR_Box mercury__term_to_xml__conv2_ArgTypeList_35;
            MR_Box mercury__term_to_xml__conv3_AttributeList_37;
            void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_String mercury__term_to_xml__Var_39;
            void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__term_to_xml__conv0_MaybeFunctor_31 = mercury__list__det_head_1_f_0(mercury__term_to_xml__TypeInfo_80_80, mercury__term_to_xml__MaybeFunctorList_5);
            }
            mercury__term_to_xml__MaybeFunctor_31 = ((MR_Word) mercury__term_to_xml__conv0_MaybeFunctor_31);
            {
              mercury__term_to_xml__MaybeFunctors_32 = mercury__list__det_tail_1_f_0(mercury__term_to_xml__TypeInfo_80_80, mercury__term_to_xml__MaybeFunctorList_5);
            }
            mercury__term_to_xml__TypeInfo_81_81 = (MR_Word) &mercury__term_to_xml_scalar_common_1[2];
            {
              mercury__term_to_xml__conv1_MaybeArity_33 = mercury__list__det_head_1_f_0(mercury__term_to_xml__TypeInfo_81_81, mercury__term_to_xml__MaybeArityList_6);
            }
            mercury__term_to_xml__MaybeArity_33 = ((MR_Word) mercury__term_to_xml__conv1_MaybeArity_33);
            {
              mercury__term_to_xml__MaybeArities_34 = mercury__list__det_tail_1_f_0(mercury__term_to_xml__TypeInfo_81_81, mercury__term_to_xml__MaybeArityList_6);
            }
            mercury__term_to_xml__TypeInfo_82_82 = (MR_Word) &mercury__term_to_xml_scalar_common_1[4];
            {
              mercury__term_to_xml__conv2_ArgTypeList_35 = mercury__list__det_head_1_f_0(mercury__term_to_xml__TypeInfo_82_82, mercury__term_to_xml__ArgTypeListList_7);
            }
            mercury__term_to_xml__ArgTypeList_35 = ((MR_Word) mercury__term_to_xml__conv2_ArgTypeList_35);
            {
              mercury__term_to_xml__ArgTypeLists_36 = mercury__list__det_tail_1_f_0(mercury__term_to_xml__TypeInfo_82_82, mercury__term_to_xml__ArgTypeListList_7);
            }
            mercury__term_to_xml__TypeInfo_83_83 = (MR_Word) &mercury__term_to_xml_scalar_common_1[3];
            {
              mercury__term_to_xml__conv3_AttributeList_37 = mercury__list__det_head_1_f_0(mercury__term_to_xml__TypeInfo_83_83, mercury__term_to_xml__AttributeListList_8);
            }
            mercury__term_to_xml__AttributeList_37 = ((MR_Word) mercury__term_to_xml__conv3_AttributeList_37);
            {
              mercury__term_to_xml__AttributeLists_38 = mercury__list__det_tail_1_f_0(mercury__term_to_xml__TypeInfo_83_83, mercury__term_to_xml__AttributeListList_8);
            }
            mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "<!ELEMENT ")), mercury__term_to_xml__STATE_VARIABLE_State_0_9, &mercury__term_to_xml__STATE_VARIABLE_State_52_52);
            }
            mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) (mercury__term_to_xml__Element_24)), mercury__term_to_xml__STATE_VARIABLE_State_52_52, &mercury__term_to_xml__STATE_VARIABLE_State_53_53);
            }
            mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) " ")), mercury__term_to_xml__STATE_VARIABLE_State_53_53, &mercury__term_to_xml__STATE_VARIABLE_State_55_55);
            }
            {
              mercury__term_to_xml__succeeded = mercury__term_to_xml__is_primitive_type_2_p_0(mercury__term_to_xml__TypeDesc_3, &mercury__term_to_xml__Var_39);
            }
            if (mercury__term_to_xml__succeeded)
              {
                void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

                {
                  mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "(#PCDATA)>\n")), mercury__term_to_xml__STATE_VARIABLE_State_55_55, &mercury__term_to_xml__STATE_VARIABLE_State_57_57);
                }
              }
            else
            if ((mercury__term_to_xml__ArgTypeList_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

                {
                  mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "EMPTY>\n")), mercury__term_to_xml__STATE_VARIABLE_State_55_55, &mercury__term_to_xml__STATE_VARIABLE_State_57_57);
                }
              }
            else
              {
                MR_Word mercury__term_to_xml__Head_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgTypeList_35, (MR_Integer) 0)));
                MR_Word mercury__term_to_xml__Tail_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgTypeList_35, (MR_Integer) 1)));
                MR_Word mercury__term_to_xml__Braces_44;
                MR_Word mercury__term_to_xml__AllowedFunctorsRegexs_46;
                MR_String mercury__term_to_xml__AllowedFunctorsRegex_47;
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_61_61;
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_63_63;
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_66_66;
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_68_68;
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_70_70;
                MR_Word mercury__term_to_xml__Var_45;
                void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Word mercury__term_to_xml__Var_48;
                void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                if ((mercury__term_to_xml__Tail_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Integer mercury__term_to_xml__Var_58;
                    MR_Integer mercury__term_to_xml__Var_59;

{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_entries_10_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__Head_40 ;
		{
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__Var_58  = Functors;
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
                    if (mercury__term_to_xml__succeeded)
                      {
                        mercury__term_to_xml__Var_59 = (MR_Integer) 1;
                        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_58 > mercury__term_to_xml__Var_59);
                      }
                    if (mercury__term_to_xml__succeeded)
                      mercury__term_to_xml__Braces_44 = (MR_Integer) 0;
                    else
                      mercury__term_to_xml__Braces_44 = (MR_Integer) 1;
                  }
                else
                  mercury__term_to_xml__Braces_44 = (MR_Integer) 1;
                {
                  mercury__term_to_xml__succeeded = mercury__term_to_xml__is_array_2_p_0(mercury__term_to_xml__TypeDesc_3, &mercury__term_to_xml__Var_45);
                }
                if (mercury__term_to_xml__succeeded)
                  {
                    void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

                    {
                      mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "(")), mercury__term_to_xml__STATE_VARIABLE_State_55_55, &mercury__term_to_xml__STATE_VARIABLE_State_61_61);
                    }
                  }
                else
                  mercury__term_to_xml__STATE_VARIABLE_State_61_61 = mercury__term_to_xml__STATE_VARIABLE_State_55_55;
                switch (mercury__term_to_xml__Braces_44) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    mercury__term_to_xml__STATE_VARIABLE_State_63_63 = mercury__term_to_xml__STATE_VARIABLE_State_61_61;
                    break;
                  case (MR_Integer) 1:
                    {
                      void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

                      {
                        mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "(")), mercury__term_to_xml__STATE_VARIABLE_State_61_61, &mercury__term_to_xml__STATE_VARIABLE_State_63_63);
                      }
                    }
                    break;
                }
                {
                  mercury__term_to_xml__AllowedFunctorsRegexs_46 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(mercury__term_to_xml__MakeElement_2, mercury__term_to_xml__ArgTypeList_35);
                }
                {
                  mercury__term_to_xml__AllowedFunctorsRegex_47 = mercury__string__join_list_2_f_0((MR_String) ",", mercury__term_to_xml__AllowedFunctorsRegexs_46);
                }
                mercury__term_to_xml__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  mercury__term_to_xml__func_11(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) (mercury__term_to_xml__AllowedFunctorsRegex_47)), mercury__term_to_xml__STATE_VARIABLE_State_63_63, &mercury__term_to_xml__STATE_VARIABLE_State_66_66);
                }
                switch (mercury__term_to_xml__Braces_44) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    mercury__term_to_xml__STATE_VARIABLE_State_68_68 = mercury__term_to_xml__STATE_VARIABLE_State_66_66;
                    break;
                  case (MR_Integer) 1:
                    {
                      void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

                      {
                        mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) ")")), mercury__term_to_xml__STATE_VARIABLE_State_66_66, &mercury__term_to_xml__STATE_VARIABLE_State_68_68);
                      }
                    }
                    break;
                }
                {
                  mercury__term_to_xml__succeeded = mercury__term_to_xml__is_array_2_p_0(mercury__term_to_xml__TypeDesc_3, &mercury__term_to_xml__Var_48);
                }
                if (mercury__term_to_xml__succeeded)
                  {
                    void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

                    {
                      mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "*)")), mercury__term_to_xml__STATE_VARIABLE_State_68_68, &mercury__term_to_xml__STATE_VARIABLE_State_70_70);
                    }
                  }
                else
                  mercury__term_to_xml__STATE_VARIABLE_State_70_70 = mercury__term_to_xml__STATE_VARIABLE_State_68_68;
                mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) ">\n")), mercury__term_to_xml__STATE_VARIABLE_State_70_70, &mercury__term_to_xml__STATE_VARIABLE_State_57_57);
                }
              }
            {
              mercury__term_to_xml__write_dtd_attlists_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_79, mercury__term_to_xml__Stream_1, mercury__term_to_xml__Element_24, mercury__term_to_xml__AttributeList_37, mercury__term_to_xml__MaybeFunctor_31, mercury__term_to_xml__MaybeArity_33, mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__STATE_VARIABLE_State_57_57, &mercury__term_to_xml__STATE_VARIABLE_State_75_75);
            }
            mercury__term_to_xml__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__term_to_xml__func_15(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_75_75, &mercury__term_to_xml__STATE_VARIABLE_State_77_77);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__term_to_xml__next_value_of_HeadVar__4_4 = mercury__term_to_xml__Elements_25;
              MR_Word mercury__term_to_xml__next_value_of_MaybeFunctorList_5 = mercury__term_to_xml__MaybeFunctors_32;
              MR_Word mercury__term_to_xml__next_value_of_MaybeArityList_6 = mercury__term_to_xml__MaybeArities_34;
              MR_Word mercury__term_to_xml__next_value_of_ArgTypeListList_7 = mercury__term_to_xml__ArgTypeLists_36;
              MR_Word mercury__term_to_xml__next_value_of_AttributeListList_8 = mercury__term_to_xml__AttributeLists_38;
              MR_Box mercury__term_to_xml__next_value_of_STATE_VARIABLE_State_0_9 = mercury__term_to_xml__STATE_VARIABLE_State_77_77;

              mercury__term_to_xml__STATE_VARIABLE_State_0_9 = mercury__term_to_xml__next_value_of_STATE_VARIABLE_State_0_9;
              mercury__term_to_xml__AttributeListList_8 = mercury__term_to_xml__next_value_of_AttributeListList_8;
              mercury__term_to_xml__ArgTypeListList_7 = mercury__term_to_xml__next_value_of_ArgTypeListList_7;
              mercury__term_to_xml__MaybeArityList_6 = mercury__term_to_xml__next_value_of_MaybeArityList_6;
              mercury__term_to_xml__MaybeFunctorList_5 = mercury__term_to_xml__next_value_of_MaybeFunctorList_5;
              mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__next_value_of_HeadVar__4_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__term_to_xml__write_dtd_attlists_8_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_String mercury__term_to_xml__Element_10,
  MR_Word mercury__term_to_xml__AttrFromSources_11,
  MR_Word mercury__term_to_xml__MaybeFunctor_12,
  MR_Word mercury__term_to_xml__MaybeArity_13,
  MR_Word mercury__term_to_xml__TypeDesc_14,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_16,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_17)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    {
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_55_44_32_56_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_20, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Element_10, mercury__term_to_xml__MaybeFunctor_12, mercury__term_to_xml__MaybeArity_13, mercury__term_to_xml__TypeDesc_14, mercury__term_to_xml__AttrFromSources_11, mercury__term_to_xml__STATE_VARIABLE_State_0_16, mercury__term_to_xml__STATE_VARIABLE_State_17);
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__write_dtd_attlist_8_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_34,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_String mercury__term_to_xml__Element_10,
  MR_Word mercury__term_to_xml__MaybeFunctor_11,
  MR_Word mercury__term_to_xml__MaybeArity_12,
  MR_Word mercury__term_to_xml__TypeDesc_13,
  MR_Word mercury__term_to_xml__HeadVar__6_6,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_String mercury__term_to_xml__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__6_6, (MR_Integer) 0)));
    MR_Word mercury__term_to_xml__Source_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__6_6, (MR_Integer) 1)));
    MR_Word mercury__term_to_xml__MaybeValue_17;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_24_24;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_25;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_27;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_30_30;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_31_31;
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    switch (mercury__term_to_xml__Source_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        if ((mercury__term_to_xml__MaybeArity_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__term_to_xml__MaybeValue_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Integer mercury__term_to_xml__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeArity_12, (MR_Integer) 0)));
            MR_String mercury__term_to_xml__Var_22;

            {
              mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__Arity_18, (MR_Integer) 10, &mercury__term_to_xml__Var_22);
            }
            {
              mercury__term_to_xml__MaybeValue_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeValue_17, 0) = ((MR_Box) (mercury__term_to_xml__Var_22));
            }
          }
        break;
      case (MR_Integer) 1:
        mercury__term_to_xml__MaybeValue_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 0:
        mercury__term_to_xml__MaybeValue_17 = mercury__term_to_xml__MaybeFunctor_11;
        break;
      case (MR_Integer) 2:
        {
          MR_String mercury__term_to_xml__Var_21;

          {
            mercury__term_to_xml__Var_21 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_13);
          }
          {
            mercury__term_to_xml__MaybeValue_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeValue_17, 0) = ((MR_Box) (mercury__term_to_xml__Var_21));
          }
        }
        break;
    }
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<!ATTLIST ")), mercury__term_to_xml__STATE_VARIABLE_State_0_19, &mercury__term_to_xml__STATE_VARIABLE_State_24_24);
    }
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Element_10)), mercury__term_to_xml__STATE_VARIABLE_State_24_24, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
    }
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " ")), mercury__term_to_xml__STATE_VARIABLE_State_25_25, &mercury__term_to_xml__STATE_VARIABLE_State_27_27);
    }
    mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Name_14)), mercury__term_to_xml__STATE_VARIABLE_State_27_27, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
    }
    mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " CDATA ")), mercury__term_to_xml__STATE_VARIABLE_State_28_28, &mercury__term_to_xml__STATE_VARIABLE_State_30_30);
    }
    switch (mercury__term_to_xml__Source_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        if ((mercury__term_to_xml__MaybeValue_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

            {
              mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#IMPLIED")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
            }
          }
        else
          {
            MR_String mercury__term_to_xml__Value_86 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeValue_17, (MR_Integer) 0)));
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_57_91;
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_58_92;
            void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
            void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_57_91);
            }
            {
              mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Value_86, mercury__term_to_xml__STATE_VARIABLE_State_57_91, &mercury__term_to_xml__STATE_VARIABLE_State_58_92);
            }
            mercury__term_to_xml__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"")), mercury__term_to_xml__STATE_VARIABLE_State_58_92, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
            }
          }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#IMPLIED")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
          }
        }
        break;
      case (MR_Integer) 0:
        if ((mercury__term_to_xml__MaybeValue_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

            {
              mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#IMPLIED")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
            }
          }
        else
          {
            MR_String mercury__term_to_xml__Value_47 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeValue_17, (MR_Integer) 0)));
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_18_52;
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_19_53;
            void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
            void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_18_52);
            }
            {
              mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Value_47, mercury__term_to_xml__STATE_VARIABLE_State_18_52, &mercury__term_to_xml__STATE_VARIABLE_State_19_53);
            }
            mercury__term_to_xml__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__term_to_xml__func_11(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"")), mercury__term_to_xml__STATE_VARIABLE_State_19_53, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
            }
          }
        break;
      case (MR_Integer) 2:
        if ((mercury__term_to_xml__MaybeValue_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

            {
              mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#REQUIRED")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
            }
          }
        else
          {
            MR_String mercury__term_to_xml__Value_70 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeValue_17, (MR_Integer) 0)));
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_75;
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_42_76;
            void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
            void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_41_75);
            }
            {
              mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Value_70, mercury__term_to_xml__STATE_VARIABLE_State_41_75, &mercury__term_to_xml__STATE_VARIABLE_State_42_76);
            }
            mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"")), mercury__term_to_xml__STATE_VARIABLE_State_42_76, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
            }
          }
        break;
    }
    mercury__term_to_xml__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_15(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) ">\n")), mercury__term_to_xml__STATE_VARIABLE_State_31_31, mercury__term_to_xml__STATE_VARIABLE_State_20);
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__write_dtd_types_6_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_29,
  MR_Box mercury__term_to_xml__Stream_1,
  MR_Word mercury__term_to_xml__MakeElement_2,
  MR_Word mercury__term_to_xml__HeadVar__3_3,
  MR_Word mercury__term_to_xml__AlreadyDone_4,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_5,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_to_xml__succeeded;

        if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__term_to_xml__STATE_VARIABLE_State_6 = mercury__term_to_xml__STATE_VARIABLE_State_0_5;
        else
          {
            MR_Word mercury__term_to_xml__TypeDesc_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__TypeDescs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__term_to_xml__TypeCtorInfo_30_30 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
            MR_Word mercury__term_to_xml__TypeCtorInfo_31_31 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
            MR_Box mercury__term_to_xml__conv0_Var_19;

            {
              mercury__term_to_xml__succeeded = mercury__tree234__search_3_p_0(mercury__term_to_xml__TypeCtorInfo_30_30, mercury__term_to_xml__TypeCtorInfo_31_31, mercury__term_to_xml__AlreadyDone_4, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), &mercury__term_to_xml__conv0_Var_19);
            }
            if (mercury__term_to_xml__succeeded)
              mercury__term_to_xml__succeeded = MR_TRUE;
            if (mercury__term_to_xml__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__term_to_xml__next_value_of_HeadVar__3_3 = mercury__term_to_xml__TypeDescs_16;

                  mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__next_value_of_HeadVar__3_3;
                }
                continue;
              }
            else
              {
                MR_Word mercury__term_to_xml__TypeCtorInfo_32_32;
                MR_Word mercury__term_to_xml__TypeCtorInfo_33_33;
                MR_Word mercury__term_to_xml__TypeCtorInfo_38_67;
                MR_Word mercury__term_to_xml__TypeCtorInfo_9_73;
                MR_Word mercury__term_to_xml__TypeInfo_10_74;
                MR_Word mercury__term_to_xml__ChildArgTypes_20;
                MR_Word mercury__term_to_xml__NewAlreadyDone_21;
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_25;
                MR_Word mercury__term_to_xml__Var_27;
                MR_Word mercury__term_to_xml__Elements_44;
                MR_Word mercury__term_to_xml__MaybeFunctors_45;
                MR_Word mercury__term_to_xml__MaybeArities_46;
                MR_Word mercury__term_to_xml__ArgPseudoTypeLists_47;
                MR_Word mercury__term_to_xml__AttributeLists_48;
                MR_Word mercury__term_to_xml__ArgTypeLists_49;
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_23_53;
                MR_String mercury__term_to_xml__Var_54;
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_55;
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_57;
                MR_Word mercury__term_to_xml__V_5_70;
                MR_Word mercury__term_to_xml__V_6_71;
                void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                {
                  mercury__term_to_xml__get_elements_and_args_7_p_0(mercury__term_to_xml__MakeElement_2, mercury__term_to_xml__TypeDesc_15, &mercury__term_to_xml__Elements_44, &mercury__term_to_xml__MaybeFunctors_45, &mercury__term_to_xml__MaybeArities_46, &mercury__term_to_xml__ArgPseudoTypeLists_47, &mercury__term_to_xml__AttributeLists_48);
                }
                {
                  mercury__term_to_xml__ArgTypeLists_49 = mercury__term_to_xml__map__ho8_2_f_in__list_0(mercury__term_to_xml__ArgPseudoTypeLists_47);
                }
                mercury__term_to_xml__TypeCtorInfo_38_67 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
                mercury__term_to_xml__TypeCtorInfo_9_73 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
                mercury__term_to_xml__TypeInfo_10_74 = (MR_Word) &mercury__term_to_xml_scalar_common_1[4];
                {
                  mercury__list__reverse_2_p_0(mercury__term_to_xml__TypeInfo_10_74, mercury__term_to_xml__ArgTypeLists_49, &mercury__term_to_xml__V_5_70);
                }
                mercury__term_to_xml__V_6_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  mercury__list__condense_acc_3_p_0(mercury__term_to_xml__TypeCtorInfo_38_67, mercury__term_to_xml__V_5_70, mercury__term_to_xml__V_6_71, &mercury__term_to_xml__ChildArgTypes_20);
                }
                mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_29, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_29), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "<!-- Elements for functors of type \"")), mercury__term_to_xml__STATE_VARIABLE_State_0_5, &mercury__term_to_xml__STATE_VARIABLE_State_23_53);
                }
                {
                  mercury__term_to_xml__Var_54 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_15);
                }
                {
                  mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_29, mercury__term_to_xml__Stream_1, mercury__term_to_xml__Var_54, mercury__term_to_xml__STATE_VARIABLE_State_23_53, &mercury__term_to_xml__STATE_VARIABLE_State_25_55);
                }
                mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_29, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_29), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "\" -->\n\n")), mercury__term_to_xml__STATE_VARIABLE_State_25_55, &mercury__term_to_xml__STATE_VARIABLE_State_27_57);
                }
                {
                  mercury__term_to_xml__write_dtd_entries_10_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_29, mercury__term_to_xml__Stream_1, mercury__term_to_xml__MakeElement_2, mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__Elements_44, mercury__term_to_xml__MaybeFunctors_45, mercury__term_to_xml__MaybeArities_46, mercury__term_to_xml__ArgTypeLists_49, mercury__term_to_xml__AttributeLists_48, mercury__term_to_xml__STATE_VARIABLE_State_27_57, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
                }
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
                mercury__term_to_xml__TypeCtorInfo_32_32 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
                mercury__term_to_xml__TypeCtorInfo_33_33 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
                {
                  mercury__tree234__set_4_p_0(mercury__term_to_xml__TypeCtorInfo_32_32, mercury__term_to_xml__TypeCtorInfo_33_33, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), ((MR_Box) ((MR_Integer) 0)), mercury__term_to_xml__AlreadyDone_4, &mercury__term_to_xml__NewAlreadyDone_21);
                }
                {
                  mercury__list__append_3_p_1(mercury__term_to_xml__TypeCtorInfo_32_32, mercury__term_to_xml__ChildArgTypes_20, mercury__term_to_xml__TypeDescs_16, &mercury__term_to_xml__Var_27);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__term_to_xml__next_value_of_HeadVar__3_3 = mercury__term_to_xml__Var_27;
                  MR_Word mercury__term_to_xml__next_value_of_AlreadyDone_4 = mercury__term_to_xml__NewAlreadyDone_21;
                  MR_Box mercury__term_to_xml__next_value_of_STATE_VARIABLE_State_0_5 = mercury__term_to_xml__STATE_VARIABLE_State_25_25;

                  mercury__term_to_xml__STATE_VARIABLE_State_0_5 = mercury__term_to_xml__next_value_of_STATE_VARIABLE_State_0_5;
                  mercury__term_to_xml__AlreadyDone_4 = mercury__term_to_xml__next_value_of_AlreadyDone_4;
                  mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__next_value_of_HeadVar__3_3;
                }
                continue;
              }
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
mercury__term_to_xml__can_generate_dtd_for_types_4_f_0(
  MR_Word mercury__term_to_xml__MakeElement_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Word mercury__term_to_xml__Done_3,
  MR_Word mercury__term_to_xml__ElementsSoFar_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_to_xml__succeeded;
        MR_Word mercury__term_to_xml__HeadVar__5_5;

        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word mercury__term_to_xml__PseudoTypeDesc_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__PseudoTypeDescs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__term_to_xml__TypeDesc_15;

            {
              mercury__term_to_xml__succeeded = mercury__type_desc__ground_pseudo_type_desc_to_type_desc_2_p_0(mercury__term_to_xml__PseudoTypeDesc_10, &mercury__term_to_xml__TypeDesc_15);
            }
            if (mercury__term_to_xml__succeeded)
              {
                {
                  MR_Integer mercury__term_to_xml__Var_16;
                  MR_Integer mercury__term_to_xml__Var_53;

{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_15 ;
		{
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__Var_16  = Functors;
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
                  if (mercury__term_to_xml__succeeded)
                    {
                      mercury__term_to_xml__Var_53 = (MR_Integer) -1;
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_16 > mercury__term_to_xml__Var_53);
                    }
                }
                if (!(mercury__term_to_xml__succeeded))
                  {
                    {
                      MR_Word mercury__term_to_xml__PseudoTypeDesc_56;
                      MR_Word mercury__term_to_xml__TypeCtor_57;
                      MR_Word mercury__term_to_xml__ArgPseudoTypes_58;
                      MR_Word mercury__term_to_xml__Var_59;
                      MR_String mercury__term_to_xml__Var_60;
                      MR_String mercury__term_to_xml__Var_61;
                      MR_Word mercury__term_to_xml__Var_17;
                      MR_String mercury__term_to_xml__V_5_64;
                      MR_Integer mercury__term_to_xml__V_6_65;
                      MR_String mercury__term_to_xml__V_5_68;
                      MR_Integer mercury__term_to_xml__V_6_69;

{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_15 ;
		{

    PseudoTypeDesc = TypeDesc;


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__PseudoTypeDesc_56  = PseudoTypeDesc;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__term_to_xml__PseudoTypeDesc_56 ;
		{
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__TypeCtor_57  = TypeCtorDesc;
	 mercury__term_to_xml__ArgPseudoTypes_58  = ArgPseudoTypeInfos;
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
                      if (mercury__term_to_xml__succeeded)
                        {
                          mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__ArgPseudoTypes_58)) == (MR_mktag((MR_Integer) 1)));
                          if (mercury__term_to_xml__succeeded)
                            {
                              mercury__term_to_xml__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_58, (MR_Integer) 0)));
                              mercury__term_to_xml__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_58, (MR_Integer) 1)));
                              mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (mercury__term_to_xml__succeeded)
                                {
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_57 ;
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
	 mercury__term_to_xml__V_5_64  = TypeCtorModuleName;
	 mercury__term_to_xml__Var_60  = TypeCtorName;
	 mercury__term_to_xml__V_6_65  = TypeCtorArity;
}
                                  mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_60, (MR_String) "array") == 0);
                                  if (mercury__term_to_xml__succeeded)
                                    {
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_57 ;
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
	 mercury__term_to_xml__Var_61  = TypeCtorModuleName;
	 mercury__term_to_xml__V_5_68  = TypeCtorName;
	 mercury__term_to_xml__V_6_69  = TypeCtorArity;
}
                                      mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_61, (MR_String) "array") == 0);
                                    }
                                }
                            }
                        }
                    }
                    if (!(mercury__term_to_xml__succeeded))
                      {
                        MR_Word mercury__term_to_xml__TypeCtorInfo_9_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                        MR_Word mercury__term_to_xml__Var_80;
                        MR_String mercury__term_to_xml__Var_72;

{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_9_76 ;
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
	 mercury__term_to_xml__Var_80  = TypeInfo;
}
                        {
                          mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__Var_80);
                        }
                        if (mercury__term_to_xml__succeeded)
                          mercury__term_to_xml__succeeded = MR_TRUE;
                        else
                          {
                            MR_Word mercury__term_to_xml__TypeCtorInfo_10_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                            MR_Word mercury__term_to_xml__Var_81;
                            MR_Char mercury__term_to_xml__Var_73;

{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_10_77 ;
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
	 mercury__term_to_xml__Var_81  = TypeInfo;
}
                            {
                              mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__Var_81);
                            }
                            if (mercury__term_to_xml__succeeded)
                              mercury__term_to_xml__succeeded = MR_TRUE;
                            else
                              {
                                MR_Word mercury__term_to_xml__TypeCtorInfo_11_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                                MR_Word mercury__term_to_xml__Var_82;
                                MR_Integer mercury__term_to_xml__Var_74;

{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_11_78 ;
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
	 mercury__term_to_xml__Var_82  = TypeInfo;
}
                                {
                                  mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__Var_82);
                                }
                                if (mercury__term_to_xml__succeeded)
                                  mercury__term_to_xml__succeeded = MR_TRUE;
                                else
                                  {
                                    MR_Word mercury__term_to_xml__TypeCtorInfo_12_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
                                    MR_Word mercury__term_to_xml__Var_83;
                                    MR_Float mercury__term_to_xml__Var_75;

{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_12_79 ;
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
	 mercury__term_to_xml__Var_83  = TypeInfo;
}
                                    {
                                      mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__Var_83);
                                    }
                                  }
                              }
                          }
                      }
                  }
                if (mercury__term_to_xml__succeeded)
                  {
                    MR_Word mercury__term_to_xml__TypeCtorInfo_39_39 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
                    MR_Word mercury__term_to_xml__TypeCtorInfo_40_40 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
                    MR_Box mercury__term_to_xml__conv0_V_5_90;

                    {
                      mercury__term_to_xml__succeeded = mercury__tree234__search_3_p_0(mercury__term_to_xml__TypeCtorInfo_39_39, mercury__term_to_xml__TypeCtorInfo_40_40, mercury__term_to_xml__Done_3, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), &mercury__term_to_xml__conv0_V_5_90);
                    }
                    if (mercury__term_to_xml__succeeded)
                      mercury__term_to_xml__succeeded = MR_TRUE;
                    if (mercury__term_to_xml__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__term_to_xml__next_value_of_HeadVar__2_2 = mercury__term_to_xml__PseudoTypeDescs_11;

                          mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__next_value_of_HeadVar__2_2;
                        }
                        continue;
                      }
                    else
                      {
                        MR_Word mercury__term_to_xml__TypeCtorInfo_44_44;
                        MR_Word mercury__term_to_xml__Elements_19;
                        MR_Word mercury__term_to_xml__ArgLists_22;
                        MR_Word mercury__term_to_xml__DupElements_24;
                        MR_Word mercury__term_to_xml__Var_20;
                        MR_Word mercury__term_to_xml__Var_21;
                        MR_Word mercury__term_to_xml__Var_23;

                        {
                          mercury__term_to_xml__get_elements_and_args_7_p_0(mercury__term_to_xml__MakeElement_1, mercury__term_to_xml__TypeDesc_15, &mercury__term_to_xml__Elements_19, &mercury__term_to_xml__Var_20, &mercury__term_to_xml__Var_21, &mercury__term_to_xml__ArgLists_22, &mercury__term_to_xml__Var_23);
                        }
                        mercury__term_to_xml__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                        {
                          mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(mercury__term_to_xml__ElementsSoFar_4, mercury__term_to_xml__Elements_19, &mercury__term_to_xml__DupElements_24);
                        }
                        if ((mercury__term_to_xml__DupElements_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            MR_Word mercury__term_to_xml__TypeCtorInfo_46_46 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0;
                            MR_Word mercury__term_to_xml__TypeCtorInfo_47_47;
                            MR_Word mercury__term_to_xml__TypeCtorInfo_48_48;
                            MR_Word mercury__term_to_xml__NewPseudoTypeDescs_29;
                            MR_Word mercury__term_to_xml__TypeDescList_30;
                            MR_Word mercury__term_to_xml__NewElementsSoFar_31;
                            MR_Word mercury__term_to_xml__NewDone_32;
                            MR_Word mercury__term_to_xml__Var_34;
                            MR_Integer mercury__term_to_xml__Var_35;

                            {
                              mercury__term_to_xml__Var_34 = mercury__list__condense_1_f_0(mercury__term_to_xml__TypeCtorInfo_46_46, mercury__term_to_xml__ArgLists_22);
                            }
                            {
                              mercury__list__merge_and_remove_dups_3_p_0(mercury__term_to_xml__TypeCtorInfo_46_46, mercury__term_to_xml__Var_34, mercury__term_to_xml__PseudoTypeDescs_11, &mercury__term_to_xml__NewPseudoTypeDescs_29);
                            }
                            {
                              mercury__term_to_xml__Var_35 = mercury__list__length_1_f_0(mercury__term_to_xml__TypeCtorInfo_44_44, mercury__term_to_xml__Elements_19);
                            }
                            mercury__term_to_xml__TypeCtorInfo_47_47 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
                            {
                              mercury__list__duplicate_3_p_0(mercury__term_to_xml__TypeCtorInfo_47_47, mercury__term_to_xml__Var_35, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), &mercury__term_to_xml__TypeDescList_30);
                            }
                            {
                              mercury__map__det_insert_from_corresponding_lists_4_p_0(mercury__term_to_xml__TypeCtorInfo_44_44, mercury__term_to_xml__TypeCtorInfo_47_47, mercury__term_to_xml__Elements_19, mercury__term_to_xml__TypeDescList_30, mercury__term_to_xml__ElementsSoFar_4, &mercury__term_to_xml__NewElementsSoFar_31);
                            }
                            mercury__private_builtin__dummy_var = (MR_Integer) 0;
                            mercury__term_to_xml__TypeCtorInfo_48_48 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
                            {
                              mercury__map__det_insert_4_p_0(mercury__term_to_xml__TypeCtorInfo_47_47, mercury__term_to_xml__TypeCtorInfo_48_48, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), ((MR_Box) ((MR_Integer) 0)), mercury__term_to_xml__Done_3, &mercury__term_to_xml__NewDone_32);
                            }
                            /* direct tailcall eliminated */
                            {
                              MR_Word mercury__term_to_xml__next_value_of_HeadVar__2_2 = mercury__term_to_xml__NewPseudoTypeDescs_29;
                              MR_Word mercury__term_to_xml__next_value_of_Done_3 = mercury__term_to_xml__NewDone_32;
                              MR_Word mercury__term_to_xml__next_value_of_ElementsSoFar_4 = mercury__term_to_xml__NewElementsSoFar_31;

                              mercury__term_to_xml__ElementsSoFar_4 = mercury__term_to_xml__next_value_of_ElementsSoFar_4;
                              mercury__term_to_xml__Done_3 = mercury__term_to_xml__next_value_of_Done_3;
                              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__next_value_of_HeadVar__2_2;
                            }
                            continue;
                          }
                        else
                          {
                            MR_Word mercury__term_to_xml__TypeCtorInfo_45_45 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
                            MR_String mercury__term_to_xml__DupElement_25 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DupElements_24, (MR_Integer) 0)));
                            MR_Word mercury__term_to_xml__DupTypeDesc_27;
                            MR_Word mercury__term_to_xml__DupTypes_28;
                            MR_Word mercury__term_to_xml__Var_37;
                            MR_Word mercury__term_to_xml__Var_38;
                            MR_Word mercury__term_to_xml__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DupElements_24, (MR_Integer) 1)));
                            MR_Box mercury__term_to_xml__conv1_DupTypeDesc_27;

                            {
                              mercury__map__lookup_3_p_0(mercury__term_to_xml__TypeCtorInfo_44_44, mercury__term_to_xml__TypeCtorInfo_45_45, mercury__term_to_xml__ElementsSoFar_4, ((MR_Box) (mercury__term_to_xml__DupElement_25)), &mercury__term_to_xml__conv1_DupTypeDesc_27);
                            }
                            mercury__term_to_xml__DupTypeDesc_27 = ((MR_Word) mercury__term_to_xml__conv1_DupTypeDesc_27);
                            mercury__term_to_xml__Var_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            {
                              mercury__term_to_xml__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_37, 0) = ((MR_Box) (mercury__term_to_xml__DupTypeDesc_27));
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_37, 1) = ((MR_Box) (mercury__term_to_xml__Var_38));
                            }
                            {
                              mercury__term_to_xml__DupTypes_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__DupTypes_28, 0) = ((MR_Box) (mercury__term_to_xml__TypeDesc_15));
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__DupTypes_28, 1) = ((MR_Box) (mercury__term_to_xml__Var_37));
                            }
                            {
                              mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__5_5, 0) = ((MR_Box) (mercury__term_to_xml__DupElement_25));
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__5_5, 1) = ((MR_Box) (mercury__term_to_xml__DupTypes_28));
                            }
                          }
                      }
                  }
                else
                  {
                    mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__5_5, 0) = ((MR_Box) (mercury__term_to_xml__TypeDesc_15));
                  }
              }
            else
              {
                mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__5_5, 0) = ((MR_Box) (mercury__term_to_xml__PseudoTypeDesc_10));
              }
          }
        return mercury__term_to_xml__HeadVar__5_5;
      }
      break;
    }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_char_4_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_14,
  MR_Box mercury__term_to_xml__Stream_5,
  MR_Char mercury__term_to_xml__Chr_6,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_String mercury__term_to_xml__Str_8;

    switch (mercury__term_to_xml__Chr_6) {
      default:
        mercury__term_to_xml__succeeded = MR_FALSE;
        break;
      case (MR_Char) 34:
        {
          mercury__term_to_xml__Str_8 = (MR_String) "&quot;";
          mercury__term_to_xml__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 38:
        {
          mercury__term_to_xml__Str_8 = (MR_String) "&amp;";
          mercury__term_to_xml__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          mercury__term_to_xml__Str_8 = (MR_String) "&apos;";
          mercury__term_to_xml__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 60:
        {
          mercury__term_to_xml__Str_8 = (MR_String) "&lt;";
          mercury__term_to_xml__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 62:
        {
          mercury__term_to_xml__Str_8 = (MR_String) "&gt;";
          mercury__term_to_xml__succeeded = MR_TRUE;
        }
        break;
    }
    if (mercury__term_to_xml__succeeded)
      {
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5)));

        {
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_14), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Str_8)), mercury__term_to_xml__STATE_VARIABLE_State_0_9, mercury__term_to_xml__STATE_VARIABLE_State_10);
        }
      }
    else
      {
        MR_String mercury__term_to_xml__Var_12;
        MR_Word mercury__term_to_xml__V_5_21;
        MR_Word mercury__term_to_xml__V_6_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          mercury__term_to_xml__V_5_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_5_21, 0) = ((MR_Box) (MR_Word) (mercury__term_to_xml__Chr_6));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_5_21, 1) = ((MR_Box) (mercury__term_to_xml__V_6_22));
        }
        {
          mercury__string__to_char_list_2_p_1(&mercury__term_to_xml__Var_12, mercury__term_to_xml__V_5_21);
        }
        mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_14), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Var_12)), mercury__term_to_xml__STATE_VARIABLE_State_0_9, mercury__term_to_xml__STATE_VARIABLE_State_10);
        }
      }
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_string_4_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_12,
  MR_Box mercury__term_to_xml__Stream_5,
  MR_String mercury__term_to_xml__Str_6,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_8,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_9)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__V_8_22;
    MR_Integer mercury__term_to_xml__V_13_32;
    MR_Integer mercury__term_to_xml__V_17_33;

{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_to_xml__Str_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_8_22  = Length;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_to_xml__Str_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_17_33  = Length;
}
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_8_22 < mercury__term_to_xml__V_17_33);
    if (mercury__term_to_xml__succeeded)
      mercury__term_to_xml__V_13_32 = mercury__term_to_xml__V_8_22;
    else
      mercury__term_to_xml__V_13_32 = mercury__term_to_xml__V_17_33;
    {
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(mercury__term_to_xml__TypeClassInfo_for_writer_12, mercury__term_to_xml__Stream_5, mercury__term_to_xml__Str_6, (MR_Integer) 0, mercury__term_to_xml__V_13_32, mercury__term_to_xml__STATE_VARIABLE_State_0_8, mercury__term_to_xml__STATE_VARIABLE_State_9);
    }
  }
}

void MR_CALL 
mercury__term_to_xml__write_attribute_4_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_19,
  MR_Box mercury__term_to_xml__Stream_5,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_String mercury__term_to_xml__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
    MR_String mercury__term_to_xml__Value_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_12;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_13;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_15_15;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_16;
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) " ")), mercury__term_to_xml__STATE_VARIABLE_State_0_9, &mercury__term_to_xml__STATE_VARIABLE_State_12_12);
    }
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Name_6)), mercury__term_to_xml__STATE_VARIABLE_State_12_12, &mercury__term_to_xml__STATE_VARIABLE_State_13_13);
    }
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "=\"")), mercury__term_to_xml__STATE_VARIABLE_State_13_13, &mercury__term_to_xml__STATE_VARIABLE_State_15_15);
    }
    {
      mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_19, mercury__term_to_xml__Stream_5, mercury__term_to_xml__Value_7, mercury__term_to_xml__STATE_VARIABLE_State_15_15, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
    }
    mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "\"")), mercury__term_to_xml__STATE_VARIABLE_State_16_16, mercury__term_to_xml__STATE_VARIABLE_State_10);
    }
  }
}

MR_bool MR_CALL 
mercury__term_to_xml__is_maybe_yes_2_p_0(
  MR_Word mercury__term_to_xml__TypeInfo_for_T_4,
  MR_Word mercury__term_to_xml__HeadVar__1_1,
  MR_Box * mercury__term_to_xml__X_3)
{
  {
    MR_bool mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

    if (mercury__term_to_xml__succeeded)
      *mercury__term_to_xml__X_3 = (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0));
    return mercury__term_to_xml__succeeded;
  }
}

MR_Word MR_CALL 
mercury__term_to_xml__make_attrs_from_sources_5_f_0(
  MR_Word mercury__term_to_xml__MaybeFunctor_7,
  MR_Word mercury__term_to_xml__MaybeArity_8,
  MR_Word mercury__term_to_xml__TypeDesc_9,
  MR_Word mercury__term_to_xml__MaybeField_10,
  MR_Word mercury__term_to_xml__AttrFromSources_11)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__Attrs_12;
    MR_Word mercury__term_to_xml__MaybeAttrs_13;

    {
      mercury__term_to_xml__MaybeAttrs_13 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__MaybeFunctor_7, mercury__term_to_xml__MaybeArity_8, mercury__term_to_xml__TypeDesc_9, mercury__term_to_xml__MaybeField_10, mercury__term_to_xml__AttrFromSources_11);
    }
    {
      mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__MaybeAttrs_13, &mercury__term_to_xml__Attrs_12);
    }
    return mercury__term_to_xml__Attrs_12;
  }
}

MR_Word MR_CALL 
mercury__term_to_xml__attr_from_source_to_maybe_attr_5_f_0(
  MR_Word mercury__term_to_xml__MaybeFunctor_7,
  MR_Word mercury__term_to_xml__MaybeArity_8,
  MR_Word mercury__term_to_xml__TypeDesc_9,
  MR_Word mercury__term_to_xml__MaybeFieldName_10,
  MR_Word mercury__term_to_xml__HeadVar__5_5)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__MaybeAttr_13;
    MR_String mercury__term_to_xml__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__5_5, (MR_Integer) 0)));
    MR_Word mercury__term_to_xml__Source_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__5_5, (MR_Integer) 1)));

    switch (mercury__term_to_xml__Source_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        if ((mercury__term_to_xml__MaybeArity_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Integer mercury__term_to_xml__Arity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeArity_8, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__Var_20;
            MR_String mercury__term_to_xml__Var_21;

            {
              mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__Arity_15, (MR_Integer) 10, &mercury__term_to_xml__Var_21);
            }
            {
              mercury__term_to_xml__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__Var_20, 0) = ((MR_Box) (mercury__term_to_xml__Name_11));
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__Var_20, 1) = ((MR_Box) (mercury__term_to_xml__Var_21));
            }
            {
              mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeAttr_13, 0) = ((MR_Box) (mercury__term_to_xml__Var_20));
            }
          }
        break;
      case (MR_Integer) 1:
        if ((mercury__term_to_xml__MaybeFieldName_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_String mercury__term_to_xml__FieldName_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldName_10, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__Var_17;

            {
              mercury__term_to_xml__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__Var_17, 0) = ((MR_Box) (mercury__term_to_xml__Name_11));
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__Var_17, 1) = ((MR_Box) (mercury__term_to_xml__FieldName_16));
            }
            {
              mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeAttr_13, 0) = ((MR_Box) (mercury__term_to_xml__Var_17));
            }
          }
        break;
      case (MR_Integer) 0:
        if ((mercury__term_to_xml__MaybeFunctor_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_String mercury__term_to_xml__Functor_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFunctor_7, (MR_Integer) 0)));
            MR_Word mercury__term_to_xml__Var_22;

            {
              mercury__term_to_xml__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__Var_22, 0) = ((MR_Box) (mercury__term_to_xml__Name_11));
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__Var_22, 1) = ((MR_Box) (mercury__term_to_xml__Functor_14));
            }
            {
              mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeAttr_13, 0) = ((MR_Box) (mercury__term_to_xml__Var_22));
            }
          }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__term_to_xml__Var_18;
          MR_String mercury__term_to_xml__Var_19;

          {
            mercury__term_to_xml__Var_19 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_9);
          }
          {
            mercury__term_to_xml__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__term_to_xml__Var_18, 0) = ((MR_Box) (mercury__term_to_xml__Name_11));
            MR_hl_field(MR_mktag(0), mercury__term_to_xml__Var_18, 1) = ((MR_Box) (mercury__term_to_xml__Var_19));
          }
          {
            mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeAttr_13, 0) = ((MR_Box) (mercury__term_to_xml__Var_18));
          }
        }
        break;
    }
    return mercury__term_to_xml__MaybeAttr_13;
  }
}

void MR_CALL 
mercury__term_to_xml__write_element_end_4_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_15,
  MR_Box mercury__term_to_xml__Stream_5,
  MR_String mercury__term_to_xml__Element_6,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_8,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_9)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_11_11;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_12;
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_15), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_0_8, &mercury__term_to_xml__STATE_VARIABLE_State_11_11);
    }
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_15), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Element_6)), mercury__term_to_xml__STATE_VARIABLE_State_11_11, &mercury__term_to_xml__STATE_VARIABLE_State_12_12);
    }
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_15), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_12, mercury__term_to_xml__STATE_VARIABLE_State_9);
    }
  }
}

void MR_CALL 
mercury__term_to_xml__write_empty_element_5_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_19,
  MR_Box mercury__term_to_xml__Stream_6,
  MR_String mercury__term_to_xml__Element_7,
  MR_Word mercury__term_to_xml__Attributes_8,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_10,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_11)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_13;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_14_14;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_16;
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) "<")), mercury__term_to_xml__STATE_VARIABLE_State_0_10, &mercury__term_to_xml__STATE_VARIABLE_State_13_13);
    }
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) (mercury__term_to_xml__Element_7)), mercury__term_to_xml__STATE_VARIABLE_State_13_13, &mercury__term_to_xml__STATE_VARIABLE_State_14_14);
    }
    {
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_19, mercury__term_to_xml__Stream_6, mercury__term_to_xml__Attributes_8, mercury__term_to_xml__STATE_VARIABLE_State_14_14, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
    }
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) " />")), mercury__term_to_xml__STATE_VARIABLE_State_16_16, mercury__term_to_xml__STATE_VARIABLE_State_11);
    }
  }
}

void MR_CALL 
mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_24,
  MR_Box mercury__term_to_xml__Stream_10,
  MR_String mercury__term_to_xml__Element_11,
  MR_Word mercury__term_to_xml__AttrFromSources_12,
  MR_Word mercury__term_to_xml__MaybeFunctor_13,
  MR_Word mercury__term_to_xml__MaybeArity_14,
  MR_Word mercury__term_to_xml__MaybeField_15,
  MR_Word mercury__term_to_xml__TypeDesc_16,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__Attrs_18;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_21;
    MR_Word mercury__term_to_xml__MaybeAttrs_31;
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      mercury__term_to_xml__MaybeAttrs_31 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__MaybeFunctor_13, mercury__term_to_xml__MaybeArity_14, mercury__term_to_xml__TypeDesc_16, mercury__term_to_xml__MaybeField_15, mercury__term_to_xml__AttrFromSources_12);
    }
    {
      mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__MaybeAttrs_31, &mercury__term_to_xml__Attrs_18);
    }
    {
      mercury__term_to_xml__write_empty_element_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_24, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_11, mercury__term_to_xml__Attrs_18, mercury__term_to_xml__STATE_VARIABLE_State_0_19, &mercury__term_to_xml__STATE_VARIABLE_State_21_21);
    }
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_24, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_24), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_21_21, mercury__term_to_xml__STATE_VARIABLE_State_20);
    }
  }
}

void MR_CALL 
mercury__term_to_xml__write_element_start_5_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_19,
  MR_Box mercury__term_to_xml__Stream_6,
  MR_String mercury__term_to_xml__Element_7,
  MR_Word mercury__term_to_xml__Attributes_8,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_10,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_11)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_13;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_14_14;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_16;
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) "<")), mercury__term_to_xml__STATE_VARIABLE_State_0_10, &mercury__term_to_xml__STATE_VARIABLE_State_13_13);
    }
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) (mercury__term_to_xml__Element_7)), mercury__term_to_xml__STATE_VARIABLE_State_13_13, &mercury__term_to_xml__STATE_VARIABLE_State_14_14);
    }
    {
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_19, mercury__term_to_xml__Stream_6, mercury__term_to_xml__Attributes_8, mercury__term_to_xml__STATE_VARIABLE_State_14_14, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
    }
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_16_16, mercury__term_to_xml__STATE_VARIABLE_State_11);
    }
  }
}

void MR_CALL 
mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_24,
  MR_Box mercury__term_to_xml__Stream_10,
  MR_String mercury__term_to_xml__Element_11,
  MR_Word mercury__term_to_xml__AttrFromSources_12,
  MR_Word mercury__term_to_xml__MaybeFunctor_13,
  MR_Word mercury__term_to_xml__MaybeArity_14,
  MR_Word mercury__term_to_xml__MaybeField_15,
  MR_Word mercury__term_to_xml__TypeDesc_16,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__Attrs_18;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_21;
    MR_Word mercury__term_to_xml__MaybeAttrs_31;
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      mercury__term_to_xml__MaybeAttrs_31 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__MaybeFunctor_13, mercury__term_to_xml__MaybeArity_14, mercury__term_to_xml__TypeDesc_16, mercury__term_to_xml__MaybeField_15, mercury__term_to_xml__AttrFromSources_12);
    }
    {
      mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__MaybeAttrs_31, &mercury__term_to_xml__Attrs_18);
    }
    {
      mercury__term_to_xml__write_element_start_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_24, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_11, mercury__term_to_xml__Attrs_18, mercury__term_to_xml__STATE_VARIABLE_State_0_19, &mercury__term_to_xml__STATE_VARIABLE_State_21_21);
    }
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_24, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_24), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_21_21, mercury__term_to_xml__STATE_VARIABLE_State_20);
    }
  }
}

void MR_CALL 
mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_34,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_String mercury__term_to_xml__Element_10,
  MR_Word mercury__term_to_xml__AttrFromSources_11,
  MR_String mercury__term_to_xml__Value_12,
  MR_Word mercury__term_to_xml__MaybeField_13,
  MR_Word mercury__term_to_xml__TypeDesc_14,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_17,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_18)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__Attrs_16;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_20_20;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_21;
    MR_Word mercury__term_to_xml__Var_22;
    MR_Word mercury__term_to_xml__Var_23;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_25;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_27;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_30_30;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_31_31;
    MR_Word mercury__term_to_xml__MaybeAttrs_47;
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<")), mercury__term_to_xml__STATE_VARIABLE_State_0_17, &mercury__term_to_xml__STATE_VARIABLE_State_20_20);
    }
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Element_10)), mercury__term_to_xml__STATE_VARIABLE_State_20_20, &mercury__term_to_xml__STATE_VARIABLE_State_21_21);
    }
    mercury__term_to_xml__Var_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__term_to_xml__Var_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__term_to_xml__MaybeAttrs_47 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__Var_22, mercury__term_to_xml__Var_23, mercury__term_to_xml__TypeDesc_14, mercury__term_to_xml__MaybeField_13, mercury__term_to_xml__AttrFromSources_11);
    }
    {
      mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__MaybeAttrs_47, &mercury__term_to_xml__Attrs_16);
    }
    {
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Attrs_16, mercury__term_to_xml__STATE_VARIABLE_State_21_21, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
    }
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_25_25, &mercury__term_to_xml__STATE_VARIABLE_State_27_27);
    }
    {
      mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Value_12, mercury__term_to_xml__STATE_VARIABLE_State_27_27, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
    }
    mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_28_28, &mercury__term_to_xml__STATE_VARIABLE_State_30_30);
    }
    mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Element_10)), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
    }
    mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) ">\n")), mercury__term_to_xml__STATE_VARIABLE_State_31_31, mercury__term_to_xml__STATE_VARIABLE_State_18);
    }
  }
}

void MR_CALL 
mercury__term_to_xml__indent_4_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_16,
  MR_Box mercury__term_to_xml__Stream_5,
  MR_Integer mercury__term_to_xml__IndentLevel_6,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_8,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__IndentLevel_6 > (MR_Integer) 0);

        if (mercury__term_to_xml__succeeded)
          {
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_12;
            MR_Integer mercury__term_to_xml__Var_13;
            void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));

            {
              mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_16), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "\t")), mercury__term_to_xml__STATE_VARIABLE_State_0_8, &mercury__term_to_xml__STATE_VARIABLE_State_12_12);
            }
            mercury__term_to_xml__Var_13 = (mercury__term_to_xml__IndentLevel_6 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__term_to_xml__next_value_of_IndentLevel_6 = mercury__term_to_xml__Var_13;
              MR_Box mercury__term_to_xml__next_value_of_STATE_VARIABLE_State_0_8 = mercury__term_to_xml__STATE_VARIABLE_State_12_12;

              mercury__term_to_xml__STATE_VARIABLE_State_0_8 = mercury__term_to_xml__next_value_of_STATE_VARIABLE_State_0_8;
              mercury__term_to_xml__IndentLevel_6 = mercury__term_to_xml__next_value_of_IndentLevel_6;
            }
            continue;
          }
        else
          *mercury__term_to_xml__STATE_VARIABLE_State_9 = mercury__term_to_xml__STATE_VARIABLE_State_0_8;
      }
      break;
    }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_include_details_cc_8_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_Word mercury__term_to_xml__MakeElement_10,
  MR_Integer mercury__term_to_xml__IndentLevel_11,
  MR_Word mercury__term_to_xml__Univ_12,
  MR_Word mercury__term_to_xml__MaybeFieldNames0_13,
  MR_Word * mercury__term_to_xml__MaybeFieldNames_14,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_16,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_17)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    {
      mercury__term_to_xml__write_xml_element_univ_9_p_2(mercury__term_to_xml__TypeClassInfo_for_writer_20, mercury__term_to_xml__Stream_9, (MR_Integer) 2, mercury__term_to_xml__MakeElement_10, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_12, mercury__term_to_xml__MaybeFieldNames0_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_16, mercury__term_to_xml__STATE_VARIABLE_State_17);
    }
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_canonicalize_8_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_Word mercury__term_to_xml__MakeElement_10,
  MR_Integer mercury__term_to_xml__IndentLevel_11,
  MR_Word mercury__term_to_xml__Univ_12,
  MR_Word mercury__term_to_xml__MaybeFieldNames0_13,
  MR_Word * mercury__term_to_xml__MaybeFieldNames_14,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_16,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_17)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    {
      mercury__term_to_xml__write_xml_element_univ_9_p_1(mercury__term_to_xml__TypeClassInfo_for_writer_20, mercury__term_to_xml__Stream_9, (MR_Integer) 1, mercury__term_to_xml__MakeElement_10, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_12, mercury__term_to_xml__MaybeFieldNames0_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_16, mercury__term_to_xml__STATE_VARIABLE_State_17);
    }
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_do_not_allow_8_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_Word mercury__term_to_xml__MakeElement_10,
  MR_Integer mercury__term_to_xml__IndentLevel_11,
  MR_Word mercury__term_to_xml__Univ_12,
  MR_Word mercury__term_to_xml__MaybeFieldNames0_13,
  MR_Word * mercury__term_to_xml__MaybeFieldNames_14,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_16,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_17)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    {
      mercury__term_to_xml__write_xml_element_univ_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_20, mercury__term_to_xml__Stream_9, (MR_Integer) 0, mercury__term_to_xml__MakeElement_10, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_12, mercury__term_to_xml__MaybeFieldNames0_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_16, mercury__term_to_xml__STATE_VARIABLE_State_17);
    }
  }
}

void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_3(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_Word mercury__term_to_xml__NonCanon_10,
  MR_Word mercury__term_to_xml__MakeElement_11,
  MR_Integer mercury__term_to_xml__IndentLevel_12,
  MR_Word mercury__term_to_xml__Args_13,
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    switch (mercury__term_to_xml__NonCanon_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word mercury__term_to_xml__Var_17;

          {
            mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__Var_17, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word mercury__term_to_xml__Var_16;

          {
            mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__Var_16, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__term_to_xml__Var_18;

          {
            mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__Var_18, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_2(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_Word mercury__term_to_xml__NonCanon_10,
  MR_Word mercury__term_to_xml__MakeElement_11,
  MR_Integer mercury__term_to_xml__IndentLevel_12,
  MR_Word mercury__term_to_xml__Args_13,
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    {
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_p_2(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
    }
  }
}

void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_1(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_Word mercury__term_to_xml__NonCanon_10,
  MR_Word mercury__term_to_xml__MakeElement_11,
  MR_Integer mercury__term_to_xml__IndentLevel_12,
  MR_Word mercury__term_to_xml__Args_13,
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    {
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_p_1(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
    }
  }
}

void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_Word mercury__term_to_xml__NonCanon_10,
  MR_Word mercury__term_to_xml__MakeElement_11,
  MR_Integer mercury__term_to_xml__IndentLevel_12,
  MR_Word mercury__term_to_xml__Args_13,
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    {
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
    }
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml__find_field_names_5_p_0(
  MR_Word mercury__term_to_xml__TypeDesc_6,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_String mercury__term_to_xml__Functor_9,
  MR_Integer mercury__term_to_xml__Arity_10,
  MR_Word * mercury__term_to_xml__MaybeFieldNames_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        MR_Integer mercury__term_to_xml__FunctorNum_7;
        MR_Word mercury__term_to_xml__FunctorNums_8;
        MR_Word mercury__term_to_xml__FoundFieldNames_13;
        MR_String mercury__term_to_xml__Var_14;
        MR_Integer mercury__term_to_xml__Var_15;
        MR_Word mercury__term_to_xml__V_13_22;
        MR_Word mercury__term_to_xml__Var_12;

        if (mercury__term_to_xml__succeeded)
          {
            mercury__term_to_xml__FunctorNum_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
            mercury__term_to_xml__FunctorNums_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
            {
              mercury__term_to_xml__succeeded = mercury__construct__get_functor_with_names_internal_6_p_0(mercury__term_to_xml__TypeDesc_6, mercury__term_to_xml__FunctorNum_7, &mercury__term_to_xml__Var_14, &mercury__term_to_xml__Var_15, &mercury__term_to_xml__Var_12, &mercury__term_to_xml__V_13_22);
            }
            if (mercury__term_to_xml__succeeded)
              {
                {
                  mercury__term_to_xml__FoundFieldNames_13 = mercury__term_to_xml__map__ho3_2_f_in__list_0(mercury__term_to_xml__V_13_22);
                }
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Functor_9, mercury__term_to_xml__Var_14) == 0);
                if (mercury__term_to_xml__succeeded)
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Arity_10 == mercury__term_to_xml__Var_15);
              }
            if (mercury__term_to_xml__succeeded)
              {
                *mercury__term_to_xml__MaybeFieldNames_11 = mercury__term_to_xml__FoundFieldNames_13;
                mercury__term_to_xml__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__term_to_xml__next_value_of_HeadVar__2_2 = mercury__term_to_xml__FunctorNums_8;

                  mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
        return mercury__term_to_xml__succeeded;
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__term_to_xml__get_field_names_3_f_0(
  MR_Word mercury__term_to_xml__TypeDesc_5,
  MR_String mercury__term_to_xml__Functor_6,
  MR_Integer mercury__term_to_xml__Arity_7)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__MaybeFields_8;
    MR_Integer mercury__term_to_xml__NumFunctors_9;
    MR_Integer mercury__term_to_xml__Var_17;

{
#define MR_PROC_LABEL mercury__term_to_xml__get_field_names_3_f_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_5 ;
		{
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__NumFunctors_9  = Functors;
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__term_to_xml__succeeded)
      {
        mercury__term_to_xml__Var_17 = (MR_Integer) -1;
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__NumFunctors_9 > mercury__term_to_xml__Var_17);
      }
    if (mercury__term_to_xml__succeeded)
      {
        MR_Word mercury__term_to_xml__FunctorNums_10;
        MR_Integer mercury__term_to_xml__Var_13 = (mercury__term_to_xml__NumFunctors_9 - (MR_Integer) 1);
        MR_Word mercury__term_to_xml__V_7_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__term_to_xml__FoundMaybeFields_11;

        {
          mercury__list__successive_integers_4_p_0((MR_Integer) 0, mercury__term_to_xml__Var_13, mercury__term_to_xml__V_7_21, &mercury__term_to_xml__FunctorNums_10);
        }
        {
          mercury__term_to_xml__succeeded = mercury__term_to_xml__find_field_names_5_p_0(mercury__term_to_xml__TypeDesc_5, mercury__term_to_xml__FunctorNums_10, mercury__term_to_xml__Functor_6, mercury__term_to_xml__Arity_7, &mercury__term_to_xml__FoundMaybeFields_11);
        }
        if (mercury__term_to_xml__succeeded)
          mercury__term_to_xml__MaybeFields_8 = mercury__term_to_xml__FoundMaybeFields_11;
        else
          mercury__term_to_xml__MaybeFields_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      mercury__term_to_xml__MaybeFields_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return mercury__term_to_xml__MaybeFields_8;
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml__is_array_2_p_0(
  MR_Word mercury__term_to_xml__TypeDesc_3,
  MR_Word * mercury__term_to_xml__ArgPseudoType_4)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__PseudoTypeDesc_5;
    MR_Word mercury__term_to_xml__TypeCtor_6;
    MR_Word mercury__term_to_xml__ArgPseudoTypes_7;
    MR_Word mercury__term_to_xml__Var_8;
    MR_String mercury__term_to_xml__Var_9;
    MR_String mercury__term_to_xml__Var_10;
    MR_String mercury__term_to_xml__V_5_13;
    MR_Integer mercury__term_to_xml__V_6_14;
    MR_String mercury__term_to_xml__V_5_17;
    MR_Integer mercury__term_to_xml__V_6_18;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_3 ;
		{

    PseudoTypeDesc = TypeDesc;


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__PseudoTypeDesc_5  = PseudoTypeDesc;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__term_to_xml__PseudoTypeDesc_5 ;
		{
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__TypeCtor_6  = TypeCtorDesc;
	 mercury__term_to_xml__ArgPseudoTypes_7  = ArgPseudoTypeInfos;
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__term_to_xml__succeeded)
      {
        mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__ArgPseudoTypes_7)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__term_to_xml__succeeded)
          {
            *mercury__term_to_xml__ArgPseudoType_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_7, (MR_Integer) 0)));
            mercury__term_to_xml__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_7, (MR_Integer) 1)));
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (mercury__term_to_xml__succeeded)
              {
{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_6 ;
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
	 mercury__term_to_xml__V_5_13  = TypeCtorModuleName;
	 mercury__term_to_xml__Var_9  = TypeCtorName;
	 mercury__term_to_xml__V_6_14  = TypeCtorArity;
}
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_9, (MR_String) "array") == 0);
                if (mercury__term_to_xml__succeeded)
                  {
{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_6 ;
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
	 mercury__term_to_xml__Var_10  = TypeCtorModuleName;
	 mercury__term_to_xml__V_5_17  = TypeCtorName;
	 mercury__term_to_xml__V_6_18  = TypeCtorArity;
}
                    mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_10, (MR_String) "array") == 0);
                  }
              }
          }
      }
    return mercury__term_to_xml__succeeded;
  }
}

MR_bool MR_CALL 
mercury__term_to_xml__is_discriminated_union_2_p_0(
  MR_Word mercury__term_to_xml__TypeDesc_3,
  MR_Integer * mercury__term_to_xml__NumFunctors_4)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__Var_5;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_discriminated_union_2_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_3 ;
		{
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__term_to_xml__NumFunctors_4  = Functors;
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__term_to_xml__succeeded)
      {
        mercury__term_to_xml__Var_5 = (MR_Integer) -1;
        mercury__term_to_xml__succeeded = (*mercury__term_to_xml__NumFunctors_4 > mercury__term_to_xml__Var_5);
      }
    return mercury__term_to_xml__succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_3(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_51,
  MR_Box mercury__term_to_xml__Stream_10,
  MR_Word mercury__term_to_xml__NonCanon_11,
  MR_Word mercury__term_to_xml__MakeElement_12,
  MR_Integer mercury__term_to_xml__IndentLevel_13,
  MR_Word mercury__term_to_xml__Univ_14,
  MR_Word mercury__term_to_xml__MaybeFieldNames_15,
  MR_Word * mercury__term_to_xml__RemainingMaybeFieldNames_16,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_32,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_33)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__TypeInfo_52_52;
    MR_Word mercury__term_to_xml__MaybeFieldName_18;
    MR_Box mercury__term_to_xml__Term_19;
    MR_String mercury__term_to_xml__Functor_20;
    MR_Integer mercury__term_to_xml__Arity_21;
    MR_Word mercury__term_to_xml__Args_22;
    MR_Word mercury__term_to_xml__TypeDesc_23;
    MR_Word mercury__term_to_xml__Request_25;
    MR_String mercury__term_to_xml__Element_26;
    MR_Word mercury__term_to_xml__AttrFromSources_27;
    MR_Box mercury__term_to_xml__Var_53;
    MR_Integer mercury__term_to_xml__Var_24;
    MR_Integer mercury__term_to_xml__Var_57;
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
    MR_Box mercury__term_to_xml__conv2_Element_26;
    MR_Box mercury__term_to_xml__conv1_AttrFromSources_27;
    MR_String mercury__term_to_xml__PrimValue_28;

    if ((mercury__term_to_xml__MaybeFieldNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__term_to_xml__MaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        mercury__term_to_xml__MaybeFieldName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 0)));
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 1)));
      }
    mercury__term_to_xml__TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 0)));
    mercury__term_to_xml__Term_19 = (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 1));
    {
      mercury__deconstruct__deconstruct_5_p_3(mercury__term_to_xml__TypeInfo_52_52, mercury__term_to_xml__Term_19, mercury__term_to_xml__NonCanon_11, &mercury__term_to_xml__Functor_20, &mercury__term_to_xml__Arity_21, &mercury__term_to_xml__Args_22);
    }
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_52_52 ;
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
	 mercury__term_to_xml__TypeDesc_23  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_3

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_23 ;
		{
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__Var_24  = Functors;
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__term_to_xml__succeeded)
      {
        mercury__term_to_xml__Var_57 = (MR_Integer) -1;
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_24 > mercury__term_to_xml__Var_57);
      }
    if (mercury__term_to_xml__succeeded)
      {
        mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 1) = ((MR_Box) (mercury__term_to_xml__Arity_21));
      }
    else
      mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_12, (MR_Integer) 1)));
    {
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__MakeElement_12), ((MR_Box) (mercury__term_to_xml__TypeDesc_23)), ((MR_Box) (mercury__term_to_xml__Request_25)), &mercury__term_to_xml__conv2_Element_26, &mercury__term_to_xml__conv1_AttrFromSources_27);
    }
    mercury__term_to_xml__Element_26 = ((MR_String) mercury__term_to_xml__conv2_Element_26);
    mercury__term_to_xml__AttrFromSources_27 = ((MR_Word) mercury__term_to_xml__conv1_AttrFromSources_27);
    {
      mercury__term_to_xml__succeeded = mercury__term_to_xml__primitive_value_2_p_0(mercury__term_to_xml__Univ_14, &mercury__term_to_xml__PrimValue_28);
    }
    if (mercury__term_to_xml__succeeded)
      {
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_34_34;

        {
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_34_34);
        }
        {
          mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__PrimValue_28, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_34_34, mercury__term_to_xml__STATE_VARIABLE_State_33);
        }
      }
    else
    if ((mercury__term_to_xml__Args_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_47_47;
        MR_Word mercury__term_to_xml__Var_48;
        MR_Word mercury__term_to_xml__Var_49;

        {
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_47_47);
        }
        {
          mercury__term_to_xml__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_48, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
        }
        {
          mercury__term_to_xml__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_49, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
        }
        {
          mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__Var_48, mercury__term_to_xml__Var_49, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_47_47, mercury__term_to_xml__STATE_VARIABLE_State_33);
        }
      }
    else
      {
        MR_Word mercury__term_to_xml__ChildMaybeFieldNames_31;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_36_36;
        MR_Word mercury__term_to_xml__Var_37;
        MR_Word mercury__term_to_xml__Var_38;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_39_39;
        MR_Integer mercury__term_to_xml__Var_40;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_43_43;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_44_44;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_11_64;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_65;
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          mercury__term_to_xml__ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__Functor_20, mercury__term_to_xml__Arity_21);
        }
        {
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
        }
        {
          mercury__term_to_xml__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_37, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
        }
        {
          mercury__term_to_xml__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_38, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
        }
        {
          mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__Var_37, mercury__term_to_xml__Var_38, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_36_36, &mercury__term_to_xml__STATE_VARIABLE_State_39_39);
        }
        mercury__term_to_xml__Var_40 = (mercury__term_to_xml__IndentLevel_13 + (MR_Integer) 1);
        {
          mercury__term_to_xml__write_child_xml_elements_8_p_3(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__NonCanon_11, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__Var_40, mercury__term_to_xml__Args_22, mercury__term_to_xml__ChildMaybeFieldNames_31, mercury__term_to_xml__STATE_VARIABLE_State_39_39, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
        }
        {
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_41_41, &mercury__term_to_xml__STATE_VARIABLE_State_43_43);
        }
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_11_64);
        }
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) (mercury__term_to_xml__Element_26)), mercury__term_to_xml__STATE_VARIABLE_State_11_64, &mercury__term_to_xml__STATE_VARIABLE_State_12_65);
        }
        mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_65, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
        }
        mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, mercury__term_to_xml__STATE_VARIABLE_State_33);
        }
      }
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_2(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_51,
  MR_Box mercury__term_to_xml__Stream_10,
  MR_Word mercury__term_to_xml__NonCanon_11,
  MR_Word mercury__term_to_xml__MakeElement_12,
  MR_Integer mercury__term_to_xml__IndentLevel_13,
  MR_Word mercury__term_to_xml__Univ_14,
  MR_Word mercury__term_to_xml__MaybeFieldNames_15,
  MR_Word * mercury__term_to_xml__RemainingMaybeFieldNames_16,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_32,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_33)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__TypeInfo_52_52;
    MR_Word mercury__term_to_xml__MaybeFieldName_18;
    MR_Box mercury__term_to_xml__Term_19;
    MR_String mercury__term_to_xml__Functor_20;
    MR_Integer mercury__term_to_xml__Arity_21;
    MR_Word mercury__term_to_xml__Args_22;
    MR_Word mercury__term_to_xml__TypeDesc_23;
    MR_Word mercury__term_to_xml__Request_25;
    MR_String mercury__term_to_xml__Element_26;
    MR_Word mercury__term_to_xml__AttrFromSources_27;
    MR_Box mercury__term_to_xml__Var_53;
    MR_Integer mercury__term_to_xml__Var_24;
    MR_Integer mercury__term_to_xml__Var_57;
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
    MR_Box mercury__term_to_xml__conv2_Element_26;
    MR_Box mercury__term_to_xml__conv1_AttrFromSources_27;
    MR_String mercury__term_to_xml__PrimValue_28;

    if ((mercury__term_to_xml__MaybeFieldNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__term_to_xml__MaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        mercury__term_to_xml__MaybeFieldName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 0)));
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 1)));
      }
    mercury__term_to_xml__TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 0)));
    mercury__term_to_xml__Term_19 = (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 1));
    {
      mercury__deconstruct__deconstruct_5_p_2(mercury__term_to_xml__TypeInfo_52_52, mercury__term_to_xml__Term_19, mercury__term_to_xml__NonCanon_11, &mercury__term_to_xml__Functor_20, &mercury__term_to_xml__Arity_21, &mercury__term_to_xml__Args_22);
    }
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_52_52 ;
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
	 mercury__term_to_xml__TypeDesc_23  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_2

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_23 ;
		{
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__Var_24  = Functors;
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__term_to_xml__succeeded)
      {
        mercury__term_to_xml__Var_57 = (MR_Integer) -1;
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_24 > mercury__term_to_xml__Var_57);
      }
    if (mercury__term_to_xml__succeeded)
      {
        mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 1) = ((MR_Box) (mercury__term_to_xml__Arity_21));
      }
    else
      mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_12, (MR_Integer) 1)));
    {
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__MakeElement_12), ((MR_Box) (mercury__term_to_xml__TypeDesc_23)), ((MR_Box) (mercury__term_to_xml__Request_25)), &mercury__term_to_xml__conv2_Element_26, &mercury__term_to_xml__conv1_AttrFromSources_27);
    }
    mercury__term_to_xml__Element_26 = ((MR_String) mercury__term_to_xml__conv2_Element_26);
    mercury__term_to_xml__AttrFromSources_27 = ((MR_Word) mercury__term_to_xml__conv1_AttrFromSources_27);
    {
      mercury__term_to_xml__succeeded = mercury__term_to_xml__primitive_value_2_p_0(mercury__term_to_xml__Univ_14, &mercury__term_to_xml__PrimValue_28);
    }
    if (mercury__term_to_xml__succeeded)
      {
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_34_34;

        {
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_34_34);
        }
        {
          mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__PrimValue_28, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_34_34, mercury__term_to_xml__STATE_VARIABLE_State_33);
        }
      }
    else
    if ((mercury__term_to_xml__Args_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_47_47;
        MR_Word mercury__term_to_xml__Var_48;
        MR_Word mercury__term_to_xml__Var_49;

        {
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_47_47);
        }
        {
          mercury__term_to_xml__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_48, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
        }
        {
          mercury__term_to_xml__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_49, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
        }
        {
          mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__Var_48, mercury__term_to_xml__Var_49, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_47_47, mercury__term_to_xml__STATE_VARIABLE_State_33);
        }
      }
    else
      {
        MR_Word mercury__term_to_xml__ChildMaybeFieldNames_31;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_36_36;
        MR_Word mercury__term_to_xml__Var_37;
        MR_Word mercury__term_to_xml__Var_38;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_39_39;
        MR_Integer mercury__term_to_xml__Var_40;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_43_43;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_44_44;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_11_64;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_65;
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          mercury__term_to_xml__ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__Functor_20, mercury__term_to_xml__Arity_21);
        }
        {
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
        }
        {
          mercury__term_to_xml__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_37, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
        }
        {
          mercury__term_to_xml__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_38, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
        }
        {
          mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__Var_37, mercury__term_to_xml__Var_38, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_36_36, &mercury__term_to_xml__STATE_VARIABLE_State_39_39);
        }
        mercury__term_to_xml__Var_40 = (mercury__term_to_xml__IndentLevel_13 + (MR_Integer) 1);
        {
          mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_p_2(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__Var_40, mercury__term_to_xml__Args_22, mercury__term_to_xml__ChildMaybeFieldNames_31, mercury__term_to_xml__STATE_VARIABLE_State_39_39, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
        }
        {
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_41_41, &mercury__term_to_xml__STATE_VARIABLE_State_43_43);
        }
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_11_64);
        }
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) (mercury__term_to_xml__Element_26)), mercury__term_to_xml__STATE_VARIABLE_State_11_64, &mercury__term_to_xml__STATE_VARIABLE_State_12_65);
        }
        mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_65, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
        }
        mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, mercury__term_to_xml__STATE_VARIABLE_State_33);
        }
      }
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_1(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_51,
  MR_Box mercury__term_to_xml__Stream_10,
  MR_Word mercury__term_to_xml__NonCanon_11,
  MR_Word mercury__term_to_xml__MakeElement_12,
  MR_Integer mercury__term_to_xml__IndentLevel_13,
  MR_Word mercury__term_to_xml__Univ_14,
  MR_Word mercury__term_to_xml__MaybeFieldNames_15,
  MR_Word * mercury__term_to_xml__RemainingMaybeFieldNames_16,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_32,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_33)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__TypeInfo_52_52;
    MR_Word mercury__term_to_xml__MaybeFieldName_18;
    MR_Box mercury__term_to_xml__Term_19;
    MR_String mercury__term_to_xml__Functor_20;
    MR_Integer mercury__term_to_xml__Arity_21;
    MR_Word mercury__term_to_xml__Args_22;
    MR_Word mercury__term_to_xml__TypeDesc_23;
    MR_Word mercury__term_to_xml__Request_25;
    MR_String mercury__term_to_xml__Element_26;
    MR_Word mercury__term_to_xml__AttrFromSources_27;
    MR_Box mercury__term_to_xml__Var_53;
    MR_Integer mercury__term_to_xml__Var_24;
    MR_Integer mercury__term_to_xml__Var_57;
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
    MR_Box mercury__term_to_xml__conv2_Element_26;
    MR_Box mercury__term_to_xml__conv1_AttrFromSources_27;
    MR_String mercury__term_to_xml__PrimValue_28;

    if ((mercury__term_to_xml__MaybeFieldNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__term_to_xml__MaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        mercury__term_to_xml__MaybeFieldName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 0)));
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 1)));
      }
    mercury__term_to_xml__TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 0)));
    mercury__term_to_xml__Term_19 = (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 1));
    {
      mercury__deconstruct__deconstruct_5_p_1(mercury__term_to_xml__TypeInfo_52_52, mercury__term_to_xml__Term_19, mercury__term_to_xml__NonCanon_11, &mercury__term_to_xml__Functor_20, &mercury__term_to_xml__Arity_21, &mercury__term_to_xml__Args_22);
    }
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_52_52 ;
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
	 mercury__term_to_xml__TypeDesc_23  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_1

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_23 ;
		{
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__Var_24  = Functors;
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__term_to_xml__succeeded)
      {
        mercury__term_to_xml__Var_57 = (MR_Integer) -1;
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_24 > mercury__term_to_xml__Var_57);
      }
    if (mercury__term_to_xml__succeeded)
      {
        mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 1) = ((MR_Box) (mercury__term_to_xml__Arity_21));
      }
    else
      mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_12, (MR_Integer) 1)));
    {
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__MakeElement_12), ((MR_Box) (mercury__term_to_xml__TypeDesc_23)), ((MR_Box) (mercury__term_to_xml__Request_25)), &mercury__term_to_xml__conv2_Element_26, &mercury__term_to_xml__conv1_AttrFromSources_27);
    }
    mercury__term_to_xml__Element_26 = ((MR_String) mercury__term_to_xml__conv2_Element_26);
    mercury__term_to_xml__AttrFromSources_27 = ((MR_Word) mercury__term_to_xml__conv1_AttrFromSources_27);
    {
      mercury__term_to_xml__succeeded = mercury__term_to_xml__primitive_value_2_p_0(mercury__term_to_xml__Univ_14, &mercury__term_to_xml__PrimValue_28);
    }
    if (mercury__term_to_xml__succeeded)
      {
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_34_34;

        {
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_34_34);
        }
        {
          mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__PrimValue_28, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_34_34, mercury__term_to_xml__STATE_VARIABLE_State_33);
        }
      }
    else
    if ((mercury__term_to_xml__Args_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_47_47;
        MR_Word mercury__term_to_xml__Var_48;
        MR_Word mercury__term_to_xml__Var_49;

        {
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_47_47);
        }
        {
          mercury__term_to_xml__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_48, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
        }
        {
          mercury__term_to_xml__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_49, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
        }
        {
          mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__Var_48, mercury__term_to_xml__Var_49, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_47_47, mercury__term_to_xml__STATE_VARIABLE_State_33);
        }
      }
    else
      {
        MR_Word mercury__term_to_xml__ChildMaybeFieldNames_31;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_36_36;
        MR_Word mercury__term_to_xml__Var_37;
        MR_Word mercury__term_to_xml__Var_38;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_39_39;
        MR_Integer mercury__term_to_xml__Var_40;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_43_43;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_44_44;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_11_64;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_65;
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          mercury__term_to_xml__ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__Functor_20, mercury__term_to_xml__Arity_21);
        }
        {
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
        }
        {
          mercury__term_to_xml__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_37, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
        }
        {
          mercury__term_to_xml__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_38, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
        }
        {
          mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__Var_37, mercury__term_to_xml__Var_38, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_36_36, &mercury__term_to_xml__STATE_VARIABLE_State_39_39);
        }
        mercury__term_to_xml__Var_40 = (mercury__term_to_xml__IndentLevel_13 + (MR_Integer) 1);
        {
          mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_p_1(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__Var_40, mercury__term_to_xml__Args_22, mercury__term_to_xml__ChildMaybeFieldNames_31, mercury__term_to_xml__STATE_VARIABLE_State_39_39, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
        }
        {
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_41_41, &mercury__term_to_xml__STATE_VARIABLE_State_43_43);
        }
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_11_64);
        }
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) (mercury__term_to_xml__Element_26)), mercury__term_to_xml__STATE_VARIABLE_State_11_64, &mercury__term_to_xml__STATE_VARIABLE_State_12_65);
        }
        mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_65, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
        }
        mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, mercury__term_to_xml__STATE_VARIABLE_State_33);
        }
      }
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_51,
  MR_Box mercury__term_to_xml__Stream_10,
  MR_Word mercury__term_to_xml__NonCanon_11,
  MR_Word mercury__term_to_xml__MakeElement_12,
  MR_Integer mercury__term_to_xml__IndentLevel_13,
  MR_Word mercury__term_to_xml__Univ_14,
  MR_Word mercury__term_to_xml__MaybeFieldNames_15,
  MR_Word * mercury__term_to_xml__RemainingMaybeFieldNames_16,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_32,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_33)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__TypeInfo_52_52;
    MR_Word mercury__term_to_xml__MaybeFieldName_18;
    MR_Box mercury__term_to_xml__Term_19;
    MR_String mercury__term_to_xml__Functor_20;
    MR_Integer mercury__term_to_xml__Arity_21;
    MR_Word mercury__term_to_xml__Args_22;
    MR_Word mercury__term_to_xml__TypeDesc_23;
    MR_Word mercury__term_to_xml__Request_25;
    MR_String mercury__term_to_xml__Element_26;
    MR_Word mercury__term_to_xml__AttrFromSources_27;
    MR_Box mercury__term_to_xml__Var_53;
    MR_Integer mercury__term_to_xml__Var_24;
    MR_Integer mercury__term_to_xml__Var_57;
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
    MR_Box mercury__term_to_xml__conv2_Element_26;
    MR_Box mercury__term_to_xml__conv1_AttrFromSources_27;
    MR_String mercury__term_to_xml__PrimValue_28;

    if ((mercury__term_to_xml__MaybeFieldNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__term_to_xml__MaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        mercury__term_to_xml__MaybeFieldName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 0)));
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 1)));
      }
    mercury__term_to_xml__TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 0)));
    mercury__term_to_xml__Term_19 = (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 1));
    {
      mercury__deconstruct__deconstruct_5_p_0(mercury__term_to_xml__TypeInfo_52_52, mercury__term_to_xml__Term_19, mercury__term_to_xml__NonCanon_11, &mercury__term_to_xml__Functor_20, &mercury__term_to_xml__Arity_21, &mercury__term_to_xml__Args_22);
    }
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_52_52 ;
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
	 mercury__term_to_xml__TypeDesc_23  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_23 ;
		{
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__Var_24  = Functors;
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__term_to_xml__succeeded)
      {
        mercury__term_to_xml__Var_57 = (MR_Integer) -1;
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_24 > mercury__term_to_xml__Var_57);
      }
    if (mercury__term_to_xml__succeeded)
      {
        mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 1) = ((MR_Box) (mercury__term_to_xml__Arity_21));
      }
    else
      mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_12, (MR_Integer) 1)));
    {
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__MakeElement_12), ((MR_Box) (mercury__term_to_xml__TypeDesc_23)), ((MR_Box) (mercury__term_to_xml__Request_25)), &mercury__term_to_xml__conv2_Element_26, &mercury__term_to_xml__conv1_AttrFromSources_27);
    }
    mercury__term_to_xml__Element_26 = ((MR_String) mercury__term_to_xml__conv2_Element_26);
    mercury__term_to_xml__AttrFromSources_27 = ((MR_Word) mercury__term_to_xml__conv1_AttrFromSources_27);
    {
      mercury__term_to_xml__succeeded = mercury__term_to_xml__primitive_value_2_p_0(mercury__term_to_xml__Univ_14, &mercury__term_to_xml__PrimValue_28);
    }
    if (mercury__term_to_xml__succeeded)
      {
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_34_34;

        {
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_34_34);
        }
        {
          mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__PrimValue_28, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_34_34, mercury__term_to_xml__STATE_VARIABLE_State_33);
        }
      }
    else
    if ((mercury__term_to_xml__Args_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_47_47;
        MR_Word mercury__term_to_xml__Var_48;
        MR_Word mercury__term_to_xml__Var_49;

        {
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_47_47);
        }
        {
          mercury__term_to_xml__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_48, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
        }
        {
          mercury__term_to_xml__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_49, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
        }
        {
          mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__Var_48, mercury__term_to_xml__Var_49, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_47_47, mercury__term_to_xml__STATE_VARIABLE_State_33);
        }
      }
    else
      {
        MR_Word mercury__term_to_xml__ChildMaybeFieldNames_31;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_36_36;
        MR_Word mercury__term_to_xml__Var_37;
        MR_Word mercury__term_to_xml__Var_38;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_39_39;
        MR_Integer mercury__term_to_xml__Var_40;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_43_43;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_44_44;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_11_64;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_65;
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          mercury__term_to_xml__ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__Functor_20, mercury__term_to_xml__Arity_21);
        }
        {
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
        }
        {
          mercury__term_to_xml__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_37, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
        }
        {
          mercury__term_to_xml__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_38, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
        }
        {
          mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__Var_37, mercury__term_to_xml__Var_38, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_36_36, &mercury__term_to_xml__STATE_VARIABLE_State_39_39);
        }
        mercury__term_to_xml__Var_40 = (mercury__term_to_xml__IndentLevel_13 + (MR_Integer) 1);
        {
          mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__Var_40, mercury__term_to_xml__Args_22, mercury__term_to_xml__ChildMaybeFieldNames_31, mercury__term_to_xml__STATE_VARIABLE_State_39_39, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
        }
        {
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_41_41, &mercury__term_to_xml__STATE_VARIABLE_State_43_43);
        }
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_11_64);
        }
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) (mercury__term_to_xml__Element_26)), mercury__term_to_xml__STATE_VARIABLE_State_11_64, &mercury__term_to_xml__STATE_VARIABLE_State_12_65);
        }
        mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_65, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
        }
        mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, mercury__term_to_xml__STATE_VARIABLE_State_33);
        }
      }
  }
}

static void MR_CALL 
mercury__term_to_xml__maybe_indent_5_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_13,
  MR_Box mercury__term_to_xml__Stream_6,
  MR_Word mercury__term_to_xml__Format_7,
  MR_Integer mercury__term_to_xml__Indent_8,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_10,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_11)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    switch (mercury__term_to_xml__Format_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_13, mercury__term_to_xml__Stream_6, mercury__term_to_xml__Indent_8, mercury__term_to_xml__STATE_VARIABLE_State_0_10, mercury__term_to_xml__STATE_VARIABLE_State_11);
        }
        break;
      case (MR_Integer) 1:
        *mercury__term_to_xml__STATE_VARIABLE_State_11 = mercury__term_to_xml__STATE_VARIABLE_State_0_10;
        break;
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__maybe_nl_4_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_15,
  MR_Box mercury__term_to_xml__HeadVar__1_1,
  MR_Word mercury__term_to_xml__HeadVar__2_2,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_3,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_4)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    switch (mercury__term_to_xml__HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_15), mercury__term_to_xml__HeadVar__1_1, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_0_3, mercury__term_to_xml__STATE_VARIABLE_State_4);
          }
        }
        break;
      case (MR_Integer) 1:
        *mercury__term_to_xml__STATE_VARIABLE_State_4 = mercury__term_to_xml__STATE_VARIABLE_State_0_3;
        break;
    }
  }
}

MR_bool MR_CALL 
mercury__term_to_xml__contains_noformat_xml_1_p_0(
  MR_Word mercury__term_to_xml__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word mercury__term_to_xml__XML_2;
        MR_Word mercury__term_to_xml__Rest_3;

        if (mercury__term_to_xml__succeeded)
          {
            mercury__term_to_xml__XML_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
            mercury__term_to_xml__Rest_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
            switch (MR_tag((MR_Word) mercury__term_to_xml__XML_2)) {
              default:
                mercury__term_to_xml__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                mercury__term_to_xml__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__XML_2, (MR_Integer) 0)))) {
                  default:
                    mercury__term_to_xml__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    mercury__term_to_xml__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    mercury__term_to_xml__succeeded = MR_TRUE;
                    break;
                }
                break;
            }
            if (!(mercury__term_to_xml__succeeded))
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__term_to_xml__next_value_of_HeadVar__1_1 = mercury__term_to_xml__Rest_3;

                  mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return mercury__term_to_xml__succeeded;
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__term_to_xml__can_format_siblings_1_f_0(
  MR_Word mercury__term_to_xml__HeadVar__1_1)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__HeadVar__2_2;

    switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return mercury__term_to_xml__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_format_6_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_62,
  MR_Box mercury__term_to_xml__Stream_7,
  MR_Word mercury__term_to_xml__Format_8,
  MR_Integer mercury__term_to_xml__IndentLevel_9,
  MR_Word mercury__term_to_xml__XML_10,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_24,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_25)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    switch (MR_tag((MR_Word) mercury__term_to_xml__XML_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String mercury__term_to_xml__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__XML_10, (MR_Integer) 0)));
          MR_Word mercury__term_to_xml__Attrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__XML_10, (MR_Integer) 1)));
          MR_Word mercury__term_to_xml__Children_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__XML_10, (MR_Integer) 2)));
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_49_49;

          {
            mercury__term_to_xml__maybe_indent_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Format_8, mercury__term_to_xml__IndentLevel_9, mercury__term_to_xml__STATE_VARIABLE_State_0_24, &mercury__term_to_xml__STATE_VARIABLE_State_49_49);
          }
          if ((mercury__term_to_xml__Children_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_60_60;

              {
                mercury__term_to_xml__write_empty_element_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Name_12, mercury__term_to_xml__Attrs_13, mercury__term_to_xml__STATE_VARIABLE_State_49_49, &mercury__term_to_xml__STATE_VARIABLE_State_60_60);
              }
              {
                mercury__term_to_xml__maybe_nl_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Format_8, mercury__term_to_xml__STATE_VARIABLE_State_60_60, mercury__term_to_xml__STATE_VARIABLE_State_25);
              }
            }
          else
            {
              MR_Word mercury__term_to_xml__ChildrenFormat_17;
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_50_50;
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_52_52;
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_54_54;
              MR_Integer mercury__term_to_xml__Var_55;
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_57_57;
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_58_58;

              {
                mercury__term_to_xml__write_element_start_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Name_12, mercury__term_to_xml__Attrs_13, mercury__term_to_xml__STATE_VARIABLE_State_49_49, &mercury__term_to_xml__STATE_VARIABLE_State_50_50);
              }
              {
                mercury__term_to_xml__succeeded = mercury__term_to_xml__contains_noformat_xml_1_p_0(mercury__term_to_xml__Children_14);
              }
              if (mercury__term_to_xml__succeeded)
                {
                  mercury__term_to_xml__ChildrenFormat_17 = (MR_Integer) 1;
                  mercury__term_to_xml__STATE_VARIABLE_State_52_52 = mercury__term_to_xml__STATE_VARIABLE_State_50_50;
                }
              else
                {
                  void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                  mercury__term_to_xml__ChildrenFormat_17 = (MR_Integer) 0;
                  mercury__term_to_xml__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
                  {
                    mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_50_50, &mercury__term_to_xml__STATE_VARIABLE_State_52_52);
                  }
                }
              mercury__term_to_xml__Var_55 = (mercury__term_to_xml__IndentLevel_9 + (MR_Integer) 1);
              {
                mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__ChildrenFormat_17, mercury__term_to_xml__Var_55, mercury__term_to_xml__Children_14, mercury__term_to_xml__STATE_VARIABLE_State_52_52, &mercury__term_to_xml__STATE_VARIABLE_State_54_54);
              }
              {
                mercury__term_to_xml__maybe_indent_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__ChildrenFormat_17, mercury__term_to_xml__IndentLevel_9, mercury__term_to_xml__STATE_VARIABLE_State_54_54, &mercury__term_to_xml__STATE_VARIABLE_State_57_57);
              }
              {
                mercury__term_to_xml__write_element_end_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Name_12, mercury__term_to_xml__STATE_VARIABLE_State_57_57, &mercury__term_to_xml__STATE_VARIABLE_State_58_58);
              }
              {
                mercury__term_to_xml__maybe_nl_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Format_8, mercury__term_to_xml__STATE_VARIABLE_State_58_58, mercury__term_to_xml__STATE_VARIABLE_State_25);
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String mercury__term_to_xml__Data_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__XML_10, (MR_Integer) 0)));

          {
            mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Data_18, mercury__term_to_xml__STATE_VARIABLE_State_0_24, mercury__term_to_xml__STATE_VARIABLE_State_25);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String mercury__term_to_xml__CData_19 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__XML_10, (MR_Integer) 0)));
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_43_43;
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_44_44;
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_46_46;
          void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          switch (mercury__term_to_xml__Format_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__IndentLevel_9, mercury__term_to_xml__STATE_VARIABLE_State_0_24, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
              }
              break;
            case (MR_Integer) 1:
              mercury__term_to_xml__STATE_VARIABLE_State_41_41 = mercury__term_to_xml__STATE_VARIABLE_State_0_24;
              break;
          }
          mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<![CDATA[")), mercury__term_to_xml__STATE_VARIABLE_State_41_41, &mercury__term_to_xml__STATE_VARIABLE_State_43_43);
          }
          mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__CData_19)), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
          }
          mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "]]>")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, &mercury__term_to_xml__STATE_VARIABLE_State_46_46);
          }
          switch (mercury__term_to_xml__Format_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));

                {
                  mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_46_46, mercury__term_to_xml__STATE_VARIABLE_State_25);
                }
              }
              break;
            case (MR_Integer) 1:
              *mercury__term_to_xml__STATE_VARIABLE_State_25 = mercury__term_to_xml__STATE_VARIABLE_State_46_46;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__XML_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String mercury__term_to_xml__Comment_20 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__XML_10, (MR_Integer) 1)));
              MR_String mercury__term_to_xml__EscapedComment_21;
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_32_32;
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_34_34;
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_37_37;
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_39_39;
              void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              switch (mercury__term_to_xml__Format_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__IndentLevel_9, mercury__term_to_xml__STATE_VARIABLE_State_0_24, &mercury__term_to_xml__STATE_VARIABLE_State_32_32);
                  }
                  break;
                case (MR_Integer) 1:
                  mercury__term_to_xml__STATE_VARIABLE_State_32_32 = mercury__term_to_xml__STATE_VARIABLE_State_0_24;
                  break;
              }
              mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<!-- ")), mercury__term_to_xml__STATE_VARIABLE_State_32_32, &mercury__term_to_xml__STATE_VARIABLE_State_34_34);
              }
              {
                mercury__string__replace_all_4_p_0(mercury__term_to_xml__Comment_20, (MR_String) "--", (MR_String) " - ", &mercury__term_to_xml__EscapedComment_21);
              }
              mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__EscapedComment_21)), mercury__term_to_xml__STATE_VARIABLE_State_34_34, &mercury__term_to_xml__STATE_VARIABLE_State_37_37);
              }
              mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " -->")), mercury__term_to_xml__STATE_VARIABLE_State_37_37, &mercury__term_to_xml__STATE_VARIABLE_State_39_39);
              }
              {
                mercury__term_to_xml__maybe_nl_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Format_8, mercury__term_to_xml__STATE_VARIABLE_State_39_39, mercury__term_to_xml__STATE_VARIABLE_State_25);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String mercury__term_to_xml__EntityName_22 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__XML_10, (MR_Integer) 1)));
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;
              MR_String mercury__term_to_xml__Var_29;
              void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
              void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "&")), mercury__term_to_xml__STATE_VARIABLE_State_0_24, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
              }
              {
                mercury__term_to_xml__Var_29 = mercury__string__f_43_43_2_f_0(mercury__term_to_xml__EntityName_22, (MR_String) ";");
              }
              mercury__term_to_xml__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__Var_29)), mercury__term_to_xml__STATE_VARIABLE_State_28_28, mercury__term_to_xml__STATE_VARIABLE_State_25);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String mercury__term_to_xml__RawString_23 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__XML_10, (MR_Integer) 1)));
              void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));

              {
                mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__RawString_23)), mercury__term_to_xml__STATE_VARIABLE_State_0_24, mercury__term_to_xml__STATE_VARIABLE_State_25);
              }
            }
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
mercury__term_to_xml__primitive_value_2_p_0(
  MR_Word mercury__term_to_xml__Univ_3,
  MR_String * mercury__term_to_xml__PrimValue_4)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_String mercury__term_to_xml__String_5;
    MR_Word mercury__term_to_xml__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Box mercury__term_to_xml__conv0_String_5;

    {
      mercury__term_to_xml__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__term_to_xml__TypeCtorInfo_9_9, &mercury__term_to_xml__conv0_String_5, mercury__term_to_xml__Univ_3);
    }
    if (mercury__term_to_xml__succeeded)
      {
        mercury__term_to_xml__String_5 = ((MR_String) mercury__term_to_xml__conv0_String_5);
        mercury__term_to_xml__succeeded = MR_TRUE;
      }
    if (mercury__term_to_xml__succeeded)
      {
        *mercury__term_to_xml__PrimValue_4 = mercury__term_to_xml__String_5;
        mercury__term_to_xml__succeeded = MR_TRUE;
      }
    else
      {
        MR_Char mercury__term_to_xml__Char_6;
        MR_Word mercury__term_to_xml__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
        MR_Box mercury__term_to_xml__conv1_Char_6;

        {
          mercury__term_to_xml__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__term_to_xml__TypeCtorInfo_10_10, &mercury__term_to_xml__conv1_Char_6, mercury__term_to_xml__Univ_3);
        }
        if (mercury__term_to_xml__succeeded)
          {
            mercury__term_to_xml__Char_6 = ((MR_Char) (MR_Word) mercury__term_to_xml__conv1_Char_6);
            mercury__term_to_xml__succeeded = MR_TRUE;
          }
        if (mercury__term_to_xml__succeeded)
          {
            MR_Word mercury__term_to_xml__V_5_21;
            MR_Word mercury__term_to_xml__V_6_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__term_to_xml__V_5_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_5_21, 0) = ((MR_Box) (MR_Word) (mercury__term_to_xml__Char_6));
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_5_21, 1) = ((MR_Box) (mercury__term_to_xml__V_6_22));
            }
            {
              mercury__string__to_char_list_2_p_1(mercury__term_to_xml__PrimValue_4, mercury__term_to_xml__V_5_21);
            }
            mercury__term_to_xml__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer mercury__term_to_xml__Int_7;
            MR_Word mercury__term_to_xml__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Box mercury__term_to_xml__conv2_Int_7;

            {
              mercury__term_to_xml__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__term_to_xml__TypeCtorInfo_11_11, &mercury__term_to_xml__conv2_Int_7, mercury__term_to_xml__Univ_3);
            }
            if (mercury__term_to_xml__succeeded)
              {
                mercury__term_to_xml__Int_7 = ((MR_Integer) mercury__term_to_xml__conv2_Int_7);
                mercury__term_to_xml__succeeded = MR_TRUE;
              }
            if (mercury__term_to_xml__succeeded)
              {
                {
                  mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__Int_7, (MR_Integer) 10, mercury__term_to_xml__PrimValue_4);
                }
                mercury__term_to_xml__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word mercury__term_to_xml__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
                MR_Float mercury__term_to_xml__Float_8;
                MR_Box mercury__term_to_xml__conv3_Float_8;

                {
                  mercury__term_to_xml__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__term_to_xml__TypeCtorInfo_12_12, &mercury__term_to_xml__conv3_Float_8, mercury__term_to_xml__Univ_3);
                }
                if (mercury__term_to_xml__succeeded)
                  {
                    mercury__term_to_xml__Float_8 = MR_unbox_float(mercury__term_to_xml__conv3_Float_8);
                    mercury__term_to_xml__succeeded = MR_TRUE;
                  }
                if (mercury__term_to_xml__succeeded)
                  {
{
#define MR_PROC_LABEL mercury__term_to_xml__primitive_value_2_p_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__term_to_xml__Float_8 ;
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
	 *mercury__term_to_xml__PrimValue_4  = Str;
}
                    mercury__term_to_xml__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return mercury__term_to_xml__succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml__get_elements_and_args_7_p_0(
  MR_Word mercury__term_to_xml__MakeElement_8,
  MR_Word mercury__term_to_xml__TypeDesc_9,
  MR_Word * mercury__term_to_xml__Elements_10,
  MR_Word * mercury__term_to_xml__MaybeFunctors_11,
  MR_Word * mercury__term_to_xml__MaybeArities_12,
  MR_Word * mercury__term_to_xml__ArgTypeLists_13,
  MR_Word * mercury__term_to_xml__AttributeLists_14)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Integer mercury__term_to_xml__NumFunctors_15;
    MR_Integer mercury__term_to_xml__Var_81;

{
#define MR_PROC_LABEL mercury__term_to_xml__get_elements_and_args_7_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_9 ;
		{
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__NumFunctors_15  = Functors;
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__term_to_xml__succeeded)
      {
        mercury__term_to_xml__Var_81 = (MR_Integer) -1;
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__NumFunctors_15 > mercury__term_to_xml__Var_81);
      }
    if (mercury__term_to_xml__succeeded)
      {
        MR_Word mercury__term_to_xml__FunctorNums_16;
        MR_Integer mercury__term_to_xml__Var_30 = (mercury__term_to_xml__NumFunctors_15 - (MR_Integer) 1);
        MR_Word mercury__term_to_xml__V_7_85 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__term_to_xml__Functors_17;
        MR_Word mercury__term_to_xml__Arities_18;
        MR_Word mercury__term_to_xml__ArgTypeLists0_19;

        {
          mercury__list__successive_integers_4_p_0((MR_Integer) 0, mercury__term_to_xml__Var_30, mercury__term_to_xml__V_7_85, &mercury__term_to_xml__FunctorNums_16);
        }
        {
          mercury__term_to_xml__succeeded = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(mercury__term_to_xml__TypeDesc_9, mercury__term_to_xml__FunctorNums_16, &mercury__term_to_xml__Functors_17, &mercury__term_to_xml__Arities_18, &mercury__term_to_xml__ArgTypeLists0_19);
        }
        if (mercury__term_to_xml__succeeded)
          {
            MR_Word mercury__term_to_xml__Requests_21;

            {
              *mercury__term_to_xml__MaybeFunctors_11 = mercury__term_to_xml__map__ho23_2_f_in__list_0(mercury__term_to_xml__Functors_17);
            }
            {
              *mercury__term_to_xml__MaybeArities_12 = mercury__term_to_xml__map__ho22_2_f_in__list_0(mercury__term_to_xml__Arities_18);
            }
            *mercury__term_to_xml__ArgTypeLists_13 = mercury__term_to_xml__ArgTypeLists0_19;
            {
              mercury__term_to_xml__Requests_21 = mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(mercury__term_to_xml__Functors_17, mercury__term_to_xml__Arities_18);
            }
            {
              mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(mercury__term_to_xml__MakeElement_8, mercury__term_to_xml__TypeDesc_9, mercury__term_to_xml__Requests_21, mercury__term_to_xml__Elements_10, mercury__term_to_xml__AttributeLists_14);
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "term_to_xml", (MR_String) "predicate \140term_to_xml.get_elements_and_args\'/7", (MR_String) "get_functor failed for discriminated union");
              return;
            }
          }
      }
    else
      {
        MR_String mercury__term_to_xml__Element_26;
        MR_Word mercury__term_to_xml__AttrFromSources_27;
        MR_Word mercury__term_to_xml__Var_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__term_to_xml__Var_47;
        MR_Word mercury__term_to_xml__Var_48;
        MR_Word mercury__term_to_xml__Var_49;
        MR_Word mercury__term_to_xml__Var_50;
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_8, (MR_Integer) 1)));
        MR_Box mercury__term_to_xml__conv2_Element_26;
        MR_Box mercury__term_to_xml__conv1_AttrFromSources_27;
        MR_Word mercury__term_to_xml__ArgType_28;

        {
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__MakeElement_8), ((MR_Box) (mercury__term_to_xml__TypeDesc_9)), ((MR_Box) (mercury__term_to_xml__Var_46)), &mercury__term_to_xml__conv2_Element_26, &mercury__term_to_xml__conv1_AttrFromSources_27);
        }
        mercury__term_to_xml__Element_26 = ((MR_String) mercury__term_to_xml__conv2_Element_26);
        mercury__term_to_xml__AttrFromSources_27 = ((MR_Word) mercury__term_to_xml__conv1_AttrFromSources_27);
        mercury__term_to_xml__Var_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__term_to_xml__Elements_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__Element_26));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__Var_47));
        }
        mercury__term_to_xml__Var_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__term_to_xml__AttributeLists_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__AttrFromSources_27));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__Var_48));
        }
        mercury__term_to_xml__Var_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__term_to_xml__Var_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__term_to_xml__MaybeFunctors_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[19]);
        *mercury__term_to_xml__MaybeArities_12 = (MR_Word) *mercury__term_to_xml__MaybeFunctors_11;
        {
          mercury__term_to_xml__succeeded = mercury__term_to_xml__is_array_2_p_0(mercury__term_to_xml__TypeDesc_9, &mercury__term_to_xml__ArgType_28);
        }
        if (mercury__term_to_xml__succeeded)
          {
            MR_Word mercury__term_to_xml__Var_53;
            MR_Word mercury__term_to_xml__Var_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word mercury__term_to_xml__Var_55;

            {
              mercury__term_to_xml__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_53, 0) = ((MR_Box) (mercury__term_to_xml__ArgType_28));
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_53, 1) = ((MR_Box) (mercury__term_to_xml__Var_54));
            }
            mercury__term_to_xml__Var_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__term_to_xml__ArgTypeLists_13 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__Var_53));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__Var_55));
            }
          }
        else
          {
            MR_Word mercury__term_to_xml__Var_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word mercury__term_to_xml__Var_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            *mercury__term_to_xml__ArgTypeLists_13 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[20]);
          }
      }
  }
}

static void MR_CALL 
mercury__term_to_xml__mangle_char_3_p_0(
  MR_Char mercury__term_to_xml__Chr_4,
  MR_Word mercury__term_to_xml__PrevChrs_5,
  MR_Word * mercury__term_to_xml__HeadVar__3_3)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
    MR_Word mercury__term_to_xml__Chrs_6;

    {
      mercury__term_to_xml__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(mercury__term_to_xml__Chr_4);
    }
    if (mercury__term_to_xml__succeeded)
      {
        MR_Word mercury__term_to_xml__Var_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__term_to_xml__Chrs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Chrs_6, 0) = ((MR_Box) (MR_Word) (mercury__term_to_xml__Chr_4));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Chrs_6, 1) = ((MR_Box) (mercury__term_to_xml__Var_7));
        }
      }
    else
      {
        MR_Word mercury__term_to_xml__Var_9;
        MR_String mercury__term_to_xml__Var_10;
        MR_Integer mercury__term_to_xml__Var_11;

{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_char_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_to_xml__Chr_4 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Var_11  = Int;
}
        {
          mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__Var_11, (MR_Integer) 10, &mercury__term_to_xml__Var_10);
        }
        {
          mercury__string__to_char_list_2_p_0(mercury__term_to_xml__Var_10, &mercury__term_to_xml__Var_9);
        }
        {
          mercury__term_to_xml__Chrs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Chrs_6, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Chrs_6, 1) = ((MR_Box) (mercury__term_to_xml__Var_9));
        }
      }
    {
      mercury__list__append_3_p_1(mercury__term_to_xml__TypeCtorInfo_12_12, mercury__term_to_xml__PrevChrs_5, mercury__term_to_xml__Chrs_6, mercury__term_to_xml__HeadVar__3_3);
    }
  }
}

static MR_String MR_CALL 
mercury__term_to_xml__mangle_1_f_0(
  MR_String mercury__term_to_xml__Functor_3)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_String mercury__term_to_xml__Element_4;
    MR_String mercury__term_to_xml__Head_5;
    MR_String mercury__term_to_xml__Tail_6;
    MR_String mercury__term_to_xml__First_7;
    MR_String mercury__term_to_xml__Rest_8;
    MR_Word mercury__term_to_xml__ElementChrs_9;
    MR_Word mercury__term_to_xml__Var_12;
    MR_String mercury__term_to_xml__Var_13;
    MR_Integer mercury__term_to_xml__V_8_32;
    MR_Integer mercury__term_to_xml__V_13_44;
    MR_Integer mercury__term_to_xml__V_17_45;
    MR_String mercury__term_to_xml__Var_18;

    {
      mercury__string__split_4_p_0(mercury__term_to_xml__Functor_3, (MR_Integer) 1, &mercury__term_to_xml__Head_5, &mercury__term_to_xml__Tail_6);
    }
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_to_xml__Head_5 ;
		{

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case 'a': case 'b': case 'c': case 'd': case 'e':
            case 'f': case 'g': case 'h': case 'i': case 'j':
            case 'k': case 'l': case 'm': case 'n': case 'o':
            case 'p': case 'q': case 'r': case 's': case 't':
            case 'u': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            case 'A': case 'B': case 'C': case 'D': case 'E':
            case 'F': case 'G': case 'H': case 'I': case 'J':
            case 'K': case 'L': case 'M': case 'N': case 'O':
            case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'U': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__term_to_xml__succeeded)
      {
        {
          mercury__string__to_lower_2_p_0(mercury__term_to_xml__Head_5, &mercury__term_to_xml__Var_18);
        }
        mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Head_5, mercury__term_to_xml__Var_18) == 0);
      }
    if (mercury__term_to_xml__succeeded)
      {
        mercury__term_to_xml__First_7 = mercury__term_to_xml__Head_5;
        mercury__term_to_xml__Rest_8 = mercury__term_to_xml__Tail_6;
      }
    else
      {
        mercury__term_to_xml__First_7 = (MR_String) "Tag_";
        {
          mercury__string__append_3_p_2(mercury__term_to_xml__Head_5, mercury__term_to_xml__Tail_6, &mercury__term_to_xml__Rest_8);
        }
      }
    mercury__term_to_xml__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_to_xml__Rest_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_8_32  = Length;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_to_xml__Rest_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_17_45  = Length;
}
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_8_32 < mercury__term_to_xml__V_17_45);
    if (mercury__term_to_xml__succeeded)
      mercury__term_to_xml__V_13_44 = mercury__term_to_xml__V_8_32;
    else
      mercury__term_to_xml__V_13_44 = mercury__term_to_xml__V_17_45;
    {
      mercury__term_to_xml__foldl_between_2__ho33_6_p_in__string_0(mercury__term_to_xml__Rest_8, (MR_Integer) 0, mercury__term_to_xml__V_13_44, mercury__term_to_xml__Var_12, &mercury__term_to_xml__ElementChrs_9);
    }
    {
      mercury__string__from_char_list_2_p_0(mercury__term_to_xml__ElementChrs_9, &mercury__term_to_xml__Var_13);
    }
    {
      mercury__string__append_3_p_2(mercury__term_to_xml__First_7, mercury__term_to_xml__Var_13, &mercury__term_to_xml__Element_4);
    }
    return mercury__term_to_xml__Element_4;
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml__is_primitive_type_2_p_0(
  MR_Word mercury__term_to_xml__TypeDesc_3,
  MR_String * mercury__term_to_xml__Element_4)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mercury__term_to_xml__Var_13;
    MR_String mercury__term_to_xml__Var_5;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_9_9 ;
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
	 mercury__term_to_xml__Var_13  = TypeInfo;
}
    {
      mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__Var_13);
    }
    if (mercury__term_to_xml__succeeded)
      {
        *mercury__term_to_xml__Element_4 = (MR_String) "String";
        mercury__term_to_xml__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word mercury__term_to_xml__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
        MR_Word mercury__term_to_xml__Var_14;
        MR_Char mercury__term_to_xml__Var_6;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_10_10 ;
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
	 mercury__term_to_xml__Var_14  = TypeInfo;
}
        {
          mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__Var_14);
        }
        if (mercury__term_to_xml__succeeded)
          {
            *mercury__term_to_xml__Element_4 = (MR_String) "Char";
            mercury__term_to_xml__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__term_to_xml__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Word mercury__term_to_xml__Var_15;
            MR_Integer mercury__term_to_xml__Var_7;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_11_11 ;
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
	 mercury__term_to_xml__Var_15  = TypeInfo;
}
            {
              mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__Var_15);
            }
            if (mercury__term_to_xml__succeeded)
              {
                *mercury__term_to_xml__Element_4 = (MR_String) "Int";
                mercury__term_to_xml__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word mercury__term_to_xml__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
                MR_Word mercury__term_to_xml__Var_16;
                MR_Float mercury__term_to_xml__Var_8;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_12_12 ;
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
	 mercury__term_to_xml__Var_16  = TypeInfo;
}
                {
                  mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__Var_16);
                }
                if (mercury__term_to_xml__succeeded)
                  {
                    *mercury__term_to_xml__Element_4 = (MR_String) "Float";
                    mercury__term_to_xml__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return mercury__term_to_xml__succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv3_Element_7;
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

    {
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv1_Element_7;
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

    {
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
  }
}

void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0(
  MR_Word mercury__term_to_xml__HeadVar__1_1,
  MR_Word * mercury__term_to_xml__HeadVar__2_2)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__term_to_xml__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__term_to_xml__HeadVar__2_2 = (MR_Word) &mercury__term_to_xml_scalar_common_3[21];
            break;
          case (MR_Integer) 1:
            *mercury__term_to_xml__HeadVar__2_2 = (MR_Word) &mercury__term_to_xml_scalar_common_3[22];
            break;
        }
        break;
      case (MR_Integer) 1:
        *mercury__term_to_xml__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
        break;
    }
  }
}

static MR_Word MR_CALL 
mercury__term_to_xml__all_attr_sources_0_f_0(void)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[18]);

    return mercury__term_to_xml__HeadVar__1_1;
  }
}

static void MR_CALL 
mercury__term_to_xml__make_simple_element_4_p_0(
  MR_Word mercury__term_to_xml__TypeDesc_5,
  MR_Word mercury__term_to_xml__MaybeFunctorInfo_6,
  MR_String * mercury__term_to_xml__Element_7,
  MR_Word * mercury__term_to_xml__AttrFromSources_8)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    if ((mercury__term_to_xml__MaybeFunctorInfo_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_String mercury__term_to_xml__PrimitiveElement_11;
        MR_Word mercury__term_to_xml__TypeCtorInfo_9_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word mercury__term_to_xml__Var_50;
        MR_String mercury__term_to_xml__Var_42;

{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_9_46 ;
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
	 mercury__term_to_xml__Var_50  = TypeInfo;
}
        {
          mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_5, mercury__term_to_xml__Var_50);
        }
        if (mercury__term_to_xml__succeeded)
          {
            mercury__term_to_xml__PrimitiveElement_11 = (MR_String) "String";
            mercury__term_to_xml__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__term_to_xml__TypeCtorInfo_10_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
            MR_Word mercury__term_to_xml__Var_51;
            MR_Char mercury__term_to_xml__Var_43;

{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_10_47 ;
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
	 mercury__term_to_xml__Var_51  = TypeInfo;
}
            {
              mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_5, mercury__term_to_xml__Var_51);
            }
            if (mercury__term_to_xml__succeeded)
              {
                mercury__term_to_xml__PrimitiveElement_11 = (MR_String) "Char";
                mercury__term_to_xml__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word mercury__term_to_xml__TypeCtorInfo_11_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                MR_Word mercury__term_to_xml__Var_52;
                MR_Integer mercury__term_to_xml__Var_44;

{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_11_48 ;
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
	 mercury__term_to_xml__Var_52  = TypeInfo;
}
                {
                  mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_5, mercury__term_to_xml__Var_52);
                }
                if (mercury__term_to_xml__succeeded)
                  {
                    mercury__term_to_xml__PrimitiveElement_11 = (MR_String) "Int";
                    mercury__term_to_xml__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Word mercury__term_to_xml__TypeCtorInfo_12_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
                    MR_Word mercury__term_to_xml__Var_53;
                    MR_Float mercury__term_to_xml__Var_45;

{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_12_49 ;
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
	 mercury__term_to_xml__Var_53  = TypeInfo;
}
                    {
                      mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_5, mercury__term_to_xml__Var_53);
                    }
                    if (mercury__term_to_xml__succeeded)
                      {
                        mercury__term_to_xml__PrimitiveElement_11 = (MR_String) "Float";
                        mercury__term_to_xml__succeeded = MR_TRUE;
                      }
                  }
              }
          }
        if (mercury__term_to_xml__succeeded)
          {
            *mercury__term_to_xml__Element_7 = mercury__term_to_xml__PrimitiveElement_11;
            *mercury__term_to_xml__AttrFromSources_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[12]);
          }
        else
          {
            MR_Word mercury__term_to_xml__PseudoTypeDesc_60;
            MR_Word mercury__term_to_xml__TypeCtor_61;
            MR_Word mercury__term_to_xml__ArgPseudoTypes_62;
            MR_Word mercury__term_to_xml__Var_63;
            MR_String mercury__term_to_xml__Var_64;
            MR_String mercury__term_to_xml__Var_65;
            MR_Word mercury__term_to_xml__Var_12;
            MR_String mercury__term_to_xml__V_5_68;
            MR_Integer mercury__term_to_xml__V_6_69;
            MR_String mercury__term_to_xml__V_5_72;
            MR_Integer mercury__term_to_xml__V_6_73;

{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_5 ;
		{

    PseudoTypeDesc = TypeDesc;


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__PseudoTypeDesc_60  = PseudoTypeDesc;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__term_to_xml__PseudoTypeDesc_60 ;
		{
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__TypeCtor_61  = TypeCtorDesc;
	 mercury__term_to_xml__ArgPseudoTypes_62  = ArgPseudoTypeInfos;
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__term_to_xml__succeeded)
              {
                mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__ArgPseudoTypes_62)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__term_to_xml__succeeded)
                  {
                    mercury__term_to_xml__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_62, (MR_Integer) 0)));
                    mercury__term_to_xml__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_62, (MR_Integer) 1)));
                    mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (mercury__term_to_xml__succeeded)
                      {
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_61 ;
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
	 mercury__term_to_xml__V_5_68  = TypeCtorModuleName;
	 mercury__term_to_xml__Var_64  = TypeCtorName;
	 mercury__term_to_xml__V_6_69  = TypeCtorArity;
}
                        mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_64, (MR_String) "array") == 0);
                        if (mercury__term_to_xml__succeeded)
                          {
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_61 ;
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
	 mercury__term_to_xml__Var_65  = TypeCtorModuleName;
	 mercury__term_to_xml__V_5_72  = TypeCtorName;
	 mercury__term_to_xml__V_6_73  = TypeCtorArity;
}
                            mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Var_65, (MR_String) "array") == 0);
                          }
                      }
                  }
              }
            if (mercury__term_to_xml__succeeded)
              {
                *mercury__term_to_xml__Element_7 = (MR_String) "Array";
                *mercury__term_to_xml__AttrFromSources_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[18]);
              }
            else
              {
                *mercury__term_to_xml__Element_7 = (MR_String) "Unknown";
                {
                  *mercury__term_to_xml__AttrFromSources_8 = mercury__term_to_xml__all_attr_sources_0_f_0();
                }
              }
          }
      }
    else
      {
        MR_String mercury__term_to_xml__Functor_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFunctorInfo_6, (MR_Integer) 0)));
        MR_Integer mercury__term_to_xml__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFunctorInfo_6, (MR_Integer) 1)));
        MR_String mercury__term_to_xml__ReservedElement_23;

        if ((strcmp(mercury__term_to_xml__Functor_9, (MR_String) "[]") == 0))
          {
            mercury__term_to_xml__ReservedElement_23 = (MR_String) "Nil";
            mercury__term_to_xml__succeeded = MR_TRUE;
          }
        else
        if ((strcmp(mercury__term_to_xml__Functor_9, (MR_String) "{}") == 0))
          {
            mercury__term_to_xml__ReservedElement_23 = (MR_String) "Tuple";
            mercury__term_to_xml__succeeded = MR_TRUE;
          }
        else
        if ((strcmp(mercury__term_to_xml__Functor_9, (MR_String) "[|]") == 0))
          {
            mercury__term_to_xml__ReservedElement_23 = (MR_String) "List";
            mercury__term_to_xml__succeeded = MR_TRUE;
          }
        else
          mercury__term_to_xml__succeeded = MR_FALSE;
        if (mercury__term_to_xml__succeeded)
          *mercury__term_to_xml__Element_7 = mercury__term_to_xml__ReservedElement_23;
        else
          {
            *mercury__term_to_xml__Element_7 = mercury__term_to_xml__mangle_1_f_0(mercury__term_to_xml__Functor_9);
          }
        *mercury__term_to_xml__AttrFromSources_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[18]);
      }
  }
}

static void MR_CALL 
mercury__term_to_xml__make_unique_element_4_p_0(
  MR_Word mercury__term_to_xml__TypeDesc_5,
  MR_Word mercury__term_to_xml__MaybeFunctorInfo_6,
  MR_String * mercury__term_to_xml__Element_7,
  MR_Word * mercury__term_to_xml__AttrFromSources_8)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    if ((mercury__term_to_xml__MaybeFunctorInfo_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_String mercury__term_to_xml__PrimitiveElement_12;

        {
          mercury__term_to_xml__succeeded = mercury__term_to_xml__is_primitive_type_2_p_0(mercury__term_to_xml__TypeDesc_5, &mercury__term_to_xml__PrimitiveElement_12);
        }
        if (mercury__term_to_xml__succeeded)
          {
            *mercury__term_to_xml__Element_7 = mercury__term_to_xml__PrimitiveElement_12;
            *mercury__term_to_xml__AttrFromSources_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[12]);
          }
        else
          {
            MR_Word mercury__term_to_xml__Var_13;

            {
              mercury__term_to_xml__succeeded = mercury__term_to_xml__is_array_2_p_0(mercury__term_to_xml__TypeDesc_5, &mercury__term_to_xml__Var_13);
            }
            if (mercury__term_to_xml__succeeded)
              {
                MR_String mercury__term_to_xml__Var_23;
                MR_String mercury__term_to_xml__Var_25;
                MR_String mercury__term_to_xml__Var_26;

                {
                  mercury__term_to_xml__Var_26 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_5);
                }
                {
                  mercury__term_to_xml__Var_25 = mercury__term_to_xml__mangle_1_f_0(mercury__term_to_xml__Var_26);
                }
                {
                  mercury__string__append_3_p_2((MR_String) "--", mercury__term_to_xml__Var_25, &mercury__term_to_xml__Var_23);
                }
                {
                  mercury__string__append_3_p_2((MR_String) "Array", mercury__term_to_xml__Var_23, mercury__term_to_xml__Element_7);
                }
                {
                  *mercury__term_to_xml__AttrFromSources_8 = mercury__term_to_xml__all_attr_sources_0_f_0();
                }
              }
            else
              {
                MR_String mercury__term_to_xml__Var_27;

                {
                  mercury__term_to_xml__Var_27 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_5);
                }
                {
                  *mercury__term_to_xml__Element_7 = mercury__term_to_xml__mangle_1_f_0(mercury__term_to_xml__Var_27);
                }
                {
                  *mercury__term_to_xml__AttrFromSources_8 = mercury__term_to_xml__all_attr_sources_0_f_0();
                }
              }
          }
      }
    else
      {
        MR_String mercury__term_to_xml__Functor_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFunctorInfo_6, (MR_Integer) 0)));
        MR_Integer mercury__term_to_xml__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFunctorInfo_6, (MR_Integer) 1)));
        MR_String mercury__term_to_xml__MangledElement_11;
        MR_String mercury__term_to_xml__Var_28;
        MR_String mercury__term_to_xml__Var_30;
        MR_String mercury__term_to_xml__Var_31;
        MR_String mercury__term_to_xml__Var_32;
        MR_String mercury__term_to_xml__Var_34;
        MR_String mercury__term_to_xml__Var_35;
        MR_String mercury__term_to_xml__ReservedElement_38;

        if ((strcmp(mercury__term_to_xml__Functor_9, (MR_String) "[]") == 0))
          {
            mercury__term_to_xml__ReservedElement_38 = (MR_String) "Nil";
            mercury__term_to_xml__succeeded = MR_TRUE;
          }
        else
        if ((strcmp(mercury__term_to_xml__Functor_9, (MR_String) "{}") == 0))
          {
            mercury__term_to_xml__ReservedElement_38 = (MR_String) "Tuple";
            mercury__term_to_xml__succeeded = MR_TRUE;
          }
        else
        if ((strcmp(mercury__term_to_xml__Functor_9, (MR_String) "[|]") == 0))
          {
            mercury__term_to_xml__ReservedElement_38 = (MR_String) "List";
            mercury__term_to_xml__succeeded = MR_TRUE;
          }
        else
          mercury__term_to_xml__succeeded = MR_FALSE;
        if (mercury__term_to_xml__succeeded)
          mercury__term_to_xml__MangledElement_11 = mercury__term_to_xml__ReservedElement_38;
        else
          {
            mercury__term_to_xml__MangledElement_11 = mercury__term_to_xml__mangle_1_f_0(mercury__term_to_xml__Functor_9);
          }
        {
          mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__Arity_10, (MR_Integer) 10, &mercury__term_to_xml__Var_31);
        }
        {
          mercury__term_to_xml__Var_35 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_5);
        }
        {
          mercury__term_to_xml__Var_34 = mercury__term_to_xml__mangle_1_f_0(mercury__term_to_xml__Var_35);
        }
        {
          mercury__string__append_3_p_2((MR_String) "--", mercury__term_to_xml__Var_34, &mercury__term_to_xml__Var_32);
        }
        {
          mercury__string__append_3_p_2(mercury__term_to_xml__Var_31, mercury__term_to_xml__Var_32, &mercury__term_to_xml__Var_30);
        }
        {
          mercury__string__append_3_p_2((MR_String) "--", mercury__term_to_xml__Var_30, &mercury__term_to_xml__Var_28);
        }
        {
          mercury__string__append_3_p_2(mercury__term_to_xml__MangledElement_11, mercury__term_to_xml__Var_28, mercury__term_to_xml__Element_7);
        }
        *mercury__term_to_xml__AttrFromSources_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[18]);
      }
  }
}

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv4_Element_7;
    MR_Word mercury__term_to_xml__conv3_AttrFromSources_8;

    {
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv4_Element_7, &mercury__term_to_xml__conv3_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv4_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv3_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv2_Element_7;
    MR_Word mercury__term_to_xml__conv1_AttrFromSources_8;

    {
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv2_Element_7, &mercury__term_to_xml__conv1_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv2_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv1_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2(
  MR_Word mercury__term_to_xml__TypeInfo_for_T_33,
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_32,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_Word mercury__term_to_xml__NonCanon_10,
  MR_Box mercury__term_to_xml__Term_11,
  MR_Word mercury__term_to_xml__ElementMapping_12,
  MR_Word mercury__term_to_xml__MaybeDTD_13,
  MR_Word * mercury__term_to_xml__DTDResult_14,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_26,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_27)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    switch (MR_tag((MR_Word) mercury__term_to_xml__MaybeDTD_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__term_to_xml__MaybeDTD_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_29_29;
              MR_Word mercury__term_to_xml__TypeDesc_43;
              MR_Box mercury__term_to_xml__Var_34;
              void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_33 ;
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
	 mercury__term_to_xml__TypeDesc_43  = TypeInfo;
}
              {
                mercury__term_to_xml__write_dtd_from_type_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, mercury__term_to_xml__TypeDesc_43, mercury__term_to_xml__ElementMapping_12, mercury__term_to_xml__DTDResult_14, mercury__term_to_xml__STATE_VARIABLE_State_0_26, &mercury__term_to_xml__STATE_VARIABLE_State_29_29);
              }
              mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_29_29, mercury__term_to_xml__STATE_VARIABLE_State_27);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *mercury__term_to_xml__STATE_VARIABLE_State_27 = mercury__term_to_xml__STATE_VARIABLE_State_0_26;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__term_to_xml__DocType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeDTD_13, (MR_Integer) 0)));
          MR_Word mercury__term_to_xml__MakeElement_17;
          MR_String mercury__term_to_xml__Functor_18;
          MR_Integer mercury__term_to_xml__Arity_19;
          MR_Word mercury__term_to_xml__TypeOfTerm_21;
          MR_Word mercury__term_to_xml__Request_23;
          MR_String mercury__term_to_xml__Root_24;
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_15_66;
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_67;
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_79;
          MR_Word mercury__term_to_xml__Var_20;
          MR_Box mercury__term_to_xml__Var_35;
          MR_Integer mercury__term_to_xml__Var_22;
          MR_Integer mercury__term_to_xml__Var_56;
          MR_Word mercury__term_to_xml__Var_25;
          void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
          MR_Box mercury__term_to_xml__conv7_Root_24;
          MR_Box mercury__term_to_xml__conv6_Var_25;
          void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* mercury__term_to_xml__func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mercury__term_to_xml__MakeElement_17 = (MR_Word) &mercury__term_to_xml_scalar_common_3[19];
                  break;
                case (MR_Integer) 1:
                  mercury__term_to_xml__MakeElement_17 = (MR_Word) &mercury__term_to_xml_scalar_common_3[20];
                  break;
              }
              break;
            case (MR_Integer) 1:
              mercury__term_to_xml__MakeElement_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_12, (MR_Integer) 0)));
              break;
          }
          {
            mercury__deconstruct__deconstruct_5_p_2(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__Term_11, mercury__term_to_xml__NonCanon_10, &mercury__term_to_xml__Functor_18, &mercury__term_to_xml__Arity_19, &mercury__term_to_xml__Var_20);
          }
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_33 ;
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
	 mercury__term_to_xml__TypeOfTerm_21  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_2

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeOfTerm_21 ;
		{
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__Var_22  = Functors;
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
          if (mercury__term_to_xml__succeeded)
            {
              mercury__term_to_xml__Var_56 = (MR_Integer) -1;
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_22 > mercury__term_to_xml__Var_56);
            }
          if (mercury__term_to_xml__succeeded)
            {
              mercury__term_to_xml__Request_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_23, 0) = ((MR_Box) (mercury__term_to_xml__Functor_18));
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_23, 1) = ((MR_Box) (mercury__term_to_xml__Arity_19));
            }
          else
            mercury__term_to_xml__Request_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_17, (MR_Integer) 1)));
          {
            mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__MakeElement_17), ((MR_Box) (mercury__term_to_xml__TypeOfTerm_21)), ((MR_Box) (mercury__term_to_xml__Request_23)), &mercury__term_to_xml__conv7_Root_24, &mercury__term_to_xml__conv6_Var_25);
          }
          mercury__term_to_xml__Root_24 = ((MR_String) mercury__term_to_xml__conv7_Root_24);
          mercury__term_to_xml__Var_25 = ((MR_Word) mercury__term_to_xml__conv6_Var_25);
          mercury__term_to_xml__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<!DOCTYPE ")), mercury__term_to_xml__STATE_VARIABLE_State_0_26, &mercury__term_to_xml__STATE_VARIABLE_State_15_66);
          }
          mercury__term_to_xml__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Root_24)), mercury__term_to_xml__STATE_VARIABLE_State_15_66, &mercury__term_to_xml__STATE_VARIABLE_State_16_67);
          }
          switch (MR_tag((MR_Word) mercury__term_to_xml__DocType_16)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mercury__term_to_xml__PUBLIC_63 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_78;
                void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                {
                  mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_27_78);
                }
                mercury__term_to_xml__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  mercury__term_to_xml__func_11(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__PUBLIC_63)), mercury__term_to_xml__STATE_VARIABLE_State_27_78, &mercury__term_to_xml__STATE_VARIABLE_State_28_79);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String mercury__term_to_xml__SYSTEM_64 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_16, (MR_Integer) 1)));
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_72;
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_22_73;
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_24_75;
                MR_String mercury__term_to_xml__PUBLIC_82 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
                void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                {
                  mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_21_72);
                }
                mercury__term_to_xml__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__PUBLIC_82)), mercury__term_to_xml__STATE_VARIABLE_State_21_72, &mercury__term_to_xml__STATE_VARIABLE_State_22_73);
                }
                mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\" \"")), mercury__term_to_xml__STATE_VARIABLE_State_22_73, &mercury__term_to_xml__STATE_VARIABLE_State_24_75);
                }
                mercury__term_to_xml__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  mercury__term_to_xml__func_15(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__SYSTEM_64)), mercury__term_to_xml__STATE_VARIABLE_State_24_75, &mercury__term_to_xml__STATE_VARIABLE_State_28_79);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_18_69;
                MR_String mercury__term_to_xml__SYSTEM_83 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
                void MR_CALL (* mercury__term_to_xml__func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                void MR_CALL (* mercury__term_to_xml__func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                {
                  mercury__term_to_xml__func_16(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " SYSTEM \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_18_69);
                }
                mercury__term_to_xml__func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  mercury__term_to_xml__func_17(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__SYSTEM_83)), mercury__term_to_xml__STATE_VARIABLE_State_18_69, &mercury__term_to_xml__STATE_VARIABLE_State_28_79);
                }
              }
              break;
          }
          mercury__term_to_xml__func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            mercury__term_to_xml__func_18(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\">\n")), mercury__term_to_xml__STATE_VARIABLE_State_28_79, mercury__term_to_xml__STATE_VARIABLE_State_27);
          }
          *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv4_Element_7;
    MR_Word mercury__term_to_xml__conv3_AttrFromSources_8;

    {
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv4_Element_7, &mercury__term_to_xml__conv3_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv4_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv3_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv2_Element_7;
    MR_Word mercury__term_to_xml__conv1_AttrFromSources_8;

    {
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv2_Element_7, &mercury__term_to_xml__conv1_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv2_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv1_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0(
  MR_Word mercury__term_to_xml__TypeInfo_for_T_33,
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_32,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_Word mercury__term_to_xml__NonCanon_10,
  MR_Box mercury__term_to_xml__Term_11,
  MR_Word mercury__term_to_xml__ElementMapping_12,
  MR_Word mercury__term_to_xml__MaybeDTD_13,
  MR_Word * mercury__term_to_xml__DTDResult_14,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_26,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_27)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    switch (MR_tag((MR_Word) mercury__term_to_xml__MaybeDTD_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__term_to_xml__MaybeDTD_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_29_29;
              MR_Word mercury__term_to_xml__TypeDesc_43;
              MR_Box mercury__term_to_xml__Var_34;
              void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_33 ;
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
	 mercury__term_to_xml__TypeDesc_43  = TypeInfo;
}
              {
                mercury__term_to_xml__write_dtd_from_type_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, mercury__term_to_xml__TypeDesc_43, mercury__term_to_xml__ElementMapping_12, mercury__term_to_xml__DTDResult_14, mercury__term_to_xml__STATE_VARIABLE_State_0_26, &mercury__term_to_xml__STATE_VARIABLE_State_29_29);
              }
              mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_29_29, mercury__term_to_xml__STATE_VARIABLE_State_27);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *mercury__term_to_xml__STATE_VARIABLE_State_27 = mercury__term_to_xml__STATE_VARIABLE_State_0_26;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__term_to_xml__DocType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeDTD_13, (MR_Integer) 0)));
          MR_Word mercury__term_to_xml__MakeElement_17;
          MR_String mercury__term_to_xml__Functor_18;
          MR_Integer mercury__term_to_xml__Arity_19;
          MR_Word mercury__term_to_xml__TypeOfTerm_21;
          MR_Word mercury__term_to_xml__Request_23;
          MR_String mercury__term_to_xml__Root_24;
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_15_66;
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_67;
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_79;
          MR_Word mercury__term_to_xml__Var_20;
          MR_Box mercury__term_to_xml__Var_35;
          MR_Integer mercury__term_to_xml__Var_22;
          MR_Integer mercury__term_to_xml__Var_56;
          MR_Word mercury__term_to_xml__Var_25;
          void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
          MR_Box mercury__term_to_xml__conv7_Root_24;
          MR_Box mercury__term_to_xml__conv6_Var_25;
          void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* mercury__term_to_xml__func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mercury__term_to_xml__MakeElement_17 = (MR_Word) &mercury__term_to_xml_scalar_common_3[17];
                  break;
                case (MR_Integer) 1:
                  mercury__term_to_xml__MakeElement_17 = (MR_Word) &mercury__term_to_xml_scalar_common_3[18];
                  break;
              }
              break;
            case (MR_Integer) 1:
              mercury__term_to_xml__MakeElement_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_12, (MR_Integer) 0)));
              break;
          }
          {
            mercury__deconstruct__deconstruct_5_p_1(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__Term_11, mercury__term_to_xml__NonCanon_10, &mercury__term_to_xml__Functor_18, &mercury__term_to_xml__Arity_19, &mercury__term_to_xml__Var_20);
          }
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_33 ;
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
	 mercury__term_to_xml__TypeOfTerm_21  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeOfTerm_21 ;
		{
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__Var_22  = Functors;
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
          if (mercury__term_to_xml__succeeded)
            {
              mercury__term_to_xml__Var_56 = (MR_Integer) -1;
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__Var_22 > mercury__term_to_xml__Var_56);
            }
          if (mercury__term_to_xml__succeeded)
            {
              mercury__term_to_xml__Request_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_23, 0) = ((MR_Box) (mercury__term_to_xml__Functor_18));
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_23, 1) = ((MR_Box) (mercury__term_to_xml__Arity_19));
            }
          else
            mercury__term_to_xml__Request_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_17, (MR_Integer) 1)));
          {
            mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__MakeElement_17), ((MR_Box) (mercury__term_to_xml__TypeOfTerm_21)), ((MR_Box) (mercury__term_to_xml__Request_23)), &mercury__term_to_xml__conv7_Root_24, &mercury__term_to_xml__conv6_Var_25);
          }
          mercury__term_to_xml__Root_24 = ((MR_String) mercury__term_to_xml__conv7_Root_24);
          mercury__term_to_xml__Var_25 = ((MR_Word) mercury__term_to_xml__conv6_Var_25);
          mercury__term_to_xml__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<!DOCTYPE ")), mercury__term_to_xml__STATE_VARIABLE_State_0_26, &mercury__term_to_xml__STATE_VARIABLE_State_15_66);
          }
          mercury__term_to_xml__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Root_24)), mercury__term_to_xml__STATE_VARIABLE_State_15_66, &mercury__term_to_xml__STATE_VARIABLE_State_16_67);
          }
          switch (MR_tag((MR_Word) mercury__term_to_xml__DocType_16)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mercury__term_to_xml__PUBLIC_63 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_78;
                void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                {
                  mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_27_78);
                }
                mercury__term_to_xml__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  mercury__term_to_xml__func_11(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__PUBLIC_63)), mercury__term_to_xml__STATE_VARIABLE_State_27_78, &mercury__term_to_xml__STATE_VARIABLE_State_28_79);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String mercury__term_to_xml__SYSTEM_64 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_16, (MR_Integer) 1)));
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_72;
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_22_73;
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_24_75;
                MR_String mercury__term_to_xml__PUBLIC_82 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
                void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                {
                  mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_21_72);
                }
                mercury__term_to_xml__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__PUBLIC_82)), mercury__term_to_xml__STATE_VARIABLE_State_21_72, &mercury__term_to_xml__STATE_VARIABLE_State_22_73);
                }
                mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\" \"")), mercury__term_to_xml__STATE_VARIABLE_State_22_73, &mercury__term_to_xml__STATE_VARIABLE_State_24_75);
                }
                mercury__term_to_xml__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  mercury__term_to_xml__func_15(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__SYSTEM_64)), mercury__term_to_xml__STATE_VARIABLE_State_24_75, &mercury__term_to_xml__STATE_VARIABLE_State_28_79);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_18_69;
                MR_String mercury__term_to_xml__SYSTEM_83 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
                void MR_CALL (* mercury__term_to_xml__func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                void MR_CALL (* mercury__term_to_xml__func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                {
                  mercury__term_to_xml__func_16(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " SYSTEM \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_18_69);
                }
                mercury__term_to_xml__func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  mercury__term_to_xml__func_17(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__SYSTEM_83)), mercury__term_to_xml__STATE_VARIABLE_State_18_69, &mercury__term_to_xml__STATE_VARIABLE_State_28_79);
                }
              }
              break;
          }
          mercury__term_to_xml__func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            mercury__term_to_xml__func_18(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\">\n")), mercury__term_to_xml__STATE_VARIABLE_State_28_79, mercury__term_to_xml__STATE_VARIABLE_State_27);
          }
          *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv3_Element_7;
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

    {
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv1_Element_7;
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

    {
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3(
  MR_Word mercury__term_to_xml__TypeInfo_for_T_22,
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_21,
  MR_Box mercury__term_to_xml__Stream_8,
  MR_Word mercury__term_to_xml__NonCanon_9,
  MR_Word mercury__term_to_xml__ElementMapping_10,
  MR_Integer mercury__term_to_xml__IndentLevel_11,
  MR_Box mercury__term_to_xml__Term_12,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_17,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_18)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__Univ_14;
    MR_Word mercury__term_to_xml__MakeElement_15;
    MR_Word mercury__term_to_xml__Var_19;
    MR_Word mercury__term_to_xml__Var_16;

    {
      mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_22, mercury__term_to_xml__Term_12, &mercury__term_to_xml__Univ_14);
    }
    switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[15];
            break;
          case (MR_Integer) 1:
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[16];
            break;
        }
        break;
      case (MR_Integer) 1:
        mercury__term_to_xml__MakeElement_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_10, (MR_Integer) 0)));
        break;
    }
    mercury__term_to_xml__Var_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__term_to_xml__write_xml_element_univ_9_p_3(mercury__term_to_xml__TypeClassInfo_for_writer_21, mercury__term_to_xml__Stream_8, mercury__term_to_xml__NonCanon_9, mercury__term_to_xml__MakeElement_15, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_14, mercury__term_to_xml__Var_19, &mercury__term_to_xml__Var_16, mercury__term_to_xml__STATE_VARIABLE_State_0_17, mercury__term_to_xml__STATE_VARIABLE_State_18);
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv3_Element_7;
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

    {
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv1_Element_7;
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

    {
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2(
  MR_Word mercury__term_to_xml__TypeInfo_for_T_22,
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_21,
  MR_Box mercury__term_to_xml__Stream_8,
  MR_Word mercury__term_to_xml__NonCanon_9,
  MR_Word mercury__term_to_xml__ElementMapping_10,
  MR_Integer mercury__term_to_xml__IndentLevel_11,
  MR_Box mercury__term_to_xml__Term_12,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_17,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_18)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__Univ_14;
    MR_Word mercury__term_to_xml__MakeElement_15;
    MR_Word mercury__term_to_xml__Var_19;
    MR_Word mercury__term_to_xml__Var_16;

    {
      mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_22, mercury__term_to_xml__Term_12, &mercury__term_to_xml__Univ_14);
    }
    switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[13];
            break;
          case (MR_Integer) 1:
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[14];
            break;
        }
        break;
      case (MR_Integer) 1:
        mercury__term_to_xml__MakeElement_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_10, (MR_Integer) 0)));
        break;
    }
    mercury__term_to_xml__Var_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__term_to_xml__write_xml_element_univ_9_p_2(mercury__term_to_xml__TypeClassInfo_for_writer_21, mercury__term_to_xml__Stream_8, mercury__term_to_xml__NonCanon_9, mercury__term_to_xml__MakeElement_15, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_14, mercury__term_to_xml__Var_19, &mercury__term_to_xml__Var_16, mercury__term_to_xml__STATE_VARIABLE_State_0_17, mercury__term_to_xml__STATE_VARIABLE_State_18);
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv3_Element_7;
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

    {
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv1_Element_7;
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

    {
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1(
  MR_Word mercury__term_to_xml__TypeInfo_for_T_22,
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_21,
  MR_Box mercury__term_to_xml__Stream_8,
  MR_Word mercury__term_to_xml__NonCanon_9,
  MR_Word mercury__term_to_xml__ElementMapping_10,
  MR_Integer mercury__term_to_xml__IndentLevel_11,
  MR_Box mercury__term_to_xml__Term_12,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_17,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_18)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__Univ_14;
    MR_Word mercury__term_to_xml__MakeElement_15;
    MR_Word mercury__term_to_xml__Var_19;
    MR_Word mercury__term_to_xml__Var_16;

    {
      mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_22, mercury__term_to_xml__Term_12, &mercury__term_to_xml__Univ_14);
    }
    switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[11];
            break;
          case (MR_Integer) 1:
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[12];
            break;
        }
        break;
      case (MR_Integer) 1:
        mercury__term_to_xml__MakeElement_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_10, (MR_Integer) 0)));
        break;
    }
    mercury__term_to_xml__Var_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__term_to_xml__write_xml_element_univ_9_p_1(mercury__term_to_xml__TypeClassInfo_for_writer_21, mercury__term_to_xml__Stream_8, mercury__term_to_xml__NonCanon_9, mercury__term_to_xml__MakeElement_15, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_14, mercury__term_to_xml__Var_19, &mercury__term_to_xml__Var_16, mercury__term_to_xml__STATE_VARIABLE_State_0_17, mercury__term_to_xml__STATE_VARIABLE_State_18);
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv3_Element_7;
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

    {
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv1_Element_7;
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

    {
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0(
  MR_Word mercury__term_to_xml__TypeInfo_for_T_22,
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_21,
  MR_Box mercury__term_to_xml__Stream_8,
  MR_Word mercury__term_to_xml__NonCanon_9,
  MR_Word mercury__term_to_xml__ElementMapping_10,
  MR_Integer mercury__term_to_xml__IndentLevel_11,
  MR_Box mercury__term_to_xml__Term_12,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_17,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_18)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__Univ_14;
    MR_Word mercury__term_to_xml__MakeElement_15;
    MR_Word mercury__term_to_xml__Var_19;
    MR_Word mercury__term_to_xml__Var_16;

    {
      mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_22, mercury__term_to_xml__Term_12, &mercury__term_to_xml__Univ_14);
    }
    switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[9];
            break;
          case (MR_Integer) 1:
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[10];
            break;
        }
        break;
      case (MR_Integer) 1:
        mercury__term_to_xml__MakeElement_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_10, (MR_Integer) 0)));
        break;
    }
    mercury__term_to_xml__Var_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__term_to_xml__write_xml_element_univ_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_21, mercury__term_to_xml__Stream_8, mercury__term_to_xml__NonCanon_9, mercury__term_to_xml__MakeElement_15, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_14, mercury__term_to_xml__Var_19, &mercury__term_to_xml__Var_16, mercury__term_to_xml__STATE_VARIABLE_State_0_17, mercury__term_to_xml__STATE_VARIABLE_State_18);
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv3_Element_7;
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

    {
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv1_Element_7;
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

    {
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
  }
}

void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_47,
  MR_Box mercury__term_to_xml__Stream_7,
  MR_Word mercury__term_to_xml__TypeDesc_8,
  MR_Word mercury__term_to_xml__ElementMapping_9,
  MR_Word * mercury__term_to_xml__DTDResult_10,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_23,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_24)
{
  {
    MR_bool mercury__term_to_xml__succeeded;

    {
      *mercury__term_to_xml__DTDResult_10 = mercury__term_to_xml__can_generate_dtd_2_f_0(mercury__term_to_xml__ElementMapping_9, mercury__term_to_xml__TypeDesc_8);
    }
    switch (MR_tag((MR_Word) *mercury__term_to_xml__DTDResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(*mercury__term_to_xml__DTDResult_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mercury__term_to_xml__MakeElement_12;
              MR_String mercury__term_to_xml__RootElement_13;
              MR_Word mercury__term_to_xml__PseudoArgTypes_16;
              MR_Word mercury__term_to_xml__TypeInfo_57_57;
              MR_Word mercury__term_to_xml__TypeInfo_58_58;
              MR_Word mercury__term_to_xml__TypeInfo_59_59;
              MR_Word mercury__term_to_xml__TypeInfo_60_60;
              MR_Word mercury__term_to_xml__Var_25;
              MR_Word mercury__term_to_xml__Var_26;
              MR_Word mercury__term_to_xml__Var_27;
              MR_Word mercury__term_to_xml__Var_28;
              MR_Word mercury__term_to_xml__Var_29;
              MR_Word mercury__term_to_xml__Var_30;
              MR_Word mercury__term_to_xml__Var_31;
              MR_Word mercury__term_to_xml__Var_32;
              MR_Word mercury__term_to_xml__Var_53;
              MR_Word mercury__term_to_xml__Var_54;
              MR_Word mercury__term_to_xml__Var_55;
              MR_Word mercury__term_to_xml__Var_56;
              MR_Word mercury__term_to_xml__Var_73;
              MR_Word mercury__term_to_xml__Var_74;
              MR_Word mercury__term_to_xml__Var_75;
              MR_Word mercury__term_to_xml__Var_83;
              MR_Word mercury__term_to_xml__Var_84;
              MR_Word mercury__term_to_xml__Var_85;
              MR_Word mercury__term_to_xml__Var_14;
              MR_Word mercury__term_to_xml__Var_15;
              MR_Word mercury__term_to_xml__Var_17;

              switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_9)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_9)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      mercury__term_to_xml__MakeElement_12 = (MR_Word) &mercury__term_to_xml_scalar_common_3[7];
                      break;
                    case (MR_Integer) 1:
                      mercury__term_to_xml__MakeElement_12 = (MR_Word) &mercury__term_to_xml_scalar_common_3[8];
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  mercury__term_to_xml__MakeElement_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_9, (MR_Integer) 0)));
                  break;
              }
              mercury__term_to_xml__Var_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              mercury__term_to_xml__Var_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__term_to_xml__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_26, 0) = NULL;
                MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_26, 1) = ((MR_Box) (mercury__term_to_xml__Var_30));
              }
              mercury__term_to_xml__Var_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__term_to_xml__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_27, 0) = NULL;
                MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_27, 1) = ((MR_Box) (mercury__term_to_xml__Var_31));
              }
              mercury__term_to_xml__Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__term_to_xml__get_elements_and_args_7_p_0(mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__TypeDesc_8, &mercury__term_to_xml__Var_25, &mercury__term_to_xml__Var_53, &mercury__term_to_xml__Var_54, &mercury__term_to_xml__Var_28, &mercury__term_to_xml__Var_17);
              }
              mercury__term_to_xml__TypeInfo_57_57 = (MR_Word) &mercury__term_to_xml_scalar_common_1[1];
              mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__Var_53)) == (MR_mktag((MR_Integer) 1)));
              if (mercury__term_to_xml__succeeded)
                {
                  mercury__term_to_xml__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_53, (MR_Integer) 0)));
                  mercury__term_to_xml__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_53, (MR_Integer) 1)));
                  (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_26, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__Var_74));
                  mercury__term_to_xml__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_26, (MR_Integer) 1)));
                  {
                    mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_57_57, mercury__term_to_xml__Var_73, mercury__term_to_xml__Var_75);
                  }
                  if (mercury__term_to_xml__succeeded)
                    {
                      mercury__term_to_xml__TypeInfo_58_58 = (MR_Word) &mercury__term_to_xml_scalar_common_1[2];
                      mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__Var_54)) == (MR_mktag((MR_Integer) 1)));
                      if (mercury__term_to_xml__succeeded)
                        {
                          mercury__term_to_xml__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_54, (MR_Integer) 0)));
                          mercury__term_to_xml__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_54, (MR_Integer) 1)));
                          (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_27, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__Var_84));
                          mercury__term_to_xml__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_27, (MR_Integer) 1)));
                          {
                            mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_58_58, mercury__term_to_xml__Var_83, mercury__term_to_xml__Var_85);
                          }
                          if (mercury__term_to_xml__succeeded)
                            {
                              mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__Var_25)) == (MR_mktag((MR_Integer) 1)));
                              if (mercury__term_to_xml__succeeded)
                                {
                                  mercury__term_to_xml__RootElement_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_25, (MR_Integer) 0)));
                                  mercury__term_to_xml__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_25, (MR_Integer) 1)));
                                  mercury__term_to_xml__TypeInfo_59_59 = (MR_Word) &mercury__term_to_xml_scalar_common_1[7];
                                  {
                                    mercury__term_to_xml__succeeded = mercury__builtin__unify_2_p_0(mercury__term_to_xml__TypeInfo_59_59, ((MR_Box) (mercury__term_to_xml__Var_29)), ((MR_Box) (mercury__term_to_xml__Var_55)));
                                  }
                                  if (mercury__term_to_xml__succeeded)
                                    {
                                      mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__Var_28)) == (MR_mktag((MR_Integer) 1)));
                                      if (mercury__term_to_xml__succeeded)
                                        {
                                          mercury__term_to_xml__PseudoArgTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_28, (MR_Integer) 0)));
                                          mercury__term_to_xml__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_28, (MR_Integer) 1)));
                                          mercury__term_to_xml__TypeInfo_60_60 = (MR_Word) &mercury__term_to_xml_scalar_common_1[8];
                                          {
                                            mercury__term_to_xml__succeeded = mercury__builtin__unify_2_p_0(mercury__term_to_xml__TypeInfo_60_60, ((MR_Box) (mercury__term_to_xml__Var_32)), ((MR_Box) (mercury__term_to_xml__Var_56)));
                                          }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
              if (mercury__term_to_xml__succeeded)
                {
                  MR_Word mercury__term_to_xml__ArgTypes_18;
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_35_35;
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_36_36;
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_38_38;
                  MR_Word mercury__term_to_xml__Var_39;
                  MR_Word mercury__term_to_xml__Var_40;
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
                  void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                  {
                    mercury__term_to_xml__ArgTypes_18 = mercury__term_to_xml__map__ho25_2_f_in__list_0(mercury__term_to_xml__PseudoArgTypes_16);
                  }
                  mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_47, (MR_Integer) 0)), (MR_Integer) 5)));
                  {
                    mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_47), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<!DOCTYPE ")), mercury__term_to_xml__STATE_VARIABLE_State_0_23, &mercury__term_to_xml__STATE_VARIABLE_State_35_35);
                  }
                  mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_47, (MR_Integer) 0)), (MR_Integer) 5)));
                  {
                    mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_47), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__RootElement_13)), mercury__term_to_xml__STATE_VARIABLE_State_35_35, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
                  }
                  mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_47, (MR_Integer) 0)), (MR_Integer) 5)));
                  {
                    mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_47), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " [\n\n")), mercury__term_to_xml__STATE_VARIABLE_State_36_36, &mercury__term_to_xml__STATE_VARIABLE_State_38_38);
                  }
                  {
                    mercury__term_to_xml__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_39, 0) = ((MR_Box) (mercury__term_to_xml__TypeDesc_8));
                    MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_39, 1) = ((MR_Box) (mercury__term_to_xml__ArgTypes_18));
                  }
                  mercury__term_to_xml__Var_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    mercury__term_to_xml__write_dtd_types_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_47, mercury__term_to_xml__Stream_7, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__Var_39, mercury__term_to_xml__Var_40, mercury__term_to_xml__STATE_VARIABLE_State_38_38, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
                  }
                  mercury__term_to_xml__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_47, (MR_Integer) 0)), (MR_Integer) 5)));
                  {
                    mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_47), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\n]>")), mercury__term_to_xml__STATE_VARIABLE_State_41_41, mercury__term_to_xml__STATE_VARIABLE_State_24);
                  }
                }
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "term_to_xml", (MR_String) "predicate \140term_to_xml.write_dtd_from_type\'/6", (MR_String) "not ok to generate DTD");
                    return;
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            *mercury__term_to_xml__STATE_VARIABLE_State_24 = mercury__term_to_xml__STATE_VARIABLE_State_0_23;
            break;
        }
        break;
      case (MR_Integer) 1:
        *mercury__term_to_xml__STATE_VARIABLE_State_24 = mercury__term_to_xml__STATE_VARIABLE_State_0_23;
        break;
      case (MR_Integer) 2:
        *mercury__term_to_xml__STATE_VARIABLE_State_24 = mercury__term_to_xml__STATE_VARIABLE_State_0_23;
        break;
      case (MR_Integer) 3:
        *mercury__term_to_xml__STATE_VARIABLE_State_24 = mercury__term_to_xml__STATE_VARIABLE_State_0_23;
        break;
    }
  }
}

void MR_CALL 
mercury__term_to_xml__write_dtd_6_p_0(
  MR_Word mercury__term_to_xml__TypeInfo_for_T_17,
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_16,
  MR_Box mercury__term_to_xml__Stream_7,
  MR_Word mercury__term_to_xml__ElementMapping_9,
  MR_Word * mercury__term_to_xml__DTDResult_10,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_13,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_14)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__TypeDesc_12;

{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_17 ;
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
	 mercury__term_to_xml__TypeDesc_12  = TypeInfo;
}
    {
      mercury__term_to_xml__write_dtd_from_type_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_16, mercury__term_to_xml__Stream_7, mercury__term_to_xml__TypeDesc_12, mercury__term_to_xml__ElementMapping_9, mercury__term_to_xml__DTDResult_10, mercury__term_to_xml__STATE_VARIABLE_State_0_13, mercury__term_to_xml__STATE_VARIABLE_State_14);
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv3_Element_7;
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

    {
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv1_Element_7;
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

    {
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
  }
}

MR_Word MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0(
  MR_Word mercury__term_to_xml__ElementMapping_4,
  MR_Word mercury__term_to_xml__TypeDesc_5)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__Result_6;
    MR_Word mercury__term_to_xml__MakeElement_7;
    MR_Word mercury__term_to_xml__TypeCtorInfo_36_36;
    MR_Word mercury__term_to_xml__TypeInfo_37_37;
    MR_Word mercury__term_to_xml__TypeInfo_38_38;
    MR_Word mercury__term_to_xml__TypeInfo_39_39;
    MR_Word mercury__term_to_xml__TypeInfo_40_40;
    MR_Word mercury__term_to_xml__Var_14;
    MR_Word mercury__term_to_xml__Var_15;
    MR_Word mercury__term_to_xml__Var_16;
    MR_Word mercury__term_to_xml__Var_17;
    MR_Word mercury__term_to_xml__Var_18;
    MR_Word mercury__term_to_xml__Var_19;
    MR_Word mercury__term_to_xml__Var_20;
    MR_Word mercury__term_to_xml__Var_21;
    MR_Word mercury__term_to_xml__Var_22;
    MR_Word mercury__term_to_xml__Var_23;
    MR_Word mercury__term_to_xml__Var_31;
    MR_Word mercury__term_to_xml__Var_32;
    MR_Word mercury__term_to_xml__Var_33;
    MR_Word mercury__term_to_xml__Var_34;
    MR_Word mercury__term_to_xml__Var_35;
    MR_Word mercury__term_to_xml__Var_53;
    MR_String mercury__term_to_xml__Var_54;
    MR_Word mercury__term_to_xml__Var_55;
    MR_Word mercury__term_to_xml__Var_63;
    MR_Word mercury__term_to_xml__Var_64;
    MR_Word mercury__term_to_xml__Var_65;
    MR_Word mercury__term_to_xml__Var_73;
    MR_Word mercury__term_to_xml__Var_74;
    MR_Word mercury__term_to_xml__Var_75;
    MR_Word mercury__term_to_xml__Var_83;
    MR_Word mercury__term_to_xml__Var_84;
    MR_Word mercury__term_to_xml__Var_85;
    MR_String mercury__term_to_xml__Var_8;
    MR_Word mercury__term_to_xml__Var_9;
    MR_Word mercury__term_to_xml__Var_10;
    MR_Word mercury__term_to_xml__Var_11;
    MR_Word mercury__term_to_xml__Var_12;

    switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__term_to_xml__MakeElement_7 = (MR_Word) &mercury__term_to_xml_scalar_common_3[5];
            break;
          case (MR_Integer) 1:
            mercury__term_to_xml__MakeElement_7 = (MR_Word) &mercury__term_to_xml_scalar_common_3[6];
            break;
        }
        break;
      case (MR_Integer) 1:
        mercury__term_to_xml__MakeElement_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_4, (MR_Integer) 0)));
        break;
    }
    mercury__term_to_xml__Var_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__term_to_xml__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_14, 0) = NULL;
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_14, 1) = ((MR_Box) (mercury__term_to_xml__Var_19));
    }
    mercury__term_to_xml__Var_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__term_to_xml__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_15, 0) = NULL;
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_15, 1) = ((MR_Box) (mercury__term_to_xml__Var_20));
    }
    mercury__term_to_xml__Var_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__term_to_xml__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_16, 0) = NULL;
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_16, 1) = ((MR_Box) (mercury__term_to_xml__Var_21));
    }
    mercury__term_to_xml__Var_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__term_to_xml__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_17, 0) = NULL;
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_17, 1) = ((MR_Box) (mercury__term_to_xml__Var_22));
    }
    mercury__term_to_xml__Var_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__term_to_xml__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_18, 0) = NULL;
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_18, 1) = ((MR_Box) (mercury__term_to_xml__Var_23));
    }
    {
      mercury__term_to_xml__get_elements_and_args_7_p_0(mercury__term_to_xml__MakeElement_7, mercury__term_to_xml__TypeDesc_5, &mercury__term_to_xml__Var_31, &mercury__term_to_xml__Var_32, &mercury__term_to_xml__Var_33, &mercury__term_to_xml__Var_34, &mercury__term_to_xml__Var_35);
    }
    mercury__term_to_xml__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__Var_31)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__term_to_xml__succeeded)
      {
        mercury__term_to_xml__Var_54 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_31, (MR_Integer) 0)));
        mercury__term_to_xml__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_31, (MR_Integer) 1)));
        (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_14, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__Var_54));
        mercury__term_to_xml__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_14, (MR_Integer) 1)));
        {
          mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeCtorInfo_36_36, mercury__term_to_xml__Var_53, mercury__term_to_xml__Var_55);
        }
        if (mercury__term_to_xml__succeeded)
          {
            mercury__term_to_xml__TypeInfo_37_37 = (MR_Word) &mercury__term_to_xml_scalar_common_1[1];
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__Var_32)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__term_to_xml__succeeded)
              {
                mercury__term_to_xml__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_32, (MR_Integer) 0)));
                mercury__term_to_xml__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_32, (MR_Integer) 1)));
                (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_15, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__Var_64));
                mercury__term_to_xml__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_15, (MR_Integer) 1)));
                {
                  mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_37_37, mercury__term_to_xml__Var_63, mercury__term_to_xml__Var_65);
                }
                if (mercury__term_to_xml__succeeded)
                  {
                    mercury__term_to_xml__TypeInfo_38_38 = (MR_Word) &mercury__term_to_xml_scalar_common_1[2];
                    mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__Var_33)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__term_to_xml__succeeded)
                      {
                        mercury__term_to_xml__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_33, (MR_Integer) 0)));
                        mercury__term_to_xml__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_33, (MR_Integer) 1)));
                        (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_16, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__Var_74));
                        mercury__term_to_xml__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_16, (MR_Integer) 1)));
                        {
                          mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_38_38, mercury__term_to_xml__Var_73, mercury__term_to_xml__Var_75);
                        }
                        if (mercury__term_to_xml__succeeded)
                          {
                            mercury__term_to_xml__TypeInfo_39_39 = (MR_Word) &mercury__term_to_xml_scalar_common_1[0];
                            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__Var_34)) == (MR_mktag((MR_Integer) 1)));
                            if (mercury__term_to_xml__succeeded)
                              {
                                mercury__term_to_xml__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_34, (MR_Integer) 0)));
                                mercury__term_to_xml__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_34, (MR_Integer) 1)));
                                (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_17, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__Var_84));
                                mercury__term_to_xml__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_17, (MR_Integer) 1)));
                                {
                                  mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_39_39, mercury__term_to_xml__Var_83, mercury__term_to_xml__Var_85);
                                }
                                if (mercury__term_to_xml__succeeded)
                                  {
                                    mercury__term_to_xml__TypeInfo_40_40 = (MR_Word) &mercury__term_to_xml_scalar_common_1[3];
                                    {
                                      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____list__list_1_1(mercury__term_to_xml__TypeInfo_40_40, mercury__term_to_xml__Var_18, mercury__term_to_xml__Var_35);
                                    }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    if (mercury__term_to_xml__succeeded)
      {
        MR_Word mercury__term_to_xml__PseudoTypeDesc_13;
        MR_Word mercury__term_to_xml__Var_24;
        MR_Word mercury__term_to_xml__Var_25;
        MR_Word mercury__term_to_xml__Var_26;
        MR_Word mercury__term_to_xml__Var_27;

{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_2_f_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_5 ;
		{

    PseudoTypeDesc = TypeDesc;


		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__PseudoTypeDesc_13  = PseudoTypeDesc;
}
        mercury__term_to_xml__Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__term_to_xml__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_24, 0) = ((MR_Box) (mercury__term_to_xml__PseudoTypeDesc_13));
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Var_24, 1) = ((MR_Box) (mercury__term_to_xml__Var_25));
        }
        mercury__term_to_xml__Var_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__term_to_xml__Var_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__term_to_xml__Result_6 = mercury__term_to_xml__can_generate_dtd_for_types_4_f_0(mercury__term_to_xml__MakeElement_7, mercury__term_to_xml__Var_24, mercury__term_to_xml__Var_26, mercury__term_to_xml__Var_27);
        }
      }
    else
      mercury__term_to_xml__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
    return mercury__term_to_xml__Result_6;
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv8_Element_7;
    MR_Word mercury__term_to_xml__conv7_AttrFromSources_8;

    {
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv8_Element_7, &mercury__term_to_xml__conv7_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv8_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv7_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv6_Element_7;
    MR_Word mercury__term_to_xml__conv5_AttrFromSources_8;

    {
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv6_Element_7, &mercury__term_to_xml__conv5_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv6_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv5_AttrFromSources_8));
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0(
  MR_Word mercury__term_to_xml__TypeInfo_for_T_33,
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_32,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_Box mercury__term_to_xml__Term_10,
  MR_Word mercury__term_to_xml__ElementMapping_11,
  MR_Word mercury__term_to_xml__MaybeStyleSheet_12,
  MR_Word mercury__term_to_xml__MaybeDTD_13,
  MR_Word * mercury__term_to_xml__DTDResult_14,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_21,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_22)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__Var_23;
    MR_Box mercury__term_to_xml__Var_34;

{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_doc_general_cc_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_33 ;
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
	 mercury__term_to_xml__Var_23  = TypeInfo;
}
    switch (MR_tag((MR_Word) mercury__term_to_xml__MaybeDTD_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__term_to_xml__MaybeDTD_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__term_to_xml__DTDResult_14 = mercury__term_to_xml__can_generate_dtd_2_f_0(mercury__term_to_xml__ElementMapping_11, mercury__term_to_xml__Var_23);
            }
            break;
          case (MR_Integer) 1:
            *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
      case (MR_Integer) 1:
        *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
    switch (MR_tag((MR_Word) *mercury__term_to_xml__DTDResult_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(*mercury__term_to_xml__DTDResult_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mercury__term_to_xml__Var_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_25;
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_26_26;
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;
              MR_Word mercury__term_to_xml__Univ_65;
              MR_Word mercury__term_to_xml__MakeElement_66;
              MR_Word mercury__term_to_xml__Var_68;
              MR_Word mercury__term_to_xml__Var_16;
              MR_Word mercury__term_to_xml__Var_67;

              {
                mercury__term_to_xml__write_xml_header_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Var_24, mercury__term_to_xml__STATE_VARIABLE_State_0_21, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
              }
              if ((mercury__term_to_xml__MaybeStyleSheet_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                mercury__term_to_xml__STATE_VARIABLE_State_26_26 = mercury__term_to_xml__STATE_VARIABLE_State_25_25;
              else
                {
                  MR_String mercury__term_to_xml__Type_47 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_12, (MR_Integer) 0)));
                  MR_String mercury__term_to_xml__Href_48 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_12, (MR_Integer) 1)));
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_50;
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_14_51;
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_53;
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_17_54;
                  void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                  void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                  {
                    mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), mercury__term_to_xml__STATE_VARIABLE_State_25_25, &mercury__term_to_xml__STATE_VARIABLE_State_13_50);
                  }
                  mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                  {
                    mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Type_47)), mercury__term_to_xml__STATE_VARIABLE_State_13_50, &mercury__term_to_xml__STATE_VARIABLE_State_14_51);
                  }
                  mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                  {
                    mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\" href=\"")), mercury__term_to_xml__STATE_VARIABLE_State_14_51, &mercury__term_to_xml__STATE_VARIABLE_State_16_53);
                  }
                  mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                  {
                    mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Href_48)), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_17_54);
                  }
                  mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                  {
                    mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_17_54, &mercury__term_to_xml__STATE_VARIABLE_State_26_26);
                  }
                }
              {
                mercury__term_to_xml__write_doctype_8_p_2(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, (MR_Integer) 2, mercury__term_to_xml__Term_10, mercury__term_to_xml__ElementMapping_11, mercury__term_to_xml__MaybeDTD_13, &mercury__term_to_xml__Var_16, mercury__term_to_xml__STATE_VARIABLE_State_26_26, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
              }
              {
                mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__Term_10, &mercury__term_to_xml__Univ_65);
              }
              switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      mercury__term_to_xml__MakeElement_66 = (MR_Word) &mercury__term_to_xml_scalar_common_3[3];
                      break;
                    case (MR_Integer) 1:
                      mercury__term_to_xml__MakeElement_66 = (MR_Word) &mercury__term_to_xml_scalar_common_3[4];
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  mercury__term_to_xml__MakeElement_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_11, (MR_Integer) 0)));
                  break;
              }
              mercury__term_to_xml__Var_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__term_to_xml__write_xml_element_univ_9_p_2(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, (MR_Integer) 2, mercury__term_to_xml__MakeElement_66, (MR_Integer) 0, mercury__term_to_xml__Univ_65, mercury__term_to_xml__Var_68, &mercury__term_to_xml__Var_67, mercury__term_to_xml__STATE_VARIABLE_State_28_28, mercury__term_to_xml__STATE_VARIABLE_State_22);
              }
            }
            break;
          case (MR_Integer) 1:
            *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
            break;
        }
        break;
      case (MR_Integer) 1:
        *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
        break;
      case (MR_Integer) 2:
        *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
        break;
      case (MR_Integer) 3:
        *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
        break;
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_2(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv8_Element_7;
    MR_Word mercury__term_to_xml__conv7_AttrFromSources_8;

    {
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv8_Element_7, &mercury__term_to_xml__conv7_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv8_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv7_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_1(
  MR_Box mercury__term_to_xml__closure_arg,
  MR_Box mercury__term_to_xml__wrapper_arg_1,
  MR_Box mercury__term_to_xml__wrapper_arg_2,
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
{
  {
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
    MR_String mercury__term_to_xml__conv6_Element_7;
    MR_Word mercury__term_to_xml__conv5_AttrFromSources_8;

    {
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv6_Element_7, &mercury__term_to_xml__conv5_AttrFromSources_8);
    }
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv6_Element_7));
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv5_AttrFromSources_8));
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0(
  MR_Word mercury__term_to_xml__TypeInfo_for_T_33,
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_32,
  MR_Box mercury__term_to_xml__Stream_9,
  MR_Box mercury__term_to_xml__Term_10,
  MR_Word mercury__term_to_xml__ElementMapping_11,
  MR_Word mercury__term_to_xml__MaybeStyleSheet_12,
  MR_Word mercury__term_to_xml__MaybeDTD_13,
  MR_Word * mercury__term_to_xml__DTDResult_14,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_21,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_22)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__Var_23;
    MR_Box mercury__term_to_xml__Var_34;

{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_doc_general_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_33 ;
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
	 mercury__term_to_xml__Var_23  = TypeInfo;
}
    switch (MR_tag((MR_Word) mercury__term_to_xml__MaybeDTD_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__term_to_xml__MaybeDTD_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__term_to_xml__DTDResult_14 = mercury__term_to_xml__can_generate_dtd_2_f_0(mercury__term_to_xml__ElementMapping_11, mercury__term_to_xml__Var_23);
            }
            break;
          case (MR_Integer) 1:
            *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
      case (MR_Integer) 1:
        *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
    switch (MR_tag((MR_Word) *mercury__term_to_xml__DTDResult_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(*mercury__term_to_xml__DTDResult_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mercury__term_to_xml__Var_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_25;
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_26_26;
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;
              MR_Word mercury__term_to_xml__Univ_65;
              MR_Word mercury__term_to_xml__MakeElement_66;
              MR_Word mercury__term_to_xml__Var_68;
              MR_Word mercury__term_to_xml__Var_16;
              MR_Word mercury__term_to_xml__Var_67;

              {
                mercury__term_to_xml__write_xml_header_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Var_24, mercury__term_to_xml__STATE_VARIABLE_State_0_21, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
              }
              if ((mercury__term_to_xml__MaybeStyleSheet_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                mercury__term_to_xml__STATE_VARIABLE_State_26_26 = mercury__term_to_xml__STATE_VARIABLE_State_25_25;
              else
                {
                  MR_String mercury__term_to_xml__Type_47 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_12, (MR_Integer) 0)));
                  MR_String mercury__term_to_xml__Href_48 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_12, (MR_Integer) 1)));
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_50;
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_14_51;
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_53;
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_17_54;
                  void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                  void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                  {
                    mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), mercury__term_to_xml__STATE_VARIABLE_State_25_25, &mercury__term_to_xml__STATE_VARIABLE_State_13_50);
                  }
                  mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                  {
                    mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Type_47)), mercury__term_to_xml__STATE_VARIABLE_State_13_50, &mercury__term_to_xml__STATE_VARIABLE_State_14_51);
                  }
                  mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                  {
                    mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\" href=\"")), mercury__term_to_xml__STATE_VARIABLE_State_14_51, &mercury__term_to_xml__STATE_VARIABLE_State_16_53);
                  }
                  mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                  {
                    mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Href_48)), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_17_54);
                  }
                  mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
                  {
                    mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_17_54, &mercury__term_to_xml__STATE_VARIABLE_State_26_26);
                  }
                }
              {
                mercury__term_to_xml__write_doctype_8_p_0(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, (MR_Integer) 1, mercury__term_to_xml__Term_10, mercury__term_to_xml__ElementMapping_11, mercury__term_to_xml__MaybeDTD_13, &mercury__term_to_xml__Var_16, mercury__term_to_xml__STATE_VARIABLE_State_26_26, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
              }
              {
                mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__Term_10, &mercury__term_to_xml__Univ_65);
              }
              switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      mercury__term_to_xml__MakeElement_66 = (MR_Word) &mercury__term_to_xml_scalar_common_3[1];
                      break;
                    case (MR_Integer) 1:
                      mercury__term_to_xml__MakeElement_66 = (MR_Word) &mercury__term_to_xml_scalar_common_3[2];
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  mercury__term_to_xml__MakeElement_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_11, (MR_Integer) 0)));
                  break;
              }
              mercury__term_to_xml__Var_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__term_to_xml__write_xml_element_univ_9_p_1(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, (MR_Integer) 1, mercury__term_to_xml__MakeElement_66, (MR_Integer) 0, mercury__term_to_xml__Univ_65, mercury__term_to_xml__Var_68, &mercury__term_to_xml__Var_67, mercury__term_to_xml__STATE_VARIABLE_State_28_28, mercury__term_to_xml__STATE_VARIABLE_State_22);
              }
            }
            break;
          case (MR_Integer) 1:
            *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
            break;
        }
        break;
      case (MR_Integer) 1:
        *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
        break;
      case (MR_Integer) 2:
        *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
        break;
      case (MR_Integer) 3:
        *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
        break;
    }
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_header_4_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
  MR_Box mercury__term_to_xml__Stream_5,
  MR_Word mercury__term_to_xml__MaybeEncoding_6,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_12;
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));

    {
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "<\?xml version=\"1.0\"")), mercury__term_to_xml__STATE_VARIABLE_State_0_9, &mercury__term_to_xml__STATE_VARIABLE_State_12_12);
    }
    if ((mercury__term_to_xml__MaybeEncoding_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));

        {
          mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_12_12, mercury__term_to_xml__STATE_VARIABLE_State_10);
        }
      }
    else
      {
        MR_String mercury__term_to_xml__Encoding_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeEncoding_6, (MR_Integer) 0)));
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_16;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_17_17;
        void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) " encoding=\"")), mercury__term_to_xml__STATE_VARIABLE_State_12_12, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
        }
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Encoding_8)), mercury__term_to_xml__STATE_VARIABLE_State_16_16, &mercury__term_to_xml__STATE_VARIABLE_State_17_17);
        }
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "\"\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_17_17, mercury__term_to_xml__STATE_VARIABLE_State_10);
        }
      }
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_5_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_xmlable_18,
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_19,
  MR_Box mercury__term_to_xml__Stream_6,
  MR_Integer mercury__term_to_xml__Indent_7,
  MR_Box mercury__term_to_xml__Term_8,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_15,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_16)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__Root_10;
    MR_Word mercury__term_to_xml__Children_13;
    MR_Word mercury__term_to_xml__ChildrenFormat_14;
    MR_Box MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_xmlable_18, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box mercury__term_to_xml__conv1_Root_10;
    MR_String mercury__term_to_xml__Var_11;
    MR_Word mercury__term_to_xml__Var_12;

    {
      mercury__term_to_xml__conv1_Root_10 = mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_xmlable_18), mercury__term_to_xml__Term_8);
    }
    mercury__term_to_xml__Root_10 = ((MR_Word) mercury__term_to_xml__conv1_Root_10);
    mercury__term_to_xml__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_10, (MR_Integer) 0)));
    mercury__term_to_xml__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_10, (MR_Integer) 1)));
    mercury__term_to_xml__Children_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_10, (MR_Integer) 2)));
    {
      mercury__term_to_xml__succeeded = mercury__term_to_xml__contains_noformat_xml_1_p_0(mercury__term_to_xml__Children_13);
    }
    if (mercury__term_to_xml__succeeded)
      mercury__term_to_xml__ChildrenFormat_14 = (MR_Integer) 1;
    else
      mercury__term_to_xml__ChildrenFormat_14 = (MR_Integer) 0;
    {
      mercury__term_to_xml__write_xml_element_format_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_19, mercury__term_to_xml__Stream_6, mercury__term_to_xml__ChildrenFormat_14, mercury__term_to_xml__Indent_7, mercury__term_to_xml__Root_10, mercury__term_to_xml__STATE_VARIABLE_State_0_15, mercury__term_to_xml__STATE_VARIABLE_State_16);
    }
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_doc_style_dtd_6_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_xmlable_26,
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
  MR_Box mercury__term_to_xml__Stream_7,
  MR_Box mercury__term_to_xml__Term_8,
  MR_Word mercury__term_to_xml__MaybeStyleSheet_9,
  MR_Word mercury__term_to_xml__MaybeDTD_10,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_18,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_19)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__Root_12;
    MR_String mercury__term_to_xml__RootName_13;
    MR_Word mercury__term_to_xml__Children_15;
    MR_Word mercury__term_to_xml__ChildrenFormat_17;
    MR_Word mercury__term_to_xml__Var_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_21;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_22_22;
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_23_23;
    MR_Box MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box);
    MR_Box mercury__term_to_xml__conv6_Root_12;
    MR_Word mercury__term_to_xml__Var_14;

    {
      mercury__term_to_xml__write_xml_header_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Var_20, mercury__term_to_xml__STATE_VARIABLE_State_0_18, &mercury__term_to_xml__STATE_VARIABLE_State_21_21);
    }
    if ((mercury__term_to_xml__MaybeStyleSheet_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__term_to_xml__STATE_VARIABLE_State_22_22 = mercury__term_to_xml__STATE_VARIABLE_State_21_21;
    else
      {
        MR_String mercury__term_to_xml__Type_33 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_9, (MR_Integer) 0)));
        MR_String mercury__term_to_xml__Href_34 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_9, (MR_Integer) 1)));
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_36;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_14_37;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_39;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_17_40;
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), mercury__term_to_xml__STATE_VARIABLE_State_21_21, &mercury__term_to_xml__STATE_VARIABLE_State_13_36);
        }
        mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__Type_33)), mercury__term_to_xml__STATE_VARIABLE_State_13_36, &mercury__term_to_xml__STATE_VARIABLE_State_14_37);
        }
        mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\" href=\"")), mercury__term_to_xml__STATE_VARIABLE_State_14_37, &mercury__term_to_xml__STATE_VARIABLE_State_16_39);
        }
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__Href_34)), mercury__term_to_xml__STATE_VARIABLE_State_16_39, &mercury__term_to_xml__STATE_VARIABLE_State_17_40);
        }
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\"\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_17_40, &mercury__term_to_xml__STATE_VARIABLE_State_22_22);
        }
      }
    mercury__term_to_xml__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_xmlable_26, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_to_xml__conv6_Root_12 = mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_xmlable_26), mercury__term_to_xml__Term_8);
    }
    mercury__term_to_xml__Root_12 = ((MR_Word) mercury__term_to_xml__conv6_Root_12);
    mercury__term_to_xml__RootName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_12, (MR_Integer) 0)));
    mercury__term_to_xml__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_12, (MR_Integer) 1)));
    mercury__term_to_xml__Children_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_12, (MR_Integer) 2)));
    if ((mercury__term_to_xml__MaybeDTD_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
      mercury__term_to_xml__STATE_VARIABLE_State_23_23 = mercury__term_to_xml__STATE_VARIABLE_State_22_22;
    else
      {
        MR_Word mercury__term_to_xml__DocType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeDTD_10, (MR_Integer) 0)));
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_15_52;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_53;
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_65;
        void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* mercury__term_to_xml__func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<!DOCTYPE ")), mercury__term_to_xml__STATE_VARIABLE_State_22_22, &mercury__term_to_xml__STATE_VARIABLE_State_15_52);
        }
        mercury__term_to_xml__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__RootName_13)), mercury__term_to_xml__STATE_VARIABLE_State_15_52, &mercury__term_to_xml__STATE_VARIABLE_State_16_53);
        }
        switch (MR_tag((MR_Word) mercury__term_to_xml__DocType_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String mercury__term_to_xml__PUBLIC_49 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_64;
              void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
              void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_27_64);
              }
              mercury__term_to_xml__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__PUBLIC_49)), mercury__term_to_xml__STATE_VARIABLE_State_27_64, &mercury__term_to_xml__STATE_VARIABLE_State_28_65);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String mercury__term_to_xml__SYSTEM_50 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_16, (MR_Integer) 1)));
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_58;
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_22_59;
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_24_61;
              MR_String mercury__term_to_xml__PUBLIC_68 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
              void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
              void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                mercury__term_to_xml__func_11(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_21_58);
              }
              mercury__term_to_xml__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__PUBLIC_68)), mercury__term_to_xml__STATE_VARIABLE_State_21_58, &mercury__term_to_xml__STATE_VARIABLE_State_22_59);
              }
              mercury__term_to_xml__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\" \"")), mercury__term_to_xml__STATE_VARIABLE_State_22_59, &mercury__term_to_xml__STATE_VARIABLE_State_24_61);
              }
              mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__SYSTEM_50)), mercury__term_to_xml__STATE_VARIABLE_State_24_61, &mercury__term_to_xml__STATE_VARIABLE_State_28_65);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_18_55;
              MR_String mercury__term_to_xml__SYSTEM_69 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
              void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
              void MR_CALL (* mercury__term_to_xml__func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                mercury__term_to_xml__func_15(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " SYSTEM \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_18_55);
              }
              mercury__term_to_xml__func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                mercury__term_to_xml__func_16(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__SYSTEM_69)), mercury__term_to_xml__STATE_VARIABLE_State_18_55, &mercury__term_to_xml__STATE_VARIABLE_State_28_65);
              }
            }
            break;
        }
        mercury__term_to_xml__func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_to_xml__func_17(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\">\n")), mercury__term_to_xml__STATE_VARIABLE_State_28_65, &mercury__term_to_xml__STATE_VARIABLE_State_23_23);
        }
      }
    {
      mercury__term_to_xml__succeeded = mercury__term_to_xml__contains_noformat_xml_1_p_0(mercury__term_to_xml__Children_15);
    }
    if (mercury__term_to_xml__succeeded)
      mercury__term_to_xml__ChildrenFormat_17 = (MR_Integer) 1;
    else
      mercury__term_to_xml__ChildrenFormat_17 = (MR_Integer) 0;
    {
      mercury__term_to_xml__write_xml_element_format_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_7, mercury__term_to_xml__ChildrenFormat_17, (MR_Integer) 0, mercury__term_to_xml__Root_12, mercury__term_to_xml__STATE_VARIABLE_State_23_23, mercury__term_to_xml__STATE_VARIABLE_State_19);
    }
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_doc_4_p_0(
  MR_Word mercury__term_to_xml__TypeClassInfo_for_xmlable_13,
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_14,
  MR_Box mercury__term_to_xml__Stream_5,
  MR_Box mercury__term_to_xml__Term_6,
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_8,
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_9)
{
  {
    MR_bool mercury__term_to_xml__succeeded;
    MR_Word mercury__term_to_xml__Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__term_to_xml__Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));

    {
      mercury__term_to_xml__write_xml_doc_style_dtd_6_p_0(mercury__term_to_xml__TypeClassInfo_for_xmlable_13, mercury__term_to_xml__TypeClassInfo_for_writer_14, mercury__term_to_xml__Stream_5, mercury__term_to_xml__Term_6, mercury__term_to_xml__Var_10, mercury__term_to_xml__Var_11, mercury__term_to_xml__STATE_VARIABLE_State_0_8, mercury__term_to_xml__STATE_VARIABLE_State_9);
    }
  }
}

void mercury__term_to_xml__init(void)
{
}

void mercury__term_to_xml__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_attr_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_attr_source_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_doctype_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_dtd_generation_result_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_element_mapping_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_element_pred_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_dtd_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_format_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_functor_info_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_stylesheet_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0);
}

void mercury__term_to_xml__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__term_to_xml__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module term_to_xml. */
