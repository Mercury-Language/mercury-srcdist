/*
** Automatically generated from `html_format.m'
** by the Mercury compiler,
** version rotd-2017-07-11
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


/* :- module html_format. */
/* :- implementation. */

/*
INIT mercury__html_format__init
ENDINIT
*/

#include "html_format.mih"


#include "display.mih"
#include "exclude.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "profile.mih"
#include "query.mih"
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
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct html_format__item_to_html_7_p_0_env_0_s {
  MR_bool html_format__item_to_html_7_p_0_env_0__succeeded;
  MR_Word html_format__item_to_html_7_p_0_env_0__Items_21;
  jmp_buf html_format__item_to_html_7_p_0_env_0__commit_0;
  MR_Word html_format__item_to_html_7_p_0_env_0__ListItem_45;
  MR_Box html_format__item_to_html_7_p_0_env_0__conv0_ListItem_45;
};


static const MR_FA_TypeInfo_Struct2 html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 html_format__pair__pti_pair_2__plain_html_format__type_ctor_info_style_control_0__plain_tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 html_format__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct2 html_format____vpti_pred_2__plain_builtin__type_ctor_info_character_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 html_format__list__pti_list_1__plain_builtin__type_ctor_info_character_0;

static const MR_FA_PseudoTypeInfo_Struct2 html_format__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 html_format__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 html_format__tree234__pti_tree234_2__plain_html_format__type_ctor_info_style_control_0__plain_tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 html_format__pair__pti_pair_2__plain_html_format__type_ctor_info_style_element_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 html_format__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo html_format__html_format__field_types_format_info_0_0[6];

static const MR_ConstString html_format__html_format__field_names_format_info_0_0[6];

static const MR_DuArgLocn html_format__html_format__field_locns_format_info_0_0[6];

static const MR_DuFunctorDesc html_format__html_format__du_functor_desc_format_info_0_0;

static const MR_DuFunctorDescPtr html_format__html_format__du_stag_ordered_format_info_0_0[1];

static const MR_DuPtagLayout html_format__html_format__du_ptag_ordered_format_info_0[1];

static const MR_DuFunctorDescPtr html_format__html_format__du_name_ordered_format_info_0[1];

static const MR_Integer html_format__html_format__functor_number_map_format_info_0[1];

static const MR_FA_TypeInfo_Struct1 html_format__cord__ti_cord_1builtin__type_ctor_info_string_0;

static const MR_Integer html_format__html_format__functor_number_map_style_control_0[1];

static const MR_NotagFunctorDesc html_format__html_format__notag_functor_desc_style_control_0;

static const MR_FA_TypeInfo_Struct2 html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_control_0tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0;

static const MR_Integer html_format__html_format__functor_number_map_style_element_0[1];

static const MR_NotagFunctorDesc html_format__html_format__notag_functor_desc_style_element_0;

static const MR_EnumFunctorDesc html_format__html_format__enum_functor_desc_table_header_rows_0_0;

static const MR_EnumFunctorDesc html_format__html_format__enum_functor_desc_table_header_rows_0_1;

static const MR_EnumFunctorDescPtr html_format__html_format__enum_value_ordered_table_header_rows_0[2];

static const MR_EnumFunctorDescPtr html_format__html_format__enum_name_ordered_table_header_rows_0[2];

static const MR_Integer html_format__html_format__functor_number_map_table_header_rows_0[2];

static MR_bool MR_CALL 
html_format____Unify____column_class_map_0_0_10001(
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2);

static void MR_CALL 
html_format____Compare____column_class_map_0_0_10001(
  MR_Box * html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box html_format__wrapper_arg_3);

static MR_bool MR_CALL 
html_format____Unify____format_info_0_0_10001(
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2);

static void MR_CALL 
html_format____Compare____format_info_0_0_10001(
  MR_Box * html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box html_format__wrapper_arg_3);

static MR_bool MR_CALL 
html_format____Unify____html_0_0_10001(
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2);

static void MR_CALL 
html_format____Compare____html_0_0_10001(
  MR_Box * html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box html_format__wrapper_arg_3);

static MR_bool MR_CALL 
html_format____Unify____style_control_0_0_10001(
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2);

static void MR_CALL 
html_format____Compare____style_control_0_0_10001(
  MR_Box * html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box html_format__wrapper_arg_3);

static MR_bool MR_CALL 
html_format____Unify____style_control_map_0_0_10001(
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2);

static void MR_CALL 
html_format____Compare____style_control_map_0_0_10001(
  MR_Box * html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box html_format__wrapper_arg_3);

static MR_bool MR_CALL 
html_format____Unify____style_element_0_0_10001(
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2);

static void MR_CALL 
html_format____Compare____style_element_0_0_10001(
  MR_Box * html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box html_format__wrapper_arg_3);

static MR_bool MR_CALL 
html_format____Unify____style_element_map_0_0_10001(
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2);

static void MR_CALL 
html_format____Compare____style_element_map_0_0_10001(
  MR_Box * html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box html_format__wrapper_arg_3);

static MR_bool MR_CALL 
html_format____Unify____table_header_rows_0_0_10001(
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2);

static void MR_CALL 
html_format____Compare____table_header_rows_0_0_10001(
  MR_Box * html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box html_format__wrapper_arg_3);

static void MR_CALL 
html_format____Compare____table_header_rows_0_0(
  MR_Word * html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2,
  MR_Word html_format__HeadVar__3_3);

static MR_bool MR_CALL 
html_format____Unify____table_header_rows_0_0(
  MR_Word html_format__HeadVar__2_1,
  MR_Word html_format__HeadVar__2_2);

static void MR_CALL 
html_format____Compare____style_element_map_0_0(
  MR_Word * html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2,
  MR_Word html_format__HeadVar__3_3);

static MR_bool MR_CALL 
html_format____Unify____style_element_map_0_0(
  MR_Word html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2);

static void MR_CALL 
html_format____Compare____style_element_0_0(
  MR_Word * html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2,
  MR_Word html_format__HeadVar__3_3);

static MR_bool MR_CALL 
html_format____Unify____style_element_0_0(
  MR_Word html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2);

static void MR_CALL 
html_format____Compare____style_control_map_0_0(
  MR_Word * html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2,
  MR_Word html_format__HeadVar__3_3);

static MR_bool MR_CALL 
html_format____Unify____style_control_map_0_0(
  MR_Word html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2);

static void MR_CALL 
html_format____Compare____style_control_0_0(
  MR_Word * html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2,
  MR_Word html_format__HeadVar__3_3);

static MR_bool MR_CALL 
html_format____Unify____style_control_0_0(
  MR_Word html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2);

static void MR_CALL 
html_format____Compare____html_0_0(
  MR_Word * html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2,
  MR_Word html_format__HeadVar__3_3);

static MR_bool MR_CALL 
html_format____Unify____html_0_0(
  MR_Word html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2);

static void MR_CALL 
html_format____Compare____format_info_0_0(
  MR_Word * html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2,
  MR_Word html_format__HeadVar__3_3);

static MR_bool MR_CALL 
html_format____Unify____format_info_0_0(
  MR_Word html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2);

static void MR_CALL 
html_format____Compare____column_class_map_0_0(
  MR_Word * html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2,
  MR_Word html_format__HeadVar__3_3);

static MR_bool MR_CALL 
html_format____Unify____column_class_map_0_0(
  MR_Word html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2);

static MR_bool MR_CALL 
html_format__special_html_char_or_break_2_p_0(
  MR_Char html_format__HeadVar__1_1,
  MR_String * html_format__HeadVar__2_2);

static MR_bool MR_CALL 
html_format__special_html_char_2_p_0(
  MR_Char html_format__HeadVar__1_1,
  MR_String * html_format__HeadVar__2_2);

static void MR_CALL 
html_format__replace_special_char_2_4_p_0(
  MR_Word html_format__SpecialCharTable_5,
  MR_Char html_format__Char_6,
  MR_Word html_format__STATE_VARIABLE_Acc_0_10,
  MR_Word * html_format__STATE_VARIABLE_Acc_11);

static void MR_CALL 
html_format__insert_column_into_classmap_4_p_0(
  MR_String html_format__Value_5,
  MR_Integer html_format__Key_6,
  MR_Word html_format__STATE_VARIABLE_Map_0_8,
  MR_Word * html_format__STATE_VARIABLE_Map_9);

static void MR_CALL 
html_format__table_header_num_rows_and_classmap_14_p_0_1(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box * html_format__wrapper_arg_3);

static void MR_CALL 
html_format__table_header_num_rows_and_classmap_14_p_0(
  MR_Word html_format__FormatInfo_15,
  MR_Word html_format__HeaderGroup_16,
  MR_Word html_format__STATE_VARIABLE_NumRows_0_32,
  MR_Word * html_format__STATE_VARIABLE_NumRows_33,
  MR_Integer html_format__STATE_VARIABLE_ColumnNumber_0_34,
  MR_Integer * html_format__STATE_VARIABLE_ColumnNumber_35,
  MR_Word html_format__STATE_VARIABLE_ClassMap_0_36,
  MR_Word * html_format__STATE_VARIABLE_ClassMap_37,
  MR_Integer html_format__STATE_VARIABLE_HeaderGroupNumber_0_38,
  MR_Integer * html_format__STATE_VARIABLE_HeaderGroupNumber_39,
  MR_Word html_format__STATE_VARIABLE_ColouredClassStrs_0_40,
  MR_Word * html_format__STATE_VARIABLE_ColouredClassStrs_41,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_42,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_43);

static void MR_CALL 
html_format__update_style_control_map_7_p_0(
  MR_String html_format__ColumnClassStr_8,
  MR_Integer html_format__STATE_VARIABLE_HeaderGroupNumber_0_17,
  MR_Integer * html_format__STATE_VARIABLE_HeaderGroupNumber_18,
  MR_Word html_format__STATE_VARIABLE_ColouredClassStrs_0_19,
  MR_Word * html_format__STATE_VARIABLE_ColouredClassStrs_20,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_21,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_22);

static MR_Word MR_CALL 
html_format__style_element_to_html_1_f_0(
  MR_Word html_format__HeadVar__1_1);

static MR_Box MR_CALL 
html_format__style_control_to_html_1_f_0_1(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1);

static MR_Word MR_CALL 
html_format__style_control_to_html_1_f_0(
  MR_Word html_format__HeadVar__1_1);

static void MR_CALL 
html_format__escape_break_html_string_1_f_0_2(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box * html_format__wrapper_arg_3);

static MR_bool MR_CALL 
html_format__escape_break_html_string_1_f_0_1(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box * html_format__wrapper_arg_2);

static void MR_CALL 
html_format__escape_html_attr_string_1_f_0_2(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box * html_format__wrapper_arg_3);

static MR_bool MR_CALL 
html_format__escape_html_attr_string_1_f_0_1(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box * html_format__wrapper_arg_2);

static void MR_CALL 
html_format__escape_html_string_1_f_0_2(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box * html_format__wrapper_arg_3);

static MR_bool MR_CALL 
html_format__escape_html_string_1_f_0_1(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box * html_format__wrapper_arg_2);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_p_0(
  MR_String html_format__Var_15,
  MR_String html_format__Var_16,
  MR_Word html_format__Var_17,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_10,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_11,
  MR_Word html_format__List_8,
  MR_Word * html_format__HTML_9);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_p_0(
  MR_String html_format__Var_34,
  MR_String html_format__Var_35,
  MR_Word html_format__Var_36,
  MR_Word html_format__Separator_1,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
  MR_Word html_format__HeadVar__5_5,
  MR_Word html_format__STATE_VARIABLE_HTML_0_6,
  MR_Word * html_format__STATE_VARIABLE_HTML_7);

static void MR_CALL 
html_format__list_to_html_7_p_0(
  MR_Word html_format__FormatInfo_8,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_26,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_27,
  MR_Word html_format__Class_10,
  MR_Word html_format__MaybeTitle_11,
  MR_Word html_format__Items_12,
  MR_Word * html_format__HTML_13);

static void MR_CALL 
html_format__item_to_html_7_p_0_1(
  void * html_format__env_ptr_arg);

static void MR_CALL 
html_format__item_to_html_7_p_0_3(
  void * html_format__env_ptr_arg);

static void MR_CALL 
html_format__item_to_html_7_p_0_2(
  void * html_format__env_ptr_arg);

static void MR_CALL 
html_format__item_to_html_7_p_0_4(
  void * html_format__env_ptr_arg);

static void MR_CALL 
html_format__item_to_html_7_p_0(
  MR_String html_format__StartTag_8,
  MR_String html_format__EndTag_9,
  MR_Word html_format__FormatInfo_10,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_27,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_28,
  MR_Word html_format__Item_12,
  MR_Word * html_format__HTML_13);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_4(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box * html_format__wrapper_arg_3);

static MR_bool MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_3(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box * html_format__wrapper_arg_2);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_2(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box * html_format__wrapper_arg_3);

static MR_bool MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_1(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box * html_format__wrapper_arg_2);

static MR_Word MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0(
  MR_Word html_format__PseudoLink_5);

static void MR_CALL 
html_format__table_to_html_5_p_0_1(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box * html_format__wrapper_arg_3,
  MR_Box html_format__wrapper_arg_4,
  MR_Box * html_format__wrapper_arg_5,
  MR_Box html_format__wrapper_arg_6,
  MR_Box * html_format__wrapper_arg_7,
  MR_Box html_format__wrapper_arg_8,
  MR_Box * html_format__wrapper_arg_9,
  MR_Box html_format__wrapper_arg_10,
  MR_Box * html_format__wrapper_arg_11,
  MR_Box html_format__wrapper_arg_12,
  MR_Box * html_format__wrapper_arg_13);

static void MR_CALL 
html_format__table_to_html_5_p_0(
  MR_Word html_format__FormatInfo_6,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_34,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_35,
  MR_Word html_format__Table_8,
  MR_Word * html_format__HTML_9);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_p_0(
  MR_Word html_format__Var_15,
  MR_Word html_format__Var_16,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_10,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_11,
  MR_Word html_format__List_8,
  MR_Word * html_format__HTML_9);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_p_0(
  MR_Word html_format__Var_34,
  MR_Word html_format__Var_35,
  MR_Word html_format__Separator_1,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
  MR_Word html_format__HeadVar__5_5,
  MR_Word html_format__STATE_VARIABLE_HTML_0_6,
  MR_Word * html_format__STATE_VARIABLE_HTML_7);

static void MR_CALL 
html_format__table_header_group_to_html_row_1_6_p_0(
  MR_Word html_format__FormatInfo_7,
  MR_Word html_format__HeaderNumRows_8,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_25,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_26,
  MR_Word html_format__HeaderGroup_10,
  MR_Word * html_format__HTML_11);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_p_0(
  MR_Word html_format__Var_15,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_10,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_11,
  MR_Word html_format__List_8,
  MR_Word * html_format__HTML_9);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_p_0(
  MR_Word html_format__Var_34,
  MR_Word html_format__Separator_1,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
  MR_Word html_format__HeadVar__5_5,
  MR_Word html_format__STATE_VARIABLE_HTML_0_6,
  MR_Word * html_format__STATE_VARIABLE_HTML_7);

static void MR_CALL 
html_format__table_header_group_to_html_row_2_5_p_0(
  MR_Word html_format__FormatInfo_6,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_16,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_17,
  MR_Word html_format__HeaderGroup_8,
  MR_Word * html_format__HTML_9);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_p_0(
  MR_Word html_format__Var_34,
  MR_Word html_format__Var_35,
  MR_Word html_format__Separator_1,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
  MR_Word html_format__HeadVar__5_5,
  MR_Word html_format__STATE_VARIABLE_HTML_0_6,
  MR_Word * html_format__STATE_VARIABLE_HTML_7);

static void MR_CALL 
html_format__table_data_to_th_html_6_p_0(
  MR_Word html_format__FormatInfo_7,
  MR_Word html_format__ColumnClass_8,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_16,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_17,
  MR_Word html_format__TableData_10,
  MR_Word * html_format__HTML_11);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_p_0(
  MR_Word html_format__Var_15,
  MR_Word html_format__Var_16,
  MR_Integer html_format__Var_17,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_10,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_11,
  MR_Word html_format__List_8,
  MR_Word * html_format__HTML_9);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_p_0(
  MR_Word html_format__Var_34,
  MR_Word html_format__Var_35,
  MR_Integer html_format__Var_36,
  MR_Word html_format__Separator_1,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
  MR_Word html_format__HeadVar__5_5,
  MR_Word html_format__STATE_VARIABLE_HTML_0_6,
  MR_Word * html_format__STATE_VARIABLE_HTML_7);

static void MR_CALL 
html_format__table_row_to_html_7_p_0(
  MR_Word html_format__FormatInfo_8,
  MR_Word html_format__MaybeColClassMap_9,
  MR_Integer html_format__NumColumns_10,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_23,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_24,
  MR_Word html_format__TableRow_12,
  MR_Word * html_format__HTML_13);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(
  MR_Word html_format__Var_18,
  MR_Word html_format__Var_19,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_12,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_13,
  MR_Integer html_format__STATE_VARIABLE_ColumnNum_0_14,
  MR_Word html_format__List_10,
  MR_Word * html_format__HTML_11);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_p_0(
  MR_Word html_format__Var_39,
  MR_Word html_format__Var_40,
  MR_Word html_format__Separator_1,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
  MR_Integer html_format__STATE_VARIABLE_ColumnNum_0_5,
  MR_Word html_format__HeadVar__6_6,
  MR_Word html_format__STATE_VARIABLE_HTML_0_7,
  MR_Word * html_format__STATE_VARIABLE_HTML_8);

static void MR_CALL 
html_format__table_cell_to_html_8_p_0(
  MR_Word html_format__FormatInfo_9,
  MR_Word html_format__MaybeClassMap_10,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_27,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_28,
  MR_Integer html_format__STATE_VARIABLE_ColumnNum_0_29,
  MR_Integer * html_format__STATE_VARIABLE_ColumnNum_30,
  MR_Word html_format__Cell_13,
  MR_Word * html_format__HTML_14);

static MR_String MR_CALL 
html_format__table_column_class_to_string_1_f_0(
  MR_Word html_format__HeadVar__1_1);

static MR_Word MR_CALL 
html_format__default_table_column_class_0_f_0(void);

static MR_bool MR_CALL 
html_format__table_data_class_2_p_0(
  MR_Word html_format__HeadVar__1_1,
  MR_Word * html_format__HeadVar__2_2);

static void MR_CALL 
html_format__table_data_to_html_2_f_0_2(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box * html_format__wrapper_arg_3);

static MR_bool MR_CALL 
html_format__table_data_to_html_2_f_0_1(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box * html_format__wrapper_arg_2);

static MR_Word MR_CALL 
html_format__table_data_to_html_2_f_0(
  MR_Word html_format__FormatInfo_1,
  MR_Word html_format__HeadVar__2_2);

static MR_Word MR_CALL 
html_format__link_to_html_2_f_0(
  MR_Word html_format__FormatInfo_4,
  MR_Word html_format__Link_5);

static void MR_CALL 
html_format__escape_break_html_attr_string_1_f_0_2(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box * html_format__wrapper_arg_3);

static MR_bool MR_CALL 
html_format__escape_break_html_attr_string_1_f_0_1(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box * html_format__wrapper_arg_2);

static MR_String MR_CALL 
html_format__handle_html_attrs_2_f_0(
  MR_Word html_format__HeadVar__1_1,
  MR_String html_format__HeadVar__2_2);

static MR_Word MR_CALL 
html_format__str_to_html_1_f_0(
  MR_String html_format__Str_3);

static MR_Word MR_CALL 
html_format__empty_html_0_f_0(void);

static MR_String MR_CALL 
html_format__table_class_to_string_2_f_0(
  MR_Word html_format__FormatInfo_4,
  MR_Word html_format__Class_5);

static MR_Word MR_CALL 
html_format__wrap_tags_3_f_0(
  MR_String html_format__StartTag_5,
  MR_String html_format__EndTag_6,
  MR_Word html_format__InnerHTML_7);

static MR_Word MR_CALL 
html_format__init_format_info_2_f_0(
  MR_Word html_format__Deep_4,
  MR_Word html_format__Prefs_5);

static MR_Word MR_CALL 
html_format__default_style_control_map_0_f_0(void);

static MR_Box MR_CALL 
html_format__css_style_html_1_f_0_1(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1);

static MR_Word MR_CALL 
html_format__css_style_html_1_f_0(
  MR_Word html_format__StyleControlMap_3);


static /* final */ const MR_Box html_format_scalar_common_1[14][3];

static /* final */ const MR_Box html_format_scalar_common_2[24][2];

static /* final */ const MR_Box html_format_scalar_common_3[3][5];

static /* final */ const MR_Box html_format_scalar_common_4[2][7];

static /* final */ const MR_Box html_format_scalar_common_5[7][4];

static /* final */ const MR_Box html_format_scalar_common_7[1][1];

static /* final */ const MR_Box html_format_scalar_common_8[1][17];


/* sealed */ struct html_format__vector_common_type_6_0_s {
  const MR_String html_format__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct html_format__vector_common_type_6_0_s html_format_vector_common_6[52];



static /* final */ const MR_Box html_format_scalar_common_1[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&html_format__html_format__type_ctor_info_style_element_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&html_format__html_format__type_ctor_info_style_control_0)),
    ((MR_Box) (&html_format_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&html_format__html_format__type_ctor_info_style_element_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&html_format__html_format__type_ctor_info_style_control_0)),
    ((MR_Box) (&html_format_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&html_format_scalar_common_3[0])),
    ((MR_Box) (html_format__css_style_html_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&html_format_scalar_common_3[1])),
    ((MR_Box) (html_format__escape_break_html_attr_string_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&html_format_scalar_common_3[1])),
    ((MR_Box) (html_format__table_data_to_html_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&html_format_scalar_common_3[1])),
    ((MR_Box) (html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&html_format_scalar_common_3[1])),
    ((MR_Box) (html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&html_format_scalar_common_3[1])),
    ((MR_Box) (html_format__escape_html_string_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&html_format_scalar_common_3[1])),
    ((MR_Box) (html_format__escape_html_attr_string_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&html_format_scalar_common_3[1])),
    ((MR_Box) (html_format__escape_break_html_string_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&html_format_scalar_common_3[2])),
    ((MR_Box) (html_format__style_control_to_html_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box html_format_scalar_common_2[24][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 3 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "text-align")))),
    ((MR_Box) ((MR_String) "right"))
  },
  /* row 4 */
  {
    ((MR_Box) (&html_format_scalar_common_2[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "text-align")))),
    ((MR_Box) ((MR_String) "left"))
  },
  /* row 6 */
  {
    ((MR_Box) (&html_format_scalar_common_2[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "text-decoration")))),
    ((MR_Box) ((MR_String) "none"))
  },
  /* row 8 */
  {
    ((MR_Box) (&html_format_scalar_common_2[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "margin")))),
    ((MR_Box) ((MR_String) "5px"))
  },
  /* row 10 */
  {
    ((MR_Box) (&html_format_scalar_common_2[9])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "border-style")))),
    ((MR_Box) ((MR_String) "none"))
  },
  /* row 12 */
  {
    ((MR_Box) (&html_format_scalar_common_2[11])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "border-style")))),
    ((MR_Box) ((MR_String) "outset outset outset outset"))
  },
  /* row 14 */
  {
    ((MR_Box) (&html_format_scalar_common_2[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "border-spacing")))),
    ((MR_Box) ((MR_String) "2px"))
  },
  /* row 16 */
  {
    ((MR_Box) (&html_format_scalar_common_2[15])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "border-width")))),
    ((MR_Box) ((MR_String) "1px 1px 1px 1px"))
  },
  /* row 18 */
  {
    ((MR_Box) (&html_format_scalar_common_2[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "border-style")))),
    ((MR_Box) ((MR_String) "inset inset inset inset"))
  },
  /* row 20 */
  {
    ((MR_Box) (&html_format_scalar_common_2[19])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "padding")))),
    ((MR_Box) ((MR_String) "3px 3px 3px 3px"))
  },
  /* row 22 */
  {
    ((MR_Box) (&html_format_scalar_common_2[21])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (&html_format_scalar_common_2[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[22])))
  },
};

