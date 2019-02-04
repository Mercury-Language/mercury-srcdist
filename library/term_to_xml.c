/*
** Automatically generated from `term_to_xml.m'
** by the Mercury compiler,
** version 2018-10-22
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


// :- module term_to_xml.
// :- implementation.

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




static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_to_xml__list__pti_list_1__plain_term_to_xml__type_ctor_info_attr_from_source_0;

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_attr_0_0[2];

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0;

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_0_0[1];

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_0[1];

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_attr_0[1];

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_0[1];

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_attr_from_source_0_0[2];

static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_attr_from_source_0_0[2];

static const MR_DuArgLocn mercury__term_to_xml__term_to_xml__field_locns_attr_from_source_0_0[2];

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

static MR_Integer MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__make_simple_element_4_p_0(
  MR_Word TypeDesc_5,
  MR_Word MaybeFunctorInfo_6,
  MR_String * Element_7,
  MR_Word * AttrFromSources_8);

static void MR_CALL 
mercury__term_to_xml__make_unique_element_4_p_0(
  MR_Word TypeDesc_5,
  MR_Word MaybeFunctorInfo_6,
  MR_String * Element_7,
  MR_Word * AttrFromSources_8);

static MR_String MR_CALL 
mercury__term_to_xml__mangle_1_f_0(
  MR_String Functor_3);

static void MR_CALL 
mercury__term_to_xml__foldl_between_2__ho33_6_p_in__string_0(
  MR_String V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Word V_14_11,
  MR_Word * V_15_12);

static void MR_CALL 
mercury__term_to_xml__mangle_char_3_p_0(
  MR_Char Chr_4,
  MR_Word PrevChrs_5,
  MR_Word * HeadVar__3_3);

static MR_Word MR_CALL 
mercury__term_to_xml__all_attr_sources_0_f_0(void);

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
  MR_Word Var_24,
  MR_Box Var_25,
  MR_Word Var_26,
  MR_Integer Var_27,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * HeadVar__6_6);

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
  MR_Word Var_24,
  MR_Box Var_25,
  MR_Word Var_26,
  MR_Integer Var_27,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * HeadVar__6_6);

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2(
  MR_Word TypeInfo_for_T_33,
  MR_Word TypeClassInfo_for_writer_32,
  MR_Box Stream_9,
  MR_Word NonCanon_10,
  MR_Box Term_11,
  MR_Word ElementMapping_12,
  MR_Word MaybeDTD_13,
  MR_Word * DTDResult_14,
  MR_Box STATE_VARIABLE_State_0_26,
  MR_Box * STATE_VARIABLE_State_27);

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
  MR_Word Var_24,
  MR_Box Var_25,
  MR_Word Var_26,
  MR_Integer Var_27,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * HeadVar__6_6);

static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Word Var_13,
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
mercury__term_to_xml__find_field_names_5_p_0(
  MR_Word TypeDesc_6,
  MR_Word HeadVar__2_2,
  MR_String Functor_9,
  MR_Integer Arity_10,
  MR_Word * MaybeFieldNames_11);

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho3_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word TypeClassInfo_for_writer_32,
  MR_Box Stream_9,
  MR_Word NonCanon_10,
  MR_Box Term_11,
  MR_Word ElementMapping_12,
  MR_Word MaybeDTD_13,
  MR_Word * DTDResult_14,
  MR_Box STATE_VARIABLE_State_0_26,
  MR_Box * STATE_VARIABLE_State_27);

static void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_dtd_types_6_p_0(
  MR_Word TypeClassInfo_for_writer_29,
  MR_Box Stream_1,
  MR_Word MakeElement_2,
  MR_Word HeadVar__3_3,
  MR_Word AlreadyDone_4,
  MR_Box STATE_VARIABLE_State_0_5,
  MR_Box * STATE_VARIABLE_State_6);

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho8_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho25_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__term_to_xml__write_dtd_entries_10_p_0(
  MR_Word TypeClassInfo_for_writer_79,
  MR_Box Stream_1,
  MR_Word MakeElement_2,
  MR_Word TypeDesc_3,
  MR_Word HeadVar__4_4,
  MR_Word MaybeFunctorList_5,
  MR_Word MaybeArityList_6,
  MR_Word ArgTypeListList_7,
  MR_Word AttributeListList_8,
  MR_Box STATE_VARIABLE_State_0_9,
  MR_Box * STATE_VARIABLE_State_10);

static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
mercury__term_to_xml__dtd_allowed_functors_regex_2_f_0(
  MR_Word MakeElement_4,
  MR_Word TypeDesc_5);

static void MR_CALL 
mercury__term_to_xml__write_dtd_attlists_8_p_0(
  MR_Word TypeClassInfo_for_writer_20,
  MR_Box Stream_9,
  MR_String Element_10,
  MR_Word AttrFromSources_11,
  MR_Word MaybeFunctor_12,
  MR_Word MaybeArity_13,
  MR_Word TypeDesc_14,
  MR_Box STATE_VARIABLE_State_0_16,
  MR_Box * STATE_VARIABLE_State_17);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_55_44_32_56_93_95_48_4_p_in__list_0(
  MR_Word Var_16,
  MR_Box Var_17,
  MR_String Var_18,
  MR_Word Var_19,
  MR_Word Var_20,
  MR_Word Var_21,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__term_to_xml__write_dtd_attlist_8_p_0(
  MR_Word TypeClassInfo_for_writer_34,
  MR_Box Stream_9,
  MR_String Element_10,
  MR_Word MaybeFunctor_11,
  MR_Word MaybeArity_12,
  MR_Word TypeDesc_13,
  MR_Word HeadVar__6_6,
  MR_Box STATE_VARIABLE_State_0_19,
  MR_Box * STATE_VARIABLE_State_20);

static MR_bool MR_CALL 
mercury__term_to_xml__is_primitive_type_2_p_0(
  MR_Word TypeDesc_3,
  MR_String * Element_4);

static void MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____list__list_1_1(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__term_to_xml__can_generate_dtd_for_types_4_f_0(
  MR_Word MakeElement_1,
  MR_Word HeadVar__2_2,
  MR_Word Done_3,
  MR_Word ElementsSoFar_4);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__term_to_xml__get_elements_and_args_7_p_0(
  MR_Word MakeElement_8,
  MR_Word TypeDesc_9,
  MR_Word * Elements_10,
  MR_Word * MaybeFunctors_11,
  MR_Word * MaybeArities_12,
  MR_Word * ArgTypeLists_13,
  MR_Word * AttributeLists_14);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(
  MR_Word Var_16,
  MR_Word Var_17,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(
  MR_Word Var_20,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho23_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho22_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mercury__term_to_xml__is_array_2_p_0(
  MR_Word TypeDesc_3,
  MR_Word * ArgPseudoType_4);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_16,
  MR_Box Var_17,
  MR_Word Var_18,
  MR_Integer Var_19,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(
  MR_Word Var_16,
  MR_Box Var_17,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_string_4_p_0(
  MR_Word TypeClassInfo_for_writer_12,
  MR_Box Stream_5,
  MR_String Str_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(
  MR_Word Var_17,
  MR_Box Var_18,
  MR_String V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Box V_14_11,
  MR_Box * V_15_12);

static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_char_4_p_0(
  MR_Word TypeClassInfo_for_writer_14,
  MR_Box Stream_5,
  MR_Char Chr_6,
  MR_Box STATE_VARIABLE_State_0_9,
  MR_Box * STATE_VARIABLE_State_10);

static void MR_CALL 
mercury__term_to_xml__maybe_indent_5_p_0(
  MR_Word TypeClassInfo_for_writer_13,
  MR_Box Stream_6,
  MR_Word Format_7,
  MR_Integer Indent_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11);

static void MR_CALL 
mercury__term_to_xml__maybe_nl_4_p_0(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_State_0_3,
  MR_Box * STATE_VARIABLE_State_4);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____attr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_from_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____attr_from_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____attr_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____doctype_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____doctype_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____dtd_generation_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____dtd_generation_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_mapping_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____element_mapping_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____element_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_dtd_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____maybe_dtd_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____maybe_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_functor_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____maybe_functor_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_stylesheet_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____maybe_stylesheet_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____xml_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_to_xml____Compare____xml_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[9])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "type")),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[11])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "arity")),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[13])),
    ((MR_Box) ((MR_Unsigned) 0U))
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
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) (mercury__term_to_xml__can_generate_dtd_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__can_generate_dtd_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_dtd_from_type_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_dtd_from_type_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_doctype_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_doctype_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_doc_general_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_doc_general_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_doctype_8_p_2_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_doctype_8_p_2_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_1_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_2_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_2_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_3_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_3_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__get_element_pred_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__get_element_pred_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
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
    ((MR_Box) ((MR_Integer) 4)),
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



static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_to_xml__list__pti_list_1__plain_term_to_xml__type_ctor_info_attr_from_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0)
  }
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_attr_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0 = {
  (MR_String) "attr",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_to_xml__term_to_xml__field_types_attr_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0
};

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_0_0,
    INT8_C(-1)
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
  MR_TYPECTOR_REP_DU,
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
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__term_to_xml__term_to_xml__type_ctor_info_attr_source_0)
};

static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_attr_from_source_0_0[2] = {
  (MR_String) "attr_name",
  (MR_String) "attr_source"
};

static const MR_DuArgLocn mercury__term_to_xml__term_to_xml__field_locns_attr_from_source_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_attr_from_source_0_0 = {
  (MR_String) "attr_from_source",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_to_xml__term_to_xml__field_types_attr_from_source_0_0,
  mercury__term_to_xml__term_to_xml__field_names_attr_from_source_0_0,
  mercury__term_to_xml__term_to_xml__field_locns_attr_from_source_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_from_source_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_from_source_0_0
};

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_from_source_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_from_source_0_0,
    INT8_C(-1)
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
  MR_TYPECTOR_REP_DU,
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
  MR_TYPECTOR_REP_ENUM,
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
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_0 = {
  (MR_String) "public",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_to_xml__term_to_xml__field_types_doctype_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_1 = {
  (MR_String) "public_system",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term_to_xml__term_to_xml__field_types_doctype_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_2 = {
  (MR_String) "system",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__term_to_xml__term_to_xml__field_types_doctype_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_2,
    INT8_C(-1)
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
  MR_TYPECTOR_REP_DU,
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
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_1 = {
  (MR_String) "multiple_functors_for_root",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1type_desc__type_ctor_info_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0)
  }
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__term_to_xml__list__ti_list_1type_desc__type_ctor_info_type_desc_0)
};

static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_dtd_generation_result_0_2[2] = {
  (MR_String) "duplicate_element",
  (MR_String) "duplicate_types"
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_2 = {
  (MR_String) "duplicate_elements",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_2,
  mercury__term_to_xml__term_to_xml__field_names_dtd_generation_result_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_3 = {
  (MR_String) "unsupported_dtd_type",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_4 = {
  (MR_String) "type_not_ground",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_2,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_3,
    INT8_C(-1)
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
  MR_TYPECTOR_REP_DU,
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
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_1 = {
  (MR_String) "unique",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0)
  }
};

static const MR_VA_TypeInfo_Struct4 mercury__term_to_xml____vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0),
    (MR_TypeInfo) (&mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_functor_info_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0)
  }
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_element_mapping_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__term_to_xml____vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_2 = {
  (MR_String) "custom",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__term_to_xml__term_to_xml__field_types_element_mapping_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_1,
    INT8_C(-1)
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
  MR_TYPECTOR_REP_DU,
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
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term_to_xml____Unify____element_pred_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____element_pred_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "element_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__term_to_xml____vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_0 = {
  (MR_String) "embed_dtd",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_dtd_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__term_to_xml__term_to_xml__type_ctor_info_doctype_0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_1 = {
  (MR_String) "external_dtd",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term_to_xml__term_to_xml__field_types_maybe_dtd_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_2 = {
  (MR_String) "no_dtd",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_1,
    INT8_C(-1)
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
  MR_TYPECTOR_REP_DU,
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
  MR_TYPECTOR_REP_ENUM,
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
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_maybe_functor_info_0_0[2] = {
  (MR_String) "functor_name",
  (MR_String) "functor_arity"
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_0 = {
  (MR_String) "du_functor",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_to_xml__term_to_xml__field_types_maybe_functor_info_0_0,
  mercury__term_to_xml__term_to_xml__field_names_maybe_functor_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_1 = {
  (MR_String) "non_du",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_1,
    INT8_C(-1)
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
  MR_TYPECTOR_REP_DU,
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
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_maybe_stylesheet_0_0[2] = {
  (MR_String) "stylesheet_type",
  (MR_String) "stylesheet_href"
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_0 = {
  (MR_String) "with_stylesheet",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_to_xml__term_to_xml__field_types_maybe_stylesheet_0_0,
  mercury__term_to_xml__term_to_xml__field_names_maybe_stylesheet_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_1 = {
  (MR_String) "no_stylesheet",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_1,
    INT8_C(-1)
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
  MR_TYPECTOR_REP_DU,
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
    (MR_TypeInfo) (&mercury__term_to_xml__term_to_xml__type_ctor_info_attr_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_xml_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0)
  }
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_0),
  (MR_PseudoTypeInfo) (&mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_xml_0)
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_to_xml__term_to_xml__field_types_xml_0_0,
  mercury__term_to_xml__term_to_xml__field_names_xml_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_1 = {
  (MR_String) "data",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term_to_xml__term_to_xml__field_types_xml_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_2 = {
  (MR_String) "cdata",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__term_to_xml__term_to_xml__field_types_xml_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_3 = {
  (MR_String) "comment",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mercury__term_to_xml__term_to_xml__field_types_xml_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_4 = {
  (MR_String) "entity",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__field_types_xml_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_5[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_5 = {
  (MR_String) "raw",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  mercury__term_to_xml__term_to_xml__field_types_xml_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_2,
    INT8_C(-1)
  },
  {
    (MR_Integer) 3,
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_3,
    INT8_C(-1)
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
  MR_TYPECTOR_REP_DU,
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
    MR_FUNCTION
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

static MR_Integer MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____xml_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_102 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_103 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_102 == CastY_103);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            MR_String Var_117 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_6;
                  MR_Integer V_7_138;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_117 ;
	S2 =  ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_138  = Res;
}
                  succeeded = (V_7_138 < (MR_Integer) 0);
                  if (succeeded)
                    SubResult1_6 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_138 == (MR_Integer) 0);
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

                    mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[5]), &SubResult2_9, ((MR_Box) (Var_116)), ((MR_Box) (ArgY2_8)));
                    succeeded = (SubResult2_9 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_9;
                    else
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Var_115)), ((MR_Box) (ArgY3_11)));
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
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
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_114 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgY1_37 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer V_7_133;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_114 ;
	S2 =  ArgY1_37 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_133  = Res;
}
                  succeeded = (V_7_133 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_133 == (MR_Integer) 0);
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
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_112 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_String ArgY1_53 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer V_7_123;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_112 ;
	S2 =  ArgY1_53 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_123  = Res;
}
                  succeeded = (V_7_123 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_123 == (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
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
                MR_String Var_113 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String ArgY1_69 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Integer V_7_128;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_113 ;
	S2 =  ArgY1_69 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_128  = Res;
}
                          succeeded = (V_7_128 < (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (V_7_128 == (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 0;
                            else
                              *HeadVar__1_1 = (MR_Integer) 2;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Var_118 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String ArgY1_85 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Integer V_7_143;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_118 ;
	S2 =  ArgY1_85 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_143  = Res;
}
                          succeeded = (V_7_143 < (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (V_7_143 == (MR_Integer) 0);
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
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String Var_119 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
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
                          MR_String ArgY1_101 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Integer V_7_148;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_119 ;
	S2 =  ArgY1_101 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_148  = Res;
}
                          succeeded = (V_7_148 < (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (V_7_148 == (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 0;
                            else
                              *HeadVar__1_1 = (MR_Integer) 2;
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
          {
            MR_Word TypeInfo_21_21;
            MR_Word TypeInfo_22_22;
            MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_6;
            MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
              succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
              if (succeeded)
              {
                TypeInfo_21_21 = (MR_Word) (&mercury__term_to_xml_scalar_common_1[5]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
                if (succeeded)
                {
                  TypeInfo_22_22 = (MR_Word) (&mercury__term_to_xml_scalar_common_1[6]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
                }
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_11 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_11, ArgY1_12) == 0);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ArgX1_13 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_13, ArgY1_14) == 0);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgX1_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_16;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_16 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_15, ArgY1_16) == 0);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_18;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_18 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____maybe_stylesheet_0_0(
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
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_String Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_6;
        MR_Integer V_7_22;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_stylesheet_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_18 ;
	S2 =  ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_22  = Res;
}
        succeeded = (V_7_22 < (MR_Integer) 0);
        if (succeeded)
          SubResult1_6 = (MR_Integer) 1;
        else
        {
          succeeded = (V_7_22 == (MR_Integer) 0);
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
          MR_Integer V_7_27;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_stylesheet_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_17 ;
	S2 =  ArgY2_8 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_27  = Res;
}
          succeeded = (V_7_27 < (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (V_7_27 == (MR_Integer) 0);
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
mercury__term_to_xml____Unify____maybe_stylesheet_0_0(
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
      MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_8 == CastX_7);
    }
    else
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4;
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
        if (succeeded)
          succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____maybe_functor_info_0_0(
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
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_6;
        MR_Integer V_7_22;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_functor_info_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_18 ;
	S2 =  ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_22  = Res;
}
        succeeded = (V_7_22 < (MR_Integer) 0);
        if (succeeded)
          SubResult1_6 = (MR_Integer) 1;
        else
        {
          succeeded = (V_7_22 == (MR_Integer) 0);
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
          succeeded = (Var_17 < ArgY2_8);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_17 == ArgY2_8);
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
mercury__term_to_xml____Unify____maybe_functor_info_0_0(
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
      MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_8 == CastX_7);
    }
    else
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4;
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
        if (succeeded)
          succeeded = (ArgX2_5 == ArgY2_6);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____maybe_format_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_format_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____maybe_dtd_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_10 == CastY_11);
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
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__term_to_xml____Compare____doctype_0_0(HeadVar__1_1, Var_13, ArgY1_7);
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
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = mercury__term_to_xml____Unify____doctype_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____element_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_to_xml_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_pred_0_0(
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
mercury__term_to_xml____Compare____element_mapping_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_10 == CastY_11);
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
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                {
                  MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_to_xml_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Var_13)), ((MR_Box) (ArgY1_9)));
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
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_7), (MR_Word) (ArgY1_8));
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____dtd_generation_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_45 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_46 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_45 == CastY_46);
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
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_String Var_52 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                {
                  MR_String ArgY1_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_18;
                  MR_Integer V_7_58;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____dtd_generation_result_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_52 ;
	S2 =  ArgY1_17 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_58  = Res;
}
                  succeeded = (V_7_58 < (MR_Integer) 0);
                  if (succeeded)
                    SubResult1_18 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_58 == (MR_Integer) 0);
                    if (succeeded)
                      SubResult1_18 = (MR_Integer) 0;
                    else
                      SubResult1_18 = (MR_Integer) 2;
                  }
                  succeeded = (SubResult1_18 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_18;
                  else
                  {
                    mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_51)), ((MR_Box) (ArgY2_20)));
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
            MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__type_desc____Compare____type_desc_0_0(HeadVar__1_1, Var_54, ArgY1_33);
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
            MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

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
                {
                  MR_Word ArgY1_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__type_desc____Compare____pseudo_type_desc_0_0(HeadVar__1_1, Var_53, ArgY1_44);
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
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_17_17;
            MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
              if (succeeded)
              {
                TypeInfo_17_17 = (MR_Word) (&mercury__term_to_xml_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = mercury__type_desc____Unify____type_desc_0_0(ArgX1_11, ArgY1_12);
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
              succeeded = mercury__type_desc____Unify____pseudo_type_desc_0_0(ArgX1_13, ArgY1_14);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____doctype_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_29 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_30 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_29 == CastY_30);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_35 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer V_7_42;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_35 ;
	S2 =  ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_42  = Res;
}
                  succeeded = (V_7_42 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_42 == (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_36 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_String Var_37 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgY1_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_String ArgY2_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_16;
                  MR_Integer V_7_47;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_37 ;
	S2 =  ArgY1_15 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_47  = Res;
}
                  succeeded = (V_7_47 < (MR_Integer) 0);
                  if (succeeded)
                    SubResult1_16 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_47 == (MR_Integer) 0);
                    if (succeeded)
                      SubResult1_16 = (MR_Integer) 0;
                    else
                      SubResult1_16 = (MR_Integer) 2;
                  }
                  succeeded = (SubResult1_16 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_16;
                  else
                  {
                    MR_Integer V_7_52;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_36 ;
	S2 =  ArgY2_18 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_52  = Res;
}
                    succeeded = (V_7_52 < (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (V_7_52 == (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *HeadVar__1_1 = (MR_Integer) 2;
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
            MR_String Var_38 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_String ArgY1_28 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer V_7_57;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_38 ;
	S2 =  ArgY1_28 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_57  = Res;
}
                  succeeded = (V_7_57 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_57 == (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_6;
            MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_String ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
              if (succeeded)
                succeeded = (strcmp(ArgX2_7, ArgY2_8) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____attr_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_source_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____attr_from_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word SubResult1_6;
      MR_Integer V_7_18;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_from_source_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  ArgX1_4 ;
	S2 =  ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_18  = Res;
}
      succeeded = (V_7_18 < (MR_Integer) 0);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 1;
      else
      {
        succeeded = (V_7_18 == (MR_Integer) 0);
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
        MR_Integer Var_13 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_14 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_13 < Var_14);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_13 == Var_14);
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
mercury__term_to_xml____Unify____attr_from_source_0_0(
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
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml____Compare____attr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;
      MR_Integer V_7_16;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  ArgX1_4 ;
	S2 =  ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_16  = Res;
}
      succeeded = (V_7_16 < (MR_Integer) 0);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 1;
      else
      {
        succeeded = (V_7_16 == (MR_Integer) 0);
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
        MR_Integer V_7_21;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  ArgX2_7 ;
	S2 =  ArgY2_8 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_21  = Res;
}
        succeeded = (V_7_21 < (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (V_7_21 == (MR_Integer) 0);
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
mercury__term_to_xml____Unify____attr_0_0(
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
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__term_to_xml__to_xml_1_f_0(
  MR_Word TypeClassInfo_for_xmlable_3,
  MR_Box HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_xmlable_3, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_xmlable_3)), HeadVar__1_1);
    HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__term_to_xml__is_maybe_yes_2_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1,
  MR_Box * X_3)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
      *X_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__term_to_xml__make_attrs_from_sources_5_f_0(
  MR_Word MaybeFunctor_7,
  MR_Word MaybeArity_8,
  MR_Word TypeDesc_9,
  MR_Word MaybeField_10,
  MR_Word AttrFromSources_11)
{
  {
    MR_Word Attrs_12;
    MR_Word MaybeAttrs_13;

    MaybeAttrs_13 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(MaybeFunctor_7, MaybeArity_8, TypeDesc_9, MaybeField_10, AttrFromSources_11);
    mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(MaybeAttrs_13, &Attrs_12);
    return Attrs_12;
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_include_details_cc_8_p_0(
  MR_Word TypeClassInfo_for_writer_20,
  MR_Box Stream_9,
  MR_Word MakeElement_10,
  MR_Integer IndentLevel_11,
  MR_Word Univ_12,
  MR_Word MaybeFieldNames0_13,
  MR_Word * MaybeFieldNames_14,
  MR_Box STATE_VARIABLE_State_0_16,
  MR_Box * STATE_VARIABLE_State_17)
{
  {
    mercury__term_to_xml__write_xml_element_univ_9_p_2(TypeClassInfo_for_writer_20, Stream_9, (MR_Integer) 2, MakeElement_10, IndentLevel_11, Univ_12, MaybeFieldNames0_13, MaybeFieldNames_14, STATE_VARIABLE_State_0_16, STATE_VARIABLE_State_17);
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_canonicalize_8_p_0(
  MR_Word TypeClassInfo_for_writer_20,
  MR_Box Stream_9,
  MR_Word MakeElement_10,
  MR_Integer IndentLevel_11,
  MR_Word Univ_12,
  MR_Word MaybeFieldNames0_13,
  MR_Word * MaybeFieldNames_14,
  MR_Box STATE_VARIABLE_State_0_16,
  MR_Box * STATE_VARIABLE_State_17)
{
  {
    mercury__term_to_xml__write_xml_element_univ_9_p_1(TypeClassInfo_for_writer_20, Stream_9, (MR_Integer) 1, MakeElement_10, IndentLevel_11, Univ_12, MaybeFieldNames0_13, MaybeFieldNames_14, STATE_VARIABLE_State_0_16, STATE_VARIABLE_State_17);
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_do_not_allow_8_p_0(
  MR_Word TypeClassInfo_for_writer_20,
  MR_Box Stream_9,
  MR_Word MakeElement_10,
  MR_Integer IndentLevel_11,
  MR_Word Univ_12,
  MR_Word MaybeFieldNames0_13,
  MR_Word * MaybeFieldNames_14,
  MR_Box STATE_VARIABLE_State_0_16,
  MR_Box * STATE_VARIABLE_State_17)
{
  {
    mercury__term_to_xml__write_xml_element_univ_9_p_0(TypeClassInfo_for_writer_20, Stream_9, (MR_Integer) 0, MakeElement_10, IndentLevel_11, Univ_12, MaybeFieldNames0_13, MaybeFieldNames_14, STATE_VARIABLE_State_0_16, STATE_VARIABLE_State_17);
  }
}

void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_2(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Box Stream_9,
  MR_Word NonCanon_10,
  MR_Word MakeElement_11,
  MR_Integer IndentLevel_12,
  MR_Word Args_13,
  MR_Word MaybeFieldNames_14,
  MR_Box STATE_VARIABLE_State_0_19,
  MR_Box * STATE_VARIABLE_State_20)
{
  mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_p_2(TypeClassInfo_for_writer_27, Stream_9, MakeElement_11, IndentLevel_12, Args_13, MaybeFieldNames_14, STATE_VARIABLE_State_0_19, STATE_VARIABLE_State_20);
}

void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_1(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Box Stream_9,
  MR_Word NonCanon_10,
  MR_Word MakeElement_11,
  MR_Integer IndentLevel_12,
  MR_Word Args_13,
  MR_Word MaybeFieldNames_14,
  MR_Box STATE_VARIABLE_State_0_19,
  MR_Box * STATE_VARIABLE_State_20)
{
  mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_p_1(TypeClassInfo_for_writer_27, Stream_9, MakeElement_11, IndentLevel_12, Args_13, MaybeFieldNames_14, STATE_VARIABLE_State_0_19, STATE_VARIABLE_State_20);
}

void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_0(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Box Stream_9,
  MR_Word NonCanon_10,
  MR_Word MakeElement_11,
  MR_Integer IndentLevel_12,
  MR_Word Args_13,
  MR_Word MaybeFieldNames_14,
  MR_Box STATE_VARIABLE_State_0_19,
  MR_Box * STATE_VARIABLE_State_20)
{
  mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_p_0(TypeClassInfo_for_writer_27, Stream_9, MakeElement_11, IndentLevel_12, Args_13, MaybeFieldNames_14, STATE_VARIABLE_State_0_19, STATE_VARIABLE_State_20);
}

MR_bool MR_CALL 
mercury__term_to_xml__is_discriminated_union_2_p_0(
  MR_Word TypeDesc_3,
  MR_Integer * NumFunctors_4)
{
  {
    MR_bool succeeded;
    MR_Integer Var_5;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_discriminated_union_2_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  TypeDesc_3 ;
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
	 *NumFunctors_4  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      Var_5 = (MR_Integer) -1;
      succeeded = (*NumFunctors_4 > Var_5);
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__term_to_xml__can_format_siblings_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv3_Element_7;
    MR_Word conv2_AttrFromSources_8;

    mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Element_7, &conv2_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv3_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv2_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv1_Element_7;
    MR_Word conv0_AttrFromSources_8;

    mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Element_7, &conv0_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv1_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv0_AttrFromSources_8));
  }
}

void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[21]);
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[22]);
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      break;
  }
}

static void MR_CALL 
mercury__term_to_xml__make_simple_element_4_p_0(
  MR_Word TypeDesc_5,
  MR_Word MaybeFunctorInfo_6,
  MR_String * Element_7,
  MR_Word * AttrFromSources_8)
{
  {
    MR_bool succeeded;

    if ((MaybeFunctorInfo_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String PrimitiveElement_11;
      MR_Word Var_50;

{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0) ;
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
	 Var_50  = TypeInfo;
}
      succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_5, Var_50);
      if (succeeded)
      {
        PrimitiveElement_11 = (MR_String) "String";
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Var_51;

{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0) ;
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
	 Var_51  = TypeInfo;
}
        succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_5, Var_51);
        if (succeeded)
        {
          PrimitiveElement_11 = (MR_String) "Char";
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Var_52;

{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0) ;
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
	 Var_52  = TypeInfo;
}
          succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_5, Var_52);
          if (succeeded)
          {
            PrimitiveElement_11 = (MR_String) "Int";
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word Var_53;

{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0) ;
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
	 Var_53  = TypeInfo;
}
            succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_5, Var_53);
            if (succeeded)
            {
              PrimitiveElement_11 = (MR_String) "Float";
              succeeded = MR_TRUE;
            }
          }
        }
      }
      if (succeeded)
      {
        *Element_7 = PrimitiveElement_11;
        *AttrFromSources_8 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[12]));
      }
      else
      {
        MR_Word PseudoTypeDesc_60;
        MR_Word TypeCtor_61;
        MR_Word ArgPseudoTypes_62;
        MR_Word Var_63;
        MR_String Var_64;
        MR_String Var_65;
        MR_String V_5_68;
        MR_Integer V_6_69;
        MR_String V_5_72;
        MR_Integer V_6_73;

{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  TypeDesc_5 ;
		{

    PseudoTypeDesc = TypeDesc;


		;}
#undef MR_PROC_LABEL
	 PseudoTypeDesc_60  = PseudoTypeDesc;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  PseudoTypeDesc_60 ;
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
	 TypeCtor_61  = TypeCtorDesc;
	 ArgPseudoTypes_62  = ArgPseudoTypeInfos;
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
          succeeded = (ArgPseudoTypes_62 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPseudoTypes_62, (MR_Integer) 1))));
            succeeded = (Var_63 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  TypeCtor_61 ;
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
	 V_5_68  = TypeCtorModuleName;
	 Var_64  = TypeCtorName;
	 V_6_69  = TypeCtorArity;
}
              succeeded = (strcmp(Var_64, (MR_String) "array") == 0);
              if (succeeded)
              {
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  TypeCtor_61 ;
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
	 Var_65  = TypeCtorModuleName;
	 V_5_72  = TypeCtorName;
	 V_6_73  = TypeCtorArity;
}
                succeeded = (strcmp(Var_65, (MR_String) "array") == 0);
              }
            }
          }
        }
        if (succeeded)
        {
          *Element_7 = (MR_String) "Array";
          *AttrFromSources_8 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[18]));
        }
        else
        {
          *Element_7 = (MR_String) "Unknown";
          *AttrFromSources_8 = mercury__term_to_xml__all_attr_sources_0_f_0();
        }
      }
    }
    else
    {
      MR_String Functor_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeFunctorInfo_6, (MR_Integer) 0))));
      MR_String ReservedElement_23;

      if ((strcmp(Functor_9, (MR_String) "[]") == 0))
      {
        ReservedElement_23 = (MR_String) "Nil";
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(Functor_9, (MR_String) "{}") == 0))
      {
        ReservedElement_23 = (MR_String) "Tuple";
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(Functor_9, (MR_String) "[|]") == 0))
      {
        ReservedElement_23 = (MR_String) "List";
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        *Element_7 = ReservedElement_23;
      else
        *Element_7 = mercury__term_to_xml__mangle_1_f_0(Functor_9);
      *AttrFromSources_8 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[18]));
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__make_unique_element_4_p_0(
  MR_Word TypeDesc_5,
  MR_Word MaybeFunctorInfo_6,
  MR_String * Element_7,
  MR_Word * AttrFromSources_8)
{
  {
    MR_bool succeeded;

    if ((MaybeFunctorInfo_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String PrimitiveElement_12;

      succeeded = mercury__term_to_xml__is_primitive_type_2_p_0(TypeDesc_5, &PrimitiveElement_12);
      if (succeeded)
      {
        *Element_7 = PrimitiveElement_12;
        *AttrFromSources_8 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[12]));
      }
      else
      {
        MR_Word Var_13;

        succeeded = mercury__term_to_xml__is_array_2_p_0(TypeDesc_5, &Var_13);
        if (succeeded)
        {
          MR_String Var_23;
          MR_String Var_25;
          MR_String Var_26;

          Var_26 = mercury__type_desc__type_name_1_f_0(TypeDesc_5);
          Var_25 = mercury__term_to_xml__mangle_1_f_0(Var_26);
          mercury__string__append_3_p_2((MR_String) "--", Var_25, &Var_23);
          mercury__string__append_3_p_2((MR_String) "Array", Var_23, Element_7);
          *AttrFromSources_8 = mercury__term_to_xml__all_attr_sources_0_f_0();
        }
        else
        {
          MR_String Var_27;

          Var_27 = mercury__type_desc__type_name_1_f_0(TypeDesc_5);
          *Element_7 = mercury__term_to_xml__mangle_1_f_0(Var_27);
          *AttrFromSources_8 = mercury__term_to_xml__all_attr_sources_0_f_0();
        }
      }
    }
    else
    {
      MR_String Functor_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeFunctorInfo_6, (MR_Integer) 0))));
      MR_Integer Arity_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeFunctorInfo_6, (MR_Integer) 1))));
      MR_String MangledElement_11;
      MR_String Var_28;
      MR_String Var_30;
      MR_String Var_31;
      MR_String Var_32;
      MR_String Var_34;
      MR_String Var_35;
      MR_String ReservedElement_38;

      if ((strcmp(Functor_9, (MR_String) "[]") == 0))
      {
        ReservedElement_38 = (MR_String) "Nil";
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(Functor_9, (MR_String) "{}") == 0))
      {
        ReservedElement_38 = (MR_String) "Tuple";
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(Functor_9, (MR_String) "[|]") == 0))
      {
        ReservedElement_38 = (MR_String) "List";
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        MangledElement_11 = ReservedElement_38;
      else
        MangledElement_11 = mercury__term_to_xml__mangle_1_f_0(Functor_9);
      mercury__string__int_to_base_string_3_p_0(Arity_10, (MR_Integer) 10, &Var_31);
      Var_35 = mercury__type_desc__type_name_1_f_0(TypeDesc_5);
      Var_34 = mercury__term_to_xml__mangle_1_f_0(Var_35);
      mercury__string__append_3_p_2((MR_String) "--", Var_34, &Var_32);
      mercury__string__append_3_p_2(Var_31, Var_32, &Var_30);
      mercury__string__append_3_p_2((MR_String) "--", Var_30, &Var_28);
      mercury__string__append_3_p_2(MangledElement_11, Var_28, Element_7);
      *AttrFromSources_8 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[18]));
    }
  }
}

static MR_String MR_CALL 
mercury__term_to_xml__mangle_1_f_0(
  MR_String Functor_3)
{
  {
    MR_bool succeeded;
    MR_String Element_4;
    MR_String Head_5;
    MR_String Tail_6;
    MR_String First_7;
    MR_String Rest_8;
    MR_Word ElementChrs_9;
    MR_String Var_13;
    MR_Integer V_8_32;
    MR_Integer V_13_44;
    MR_Integer V_17_45;
    MR_String Var_18;

    mercury__string__split_4_p_0(Functor_3, (MR_Integer) 1, &Head_5, &Tail_6);
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  Head_5 ;
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
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      mercury__string__to_lower_2_p_0(Head_5, &Var_18);
      succeeded = (strcmp(Head_5, Var_18) == 0);
    }
    if (succeeded)
    {
      First_7 = Head_5;
      Rest_8 = Tail_6;
    }
    else
    {
      First_7 = (MR_String) "Tag_";
      mercury__string__append_3_p_2(Head_5, Tail_6, &Rest_8);
    }
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  Rest_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 V_8_32  = Length;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  Rest_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 V_17_45  = Length;
}
    succeeded = (V_8_32 < V_17_45);
    if (succeeded)
      V_13_44 = V_8_32;
    else
      V_13_44 = V_17_45;
    mercury__term_to_xml__foldl_between_2__ho33_6_p_in__string_0(Rest_8, (MR_Integer) 0, V_13_44, (MR_Word) ((MR_Unsigned) 0U), &ElementChrs_9);
    mercury__string__from_char_list_2_p_0(ElementChrs_9, &Var_13);
    mercury__string__append_3_p_2(First_7, Var_13, &Element_4);
    return Element_4;
  }
}

static void MR_CALL 
mercury__term_to_xml__foldl_between_2__ho33_6_p_in__string_0(
  MR_String V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Word V_14_11,
  MR_Word * V_15_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_9_9 < V_10_10);
    MR_Integer V_12_13;
    MR_Char V_13_14;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__term_to_xml__foldl_between_2__ho33_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  V_8_8 ;
	Index =  V_9_9 ;
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
	 V_12_13  = NextIndex;
	 V_13_14  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (V_12_13 <= V_10_10);
    }
    if (succeeded)
    {
      MR_Word V_16_15;
      MR_Integer next_value_of_V_9_9;
      MR_Word next_value_of_V_14_11;

      mercury__term_to_xml__mangle_char_3_p_0(V_13_14, V_14_11, &V_16_15);
      // direct tailcall eliminated
      ;
      next_value_of_V_9_9 = V_12_13;
      next_value_of_V_14_11 = V_16_15;
      V_9_9 = next_value_of_V_9_9;
      V_14_11 = next_value_of_V_14_11;
      continue;
    }
    else
      *V_15_12 = V_14_11;
    break;
  }
}

static void MR_CALL 
mercury__term_to_xml__mangle_char_3_p_0(
  MR_Char Chr_4,
  MR_Word PrevChrs_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word Chrs_6;

    succeeded = mercury__char__is_alnum_or_underscore_1_p_0(Chr_4);
    if (succeeded)
    {
      {
        Chrs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Chrs_6, 0) = ((MR_Box) (MR_Word) (Chr_4));
        MR_hl_field(MR_mktag(1), Chrs_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Var_9;
      MR_String Var_10;
      MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_char_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  Chr_4 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_11  = Int;
}
      mercury__string__int_to_base_string_3_p_0(Var_11, (MR_Integer) 10, &Var_10);
      mercury__string__to_char_list_2_p_0(Var_10, &Var_9);
      {
        Chrs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Chrs_6, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
        MR_hl_field(MR_mktag(1), Chrs_6, 1) = ((MR_Box) (Var_9));
      }
    }
    mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), PrevChrs_5, Chrs_6, HeadVar__3_3);
  }
}

static MR_Word MR_CALL 
mercury__term_to_xml__all_attr_sources_0_f_0(void)
{
  {
    return (MR_Word) (MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[18]));
  }
}

void MR_CALL 
mercury__term_to_xml__write_dtd_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Box Stream_7,
  MR_Word ElementMapping_9,
  MR_Word * DTDResult_10,
  MR_Box STATE_VARIABLE_State_0_13,
  MR_Box * STATE_VARIABLE_State_14)
{
  {
    MR_Word TypeDesc_12;

{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_for_T_17 ;
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
	 TypeDesc_12  = TypeInfo;
}
    mercury__term_to_xml__write_dtd_from_type_6_p_0(TypeClassInfo_for_writer_16, Stream_7, TypeDesc_12, ElementMapping_9, DTDResult_10, STATE_VARIABLE_State_0_13, STATE_VARIABLE_State_14);
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv3_Element_7;
    MR_Word conv2_AttrFromSources_8;

    mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Element_7, &conv2_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv3_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv2_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv1_Element_7;
    MR_Word conv0_AttrFromSources_8;

    mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Element_7, &conv0_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv1_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv0_AttrFromSources_8));
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeClassInfo_for_writer_21,
  MR_Box Stream_8,
  MR_Word NonCanon_9,
  MR_Word ElementMapping_10,
  MR_Integer IndentLevel_11,
  MR_Box Term_12,
  MR_Box STATE_VARIABLE_State_0_17,
  MR_Box * STATE_VARIABLE_State_18)
{
  {
    MR_Word Univ_14;
    MR_Word MakeElement_15;
    MR_Word Var_16;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_22, Term_12, &Univ_14);
    switch (MR_tag((MR_Word) ElementMapping_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ElementMapping_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MakeElement_15 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[19]);
            break;
          case (MR_Integer) 1:
            MakeElement_15 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[20]);
            break;
        }
        break;
      case (MR_Integer) 1:
        MakeElement_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ElementMapping_10, (MR_Integer) 0))));
        break;
    }
    mercury__term_to_xml__write_xml_element_univ_9_p_3(TypeClassInfo_for_writer_21, Stream_8, NonCanon_9, MakeElement_15, IndentLevel_11, Univ_14, (MR_Word) ((MR_Unsigned) 0U), &Var_16, STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_3(
  MR_Word TypeClassInfo_for_writer_51,
  MR_Box Stream_10,
  MR_Word NonCanon_11,
  MR_Word MakeElement_12,
  MR_Integer IndentLevel_13,
  MR_Word Univ_14,
  MR_Word MaybeFieldNames_15,
  MR_Word * RemainingMaybeFieldNames_16,
  MR_Box STATE_VARIABLE_State_0_32,
  MR_Box * STATE_VARIABLE_State_33)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_52_52;
    MR_Word MaybeFieldName_18;
    MR_Box Term_19;
    MR_String Functor_20;
    MR_Integer Arity_21;
    MR_Word Args_22;
    MR_Word TypeDesc_23;
    MR_Word Request_25;
    MR_String Element_26;
    MR_Word AttrFromSources_27;
    MR_Integer Var_24;
    MR_Integer Var_57;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
    MR_Box conv2_Element_26;
    MR_Box conv1_AttrFromSources_27;
    MR_String PrimValue_28;

    if ((MaybeFieldNames_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *RemainingMaybeFieldNames_16 = (MR_Word) ((MR_Unsigned) 0U);
      MaybeFieldName_18 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MaybeFieldName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldNames_15, (MR_Integer) 0))));
      *RemainingMaybeFieldNames_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldNames_15, (MR_Integer) 1))));
    }
    TypeInfo_52_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_14, (MR_Integer) 0))));
    Term_19 = (MR_hl_field(MR_mktag(0), Univ_14, (MR_Integer) 1));
    mercury__deconstruct__deconstruct_5_p_3(TypeInfo_52_52, Term_19, NonCanon_11, &Functor_20, &Arity_21, &Args_22);
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_52_52 ;
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
	 TypeDesc_23  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_3

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  TypeDesc_23 ;
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
	 Var_24  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      Var_57 = (MR_Integer) -1;
      succeeded = (Var_24 > Var_57);
    }
    if (succeeded)
      {
        Request_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Request_25, 0) = ((MR_Box) (Functor_20));
        MR_hl_field(MR_mktag(1), Request_25, 1) = ((MR_Box) (Arity_21));
      }
    else
      Request_25 = (MR_Word) ((MR_Unsigned) 0U);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), MakeElement_12, (MR_Integer) 1))));
    func_0(((MR_Box) (MakeElement_12)), ((MR_Box) (TypeDesc_23)), ((MR_Box) (Request_25)), &conv2_Element_26, &conv1_AttrFromSources_27);
    Element_26 = ((MR_String) (conv2_Element_26));
    AttrFromSources_27 = ((MR_Word) (conv1_AttrFromSources_27));
    succeeded = mercury__term_to_xml__primitive_value_2_p_0(Univ_14, &PrimValue_28);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_State_34_34;

      mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_51, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_34_34);
      mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(TypeClassInfo_for_writer_51, Stream_10, Element_26, AttrFromSources_27, PrimValue_28, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_34_34, STATE_VARIABLE_State_33);
    }
    else
    if ((Args_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box STATE_VARIABLE_State_47_47;
      MR_Word Var_48;
      MR_Word Var_49;

      mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_51, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_47_47);
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Functor_20));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Arity_21));
      }
      mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(TypeClassInfo_for_writer_51, Stream_10, Element_26, AttrFromSources_27, Var_48, Var_49, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_47_47, STATE_VARIABLE_State_33);
    }
    else
    {
      MR_Word ChildMaybeFieldNames_31;
      MR_Box STATE_VARIABLE_State_36_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Box STATE_VARIABLE_State_39_39;
      MR_Integer Var_40;
      MR_Box STATE_VARIABLE_State_41_41;
      MR_Box STATE_VARIABLE_State_43_43;
      MR_Box STATE_VARIABLE_State_44_44;
      MR_Box STATE_VARIABLE_State_11_64;
      MR_Box STATE_VARIABLE_State_12_65;
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(TypeDesc_23, Functor_20, Arity_21);
      mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_51, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_36_36);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Functor_20));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Arity_21));
      }
      mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(TypeClassInfo_for_writer_51, Stream_10, Element_26, AttrFromSources_27, Var_37, Var_38, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_36_36, &STATE_VARIABLE_State_39_39);
      Var_40 = (MR_Integer) ((MR_Unsigned) IndentLevel_13 + (MR_Unsigned) (MR_Integer) 1);
      mercury__term_to_xml__write_child_xml_elements_8_p_3(TypeClassInfo_for_writer_51, Stream_10, NonCanon_11, MakeElement_12, Var_40, Args_22, ChildMaybeFieldNames_31, STATE_VARIABLE_State_39_39, &STATE_VARIABLE_State_41_41);
      mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_51, Stream_10, IndentLevel_13, STATE_VARIABLE_State_41_41, &STATE_VARIABLE_State_43_43);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
      func_3(((MR_Box) (TypeClassInfo_for_writer_51)), Stream_10, ((MR_Box) ((MR_String) "</")), STATE_VARIABLE_State_43_43, &STATE_VARIABLE_State_11_64);
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
      func_4(((MR_Box) (TypeClassInfo_for_writer_51)), Stream_10, ((MR_Box) (Element_26)), STATE_VARIABLE_State_11_64, &STATE_VARIABLE_State_12_65);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) (TypeClassInfo_for_writer_51)), Stream_10, ((MR_Box) ((MR_String) ">")), STATE_VARIABLE_State_12_65, &STATE_VARIABLE_State_44_44);
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
      func_6(((MR_Box) (TypeClassInfo_for_writer_51)), Stream_10, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_44_44, STATE_VARIABLE_State_33);
    }
  }
}

void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_3(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Box Stream_9,
  MR_Word NonCanon_10,
  MR_Word MakeElement_11,
  MR_Integer IndentLevel_12,
  MR_Word Args_13,
  MR_Word MaybeFieldNames_14,
  MR_Box STATE_VARIABLE_State_0_19,
  MR_Box * STATE_VARIABLE_State_20)
{
  switch (NonCanon_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_17;

        mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(TypeClassInfo_for_writer_27, Stream_9, MakeElement_11, IndentLevel_12, Args_13, MaybeFieldNames_14, &Var_17, STATE_VARIABLE_State_0_19, STATE_VARIABLE_State_20);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_16;

        mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(TypeClassInfo_for_writer_27, Stream_9, MakeElement_11, IndentLevel_12, Args_13, MaybeFieldNames_14, &Var_16, STATE_VARIABLE_State_0_19, STATE_VARIABLE_State_20);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_18;

        mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(TypeClassInfo_for_writer_27, Stream_9, MakeElement_11, IndentLevel_12, Args_13, MaybeFieldNames_14, &Var_18, STATE_VARIABLE_State_0_19, STATE_VARIABLE_State_20);
      }
      break;
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv3_Element_7;
    MR_Word conv2_AttrFromSources_8;

    mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Element_7, &conv2_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv3_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv2_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv1_Element_7;
    MR_Word conv0_AttrFromSources_8;

    mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Element_7, &conv0_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv1_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv0_AttrFromSources_8));
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeClassInfo_for_writer_21,
  MR_Box Stream_8,
  MR_Word NonCanon_9,
  MR_Word ElementMapping_10,
  MR_Integer IndentLevel_11,
  MR_Box Term_12,
  MR_Box STATE_VARIABLE_State_0_17,
  MR_Box * STATE_VARIABLE_State_18)
{
  {
    MR_Word Univ_14;
    MR_Word MakeElement_15;
    MR_Word Var_16;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_22, Term_12, &Univ_14);
    switch (MR_tag((MR_Word) ElementMapping_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ElementMapping_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MakeElement_15 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[17]);
            break;
          case (MR_Integer) 1:
            MakeElement_15 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[18]);
            break;
        }
        break;
      case (MR_Integer) 1:
        MakeElement_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ElementMapping_10, (MR_Integer) 0))));
        break;
    }
    mercury__term_to_xml__write_xml_element_univ_9_p_2(TypeClassInfo_for_writer_21, Stream_8, NonCanon_9, MakeElement_15, IndentLevel_11, Univ_14, (MR_Word) ((MR_Unsigned) 0U), &Var_16, STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv3_Element_7;
    MR_Word conv2_AttrFromSources_8;

    mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Element_7, &conv2_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv3_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv2_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv1_Element_7;
    MR_Word conv0_AttrFromSources_8;

    mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Element_7, &conv0_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv1_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv0_AttrFromSources_8));
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeClassInfo_for_writer_21,
  MR_Box Stream_8,
  MR_Word NonCanon_9,
  MR_Word ElementMapping_10,
  MR_Integer IndentLevel_11,
  MR_Box Term_12,
  MR_Box STATE_VARIABLE_State_0_17,
  MR_Box * STATE_VARIABLE_State_18)
{
  {
    MR_Word Univ_14;
    MR_Word MakeElement_15;
    MR_Word Var_16;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_22, Term_12, &Univ_14);
    switch (MR_tag((MR_Word) ElementMapping_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ElementMapping_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MakeElement_15 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[15]);
            break;
          case (MR_Integer) 1:
            MakeElement_15 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[16]);
            break;
        }
        break;
      case (MR_Integer) 1:
        MakeElement_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ElementMapping_10, (MR_Integer) 0))));
        break;
    }
    mercury__term_to_xml__write_xml_element_univ_9_p_1(TypeClassInfo_for_writer_21, Stream_8, NonCanon_9, MakeElement_15, IndentLevel_11, Univ_14, (MR_Word) ((MR_Unsigned) 0U), &Var_16, STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv3_Element_7;
    MR_Word conv2_AttrFromSources_8;

    mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Element_7, &conv2_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv3_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv2_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv1_Element_7;
    MR_Word conv0_AttrFromSources_8;

    mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Element_7, &conv0_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv1_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv0_AttrFromSources_8));
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeClassInfo_for_writer_21,
  MR_Box Stream_8,
  MR_Word NonCanon_9,
  MR_Word ElementMapping_10,
  MR_Integer IndentLevel_11,
  MR_Box Term_12,
  MR_Box STATE_VARIABLE_State_0_17,
  MR_Box * STATE_VARIABLE_State_18)
{
  {
    MR_Word Univ_14;
    MR_Word MakeElement_15;
    MR_Word Var_16;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_22, Term_12, &Univ_14);
    switch (MR_tag((MR_Word) ElementMapping_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ElementMapping_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MakeElement_15 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[13]);
            break;
          case (MR_Integer) 1:
            MakeElement_15 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[14]);
            break;
        }
        break;
      case (MR_Integer) 1:
        MakeElement_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ElementMapping_10, (MR_Integer) 0))));
        break;
    }
    mercury__term_to_xml__write_xml_element_univ_9_p_0(TypeClassInfo_for_writer_21, Stream_8, NonCanon_9, MakeElement_15, IndentLevel_11, Univ_14, (MR_Word) ((MR_Unsigned) 0U), &Var_16, STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
  }
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
  MR_Word Var_24,
  MR_Box Var_25,
  MR_Word Var_26,
  MR_Integer Var_27,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = HeadVar__5_5;
      *HeadVar__4_4 = HeadVar__3_3;
    }
    else
    {
      MR_Word V_15_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_16_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_23_19;
      MR_Box V_24_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Box next_value_of_HeadVar__5_5;

      mercury__term_to_xml__write_xml_element_univ_9_p_0(Var_24, Var_25, (MR_Integer) 0, Var_26, Var_27, V_15_13, HeadVar__3_3, &V_23_19, HeadVar__5_5, &V_24_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = V_16_14;
      next_value_of_HeadVar__3_3 = V_23_19;
      next_value_of_HeadVar__5_5 = V_24_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_p_0(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Box Stream_9,
  MR_Word MakeElement_11,
  MR_Integer IndentLevel_12,
  MR_Word Args_13,
  MR_Word MaybeFieldNames_14,
  MR_Box STATE_VARIABLE_State_0_19,
  MR_Box * STATE_VARIABLE_State_20)
{
  {
    MR_Word Var_16;

    mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(TypeClassInfo_for_writer_27, Stream_9, MakeElement_11, IndentLevel_12, Args_13, MaybeFieldNames_14, &Var_16, STATE_VARIABLE_State_0_19, STATE_VARIABLE_State_20);
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_0(
  MR_Word TypeClassInfo_for_writer_51,
  MR_Box Stream_10,
  MR_Word NonCanon_11,
  MR_Word MakeElement_12,
  MR_Integer IndentLevel_13,
  MR_Word Univ_14,
  MR_Word MaybeFieldNames_15,
  MR_Word * RemainingMaybeFieldNames_16,
  MR_Box STATE_VARIABLE_State_0_32,
  MR_Box * STATE_VARIABLE_State_33)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_52_52;
    MR_Word MaybeFieldName_18;
    MR_Box Term_19;
    MR_String Functor_20;
    MR_Integer Arity_21;
    MR_Word Args_22;
    MR_Word TypeDesc_23;
    MR_Word Request_25;
    MR_String Element_26;
    MR_Word AttrFromSources_27;
    MR_Integer Var_24;
    MR_Integer Var_57;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
    MR_Box conv2_Element_26;
    MR_Box conv1_AttrFromSources_27;
    MR_String PrimValue_28;

    if ((MaybeFieldNames_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *RemainingMaybeFieldNames_16 = (MR_Word) ((MR_Unsigned) 0U);
      MaybeFieldName_18 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MaybeFieldName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldNames_15, (MR_Integer) 0))));
      *RemainingMaybeFieldNames_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldNames_15, (MR_Integer) 1))));
    }
    TypeInfo_52_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_14, (MR_Integer) 0))));
    Term_19 = (MR_hl_field(MR_mktag(0), Univ_14, (MR_Integer) 1));
    mercury__deconstruct__deconstruct_5_p_0(TypeInfo_52_52, Term_19, NonCanon_11, &Functor_20, &Arity_21, &Args_22);
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_52_52 ;
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
	 TypeDesc_23  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  TypeDesc_23 ;
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
	 Var_24  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      Var_57 = (MR_Integer) -1;
      succeeded = (Var_24 > Var_57);
    }
    if (succeeded)
      {
        Request_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Request_25, 0) = ((MR_Box) (Functor_20));
        MR_hl_field(MR_mktag(1), Request_25, 1) = ((MR_Box) (Arity_21));
      }
    else
      Request_25 = (MR_Word) ((MR_Unsigned) 0U);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), MakeElement_12, (MR_Integer) 1))));
    func_0(((MR_Box) (MakeElement_12)), ((MR_Box) (TypeDesc_23)), ((MR_Box) (Request_25)), &conv2_Element_26, &conv1_AttrFromSources_27);
    Element_26 = ((MR_String) (conv2_Element_26));
    AttrFromSources_27 = ((MR_Word) (conv1_AttrFromSources_27));
    succeeded = mercury__term_to_xml__primitive_value_2_p_0(Univ_14, &PrimValue_28);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_State_34_34;

      mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_51, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_34_34);
      mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(TypeClassInfo_for_writer_51, Stream_10, Element_26, AttrFromSources_27, PrimValue_28, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_34_34, STATE_VARIABLE_State_33);
    }
    else
    if ((Args_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box STATE_VARIABLE_State_47_47;
      MR_Word Var_48;
      MR_Word Var_49;

      mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_51, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_47_47);
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Functor_20));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Arity_21));
      }
      mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(TypeClassInfo_for_writer_51, Stream_10, Element_26, AttrFromSources_27, Var_48, Var_49, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_47_47, STATE_VARIABLE_State_33);
    }
    else
    {
      MR_Word ChildMaybeFieldNames_31;
      MR_Box STATE_VARIABLE_State_36_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Box STATE_VARIABLE_State_39_39;
      MR_Integer Var_40;
      MR_Box STATE_VARIABLE_State_41_41;
      MR_Box STATE_VARIABLE_State_43_43;
      MR_Box STATE_VARIABLE_State_44_44;
      MR_Box STATE_VARIABLE_State_11_64;
      MR_Box STATE_VARIABLE_State_12_65;
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(TypeDesc_23, Functor_20, Arity_21);
      mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_51, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_36_36);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Functor_20));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Arity_21));
      }
      mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(TypeClassInfo_for_writer_51, Stream_10, Element_26, AttrFromSources_27, Var_37, Var_38, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_36_36, &STATE_VARIABLE_State_39_39);
      Var_40 = (MR_Integer) ((MR_Unsigned) IndentLevel_13 + (MR_Unsigned) (MR_Integer) 1);
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_p_0(TypeClassInfo_for_writer_51, Stream_10, MakeElement_12, Var_40, Args_22, ChildMaybeFieldNames_31, STATE_VARIABLE_State_39_39, &STATE_VARIABLE_State_41_41);
      mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_51, Stream_10, IndentLevel_13, STATE_VARIABLE_State_41_41, &STATE_VARIABLE_State_43_43);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
      func_3(((MR_Box) (TypeClassInfo_for_writer_51)), Stream_10, ((MR_Box) ((MR_String) "</")), STATE_VARIABLE_State_43_43, &STATE_VARIABLE_State_11_64);
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
      func_4(((MR_Box) (TypeClassInfo_for_writer_51)), Stream_10, ((MR_Box) (Element_26)), STATE_VARIABLE_State_11_64, &STATE_VARIABLE_State_12_65);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) (TypeClassInfo_for_writer_51)), Stream_10, ((MR_Box) ((MR_String) ">")), STATE_VARIABLE_State_12_65, &STATE_VARIABLE_State_44_44);
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
      func_6(((MR_Box) (TypeClassInfo_for_writer_51)), Stream_10, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_44_44, STATE_VARIABLE_State_33);
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv8_Element_7;
    MR_Word conv7_AttrFromSources_8;

    mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_Element_7, &conv7_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv8_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv7_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv6_Element_7;
    MR_Word conv5_AttrFromSources_8;

    mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_Element_7, &conv5_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv6_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv5_AttrFromSources_8));
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word TypeClassInfo_for_writer_32,
  MR_Box Stream_9,
  MR_Box Term_10,
  MR_Word ElementMapping_11,
  MR_Word MaybeStyleSheet_12,
  MR_Word MaybeDTD_13,
  MR_Word * DTDResult_14,
  MR_Box STATE_VARIABLE_State_0_21,
  MR_Box * STATE_VARIABLE_State_22)
{
  {
    MR_Word Var_23;

{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_doc_general_cc_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_for_T_33 ;
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
	 Var_23  = TypeInfo;
}
    switch (MR_tag((MR_Word) MaybeDTD_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(MaybeDTD_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *DTDResult_14 = mercury__term_to_xml__can_generate_dtd_2_f_0(ElementMapping_11, Var_23);
            break;
          case (MR_Integer) 1:
            *DTDResult_14 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        break;
      case (MR_Integer) 1:
        *DTDResult_14 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    switch (MR_tag((MR_Word) *DTDResult_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(*DTDResult_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box STATE_VARIABLE_State_25_25;
              MR_Box STATE_VARIABLE_State_26_26;
              MR_Box STATE_VARIABLE_State_28_28;
              MR_Word Univ_65;
              MR_Word MakeElement_66;
              MR_Word Var_16;
              MR_Word Var_67;

              mercury__term_to_xml__write_xml_header_4_p_0(TypeClassInfo_for_writer_32, Stream_9, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_State_0_21, &STATE_VARIABLE_State_25_25);
              if ((MaybeStyleSheet_12 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_State_26_26 = STATE_VARIABLE_State_25_25;
              else
              {
                MR_String Type_47 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStyleSheet_12, (MR_Integer) 0))));
                MR_String Href_48 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStyleSheet_12, (MR_Integer) 1))));
                MR_Box STATE_VARIABLE_State_13_50;
                MR_Box STATE_VARIABLE_State_14_51;
                MR_Box STATE_VARIABLE_State_16_53;
                MR_Box STATE_VARIABLE_State_17_54;
                void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                func_0(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), STATE_VARIABLE_State_25_25, &STATE_VARIABLE_State_13_50);
                func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                func_1(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) (Type_47)), STATE_VARIABLE_State_13_50, &STATE_VARIABLE_State_14_51);
                func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                func_2(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) ((MR_String) "\" href=\"")), STATE_VARIABLE_State_14_51, &STATE_VARIABLE_State_16_53);
                func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                func_3(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) (Href_48)), STATE_VARIABLE_State_16_53, &STATE_VARIABLE_State_17_54);
                func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                func_4(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) ((MR_String) "\"\?>\n")), STATE_VARIABLE_State_17_54, &STATE_VARIABLE_State_26_26);
              }
              mercury__term_to_xml__write_doctype_8_p_2(TypeInfo_for_T_33, TypeClassInfo_for_writer_32, Stream_9, (MR_Integer) 2, Term_10, ElementMapping_11, MaybeDTD_13, &Var_16, STATE_VARIABLE_State_26_26, &STATE_VARIABLE_State_28_28);
              mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_33, Term_10, &Univ_65);
              switch (MR_tag((MR_Word) ElementMapping_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ElementMapping_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      MakeElement_66 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[11]);
                      break;
                    case (MR_Integer) 1:
                      MakeElement_66 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[12]);
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  MakeElement_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ElementMapping_11, (MR_Integer) 0))));
                  break;
              }
              mercury__term_to_xml__write_xml_element_univ_9_p_2(TypeClassInfo_for_writer_32, Stream_9, (MR_Integer) 2, MakeElement_66, (MR_Integer) 0, Univ_65, (MR_Word) ((MR_Unsigned) 0U), &Var_67, STATE_VARIABLE_State_28_28, STATE_VARIABLE_State_22);
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_State_22 = STATE_VARIABLE_State_0_21;
            break;
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_State_22 = STATE_VARIABLE_State_0_21;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_State_22 = STATE_VARIABLE_State_0_21;
        break;
      case (MR_Integer) 3:
        *STATE_VARIABLE_State_22 = STATE_VARIABLE_State_0_21;
        break;
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
  MR_Word Var_24,
  MR_Box Var_25,
  MR_Word Var_26,
  MR_Integer Var_27,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = HeadVar__5_5;
      *HeadVar__4_4 = HeadVar__3_3;
    }
    else
    {
      MR_Word V_15_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_16_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_23_19;
      MR_Box V_24_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Box next_value_of_HeadVar__5_5;

      mercury__term_to_xml__write_xml_element_univ_9_p_2(Var_24, Var_25, (MR_Integer) 2, Var_26, Var_27, V_15_13, HeadVar__3_3, &V_23_19, HeadVar__5_5, &V_24_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = V_16_14;
      next_value_of_HeadVar__3_3 = V_23_19;
      next_value_of_HeadVar__5_5 = V_24_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_p_2(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Box Stream_9,
  MR_Word MakeElement_11,
  MR_Integer IndentLevel_12,
  MR_Word Args_13,
  MR_Word MaybeFieldNames_14,
  MR_Box STATE_VARIABLE_State_0_19,
  MR_Box * STATE_VARIABLE_State_20)
{
  {
    MR_Word Var_18;

    mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(TypeClassInfo_for_writer_27, Stream_9, MakeElement_11, IndentLevel_12, Args_13, MaybeFieldNames_14, &Var_18, STATE_VARIABLE_State_0_19, STATE_VARIABLE_State_20);
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_2(
  MR_Word TypeClassInfo_for_writer_51,
  MR_Box Stream_10,
  MR_Word NonCanon_11,
  MR_Word MakeElement_12,
  MR_Integer IndentLevel_13,
  MR_Word Univ_14,
  MR_Word MaybeFieldNames_15,
  MR_Word * RemainingMaybeFieldNames_16,
  MR_Box STATE_VARIABLE_State_0_32,
  MR_Box * STATE_VARIABLE_State_33)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_52_52;
    MR_Word MaybeFieldName_18;
    MR_Box Term_19;
    MR_String Functor_20;
    MR_Integer Arity_21;
    MR_Word Args_22;
    MR_Word TypeDesc_23;
    MR_Word Request_25;
    MR_String Element_26;
    MR_Word AttrFromSources_27;
    MR_Integer Var_24;
    MR_Integer Var_57;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
    MR_Box conv2_Element_26;
    MR_Box conv1_AttrFromSources_27;
    MR_String PrimValue_28;

    if ((MaybeFieldNames_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *RemainingMaybeFieldNames_16 = (MR_Word) ((MR_Unsigned) 0U);
      MaybeFieldName_18 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MaybeFieldName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldNames_15, (MR_Integer) 0))));
      *RemainingMaybeFieldNames_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldNames_15, (MR_Integer) 1))));
    }
    TypeInfo_52_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_14, (MR_Integer) 0))));
    Term_19 = (MR_hl_field(MR_mktag(0), Univ_14, (MR_Integer) 1));
    mercury__deconstruct__deconstruct_5_p_2(TypeInfo_52_52, Term_19, NonCanon_11, &Functor_20, &Arity_21, &Args_22);
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_52_52 ;
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
	 TypeDesc_23  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_2

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  TypeDesc_23 ;
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
	 Var_24  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      Var_57 = (MR_Integer) -1;
      succeeded = (Var_24 > Var_57);
    }
    if (succeeded)
      {
        Request_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Request_25, 0) = ((MR_Box) (Functor_20));
        MR_hl_field(MR_mktag(1), Request_25, 1) = ((MR_Box) (Arity_21));
      }
    else
      Request_25 = (MR_Word) ((MR_Unsigned) 0U);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), MakeElement_12, (MR_Integer) 1))));
    func_0(((MR_Box) (MakeElement_12)), ((MR_Box) (TypeDesc_23)), ((MR_Box) (Request_25)), &conv2_Element_26, &conv1_AttrFromSources_27);
    Element_26 = ((MR_String) (conv2_Element_26));
    AttrFromSources_27 = ((MR_Word) (conv1_AttrFromSources_27));
    succeeded = mercury__term_to_xml__primitive_value_2_p_0(Univ_14, &PrimValue_28);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_State_34_34;

      mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_51, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_34_34);
      mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(TypeClassInfo_for_writer_51, Stream_10, Element_26, AttrFromSources_27, PrimValue_28, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_34_34, STATE_VARIABLE_State_33);
    }
    else
    if ((Args_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box STATE_VARIABLE_State_47_47;
      MR_Word Var_48;
      MR_Word Var_49;

      mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_51, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_47_47);
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Functor_20));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Arity_21));
      }
      mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(TypeClassInfo_for_writer_51, Stream_10, Element_26, AttrFromSources_27, Var_48, Var_49, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_47_47, STATE_VARIABLE_State_33);
    }
    else
    {
      MR_Word ChildMaybeFieldNames_31;
      MR_Box STATE_VARIABLE_State_36_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Box STATE_VARIABLE_State_39_39;
      MR_Integer Var_40;
      MR_Box STATE_VARIABLE_State_41_41;
      MR_Box STATE_VARIABLE_State_43_43;
      MR_Box STATE_VARIABLE_State_44_44;
      MR_Box STATE_VARIABLE_State_11_64;
      MR_Box STATE_VARIABLE_State_12_65;
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(TypeDesc_23, Functor_20, Arity_21);
      mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_51, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_36_36);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Functor_20));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Arity_21));
      }
      mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(TypeClassInfo_for_writer_51, Stream_10, Element_26, AttrFromSources_27, Var_37, Var_38, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_36_36, &STATE_VARIABLE_State_39_39);
      Var_40 = (MR_Integer) ((MR_Unsigned) IndentLevel_13 + (MR_Unsigned) (MR_Integer) 1);
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_p_2(TypeClassInfo_for_writer_51, Stream_10, MakeElement_12, Var_40, Args_22, ChildMaybeFieldNames_31, STATE_VARIABLE_State_39_39, &STATE_VARIABLE_State_41_41);
      mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_51, Stream_10, IndentLevel_13, STATE_VARIABLE_State_41_41, &STATE_VARIABLE_State_43_43);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
      func_3(((MR_Box) (TypeClassInfo_for_writer_51)), Stream_10, ((MR_Box) ((MR_String) "</")), STATE_VARIABLE_State_43_43, &STATE_VARIABLE_State_11_64);
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
      func_4(((MR_Box) (TypeClassInfo_for_writer_51)), Stream_10, ((MR_Box) (Element_26)), STATE_VARIABLE_State_11_64, &STATE_VARIABLE_State_12_65);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) (TypeClassInfo_for_writer_51)), Stream_10, ((MR_Box) ((MR_String) ">")), STATE_VARIABLE_State_12_65, &STATE_VARIABLE_State_44_44);
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
      func_6(((MR_Box) (TypeClassInfo_for_writer_51)), Stream_10, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_44_44, STATE_VARIABLE_State_33);
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv4_Element_7;
    MR_Word conv3_AttrFromSources_8;

    mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_Element_7, &conv3_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv4_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv3_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv2_Element_7;
    MR_Word conv1_AttrFromSources_8;

    mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Element_7, &conv1_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv2_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv1_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2(
  MR_Word TypeInfo_for_T_33,
  MR_Word TypeClassInfo_for_writer_32,
  MR_Box Stream_9,
  MR_Word NonCanon_10,
  MR_Box Term_11,
  MR_Word ElementMapping_12,
  MR_Word MaybeDTD_13,
  MR_Word * DTDResult_14,
  MR_Box STATE_VARIABLE_State_0_26,
  MR_Box * STATE_VARIABLE_State_27)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) MaybeDTD_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(MaybeDTD_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box STATE_VARIABLE_State_29_29;
              MR_Word TypeDesc_43;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_for_T_33 ;
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
	 TypeDesc_43  = TypeInfo;
}
              mercury__term_to_xml__write_dtd_from_type_6_p_0(TypeClassInfo_for_writer_32, Stream_9, TypeDesc_43, ElementMapping_12, DTDResult_14, STATE_VARIABLE_State_0_26, &STATE_VARIABLE_State_29_29);
              func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
              func_0(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_29_29, STATE_VARIABLE_State_27);
            }
            break;
          case (MR_Integer) 1:
            {
              *DTDResult_14 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_State_27 = STATE_VARIABLE_State_0_26;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DocType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDTD_13, (MR_Integer) 0))));
          MR_Word MakeElement_17;
          MR_String Functor_18;
          MR_Integer Arity_19;
          MR_Word TypeOfTerm_21;
          MR_Word Request_23;
          MR_String Root_24;
          MR_Box STATE_VARIABLE_State_15_66;
          MR_Box STATE_VARIABLE_State_16_67;
          MR_Box STATE_VARIABLE_State_28_79;
          MR_Word Var_20;
          MR_Integer Var_22;
          MR_Integer Var_56;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
          MR_Box conv7_Root_24;
          MR_Box conv6_Var_25;
          void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          switch (MR_tag((MR_Word) ElementMapping_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ElementMapping_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  MakeElement_17 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[9]);
                  break;
                case (MR_Integer) 1:
                  MakeElement_17 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[10]);
                  break;
              }
              break;
            case (MR_Integer) 1:
              MakeElement_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ElementMapping_12, (MR_Integer) 0))));
              break;
          }
          mercury__deconstruct__deconstruct_5_p_2(TypeInfo_for_T_33, Term_11, NonCanon_10, &Functor_18, &Arity_19, &Var_20);
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_for_T_33 ;
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
	 TypeOfTerm_21  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_2

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  TypeOfTerm_21 ;
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
	 Var_22  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
          {
            Var_56 = (MR_Integer) -1;
            succeeded = (Var_22 > Var_56);
          }
          if (succeeded)
            {
              Request_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Request_23, 0) = ((MR_Box) (Functor_18));
              MR_hl_field(MR_mktag(1), Request_23, 1) = ((MR_Box) (Arity_19));
            }
          else
            Request_23 = (MR_Word) ((MR_Unsigned) 0U);
          func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), MakeElement_17, (MR_Integer) 1))));
          func_5(((MR_Box) (MakeElement_17)), ((MR_Box) (TypeOfTerm_21)), ((MR_Box) (Request_23)), &conv7_Root_24, &conv6_Var_25);
          Root_24 = ((MR_String) (conv7_Root_24));
          func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
          func_8(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) ((MR_String) "<!DOCTYPE ")), STATE_VARIABLE_State_0_26, &STATE_VARIABLE_State_15_66);
          func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
          func_9(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) (Root_24)), STATE_VARIABLE_State_15_66, &STATE_VARIABLE_State_16_67);
          switch (MR_tag((MR_Word) DocType_16)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String PUBLIC_63 = ((MR_String) ((MR_hl_field(MR_mktag(0), DocType_16, (MR_Integer) 0))));
                MR_Box STATE_VARIABLE_State_27_78;
                void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                func_10(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), STATE_VARIABLE_State_16_67, &STATE_VARIABLE_State_27_78);
                func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                func_11(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) (PUBLIC_63)), STATE_VARIABLE_State_27_78, &STATE_VARIABLE_State_28_79);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String SYSTEM_64 = ((MR_String) ((MR_hl_field(MR_mktag(1), DocType_16, (MR_Integer) 1))));
                MR_Box STATE_VARIABLE_State_21_72;
                MR_Box STATE_VARIABLE_State_22_73;
                MR_Box STATE_VARIABLE_State_24_75;
                MR_String PUBLIC_82 = ((MR_String) ((MR_hl_field(MR_mktag(1), DocType_16, (MR_Integer) 0))));
                void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                func_12(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), STATE_VARIABLE_State_16_67, &STATE_VARIABLE_State_21_72);
                func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                func_13(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) (PUBLIC_82)), STATE_VARIABLE_State_21_72, &STATE_VARIABLE_State_22_73);
                func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                func_14(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) ((MR_String) "\" \"")), STATE_VARIABLE_State_22_73, &STATE_VARIABLE_State_24_75);
                func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                func_15(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) (SYSTEM_64)), STATE_VARIABLE_State_24_75, &STATE_VARIABLE_State_28_79);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Box STATE_VARIABLE_State_18_69;
                MR_String SYSTEM_83 = ((MR_String) ((MR_hl_field(MR_mktag(2), DocType_16, (MR_Integer) 0))));
                void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                func_16(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) ((MR_String) " SYSTEM \"")), STATE_VARIABLE_State_16_67, &STATE_VARIABLE_State_18_69);
                func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                func_17(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) (SYSTEM_83)), STATE_VARIABLE_State_18_69, &STATE_VARIABLE_State_28_79);
              }
              break;
          }
          func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
          func_18(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) ((MR_String) "\">\n")), STATE_VARIABLE_State_28_79, STATE_VARIABLE_State_27);
          *DTDResult_14 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv8_Element_7;
    MR_Word conv7_AttrFromSources_8;

    mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_Element_7, &conv7_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv8_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv7_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv6_Element_7;
    MR_Word conv5_AttrFromSources_8;

    mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_Element_7, &conv5_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv6_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv5_AttrFromSources_8));
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word TypeClassInfo_for_writer_32,
  MR_Box Stream_9,
  MR_Box Term_10,
  MR_Word ElementMapping_11,
  MR_Word MaybeStyleSheet_12,
  MR_Word MaybeDTD_13,
  MR_Word * DTDResult_14,
  MR_Box STATE_VARIABLE_State_0_21,
  MR_Box * STATE_VARIABLE_State_22)
{
  {
    MR_Word Var_23;

{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_doc_general_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_for_T_33 ;
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
	 Var_23  = TypeInfo;
}
    switch (MR_tag((MR_Word) MaybeDTD_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(MaybeDTD_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *DTDResult_14 = mercury__term_to_xml__can_generate_dtd_2_f_0(ElementMapping_11, Var_23);
            break;
          case (MR_Integer) 1:
            *DTDResult_14 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        break;
      case (MR_Integer) 1:
        *DTDResult_14 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    switch (MR_tag((MR_Word) *DTDResult_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(*DTDResult_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box STATE_VARIABLE_State_25_25;
              MR_Box STATE_VARIABLE_State_26_26;
              MR_Box STATE_VARIABLE_State_28_28;
              MR_Word Univ_65;
              MR_Word MakeElement_66;
              MR_Word Var_16;
              MR_Word Var_67;

              mercury__term_to_xml__write_xml_header_4_p_0(TypeClassInfo_for_writer_32, Stream_9, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_State_0_21, &STATE_VARIABLE_State_25_25);
              if ((MaybeStyleSheet_12 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_State_26_26 = STATE_VARIABLE_State_25_25;
              else
              {
                MR_String Type_47 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStyleSheet_12, (MR_Integer) 0))));
                MR_String Href_48 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStyleSheet_12, (MR_Integer) 1))));
                MR_Box STATE_VARIABLE_State_13_50;
                MR_Box STATE_VARIABLE_State_14_51;
                MR_Box STATE_VARIABLE_State_16_53;
                MR_Box STATE_VARIABLE_State_17_54;
                void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                func_0(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), STATE_VARIABLE_State_25_25, &STATE_VARIABLE_State_13_50);
                func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                func_1(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) (Type_47)), STATE_VARIABLE_State_13_50, &STATE_VARIABLE_State_14_51);
                func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                func_2(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) ((MR_String) "\" href=\"")), STATE_VARIABLE_State_14_51, &STATE_VARIABLE_State_16_53);
                func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                func_3(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) (Href_48)), STATE_VARIABLE_State_16_53, &STATE_VARIABLE_State_17_54);
                func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                func_4(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) ((MR_String) "\"\?>\n")), STATE_VARIABLE_State_17_54, &STATE_VARIABLE_State_26_26);
              }
              mercury__term_to_xml__write_doctype_8_p_0(TypeInfo_for_T_33, TypeClassInfo_for_writer_32, Stream_9, (MR_Integer) 1, Term_10, ElementMapping_11, MaybeDTD_13, &Var_16, STATE_VARIABLE_State_26_26, &STATE_VARIABLE_State_28_28);
              mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_33, Term_10, &Univ_65);
              switch (MR_tag((MR_Word) ElementMapping_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ElementMapping_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      MakeElement_66 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[7]);
                      break;
                    case (MR_Integer) 1:
                      MakeElement_66 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[8]);
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  MakeElement_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ElementMapping_11, (MR_Integer) 0))));
                  break;
              }
              mercury__term_to_xml__write_xml_element_univ_9_p_1(TypeClassInfo_for_writer_32, Stream_9, (MR_Integer) 1, MakeElement_66, (MR_Integer) 0, Univ_65, (MR_Word) ((MR_Unsigned) 0U), &Var_67, STATE_VARIABLE_State_28_28, STATE_VARIABLE_State_22);
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_State_22 = STATE_VARIABLE_State_0_21;
            break;
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_State_22 = STATE_VARIABLE_State_0_21;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_State_22 = STATE_VARIABLE_State_0_21;
        break;
      case (MR_Integer) 3:
        *STATE_VARIABLE_State_22 = STATE_VARIABLE_State_0_21;
        break;
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
  MR_Word Var_24,
  MR_Box Var_25,
  MR_Word Var_26,
  MR_Integer Var_27,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = HeadVar__5_5;
      *HeadVar__4_4 = HeadVar__3_3;
    }
    else
    {
      MR_Word V_15_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_16_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_23_19;
      MR_Box V_24_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Box next_value_of_HeadVar__5_5;

      mercury__term_to_xml__write_xml_element_univ_9_p_1(Var_24, Var_25, (MR_Integer) 1, Var_26, Var_27, V_15_13, HeadVar__3_3, &V_23_19, HeadVar__5_5, &V_24_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = V_16_14;
      next_value_of_HeadVar__3_3 = V_23_19;
      next_value_of_HeadVar__5_5 = V_24_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_p_1(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Box Stream_9,
  MR_Word MakeElement_11,
  MR_Integer IndentLevel_12,
  MR_Word Args_13,
  MR_Word MaybeFieldNames_14,
  MR_Box STATE_VARIABLE_State_0_19,
  MR_Box * STATE_VARIABLE_State_20)
{
  {
    MR_Word Var_17;

    mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(TypeClassInfo_for_writer_27, Stream_9, MakeElement_11, IndentLevel_12, Args_13, MaybeFieldNames_14, &Var_17, STATE_VARIABLE_State_0_19, STATE_VARIABLE_State_20);
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_1(
  MR_Word TypeClassInfo_for_writer_51,
  MR_Box Stream_10,
  MR_Word NonCanon_11,
  MR_Word MakeElement_12,
  MR_Integer IndentLevel_13,
  MR_Word Univ_14,
  MR_Word MaybeFieldNames_15,
  MR_Word * RemainingMaybeFieldNames_16,
  MR_Box STATE_VARIABLE_State_0_32,
  MR_Box * STATE_VARIABLE_State_33)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_52_52;
    MR_Word MaybeFieldName_18;
    MR_Box Term_19;
    MR_String Functor_20;
    MR_Integer Arity_21;
    MR_Word Args_22;
    MR_Word TypeDesc_23;
    MR_Word Request_25;
    MR_String Element_26;
    MR_Word AttrFromSources_27;
    MR_Integer Var_24;
    MR_Integer Var_57;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
    MR_Box conv2_Element_26;
    MR_Box conv1_AttrFromSources_27;
    MR_String PrimValue_28;

    if ((MaybeFieldNames_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *RemainingMaybeFieldNames_16 = (MR_Word) ((MR_Unsigned) 0U);
      MaybeFieldName_18 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MaybeFieldName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldNames_15, (MR_Integer) 0))));
      *RemainingMaybeFieldNames_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldNames_15, (MR_Integer) 1))));
    }
    TypeInfo_52_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_14, (MR_Integer) 0))));
    Term_19 = (MR_hl_field(MR_mktag(0), Univ_14, (MR_Integer) 1));
    mercury__deconstruct__deconstruct_5_p_1(TypeInfo_52_52, Term_19, NonCanon_11, &Functor_20, &Arity_21, &Args_22);
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_52_52 ;
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
	 TypeDesc_23  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_1

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  TypeDesc_23 ;
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
	 Var_24  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      Var_57 = (MR_Integer) -1;
      succeeded = (Var_24 > Var_57);
    }
    if (succeeded)
      {
        Request_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Request_25, 0) = ((MR_Box) (Functor_20));
        MR_hl_field(MR_mktag(1), Request_25, 1) = ((MR_Box) (Arity_21));
      }
    else
      Request_25 = (MR_Word) ((MR_Unsigned) 0U);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), MakeElement_12, (MR_Integer) 1))));
    func_0(((MR_Box) (MakeElement_12)), ((MR_Box) (TypeDesc_23)), ((MR_Box) (Request_25)), &conv2_Element_26, &conv1_AttrFromSources_27);
    Element_26 = ((MR_String) (conv2_Element_26));
    AttrFromSources_27 = ((MR_Word) (conv1_AttrFromSources_27));
    succeeded = mercury__term_to_xml__primitive_value_2_p_0(Univ_14, &PrimValue_28);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_State_34_34;

      mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_51, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_34_34);
      mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(TypeClassInfo_for_writer_51, Stream_10, Element_26, AttrFromSources_27, PrimValue_28, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_34_34, STATE_VARIABLE_State_33);
    }
    else
    if ((Args_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box STATE_VARIABLE_State_47_47;
      MR_Word Var_48;
      MR_Word Var_49;

      mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_51, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_47_47);
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Functor_20));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Arity_21));
      }
      mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(TypeClassInfo_for_writer_51, Stream_10, Element_26, AttrFromSources_27, Var_48, Var_49, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_47_47, STATE_VARIABLE_State_33);
    }
    else
    {
      MR_Word ChildMaybeFieldNames_31;
      MR_Box STATE_VARIABLE_State_36_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Box STATE_VARIABLE_State_39_39;
      MR_Integer Var_40;
      MR_Box STATE_VARIABLE_State_41_41;
      MR_Box STATE_VARIABLE_State_43_43;
      MR_Box STATE_VARIABLE_State_44_44;
      MR_Box STATE_VARIABLE_State_11_64;
      MR_Box STATE_VARIABLE_State_12_65;
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(TypeDesc_23, Functor_20, Arity_21);
      mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_51, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_36_36);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Functor_20));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Arity_21));
      }
      mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(TypeClassInfo_for_writer_51, Stream_10, Element_26, AttrFromSources_27, Var_37, Var_38, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_36_36, &STATE_VARIABLE_State_39_39);
      Var_40 = (MR_Integer) ((MR_Unsigned) IndentLevel_13 + (MR_Unsigned) (MR_Integer) 1);
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_p_1(TypeClassInfo_for_writer_51, Stream_10, MakeElement_12, Var_40, Args_22, ChildMaybeFieldNames_31, STATE_VARIABLE_State_39_39, &STATE_VARIABLE_State_41_41);
      mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_51, Stream_10, IndentLevel_13, STATE_VARIABLE_State_41_41, &STATE_VARIABLE_State_43_43);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
      func_3(((MR_Box) (TypeClassInfo_for_writer_51)), Stream_10, ((MR_Box) ((MR_String) "</")), STATE_VARIABLE_State_43_43, &STATE_VARIABLE_State_11_64);
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
      func_4(((MR_Box) (TypeClassInfo_for_writer_51)), Stream_10, ((MR_Box) (Element_26)), STATE_VARIABLE_State_11_64, &STATE_VARIABLE_State_12_65);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) (TypeClassInfo_for_writer_51)), Stream_10, ((MR_Box) ((MR_String) ">")), STATE_VARIABLE_State_12_65, &STATE_VARIABLE_State_44_44);
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
      func_6(((MR_Box) (TypeClassInfo_for_writer_51)), Stream_10, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_44_44, STATE_VARIABLE_State_33);
    }
  }
}

void MR_CALL 
mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(
  MR_Word TypeClassInfo_for_writer_24,
  MR_Box Stream_10,
  MR_String Element_11,
  MR_Word AttrFromSources_12,
  MR_Word MaybeFunctor_13,
  MR_Word MaybeArity_14,
  MR_Word MaybeField_15,
  MR_Word TypeDesc_16,
  MR_Box STATE_VARIABLE_State_0_19,
  MR_Box * STATE_VARIABLE_State_20)
{
  {
    MR_Word Attrs_18;
    MR_Box STATE_VARIABLE_State_21_21;
    MR_Word MaybeAttrs_31;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    MaybeAttrs_31 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(MaybeFunctor_13, MaybeArity_14, TypeDesc_16, MaybeField_15, AttrFromSources_12);
    mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(MaybeAttrs_31, &Attrs_18);
    mercury__term_to_xml__write_empty_element_5_p_0(TypeClassInfo_for_writer_24, Stream_10, Element_11, Attrs_18, STATE_VARIABLE_State_0_19, &STATE_VARIABLE_State_21_21);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_24, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_writer_24)), Stream_10, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_21_21, STATE_VARIABLE_State_20);
  }
}

void MR_CALL 
mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(
  MR_Word TypeClassInfo_for_writer_24,
  MR_Box Stream_10,
  MR_String Element_11,
  MR_Word AttrFromSources_12,
  MR_Word MaybeFunctor_13,
  MR_Word MaybeArity_14,
  MR_Word MaybeField_15,
  MR_Word TypeDesc_16,
  MR_Box STATE_VARIABLE_State_0_19,
  MR_Box * STATE_VARIABLE_State_20)
{
  {
    MR_Word Attrs_18;
    MR_Box STATE_VARIABLE_State_21_21;
    MR_Word MaybeAttrs_31;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    MaybeAttrs_31 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(MaybeFunctor_13, MaybeArity_14, TypeDesc_16, MaybeField_15, AttrFromSources_12);
    mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(MaybeAttrs_31, &Attrs_18);
    mercury__term_to_xml__write_element_start_5_p_0(TypeClassInfo_for_writer_24, Stream_10, Element_11, Attrs_18, STATE_VARIABLE_State_0_19, &STATE_VARIABLE_State_21_21);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_24, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_writer_24)), Stream_10, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_21_21, STATE_VARIABLE_State_20);
  }
}

void MR_CALL 
mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(
  MR_Word TypeClassInfo_for_writer_34,
  MR_Box Stream_9,
  MR_String Element_10,
  MR_Word AttrFromSources_11,
  MR_String Value_12,
  MR_Word MaybeField_13,
  MR_Word TypeDesc_14,
  MR_Box STATE_VARIABLE_State_0_17,
  MR_Box * STATE_VARIABLE_State_18)
{
  {
    MR_Word Attrs_16;
    MR_Box STATE_VARIABLE_State_20_20;
    MR_Box STATE_VARIABLE_State_21_21;
    MR_Box STATE_VARIABLE_State_25_25;
    MR_Box STATE_VARIABLE_State_27_27;
    MR_Box STATE_VARIABLE_State_28_28;
    MR_Box STATE_VARIABLE_State_30_30;
    MR_Box STATE_VARIABLE_State_31_31;
    MR_Word MaybeAttrs_47;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) ((MR_String) "<")), STATE_VARIABLE_State_0_17, &STATE_VARIABLE_State_20_20);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) (Element_10)), STATE_VARIABLE_State_20_20, &STATE_VARIABLE_State_21_21);
    MaybeAttrs_47 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), TypeDesc_14, MaybeField_13, AttrFromSources_11);
    mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(MaybeAttrs_47, &Attrs_16);
    mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(TypeClassInfo_for_writer_34, Stream_9, Attrs_16, STATE_VARIABLE_State_21_21, &STATE_VARIABLE_State_25_25);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) ((MR_String) ">")), STATE_VARIABLE_State_25_25, &STATE_VARIABLE_State_27_27);
    mercury__term_to_xml__write_xml_escaped_string_4_p_0(TypeClassInfo_for_writer_34, Stream_9, Value_12, STATE_VARIABLE_State_27_27, &STATE_VARIABLE_State_28_28);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) ((MR_String) "</")), STATE_VARIABLE_State_28_28, &STATE_VARIABLE_State_30_30);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) (Element_10)), STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_31_31);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) ((MR_String) ">\n")), STATE_VARIABLE_State_31_31, STATE_VARIABLE_State_18);
  }
}

static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Word Var_13,
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word V_6_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_8_8;
      MR_Word V_9_9;

      V_8_8 = mercury__term_to_xml__attr_from_source_to_maybe_attr_5_f_0(Var_12, Var_13, Var_14, Var_15, V_6_6);
      V_9_9 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(Var_12, Var_13, Var_14, Var_15, V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__term_to_xml__attr_from_source_to_maybe_attr_5_f_0(
  MR_Word MaybeFunctor_7,
  MR_Word MaybeArity_8,
  MR_Word TypeDesc_9,
  MR_Word MaybeFieldName_10,
  MR_Word HeadVar__5_5)
{
  {
    MR_Word MaybeAttr_13;
    MR_String Name_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Source_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1))) & (MR_Integer) 3);

    switch (Source_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        if ((MaybeArity_8 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeAttr_13 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Integer Arity_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeArity_8, (MR_Integer) 0))));
          MR_Word Var_20;
          MR_String Var_21;

          mercury__string__int_to_base_string_3_p_0(Arity_15, (MR_Integer) 10, &Var_21);
          {
            Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (Name_11));
            MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (Var_21));
          }
          {
            MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeAttr_13, 0) = ((MR_Box) (Var_20));
          }
        }
        break;
      case (MR_Integer) 1:
        if ((MaybeFieldName_10 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeAttr_13 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_String FieldName_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeFieldName_10, (MR_Integer) 0))));
          MR_Word Var_17;

          {
            Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (Name_11));
            MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (FieldName_16));
          }
          {
            MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeAttr_13, 0) = ((MR_Box) (Var_17));
          }
        }
        break;
      case (MR_Integer) 0:
        if ((MaybeFunctor_7 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeAttr_13 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_String Functor_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeFunctor_7, (MR_Integer) 0))));
          MR_Word Var_22;

          {
            Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (Name_11));
            MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (Functor_14));
          }
          {
            MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeAttr_13, 0) = ((MR_Box) (Var_22));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_18;
          MR_String Var_19;

          Var_19 = mercury__type_desc__type_name_1_f_0(TypeDesc_9);
          {
            Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (Name_11));
            MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (Var_19));
          }
          {
            MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeAttr_13, 0) = ((MR_Box) (Var_18));
          }
        }
        break;
    }
    return MaybeAttr_13;
  }
}

static void MR_CALL 
mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word V_6_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_9_9;

      succeeded = (V_6_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        V_9_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), V_6_6, (MR_Integer) 0))));
        {
          MR_Word V_10_10;

          mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(V_7_7, &V_10_10);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_9_9));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_10_10));
          }
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = V_7_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__term_to_xml__get_field_names_3_f_0(
  MR_Word TypeDesc_5,
  MR_String Functor_6,
  MR_Integer Arity_7)
{
  {
    MR_bool succeeded;
    MR_Word MaybeFields_8;
    MR_Integer NumFunctors_9;
    MR_Integer Var_17;

{
#define MR_PROC_LABEL mercury__term_to_xml__get_field_names_3_f_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  TypeDesc_5 ;
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
	 NumFunctors_9  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      Var_17 = (MR_Integer) -1;
      succeeded = (NumFunctors_9 > Var_17);
    }
    if (succeeded)
    {
      MR_Word FunctorNums_10;
      MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) NumFunctors_9 - (MR_Unsigned) (MR_Integer) 1);
      MR_Word FoundMaybeFields_11;

      mercury__list__successive_integers_4_p_0((MR_Integer) 0, Var_13, (MR_Word) ((MR_Unsigned) 0U), &FunctorNums_10);
      succeeded = mercury__term_to_xml__find_field_names_5_p_0(TypeDesc_5, FunctorNums_10, Functor_6, Arity_7, &FoundMaybeFields_11);
      if (succeeded)
        MaybeFields_8 = FoundMaybeFields_11;
      else
        MaybeFields_8 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
      MaybeFields_8 = (MR_Word) ((MR_Unsigned) 0U);
    return MaybeFields_8;
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml__find_field_names_5_p_0(
  MR_Word TypeDesc_6,
  MR_Word HeadVar__2_2,
  MR_String Functor_9,
  MR_Integer Arity_10,
  MR_Word * MaybeFieldNames_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer FunctorNum_7;
    MR_Word FunctorNums_8;
    MR_Word FoundFieldNames_13;
    MR_String Var_14;
    MR_Integer Var_15;
    MR_Word V_13_22;
    MR_Word Var_12;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      FunctorNum_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      FunctorNums_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      succeeded = mercury__construct__get_functor_with_names_internal_6_p_0(TypeDesc_6, FunctorNum_7, &Var_14, &Var_15, &Var_12, &V_13_22);
      if (succeeded)
      {
        FoundFieldNames_13 = mercury__term_to_xml__map__ho3_2_f_in__list_0(V_13_22);
        succeeded = (strcmp(Functor_9, Var_14) == 0);
        if (succeeded)
          succeeded = (Arity_10 == Var_15);
      }
      if (succeeded)
      {
        *MaybeFieldNames_11 = FoundFieldNames_13;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = FunctorNums_8;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho3_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String V_6_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_8_8;
      MR_Word V_9_9;

{
#define MR_PROC_LABEL mercury__term_to_xml__map__ho3_2_f_in__list_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  V_6_6 ;
		{

    SUCCESS_INDICATOR = (S == NULL);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        V_8_8 = (MR_Word) ((MR_Unsigned) 0U);
      else
        {
          V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), V_8_8, 0) = ((MR_Box) (V_6_6));
        }
      V_9_9 = mercury__term_to_xml__map__ho3_2_f_in__list_0(V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__term_to_xml__primitive_value_2_p_0(
  MR_Word Univ_3,
  MR_String * PrimValue_4)
{
  {
    MR_bool succeeded;
    MR_String String_5;
    MR_Box conv0_String_5;

    succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &conv0_String_5, Univ_3);
    if (succeeded)
    {
      String_5 = ((MR_String) (conv0_String_5));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *PrimValue_4 = String_5;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Char Char_6;
      MR_Box conv1_Char_6;

      succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), &conv1_Char_6, Univ_3);
      if (succeeded)
      {
        Char_6 = ((MR_Char) (MR_Word) conv1_Char_6);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word V_5_21;

        {
          V_5_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), V_5_21, 0) = ((MR_Box) (MR_Word) (Char_6));
          MR_hl_field(MR_mktag(1), V_5_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__string__to_char_list_2_p_1(PrimValue_4, V_5_21);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer Int_7;
        MR_Box conv2_Int_7;

        succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &conv2_Int_7, Univ_3);
        if (succeeded)
        {
          Int_7 = ((MR_Integer) (conv2_Int_7));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          mercury__string__int_to_base_string_3_p_0(Int_7, (MR_Integer) 10, PrimValue_4);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Float Float_8;
          MR_Box conv3_Float_8;

          succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), &conv3_Float_8, Univ_3);
          if (succeeded)
          {
            Float_8 = MR_unbox_float(conv3_Float_8);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__term_to_xml__primitive_value_2_p_0

	MR_Float Flt;
	MR_String Str;

	Flt =  Float_8 ;
		{
{
    // For efficiency reasons we duplicate the C implementation
    // of lowlevel_float_to_string.
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 *PrimValue_4  = Str;
}
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv4_Element_7;
    MR_Word conv3_AttrFromSources_8;

    mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_Element_7, &conv3_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv4_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv3_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv2_Element_7;
    MR_Word conv1_AttrFromSources_8;

    mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Element_7, &conv1_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv2_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv1_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word TypeClassInfo_for_writer_32,
  MR_Box Stream_9,
  MR_Word NonCanon_10,
  MR_Box Term_11,
  MR_Word ElementMapping_12,
  MR_Word MaybeDTD_13,
  MR_Word * DTDResult_14,
  MR_Box STATE_VARIABLE_State_0_26,
  MR_Box * STATE_VARIABLE_State_27)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) MaybeDTD_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(MaybeDTD_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box STATE_VARIABLE_State_29_29;
              MR_Word TypeDesc_43;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_for_T_33 ;
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
	 TypeDesc_43  = TypeInfo;
}
              mercury__term_to_xml__write_dtd_from_type_6_p_0(TypeClassInfo_for_writer_32, Stream_9, TypeDesc_43, ElementMapping_12, DTDResult_14, STATE_VARIABLE_State_0_26, &STATE_VARIABLE_State_29_29);
              func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
              func_0(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_29_29, STATE_VARIABLE_State_27);
            }
            break;
          case (MR_Integer) 1:
            {
              *DTDResult_14 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_State_27 = STATE_VARIABLE_State_0_26;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DocType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDTD_13, (MR_Integer) 0))));
          MR_Word MakeElement_17;
          MR_String Functor_18;
          MR_Integer Arity_19;
          MR_Word TypeOfTerm_21;
          MR_Word Request_23;
          MR_String Root_24;
          MR_Box STATE_VARIABLE_State_15_66;
          MR_Box STATE_VARIABLE_State_16_67;
          MR_Box STATE_VARIABLE_State_28_79;
          MR_Word Var_20;
          MR_Integer Var_22;
          MR_Integer Var_56;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
          MR_Box conv7_Root_24;
          MR_Box conv6_Var_25;
          void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          switch (MR_tag((MR_Word) ElementMapping_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ElementMapping_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  MakeElement_17 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[5]);
                  break;
                case (MR_Integer) 1:
                  MakeElement_17 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[6]);
                  break;
              }
              break;
            case (MR_Integer) 1:
              MakeElement_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ElementMapping_12, (MR_Integer) 0))));
              break;
          }
          mercury__deconstruct__deconstruct_5_p_1(TypeInfo_for_T_33, Term_11, NonCanon_10, &Functor_18, &Arity_19, &Var_20);
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_for_T_33 ;
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
	 TypeOfTerm_21  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  TypeOfTerm_21 ;
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
	 Var_22  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
          {
            Var_56 = (MR_Integer) -1;
            succeeded = (Var_22 > Var_56);
          }
          if (succeeded)
            {
              Request_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Request_23, 0) = ((MR_Box) (Functor_18));
              MR_hl_field(MR_mktag(1), Request_23, 1) = ((MR_Box) (Arity_19));
            }
          else
            Request_23 = (MR_Word) ((MR_Unsigned) 0U);
          func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), MakeElement_17, (MR_Integer) 1))));
          func_5(((MR_Box) (MakeElement_17)), ((MR_Box) (TypeOfTerm_21)), ((MR_Box) (Request_23)), &conv7_Root_24, &conv6_Var_25);
          Root_24 = ((MR_String) (conv7_Root_24));
          func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
          func_8(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) ((MR_String) "<!DOCTYPE ")), STATE_VARIABLE_State_0_26, &STATE_VARIABLE_State_15_66);
          func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
          func_9(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) (Root_24)), STATE_VARIABLE_State_15_66, &STATE_VARIABLE_State_16_67);
          switch (MR_tag((MR_Word) DocType_16)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String PUBLIC_63 = ((MR_String) ((MR_hl_field(MR_mktag(0), DocType_16, (MR_Integer) 0))));
                MR_Box STATE_VARIABLE_State_27_78;
                void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                func_10(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), STATE_VARIABLE_State_16_67, &STATE_VARIABLE_State_27_78);
                func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                func_11(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) (PUBLIC_63)), STATE_VARIABLE_State_27_78, &STATE_VARIABLE_State_28_79);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String SYSTEM_64 = ((MR_String) ((MR_hl_field(MR_mktag(1), DocType_16, (MR_Integer) 1))));
                MR_Box STATE_VARIABLE_State_21_72;
                MR_Box STATE_VARIABLE_State_22_73;
                MR_Box STATE_VARIABLE_State_24_75;
                MR_String PUBLIC_82 = ((MR_String) ((MR_hl_field(MR_mktag(1), DocType_16, (MR_Integer) 0))));
                void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                func_12(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), STATE_VARIABLE_State_16_67, &STATE_VARIABLE_State_21_72);
                func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                func_13(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) (PUBLIC_82)), STATE_VARIABLE_State_21_72, &STATE_VARIABLE_State_22_73);
                func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                func_14(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) ((MR_String) "\" \"")), STATE_VARIABLE_State_22_73, &STATE_VARIABLE_State_24_75);
                func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                func_15(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) (SYSTEM_64)), STATE_VARIABLE_State_24_75, &STATE_VARIABLE_State_28_79);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Box STATE_VARIABLE_State_18_69;
                MR_String SYSTEM_83 = ((MR_String) ((MR_hl_field(MR_mktag(2), DocType_16, (MR_Integer) 0))));
                void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                func_16(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) ((MR_String) " SYSTEM \"")), STATE_VARIABLE_State_16_67, &STATE_VARIABLE_State_18_69);
                func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
                func_17(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) (SYSTEM_83)), STATE_VARIABLE_State_18_69, &STATE_VARIABLE_State_28_79);
              }
              break;
          }
          func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
          func_18(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_9, ((MR_Box) ((MR_String) "\">\n")), STATE_VARIABLE_State_28_79, STATE_VARIABLE_State_27);
          *DTDResult_14 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv3_Element_7;
    MR_Word conv2_AttrFromSources_8;

    mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Element_7, &conv2_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv3_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv2_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv1_Element_7;
    MR_Word conv0_AttrFromSources_8;

    mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Element_7, &conv0_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv1_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv0_AttrFromSources_8));
  }
}

void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0(
  MR_Word TypeClassInfo_for_writer_47,
  MR_Box Stream_7,
  MR_Word TypeDesc_8,
  MR_Word ElementMapping_9,
  MR_Word * DTDResult_10,
  MR_Box STATE_VARIABLE_State_0_23,
  MR_Box * STATE_VARIABLE_State_24)
{
  {
    MR_bool succeeded;

    *DTDResult_10 = mercury__term_to_xml__can_generate_dtd_2_f_0(ElementMapping_9, TypeDesc_8);
    switch (MR_tag((MR_Word) *DTDResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(*DTDResult_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word MakeElement_12;
              MR_String RootElement_13;
              MR_Word PseudoArgTypes_16;
              MR_Word TypeInfo_58_58;
              MR_Word TypeInfo_59_59;
              MR_Word TypeInfo_60_60;
              MR_Word Var_25;
              MR_Word Var_26;
              MR_Word Var_27;
              MR_Word Var_28;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word ArgX1_72;
              MR_Word ArgX2_74;
              MR_Word ArgY2_75;
              MR_Word ArgX1_82;
              MR_Word ArgX2_84;
              MR_Word ArgY2_85;
              MR_Word Var_17;

              switch (MR_tag((MR_Word) ElementMapping_9)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ElementMapping_9)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      MakeElement_12 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[3]);
                      break;
                    case (MR_Integer) 1:
                      MakeElement_12 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[4]);
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  MakeElement_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ElementMapping_9, (MR_Integer) 0))));
                  break;
              }
              {
                Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_26, 0) = NULL;
                MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_27, 0) = NULL;
                MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__term_to_xml__get_elements_and_args_7_p_0(MakeElement_12, TypeDesc_8, &Var_25, &Var_53, &Var_54, &Var_28, &Var_17);
              succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ArgX1_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_53, (MR_Integer) 0))));
                ArgY2_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_53, (MR_Integer) 1))));
                (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0)) = ((MR_Box) (ArgX1_72));
                ArgX2_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1))));
                succeeded = mercury__list____Unify____list_1_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[1]), ArgX2_74, ArgY2_75);
                if (succeeded)
                {
                  TypeInfo_58_58 = (MR_Word) (&mercury__term_to_xml_scalar_common_1[2]);
                  succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    ArgX1_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_54, (MR_Integer) 0))));
                    ArgY2_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_54, (MR_Integer) 1))));
                    (MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0)) = ((MR_Box) (ArgX1_82));
                    ArgX2_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
                    succeeded = mercury__list____Unify____list_1_0(TypeInfo_58_58, ArgX2_84, ArgY2_85);
                    if (succeeded)
                    {
                      succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        RootElement_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));
                        Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));
                        TypeInfo_59_59 = (MR_Word) (&mercury__term_to_xml_scalar_common_1[7]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_59_59, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_55)));
                        if (succeeded)
                        {
                          succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            PseudoArgTypes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0))));
                            Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 1))));
                            TypeInfo_60_60 = (MR_Word) (&mercury__term_to_xml_scalar_common_1[8]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_60_60, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_56)));
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word ArgTypes_18;
                MR_Box STATE_VARIABLE_State_35_35;
                MR_Box STATE_VARIABLE_State_36_36;
                MR_Box STATE_VARIABLE_State_38_38;
                MR_Word Var_39;
                MR_Box STATE_VARIABLE_State_41_41;
                void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                ArgTypes_18 = mercury__term_to_xml__map__ho25_2_f_in__list_0(PseudoArgTypes_16);
                func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_47, (MR_Integer) 0)), (MR_Integer) 5))));
                func_4(((MR_Box) (TypeClassInfo_for_writer_47)), Stream_7, ((MR_Box) ((MR_String) "<!DOCTYPE ")), STATE_VARIABLE_State_0_23, &STATE_VARIABLE_State_35_35);
                func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_47, (MR_Integer) 0)), (MR_Integer) 5))));
                func_5(((MR_Box) (TypeClassInfo_for_writer_47)), Stream_7, ((MR_Box) (RootElement_13)), STATE_VARIABLE_State_35_35, &STATE_VARIABLE_State_36_36);
                func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_47, (MR_Integer) 0)), (MR_Integer) 5))));
                func_6(((MR_Box) (TypeClassInfo_for_writer_47)), Stream_7, ((MR_Box) ((MR_String) " [\n\n")), STATE_VARIABLE_State_36_36, &STATE_VARIABLE_State_38_38);
                {
                  Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (TypeDesc_8));
                  MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (ArgTypes_18));
                }
                mercury__term_to_xml__write_dtd_types_6_p_0(TypeClassInfo_for_writer_47, Stream_7, MakeElement_12, Var_39, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_State_38_38, &STATE_VARIABLE_State_41_41);
                func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_47, (MR_Integer) 0)), (MR_Integer) 5))));
                func_7(((MR_Box) (TypeClassInfo_for_writer_47)), Stream_7, ((MR_Box) ((MR_String) "\n]>")), STATE_VARIABLE_State_41_41, STATE_VARIABLE_State_24);
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
            *STATE_VARIABLE_State_24 = STATE_VARIABLE_State_0_23;
            break;
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_State_24 = STATE_VARIABLE_State_0_23;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_State_24 = STATE_VARIABLE_State_0_23;
        break;
      case (MR_Integer) 3:
        *STATE_VARIABLE_State_24 = STATE_VARIABLE_State_0_23;
        break;
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__write_dtd_types_6_p_0(
  MR_Word TypeClassInfo_for_writer_29,
  MR_Box Stream_1,
  MR_Word MakeElement_2,
  MR_Word HeadVar__3_3,
  MR_Word AlreadyDone_4,
  MR_Box STATE_VARIABLE_State_0_5,
  MR_Box * STATE_VARIABLE_State_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_6 = STATE_VARIABLE_State_0_5;
    else
    {
      MR_Word TypeDesc_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TypeDescs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Box conv0_Var_19;

      succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), AlreadyDone_4, ((MR_Box) (TypeDesc_15)), &conv0_Var_19);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__3_3 = TypeDescs_16;

        // direct tailcall eliminated
        ;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
      else
      {
        MR_Word ChildArgTypes_20;
        MR_Word NewAlreadyDone_21;
        MR_Box STATE_VARIABLE_State_25_25;
        MR_Word Var_27;
        MR_Word Elements_44;
        MR_Word MaybeFunctors_45;
        MR_Word MaybeArities_46;
        MR_Word ArgPseudoTypeLists_47;
        MR_Word AttributeLists_48;
        MR_Word ArgTypeLists_49;
        MR_Box STATE_VARIABLE_State_23_53;
        MR_String Var_54;
        MR_Box STATE_VARIABLE_State_25_55;
        MR_Box STATE_VARIABLE_State_27_57;
        MR_Word V_5_70;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_AlreadyDone_4;
        MR_Box next_value_of_STATE_VARIABLE_State_0_5;

        mercury__term_to_xml__get_elements_and_args_7_p_0(MakeElement_2, TypeDesc_15, &Elements_44, &MaybeFunctors_45, &MaybeArities_46, &ArgPseudoTypeLists_47, &AttributeLists_48);
        ArgTypeLists_49 = mercury__term_to_xml__map__ho8_2_f_in__list_0(ArgPseudoTypeLists_47);
        mercury__list__reverse_2_p_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[4]), ArgTypeLists_49, &V_5_70);
        mercury__list__condense_acc_3_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), V_5_70, (MR_Word) ((MR_Unsigned) 0U), &ChildArgTypes_20);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_29, (MR_Integer) 0)), (MR_Integer) 5))));
        func_1(((MR_Box) (TypeClassInfo_for_writer_29)), Stream_1, ((MR_Box) ((MR_String) "<!-- Elements for functors of type \"")), STATE_VARIABLE_State_0_5, &STATE_VARIABLE_State_23_53);
        Var_54 = mercury__type_desc__type_name_1_f_0(TypeDesc_15);
        mercury__term_to_xml__write_xml_escaped_string_4_p_0(TypeClassInfo_for_writer_29, Stream_1, Var_54, STATE_VARIABLE_State_23_53, &STATE_VARIABLE_State_25_55);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_29, (MR_Integer) 0)), (MR_Integer) 5))));
        func_2(((MR_Box) (TypeClassInfo_for_writer_29)), Stream_1, ((MR_Box) ((MR_String) "\" -->\n\n")), STATE_VARIABLE_State_25_55, &STATE_VARIABLE_State_27_57);
        mercury__term_to_xml__write_dtd_entries_10_p_0(TypeClassInfo_for_writer_29, Stream_1, MakeElement_2, TypeDesc_15, Elements_44, MaybeFunctors_45, MaybeArities_46, ArgTypeLists_49, AttributeLists_48, STATE_VARIABLE_State_27_57, &STATE_VARIABLE_State_25_25);
        mercury__tree234__set_4_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), ((MR_Box) (TypeDesc_15)), ((MR_Box) ((MR_Integer) 0)), AlreadyDone_4, &NewAlreadyDone_21);
        mercury__list__append_3_p_1((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), ChildArgTypes_20, TypeDescs_16, &Var_27);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Var_27;
        next_value_of_AlreadyDone_4 = NewAlreadyDone_21;
        next_value_of_STATE_VARIABLE_State_0_5 = STATE_VARIABLE_State_25_25;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        AlreadyDone_4 = next_value_of_AlreadyDone_4;
        STATE_VARIABLE_State_0_5 = next_value_of_STATE_VARIABLE_State_0_5;
        continue;
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho8_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word V_6_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_8_8;
      MR_Word V_9_9;

      V_8_8 = mercury__term_to_xml__map__ho25_2_f_in__list_0(V_6_6);
      V_9_9 = mercury__term_to_xml__map__ho8_2_f_in__list_0(V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho25_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word V_6_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_8_8;
      MR_Word V_9_9;

      V_8_8 = mercury__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_f_0(V_6_6);
      V_9_9 = mercury__term_to_xml__map__ho25_2_f_in__list_0(V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
mercury__term_to_xml__write_dtd_entries_10_p_0(
  MR_Word TypeClassInfo_for_writer_79,
  MR_Box Stream_1,
  MR_Word MakeElement_2,
  MR_Word TypeDesc_3,
  MR_Word HeadVar__4_4,
  MR_Word MaybeFunctorList_5,
  MR_Word MaybeArityList_6,
  MR_Word ArgTypeListList_7,
  MR_Word AttributeListList_8,
  MR_Box STATE_VARIABLE_State_0_9,
  MR_Box * STATE_VARIABLE_State_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_10 = STATE_VARIABLE_State_0_9;
    else
    {
      MR_String Element_24 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Elements_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word MaybeFunctor_31;
      MR_Word MaybeFunctors_32;
      MR_Word MaybeArity_33;
      MR_Word MaybeArities_34;
      MR_Word ArgTypeList_35;
      MR_Word ArgTypeLists_36;
      MR_Word AttributeList_37;
      MR_Word AttributeLists_38;
      MR_Box STATE_VARIABLE_State_52_52;
      MR_Box STATE_VARIABLE_State_53_53;
      MR_Box STATE_VARIABLE_State_55_55;
      MR_Box STATE_VARIABLE_State_57_57;
      MR_Box STATE_VARIABLE_State_74_74;
      MR_Box STATE_VARIABLE_State_75_75;
      MR_Box STATE_VARIABLE_State_77_77;
      MR_Box conv0_MaybeFunctor_31;
      MR_Box conv1_MaybeArity_33;
      MR_Box conv2_ArgTypeList_35;
      MR_Box conv3_AttributeList_37;
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_String Var_39;
      void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_MaybeFunctorList_5;
      MR_Word next_value_of_MaybeArityList_6;
      MR_Word next_value_of_ArgTypeListList_7;
      MR_Word next_value_of_AttributeListList_8;
      MR_Box next_value_of_STATE_VARIABLE_State_0_9;

      conv0_MaybeFunctor_31 = mercury__list__det_head_1_f_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[1]), MaybeFunctorList_5);
      MaybeFunctor_31 = ((MR_Word) (conv0_MaybeFunctor_31));
      MaybeFunctors_32 = mercury__list__det_tail_1_f_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[1]), MaybeFunctorList_5);
      conv1_MaybeArity_33 = mercury__list__det_head_1_f_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[2]), MaybeArityList_6);
      MaybeArity_33 = ((MR_Word) (conv1_MaybeArity_33));
      MaybeArities_34 = mercury__list__det_tail_1_f_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[2]), MaybeArityList_6);
      conv2_ArgTypeList_35 = mercury__list__det_head_1_f_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[4]), ArgTypeListList_7);
      ArgTypeList_35 = ((MR_Word) (conv2_ArgTypeList_35));
      ArgTypeLists_36 = mercury__list__det_tail_1_f_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[4]), ArgTypeListList_7);
      conv3_AttributeList_37 = mercury__list__det_head_1_f_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[3]), AttributeListList_8);
      AttributeList_37 = ((MR_Word) (conv3_AttributeList_37));
      AttributeLists_38 = mercury__list__det_tail_1_f_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[3]), AttributeListList_8);
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5))));
      func_4(((MR_Box) (TypeClassInfo_for_writer_79)), Stream_1, ((MR_Box) ((MR_String) "<!ELEMENT ")), STATE_VARIABLE_State_0_9, &STATE_VARIABLE_State_52_52);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) (TypeClassInfo_for_writer_79)), Stream_1, ((MR_Box) (Element_24)), STATE_VARIABLE_State_52_52, &STATE_VARIABLE_State_53_53);
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5))));
      func_6(((MR_Box) (TypeClassInfo_for_writer_79)), Stream_1, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_53_53, &STATE_VARIABLE_State_55_55);
      succeeded = mercury__term_to_xml__is_primitive_type_2_p_0(TypeDesc_3, &Var_39);
      if (succeeded)
      {
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5))));

        func_7(((MR_Box) (TypeClassInfo_for_writer_79)), Stream_1, ((MR_Box) ((MR_String) "(#PCDATA)")), STATE_VARIABLE_State_55_55, &STATE_VARIABLE_State_57_57);
      }
      else
      if ((ArgTypeList_35 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5))));

        func_8(((MR_Box) (TypeClassInfo_for_writer_79)), Stream_1, ((MR_Box) ((MR_String) "EMPTY")), STATE_VARIABLE_State_55_55, &STATE_VARIABLE_State_57_57);
      }
      else
      {
        MR_Word Head_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypeList_35, (MR_Integer) 0))));
        MR_Word Tail_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypeList_35, (MR_Integer) 1))));
        MR_Word Braces_44;
        MR_Word AllowedFunctorsRegexs_46;
        MR_String AllowedFunctorsRegex_47;
        MR_Box STATE_VARIABLE_State_61_61;
        MR_Box STATE_VARIABLE_State_63_63;
        MR_Box STATE_VARIABLE_State_66_66;
        MR_Box STATE_VARIABLE_State_68_68;
        MR_Word Var_45;
        void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Word Var_48;

        if ((Tail_41 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Integer Var_58;
          MR_Integer Var_59;

{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_entries_10_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  Head_40 ;
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
	 Var_58  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
          {
            Var_59 = (MR_Integer) 1;
            succeeded = (Var_58 > Var_59);
          }
          if (succeeded)
            Braces_44 = (MR_Integer) 0;
          else
            Braces_44 = (MR_Integer) 1;
        }
        else
          Braces_44 = (MR_Integer) 1;
        succeeded = mercury__term_to_xml__is_array_2_p_0(TypeDesc_3, &Var_45);
        if (succeeded)
        {
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5))));

          func_9(((MR_Box) (TypeClassInfo_for_writer_79)), Stream_1, ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_State_55_55, &STATE_VARIABLE_State_61_61);
        }
        else
          STATE_VARIABLE_State_61_61 = STATE_VARIABLE_State_55_55;
        switch (Braces_44) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_State_63_63 = STATE_VARIABLE_State_61_61;
            break;
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5))));

              func_10(((MR_Box) (TypeClassInfo_for_writer_79)), Stream_1, ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_State_61_61, &STATE_VARIABLE_State_63_63);
            }
            break;
        }
        AllowedFunctorsRegexs_46 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(MakeElement_2, ArgTypeList_35);
        AllowedFunctorsRegex_47 = mercury__string__join_list_2_f_0((MR_String) ",", AllowedFunctorsRegexs_46);
        func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5))));
        func_11(((MR_Box) (TypeClassInfo_for_writer_79)), Stream_1, ((MR_Box) (AllowedFunctorsRegex_47)), STATE_VARIABLE_State_63_63, &STATE_VARIABLE_State_66_66);
        switch (Braces_44) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_State_68_68 = STATE_VARIABLE_State_66_66;
            break;
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5))));

              func_12(((MR_Box) (TypeClassInfo_for_writer_79)), Stream_1, ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_State_66_66, &STATE_VARIABLE_State_68_68);
            }
            break;
        }
        succeeded = mercury__term_to_xml__is_array_2_p_0(TypeDesc_3, &Var_48);
        if (succeeded)
        {
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5))));

          func_13(((MR_Box) (TypeClassInfo_for_writer_79)), Stream_1, ((MR_Box) ((MR_String) "*)")), STATE_VARIABLE_State_68_68, &STATE_VARIABLE_State_57_57);
        }
        else
          STATE_VARIABLE_State_57_57 = STATE_VARIABLE_State_68_68;
      }
      func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5))));
      func_14(((MR_Box) (TypeClassInfo_for_writer_79)), Stream_1, ((MR_Box) ((MR_String) ">\n")), STATE_VARIABLE_State_57_57, &STATE_VARIABLE_State_74_74);
      mercury__term_to_xml__write_dtd_attlists_8_p_0(TypeClassInfo_for_writer_79, Stream_1, Element_24, AttributeList_37, MaybeFunctor_31, MaybeArity_33, TypeDesc_3, STATE_VARIABLE_State_74_74, &STATE_VARIABLE_State_75_75);
      func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5))));
      func_15(((MR_Box) (TypeClassInfo_for_writer_79)), Stream_1, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_75_75, &STATE_VARIABLE_State_77_77);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Elements_25;
      next_value_of_MaybeFunctorList_5 = MaybeFunctors_32;
      next_value_of_MaybeArityList_6 = MaybeArities_34;
      next_value_of_ArgTypeListList_7 = ArgTypeLists_36;
      next_value_of_AttributeListList_8 = AttributeLists_38;
      next_value_of_STATE_VARIABLE_State_0_9 = STATE_VARIABLE_State_77_77;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      MaybeFunctorList_5 = next_value_of_MaybeFunctorList_5;
      MaybeArityList_6 = next_value_of_MaybeArityList_6;
      ArgTypeListList_7 = next_value_of_ArgTypeListList_7;
      AttributeListList_8 = next_value_of_AttributeListList_8;
      STATE_VARIABLE_State_0_9 = next_value_of_STATE_VARIABLE_State_0_9;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word V_6_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String V_8_8;
      MR_Word V_9_9;

      V_8_8 = mercury__term_to_xml__dtd_allowed_functors_regex_2_f_0(Var_12, V_6_6);
      V_9_9 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(Var_12, V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

static MR_String MR_CALL 
mercury__term_to_xml__dtd_allowed_functors_regex_2_f_0(
  MR_Word MakeElement_4,
  MR_Word TypeDesc_5)
{
  {
    MR_bool succeeded;
    MR_String Regex_6;
    MR_Word Elements_7;
    MR_String ElementsStr_12;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Integer Var_14;

    mercury__term_to_xml__get_elements_and_args_7_p_0(MakeElement_4, TypeDesc_5, &Elements_7, &Var_8, &Var_9, &Var_10, &Var_11);
    ElementsStr_12 = mercury__string__join_list_2_f_0((MR_String) "|", Elements_7);
    mercury__list__length_acc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Elements_7, (MR_Integer) 0, &Var_14);
    succeeded = (Var_14 > (MR_Integer) 1);
    if (succeeded)
    {
      MR_String Var_17;

      mercury__string__append_3_p_2(ElementsStr_12, (MR_String) ")", &Var_17);
      mercury__string__append_3_p_2((MR_String) "(", Var_17, &Regex_6);
    }
    else
      Regex_6 = ElementsStr_12;
    return Regex_6;
  }
}

static void MR_CALL 
mercury__term_to_xml__write_dtd_attlists_8_p_0(
  MR_Word TypeClassInfo_for_writer_20,
  MR_Box Stream_9,
  MR_String Element_10,
  MR_Word AttrFromSources_11,
  MR_Word MaybeFunctor_12,
  MR_Word MaybeArity_13,
  MR_Word TypeDesc_14,
  MR_Box STATE_VARIABLE_State_0_16,
  MR_Box * STATE_VARIABLE_State_17)
{
  mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_55_44_32_56_93_95_48_4_p_in__list_0(TypeClassInfo_for_writer_20, Stream_9, Element_10, MaybeFunctor_12, MaybeArity_13, TypeDesc_14, AttrFromSources_11, STATE_VARIABLE_State_0_16, STATE_VARIABLE_State_17);
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_55_44_32_56_93_95_48_4_p_in__list_0(
  MR_Word Var_16,
  MR_Box Var_17,
  MR_String Var_18,
  MR_Word Var_19,
  MR_Word Var_20,
  MR_Word Var_21,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word V_10_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_11_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_15_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      mercury__term_to_xml__write_dtd_attlist_8_p_0(Var_16, Var_17, Var_18, Var_19, Var_20, Var_21, V_10_9, HeadVar__3_3, &V_15_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_15_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__term_to_xml__write_dtd_attlist_8_p_0(
  MR_Word TypeClassInfo_for_writer_34,
  MR_Box Stream_9,
  MR_String Element_10,
  MR_Word MaybeFunctor_11,
  MR_Word MaybeArity_12,
  MR_Word TypeDesc_13,
  MR_Word HeadVar__6_6,
  MR_Box STATE_VARIABLE_State_0_19,
  MR_Box * STATE_VARIABLE_State_20)
{
  {
    MR_String Name_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__6_6, (MR_Integer) 0))));
    MR_Word Source_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__6_6, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word MaybeValue_17;
    MR_Box STATE_VARIABLE_State_24_24;
    MR_Box STATE_VARIABLE_State_25_25;
    MR_Box STATE_VARIABLE_State_27_27;
    MR_Box STATE_VARIABLE_State_28_28;
    MR_Box STATE_VARIABLE_State_30_30;
    MR_Box STATE_VARIABLE_State_31_31;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    switch (Source_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        if ((MaybeArity_12 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeValue_17 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Integer Arity_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeArity_12, (MR_Integer) 0))));
          MR_String Var_22;

          mercury__string__int_to_base_string_3_p_0(Arity_18, (MR_Integer) 10, &Var_22);
          {
            MaybeValue_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeValue_17, 0) = ((MR_Box) (Var_22));
          }
        }
        break;
      case (MR_Integer) 1:
        MaybeValue_17 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 0:
        MaybeValue_17 = MaybeFunctor_11;
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_21;

          Var_21 = mercury__type_desc__type_name_1_f_0(TypeDesc_13);
          {
            MaybeValue_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeValue_17, 0) = ((MR_Box) (Var_21));
          }
        }
        break;
    }
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) ((MR_String) "<!ATTLIST ")), STATE_VARIABLE_State_0_19, &STATE_VARIABLE_State_24_24);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) (Element_10)), STATE_VARIABLE_State_24_24, &STATE_VARIABLE_State_25_25);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_25_25, &STATE_VARIABLE_State_27_27);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) (Name_14)), STATE_VARIABLE_State_27_27, &STATE_VARIABLE_State_28_28);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) ((MR_String) " CDATA ")), STATE_VARIABLE_State_28_28, &STATE_VARIABLE_State_30_30);
    switch (Source_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        if ((MaybeValue_17 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));

          func_5(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) ((MR_String) "#IMPLIED")), STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_31_31);
        }
        else
        {
          MR_String Value_86 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeValue_17, (MR_Integer) 0))));
          MR_Box STATE_VARIABLE_State_57_91;
          MR_Box STATE_VARIABLE_State_58_92;
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_6(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_57_91);
          mercury__term_to_xml__write_xml_escaped_string_4_p_0(TypeClassInfo_for_writer_34, Stream_9, Value_86, STATE_VARIABLE_State_57_91, &STATE_VARIABLE_State_58_92);
          func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));
          func_7(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) ((MR_String) "\"")), STATE_VARIABLE_State_58_92, &STATE_VARIABLE_State_31_31);
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));

          func_8(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) ((MR_String) "#IMPLIED")), STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_31_31);
        }
        break;
      case (MR_Integer) 0:
        if ((MaybeValue_17 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));

          func_9(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) ((MR_String) "#IMPLIED")), STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_31_31);
        }
        else
        {
          MR_String Value_47 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeValue_17, (MR_Integer) 0))));
          MR_Box STATE_VARIABLE_State_18_52;
          MR_Box STATE_VARIABLE_State_19_53;
          void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));
          void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_10(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_18_52);
          mercury__term_to_xml__write_xml_escaped_string_4_p_0(TypeClassInfo_for_writer_34, Stream_9, Value_47, STATE_VARIABLE_State_18_52, &STATE_VARIABLE_State_19_53);
          func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));
          func_11(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) ((MR_String) "\"")), STATE_VARIABLE_State_19_53, &STATE_VARIABLE_State_31_31);
        }
        break;
      case (MR_Integer) 2:
        if ((MaybeValue_17 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));

          func_12(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) ((MR_String) "#REQUIRED")), STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_31_31);
        }
        else
        {
          MR_String Value_70 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeValue_17, (MR_Integer) 0))));
          MR_Box STATE_VARIABLE_State_41_75;
          MR_Box STATE_VARIABLE_State_42_76;
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));
          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_13(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_41_75);
          mercury__term_to_xml__write_xml_escaped_string_4_p_0(TypeClassInfo_for_writer_34, Stream_9, Value_70, STATE_VARIABLE_State_41_75, &STATE_VARIABLE_State_42_76);
          func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));
          func_14(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) ((MR_String) "\"")), STATE_VARIABLE_State_42_76, &STATE_VARIABLE_State_31_31);
        }
        break;
    }
    func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5))));
    func_15(((MR_Box) (TypeClassInfo_for_writer_34)), Stream_9, ((MR_Box) ((MR_String) ">\n")), STATE_VARIABLE_State_31_31, STATE_VARIABLE_State_20);
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml__is_primitive_type_2_p_0(
  MR_Word TypeDesc_3,
  MR_String * Element_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_13;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0) ;
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
	 Var_13  = TypeInfo;
}
    succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_3, Var_13);
    if (succeeded)
    {
      *Element_4 = (MR_String) "String";
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_14;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0) ;
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
	 Var_14  = TypeInfo;
}
      succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_3, Var_14);
      if (succeeded)
      {
        *Element_4 = (MR_String) "Char";
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Var_15;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0) ;
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
	 Var_15  = TypeInfo;
}
        succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_3, Var_15);
        if (succeeded)
        {
          *Element_4 = (MR_String) "Int";
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Var_16;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0) ;
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
	 Var_16  = TypeInfo;
}
          succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_3, Var_16);
          if (succeeded)
          {
            *Element_4 = (MR_String) "Float";
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv3_Element_7;
    MR_Word conv2_AttrFromSources_8;

    mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Element_7, &conv2_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv3_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv2_AttrFromSources_8));
  }
}

static void MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv1_Element_7;
    MR_Word conv0_AttrFromSources_8;

    mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Element_7, &conv0_AttrFromSources_8);
    *wrapper_arg_3 = ((MR_Box) (conv1_Element_7));
    *wrapper_arg_4 = ((MR_Box) (conv0_AttrFromSources_8));
  }
}

MR_Word MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0(
  MR_Word ElementMapping_4,
  MR_Word TypeDesc_5)
{
  {
    MR_bool succeeded;
    MR_Word Result_6;
    MR_Word MakeElement_7;
    MR_Word TypeInfo_37_37;
    MR_Word TypeInfo_38_38;
    MR_Word TypeInfo_39_39;
    MR_Word TypeInfo_40_40;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_String ArgX1_52;
    MR_Word ArgX2_54;
    MR_Word ArgY2_55;
    MR_Word ArgX1_62;
    MR_Word ArgX2_64;
    MR_Word ArgY2_65;
    MR_Word ArgX1_72;
    MR_Word ArgX2_74;
    MR_Word ArgY2_75;
    MR_Word ArgX1_82;
    MR_Word ArgX2_84;
    MR_Word ArgY2_85;

    switch (MR_tag((MR_Word) ElementMapping_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ElementMapping_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MakeElement_7 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[1]);
            break;
          case (MR_Integer) 1:
            MakeElement_7 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[2]);
            break;
        }
        break;
      case (MR_Integer) 1:
        MakeElement_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ElementMapping_4, (MR_Integer) 0))));
        break;
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = NULL;
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = NULL;
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = NULL;
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = NULL;
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = NULL;
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__term_to_xml__get_elements_and_args_7_p_0(MakeElement_7, TypeDesc_5, &Var_31, &Var_32, &Var_33, &Var_34, &Var_35);
    succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgX1_52 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 0))));
      ArgY2_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 1))));
      (MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0)) = ((MR_Box) (ArgX1_52));
      ArgX2_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 1))));
      succeeded = mercury__list____Unify____list_1_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgX2_54, ArgY2_55);
      if (succeeded)
      {
        TypeInfo_37_37 = (MR_Word) (&mercury__term_to_xml_scalar_common_1[1]);
        succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgX1_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0))));
          ArgY2_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1))));
          (MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0)) = ((MR_Box) (ArgX1_62));
          ArgX2_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_37_37, ArgX2_64, ArgY2_65);
          if (succeeded)
          {
            TypeInfo_38_38 = (MR_Word) (&mercury__term_to_xml_scalar_common_1[2]);
            succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ArgX1_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 0))));
              ArgY2_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 1))));
              (MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 0)) = ((MR_Box) (ArgX1_72));
              ArgX2_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 1))));
              succeeded = mercury__list____Unify____list_1_0(TypeInfo_38_38, ArgX2_74, ArgY2_75);
              if (succeeded)
              {
                TypeInfo_39_39 = (MR_Word) (&mercury__term_to_xml_scalar_common_1[0]);
                succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ArgX1_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 0))));
                  ArgY2_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 1))));
                  (MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 0)) = ((MR_Box) (ArgX1_82));
                  ArgX2_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 1))));
                  succeeded = mercury__list____Unify____list_1_0(TypeInfo_39_39, ArgX2_84, ArgY2_85);
                  if (succeeded)
                  {
                    TypeInfo_40_40 = (MR_Word) (&mercury__term_to_xml_scalar_common_1[3]);
                    succeeded = mercury__term_to_xml____Unify____list__list_1_1(TypeInfo_40_40, Var_18, Var_35);
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word PseudoTypeDesc_13;
      MR_Word Var_24;

{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_2_f_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  TypeDesc_5 ;
		{

    PseudoTypeDesc = TypeDesc;


		;}
#undef MR_PROC_LABEL
	 PseudoTypeDesc_13  = PseudoTypeDesc;
}
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (PseudoTypeDesc_13));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Result_6 = mercury__term_to_xml__can_generate_dtd_for_types_4_f_0(MakeElement_7, Var_24, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U));
    }
    else
      Result_6 = (MR_Word) ((MR_Unsigned) 4U);
    return Result_6;
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____list__list_1_1(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box ArgX1_5;
    MR_Word ArgX2_7;
    MR_Word ArgY2_8;

    if (succeeded)
    {
      ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)) = ArgX1_5;
      ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_11, ArgX2_7, ArgY2_8);
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
mercury__term_to_xml__can_generate_dtd_for_types_4_f_0(
  MR_Word MakeElement_1,
  MR_Word HeadVar__2_2,
  MR_Word Done_3,
  MR_Word ElementsSoFar_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__5_5;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word PseudoTypeDesc_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PseudoTypeDescs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word TypeDesc_15;

      succeeded = mercury__type_desc__ground_pseudo_type_desc_to_type_desc_2_p_0(PseudoTypeDesc_10, &TypeDesc_15);
      if (succeeded)
      {
        {
          MR_Integer Var_16;
          MR_Integer Var_53;

{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  TypeDesc_15 ;
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
	 Var_16  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
          {
            Var_53 = (MR_Integer) -1;
            succeeded = (Var_16 > Var_53);
          }
        }
        if (!(succeeded))
        {
          {
            MR_Word PseudoTypeDesc_56;
            MR_Word TypeCtor_57;
            MR_Word ArgPseudoTypes_58;
            MR_Word Var_59;
            MR_String Var_60;
            MR_String Var_61;
            MR_String V_5_64;
            MR_Integer V_6_65;
            MR_String V_5_68;
            MR_Integer V_6_69;

{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  TypeDesc_15 ;
		{

    PseudoTypeDesc = TypeDesc;


		;}
#undef MR_PROC_LABEL
	 PseudoTypeDesc_56  = PseudoTypeDesc;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  PseudoTypeDesc_56 ;
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
	 TypeCtor_57  = TypeCtorDesc;
	 ArgPseudoTypes_58  = ArgPseudoTypeInfos;
	}
succeeded  = SUCCESS_INDICATOR;
}
            if (succeeded)
            {
              succeeded = (ArgPseudoTypes_58 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPseudoTypes_58, (MR_Integer) 1))));
                succeeded = (Var_59 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  TypeCtor_57 ;
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
	 V_5_64  = TypeCtorModuleName;
	 Var_60  = TypeCtorName;
	 V_6_65  = TypeCtorArity;
}
                  succeeded = (strcmp(Var_60, (MR_String) "array") == 0);
                  if (succeeded)
                  {
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  TypeCtor_57 ;
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
	 Var_61  = TypeCtorModuleName;
	 V_5_68  = TypeCtorName;
	 V_6_69  = TypeCtorArity;
}
                    succeeded = (strcmp(Var_61, (MR_String) "array") == 0);
                  }
                }
              }
            }
          }
          if (!(succeeded))
          {
            MR_Word Var_80;

{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0) ;
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
	 Var_80  = TypeInfo;
}
            succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_15, Var_80);
            if (succeeded)
              succeeded = MR_TRUE;
            else
            {
              MR_Word Var_81;

{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0) ;
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
	 Var_81  = TypeInfo;
}
              succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_15, Var_81);
              if (succeeded)
                succeeded = MR_TRUE;
              else
              {
                MR_Word Var_82;

{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0) ;
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
	 Var_82  = TypeInfo;
}
                succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_15, Var_82);
                if (succeeded)
                  succeeded = MR_TRUE;
                else
                {
                  MR_Word Var_83;

{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0) ;
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
	 Var_83  = TypeInfo;
}
                  succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_15, Var_83);
                }
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Box conv0_V_5_90;

          succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), Done_3, ((MR_Box) (TypeDesc_15)), &conv0_V_5_90);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
          {
            MR_Word next_value_of_HeadVar__2_2 = PseudoTypeDescs_11;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          else
          {
            MR_Word Elements_19;
            MR_Word ArgLists_22;
            MR_Word DupElements_24;
            MR_Word Var_20;
            MR_Word Var_21;
            MR_Word Var_23;

            mercury__term_to_xml__get_elements_and_args_7_p_0(MakeElement_1, TypeDesc_15, &Elements_19, &Var_20, &Var_21, &ArgLists_22, &Var_23);
            mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(ElementsSoFar_4, Elements_19, &DupElements_24);
            if ((DupElements_24 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word NewPseudoTypeDescs_29;
              MR_Word TypeDescList_30;
              MR_Word NewElementsSoFar_31;
              MR_Word NewDone_32;
              MR_Word Var_34;
              MR_Integer Var_35;
              MR_Word next_value_of_HeadVar__2_2;
              MR_Word next_value_of_Done_3;
              MR_Word next_value_of_ElementsSoFar_4;

              Var_34 = mercury__list__condense_1_f_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0), ArgLists_22);
              mercury__list__merge_and_remove_dups_3_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0), Var_34, PseudoTypeDescs_11, &NewPseudoTypeDescs_29);
              Var_35 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Elements_19);
              mercury__list__duplicate_3_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), Var_35, ((MR_Box) (TypeDesc_15)), &TypeDescList_30);
              mercury__map__det_insert_from_corresponding_lists_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), Elements_19, TypeDescList_30, ElementsSoFar_4, &NewElementsSoFar_31);
              mercury__map__det_insert_4_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), ((MR_Box) (TypeDesc_15)), ((MR_Box) ((MR_Integer) 0)), Done_3, &NewDone_32);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = NewPseudoTypeDescs_29;
              next_value_of_Done_3 = NewDone_32;
              next_value_of_ElementsSoFar_4 = NewElementsSoFar_31;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Done_3 = next_value_of_Done_3;
              ElementsSoFar_4 = next_value_of_ElementsSoFar_4;
              continue;
            }
            else
            {
              MR_String DupElement_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), DupElements_24, (MR_Integer) 0))));
              MR_Word DupTypeDesc_27;
              MR_Word DupTypes_28;
              MR_Word Var_37;
              MR_Box conv1_DupTypeDesc_27;

              mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), ElementsSoFar_4, ((MR_Box) (DupElement_25)), &conv1_DupTypeDesc_27);
              DupTypeDesc_27 = ((MR_Word) (conv1_DupTypeDesc_27));
              {
                Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (DupTypeDesc_27));
                MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                DupTypes_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), DupTypes_28, 0) = ((MR_Box) (TypeDesc_15));
                MR_hl_field(MR_mktag(1), DupTypes_28, 1) = ((MR_Box) (Var_37));
              }
              {
                HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), HeadVar__5_5, 0) = ((MR_Box) (DupElement_25));
                MR_hl_field(MR_mktag(1), HeadVar__5_5, 1) = ((MR_Box) (DupTypes_28));
              }
            }
          }
        }
        else
          {
            HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), HeadVar__5_5, 0) = ((MR_Box) (TypeDesc_15));
          }
      }
      else
        {
          HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), HeadVar__5_5, 0) = ((MR_Box) (PseudoTypeDesc_10));
        }
    }
    return HeadVar__5_5;
    break;
  }
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String V_6_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box conv0_V_5_61;

      succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), Var_12, ((MR_Box) (V_6_6)), &conv0_V_5_61);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
      {
        MR_Word V_9_9;

        mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(Var_12, V_7_7, &V_9_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_6_6));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_9_9));
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = V_7_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__term_to_xml__get_elements_and_args_7_p_0(
  MR_Word MakeElement_8,
  MR_Word TypeDesc_9,
  MR_Word * Elements_10,
  MR_Word * MaybeFunctors_11,
  MR_Word * MaybeArities_12,
  MR_Word * ArgTypeLists_13,
  MR_Word * AttributeLists_14)
{
  {
    MR_bool succeeded;
    MR_Integer NumFunctors_15;
    MR_Integer Var_81;

{
#define MR_PROC_LABEL mercury__term_to_xml__get_elements_and_args_7_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  TypeDesc_9 ;
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
	 NumFunctors_15  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      Var_81 = (MR_Integer) -1;
      succeeded = (NumFunctors_15 > Var_81);
    }
    if (succeeded)
    {
      MR_Word FunctorNums_16;
      MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) NumFunctors_15 - (MR_Unsigned) (MR_Integer) 1);
      MR_Word Functors_17;
      MR_Word Arities_18;
      MR_Word ArgTypeLists0_19;

      mercury__list__successive_integers_4_p_0((MR_Integer) 0, Var_30, (MR_Word) ((MR_Unsigned) 0U), &FunctorNums_16);
      succeeded = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(TypeDesc_9, FunctorNums_16, &Functors_17, &Arities_18, &ArgTypeLists0_19);
      if (succeeded)
      {
        MR_Word Requests_21;

        *MaybeFunctors_11 = mercury__term_to_xml__map__ho23_2_f_in__list_0(Functors_17);
        *MaybeArities_12 = mercury__term_to_xml__map__ho22_2_f_in__list_0(Arities_18);
        *ArgTypeLists_13 = ArgTypeLists0_19;
        Requests_21 = mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(Functors_17, Arities_18);
        mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(MakeElement_8, TypeDesc_9, Requests_21, Elements_10, AttributeLists_14);
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
      MR_String Element_26;
      MR_Word AttrFromSources_27;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), MakeElement_8, (MR_Integer) 1))));
      MR_Box conv2_Element_26;
      MR_Box conv1_AttrFromSources_27;
      MR_Word ArgType_28;

      func_0(((MR_Box) (MakeElement_8)), ((MR_Box) (TypeDesc_9)), ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Element_26, &conv1_AttrFromSources_27);
      Element_26 = ((MR_String) (conv2_Element_26));
      AttrFromSources_27 = ((MR_Word) (conv1_AttrFromSources_27));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Elements_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Element_26));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *AttributeLists_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AttrFromSources_27));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *MaybeFunctors_11 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[19]));
      *MaybeArities_12 = (MR_Word) (*MaybeFunctors_11);
      succeeded = mercury__term_to_xml__is_array_2_p_0(TypeDesc_9, &ArgType_28);
      if (succeeded)
      {
        MR_Word Var_53;

        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (ArgType_28));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ArgTypeLists_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
        *ArgTypeLists_13 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[20]));
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(
  MR_Word Var_16,
  MR_Word Var_17,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word V_8_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_String V_9_9;
    MR_Word V_10_10;
    MR_Word V_11_11;
    MR_Word V_12_12;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));
    MR_Box conv2_V_9_9;
    MR_Box conv1_V_11_11;

    func_0(((MR_Box) (Var_16)), ((MR_Box) (Var_17)), ((MR_Box) (V_7_7)), &conv2_V_9_9, &conv1_V_11_11);
    V_9_9 = ((MR_String) (conv2_V_9_9));
    V_11_11 = ((MR_Word) (conv1_V_11_11));
    mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(Var_16, Var_17, V_8_8, &V_10_10, &V_12_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_9_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_10_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_11_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_12_12));
    }
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(
  MR_Word Var_20,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer V_8_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_9_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String V_10_10;
      MR_Word V_11_11;
      MR_Integer V_12_12;
      MR_Word V_13_13;
      MR_Word V_14_14;
      MR_Word V_15_15;

      succeeded = mercury__construct__get_functor_internal_5_p_0(Var_20, V_8_8, &V_10_10, &V_12_12, &V_14_14);
      if (succeeded)
      {
        succeeded = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(Var_20, V_9_9, &V_11_11, &V_13_13, &V_15_15);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_10_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_11_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_12_12));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_13_13));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_14_14));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_15_15));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho23_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String V_6_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_8_8;
      MR_Word V_9_9;

      {
        V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), V_8_8, 0) = ((MR_Box) (V_6_6));
      }
      V_9_9 = mercury__term_to_xml__map__ho23_2_f_in__list_0(V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho22_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer V_6_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_8_8;
      MR_Word V_9_9;

      {
        V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), V_8_8, 0) = ((MR_Box) (V_6_6));
      }
      V_9_9 = mercury__term_to_xml__map__ho22_2_f_in__list_0(V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word HeadVar__4_4;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
      }
    else
    {
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_35 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
      }
      else
      {
        MR_Integer V_21_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word V_22_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word V_23_25;
        MR_Word V_24_26;

        {
          V_23_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), V_23_25, 0) = ((MR_Box) (Var_35));
          MR_hl_field(MR_mktag(1), V_23_25, 1) = ((MR_Box) (V_21_23));
        }
        V_24_26 = mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(Var_34, V_22_24);
        {
          HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = ((MR_Box) (V_23_25));
          MR_hl_field(MR_mktag(1), HeadVar__4_4, 1) = ((MR_Box) (V_24_26));
        }
      }
    }
    return HeadVar__4_4;
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml__is_array_2_p_0(
  MR_Word TypeDesc_3,
  MR_Word * ArgPseudoType_4)
{
  {
    MR_bool succeeded;
    MR_Word PseudoTypeDesc_5;
    MR_Word TypeCtor_6;
    MR_Word ArgPseudoTypes_7;
    MR_Word Var_8;
    MR_String Var_9;
    MR_String Var_10;
    MR_String V_5_13;
    MR_Integer V_6_14;
    MR_String V_5_17;
    MR_Integer V_6_18;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  TypeDesc_3 ;
		{

    PseudoTypeDesc = TypeDesc;


		;}
#undef MR_PROC_LABEL
	 PseudoTypeDesc_5  = PseudoTypeDesc;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  PseudoTypeDesc_5 ;
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
	 TypeCtor_6  = TypeCtorDesc;
	 ArgPseudoTypes_7  = ArgPseudoTypeInfos;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ArgPseudoTypes_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *ArgPseudoType_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPseudoTypes_7, (MR_Integer) 0))));
        Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPseudoTypes_7, (MR_Integer) 1))));
        succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  TypeCtor_6 ;
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
	 V_5_13  = TypeCtorModuleName;
	 Var_9  = TypeCtorName;
	 V_6_14  = TypeCtorArity;
}
          succeeded = (strcmp(Var_9, (MR_String) "array") == 0);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  TypeCtor_6 ;
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
	 Var_10  = TypeCtorModuleName;
	 V_5_17  = TypeCtorName;
	 V_6_18  = TypeCtorArity;
}
            succeeded = (strcmp(Var_10, (MR_String) "array") == 0);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_5_p_0(
  MR_Word TypeClassInfo_for_xmlable_18,
  MR_Word TypeClassInfo_for_writer_19,
  MR_Box Stream_6,
  MR_Integer Indent_7,
  MR_Box Term_8,
  MR_Box STATE_VARIABLE_State_0_15,
  MR_Box * STATE_VARIABLE_State_16)
{
  {
    MR_bool succeeded;
    MR_Word Root_10;
    MR_Word Children_13;
    MR_Word ChildrenFormat_14;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_xmlable_18, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_Root_10;

    conv1_Root_10 = func_0(((MR_Box) (TypeClassInfo_for_xmlable_18)), Term_8);
    Root_10 = ((MR_Word) (conv1_Root_10));
    Children_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Root_10, (MR_Integer) 2))));
    succeeded = mercury__term_to_xml__contains_noformat_xml_1_p_0(Children_13);
    if (succeeded)
      ChildrenFormat_14 = (MR_Integer) 1;
    else
      ChildrenFormat_14 = (MR_Integer) 0;
    mercury__term_to_xml__write_xml_element_format_6_p_0(TypeClassInfo_for_writer_19, Stream_6, ChildrenFormat_14, Indent_7, Root_10, STATE_VARIABLE_State_0_15, STATE_VARIABLE_State_16);
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_doc_4_p_0(
  MR_Word TypeClassInfo_for_xmlable_13,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Box Stream_5,
  MR_Box Term_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  {
    mercury__term_to_xml__write_xml_doc_style_dtd_6_p_0(TypeClassInfo_for_xmlable_13, TypeClassInfo_for_writer_14, Stream_5, Term_6, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 4U), STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_doc_style_dtd_6_p_0(
  MR_Word TypeClassInfo_for_xmlable_26,
  MR_Word TypeClassInfo_for_writer_27,
  MR_Box Stream_7,
  MR_Box Term_8,
  MR_Word MaybeStyleSheet_9,
  MR_Word MaybeDTD_10,
  MR_Box STATE_VARIABLE_State_0_18,
  MR_Box * STATE_VARIABLE_State_19)
{
  {
    MR_bool succeeded;
    MR_Word Root_12;
    MR_String RootName_13;
    MR_Word Children_15;
    MR_Word ChildrenFormat_17;
    MR_Box STATE_VARIABLE_State_21_21;
    MR_Box STATE_VARIABLE_State_22_22;
    MR_Box STATE_VARIABLE_State_23_23;
    MR_Box MR_CALL (* func_5)(MR_Box, MR_Box);
    MR_Box conv6_Root_12;

    mercury__term_to_xml__write_xml_header_4_p_0(TypeClassInfo_for_writer_27, Stream_7, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_State_0_18, &STATE_VARIABLE_State_21_21);
    if ((MaybeStyleSheet_9 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_State_22_22 = STATE_VARIABLE_State_21_21;
    else
    {
      MR_String Type_33 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStyleSheet_9, (MR_Integer) 0))));
      MR_String Href_34 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStyleSheet_9, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_State_13_36;
      MR_Box STATE_VARIABLE_State_14_37;
      MR_Box STATE_VARIABLE_State_16_39;
      MR_Box STATE_VARIABLE_State_17_40;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_0(((MR_Box) (TypeClassInfo_for_writer_27)), Stream_7, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), STATE_VARIABLE_State_21_21, &STATE_VARIABLE_State_13_36);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5))));
      func_1(((MR_Box) (TypeClassInfo_for_writer_27)), Stream_7, ((MR_Box) (Type_33)), STATE_VARIABLE_State_13_36, &STATE_VARIABLE_State_14_37);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5))));
      func_2(((MR_Box) (TypeClassInfo_for_writer_27)), Stream_7, ((MR_Box) ((MR_String) "\" href=\"")), STATE_VARIABLE_State_14_37, &STATE_VARIABLE_State_16_39);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5))));
      func_3(((MR_Box) (TypeClassInfo_for_writer_27)), Stream_7, ((MR_Box) (Href_34)), STATE_VARIABLE_State_16_39, &STATE_VARIABLE_State_17_40);
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5))));
      func_4(((MR_Box) (TypeClassInfo_for_writer_27)), Stream_7, ((MR_Box) ((MR_String) "\"\?>\n")), STATE_VARIABLE_State_17_40, &STATE_VARIABLE_State_22_22);
    }
    func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_xmlable_26, (MR_Integer) 0)), (MR_Integer) 5))));
    conv6_Root_12 = func_5(((MR_Box) (TypeClassInfo_for_xmlable_26)), Term_8);
    Root_12 = ((MR_Word) (conv6_Root_12));
    RootName_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Root_12, (MR_Integer) 0))));
    Children_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Root_12, (MR_Integer) 2))));
    if ((MaybeDTD_10 == (MR_Word) ((MR_Unsigned) 4U)))
      STATE_VARIABLE_State_23_23 = STATE_VARIABLE_State_22_22;
    else
    {
      MR_Word DocType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDTD_10, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_State_15_52;
      MR_Box STATE_VARIABLE_State_16_53;
      MR_Box STATE_VARIABLE_State_28_65;
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_7(((MR_Box) (TypeClassInfo_for_writer_27)), Stream_7, ((MR_Box) ((MR_String) "<!DOCTYPE ")), STATE_VARIABLE_State_22_22, &STATE_VARIABLE_State_15_52);
      func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5))));
      func_8(((MR_Box) (TypeClassInfo_for_writer_27)), Stream_7, ((MR_Box) (RootName_13)), STATE_VARIABLE_State_15_52, &STATE_VARIABLE_State_16_53);
      switch (MR_tag((MR_Word) DocType_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String PUBLIC_49 = ((MR_String) ((MR_hl_field(MR_mktag(0), DocType_16, (MR_Integer) 0))));
            MR_Box STATE_VARIABLE_State_27_64;
            void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5))));
            void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            func_9(((MR_Box) (TypeClassInfo_for_writer_27)), Stream_7, ((MR_Box) ((MR_String) " PUBLIC \"")), STATE_VARIABLE_State_16_53, &STATE_VARIABLE_State_27_64);
            func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5))));
            func_10(((MR_Box) (TypeClassInfo_for_writer_27)), Stream_7, ((MR_Box) (PUBLIC_49)), STATE_VARIABLE_State_27_64, &STATE_VARIABLE_State_28_65);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String SYSTEM_50 = ((MR_String) ((MR_hl_field(MR_mktag(1), DocType_16, (MR_Integer) 1))));
            MR_Box STATE_VARIABLE_State_21_58;
            MR_Box STATE_VARIABLE_State_22_59;
            MR_Box STATE_VARIABLE_State_24_61;
            MR_String PUBLIC_68 = ((MR_String) ((MR_hl_field(MR_mktag(1), DocType_16, (MR_Integer) 0))));
            void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5))));
            void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            func_11(((MR_Box) (TypeClassInfo_for_writer_27)), Stream_7, ((MR_Box) ((MR_String) " PUBLIC \"")), STATE_VARIABLE_State_16_53, &STATE_VARIABLE_State_21_58);
            func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5))));
            func_12(((MR_Box) (TypeClassInfo_for_writer_27)), Stream_7, ((MR_Box) (PUBLIC_68)), STATE_VARIABLE_State_21_58, &STATE_VARIABLE_State_22_59);
            func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5))));
            func_13(((MR_Box) (TypeClassInfo_for_writer_27)), Stream_7, ((MR_Box) ((MR_String) "\" \"")), STATE_VARIABLE_State_22_59, &STATE_VARIABLE_State_24_61);
            func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5))));
            func_14(((MR_Box) (TypeClassInfo_for_writer_27)), Stream_7, ((MR_Box) (SYSTEM_50)), STATE_VARIABLE_State_24_61, &STATE_VARIABLE_State_28_65);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box STATE_VARIABLE_State_18_55;
            MR_String SYSTEM_69 = ((MR_String) ((MR_hl_field(MR_mktag(2), DocType_16, (MR_Integer) 0))));
            void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5))));
            void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            func_15(((MR_Box) (TypeClassInfo_for_writer_27)), Stream_7, ((MR_Box) ((MR_String) " SYSTEM \"")), STATE_VARIABLE_State_16_53, &STATE_VARIABLE_State_18_55);
            func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5))));
            func_16(((MR_Box) (TypeClassInfo_for_writer_27)), Stream_7, ((MR_Box) (SYSTEM_69)), STATE_VARIABLE_State_18_55, &STATE_VARIABLE_State_28_65);
          }
          break;
      }
      func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5))));
      func_17(((MR_Box) (TypeClassInfo_for_writer_27)), Stream_7, ((MR_Box) ((MR_String) "\">\n")), STATE_VARIABLE_State_28_65, &STATE_VARIABLE_State_23_23);
    }
    succeeded = mercury__term_to_xml__contains_noformat_xml_1_p_0(Children_15);
    if (succeeded)
      ChildrenFormat_17 = (MR_Integer) 1;
    else
      ChildrenFormat_17 = (MR_Integer) 0;
    mercury__term_to_xml__write_xml_element_format_6_p_0(TypeClassInfo_for_writer_27, Stream_7, ChildrenFormat_17, (MR_Integer) 0, Root_12, STATE_VARIABLE_State_23_23, STATE_VARIABLE_State_19);
  }
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_16,
  MR_Box Var_17,
  MR_Word Var_18,
  MR_Integer Var_19,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word V_10_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_11_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_15_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      mercury__term_to_xml__write_xml_element_format_6_p_0(Var_16, Var_17, Var_18, Var_19, V_10_9, HeadVar__3_3, &V_15_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_15_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_format_6_p_0(
  MR_Word TypeClassInfo_for_writer_62,
  MR_Box Stream_7,
  MR_Word Format_8,
  MR_Integer IndentLevel_9,
  MR_Word XML_10,
  MR_Box STATE_VARIABLE_State_0_24,
  MR_Box * STATE_VARIABLE_State_25)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) XML_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Name_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), XML_10, (MR_Integer) 0))));
          MR_Word Attrs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), XML_10, (MR_Integer) 1))));
          MR_Word Children_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), XML_10, (MR_Integer) 2))));
          MR_Box STATE_VARIABLE_State_49_49;

          mercury__term_to_xml__maybe_indent_5_p_0(TypeClassInfo_for_writer_62, Stream_7, Format_8, IndentLevel_9, STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_49_49);
          if ((Children_14 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Box STATE_VARIABLE_State_60_60;

            mercury__term_to_xml__write_empty_element_5_p_0(TypeClassInfo_for_writer_62, Stream_7, Name_12, Attrs_13, STATE_VARIABLE_State_49_49, &STATE_VARIABLE_State_60_60);
            mercury__term_to_xml__maybe_nl_4_p_0(TypeClassInfo_for_writer_62, Stream_7, Format_8, STATE_VARIABLE_State_60_60, STATE_VARIABLE_State_25);
          }
          else
          {
            MR_Word ChildrenFormat_17;
            MR_Box STATE_VARIABLE_State_50_50;
            MR_Box STATE_VARIABLE_State_52_52;
            MR_Box STATE_VARIABLE_State_54_54;
            MR_Integer Var_55;
            MR_Box STATE_VARIABLE_State_57_57;
            MR_Box STATE_VARIABLE_State_58_58;

            mercury__term_to_xml__write_element_start_5_p_0(TypeClassInfo_for_writer_62, Stream_7, Name_12, Attrs_13, STATE_VARIABLE_State_49_49, &STATE_VARIABLE_State_50_50);
            succeeded = mercury__term_to_xml__contains_noformat_xml_1_p_0(Children_14);
            if (succeeded)
            {
              ChildrenFormat_17 = (MR_Integer) 1;
              STATE_VARIABLE_State_52_52 = STATE_VARIABLE_State_50_50;
            }
            else
            {
              void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              ChildrenFormat_17 = (MR_Integer) 0;
              func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5))));
              func_7(((MR_Box) (TypeClassInfo_for_writer_62)), Stream_7, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_50_50, &STATE_VARIABLE_State_52_52);
            }
            Var_55 = (MR_Integer) ((MR_Unsigned) IndentLevel_9 + (MR_Unsigned) (MR_Integer) 1);
            mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_4_p_in__list_0(TypeClassInfo_for_writer_62, Stream_7, ChildrenFormat_17, Var_55, Children_14, STATE_VARIABLE_State_52_52, &STATE_VARIABLE_State_54_54);
            mercury__term_to_xml__maybe_indent_5_p_0(TypeClassInfo_for_writer_62, Stream_7, ChildrenFormat_17, IndentLevel_9, STATE_VARIABLE_State_54_54, &STATE_VARIABLE_State_57_57);
            mercury__term_to_xml__write_element_end_4_p_0(TypeClassInfo_for_writer_62, Stream_7, Name_12, STATE_VARIABLE_State_57_57, &STATE_VARIABLE_State_58_58);
            mercury__term_to_xml__maybe_nl_4_p_0(TypeClassInfo_for_writer_62, Stream_7, Format_8, STATE_VARIABLE_State_58_58, STATE_VARIABLE_State_25);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Data_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), XML_10, (MR_Integer) 0))));

          mercury__term_to_xml__write_xml_escaped_string_4_p_0(TypeClassInfo_for_writer_62, Stream_7, Data_18, STATE_VARIABLE_State_0_24, STATE_VARIABLE_State_25);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String CData_19 = ((MR_String) ((MR_hl_field(MR_mktag(2), XML_10, (MR_Integer) 0))));
          MR_Box STATE_VARIABLE_State_41_41;
          MR_Box STATE_VARIABLE_State_43_43;
          MR_Box STATE_VARIABLE_State_44_44;
          MR_Box STATE_VARIABLE_State_46_46;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          switch (Format_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_62, Stream_7, IndentLevel_9, STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_41_41);
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_State_41_41 = STATE_VARIABLE_State_0_24;
              break;
          }
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5))));
          func_0(((MR_Box) (TypeClassInfo_for_writer_62)), Stream_7, ((MR_Box) ((MR_String) "<![CDATA[")), STATE_VARIABLE_State_41_41, &STATE_VARIABLE_State_43_43);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5))));
          func_1(((MR_Box) (TypeClassInfo_for_writer_62)), Stream_7, ((MR_Box) (CData_19)), STATE_VARIABLE_State_43_43, &STATE_VARIABLE_State_44_44);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5))));
          func_2(((MR_Box) (TypeClassInfo_for_writer_62)), Stream_7, ((MR_Box) ((MR_String) "]]>")), STATE_VARIABLE_State_44_44, &STATE_VARIABLE_State_46_46);
          switch (Format_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5))));

                func_3(((MR_Box) (TypeClassInfo_for_writer_62)), Stream_7, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_46_46, STATE_VARIABLE_State_25);
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_State_25 = STATE_VARIABLE_State_46_46;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), XML_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Comment_20 = ((MR_String) ((MR_hl_field(MR_mktag(3), XML_10, (MR_Integer) 1))));
              MR_String EscapedComment_21;
              MR_Box STATE_VARIABLE_State_32_32;
              MR_Box STATE_VARIABLE_State_34_34;
              MR_Box STATE_VARIABLE_State_37_37;
              MR_Box STATE_VARIABLE_State_39_39;
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              switch (Format_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_62, Stream_7, IndentLevel_9, STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_32_32);
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_State_32_32 = STATE_VARIABLE_State_0_24;
                  break;
              }
              func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5))));
              func_4(((MR_Box) (TypeClassInfo_for_writer_62)), Stream_7, ((MR_Box) ((MR_String) "<!-- ")), STATE_VARIABLE_State_32_32, &STATE_VARIABLE_State_34_34);
              mercury__string__replace_all_4_p_0(Comment_20, (MR_String) "--", (MR_String) " - ", &EscapedComment_21);
              func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5))));
              func_5(((MR_Box) (TypeClassInfo_for_writer_62)), Stream_7, ((MR_Box) (EscapedComment_21)), STATE_VARIABLE_State_34_34, &STATE_VARIABLE_State_37_37);
              func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5))));
              func_6(((MR_Box) (TypeClassInfo_for_writer_62)), Stream_7, ((MR_Box) ((MR_String) " -->")), STATE_VARIABLE_State_37_37, &STATE_VARIABLE_State_39_39);
              mercury__term_to_xml__maybe_nl_4_p_0(TypeClassInfo_for_writer_62, Stream_7, Format_8, STATE_VARIABLE_State_39_39, STATE_VARIABLE_State_25);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String EntityName_22 = ((MR_String) ((MR_hl_field(MR_mktag(3), XML_10, (MR_Integer) 1))));
              MR_Box STATE_VARIABLE_State_28_28;
              MR_String Var_29;
              void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5))));
              void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              func_8(((MR_Box) (TypeClassInfo_for_writer_62)), Stream_7, ((MR_Box) ((MR_String) "&")), STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_28_28);
              Var_29 = mercury__string__f_43_43_2_f_0(EntityName_22, (MR_String) ";");
              func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5))));
              func_9(((MR_Box) (TypeClassInfo_for_writer_62)), Stream_7, ((MR_Box) (Var_29)), STATE_VARIABLE_State_28_28, STATE_VARIABLE_State_25);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String RawString_23 = ((MR_String) ((MR_hl_field(MR_mktag(3), XML_10, (MR_Integer) 1))));
              void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5))));

              func_10(((MR_Box) (TypeClassInfo_for_writer_62)), Stream_7, ((MR_Box) (RawString_23)), STATE_VARIABLE_State_0_24, STATE_VARIABLE_State_25);
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
mercury__term_to_xml__write_element_end_4_p_0(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Box Stream_5,
  MR_String Element_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  {
    MR_Box STATE_VARIABLE_State_11_11;
    MR_Box STATE_VARIABLE_State_12_12;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_writer_15)), Stream_5, ((MR_Box) ((MR_String) "</")), STATE_VARIABLE_State_0_8, &STATE_VARIABLE_State_11_11);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_writer_15)), Stream_5, ((MR_Box) (Element_6)), STATE_VARIABLE_State_11_11, &STATE_VARIABLE_State_12_12);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_writer_15)), Stream_5, ((MR_Box) ((MR_String) ">")), STATE_VARIABLE_State_12_12, STATE_VARIABLE_State_9);
  }
}

void MR_CALL 
mercury__term_to_xml__write_empty_element_5_p_0(
  MR_Word TypeClassInfo_for_writer_19,
  MR_Box Stream_6,
  MR_String Element_7,
  MR_Word Attributes_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  {
    MR_Box STATE_VARIABLE_State_13_13;
    MR_Box STATE_VARIABLE_State_14_14;
    MR_Box STATE_VARIABLE_State_16_16;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_writer_19)), Stream_6, ((MR_Box) ((MR_String) "<")), STATE_VARIABLE_State_0_10, &STATE_VARIABLE_State_13_13);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_writer_19)), Stream_6, ((MR_Box) (Element_7)), STATE_VARIABLE_State_13_13, &STATE_VARIABLE_State_14_14);
    mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(TypeClassInfo_for_writer_19, Stream_6, Attributes_8, STATE_VARIABLE_State_14_14, &STATE_VARIABLE_State_16_16);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_writer_19)), Stream_6, ((MR_Box) ((MR_String) " />")), STATE_VARIABLE_State_16_16, STATE_VARIABLE_State_11);
  }
}

void MR_CALL 
mercury__term_to_xml__write_element_start_5_p_0(
  MR_Word TypeClassInfo_for_writer_19,
  MR_Box Stream_6,
  MR_String Element_7,
  MR_Word Attributes_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  {
    MR_Box STATE_VARIABLE_State_13_13;
    MR_Box STATE_VARIABLE_State_14_14;
    MR_Box STATE_VARIABLE_State_16_16;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_writer_19)), Stream_6, ((MR_Box) ((MR_String) "<")), STATE_VARIABLE_State_0_10, &STATE_VARIABLE_State_13_13);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_writer_19)), Stream_6, ((MR_Box) (Element_7)), STATE_VARIABLE_State_13_13, &STATE_VARIABLE_State_14_14);
    mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(TypeClassInfo_for_writer_19, Stream_6, Attributes_8, STATE_VARIABLE_State_14_14, &STATE_VARIABLE_State_16_16);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_writer_19)), Stream_6, ((MR_Box) ((MR_String) ">")), STATE_VARIABLE_State_16_16, STATE_VARIABLE_State_11);
  }
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(
  MR_Word Var_16,
  MR_Box Var_17,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word V_10_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_11_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_15_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      mercury__term_to_xml__write_attribute_4_p_0(Var_16, Var_17, V_10_9, HeadVar__3_3, &V_15_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_15_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__term_to_xml__write_attribute_4_p_0(
  MR_Word TypeClassInfo_for_writer_19,
  MR_Box Stream_5,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_State_0_9,
  MR_Box * STATE_VARIABLE_State_10)
{
  {
    MR_String Name_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_String Value_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Box STATE_VARIABLE_State_12_12;
    MR_Box STATE_VARIABLE_State_13_13;
    MR_Box STATE_VARIABLE_State_15_15;
    MR_Box STATE_VARIABLE_State_16_16;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_writer_19)), Stream_5, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_0_9, &STATE_VARIABLE_State_12_12);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_writer_19)), Stream_5, ((MR_Box) (Name_6)), STATE_VARIABLE_State_12_12, &STATE_VARIABLE_State_13_13);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_writer_19)), Stream_5, ((MR_Box) ((MR_String) "=\"")), STATE_VARIABLE_State_13_13, &STATE_VARIABLE_State_15_15);
    mercury__term_to_xml__write_xml_escaped_string_4_p_0(TypeClassInfo_for_writer_19, Stream_5, Value_7, STATE_VARIABLE_State_15_15, &STATE_VARIABLE_State_16_16);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_writer_19)), Stream_5, ((MR_Box) ((MR_String) "\"")), STATE_VARIABLE_State_16_16, STATE_VARIABLE_State_10);
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_string_4_p_0(
  MR_Word TypeClassInfo_for_writer_12,
  MR_Box Stream_5,
  MR_String Str_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  {
    MR_bool succeeded;
    MR_Integer V_8_22;
    MR_Integer V_13_32;
    MR_Integer V_17_33;

{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  Str_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 V_8_22  = Length;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  Str_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 V_17_33  = Length;
}
    succeeded = (V_8_22 < V_17_33);
    if (succeeded)
      V_13_32 = V_8_22;
    else
      V_13_32 = V_17_33;
    mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(TypeClassInfo_for_writer_12, Stream_5, Str_6, (MR_Integer) 0, V_13_32, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
  }
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(
  MR_Word Var_17,
  MR_Box Var_18,
  MR_String V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Box V_14_11,
  MR_Box * V_15_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_9_9 < V_10_10);
    MR_Integer V_12_13;
    MR_Char V_13_14;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  V_8_8 ;
	Index =  V_9_9 ;
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
	 V_12_13  = NextIndex;
	 V_13_14  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (V_12_13 <= V_10_10);
    }
    if (succeeded)
    {
      MR_Box V_16_15;
      MR_Integer next_value_of_V_9_9;
      MR_Box next_value_of_V_14_11;

      mercury__term_to_xml__write_xml_escaped_char_4_p_0(Var_17, Var_18, V_13_14, V_14_11, &V_16_15);
      // direct tailcall eliminated
      ;
      next_value_of_V_9_9 = V_12_13;
      next_value_of_V_14_11 = V_16_15;
      V_9_9 = next_value_of_V_9_9;
      V_14_11 = next_value_of_V_14_11;
      continue;
    }
    else
      *V_15_12 = V_14_11;
    break;
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_char_4_p_0(
  MR_Word TypeClassInfo_for_writer_14,
  MR_Box Stream_5,
  MR_Char Chr_6,
  MR_Box STATE_VARIABLE_State_0_9,
  MR_Box * STATE_VARIABLE_State_10)
{
  {
    MR_bool succeeded;
    MR_String Str_8;

    switch (Chr_6) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Char) 34:
        {
          Str_8 = (MR_String) "&quot;";
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 38:
        {
          Str_8 = (MR_String) "&amp;";
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          Str_8 = (MR_String) "&apos;";
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 60:
        {
          Str_8 = (MR_String) "&lt;";
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 62:
        {
          Str_8 = (MR_String) "&gt;";
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5))));

      func_0(((MR_Box) (TypeClassInfo_for_writer_14)), Stream_5, ((MR_Box) (Str_8)), STATE_VARIABLE_State_0_9, STATE_VARIABLE_State_10);
    }
    else
    {
      MR_String Var_12;
      MR_Word V_5_21;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      {
        V_5_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), V_5_21, 0) = ((MR_Box) (MR_Word) (Chr_6));
        MR_hl_field(MR_mktag(1), V_5_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__string__to_char_list_2_p_1(&Var_12, V_5_21);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5))));
      func_1(((MR_Box) (TypeClassInfo_for_writer_14)), Stream_5, ((MR_Box) (Var_12)), STATE_VARIABLE_State_0_9, STATE_VARIABLE_State_10);
    }
  }
}

static void MR_CALL 
mercury__term_to_xml__maybe_indent_5_p_0(
  MR_Word TypeClassInfo_for_writer_13,
  MR_Box Stream_6,
  MR_Word Format_7,
  MR_Integer Indent_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  switch (Format_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_13, Stream_6, Indent_8, STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_State_11 = STATE_VARIABLE_State_0_10;
      break;
  }
}

void MR_CALL 
mercury__term_to_xml__indent_4_p_0(
  MR_Word TypeClassInfo_for_writer_16,
  MR_Box Stream_5,
  MR_Integer IndentLevel_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (IndentLevel_6 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_State_12_12;
      MR_Integer Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Integer next_value_of_IndentLevel_6;
      MR_Box next_value_of_STATE_VARIABLE_State_0_8;

      func_0(((MR_Box) (TypeClassInfo_for_writer_16)), Stream_5, ((MR_Box) ((MR_String) "\t")), STATE_VARIABLE_State_0_8, &STATE_VARIABLE_State_12_12);
      Var_13 = (MR_Integer) ((MR_Unsigned) IndentLevel_6 - (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_IndentLevel_6 = Var_13;
      next_value_of_STATE_VARIABLE_State_0_8 = STATE_VARIABLE_State_12_12;
      IndentLevel_6 = next_value_of_IndentLevel_6;
      STATE_VARIABLE_State_0_8 = next_value_of_STATE_VARIABLE_State_0_8;
      continue;
    }
    else
      *STATE_VARIABLE_State_9 = STATE_VARIABLE_State_0_8;
    break;
  }
}

static void MR_CALL 
mercury__term_to_xml__maybe_nl_4_p_0(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_State_0_3,
  MR_Box * STATE_VARIABLE_State_4)
{
  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5))));

        func_0(((MR_Box) (TypeClassInfo_for_writer_15)), HeadVar__1_1, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_0_3, STATE_VARIABLE_State_4);
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_State_4 = STATE_VARIABLE_State_0_3;
      break;
  }
}

MR_bool MR_CALL 
mercury__term_to_xml__contains_noformat_xml_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word XML_2;
    MR_Word Rest_3;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      XML_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Rest_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) XML_2)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), XML_2, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
          }
          break;
      }
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__1_1 = Rest_3;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_header_4_p_0(
  MR_Word TypeClassInfo_for_writer_20,
  MR_Box Stream_5,
  MR_Word MaybeEncoding_6,
  MR_Box STATE_VARIABLE_State_0_9,
  MR_Box * STATE_VARIABLE_State_10)
{
  {
    MR_Box STATE_VARIABLE_State_12_12;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5))));

    func_0(((MR_Box) (TypeClassInfo_for_writer_20)), Stream_5, ((MR_Box) ((MR_String) "<\?xml version=\"1.0\"")), STATE_VARIABLE_State_0_9, &STATE_VARIABLE_State_12_12);
    if ((MaybeEncoding_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5))));

      func_1(((MR_Box) (TypeClassInfo_for_writer_20)), Stream_5, ((MR_Box) ((MR_String) "\?>\n")), STATE_VARIABLE_State_12_12, STATE_VARIABLE_State_10);
    }
    else
    {
      MR_String Encoding_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeEncoding_6, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_State_16_16;
      MR_Box STATE_VARIABLE_State_17_17;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_2(((MR_Box) (TypeClassInfo_for_writer_20)), Stream_5, ((MR_Box) ((MR_String) " encoding=\"")), STATE_VARIABLE_State_12_12, &STATE_VARIABLE_State_16_16);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5))));
      func_3(((MR_Box) (TypeClassInfo_for_writer_20)), Stream_5, ((MR_Box) (Encoding_8)), STATE_VARIABLE_State_16_16, &STATE_VARIABLE_State_17_17);
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5))));
      func_4(((MR_Box) (TypeClassInfo_for_writer_20)), Stream_5, ((MR_Box) ((MR_String) "\"\?>\n")), STATE_VARIABLE_State_17_17, STATE_VARIABLE_State_10);
    }
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term_to_xml____Unify____attr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____attr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term_to_xml____Compare____attr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_from_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term_to_xml____Unify____attr_from_source_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____attr_from_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term_to_xml____Compare____attr_from_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term_to_xml____Unify____attr_source_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____attr_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term_to_xml____Compare____attr_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____doctype_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term_to_xml____Unify____doctype_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____doctype_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term_to_xml____Compare____doctype_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____dtd_generation_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term_to_xml____Unify____dtd_generation_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____dtd_generation_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term_to_xml____Compare____dtd_generation_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_mapping_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term_to_xml____Unify____element_mapping_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____element_mapping_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term_to_xml____Compare____element_mapping_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term_to_xml____Unify____element_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____element_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term_to_xml____Compare____element_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_dtd_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term_to_xml____Unify____maybe_dtd_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____maybe_dtd_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term_to_xml____Compare____maybe_dtd_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term_to_xml____Unify____maybe_format_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____maybe_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term_to_xml____Compare____maybe_format_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_functor_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term_to_xml____Unify____maybe_functor_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____maybe_functor_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term_to_xml____Compare____maybe_functor_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_stylesheet_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term_to_xml____Unify____maybe_stylesheet_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____maybe_stylesheet_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term_to_xml____Compare____maybe_stylesheet_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____xml_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term_to_xml____Unify____xml_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_to_xml____Compare____xml_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term_to_xml____Compare____xml_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module term_to_xml.
