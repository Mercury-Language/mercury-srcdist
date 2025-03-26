/*
** Automatically generated from `term_to_xml.m'
** by the Mercury compiler,
** version rotd-2025-03-26
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
#include "counter.mih"
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
#include "pretty_printer.mih"
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
#include "string.builder.mih"
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

static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_ordinal_ordered_attr_source_0[4];

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

static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_ordinal_ordered_maybe_format_0[2];

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
mercury__term_to_xml__foldl_between_loop__ho32_6_p_in__string_0(
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__term_to_xml__mangle_char_3_p_0(
  MR_Char Chr_4,
  MR_Word PrevChrs_5,
  MR_Word * HeadVar__3_3);

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

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_52_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
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
mercury__term_to_xml__write_xml_doc_general_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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

static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_49_95_95_91_53_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Word Var_13,
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__term_to_xml__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_49_95_95_91_53_93_95_48_95_95_49_3_p_0(
  MR_Word Var_12,
  MR_Word Var_13,
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17);

static void MR_CALL 
mercury__term_to_xml__filter_map__ho12_3_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__term_to_xml__LCMC__pred__filter_map__ho12__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16);

static MR_bool MR_CALL 
mercury__term_to_xml__find_field_names_5_p_0(
  MR_Word TypeDesc_6,
  MR_Word HeadVar__2_2,
  MR_String Functor_9,
  MR_Integer Arity_10,
  MR_Word * MaybeFieldNames_11);

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho5_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__term_to_xml__LCMC__func__map__ho5__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13);

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
  MR_Word TypeClassInfo_for_writer_28,
  MR_Box Stream_1,
  MR_Word MakeElement_2,
  MR_Word HeadVar__3_3,
  MR_Word AlreadyDone_4,
  MR_Box STATE_VARIABLE_State_0_5,
  MR_Box * STATE_VARIABLE_State_6);

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho7_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__term_to_xml__LCMC__func__map__ho7__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_18);

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho24_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__term_to_xml__LCMC__func__map__ho24__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13);

static void MR_CALL 
mercury__term_to_xml__write_dtd_entries_10_p_0(
  MR_Word TypeClassInfo_for_writer_78,
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

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_55_44_32_56_93_95_48_4_p_in__list_0(
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
  MR_Word TypeClassInfo_for_writer_33,
  MR_Box Stream_9,
  MR_String Element_10,
  MR_Word MaybeFunctor_11,
  MR_Word MaybeArity_12,
  MR_Word TypeDesc_13,
  MR_Word HeadVar__6_6,
  MR_Box STATE_VARIABLE_State_0_19,
  MR_Box * STATE_VARIABLE_State_20);

static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__term_to_xml__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_95_95_49_3_p_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_14);

static MR_String MR_CALL 
mercury__term_to_xml__dtd_allowed_functors_regex_2_f_0(
  MR_Word MakeElement_4,
  MR_Word TypeDesc_5);

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

static MR_Word MR_CALL 
mercury__term_to_xml__can_generate_dtd_for_types_4_f_0(
  MR_Word MakeElement_1,
  MR_Word HeadVar__2_2,
  MR_Word Done_3,
  MR_Word ElementsSoFar_4);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_57_95_95_91_50_93_95_48_3_p_in__list_0(
  MR_Word Var_11,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__term_to_xml__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_57_95_95_91_50_93_95_48_95_95_49_3_p_0(
  MR_Word Var_11,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17);

static MR_bool MR_CALL 
mercury__term_to_xml__is_primitive_type_2_p_0(
  MR_Word TypeDesc_3,
  MR_String * Element_4);

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
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_48_95_95_91_51_93_95_48_4_p_in__list_0(
  MR_Word Var_16,
  MR_Word Var_17,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__term_to_xml__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_48_95_95_91_51_93_95_48_95_95_49_4_p_0(
  MR_Word Var_16,
  MR_Word Var_17,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_20,
  MR_Word * AddrOfHeadVar__4_21);

static MR_bool MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_49_57_95_95_91_50_93_95_48_5_p_in__list_0(
  MR_Word Var_20,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_bool MR_CALL 
mercury__term_to_xml__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_49_57_95_95_91_50_93_95_48_95_95_49_5_p_0(
  MR_Word Var_20,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_24,
  MR_Word * AddrOfHeadVar__4_25,
  MR_Word * AddrOfHeadVar__5_26);

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho22_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__term_to_xml__LCMC__func__map__ho22__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13);

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho21_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__term_to_xml__LCMC__func__map__ho21__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13);

static MR_Word MR_CALL 
mercury__term_to_xml__map_corresponding__ho18_3_f_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
mercury__term_to_xml__LCMC__func__map_corresponding__ho18__1_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_35);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_16,
  MR_Box Var_17,
  MR_Word Var_18,
  MR_Integer Var_19,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(
  MR_Word Var_16,
  MR_Box Var_17,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_string_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Box Stream_5,
  MR_String Str_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9);

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_108_111_111_112_95_95_104_111_51_49_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(
  MR_Word Var_17,
  MR_Box Var_18,
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_char_4_p_0(
  MR_Word TypeClassInfo_for_writer_13,
  MR_Box Stream_5,
  MR_Char Chr_6,
  MR_Box STATE_VARIABLE_State_0_9,
  MR_Box * STATE_VARIABLE_State_10);

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


static /* final */ const MR_Box mercury__term_to_xml_scalar_common_1[22][2];

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_2[1][6];

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_3[23][3];

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_4[1][4];

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_5[1][5];

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_6[1][7];




static /* final */ const MR_Box mercury__term_to_xml_scalar_common_1[22][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_attr_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[0]))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "field")),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[9])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "type")),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[11])),
    ((MR_Box) (MR_mkword(1, &mercury__term_to_xml_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "arity")),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[13])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[11])),
    ((MR_Box) (MR_mkword(1, &mercury__term_to_xml_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[9])),
    ((MR_Box) (MR_mkword(1, &mercury__term_to_xml_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "functor")),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  18 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[17])),
    ((MR_Box) (MR_mkword(1, &mercury__term_to_xml_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_2[1][6] = {
  /* row   0 */
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
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__can_generate_dtd_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__can_generate_dtd_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_dtd_from_type_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_dtd_from_type_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_doc_general_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_doc_general_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_doc_general_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_doc_general_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_1_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_2_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_2_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_3_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_3_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__get_element_pred_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__get_element_pred_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_4[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_to_xml_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_5[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_to_xml_scalar_common_4[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_6[1][7] = {
  /* row   0 */
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


static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_to_xml__list__pti_list_1__plain_term_to_xml__type_ctor_info_attr_from_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0) }
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_attr_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0 = {
  (MR_String) "attr",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__term_to_xml__term_to_xml__field_types_attr_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_0_0[1] = { &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0 };

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_attr_0[1] = { &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0 };

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_attr_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____attr_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____attr_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "attr",
  { mercury__term_to_xml__term_to_xml__du_name_ordered_attr_0 },
  { mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__term_to_xml__term_to_xml__functor_number_map_attr_0,

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
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__term_to_xml__term_to_xml__field_types_attr_from_source_0_0,
  mercury__term_to_xml__term_to_xml__field_names_attr_from_source_0_0,
  mercury__term_to_xml__term_to_xml__field_locns_attr_from_source_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_from_source_0_0[1] = { &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_from_source_0_0 };

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_from_source_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_from_source_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_attr_from_source_0[1] = { &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_from_source_0_0 };

static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_from_source_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____attr_from_source_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____attr_from_source_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "attr_from_source",
  { mercury__term_to_xml__term_to_xml__du_name_ordered_attr_from_source_0 },
  { mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_from_source_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__term_to_xml__term_to_xml__functor_number_map_attr_from_source_0,

};

static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_0 = {
  (MR_String) "functor",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_1 = {
  (MR_String) "field_name",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_2 = {
  (MR_String) "type_name",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_3 = {
  (MR_String) "arity",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_ordinal_ordered_attr_source_0[4] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term_to_xml____Unify____attr_source_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____attr_source_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "attr_source",
  { mercury__term_to_xml__term_to_xml__enum_name_ordered_attr_source_0 },
  { mercury__term_to_xml__term_to_xml__enum_ordinal_ordered_attr_source_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  mercury__term_to_xml__term_to_xml__functor_number_map_attr_source_0,

};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_0 = {
  (MR_String) "public",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__term_to_xml__term_to_xml__field_types_doctype_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_2 = {
  (MR_String) "system",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__term_to_xml__term_to_xml__field_types_doctype_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_0[1] = { &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_0 };

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_1[1] = { &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_1 };

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_2[1] = { &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_2 };

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_doctype_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____doctype_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____doctype_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "doctype",
  { mercury__term_to_xml__term_to_xml__du_name_ordered_doctype_0 },
  { mercury__term_to_xml__term_to_xml__du_ptag_ordered_doctype_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__term_to_xml__term_to_xml__functor_number_map_doctype_0,

};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_0 = {
  (MR_String) "ok",
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

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_1 = {
  (MR_String) "multiple_functors_for_root",
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

static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1type_desc__type_ctor_info_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0) }
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
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_2,
  mercury__term_to_xml__term_to_xml__field_names_dtd_generation_result_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_3[1] = { (MR_PseudoTypeInfo) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0) };

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_3 = {
  (MR_String) "unsupported_dtd_type",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_4[1] = { (MR_PseudoTypeInfo) (&mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0) };

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_4 = {
  (MR_String) "type_not_ground",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(4),
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

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_1[1] = { &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_2 };

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_2[1] = { &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_3 };

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_3[1] = { &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_4 };

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_dtd_generation_result_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____dtd_generation_result_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____dtd_generation_result_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "dtd_generation_result",
  { mercury__term_to_xml__term_to_xml__du_name_ordered_dtd_generation_result_0 },
  { mercury__term_to_xml__term_to_xml__du_ptag_ordered_dtd_generation_result_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  mercury__term_to_xml__term_to_xml__functor_number_map_dtd_generation_result_0,

};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_0 = {
  (MR_String) "simple",
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

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_1 = {
  (MR_String) "unique",
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

static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0) }
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

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_element_mapping_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__term_to_xml____vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0) };

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_2 = {
  (MR_String) "custom",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
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

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_1[1] = { &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_2 };

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_element_mapping_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____element_mapping_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____element_mapping_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "element_mapping",
  { mercury__term_to_xml__term_to_xml__du_name_ordered_element_mapping_0 },
  { mercury__term_to_xml__term_to_xml__du_ptag_ordered_element_mapping_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__term_to_xml__term_to_xml__functor_number_map_element_mapping_0,

};

const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_element_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term_to_xml____Unify____element_pred_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____element_pred_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "element_pred",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__term_to_xml____vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_0 = {
  (MR_String) "embed_dtd",
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

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_dtd_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__term_to_xml__term_to_xml__type_ctor_info_doctype_0) };

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_1 = {
  (MR_String) "external_dtd",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__term_to_xml__term_to_xml__field_types_maybe_dtd_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_2 = {
  (MR_String) "no_dtd",
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

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_2
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_1[1] = { &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_1 };

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_dtd_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____maybe_dtd_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____maybe_dtd_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "maybe_dtd",
  { mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_dtd_0 },
  { mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_dtd_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__term_to_xml__term_to_xml__functor_number_map_maybe_dtd_0,

};

static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_0 = {
  (MR_String) "format",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_1 = {
  (MR_String) "no_format",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_ordinal_ordered_maybe_format_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term_to_xml____Unify____maybe_format_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____maybe_format_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "maybe_format",
  { mercury__term_to_xml__term_to_xml__enum_name_ordered_maybe_format_0 },
  { mercury__term_to_xml__term_to_xml__enum_ordinal_ordered_maybe_format_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__term_to_xml__term_to_xml__functor_number_map_maybe_format_0,

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
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__term_to_xml__term_to_xml__field_types_maybe_functor_info_0_0,
  mercury__term_to_xml__term_to_xml__field_names_maybe_functor_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_1 = {
  (MR_String) "non_du",
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

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_0[1] = { &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_1 };

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_1[1] = { &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_0 };

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_functor_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____maybe_functor_info_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____maybe_functor_info_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "maybe_functor_info",
  { mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_functor_info_0 },
  { mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_functor_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__term_to_xml__term_to_xml__functor_number_map_maybe_functor_info_0,

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
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__term_to_xml__term_to_xml__field_types_maybe_stylesheet_0_0,
  mercury__term_to_xml__term_to_xml__field_names_maybe_stylesheet_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_1 = {
  (MR_String) "no_stylesheet",
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

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_0[1] = { &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_1 };

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_1[1] = { &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_0 };

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_stylesheet_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____maybe_stylesheet_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____maybe_stylesheet_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "maybe_stylesheet",
  { mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_stylesheet_0 },
  { mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_stylesheet_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__term_to_xml__term_to_xml__functor_number_map_maybe_stylesheet_0,

};

static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__term_to_xml__term_to_xml__type_ctor_info_attr_0) }
};

static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_xml_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0) }
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
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__term_to_xml__term_to_xml__field_types_xml_0_0,
  mercury__term_to_xml__term_to_xml__field_names_xml_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_1 = {
  (MR_String) "data",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__term_to_xml__term_to_xml__field_types_xml_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_2 = {
  (MR_String) "cdata",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__term_to_xml__term_to_xml__field_types_xml_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_3[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_3 = {
  (MR_String) "comment",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  mercury__term_to_xml__term_to_xml__field_types_xml_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_4[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_4 = {
  (MR_String) "entity",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  mercury__term_to_xml__term_to_xml__field_types_xml_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_5[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_5 = {
  (MR_String) "raw",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  mercury__term_to_xml__term_to_xml__field_types_xml_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_0[1] = { &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_0 };

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_1[1] = { &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_1 };

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_2[1] = { &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_2 };

static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_3[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_3,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_4,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_5
};

static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_xml_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(3),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____xml_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____xml_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "xml",
  { mercury__term_to_xml__term_to_xml__du_name_ordered_xml_0 },
  { mercury__term_to_xml__term_to_xml__du_ptag_ordered_xml_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  mercury__term_to_xml__term_to_xml__functor_number_map_xml_0,

};

static const MR_ConstString mercury__term_to_xml__term_to_xml__type_class_id_var_names_xmlable_1[1] = { (MR_String) "T" };

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

void MR_CALL 
mercury__term_to_xml____Compare____xml_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_22 == CastY_23);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
              MR_Word SubResult1_6;
              MR_Integer Var_42;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_42  = Res;
}
              succeeded = (Var_42 < (MR_Integer) 0);
              if (succeeded)
                SubResult1_6 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_42 == (MR_Integer) 0);
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

                mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
                succeeded = (SubResult2_9 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_9;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_12 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_13 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
              MR_Integer Var_40;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_12 ;
	S2 = ArgY1_13 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_40  = Res;
}
              succeeded = (Var_40 < (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_40 == (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 0;
                else
                  *HeadVar__1_1 = (MR_Integer) 2;
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_14 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_15 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
              MR_Integer Var_38;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_14 ;
	S2 = ArgY1_15 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_38  = Res;
}
              succeeded = (Var_38 < (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_38 == (MR_Integer) 0);
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
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_String ArgX1_16 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_String ArgY1_17 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Integer Var_36;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_16 ;
	S2 = ArgY1_17 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_36  = Res;
}
                      succeeded = (Var_36 < (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_36 == (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 0;
                        else
                          *HeadVar__1_1 = (MR_Integer) 2;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
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
              case (MR_Integer) 1:
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
                      MR_String ArgX1_18 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_String ArgY1_19 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Integer Var_34;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_18 ;
	S2 = ArgY1_19 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_34  = Res;
}
                      succeeded = (Var_34 < (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_34 == (MR_Integer) 0);
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
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_String ArgX1_20 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_String ArgY1_21 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Integer Var_32;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_20 ;
	S2 = ArgY1_21 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_32  = Res;
}
                      succeeded = (Var_32 < (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_32 == (MR_Integer) 0);
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
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__term_to_xml____Unify____xml_0_0(
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
        {
          MR_Word TypeInfo_21_21;
          MR_Word TypeInfo_22_22;
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
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
          MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_10 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_11 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_11, ArgY1_12) == 0);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_13 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_13, ArgY1_14) == 0);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_15 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_15, ArgY1_16) == 0);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__term_to_xml____Compare____maybe_stylesheet_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_stylesheet_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_13  = Res;
}
    succeeded = (Var_13 < (MR_Integer) 0);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_13 == (MR_Integer) 0);
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
      MR_Integer Var_15;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_stylesheet_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX2_7 ;
	S2 = ArgY2_8 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_15  = Res;
}
      succeeded = (Var_15 < (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_15 == (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_stylesheet_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4;
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__term_to_xml____Compare____maybe_functor_info_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_functor_info_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_13  = Res;
}
    succeeded = (Var_13 < (MR_Integer) 0);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_13 == (MR_Integer) 0);
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
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 == ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_functor_info_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4;
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__term_to_xml____Compare____maybe_format_0_0(
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
mercury__term_to_xml____Unify____maybe_format_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__term_to_xml____Compare____maybe_dtd_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
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
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              mercury__term_to_xml____Compare____doctype_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_dtd_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__term_to_xml____Unify____doctype_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__term_to_xml____Compare____element_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

void MR_CALL 
mercury__term_to_xml____Compare____element_mapping_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
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
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_to_xml_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_mapping_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__term_to_xml____Compare____dtd_generation_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_13 == CastY_14);
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
              case (MR_Integer) 2:
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
              case (MR_Integer) 2:
              case (MR_Integer) 3:
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
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word SubResult1_6;
              MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____dtd_generation_result_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_19  = Res;
}
              succeeded = (Var_19 < (MR_Integer) 0);
              if (succeeded)
                SubResult1_6 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_19 == (MR_Integer) 0);
                if (succeeded)
                  SubResult1_6 = (MR_Integer) 0;
                else
                  SubResult1_6 = (MR_Integer) 2;
              }
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

              mercury__type_desc____Compare____type_desc_0_0(HeadVar__1_1, ArgX1_9, ArgY1_10);
            }
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
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));

              mercury__type_desc____Compare____pseudo_type_desc_0_0(HeadVar__1_1, ArgX1_11, ArgY1_12);
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__term_to_xml____Unify____dtd_generation_result_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_12 == CastX_11);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_15_15;
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            if (succeeded)
            {
              TypeInfo_15_15 = (MR_Word) (&mercury__term_to_xml_scalar_common_1[4]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__type_desc____Unify____type_desc_0_0(ArgX1_7, ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__type_desc____Unify____pseudo_type_desc_0_0(ArgX1_9, ArgY1_10);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__term_to_xml____Compare____doctype_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
              MR_Integer Var_25;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_25  = Res;
}
              succeeded = (Var_25 < (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_25 == (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 0;
                else
                  *HeadVar__1_1 = (MR_Integer) 2;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
              MR_String ArgX2_9 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
              MR_String ArgY2_10 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word SubResult1_8;
              MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_6 ;
	S2 = ArgY1_7 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_21  = Res;
}
              succeeded = (Var_21 < (MR_Integer) 0);
              if (succeeded)
                SubResult1_8 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_21 == (MR_Integer) 0);
                if (succeeded)
                  SubResult1_8 = (MR_Integer) 0;
                else
                  SubResult1_8 = (MR_Integer) 2;
              }
              succeeded = (SubResult1_8 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
              {
                MR_Integer Var_23;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX2_9 ;
	S2 = ArgY2_10 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_23  = Res;
}
                succeeded = (Var_23 < (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_23 == (MR_Integer) 0);
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
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_11 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_12 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
              MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_11 ;
	S2 = ArgY1_12 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_19  = Res;
}
              succeeded = (Var_19 < (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_19 == (MR_Integer) 0);
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

MR_bool MR_CALL 
mercury__term_to_xml____Unify____doctype_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_6;
          MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_String ArgY2_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
            if (succeeded)
              succeeded = (strcmp(ArgX2_7, ArgY2_8) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__term_to_xml____Compare____attr_source_0_0(
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
mercury__term_to_xml____Unify____attr_source_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__term_to_xml____Compare____attr_from_source_0_0(
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word SubResult1_6;
    MR_Integer Var_15;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_from_source_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_15  = Res;
}
    succeeded = (Var_15 < (MR_Integer) 0);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_15 == (MR_Integer) 0);
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

MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_from_source_0_0(
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
mercury__term_to_xml____Compare____attr_0_0(
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_13  = Res;
}
    succeeded = (Var_13 < (MR_Integer) 0);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_13 == (MR_Integer) 0);
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
      MR_Integer Var_15;

{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX2_7 ;
	S2 = ArgY2_8 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_15  = Res;
}
      succeeded = (Var_15 < (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_15 == (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_0_0(
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__term_to_xml__to_xml_1_f_0(
  MR_Word TypeClassInfo_for_xmlable_3,
  MR_Box HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_xmlable_3, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_xmlable_3)), HeadVar__1_1);
  HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__term_to_xml__is_maybe_yes_2_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1,
  MR_Box * X_3)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
    *X_3 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
  return succeeded;
}

MR_Word MR_CALL 
mercury__term_to_xml__make_attrs_from_sources_5_f_0(
  MR_Word MaybeFunctor_7,
  MR_Word MaybeArity_8,
  MR_Word TypeDesc_9,
  MR_Word MaybeField_10,
  MR_Word AttrFromSources_11)
{
  MR_Word Attrs_12;
  MR_Word MaybeAttrs_13;

  MaybeAttrs_13 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_49_95_95_91_53_93_95_48_2_f_in__list_0(MaybeFunctor_7, MaybeArity_8, TypeDesc_9, MaybeField_10, AttrFromSources_11);
  mercury__term_to_xml__filter_map__ho12_3_p_in__list_0(MaybeAttrs_13, &Attrs_12);
  return Attrs_12;
}

void MR_CALL 
mercury__term_to_xml__write_element_end_4_p_0(
  MR_Word TypeClassInfo_for_writer_14,
  MR_Box Stream_5,
  MR_String Element_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  MR_Box STATE_VARIABLE_State_11_11;
  MR_Box STATE_VARIABLE_State_12_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_writer_14)), Stream_5, ((MR_Box) ((MR_String) "</")), STATE_VARIABLE_State_0_8, &STATE_VARIABLE_State_11_11);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5))));
  func_1(((MR_Box) (TypeClassInfo_for_writer_14)), Stream_5, ((MR_Box) (Element_6)), STATE_VARIABLE_State_11_11, &STATE_VARIABLE_State_12_12);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) (TypeClassInfo_for_writer_14)), Stream_5, ((MR_Box) ((MR_String) ">")), STATE_VARIABLE_State_12_12, STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_include_details_cc_8_p_0(
  MR_Word TypeClassInfo_for_writer_19,
  MR_Box Stream_9,
  MR_Word MakeElement_10,
  MR_Integer IndentLevel_11,
  MR_Word Univ_12,
  MR_Word MaybeFieldNames0_13,
  MR_Word * MaybeFieldNames_14,
  MR_Box STATE_VARIABLE_State_0_16,
  MR_Box * STATE_VARIABLE_State_17)
{
  mercury__term_to_xml__write_xml_element_univ_9_p_2(TypeClassInfo_for_writer_19, Stream_9, (MR_Integer) 2, MakeElement_10, IndentLevel_11, Univ_12, MaybeFieldNames0_13, MaybeFieldNames_14, STATE_VARIABLE_State_0_16, STATE_VARIABLE_State_17);
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_canonicalize_8_p_0(
  MR_Word TypeClassInfo_for_writer_19,
  MR_Box Stream_9,
  MR_Word MakeElement_10,
  MR_Integer IndentLevel_11,
  MR_Word Univ_12,
  MR_Word MaybeFieldNames0_13,
  MR_Word * MaybeFieldNames_14,
  MR_Box STATE_VARIABLE_State_0_16,
  MR_Box * STATE_VARIABLE_State_17)
{
  mercury__term_to_xml__write_xml_element_univ_9_p_1(TypeClassInfo_for_writer_19, Stream_9, (MR_Integer) 1, MakeElement_10, IndentLevel_11, Univ_12, MaybeFieldNames0_13, MaybeFieldNames_14, STATE_VARIABLE_State_0_16, STATE_VARIABLE_State_17);
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_do_not_allow_8_p_0(
  MR_Word TypeClassInfo_for_writer_19,
  MR_Box Stream_9,
  MR_Word MakeElement_10,
  MR_Integer IndentLevel_11,
  MR_Word Univ_12,
  MR_Word MaybeFieldNames0_13,
  MR_Word * MaybeFieldNames_14,
  MR_Box STATE_VARIABLE_State_0_16,
  MR_Box * STATE_VARIABLE_State_17)
{
  mercury__term_to_xml__write_xml_element_univ_9_p_0(TypeClassInfo_for_writer_19, Stream_9, (MR_Integer) 0, MakeElement_10, IndentLevel_11, Univ_12, MaybeFieldNames0_13, MaybeFieldNames_14, STATE_VARIABLE_State_0_16, STATE_VARIABLE_State_17);
}

void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_2(
  MR_Word TypeClassInfo_for_writer_26,
  MR_Box Stream_9,
  MR_Word NonCanon_10,
  MR_Word MakeElement_11,
  MR_Integer IndentLevel_12,
  MR_Word Args_13,
  MR_Word MaybeFieldNames_14,
  MR_Box STATE_VARIABLE_State_0_19,
  MR_Box * STATE_VARIABLE_State_20)
{
  mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_p_2(TypeClassInfo_for_writer_26, Stream_9, MakeElement_11, IndentLevel_12, Args_13, MaybeFieldNames_14, STATE_VARIABLE_State_0_19, STATE_VARIABLE_State_20);
}

void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_p_2(
  MR_Word TypeClassInfo_for_writer_26,
  MR_Box Stream_9,
  MR_Word MakeElement_11,
  MR_Integer IndentLevel_12,
  MR_Word Args_13,
  MR_Word MaybeFieldNames_14,
  MR_Box STATE_VARIABLE_State_0_19,
  MR_Box * STATE_VARIABLE_State_20)
{
  MR_Word Var_18;

  mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_52_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(TypeClassInfo_for_writer_26, Stream_9, MakeElement_11, IndentLevel_12, Args_13, MaybeFieldNames_14, &Var_18, STATE_VARIABLE_State_0_19, STATE_VARIABLE_State_20);
}

void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_1(
  MR_Word TypeClassInfo_for_writer_26,
  MR_Box Stream_9,
  MR_Word NonCanon_10,
  MR_Word MakeElement_11,
  MR_Integer IndentLevel_12,
  MR_Word Args_13,
  MR_Word MaybeFieldNames_14,
  MR_Box STATE_VARIABLE_State_0_19,
  MR_Box * STATE_VARIABLE_State_20)
{
  mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_p_1(TypeClassInfo_for_writer_26, Stream_9, MakeElement_11, IndentLevel_12, Args_13, MaybeFieldNames_14, STATE_VARIABLE_State_0_19, STATE_VARIABLE_State_20);
}

void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_p_1(
  MR_Word TypeClassInfo_for_writer_26,
  MR_Box Stream_9,
  MR_Word MakeElement_11,
  MR_Integer IndentLevel_12,
  MR_Word Args_13,
  MR_Word MaybeFieldNames_14,
  MR_Box STATE_VARIABLE_State_0_19,
  MR_Box * STATE_VARIABLE_State_20)
{
  MR_Word Var_17;

  mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(TypeClassInfo_for_writer_26, Stream_9, MakeElement_11, IndentLevel_12, Args_13, MaybeFieldNames_14, &Var_17, STATE_VARIABLE_State_0_19, STATE_VARIABLE_State_20);
}

void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_0(
  MR_Word TypeClassInfo_for_writer_26,
  MR_Box Stream_9,
  MR_Word NonCanon_10,
  MR_Word MakeElement_11,
  MR_Integer IndentLevel_12,
  MR_Word Args_13,
  MR_Word MaybeFieldNames_14,
  MR_Box STATE_VARIABLE_State_0_19,
  MR_Box * STATE_VARIABLE_State_20)
{
  mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_p_0(TypeClassInfo_for_writer_26, Stream_9, MakeElement_11, IndentLevel_12, Args_13, MaybeFieldNames_14, STATE_VARIABLE_State_0_19, STATE_VARIABLE_State_20);
}

void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_p_0(
  MR_Word TypeClassInfo_for_writer_26,
  MR_Box Stream_9,
  MR_Word MakeElement_11,
  MR_Integer IndentLevel_12,
  MR_Word Args_13,
  MR_Word MaybeFieldNames_14,
  MR_Box STATE_VARIABLE_State_0_19,
  MR_Box * STATE_VARIABLE_State_20)
{
  MR_Word Var_16;

  mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(TypeClassInfo_for_writer_26, Stream_9, MakeElement_11, IndentLevel_12, Args_13, MaybeFieldNames_14, &Var_16, STATE_VARIABLE_State_0_19, STATE_VARIABLE_State_20);
}

MR_bool MR_CALL 
mercury__term_to_xml__is_discriminated_union_2_p_0(
  MR_Word TypeDesc_3,
  MR_Integer * NumFunctors_4)
{
  MR_bool succeeded;
  MR_Integer Var_5;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_discriminated_union_2_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo = TypeDesc_3 ;
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

MR_Word MR_CALL 
mercury__term_to_xml__can_format_siblings_1_f_0(
  MR_Word HeadVar__1_1)
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
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
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

static void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv3_Element_7;
  MR_Word conv2_AttrFromSources_8;

  mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Element_7, &conv2_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv3_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv2_AttrFromSources_8));
}

static void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv1_Element_7;
  MR_Word conv0_AttrFromSources_8;

  mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Element_7, &conv0_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv1_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv0_AttrFromSources_8));
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
      *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
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
  MR_bool succeeded;

  if ((MaybeFunctorInfo_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String PrimitiveElement_11;

    succeeded = mercury__term_to_xml__is_primitive_type_2_p_0(TypeDesc_5, &PrimitiveElement_11);
    if (succeeded)
    {
      *Element_7 = PrimitiveElement_11;
      *AttrFromSources_8 = (MR_Word) (MR_mkword(1, &mercury__term_to_xml_scalar_common_1[12]));
    }
    else
    {
      MR_Word PseudoTypeDesc_14;
      MR_Word TypeCtor_15;
      MR_Word ArgPseudoTypes_16;
      MR_Word Var_17;
      MR_String Var_18;
      MR_String Var_19;
      MR_String Var_20;
      MR_Integer Var_21;
      MR_String Var_22;
      MR_Integer Var_23;

{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc = TypeDesc_5 ;
		{

    PseudoTypeDesc = TypeDesc;


		;}
#undef MR_PROC_LABEL
	PseudoTypeDesc_14  = PseudoTypeDesc;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc = PseudoTypeDesc_14 ;
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
	TypeCtor_15  = TypeCtorDesc;
	ArgPseudoTypes_16  = ArgPseudoTypeInfos;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
        succeeded = (ArgPseudoTypes_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_17 = ((MR_Word) ((MR_hl_field(1, ArgPseudoTypes_16, (MR_Integer) 1))));
          succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtor_15 ;
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
	Var_20  = TypeCtorModuleName;
	Var_18  = TypeCtorName;
	Var_21  = TypeCtorArity;
}
            succeeded = (strcmp(Var_18, (MR_String) "array") == 0);
            if (succeeded)
            {
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtor_15 ;
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
	Var_19  = TypeCtorModuleName;
	Var_22  = TypeCtorName;
	Var_23  = TypeCtorArity;
}
              succeeded = (strcmp(Var_19, (MR_String) "array") == 0);
            }
          }
        }
      }
      if (succeeded)
      {
        *Element_7 = (MR_String) "Array";
        *AttrFromSources_8 = (MR_Word) (MR_mkword(1, &mercury__term_to_xml_scalar_common_1[18]));
      }
      else
      {
        *Element_7 = (MR_String) "Unknown";
        *AttrFromSources_8 = (MR_Word) (MR_mkword(1, &mercury__term_to_xml_scalar_common_1[18]));
      }
    }
  }
  else
  {
    MR_String Functor_9 = ((MR_String) ((MR_hl_field(1, MaybeFunctorInfo_6, (MR_Integer) 0))));
    MR_String ReservedElement_13;

    if ((strcmp(Functor_9, (MR_String) "[]") == 0))
    {
      ReservedElement_13 = (MR_String) "Nil";
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Functor_9, (MR_String) "{}") == 0))
    {
      ReservedElement_13 = (MR_String) "Tuple";
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Functor_9, (MR_String) "[|]") == 0))
    {
      ReservedElement_13 = (MR_String) "List";
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
      *Element_7 = ReservedElement_13;
    else
      *Element_7 = mercury__term_to_xml__mangle_1_f_0(Functor_9);
    *AttrFromSources_8 = (MR_Word) (MR_mkword(1, &mercury__term_to_xml_scalar_common_1[18]));
  }
}

static void MR_CALL 
mercury__term_to_xml__make_unique_element_4_p_0(
  MR_Word TypeDesc_5,
  MR_Word MaybeFunctorInfo_6,
  MR_String * Element_7,
  MR_Word * AttrFromSources_8)
{
  MR_bool succeeded;

  if ((MaybeFunctorInfo_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String PrimitiveElement_12;

    succeeded = mercury__term_to_xml__is_primitive_type_2_p_0(TypeDesc_5, &PrimitiveElement_12);
    if (succeeded)
    {
      *Element_7 = PrimitiveElement_12;
      *AttrFromSources_8 = (MR_Word) (MR_mkword(1, &mercury__term_to_xml_scalar_common_1[12]));
    }
    else
    {
      MR_Word PseudoTypeDesc_37;
      MR_Word TypeCtor_38;
      MR_Word ArgPseudoTypes_39;
      MR_Word Var_40;
      MR_String Var_41;
      MR_String Var_42;
      MR_String Var_43;
      MR_Integer Var_44;
      MR_String Var_45;
      MR_Integer Var_46;

{
#define MR_PROC_LABEL mercury__term_to_xml__make_unique_element_4_p_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc = TypeDesc_5 ;
		{

    PseudoTypeDesc = TypeDesc;


		;}
#undef MR_PROC_LABEL
	PseudoTypeDesc_37  = PseudoTypeDesc;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__make_unique_element_4_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc = PseudoTypeDesc_37 ;
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
	TypeCtor_38  = TypeCtorDesc;
	ArgPseudoTypes_39  = ArgPseudoTypeInfos;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
        succeeded = (ArgPseudoTypes_39 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_40 = ((MR_Word) ((MR_hl_field(1, ArgPseudoTypes_39, (MR_Integer) 1))));
          succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__term_to_xml__make_unique_element_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtor_38 ;
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
	Var_43  = TypeCtorModuleName;
	Var_41  = TypeCtorName;
	Var_44  = TypeCtorArity;
}
            succeeded = (strcmp(Var_41, (MR_String) "array") == 0);
            if (succeeded)
            {
{
#define MR_PROC_LABEL mercury__term_to_xml__make_unique_element_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtor_38 ;
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
	Var_42  = TypeCtorModuleName;
	Var_45  = TypeCtorName;
	Var_46  = TypeCtorArity;
}
              succeeded = (strcmp(Var_42, (MR_String) "array") == 0);
            }
          }
        }
      }
      if (succeeded)
      {
        MR_String Var_31;
        MR_String Var_33;
        MR_String Var_34;

        Var_34 = mercury__type_desc__type_name_1_f_0(TypeDesc_5);
        Var_33 = mercury__term_to_xml__mangle_1_f_0(Var_34);
        mercury__string__append_3_p_2((MR_String) "--", Var_33, &Var_31);
        mercury__string__append_3_p_2((MR_String) "Array", Var_31, Element_7);
        *AttrFromSources_8 = (MR_Word) (MR_mkword(1, &mercury__term_to_xml_scalar_common_1[18]));
      }
      else
      {
        MR_String Var_35;

        Var_35 = mercury__type_desc__type_name_1_f_0(TypeDesc_5);
        *Element_7 = mercury__term_to_xml__mangle_1_f_0(Var_35);
        *AttrFromSources_8 = (MR_Word) (MR_mkword(1, &mercury__term_to_xml_scalar_common_1[18]));
      }
    }
  }
  else
  {
    MR_String Functor_9 = ((MR_String) ((MR_hl_field(1, MaybeFunctorInfo_6, (MR_Integer) 0))));
    MR_Integer Arity_10 = ((MR_Integer) ((MR_hl_field(1, MaybeFunctorInfo_6, (MR_Integer) 1))));
    MR_String MangledElement_11;
    MR_String Var_14;
    MR_String Var_16;
    MR_String Var_17;
    MR_String Var_18;
    MR_String Var_20;
    MR_String Var_21;
    MR_String ReservedElement_36;

    if ((strcmp(Functor_9, (MR_String) "[]") == 0))
    {
      ReservedElement_36 = (MR_String) "Nil";
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Functor_9, (MR_String) "{}") == 0))
    {
      ReservedElement_36 = (MR_String) "Tuple";
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Functor_9, (MR_String) "[|]") == 0))
    {
      ReservedElement_36 = (MR_String) "List";
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
      MangledElement_11 = ReservedElement_36;
    else
      MangledElement_11 = mercury__term_to_xml__mangle_1_f_0(Functor_9);
{
#define MR_PROC_LABEL mercury__term_to_xml__make_unique_element_4_p_0

	MR_Integer I;
	MR_String S;

	I = Arity_10 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_17  = S;
}
    Var_21 = mercury__type_desc__type_name_1_f_0(TypeDesc_5);
    Var_20 = mercury__term_to_xml__mangle_1_f_0(Var_21);
    mercury__string__append_3_p_2((MR_String) "--", Var_20, &Var_18);
    mercury__string__append_3_p_2(Var_17, Var_18, &Var_16);
    mercury__string__append_3_p_2((MR_String) "--", Var_16, &Var_14);
    mercury__string__append_3_p_2(MangledElement_11, Var_14, Element_7);
    *AttrFromSources_8 = (MR_Word) (MR_mkword(1, &mercury__term_to_xml_scalar_common_1[18]));
  }
}