static /* final */ const MR_Box html_format_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&html_format__pair__pti_pair_2__plain_html_format__type_ctor_info_style_control_0__plain_tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&html_format__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&html_format__pair__pti_pair_2__plain_html_format__type_ctor_info_style_element_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&html_format__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box html_format_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&html_format____vpti_pred_2__plain_builtin__type_ctor_info_character_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&html_format__list__pti_list_1__plain_builtin__type_ctor_info_character_0)),
    ((MR_Box) (&html_format__list__pti_list_1__plain_builtin__type_ctor_info_character_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&html_format__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&html_format__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box html_format_scalar_common_5[7][4] = {
  /* row 0 */
  {
    ((MR_Box) (&html_format_scalar_common_4[0])),
    ((MR_Box) (html_format__escape_break_html_attr_string_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[6]))
  },
  /* row 1 */
  {
    ((MR_Box) (&html_format_scalar_common_4[0])),
    ((MR_Box) (html_format__table_data_to_html_2_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[7]))
  },
  /* row 2 */
  {
    ((MR_Box) (&html_format_scalar_common_4[0])),
    ((MR_Box) (html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[8]))
  },
  /* row 3 */
  {
    ((MR_Box) (&html_format_scalar_common_4[0])),
    ((MR_Box) (html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[9]))
  },
  /* row 4 */
  {
    ((MR_Box) (&html_format_scalar_common_4[0])),
    ((MR_Box) (html_format__escape_html_string_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[10]))
  },
  /* row 5 */
  {
    ((MR_Box) (&html_format_scalar_common_4[0])),
    ((MR_Box) (html_format__escape_html_attr_string_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[11]))
  },
  /* row 6 */
  {
    ((MR_Box) (&html_format_scalar_common_4[0])),
    ((MR_Box) (html_format__escape_break_html_string_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[12]))
  },
};

static /* final */ const MR_Box html_format_scalar_common_7[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box html_format_scalar_common_8[1][17] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) (&html_format__html_format__type_ctor_info_format_info_0)),
    ((MR_Box) (&display__display__type_ctor_info_table_header_group_0)),
    ((MR_Box) (&html_format__html_format__type_ctor_info_table_header_rows_0)),
    ((MR_Box) (&html_format__html_format__type_ctor_info_table_header_rows_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&html_format__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&html_format__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&html_format__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&html_format__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&html_format__tree234__pti_tree234_2__plain_html_format__type_ctor_info_style_control_0__plain_tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&html_format__tree234__pti_tree234_2__plain_html_format__type_ctor_info_style_control_0__plain_tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct html_format__vector_common_type_6_0_s html_format_vector_common_6[52] = {
  /* row 0 */   {     (MR_String) "allocations" },
  /* row 1 */   {     (MR_String) "callseqs" },
  /* row 2 */   {     (MR_String) "clique" },
  /* row 3 */   {     (MR_String) "field_name" },
  /* row 4 */   {     (MR_String) "memory" },
  /* row 5 */   {     (MR_String) "module_name" },
  /* row 6 */   {     (MR_String) "default" },
  /* row 7 */   {     (MR_String) "number" },
  /* row 8 */   {     (MR_String) "ordinal_rank" },
  /* row 9 */   {     (MR_String) "port_counts" },
  /* row 10 */   {     (MR_String) "proc" },
  /* row 11 */   {     (MR_String) "source_context" },
  /* row 12 */   {     (MR_String) "ticks_and_times" },
  /* row 13 */   {     (MR_String) "allocations" },
  /* row 14 */   {     (MR_String) "callseqs" },
  /* row 15 */   {     (MR_String) "clique" },
  /* row 16 */   {     (MR_String) "field_name" },
  /* row 17 */   {     (MR_String) "memory" },
  /* row 18 */   {     (MR_String) "module_name" },
  /* row 19 */   {     (MR_String) "default" },
  /* row 20 */   {     (MR_String) "number" },
  /* row 21 */   {     (MR_String) "ordinal_rank" },
  /* row 22 */   {     (MR_String) "port_counts" },
  /* row 23 */   {     (MR_String) "proc" },
  /* row 24 */   {     (MR_String) "source_context" },
  /* row 25 */   {     (MR_String) "ticks_and_times" },
  /* row 26 */   {     (MR_String) "allocations" },
  /* row 27 */   {     (MR_String) "callseqs" },
  /* row 28 */   {     (MR_String) "clique" },
  /* row 29 */   {     (MR_String) "field_name" },
  /* row 30 */   {     (MR_String) "memory" },
  /* row 31 */   {     (MR_String) "module_name" },
  /* row 32 */   {     (MR_String) "default" },
  /* row 33 */   {     (MR_String) "number" },
  /* row 34 */   {     (MR_String) "ordinal_rank" },
  /* row 35 */   {     (MR_String) "port_counts" },
  /* row 36 */   {     (MR_String) "proc" },
  /* row 37 */   {     (MR_String) "source_context" },
  /* row 38 */   {     (MR_String) "ticks_and_times" },
  /* row 39 */   {     (MR_String) "allocations" },
  /* row 40 */   {     (MR_String) "callseqs" },
  /* row 41 */   {     (MR_String) "clique" },
  /* row 42 */   {     (MR_String) "field_name" },
  /* row 43 */   {     (MR_String) "memory" },
  /* row 44 */   {     (MR_String) "module_name" },
  /* row 45 */   {     (MR_String) "default" },
  /* row 46 */   {     (MR_String) "number" },
  /* row 47 */   {     (MR_String) "ordinal_rank" },
  /* row 48 */   {     (MR_String) "port_counts" },
  /* row 49 */   {     (MR_String) "proc" },
  /* row 50 */   {     (MR_String) "source_context" },
  /* row 51 */   {     (MR_String) "ticks_and_times" },
};


#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &html_format__html_format__type_ctor_info_style_element_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 html_format__pair__pti_pair_2__plain_html_format__type_ctor_info_style_control_0__plain_tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &html_format__html_format__type_ctor_info_style_control_0,
    (MR_PseudoTypeInfo) &html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 html_format__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 html_format____vpti_pred_2__plain_builtin__type_ctor_info_character_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 html_format__list__pti_list_1__plain_builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 html_format__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 html_format__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 html_format__tree234__pti_tree234_2__plain_html_format__type_ctor_info_style_control_0__plain_tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &html_format__html_format__type_ctor_info_style_control_0,
    (MR_PseudoTypeInfo) &html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 html_format__pair__pti_pair_2__plain_html_format__type_ctor_info_style_element_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &html_format__html_format__type_ctor_info_style_element_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct2 html_format__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_column_class_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (html_format____Unify____column_class_map_0_0_10001)),
  ((MR_Box) (html_format____Compare____column_class_map_0_0_10001)),
  (MR_String) "html_format",
  (MR_String) "column_class_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &html_format__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo html_format__html_format__field_types_format_info_0_0[6] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_colour_column_groups_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_box_tables_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_developer_mode_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_ConstString html_format__html_format__field_names_format_info_0_0[6] = {
  (MR_String) "fi_pref_colour_scheme",
  (MR_String) "fi_pref_box",
  (MR_String) "fi_pref_developer",
  (MR_String) "fi_server_name_port",
  (MR_String) "fi_script_name",
  (MR_String) "fi_deep_file"
};

static const MR_DuArgLocn html_format__html_format__field_locns_format_info_0_0[6] = {
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
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc html_format__html_format__du_functor_desc_format_info_0_0 = {
  (MR_String) "format_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  html_format__html_format__field_types_format_info_0_0,
  html_format__html_format__field_names_format_info_0_0,
  html_format__html_format__field_locns_format_info_0_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr html_format__html_format__du_stag_ordered_format_info_0_0[1] = {
  &html_format__html_format__du_functor_desc_format_info_0_0
};

static const MR_DuPtagLayout html_format__html_format__du_ptag_ordered_format_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    html_format__html_format__du_stag_ordered_format_info_0_0
  }
};

static const MR_DuFunctorDescPtr html_format__html_format__du_name_ordered_format_info_0[1] = {
  &html_format__html_format__du_functor_desc_format_info_0_0
};

static const MR_Integer html_format__html_format__functor_number_map_format_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_format_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (html_format____Unify____format_info_0_0_10001)),
  ((MR_Box) (html_format____Compare____format_info_0_0_10001)),
  (MR_String) "html_format",
  (MR_String) "format_info",
  {     html_format__html_format__du_name_ordered_format_info_0 },
  {     html_format__html_format__du_ptag_ordered_format_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  html_format__html_format__functor_number_map_format_info_0
};

static const MR_FA_TypeInfo_Struct1 html_format__cord__ti_cord_1builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_html_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (html_format____Unify____html_0_0_10001)),
  ((MR_Box) (html_format____Compare____html_0_0_10001)),
  (MR_String) "html_format",
  (MR_String) "html",
  {     NULL },
  {     (MR_PseudoTypeInfo) &html_format__cord__ti_cord_1builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer html_format__html_format__functor_number_map_style_control_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc html_format__html_format__notag_functor_desc_style_control_0 = {
  (MR_String) "style_control",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_style_control_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (html_format____Unify____style_control_0_0_10001)),
  ((MR_Box) (html_format____Compare____style_control_0_0_10001)),
  (MR_String) "html_format",
  (MR_String) "style_control",
  {     &html_format__html_format__notag_functor_desc_style_control_0 },
  {     &html_format__html_format__notag_functor_desc_style_control_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  html_format__html_format__functor_number_map_style_control_0
};

static const MR_FA_TypeInfo_Struct2 html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_control_0tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &html_format__html_format__type_ctor_info_style_control_0,
    (MR_TypeInfo) &html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0
  }
};

const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_style_control_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (html_format____Unify____style_control_map_0_0_10001)),
  ((MR_Box) (html_format____Compare____style_control_map_0_0_10001)),
  (MR_String) "html_format",
  (MR_String) "style_control_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_control_0tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer html_format__html_format__functor_number_map_style_element_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc html_format__html_format__notag_functor_desc_style_element_0 = {
  (MR_String) "style_element",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_style_element_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (html_format____Unify____style_element_0_0_10001)),
  ((MR_Box) (html_format____Compare____style_element_0_0_10001)),
  (MR_String) "html_format",
  (MR_String) "style_element",
  {     &html_format__html_format__notag_functor_desc_style_element_0 },
  {     &html_format__html_format__notag_functor_desc_style_element_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  html_format__html_format__functor_number_map_style_element_0
};

const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_style_element_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (html_format____Unify____style_element_map_0_0_10001)),
  ((MR_Box) (html_format____Compare____style_element_map_0_0_10001)),
  (MR_String) "html_format",
  (MR_String) "style_element_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc html_format__html_format__enum_functor_desc_table_header_rows_0_0 = {
  (MR_String) "one_header_row",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc html_format__html_format__enum_functor_desc_table_header_rows_0_1 = {
  (MR_String) "two_header_rows",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr html_format__html_format__enum_value_ordered_table_header_rows_0[2] = {
  &html_format__html_format__enum_functor_desc_table_header_rows_0_0,
  &html_format__html_format__enum_functor_desc_table_header_rows_0_1
};

static const MR_EnumFunctorDescPtr html_format__html_format__enum_name_ordered_table_header_rows_0[2] = {
  &html_format__html_format__enum_functor_desc_table_header_rows_0_0,
  &html_format__html_format__enum_functor_desc_table_header_rows_0_1
};

static const MR_Integer html_format__html_format__functor_number_map_table_header_rows_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_table_header_rows_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (html_format____Unify____table_header_rows_0_0_10001)),
  ((MR_Box) (html_format____Compare____table_header_rows_0_0_10001)),
  (MR_String) "html_format",
  (MR_String) "table_header_rows",
  {     html_format__html_format__enum_name_ordered_table_header_rows_0 },
  {     html_format__html_format__enum_value_ordered_table_header_rows_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  html_format__html_format__functor_number_map_table_header_rows_0
};

static MR_bool MR_CALL 
html_format____Unify____column_class_map_0_0_10001(
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2)
{
  {
    MR_bool html_format__succeeded;

    {
      html_format__succeeded = html_format____Unify____column_class_map_0_0(((MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2));
    }
    return html_format__succeeded;
  }
}

static void MR_CALL 
html_format____Compare____column_class_map_0_0_10001(
  MR_Box * html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box html_format__wrapper_arg_3)
{
  {
    MR_Word html_format__conv0_HeadVar__1_1;

    {
      html_format____Compare____column_class_map_0_0(&html_format__conv0_HeadVar__1_1, ((MR_Word) html_format__wrapper_arg_2), ((MR_Word) html_format__wrapper_arg_3));
    }
    *html_format__wrapper_arg_1 = ((MR_Box) (html_format__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
html_format____Unify____format_info_0_0_10001(
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2)
{
  {
    MR_bool html_format__succeeded;

    {
      html_format__succeeded = html_format____Unify____format_info_0_0(((MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2));
    }
    return html_format__succeeded;
  }
}

static void MR_CALL 
html_format____Compare____format_info_0_0_10001(
  MR_Box * html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box html_format__wrapper_arg_3)
{
  {
    MR_Word html_format__conv0_HeadVar__1_1;

    {
      html_format____Compare____format_info_0_0(&html_format__conv0_HeadVar__1_1, ((MR_Word) html_format__wrapper_arg_2), ((MR_Word) html_format__wrapper_arg_3));
    }
    *html_format__wrapper_arg_1 = ((MR_Box) (html_format__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
html_format____Unify____html_0_0_10001(
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2)
{
  {
    MR_bool html_format__succeeded;

    {
      html_format__succeeded = html_format____Unify____html_0_0(((MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2));
    }
    return html_format__succeeded;
  }
}

static void MR_CALL 
html_format____Compare____html_0_0_10001(
  MR_Box * html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box html_format__wrapper_arg_3)
{
  {
    MR_Word html_format__conv0_HeadVar__1_1;

    {
      html_format____Compare____html_0_0(&html_format__conv0_HeadVar__1_1, ((MR_Word) html_format__wrapper_arg_2), ((MR_Word) html_format__wrapper_arg_3));
    }
    *html_format__wrapper_arg_1 = ((MR_Box) (html_format__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
html_format____Unify____style_control_0_0_10001(
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2)
{
  {
    MR_bool html_format__succeeded;

    {
      html_format__succeeded = html_format____Unify____style_control_0_0(((MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2));
    }
    return html_format__succeeded;
  }
}

static void MR_CALL 
html_format____Compare____style_control_0_0_10001(
  MR_Box * html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box html_format__wrapper_arg_3)
{
  {
    MR_Word html_format__conv0_HeadVar__1_1;

    {
      html_format____Compare____style_control_0_0(&html_format__conv0_HeadVar__1_1, ((MR_Word) html_format__wrapper_arg_2), ((MR_Word) html_format__wrapper_arg_3));
    }
    *html_format__wrapper_arg_1 = ((MR_Box) (html_format__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
html_format____Unify____style_control_map_0_0_10001(
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2)
{
  {
    MR_bool html_format__succeeded;

    {
      html_format__succeeded = html_format____Unify____style_control_map_0_0(((MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2));
    }
    return html_format__succeeded;
  }
}

static void MR_CALL 
html_format____Compare____style_control_map_0_0_10001(
  MR_Box * html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box html_format__wrapper_arg_3)
{
  {
    MR_Word html_format__conv0_HeadVar__1_1;

    {
      html_format____Compare____style_control_map_0_0(&html_format__conv0_HeadVar__1_1, ((MR_Word) html_format__wrapper_arg_2), ((MR_Word) html_format__wrapper_arg_3));
    }
    *html_format__wrapper_arg_1 = ((MR_Box) (html_format__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
html_format____Unify____style_element_0_0_10001(
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2)
{
  {
    MR_bool html_format__succeeded;

    {
      html_format__succeeded = html_format____Unify____style_element_0_0(((MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2));
    }
    return html_format__succeeded;
  }
}

static void MR_CALL 
html_format____Compare____style_element_0_0_10001(
  MR_Box * html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box html_format__wrapper_arg_3)
{
  {
    MR_Word html_format__conv0_HeadVar__1_1;

    {
      html_format____Compare____style_element_0_0(&html_format__conv0_HeadVar__1_1, ((MR_Word) html_format__wrapper_arg_2), ((MR_Word) html_format__wrapper_arg_3));
    }
    *html_format__wrapper_arg_1 = ((MR_Box) (html_format__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
html_format____Unify____style_element_map_0_0_10001(
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2)
{
  {
    MR_bool html_format__succeeded;

    {
      html_format__succeeded = html_format____Unify____style_element_map_0_0(((MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2));
    }
    return html_format__succeeded;
  }
}

static void MR_CALL 
html_format____Compare____style_element_map_0_0_10001(
  MR_Box * html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box html_format__wrapper_arg_3)
{
  {
    MR_Word html_format__conv0_HeadVar__1_1;

    {
      html_format____Compare____style_element_map_0_0(&html_format__conv0_HeadVar__1_1, ((MR_Word) html_format__wrapper_arg_2), ((MR_Word) html_format__wrapper_arg_3));
    }
    *html_format__wrapper_arg_1 = ((MR_Box) (html_format__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
html_format____Unify____table_header_rows_0_0_10001(
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2)
{
  {
    MR_bool html_format__succeeded;

    {
      html_format__succeeded = html_format____Unify____table_header_rows_0_0(((MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2));
    }
    return html_format__succeeded;
  }
}

static void MR_CALL 
html_format____Compare____table_header_rows_0_0_10001(
  MR_Box * html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box html_format__wrapper_arg_3)
{
  {
    MR_Word html_format__conv0_HeadVar__1_1;

    {
      html_format____Compare____table_header_rows_0_0(&html_format__conv0_HeadVar__1_1, ((MR_Word) html_format__wrapper_arg_2), ((MR_Word) html_format__wrapper_arg_3));
    }
    *html_format__wrapper_arg_1 = ((MR_Box) (html_format__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
html_format____Compare____table_header_rows_0_0(
  MR_Word * html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2,
  MR_Word html_format__HeadVar__3_3)
{
  {
    MR_bool html_format__succeeded;
    MR_Integer html_format__Cast_HeadVar1_4 = (MR_Integer) html_format__HeadVar__2_2;
    MR_Integer html_format__Cast_HeadVar2_5 = (MR_Integer) html_format__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(html_format__HeadVar__1_1, html_format__Cast_HeadVar1_4, html_format__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
html_format____Unify____table_header_rows_0_0(
  MR_Word html_format__HeadVar__2_1,
  MR_Word html_format__HeadVar__2_2)
{
  {
    MR_bool html_format__succeeded = (html_format__HeadVar__2_1 == html_format__HeadVar__2_2);

    return html_format__succeeded;
  }
}

static void MR_CALL 
html_format____Compare____style_element_map_0_0(
  MR_Word * html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2,
  MR_Word html_format__HeadVar__3_3)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__Cast_HeadVar1_4 = html_format__HeadVar__2_2;
    MR_Word html_format__Cast_HeadVar2_5 = html_format__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &html_format_scalar_common_1[0], html_format__HeadVar__1_1, ((MR_Box) (html_format__Cast_HeadVar1_4)), ((MR_Box) (html_format__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
html_format____Unify____style_element_map_0_0(
  MR_Word html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__Cast_HeadVar1_3 = html_format__HeadVar__1_1;
    MR_Word html_format__Cast_HeadVar2_4 = html_format__HeadVar__2_2;

    {
      html_format__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &html_format_scalar_common_1[0], ((MR_Box) (html_format__Cast_HeadVar1_3)), ((MR_Box) (html_format__Cast_HeadVar2_4)));
    }
    return html_format__succeeded;
  }
}

static void MR_CALL 
html_format____Compare____style_element_0_0(
  MR_Word * html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2,
  MR_Word html_format__HeadVar__3_3)
{
  {
    MR_bool html_format__succeeded;
    MR_Integer html_format__CastX_6 = (MR_Integer) html_format__HeadVar__2_2;
    MR_Integer html_format__CastY_7 = (MR_Integer) html_format__HeadVar__3_3;

    html_format__succeeded = (html_format__CastX_6 == html_format__CastY_7);
    if (html_format__succeeded)
      *html_format__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String html_format__ArgX1_4 = (MR_String) html_format__HeadVar__2_2;
        MR_String html_format__ArgY1_5 = (MR_String) html_format__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(html_format__HeadVar__1_1, html_format__ArgX1_4, html_format__ArgY1_5);
        }
      }
  }
}

static MR_bool MR_CALL 
html_format____Unify____style_element_0_0(
  MR_Word html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2)
{
  {
    MR_bool html_format__succeeded;
    MR_Integer html_format__CastX_5 = (MR_Integer) html_format__HeadVar__1_1;
    MR_Integer html_format__CastY_6 = (MR_Integer) html_format__HeadVar__2_2;

    html_format__succeeded = (html_format__CastX_5 == html_format__CastY_6);
    if (html_format__succeeded)
      html_format__succeeded = MR_TRUE;
    else
      {
        MR_String html_format__ArgX1_3 = (MR_String) html_format__HeadVar__1_1;
        MR_String html_format__ArgY1_4 = (MR_String) html_format__HeadVar__2_2;

        html_format__succeeded = (strcmp(html_format__ArgX1_3, html_format__ArgY1_4) == 0);
      }
    return html_format__succeeded;
  }
}

static void MR_CALL 
html_format____Compare____style_control_map_0_0(
  MR_Word * html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2,
  MR_Word html_format__HeadVar__3_3)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__Cast_HeadVar1_4 = html_format__HeadVar__2_2;
    MR_Word html_format__Cast_HeadVar2_5 = html_format__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &html_format_scalar_common_1[4], html_format__HeadVar__1_1, ((MR_Box) (html_format__Cast_HeadVar1_4)), ((MR_Box) (html_format__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
html_format____Unify____style_control_map_0_0(
  MR_Word html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__Cast_HeadVar1_3 = html_format__HeadVar__1_1;
    MR_Word html_format__Cast_HeadVar2_4 = html_format__HeadVar__2_2;

    {
      html_format__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &html_format_scalar_common_1[4], ((MR_Box) (html_format__Cast_HeadVar1_3)), ((MR_Box) (html_format__Cast_HeadVar2_4)));
    }
    return html_format__succeeded;
  }
}

static void MR_CALL 
html_format____Compare____style_control_0_0(
  MR_Word * html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2,
  MR_Word html_format__HeadVar__3_3)
{
  {
    MR_bool html_format__succeeded;
    MR_Integer html_format__CastX_6 = (MR_Integer) html_format__HeadVar__2_2;
    MR_Integer html_format__CastY_7 = (MR_Integer) html_format__HeadVar__3_3;

    html_format__succeeded = (html_format__CastX_6 == html_format__CastY_7);
    if (html_format__succeeded)
      *html_format__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String html_format__ArgX1_4 = (MR_String) html_format__HeadVar__2_2;
        MR_String html_format__ArgY1_5 = (MR_String) html_format__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(html_format__HeadVar__1_1, html_format__ArgX1_4, html_format__ArgY1_5);
        }
      }
  }
}

static MR_bool MR_CALL 
html_format____Unify____style_control_0_0(
  MR_Word html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2)
{
  {
    MR_bool html_format__succeeded;
    MR_Integer html_format__CastX_5 = (MR_Integer) html_format__HeadVar__1_1;
    MR_Integer html_format__CastY_6 = (MR_Integer) html_format__HeadVar__2_2;

    html_format__succeeded = (html_format__CastX_5 == html_format__CastY_6);
    if (html_format__succeeded)
      html_format__succeeded = MR_TRUE;
    else
      {
        MR_String html_format__ArgX1_3 = (MR_String) html_format__HeadVar__1_1;
        MR_String html_format__ArgY1_4 = (MR_String) html_format__HeadVar__2_2;

        html_format__succeeded = (strcmp(html_format__ArgX1_3, html_format__ArgY1_4) == 0);
      }
    return html_format__succeeded;
  }
}

static void MR_CALL 
html_format____Compare____html_0_0(
  MR_Word * html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2,
  MR_Word html_format__HeadVar__3_3)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__Cast_HeadVar1_4 = html_format__HeadVar__2_2;
    MR_Word html_format__Cast_HeadVar2_5 = html_format__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &html_format_scalar_common_2[0], html_format__HeadVar__1_1, ((MR_Box) (html_format__Cast_HeadVar1_4)), ((MR_Box) (html_format__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
html_format____Unify____html_0_0(
  MR_Word html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__Cast_HeadVar1_3 = html_format__HeadVar__1_1;
    MR_Word html_format__Cast_HeadVar2_4 = html_format__HeadVar__2_2;

    {
      html_format__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &html_format_scalar_common_2[0], ((MR_Box) (html_format__Cast_HeadVar1_3)), ((MR_Box) (html_format__Cast_HeadVar2_4)));
    }
    return html_format__succeeded;
  }
}

static void MR_CALL 
html_format____Compare____format_info_0_0(
  MR_Word * html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2,
  MR_Word html_format__HeadVar__3_3)
{
  {
    MR_bool html_format__succeeded;
    MR_Integer html_format__CastX_21 = (MR_Integer) html_format__HeadVar__2_2;
    MR_Integer html_format__CastY_22 = (MR_Integer) html_format__HeadVar__3_3;

    html_format__succeeded = (html_format__CastX_21 == html_format__CastY_22);
    if (html_format__succeeded)
      *html_format__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word html_format__ArgX1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word html_format__ArgY1_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word html_format__ArgX2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word html_format__ArgY2_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word html_format__ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word html_format__ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_String html_format__ArgX4_10 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 1)));
        MR_String html_format__ArgY4_11 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__3_3, (MR_Integer) 1)));
        MR_String html_format__ArgX5_12 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 2)));
        MR_String html_format__ArgY5_13 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__3_3, (MR_Integer) 2)));
        MR_String html_format__ArgX6_14 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 3)));
        MR_String html_format__ArgY6_15 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word html_format__Var_16;
        MR_Integer html_format__Var_29 = (MR_Integer) html_format__ArgX1_4;
        MR_Integer html_format__Var_30 = (MR_Integer) html_format__ArgY1_5;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&html_format__Var_16, html_format__Var_29, html_format__Var_30);
        }
        html_format__succeeded = (html_format__Var_16 == (MR_Integer) 0);
        html_format__succeeded = !(html_format__succeeded);
        if (html_format__succeeded)
          *html_format__HeadVar__1_1 = html_format__Var_16;
        else
          {
            MR_Word html_format__Var_17;
            MR_Integer html_format__Var_31 = (MR_Integer) html_format__ArgX2_6;
            MR_Integer html_format__Var_32 = (MR_Integer) html_format__ArgY2_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&html_format__Var_17, html_format__Var_31, html_format__Var_32);
            }
            html_format__succeeded = (html_format__Var_17 == (MR_Integer) 0);
            html_format__succeeded = !(html_format__succeeded);
            if (html_format__succeeded)
              *html_format__HeadVar__1_1 = html_format__Var_17;
            else
              {
                MR_Word html_format__Var_18;
                MR_Integer html_format__Var_33 = (MR_Integer) html_format__ArgX3_8;
                MR_Integer html_format__Var_34 = (MR_Integer) html_format__ArgY3_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&html_format__Var_18, html_format__Var_33, html_format__Var_34);
                }
                html_format__succeeded = (html_format__Var_18 == (MR_Integer) 0);
                html_format__succeeded = !(html_format__succeeded);
                if (html_format__succeeded)
                  *html_format__HeadVar__1_1 = html_format__Var_18;
                else
                  {
                    MR_Word html_format__Var_19;

                    {
                      mercury__private_builtin__builtin_compare_string_3_p_0(&html_format__Var_19, html_format__ArgX4_10, html_format__ArgY4_11);
                    }
                    html_format__succeeded = (html_format__Var_19 == (MR_Integer) 0);
                    html_format__succeeded = !(html_format__succeeded);
                    if (html_format__succeeded)
                      *html_format__HeadVar__1_1 = html_format__Var_19;
                    else
                      {
                        MR_Word html_format__Var_20;

                        {
                          mercury__private_builtin__builtin_compare_string_3_p_0(&html_format__Var_20, html_format__ArgX5_12, html_format__ArgY5_13);
                        }
                        html_format__succeeded = (html_format__Var_20 == (MR_Integer) 0);
                        html_format__succeeded = !(html_format__succeeded);
                        if (html_format__succeeded)
                          *html_format__HeadVar__1_1 = html_format__Var_20;
                        else
                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(html_format__HeadVar__1_1, html_format__ArgX6_14, html_format__ArgY6_15);
                          }
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
html_format____Unify____format_info_0_0(
  MR_Word html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2)
{
  {
    MR_bool html_format__succeeded;
    MR_Integer html_format__CastX_15 = (MR_Integer) html_format__HeadVar__1_1;
    MR_Integer html_format__CastY_16 = (MR_Integer) html_format__HeadVar__2_2;

    html_format__succeeded = (html_format__CastX_15 == html_format__CastY_16);
    if (html_format__succeeded)
      html_format__succeeded = MR_TRUE;
    else
      {
        MR_Word html_format__ArgX1_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word html_format__ArgY1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word html_format__ArgX2_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word html_format__ArgY2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word html_format__ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word html_format__ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_String html_format__ArgX4_9 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 1)));
        MR_String html_format__ArgY4_10 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 1)));
        MR_String html_format__ArgX5_11 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 2)));
        MR_String html_format__ArgY5_12 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 2)));
        MR_String html_format__ArgX6_13 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 3)));
        MR_String html_format__ArgY6_14 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 3)));

        html_format__succeeded = (html_format__ArgX1_3 == html_format__ArgY1_4);
        if (html_format__succeeded)
          {
            html_format__succeeded = (html_format__ArgX2_5 == html_format__ArgY2_6);
            if (html_format__succeeded)
              {
                html_format__succeeded = (html_format__ArgX3_7 == html_format__ArgY3_8);
                if (html_format__succeeded)
                  {
                    html_format__succeeded = (strcmp(html_format__ArgX4_9, html_format__ArgY4_10) == 0);
                    if (html_format__succeeded)
                      {
                        html_format__succeeded = (strcmp(html_format__ArgX5_11, html_format__ArgY5_12) == 0);
                        if (html_format__succeeded)
                          html_format__succeeded = (strcmp(html_format__ArgX6_13, html_format__ArgY6_14) == 0);
                      }
                  }
              }
          }
      }
    return html_format__succeeded;
  }
}

static void MR_CALL 
html_format____Compare____column_class_map_0_0(
  MR_Word * html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2,
  MR_Word html_format__HeadVar__3_3)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__Cast_HeadVar1_4 = html_format__HeadVar__2_2;
    MR_Word html_format__Cast_HeadVar2_5 = html_format__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &html_format_scalar_common_1[3], html_format__HeadVar__1_1, ((MR_Box) (html_format__Cast_HeadVar1_4)), ((MR_Box) (html_format__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
html_format____Unify____column_class_map_0_0(
  MR_Word html_format__HeadVar__1_1,
  MR_Word html_format__HeadVar__2_2)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__Cast_HeadVar1_3 = html_format__HeadVar__1_1;
    MR_Word html_format__Cast_HeadVar2_4 = html_format__HeadVar__2_2;

    {
      html_format__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &html_format_scalar_common_1[3], ((MR_Box) (html_format__Cast_HeadVar1_3)), ((MR_Box) (html_format__Cast_HeadVar2_4)));
    }
    return html_format__succeeded;
  }
}

static MR_bool MR_CALL 
html_format__special_html_char_or_break_2_p_0(
  MR_Char html_format__HeadVar__1_1,
  MR_String * html_format__HeadVar__2_2)
{
  {
    MR_bool html_format__succeeded;

    switch (html_format__HeadVar__1_1) {
      default:
        html_format__succeeded = MR_FALSE;
        break;
      case (MR_Char) 34:
        {
          *html_format__HeadVar__2_2 = (MR_String) "&quot;";
          html_format__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 38:
        {
          *html_format__HeadVar__2_2 = (MR_String) "&amp;";
          html_format__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          *html_format__HeadVar__2_2 = (MR_String) "&apos;";
          html_format__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 46:
        {
          *html_format__HeadVar__2_2 = (MR_String) ".<wbr />";
          html_format__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 47:
        {
          *html_format__HeadVar__2_2 = (MR_String) "/<wbr />";
          html_format__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 58:
        {
          *html_format__HeadVar__2_2 = (MR_String) ":<wbr />";
          html_format__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 60:
        {
          *html_format__HeadVar__2_2 = (MR_String) "&lt;";
          html_format__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 62:
        {
          *html_format__HeadVar__2_2 = (MR_String) "&gt;";
          html_format__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 95:
        {
          *html_format__HeadVar__2_2 = (MR_String) "_<wbr />";
          html_format__succeeded = MR_TRUE;
        }
        break;
    }
    return html_format__succeeded;
  }
}

static MR_bool MR_CALL 
html_format__special_html_char_2_p_0(
  MR_Char html_format__HeadVar__1_1,
  MR_String * html_format__HeadVar__2_2)
{
  {
    MR_bool html_format__succeeded;

    switch (html_format__HeadVar__1_1) {
      default:
        html_format__succeeded = MR_FALSE;
        break;
      case (MR_Char) 34:
        {
          *html_format__HeadVar__2_2 = (MR_String) "&quot;";
          html_format__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 38:
        {
          *html_format__HeadVar__2_2 = (MR_String) "&amp;";
          html_format__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          *html_format__HeadVar__2_2 = (MR_String) "&apos;";
          html_format__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 60:
        {
          *html_format__HeadVar__2_2 = (MR_String) "&lt;";
          html_format__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 62:
        {
          *html_format__HeadVar__2_2 = (MR_String) "&gt;";
          html_format__succeeded = MR_TRUE;
        }
        break;
    }
    return html_format__succeeded;
  }
}

static void MR_CALL 
html_format__replace_special_char_2_4_p_0(
  MR_Word html_format__SpecialCharTable_5,
  MR_Char html_format__Char_6,
  MR_Word html_format__STATE_VARIABLE_Acc_0_10,
  MR_Word * html_format__STATE_VARIABLE_Acc_11)
{
  {
    MR_bool html_format__succeeded;
    MR_String html_format__String_8;
    MR_bool MR_CALL (* html_format__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), html_format__SpecialCharTable_5, (MR_Integer) 1)));
    MR_Box html_format__conv1_String_8;

    {
      html_format__succeeded = html_format__func_0(((MR_Box) html_format__SpecialCharTable_5), ((MR_Box) (MR_Word) (html_format__Char_6)), &html_format__conv1_String_8);
    }
    if (html_format__succeeded)
      {
        html_format__String_8 = ((MR_String) html_format__conv1_String_8);
        html_format__succeeded = MR_TRUE;
      }
    if (html_format__succeeded)
      {
        MR_Word html_format__Chars_9;

        {
          mercury__string__to_char_list_2_p_0(html_format__String_8, &html_format__Chars_9);
        }
        {
          mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, html_format__Chars_9, html_format__STATE_VARIABLE_Acc_0_10, html_format__STATE_VARIABLE_Acc_11);
        }
      }
    else
      {
        {
          mercury__list__cons_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, ((MR_Box) (MR_Word) (html_format__Char_6)), html_format__STATE_VARIABLE_Acc_0_10, html_format__STATE_VARIABLE_Acc_11);
        }
      }
  }
}

static void MR_CALL 
html_format__insert_column_into_classmap_4_p_0(
  MR_String html_format__Value_5,
  MR_Integer html_format__Key_6,
  MR_Word html_format__STATE_VARIABLE_Map_0_8,
  MR_Word * html_format__STATE_VARIABLE_Map_9)
{
  {
    MR_bool html_format__succeeded;

    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, html_format__Key_6, ((MR_Box) (html_format__Value_5)), html_format__STATE_VARIABLE_Map_0_8, html_format__STATE_VARIABLE_Map_9);
    }
  }
}

static void MR_CALL 
html_format__table_header_num_rows_and_classmap_14_p_0_1(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box * html_format__wrapper_arg_3)
{
  {
    MR_Box html_format__closure = html_format__closure_arg;
    MR_Word html_format__conv0_STATE_VARIABLE_Map_9;

    {
      html_format__insert_column_into_classmap_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), html_format__closure, (MR_Integer) 3))), ((MR_Integer) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2), &html_format__conv0_STATE_VARIABLE_Map_9);
    }
    *html_format__wrapper_arg_3 = ((MR_Box) (html_format__conv0_STATE_VARIABLE_Map_9));
  }
}

static void MR_CALL 
html_format__table_header_num_rows_and_classmap_14_p_0(
  MR_Word html_format__FormatInfo_15,
  MR_Word html_format__HeaderGroup_16,
  MR_Word html_format__STATE_VARIABLE_NumRows_0_32,
  MR_Word * html_format__STATE_VARIABLE_NumRows_33,
  MR_Integer html_format__STATE_VARIABLE_ColumnNumber_0_34,
  MR_Integer * html_format__STATE_VARIABLE_ColumnNumber_35,
  MR_Word html_format__STATE_VARIABLE_ClassMap_0_36,
  MR_Word * html_format__STATE_VARIABLE_ClassMap_37,
  MR_Integer html_format__STATE_VARIABLE_HeaderGroupNumber_0_38,
  MR_Integer * html_format__STATE_VARIABLE_HeaderGroupNumber_39,
  MR_Word html_format__STATE_VARIABLE_ColouredClassStrs_0_40,
  MR_Word * html_format__STATE_VARIABLE_ColouredClassStrs_41,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_42,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_43)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__ColumnTitles_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeaderGroup_16, (MR_Integer) 0)));
    MR_Word html_format__ColumnClass_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeaderGroup_16, (MR_Integer) 1)))) & (MR_Integer) 15);
    MR_Word html_format__MaybeColour_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeaderGroup_16, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
    MR_String html_format__ColumnClassStr_26 = ((&html_format_vector_common_6[39 + html_format__ColumnClass_24]))->html_format__vector_common_type_6_0__vct_6_f_0;
    MR_Integer html_format__NumSubCols_28;

    if (((MR_tag((MR_Word) html_format__ColumnTitles_23)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word html_format__SubTitles_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__ColumnTitles_23, (MR_Integer) 1)));
        MR_Word html_format__Var_45;
        MR_Integer html_format__Var_46;
        MR_Integer html_format__Var_48;
        MR_String html_format__Var_29 = ((MR_String) (MR_hl_field(MR_mktag(1), html_format__ColumnTitles_23, (MR_Integer) 0)));
        MR_Box html_format__conv1_STATE_VARIABLE_ClassMap_37;

        {
          mercury__list__length_2_p_0((MR_Word) &display__display__type_ctor_info_table_data_0, html_format__SubTitles_30, &html_format__NumSubCols_28);
        }
        *html_format__STATE_VARIABLE_NumRows_33 = (MR_Integer) 1;
        {
          html_format__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), html_format__Var_45, 0) = ((MR_Box) (&html_format_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), html_format__Var_45, 1) = ((MR_Box) (html_format__table_header_num_rows_and_classmap_14_p_0_1));
          MR_hl_field(MR_mktag(0), html_format__Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), html_format__Var_45, 3) = ((MR_Box) (html_format__ColumnClassStr_26));
        }
        html_format__Var_48 = (html_format__STATE_VARIABLE_ColumnNumber_0_34 + html_format__NumSubCols_28);
        html_format__Var_46 = (html_format__Var_48 - (MR_Integer) 1);
        {
          mercury__int__fold_up_5_p_0((MR_Word) &html_format_scalar_common_1[3], html_format__Var_45, html_format__STATE_VARIABLE_ColumnNumber_0_34, html_format__Var_46, ((MR_Box) (html_format__STATE_VARIABLE_ClassMap_0_36)), &html_format__conv1_STATE_VARIABLE_ClassMap_37);
        }
        *html_format__STATE_VARIABLE_ClassMap_37 = ((MR_Word) html_format__conv1_STATE_VARIABLE_ClassMap_37);
      }
    else
      {
        html_format__NumSubCols_28 = (MR_Integer) 1;
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, html_format__STATE_VARIABLE_ColumnNumber_0_34, ((MR_Box) (html_format__ColumnClassStr_26)), html_format__STATE_VARIABLE_ClassMap_0_36, html_format__STATE_VARIABLE_ClassMap_37);
        }
        *html_format__STATE_VARIABLE_NumRows_33 = html_format__STATE_VARIABLE_NumRows_0_32;
      }
    *html_format__STATE_VARIABLE_ColumnNumber_35 = (html_format__STATE_VARIABLE_ColumnNumber_0_34 + html_format__NumSubCols_28);
    switch (html_format__MaybeColour_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          html_format__update_style_control_map_7_p_0(html_format__ColumnClassStr_26, html_format__STATE_VARIABLE_HeaderGroupNumber_0_38, html_format__STATE_VARIABLE_HeaderGroupNumber_39, html_format__STATE_VARIABLE_ColouredClassStrs_0_40, html_format__STATE_VARIABLE_ColouredClassStrs_41, html_format__STATE_VARIABLE_StyleControlMap_0_42, html_format__STATE_VARIABLE_StyleControlMap_43);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word html_format__Colour_67 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_15, (MR_Integer) 0)))) & (MR_Integer) 1);
          MR_Word html_format__Var_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_15, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word html_format__Var_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_15, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_String html_format__Var_57 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_15, (MR_Integer) 1)));
          MR_String html_format__Var_58 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_15, (MR_Integer) 2)));
          MR_String html_format__Var_59 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_15, (MR_Integer) 3)));

          switch (html_format__Colour_67) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                html_format__update_style_control_map_7_p_0(html_format__ColumnClassStr_26, html_format__STATE_VARIABLE_HeaderGroupNumber_0_38, html_format__STATE_VARIABLE_HeaderGroupNumber_39, html_format__STATE_VARIABLE_ColouredClassStrs_0_40, html_format__STATE_VARIABLE_ColouredClassStrs_41, html_format__STATE_VARIABLE_StyleControlMap_0_42, html_format__STATE_VARIABLE_StyleControlMap_43);
              }
              break;
            case (MR_Integer) 1:
              {
                *html_format__STATE_VARIABLE_HeaderGroupNumber_39 = html_format__STATE_VARIABLE_HeaderGroupNumber_0_38;
                *html_format__STATE_VARIABLE_ColouredClassStrs_41 = html_format__STATE_VARIABLE_ColouredClassStrs_0_40;
                *html_format__STATE_VARIABLE_StyleControlMap_43 = html_format__STATE_VARIABLE_StyleControlMap_0_42;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          *html_format__STATE_VARIABLE_HeaderGroupNumber_39 = html_format__STATE_VARIABLE_HeaderGroupNumber_0_38;
          *html_format__STATE_VARIABLE_ColouredClassStrs_41 = html_format__STATE_VARIABLE_ColouredClassStrs_0_40;
          *html_format__STATE_VARIABLE_StyleControlMap_43 = html_format__STATE_VARIABLE_StyleControlMap_0_42;
        }
        break;
    }
  }
}

static void MR_CALL 
html_format__update_style_control_map_7_p_0(
  MR_String html_format__ColumnClassStr_8,
  MR_Integer html_format__STATE_VARIABLE_HeaderGroupNumber_0_17,
  MR_Integer * html_format__STATE_VARIABLE_HeaderGroupNumber_18,
  MR_Word html_format__STATE_VARIABLE_ColouredClassStrs_0_19,
  MR_Word * html_format__STATE_VARIABLE_ColouredClassStrs_20,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_21,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_22)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__StyleControl_12;
    MR_Word html_format__StyleElement_13;
    MR_String html_format__Colour_14;
    MR_String html_format__Var_23;
    MR_Integer html_format__Var_26;
    MR_Word html_format__StyleElementMap0_15;
    MR_Box html_format__conv0_StyleElementMap0_15;

    {
      html_format__Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "td.", html_format__ColumnClassStr_8);
    }
    html_format__StyleControl_12 = (MR_Word) html_format__Var_23;
    html_format__StyleElement_13 = (MR_Word) ((MR_Box) ((MR_String) "background"));
    html_format__Var_26 = (html_format__STATE_VARIABLE_HeaderGroupNumber_0_17 & (MR_Integer) 1);
    html_format__succeeded = (html_format__Var_26 == (MR_Integer) 0);
    if (html_format__succeeded)
      html_format__Colour_14 = (MR_String) "LightGrey";
    else
      html_format__Colour_14 = (MR_String) "White";
    {
      html_format__succeeded = mercury__set__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__ColumnClassStr_8)), html_format__STATE_VARIABLE_ColouredClassStrs_0_19);
    }
    if (html_format__succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "html_format", (MR_String) "predicate \140html_format.update_style_control_map\'/7", (MR_String) "repeated table_column_class");
          return;
        }
      }
    else
      {
        {
          mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__ColumnClassStr_8)), html_format__STATE_VARIABLE_ColouredClassStrs_0_19, html_format__STATE_VARIABLE_ColouredClassStrs_20);
        }
      }
    {
      html_format__succeeded = mercury__map__search_3_p_0((MR_Word) &html_format__html_format__type_ctor_info_style_control_0, (MR_Word) &html_format_scalar_common_1[0], html_format__STATE_VARIABLE_StyleControlMap_0_21, ((MR_Box) (html_format__StyleControl_12)), &html_format__conv0_StyleElementMap0_15);
    }
    if (html_format__succeeded)
      {
        html_format__StyleElementMap0_15 = ((MR_Word) html_format__conv0_StyleElementMap0_15);
        html_format__succeeded = MR_TRUE;
      }
    if (html_format__succeeded)
      {
        MR_Word html_format__StyleElementMap_16;

        {
          mercury__map__set_4_p_0((MR_Word) &html_format__html_format__type_ctor_info_style_element_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__StyleElement_13)), ((MR_Box) (html_format__Colour_14)), html_format__StyleElementMap0_15, &html_format__StyleElementMap_16);
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &html_format__html_format__type_ctor_info_style_control_0, (MR_Word) &html_format_scalar_common_1[0], ((MR_Box) (html_format__StyleControl_12)), ((MR_Box) (html_format__StyleElementMap_16)), html_format__STATE_VARIABLE_StyleControlMap_0_21, html_format__STATE_VARIABLE_StyleControlMap_22);
        }
      }
    else
      {
        MR_Word html_format__StyleElementMap_36;

        {
          html_format__StyleElementMap_36 = mercury__map__singleton_2_f_0((MR_Word) &html_format__html_format__type_ctor_info_style_element_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__StyleElement_13)), ((MR_Box) (html_format__Colour_14)));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &html_format__html_format__type_ctor_info_style_control_0, (MR_Word) &html_format_scalar_common_1[0], ((MR_Box) (html_format__StyleControl_12)), ((MR_Box) (html_format__StyleElementMap_36)), html_format__STATE_VARIABLE_StyleControlMap_0_21, html_format__STATE_VARIABLE_StyleControlMap_22);
        }
      }
    *html_format__STATE_VARIABLE_HeaderGroupNumber_18 = (html_format__STATE_VARIABLE_HeaderGroupNumber_0_17 + (MR_Integer) 1);
  }
}

static MR_Word MR_CALL 
html_format__style_element_to_html_1_f_0(
  MR_Word html_format__HeadVar__1_1)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__HeadVar__2_2;
    MR_String html_format__ElementName_3;
    MR_String html_format__Value_4 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word html_format__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 0)));
    MR_String html_format__Var_6;
    MR_String html_format__Var_14;
    MR_String html_format__Var_16;
    MR_String html_format__Var_17;

    html_format__ElementName_3 = (MR_String) html_format__Var_5;
    {
      html_format__Var_14 = mercury__string__f_43_43_2_f_0(html_format__Value_4, (MR_String) ";\n");
    }
    {
      html_format__Var_16 = mercury__string__f_43_43_2_f_0((MR_String) ": ", html_format__Var_14);
    }
    {
      html_format__Var_17 = mercury__string__f_43_43_2_f_0(html_format__ElementName_3, html_format__Var_16);
    }
    {
      html_format__Var_6 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", html_format__Var_17);
    }
    {
      html_format__HeadVar__2_2 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Var_6)));
    }
    return html_format__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
html_format__style_control_to_html_1_f_0_1(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1)
{
  {
    MR_Box html_format__wrapper_arg_2;
    MR_Box html_format__closure = html_format__closure_arg;
    MR_Word html_format__conv0_HeadVar__2_2;

    {
      html_format__conv0_HeadVar__2_2 = html_format__style_element_to_html_1_f_0(((MR_Word) html_format__wrapper_arg_1));
    }
    html_format__wrapper_arg_2 = ((MR_Box) (html_format__conv0_HeadVar__2_2));
    return html_format__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
html_format__style_control_to_html_1_f_0(
  MR_Word html_format__HeadVar__1_1)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__HTML_5;
    MR_Word html_format__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word html_format__Control_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word html_format__StyleElementMap_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 1)));
    MR_String html_format__ControlName_6 = (MR_String) html_format__Control_3;
    MR_Word html_format__StyleElements_7;
    MR_Word html_format__ElementHTMLs_8;
    MR_Word html_format__ElementsHTML_9;
    MR_Word html_format__StartFragmentHTML_10;
    MR_Word html_format__EndFragmentHTML_11;
    MR_String html_format__Var_13;
    MR_Word html_format__Var_19;
    MR_String html_format__Var_27;

    {
      html_format__StyleElements_7 = mercury__map__to_assoc_list_1_f_0((MR_Word) &html_format__html_format__type_ctor_info_style_element_0, html_format__TypeCtorInfo_21_21, html_format__StyleElementMap_4);
    }
    {
      html_format__ElementHTMLs_8 = mercury__list__map_2_f_0((MR_Word) &html_format_scalar_common_1[2], (MR_Word) &html_format_scalar_common_2[0], (MR_Word) &html_format_scalar_common_1[13], html_format__StyleElements_7);
    }
    {
      html_format__ElementsHTML_9 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, html_format__ElementHTMLs_8);
    }
    {
      html_format__Var_27 = mercury__string__f_43_43_2_f_0(html_format__ControlName_6, (MR_String) "\n\t{\n");
    }
    {
      html_format__Var_13 = mercury__string__f_43_43_2_f_0((MR_String) "\t", html_format__Var_27);
    }
    {
      html_format__StartFragmentHTML_10 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Var_13)));
    }
    {
      html_format__EndFragmentHTML_11 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\t}\n")));
    }
    {
      html_format__Var_19 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_21_21, html_format__ElementsHTML_9, html_format__EndFragmentHTML_11);
    }
    {
      html_format__HTML_5 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_21_21, html_format__StartFragmentHTML_10, html_format__Var_19);
    }
    return html_format__HTML_5;
  }
}