static MR_String MR_CALL 
mercury__term_to_xml__mangle_1_f_0(
  MR_String Functor_3)
{
  MR_bool succeeded;
  MR_String Element_4;
  MR_String Head_5;
  MR_String Tail_6;
  MR_String First_8;
  MR_String Rest_9;
  MR_Word ElementChrs_10;
  MR_String Var_14;
  MR_Integer Var_20;
  MR_Integer Var_26;
  MR_Integer Var_27;
  MR_String LowerHead_7;

  mercury__string__split_4_p_0(Functor_3, (MR_Integer) 1, &Head_5, &Tail_6);
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = Head_5 ;
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
    mercury__string__to_lower_2_p_0(Head_5, &LowerHead_7);
    succeeded = (strcmp(Head_5, LowerHead_7) == 0);
  }
  if (succeeded)
  {
    First_8 = Head_5;
    Rest_9 = Tail_6;
  }
  else
  {
    First_8 = (MR_String) "Tag_";
    mercury__string__append_3_p_2(Head_5, Tail_6, &Rest_9);
  }
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = Rest_9 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_20  = Length;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = Rest_9 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_27  = Length;
}
  succeeded = (Var_20 < Var_27);
  if (succeeded)
    Var_26 = Var_20;
  else
    Var_26 = Var_27;
  mercury__term_to_xml__foldl_between_loop__ho32_6_p_in__string_0(Rest_9, (MR_Integer) 0, Var_26, (MR_Word) ((MR_Unsigned) 0U), &ElementChrs_10);
  mercury__string__from_char_list_2_p_0(ElementChrs_10, &Var_14);
  mercury__string__append_3_p_2(First_8, Var_14, &Element_4);
  return Element_4;
}

static void MR_CALL 
mercury__term_to_xml__foldl_between_loop__ho32_6_p_in__string_0(
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 < HeadVar__4_10);
    MR_Integer Var_13;
    MR_Char Var_14;
    MR_Integer Var_17;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__term_to_xml__foldl_between_loop__ho32_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_8 ;
	Index = HeadVar__3_9 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_13  = NextIndex;
	Var_14  = Ch;
	Var_17  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (Var_13 <= HeadVar__4_10);
    }
    if (succeeded)
    {
      MR_Word Var_15;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Word next_value_of_HeadVar__5_11;

      mercury__term_to_xml__mangle_char_3_p_0(Var_14, HeadVar__5_11, &Var_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_13;
      next_value_of_HeadVar__5_11 = Var_15;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    else
      *HeadVar__6_12 = HeadVar__5_11;
    break;
  }
}

static void MR_CALL 
mercury__term_to_xml__mangle_char_3_p_0(
  MR_Char Chr_4,
  MR_Word PrevChrs_5,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word Chrs_6;

  succeeded = mercury__char__is_alnum_or_underscore_1_p_0(Chr_4);
  if (succeeded)
    {
      Chrs_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Chrs_6, 0) = ((MR_Box) (MR_Word) (Chr_4));
      MR_hl_field(1, Chrs_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  else
  {
    MR_Word Var_9;
    MR_String Var_10;
    MR_Integer Var_11;
    MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_char_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Chr_4 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_11  = Int;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_char_3_p_0

	MR_Integer I;
	MR_String S;

	I = Var_11 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_10  = S;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_char_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_10 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_13  = Length;
}
    mercury__string__do_to_char_list_loop_4_p_0(Var_10, Var_13, (MR_Word) ((MR_Unsigned) 0U), &Var_9);
    {
      Chrs_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Chrs_6, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
      MR_hl_field(1, Chrs_6, 1) = ((MR_Box) (Var_9));
    }
  }
  mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), PrevChrs_5, Chrs_6, HeadVar__3_3);
}

void MR_CALL 
mercury__term_to_xml__write_dtd_6_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_writer_15,
  MR_Box Stream_7,
  MR_Word ElementMapping_9,
  MR_Word * DTDResult_10,
  MR_Box STATE_VARIABLE_State_0_13,
  MR_Box * STATE_VARIABLE_State_14)
{
  MR_Word TypeDesc_12;

{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_16 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
  mercury__term_to_xml__write_dtd_from_type_6_p_0(TypeClassInfo_for_writer_15, Stream_7, TypeDesc_12, ElementMapping_9, DTDResult_10, STATE_VARIABLE_State_0_13, STATE_VARIABLE_State_14);
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv3_Element_7;
  MR_Word conv2_AttrFromSources_8;

  mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Element_7, &conv2_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv3_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv2_AttrFromSources_8));
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv1_Element_7;
  MR_Word conv0_AttrFromSources_8;

  mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Element_7, &conv0_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv1_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv0_AttrFromSources_8));
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeClassInfo_for_writer_20,
  MR_Box Stream_8,
  MR_Word NonCanon_9,
  MR_Word ElementMapping_10,
  MR_Integer IndentLevel_11,
  MR_Box Term_12,
  MR_Box STATE_VARIABLE_State_0_17,
  MR_Box * STATE_VARIABLE_State_18)
{
  MR_Word Univ_14;
  MR_Word MakeElement_15;
  MR_Word Var_16;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_21, Term_12, &Univ_14);
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
      MakeElement_15 = ((MR_Word) ((MR_hl_field(1, ElementMapping_10, (MR_Integer) 0))));
      break;
  }
  mercury__term_to_xml__write_xml_element_univ_9_p_3(TypeClassInfo_for_writer_20, Stream_8, NonCanon_9, MakeElement_15, IndentLevel_11, Univ_14, (MR_Word) ((MR_Unsigned) 0U), &Var_16, STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_3(
  MR_Word TypeClassInfo_for_writer_50,
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
  MR_bool succeeded;
  MR_Word TypeInfo_51_51;
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
  MR_Integer Var_53;
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
    MaybeFieldName_18 = ((MR_Word) ((MR_hl_field(1, MaybeFieldNames_15, (MR_Integer) 0))));
    *RemainingMaybeFieldNames_16 = ((MR_Word) ((MR_hl_field(1, MaybeFieldNames_15, (MR_Integer) 1))));
  }
  TypeInfo_51_51 = ((MR_Word) ((MR_hl_field(0, Univ_14, (MR_Integer) 0))));
  Term_19 = (MR_hl_field(0, Univ_14, (MR_Integer) 1));
  mercury__deconstruct__deconstruct_5_p_3(TypeInfo_51_51, Term_19, NonCanon_11, &Functor_20, &Arity_21, &Args_22);
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_51_51 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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

	TypeInfo = TypeDesc_23 ;
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
    Var_53 = (MR_Integer) -1;
    succeeded = (Var_24 > Var_53);
  }
  if (succeeded)
    {
      Request_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Request_25, 0) = ((MR_Box) (Functor_20));
      MR_hl_field(1, Request_25, 1) = ((MR_Box) (Arity_21));
    }
  else
    Request_25 = (MR_Word) ((MR_Unsigned) 0U);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, MakeElement_12, (MR_Integer) 1))));
  func_0(((MR_Box) (MakeElement_12)), ((MR_Box) (TypeDesc_23)), ((MR_Box) (Request_25)), &conv2_Element_26, &conv1_AttrFromSources_27);
  Element_26 = ((MR_String) (conv2_Element_26));
  AttrFromSources_27 = ((MR_Word) (conv1_AttrFromSources_27));
  succeeded = mercury__term_to_xml__primitive_value_2_p_0(Univ_14, &PrimValue_28);
  if (succeeded)
  {
    MR_Box STATE_VARIABLE_State_34_34;

    mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_50, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_34_34);
    mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(TypeClassInfo_for_writer_50, Stream_10, Element_26, AttrFromSources_27, PrimValue_28, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_34_34, STATE_VARIABLE_State_33);
  }
  else
  if ((Args_22 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Box STATE_VARIABLE_State_36_36;
    MR_Word Var_37;
    MR_Word Var_38;

    mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_50, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_36_36);
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Functor_20));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Arity_21));
    }
    mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(TypeClassInfo_for_writer_50, Stream_10, Element_26, AttrFromSources_27, Var_37, Var_38, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_36_36, STATE_VARIABLE_State_33);
  }
  else
  {
    MR_Word ChildMaybeFieldNames_31;
    MR_Box STATE_VARIABLE_State_40_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Box STATE_VARIABLE_State_43_43;
    MR_Integer Var_44;
    MR_Box STATE_VARIABLE_State_45_45;
    MR_Box STATE_VARIABLE_State_47_47;
    MR_Box STATE_VARIABLE_State_48_48;
    MR_Box STATE_VARIABLE_State_11_55;
    MR_Box STATE_VARIABLE_State_12_56;
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(TypeDesc_23, Functor_20, Arity_21);
    mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_50, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_40_40);
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Functor_20));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (Arity_21));
    }
    mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(TypeClassInfo_for_writer_50, Stream_10, Element_26, AttrFromSources_27, Var_41, Var_42, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_40_40, &STATE_VARIABLE_State_43_43);
    Var_44 = (MR_Integer) ((MR_Unsigned) IndentLevel_13 + (MR_Unsigned) 1);
    mercury__term_to_xml__write_child_xml_elements_8_p_3(TypeClassInfo_for_writer_50, Stream_10, NonCanon_11, MakeElement_12, Var_44, Args_22, ChildMaybeFieldNames_31, STATE_VARIABLE_State_43_43, &STATE_VARIABLE_State_45_45);
    mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_50, Stream_10, IndentLevel_13, STATE_VARIABLE_State_45_45, &STATE_VARIABLE_State_47_47);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_writer_50)), Stream_10, ((MR_Box) ((MR_String) "</")), STATE_VARIABLE_State_47_47, &STATE_VARIABLE_State_11_55);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_writer_50)), Stream_10, ((MR_Box) (Element_26)), STATE_VARIABLE_State_11_55, &STATE_VARIABLE_State_12_56);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) (TypeClassInfo_for_writer_50)), Stream_10, ((MR_Box) ((MR_String) ">")), STATE_VARIABLE_State_12_56, &STATE_VARIABLE_State_48_48);
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_6(((MR_Box) (TypeClassInfo_for_writer_50)), Stream_10, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_48_48, STATE_VARIABLE_State_33);
  }
}

void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_3(
  MR_Word TypeClassInfo_for_writer_26,
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

        mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(TypeClassInfo_for_writer_26, Stream_9, MakeElement_11, IndentLevel_12, Args_13, MaybeFieldNames_14, &Var_17, STATE_VARIABLE_State_0_19, STATE_VARIABLE_State_20);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_16;

        mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(TypeClassInfo_for_writer_26, Stream_9, MakeElement_11, IndentLevel_12, Args_13, MaybeFieldNames_14, &Var_16, STATE_VARIABLE_State_0_19, STATE_VARIABLE_State_20);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_18;

        mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_52_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(TypeClassInfo_for_writer_26, Stream_9, MakeElement_11, IndentLevel_12, Args_13, MaybeFieldNames_14, &Var_18, STATE_VARIABLE_State_0_19, STATE_VARIABLE_State_20);
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
  MR_Box closure = closure_arg;
  MR_String conv3_Element_7;
  MR_Word conv2_AttrFromSources_8;

  mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Element_7, &conv2_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv3_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv2_AttrFromSources_8));
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv1_Element_7;
  MR_Word conv0_AttrFromSources_8;

  mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Element_7, &conv0_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv1_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv0_AttrFromSources_8));
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeClassInfo_for_writer_20,
  MR_Box Stream_8,
  MR_Word NonCanon_9,
  MR_Word ElementMapping_10,
  MR_Integer IndentLevel_11,
  MR_Box Term_12,
  MR_Box STATE_VARIABLE_State_0_17,
  MR_Box * STATE_VARIABLE_State_18)
{
  MR_Word Univ_14;
  MR_Word MakeElement_15;
  MR_Word Var_16;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_21, Term_12, &Univ_14);
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
      MakeElement_15 = ((MR_Word) ((MR_hl_field(1, ElementMapping_10, (MR_Integer) 0))));
      break;
  }
  mercury__term_to_xml__write_xml_element_univ_9_p_2(TypeClassInfo_for_writer_20, Stream_8, NonCanon_9, MakeElement_15, IndentLevel_11, Univ_14, (MR_Word) ((MR_Unsigned) 0U), &Var_16, STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv3_Element_7;
  MR_Word conv2_AttrFromSources_8;

  mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Element_7, &conv2_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv3_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv2_AttrFromSources_8));
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv1_Element_7;
  MR_Word conv0_AttrFromSources_8;

  mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Element_7, &conv0_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv1_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv0_AttrFromSources_8));
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeClassInfo_for_writer_20,
  MR_Box Stream_8,
  MR_Word NonCanon_9,
  MR_Word ElementMapping_10,
  MR_Integer IndentLevel_11,
  MR_Box Term_12,
  MR_Box STATE_VARIABLE_State_0_17,
  MR_Box * STATE_VARIABLE_State_18)
{
  MR_Word Univ_14;
  MR_Word MakeElement_15;
  MR_Word Var_16;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_21, Term_12, &Univ_14);
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
      MakeElement_15 = ((MR_Word) ((MR_hl_field(1, ElementMapping_10, (MR_Integer) 0))));
      break;
  }
  mercury__term_to_xml__write_xml_element_univ_9_p_1(TypeClassInfo_for_writer_20, Stream_8, NonCanon_9, MakeElement_15, IndentLevel_11, Univ_14, (MR_Word) ((MR_Unsigned) 0U), &Var_16, STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv3_Element_7;
  MR_Word conv2_AttrFromSources_8;

  mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Element_7, &conv2_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv3_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv2_AttrFromSources_8));
}

static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv1_Element_7;
  MR_Word conv0_AttrFromSources_8;

  mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Element_7, &conv0_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv1_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv0_AttrFromSources_8));
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeClassInfo_for_writer_20,
  MR_Box Stream_8,
  MR_Word NonCanon_9,
  MR_Word ElementMapping_10,
  MR_Integer IndentLevel_11,
  MR_Box Term_12,
  MR_Box STATE_VARIABLE_State_0_17,
  MR_Box * STATE_VARIABLE_State_18)
{
  MR_Word Univ_14;
  MR_Word MakeElement_15;
  MR_Word Var_16;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_21, Term_12, &Univ_14);
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
      MakeElement_15 = ((MR_Word) ((MR_hl_field(1, ElementMapping_10, (MR_Integer) 0))));
      break;
  }
  mercury__term_to_xml__write_xml_element_univ_9_p_0(TypeClassInfo_for_writer_20, Stream_8, NonCanon_9, MakeElement_15, IndentLevel_11, Univ_14, (MR_Word) ((MR_Unsigned) 0U), &Var_16, STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
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
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_19;
      MR_Box Var_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Box next_value_of_HeadVar__5_5;

      mercury__term_to_xml__write_xml_element_univ_9_p_0(Var_24, Var_25, (MR_Integer) 0, Var_26, Var_27, Var_13, HeadVar__3_3, &Var_19, HeadVar__5_5, &Var_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_14;
      next_value_of_HeadVar__3_3 = Var_19;
      next_value_of_HeadVar__5_5 = Var_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_0(
  MR_Word TypeClassInfo_for_writer_50,
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
  MR_bool succeeded;
  MR_Word TypeInfo_51_51;
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
  MR_Integer Var_53;
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
    MaybeFieldName_18 = ((MR_Word) ((MR_hl_field(1, MaybeFieldNames_15, (MR_Integer) 0))));
    *RemainingMaybeFieldNames_16 = ((MR_Word) ((MR_hl_field(1, MaybeFieldNames_15, (MR_Integer) 1))));
  }
  TypeInfo_51_51 = ((MR_Word) ((MR_hl_field(0, Univ_14, (MR_Integer) 0))));
  Term_19 = (MR_hl_field(0, Univ_14, (MR_Integer) 1));
  mercury__deconstruct__deconstruct_5_p_0(TypeInfo_51_51, Term_19, NonCanon_11, &Functor_20, &Arity_21, &Args_22);
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_51_51 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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

	TypeInfo = TypeDesc_23 ;
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
    Var_53 = (MR_Integer) -1;
    succeeded = (Var_24 > Var_53);
  }
  if (succeeded)
    {
      Request_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Request_25, 0) = ((MR_Box) (Functor_20));
      MR_hl_field(1, Request_25, 1) = ((MR_Box) (Arity_21));
    }
  else
    Request_25 = (MR_Word) ((MR_Unsigned) 0U);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, MakeElement_12, (MR_Integer) 1))));
  func_0(((MR_Box) (MakeElement_12)), ((MR_Box) (TypeDesc_23)), ((MR_Box) (Request_25)), &conv2_Element_26, &conv1_AttrFromSources_27);
  Element_26 = ((MR_String) (conv2_Element_26));
  AttrFromSources_27 = ((MR_Word) (conv1_AttrFromSources_27));
  succeeded = mercury__term_to_xml__primitive_value_2_p_0(Univ_14, &PrimValue_28);
  if (succeeded)
  {
    MR_Box STATE_VARIABLE_State_34_34;

    mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_50, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_34_34);
    mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(TypeClassInfo_for_writer_50, Stream_10, Element_26, AttrFromSources_27, PrimValue_28, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_34_34, STATE_VARIABLE_State_33);
  }
  else
  if ((Args_22 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Box STATE_VARIABLE_State_36_36;
    MR_Word Var_37;
    MR_Word Var_38;

    mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_50, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_36_36);
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Functor_20));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Arity_21));
    }
    mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(TypeClassInfo_for_writer_50, Stream_10, Element_26, AttrFromSources_27, Var_37, Var_38, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_36_36, STATE_VARIABLE_State_33);
  }
  else
  {
    MR_Word ChildMaybeFieldNames_31;
    MR_Box STATE_VARIABLE_State_40_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Box STATE_VARIABLE_State_43_43;
    MR_Integer Var_44;
    MR_Box STATE_VARIABLE_State_45_45;
    MR_Box STATE_VARIABLE_State_47_47;
    MR_Box STATE_VARIABLE_State_48_48;
    MR_Box STATE_VARIABLE_State_11_61;
    MR_Box STATE_VARIABLE_State_12_62;
    MR_Word Var_54;
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(TypeDesc_23, Functor_20, Arity_21);
    mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_50, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_40_40);
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Functor_20));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (Arity_21));
    }
    mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(TypeClassInfo_for_writer_50, Stream_10, Element_26, AttrFromSources_27, Var_41, Var_42, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_40_40, &STATE_VARIABLE_State_43_43);
    Var_44 = (MR_Integer) ((MR_Unsigned) IndentLevel_13 + (MR_Unsigned) 1);
    mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(TypeClassInfo_for_writer_50, Stream_10, MakeElement_12, Var_44, Args_22, ChildMaybeFieldNames_31, &Var_54, STATE_VARIABLE_State_43_43, &STATE_VARIABLE_State_45_45);
    mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_50, Stream_10, IndentLevel_13, STATE_VARIABLE_State_45_45, &STATE_VARIABLE_State_47_47);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_writer_50)), Stream_10, ((MR_Box) ((MR_String) "</")), STATE_VARIABLE_State_47_47, &STATE_VARIABLE_State_11_61);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_writer_50)), Stream_10, ((MR_Box) (Element_26)), STATE_VARIABLE_State_11_61, &STATE_VARIABLE_State_12_62);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) (TypeClassInfo_for_writer_50)), Stream_10, ((MR_Box) ((MR_String) ">")), STATE_VARIABLE_State_12_62, &STATE_VARIABLE_State_48_48);
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_6(((MR_Box) (TypeClassInfo_for_writer_50)), Stream_10, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_48_48, STATE_VARIABLE_State_33);
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv27_Element_7;
  MR_Word conv26_AttrFromSources_8;

  mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv27_Element_7, &conv26_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv27_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv26_AttrFromSources_8));
}

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv25_Element_7;
  MR_Word conv24_AttrFromSources_8;

  mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv25_Element_7, &conv24_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv25_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv24_AttrFromSources_8));
}

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv9_Element_7;
  MR_Word conv8_AttrFromSources_8;

  mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_Element_7, &conv8_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv9_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv8_AttrFromSources_8));
}

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv7_Element_7;
  MR_Word conv6_AttrFromSources_8;

  mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_Element_7, &conv6_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv7_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv6_AttrFromSources_8));
}

void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeClassInfo_for_writer_31,
  MR_Box Stream_9,
  MR_Box Term_10,
  MR_Word ElementMapping_11,
  MR_Word MaybeStyleSheet_12,
  MR_Word MaybeDTD_13,
  MR_Word * DTDResult_14,
  MR_Box STATE_VARIABLE_State_0_21,
  MR_Box * STATE_VARIABLE_State_22)
{
  MR_bool succeeded;
  MR_Word Var_23;

{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_doc_general_cc_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_32 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
            MR_Word Univ_84;
            MR_Word MakeElement_85;
            MR_Word Var_86;

            mercury__term_to_xml__write_xml_header_4_p_0(TypeClassInfo_for_writer_31, Stream_9, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_State_0_21, &STATE_VARIABLE_State_25_25);
            if ((MaybeStyleSheet_12 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_State_26_26 = STATE_VARIABLE_State_25_25;
            else
            {
              MR_String Type_41 = ((MR_String) ((MR_hl_field(1, MaybeStyleSheet_12, (MR_Integer) 0))));
              MR_String Href_42 = ((MR_String) ((MR_hl_field(1, MaybeStyleSheet_12, (MR_Integer) 1))));
              MR_Box STATE_VARIABLE_State_13_44;
              MR_Box STATE_VARIABLE_State_14_45;
              MR_Box STATE_VARIABLE_State_16_47;
              MR_Box STATE_VARIABLE_State_17_48;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
              void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              func_0(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), STATE_VARIABLE_State_25_25, &STATE_VARIABLE_State_13_44);
              func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
              func_1(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) (Type_41)), STATE_VARIABLE_State_13_44, &STATE_VARIABLE_State_14_45);
              func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
              func_2(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) ((MR_String) "\" href=\"")), STATE_VARIABLE_State_14_45, &STATE_VARIABLE_State_16_47);
              func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
              func_3(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) (Href_42)), STATE_VARIABLE_State_16_47, &STATE_VARIABLE_State_17_48);
              func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
              func_4(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) ((MR_String) "\"\?>\n")), STATE_VARIABLE_State_17_48, &STATE_VARIABLE_State_26_26);
            }
            switch (MR_tag((MR_Word) MaybeDTD_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(MaybeDTD_13)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Box STATE_VARIABLE_State_28_60;
                      MR_Word TypeDesc_64;
                      MR_Word Var_16;
                      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_doc_general_cc_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_32 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
	TypeDesc_64  = TypeInfo;
}
                      mercury__term_to_xml__write_dtd_from_type_6_p_0(TypeClassInfo_for_writer_31, Stream_9, TypeDesc_64, ElementMapping_11, &Var_16, STATE_VARIABLE_State_26_26, &STATE_VARIABLE_State_28_60);
                      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                      func_5(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_28_60, &STATE_VARIABLE_State_28_28);
                    }
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_State_28_28 = STATE_VARIABLE_State_26_26;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word DocType_50 = ((MR_Word) ((MR_hl_field(1, MaybeDTD_13, (MR_Integer) 0))));
                  MR_Word MakeElement_51;
                  MR_String Functor_52;
                  MR_Integer Arity_53;
                  MR_Word TypeOfTerm_55;
                  MR_Word Request_57;
                  MR_String Root_58;
                  MR_Box STATE_VARIABLE_State_15_69;
                  MR_Box STATE_VARIABLE_State_16_70;
                  MR_Box STATE_VARIABLE_State_19_73;
                  MR_Word Var_54;
                  MR_Integer Var_56;
                  MR_Integer Var_65;
                  void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
                  MR_Box conv12_Root_58;
                  MR_Box conv11_Var_59;
                  void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* func_23)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                  switch (MR_tag((MR_Word) ElementMapping_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(ElementMapping_11)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          MakeElement_51 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[9]);
                          break;
                        case (MR_Integer) 1:
                          MakeElement_51 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[10]);
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      MakeElement_51 = ((MR_Word) ((MR_hl_field(1, ElementMapping_11, (MR_Integer) 0))));
                      break;
                  }
                  mercury__deconstruct__deconstruct_5_p_2(TypeInfo_for_T_32, Term_10, (MR_Integer) 2, &Functor_52, &Arity_53, &Var_54);
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_doc_general_cc_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_32 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
	TypeOfTerm_55  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_doc_general_cc_8_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo = TypeOfTerm_55 ;
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
	Var_56  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
                  if (succeeded)
                  {
                    Var_65 = (MR_Integer) -1;
                    succeeded = (Var_56 > Var_65);
                  }
                  if (succeeded)
                    {
                      Request_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Request_57, 0) = ((MR_Box) (Functor_52));
                      MR_hl_field(1, Request_57, 1) = ((MR_Box) (Arity_53));
                    }
                  else
                    Request_57 = (MR_Word) ((MR_Unsigned) 0U);
                  func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, MakeElement_51, (MR_Integer) 1))));
                  func_10(((MR_Box) (MakeElement_51)), ((MR_Box) (TypeOfTerm_55)), ((MR_Box) (Request_57)), &conv12_Root_58, &conv11_Var_59);
                  Root_58 = ((MR_String) (conv12_Root_58));
                  func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                  func_13(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) ((MR_String) "<!DOCTYPE ")), STATE_VARIABLE_State_26_26, &STATE_VARIABLE_State_15_69);
                  func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                  func_14(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) (Root_58)), STATE_VARIABLE_State_15_69, &STATE_VARIABLE_State_16_70);
                  switch (MR_tag((MR_Word) DocType_50)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_String PUBLIC_66 = ((MR_String) ((MR_hl_field(0, DocType_50, (MR_Integer) 0))));
                        MR_Box STATE_VARIABLE_State_18_72;
                        void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                        void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                        func_15(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), STATE_VARIABLE_State_16_70, &STATE_VARIABLE_State_18_72);
                        func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                        func_16(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) (PUBLIC_66)), STATE_VARIABLE_State_18_72, &STATE_VARIABLE_State_19_73);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String SYSTEM_67 = ((MR_String) ((MR_hl_field(1, DocType_50, (MR_Integer) 1))));
                        MR_Box STATE_VARIABLE_State_21_75;
                        MR_Box STATE_VARIABLE_State_22_76;
                        MR_Box STATE_VARIABLE_State_24_78;
                        MR_String PUBLIC_82 = ((MR_String) ((MR_hl_field(1, DocType_50, (MR_Integer) 0))));
                        void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                        void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                        void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                        void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                        func_17(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), STATE_VARIABLE_State_16_70, &STATE_VARIABLE_State_21_75);
                        func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                        func_18(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) (PUBLIC_82)), STATE_VARIABLE_State_21_75, &STATE_VARIABLE_State_22_76);
                        func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                        func_19(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) ((MR_String) "\" \"")), STATE_VARIABLE_State_22_76, &STATE_VARIABLE_State_24_78);
                        func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                        func_20(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) (SYSTEM_67)), STATE_VARIABLE_State_24_78, &STATE_VARIABLE_State_19_73);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Box STATE_VARIABLE_State_27_80;
                        MR_String SYSTEM_83 = ((MR_String) ((MR_hl_field(2, DocType_50, (MR_Integer) 0))));
                        void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                        void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                        func_21(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) ((MR_String) " SYSTEM \"")), STATE_VARIABLE_State_16_70, &STATE_VARIABLE_State_27_80);
                        func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                        func_22(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) (SYSTEM_83)), STATE_VARIABLE_State_27_80, &STATE_VARIABLE_State_19_73);
                      }
                      break;
                  }
                  func_23 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                  func_23(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) ((MR_String) "\">\n")), STATE_VARIABLE_State_19_73, &STATE_VARIABLE_State_28_28);
                }
                break;
            }
            mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_32, Term_10, &Univ_84);
            switch (MR_tag((MR_Word) ElementMapping_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ElementMapping_11)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    MakeElement_85 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[11]);
                    break;
                  case (MR_Integer) 1:
                    MakeElement_85 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[12]);
                    break;
                }
                break;
              case (MR_Integer) 1:
                MakeElement_85 = ((MR_Word) ((MR_hl_field(1, ElementMapping_11, (MR_Integer) 0))));
                break;
            }
            mercury__term_to_xml__write_xml_element_univ_9_p_2(TypeClassInfo_for_writer_31, Stream_9, (MR_Integer) 2, MakeElement_85, (MR_Integer) 0, Univ_84, (MR_Word) ((MR_Unsigned) 0U), &Var_86, STATE_VARIABLE_State_28_28, STATE_VARIABLE_State_22);
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

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_52_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
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
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_19;
      MR_Box Var_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Box next_value_of_HeadVar__5_5;

      mercury__term_to_xml__write_xml_element_univ_9_p_2(Var_24, Var_25, (MR_Integer) 2, Var_26, Var_27, Var_13, HeadVar__3_3, &Var_19, HeadVar__5_5, &Var_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_14;
      next_value_of_HeadVar__3_3 = Var_19;
      next_value_of_HeadVar__5_5 = Var_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_2(
  MR_Word TypeClassInfo_for_writer_50,
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
  MR_bool succeeded;
  MR_Word TypeInfo_51_51;
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
  MR_Integer Var_53;
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
    MaybeFieldName_18 = ((MR_Word) ((MR_hl_field(1, MaybeFieldNames_15, (MR_Integer) 0))));
    *RemainingMaybeFieldNames_16 = ((MR_Word) ((MR_hl_field(1, MaybeFieldNames_15, (MR_Integer) 1))));
  }
  TypeInfo_51_51 = ((MR_Word) ((MR_hl_field(0, Univ_14, (MR_Integer) 0))));
  Term_19 = (MR_hl_field(0, Univ_14, (MR_Integer) 1));
  mercury__deconstruct__deconstruct_5_p_2(TypeInfo_51_51, Term_19, NonCanon_11, &Functor_20, &Arity_21, &Args_22);
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_51_51 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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

	TypeInfo = TypeDesc_23 ;
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
    Var_53 = (MR_Integer) -1;
    succeeded = (Var_24 > Var_53);
  }
  if (succeeded)
    {
      Request_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Request_25, 0) = ((MR_Box) (Functor_20));
      MR_hl_field(1, Request_25, 1) = ((MR_Box) (Arity_21));
    }
  else
    Request_25 = (MR_Word) ((MR_Unsigned) 0U);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, MakeElement_12, (MR_Integer) 1))));
  func_0(((MR_Box) (MakeElement_12)), ((MR_Box) (TypeDesc_23)), ((MR_Box) (Request_25)), &conv2_Element_26, &conv1_AttrFromSources_27);
  Element_26 = ((MR_String) (conv2_Element_26));
  AttrFromSources_27 = ((MR_Word) (conv1_AttrFromSources_27));
  succeeded = mercury__term_to_xml__primitive_value_2_p_0(Univ_14, &PrimValue_28);
  if (succeeded)
  {
    MR_Box STATE_VARIABLE_State_34_34;

    mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_50, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_34_34);
    mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(TypeClassInfo_for_writer_50, Stream_10, Element_26, AttrFromSources_27, PrimValue_28, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_34_34, STATE_VARIABLE_State_33);
  }
  else
  if ((Args_22 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Box STATE_VARIABLE_State_36_36;
    MR_Word Var_37;
    MR_Word Var_38;

    mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_50, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_36_36);
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Functor_20));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Arity_21));
    }
    mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(TypeClassInfo_for_writer_50, Stream_10, Element_26, AttrFromSources_27, Var_37, Var_38, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_36_36, STATE_VARIABLE_State_33);
  }
  else
  {
    MR_Word ChildMaybeFieldNames_31;
    MR_Box STATE_VARIABLE_State_40_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Box STATE_VARIABLE_State_43_43;
    MR_Integer Var_44;
    MR_Box STATE_VARIABLE_State_45_45;
    MR_Box STATE_VARIABLE_State_47_47;
    MR_Box STATE_VARIABLE_State_48_48;
    MR_Box STATE_VARIABLE_State_11_61;
    MR_Box STATE_VARIABLE_State_12_62;
    MR_Word Var_54;
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(TypeDesc_23, Functor_20, Arity_21);
    mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_50, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_40_40);
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Functor_20));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (Arity_21));
    }
    mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(TypeClassInfo_for_writer_50, Stream_10, Element_26, AttrFromSources_27, Var_41, Var_42, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_40_40, &STATE_VARIABLE_State_43_43);
    Var_44 = (MR_Integer) ((MR_Unsigned) IndentLevel_13 + (MR_Unsigned) 1);
    mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_52_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(TypeClassInfo_for_writer_50, Stream_10, MakeElement_12, Var_44, Args_22, ChildMaybeFieldNames_31, &Var_54, STATE_VARIABLE_State_43_43, &STATE_VARIABLE_State_45_45);
    mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_50, Stream_10, IndentLevel_13, STATE_VARIABLE_State_45_45, &STATE_VARIABLE_State_47_47);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_writer_50)), Stream_10, ((MR_Box) ((MR_String) "</")), STATE_VARIABLE_State_47_47, &STATE_VARIABLE_State_11_61);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_writer_50)), Stream_10, ((MR_Box) (Element_26)), STATE_VARIABLE_State_11_61, &STATE_VARIABLE_State_12_62);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) (TypeClassInfo_for_writer_50)), Stream_10, ((MR_Box) ((MR_String) ">")), STATE_VARIABLE_State_12_62, &STATE_VARIABLE_State_48_48);
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_6(((MR_Box) (TypeClassInfo_for_writer_50)), Stream_10, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_48_48, STATE_VARIABLE_State_33);
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv27_Element_7;
  MR_Word conv26_AttrFromSources_8;

  mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv27_Element_7, &conv26_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv27_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv26_AttrFromSources_8));
}

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv25_Element_7;
  MR_Word conv24_AttrFromSources_8;

  mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv25_Element_7, &conv24_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv25_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv24_AttrFromSources_8));
}

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv9_Element_7;
  MR_Word conv8_AttrFromSources_8;

  mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_Element_7, &conv8_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv9_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv8_AttrFromSources_8));
}