static void MR_CALL 
html_format__escape_break_html_string_1_f_0_2(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box * html_format__wrapper_arg_3)
{
  {
    MR_Box html_format__closure = html_format__closure_arg;
    MR_Word html_format__conv1_STATE_VARIABLE_Acc_11;

    {
      html_format__replace_special_char_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), html_format__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2), &html_format__conv1_STATE_VARIABLE_Acc_11);
    }
    *html_format__wrapper_arg_3 = ((MR_Box) (html_format__conv1_STATE_VARIABLE_Acc_11));
  }
}

static MR_bool MR_CALL 
html_format__escape_break_html_string_1_f_0_1(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box * html_format__wrapper_arg_2)
{
  {
    MR_bool html_format__succeeded;
    MR_Box html_format__closure = html_format__closure_arg;
    MR_String html_format__conv0_HeadVar__2_2;

    {
      html_format__succeeded = html_format__special_html_char_or_break_2_p_0(((MR_Char) (MR_Word) html_format__wrapper_arg_1), &html_format__conv0_HeadVar__2_2);
    }
    if (html_format__succeeded)
      {
        *html_format__wrapper_arg_2 = ((MR_Box) (html_format__conv0_HeadVar__2_2));
        html_format__succeeded = MR_TRUE;
      }
    return html_format__succeeded;
  }
}

MR_String MR_CALL 
html_format__escape_break_html_string_1_f_0(
  MR_String html_format__String_3)
{
  {
    MR_bool html_format__succeeded;
    MR_String html_format__HeadVar__2_2;
    MR_Word html_format__Chars_11;
    MR_Box html_format__conv2_Chars_11;

    {
      mercury__string__foldr_4_p_0((MR_Word) &html_format_scalar_common_2[2], (MR_Word) &html_format_scalar_common_5[6], html_format__String_3, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &html_format__conv2_Chars_11);
    }
    html_format__Chars_11 = ((MR_Word) html_format__conv2_Chars_11);
    {
      mercury__string__from_char_list_2_p_0(html_format__Chars_11, &html_format__HeadVar__2_2);
    }
    return html_format__HeadVar__2_2;
  }
}

static void MR_CALL 
html_format__escape_html_attr_string_1_f_0_2(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box * html_format__wrapper_arg_3)
{
  {
    MR_Box html_format__closure = html_format__closure_arg;
    MR_Word html_format__conv1_STATE_VARIABLE_Acc_11;

    {
      html_format__replace_special_char_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), html_format__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2), &html_format__conv1_STATE_VARIABLE_Acc_11);
    }
    *html_format__wrapper_arg_3 = ((MR_Box) (html_format__conv1_STATE_VARIABLE_Acc_11));
  }
}

static MR_bool MR_CALL 
html_format__escape_html_attr_string_1_f_0_1(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box * html_format__wrapper_arg_2)
{
  {
    MR_bool html_format__succeeded;
    MR_Box html_format__closure = html_format__closure_arg;
    MR_String html_format__conv0_HeadVar__2_2;

    {
      html_format__succeeded = html_format__special_html_char_2_p_0(((MR_Char) (MR_Word) html_format__wrapper_arg_1), &html_format__conv0_HeadVar__2_2);
    }
    if (html_format__succeeded)
      {
        *html_format__wrapper_arg_2 = ((MR_Box) (html_format__conv0_HeadVar__2_2));
        html_format__succeeded = MR_TRUE;
      }
    return html_format__succeeded;
  }
}

MR_String MR_CALL 
html_format__escape_html_attr_string_1_f_0(
  MR_Word html_format__HeadVar__1_1)
{
  {
    MR_bool html_format__succeeded;
    MR_String html_format__HeadVar__2_2;
    MR_Word html_format__Attrs_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 0)));
    MR_String html_format__String_4 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 1)));
    MR_String html_format__Var_5;
    MR_Word html_format__Chars_13;
    MR_Box html_format__conv2_Chars_13;

    {
      mercury__string__foldr_4_p_0((MR_Word) &html_format_scalar_common_2[2], (MR_Word) &html_format_scalar_common_5[5], html_format__String_4, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &html_format__conv2_Chars_13);
    }
    html_format__Chars_13 = ((MR_Word) html_format__conv2_Chars_13);
    {
      mercury__string__from_char_list_2_p_0(html_format__Chars_13, &html_format__Var_5);
    }
    {
      html_format__HeadVar__2_2 = html_format__handle_html_attrs_2_f_0(html_format__Attrs_3, html_format__Var_5);
    }
    return html_format__HeadVar__2_2;
  }
}

static void MR_CALL 
html_format__escape_html_string_1_f_0_2(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box * html_format__wrapper_arg_3)
{
  {
    MR_Box html_format__closure = html_format__closure_arg;
    MR_Word html_format__conv1_STATE_VARIABLE_Acc_11;

    {
      html_format__replace_special_char_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), html_format__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2), &html_format__conv1_STATE_VARIABLE_Acc_11);
    }
    *html_format__wrapper_arg_3 = ((MR_Box) (html_format__conv1_STATE_VARIABLE_Acc_11));
  }
}

static MR_bool MR_CALL 
html_format__escape_html_string_1_f_0_1(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box * html_format__wrapper_arg_2)
{
  {
    MR_bool html_format__succeeded;
    MR_Box html_format__closure = html_format__closure_arg;
    MR_String html_format__conv0_HeadVar__2_2;

    {
      html_format__succeeded = html_format__special_html_char_2_p_0(((MR_Char) (MR_Word) html_format__wrapper_arg_1), &html_format__conv0_HeadVar__2_2);
    }
    if (html_format__succeeded)
      {
        *html_format__wrapper_arg_2 = ((MR_Box) (html_format__conv0_HeadVar__2_2));
        html_format__succeeded = MR_TRUE;
      }
    return html_format__succeeded;
  }
}

MR_String MR_CALL 
html_format__escape_html_string_1_f_0(
  MR_String html_format__String_3)
{
  {
    MR_bool html_format__succeeded;
    MR_String html_format__HeadVar__2_2;
    MR_Word html_format__Chars_11;
    MR_Box html_format__conv2_Chars_11;

    {
      mercury__string__foldr_4_p_0((MR_Word) &html_format_scalar_common_2[2], (MR_Word) &html_format_scalar_common_5[4], html_format__String_3, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &html_format__conv2_Chars_11);
    }
    html_format__Chars_11 = ((MR_Word) html_format__conv2_Chars_11);
    {
      mercury__string__from_char_list_2_p_0(html_format__Chars_11, &html_format__HeadVar__2_2);
    }
    return html_format__HeadVar__2_2;
  }
}

MR_String MR_CALL 
html_format__htmlize_display_3_f_0(
  MR_Word html_format__Deep_5,
  MR_Word html_format__Prefs_6,
  MR_Word html_format__Display_7)
{
  {
    MR_bool html_format__succeeded;
    MR_String html_format__HTMLStr_8;
    MR_Word html_format__TypeCtorInfo_79_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word html_format__MaybeTitle_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Display_7, (MR_Integer) 0)));
    MR_Word html_format__Items_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Display_7, (MR_Integer) 1)));
    MR_Word html_format__MainTitle_11;
    MR_Word html_format__HeadTitle_12;
    MR_Word html_format__HeadingHTML_13;
    MR_Word html_format__HeadTitleHTML_16;
    MR_Word html_format__FormatInfo_17;
    MR_Word html_format__StyleControlMap0_18;
    MR_Word html_format__StyleControlMap_19;
    MR_Word html_format__ItemsHTML_20;
    MR_Word html_format__StyleHTML_21;
    MR_Word html_format__HTML_22;
    MR_Word html_format__Var_23;
    MR_Word html_format__Var_25;
    MR_String html_format__Var_26;
    MR_Word html_format__Var_37;
    MR_Word html_format__Var_38;
    MR_Word html_format__Var_41;
    MR_Word html_format__Var_42;
    MR_Word html_format__Var_45;
    MR_Word html_format__Var_46;
    MR_Word html_format__Var_49;
    MR_Word html_format__Var_50;
    MR_Word html_format__Var_51;
    MR_String html_format__Var_52;
    MR_String html_format__Var_53;
    MR_Word html_format__Var_54;
    MR_ArrayPtr html_format__Var_55;
    MR_ArrayPtr html_format__Var_56;
    MR_ArrayPtr html_format__Var_57;
    MR_ArrayPtr html_format__Var_58;
    MR_ArrayPtr html_format__Var_59;
    MR_ArrayPtr html_format__Var_60;
    MR_ArrayPtr html_format__Var_61;
    MR_ArrayPtr html_format__Var_62;
    MR_ArrayPtr html_format__Var_63;
    MR_ArrayPtr html_format__Var_64;
    MR_ArrayPtr html_format__Var_65;
    MR_ArrayPtr html_format__Var_66;
    MR_ArrayPtr html_format__Var_67;
    MR_ArrayPtr html_format__Var_68;
    MR_ArrayPtr html_format__Var_69;
    MR_ArrayPtr html_format__Var_70;
    MR_ArrayPtr html_format__Var_71;
    MR_ArrayPtr html_format__Var_72;
    MR_ArrayPtr html_format__Var_73;
    MR_ArrayPtr html_format__Var_74;
    MR_Word html_format__Var_75;
    MR_Word html_format__Var_76;
    MR_Word html_format__Var_77;
    MR_Word html_format__Var_78;

    {
      html_format__Var_23 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Mercury Deep Profile for ")));
    }
    html_format__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 0)));
    html_format__Var_52 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 1)));
    html_format__Var_53 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 2)));
    html_format__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 3)));
    html_format__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 4)));
    html_format__Var_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 5)));
    html_format__Var_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 6)));
    html_format__Var_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 7)));
    html_format__Var_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 8)));
    html_format__Var_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 9)));
    html_format__Var_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 10)));
    html_format__Var_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 11)));
    html_format__Var_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 12)));
    html_format__Var_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 13)));
    html_format__Var_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 14)));
    html_format__Var_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 15)));
    html_format__Var_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 16)));
    html_format__Var_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 17)));
    html_format__Var_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 18)));
    html_format__Var_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 19)));
    html_format__Var_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 20)));
    html_format__Var_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 21)));
    html_format__Var_72 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 22)));
    html_format__Var_73 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 23)));
    html_format__Var_74 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 24)));
    html_format__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 25)));
    html_format__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 26)));
    html_format__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 27)));
    html_format__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 28)));
    {
      html_format__Var_25 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Var_26)));
    }
    {
      html_format__MainTitle_11 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_79_79, html_format__Var_23, html_format__Var_25);
    }
    if ((html_format__MaybeTitle_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        html_format__HeadTitle_12 = html_format__MainTitle_11;
        {
          html_format__HeadingHTML_13 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
      }
    else
      {
        MR_String html_format__Title_14 = ((MR_String) (MR_hl_field(MR_mktag(1), html_format__MaybeTitle_9, (MR_Integer) 0)));
        MR_Word html_format__TitleHTML_15;
        MR_Word html_format__Var_27;
        MR_Word html_format__Var_28;

        {
          html_format__TitleHTML_15 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Title_14)));
        }
        {
          html_format__Var_28 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) " - ")));
        }
        {
          html_format__Var_27 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_79_79, html_format__Var_28, html_format__TitleHTML_15);
        }
        {
          html_format__HeadTitle_12 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_79_79, html_format__MainTitle_11, html_format__Var_27);
        }
        {
          html_format__HeadingHTML_13 = html_format__wrap_tags_3_f_0((MR_String) "<h3>", (MR_String) "</h3>\n", html_format__TitleHTML_15);
        }
      }
    {
      html_format__HeadTitleHTML_16 = html_format__wrap_tags_3_f_0((MR_String) "<title>", (MR_String) "</title>\n", html_format__HeadTitle_12);
    }
    {
      html_format__FormatInfo_17 = html_format__init_format_info_2_f_0(html_format__Deep_5, html_format__Prefs_6);
    }
    {
      html_format__StyleControlMap0_18 = html_format__default_style_control_map_0_f_0();
    }
    {
      html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_p_0((MR_String) "<div>\n", (MR_String) "</div>\n", html_format__FormatInfo_17, html_format__StyleControlMap0_18, &html_format__StyleControlMap_19, html_format__Items_10, &html_format__ItemsHTML_20);
    }
    {
      html_format__StyleHTML_21 = html_format__css_style_html_1_f_0(html_format__StyleControlMap_19);
    }
    {
      html_format__Var_37 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\"\n\"http://www.w3.org/TR/html4/strict.dtd\">\n")));
    }
    {
      html_format__Var_45 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_79_79, html_format__HeadTitleHTML_16, html_format__StyleHTML_21);
    }
    {
      html_format__Var_42 = html_format__wrap_tags_3_f_0((MR_String) "<head>\n", (MR_String) "</head>\n", html_format__Var_45);
    }
    {
      html_format__Var_49 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_79_79, html_format__HeadingHTML_13, html_format__ItemsHTML_20);
    }
    {
      html_format__Var_46 = html_format__wrap_tags_3_f_0((MR_String) "<body>\n", (MR_String) "</body>\n", html_format__Var_49);
    }
    {
      html_format__Var_41 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_79_79, html_format__Var_42, html_format__Var_46);
    }
    {
      html_format__Var_38 = html_format__wrap_tags_3_f_0((MR_String) "<html>\n", (MR_String) "</html>\n", html_format__Var_41);
    }
    {
      html_format__HTML_22 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_79_79, html_format__Var_37, html_format__Var_38);
    }
    {
      html_format__Var_50 = mercury__cord__list_1_f_0(html_format__TypeCtorInfo_79_79, html_format__HTML_22);
    }
    {
      html_format__HTMLStr_8 = mercury__string__append_list_1_f_0(html_format__Var_50);
    }
    return html_format__HTMLStr_8;
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_p_0(
  MR_String html_format__Var_15,
  MR_String html_format__Var_16,
  MR_Word html_format__Var_17,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_10,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_11,
  MR_Word html_format__List_8,
  MR_Word * html_format__HTML_9)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__Var_12;

    {
      html_format__Var_12 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
    if ((html_format__List_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *html_format__HTML_9 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
        *html_format__STATE_VARIABLE_StyleControlMap_11 = html_format__STATE_VARIABLE_StyleControlMap_0_10;
      }
    else
      {
        MR_Word html_format__Head_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__List_8, (MR_Integer) 0)));
        MR_Word html_format__Tail_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__List_8, (MR_Integer) 1)));
        MR_Word html_format__HeadHTML_30;
        MR_Word html_format__STATE_VARIABLE_StyleControlMap_21_33;

        {
          html_format__item_to_html_7_p_0(html_format__Var_15, html_format__Var_16, html_format__Var_17, html_format__STATE_VARIABLE_StyleControlMap_0_10, &html_format__STATE_VARIABLE_StyleControlMap_21_33, html_format__Head_27, &html_format__HeadHTML_30);
        }
        {
          html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_p_0(html_format__Var_15, html_format__Var_16, html_format__Var_17, html_format__Var_12, html_format__STATE_VARIABLE_StyleControlMap_21_33, html_format__STATE_VARIABLE_StyleControlMap_11, html_format__Tail_28, html_format__HeadHTML_30, html_format__HTML_9);
        }
      }
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_p_0(
  MR_String html_format__Var_34,
  MR_String html_format__Var_35,
  MR_Word html_format__Var_36,
  MR_Word html_format__Separator_1,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
  MR_Word html_format__HeadVar__5_5,
  MR_Word html_format__STATE_VARIABLE_HTML_0_6,
  MR_Word * html_format__STATE_VARIABLE_HTML_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool html_format__succeeded;

        if ((html_format__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *html_format__STATE_VARIABLE_HTML_7 = html_format__STATE_VARIABLE_HTML_0_6;
            *html_format__STATE_VARIABLE_StyleControlMap_4 = html_format__STATE_VARIABLE_StyleControlMap_0_3;
          }
        else
          {
            MR_Word html_format__TypeCtorInfo_33_33;
            MR_Word html_format__Head_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word html_format__Tail_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 1)));
            MR_Word html_format__HeadHTML_22;
            MR_Word html_format__STATE_VARIABLE_StyleControlMap_27_27;
            MR_Word html_format__STATE_VARIABLE_HTML_28_28;
            MR_Word html_format__Var_29;

            {
              html_format__item_to_html_7_p_0(html_format__Var_34, html_format__Var_35, html_format__Var_36, html_format__STATE_VARIABLE_StyleControlMap_0_3, &html_format__STATE_VARIABLE_StyleControlMap_27_27, html_format__Head_19, &html_format__HeadHTML_22);
            }
            html_format__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              html_format__Var_29 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_33_33, html_format__Separator_1, html_format__HeadHTML_22);
            }
            {
              html_format__STATE_VARIABLE_HTML_28_28 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_33_33, html_format__STATE_VARIABLE_HTML_0_6, html_format__Var_29);
            }
            /* direct tailcall eliminated */
            {
              MR_Word html_format__next_value_of_STATE_VARIABLE_StyleControlMap_0_3 = html_format__STATE_VARIABLE_StyleControlMap_27_27;
              MR_Word html_format__next_value_of_HeadVar__5_5 = html_format__Tail_20;
              MR_Word html_format__next_value_of_STATE_VARIABLE_HTML_0_6 = html_format__STATE_VARIABLE_HTML_28_28;

              html_format__STATE_VARIABLE_HTML_0_6 = html_format__next_value_of_STATE_VARIABLE_HTML_0_6;
              html_format__HeadVar__5_5 = html_format__next_value_of_HeadVar__5_5;
              html_format__STATE_VARIABLE_StyleControlMap_0_3 = html_format__next_value_of_STATE_VARIABLE_StyleControlMap_0_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
html_format__list_to_html_7_p_0(
  MR_Word html_format__FormatInfo_8,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_26,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_27,
  MR_Word html_format__Class_10,
  MR_Word html_format__MaybeTitle_11,
  MR_Word html_format__Items_12,
  MR_Word * html_format__HTML_13)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__TypeCtorInfo_40_40;
    MR_Word html_format__TypeCtorInfo_11_87;
    MR_Word html_format__TitleHTML_17;
    MR_Word html_format__PostTitleHTML_18;
    MR_String html_format__OutsideStartTag_19;
    MR_String html_format__OutsideEndTag_20;
    MR_String html_format__InnerStartTag_21;
    MR_String html_format__InnerEndTag_22;
    MR_Word html_format__Separator_23;
    MR_Word html_format__InnerItemsHTML_24;
    MR_Word html_format__ItemsHTML_25;
    MR_Word html_format__Var_34;
    MR_Word html_format__Var_84;
    MR_Word html_format__Var_85;
    MR_Word html_format__Var_86;

    if ((html_format__MaybeTitle_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          html_format__TitleHTML_17 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
        {
          html_format__PostTitleHTML_18 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
      }
    else
      {
        MR_Word html_format__TypeCtorInfo_11_51;
        MR_String html_format__Title_14 = ((MR_String) (MR_hl_field(MR_mktag(1), html_format__MaybeTitle_11, (MR_Integer) 0)));
        MR_Word html_format__Var_28;
        MR_Word html_format__Var_48;
        MR_Word html_format__Var_49;
        MR_Word html_format__Var_50;

        {
          html_format__Var_28 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Title_14)));
        }
        html_format__TypeCtorInfo_11_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          html_format__Var_48 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "<span id=\"list_title\">")));
        }
        {
          html_format__Var_50 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "</span>\n")));
        }
        {
          html_format__Var_49 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_51, html_format__Var_28, html_format__Var_50);
        }
        {
          html_format__TitleHTML_17 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_51, html_format__Var_48, html_format__Var_49);
        }
        switch (html_format__Class_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              {
                html_format__PostTitleHTML_18 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
              }
            }
            break;
          case (MR_Integer) 3:
          case (MR_Integer) 1:
          case (MR_Integer) 0:
            {
              {
                html_format__PostTitleHTML_18 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "<br>\n")));
              }
            }
            break;
        }
      }
    switch (html_format__Class_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          html_format__OutsideStartTag_19 = (MR_String) "";
          html_format__OutsideEndTag_20 = (MR_String) "\n";
          html_format__InnerStartTag_21 = (MR_String) "";
          html_format__InnerEndTag_22 = (MR_String) "\n";
          {
            html_format__Separator_23 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "")));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          html_format__OutsideStartTag_19 = (MR_String) "<ul>\n";
          html_format__OutsideEndTag_20 = (MR_String) "</ul>\n";
          html_format__InnerStartTag_21 = (MR_String) "<li>\n";
          html_format__InnerEndTag_22 = (MR_String) "</li>\n";
          {
            html_format__Separator_23 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          html_format__OutsideStartTag_19 = (MR_String) "";
          html_format__OutsideEndTag_20 = (MR_String) "\n";
          html_format__InnerStartTag_21 = (MR_String) "";
          html_format__InnerEndTag_22 = (MR_String) "\n";
          {
            html_format__Separator_23 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "<br>\n")));
          }
        }
        break;
    }
    if ((html_format__Items_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          html_format__InnerItemsHTML_24 = html_format__empty_html_0_f_0();
        }
        *html_format__STATE_VARIABLE_StyleControlMap_27 = html_format__STATE_VARIABLE_StyleControlMap_0_26;
      }
    else
      {
        MR_Word html_format__Head_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__Items_12, (MR_Integer) 0)));
        MR_Word html_format__Tail_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__Items_12, (MR_Integer) 1)));
        MR_Word html_format__HeadHTML_75;
        MR_Word html_format__STATE_VARIABLE_StyleControlMap_21_78;

        {
          html_format__item_to_html_7_p_0(html_format__InnerStartTag_21, html_format__InnerEndTag_22, html_format__FormatInfo_8, html_format__STATE_VARIABLE_StyleControlMap_0_26, &html_format__STATE_VARIABLE_StyleControlMap_21_78, html_format__Head_72, &html_format__HeadHTML_75);
        }
        {
          html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_p_0(html_format__InnerStartTag_21, html_format__InnerEndTag_22, html_format__FormatInfo_8, html_format__Separator_23, html_format__STATE_VARIABLE_StyleControlMap_21_78, html_format__STATE_VARIABLE_StyleControlMap_27, html_format__Tail_73, html_format__HeadHTML_75, &html_format__InnerItemsHTML_24);
        }
      }
    html_format__TypeCtorInfo_11_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      html_format__Var_84 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__OutsideStartTag_19)));
    }
    {
      html_format__Var_86 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__OutsideEndTag_20)));
    }
    {
      html_format__Var_85 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_87, html_format__InnerItemsHTML_24, html_format__Var_86);
    }
    {
      html_format__ItemsHTML_25 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_87, html_format__Var_84, html_format__Var_85);
    }
    html_format__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      html_format__Var_34 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_40_40, html_format__PostTitleHTML_18, html_format__ItemsHTML_25);
    }
    {
      *html_format__HTML_13 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_40_40, html_format__TitleHTML_17, html_format__Var_34);
    }
  }
}