static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv7_Element_7;
  MR_Word conv6_AttrFromSources_8;

  mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_Element_7, &conv6_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv7_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv6_AttrFromSources_8));
}

void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeClassInfo_for_writer_31,
  MR_Box Stream_9,
  MR_Box Term_10,
  MR_Word ElementMapping_11,
  MR_Word MaybeStyleSheet_12,
  MR_Word MaybeDTD_13,
  MR_Word * DTDResult_14,
  MR_Box STATE_VARIABLE_State_0_21,
  MR_Box * STATE_VARIABLE_State_22)
{
  MR_bool succeeded;
  MR_Word Var_23;

{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_doc_general_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_32 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
            MR_Word Univ_84;
            MR_Word MakeElement_85;
            MR_Word Var_86;

            mercury__term_to_xml__write_xml_header_4_p_0(TypeClassInfo_for_writer_31, Stream_9, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_State_0_21, &STATE_VARIABLE_State_25_25);
            if ((MaybeStyleSheet_12 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_State_26_26 = STATE_VARIABLE_State_25_25;
            else
            {
              MR_String Type_41 = ((MR_String) ((MR_hl_field(1, MaybeStyleSheet_12, (MR_Integer) 0))));
              MR_String Href_42 = ((MR_String) ((MR_hl_field(1, MaybeStyleSheet_12, (MR_Integer) 1))));
              MR_Box STATE_VARIABLE_State_13_44;
              MR_Box STATE_VARIABLE_State_14_45;
              MR_Box STATE_VARIABLE_State_16_47;
              MR_Box STATE_VARIABLE_State_17_48;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
              void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              func_0(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), STATE_VARIABLE_State_25_25, &STATE_VARIABLE_State_13_44);
              func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
              func_1(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) (Type_41)), STATE_VARIABLE_State_13_44, &STATE_VARIABLE_State_14_45);
              func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
              func_2(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) ((MR_String) "\" href=\"")), STATE_VARIABLE_State_14_45, &STATE_VARIABLE_State_16_47);
              func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
              func_3(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) (Href_42)), STATE_VARIABLE_State_16_47, &STATE_VARIABLE_State_17_48);
              func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
              func_4(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) ((MR_String) "\"\?>\n")), STATE_VARIABLE_State_17_48, &STATE_VARIABLE_State_26_26);
            }
            switch (MR_tag((MR_Word) MaybeDTD_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(MaybeDTD_13)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Box STATE_VARIABLE_State_28_60;
                      MR_Word TypeDesc_64;
                      MR_Word Var_16;
                      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_doc_general_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_32 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
	TypeDesc_64  = TypeInfo;
}
                      mercury__term_to_xml__write_dtd_from_type_6_p_0(TypeClassInfo_for_writer_31, Stream_9, TypeDesc_64, ElementMapping_11, &Var_16, STATE_VARIABLE_State_26_26, &STATE_VARIABLE_State_28_60);
                      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                      func_5(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_28_60, &STATE_VARIABLE_State_28_28);
                    }
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_State_28_28 = STATE_VARIABLE_State_26_26;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word DocType_50 = ((MR_Word) ((MR_hl_field(1, MaybeDTD_13, (MR_Integer) 0))));
                  MR_Word MakeElement_51;
                  MR_String Functor_52;
                  MR_Integer Arity_53;
                  MR_Word TypeOfTerm_55;
                  MR_Word Request_57;
                  MR_String Root_58;
                  MR_Box STATE_VARIABLE_State_15_69;
                  MR_Box STATE_VARIABLE_State_16_70;
                  MR_Box STATE_VARIABLE_State_19_73;
                  MR_Word Var_54;
                  MR_Integer Var_56;
                  MR_Integer Var_65;
                  void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
                  MR_Box conv12_Root_58;
                  MR_Box conv11_Var_59;
                  void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* func_23)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                  switch (MR_tag((MR_Word) ElementMapping_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(ElementMapping_11)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          MakeElement_51 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[5]);
                          break;
                        case (MR_Integer) 1:
                          MakeElement_51 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[6]);
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      MakeElement_51 = ((MR_Word) ((MR_hl_field(1, ElementMapping_11, (MR_Integer) 0))));
                      break;
                  }
                  mercury__deconstruct__deconstruct_5_p_1(TypeInfo_for_T_32, Term_10, (MR_Integer) 1, &Functor_52, &Arity_53, &Var_54);
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_doc_general_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_32 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
	TypeOfTerm_55  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_doc_general_8_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo = TypeOfTerm_55 ;
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
	Var_56  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
                  if (succeeded)
                  {
                    Var_65 = (MR_Integer) -1;
                    succeeded = (Var_56 > Var_65);
                  }
                  if (succeeded)
                    {
                      Request_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Request_57, 0) = ((MR_Box) (Functor_52));
                      MR_hl_field(1, Request_57, 1) = ((MR_Box) (Arity_53));
                    }
                  else
                    Request_57 = (MR_Word) ((MR_Unsigned) 0U);
                  func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, MakeElement_51, (MR_Integer) 1))));
                  func_10(((MR_Box) (MakeElement_51)), ((MR_Box) (TypeOfTerm_55)), ((MR_Box) (Request_57)), &conv12_Root_58, &conv11_Var_59);
                  Root_58 = ((MR_String) (conv12_Root_58));
                  func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                  func_13(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) ((MR_String) "<!DOCTYPE ")), STATE_VARIABLE_State_26_26, &STATE_VARIABLE_State_15_69);
                  func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                  func_14(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) (Root_58)), STATE_VARIABLE_State_15_69, &STATE_VARIABLE_State_16_70);
                  switch (MR_tag((MR_Word) DocType_50)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_String PUBLIC_66 = ((MR_String) ((MR_hl_field(0, DocType_50, (MR_Integer) 0))));
                        MR_Box STATE_VARIABLE_State_18_72;
                        void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                        void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                        func_15(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), STATE_VARIABLE_State_16_70, &STATE_VARIABLE_State_18_72);
                        func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                        func_16(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) (PUBLIC_66)), STATE_VARIABLE_State_18_72, &STATE_VARIABLE_State_19_73);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String SYSTEM_67 = ((MR_String) ((MR_hl_field(1, DocType_50, (MR_Integer) 1))));
                        MR_Box STATE_VARIABLE_State_21_75;
                        MR_Box STATE_VARIABLE_State_22_76;
                        MR_Box STATE_VARIABLE_State_24_78;
                        MR_String PUBLIC_82 = ((MR_String) ((MR_hl_field(1, DocType_50, (MR_Integer) 0))));
                        void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                        void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                        void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                        void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                        func_17(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), STATE_VARIABLE_State_16_70, &STATE_VARIABLE_State_21_75);
                        func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                        func_18(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) (PUBLIC_82)), STATE_VARIABLE_State_21_75, &STATE_VARIABLE_State_22_76);
                        func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                        func_19(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) ((MR_String) "\" \"")), STATE_VARIABLE_State_22_76, &STATE_VARIABLE_State_24_78);
                        func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                        func_20(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) (SYSTEM_67)), STATE_VARIABLE_State_24_78, &STATE_VARIABLE_State_19_73);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Box STATE_VARIABLE_State_27_80;
                        MR_String SYSTEM_83 = ((MR_String) ((MR_hl_field(2, DocType_50, (MR_Integer) 0))));
                        void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                        void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                        func_21(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) ((MR_String) " SYSTEM \"")), STATE_VARIABLE_State_16_70, &STATE_VARIABLE_State_27_80);
                        func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                        func_22(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) (SYSTEM_83)), STATE_VARIABLE_State_27_80, &STATE_VARIABLE_State_19_73);
                      }
                      break;
                  }
                  func_23 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5))));
                  func_23(((MR_Box) (TypeClassInfo_for_writer_31)), Stream_9, ((MR_Box) ((MR_String) "\">\n")), STATE_VARIABLE_State_19_73, &STATE_VARIABLE_State_28_28);
                }
                break;
            }
            mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_32, Term_10, &Univ_84);
            switch (MR_tag((MR_Word) ElementMapping_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ElementMapping_11)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    MakeElement_85 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[7]);
                    break;
                  case (MR_Integer) 1:
                    MakeElement_85 = (MR_Word) (&mercury__term_to_xml_scalar_common_3[8]);
                    break;
                }
                break;
              case (MR_Integer) 1:
                MakeElement_85 = ((MR_Word) ((MR_hl_field(1, ElementMapping_11, (MR_Integer) 0))));
                break;
            }
            mercury__term_to_xml__write_xml_element_univ_9_p_1(TypeClassInfo_for_writer_31, Stream_9, (MR_Integer) 1, MakeElement_85, (MR_Integer) 0, Univ_84, (MR_Word) ((MR_Unsigned) 0U), &Var_86, STATE_VARIABLE_State_28_28, STATE_VARIABLE_State_22);
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
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_19;
      MR_Box Var_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Box next_value_of_HeadVar__5_5;

      mercury__term_to_xml__write_xml_element_univ_9_p_1(Var_24, Var_25, (MR_Integer) 1, Var_26, Var_27, Var_13, HeadVar__3_3, &Var_19, HeadVar__5_5, &Var_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_14;
      next_value_of_HeadVar__3_3 = Var_19;
      next_value_of_HeadVar__5_5 = Var_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_1(
  MR_Word TypeClassInfo_for_writer_50,
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
  MR_bool succeeded;
  MR_Word TypeInfo_51_51;
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
  MR_Integer Var_53;
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
    MaybeFieldName_18 = ((MR_Word) ((MR_hl_field(1, MaybeFieldNames_15, (MR_Integer) 0))));
    *RemainingMaybeFieldNames_16 = ((MR_Word) ((MR_hl_field(1, MaybeFieldNames_15, (MR_Integer) 1))));
  }
  TypeInfo_51_51 = ((MR_Word) ((MR_hl_field(0, Univ_14, (MR_Integer) 0))));
  Term_19 = (MR_hl_field(0, Univ_14, (MR_Integer) 1));
  mercury__deconstruct__deconstruct_5_p_1(TypeInfo_51_51, Term_19, NonCanon_11, &Functor_20, &Arity_21, &Args_22);
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_51_51 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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

	TypeInfo = TypeDesc_23 ;
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
    Var_53 = (MR_Integer) -1;
    succeeded = (Var_24 > Var_53);
  }
  if (succeeded)
    {
      Request_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Request_25, 0) = ((MR_Box) (Functor_20));
      MR_hl_field(1, Request_25, 1) = ((MR_Box) (Arity_21));
    }
  else
    Request_25 = (MR_Word) ((MR_Unsigned) 0U);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, MakeElement_12, (MR_Integer) 1))));
  func_0(((MR_Box) (MakeElement_12)), ((MR_Box) (TypeDesc_23)), ((MR_Box) (Request_25)), &conv2_Element_26, &conv1_AttrFromSources_27);
  Element_26 = ((MR_String) (conv2_Element_26));
  AttrFromSources_27 = ((MR_Word) (conv1_AttrFromSources_27));
  succeeded = mercury__term_to_xml__primitive_value_2_p_0(Univ_14, &PrimValue_28);
  if (succeeded)
  {
    MR_Box STATE_VARIABLE_State_34_34;

    mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_50, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_34_34);
    mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(TypeClassInfo_for_writer_50, Stream_10, Element_26, AttrFromSources_27, PrimValue_28, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_34_34, STATE_VARIABLE_State_33);
  }
  else
  if ((Args_22 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Box STATE_VARIABLE_State_36_36;
    MR_Word Var_37;
    MR_Word Var_38;

    mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_50, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_36_36);
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Functor_20));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Arity_21));
    }
    mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(TypeClassInfo_for_writer_50, Stream_10, Element_26, AttrFromSources_27, Var_37, Var_38, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_36_36, STATE_VARIABLE_State_33);
  }
  else
  {
    MR_Word ChildMaybeFieldNames_31;
    MR_Box STATE_VARIABLE_State_40_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Box STATE_VARIABLE_State_43_43;
    MR_Integer Var_44;
    MR_Box STATE_VARIABLE_State_45_45;
    MR_Box STATE_VARIABLE_State_47_47;
    MR_Box STATE_VARIABLE_State_48_48;
    MR_Box STATE_VARIABLE_State_11_61;
    MR_Box STATE_VARIABLE_State_12_62;
    MR_Word Var_54;
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(TypeDesc_23, Functor_20, Arity_21);
    mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_50, Stream_10, IndentLevel_13, STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_40_40);
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Functor_20));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (Arity_21));
    }
    mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(TypeClassInfo_for_writer_50, Stream_10, Element_26, AttrFromSources_27, Var_41, Var_42, MaybeFieldName_18, TypeDesc_23, STATE_VARIABLE_State_40_40, &STATE_VARIABLE_State_43_43);
    Var_44 = (MR_Integer) ((MR_Unsigned) IndentLevel_13 + (MR_Unsigned) 1);
    mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(TypeClassInfo_for_writer_50, Stream_10, MakeElement_12, Var_44, Args_22, ChildMaybeFieldNames_31, &Var_54, STATE_VARIABLE_State_43_43, &STATE_VARIABLE_State_45_45);
    mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_50, Stream_10, IndentLevel_13, STATE_VARIABLE_State_45_45, &STATE_VARIABLE_State_47_47);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_writer_50)), Stream_10, ((MR_Box) ((MR_String) "</")), STATE_VARIABLE_State_47_47, &STATE_VARIABLE_State_11_61);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_writer_50)), Stream_10, ((MR_Box) (Element_26)), STATE_VARIABLE_State_11_61, &STATE_VARIABLE_State_12_62);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) (TypeClassInfo_for_writer_50)), Stream_10, ((MR_Box) ((MR_String) ">")), STATE_VARIABLE_State_12_62, &STATE_VARIABLE_State_48_48);
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_6(((MR_Box) (TypeClassInfo_for_writer_50)), Stream_10, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_48_48, STATE_VARIABLE_State_33);
  }
}

void MR_CALL 
mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(
  MR_Word TypeClassInfo_for_writer_23,
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
  MR_Word Attrs_18;
  MR_Box STATE_VARIABLE_State_21_21;
  MR_Word MaybeAttrs_24;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  MaybeAttrs_24 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_49_95_95_91_53_93_95_48_2_f_in__list_0(MaybeFunctor_13, MaybeArity_14, TypeDesc_16, MaybeField_15, AttrFromSources_12);
  mercury__term_to_xml__filter_map__ho12_3_p_in__list_0(MaybeAttrs_24, &Attrs_18);
  mercury__term_to_xml__write_empty_element_5_p_0(TypeClassInfo_for_writer_23, Stream_10, Element_11, Attrs_18, STATE_VARIABLE_State_0_19, &STATE_VARIABLE_State_21_21);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_23, (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) (TypeClassInfo_for_writer_23)), Stream_10, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_21_21, STATE_VARIABLE_State_20);
}

void MR_CALL 
mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(
  MR_Word TypeClassInfo_for_writer_23,
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
  MR_Word Attrs_18;
  MR_Box STATE_VARIABLE_State_21_21;
  MR_Word MaybeAttrs_24;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  MaybeAttrs_24 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_49_95_95_91_53_93_95_48_2_f_in__list_0(MaybeFunctor_13, MaybeArity_14, TypeDesc_16, MaybeField_15, AttrFromSources_12);
  mercury__term_to_xml__filter_map__ho12_3_p_in__list_0(MaybeAttrs_24, &Attrs_18);
  mercury__term_to_xml__write_element_start_5_p_0(TypeClassInfo_for_writer_23, Stream_10, Element_11, Attrs_18, STATE_VARIABLE_State_0_19, &STATE_VARIABLE_State_21_21);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_23, (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) (TypeClassInfo_for_writer_23)), Stream_10, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_21_21, STATE_VARIABLE_State_20);
}

void MR_CALL 
mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(
  MR_Word TypeClassInfo_for_writer_33,
  MR_Box Stream_9,
  MR_String Element_10,
  MR_Word AttrFromSources_11,
  MR_String Value_12,
  MR_Word MaybeField_13,
  MR_Word TypeDesc_14,
  MR_Box STATE_VARIABLE_State_0_17,
  MR_Box * STATE_VARIABLE_State_18)
{
  MR_Word Attrs_16;
  MR_Box STATE_VARIABLE_State_20_20;
  MR_Box STATE_VARIABLE_State_21_21;
  MR_Box STATE_VARIABLE_State_25_25;
  MR_Box STATE_VARIABLE_State_27_27;
  MR_Box STATE_VARIABLE_State_28_28;
  MR_Box STATE_VARIABLE_State_30_30;
  MR_Box STATE_VARIABLE_State_31_31;
  MR_Word MaybeAttrs_40;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) ((MR_String) "<")), STATE_VARIABLE_State_0_17, &STATE_VARIABLE_State_20_20);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));
  func_1(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) (Element_10)), STATE_VARIABLE_State_20_20, &STATE_VARIABLE_State_21_21);
  MaybeAttrs_40 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_49_95_95_91_53_93_95_48_2_f_in__list_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), TypeDesc_14, MaybeField_13, AttrFromSources_11);
  mercury__term_to_xml__filter_map__ho12_3_p_in__list_0(MaybeAttrs_40, &Attrs_16);
  mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(TypeClassInfo_for_writer_33, Stream_9, Attrs_16, STATE_VARIABLE_State_21_21, &STATE_VARIABLE_State_25_25);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) ((MR_String) ">")), STATE_VARIABLE_State_25_25, &STATE_VARIABLE_State_27_27);
  mercury__term_to_xml__write_xml_escaped_string_4_p_0(TypeClassInfo_for_writer_33, Stream_9, Value_12, STATE_VARIABLE_State_27_27, &STATE_VARIABLE_State_28_28);
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));
  func_3(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) ((MR_String) "</")), STATE_VARIABLE_State_28_28, &STATE_VARIABLE_State_30_30);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));
  func_4(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) (Element_10)), STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_31_31);
  func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));
  func_5(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) ((MR_String) ">\n")), STATE_VARIABLE_State_31_31, STATE_VARIABLE_State_18);
}

static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_49_95_95_91_53_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Word Var_13,
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_8;
    MR_Word * AddrSCCcallarg_9_16;

    Var_8 = mercury__term_to_xml__attr_from_source_to_maybe_attr_5_f_0(Var_12, Var_13, Var_14, Var_15, Var_6);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_16 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__term_to_xml__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_49_95_95_91_53_93_95_48_95_95_49_3_p_0(Var_12, Var_13, Var_14, Var_15, Var_7, AddrSCCcallarg_9_16);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__term_to_xml__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_49_95_95_91_53_93_95_48_95_95_49_3_p_0(
  MR_Word Var_12,
  MR_Word Var_13,
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_17 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg_9_16;
      MR_Word HeadVar__3_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_17;

      Var_8 = mercury__term_to_xml__attr_from_source_to_maybe_attr_5_f_0(Var_12, Var_13, Var_14, Var_15, Var_6);
      {
        HeadVar__3_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_18, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_18, 1) = NULL;
      }
      AddrSCCcallarg_9_16 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_18, (MR_Integer) 1)));
      *AddrOfHeadVar__3_17 = HeadVar__3_18;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_17 = AddrSCCcallarg_9_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_17 = next_value_of_AddrOfHeadVar__3_17;
      continue;
    }
    break;
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
  MR_Word MaybeAttr_13;
  MR_String Name_11 = ((MR_String) ((MR_hl_field(0, HeadVar__5_5, (MR_Integer) 0))));
  MR_Word Source_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__5_5, (MR_Integer) 1))) & (MR_Integer) 3);

  switch (Source_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      if ((MaybeArity_8 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeAttr_13 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer Arity_15 = ((MR_Integer) ((MR_hl_field(1, MaybeArity_8, (MR_Integer) 0))));
        MR_Word Var_18;
        MR_String Var_19;

{
#define MR_PROC_LABEL mercury__term_to_xml__attr_from_source_to_maybe_attr_5_f_0

	MR_Integer I;
	MR_String S;

	I = Arity_15 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_19  = S;
}
        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_18, 0) = ((MR_Box) (Name_11));
          MR_hl_field(0, Var_18, 1) = ((MR_Box) (Var_19));
        }
        {
          MaybeAttr_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeAttr_13, 0) = ((MR_Box) (Var_18));
        }
      }
      break;
    case (MR_Integer) 1:
      if ((MaybeFieldName_10 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeAttr_13 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_String FieldName_16 = ((MR_String) ((MR_hl_field(1, MaybeFieldName_10, (MR_Integer) 0))));
        MR_Word Var_22;

        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_22, 0) = ((MR_Box) (Name_11));
          MR_hl_field(0, Var_22, 1) = ((MR_Box) (FieldName_16));
        }
        {
          MaybeAttr_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeAttr_13, 0) = ((MR_Box) (Var_22));
        }
      }
      break;
    case (MR_Integer) 0:
      if ((MaybeFunctor_7 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeAttr_13 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_String Functor_14 = ((MR_String) ((MR_hl_field(1, MaybeFunctor_7, (MR_Integer) 0))));
        MR_Word Var_17;

        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_17, 0) = ((MR_Box) (Name_11));
          MR_hl_field(0, Var_17, 1) = ((MR_Box) (Functor_14));
        }
        {
          MaybeAttr_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeAttr_13, 0) = ((MR_Box) (Var_17));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_20;
        MR_String Var_21;

        Var_21 = mercury__type_desc__type_name_1_f_0(TypeDesc_9);
        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_20, 0) = ((MR_Box) (Name_11));
          MR_hl_field(0, Var_20, 1) = ((MR_Box) (Var_21));
        }
        {
          MaybeAttr_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeAttr_13, 0) = ((MR_Box) (Var_20));
        }
      }
      break;
  }
  return MaybeAttr_13;
}

static void MR_CALL 
mercury__term_to_xml__filter_map__ho12_3_p_in__list_0(
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
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_9;

      succeeded = (Var_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_9 = ((MR_Word) ((MR_hl_field(1, Var_6, (MR_Integer) 0))));
        {
          MR_Word * AddrSCCcallarg_10_15;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_9));
            MR_hl_field(1, base, 1) = NULL;
          }
          AddrSCCcallarg_10_15 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 1)));
          mercury__term_to_xml__LCMC__pred__filter_map__ho12__1_3_p_0(Var_7, AddrSCCcallarg_10_15);
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Var_7;

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
mercury__term_to_xml__LCMC__pred__filter_map__ho12__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_16 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_9;

      succeeded = (Var_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_9 = ((MR_Word) ((MR_hl_field(1, Var_6, (MR_Integer) 0))));
        {
          MR_Word * AddrSCCcallarg_10_15;
          MR_Word HeadVar__3_17;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_16;

          {
            HeadVar__3_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__3_17, 0) = ((MR_Box) (Var_9));
            MR_hl_field(1, HeadVar__3_17, 1) = NULL;
          }
          AddrSCCcallarg_10_15 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_17, (MR_Integer) 1)));
          *AddrOfHeadVar__3_16 = HeadVar__3_17;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_7;
          next_value_of_AddrOfHeadVar__3_16 = AddrSCCcallarg_10_15;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_16 = next_value_of_AddrOfHeadVar__3_16;
          continue;
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Var_7;

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
  MR_bool succeeded;
  MR_Word MaybeFields_8;
  MR_Integer NumFunctors_9;
  MR_Integer Var_15;

{
#define MR_PROC_LABEL mercury__term_to_xml__get_field_names_3_f_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo = TypeDesc_5 ;
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
    Var_15 = (MR_Integer) -1;
    succeeded = (NumFunctors_9 > Var_15);
  }
  if (succeeded)
  {
    MR_Word FunctorNums_10;
    MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) NumFunctors_9 - (MR_Unsigned) 1);
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
    MR_Word Var_16;
    MR_Word Var_12;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      FunctorNum_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      FunctorNums_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = mercury__construct__get_functor_with_names_internal_6_p_0(TypeDesc_6, FunctorNum_7, &Var_14, &Var_15, &Var_12, &Var_16);
      if (succeeded)
      {
        FoundFieldNames_13 = mercury__term_to_xml__map__ho5_2_f_in__list_0(Var_16);
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
mercury__term_to_xml__map__ho5_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_8;
    MR_Word * AddrSCCcallarg_9_12;

{
#define MR_PROC_LABEL mercury__term_to_xml__map__ho5_2_f_in__list_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = Var_6 ;
		{

    SUCCESS_INDICATOR = (S == NULL);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_6));
      }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__term_to_xml__LCMC__func__map__ho5__1_3_p_0(Var_7, AddrSCCcallarg_9_12);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__term_to_xml__LCMC__func__map__ho5__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg_9_12;
      MR_Word HeadVar__3_14;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_13;

{
#define MR_PROC_LABEL mercury__term_to_xml__LCMC__func__map__ho5__1_3_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = Var_6 ;
		{

    SUCCESS_INDICATOR = (S == NULL);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_8 = (MR_Word) ((MR_Unsigned) 0U);
      else
        {
          Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_6));
        }
      {
        HeadVar__3_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_14, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_14, 1) = NULL;
      }
      AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_14, (MR_Integer) 1)));
      *AddrOfHeadVar__3_13 = HeadVar__3_14;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_13 = AddrSCCcallarg_9_12;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_13 = next_value_of_AddrOfHeadVar__3_13;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__term_to_xml__primitive_value_2_p_0(
  MR_Word Univ_3,
  MR_String * PrimValue_4)
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
      mercury__string__char_to_string_2_p_0(Char_6, PrimValue_4);
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
{
#define MR_PROC_LABEL mercury__term_to_xml__primitive_value_2_p_0

	MR_Integer I;
	MR_String S;

	I = Int_7 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	*PrimValue_4  = S;
}
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

	Flt = Float_8 ;
		{
{
    // For efficiency reasons, we duplicate the C implementation
    // of lowlevel_float_to_string.
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	*PrimValue_4  = Str;
}
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Unsigned UInt_9;
          MR_Box conv4_UInt_9;

          succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), &conv4_UInt_9, Univ_3);
          if (succeeded)
          {
            UInt_9 = ((MR_Unsigned) (conv4_UInt_9));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__term_to_xml__primitive_value_2_p_0

	MR_Unsigned U;
	MR_String Str;

	U = UInt_9 ;
		{

    char buffer[21]; // 20 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "u", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	*PrimValue_4  = Str;
}
            succeeded = MR_TRUE;
          }
          else
          {
            int8_t Int8_10;
            MR_Box conv5_Int8_10;

            succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), &conv5_Int8_10, Univ_3);
            if (succeeded)
            {
              Int8_10 = ((int8_t) (MR_Word) conv5_Int8_10);
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
{
#define MR_PROC_LABEL mercury__term_to_xml__primitive_value_2_p_0

	int8_t I8;
	MR_String S;

	I8 = Int8_10 ;
		{

    char buffer[5]; // 1 for sign, 3 for digits, 1 for nul.
    sprintf(buffer, "%" PRId8, I8);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	*PrimValue_4  = S;
}
              succeeded = MR_TRUE;
            }
            else
            {
              int16_t Int16_11;
              MR_Box conv6_Int16_11;

              succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), &conv6_Int16_11, Univ_3);
              if (succeeded)
              {
                Int16_11 = ((int16_t) (MR_Word) conv6_Int16_11);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
{
#define MR_PROC_LABEL mercury__term_to_xml__primitive_value_2_p_0

	int16_t I16;
	MR_String S;

	I16 = Int16_11 ;
		{

    char buffer[7]; // 1 for sign, 5 for digits, 1 for nul.
    sprintf(buffer, "%" PRId16, I16);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	*PrimValue_4  = S;
}
                succeeded = MR_TRUE;
              }
              else
              {
                int32_t Int32_12;
                MR_Box conv7_Int32_12;

                succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), &conv7_Int32_12, Univ_3);
                if (succeeded)
                {
                  Int32_12 = ((int32_t) (MR_Word) conv7_Int32_12);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
{
#define MR_PROC_LABEL mercury__term_to_xml__primitive_value_2_p_0

	int32_t I32;
	MR_String S;

	I32 = Int32_12 ;
		{

    char buffer[12]; // 1 for sign, 10 for digits, 1 for nul.
    sprintf(buffer, "%" PRId32, I32);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	*PrimValue_4  = S;
}
                  succeeded = MR_TRUE;
                }
                else
                {
                  int64_t Int64_13;
                  MR_Box conv8_Int64_13;

                  succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0), &conv8_Int64_13, Univ_3);
                  if (succeeded)
                  {
                    Int64_13 = MR_unbox_int64(conv8_Int64_13);
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
{
#define MR_PROC_LABEL mercury__term_to_xml__primitive_value_2_p_0

	int64_t I64;
	MR_String S;

	I64 = Int64_13 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" PRId64, I64);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	*PrimValue_4  = S;
}
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    uint8_t UInt8_14;
                    MR_Box conv9_UInt8_14;

                    succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), &conv9_UInt8_14, Univ_3);
                    if (succeeded)
                    {
                      UInt8_14 = ((uint8_t) (MR_Word) conv9_UInt8_14);
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
{
#define MR_PROC_LABEL mercury__term_to_xml__primitive_value_2_p_0

	uint8_t U8;
	MR_String S;

	U8 = UInt8_14 ;
		{

    // Use a larger buffer than necessary (3 bytes for digits, 1 for nul)
    // to avoid spurious warning from gcc -Werror=format-overflow.
    char buffer[24];
    sprintf(buffer, "%" PRIu8, U8);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	*PrimValue_4  = S;
}
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      uint16_t UInt16_15;
                      MR_Box conv10_UInt16_15;

                      succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), &conv10_UInt16_15, Univ_3);
                      if (succeeded)
                      {
                        UInt16_15 = ((uint16_t) (MR_Word) conv10_UInt16_15);
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
{
#define MR_PROC_LABEL mercury__term_to_xml__primitive_value_2_p_0

	uint16_t U16;
	MR_String S;

	U16 = UInt16_15 ;
		{

    char buffer[6]; // 5 for digits, 1 for nul.
    sprintf(buffer, "%" PRIu16, U16);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	*PrimValue_4  = S;
}
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        uint32_t UInt32_16;
                        MR_Box conv11_UInt32_16;

                        succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), &conv11_UInt32_16, Univ_3);
                        if (succeeded)
                        {
                          UInt32_16 = ((uint32_t) (MR_Word) conv11_UInt32_16);
                          succeeded = MR_TRUE;
                        }
                        if (succeeded)
                        {
{
#define MR_PROC_LABEL mercury__term_to_xml__primitive_value_2_p_0

	uint32_t U32;
	MR_String S;

	U32 = UInt32_16 ;
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
	*PrimValue_4  = S;
}
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          uint64_t UInt64_17;
                          MR_Box conv12_UInt64_17;

                          succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0), &conv12_UInt64_17, Univ_3);
                          if (succeeded)
                          {
                            UInt64_17 = MR_unbox_uint64(conv12_UInt64_17);
                            succeeded = MR_TRUE;
                          }
                          if (succeeded)
                          {
{
#define MR_PROC_LABEL mercury__term_to_xml__primitive_value_2_p_0

	uint64_t U64;
	MR_String S;

	U64 = UInt64_17 ;
		{

    char buffer[21]; // 20 for digits, 1 for nul.
    sprintf(buffer, "%" PRIu64, U64);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	*PrimValue_4  = S;
}
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv3_Element_7;
  MR_Word conv2_AttrFromSources_8;

  mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Element_7, &conv2_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv3_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv2_AttrFromSources_8));
}

static void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv1_Element_7;
  MR_Word conv0_AttrFromSources_8;

  mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Element_7, &conv0_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv1_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv0_AttrFromSources_8));
}

void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0(
  MR_Word TypeClassInfo_for_writer_46,
  MR_Box Stream_7,
  MR_Word TypeDesc_8,
  MR_Word ElementMapping_9,
  MR_Word * DTDResult_10,
  MR_Box STATE_VARIABLE_State_0_23,
  MR_Box * STATE_VARIABLE_State_24)
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
            MR_Word TypeInfo_57_57;
            MR_Word TypeInfo_58_58;
            MR_Word TypeInfo_59_59;
            MR_Word Var_25;
            MR_Word Var_26;
            MR_Word Var_27;
            MR_Word Var_28;
            MR_Word Var_52;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word ArgX1_60;
            MR_Word ArgX2_62;
            MR_Word ArgY2_63;
            MR_Word ArgX1_70;
            MR_Word ArgX2_72;
            MR_Word ArgY2_73;
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
                MakeElement_12 = ((MR_Word) ((MR_hl_field(1, ElementMapping_9, (MR_Integer) 0))));
                break;
            }
            {
              Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_26, 0) = NULL;
              MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_27, 0) = NULL;
              MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__term_to_xml__get_elements_and_args_7_p_0(MakeElement_12, TypeDesc_8, &Var_25, &Var_52, &Var_53, &Var_28, &Var_17);
            succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ArgX1_60 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 0))));
              ArgY2_63 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 1))));
              (MR_hl_field(1, Var_26, (MR_Integer) 0)) = ((MR_Box) (ArgX1_60));
              ArgX2_62 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 1))));
              succeeded = mercury__list____Unify____list_1_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[1]), ArgX2_62, ArgY2_63);
              if (succeeded)
              {
                TypeInfo_57_57 = (MR_Word) (&mercury__term_to_xml_scalar_common_1[2]);
                succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ArgX1_70 = ((MR_Word) ((MR_hl_field(1, Var_53, (MR_Integer) 0))));
                  ArgY2_73 = ((MR_Word) ((MR_hl_field(1, Var_53, (MR_Integer) 1))));
                  (MR_hl_field(1, Var_27, (MR_Integer) 0)) = ((MR_Box) (ArgX1_70));
                  ArgX2_72 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 1))));
                  succeeded = mercury__list____Unify____list_1_0(TypeInfo_57_57, ArgX2_72, ArgY2_73);
                  if (succeeded)
                  {
                    succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      RootElement_13 = ((MR_String) ((MR_hl_field(1, Var_25, (MR_Integer) 0))));
                      Var_54 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 1))));
                      TypeInfo_58_58 = (MR_Word) (&mercury__term_to_xml_scalar_common_1[7]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_58_58, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_54)));
                      if (succeeded)
                      {
                        succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          PseudoArgTypes_16 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 0))));
                          Var_55 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 1))));
                          TypeInfo_59_59 = (MR_Word) (&mercury__term_to_xml_scalar_common_1[8]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_59_59, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_55)));
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

              ArgTypes_18 = mercury__term_to_xml__map__ho24_2_f_in__list_0(PseudoArgTypes_16);
              func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_46, (MR_Integer) 0)), (MR_Integer) 5))));
              func_4(((MR_Box) (TypeClassInfo_for_writer_46)), Stream_7, ((MR_Box) ((MR_String) "<!DOCTYPE ")), STATE_VARIABLE_State_0_23, &STATE_VARIABLE_State_35_35);
              func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_46, (MR_Integer) 0)), (MR_Integer) 5))));
              func_5(((MR_Box) (TypeClassInfo_for_writer_46)), Stream_7, ((MR_Box) (RootElement_13)), STATE_VARIABLE_State_35_35, &STATE_VARIABLE_State_36_36);
              func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_46, (MR_Integer) 0)), (MR_Integer) 5))));
              func_6(((MR_Box) (TypeClassInfo_for_writer_46)), Stream_7, ((MR_Box) ((MR_String) " [\n\n")), STATE_VARIABLE_State_36_36, &STATE_VARIABLE_State_38_38);
              {
                Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_39, 0) = ((MR_Box) (TypeDesc_8));
                MR_hl_field(1, Var_39, 1) = ((MR_Box) (ArgTypes_18));
              }
              mercury__term_to_xml__write_dtd_types_6_p_0(TypeClassInfo_for_writer_46, Stream_7, MakeElement_12, Var_39, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_State_38_38, &STATE_VARIABLE_State_41_41);
              func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_46, (MR_Integer) 0)), (MR_Integer) 5))));
              func_7(((MR_Box) (TypeClassInfo_for_writer_46)), Stream_7, ((MR_Box) ((MR_String) "\n]>")), STATE_VARIABLE_State_41_41, STATE_VARIABLE_State_24);
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_to_xml.write_dtd_from_type\'/6", (MR_String) "not ok to generate DTD");
                return;
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

static void MR_CALL 
mercury__term_to_xml__write_dtd_types_6_p_0(
  MR_Word TypeClassInfo_for_writer_28,
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
      MR_Word TypeDesc_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TypeDescs_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
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
        MR_Word Elements_33;
        MR_Word MaybeFunctors_34;
        MR_Word MaybeArities_35;
        MR_Word ArgPseudoTypeLists_36;
        MR_Word AttributeLists_37;
        MR_Word ArgTypeLists_38;
        MR_Box STATE_VARIABLE_State_23_42;
        MR_String Var_43;
        MR_Box STATE_VARIABLE_State_25_44;
        MR_Box STATE_VARIABLE_State_27_46;
        MR_Word Var_50;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_AlreadyDone_4;
        MR_Box next_value_of_STATE_VARIABLE_State_0_5;

        mercury__term_to_xml__get_elements_and_args_7_p_0(MakeElement_2, TypeDesc_15, &Elements_33, &MaybeFunctors_34, &MaybeArities_35, &ArgPseudoTypeLists_36, &AttributeLists_37);
        ArgTypeLists_38 = mercury__term_to_xml__map__ho7_2_f_in__list_0(ArgPseudoTypeLists_36);
        mercury__list__reverse_2_p_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[4]), ArgTypeLists_38, &Var_50);
        mercury__list__condense_acc_3_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), Var_50, (MR_Word) ((MR_Unsigned) 0U), &ChildArgTypes_20);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_28, (MR_Integer) 0)), (MR_Integer) 5))));
        func_1(((MR_Box) (TypeClassInfo_for_writer_28)), Stream_1, ((MR_Box) ((MR_String) "<!-- Elements for functors of type \"")), STATE_VARIABLE_State_0_5, &STATE_VARIABLE_State_23_42);
        Var_43 = mercury__type_desc__type_name_1_f_0(TypeDesc_15);
        mercury__term_to_xml__write_xml_escaped_string_4_p_0(TypeClassInfo_for_writer_28, Stream_1, Var_43, STATE_VARIABLE_State_23_42, &STATE_VARIABLE_State_25_44);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_28, (MR_Integer) 0)), (MR_Integer) 5))));
        func_2(((MR_Box) (TypeClassInfo_for_writer_28)), Stream_1, ((MR_Box) ((MR_String) "\" -->\n\n")), STATE_VARIABLE_State_25_44, &STATE_VARIABLE_State_27_46);
        mercury__term_to_xml__write_dtd_entries_10_p_0(TypeClassInfo_for_writer_28, Stream_1, MakeElement_2, TypeDesc_15, Elements_33, MaybeFunctors_34, MaybeArities_35, ArgTypeLists_38, AttributeLists_37, STATE_VARIABLE_State_27_46, &STATE_VARIABLE_State_25_25);
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
mercury__term_to_xml__map__ho7_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_8;
    MR_Word * AddrSCCcallarg_9_17;

    Var_8 = mercury__term_to_xml__map__ho24_2_f_in__list_0(Var_6);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_17 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__term_to_xml__LCMC__func__map__ho7__1_3_p_0(Var_7, AddrSCCcallarg_9_17);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__term_to_xml__LCMC__func__map__ho7__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_18 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg_9_17;
      MR_Word HeadVar__3_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_18;

      Var_8 = mercury__term_to_xml__map__ho24_2_f_in__list_0(Var_6);
      {
        HeadVar__3_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_19, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_19, 1) = NULL;
      }
      AddrSCCcallarg_9_17 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_19, (MR_Integer) 1)));
      *AddrOfHeadVar__3_18 = HeadVar__3_19;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_18 = AddrSCCcallarg_9_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_18 = next_value_of_AddrOfHeadVar__3_18;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho24_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_8;
    MR_Word * AddrSCCcallarg_9_12;

    Var_8 = mercury__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_f_0(Var_6);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__term_to_xml__LCMC__func__map__ho24__1_3_p_0(Var_7, AddrSCCcallarg_9_12);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__term_to_xml__LCMC__func__map__ho24__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg_9_12;
      MR_Word HeadVar__3_14;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_13;

      Var_8 = mercury__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_f_0(Var_6);
      {
        HeadVar__3_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_14, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_14, 1) = NULL;
      }
      AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_14, (MR_Integer) 1)));
      *AddrOfHeadVar__3_13 = HeadVar__3_14;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_13 = AddrSCCcallarg_9_12;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_13 = next_value_of_AddrOfHeadVar__3_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__term_to_xml__write_dtd_entries_10_p_0(
  MR_Word TypeClassInfo_for_writer_78,
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
      MR_String Element_24 = ((MR_String) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Elements_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word MaybeFunctor_31;
      MR_Word MaybeFunctors_32;
      MR_Word MaybeArity_33;
      MR_Word MaybeArities_34;
      MR_Word ArgTypeList_35;
      MR_Word ArgTypeLists_36;
      MR_Word AttributeList_37;
      MR_Word AttributeLists_38;
      MR_Box STATE_VARIABLE_State_53_53;
      MR_Box STATE_VARIABLE_State_54_54;
      MR_Box STATE_VARIABLE_State_56_56;
      MR_Box STATE_VARIABLE_State_58_58;
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

      mercury__list__det_head_tail_3_p_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[1]), MaybeFunctorList_5, &conv0_MaybeFunctor_31, &MaybeFunctors_32);
      MaybeFunctor_31 = ((MR_Word) (conv0_MaybeFunctor_31));
      mercury__list__det_head_tail_3_p_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[2]), MaybeArityList_6, &conv1_MaybeArity_33, &MaybeArities_34);
      MaybeArity_33 = ((MR_Word) (conv1_MaybeArity_33));
      mercury__list__det_head_tail_3_p_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[4]), ArgTypeListList_7, &conv2_ArgTypeList_35, &ArgTypeLists_36);
      ArgTypeList_35 = ((MR_Word) (conv2_ArgTypeList_35));
      mercury__list__det_head_tail_3_p_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[3]), AttributeListList_8, &conv3_AttributeList_37, &AttributeLists_38);
      AttributeList_37 = ((MR_Word) (conv3_AttributeList_37));
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_78, (MR_Integer) 0)), (MR_Integer) 5))));
      func_4(((MR_Box) (TypeClassInfo_for_writer_78)), Stream_1, ((MR_Box) ((MR_String) "<!ELEMENT ")), STATE_VARIABLE_State_0_9, &STATE_VARIABLE_State_53_53);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_78, (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) (TypeClassInfo_for_writer_78)), Stream_1, ((MR_Box) (Element_24)), STATE_VARIABLE_State_53_53, &STATE_VARIABLE_State_54_54);
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_78, (MR_Integer) 0)), (MR_Integer) 5))));
      func_6(((MR_Box) (TypeClassInfo_for_writer_78)), Stream_1, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_54_54, &STATE_VARIABLE_State_56_56);
      succeeded = mercury__term_to_xml__is_primitive_type_2_p_0(TypeDesc_3, &Var_39);
      if (succeeded)
      {
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_78, (MR_Integer) 0)), (MR_Integer) 5))));

        func_7(((MR_Box) (TypeClassInfo_for_writer_78)), Stream_1, ((MR_Box) ((MR_String) "(#PCDATA)")), STATE_VARIABLE_State_56_56, &STATE_VARIABLE_State_58_58);
      }
      else
      if ((ArgTypeList_35 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_78, (MR_Integer) 0)), (MR_Integer) 5))));

        func_8(((MR_Box) (TypeClassInfo_for_writer_78)), Stream_1, ((MR_Box) ((MR_String) "EMPTY")), STATE_VARIABLE_State_56_56, &STATE_VARIABLE_State_58_58);
      }
      else
      {
        MR_Word Head_40 = ((MR_Word) ((MR_hl_field(1, ArgTypeList_35, (MR_Integer) 0))));
        MR_Word Tail_41 = ((MR_Word) ((MR_hl_field(1, ArgTypeList_35, (MR_Integer) 1))));
        MR_Word Braces_44;
        MR_Word AllowedFunctorsRegexs_47;
        MR_String AllowedFunctorsRegex_48;
        MR_Box STATE_VARIABLE_State_63_63;
        MR_Box STATE_VARIABLE_State_65_65;
        MR_Box STATE_VARIABLE_State_68_68;
        MR_Box STATE_VARIABLE_State_70_70;
        MR_Word PseudoTypeDesc_85;
        MR_Word TypeCtor_86;
        MR_Word ArgPseudoTypes_87;
        MR_Word Var_88;
        MR_String Var_89;
        MR_String Var_90;
        MR_String Var_91;
        MR_Integer Var_92;
        MR_String Var_93;
        MR_Integer Var_94;
        void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Word PseudoTypeDesc_95;
        MR_Word TypeCtor_96;
        MR_Word ArgPseudoTypes_97;
        MR_Word Var_98;
        MR_String Var_99;
        MR_String Var_100;
        MR_String Var_101;
        MR_Integer Var_102;
        MR_String Var_103;
        MR_Integer Var_104;

        if ((Tail_41 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Integer HeadNumFunctors_45;
          MR_Integer Var_61;

{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_entries_10_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo = Head_40 ;
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
	HeadNumFunctors_45  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
          {
            Var_61 = (MR_Integer) 1;
            succeeded = (HeadNumFunctors_45 > Var_61);
          }
          if (succeeded)
            Braces_44 = (MR_Integer) 0;
          else
            Braces_44 = (MR_Integer) 1;
        }
        else
          Braces_44 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_entries_10_p_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc = TypeDesc_3 ;
		{

    PseudoTypeDesc = TypeDesc;


		;}
#undef MR_PROC_LABEL
	PseudoTypeDesc_85  = PseudoTypeDesc;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_entries_10_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc = PseudoTypeDesc_85 ;
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
	TypeCtor_86  = TypeCtorDesc;
	ArgPseudoTypes_87  = ArgPseudoTypeInfos;
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
          succeeded = (ArgPseudoTypes_87 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_88 = ((MR_Word) ((MR_hl_field(1, ArgPseudoTypes_87, (MR_Integer) 1))));
            succeeded = (Var_88 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_entries_10_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtor_86 ;
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
	Var_91  = TypeCtorModuleName;
	Var_89  = TypeCtorName;
	Var_92  = TypeCtorArity;
}
              succeeded = (strcmp(Var_89, (MR_String) "array") == 0);
              if (succeeded)
              {
{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_entries_10_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtor_86 ;
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
	Var_90  = TypeCtorModuleName;
	Var_93  = TypeCtorName;
	Var_94  = TypeCtorArity;
}
                succeeded = (strcmp(Var_90, (MR_String) "array") == 0);
              }
            }
          }
        }
        if (succeeded)
        {
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_78, (MR_Integer) 0)), (MR_Integer) 5))));

          func_9(((MR_Box) (TypeClassInfo_for_writer_78)), Stream_1, ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_State_56_56, &STATE_VARIABLE_State_63_63);
        }
        else
          STATE_VARIABLE_State_63_63 = STATE_VARIABLE_State_56_56;
        switch (Braces_44) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_State_65_65 = STATE_VARIABLE_State_63_63;
            break;
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_78, (MR_Integer) 0)), (MR_Integer) 5))));

              func_10(((MR_Box) (TypeClassInfo_for_writer_78)), Stream_1, ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_State_63_63, &STATE_VARIABLE_State_65_65);
            }
            break;
        }
        AllowedFunctorsRegexs_47 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_f_in__list_0(MakeElement_2, ArgTypeList_35);
        AllowedFunctorsRegex_48 = mercury__string__join_list_2_f_0((MR_String) ",", AllowedFunctorsRegexs_47);
        func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_78, (MR_Integer) 0)), (MR_Integer) 5))));
        func_11(((MR_Box) (TypeClassInfo_for_writer_78)), Stream_1, ((MR_Box) (AllowedFunctorsRegex_48)), STATE_VARIABLE_State_65_65, &STATE_VARIABLE_State_68_68);
        switch (Braces_44) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_State_70_70 = STATE_VARIABLE_State_68_68;
            break;
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_78, (MR_Integer) 0)), (MR_Integer) 5))));

              func_12(((MR_Box) (TypeClassInfo_for_writer_78)), Stream_1, ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_State_68_68, &STATE_VARIABLE_State_70_70);
            }
            break;
        }
{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_entries_10_p_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc = TypeDesc_3 ;
		{

    PseudoTypeDesc = TypeDesc;


		;}
#undef MR_PROC_LABEL
	PseudoTypeDesc_95  = PseudoTypeDesc;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_entries_10_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc = PseudoTypeDesc_95 ;
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
	TypeCtor_96  = TypeCtorDesc;
	ArgPseudoTypes_97  = ArgPseudoTypeInfos;
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
          succeeded = (ArgPseudoTypes_97 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_98 = ((MR_Word) ((MR_hl_field(1, ArgPseudoTypes_97, (MR_Integer) 1))));
            succeeded = (Var_98 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_entries_10_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtor_96 ;
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
	Var_101  = TypeCtorModuleName;
	Var_99  = TypeCtorName;
	Var_102  = TypeCtorArity;
}
              succeeded = (strcmp(Var_99, (MR_String) "array") == 0);
              if (succeeded)
              {
{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_entries_10_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtor_96 ;
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
	Var_100  = TypeCtorModuleName;
	Var_103  = TypeCtorName;
	Var_104  = TypeCtorArity;
}
                succeeded = (strcmp(Var_100, (MR_String) "array") == 0);
              }
            }
          }
        }
        if (succeeded)
        {
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_78, (MR_Integer) 0)), (MR_Integer) 5))));

          func_13(((MR_Box) (TypeClassInfo_for_writer_78)), Stream_1, ((MR_Box) ((MR_String) "*)")), STATE_VARIABLE_State_70_70, &STATE_VARIABLE_State_58_58);
        }
        else
          STATE_VARIABLE_State_58_58 = STATE_VARIABLE_State_70_70;
      }
      func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_78, (MR_Integer) 0)), (MR_Integer) 5))));
      func_14(((MR_Box) (TypeClassInfo_for_writer_78)), Stream_1, ((MR_Box) ((MR_String) ">\n")), STATE_VARIABLE_State_58_58, &STATE_VARIABLE_State_74_74);
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_55_44_32_56_93_95_48_4_p_in__list_0(TypeClassInfo_for_writer_78, Stream_1, Element_24, MaybeFunctor_31, MaybeArity_33, TypeDesc_3, AttributeList_37, STATE_VARIABLE_State_74_74, &STATE_VARIABLE_State_75_75);
      func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_78, (MR_Integer) 0)), (MR_Integer) 5))));
      func_15(((MR_Box) (TypeClassInfo_for_writer_78)), Stream_1, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_75_75, &STATE_VARIABLE_State_77_77);
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

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_55_44_32_56_93_95_48_4_p_in__list_0(
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
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      mercury__term_to_xml__write_dtd_attlist_8_p_0(Var_16, Var_17, Var_18, Var_19, Var_20, Var_21, Var_9, HeadVar__3_3, &Var_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__term_to_xml__write_dtd_attlist_8_p_0(
  MR_Word TypeClassInfo_for_writer_33,
  MR_Box Stream_9,
  MR_String Element_10,
  MR_Word MaybeFunctor_11,
  MR_Word MaybeArity_12,
  MR_Word TypeDesc_13,
  MR_Word HeadVar__6_6,
  MR_Box STATE_VARIABLE_State_0_19,
  MR_Box * STATE_VARIABLE_State_20)
{
  MR_String Name_14 = ((MR_String) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 0))));
  MR_Word Source_15 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 1))) & (MR_Integer) 3);
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
        MR_Integer Arity_18 = ((MR_Integer) ((MR_hl_field(1, MaybeArity_12, (MR_Integer) 0))));
        MR_String Var_21;