static void MR_CALL 
html_format__item_to_html_7_p_0_1(
  void * html_format__env_ptr_arg)
{
  {
    struct html_format__item_to_html_7_p_0_env_0_s * html_format__env_ptr = (struct html_format__item_to_html_7_p_0_env_0_s *) html_format__env_ptr_arg;

    MR_builtin_longjmp((html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
html_format__item_to_html_7_p_0_3(
  void * html_format__env_ptr_arg)
{
  {
    struct html_format__item_to_html_7_p_0_env_0_s * html_format__env_ptr = (struct html_format__item_to_html_7_p_0_env_0_s *) html_format__env_ptr_arg;

    (html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__ListItem_45 = ((MR_Word) (html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__conv0_ListItem_45);
    {
      html_format__item_to_html_7_p_0_2(html_format__env_ptr);
    }
  }
}

static void MR_CALL 
html_format__item_to_html_7_p_0_2(
  void * html_format__env_ptr_arg)
{
  {
    struct html_format__item_to_html_7_p_0_env_0_s * html_format__env_ptr = (struct html_format__item_to_html_7_p_0_env_0_s *) html_format__env_ptr_arg;

    {
      MR_Word html_format__Var_24;

      (html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__ListItem_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__ListItem_45, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if ((html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded)
        html_format__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), (html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__ListItem_45, (MR_Integer) 1)));
      (html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded = !((html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded);
      if ((html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded)
        {
          html_format__item_to_html_7_p_0_1(html_format__env_ptr);
        }
    }
  }
}

static void MR_CALL 
html_format__item_to_html_7_p_0_4(
  void * html_format__env_ptr_arg)
{
  {
    struct html_format__item_to_html_7_p_0_env_0_s * html_format__env_ptr = (struct html_format__item_to_html_7_p_0_env_0_s *) html_format__env_ptr_arg;

    if (MR_builtin_setjmp((html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &display__display__type_ctor_info_display_item_0, &(html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__conv0_ListItem_45, (html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__Items_21, html_format__item_to_html_7_p_0_3, html_format__env_ptr);
          }
        }
        (html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
html_format__item_to_html_7_p_0(
  MR_String html_format__StartTag_8,
  MR_String html_format__EndTag_9,
  MR_Word html_format__FormatInfo_10,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_27,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_28,
  MR_Word html_format__Item_12,
  MR_Word * html_format__HTML_13)
{
  {
    struct html_format__item_to_html_7_p_0_env_0_s html_format__env;

    while (MR_TRUE)
      {
        /* tailcall optimized into a loop */
        switch (MR_tag((MR_Word) html_format__Item_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                *html_format__HTML_13 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "<p>\n")));
              }
              *html_format__STATE_VARIABLE_StyleControlMap_28 = html_format__STATE_VARIABLE_StyleControlMap_0_27;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word html_format__DeepLink_15 = (MR_Word) MR_body(((MR_Word) html_format__Item_12), (MR_Integer) 1);
              MR_Word html_format__Var_37;

              {
                html_format__Var_37 = html_format__link_to_html_2_f_0(html_format__FormatInfo_10, html_format__DeepLink_15);
              }
              {
                *html_format__HTML_13 = html_format__wrap_tags_3_f_0(html_format__StartTag_8, html_format__EndTag_9, html_format__Var_37);
              }
              *html_format__STATE_VARIABLE_StyleControlMap_28 = html_format__STATE_VARIABLE_StyleControlMap_0_27;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word html_format__PseudoLink_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), html_format__Item_12, (MR_Integer) 0)));
              MR_Word html_format__Var_36;

              {
                html_format__Var_36 = html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0(html_format__PseudoLink_16);
              }
              {
                *html_format__HTML_13 = html_format__wrap_tags_3_f_0(html_format__StartTag_8, html_format__EndTag_9, html_format__Var_36);
              }
              *html_format__STATE_VARIABLE_StyleControlMap_28 = html_format__STATE_VARIABLE_StyleControlMap_0_27;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), html_format__Item_12, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word html_format__Table_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), html_format__Item_12, (MR_Integer) 1)));
                  MR_Word html_format__TableHTML_18;

                  {
                    html_format__table_to_html_5_p_0(html_format__FormatInfo_10, html_format__STATE_VARIABLE_StyleControlMap_0_27, html_format__STATE_VARIABLE_StyleControlMap_28, html_format__Table_17, &html_format__TableHTML_18);
                  }
                  {
                    *html_format__HTML_13 = html_format__wrap_tags_3_f_0(html_format__StartTag_8, html_format__EndTag_9, html_format__TableHTML_18);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word html_format__TypeCtorInfo_11_71;
                  MR_Word html_format__TypeCtorInfo_11_82;
                  MR_String html_format__Message_14 = ((MR_String) (MR_hl_field(MR_mktag(3), html_format__Item_12, (MR_Integer) 1)));
                  MR_Word html_format__Var_40;
                  MR_Word html_format__Var_43;
                  MR_Word html_format__Var_68;
                  MR_Word html_format__Var_69;
                  MR_Word html_format__Var_70;
                  MR_Word html_format__Var_79;
                  MR_Word html_format__Var_80;
                  MR_Word html_format__Var_81;

                  {
                    html_format__Var_43 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Message_14)));
                  }
                  html_format__TypeCtorInfo_11_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                  {
                    html_format__Var_68 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "<h3>")));
                  }
                  {
                    html_format__Var_70 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "</h3>\n")));
                  }
                  {
                    html_format__Var_69 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_71, html_format__Var_43, html_format__Var_70);
                  }
                  {
                    html_format__Var_40 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_71, html_format__Var_68, html_format__Var_69);
                  }
                  html_format__TypeCtorInfo_11_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                  {
                    html_format__Var_79 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__StartTag_8)));
                  }
                  {
                    html_format__Var_81 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__EndTag_9)));
                  }
                  {
                    html_format__Var_80 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_82, html_format__Var_40, html_format__Var_81);
                  }
                  {
                    *html_format__HTML_13 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_82, html_format__Var_79, html_format__Var_80);
                  }
                  *html_format__STATE_VARIABLE_StyleControlMap_28 = html_format__STATE_VARIABLE_StyleControlMap_0_27;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word html_format__Var_39;
                  MR_String html_format__Message_44 = ((MR_String) (MR_hl_field(MR_mktag(3), html_format__Item_12, (MR_Integer) 1)));

                  {
                    html_format__Var_39 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Message_44)));
                  }
                  {
                    *html_format__HTML_13 = html_format__wrap_tags_3_f_0(html_format__StartTag_8, html_format__EndTag_9, html_format__Var_39);
                  }
                  *html_format__STATE_VARIABLE_StyleControlMap_28 = html_format__STATE_VARIABLE_StyleControlMap_0_27;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word html_format__Class_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), html_format__Item_12, (MR_Integer) 1)));
                  MR_Word html_format__MaybeTitle_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), html_format__Item_12, (MR_Integer) 2)));
                  MR_Word html_format__DeveloperMode_22;
                  MR_Word html_format__Var_50;
                  MR_Word html_format__Var_51;
                  MR_String html_format__Var_52;
                  MR_String html_format__Var_53;
                  MR_String html_format__Var_54;

                  (html_format__env).html_format__item_to_html_7_p_0_env_0__Items_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), html_format__Item_12, (MR_Integer) 3)));
                  html_format__Var_50 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 0)))) & (MR_Integer) 1);
                  html_format__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  html_format__DeveloperMode_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  html_format__Var_52 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 1)));
                  html_format__Var_53 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 2)));
                  html_format__Var_54 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 3)));
                  (html_format__env).html_format__item_to_html_7_p_0_env_0__succeeded = (html_format__DeveloperMode_22 == (MR_Integer) 1);
                  if ((html_format__env).html_format__item_to_html_7_p_0_env_0__succeeded)
                    {
                      {
                        html_format__item_to_html_7_p_0_4(&html_format__env);
                      }
                      (html_format__env).html_format__item_to_html_7_p_0_env_0__succeeded = !((html_format__env).html_format__item_to_html_7_p_0_env_0__succeeded);
                    }
                  if ((html_format__env).html_format__item_to_html_7_p_0_env_0__succeeded)
                    {
                      {
                        *html_format__HTML_13 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
                      }
                      *html_format__STATE_VARIABLE_StyleControlMap_28 = html_format__STATE_VARIABLE_StyleControlMap_0_27;
                    }
                  else
                    {
                      MR_Word html_format__TableHTML_46;

                      {
                        html_format__list_to_html_7_p_0(html_format__FormatInfo_10, html_format__STATE_VARIABLE_StyleControlMap_0_27, html_format__STATE_VARIABLE_StyleControlMap_28, html_format__Class_19, html_format__MaybeTitle_20, (html_format__env).html_format__item_to_html_7_p_0_env_0__Items_21, &html_format__TableHTML_46);
                      }
                      {
                        *html_format__HTML_13 = html_format__wrap_tags_3_f_0(html_format__StartTag_8, html_format__EndTag_9, html_format__TableHTML_46);
                      }
                    }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_String html_format__Text_25 = ((MR_String) (MR_hl_field(MR_mktag(3), html_format__Item_12, (MR_Integer) 1)));
                  MR_Word html_format__Var_30;
                  MR_Word html_format__Var_33;

                  {
                    html_format__Var_33 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Text_25)));
                  }
                  {
                    html_format__Var_30 = html_format__wrap_tags_3_f_0((MR_String) "<pre>", (MR_String) "</pre>", html_format__Var_33);
                  }
                  {
                    *html_format__HTML_13 = html_format__wrap_tags_3_f_0(html_format__StartTag_8, html_format__EndTag_9, html_format__Var_30);
                  }
                  *html_format__STATE_VARIABLE_StyleControlMap_28 = html_format__STATE_VARIABLE_StyleControlMap_0_27;
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word html_format__SubItem_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), html_format__Item_12, (MR_Integer) 1)));
                  MR_Word html_format__DeveloperMode_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Word html_format__Var_55 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 0)))) & (MR_Integer) 1);
                  MR_Word html_format__Var_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_String html_format__Var_57 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 1)));
                  MR_String html_format__Var_58 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 2)));
                  MR_String html_format__Var_59 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 3)));

                  switch (html_format__DeveloperMode_49) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        {
                          *html_format__HTML_13 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
                        }
                        *html_format__STATE_VARIABLE_StyleControlMap_28 = html_format__STATE_VARIABLE_StyleControlMap_0_27;
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word html_format__next_value_of_Item_12 = html_format__SubItem_26;

                          html_format__Item_12 = html_format__next_value_of_Item_12;
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
        break;
      }
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_4(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box * html_format__wrapper_arg_3)
{
  {
    MR_Box html_format__closure = html_format__closure_arg;
    MR_Word html_format__conv4_STATE_VARIABLE_Acc_11;

    {
      html_format__replace_special_char_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), html_format__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2), &html_format__conv4_STATE_VARIABLE_Acc_11);
    }
    *html_format__wrapper_arg_3 = ((MR_Box) (html_format__conv4_STATE_VARIABLE_Acc_11));
  }
}

static MR_bool MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_3(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box * html_format__wrapper_arg_2)
{
  {
    MR_bool html_format__succeeded;
    MR_Box html_format__closure = html_format__closure_arg;
    MR_String html_format__conv3_HeadVar__2_2;

    {
      html_format__succeeded = html_format__special_html_char_or_break_2_p_0(((MR_Char) (MR_Word) html_format__wrapper_arg_1), &html_format__conv3_HeadVar__2_2);
    }
    if (html_format__succeeded)
      {
        *html_format__wrapper_arg_2 = ((MR_Box) (html_format__conv3_HeadVar__2_2));
        html_format__succeeded = MR_TRUE;
      }
    return html_format__succeeded;
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_2(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box * html_format__wrapper_arg_3)
{
  {
    MR_Box html_format__closure = html_format__closure_arg;
    MR_Word html_format__conv1_STATE_VARIABLE_Acc_11;

    {
      html_format__replace_special_char_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), html_format__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2), &html_format__conv1_STATE_VARIABLE_Acc_11);
    }
    *html_format__wrapper_arg_3 = ((MR_Box) (html_format__conv1_STATE_VARIABLE_Acc_11));
  }
}

static MR_bool MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_1(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box * html_format__wrapper_arg_2)
{
  {
    MR_bool html_format__succeeded;
    MR_Box html_format__closure = html_format__closure_arg;
    MR_String html_format__conv0_HeadVar__2_2;

    {
      html_format__succeeded = html_format__special_html_char_or_break_2_p_0(((MR_Char) (MR_Word) html_format__wrapper_arg_1), &html_format__conv0_HeadVar__2_2);
    }
    if (html_format__succeeded)
      {
        *html_format__wrapper_arg_2 = ((MR_Box) (html_format__conv0_HeadVar__2_2));
        html_format__succeeded = MR_TRUE;
      }
    return html_format__succeeded;
  }
}

static MR_Word MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0(
  MR_Word html_format__PseudoLink_5)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__HTML_6;
    MR_String html_format__Label_7 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__PseudoLink_5, (MR_Integer) 0)));
    MR_Word html_format__Class_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__PseudoLink_5, (MR_Integer) 1)));
    MR_String html_format__HTMLStr_9;

    switch (html_format__Class_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String html_format__Var_11;
          MR_String html_format__Var_12;
          MR_Word html_format__Chars_22;
          MR_Box html_format__conv2_Chars_22;

          {
            mercury__string__foldr_4_p_0((MR_Word) &html_format_scalar_common_2[2], (MR_Word) &html_format_scalar_common_5[2], html_format__Label_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &html_format__conv2_Chars_22);
          }
          html_format__Chars_22 = ((MR_Word) html_format__conv2_Chars_22);
          {
            mercury__string__from_char_list_2_p_0(html_format__Chars_22, &html_format__Var_12);
          }
          {
            html_format__Var_11 = mercury__string__f_43_43_2_f_0(html_format__Var_12, (MR_String) "]");
          }
          {
            html_format__HTMLStr_9 = mercury__string__f_43_43_2_f_0((MR_String) "[", html_format__Var_11);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word html_format__Chars_37;
          MR_Box html_format__conv5_Chars_37;

          {
            mercury__string__foldr_4_p_0((MR_Word) &html_format_scalar_common_2[2], (MR_Word) &html_format_scalar_common_5[3], html_format__Label_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &html_format__conv5_Chars_37);
          }
          html_format__Chars_37 = ((MR_Word) html_format__conv5_Chars_37);
          {
            mercury__string__from_char_list_2_p_0(html_format__Chars_37, &html_format__HTMLStr_9);
          }
        }
        break;
    }
    {
      html_format__HTML_6 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__HTMLStr_9)));
    }
    return html_format__HTML_6;
  }
}

static void MR_CALL 
html_format__table_to_html_5_p_0_1(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box * html_format__wrapper_arg_3,
  MR_Box html_format__wrapper_arg_4,
  MR_Box * html_format__wrapper_arg_5,
  MR_Box html_format__wrapper_arg_6,
  MR_Box * html_format__wrapper_arg_7,
  MR_Box html_format__wrapper_arg_8,
  MR_Box * html_format__wrapper_arg_9,
  MR_Box html_format__wrapper_arg_10,
  MR_Box * html_format__wrapper_arg_11,
  MR_Box html_format__wrapper_arg_12,
  MR_Box * html_format__wrapper_arg_13)
{
  {
    MR_Box html_format__closure = html_format__closure_arg;
    MR_Word html_format__conv5_STATE_VARIABLE_NumRows_33;
    MR_Integer html_format__conv4_STATE_VARIABLE_ColumnNumber_35;
    MR_Word html_format__conv3_STATE_VARIABLE_ClassMap_37;
    MR_Integer html_format__conv2_STATE_VARIABLE_HeaderGroupNumber_39;
    MR_Word html_format__conv1_STATE_VARIABLE_ColouredClassStrs_41;
    MR_Word html_format__conv0_STATE_VARIABLE_StyleControlMap_43;

    {
      html_format__table_header_num_rows_and_classmap_14_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), html_format__closure, (MR_Integer) 3))), ((MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2), &html_format__conv5_STATE_VARIABLE_NumRows_33, ((MR_Integer) html_format__wrapper_arg_4), &html_format__conv4_STATE_VARIABLE_ColumnNumber_35, ((MR_Word) html_format__wrapper_arg_6), &html_format__conv3_STATE_VARIABLE_ClassMap_37, ((MR_Integer) html_format__wrapper_arg_8), &html_format__conv2_STATE_VARIABLE_HeaderGroupNumber_39, ((MR_Word) html_format__wrapper_arg_10), &html_format__conv1_STATE_VARIABLE_ColouredClassStrs_41, ((MR_Word) html_format__wrapper_arg_12), &html_format__conv0_STATE_VARIABLE_StyleControlMap_43);
    }
    *html_format__wrapper_arg_3 = ((MR_Box) (html_format__conv5_STATE_VARIABLE_NumRows_33));
    *html_format__wrapper_arg_5 = ((MR_Box) (html_format__conv4_STATE_VARIABLE_ColumnNumber_35));
    *html_format__wrapper_arg_7 = ((MR_Box) (html_format__conv3_STATE_VARIABLE_ClassMap_37));
    *html_format__wrapper_arg_9 = ((MR_Box) (html_format__conv2_STATE_VARIABLE_HeaderGroupNumber_39));
    *html_format__wrapper_arg_11 = ((MR_Box) (html_format__conv1_STATE_VARIABLE_ColouredClassStrs_41));
    *html_format__wrapper_arg_13 = ((MR_Box) (html_format__conv0_STATE_VARIABLE_StyleControlMap_43));
  }
}