{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_attlist_8_p_0

	MR_Integer I;
	MR_String S;

	I = Arity_18 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_21  = S;
}
        {
          MaybeValue_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeValue_17, 0) = ((MR_Box) (Var_21));
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
        MR_String Var_22;

        Var_22 = mercury__type_desc__type_name_1_f_0(TypeDesc_13);
        {
          MaybeValue_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeValue_17, 0) = ((MR_Box) (Var_22));
        }
      }
      break;
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) ((MR_String) "<!ATTLIST ")), STATE_VARIABLE_State_0_19, &STATE_VARIABLE_State_24_24);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));
  func_1(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) (Element_10)), STATE_VARIABLE_State_24_24, &STATE_VARIABLE_State_25_25);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_25_25, &STATE_VARIABLE_State_27_27);
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));
  func_3(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) (Name_14)), STATE_VARIABLE_State_27_27, &STATE_VARIABLE_State_28_28);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));
  func_4(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) ((MR_String) " CDATA ")), STATE_VARIABLE_State_28_28, &STATE_VARIABLE_State_30_30);
  switch (Source_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      if ((MaybeValue_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));

        func_5(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) ((MR_String) "#IMPLIED")), STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_31_31);
      }
      else
      {
        MR_String Value_68 = ((MR_String) ((MR_hl_field(1, MaybeValue_17, (MR_Integer) 0))));
        MR_Box STATE_VARIABLE_State_57_72;
        MR_Box STATE_VARIABLE_State_58_73;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_6(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_57_72);
        mercury__term_to_xml__write_xml_escaped_string_4_p_0(TypeClassInfo_for_writer_33, Stream_9, Value_68, STATE_VARIABLE_State_57_72, &STATE_VARIABLE_State_58_73);
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));
        func_7(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) ((MR_String) "\"")), STATE_VARIABLE_State_58_73, &STATE_VARIABLE_State_31_31);
      }
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));

        func_8(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) ((MR_String) "#IMPLIED")), STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_31_31);
      }
      break;
    case (MR_Integer) 0:
      if ((MaybeValue_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));

        func_9(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) ((MR_String) "#IMPLIED")), STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_31_31);
      }
      else
      {
        MR_String Value_39 = ((MR_String) ((MR_hl_field(1, MaybeValue_17, (MR_Integer) 0))));
        MR_Box STATE_VARIABLE_State_18_43;
        MR_Box STATE_VARIABLE_State_19_44;
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));
        void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_10(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_18_43);
        mercury__term_to_xml__write_xml_escaped_string_4_p_0(TypeClassInfo_for_writer_33, Stream_9, Value_39, STATE_VARIABLE_State_18_43, &STATE_VARIABLE_State_19_44);
        func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));
        func_11(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) ((MR_String) "\"")), STATE_VARIABLE_State_19_44, &STATE_VARIABLE_State_31_31);
      }
      break;
    case (MR_Integer) 2:
      if ((MaybeValue_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));

        func_12(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) ((MR_String) "#REQUIRED")), STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_31_31);
      }
      else
      {
        MR_String Value_56 = ((MR_String) ((MR_hl_field(1, MaybeValue_17, (MR_Integer) 0))));
        MR_Box STATE_VARIABLE_State_41_60;
        MR_Box STATE_VARIABLE_State_42_61;
        void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));
        void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_13(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_41_60);
        mercury__term_to_xml__write_xml_escaped_string_4_p_0(TypeClassInfo_for_writer_33, Stream_9, Value_56, STATE_VARIABLE_State_41_60, &STATE_VARIABLE_State_42_61);
        func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));
        func_14(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) ((MR_String) "\"")), STATE_VARIABLE_State_42_61, &STATE_VARIABLE_State_31_31);
      }
      break;
  }
  func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5))));
  func_15(((MR_Box) (TypeClassInfo_for_writer_33)), Stream_9, ((MR_Box) ((MR_String) ">\n")), STATE_VARIABLE_State_31_31, STATE_VARIABLE_State_20);
}

static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_8;
    MR_Word * AddrSCCcallarg_9_13;

    Var_8 = mercury__term_to_xml__dtd_allowed_functors_regex_2_f_0(Var_12, Var_6);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_13 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__term_to_xml__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_95_95_49_3_p_0(Var_12, Var_7, AddrSCCcallarg_9_13);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__term_to_xml__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_95_95_49_3_p_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_8;
      MR_Word * AddrSCCcallarg_9_13;
      MR_Word HeadVar__3_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_14;

      Var_8 = mercury__term_to_xml__dtd_allowed_functors_regex_2_f_0(Var_12, Var_6);
      {
        HeadVar__3_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_15, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_15, 1) = NULL;
      }
      AddrSCCcallarg_9_13 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_15, (MR_Integer) 1)));
      *AddrOfHeadVar__3_14 = HeadVar__3_15;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_14 = AddrSCCcallarg_9_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_14 = next_value_of_AddrOfHeadVar__3_14;
      continue;
    }
    break;
  }
}

static MR_String MR_CALL 
mercury__term_to_xml__dtd_allowed_functors_regex_2_f_0(
  MR_Word MakeElement_4,
  MR_Word TypeDesc_5)
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

static void MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv3_Element_7;
  MR_Word conv2_AttrFromSources_8;

  mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Element_7, &conv2_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv3_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv2_AttrFromSources_8));
}

static void MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv1_Element_7;
  MR_Word conv0_AttrFromSources_8;

  mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Element_7, &conv0_AttrFromSources_8);
  *wrapper_arg_3 = ((MR_Box) (conv1_Element_7));
  *wrapper_arg_4 = ((MR_Box) (conv0_AttrFromSources_8));
}

MR_Word MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0(
  MR_Word ElementMapping_4,
  MR_Word TypeDesc_5)
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
  MR_String ArgX1_41;
  MR_Word ArgX2_43;
  MR_Word ArgY2_44;
  MR_Word ArgX1_51;
  MR_Word ArgX2_53;
  MR_Word ArgY2_54;
  MR_Word ArgX1_61;
  MR_Word ArgX2_63;
  MR_Word ArgY2_64;
  MR_Word ArgX1_71;
  MR_Word ArgX2_73;
  MR_Word ArgY2_74;
  MR_Word ArgX1_81;
  MR_Word ArgX2_83;
  MR_Word ArgY2_84;

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
      MakeElement_7 = ((MR_Word) ((MR_hl_field(1, ElementMapping_4, (MR_Integer) 0))));
      break;
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = NULL;
    MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = NULL;
    MR_hl_field(1, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = NULL;
    MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = NULL;
    MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = NULL;
    MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__term_to_xml__get_elements_and_args_7_p_0(MakeElement_7, TypeDesc_5, &Var_31, &Var_32, &Var_33, &Var_34, &Var_35);
  succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ArgX1_41 = ((MR_String) ((MR_hl_field(1, Var_31, (MR_Integer) 0))));
    ArgY2_44 = ((MR_Word) ((MR_hl_field(1, Var_31, (MR_Integer) 1))));
    (MR_hl_field(1, Var_14, (MR_Integer) 0)) = ((MR_Box) (ArgX1_41));
    ArgX2_43 = ((MR_Word) ((MR_hl_field(1, Var_14, (MR_Integer) 1))));
    succeeded = mercury__list____Unify____list_1_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgX2_43, ArgY2_44);
    if (succeeded)
    {
      TypeInfo_37_37 = (MR_Word) (&mercury__term_to_xml_scalar_common_1[1]);
      succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgX1_51 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 0))));
        ArgY2_54 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 1))));
        (MR_hl_field(1, Var_15, (MR_Integer) 0)) = ((MR_Box) (ArgX1_51));
        ArgX2_53 = ((MR_Word) ((MR_hl_field(1, Var_15, (MR_Integer) 1))));
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_37_37, ArgX2_53, ArgY2_54);
        if (succeeded)
        {
          TypeInfo_38_38 = (MR_Word) (&mercury__term_to_xml_scalar_common_1[2]);
          succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArgX1_61 = ((MR_Word) ((MR_hl_field(1, Var_33, (MR_Integer) 0))));
            ArgY2_64 = ((MR_Word) ((MR_hl_field(1, Var_33, (MR_Integer) 1))));
            (MR_hl_field(1, Var_16, (MR_Integer) 0)) = ((MR_Box) (ArgX1_61));
            ArgX2_63 = ((MR_Word) ((MR_hl_field(1, Var_16, (MR_Integer) 1))));
            succeeded = mercury__list____Unify____list_1_0(TypeInfo_38_38, ArgX2_63, ArgY2_64);
            if (succeeded)
            {
              TypeInfo_39_39 = (MR_Word) (&mercury__term_to_xml_scalar_common_1[0]);
              succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ArgX1_71 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 0))));
                ArgY2_74 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 1))));
                (MR_hl_field(1, Var_17, (MR_Integer) 0)) = ((MR_Box) (ArgX1_71));
                ArgX2_73 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 1))));
                succeeded = mercury__list____Unify____list_1_0(TypeInfo_39_39, ArgX2_73, ArgY2_74);
                if (succeeded)
                {
                  TypeInfo_40_40 = (MR_Word) (&mercury__term_to_xml_scalar_common_1[3]);
                  succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    ArgX1_81 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 0))));
                    ArgY2_84 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 1))));
                    (MR_hl_field(1, Var_18, (MR_Integer) 0)) = ((MR_Box) (ArgX1_81));
                    ArgX2_83 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 1))));
                    succeeded = mercury__list____Unify____list_1_0(TypeInfo_40_40, ArgX2_83, ArgY2_84);
                  }
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

	TypeDesc = TypeDesc_5 ;
		{

    PseudoTypeDesc = TypeDesc;


		;}