static void MR_CALL 
html_format__table_to_html_5_p_0(
  MR_Word html_format__FormatInfo_6,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_34,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_35,
  MR_Word html_format__Table_8,
  MR_Word * html_format__HTML_9)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__Class_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Table_8, (MR_Integer) 0)));
    MR_Integer html_format__NumColumns_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), html_format__Table_8, (MR_Integer) 1)));
    MR_Word html_format__MaybeHeader_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Table_8, (MR_Integer) 2)));
    MR_Word html_format__BodyRows_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Table_8, (MR_Integer) 3)));
    MR_String html_format__ClassStr_14;
    MR_String html_format__TableStartTag_15;
    MR_Word html_format__MaybeClassMap_23;
    MR_Word html_format__HeaderHTML_30;
    MR_Word html_format__BodyRowsHTML_31;
    MR_Word html_format__WrappedHeaderHTML_32;
    MR_Word html_format__WrappedBodyHTML_33;
    MR_String html_format__Var_37;
    MR_Word html_format__STATE_VARIABLE_StyleControlMap_52_52;
    MR_Word html_format__Var_69;

    {
      html_format__ClassStr_14 = html_format__table_class_to_string_2_f_0(html_format__FormatInfo_6, html_format__Class_10);
    }
    {
      html_format__Var_37 = mercury__string__f_43_43_2_f_0(html_format__ClassStr_14, (MR_String) "\">\n");
    }
    {
      html_format__TableStartTag_15 = mercury__string__f_43_43_2_f_0((MR_String) "<table class=\"", html_format__Var_37);
    }
    if ((html_format__MaybeHeader_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        html_format__MaybeClassMap_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          html_format__HeaderHTML_30 = html_format__empty_html_0_f_0();
        }
        html_format__STATE_VARIABLE_StyleControlMap_52_52 = html_format__STATE_VARIABLE_StyleControlMap_0_34;
      }
    else
      {
        MR_Word html_format__TypeCtorInfo_83_83;
        MR_Word html_format__TypeCtorInfo_84_84;
        MR_Word html_format__THCells_17;
        MR_Word html_format__THNumRows_18;
        MR_Word html_format__ClassMap_20;
        MR_Word html_format__InnerHeaderRowOneHTML_24;
        MR_Word html_format__HeaderRowOneHTML_25;
        MR_Word html_format__HeaderRowTwoHTML_26;
        MR_String html_format__InnerHeaderRowThree_28;
        MR_Word html_format__HeaderRowThreeHTML_29;
        MR_Word html_format__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__MaybeHeader_12, (MR_Integer) 0)));
        MR_Word html_format__Var_40;
        MR_Word html_format__Var_43;
        MR_Word html_format__Var_45;
        MR_Word html_format__STATE_VARIABLE_StyleControlMap_46_46;
        MR_Word html_format__STATE_VARIABLE_StyleControlMap_48_48;
        MR_Word html_format__Var_61;
        MR_Word html_format__Var_62;
        MR_String html_format__Var_105;
        MR_String html_format__Var_112;
        MR_Integer html_format__Var_19;
        MR_Integer html_format__Var_21;
        MR_Word html_format__Var_22;
        MR_Box html_format__conv11_THNumRows_18;
        MR_Box html_format__conv10_Var_19;
        MR_Box html_format__conv9_ClassMap_20;
        MR_Box html_format__conv8_Var_21;
        MR_Box html_format__conv7_Var_22;
        MR_Box html_format__conv6_STATE_VARIABLE_StyleControlMap_46_46;

        html_format__THCells_17 = (MR_Word) html_format__Var_39;
        {
          html_format__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), html_format__Var_40, 0) = ((MR_Box) (&html_format_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), html_format__Var_40, 1) = ((MR_Box) (html_format__table_to_html_5_p_0_1));
          MR_hl_field(MR_mktag(0), html_format__Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), html_format__Var_40, 3) = ((MR_Box) (html_format__FormatInfo_6));
        }
        html_format__TypeCtorInfo_83_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        html_format__TypeCtorInfo_84_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          html_format__Var_43 = mercury__map__init_0_f_0(html_format__TypeCtorInfo_83_83, html_format__TypeCtorInfo_84_84);
        }
        {
          html_format__Var_45 = mercury__set__init_0_f_0(html_format__TypeCtorInfo_84_84);
        }
        {
          mercury__list__foldl6_14_p_0((MR_Word) &display__display__type_ctor_info_table_header_group_0, (MR_Word) &html_format__html_format__type_ctor_info_table_header_rows_0, html_format__TypeCtorInfo_83_83, (MR_Word) &html_format_scalar_common_1[3], html_format__TypeCtorInfo_83_83, (MR_Word) &html_format_scalar_common_2[1], (MR_Word) &html_format_scalar_common_1[4], html_format__Var_40, html_format__THCells_17, ((MR_Box) ((MR_Integer) 0)), &html_format__conv11_THNumRows_18, ((MR_Box) ((MR_Integer) 0)), &html_format__conv10_Var_19, ((MR_Box) (html_format__Var_43)), &html_format__conv9_ClassMap_20, ((MR_Box) ((MR_Integer) 0)), &html_format__conv8_Var_21, ((MR_Box) (html_format__Var_45)), &html_format__conv7_Var_22, ((MR_Box) (html_format__STATE_VARIABLE_StyleControlMap_0_34)), &html_format__conv6_STATE_VARIABLE_StyleControlMap_46_46);
        }
        html_format__THNumRows_18 = ((MR_Word) html_format__conv11_THNumRows_18);
        html_format__Var_19 = ((MR_Integer) html_format__conv10_Var_19);
        html_format__ClassMap_20 = ((MR_Word) html_format__conv9_ClassMap_20);
        html_format__Var_21 = ((MR_Integer) html_format__conv8_Var_21);
        html_format__Var_22 = ((MR_Word) html_format__conv7_Var_22);
        html_format__STATE_VARIABLE_StyleControlMap_46_46 = ((MR_Word) html_format__conv6_STATE_VARIABLE_StyleControlMap_46_46);
        {
          html_format__MaybeClassMap_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), html_format__MaybeClassMap_23, 0) = ((MR_Box) (html_format__ClassMap_20));
        }
        {
          html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_p_0(html_format__FormatInfo_6, html_format__THNumRows_18, html_format__STATE_VARIABLE_StyleControlMap_46_46, &html_format__STATE_VARIABLE_StyleControlMap_48_48, html_format__THCells_17, &html_format__InnerHeaderRowOneHTML_24);
        }
        {
          html_format__HeaderRowOneHTML_25 = html_format__wrap_tags_3_f_0((MR_String) "<tr>\n", (MR_String) "</tr>\n", html_format__InnerHeaderRowOneHTML_24);
        }
        switch (html_format__THNumRows_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                html_format__HeaderRowTwoHTML_26 = html_format__empty_html_0_f_0();
              }
              html_format__STATE_VARIABLE_StyleControlMap_52_52 = html_format__STATE_VARIABLE_StyleControlMap_48_48;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word html_format__InnerHeaderRowTwoHTML_27;

              {
                html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_p_0(html_format__FormatInfo_6, html_format__STATE_VARIABLE_StyleControlMap_48_48, &html_format__STATE_VARIABLE_StyleControlMap_52_52, html_format__THCells_17, &html_format__InnerHeaderRowTwoHTML_27);
              }
              {
                html_format__HeaderRowTwoHTML_26 = html_format__wrap_tags_3_f_0((MR_String) "<tr>\n", (MR_String) "</tr>\n", html_format__InnerHeaderRowTwoHTML_27);
              }
            }
            break;
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &html_format_scalar_common_7[0], html_format__NumColumns_11, &html_format__Var_105);
        }
        {
          html_format__Var_112 = mercury__string__f_43_43_2_f_0(html_format__Var_105, (MR_String) "\"/>");
        }
        {
          html_format__InnerHeaderRowThree_28 = mercury__string__f_43_43_2_f_0((MR_String) "<td colspan=\"", html_format__Var_112);
        }
        {
          html_format__Var_61 = html_format__str_to_html_1_f_0(html_format__InnerHeaderRowThree_28);
        }
        {
          html_format__HeaderRowThreeHTML_29 = html_format__wrap_tags_3_f_0((MR_String) "<tr>", (MR_String) "</tr>", html_format__Var_61);
        }
        {
          html_format__Var_62 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_84_84, html_format__HeaderRowTwoHTML_26, html_format__HeaderRowThreeHTML_29);
        }
        {
          html_format__HeaderHTML_30 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_84_84, html_format__HeaderRowOneHTML_25, html_format__Var_62);
        }
      }
    {
      html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_p_0(html_format__FormatInfo_6, html_format__MaybeClassMap_23, html_format__NumColumns_11, html_format__STATE_VARIABLE_StyleControlMap_52_52, html_format__STATE_VARIABLE_StyleControlMap_35, html_format__BodyRows_13, &html_format__BodyRowsHTML_31);
    }
    {
      html_format__WrappedHeaderHTML_32 = html_format__wrap_tags_3_f_0((MR_String) "<thead>\n", (MR_String) "</thead>\n", html_format__HeaderHTML_30);
    }
    {
      html_format__WrappedBodyHTML_33 = html_format__wrap_tags_3_f_0((MR_String) "<tbody>\n", (MR_String) "</tbody>\n", html_format__BodyRowsHTML_31);
    }
    {
      html_format__Var_69 = mercury__cord__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, html_format__WrappedHeaderHTML_32, html_format__WrappedBodyHTML_33);
    }
    {
      *html_format__HTML_9 = html_format__wrap_tags_3_f_0(html_format__TableStartTag_15, (MR_String) "</table>\n", html_format__Var_69);
    }
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_p_0(
  MR_Word html_format__Var_15,
  MR_Word html_format__Var_16,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_10,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_11,
  MR_Word html_format__List_8,
  MR_Word * html_format__HTML_9)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__Var_12;

    {
      html_format__Var_12 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
    if ((html_format__List_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *html_format__HTML_9 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
        *html_format__STATE_VARIABLE_StyleControlMap_11 = html_format__STATE_VARIABLE_StyleControlMap_0_10;
      }
    else
      {
        MR_Word html_format__Head_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__List_8, (MR_Integer) 0)));
        MR_Word html_format__Tail_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__List_8, (MR_Integer) 1)));
        MR_Word html_format__HeadHTML_29;
        MR_Word html_format__STATE_VARIABLE_StyleControlMap_21_32;

        {
          html_format__table_header_group_to_html_row_1_6_p_0(html_format__Var_15, html_format__Var_16, html_format__STATE_VARIABLE_StyleControlMap_0_10, &html_format__STATE_VARIABLE_StyleControlMap_21_32, html_format__Head_26, &html_format__HeadHTML_29);
        }
        {
          html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_p_0(html_format__Var_15, html_format__Var_16, html_format__Var_12, html_format__STATE_VARIABLE_StyleControlMap_21_32, html_format__STATE_VARIABLE_StyleControlMap_11, html_format__Tail_27, html_format__HeadHTML_29, html_format__HTML_9);
        }
      }
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_p_0(
  MR_Word html_format__Var_34,
  MR_Word html_format__Var_35,
  MR_Word html_format__Separator_1,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
  MR_Word html_format__HeadVar__5_5,
  MR_Word html_format__STATE_VARIABLE_HTML_0_6,
  MR_Word * html_format__STATE_VARIABLE_HTML_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool html_format__succeeded;

        if ((html_format__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *html_format__STATE_VARIABLE_HTML_7 = html_format__STATE_VARIABLE_HTML_0_6;
            *html_format__STATE_VARIABLE_StyleControlMap_4 = html_format__STATE_VARIABLE_StyleControlMap_0_3;
          }
        else
          {
            MR_Word html_format__TypeCtorInfo_33_33;
            MR_Word html_format__Head_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word html_format__Tail_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 1)));
            MR_Word html_format__HeadHTML_22;
            MR_Word html_format__STATE_VARIABLE_StyleControlMap_27_27;
            MR_Word html_format__STATE_VARIABLE_HTML_28_28;
            MR_Word html_format__Var_29;

            {
              html_format__table_header_group_to_html_row_1_6_p_0(html_format__Var_34, html_format__Var_35, html_format__STATE_VARIABLE_StyleControlMap_0_3, &html_format__STATE_VARIABLE_StyleControlMap_27_27, html_format__Head_19, &html_format__HeadHTML_22);
            }
            html_format__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              html_format__Var_29 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_33_33, html_format__Separator_1, html_format__HeadHTML_22);
            }
            {
              html_format__STATE_VARIABLE_HTML_28_28 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_33_33, html_format__STATE_VARIABLE_HTML_0_6, html_format__Var_29);
            }
            /* direct tailcall eliminated */
            {
              MR_Word html_format__next_value_of_STATE_VARIABLE_StyleControlMap_0_3 = html_format__STATE_VARIABLE_StyleControlMap_27_27;
              MR_Word html_format__next_value_of_HeadVar__5_5 = html_format__Tail_20;
              MR_Word html_format__next_value_of_STATE_VARIABLE_HTML_0_6 = html_format__STATE_VARIABLE_HTML_28_28;

              html_format__STATE_VARIABLE_HTML_0_6 = html_format__next_value_of_STATE_VARIABLE_HTML_0_6;
              html_format__HeadVar__5_5 = html_format__next_value_of_HeadVar__5_5;
              html_format__STATE_VARIABLE_StyleControlMap_0_3 = html_format__next_value_of_STATE_VARIABLE_StyleControlMap_0_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
html_format__table_header_group_to_html_row_1_6_p_0(
  MR_Word html_format__FormatInfo_7,
  MR_Word html_format__HeaderNumRows_8,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_25,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_26,
  MR_Word html_format__HeaderGroup_10,
  MR_Word * html_format__HTML_11)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__TypeCtorInfo_11_53;
    MR_Word html_format__Titles_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeaderGroup_10, (MR_Integer) 0)));
    MR_Word html_format__ColumnClass_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeaderGroup_10, (MR_Integer) 1)))) & (MR_Integer) 15);
    MR_String html_format__RowSpan_16;
    MR_String html_format__ColumnSpan_17;
    MR_Word html_format__ContentsHTML_18;
    MR_String html_format__ColumnClassStr_22;
    MR_String html_format__StartTag_23;
    MR_String html_format__Var_37;
    MR_String html_format__Var_39;
    MR_String html_format__Var_40;
    MR_String html_format__Var_42;
    MR_String html_format__Var_43;
    MR_Word html_format__Var_50;
    MR_Word html_format__Var_51;
    MR_Word html_format__Var_52;
    MR_Word html_format___SetStyle_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeaderGroup_10, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);

    if (((MR_tag((MR_Word) html_format__Titles_12)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String html_format__MainTitle_19 = ((MR_String) (MR_hl_field(MR_mktag(1), html_format__Titles_12, (MR_Integer) 0)));
        MR_Word html_format__SubTitleCells_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__Titles_12, (MR_Integer) 1)));
        MR_Integer html_format__NumSubTitleCells_21;

        html_format__RowSpan_16 = (MR_String) "1";
        {
          mercury__list__length_2_p_0((MR_Word) &display__display__type_ctor_info_table_data_0, html_format__SubTitleCells_20, &html_format__NumSubTitleCells_21);
        }
        {
          html_format__ColumnSpan_17 = mercury__string__int_to_string_1_f_0(html_format__NumSubTitleCells_21);
        }
        {
          html_format__ContentsHTML_18 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__MainTitle_19)));
        }
      }
    else
      {
        MR_Word html_format__Title_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Titles_12, (MR_Integer) 0)));

        switch (html_format__HeaderNumRows_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            html_format__RowSpan_16 = (MR_String) "1";
            break;
          case (MR_Integer) 1:
            html_format__RowSpan_16 = (MR_String) "2";
            break;
        }
        html_format__ColumnSpan_17 = (MR_String) "1";
        {
          html_format__ContentsHTML_18 = html_format__table_data_to_html_2_f_0(html_format__FormatInfo_7, html_format__Title_15);
        }
      }
    html_format__ColumnClassStr_22 = ((&html_format_vector_common_6[26 + html_format__ColumnClass_13]))->html_format__vector_common_type_6_0__vct_6_f_0;
    {
      html_format__Var_37 = mercury__string__f_43_43_2_f_0(html_format__ColumnClassStr_22, (MR_String) "\">");
    }
    {
      html_format__Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "\" class=\"", html_format__Var_37);
    }
    {
      html_format__Var_40 = mercury__string__f_43_43_2_f_0(html_format__ColumnSpan_17, html_format__Var_39);
    }
    {
      html_format__Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "\" colspan=\"", html_format__Var_40);
    }
    {
      html_format__Var_43 = mercury__string__f_43_43_2_f_0(html_format__RowSpan_16, html_format__Var_42);
    }
    {
      html_format__StartTag_23 = mercury__string__f_43_43_2_f_0((MR_String) "<th rowspan=\"", html_format__Var_43);
    }
    html_format__TypeCtorInfo_11_53 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      html_format__Var_50 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__StartTag_23)));
    }
    {
      html_format__Var_52 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "</th>\n")));
    }
    {
      html_format__Var_51 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_53, html_format__ContentsHTML_18, html_format__Var_52);
    }
    {
      *html_format__HTML_11 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_53, html_format__Var_50, html_format__Var_51);
    }
    *html_format__STATE_VARIABLE_StyleControlMap_26 = html_format__STATE_VARIABLE_StyleControlMap_0_25;
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_p_0(
  MR_Word html_format__Var_15,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_10,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_11,
  MR_Word html_format__List_8,
  MR_Word * html_format__HTML_9)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__Var_12;

    {
      html_format__Var_12 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
    if ((html_format__List_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *html_format__HTML_9 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
        *html_format__STATE_VARIABLE_StyleControlMap_11 = html_format__STATE_VARIABLE_StyleControlMap_0_10;
      }
    else
      {
        MR_Word html_format__Head_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__List_8, (MR_Integer) 0)));
        MR_Word html_format__Tail_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__List_8, (MR_Integer) 1)));
        MR_Word html_format__HeadHTML_28;
        MR_Word html_format__STATE_VARIABLE_StyleControlMap_21_31;

        {
          html_format__table_header_group_to_html_row_2_5_p_0(html_format__Var_15, html_format__STATE_VARIABLE_StyleControlMap_0_10, &html_format__STATE_VARIABLE_StyleControlMap_21_31, html_format__Head_25, &html_format__HeadHTML_28);
        }
        {
          html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_p_0(html_format__Var_15, html_format__Var_12, html_format__STATE_VARIABLE_StyleControlMap_21_31, html_format__STATE_VARIABLE_StyleControlMap_11, html_format__Tail_26, html_format__HeadHTML_28, html_format__HTML_9);
        }
      }
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_p_0(
  MR_Word html_format__Var_34,
  MR_Word html_format__Separator_1,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
  MR_Word html_format__HeadVar__5_5,
  MR_Word html_format__STATE_VARIABLE_HTML_0_6,
  MR_Word * html_format__STATE_VARIABLE_HTML_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool html_format__succeeded;

        if ((html_format__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *html_format__STATE_VARIABLE_HTML_7 = html_format__STATE_VARIABLE_HTML_0_6;
            *html_format__STATE_VARIABLE_StyleControlMap_4 = html_format__STATE_VARIABLE_StyleControlMap_0_3;
          }
        else
          {
            MR_Word html_format__TypeCtorInfo_33_33;
            MR_Word html_format__Head_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word html_format__Tail_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 1)));
            MR_Word html_format__HeadHTML_22;
            MR_Word html_format__STATE_VARIABLE_StyleControlMap_27_27;
            MR_Word html_format__STATE_VARIABLE_HTML_28_28;
            MR_Word html_format__Var_29;

            {
              html_format__table_header_group_to_html_row_2_5_p_0(html_format__Var_34, html_format__STATE_VARIABLE_StyleControlMap_0_3, &html_format__STATE_VARIABLE_StyleControlMap_27_27, html_format__Head_19, &html_format__HeadHTML_22);
            }
            html_format__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              html_format__Var_29 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_33_33, html_format__Separator_1, html_format__HeadHTML_22);
            }
            {
              html_format__STATE_VARIABLE_HTML_28_28 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_33_33, html_format__STATE_VARIABLE_HTML_0_6, html_format__Var_29);
            }
            /* direct tailcall eliminated */
            {
              MR_Word html_format__next_value_of_STATE_VARIABLE_StyleControlMap_0_3 = html_format__STATE_VARIABLE_StyleControlMap_27_27;
              MR_Word html_format__next_value_of_HeadVar__5_5 = html_format__Tail_20;
              MR_Word html_format__next_value_of_STATE_VARIABLE_HTML_0_6 = html_format__STATE_VARIABLE_HTML_28_28;

              html_format__STATE_VARIABLE_HTML_0_6 = html_format__next_value_of_STATE_VARIABLE_HTML_0_6;
              html_format__HeadVar__5_5 = html_format__next_value_of_HeadVar__5_5;
              html_format__STATE_VARIABLE_StyleControlMap_0_3 = html_format__next_value_of_STATE_VARIABLE_StyleControlMap_0_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
html_format__table_header_group_to_html_row_2_5_p_0(
  MR_Word html_format__FormatInfo_6,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_16,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_17,
  MR_Word html_format__HeaderGroup_8,
  MR_Word * html_format__HTML_9)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__Titles_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeaderGroup_8, (MR_Integer) 0)));
    MR_Word html_format__ColumnClass_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeaderGroup_8, (MR_Integer) 1)))) & (MR_Integer) 15);
    MR_Word html_format___SetStyle_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeaderGroup_8, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);

    if (((MR_tag((MR_Word) html_format__Titles_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word html_format__SubTitleCells_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__Titles_10, (MR_Integer) 1)));
        MR_Word html_format__Var_31;
        MR_String html_format__Var_14 = ((MR_String) (MR_hl_field(MR_mktag(1), html_format__Titles_10, (MR_Integer) 0)));

        {
          html_format__Var_31 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
        if ((html_format__SubTitleCells_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              *html_format__HTML_9 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
            *html_format__STATE_VARIABLE_StyleControlMap_17 = html_format__STATE_VARIABLE_StyleControlMap_0_16;
          }
        else
          {
            MR_Word html_format__Head_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__SubTitleCells_15, (MR_Integer) 0)));
            MR_Word html_format__Tail_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__SubTitleCells_15, (MR_Integer) 1)));
            MR_Word html_format__HeadHTML_46;
            MR_Word html_format__STATE_VARIABLE_StyleControlMap_21_49;

            {
              html_format__table_data_to_th_html_6_p_0(html_format__FormatInfo_6, html_format__ColumnClass_11, html_format__STATE_VARIABLE_StyleControlMap_0_16, &html_format__STATE_VARIABLE_StyleControlMap_21_49, html_format__Head_43, &html_format__HeadHTML_46);
            }
            {
              html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_p_0(html_format__FormatInfo_6, html_format__ColumnClass_11, html_format__Var_31, html_format__STATE_VARIABLE_StyleControlMap_21_49, html_format__STATE_VARIABLE_StyleControlMap_17, html_format__Tail_44, html_format__HeadHTML_46, html_format__HTML_9);
            }
          }
      }
    else
      {
        {
          *html_format__HTML_9 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
        *html_format__STATE_VARIABLE_StyleControlMap_17 = html_format__STATE_VARIABLE_StyleControlMap_0_16;
      }
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_p_0(
  MR_Word html_format__Var_34,
  MR_Word html_format__Var_35,
  MR_Word html_format__Separator_1,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
  MR_Word html_format__HeadVar__5_5,
  MR_Word html_format__STATE_VARIABLE_HTML_0_6,
  MR_Word * html_format__STATE_VARIABLE_HTML_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool html_format__succeeded;

        if ((html_format__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *html_format__STATE_VARIABLE_HTML_7 = html_format__STATE_VARIABLE_HTML_0_6;
            *html_format__STATE_VARIABLE_StyleControlMap_4 = html_format__STATE_VARIABLE_StyleControlMap_0_3;
          }
        else
          {
            MR_Word html_format__TypeCtorInfo_33_33;
            MR_Word html_format__Head_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word html_format__Tail_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 1)));
            MR_Word html_format__HeadHTML_22;
            MR_Word html_format__STATE_VARIABLE_StyleControlMap_27_27;
            MR_Word html_format__STATE_VARIABLE_HTML_28_28;
            MR_Word html_format__Var_29;

            {
              html_format__table_data_to_th_html_6_p_0(html_format__Var_34, html_format__Var_35, html_format__STATE_VARIABLE_StyleControlMap_0_3, &html_format__STATE_VARIABLE_StyleControlMap_27_27, html_format__Head_19, &html_format__HeadHTML_22);
            }
            html_format__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              html_format__Var_29 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_33_33, html_format__Separator_1, html_format__HeadHTML_22);
            }
            {
              html_format__STATE_VARIABLE_HTML_28_28 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_33_33, html_format__STATE_VARIABLE_HTML_0_6, html_format__Var_29);
            }
            /* direct tailcall eliminated */
            {
              MR_Word html_format__next_value_of_STATE_VARIABLE_StyleControlMap_0_3 = html_format__STATE_VARIABLE_StyleControlMap_27_27;
              MR_Word html_format__next_value_of_HeadVar__5_5 = html_format__Tail_20;
              MR_Word html_format__next_value_of_STATE_VARIABLE_HTML_0_6 = html_format__STATE_VARIABLE_HTML_28_28;

              html_format__STATE_VARIABLE_HTML_0_6 = html_format__next_value_of_STATE_VARIABLE_HTML_0_6;
              html_format__HeadVar__5_5 = html_format__next_value_of_HeadVar__5_5;
              html_format__STATE_VARIABLE_StyleControlMap_0_3 = html_format__next_value_of_STATE_VARIABLE_StyleControlMap_0_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
html_format__table_data_to_th_html_6_p_0(
  MR_Word html_format__FormatInfo_7,
  MR_Word html_format__ColumnClass_8,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_16,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_17,
  MR_Word html_format__TableData_10,
  MR_Word * html_format__HTML_11)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__TypeCtorInfo_11_31;
    MR_String html_format__ColumnClassStr_12 = ((&html_format_vector_common_6[13 + html_format__ColumnClass_8]))->html_format__vector_common_type_6_0__vct_6_f_0;
    MR_Word html_format__TableDataHTML_13;
    MR_String html_format__StartTag_14;
    MR_String html_format__Var_23;
    MR_Word html_format__Var_28;
    MR_Word html_format__Var_29;
    MR_Word html_format__Var_30;

    {
      html_format__TableDataHTML_13 = html_format__table_data_to_html_2_f_0(html_format__FormatInfo_7, html_format__TableData_10);
    }
    {
      html_format__Var_23 = mercury__string__f_43_43_2_f_0(html_format__ColumnClassStr_12, (MR_String) "\">");
    }
    {
      html_format__StartTag_14 = mercury__string__f_43_43_2_f_0((MR_String) "<th class=\"", html_format__Var_23);
    }
    html_format__TypeCtorInfo_11_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      html_format__Var_28 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__StartTag_14)));
    }
    {
      html_format__Var_30 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "</th>\n")));
    }
    {
      html_format__Var_29 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_31, html_format__TableDataHTML_13, html_format__Var_30);
    }
    {
      *html_format__HTML_11 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_31, html_format__Var_28, html_format__Var_29);
    }
    *html_format__STATE_VARIABLE_StyleControlMap_17 = html_format__STATE_VARIABLE_StyleControlMap_0_16;
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_p_0(
  MR_Word html_format__Var_15,
  MR_Word html_format__Var_16,
  MR_Integer html_format__Var_17,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_10,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_11,
  MR_Word html_format__List_8,
  MR_Word * html_format__HTML_9)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__Var_12;

    {
      html_format__Var_12 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
    if ((html_format__List_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *html_format__HTML_9 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
        *html_format__STATE_VARIABLE_StyleControlMap_11 = html_format__STATE_VARIABLE_StyleControlMap_0_10;
      }
    else
      {
        MR_Word html_format__Head_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__List_8, (MR_Integer) 0)));
        MR_Word html_format__Tail_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__List_8, (MR_Integer) 1)));
        MR_Word html_format__HeadHTML_30;
        MR_Word html_format__STATE_VARIABLE_StyleControlMap_21_33;

        {
          html_format__table_row_to_html_7_p_0(html_format__Var_15, html_format__Var_16, html_format__Var_17, html_format__STATE_VARIABLE_StyleControlMap_0_10, &html_format__STATE_VARIABLE_StyleControlMap_21_33, html_format__Head_27, &html_format__HeadHTML_30);
        }
        {
          html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_p_0(html_format__Var_15, html_format__Var_16, html_format__Var_17, html_format__Var_12, html_format__STATE_VARIABLE_StyleControlMap_21_33, html_format__STATE_VARIABLE_StyleControlMap_11, html_format__Tail_28, html_format__HeadHTML_30, html_format__HTML_9);
        }
      }
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_p_0(
  MR_Word html_format__Var_34,
  MR_Word html_format__Var_35,
  MR_Integer html_format__Var_36,
  MR_Word html_format__Separator_1,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
  MR_Word html_format__HeadVar__5_5,
  MR_Word html_format__STATE_VARIABLE_HTML_0_6,
  MR_Word * html_format__STATE_VARIABLE_HTML_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool html_format__succeeded;

        if ((html_format__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *html_format__STATE_VARIABLE_HTML_7 = html_format__STATE_VARIABLE_HTML_0_6;
            *html_format__STATE_VARIABLE_StyleControlMap_4 = html_format__STATE_VARIABLE_StyleControlMap_0_3;
          }
        else
          {
            MR_Word html_format__TypeCtorInfo_33_33;
            MR_Word html_format__Head_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word html_format__Tail_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 1)));
            MR_Word html_format__HeadHTML_22;
            MR_Word html_format__STATE_VARIABLE_StyleControlMap_27_27;
            MR_Word html_format__STATE_VARIABLE_HTML_28_28;
            MR_Word html_format__Var_29;

            {
              html_format__table_row_to_html_7_p_0(html_format__Var_34, html_format__Var_35, html_format__Var_36, html_format__STATE_VARIABLE_StyleControlMap_0_3, &html_format__STATE_VARIABLE_StyleControlMap_27_27, html_format__Head_19, &html_format__HeadHTML_22);
            }
            html_format__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              html_format__Var_29 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_33_33, html_format__Separator_1, html_format__HeadHTML_22);
            }
            {
              html_format__STATE_VARIABLE_HTML_28_28 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_33_33, html_format__STATE_VARIABLE_HTML_0_6, html_format__Var_29);
            }
            /* direct tailcall eliminated */
            {
              MR_Word html_format__next_value_of_STATE_VARIABLE_StyleControlMap_0_3 = html_format__STATE_VARIABLE_StyleControlMap_27_27;
              MR_Word html_format__next_value_of_HeadVar__5_5 = html_format__Tail_20;
              MR_Word html_format__next_value_of_STATE_VARIABLE_HTML_0_6 = html_format__STATE_VARIABLE_HTML_28_28;

              html_format__STATE_VARIABLE_HTML_0_6 = html_format__next_value_of_STATE_VARIABLE_HTML_0_6;
              html_format__HeadVar__5_5 = html_format__next_value_of_HeadVar__5_5;
              html_format__STATE_VARIABLE_StyleControlMap_0_3 = html_format__next_value_of_STATE_VARIABLE_StyleControlMap_0_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
html_format__table_row_to_html_7_p_0(
  MR_Word html_format__FormatInfo_8,
  MR_Word html_format__MaybeColClassMap_9,
  MR_Integer html_format__NumColumns_10,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_23,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_24,
  MR_Word html_format__TableRow_12,
  MR_Word * html_format__HTML_13)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool html_format__succeeded;

        switch (MR_tag((MR_Word) html_format__TableRow_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String html_format__Str_18;
              MR_String html_format__Var_53;
              MR_String html_format__Var_60;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &html_format_scalar_common_7[0], html_format__NumColumns_10, &html_format__Var_53);
              }
              {
                html_format__Var_60 = mercury__string__f_43_43_2_f_0(html_format__Var_53, (MR_String) "\"></td></tr>\n");
              }
              {
                html_format__Str_18 = mercury__string__f_43_43_2_f_0((MR_String) "<tr><td colspan=\"", html_format__Var_60);
              }
              {
                *html_format__HTML_13 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Str_18)));
              }
              *html_format__STATE_VARIABLE_StyleControlMap_24 = html_format__STATE_VARIABLE_StyleControlMap_0_23;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word html_format__TypeCtorInfo_11_78;
              MR_Word html_format__Cells_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__TableRow_12, (MR_Integer) 0)));
              MR_Word html_format__InnerHTML_20;
              MR_Word html_format__Var_75;
              MR_Word html_format__Var_76;
              MR_Word html_format__Var_77;

              {
                html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(html_format__FormatInfo_8, html_format__MaybeColClassMap_9, html_format__STATE_VARIABLE_StyleControlMap_0_23, html_format__STATE_VARIABLE_StyleControlMap_24, (MR_Integer) 0, html_format__Cells_19, &html_format__InnerHTML_20);
              }
              html_format__TypeCtorInfo_11_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              {
                html_format__Var_75 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "<tr>\n")));
              }
              {
                html_format__Var_77 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "</tr>\n")));
              }
              {
                html_format__Var_76 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_78, html_format__InnerHTML_20, html_format__Var_77);
              }
              {
                *html_format__HTML_13 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_78, html_format__Var_75, html_format__Var_76);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word html_format__TypeCtorInfo_11_89;
              MR_Word html_format__Contents_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), html_format__TableRow_12, (MR_Integer) 0)));
              MR_Word html_format__ContentsHTML_15;
              MR_String html_format__StartTag_16;
              MR_String html_format__Var_63;
              MR_String html_format__Var_70;
              MR_Word html_format__Var_86;
              MR_Word html_format__Var_87;
              MR_Word html_format__Var_88;

              {
                html_format__ContentsHTML_15 = html_format__table_data_to_html_2_f_0(html_format__FormatInfo_8, html_format__Contents_14);
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &html_format_scalar_common_7[0], html_format__NumColumns_10, &html_format__Var_63);
              }
              {
                html_format__Var_70 = mercury__string__f_43_43_2_f_0(html_format__Var_63, (MR_String) "\">");
              }
              {
                html_format__StartTag_16 = mercury__string__f_43_43_2_f_0((MR_String) "<tr><td colspan=\"", html_format__Var_70);
              }
              html_format__TypeCtorInfo_11_89 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              {
                html_format__Var_86 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__StartTag_16)));
              }
              {
                html_format__Var_88 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "</td></tr>\n")));
              }
              {
                html_format__Var_87 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_89, html_format__ContentsHTML_15, html_format__Var_88);
              }
              {
                *html_format__HTML_13 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_89, html_format__Var_86, html_format__Var_87);
              }
              *html_format__STATE_VARIABLE_StyleControlMap_24 = html_format__STATE_VARIABLE_StyleControlMap_0_23;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word html_format__RealTableRow_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), html_format__TableRow_12, (MR_Integer) 0)));
              MR_Word html_format__Developer_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_8, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word html_format__Var_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_8, (MR_Integer) 0)))) & (MR_Integer) 1);
              MR_Word html_format__Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_String html_format__Var_41 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_8, (MR_Integer) 1)));
              MR_String html_format__Var_42 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_8, (MR_Integer) 2)));
              MR_String html_format__Var_43 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_8, (MR_Integer) 3)));

              switch (html_format__Developer_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    {
                      *html_format__HTML_13 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
                    }
                    *html_format__STATE_VARIABLE_StyleControlMap_24 = html_format__STATE_VARIABLE_StyleControlMap_0_23;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word html_format__next_value_of_TableRow_12 = html_format__RealTableRow_21;

                      html_format__TableRow_12 = html_format__next_value_of_TableRow_12;
                    }
                    continue;
                  }
                  break;
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(
  MR_Word html_format__Var_18,
  MR_Word html_format__Var_19,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_12,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_13,
  MR_Integer html_format__STATE_VARIABLE_ColumnNum_0_14,
  MR_Word html_format__List_10,
  MR_Word * html_format__HTML_11)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__Var_15;

    {
      html_format__Var_15 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
    if ((html_format__List_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *html_format__HTML_11 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
        *html_format__STATE_VARIABLE_StyleControlMap_13 = html_format__STATE_VARIABLE_StyleControlMap_0_12;
      }
    else
      {
        MR_Word html_format__Head_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__List_10, (MR_Integer) 0)));
        MR_Word html_format__Tail_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__List_10, (MR_Integer) 1)));
        MR_Word html_format__HeadHTML_34;
        MR_Word html_format__STATE_VARIABLE_StyleControlMap_25_38;
        MR_Integer html_format__STATE_VARIABLE_ColumnNum_26_39;

        {
          html_format__table_cell_to_html_8_p_0(html_format__Var_18, html_format__Var_19, html_format__STATE_VARIABLE_StyleControlMap_0_12, &html_format__STATE_VARIABLE_StyleControlMap_25_38, html_format__STATE_VARIABLE_ColumnNum_0_14, &html_format__STATE_VARIABLE_ColumnNum_26_39, html_format__Head_31, &html_format__HeadHTML_34);
        }
        {
          html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_p_0(html_format__Var_18, html_format__Var_19, html_format__Var_15, html_format__STATE_VARIABLE_StyleControlMap_25_38, html_format__STATE_VARIABLE_StyleControlMap_13, html_format__STATE_VARIABLE_ColumnNum_26_39, html_format__Tail_32, html_format__HeadHTML_34, html_format__HTML_11);
        }
      }
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_p_0(
  MR_Word html_format__Var_39,
  MR_Word html_format__Var_40,
  MR_Word html_format__Separator_1,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
  MR_Integer html_format__STATE_VARIABLE_ColumnNum_0_5,
  MR_Word html_format__HeadVar__6_6,
  MR_Word html_format__STATE_VARIABLE_HTML_0_7,
  MR_Word * html_format__STATE_VARIABLE_HTML_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool html_format__succeeded;

        if ((html_format__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *html_format__STATE_VARIABLE_HTML_8 = html_format__STATE_VARIABLE_HTML_0_7;
            *html_format__STATE_VARIABLE_StyleControlMap_4 = html_format__STATE_VARIABLE_StyleControlMap_0_3;
          }
        else
          {
            MR_Word html_format__TypeCtorInfo_38_38;
            MR_Word html_format__Head_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__6_6, (MR_Integer) 0)));
            MR_Word html_format__Tail_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__6_6, (MR_Integer) 1)));
            MR_Word html_format__HeadHTML_25;
            MR_Word html_format__STATE_VARIABLE_StyleControlMap_31_31;
            MR_Integer html_format__STATE_VARIABLE_ColumnNum_32_32;
            MR_Word html_format__STATE_VARIABLE_HTML_33_33;
            MR_Word html_format__Var_34;

            {
              html_format__table_cell_to_html_8_p_0(html_format__Var_39, html_format__Var_40, html_format__STATE_VARIABLE_StyleControlMap_0_3, &html_format__STATE_VARIABLE_StyleControlMap_31_31, html_format__STATE_VARIABLE_ColumnNum_0_5, &html_format__STATE_VARIABLE_ColumnNum_32_32, html_format__Head_22, &html_format__HeadHTML_25);
            }
            html_format__TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              html_format__Var_34 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_38_38, html_format__Separator_1, html_format__HeadHTML_25);
            }
            {
              html_format__STATE_VARIABLE_HTML_33_33 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_38_38, html_format__STATE_VARIABLE_HTML_0_7, html_format__Var_34);
            }
            /* direct tailcall eliminated */
            {
              MR_Word html_format__next_value_of_STATE_VARIABLE_StyleControlMap_0_3 = html_format__STATE_VARIABLE_StyleControlMap_31_31;
              MR_Integer html_format__next_value_of_STATE_VARIABLE_ColumnNum_0_5 = html_format__STATE_VARIABLE_ColumnNum_32_32;
              MR_Word html_format__next_value_of_HeadVar__6_6 = html_format__Tail_23;
              MR_Word html_format__next_value_of_STATE_VARIABLE_HTML_0_7 = html_format__STATE_VARIABLE_HTML_33_33;

              html_format__STATE_VARIABLE_HTML_0_7 = html_format__next_value_of_STATE_VARIABLE_HTML_0_7;
              html_format__HeadVar__6_6 = html_format__next_value_of_HeadVar__6_6;
              html_format__STATE_VARIABLE_ColumnNum_0_5 = html_format__next_value_of_STATE_VARIABLE_ColumnNum_0_5;
              html_format__STATE_VARIABLE_StyleControlMap_0_3 = html_format__next_value_of_STATE_VARIABLE_StyleControlMap_0_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
html_format__table_cell_to_html_8_p_0(
  MR_Word html_format__FormatInfo_9,
  MR_Word html_format__MaybeClassMap_10,
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_27,
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_28,
  MR_Integer html_format__STATE_VARIABLE_ColumnNum_0_29,
  MR_Integer * html_format__STATE_VARIABLE_ColumnNum_30,
  MR_Word html_format__Cell_13,
  MR_Word * html_format__HTML_14)
{
  {
    MR_bool html_format__succeeded;

    switch (MR_tag((MR_Word) html_format__Cell_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *html_format__STATE_VARIABLE_ColumnNum_30 = (html_format__STATE_VARIABLE_ColumnNum_0_29 + (MR_Integer) 1);
          {
            *html_format__HTML_14 = html_format__str_to_html_1_f_0((MR_String) "<td/>");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word html_format__CellData_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__Cell_13, (MR_Integer) 0)));
          MR_String html_format__ColumnClassStr_19;
          MR_Word html_format__CellHTML_23;
          MR_String html_format__StartTag_25;
          MR_String html_format__Var_184;
          MR_String html_format__Var_186;
          MR_String html_format__Var_187;

          if ((html_format__MaybeClassMap_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word html_format__ColumnClass_22;
              MR_Word html_format__ColumnClassPrime_21;

              {
                html_format__succeeded = html_format__table_data_class_2_p_0(html_format__CellData_15, &html_format__ColumnClassPrime_21);
              }
              if (html_format__succeeded)
                html_format__ColumnClass_22 = html_format__ColumnClassPrime_21;
              else
                {
                  html_format__ColumnClass_22 = html_format__default_table_column_class_0_f_0();
                }
              {
                html_format__ColumnClassStr_19 = html_format__table_column_class_to_string_1_f_0(html_format__ColumnClass_22);
              }
            }
          else
            {
              MR_Word html_format__ClassMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__MaybeClassMap_10, (MR_Integer) 0)));
              MR_String html_format__ColumnClassStrPrime_18;
              MR_Box html_format__conv0_ColumnClassStrPrime_18;

              {
                html_format__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, html_format__ClassMap_17, html_format__STATE_VARIABLE_ColumnNum_0_29, &html_format__conv0_ColumnClassStrPrime_18);
              }
              if (html_format__succeeded)
                {
                  html_format__ColumnClassStrPrime_18 = ((MR_String) html_format__conv0_ColumnClassStrPrime_18);
                  html_format__succeeded = MR_TRUE;
                }
              if (html_format__succeeded)
                html_format__ColumnClassStr_19 = html_format__ColumnClassStrPrime_18;
              else
                {
                  MR_String html_format__Msg_20;
                  MR_String html_format__Var_164;
                  MR_String html_format__Var_171;

                  {
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &html_format_scalar_common_7[0], html_format__STATE_VARIABLE_ColumnNum_0_29, &html_format__Var_164);
                  }
                  {
                    html_format__Var_171 = mercury__string__f_43_43_2_f_0(html_format__Var_164, (MR_String) ", check table structure");
                  }
                  {
                    html_format__Msg_20 = mercury__string__f_43_43_2_f_0((MR_String) "Class map had no class for col ", html_format__Var_171);
                  }
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "html_format", (MR_String) "predicate \140html_format.table_cell_to_html\'/8", html_format__Msg_20);
                    return;
                  }
                }
            }
          {
            html_format__CellHTML_23 = html_format__table_data_to_html_2_f_0(html_format__FormatInfo_9, html_format__CellData_15);
          }
          *html_format__STATE_VARIABLE_ColumnNum_30 = (html_format__STATE_VARIABLE_ColumnNum_0_29 + (MR_Integer) 1);
          {
            html_format__Var_184 = mercury__string__f_43_43_2_f_0(html_format__ColumnClassStr_19, (MR_String) "\">");
          }
          {
            html_format__Var_186 = mercury__string__f_43_43_2_f_0((MR_String) "class=\"", html_format__Var_184);
          }
          {
            html_format__Var_187 = mercury__string__f_43_43_2_f_0((MR_String) "", html_format__Var_186);
          }
          {
            html_format__StartTag_25 = mercury__string__f_43_43_2_f_0((MR_String) "<td ", html_format__Var_187);
          }
          {
            *html_format__HTML_14 = html_format__wrap_tags_3_f_0(html_format__StartTag_25, (MR_String) "</td>\n", html_format__CellHTML_23);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word html_format__CellData_107 = ((MR_Word) (MR_hl_field(MR_mktag(2), html_format__Cell_13, (MR_Integer) 0)));
          MR_Integer html_format__Span_108 = ((MR_Integer) (MR_hl_field(MR_mktag(2), html_format__Cell_13, (MR_Integer) 1)));
          MR_String html_format__ColumnClassStr_111;
          MR_Word html_format__CellHTML_115;
          MR_String html_format__SpanStr_116;
          MR_String html_format__StartTag_117;
          MR_String html_format__Var_158;
          MR_String html_format__Var_160;
          MR_String html_format__Var_161;

          if ((html_format__MaybeClassMap_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word html_format__ColumnClass_55;
              MR_Word html_format__ColumnClassPrime_53;

              {
                html_format__succeeded = html_format__table_data_class_2_p_0(html_format__CellData_107, &html_format__ColumnClassPrime_53);
              }
              if (html_format__succeeded)
                html_format__ColumnClass_55 = html_format__ColumnClassPrime_53;
              else
                {
                  html_format__ColumnClass_55 = html_format__default_table_column_class_0_f_0();
                }
              {
                html_format__ColumnClassStr_111 = html_format__table_column_class_to_string_1_f_0(html_format__ColumnClass_55);
              }
            }
          else
            {
              MR_Word html_format__ClassMap_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__MaybeClassMap_10, (MR_Integer) 0)));
              MR_String html_format__ColumnClassStrPrime_65;
              MR_Box html_format__conv1_ColumnClassStrPrime_65;

              {
                html_format__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, html_format__ClassMap_75, html_format__STATE_VARIABLE_ColumnNum_0_29, &html_format__conv1_ColumnClassStrPrime_65);
              }
              if (html_format__succeeded)
                {
                  html_format__ColumnClassStrPrime_65 = ((MR_String) html_format__conv1_ColumnClassStrPrime_65);
                  html_format__succeeded = MR_TRUE;
                }
              if (html_format__succeeded)
                html_format__ColumnClassStr_111 = html_format__ColumnClassStrPrime_65;
              else
                {
                  MR_String html_format__Msg_58;
                  MR_String html_format__Var_138;
                  MR_String html_format__Var_145;

                  {
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &html_format_scalar_common_7[0], html_format__STATE_VARIABLE_ColumnNum_0_29, &html_format__Var_138);
                  }
                  {
                    html_format__Var_145 = mercury__string__f_43_43_2_f_0(html_format__Var_138, (MR_String) ", check table structure");
                  }
                  {
                    html_format__Msg_58 = mercury__string__f_43_43_2_f_0((MR_String) "Class map had no class for col ", html_format__Var_145);
                  }
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "html_format", (MR_String) "predicate \140html_format.table_cell_to_html\'/8", html_format__Msg_58);
                    return;
                  }
                }
            }
          {
            html_format__CellHTML_115 = html_format__table_data_to_html_2_f_0(html_format__FormatInfo_9, html_format__CellData_107);
          }
          html_format__succeeded = (html_format__Span_108 == (MR_Integer) 1);
          if (html_format__succeeded)
            html_format__SpanStr_116 = (MR_String) "";
          else
            {
              MR_String html_format__Var_148;
              MR_String html_format__Var_155;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &html_format_scalar_common_7[0], html_format__Span_108, &html_format__Var_148);
              }
              {
                html_format__Var_155 = mercury__string__f_43_43_2_f_0(html_format__Var_148, (MR_String) " ");
              }
              {
                html_format__SpanStr_116 = mercury__string__f_43_43_2_f_0((MR_String) "colspan=", html_format__Var_155);
              }
            }
          *html_format__STATE_VARIABLE_ColumnNum_30 = (html_format__STATE_VARIABLE_ColumnNum_0_29 + html_format__Span_108);
          {
            html_format__Var_158 = mercury__string__f_43_43_2_f_0(html_format__ColumnClassStr_111, (MR_String) "\">");
          }
          {
            html_format__Var_160 = mercury__string__f_43_43_2_f_0((MR_String) "class=\"", html_format__Var_158);
          }
          {
            html_format__Var_161 = mercury__string__f_43_43_2_f_0(html_format__SpanStr_116, html_format__Var_160);
          }
          {
            html_format__StartTag_117 = mercury__string__f_43_43_2_f_0((MR_String) "<td ", html_format__Var_161);
          }
          {
            *html_format__HTML_14 = html_format__wrap_tags_3_f_0(html_format__StartTag_117, (MR_String) "</td>\n", html_format__CellHTML_115);
          }
        }
        break;
    }
    *html_format__STATE_VARIABLE_StyleControlMap_28 = html_format__STATE_VARIABLE_StyleControlMap_0_27;
  }
}