#undef MR_PROC_LABEL
	PseudoTypeDesc_13  = PseudoTypeDesc;
}
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (PseudoTypeDesc_13));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Result_6 = mercury__term_to_xml__can_generate_dtd_for_types_4_f_0(MakeElement_7, Var_24, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U));
  }
  else
    Result_6 = (MR_Word) ((MR_Unsigned) 4U);
  return Result_6;
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
      MR_Word PseudoTypeDesc_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PseudoTypeDescs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word TypeDesc_15;

      succeeded = mercury__type_desc__ground_pseudo_type_desc_to_type_desc_2_p_0(PseudoTypeDesc_10, &TypeDesc_15);
      if (succeeded)
      {
        {
          MR_Integer Var_16;
          MR_Integer Var_49;

{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo = TypeDesc_15 ;
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
            Var_49 = (MR_Integer) -1;
            succeeded = (Var_16 > Var_49);
          }
        }
        if (!(succeeded))
        {
          {
            MR_Word PseudoTypeDesc_50;
            MR_Word TypeCtor_51;
            MR_Word ArgPseudoTypes_52;
            MR_Word Var_53;
            MR_String Var_54;
            MR_String Var_55;
            MR_String Var_56;
            MR_Integer Var_57;
            MR_String Var_58;
            MR_Integer Var_59;

{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc = TypeDesc_15 ;
		{

    PseudoTypeDesc = TypeDesc;


		;}
#undef MR_PROC_LABEL
	PseudoTypeDesc_50  = PseudoTypeDesc;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc = PseudoTypeDesc_50 ;
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
	TypeCtor_51  = TypeCtorDesc;
	ArgPseudoTypes_52  = ArgPseudoTypeInfos;
	}
succeeded  = SUCCESS_INDICATOR;
}
            if (succeeded)
            {
              succeeded = (ArgPseudoTypes_52 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_53 = ((MR_Word) ((MR_hl_field(1, ArgPseudoTypes_52, (MR_Integer) 1))));
                succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtor_51 ;
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
	Var_56  = TypeCtorModuleName;
	Var_54  = TypeCtorName;
	Var_57  = TypeCtorArity;
}
                  succeeded = (strcmp(Var_54, (MR_String) "array") == 0);
                  if (succeeded)
                  {
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtor_51 ;
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
	Var_55  = TypeCtorModuleName;
	Var_58  = TypeCtorName;
	Var_59  = TypeCtorArity;
}
                    succeeded = (strcmp(Var_55, (MR_String) "array") == 0);
                  }
                }
              }
            }
          }
          if (!(succeeded))
          {
            MR_String Var_18;

            succeeded = mercury__term_to_xml__is_primitive_type_2_p_0(TypeDesc_15, &Var_18);
          }
        }
        if (succeeded)
        {
          MR_Box conv0_Var_60;

          succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), Done_3, ((MR_Box) (TypeDesc_15)), &conv0_Var_60);
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
            mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_57_95_95_91_50_93_95_48_3_p_in__list_0(ElementsSoFar_4, Elements_19, &DupElements_24);
            if ((DupElements_24 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word NewPseudoTypeDescs_29;
              MR_Word TypeDescList_30;
              MR_Word NewElementsSoFar_31;
              MR_Word NewDone_32;
              MR_Word Var_36;
              MR_Integer Var_37;
              MR_Word Var_61;
              MR_Word next_value_of_HeadVar__2_2;
              MR_Word next_value_of_Done_3;
              MR_Word next_value_of_ElementsSoFar_4;

              mercury__list__reverse_2_p_0((MR_Word) (&mercury__term_to_xml_scalar_common_1[0]), ArgLists_22, &Var_61);
              mercury__list__condense_acc_3_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0), Var_61, (MR_Word) ((MR_Unsigned) 0U), &Var_36);
              mercury__list__merge_and_remove_dups_3_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0), Var_36, PseudoTypeDescs_11, &NewPseudoTypeDescs_29);
              mercury__list__length_acc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Elements_19, (MR_Integer) 0, &Var_37);
              mercury__list__accumulate_n_copies_4_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), Var_37, ((MR_Box) (TypeDesc_15)), (MR_Word) ((MR_Unsigned) 0U), &TypeDescList_30);
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
              MR_String DupElement_25 = ((MR_String) ((MR_hl_field(1, DupElements_24, (MR_Integer) 0))));
              MR_Word DupTypeDesc_27;
              MR_Word DupTypes_28;
              MR_Word Var_34;
              MR_Box conv1_DupTypeDesc_27;

              mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), ElementsSoFar_4, ((MR_Box) (DupElement_25)), &conv1_DupTypeDesc_27);
              DupTypeDesc_27 = ((MR_Word) (conv1_DupTypeDesc_27));
              {
                Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_34, 0) = ((MR_Box) (DupTypeDesc_27));
                MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                DupTypes_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, DupTypes_28, 0) = ((MR_Box) (TypeDesc_15));
                MR_hl_field(1, DupTypes_28, 1) = ((MR_Box) (Var_34));
              }
              {
                HeadVar__5_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, HeadVar__5_5, 0) = ((MR_Box) (DupElement_25));
                MR_hl_field(1, HeadVar__5_5, 1) = ((MR_Box) (DupTypes_28));
              }
            }
          }
        }
        else
          {
            HeadVar__5_5 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, HeadVar__5_5, 0) = ((MR_Box) (TypeDesc_15));
          }
      }
      else
        {
          HeadVar__5_5 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, HeadVar__5_5, 0) = ((MR_Box) (PseudoTypeDesc_10));
        }
    }
    return HeadVar__5_5;
    break;
  }
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_57_95_95_91_50_93_95_48_3_p_in__list_0(
  MR_Word Var_11,
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
      MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Box conv0_Var_15;

      succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), Var_11, ((MR_Box) (Var_6)), &conv0_Var_15);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
      {
        MR_Word * AddrSCCcallarg_9_16;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_6));
          MR_hl_field(1, base, 1) = NULL;
        }
        AddrSCCcallarg_9_16 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 1)));
        mercury__term_to_xml__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_57_95_95_91_50_93_95_48_95_95_49_3_p_0(Var_11, Var_7, AddrSCCcallarg_9_16);
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Var_7;

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
mercury__term_to_xml__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_57_95_95_91_50_93_95_48_95_95_49_3_p_0(
  MR_Word Var_11,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_17 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Box conv0_Var_15;

      succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), Var_11, ((MR_Box) (Var_6)), &conv0_Var_15);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
      {
        MR_Word * AddrSCCcallarg_9_16;
        MR_Word HeadVar__3_18;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word * next_value_of_AddrOfHeadVar__3_17;

        {
          HeadVar__3_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_18, 0) = ((MR_Box) (Var_6));
          MR_hl_field(1, HeadVar__3_18, 1) = NULL;
        }
        AddrSCCcallarg_9_16 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_18, (MR_Integer) 1)));
        *AddrOfHeadVar__3_17 = HeadVar__3_18;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_7;
        next_value_of_AddrOfHeadVar__3_17 = AddrSCCcallarg_9_16;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_17 = next_value_of_AddrOfHeadVar__3_17;
        continue;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Var_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml__is_primitive_type_2_p_0(
  MR_Word TypeDesc_3,
  MR_String * Element_4)
{
  MR_bool succeeded;
  MR_Word Var_44;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
	Var_44  = TypeInfo;
}
  succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_3, Var_44);
  if (succeeded)
  {
    *Element_4 = (MR_String) "String";
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Var_45;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
	Var_45  = TypeInfo;
}
    succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_3, Var_45);
    if (succeeded)
    {
      *Element_4 = (MR_String) "Char";
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_46;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
	Var_46  = TypeInfo;
}
      succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_3, Var_46);
      if (succeeded)
      {
        *Element_4 = (MR_String) "Int";
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Var_47;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
	Var_47  = TypeInfo;
}
        succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_3, Var_47);
        if (succeeded)
        {
          *Element_4 = (MR_String) "Float";
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Var_48;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
	Var_48  = TypeInfo;
}
          succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_3, Var_48);
          if (succeeded)
          {
            *Element_4 = (MR_String) "UInt";
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word Var_49;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
	Var_49  = TypeInfo;
}
            succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_3, Var_49);
            if (succeeded)
            {
              *Element_4 = (MR_String) "Int8";
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Var_50;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
              succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_3, Var_50);
              if (succeeded)
              {
                *Element_4 = (MR_String) "Int16";
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word Var_51;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
                succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_3, Var_51);
                if (succeeded)
                {
                  *Element_4 = (MR_String) "Int32";
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word Var_52;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
                  succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_3, Var_52);
                  if (succeeded)
                  {
                    *Element_4 = (MR_String) "Int64";
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Var_53;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
                    succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_3, Var_53);
                    if (succeeded)
                    {
                      *Element_4 = (MR_String) "UInt8";
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_Word Var_54;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
	Var_54  = TypeInfo;
}
                      succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_3, Var_54);
                      if (succeeded)
                      {
                        *Element_4 = (MR_String) "UInt16";
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word Var_55;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
	Var_55  = TypeInfo;
}
                        succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_3, Var_55);
                        if (succeeded)
                        {
                          *Element_4 = (MR_String) "UInt32";
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          MR_Word Var_56;

{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
	Var_56  = TypeInfo;
}
                          succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_3, Var_56);
                          if (succeeded)
                          {
                            *Element_4 = (MR_String) "UInt64";
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
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
  MR_bool succeeded;
  MR_Integer NumFunctors_15;
  MR_Integer Var_78;

{
#define MR_PROC_LABEL mercury__term_to_xml__get_elements_and_args_7_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo = TypeDesc_9 ;
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
    Var_78 = (MR_Integer) -1;
    succeeded = (NumFunctors_15 > Var_78);
  }
  if (succeeded)
  {
    MR_Word FunctorNums_16;
    MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) NumFunctors_15 - (MR_Unsigned) 1);
    MR_Word Functors_17;
    MR_Word Arities_18;
    MR_Word ArgTypeLists0_19;

    mercury__list__successive_integers_4_p_0((MR_Integer) 0, Var_30, (MR_Word) ((MR_Unsigned) 0U), &FunctorNums_16);
    succeeded = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_49_57_95_95_91_50_93_95_48_5_p_in__list_0(TypeDesc_9, FunctorNums_16, &Functors_17, &Arities_18, &ArgTypeLists0_19);
    if (succeeded)
    {
      MR_Word Requests_21;

      *MaybeFunctors_11 = mercury__term_to_xml__map__ho22_2_f_in__list_0(Functors_17);
      *MaybeArities_12 = mercury__term_to_xml__map__ho21_2_f_in__list_0(Arities_18);
      *ArgTypeLists_13 = ArgTypeLists0_19;
      Requests_21 = mercury__term_to_xml__map_corresponding__ho18_3_f_in__list_0(Functors_17, Arities_18);
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_48_95_95_91_51_93_95_48_4_p_in__list_0(MakeElement_8, TypeDesc_9, Requests_21, Elements_10, AttributeLists_14);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_to_xml.get_elements_and_args\'/7", (MR_String) "get_functor failed for discriminated union");
        return;
      }
  }
  else
  {
    MR_String Element_26;
    MR_Word AttrFromSources_27;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, MakeElement_8, (MR_Integer) 1))));
    MR_Box conv2_Element_26;
    MR_Box conv1_AttrFromSources_27;
    MR_Word ArgPseudoTypes_82;
    MR_Word PseudoTypeDesc_80;
    MR_Word TypeCtor_81;
    MR_Word Var_83;
    MR_String Var_84;
    MR_String Var_85;
    MR_String Var_86;
    MR_Integer Var_87;
    MR_String Var_88;
    MR_Integer Var_89;

    func_0(((MR_Box) (MakeElement_8)), ((MR_Box) (TypeDesc_9)), ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Element_26, &conv1_AttrFromSources_27);
    Element_26 = ((MR_String) (conv2_Element_26));
    AttrFromSources_27 = ((MR_Word) (conv1_AttrFromSources_27));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Elements_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Element_26));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *AttributeLists_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (AttrFromSources_27));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *MaybeFunctors_11 = (MR_Word) (MR_mkword(1, &mercury__term_to_xml_scalar_common_1[19]));
    *MaybeArities_12 = (MR_Word) (MR_mkword(1, &mercury__term_to_xml_scalar_common_1[20]));
{
#define MR_PROC_LABEL mercury__term_to_xml__get_elements_and_args_7_p_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc = TypeDesc_9 ;
		{

    PseudoTypeDesc = TypeDesc;


		;}
#undef MR_PROC_LABEL
	PseudoTypeDesc_80  = PseudoTypeDesc;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__get_elements_and_args_7_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc = PseudoTypeDesc_80 ;
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
	TypeCtor_81  = TypeCtorDesc;
	ArgPseudoTypes_82  = ArgPseudoTypeInfos;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ArgPseudoTypes_82 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_83 = ((MR_Word) ((MR_hl_field(1, ArgPseudoTypes_82, (MR_Integer) 1))));
        succeeded = (Var_83 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__term_to_xml__get_elements_and_args_7_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtor_81 ;
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
	Var_86  = TypeCtorModuleName;
	Var_84  = TypeCtorName;
	Var_87  = TypeCtorArity;
}
          succeeded = (strcmp(Var_84, (MR_String) "array") == 0);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__term_to_xml__get_elements_and_args_7_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtor_81 ;
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
	Var_85  = TypeCtorModuleName;
	Var_88  = TypeCtorName;
	Var_89  = TypeCtorArity;
}
            succeeded = (strcmp(Var_85, (MR_String) "array") == 0);
          }
        }
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ArgTypeLists_13 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ArgPseudoTypes_82));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
      *ArgTypeLists_13 = (MR_Word) (MR_mkword(1, &mercury__term_to_xml_scalar_common_1[21]));
  }
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_48_95_95_91_51_93_95_48_4_p_in__list_0(
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
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_9;
    MR_Word Var_11;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, Var_16, (MR_Integer) 1))));
    MR_Box conv2_Var_9;
    MR_Box conv1_Var_11;
    MR_Word * AddrSCCcallarg_12_18;
    MR_Word * AddrSCCcallarg_10_19;

    func_0(((MR_Box) (Var_16)), ((MR_Box) (Var_17)), ((MR_Box) (Var_7)), &conv2_Var_9, &conv1_Var_11);
    Var_9 = ((MR_String) (conv2_Var_9));
    Var_11 = ((MR_Word) (conv1_Var_11));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrSCCcallarg_10_19 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 1)));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrSCCcallarg_12_18 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
    mercury__term_to_xml__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_48_95_95_91_51_93_95_48_95_95_49_4_p_0(Var_16, Var_17, Var_8, AddrSCCcallarg_10_19, AddrSCCcallarg_12_18);
  }
}

static void MR_CALL 
mercury__term_to_xml__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_48_95_95_91_51_93_95_48_95_95_49_4_p_0(
  MR_Word Var_16,
  MR_Word Var_17,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_20,
  MR_Word * AddrOfHeadVar__4_21)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__3_20 = (MR_Word) ((MR_Unsigned) 0U);
      *AddrOfHeadVar__4_21 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_9;
      MR_Word Var_11;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, Var_16, (MR_Integer) 1))));
      MR_Box conv2_Var_9;
      MR_Box conv1_Var_11;
      MR_Word * AddrSCCcallarg_12_18;
      MR_Word * AddrSCCcallarg_10_19;
      MR_Word HeadVar__3_22;
      MR_Word HeadVar__4_23;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_20;
      MR_Word * next_value_of_AddrOfHeadVar__4_21;

      func_0(((MR_Box) (Var_16)), ((MR_Box) (Var_17)), ((MR_Box) (Var_7)), &conv2_Var_9, &conv1_Var_11);
      Var_9 = ((MR_String) (conv2_Var_9));
      Var_11 = ((MR_Word) (conv1_Var_11));
      {
        HeadVar__3_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_22, 0) = ((MR_Box) (Var_9));
        MR_hl_field(1, HeadVar__3_22, 1) = NULL;
      }
      AddrSCCcallarg_10_19 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_22, (MR_Integer) 1)));
      *AddrOfHeadVar__3_20 = HeadVar__3_22;
      {
        HeadVar__4_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_23, 0) = ((MR_Box) (Var_11));
        MR_hl_field(1, HeadVar__4_23, 1) = NULL;
      }
      AddrSCCcallarg_12_18 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_23, (MR_Integer) 1)));
      *AddrOfHeadVar__4_21 = HeadVar__4_23;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_8;
      next_value_of_AddrOfHeadVar__3_20 = AddrSCCcallarg_10_19;
      next_value_of_AddrOfHeadVar__4_21 = AddrSCCcallarg_12_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_20 = next_value_of_AddrOfHeadVar__3_20;
      AddrOfHeadVar__4_21 = next_value_of_AddrOfHeadVar__4_21;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_49_57_95_95_91_50_93_95_48_5_p_in__list_0(
  MR_Word Var_20,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
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
    MR_Integer Var_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_10;
    MR_Integer Var_12;
    MR_Word Var_14;
    MR_Word * AddrSCCcallarg_15_21;
    MR_Word * AddrSCCcallarg_13_22;
    MR_Word * AddrSCCcallarg_11_23;

    succeeded = mercury__construct__get_functor_internal_5_p_0(Var_20, Var_8, &Var_10, &Var_12, &Var_14);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_10));
        MR_hl_field(1, base, 1) = NULL;
      }
      AddrSCCcallarg_11_23 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 1)));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_12));
        MR_hl_field(1, base, 1) = NULL;
      }
      AddrSCCcallarg_13_22 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_14));
        MR_hl_field(1, base, 1) = NULL;
      }
      AddrSCCcallarg_15_21 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__5_5, (MR_Integer) 1)));
      succeeded = mercury__term_to_xml__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_49_57_95_95_91_50_93_95_48_95_95_49_5_p_0(Var_20, Var_9, AddrSCCcallarg_11_23, AddrSCCcallarg_13_22, AddrSCCcallarg_15_21);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__term_to_xml__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_49_57_95_95_91_50_93_95_48_95_95_49_5_p_0(
  MR_Word Var_20,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_24,
  MR_Word * AddrOfHeadVar__4_25,
  MR_Word * AddrOfHeadVar__5_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__3_24 = (MR_Word) ((MR_Unsigned) 0U);
      *AddrOfHeadVar__4_25 = (MR_Word) ((MR_Unsigned) 0U);
      *AddrOfHeadVar__5_26 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer Var_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_10;
      MR_Integer Var_12;
      MR_Word Var_14;
      MR_Word * AddrSCCcallarg_15_21;
      MR_Word * AddrSCCcallarg_13_22;
      MR_Word * AddrSCCcallarg_11_23;
      MR_Word HeadVar__3_27;
      MR_Word HeadVar__4_28;
      MR_Word HeadVar__5_29;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_24;
      MR_Word * next_value_of_AddrOfHeadVar__4_25;
      MR_Word * next_value_of_AddrOfHeadVar__5_26;

      succeeded = mercury__construct__get_functor_internal_5_p_0(Var_20, Var_8, &Var_10, &Var_12, &Var_14);
      if (succeeded)
      {
        {
          HeadVar__3_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_27, 0) = ((MR_Box) (Var_10));
          MR_hl_field(1, HeadVar__3_27, 1) = NULL;
        }
        AddrSCCcallarg_11_23 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_27, (MR_Integer) 1)));
        *AddrOfHeadVar__3_24 = HeadVar__3_27;
        {
          HeadVar__4_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__4_28, 0) = ((MR_Box) (Var_12));
          MR_hl_field(1, HeadVar__4_28, 1) = NULL;
        }
        AddrSCCcallarg_13_22 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_28, (MR_Integer) 1)));
        *AddrOfHeadVar__4_25 = HeadVar__4_28;
        {
          HeadVar__5_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__5_29, 0) = ((MR_Box) (Var_14));
          MR_hl_field(1, HeadVar__5_29, 1) = NULL;
        }
        AddrSCCcallarg_15_21 = (MR_Word *) (&(MR_hl_field(1, HeadVar__5_29, (MR_Integer) 1)));
        *AddrOfHeadVar__5_26 = HeadVar__5_29;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_9;
        next_value_of_AddrOfHeadVar__3_24 = AddrSCCcallarg_11_23;
        next_value_of_AddrOfHeadVar__4_25 = AddrSCCcallarg_13_22;
        next_value_of_AddrOfHeadVar__5_26 = AddrSCCcallarg_15_21;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_24 = next_value_of_AddrOfHeadVar__3_24;
        AddrOfHeadVar__4_25 = next_value_of_AddrOfHeadVar__4_25;
        AddrOfHeadVar__5_26 = next_value_of_AddrOfHeadVar__5_26;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho22_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_8;
    MR_Word * AddrSCCcallarg_9_12;

    {
      Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_6));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__term_to_xml__LCMC__func__map__ho22__1_3_p_0(Var_7, AddrSCCcallarg_9_12);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__term_to_xml__LCMC__func__map__ho22__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg_9_12;
      MR_Word HeadVar__3_14;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_13;

      {
        Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_6));
      }
      {
        HeadVar__3_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_14, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_14, 1) = NULL;
      }
      AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_14, (MR_Integer) 1)));
      *AddrOfHeadVar__3_13 = HeadVar__3_14;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_13 = AddrSCCcallarg_9_12;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_13 = next_value_of_AddrOfHeadVar__3_13;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__term_to_xml__map__ho21_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer Var_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_8;
    MR_Word * AddrSCCcallarg_9_12;

    {
      Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_6));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__term_to_xml__LCMC__func__map__ho21__1_3_p_0(Var_7, AddrSCCcallarg_9_12);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__term_to_xml__LCMC__func__map__ho21__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer Var_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg_9_12;
      MR_Word HeadVar__3_14;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_13;

      {
        Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_6));
      }
      {
        HeadVar__3_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_14, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_14, 1) = NULL;
      }
      AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_14, (MR_Integer) 1)));
      *AddrOfHeadVar__3_13 = HeadVar__3_14;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_13 = AddrSCCcallarg_9_12;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_13 = next_value_of_AddrOfHeadVar__3_13;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__term_to_xml__map_corresponding__ho18_3_f_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word HeadVar__4_4;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
  else
  {
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_33 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_2_p_0((MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
    else
    {
      MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_23;
      MR_Word * AddrSCCcallarg_24_34;

      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_33));
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_21));
      }
      {
        HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (Var_23));
        MR_hl_field(1, HeadVar__4_4, 1) = NULL;
      }
      AddrSCCcallarg_24_34 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1)));
      mercury__term_to_xml__LCMC__func__map_corresponding__ho18__1_4_p_0(Var_32, Var_22, AddrSCCcallarg_24_34);
    }
  }
  return HeadVar__4_4;
}

static void MR_CALL 
mercury__term_to_xml__LCMC__func__map_corresponding__ho18__1_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_35)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__4_35 = (MR_Word) ((MR_Unsigned) 0U);
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
          return;
        }
    else
    {
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_33 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
          return;
        }
      else
      {
        MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Var_23;
        MR_Word * AddrSCCcallarg_24_34;
        MR_Word HeadVar__4_36;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word * next_value_of_AddrOfHeadVar__4_35;

        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_33));
          MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_21));
        }
        {
          HeadVar__4_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__4_36, 0) = ((MR_Box) (Var_23));
          MR_hl_field(1, HeadVar__4_36, 1) = NULL;
        }
        AddrSCCcallarg_24_34 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_36, (MR_Integer) 1)));
        *AddrOfHeadVar__4_35 = HeadVar__4_36;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_32;
        next_value_of_HeadVar__3_3 = Var_22;
        next_value_of_AddrOfHeadVar__4_35 = AddrSCCcallarg_24_34;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        AddrOfHeadVar__4_35 = next_value_of_AddrOfHeadVar__4_35;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_5_p_0(
  MR_Word TypeClassInfo_for_xmlable_17,
  MR_Word TypeClassInfo_for_writer_18,
  MR_Box Stream_6,
  MR_Integer Indent_7,
  MR_Box Term_8,
  MR_Box STATE_VARIABLE_State_0_15,
  MR_Box * STATE_VARIABLE_State_16)
{
  MR_bool succeeded;
  MR_Word Root_10;
  MR_Word Children_13;
  MR_Word ChildrenFormat_14;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_xmlable_17, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_Root_10;

  conv1_Root_10 = func_0(((MR_Box) (TypeClassInfo_for_xmlable_17)), Term_8);
  Root_10 = ((MR_Word) (conv1_Root_10));
  Children_13 = ((MR_Word) ((MR_hl_field(0, Root_10, (MR_Integer) 2))));
  succeeded = mercury__term_to_xml__contains_noformat_xml_1_p_0(Children_13);
  if (succeeded)
    ChildrenFormat_14 = (MR_Integer) 1;
  else
    ChildrenFormat_14 = (MR_Integer) 0;
  mercury__term_to_xml__write_xml_element_format_6_p_0(TypeClassInfo_for_writer_18, Stream_6, ChildrenFormat_14, Indent_7, Root_10, STATE_VARIABLE_State_0_15, STATE_VARIABLE_State_16);
}