static MR_String MR_CALL 
html_format__table_column_class_to_string_1_f_0(
  MR_Word html_format__HeadVar__1_1)
{
  {
    MR_bool html_format__succeeded;
    MR_String html_format__HeadVar__2_2 = ((&html_format_vector_common_6[0 + html_format__HeadVar__1_1]))->html_format__vector_common_type_6_0__vct_6_f_0;

    return html_format__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
html_format__default_table_column_class_0_f_0(void)
{
  {
    MR_bool html_format__succeeded;

    return (MR_Integer) 6;
  }
}

static MR_bool MR_CALL 
html_format__table_data_class_2_p_0(
  MR_Word html_format__HeadVar__1_1,
  MR_Word * html_format__HeadVar__2_2)
{
  {
    MR_bool html_format__succeeded;

    switch (MR_tag((MR_Word) html_format__HeadVar__1_1)) {
      default:
        html_format__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        {
          *html_format__HeadVar__2_2 = (MR_Integer) 7;
          html_format__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), html_format__HeadVar__1_1, (MR_Integer) 0)))) {
          default:
            html_format__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              *html_format__HeadVar__2_2 = (MR_Integer) 7;
              html_format__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              *html_format__HeadVar__2_2 = (MR_Integer) 7;
              html_format__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              *html_format__HeadVar__2_2 = (MR_Integer) 7;
              html_format__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 4:
            {
              *html_format__HeadVar__2_2 = (MR_Integer) 7;
              html_format__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return html_format__succeeded;
  }
}

static void MR_CALL 
html_format__table_data_to_html_2_f_0_2(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box * html_format__wrapper_arg_3)
{
  {
    MR_Box html_format__closure = html_format__closure_arg;
    MR_Word html_format__conv1_STATE_VARIABLE_Acc_11;

    {
      html_format__replace_special_char_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), html_format__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2), &html_format__conv1_STATE_VARIABLE_Acc_11);
    }
    *html_format__wrapper_arg_3 = ((MR_Box) (html_format__conv1_STATE_VARIABLE_Acc_11));
  }
}

static MR_bool MR_CALL 
html_format__table_data_to_html_2_f_0_1(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box * html_format__wrapper_arg_2)
{
  {
    MR_bool html_format__succeeded;
    MR_Box html_format__closure = html_format__closure_arg;
    MR_String html_format__conv0_HeadVar__2_2;

    {
      html_format__succeeded = html_format__special_html_char_or_break_2_p_0(((MR_Char) (MR_Word) html_format__wrapper_arg_1), &html_format__conv0_HeadVar__2_2);
    }
    if (html_format__succeeded)
      {
        *html_format__wrapper_arg_2 = ((MR_Box) (html_format__conv0_HeadVar__2_2));
        html_format__succeeded = MR_TRUE;
      }
    return html_format__succeeded;
  }
}

static MR_Word MR_CALL 
html_format__table_data_to_html_2_f_0(
  MR_Word html_format__FormatInfo_1,
  MR_Word html_format__HeadVar__2_2)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__HeadVar__3_3;

    switch (MR_tag((MR_Word) html_format__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word html_format__Link_11 = (MR_Word) MR_body(((MR_Word) html_format__HeadVar__2_2), (MR_Integer) 0);

          {
            html_format__HeadVar__3_3 = html_format__link_to_html_2_f_0(html_format__FormatInfo_1, html_format__Link_11);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word html_format__AttrString_24 = (MR_Word) MR_body(((MR_Word) html_format__HeadVar__2_2), (MR_Integer) 1);
          MR_String html_format__Var_25;

          {
            html_format__Var_25 = html_format__escape_break_html_attr_string_1_f_0(html_format__AttrString_24);
          }
          {
            html_format__HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Var_25)));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float html_format__Float_5 = MR_unbox_float((MR_hl_field(MR_mktag(2), html_format__HeadVar__2_2, (MR_Integer) 0)));
          MR_String html_format__Var_6;

          {
            html_format__Var_6 = measurement_units__two_decimal_fraction_1_f_0(html_format__Float_5);
          }
          {
            html_format__HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Var_6)));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), html_format__HeadVar__2_2, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer html_format__Int_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), html_format__HeadVar__2_2, (MR_Integer) 1)));
              MR_String html_format__Var_9;

              {
                html_format__Var_9 = measurement_units__commas_1_f_0(html_format__Int_8);
              }
              {
                html_format__HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Var_9)));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word html_format__Mem_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), html_format__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word html_format__Units_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), html_format__HeadVar__2_2, (MR_Integer) 2)));
              MR_Integer html_format__Decimals_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), html_format__HeadVar__2_2, (MR_Integer) 3)));
              MR_String html_format__Var_16;

              {
                html_format__Var_16 = measurement_units__format_memory_3_f_0(html_format__Mem_13, html_format__Units_14, html_format__Decimals_15);
              }
              {
                html_format__HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Var_16)));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word html_format__Percent_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), html_format__HeadVar__2_2, (MR_Integer) 1)));
              MR_String html_format__Var_19;

              {
                html_format__Var_19 = measurement_units__format_percent_1_f_0(html_format__Percent_18);
              }
              {
                html_format__HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Var_19)));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String html_format__String_21 = ((MR_String) (MR_hl_field(MR_mktag(3), html_format__HeadVar__2_2, (MR_Integer) 1)));
              MR_String html_format__Var_22;
              MR_Word html_format__Chars_47;
              MR_Box html_format__conv2_Chars_47;

              {
                mercury__string__foldr_4_p_0((MR_Word) &html_format_scalar_common_2[2], (MR_Word) &html_format_scalar_common_5[1], html_format__String_21, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &html_format__conv2_Chars_47);
              }
              html_format__Chars_47 = ((MR_Word) html_format__conv2_Chars_47);
              {
                mercury__string__from_char_list_2_p_0(html_format__Chars_47, &html_format__Var_22);
              }
              {
                html_format__HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Var_22)));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word html_format__Time_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), html_format__HeadVar__2_2, (MR_Integer) 1)));
              MR_String html_format__Var_28;

              {
                html_format__Var_28 = measurement_units__format_time_1_f_0(html_format__Time_27);
              }
              {
                html_format__HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Var_28)));
              }
            }
            break;
        }
        break;
    }
    return html_format__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
html_format__link_to_html_2_f_0(
  MR_Word html_format__FormatInfo_4,
  MR_Word html_format__Link_5)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__HTML_6;
    MR_Word html_format__Cmd_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Link_5, (MR_Integer) 0)));
    MR_Word html_format__MaybePrefs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Link_5, (MR_Integer) 1)));
    MR_Word html_format__Label_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Link_5, (MR_Integer) 2)));
    MR_Word html_format__Class_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Link_5, (MR_Integer) 3)));
    MR_String html_format__URL_11;
    MR_String html_format__HTMLStr_13;
    MR_String html_format__HostAndPort_43 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_4, (MR_Integer) 1)));
    MR_String html_format__Script_44 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_4, (MR_Integer) 2)));
    MR_String html_format__DeepFileName_45 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_4, (MR_Integer) 3)));
    MR_Word html_format__DeepQuery_46;
    MR_Word html_format__Var_47;
    MR_String html_format__Var_55;
    MR_String html_format__Var_73;
    MR_String html_format__Var_74;
    MR_String html_format__Var_75;
    MR_Word html_format__Var_57 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_4, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word html_format__Var_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word html_format__Var_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    {
      html_format__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), html_format__Var_47, 0) = ((MR_Box) (html_format__Cmd_7));
    }
    {
      html_format__DeepQuery_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), html_format__DeepQuery_46, 0) = ((MR_Box) (html_format__Var_47));
      MR_hl_field(MR_mktag(0), html_format__DeepQuery_46, 1) = ((MR_Box) (html_format__DeepFileName_45));
      MR_hl_field(MR_mktag(0), html_format__DeepQuery_46, 2) = ((MR_Box) (html_format__MaybePrefs_8));
    }
    {
      html_format__Var_55 = query__query_to_string_1_f_0(html_format__DeepQuery_46);
    }
    {
      html_format__Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "\?", html_format__Var_55);
    }
    {
      html_format__Var_74 = mercury__string__f_43_43_2_f_0(html_format__Script_44, html_format__Var_73);
    }
    {
      html_format__Var_75 = mercury__string__f_43_43_2_f_0(html_format__HostAndPort_43, html_format__Var_74);
    }
    {
      html_format__URL_11 = mercury__string__f_43_43_2_f_0((MR_String) "http://", html_format__Var_75);
    }
    switch (html_format__Class_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String html_format__Var_24;
          MR_String html_format__Var_34;
          MR_String html_format__Var_36;
          MR_String html_format__Var_37;

          {
            html_format__Var_24 = html_format__escape_break_html_attr_string_1_f_0(html_format__Label_9);
          }
          {
            html_format__Var_34 = mercury__string__f_43_43_2_f_0(html_format__Var_24, (MR_String) "]</a>");
          }
          {
            html_format__Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "\">[", html_format__Var_34);
          }
          {
            html_format__Var_37 = mercury__string__f_43_43_2_f_0(html_format__URL_11, html_format__Var_36);
          }
          {
            html_format__HTMLStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "<a class=\"control\" href=\"", html_format__Var_37);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String html_format__Var_18;
          MR_String html_format__Var_28;
          MR_String html_format__Var_30;
          MR_String html_format__Var_31;

          {
            html_format__Var_18 = html_format__escape_break_html_attr_string_1_f_0(html_format__Label_9);
          }
          {
            html_format__Var_28 = mercury__string__f_43_43_2_f_0(html_format__Var_18, (MR_String) "</a>");
          }
          {
            html_format__Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "\">", html_format__Var_28);
          }
          {
            html_format__Var_31 = mercury__string__f_43_43_2_f_0(html_format__URL_11, html_format__Var_30);
          }
          {
            html_format__HTMLStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "<a class=\"link\" href=\"", html_format__Var_31);
          }
        }
        break;
    }
    {
      html_format__HTML_6 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__HTMLStr_13)));
    }
    return html_format__HTML_6;
  }
}

static void MR_CALL 
html_format__escape_break_html_attr_string_1_f_0_2(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box html_format__wrapper_arg_2,
  MR_Box * html_format__wrapper_arg_3)
{
  {
    MR_Box html_format__closure = html_format__closure_arg;
    MR_Word html_format__conv1_STATE_VARIABLE_Acc_11;

    {
      html_format__replace_special_char_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), html_format__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2), &html_format__conv1_STATE_VARIABLE_Acc_11);
    }
    *html_format__wrapper_arg_3 = ((MR_Box) (html_format__conv1_STATE_VARIABLE_Acc_11));
  }
}

static MR_bool MR_CALL 
html_format__escape_break_html_attr_string_1_f_0_1(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1,
  MR_Box * html_format__wrapper_arg_2)
{
  {
    MR_bool html_format__succeeded;
    MR_Box html_format__closure = html_format__closure_arg;
    MR_String html_format__conv0_HeadVar__2_2;

    {
      html_format__succeeded = html_format__special_html_char_or_break_2_p_0(((MR_Char) (MR_Word) html_format__wrapper_arg_1), &html_format__conv0_HeadVar__2_2);
    }
    if (html_format__succeeded)
      {
        *html_format__wrapper_arg_2 = ((MR_Box) (html_format__conv0_HeadVar__2_2));
        html_format__succeeded = MR_TRUE;
      }
    return html_format__succeeded;
  }
}

MR_String MR_CALL 
html_format__escape_break_html_attr_string_1_f_0(
  MR_Word html_format__HeadVar__1_1)
{
  {
    MR_bool html_format__succeeded;
    MR_String html_format__HeadVar__2_2;
    MR_Word html_format__Attrs_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 0)));
    MR_String html_format__String_4 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 1)));
    MR_String html_format__Var_5;
    MR_Word html_format__Chars_13;
    MR_Box html_format__conv2_Chars_13;

    {
      mercury__string__foldr_4_p_0((MR_Word) &html_format_scalar_common_2[2], (MR_Word) &html_format_scalar_common_5[0], html_format__String_4, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &html_format__conv2_Chars_13);
    }
    html_format__Chars_13 = ((MR_Word) html_format__conv2_Chars_13);
    {
      mercury__string__from_char_list_2_p_0(html_format__Chars_13, &html_format__Var_5);
    }
    {
      html_format__HeadVar__2_2 = html_format__handle_html_attrs_2_f_0(html_format__Attrs_3, html_format__Var_5);
    }
    return html_format__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
html_format__handle_html_attrs_2_f_0(
  MR_Word html_format__HeadVar__1_1,
  MR_String html_format__HeadVar__2_2)
{
  {
    MR_bool html_format__succeeded;
    MR_String html_format__Str_3;

    if ((html_format__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      html_format__Str_3 = html_format__HeadVar__2_2;
    else
      {
        MR_Word html_format__Attr_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word html_format__Attrs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__1_1, (MR_Integer) 1)));
        MR_String html_format__InnerStr_9;

        {
          html_format__InnerStr_9 = html_format__handle_html_attrs_2_f_0(html_format__Attrs_6, html_format__HeadVar__2_2);
        }
        switch (html_format__Attr_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String html_format__Var_17;

              {
                html_format__Var_17 = mercury__string__f_43_43_2_f_0(html_format__InnerStr_9, (MR_String) "</b>");
              }
              {
                html_format__Str_3 = mercury__string__f_43_43_2_f_0((MR_String) "<b>", html_format__Var_17);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String html_format__Var_14;

              {
                html_format__Var_14 = mercury__string__f_43_43_2_f_0(html_format__InnerStr_9, (MR_String) "</i>");
              }
              {
                html_format__Str_3 = mercury__string__f_43_43_2_f_0((MR_String) "<i>", html_format__Var_14);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String html_format__Var_11;

              {
                html_format__Var_11 = mercury__string__f_43_43_2_f_0(html_format__InnerStr_9, (MR_String) "</u>");
              }
              {
                html_format__Str_3 = mercury__string__f_43_43_2_f_0((MR_String) "<u>", html_format__Var_11);
              }
            }
            break;
        }
      }
    return html_format__Str_3;
  }
}

static MR_Word MR_CALL 
html_format__str_to_html_1_f_0(
  MR_String html_format__Str_3)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__HeadVar__2_2;

    {
      html_format__HeadVar__2_2 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Str_3)));
    }
    return html_format__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
html_format__empty_html_0_f_0(void)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__HeadVar__1_1;

    {
      html_format__HeadVar__1_1 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
    return html_format__HeadVar__1_1;
  }
}

static MR_String MR_CALL 
html_format__table_class_to_string_2_f_0(
  MR_Word html_format__FormatInfo_4,
  MR_Word html_format__Class_5)
{
  {
    MR_bool html_format__succeeded;
    MR_String html_format__ClassStr_6;

    switch (html_format__Class_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        html_format__ClassStr_6 = (MR_String) "boxed";
        break;
      case (MR_Integer) 2:
        {
          MR_Word html_format__BoxPrefs_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word html_format__Var_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_4, (MR_Integer) 0)))) & (MR_Integer) 1);
          MR_Word html_format__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_String html_format__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_4, (MR_Integer) 1)));
          MR_String html_format__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_4, (MR_Integer) 2)));
          MR_String html_format__Var_12 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_4, (MR_Integer) 3)));

          switch (html_format__BoxPrefs_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              html_format__ClassStr_6 = (MR_String) "boxed";
              break;
            case (MR_Integer) 1:
              html_format__ClassStr_6 = (MR_String) "plain";
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        html_format__ClassStr_6 = (MR_String) "plain";
        break;
    }
    return html_format__ClassStr_6;
  }
}

static MR_Word MR_CALL 
html_format__wrap_tags_3_f_0(
  MR_String html_format__StartTag_5,
  MR_String html_format__EndTag_6,
  MR_Word html_format__InnerHTML_7)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__HeadVar__4_4;
    MR_Word html_format__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word html_format__Var_8;
    MR_Word html_format__Var_9;
    MR_Word html_format__Var_10;

    {
      html_format__Var_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__StartTag_5)));
    }
    {
      html_format__Var_10 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__EndTag_6)));
    }
    {
      html_format__Var_9 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_11, html_format__InnerHTML_7, html_format__Var_10);
    }
    {
      html_format__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_11, html_format__Var_8, html_format__Var_9);
    }
    return html_format__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
html_format__init_format_info_2_f_0(
  MR_Word html_format__Deep_4,
  MR_Word html_format__Prefs_5)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__FormatInfo_6;
    MR_Word html_format__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_String html_format__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 1)));
    MR_Word html_format__Var_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word html_format__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 8)));
    MR_String html_format__Var_47 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 2)));
    MR_String html_format__Var_48 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 3)));
    MR_Word html_format__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 0)));
    MR_Word html_format__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 2)));
    MR_Integer html_format__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 3)));
    MR_Word html_format__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 4)));
    MR_Word html_format__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 5)));
    MR_Word html_format__Var_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 6)))) & (MR_Integer) 1);
    MR_Word html_format__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word html_format__Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word html_format__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 7)));
    MR_Word html_format__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 0)));
    MR_Word html_format__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr html_format__Var_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr html_format__Var_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr html_format__Var_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr html_format__Var_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr html_format__Var_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr html_format__Var_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr html_format__Var_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr html_format__Var_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr html_format__Var_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr html_format__Var_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr html_format__Var_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr html_format__Var_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr html_format__Var_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr html_format__Var_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr html_format__Var_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr html_format__Var_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr html_format__Var_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr html_format__Var_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr html_format__Var_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr html_format__Var_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 24)));
    MR_Word html_format__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 25)));
    MR_Word html_format__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 26)));
    MR_Word html_format__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 27)));
    MR_Word html_format__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 28)));

    {
      html_format__FormatInfo_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), html_format__FormatInfo_6, 0) = ((MR_Box) ((html_format__Var_7 | ((((html_format__Var_14 << (MR_Integer) 1)) | ((html_format__Var_23 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), html_format__FormatInfo_6, 1) = ((MR_Box) (html_format__Var_10));
      MR_hl_field(MR_mktag(0), html_format__FormatInfo_6, 2) = ((MR_Box) (html_format__Var_47));
      MR_hl_field(MR_mktag(0), html_format__FormatInfo_6, 3) = ((MR_Box) (html_format__Var_48));
    }
    return html_format__FormatInfo_6;
  }
}

static MR_Word MR_CALL 
html_format__default_style_control_map_0_f_0(void)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__HeadVar__1_1;
    MR_Word html_format__TypeCtorInfo_227_227 = (MR_Word) &html_format__html_format__type_ctor_info_style_element_0;
    MR_Word html_format__TypeCtorInfo_228_228 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word html_format__Var_2;
    MR_Word html_format__Var_3;
    MR_Word html_format__Var_6;
    MR_Word html_format__Var_13;
    MR_Word html_format__Var_14;
    MR_Word html_format__Var_17;
    MR_Word html_format__Var_24;
    MR_Word html_format__Var_25;
    MR_Word html_format__Var_28;
    MR_Word html_format__Var_35;
    MR_Word html_format__Var_36;
    MR_Word html_format__Var_39;
    MR_Word html_format__Var_46;
    MR_Word html_format__Var_47;
    MR_Word html_format__Var_50;
    MR_Word html_format__Var_57;
    MR_Word html_format__Var_58;
    MR_Word html_format__Var_61;
    MR_Word html_format__Var_68;
    MR_Word html_format__Var_69;
    MR_Word html_format__Var_72;
    MR_Word html_format__Var_79;
    MR_Word html_format__Var_80;
    MR_Word html_format__Var_83;
    MR_Word html_format__Var_90;
    MR_Word html_format__Var_91;
    MR_Word html_format__Var_94;
    MR_Word html_format__Var_101;
    MR_Word html_format__Var_102;
    MR_Word html_format__Var_105;
    MR_Word html_format__Var_112;
    MR_Word html_format__Var_113;
    MR_Word html_format__Var_116;
    MR_Word html_format__Var_123;
    MR_Word html_format__Var_124;
    MR_Word html_format__Var_127;
    MR_Word html_format__Var_134;
    MR_Word html_format__Var_135;
    MR_Word html_format__Var_138;
    MR_Word html_format__Var_150;
    MR_Word html_format__Var_151;
    MR_Word html_format__Var_154;
    MR_Word html_format__Var_161;
    MR_Word html_format__Var_162;
    MR_Word html_format__Var_165;
    MR_Word html_format__Var_182;
    MR_Word html_format__Var_183;
    MR_Word html_format__Var_186;
    MR_Word html_format__Var_203;
    MR_Word html_format__Var_204;
    MR_Word html_format__Var_207;

    {
      html_format__Var_6 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4]));
    }
    {
      html_format__Var_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), html_format__Var_3, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.allocations"))));
      MR_hl_field(MR_mktag(0), html_format__Var_3, 1) = ((MR_Box) (html_format__Var_6));
    }
    {
      html_format__Var_17 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4]));
    }
    {
      html_format__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), html_format__Var_14, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.callseqs"))));
      MR_hl_field(MR_mktag(0), html_format__Var_14, 1) = ((MR_Box) (html_format__Var_17));
    }
    {
      html_format__Var_28 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4]));
    }
    {
      html_format__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), html_format__Var_25, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.clique"))));
      MR_hl_field(MR_mktag(0), html_format__Var_25, 1) = ((MR_Box) (html_format__Var_28));
    }
    {
      html_format__Var_39 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[6]));
    }
    {
      html_format__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), html_format__Var_36, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.field_name"))));
      MR_hl_field(MR_mktag(0), html_format__Var_36, 1) = ((MR_Box) (html_format__Var_39));
    }
    {
      html_format__Var_50 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4]));
    }
    {
      html_format__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), html_format__Var_47, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.memory"))));
      MR_hl_field(MR_mktag(0), html_format__Var_47, 1) = ((MR_Box) (html_format__Var_50));
    }
    {
      html_format__Var_61 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[6]));
    }
    {
      html_format__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), html_format__Var_58, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.module_name"))));
      MR_hl_field(MR_mktag(0), html_format__Var_58, 1) = ((MR_Box) (html_format__Var_61));
    }
    {
      html_format__Var_72 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4]));
    }
    {
      html_format__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), html_format__Var_69, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.number"))));
      MR_hl_field(MR_mktag(0), html_format__Var_69, 1) = ((MR_Box) (html_format__Var_72));
    }
    {
      html_format__Var_83 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4]));
    }
    {
      html_format__Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), html_format__Var_80, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.ordinal_rank"))));
      MR_hl_field(MR_mktag(0), html_format__Var_80, 1) = ((MR_Box) (html_format__Var_83));
    }
    {
      html_format__Var_94 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4]));
    }
    {
      html_format__Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), html_format__Var_91, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.port_counts"))));
      MR_hl_field(MR_mktag(0), html_format__Var_91, 1) = ((MR_Box) (html_format__Var_94));
    }
    {
      html_format__Var_105 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[6]));
    }
    {
      html_format__Var_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), html_format__Var_102, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.proc"))));
      MR_hl_field(MR_mktag(0), html_format__Var_102, 1) = ((MR_Box) (html_format__Var_105));
    }
    {
      html_format__Var_116 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[6]));
    }
    {
      html_format__Var_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), html_format__Var_113, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.source_context"))));
      MR_hl_field(MR_mktag(0), html_format__Var_113, 1) = ((MR_Box) (html_format__Var_116));
    }
    {
      html_format__Var_127 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4]));
    }
    {
      html_format__Var_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), html_format__Var_124, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.ticks_and_times"))));
      MR_hl_field(MR_mktag(0), html_format__Var_124, 1) = ((MR_Box) (html_format__Var_127));
    }
    {
      html_format__Var_138 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[10]));
    }
    {
      html_format__Var_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), html_format__Var_135, 0) = ((MR_Box) (((MR_Box) ((MR_String) "a.control"))));
      MR_hl_field(MR_mktag(0), html_format__Var_135, 1) = ((MR_Box) (html_format__Var_138));
    }
    {
      html_format__Var_154 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[12]));
    }
    {
      html_format__Var_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), html_format__Var_151, 0) = ((MR_Box) (((MR_Box) ((MR_String) "table.plain"))));
      MR_hl_field(MR_mktag(0), html_format__Var_151, 1) = ((MR_Box) (html_format__Var_154));
    }
    {
      html_format__Var_165 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[18]));
    }
    {
      html_format__Var_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), html_format__Var_162, 0) = ((MR_Box) (((MR_Box) ((MR_String) "table.boxed"))));
      MR_hl_field(MR_mktag(0), html_format__Var_162, 1) = ((MR_Box) (html_format__Var_165));
    }
    {
      html_format__Var_186 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[23]));
    }
    {
      html_format__Var_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), html_format__Var_183, 0) = ((MR_Box) (((MR_Box) ((MR_String) "table.boxed th"))));
      MR_hl_field(MR_mktag(0), html_format__Var_183, 1) = ((MR_Box) (html_format__Var_186));
    }
    {
      html_format__Var_207 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[23]));
    }
    {
      html_format__Var_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), html_format__Var_204, 0) = ((MR_Box) (((MR_Box) ((MR_String) "table.boxed td"))));
      MR_hl_field(MR_mktag(0), html_format__Var_204, 1) = ((MR_Box) (html_format__Var_207));
    }
    {
      html_format__Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), html_format__Var_203, 0) = ((MR_Box) (html_format__Var_204));
      MR_hl_field(MR_mktag(1), html_format__Var_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      html_format__Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), html_format__Var_182, 0) = ((MR_Box) (html_format__Var_183));
      MR_hl_field(MR_mktag(1), html_format__Var_182, 1) = ((MR_Box) (html_format__Var_203));
    }
    {
      html_format__Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), html_format__Var_161, 0) = ((MR_Box) (html_format__Var_162));
      MR_hl_field(MR_mktag(1), html_format__Var_161, 1) = ((MR_Box) (html_format__Var_182));
    }
    {
      html_format__Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), html_format__Var_150, 0) = ((MR_Box) (html_format__Var_151));
      MR_hl_field(MR_mktag(1), html_format__Var_150, 1) = ((MR_Box) (html_format__Var_161));
    }
    {
      html_format__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), html_format__Var_134, 0) = ((MR_Box) (html_format__Var_135));
      MR_hl_field(MR_mktag(1), html_format__Var_134, 1) = ((MR_Box) (html_format__Var_150));
    }
    {
      html_format__Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), html_format__Var_123, 0) = ((MR_Box) (html_format__Var_124));
      MR_hl_field(MR_mktag(1), html_format__Var_123, 1) = ((MR_Box) (html_format__Var_134));
    }
    {
      html_format__Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), html_format__Var_112, 0) = ((MR_Box) (html_format__Var_113));
      MR_hl_field(MR_mktag(1), html_format__Var_112, 1) = ((MR_Box) (html_format__Var_123));
    }
    {
      html_format__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), html_format__Var_101, 0) = ((MR_Box) (html_format__Var_102));
      MR_hl_field(MR_mktag(1), html_format__Var_101, 1) = ((MR_Box) (html_format__Var_112));
    }
    {
      html_format__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), html_format__Var_90, 0) = ((MR_Box) (html_format__Var_91));
      MR_hl_field(MR_mktag(1), html_format__Var_90, 1) = ((MR_Box) (html_format__Var_101));
    }
    {
      html_format__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), html_format__Var_79, 0) = ((MR_Box) (html_format__Var_80));
      MR_hl_field(MR_mktag(1), html_format__Var_79, 1) = ((MR_Box) (html_format__Var_90));
    }
    {
      html_format__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), html_format__Var_68, 0) = ((MR_Box) (html_format__Var_69));
      MR_hl_field(MR_mktag(1), html_format__Var_68, 1) = ((MR_Box) (html_format__Var_79));
    }
    {
      html_format__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), html_format__Var_57, 0) = ((MR_Box) (html_format__Var_58));
      MR_hl_field(MR_mktag(1), html_format__Var_57, 1) = ((MR_Box) (html_format__Var_68));
    }
    {
      html_format__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), html_format__Var_46, 0) = ((MR_Box) (html_format__Var_47));
      MR_hl_field(MR_mktag(1), html_format__Var_46, 1) = ((MR_Box) (html_format__Var_57));
    }
    {
      html_format__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), html_format__Var_35, 0) = ((MR_Box) (html_format__Var_36));
      MR_hl_field(MR_mktag(1), html_format__Var_35, 1) = ((MR_Box) (html_format__Var_46));
    }
    {
      html_format__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), html_format__Var_24, 0) = ((MR_Box) (html_format__Var_25));
      MR_hl_field(MR_mktag(1), html_format__Var_24, 1) = ((MR_Box) (html_format__Var_35));
    }
    {
      html_format__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), html_format__Var_13, 0) = ((MR_Box) (html_format__Var_14));
      MR_hl_field(MR_mktag(1), html_format__Var_13, 1) = ((MR_Box) (html_format__Var_24));
    }
    {
      html_format__Var_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), html_format__Var_2, 0) = ((MR_Box) (html_format__Var_3));
      MR_hl_field(MR_mktag(1), html_format__Var_2, 1) = ((MR_Box) (html_format__Var_13));
    }
    {
      html_format__HeadVar__1_1 = mercury__map__from_assoc_list_1_f_0((MR_Word) &html_format__html_format__type_ctor_info_style_control_0, (MR_Word) &html_format_scalar_common_1[0], html_format__Var_2);
    }
    return html_format__HeadVar__1_1;
  }
}

static MR_Box MR_CALL 
html_format__css_style_html_1_f_0_1(
  MR_Box html_format__closure_arg,
  MR_Box html_format__wrapper_arg_1)
{
  {
    MR_Box html_format__wrapper_arg_2;
    MR_Box html_format__closure = html_format__closure_arg;
    MR_Word html_format__conv0_HTML_5;

    {
      html_format__conv0_HTML_5 = html_format__style_control_to_html_1_f_0(((MR_Word) html_format__wrapper_arg_1));
    }
    html_format__wrapper_arg_2 = ((MR_Box) (html_format__conv0_HTML_5));
    return html_format__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
html_format__css_style_html_1_f_0(
  MR_Word html_format__StyleControlMap_3)
{
  {
    MR_bool html_format__succeeded;
    MR_Word html_format__HTML_4;
    MR_Word html_format__TypeCtorInfo_11_25;
    MR_Word html_format__StyleControls_5;
    MR_Word html_format__ControlHTMLs_6;
    MR_Word html_format__ControlsHTML_7;
    MR_Word html_format__Var_22;
    MR_Word html_format__Var_23;
    MR_Word html_format__Var_24;

    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &html_format__html_format__type_ctor_info_style_control_0, (MR_Word) &html_format_scalar_common_1[0], html_format__StyleControlMap_3, &html_format__StyleControls_5);
    }
    {
      html_format__ControlHTMLs_6 = mercury__list__map_2_f_0((MR_Word) &html_format_scalar_common_1[1], (MR_Word) &html_format_scalar_common_2[0], (MR_Word) &html_format_scalar_common_1[5], html_format__StyleControls_5);
    }
    {
      html_format__ControlsHTML_7 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, html_format__ControlHTMLs_6);
    }
    html_format__TypeCtorInfo_11_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      html_format__Var_22 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "<style type=\"text/css\">\n")));
    }
    {
      html_format__Var_24 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "</style>\n")));
    }
    {
      html_format__Var_23 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_25, html_format__ControlsHTML_7, html_format__Var_24);
    }
    {
      html_format__HTML_4 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_25, html_format__Var_22, html_format__Var_23);
    }
    return html_format__HTML_4;
  }
}

void mercury__html_format__init(void)
{
}

void mercury__html_format__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&html_format__html_format__type_ctor_info_column_class_map_0);
	MR_register_type_ctor_info(&html_format__html_format__type_ctor_info_format_info_0);
	MR_register_type_ctor_info(&html_format__html_format__type_ctor_info_html_0);
	MR_register_type_ctor_info(&html_format__html_format__type_ctor_info_style_control_0);
	MR_register_type_ctor_info(&html_format__html_format__type_ctor_info_style_control_map_0);
	MR_register_type_ctor_info(&html_format__html_format__type_ctor_info_style_element_0);
	MR_register_type_ctor_info(&html_format__html_format__type_ctor_info_style_element_map_0);
	MR_register_type_ctor_info(&html_format__html_format__type_ctor_info_table_header_rows_0);
}

void mercury__html_format__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__html_format__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module html_format. */