void MR_CALL 
mercury__term_to_xml__write_xml_doc_4_p_0(
  MR_Word TypeClassInfo_for_xmlable_12,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Box Stream_5,
  MR_Box Term_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  mercury__term_to_xml__write_xml_doc_style_dtd_6_p_0(TypeClassInfo_for_xmlable_12, TypeClassInfo_for_writer_13, Stream_5, Term_6, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 4U), STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_to_xml__write_xml_doc_style_dtd_6_p_0(
  MR_Word TypeClassInfo_for_xmlable_25,
  MR_Word TypeClassInfo_for_writer_26,
  MR_Box Stream_7,
  MR_Box Term_8,
  MR_Word MaybeStyleSheet_9,
  MR_Word MaybeDTD_10,
  MR_Box STATE_VARIABLE_State_0_18,
  MR_Box * STATE_VARIABLE_State_19)
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

  mercury__term_to_xml__write_xml_header_4_p_0(TypeClassInfo_for_writer_26, Stream_7, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_State_0_18, &STATE_VARIABLE_State_21_21);
  if ((MaybeStyleSheet_9 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_State_22_22 = STATE_VARIABLE_State_21_21;
  else
  {
    MR_String Type_27 = ((MR_String) ((MR_hl_field(1, MaybeStyleSheet_9, (MR_Integer) 0))));
    MR_String Href_28 = ((MR_String) ((MR_hl_field(1, MaybeStyleSheet_9, (MR_Integer) 1))));
    MR_Box STATE_VARIABLE_State_13_30;
    MR_Box STATE_VARIABLE_State_14_31;
    MR_Box STATE_VARIABLE_State_16_33;
    MR_Box STATE_VARIABLE_State_17_34;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_26, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_writer_26)), Stream_7, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), STATE_VARIABLE_State_21_21, &STATE_VARIABLE_State_13_30);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_26, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_writer_26)), Stream_7, ((MR_Box) (Type_27)), STATE_VARIABLE_State_13_30, &STATE_VARIABLE_State_14_31);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_26, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_writer_26)), Stream_7, ((MR_Box) ((MR_String) "\" href=\"")), STATE_VARIABLE_State_14_31, &STATE_VARIABLE_State_16_33);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_26, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_writer_26)), Stream_7, ((MR_Box) (Href_28)), STATE_VARIABLE_State_16_33, &STATE_VARIABLE_State_17_34);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_26, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_writer_26)), Stream_7, ((MR_Box) ((MR_String) "\"\?>\n")), STATE_VARIABLE_State_17_34, &STATE_VARIABLE_State_22_22);
  }
  func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_xmlable_25, (MR_Integer) 0)), (MR_Integer) 5))));
  conv6_Root_12 = func_5(((MR_Box) (TypeClassInfo_for_xmlable_25)), Term_8);
  Root_12 = ((MR_Word) (conv6_Root_12));
  RootName_13 = ((MR_String) ((MR_hl_field(0, Root_12, (MR_Integer) 0))));
  Children_15 = ((MR_Word) ((MR_hl_field(0, Root_12, (MR_Integer) 2))));
  if ((MaybeDTD_10 == (MR_Word) ((MR_Unsigned) 4U)))
    STATE_VARIABLE_State_23_23 = STATE_VARIABLE_State_22_22;
  else
  {
    MR_Word DocType_16 = ((MR_Word) ((MR_hl_field(1, MaybeDTD_10, (MR_Integer) 0))));
    MR_Box STATE_VARIABLE_State_15_39;
    MR_Box STATE_VARIABLE_State_16_40;
    MR_Box STATE_VARIABLE_State_19_43;
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_26, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_7(((MR_Box) (TypeClassInfo_for_writer_26)), Stream_7, ((MR_Box) ((MR_String) "<!DOCTYPE ")), STATE_VARIABLE_State_22_22, &STATE_VARIABLE_State_15_39);
    func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_26, (MR_Integer) 0)), (MR_Integer) 5))));
    func_8(((MR_Box) (TypeClassInfo_for_writer_26)), Stream_7, ((MR_Box) (RootName_13)), STATE_VARIABLE_State_15_39, &STATE_VARIABLE_State_16_40);
    switch (MR_tag((MR_Word) DocType_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String PUBLIC_36 = ((MR_String) ((MR_hl_field(0, DocType_16, (MR_Integer) 0))));
          MR_Box STATE_VARIABLE_State_18_42;
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_26, (MR_Integer) 0)), (MR_Integer) 5))));
          void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_9(((MR_Box) (TypeClassInfo_for_writer_26)), Stream_7, ((MR_Box) ((MR_String) " PUBLIC \"")), STATE_VARIABLE_State_16_40, &STATE_VARIABLE_State_18_42);
          func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_26, (MR_Integer) 0)), (MR_Integer) 5))));
          func_10(((MR_Box) (TypeClassInfo_for_writer_26)), Stream_7, ((MR_Box) (PUBLIC_36)), STATE_VARIABLE_State_18_42, &STATE_VARIABLE_State_19_43);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String SYSTEM_37 = ((MR_String) ((MR_hl_field(1, DocType_16, (MR_Integer) 1))));
          MR_Box STATE_VARIABLE_State_21_45;
          MR_Box STATE_VARIABLE_State_22_46;
          MR_Box STATE_VARIABLE_State_24_48;
          MR_String PUBLIC_52 = ((MR_String) ((MR_hl_field(1, DocType_16, (MR_Integer) 0))));
          void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_26, (MR_Integer) 0)), (MR_Integer) 5))));
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_11(((MR_Box) (TypeClassInfo_for_writer_26)), Stream_7, ((MR_Box) ((MR_String) " PUBLIC \"")), STATE_VARIABLE_State_16_40, &STATE_VARIABLE_State_21_45);
          func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_26, (MR_Integer) 0)), (MR_Integer) 5))));
          func_12(((MR_Box) (TypeClassInfo_for_writer_26)), Stream_7, ((MR_Box) (PUBLIC_52)), STATE_VARIABLE_State_21_45, &STATE_VARIABLE_State_22_46);
          func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_26, (MR_Integer) 0)), (MR_Integer) 5))));
          func_13(((MR_Box) (TypeClassInfo_for_writer_26)), Stream_7, ((MR_Box) ((MR_String) "\" \"")), STATE_VARIABLE_State_22_46, &STATE_VARIABLE_State_24_48);
          func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_26, (MR_Integer) 0)), (MR_Integer) 5))));
          func_14(((MR_Box) (TypeClassInfo_for_writer_26)), Stream_7, ((MR_Box) (SYSTEM_37)), STATE_VARIABLE_State_24_48, &STATE_VARIABLE_State_19_43);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box STATE_VARIABLE_State_27_50;
          MR_String SYSTEM_53 = ((MR_String) ((MR_hl_field(2, DocType_16, (MR_Integer) 0))));
          void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_26, (MR_Integer) 0)), (MR_Integer) 5))));
          void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_15(((MR_Box) (TypeClassInfo_for_writer_26)), Stream_7, ((MR_Box) ((MR_String) " SYSTEM \"")), STATE_VARIABLE_State_16_40, &STATE_VARIABLE_State_27_50);
          func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_26, (MR_Integer) 0)), (MR_Integer) 5))));
          func_16(((MR_Box) (TypeClassInfo_for_writer_26)), Stream_7, ((MR_Box) (SYSTEM_53)), STATE_VARIABLE_State_27_50, &STATE_VARIABLE_State_19_43);
        }
        break;
    }
    func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_26, (MR_Integer) 0)), (MR_Integer) 5))));
    func_17(((MR_Box) (TypeClassInfo_for_writer_26)), Stream_7, ((MR_Box) ((MR_String) "\">\n")), STATE_VARIABLE_State_19_43, &STATE_VARIABLE_State_23_23);
  }
  succeeded = mercury__term_to_xml__contains_noformat_xml_1_p_0(Children_15);
  if (succeeded)
    ChildrenFormat_17 = (MR_Integer) 1;
  else
    ChildrenFormat_17 = (MR_Integer) 0;
  mercury__term_to_xml__write_xml_element_format_6_p_0(TypeClassInfo_for_writer_26, Stream_7, ChildrenFormat_17, (MR_Integer) 0, Root_12, STATE_VARIABLE_State_23_23, STATE_VARIABLE_State_19);
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_4_p_in__list_0(
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
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      mercury__term_to_xml__write_xml_element_format_6_p_0(Var_16, Var_17, Var_18, Var_19, Var_9, HeadVar__3_3, &Var_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__term_to_xml__write_xml_element_format_6_p_0(
  MR_Word TypeClassInfo_for_writer_61,
  MR_Box Stream_7,
  MR_Word Format_8,
  MR_Integer IndentLevel_9,
  MR_Word XML_10,
  MR_Box STATE_VARIABLE_State_0_24,
  MR_Box * STATE_VARIABLE_State_25)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) XML_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Name_12 = ((MR_String) ((MR_hl_field(0, XML_10, (MR_Integer) 0))));
        MR_Word Attrs_13 = ((MR_Word) ((MR_hl_field(0, XML_10, (MR_Integer) 1))));
        MR_Word Children_14 = ((MR_Word) ((MR_hl_field(0, XML_10, (MR_Integer) 2))));
        MR_Box STATE_VARIABLE_State_26_26;

        switch (Format_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_61, Stream_7, IndentLevel_9, STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_26_26);
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_State_26_26 = STATE_VARIABLE_State_0_24;
            break;
        }
        if ((Children_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Box STATE_VARIABLE_State_27_27;

          mercury__term_to_xml__write_empty_element_5_p_0(TypeClassInfo_for_writer_61, Stream_7, Name_12, Attrs_13, STATE_VARIABLE_State_26_26, &STATE_VARIABLE_State_27_27);
          switch (Format_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_61, (MR_Integer) 0)), (MR_Integer) 5))));

                func_8(((MR_Box) (TypeClassInfo_for_writer_61)), Stream_7, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_27_27, STATE_VARIABLE_State_25);
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_State_25 = STATE_VARIABLE_State_27_27;
              break;
          }
        }
        else
        {
          MR_Word ChildrenFormat_17;
          MR_Box STATE_VARIABLE_State_29_29;
          MR_Box STATE_VARIABLE_State_31_31;
          MR_Box STATE_VARIABLE_State_33_33;
          MR_Integer Var_34;
          MR_Box STATE_VARIABLE_State_36_36;
          MR_Box STATE_VARIABLE_State_37_37;
          MR_Box STATE_VARIABLE_State_11_90;
          MR_Box STATE_VARIABLE_State_12_91;
          void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          mercury__term_to_xml__write_element_start_5_p_0(TypeClassInfo_for_writer_61, Stream_7, Name_12, Attrs_13, STATE_VARIABLE_State_26_26, &STATE_VARIABLE_State_29_29);
          succeeded = mercury__term_to_xml__contains_noformat_xml_1_p_0(Children_14);
          if (succeeded)
          {
            ChildrenFormat_17 = (MR_Integer) 1;
            STATE_VARIABLE_State_31_31 = STATE_VARIABLE_State_29_29;
          }
          else
          {
            void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            ChildrenFormat_17 = (MR_Integer) 0;
            func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_61, (MR_Integer) 0)), (MR_Integer) 5))));
            func_9(((MR_Box) (TypeClassInfo_for_writer_61)), Stream_7, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_29_29, &STATE_VARIABLE_State_31_31);
          }
          Var_34 = (MR_Integer) ((MR_Unsigned) IndentLevel_9 + (MR_Unsigned) 1);
          mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_4_p_in__list_0(TypeClassInfo_for_writer_61, Stream_7, ChildrenFormat_17, Var_34, Children_14, STATE_VARIABLE_State_31_31, &STATE_VARIABLE_State_33_33);
          switch (ChildrenFormat_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_61, Stream_7, IndentLevel_9, STATE_VARIABLE_State_33_33, &STATE_VARIABLE_State_36_36);
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_State_36_36 = STATE_VARIABLE_State_33_33;
              break;
          }
          func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_61, (MR_Integer) 0)), (MR_Integer) 5))));
          func_10(((MR_Box) (TypeClassInfo_for_writer_61)), Stream_7, ((MR_Box) ((MR_String) "</")), STATE_VARIABLE_State_36_36, &STATE_VARIABLE_State_11_90);
          func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_61, (MR_Integer) 0)), (MR_Integer) 5))));
          func_11(((MR_Box) (TypeClassInfo_for_writer_61)), Stream_7, ((MR_Box) (Name_12)), STATE_VARIABLE_State_11_90, &STATE_VARIABLE_State_12_91);
          func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_61, (MR_Integer) 0)), (MR_Integer) 5))));
          func_12(((MR_Box) (TypeClassInfo_for_writer_61)), Stream_7, ((MR_Box) ((MR_String) ">")), STATE_VARIABLE_State_12_91, &STATE_VARIABLE_State_37_37);
          switch (Format_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_61, (MR_Integer) 0)), (MR_Integer) 5))));

                func_13(((MR_Box) (TypeClassInfo_for_writer_61)), Stream_7, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_37_37, STATE_VARIABLE_State_25);
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_State_25 = STATE_VARIABLE_State_37_37;
              break;
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Data_18 = ((MR_String) ((MR_hl_field(1, XML_10, (MR_Integer) 0))));

        mercury__term_to_xml__write_xml_escaped_string_4_p_0(TypeClassInfo_for_writer_61, Stream_7, Data_18, STATE_VARIABLE_State_0_24, STATE_VARIABLE_State_25);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String CData_19 = ((MR_String) ((MR_hl_field(2, XML_10, (MR_Integer) 0))));
        MR_Box STATE_VARIABLE_State_40_40;
        MR_Box STATE_VARIABLE_State_42_42;
        MR_Box STATE_VARIABLE_State_43_43;
        MR_Box STATE_VARIABLE_State_45_45;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        switch (Format_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_61, Stream_7, IndentLevel_9, STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_40_40);
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_State_40_40 = STATE_VARIABLE_State_0_24;
            break;
        }
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_61, (MR_Integer) 0)), (MR_Integer) 5))));
        func_0(((MR_Box) (TypeClassInfo_for_writer_61)), Stream_7, ((MR_Box) ((MR_String) "<![CDATA[")), STATE_VARIABLE_State_40_40, &STATE_VARIABLE_State_42_42);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_61, (MR_Integer) 0)), (MR_Integer) 5))));
        func_1(((MR_Box) (TypeClassInfo_for_writer_61)), Stream_7, ((MR_Box) (CData_19)), STATE_VARIABLE_State_42_42, &STATE_VARIABLE_State_43_43);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_61, (MR_Integer) 0)), (MR_Integer) 5))));
        func_2(((MR_Box) (TypeClassInfo_for_writer_61)), Stream_7, ((MR_Box) ((MR_String) "]]>")), STATE_VARIABLE_State_43_43, &STATE_VARIABLE_State_45_45);
        switch (Format_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_61, (MR_Integer) 0)), (MR_Integer) 5))));

              func_3(((MR_Box) (TypeClassInfo_for_writer_61)), Stream_7, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_45_45, STATE_VARIABLE_State_25);
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_State_25 = STATE_VARIABLE_State_45_45;
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, XML_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Comment_20 = ((MR_String) ((MR_hl_field(3, XML_10, (MR_Integer) 1))));
            MR_String EscapedComment_21;
            MR_Box STATE_VARIABLE_State_47_47;
            MR_Box STATE_VARIABLE_State_49_49;
            MR_Box STATE_VARIABLE_State_52_52;
            MR_Box STATE_VARIABLE_State_54_54;
            void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            switch (Format_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                mercury__term_to_xml__indent_4_p_0(TypeClassInfo_for_writer_61, Stream_7, IndentLevel_9, STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_47_47);
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_State_47_47 = STATE_VARIABLE_State_0_24;
                break;
            }
            func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_61, (MR_Integer) 0)), (MR_Integer) 5))));
            func_4(((MR_Box) (TypeClassInfo_for_writer_61)), Stream_7, ((MR_Box) ((MR_String) "<!-- ")), STATE_VARIABLE_State_47_47, &STATE_VARIABLE_State_49_49);
            mercury__string__replace_all_4_p_0(Comment_20, (MR_String) "--", (MR_String) " - ", &EscapedComment_21);
            func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_61, (MR_Integer) 0)), (MR_Integer) 5))));
            func_5(((MR_Box) (TypeClassInfo_for_writer_61)), Stream_7, ((MR_Box) (EscapedComment_21)), STATE_VARIABLE_State_49_49, &STATE_VARIABLE_State_52_52);
            func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_61, (MR_Integer) 0)), (MR_Integer) 5))));
            func_6(((MR_Box) (TypeClassInfo_for_writer_61)), Stream_7, ((MR_Box) ((MR_String) " -->")), STATE_VARIABLE_State_52_52, &STATE_VARIABLE_State_54_54);
            switch (Format_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_61, (MR_Integer) 0)), (MR_Integer) 5))));

                  func_7(((MR_Box) (TypeClassInfo_for_writer_61)), Stream_7, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_54_54, STATE_VARIABLE_State_25);
                }
                break;
              case (MR_Integer) 1:
                *STATE_VARIABLE_State_25 = STATE_VARIABLE_State_54_54;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String EntityName_22 = ((MR_String) ((MR_hl_field(3, XML_10, (MR_Integer) 1))));
            MR_Box STATE_VARIABLE_State_57_57;
            MR_String Var_58;
            void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_61, (MR_Integer) 0)), (MR_Integer) 5))));
            void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            func_14(((MR_Box) (TypeClassInfo_for_writer_61)), Stream_7, ((MR_Box) ((MR_String) "&")), STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_57_57);
            mercury__string__append_3_p_2(EntityName_22, (MR_String) ";", &Var_58);
            func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_61, (MR_Integer) 0)), (MR_Integer) 5))));
            func_15(((MR_Box) (TypeClassInfo_for_writer_61)), Stream_7, ((MR_Box) (Var_58)), STATE_VARIABLE_State_57_57, STATE_VARIABLE_State_25);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String RawString_23 = ((MR_String) ((MR_hl_field(3, XML_10, (MR_Integer) 1))));
            void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_61, (MR_Integer) 0)), (MR_Integer) 5))));

            func_16(((MR_Box) (TypeClassInfo_for_writer_61)), Stream_7, ((MR_Box) (RawString_23)), STATE_VARIABLE_State_0_24, STATE_VARIABLE_State_25);
          }
          break;
      }
      break;
  }
}

void MR_CALL 
mercury__term_to_xml__write_empty_element_5_p_0(
  MR_Word TypeClassInfo_for_writer_18,
  MR_Box Stream_6,
  MR_String Element_7,
  MR_Word Attributes_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  MR_Box STATE_VARIABLE_State_13_13;
  MR_Box STATE_VARIABLE_State_14_14;
  MR_Box STATE_VARIABLE_State_16_16;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_6, ((MR_Box) ((MR_String) "<")), STATE_VARIABLE_State_0_10, &STATE_VARIABLE_State_13_13);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
  func_1(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_6, ((MR_Box) (Element_7)), STATE_VARIABLE_State_13_13, &STATE_VARIABLE_State_14_14);
  mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(TypeClassInfo_for_writer_18, Stream_6, Attributes_8, STATE_VARIABLE_State_14_14, &STATE_VARIABLE_State_16_16);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_6, ((MR_Box) ((MR_String) " />")), STATE_VARIABLE_State_16_16, STATE_VARIABLE_State_11);
}

void MR_CALL 
mercury__term_to_xml__write_element_start_5_p_0(
  MR_Word TypeClassInfo_for_writer_18,
  MR_Box Stream_6,
  MR_String Element_7,
  MR_Word Attributes_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  MR_Box STATE_VARIABLE_State_13_13;
  MR_Box STATE_VARIABLE_State_14_14;
  MR_Box STATE_VARIABLE_State_16_16;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_6, ((MR_Box) ((MR_String) "<")), STATE_VARIABLE_State_0_10, &STATE_VARIABLE_State_13_13);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
  func_1(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_6, ((MR_Box) (Element_7)), STATE_VARIABLE_State_13_13, &STATE_VARIABLE_State_14_14);
  mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(TypeClassInfo_for_writer_18, Stream_6, Attributes_8, STATE_VARIABLE_State_14_14, &STATE_VARIABLE_State_16_16);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_6, ((MR_Box) ((MR_String) ">")), STATE_VARIABLE_State_16_16, STATE_VARIABLE_State_11);
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(
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
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      mercury__term_to_xml__write_attribute_4_p_0(Var_16, Var_17, Var_9, HeadVar__3_3, &Var_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__term_to_xml__write_attribute_4_p_0(
  MR_Word TypeClassInfo_for_writer_18,
  MR_Box Stream_5,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_State_0_9,
  MR_Box * STATE_VARIABLE_State_10)
{
  MR_String Name_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_String Value_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Box STATE_VARIABLE_State_12_12;
  MR_Box STATE_VARIABLE_State_13_13;
  MR_Box STATE_VARIABLE_State_15_15;
  MR_Box STATE_VARIABLE_State_16_16;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_5, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_0_9, &STATE_VARIABLE_State_12_12);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
  func_1(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_5, ((MR_Box) (Name_6)), STATE_VARIABLE_State_12_12, &STATE_VARIABLE_State_13_13);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_5, ((MR_Box) ((MR_String) "=\"")), STATE_VARIABLE_State_13_13, &STATE_VARIABLE_State_15_15);
  mercury__term_to_xml__write_xml_escaped_string_4_p_0(TypeClassInfo_for_writer_18, Stream_5, Value_7, STATE_VARIABLE_State_15_15, &STATE_VARIABLE_State_16_16);
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
  func_3(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_5, ((MR_Box) ((MR_String) "\"")), STATE_VARIABLE_State_16_16, STATE_VARIABLE_State_10);
}

static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_string_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Box Stream_5,
  MR_String Str_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  MR_bool succeeded;
  MR_Integer Var_17;
  MR_Integer Var_21;
  MR_Integer Var_22;

{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_17  = Length;
}
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_22  = Length;
}
  succeeded = (Var_17 < Var_22);
  if (succeeded)
    Var_21 = Var_17;
  else
    Var_21 = Var_22;
  mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_108_111_111_112_95_95_104_111_51_49_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(TypeClassInfo_for_writer_11, Stream_5, Str_6, (MR_Integer) 0, Var_21, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
}

static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_108_111_111_112_95_95_104_111_51_49_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(
  MR_Word Var_17,
  MR_Box Var_18,
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 < HeadVar__4_10);
    MR_Integer Var_13;
    MR_Char Var_14;
    MR_Integer Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_108_111_111_112_95_95_104_111_51_49_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_8 ;
	Index = HeadVar__3_9 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_13  = NextIndex;
	Var_14  = Ch;
	Var_19  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (Var_13 <= HeadVar__4_10);
    }
    if (succeeded)
    {
      MR_Box Var_15;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Box next_value_of_HeadVar__5_11;

      mercury__term_to_xml__write_xml_escaped_char_4_p_0(Var_17, Var_18, Var_14, HeadVar__5_11, &Var_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_13;
      next_value_of_HeadVar__5_11 = Var_15;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    else
      *HeadVar__6_12 = HeadVar__5_11;
    break;
  }
}

static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_char_4_p_0(
  MR_Word TypeClassInfo_for_writer_13,
  MR_Box Stream_5,
  MR_Char Chr_6,
  MR_Box STATE_VARIABLE_State_0_9,
  MR_Box * STATE_VARIABLE_State_10)
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
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_13, (MR_Integer) 0)), (MR_Integer) 5))));

    func_0(((MR_Box) (TypeClassInfo_for_writer_13)), Stream_5, ((MR_Box) (Str_8)), STATE_VARIABLE_State_0_9, STATE_VARIABLE_State_10);
  }
  else
  {
    MR_String Var_12;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__string__char_to_string_2_p_0(Chr_6, &Var_12);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_13, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_writer_13)), Stream_5, ((MR_Box) (Var_12)), STATE_VARIABLE_State_0_9, STATE_VARIABLE_State_10);
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
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Integer next_value_of_IndentLevel_6;
      MR_Box next_value_of_STATE_VARIABLE_State_0_8;

      func_0(((MR_Box) (TypeClassInfo_for_writer_16)), Stream_5, ((MR_Box) ((MR_String) "\t")), STATE_VARIABLE_State_0_8, &STATE_VARIABLE_State_12_12);
      Var_13 = (MR_Integer) ((MR_Unsigned) IndentLevel_6 - (MR_Unsigned) 1);
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
      XML_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Rest_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) XML_2)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, XML_2, (MR_Integer) 0))))) {
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
  MR_Word TypeClassInfo_for_writer_19,
  MR_Box Stream_5,
  MR_Word MaybeEncoding_6,
  MR_Box STATE_VARIABLE_State_0_9,
  MR_Box * STATE_VARIABLE_State_10)
{
  MR_Box STATE_VARIABLE_State_12_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));

  func_0(((MR_Box) (TypeClassInfo_for_writer_19)), Stream_5, ((MR_Box) ((MR_String) "<\?xml version=\"1.0\"")), STATE_VARIABLE_State_0_9, &STATE_VARIABLE_State_12_12);
  if ((MaybeEncoding_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));

    func_1(((MR_Box) (TypeClassInfo_for_writer_19)), Stream_5, ((MR_Box) ((MR_String) "\?>\n")), STATE_VARIABLE_State_12_12, STATE_VARIABLE_State_10);
  }
  else
  {
    MR_String Encoding_8 = ((MR_String) ((MR_hl_field(1, MaybeEncoding_6, (MR_Integer) 0))));
    MR_Box STATE_VARIABLE_State_14_14;
    MR_Box STATE_VARIABLE_State_15_15;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_2(((MR_Box) (TypeClassInfo_for_writer_19)), Stream_5, ((MR_Box) ((MR_String) " encoding=\"")), STATE_VARIABLE_State_12_12, &STATE_VARIABLE_State_14_14);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_writer_19)), Stream_5, ((MR_Box) (Encoding_8)), STATE_VARIABLE_State_14_14, &STATE_VARIABLE_State_15_15);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_writer_19)), Stream_5, ((MR_Box) ((MR_String) "\"\?>\n")), STATE_VARIABLE_State_15_15, STATE_VARIABLE_State_10);
  }
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_to_xml____Unify____attr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term_to_xml____Compare____attr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_to_xml____Compare____attr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_from_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_to_xml____Unify____attr_from_source_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term_to_xml____Compare____attr_from_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_to_xml____Compare____attr_from_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_to_xml____Unify____attr_source_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term_to_xml____Compare____attr_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_to_xml____Compare____attr_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____doctype_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_to_xml____Unify____doctype_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term_to_xml____Compare____doctype_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_to_xml____Compare____doctype_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____dtd_generation_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_to_xml____Unify____dtd_generation_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term_to_xml____Compare____dtd_generation_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_to_xml____Compare____dtd_generation_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_mapping_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_to_xml____Unify____element_mapping_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term_to_xml____Compare____element_mapping_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_to_xml____Compare____element_mapping_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_to_xml____Unify____element_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term_to_xml____Compare____element_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_to_xml____Compare____element_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_dtd_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_to_xml____Unify____maybe_dtd_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term_to_xml____Compare____maybe_dtd_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_to_xml____Compare____maybe_dtd_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_to_xml____Unify____maybe_format_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term_to_xml____Compare____maybe_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_to_xml____Compare____maybe_format_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_functor_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_to_xml____Unify____maybe_functor_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term_to_xml____Compare____maybe_functor_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_to_xml____Compare____maybe_functor_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_stylesheet_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_to_xml____Unify____maybe_stylesheet_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term_to_xml____Compare____maybe_stylesheet_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_to_xml____Compare____maybe_stylesheet_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term_to_xml____Unify____xml_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_to_xml____Unify____xml_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term_to_xml____Compare____xml_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_to_xml____Compare____xml_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
