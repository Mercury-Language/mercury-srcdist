/*
** Automatically generated from `html_format.m'
** by the Mercury compiler,
** version rotd-2019-08-28
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


// :- module html_format.
// :- implementation.

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
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.program_representation.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
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

static void MR_CALL 
html_format____Compare____table_header_rows_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
html_format____Unify____table_header_rows_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
html_format____Compare____style_element_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
html_format____Unify____style_element_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
html_format____Compare____style_element_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
html_format____Unify____style_element_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
html_format____Compare____style_control_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
html_format____Unify____style_control_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
html_format____Compare____style_control_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
html_format____Unify____style_control_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
html_format____Compare____html_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
html_format____Unify____html_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
html_format____Compare____format_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
html_format____Unify____format_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
html_format____Compare____column_class_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
html_format____Unify____column_class_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
html_format__special_html_char_or_break_2_p_0(
  MR_Char HeadVar__1_1,
  MR_String * HeadVar__2_2);

static MR_bool MR_CALL 
html_format__special_html_char_2_p_0(
  MR_Char HeadVar__1_1,
  MR_String * HeadVar__2_2);

static void MR_CALL 
html_format__replace_special_char_2_4_p_0(
  MR_Word SpecialCharTable_5,
  MR_Char Char_6,
  MR_Word STATE_VARIABLE_Acc_0_10,
  MR_Word * STATE_VARIABLE_Acc_11);

static void MR_CALL 
html_format__insert_column_into_classmap_4_p_0(
  MR_String Value_5,
  MR_Integer Key_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9);

static void MR_CALL 
html_format__table_header_num_rows_and_classmap_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
html_format__table_header_num_rows_and_classmap_14_p_0(
  MR_Word FormatInfo_15,
  MR_Word HeaderGroup_16,
  MR_Word STATE_VARIABLE_NumRows_0_32,
  MR_Word * STATE_VARIABLE_NumRows_33,
  MR_Integer STATE_VARIABLE_ColumnNumber_0_34,
  MR_Integer * STATE_VARIABLE_ColumnNumber_35,
  MR_Word STATE_VARIABLE_ClassMap_0_36,
  MR_Word * STATE_VARIABLE_ClassMap_37,
  MR_Integer STATE_VARIABLE_HeaderGroupNumber_0_38,
  MR_Integer * STATE_VARIABLE_HeaderGroupNumber_39,
  MR_Word STATE_VARIABLE_ColouredClassStrs_0_40,
  MR_Word * STATE_VARIABLE_ColouredClassStrs_41,
  MR_Word STATE_VARIABLE_StyleControlMap_0_42,
  MR_Word * STATE_VARIABLE_StyleControlMap_43);

static void MR_CALL 
html_format__update_style_control_map_7_p_0(
  MR_String ColumnClassStr_8,
  MR_Integer STATE_VARIABLE_HeaderGroupNumber_0_17,
  MR_Integer * STATE_VARIABLE_HeaderGroupNumber_18,
  MR_Word STATE_VARIABLE_ColouredClassStrs_0_19,
  MR_Word * STATE_VARIABLE_ColouredClassStrs_20,
  MR_Word STATE_VARIABLE_StyleControlMap_0_21,
  MR_Word * STATE_VARIABLE_StyleControlMap_22);

static MR_Word MR_CALL 
html_format__style_element_to_html_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
html_format__style_control_to_html_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
html_format__style_control_to_html_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
html_format__escape_break_html_string_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
html_format__escape_break_html_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
html_format__escape_html_attr_string_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
html_format__escape_html_attr_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
html_format__escape_html_string_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
html_format__escape_html_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_p_0(
  MR_String Var_15,
  MR_String Var_16,
  MR_Word Var_17,
  MR_Word STATE_VARIABLE_StyleControlMap_0_10,
  MR_Word * STATE_VARIABLE_StyleControlMap_11,
  MR_Word List_8,
  MR_Word * HTML_9);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_p_0(
  MR_String Var_34,
  MR_String Var_35,
  MR_Word Var_36,
  MR_Word Separator_1,
  MR_Word STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * STATE_VARIABLE_StyleControlMap_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_HTML_0_6,
  MR_Word * STATE_VARIABLE_HTML_7);

static void MR_CALL 
html_format__item_to_html_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
html_format__item_to_html_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
html_format__item_to_html_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
html_format__item_to_html_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
html_format__item_to_html_7_p_0(
  MR_String StartTag_8,
  MR_String EndTag_9,
  MR_Word FormatInfo_10,
  MR_Word STATE_VARIABLE_StyleControlMap_0_27,
  MR_Word * STATE_VARIABLE_StyleControlMap_28,
  MR_Word Item_12,
  MR_Word * HTML_13);

static void MR_CALL 
html_format__list_to_html_7_p_0(
  MR_Word FormatInfo_8,
  MR_Word STATE_VARIABLE_StyleControlMap_0_26,
  MR_Word * STATE_VARIABLE_StyleControlMap_27,
  MR_Word Class_10,
  MR_Word MaybeTitle_11,
  MR_Word Items_12,
  MR_Word * HTML_13);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Word MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0(
  MR_Word PseudoLink_5);

static void MR_CALL 
html_format__table_to_html_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11,
  MR_Box wrapper_arg_12,
  MR_Box * wrapper_arg_13);

static void MR_CALL 
html_format__table_to_html_5_p_0(
  MR_Word FormatInfo_6,
  MR_Word STATE_VARIABLE_StyleControlMap_0_34,
  MR_Word * STATE_VARIABLE_StyleControlMap_35,
  MR_Word Table_8,
  MR_Word * HTML_9);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_p_0(
  MR_Word Var_15,
  MR_Word Var_16,
  MR_Word STATE_VARIABLE_StyleControlMap_0_10,
  MR_Word * STATE_VARIABLE_StyleControlMap_11,
  MR_Word List_8,
  MR_Word * HTML_9);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_p_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Separator_1,
  MR_Word STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * STATE_VARIABLE_StyleControlMap_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_HTML_0_6,
  MR_Word * STATE_VARIABLE_HTML_7);

static void MR_CALL 
html_format__table_header_group_to_html_row_1_6_p_0(
  MR_Word FormatInfo_7,
  MR_Word HeaderNumRows_8,
  MR_Word STATE_VARIABLE_StyleControlMap_0_25,
  MR_Word * STATE_VARIABLE_StyleControlMap_26,
  MR_Word HeaderGroup_10,
  MR_Word * HTML_11);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_p_0(
  MR_Word Var_15,
  MR_Word STATE_VARIABLE_StyleControlMap_0_10,
  MR_Word * STATE_VARIABLE_StyleControlMap_11,
  MR_Word List_8,
  MR_Word * HTML_9);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_p_0(
  MR_Word Var_34,
  MR_Word Separator_1,
  MR_Word STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * STATE_VARIABLE_StyleControlMap_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_HTML_0_6,
  MR_Word * STATE_VARIABLE_HTML_7);

static void MR_CALL 
html_format__table_header_group_to_html_row_2_5_p_0(
  MR_Word FormatInfo_6,
  MR_Word STATE_VARIABLE_StyleControlMap_0_16,
  MR_Word * STATE_VARIABLE_StyleControlMap_17,
  MR_Word HeaderGroup_8,
  MR_Word * HTML_9);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_p_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Separator_1,
  MR_Word STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * STATE_VARIABLE_StyleControlMap_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_HTML_0_6,
  MR_Word * STATE_VARIABLE_HTML_7);

static void MR_CALL 
html_format__table_data_to_th_html_6_p_0(
  MR_Word FormatInfo_7,
  MR_Word ColumnClass_8,
  MR_Word STATE_VARIABLE_StyleControlMap_0_16,
  MR_Word * STATE_VARIABLE_StyleControlMap_17,
  MR_Word TableData_10,
  MR_Word * HTML_11);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_p_0(
  MR_Word Var_15,
  MR_Word Var_16,
  MR_Integer Var_17,
  MR_Word STATE_VARIABLE_StyleControlMap_0_10,
  MR_Word * STATE_VARIABLE_StyleControlMap_11,
  MR_Word List_8,
  MR_Word * HTML_9);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_p_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Integer Var_36,
  MR_Word Separator_1,
  MR_Word STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * STATE_VARIABLE_StyleControlMap_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_HTML_0_6,
  MR_Word * STATE_VARIABLE_HTML_7);

static void MR_CALL 
html_format__table_row_to_html_7_p_0(
  MR_Word FormatInfo_8,
  MR_Word MaybeColClassMap_9,
  MR_Integer NumColumns_10,
  MR_Word STATE_VARIABLE_StyleControlMap_0_23,
  MR_Word * STATE_VARIABLE_StyleControlMap_24,
  MR_Word TableRow_12,
  MR_Word * HTML_13);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(
  MR_Word Var_18,
  MR_Word Var_19,
  MR_Word STATE_VARIABLE_StyleControlMap_0_12,
  MR_Word * STATE_VARIABLE_StyleControlMap_13,
  MR_Integer STATE_VARIABLE_ColumnNum_0_14,
  MR_Word List_10,
  MR_Word * HTML_11);

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_p_0(
  MR_Word Var_39,
  MR_Word Var_40,
  MR_Word Separator_1,
  MR_Word STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * STATE_VARIABLE_StyleControlMap_4,
  MR_Integer STATE_VARIABLE_ColumnNum_0_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_HTML_0_7,
  MR_Word * STATE_VARIABLE_HTML_8);

static void MR_CALL 
html_format__table_cell_to_html_8_p_0(
  MR_Word FormatInfo_9,
  MR_Word MaybeClassMap_10,
  MR_Word STATE_VARIABLE_StyleControlMap_0_27,
  MR_Word * STATE_VARIABLE_StyleControlMap_28,
  MR_Integer STATE_VARIABLE_ColumnNum_0_29,
  MR_Integer * STATE_VARIABLE_ColumnNum_30,
  MR_Word Cell_13,
  MR_Word * HTML_14);

static MR_String MR_CALL 
html_format__table_column_class_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
html_format__default_table_column_class_0_f_0(void);

static MR_bool MR_CALL 
html_format__table_data_class_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
html_format__table_data_to_html_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
html_format__table_data_to_html_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Word MR_CALL 
html_format__table_data_to_html_2_f_0(
  MR_Word FormatInfo_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
html_format__link_to_html_2_f_0(
  MR_Word FormatInfo_4,
  MR_Word Link_5);

static void MR_CALL 
html_format__escape_break_html_attr_string_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
html_format__escape_break_html_attr_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_String MR_CALL 
html_format__handle_html_attrs_2_f_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2);

static MR_Word MR_CALL 
html_format__str_to_html_1_f_0(
  MR_String Str_3);

static MR_Word MR_CALL 
html_format__empty_html_0_f_0(void);

static MR_String MR_CALL 
html_format__table_class_to_string_2_f_0(
  MR_Word FormatInfo_4,
  MR_Word Class_5);

static MR_Word MR_CALL 
html_format__wrap_tags_3_f_0(
  MR_String StartTag_5,
  MR_String EndTag_6,
  MR_Word InnerHTML_7);

static MR_Word MR_CALL 
html_format__init_format_info_2_f_0(
  MR_Word Deep_4,
  MR_Word Prefs_5);

static MR_Word MR_CALL 
html_format__default_style_control_map_0_f_0(void);

static MR_Box MR_CALL 
html_format__css_style_html_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
html_format__css_style_html_1_f_0(
  MR_Word StyleControlMap_3);

static MR_bool MR_CALL 
html_format____Unify____column_class_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
html_format____Compare____column_class_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
html_format____Unify____format_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
html_format____Compare____format_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
html_format____Unify____html_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
html_format____Compare____html_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
html_format____Unify____style_control_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
html_format____Compare____style_control_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
html_format____Unify____style_control_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
html_format____Compare____style_control_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
html_format____Unify____style_element_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
html_format____Compare____style_element_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
html_format____Unify____style_element_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
html_format____Compare____style_element_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
html_format____Unify____table_header_rows_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
html_format____Compare____table_header_rows_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&html_format_scalar_common_3[1])),
    ((MR_Box) (html_format__escape_break_html_attr_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&html_format_scalar_common_3[1])),
    ((MR_Box) (html_format__table_data_to_html_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&html_format_scalar_common_3[1])),
    ((MR_Box) (html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&html_format_scalar_common_3[1])),
    ((MR_Box) (html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&html_format_scalar_common_3[1])),
    ((MR_Box) (html_format__escape_html_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&html_format_scalar_common_3[1])),
    ((MR_Box) (html_format__escape_html_attr_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&html_format_scalar_common_3[1])),
    ((MR_Box) (html_format__escape_break_html_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&html_format_scalar_common_3[2])),
    ((MR_Box) (html_format__style_control_to_html_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
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
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "text-align")))),
    ((MR_Box) ((MR_String) "left"))
  },
  /* row 6 */
  {
    ((MR_Box) (&html_format_scalar_common_2[5])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "text-decoration")))),
    ((MR_Box) ((MR_String) "none"))
  },
  /* row 8 */
  {
    ((MR_Box) (&html_format_scalar_common_2[7])),
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "border-style")))),
    ((MR_Box) ((MR_String) "outset outset outset outset"))
  },
  /* row 14 */
  {
    ((MR_Box) (&html_format_scalar_common_2[13])),
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&html_format__pair__pti_pair_2__plain_html_format__type_ctor_info_style_control_0__plain_tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&html_format__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&html_format__pair__pti_pair_2__plain_html_format__type_ctor_info_style_element_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&html_format__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box html_format_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&html_format____vpti_pred_2__plain_builtin__type_ctor_info_character_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&html_format__list__pti_list_1__plain_builtin__type_ctor_info_character_0)),
    ((MR_Box) (&html_format__list__pti_list_1__plain_builtin__type_ctor_info_character_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
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
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[6]))
  },
  /* row 1 */
  {
    ((MR_Box) (&html_format_scalar_common_4[0])),
    ((MR_Box) (html_format__table_data_to_html_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[7]))
  },
  /* row 2 */
  {
    ((MR_Box) (&html_format_scalar_common_4[0])),
    ((MR_Box) (html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[8]))
  },
  /* row 3 */
  {
    ((MR_Box) (&html_format_scalar_common_4[0])),
    ((MR_Box) (html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[9]))
  },
  /* row 4 */
  {
    ((MR_Box) (&html_format_scalar_common_4[0])),
    ((MR_Box) (html_format__escape_html_string_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[10]))
  },
  /* row 5 */
  {
    ((MR_Box) (&html_format_scalar_common_4[0])),
    ((MR_Box) (html_format__escape_html_attr_string_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[11]))
  },
  /* row 6 */
  {
    ((MR_Box) (&html_format_scalar_common_4[0])),
    ((MR_Box) (html_format__escape_break_html_string_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[12]))
  },
};

static /* final */ const MR_Box html_format_scalar_common_7[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box html_format_scalar_common_8[1][17] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 14)),
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


#include "array.mh"
#include "profile.mh"



static const MR_FA_TypeInfo_Struct2 html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&html_format__html_format__type_ctor_info_style_element_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 html_format__pair__pti_pair_2__plain_html_format__type_ctor_info_style_control_0__plain_tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&html_format__html_format__type_ctor_info_style_control_0),
    (MR_PseudoTypeInfo) (&html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 html_format__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 html_format____vpti_pred_2__plain_builtin__type_ctor_info_character_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 html_format__list__pti_list_1__plain_builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 html_format__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 html_format__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 html_format__tree234__pti_tree234_2__plain_html_format__type_ctor_info_style_control_0__plain_tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&html_format__html_format__type_ctor_info_style_control_0),
    (MR_PseudoTypeInfo) (&html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 html_format__pair__pti_pair_2__plain_html_format__type_ctor_info_style_element_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&html_format__html_format__type_ctor_info_style_element_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 html_format__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_column_class_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (html_format____Unify____column_class_map_0_0_10001)),
  ((MR_Box) (html_format____Compare____column_class_map_0_0_10001)),
  (MR_String) "html_format",
  (MR_String) "column_class_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&html_format__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo html_format__html_format__field_types_format_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_colour_column_groups_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_box_tables_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_developer_mode_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
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
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  html_format__html_format__field_types_format_info_0_0,
  html_format__html_format__field_names_format_info_0_0,
  html_format__html_format__field_locns_format_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr html_format__html_format__du_stag_ordered_format_info_0_0[1] = {
  &html_format__html_format__du_functor_desc_format_info_0_0
};

static const MR_DuPtagLayout html_format__html_format__du_ptag_ordered_format_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    html_format__html_format__du_stag_ordered_format_info_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (html_format____Unify____format_info_0_0_10001)),
  ((MR_Box) (html_format____Compare____format_info_0_0_10001)),
  (MR_String) "html_format",
  (MR_String) "format_info",
  {     html_format__html_format__du_name_ordered_format_info_0 },
  {     html_format__html_format__du_ptag_ordered_format_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  html_format__html_format__functor_number_map_format_info_0
};

static const MR_FA_TypeInfo_Struct1 html_format__cord__ti_cord_1builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_html_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (html_format____Unify____html_0_0_10001)),
  ((MR_Box) (html_format____Compare____html_0_0_10001)),
  (MR_String) "html_format",
  (MR_String) "html",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&html_format__cord__ti_cord_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_Integer html_format__html_format__functor_number_map_style_control_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc html_format__html_format__notag_functor_desc_style_control_0 = {
  (MR_String) "style_control",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_style_control_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (html_format____Unify____style_control_0_0_10001)),
  ((MR_Box) (html_format____Compare____style_control_0_0_10001)),
  (MR_String) "html_format",
  (MR_String) "style_control",
  {     &html_format__html_format__notag_functor_desc_style_control_0 },
  {     &html_format__html_format__notag_functor_desc_style_control_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  html_format__html_format__functor_number_map_style_control_0
};

static const MR_FA_TypeInfo_Struct2 html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_control_0tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&html_format__html_format__type_ctor_info_style_control_0),
    (MR_TypeInfo) (&html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_style_control_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (html_format____Unify____style_control_map_0_0_10001)),
  ((MR_Box) (html_format____Compare____style_control_map_0_0_10001)),
  (MR_String) "html_format",
  (MR_String) "style_control_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_control_0tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_Integer html_format__html_format__functor_number_map_style_element_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc html_format__html_format__notag_functor_desc_style_element_0 = {
  (MR_String) "style_element",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_style_element_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (html_format____Unify____style_element_0_0_10001)),
  ((MR_Box) (html_format____Compare____style_element_0_0_10001)),
  (MR_String) "html_format",
  (MR_String) "style_element",
  {     &html_format__html_format__notag_functor_desc_style_element_0 },
  {     &html_format__html_format__notag_functor_desc_style_element_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  html_format__html_format__functor_number_map_style_element_0
};

const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_style_element_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (html_format____Unify____style_element_map_0_0_10001)),
  ((MR_Box) (html_format____Compare____style_element_map_0_0_10001)),
  (MR_String) "html_format",
  (MR_String) "style_element_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc html_format__html_format__enum_functor_desc_table_header_rows_0_0 = {
  (MR_String) "one_header_row",
  INT32_C(0)
};

static const MR_EnumFunctorDesc html_format__html_format__enum_functor_desc_table_header_rows_0_1 = {
  (MR_String) "two_header_rows",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (html_format____Unify____table_header_rows_0_0_10001)),
  ((MR_Box) (html_format____Compare____table_header_rows_0_0_10001)),
  (MR_String) "html_format",
  (MR_String) "table_header_rows",
  {     html_format__html_format__enum_name_ordered_table_header_rows_0 },
  {     html_format__html_format__enum_value_ordered_table_header_rows_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  html_format__html_format__functor_number_map_table_header_rows_0
};

static void MR_CALL 
html_format____Compare____table_header_rows_0_0(
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

static MR_bool MR_CALL 
html_format____Unify____table_header_rows_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
html_format____Compare____style_element_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&html_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
html_format____Unify____style_element_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&html_format_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
html_format____Compare____style_element_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
      MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

static MR_bool MR_CALL 
html_format____Unify____style_element_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
      MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
    return succeeded;
  }
}

static void MR_CALL 
html_format____Compare____style_control_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&html_format_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
html_format____Unify____style_control_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&html_format_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
html_format____Compare____style_control_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
      MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

static MR_bool MR_CALL 
html_format____Unify____style_control_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
      MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
    return succeeded;
  }
}

static void MR_CALL 
html_format____Compare____html_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&html_format_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
html_format____Unify____html_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&html_format_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
html_format____Compare____format_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_String ArgX4_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY4_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_String ArgX5_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgY5_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_String ArgX6_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_String ArgY6_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;
      MR_Integer Var_29 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_30 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_29 < Var_30);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_29 > Var_30);
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
        MR_Integer Var_31 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_32 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_31 < Var_32);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_31 > Var_32);
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
          MR_Integer Var_33 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_34 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_33 < Var_34);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_33 > Var_34);
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

            mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX6_19, ArgY6_20);
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
html_format____Unify____format_info_0_0(
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
    {
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_String ArgX4_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY4_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgX5_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_String ArgY5_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgX6_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_String ArgY6_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (strcmp(ArgX4_9, ArgY4_10) == 0);
            if (succeeded)
            {
              succeeded = (strcmp(ArgX5_11, ArgY5_12) == 0);
              if (succeeded)
                succeeded = (strcmp(ArgX6_13, ArgY6_14) == 0);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
html_format____Compare____column_class_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&html_format_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
html_format____Unify____column_class_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&html_format_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
html_format__special_html_char_or_break_2_p_0(
  MR_Char HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    switch (HeadVar__1_1) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Char) 34:
        {
          *HeadVar__2_2 = (MR_String) "&quot;";
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 38:
        {
          *HeadVar__2_2 = (MR_String) "&amp;";
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          *HeadVar__2_2 = (MR_String) "&apos;";
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 46:
        {
          *HeadVar__2_2 = (MR_String) ".<wbr />";
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 47:
        {
          *HeadVar__2_2 = (MR_String) "/<wbr />";
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 58:
        {
          *HeadVar__2_2 = (MR_String) ":<wbr />";
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 60:
        {
          *HeadVar__2_2 = (MR_String) "&lt;";
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 62:
        {
          *HeadVar__2_2 = (MR_String) "&gt;";
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 95:
        {
          *HeadVar__2_2 = (MR_String) "_<wbr />";
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
html_format__special_html_char_2_p_0(
  MR_Char HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    switch (HeadVar__1_1) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Char) 34:
        {
          *HeadVar__2_2 = (MR_String) "&quot;";
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 38:
        {
          *HeadVar__2_2 = (MR_String) "&amp;";
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          *HeadVar__2_2 = (MR_String) "&apos;";
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 60:
        {
          *HeadVar__2_2 = (MR_String) "&lt;";
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 62:
        {
          *HeadVar__2_2 = (MR_String) "&gt;";
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
html_format__replace_special_char_2_4_p_0(
  MR_Word SpecialCharTable_5,
  MR_Char Char_6,
  MR_Word STATE_VARIABLE_Acc_0_10,
  MR_Word * STATE_VARIABLE_Acc_11)
{
  {
    MR_bool succeeded;
    MR_String String_8;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), SpecialCharTable_5, (MR_Integer) 1))));
    MR_Box conv1_String_8;

    succeeded = func_0(((MR_Box) (SpecialCharTable_5)), ((MR_Box) (MR_Word) (Char_6)), &conv1_String_8);
    if (succeeded)
    {
      String_8 = ((MR_String) (conv1_String_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Chars_9;

      mercury__string__to_char_list_2_p_0(String_8, &Chars_9);
      mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Chars_9, STATE_VARIABLE_Acc_0_10, STATE_VARIABLE_Acc_11);
    }
    else
    {
      mercury__list__cons_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) (Char_6)), STATE_VARIABLE_Acc_0_10, STATE_VARIABLE_Acc_11);
    }
  }
}

static void MR_CALL 
html_format__insert_column_into_classmap_4_p_0(
  MR_String Value_5,
  MR_Integer Key_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  {
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Key_6, ((MR_Box) (Value_5)), STATE_VARIABLE_Map_0_8, STATE_VARIABLE_Map_9);
  }
}

static void MR_CALL 
html_format__table_header_num_rows_and_classmap_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Map_9;

    html_format__insert_column_into_classmap_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Map_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Map_9));
  }
}

static void MR_CALL 
html_format__table_header_num_rows_and_classmap_14_p_0(
  MR_Word FormatInfo_15,
  MR_Word HeaderGroup_16,
  MR_Word STATE_VARIABLE_NumRows_0_32,
  MR_Word * STATE_VARIABLE_NumRows_33,
  MR_Integer STATE_VARIABLE_ColumnNumber_0_34,
  MR_Integer * STATE_VARIABLE_ColumnNumber_35,
  MR_Word STATE_VARIABLE_ClassMap_0_36,
  MR_Word * STATE_VARIABLE_ClassMap_37,
  MR_Integer STATE_VARIABLE_HeaderGroupNumber_0_38,
  MR_Integer * STATE_VARIABLE_HeaderGroupNumber_39,
  MR_Word STATE_VARIABLE_ColouredClassStrs_0_40,
  MR_Word * STATE_VARIABLE_ColouredClassStrs_41,
  MR_Word STATE_VARIABLE_StyleControlMap_0_42,
  MR_Word * STATE_VARIABLE_StyleControlMap_43)
{
  {
    MR_Word ColumnTitles_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeaderGroup_16, (MR_Integer) 0))));
    MR_Word ColumnClass_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeaderGroup_16, (MR_Integer) 1))) >> 2)) & (MR_Integer) 15);
    MR_Word MaybeColour_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeaderGroup_16, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_String ColumnClassStr_26 = ((&html_format_vector_common_6[39 + ColumnClass_24]))->html_format__vector_common_type_6_0__vct_6_f_0;
    MR_Integer NumSubCols_28;

    if (((MR_tag((MR_Word) ColumnTitles_23)) == (MR_Integer) 1))
    {
      MR_Word SubTitles_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ColumnTitles_23, (MR_Integer) 1))));
      MR_Word Var_45;
      MR_Integer Var_46;
      MR_Integer Var_48;
      MR_Box conv1_STATE_VARIABLE_ClassMap_37;

      mercury__list__length_2_p_0((MR_Word) (&display__display__type_ctor_info_table_data_0), SubTitles_30, &NumSubCols_28);
      *STATE_VARIABLE_NumRows_33 = (MR_Integer) 1;
      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&html_format_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (html_format__table_header_num_rows_and_classmap_14_p_0_1));
        MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (ColumnClassStr_26));
      }
      Var_48 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ColumnNumber_0_34 + (MR_Unsigned) NumSubCols_28);
      Var_46 = (MR_Integer) ((MR_Unsigned) Var_48 - (MR_Unsigned) 1);
      mercury__int__fold_up_5_p_0((MR_Word) (&html_format_scalar_common_1[3]), Var_45, STATE_VARIABLE_ColumnNumber_0_34, Var_46, ((MR_Box) (STATE_VARIABLE_ClassMap_0_36)), &conv1_STATE_VARIABLE_ClassMap_37);
      *STATE_VARIABLE_ClassMap_37 = ((MR_Word) (conv1_STATE_VARIABLE_ClassMap_37));
    }
    else
    {
      NumSubCols_28 = (MR_Integer) 1;
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_ColumnNumber_0_34, ((MR_Box) (ColumnClassStr_26)), STATE_VARIABLE_ClassMap_0_36, STATE_VARIABLE_ClassMap_37);
      *STATE_VARIABLE_NumRows_33 = STATE_VARIABLE_NumRows_0_32;
    }
    *STATE_VARIABLE_ColumnNumber_35 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ColumnNumber_0_34 + (MR_Unsigned) NumSubCols_28);
    switch (MaybeColour_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        html_format__update_style_control_map_7_p_0(ColumnClassStr_26, STATE_VARIABLE_HeaderGroupNumber_0_38, STATE_VARIABLE_HeaderGroupNumber_39, STATE_VARIABLE_ColouredClassStrs_0_40, STATE_VARIABLE_ColouredClassStrs_41, STATE_VARIABLE_StyleControlMap_0_42, STATE_VARIABLE_StyleControlMap_43);
        break;
      case (MR_Integer) 2:
        {
          MR_Word Colour_67 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FormatInfo_15, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

          switch (Colour_67) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              html_format__update_style_control_map_7_p_0(ColumnClassStr_26, STATE_VARIABLE_HeaderGroupNumber_0_38, STATE_VARIABLE_HeaderGroupNumber_39, STATE_VARIABLE_ColouredClassStrs_0_40, STATE_VARIABLE_ColouredClassStrs_41, STATE_VARIABLE_StyleControlMap_0_42, STATE_VARIABLE_StyleControlMap_43);
              break;
            case (MR_Integer) 1:
              {
                *STATE_VARIABLE_HeaderGroupNumber_39 = STATE_VARIABLE_HeaderGroupNumber_0_38;
                *STATE_VARIABLE_ColouredClassStrs_41 = STATE_VARIABLE_ColouredClassStrs_0_40;
                *STATE_VARIABLE_StyleControlMap_43 = STATE_VARIABLE_StyleControlMap_0_42;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_HeaderGroupNumber_39 = STATE_VARIABLE_HeaderGroupNumber_0_38;
          *STATE_VARIABLE_ColouredClassStrs_41 = STATE_VARIABLE_ColouredClassStrs_0_40;
          *STATE_VARIABLE_StyleControlMap_43 = STATE_VARIABLE_StyleControlMap_0_42;
        }
        break;
    }
  }
}

static void MR_CALL 
html_format__update_style_control_map_7_p_0(
  MR_String ColumnClassStr_8,
  MR_Integer STATE_VARIABLE_HeaderGroupNumber_0_17,
  MR_Integer * STATE_VARIABLE_HeaderGroupNumber_18,
  MR_Word STATE_VARIABLE_ColouredClassStrs_0_19,
  MR_Word * STATE_VARIABLE_ColouredClassStrs_20,
  MR_Word STATE_VARIABLE_StyleControlMap_0_21,
  MR_Word * STATE_VARIABLE_StyleControlMap_22)
{
  {
    MR_bool succeeded;
    MR_Word StyleControl_12;
    MR_Word StyleElement_13;
    MR_String Colour_14;
    MR_String Var_23;
    MR_Integer Var_26;
    MR_Word StyleElementMap0_15;
    MR_Box conv0_StyleElementMap0_15;

    Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "td.", ColumnClassStr_8);
    StyleControl_12 = (MR_Word) (Var_23);
    StyleElement_13 = (MR_Word) (((MR_Box) ((MR_String) "background")));
    Var_26 = (STATE_VARIABLE_HeaderGroupNumber_0_17 & (MR_Integer) 1);
    succeeded = (Var_26 == (MR_Integer) 0);
    if (succeeded)
      Colour_14 = (MR_String) "LightGrey";
    else
      Colour_14 = (MR_String) "White";
    succeeded = mercury__set__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ColumnClassStr_8)), STATE_VARIABLE_ColouredClassStrs_0_19);
    if (succeeded)
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140html_format.update_style_control_map\'/7", (MR_String) "repeated table_column_class");
        return;
      }
    }
    else
    {
      mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ColumnClassStr_8)), STATE_VARIABLE_ColouredClassStrs_0_19, STATE_VARIABLE_ColouredClassStrs_20);
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&html_format__html_format__type_ctor_info_style_control_0), (MR_Word) (&html_format_scalar_common_1[0]), STATE_VARIABLE_StyleControlMap_0_21, ((MR_Box) (StyleControl_12)), &conv0_StyleElementMap0_15);
    if (succeeded)
    {
      StyleElementMap0_15 = ((MR_Word) (conv0_StyleElementMap0_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word StyleElementMap_16;

      mercury__map__set_4_p_0((MR_Word) (&html_format__html_format__type_ctor_info_style_element_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (StyleElement_13)), ((MR_Box) (Colour_14)), StyleElementMap0_15, &StyleElementMap_16);
      mercury__map__det_update_4_p_0((MR_Word) (&html_format__html_format__type_ctor_info_style_control_0), (MR_Word) (&html_format_scalar_common_1[0]), ((MR_Box) (StyleControl_12)), ((MR_Box) (StyleElementMap_16)), STATE_VARIABLE_StyleControlMap_0_21, STATE_VARIABLE_StyleControlMap_22);
    }
    else
    {
      MR_Word StyleElementMap_35;

      StyleElementMap_35 = mercury__map__singleton_2_f_0((MR_Word) (&html_format__html_format__type_ctor_info_style_element_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (StyleElement_13)), ((MR_Box) (Colour_14)));
      mercury__map__det_insert_4_p_0((MR_Word) (&html_format__html_format__type_ctor_info_style_control_0), (MR_Word) (&html_format_scalar_common_1[0]), ((MR_Box) (StyleControl_12)), ((MR_Box) (StyleElementMap_35)), STATE_VARIABLE_StyleControlMap_0_21, STATE_VARIABLE_StyleControlMap_22);
    }
    *STATE_VARIABLE_HeaderGroupNumber_18 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_HeaderGroupNumber_0_17 + (MR_Unsigned) 1);
  }
}

static MR_Word MR_CALL 
html_format__style_element_to_html_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_String ElementName_3;
    MR_String Value_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_String Var_6;
    MR_String Var_14;
    MR_String Var_16;
    MR_String Var_17;

    ElementName_3 = (MR_String) (Var_5);
    Var_14 = mercury__string__f_43_43_2_f_0(Value_4, (MR_String) ";\n");
    Var_16 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_14);
    Var_17 = mercury__string__f_43_43_2_f_0(ElementName_3, Var_16);
    Var_6 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_17);
    HeadVar__2_2 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_6)));
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
html_format__style_control_to_html_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = html_format__style_element_to_html_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
html_format__style_control_to_html_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HTML_5;
    MR_Word Control_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word StyleElementMap_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_String ControlName_6 = (MR_String) (Control_3);
    MR_Word StyleElements_7;
    MR_Word ElementHTMLs_8;
    MR_Word ElementsHTML_9;
    MR_Word StartFragmentHTML_10;
    MR_Word EndFragmentHTML_11;
    MR_String Var_13;
    MR_Word Var_19;
    MR_String Var_27;

    StyleElements_7 = mercury__map__to_assoc_list_1_f_0((MR_Word) (&html_format__html_format__type_ctor_info_style_element_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StyleElementMap_4);
    ElementHTMLs_8 = mercury__list__map_2_f_0((MR_Word) (&html_format_scalar_common_1[2]), (MR_Word) (&html_format_scalar_common_2[0]), (MR_Word) (&html_format_scalar_common_1[13]), StyleElements_7);
    ElementsHTML_9 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ElementHTMLs_8);
    Var_27 = mercury__string__f_43_43_2_f_0(ControlName_6, (MR_String) "\n\t{\n");
    Var_13 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_27);
    StartFragmentHTML_10 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_13)));
    EndFragmentHTML_11 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\t}\n")));
    Var_19 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ElementsHTML_9, EndFragmentHTML_11);
    HTML_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StartFragmentHTML_10, Var_19);
    return HTML_5;
  }
}

static void MR_CALL 
html_format__escape_break_html_string_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Acc_11;

    html_format__replace_special_char_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Acc_11);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Acc_11));
  }
}

static MR_bool MR_CALL 
html_format__escape_break_html_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    succeeded = html_format__special_html_char_or_break_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_String MR_CALL 
html_format__escape_break_html_string_1_f_0(
  MR_String String_3)
{
  {
    MR_bool succeeded;
    MR_String HeadVar__2_2;
    MR_Word Chars_11;
    MR_Box conv2_Chars_11;

    mercury__string__foldr_4_p_0((MR_Word) (&html_format_scalar_common_2[2]), (MR_Word) (&html_format_scalar_common_5[6]), String_3, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Chars_11);
    Chars_11 = ((MR_Word) (conv2_Chars_11));
    mercury__string__from_char_list_2_p_0(Chars_11, &HeadVar__2_2);
    return HeadVar__2_2;
  }
}

static void MR_CALL 
html_format__escape_html_attr_string_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Acc_11;

    html_format__replace_special_char_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Acc_11);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Acc_11));
  }
}

static MR_bool MR_CALL 
html_format__escape_html_attr_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    succeeded = html_format__special_html_char_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_String MR_CALL 
html_format__escape_html_attr_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_String HeadVar__2_2;
    MR_Word Attrs_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_String String_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_String Var_5;
    MR_Word Chars_13;
    MR_Box conv2_Chars_13;

    mercury__string__foldr_4_p_0((MR_Word) (&html_format_scalar_common_2[2]), (MR_Word) (&html_format_scalar_common_5[5]), String_4, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Chars_13);
    Chars_13 = ((MR_Word) (conv2_Chars_13));
    mercury__string__from_char_list_2_p_0(Chars_13, &Var_5);
    HeadVar__2_2 = html_format__handle_html_attrs_2_f_0(Attrs_3, Var_5);
    return HeadVar__2_2;
  }
}

static void MR_CALL 
html_format__escape_html_string_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Acc_11;

    html_format__replace_special_char_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Acc_11);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Acc_11));
  }
}

static MR_bool MR_CALL 
html_format__escape_html_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    succeeded = html_format__special_html_char_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_String MR_CALL 
html_format__escape_html_string_1_f_0(
  MR_String String_3)
{
  {
    MR_bool succeeded;
    MR_String HeadVar__2_2;
    MR_Word Chars_11;
    MR_Box conv2_Chars_11;

    mercury__string__foldr_4_p_0((MR_Word) (&html_format_scalar_common_2[2]), (MR_Word) (&html_format_scalar_common_5[4]), String_3, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Chars_11);
    Chars_11 = ((MR_Word) (conv2_Chars_11));
    mercury__string__from_char_list_2_p_0(Chars_11, &HeadVar__2_2);
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
html_format__htmlize_display_3_f_0(
  MR_Word Deep_5,
  MR_Word Prefs_6,
  MR_Word Display_7)
{
  {
    MR_String HTMLStr_8;
    MR_Word MaybeTitle_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Display_7, (MR_Integer) 0))));
    MR_Word Items_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Display_7, (MR_Integer) 1))));
    MR_Word MainTitle_11;
    MR_Word HeadTitle_12;
    MR_Word HeadingHTML_13;
    MR_Word HeadTitleHTML_16;
    MR_Word FormatInfo_17;
    MR_Word StyleControlMap0_18;
    MR_Word StyleControlMap_19;
    MR_Word ItemsHTML_20;
    MR_Word StyleHTML_21;
    MR_Word HTML_22;
    MR_Word Var_23;
    MR_Word Var_25;
    MR_String Var_26;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_50;

    Var_23 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "Mercury Deep Profile for ")));
    Var_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Deep_5, (MR_Integer) 3))));
    Var_25 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_26)));
    MainTitle_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, Var_25);
    if ((MaybeTitle_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      HeadTitle_12 = MainTitle_11;
      HeadingHTML_13 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    }
    else
    {
      MR_String Title_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeTitle_9, (MR_Integer) 0))));
      MR_Word TitleHTML_15;
      MR_Word Var_27;
      MR_Word Var_28;

      TitleHTML_15 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Title_14)));
      Var_28 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) " - ")));
      Var_27 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_28, TitleHTML_15);
      HeadTitle_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MainTitle_11, Var_27);
      HeadingHTML_13 = html_format__wrap_tags_3_f_0((MR_String) "<h3>", (MR_String) "</h3>\n", TitleHTML_15);
    }
    HeadTitleHTML_16 = html_format__wrap_tags_3_f_0((MR_String) "<title>", (MR_String) "</title>\n", HeadTitle_12);
    FormatInfo_17 = html_format__init_format_info_2_f_0(Deep_5, Prefs_6);
    StyleControlMap0_18 = html_format__default_style_control_map_0_f_0();
    html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_p_0((MR_String) "<div>\n", (MR_String) "</div>\n", FormatInfo_17, StyleControlMap0_18, &StyleControlMap_19, Items_10, &ItemsHTML_20);
    StyleHTML_21 = html_format__css_style_html_1_f_0(StyleControlMap_19);
    Var_37 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\"\n\"http://www.w3.org/TR/html4/strict.dtd\">\n")));
    Var_45 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadTitleHTML_16, StyleHTML_21);
    Var_42 = html_format__wrap_tags_3_f_0((MR_String) "<head>\n", (MR_String) "</head>\n", Var_45);
    Var_49 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadingHTML_13, ItemsHTML_20);
    Var_46 = html_format__wrap_tags_3_f_0((MR_String) "<body>\n", (MR_String) "</body>\n", Var_49);
    Var_41 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_42, Var_46);
    Var_38 = html_format__wrap_tags_3_f_0((MR_String) "<html>\n", (MR_String) "</html>\n", Var_41);
    HTML_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_37, Var_38);
    Var_50 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HTML_22);
    HTMLStr_8 = mercury__string__append_list_1_f_0(Var_50);
    return HTMLStr_8;
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_p_0(
  MR_String Var_15,
  MR_String Var_16,
  MR_Word Var_17,
  MR_Word STATE_VARIABLE_StyleControlMap_0_10,
  MR_Word * STATE_VARIABLE_StyleControlMap_11,
  MR_Word List_8,
  MR_Word * HTML_9)
{
  {
    MR_Word Var_12;

    Var_12 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    if ((List_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HTML_9 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      *STATE_VARIABLE_StyleControlMap_11 = STATE_VARIABLE_StyleControlMap_0_10;
    }
    else
    {
      MR_Word Head_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List_8, (MR_Integer) 0))));
      MR_Word Tail_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List_8, (MR_Integer) 1))));
      MR_Word HeadHTML_30;
      MR_Word STATE_VARIABLE_StyleControlMap_21_33;

      html_format__item_to_html_7_p_0(Var_15, Var_16, Var_17, STATE_VARIABLE_StyleControlMap_0_10, &STATE_VARIABLE_StyleControlMap_21_33, Head_27, &HeadHTML_30);
      html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_p_0(Var_15, Var_16, Var_17, Var_12, STATE_VARIABLE_StyleControlMap_21_33, STATE_VARIABLE_StyleControlMap_11, Tail_28, HeadHTML_30, HTML_9);
    }
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_p_0(
  MR_String Var_34,
  MR_String Var_35,
  MR_Word Var_36,
  MR_Word Separator_1,
  MR_Word STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * STATE_VARIABLE_StyleControlMap_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_HTML_0_6,
  MR_Word * STATE_VARIABLE_HTML_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HTML_7 = STATE_VARIABLE_HTML_0_6;
      *STATE_VARIABLE_StyleControlMap_4 = STATE_VARIABLE_StyleControlMap_0_3;
    }
    else
    {
      MR_Word Head_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Tail_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word HeadHTML_22;
      MR_Word STATE_VARIABLE_StyleControlMap_27_27;
      MR_Word STATE_VARIABLE_HTML_28_28;
      MR_Word Var_29;
      MR_Word next_value_of_STATE_VARIABLE_StyleControlMap_0_3;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_HTML_0_6;

      html_format__item_to_html_7_p_0(Var_34, Var_35, Var_36, STATE_VARIABLE_StyleControlMap_0_3, &STATE_VARIABLE_StyleControlMap_27_27, Head_19, &HeadHTML_22);
      Var_29 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Separator_1, HeadHTML_22);
      STATE_VARIABLE_HTML_28_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_HTML_0_6, Var_29);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_StyleControlMap_0_3 = STATE_VARIABLE_StyleControlMap_27_27;
      next_value_of_HeadVar__5_5 = Tail_20;
      next_value_of_STATE_VARIABLE_HTML_0_6 = STATE_VARIABLE_HTML_28_28;
      STATE_VARIABLE_StyleControlMap_0_3 = next_value_of_STATE_VARIABLE_StyleControlMap_0_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_HTML_0_6 = next_value_of_STATE_VARIABLE_HTML_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
html_format__item_to_html_7_p_0_1(
  void * env_ptr_arg)
{
  {
    struct html_format__item_to_html_7_p_0_env_0_s * env_ptr = (struct html_format__item_to_html_7_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->html_format__item_to_html_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
html_format__item_to_html_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct html_format__item_to_html_7_p_0_env_0_s * env_ptr = (struct html_format__item_to_html_7_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->html_format__item_to_html_7_p_0_env_0__ListItem_45 = ((MR_Word) ((env_ptr)->html_format__item_to_html_7_p_0_env_0__conv0_ListItem_45));
    html_format__item_to_html_7_p_0_2(env_ptr);
  }
}

static void MR_CALL 
html_format__item_to_html_7_p_0_2(
  void * env_ptr_arg)
{
  {
    struct html_format__item_to_html_7_p_0_env_0_s * env_ptr = (struct html_format__item_to_html_7_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_24;

      (env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->html_format__item_to_html_7_p_0_env_0__ListItem_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), (env_ptr)->html_format__item_to_html_7_p_0_env_0__ListItem_45, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if ((env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded)
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->html_format__item_to_html_7_p_0_env_0__ListItem_45, (MR_Integer) 1))));
      (env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded = !((env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded);
      if ((env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded)
        html_format__item_to_html_7_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
html_format__item_to_html_7_p_0_4(
  void * env_ptr_arg)
{
  {
    struct html_format__item_to_html_7_p_0_env_0_s * env_ptr = (struct html_format__item_to_html_7_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->html_format__item_to_html_7_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) (&display__display__type_ctor_info_display_item_0), &(env_ptr)->html_format__item_to_html_7_p_0_env_0__conv0_ListItem_45, (env_ptr)->html_format__item_to_html_7_p_0_env_0__Items_21, html_format__item_to_html_7_p_0_3, env_ptr);
        }
        (env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
html_format__item_to_html_7_p_0(
  MR_String StartTag_8,
  MR_String EndTag_9,
  MR_Word FormatInfo_10,
  MR_Word STATE_VARIABLE_StyleControlMap_0_27,
  MR_Word * STATE_VARIABLE_StyleControlMap_28,
  MR_Word Item_12,
  MR_Word * HTML_13)
{
  {
    struct html_format__item_to_html_7_p_0_env_0_s env;

    while (MR_TRUE)
    {
      // setup for model_det tailcalls optimized into a loop
      ;
      switch (MR_tag((MR_Word) Item_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HTML_13 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "<p>\n")));
            *STATE_VARIABLE_StyleControlMap_28 = STATE_VARIABLE_StyleControlMap_0_27;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word DeepLink_15 = (MR_Word) (MR_body((MR_Word) (Item_12), (MR_Integer) 1));
            MR_Word Var_37;

            Var_37 = html_format__link_to_html_2_f_0(FormatInfo_10, DeepLink_15);
            *HTML_13 = html_format__wrap_tags_3_f_0(StartTag_8, EndTag_9, Var_37);
            *STATE_VARIABLE_StyleControlMap_28 = STATE_VARIABLE_StyleControlMap_0_27;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PseudoLink_16 = (MR_Word) (MR_body((MR_Word) (Item_12), (MR_Integer) 2));
            MR_Word Var_36;

            Var_36 = html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0(PseudoLink_16);
            *HTML_13 = html_format__wrap_tags_3_f_0(StartTag_8, EndTag_9, Var_36);
            *STATE_VARIABLE_StyleControlMap_28 = STATE_VARIABLE_StyleControlMap_0_27;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Table_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));
                MR_Word TableHTML_18;

                html_format__table_to_html_5_p_0(FormatInfo_10, STATE_VARIABLE_StyleControlMap_0_27, STATE_VARIABLE_StyleControlMap_28, Table_17, &TableHTML_18);
                *HTML_13 = html_format__wrap_tags_3_f_0(StartTag_8, EndTag_9, TableHTML_18);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Message_14 = ((MR_String) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));
                MR_Word Var_40;
                MR_Word Var_43;
                MR_Word Var_68;
                MR_Word Var_69;
                MR_Word Var_70;
                MR_Word Var_79;
                MR_Word Var_80;
                MR_Word Var_81;

                Var_43 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Message_14)));
                Var_68 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "<h3>")));
                Var_70 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "</h3>\n")));
                Var_69 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_43, Var_70);
                Var_40 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_68, Var_69);
                Var_79 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (StartTag_8)));
                Var_81 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (EndTag_9)));
                Var_80 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_40, Var_81);
                *HTML_13 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_79, Var_80);
                *STATE_VARIABLE_StyleControlMap_28 = STATE_VARIABLE_StyleControlMap_0_27;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_39;
                MR_String Message_44 = ((MR_String) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));

                Var_39 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Message_44)));
                *HTML_13 = html_format__wrap_tags_3_f_0(StartTag_8, EndTag_9, Var_39);
                *STATE_VARIABLE_StyleControlMap_28 = STATE_VARIABLE_StyleControlMap_0_27;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Class_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))) & (MR_Integer) 3);
                MR_Word MaybeTitle_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 2))));
                MR_Word DeveloperMode_22;
                MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1)));
                MR_Word Var_50;
                MR_Word Var_51;
                MR_String Var_52;
                MR_String Var_53;
                MR_String Var_54;
                MR_Unsigned packed_word_2;

                (env).html_format__item_to_html_7_p_0_env_0__Items_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 3))));
                packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), FormatInfo_10, (MR_Integer) 0)));
                Var_50 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FormatInfo_10, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
                Var_51 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FormatInfo_10, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
                DeveloperMode_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FormatInfo_10, (MR_Integer) 0))) & (MR_Integer) 1);
                Var_52 = ((MR_String) ((MR_hl_field(MR_mktag(0), FormatInfo_10, (MR_Integer) 1))));
                Var_53 = ((MR_String) ((MR_hl_field(MR_mktag(0), FormatInfo_10, (MR_Integer) 2))));
                Var_54 = ((MR_String) ((MR_hl_field(MR_mktag(0), FormatInfo_10, (MR_Integer) 3))));
                (env).html_format__item_to_html_7_p_0_env_0__succeeded = (DeveloperMode_22 == (MR_Integer) 1);
                if ((env).html_format__item_to_html_7_p_0_env_0__succeeded)
                {
                  html_format__item_to_html_7_p_0_4(&env);
                  (env).html_format__item_to_html_7_p_0_env_0__succeeded = !((env).html_format__item_to_html_7_p_0_env_0__succeeded);
                }
                if ((env).html_format__item_to_html_7_p_0_env_0__succeeded)
                {
                  *HTML_13 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                  *STATE_VARIABLE_StyleControlMap_28 = STATE_VARIABLE_StyleControlMap_0_27;
                }
                else
                {
                  MR_Word TableHTML_46;

                  html_format__list_to_html_7_p_0(FormatInfo_10, STATE_VARIABLE_StyleControlMap_0_27, STATE_VARIABLE_StyleControlMap_28, Class_19, MaybeTitle_20, (env).html_format__item_to_html_7_p_0_env_0__Items_21, &TableHTML_46);
                  *HTML_13 = html_format__wrap_tags_3_f_0(StartTag_8, EndTag_9, TableHTML_46);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_String Text_25 = ((MR_String) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));
                MR_Word Var_30;
                MR_Word Var_33;

                Var_33 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Text_25)));
                Var_30 = html_format__wrap_tags_3_f_0((MR_String) "<pre>", (MR_String) "</pre>", Var_33);
                *HTML_13 = html_format__wrap_tags_3_f_0(StartTag_8, EndTag_9, Var_30);
                *STATE_VARIABLE_StyleControlMap_28 = STATE_VARIABLE_StyleControlMap_0_27;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubItem_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));
                MR_Word DeveloperMode_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FormatInfo_10, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word Var_55 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FormatInfo_10, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
                MR_Word Var_56 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FormatInfo_10, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
                MR_String Var_57 = ((MR_String) ((MR_hl_field(MR_mktag(0), FormatInfo_10, (MR_Integer) 1))));
                MR_String Var_58 = ((MR_String) ((MR_hl_field(MR_mktag(0), FormatInfo_10, (MR_Integer) 2))));
                MR_String Var_59 = ((MR_String) ((MR_hl_field(MR_mktag(0), FormatInfo_10, (MR_Integer) 3))));
                MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), FormatInfo_10, (MR_Integer) 0)));

                switch (DeveloperMode_49) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      *HTML_13 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                      *STATE_VARIABLE_StyleControlMap_28 = STATE_VARIABLE_StyleControlMap_0_27;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word next_value_of_Item_12 = SubItem_26;

                      // direct tailcall eliminated
                      ;
                      Item_12 = next_value_of_Item_12;
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
html_format__list_to_html_7_p_0(
  MR_Word FormatInfo_8,
  MR_Word STATE_VARIABLE_StyleControlMap_0_26,
  MR_Word * STATE_VARIABLE_StyleControlMap_27,
  MR_Word Class_10,
  MR_Word MaybeTitle_11,
  MR_Word Items_12,
  MR_Word * HTML_13)
{
  {
    MR_Word TitleHTML_17;
    MR_Word PostTitleHTML_18;
    MR_String OutsideStartTag_19;
    MR_String OutsideEndTag_20;
    MR_String InnerStartTag_21;
    MR_String InnerEndTag_22;
    MR_Word Separator_23;
    MR_Word InnerItemsHTML_24;
    MR_Word ItemsHTML_25;
    MR_Word Var_34;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;

    if ((MaybeTitle_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      TitleHTML_17 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      PostTitleHTML_18 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    }
    else
    {
      MR_String Title_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeTitle_11, (MR_Integer) 0))));
      MR_Word Var_28;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;

      Var_28 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Title_14)));
      Var_48 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "<span id=\"list_title\">")));
      Var_50 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "</span>\n")));
      Var_49 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_28, Var_50);
      TitleHTML_17 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_48, Var_49);
      switch (Class_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            PostTitleHTML_18 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
          }
          break;
        case (MR_Integer) 3:
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            PostTitleHTML_18 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "<br>\n")));
          }
          break;
      }
    }
    switch (Class_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          OutsideStartTag_19 = (MR_String) "";
          OutsideEndTag_20 = (MR_String) "\n";
          InnerStartTag_21 = (MR_String) "";
          InnerEndTag_22 = (MR_String) "\n";
          Separator_23 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")));
        }
        break;
      case (MR_Integer) 1:
        {
          OutsideStartTag_19 = (MR_String) "<ul>\n";
          OutsideEndTag_20 = (MR_String) "</ul>\n";
          InnerStartTag_21 = (MR_String) "<li>\n";
          InnerEndTag_22 = (MR_String) "</li>\n";
          Separator_23 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        }
        break;
      case (MR_Integer) 0:
        {
          OutsideStartTag_19 = (MR_String) "";
          OutsideEndTag_20 = (MR_String) "\n";
          InnerStartTag_21 = (MR_String) "";
          InnerEndTag_22 = (MR_String) "\n";
          Separator_23 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "<br>\n")));
        }
        break;
    }
    if ((Items_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      InnerItemsHTML_24 = html_format__empty_html_0_f_0();
      *STATE_VARIABLE_StyleControlMap_27 = STATE_VARIABLE_StyleControlMap_0_26;
    }
    else
    {
      MR_Word Head_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Items_12, (MR_Integer) 0))));
      MR_Word Tail_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Items_12, (MR_Integer) 1))));
      MR_Word HeadHTML_75;
      MR_Word STATE_VARIABLE_StyleControlMap_21_78;

      html_format__item_to_html_7_p_0(InnerStartTag_21, InnerEndTag_22, FormatInfo_8, STATE_VARIABLE_StyleControlMap_0_26, &STATE_VARIABLE_StyleControlMap_21_78, Head_72, &HeadHTML_75);
      html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_p_0(InnerStartTag_21, InnerEndTag_22, FormatInfo_8, Separator_23, STATE_VARIABLE_StyleControlMap_21_78, STATE_VARIABLE_StyleControlMap_27, Tail_73, HeadHTML_75, &InnerItemsHTML_24);
    }
    Var_84 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (OutsideStartTag_19)));
    Var_86 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (OutsideEndTag_20)));
    Var_85 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InnerItemsHTML_24, Var_86);
    ItemsHTML_25 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_84, Var_85);
    Var_34 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PostTitleHTML_18, ItemsHTML_25);
    *HTML_13 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TitleHTML_17, Var_34);
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Acc_11;

    html_format__replace_special_char_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Acc_11);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Acc_11));
  }
}

static MR_bool MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_String conv3_HeadVar__2_2;

    succeeded = html_format__special_html_char_or_break_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv3_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Acc_11;

    html_format__replace_special_char_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Acc_11);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Acc_11));
  }
}

static MR_bool MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    succeeded = html_format__special_html_char_or_break_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0(
  MR_Word PseudoLink_5)
{
  {
    MR_bool succeeded;
    MR_Word HTML_6;
    MR_String Label_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), PseudoLink_5, (MR_Integer) 0))));
    MR_Word Class_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PseudoLink_5, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_String HTMLStr_9;

    switch (Class_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_11;
          MR_String Var_12;
          MR_Word Chars_22;
          MR_Box conv2_Chars_22;

          mercury__string__foldr_4_p_0((MR_Word) (&html_format_scalar_common_2[2]), (MR_Word) (&html_format_scalar_common_5[2]), Label_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Chars_22);
          Chars_22 = ((MR_Word) (conv2_Chars_22));
          mercury__string__from_char_list_2_p_0(Chars_22, &Var_12);
          Var_11 = mercury__string__f_43_43_2_f_0(Var_12, (MR_String) "]");
          HTMLStr_9 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_11);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Chars_37;
          MR_Box conv5_Chars_37;

          mercury__string__foldr_4_p_0((MR_Word) (&html_format_scalar_common_2[2]), (MR_Word) (&html_format_scalar_common_5[3]), Label_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_Chars_37);
          Chars_37 = ((MR_Word) (conv5_Chars_37));
          mercury__string__from_char_list_2_p_0(Chars_37, &HTMLStr_9);
        }
        break;
    }
    HTML_6 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (HTMLStr_9)));
    return HTML_6;
  }
}

static void MR_CALL 
html_format__table_to_html_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11,
  MR_Box wrapper_arg_12,
  MR_Box * wrapper_arg_13)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_NumRows_33;
    MR_Integer conv4_STATE_VARIABLE_ColumnNumber_35;
    MR_Word conv3_STATE_VARIABLE_ClassMap_37;
    MR_Integer conv2_STATE_VARIABLE_HeaderGroupNumber_39;
    MR_Word conv1_STATE_VARIABLE_ColouredClassStrs_41;
    MR_Word conv0_STATE_VARIABLE_StyleControlMap_43;

    html_format__table_header_num_rows_and_classmap_14_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_NumRows_33, ((MR_Integer) (wrapper_arg_4)), &conv4_STATE_VARIABLE_ColumnNumber_35, ((MR_Word) (wrapper_arg_6)), &conv3_STATE_VARIABLE_ClassMap_37, ((MR_Integer) (wrapper_arg_8)), &conv2_STATE_VARIABLE_HeaderGroupNumber_39, ((MR_Word) (wrapper_arg_10)), &conv1_STATE_VARIABLE_ColouredClassStrs_41, ((MR_Word) (wrapper_arg_12)), &conv0_STATE_VARIABLE_StyleControlMap_43);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_NumRows_33));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_ColumnNumber_35));
    *wrapper_arg_7 = ((MR_Box) (conv3_STATE_VARIABLE_ClassMap_37));
    *wrapper_arg_9 = ((MR_Box) (conv2_STATE_VARIABLE_HeaderGroupNumber_39));
    *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_ColouredClassStrs_41));
    *wrapper_arg_13 = ((MR_Box) (conv0_STATE_VARIABLE_StyleControlMap_43));
  }
}

static void MR_CALL 
html_format__table_to_html_5_p_0(
  MR_Word FormatInfo_6,
  MR_Word STATE_VARIABLE_StyleControlMap_0_34,
  MR_Word * STATE_VARIABLE_StyleControlMap_35,
  MR_Word Table_8,
  MR_Word * HTML_9)
{
  {
    MR_Word Class_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Table_8, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Integer NumColumns_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Table_8, (MR_Integer) 1))));
    MR_Word MaybeHeader_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Table_8, (MR_Integer) 2))));
    MR_Word BodyRows_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Table_8, (MR_Integer) 3))));
    MR_String ClassStr_14;
    MR_String TableStartTag_15;
    MR_Word MaybeClassMap_23;
    MR_Word HeaderHTML_30;
    MR_Word BodyRowsHTML_31;
    MR_Word WrappedHeaderHTML_32;
    MR_Word WrappedBodyHTML_33;
    MR_String Var_37;
    MR_Word STATE_VARIABLE_StyleControlMap_52_52;
    MR_Word Var_69;

    ClassStr_14 = html_format__table_class_to_string_2_f_0(FormatInfo_6, Class_10);
    Var_37 = mercury__string__f_43_43_2_f_0(ClassStr_14, (MR_String) "\">\n");
    TableStartTag_15 = mercury__string__f_43_43_2_f_0((MR_String) "<table class=\"", Var_37);
    if ((MaybeHeader_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeClassMap_23 = (MR_Word) ((MR_Unsigned) 0U);
      HeaderHTML_30 = html_format__empty_html_0_f_0();
      STATE_VARIABLE_StyleControlMap_52_52 = STATE_VARIABLE_StyleControlMap_0_34;
    }
    else
    {
      MR_Word THCells_17;
      MR_Word THNumRows_18;
      MR_Word ClassMap_20;
      MR_Word InnerHeaderRowOneHTML_24;
      MR_Word HeaderRowOneHTML_25;
      MR_Word HeaderRowTwoHTML_26;
      MR_String InnerHeaderRowThree_28;
      MR_Word HeaderRowThreeHTML_29;
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeader_12, (MR_Integer) 0))));
      MR_Word Var_40;
      MR_Word Var_43;
      MR_Word Var_45;
      MR_Word STATE_VARIABLE_StyleControlMap_46_46;
      MR_Word STATE_VARIABLE_StyleControlMap_48_48;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_String Var_105;
      MR_String Var_112;
      MR_Box conv11_THNumRows_18;
      MR_Box conv10_Var_19;
      MR_Box conv9_ClassMap_20;
      MR_Box conv8_Var_21;
      MR_Box conv7_Var_22;
      MR_Box conv6_STATE_VARIABLE_StyleControlMap_46_46;

      THCells_17 = (MR_Word) (Var_39);
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&html_format_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (html_format__table_to_html_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (FormatInfo_6));
      }
      Var_43 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      Var_45 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      mercury__list__foldl6_14_p_0((MR_Word) (&display__display__type_ctor_info_table_header_group_0), (MR_Word) (&html_format__html_format__type_ctor_info_table_header_rows_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&html_format_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&html_format_scalar_common_2[1]), (MR_Word) (&html_format_scalar_common_1[4]), Var_40, THCells_17, ((MR_Box) ((MR_Integer) 0)), &conv11_THNumRows_18, ((MR_Box) ((MR_Integer) 0)), &conv10_Var_19, ((MR_Box) (Var_43)), &conv9_ClassMap_20, ((MR_Box) ((MR_Integer) 0)), &conv8_Var_21, ((MR_Box) (Var_45)), &conv7_Var_22, ((MR_Box) (STATE_VARIABLE_StyleControlMap_0_34)), &conv6_STATE_VARIABLE_StyleControlMap_46_46);
      THNumRows_18 = ((MR_Word) (conv11_THNumRows_18));
      ClassMap_20 = ((MR_Word) (conv9_ClassMap_20));
      STATE_VARIABLE_StyleControlMap_46_46 = ((MR_Word) (conv6_STATE_VARIABLE_StyleControlMap_46_46));
      {
        MaybeClassMap_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeClassMap_23, 0) = ((MR_Box) (ClassMap_20));
      }
      html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_p_0(FormatInfo_6, THNumRows_18, STATE_VARIABLE_StyleControlMap_46_46, &STATE_VARIABLE_StyleControlMap_48_48, THCells_17, &InnerHeaderRowOneHTML_24);
      HeaderRowOneHTML_25 = html_format__wrap_tags_3_f_0((MR_String) "<tr>\n", (MR_String) "</tr>\n", InnerHeaderRowOneHTML_24);
      switch (THNumRows_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            HeaderRowTwoHTML_26 = html_format__empty_html_0_f_0();
            STATE_VARIABLE_StyleControlMap_52_52 = STATE_VARIABLE_StyleControlMap_48_48;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InnerHeaderRowTwoHTML_27;

            html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_p_0(FormatInfo_6, STATE_VARIABLE_StyleControlMap_48_48, &STATE_VARIABLE_StyleControlMap_52_52, THCells_17, &InnerHeaderRowTwoHTML_27);
            HeaderRowTwoHTML_26 = html_format__wrap_tags_3_f_0((MR_String) "<tr>\n", (MR_String) "</tr>\n", InnerHeaderRowTwoHTML_27);
          }
          break;
      }
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&html_format_scalar_common_7[0]), NumColumns_11, &Var_105);
      Var_112 = mercury__string__f_43_43_2_f_0(Var_105, (MR_String) "\"/>");
      InnerHeaderRowThree_28 = mercury__string__f_43_43_2_f_0((MR_String) "<td colspan=\"", Var_112);
      Var_61 = html_format__str_to_html_1_f_0(InnerHeaderRowThree_28);
      HeaderRowThreeHTML_29 = html_format__wrap_tags_3_f_0((MR_String) "<tr>", (MR_String) "</tr>", Var_61);
      Var_62 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeaderRowTwoHTML_26, HeaderRowThreeHTML_29);
      HeaderHTML_30 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeaderRowOneHTML_25, Var_62);
    }
    html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_p_0(FormatInfo_6, MaybeClassMap_23, NumColumns_11, STATE_VARIABLE_StyleControlMap_52_52, STATE_VARIABLE_StyleControlMap_35, BodyRows_13, &BodyRowsHTML_31);
    WrappedHeaderHTML_32 = html_format__wrap_tags_3_f_0((MR_String) "<thead>\n", (MR_String) "</thead>\n", HeaderHTML_30);
    WrappedBodyHTML_33 = html_format__wrap_tags_3_f_0((MR_String) "<tbody>\n", (MR_String) "</tbody>\n", BodyRowsHTML_31);
    Var_69 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), WrappedHeaderHTML_32, WrappedBodyHTML_33);
    *HTML_9 = html_format__wrap_tags_3_f_0(TableStartTag_15, (MR_String) "</table>\n", Var_69);
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_p_0(
  MR_Word Var_15,
  MR_Word Var_16,
  MR_Word STATE_VARIABLE_StyleControlMap_0_10,
  MR_Word * STATE_VARIABLE_StyleControlMap_11,
  MR_Word List_8,
  MR_Word * HTML_9)
{
  {
    MR_Word Var_12;

    Var_12 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    if ((List_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HTML_9 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      *STATE_VARIABLE_StyleControlMap_11 = STATE_VARIABLE_StyleControlMap_0_10;
    }
    else
    {
      MR_Word Head_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List_8, (MR_Integer) 0))));
      MR_Word Tail_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List_8, (MR_Integer) 1))));
      MR_Word HeadHTML_29;
      MR_Word STATE_VARIABLE_StyleControlMap_21_32;

      html_format__table_header_group_to_html_row_1_6_p_0(Var_15, Var_16, STATE_VARIABLE_StyleControlMap_0_10, &STATE_VARIABLE_StyleControlMap_21_32, Head_26, &HeadHTML_29);
      html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_p_0(Var_15, Var_16, Var_12, STATE_VARIABLE_StyleControlMap_21_32, STATE_VARIABLE_StyleControlMap_11, Tail_27, HeadHTML_29, HTML_9);
    }
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_p_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Separator_1,
  MR_Word STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * STATE_VARIABLE_StyleControlMap_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_HTML_0_6,
  MR_Word * STATE_VARIABLE_HTML_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HTML_7 = STATE_VARIABLE_HTML_0_6;
      *STATE_VARIABLE_StyleControlMap_4 = STATE_VARIABLE_StyleControlMap_0_3;
    }
    else
    {
      MR_Word Head_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Tail_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word HeadHTML_22;
      MR_Word STATE_VARIABLE_StyleControlMap_27_27;
      MR_Word STATE_VARIABLE_HTML_28_28;
      MR_Word Var_29;
      MR_Word next_value_of_STATE_VARIABLE_StyleControlMap_0_3;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_HTML_0_6;

      html_format__table_header_group_to_html_row_1_6_p_0(Var_34, Var_35, STATE_VARIABLE_StyleControlMap_0_3, &STATE_VARIABLE_StyleControlMap_27_27, Head_19, &HeadHTML_22);
      Var_29 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Separator_1, HeadHTML_22);
      STATE_VARIABLE_HTML_28_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_HTML_0_6, Var_29);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_StyleControlMap_0_3 = STATE_VARIABLE_StyleControlMap_27_27;
      next_value_of_HeadVar__5_5 = Tail_20;
      next_value_of_STATE_VARIABLE_HTML_0_6 = STATE_VARIABLE_HTML_28_28;
      STATE_VARIABLE_StyleControlMap_0_3 = next_value_of_STATE_VARIABLE_StyleControlMap_0_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_HTML_0_6 = next_value_of_STATE_VARIABLE_HTML_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
html_format__table_header_group_to_html_row_1_6_p_0(
  MR_Word FormatInfo_7,
  MR_Word HeaderNumRows_8,
  MR_Word STATE_VARIABLE_StyleControlMap_0_25,
  MR_Word * STATE_VARIABLE_StyleControlMap_26,
  MR_Word HeaderGroup_10,
  MR_Word * HTML_11)
{
  {
    MR_Word Titles_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeaderGroup_10, (MR_Integer) 0))));
    MR_Word ColumnClass_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeaderGroup_10, (MR_Integer) 1))) >> 2)) & (MR_Integer) 15);
    MR_String RowSpan_16;
    MR_String ColumnSpan_17;
    MR_Word ContentsHTML_18;
    MR_String ColumnClassStr_22;
    MR_String StartTag_23;
    MR_String Var_37;
    MR_String Var_39;
    MR_String Var_40;
    MR_String Var_42;
    MR_String Var_43;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;

    if (((MR_tag((MR_Word) Titles_12)) == (MR_Integer) 1))
    {
      MR_String MainTitle_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), Titles_12, (MR_Integer) 0))));
      MR_Word SubTitleCells_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Titles_12, (MR_Integer) 1))));
      MR_Integer NumSubTitleCells_21;

      RowSpan_16 = (MR_String) "1";
      mercury__list__length_2_p_0((MR_Word) (&display__display__type_ctor_info_table_data_0), SubTitleCells_20, &NumSubTitleCells_21);
      ColumnSpan_17 = mercury__string__int_to_string_1_f_0(NumSubTitleCells_21);
      ContentsHTML_18 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (MainTitle_19)));
    }
    else
    {
      MR_Word Title_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Titles_12, (MR_Integer) 0))));

      switch (HeaderNumRows_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          RowSpan_16 = (MR_String) "1";
          break;
        case (MR_Integer) 1:
          RowSpan_16 = (MR_String) "2";
          break;
      }
      ColumnSpan_17 = (MR_String) "1";
      ContentsHTML_18 = html_format__table_data_to_html_2_f_0(FormatInfo_7, Title_15);
    }
    ColumnClassStr_22 = ((&html_format_vector_common_6[26 + ColumnClass_13]))->html_format__vector_common_type_6_0__vct_6_f_0;
    Var_37 = mercury__string__f_43_43_2_f_0(ColumnClassStr_22, (MR_String) "\">");
    Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "\" class=\"", Var_37);
    Var_40 = mercury__string__f_43_43_2_f_0(ColumnSpan_17, Var_39);
    Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "\" colspan=\"", Var_40);
    Var_43 = mercury__string__f_43_43_2_f_0(RowSpan_16, Var_42);
    StartTag_23 = mercury__string__f_43_43_2_f_0((MR_String) "<th rowspan=\"", Var_43);
    Var_50 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (StartTag_23)));
    Var_52 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "</th>\n")));
    Var_51 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ContentsHTML_18, Var_52);
    *HTML_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_50, Var_51);
    *STATE_VARIABLE_StyleControlMap_26 = STATE_VARIABLE_StyleControlMap_0_25;
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_p_0(
  MR_Word Var_15,
  MR_Word STATE_VARIABLE_StyleControlMap_0_10,
  MR_Word * STATE_VARIABLE_StyleControlMap_11,
  MR_Word List_8,
  MR_Word * HTML_9)
{
  {
    MR_Word Var_12;

    Var_12 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    if ((List_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HTML_9 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      *STATE_VARIABLE_StyleControlMap_11 = STATE_VARIABLE_StyleControlMap_0_10;
    }
    else
    {
      MR_Word Head_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List_8, (MR_Integer) 0))));
      MR_Word Tail_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List_8, (MR_Integer) 1))));
      MR_Word HeadHTML_28;
      MR_Word STATE_VARIABLE_StyleControlMap_21_31;

      html_format__table_header_group_to_html_row_2_5_p_0(Var_15, STATE_VARIABLE_StyleControlMap_0_10, &STATE_VARIABLE_StyleControlMap_21_31, Head_25, &HeadHTML_28);
      html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_p_0(Var_15, Var_12, STATE_VARIABLE_StyleControlMap_21_31, STATE_VARIABLE_StyleControlMap_11, Tail_26, HeadHTML_28, HTML_9);
    }
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_p_0(
  MR_Word Var_34,
  MR_Word Separator_1,
  MR_Word STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * STATE_VARIABLE_StyleControlMap_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_HTML_0_6,
  MR_Word * STATE_VARIABLE_HTML_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HTML_7 = STATE_VARIABLE_HTML_0_6;
      *STATE_VARIABLE_StyleControlMap_4 = STATE_VARIABLE_StyleControlMap_0_3;
    }
    else
    {
      MR_Word Head_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Tail_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word HeadHTML_22;
      MR_Word STATE_VARIABLE_StyleControlMap_27_27;
      MR_Word STATE_VARIABLE_HTML_28_28;
      MR_Word Var_29;
      MR_Word next_value_of_STATE_VARIABLE_StyleControlMap_0_3;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_HTML_0_6;

      html_format__table_header_group_to_html_row_2_5_p_0(Var_34, STATE_VARIABLE_StyleControlMap_0_3, &STATE_VARIABLE_StyleControlMap_27_27, Head_19, &HeadHTML_22);
      Var_29 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Separator_1, HeadHTML_22);
      STATE_VARIABLE_HTML_28_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_HTML_0_6, Var_29);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_StyleControlMap_0_3 = STATE_VARIABLE_StyleControlMap_27_27;
      next_value_of_HeadVar__5_5 = Tail_20;
      next_value_of_STATE_VARIABLE_HTML_0_6 = STATE_VARIABLE_HTML_28_28;
      STATE_VARIABLE_StyleControlMap_0_3 = next_value_of_STATE_VARIABLE_StyleControlMap_0_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_HTML_0_6 = next_value_of_STATE_VARIABLE_HTML_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
html_format__table_header_group_to_html_row_2_5_p_0(
  MR_Word FormatInfo_6,
  MR_Word STATE_VARIABLE_StyleControlMap_0_16,
  MR_Word * STATE_VARIABLE_StyleControlMap_17,
  MR_Word HeaderGroup_8,
  MR_Word * HTML_9)
{
  {
    MR_Word Titles_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeaderGroup_8, (MR_Integer) 0))));
    MR_Word ColumnClass_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeaderGroup_8, (MR_Integer) 1))) >> 2)) & (MR_Integer) 15);

    if (((MR_tag((MR_Word) Titles_10)) == (MR_Integer) 1))
    {
      MR_Word SubTitleCells_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Titles_10, (MR_Integer) 1))));
      MR_Word Var_31;

      Var_31 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      if ((SubTitleCells_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HTML_9 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        *STATE_VARIABLE_StyleControlMap_17 = STATE_VARIABLE_StyleControlMap_0_16;
      }
      else
      {
        MR_Word Head_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTitleCells_15, (MR_Integer) 0))));
        MR_Word Tail_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTitleCells_15, (MR_Integer) 1))));
        MR_Word HeadHTML_46;
        MR_Word STATE_VARIABLE_StyleControlMap_21_49;

        html_format__table_data_to_th_html_6_p_0(FormatInfo_6, ColumnClass_11, STATE_VARIABLE_StyleControlMap_0_16, &STATE_VARIABLE_StyleControlMap_21_49, Head_43, &HeadHTML_46);
        html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_p_0(FormatInfo_6, ColumnClass_11, Var_31, STATE_VARIABLE_StyleControlMap_21_49, STATE_VARIABLE_StyleControlMap_17, Tail_44, HeadHTML_46, HTML_9);
      }
    }
    else
    {
      *HTML_9 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      *STATE_VARIABLE_StyleControlMap_17 = STATE_VARIABLE_StyleControlMap_0_16;
    }
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_p_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Separator_1,
  MR_Word STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * STATE_VARIABLE_StyleControlMap_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_HTML_0_6,
  MR_Word * STATE_VARIABLE_HTML_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HTML_7 = STATE_VARIABLE_HTML_0_6;
      *STATE_VARIABLE_StyleControlMap_4 = STATE_VARIABLE_StyleControlMap_0_3;
    }
    else
    {
      MR_Word Head_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Tail_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word HeadHTML_22;
      MR_Word STATE_VARIABLE_StyleControlMap_27_27;
      MR_Word STATE_VARIABLE_HTML_28_28;
      MR_Word Var_29;
      MR_Word next_value_of_STATE_VARIABLE_StyleControlMap_0_3;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_HTML_0_6;

      html_format__table_data_to_th_html_6_p_0(Var_34, Var_35, STATE_VARIABLE_StyleControlMap_0_3, &STATE_VARIABLE_StyleControlMap_27_27, Head_19, &HeadHTML_22);
      Var_29 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Separator_1, HeadHTML_22);
      STATE_VARIABLE_HTML_28_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_HTML_0_6, Var_29);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_StyleControlMap_0_3 = STATE_VARIABLE_StyleControlMap_27_27;
      next_value_of_HeadVar__5_5 = Tail_20;
      next_value_of_STATE_VARIABLE_HTML_0_6 = STATE_VARIABLE_HTML_28_28;
      STATE_VARIABLE_StyleControlMap_0_3 = next_value_of_STATE_VARIABLE_StyleControlMap_0_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_HTML_0_6 = next_value_of_STATE_VARIABLE_HTML_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
html_format__table_data_to_th_html_6_p_0(
  MR_Word FormatInfo_7,
  MR_Word ColumnClass_8,
  MR_Word STATE_VARIABLE_StyleControlMap_0_16,
  MR_Word * STATE_VARIABLE_StyleControlMap_17,
  MR_Word TableData_10,
  MR_Word * HTML_11)
{
  {
    MR_String ColumnClassStr_12 = ((&html_format_vector_common_6[13 + ColumnClass_8]))->html_format__vector_common_type_6_0__vct_6_f_0;
    MR_Word TableDataHTML_13;
    MR_String StartTag_14;
    MR_String Var_23;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;

    TableDataHTML_13 = html_format__table_data_to_html_2_f_0(FormatInfo_7, TableData_10);
    Var_23 = mercury__string__f_43_43_2_f_0(ColumnClassStr_12, (MR_String) "\">");
    StartTag_14 = mercury__string__f_43_43_2_f_0((MR_String) "<th class=\"", Var_23);
    Var_28 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (StartTag_14)));
    Var_30 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "</th>\n")));
    Var_29 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TableDataHTML_13, Var_30);
    *HTML_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_28, Var_29);
    *STATE_VARIABLE_StyleControlMap_17 = STATE_VARIABLE_StyleControlMap_0_16;
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_p_0(
  MR_Word Var_15,
  MR_Word Var_16,
  MR_Integer Var_17,
  MR_Word STATE_VARIABLE_StyleControlMap_0_10,
  MR_Word * STATE_VARIABLE_StyleControlMap_11,
  MR_Word List_8,
  MR_Word * HTML_9)
{
  {
    MR_Word Var_12;

    Var_12 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    if ((List_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HTML_9 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      *STATE_VARIABLE_StyleControlMap_11 = STATE_VARIABLE_StyleControlMap_0_10;
    }
    else
    {
      MR_Word Head_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List_8, (MR_Integer) 0))));
      MR_Word Tail_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List_8, (MR_Integer) 1))));
      MR_Word HeadHTML_30;
      MR_Word STATE_VARIABLE_StyleControlMap_21_33;

      html_format__table_row_to_html_7_p_0(Var_15, Var_16, Var_17, STATE_VARIABLE_StyleControlMap_0_10, &STATE_VARIABLE_StyleControlMap_21_33, Head_27, &HeadHTML_30);
      html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_p_0(Var_15, Var_16, Var_17, Var_12, STATE_VARIABLE_StyleControlMap_21_33, STATE_VARIABLE_StyleControlMap_11, Tail_28, HeadHTML_30, HTML_9);
    }
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_p_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Integer Var_36,
  MR_Word Separator_1,
  MR_Word STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * STATE_VARIABLE_StyleControlMap_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_HTML_0_6,
  MR_Word * STATE_VARIABLE_HTML_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HTML_7 = STATE_VARIABLE_HTML_0_6;
      *STATE_VARIABLE_StyleControlMap_4 = STATE_VARIABLE_StyleControlMap_0_3;
    }
    else
    {
      MR_Word Head_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Tail_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word HeadHTML_22;
      MR_Word STATE_VARIABLE_StyleControlMap_27_27;
      MR_Word STATE_VARIABLE_HTML_28_28;
      MR_Word Var_29;
      MR_Word next_value_of_STATE_VARIABLE_StyleControlMap_0_3;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_HTML_0_6;

      html_format__table_row_to_html_7_p_0(Var_34, Var_35, Var_36, STATE_VARIABLE_StyleControlMap_0_3, &STATE_VARIABLE_StyleControlMap_27_27, Head_19, &HeadHTML_22);
      Var_29 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Separator_1, HeadHTML_22);
      STATE_VARIABLE_HTML_28_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_HTML_0_6, Var_29);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_StyleControlMap_0_3 = STATE_VARIABLE_StyleControlMap_27_27;
      next_value_of_HeadVar__5_5 = Tail_20;
      next_value_of_STATE_VARIABLE_HTML_0_6 = STATE_VARIABLE_HTML_28_28;
      STATE_VARIABLE_StyleControlMap_0_3 = next_value_of_STATE_VARIABLE_StyleControlMap_0_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_HTML_0_6 = next_value_of_STATE_VARIABLE_HTML_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
html_format__table_row_to_html_7_p_0(
  MR_Word FormatInfo_8,
  MR_Word MaybeColClassMap_9,
  MR_Integer NumColumns_10,
  MR_Word STATE_VARIABLE_StyleControlMap_0_23,
  MR_Word * STATE_VARIABLE_StyleControlMap_24,
  MR_Word TableRow_12,
  MR_Word * HTML_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TableRow_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Str_18;
          MR_String Var_53;
          MR_String Var_60;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&html_format_scalar_common_7[0]), NumColumns_10, &Var_53);
          Var_60 = mercury__string__f_43_43_2_f_0(Var_53, (MR_String) "\"></td></tr>\n");
          Str_18 = mercury__string__f_43_43_2_f_0((MR_String) "<tr><td colspan=\"", Var_60);
          *HTML_13 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Str_18)));
          *STATE_VARIABLE_StyleControlMap_24 = STATE_VARIABLE_StyleControlMap_0_23;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Cells_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TableRow_12, (MR_Integer) 0))));
          MR_Word InnerHTML_20;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_77;

          html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(FormatInfo_8, MaybeColClassMap_9, STATE_VARIABLE_StyleControlMap_0_23, STATE_VARIABLE_StyleControlMap_24, (MR_Integer) 0, Cells_19, &InnerHTML_20);
          Var_75 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "<tr>\n")));
          Var_77 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "</tr>\n")));
          Var_76 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InnerHTML_20, Var_77);
          *HTML_13 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_75, Var_76);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Contents_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TableRow_12, (MR_Integer) 0))));
          MR_Word ContentsHTML_15;
          MR_String StartTag_16;
          MR_String Var_63;
          MR_String Var_70;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_88;

          ContentsHTML_15 = html_format__table_data_to_html_2_f_0(FormatInfo_8, Contents_14);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&html_format_scalar_common_7[0]), NumColumns_10, &Var_63);
          Var_70 = mercury__string__f_43_43_2_f_0(Var_63, (MR_String) "\">");
          StartTag_16 = mercury__string__f_43_43_2_f_0((MR_String) "<tr><td colspan=\"", Var_70);
          Var_86 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (StartTag_16)));
          Var_88 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "</td></tr>\n")));
          Var_87 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ContentsHTML_15, Var_88);
          *HTML_13 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_86, Var_87);
          *STATE_VARIABLE_StyleControlMap_24 = STATE_VARIABLE_StyleControlMap_0_23;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word RealTableRow_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TableRow_12, (MR_Integer) 0))));
          MR_Word Developer_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FormatInfo_8, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Developer_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                *HTML_13 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                *STATE_VARIABLE_StyleControlMap_24 = STATE_VARIABLE_StyleControlMap_0_23;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_TableRow_12 = RealTableRow_21;

                // direct tailcall eliminated
                ;
                TableRow_12 = next_value_of_TableRow_12;
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

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(
  MR_Word Var_18,
  MR_Word Var_19,
  MR_Word STATE_VARIABLE_StyleControlMap_0_12,
  MR_Word * STATE_VARIABLE_StyleControlMap_13,
  MR_Integer STATE_VARIABLE_ColumnNum_0_14,
  MR_Word List_10,
  MR_Word * HTML_11)
{
  {
    MR_Word Var_15;

    Var_15 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    if ((List_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HTML_11 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      *STATE_VARIABLE_StyleControlMap_13 = STATE_VARIABLE_StyleControlMap_0_12;
    }
    else
    {
      MR_Word Head_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List_10, (MR_Integer) 0))));
      MR_Word Tail_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List_10, (MR_Integer) 1))));
      MR_Word HeadHTML_34;
      MR_Word STATE_VARIABLE_StyleControlMap_25_38;
      MR_Integer STATE_VARIABLE_ColumnNum_26_39;

      html_format__table_cell_to_html_8_p_0(Var_18, Var_19, STATE_VARIABLE_StyleControlMap_0_12, &STATE_VARIABLE_StyleControlMap_25_38, STATE_VARIABLE_ColumnNum_0_14, &STATE_VARIABLE_ColumnNum_26_39, Head_31, &HeadHTML_34);
      html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_p_0(Var_18, Var_19, Var_15, STATE_VARIABLE_StyleControlMap_25_38, STATE_VARIABLE_StyleControlMap_13, STATE_VARIABLE_ColumnNum_26_39, Tail_32, HeadHTML_34, HTML_11);
    }
  }
}

static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_p_0(
  MR_Word Var_39,
  MR_Word Var_40,
  MR_Word Separator_1,
  MR_Word STATE_VARIABLE_StyleControlMap_0_3,
  MR_Word * STATE_VARIABLE_StyleControlMap_4,
  MR_Integer STATE_VARIABLE_ColumnNum_0_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_HTML_0_7,
  MR_Word * STATE_VARIABLE_HTML_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HTML_8 = STATE_VARIABLE_HTML_0_7;
      *STATE_VARIABLE_StyleControlMap_4 = STATE_VARIABLE_StyleControlMap_0_3;
    }
    else
    {
      MR_Word Head_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Tail_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word HeadHTML_25;
      MR_Word STATE_VARIABLE_StyleControlMap_31_31;
      MR_Integer STATE_VARIABLE_ColumnNum_32_32;
      MR_Word STATE_VARIABLE_HTML_33_33;
      MR_Word Var_34;
      MR_Word next_value_of_STATE_VARIABLE_StyleControlMap_0_3;
      MR_Integer next_value_of_STATE_VARIABLE_ColumnNum_0_5;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_HTML_0_7;

      html_format__table_cell_to_html_8_p_0(Var_39, Var_40, STATE_VARIABLE_StyleControlMap_0_3, &STATE_VARIABLE_StyleControlMap_31_31, STATE_VARIABLE_ColumnNum_0_5, &STATE_VARIABLE_ColumnNum_32_32, Head_22, &HeadHTML_25);
      Var_34 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Separator_1, HeadHTML_25);
      STATE_VARIABLE_HTML_33_33 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_HTML_0_7, Var_34);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_StyleControlMap_0_3 = STATE_VARIABLE_StyleControlMap_31_31;
      next_value_of_STATE_VARIABLE_ColumnNum_0_5 = STATE_VARIABLE_ColumnNum_32_32;
      next_value_of_HeadVar__6_6 = Tail_23;
      next_value_of_STATE_VARIABLE_HTML_0_7 = STATE_VARIABLE_HTML_33_33;
      STATE_VARIABLE_StyleControlMap_0_3 = next_value_of_STATE_VARIABLE_StyleControlMap_0_3;
      STATE_VARIABLE_ColumnNum_0_5 = next_value_of_STATE_VARIABLE_ColumnNum_0_5;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_HTML_0_7 = next_value_of_STATE_VARIABLE_HTML_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
html_format__table_cell_to_html_8_p_0(
  MR_Word FormatInfo_9,
  MR_Word MaybeClassMap_10,
  MR_Word STATE_VARIABLE_StyleControlMap_0_27,
  MR_Word * STATE_VARIABLE_StyleControlMap_28,
  MR_Integer STATE_VARIABLE_ColumnNum_0_29,
  MR_Integer * STATE_VARIABLE_ColumnNum_30,
  MR_Word Cell_13,
  MR_Word * HTML_14)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Cell_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_ColumnNum_30 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ColumnNum_0_29 + (MR_Unsigned) 1);
          *HTML_14 = html_format__str_to_html_1_f_0((MR_String) "<td/>");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CellData_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cell_13, (MR_Integer) 0))));
          MR_String ColumnClassStr_19;
          MR_Word CellHTML_23;
          MR_String StartTag_25;
          MR_String Var_178;
          MR_String Var_180;
          MR_String Var_181;

          if ((MaybeClassMap_10 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ColumnClass_22;
            MR_Word ColumnClassPrime_21;

            succeeded = html_format__table_data_class_2_p_0(CellData_15, &ColumnClassPrime_21);
            if (succeeded)
              ColumnClass_22 = ColumnClassPrime_21;
            else
              ColumnClass_22 = html_format__default_table_column_class_0_f_0();
            ColumnClassStr_19 = html_format__table_column_class_to_string_1_f_0(ColumnClass_22);
          }
          else
          {
            MR_Word ClassMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeClassMap_10, (MR_Integer) 0))));
            MR_String ColumnClassStrPrime_18;
            MR_Box conv0_ColumnClassStrPrime_18;

            succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ClassMap_17, STATE_VARIABLE_ColumnNum_0_29, &conv0_ColumnClassStrPrime_18);
            if (succeeded)
            {
              ColumnClassStrPrime_18 = ((MR_String) (conv0_ColumnClassStrPrime_18));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              ColumnClassStr_19 = ColumnClassStrPrime_18;
            else
            {
              MR_String Msg_20;
              MR_String Var_158;
              MR_String Var_165;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&html_format_scalar_common_7[0]), STATE_VARIABLE_ColumnNum_0_29, &Var_158);
              Var_165 = mercury__string__f_43_43_2_f_0(Var_158, (MR_String) ", check table structure");
              Msg_20 = mercury__string__f_43_43_2_f_0((MR_String) "Class map had no class for col ", Var_165);
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140html_format.table_cell_to_html\'/8", Msg_20);
                return;
              }
            }
          }
          CellHTML_23 = html_format__table_data_to_html_2_f_0(FormatInfo_9, CellData_15);
          *STATE_VARIABLE_ColumnNum_30 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ColumnNum_0_29 + (MR_Unsigned) 1);
          Var_178 = mercury__string__f_43_43_2_f_0(ColumnClassStr_19, (MR_String) "\">");
          Var_180 = mercury__string__f_43_43_2_f_0((MR_String) "class=\"", Var_178);
          Var_181 = mercury__string__f_43_43_2_f_0((MR_String) "", Var_180);
          StartTag_25 = mercury__string__f_43_43_2_f_0((MR_String) "<td ", Var_181);
          *HTML_14 = html_format__wrap_tags_3_f_0(StartTag_25, (MR_String) "</td>\n", CellHTML_23);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CellData_102 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Cell_13, (MR_Integer) 0))));
          MR_Integer Span_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Cell_13, (MR_Integer) 1))));
          MR_String ColumnClassStr_106;
          MR_Word CellHTML_110;
          MR_String SpanStr_111;
          MR_String StartTag_112;
          MR_String Var_152;
          MR_String Var_154;
          MR_String Var_155;

          if ((MaybeClassMap_10 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ColumnClass_54;
            MR_Word ColumnClassPrime_52;

            succeeded = html_format__table_data_class_2_p_0(CellData_102, &ColumnClassPrime_52);
            if (succeeded)
              ColumnClass_54 = ColumnClassPrime_52;
            else
              ColumnClass_54 = html_format__default_table_column_class_0_f_0();
            ColumnClassStr_106 = html_format__table_column_class_to_string_1_f_0(ColumnClass_54);
          }
          else
          {
            MR_Word ClassMap_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeClassMap_10, (MR_Integer) 0))));
            MR_String ColumnClassStrPrime_63;
            MR_Box conv1_ColumnClassStrPrime_63;

            succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ClassMap_72, STATE_VARIABLE_ColumnNum_0_29, &conv1_ColumnClassStrPrime_63);
            if (succeeded)
            {
              ColumnClassStrPrime_63 = ((MR_String) (conv1_ColumnClassStrPrime_63));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              ColumnClassStr_106 = ColumnClassStrPrime_63;
            else
            {
              MR_String Msg_57;
              MR_String Var_132;
              MR_String Var_139;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&html_format_scalar_common_7[0]), STATE_VARIABLE_ColumnNum_0_29, &Var_132);
              Var_139 = mercury__string__f_43_43_2_f_0(Var_132, (MR_String) ", check table structure");
              Msg_57 = mercury__string__f_43_43_2_f_0((MR_String) "Class map had no class for col ", Var_139);
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140html_format.table_cell_to_html\'/8", Msg_57);
                return;
              }
            }
          }
          CellHTML_110 = html_format__table_data_to_html_2_f_0(FormatInfo_9, CellData_102);
          succeeded = (Span_103 == (MR_Integer) 1);
          if (succeeded)
            SpanStr_111 = (MR_String) "";
          else
          {
            MR_String Var_142;
            MR_String Var_149;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&html_format_scalar_common_7[0]), Span_103, &Var_142);
            Var_149 = mercury__string__f_43_43_2_f_0(Var_142, (MR_String) " ");
            SpanStr_111 = mercury__string__f_43_43_2_f_0((MR_String) "colspan=", Var_149);
          }
          *STATE_VARIABLE_ColumnNum_30 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ColumnNum_0_29 + (MR_Unsigned) Span_103);
          Var_152 = mercury__string__f_43_43_2_f_0(ColumnClassStr_106, (MR_String) "\">");
          Var_154 = mercury__string__f_43_43_2_f_0((MR_String) "class=\"", Var_152);
          Var_155 = mercury__string__f_43_43_2_f_0(SpanStr_111, Var_154);
          StartTag_112 = mercury__string__f_43_43_2_f_0((MR_String) "<td ", Var_155);
          *HTML_14 = html_format__wrap_tags_3_f_0(StartTag_112, (MR_String) "</td>\n", CellHTML_110);
        }
        break;
    }
    *STATE_VARIABLE_StyleControlMap_28 = STATE_VARIABLE_StyleControlMap_0_27;
  }
}

static MR_String MR_CALL 
html_format__table_column_class_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = ((&html_format_vector_common_6[0 + HeadVar__1_1]))->html_format__vector_common_type_6_0__vct_6_f_0;

    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
html_format__default_table_column_class_0_f_0(void)
{
  {
    return (MR_Integer) 6;
  }
}

static MR_bool MR_CALL 
html_format__table_data_class_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        {
          *HeadVar__2_2 = (MR_Integer) 7;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              *HeadVar__2_2 = (MR_Integer) 7;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              *HeadVar__2_2 = (MR_Integer) 7;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              *HeadVar__2_2 = (MR_Integer) 7;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 4:
            {
              *HeadVar__2_2 = (MR_Integer) 7;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
html_format__table_data_to_html_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Acc_11;

    html_format__replace_special_char_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Acc_11);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Acc_11));
  }
}

static MR_bool MR_CALL 
html_format__table_data_to_html_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    succeeded = html_format__special_html_char_or_break_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
html_format__table_data_to_html_2_f_0(
  MR_Word FormatInfo_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Link_11 = (MR_Word) ((MR_Word) (HeadVar__2_2));

          HeadVar__3_3 = html_format__link_to_html_2_f_0(FormatInfo_1, Link_11);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word AttrString_24 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
          MR_String Var_25;

          Var_25 = html_format__escape_break_html_attr_string_1_f_0(AttrString_24);
          HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_25)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_5 = MR_unbox_float((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
          MR_String Var_6;

          Var_6 = measurement_units__two_decimal_fraction_1_f_0(Float_5);
          HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_6)));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Int_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
              MR_String Var_9;

              Var_9 = measurement_units__commas_1_f_0(Int_8);
              HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_9)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Mem_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
              MR_Word Units_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Integer Decimals_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
              MR_String Var_16;

              Var_16 = measurement_units__format_memory_3_f_0(Mem_13, Units_14, Decimals_15);
              HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_16)));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Percent_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
              MR_String Var_19;

              Var_19 = measurement_units__format_percent_1_f_0(Percent_18);
              HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_19)));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String String_21 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
              MR_String Var_22;
              MR_Word Chars_47;
              MR_Box conv2_Chars_47;

              mercury__string__foldr_4_p_0((MR_Word) (&html_format_scalar_common_2[2]), (MR_Word) (&html_format_scalar_common_5[1]), String_21, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Chars_47);
              Chars_47 = ((MR_Word) (conv2_Chars_47));
              mercury__string__from_char_list_2_p_0(Chars_47, &Var_22);
              HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_22)));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Time_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
              MR_String Var_28;

              Var_28 = measurement_units__format_time_1_f_0(Time_27);
              HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_28)));
            }
            break;
        }
        break;
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
html_format__link_to_html_2_f_0(
  MR_Word FormatInfo_4,
  MR_Word Link_5)
{
  {
    MR_Word HTML_6;
    MR_Word Cmd_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Link_5, (MR_Integer) 0))));
    MR_Word MaybePrefs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Link_5, (MR_Integer) 1))));
    MR_Word Label_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Link_5, (MR_Integer) 2))));
    MR_Word Class_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Link_5, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_String URL_11;
    MR_String HTMLStr_13;
    MR_String HostAndPort_43 = ((MR_String) ((MR_hl_field(MR_mktag(0), FormatInfo_4, (MR_Integer) 1))));
    MR_String Script_44 = ((MR_String) ((MR_hl_field(MR_mktag(0), FormatInfo_4, (MR_Integer) 2))));
    MR_String DeepFileName_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), FormatInfo_4, (MR_Integer) 3))));
    MR_Word DeepQuery_46;
    MR_Word Var_47;
    MR_String Var_55;
    MR_String Var_73;
    MR_String Var_74;
    MR_String Var_75;

    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Cmd_7));
    }
    {
      DeepQuery_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DeepQuery_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), DeepQuery_46, 1) = ((MR_Box) (DeepFileName_45));
      MR_hl_field(MR_mktag(0), DeepQuery_46, 2) = ((MR_Box) (MaybePrefs_8));
    }
    Var_55 = query__query_to_string_1_f_0(DeepQuery_46);
    Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "\?", Var_55);
    Var_74 = mercury__string__f_43_43_2_f_0(Script_44, Var_73);
    Var_75 = mercury__string__f_43_43_2_f_0(HostAndPort_43, Var_74);
    URL_11 = mercury__string__f_43_43_2_f_0((MR_String) "http://", Var_75);
    switch (Class_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_24;
          MR_String Var_34;
          MR_String Var_36;
          MR_String Var_37;

          Var_24 = html_format__escape_break_html_attr_string_1_f_0(Label_9);
          Var_34 = mercury__string__f_43_43_2_f_0(Var_24, (MR_String) "]</a>");
          Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "\">[", Var_34);
          Var_37 = mercury__string__f_43_43_2_f_0(URL_11, Var_36);
          HTMLStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "<a class=\"control\" href=\"", Var_37);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String Var_18;
          MR_String Var_28;
          MR_String Var_30;
          MR_String Var_31;

          Var_18 = html_format__escape_break_html_attr_string_1_f_0(Label_9);
          Var_28 = mercury__string__f_43_43_2_f_0(Var_18, (MR_String) "</a>");
          Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "\">", Var_28);
          Var_31 = mercury__string__f_43_43_2_f_0(URL_11, Var_30);
          HTMLStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "<a class=\"link\" href=\"", Var_31);
        }
        break;
    }
    HTML_6 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (HTMLStr_13)));
    return HTML_6;
  }
}

static void MR_CALL 
html_format__escape_break_html_attr_string_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Acc_11;

    html_format__replace_special_char_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Acc_11);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Acc_11));
  }
}

static MR_bool MR_CALL 
html_format__escape_break_html_attr_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    succeeded = html_format__special_html_char_or_break_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_String MR_CALL 
html_format__escape_break_html_attr_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_String HeadVar__2_2;
    MR_Word Attrs_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_String String_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_String Var_5;
    MR_Word Chars_13;
    MR_Box conv2_Chars_13;

    mercury__string__foldr_4_p_0((MR_Word) (&html_format_scalar_common_2[2]), (MR_Word) (&html_format_scalar_common_5[0]), String_4, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Chars_13);
    Chars_13 = ((MR_Word) (conv2_Chars_13));
    mercury__string__from_char_list_2_p_0(Chars_13, &Var_5);
    HeadVar__2_2 = html_format__handle_html_attrs_2_f_0(Attrs_3, Var_5);
    return HeadVar__2_2;
  }
}

static MR_String MR_CALL 
html_format__handle_html_attrs_2_f_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_String Str_3;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      Str_3 = HeadVar__2_2;
    else
    {
      MR_Word Attr_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Attrs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String InnerStr_9;

      InnerStr_9 = html_format__handle_html_attrs_2_f_0(Attrs_6, HeadVar__2_2);
      switch (Attr_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_17;

            Var_17 = mercury__string__f_43_43_2_f_0(InnerStr_9, (MR_String) "</b>");
            Str_3 = mercury__string__f_43_43_2_f_0((MR_String) "<b>", Var_17);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_14;

            Var_14 = mercury__string__f_43_43_2_f_0(InnerStr_9, (MR_String) "</i>");
            Str_3 = mercury__string__f_43_43_2_f_0((MR_String) "<i>", Var_14);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_11;

            Var_11 = mercury__string__f_43_43_2_f_0(InnerStr_9, (MR_String) "</u>");
            Str_3 = mercury__string__f_43_43_2_f_0((MR_String) "<u>", Var_11);
          }
          break;
      }
    }
    return Str_3;
  }
}

static MR_Word MR_CALL 
html_format__str_to_html_1_f_0(
  MR_String Str_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Str_3)));
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
html_format__empty_html_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;

    HeadVar__1_1 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    return HeadVar__1_1;
  }
}

static MR_String MR_CALL 
html_format__table_class_to_string_2_f_0(
  MR_Word FormatInfo_4,
  MR_Word Class_5)
{
  {
    MR_String ClassStr_6;

    switch (Class_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ClassStr_6 = (MR_String) "boxed";
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoxPrefs_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FormatInfo_4, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);

          switch (BoxPrefs_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ClassStr_6 = (MR_String) "boxed";
              break;
            case (MR_Integer) 1:
              ClassStr_6 = (MR_String) "plain";
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        ClassStr_6 = (MR_String) "plain";
        break;
    }
    return ClassStr_6;
  }
}

static MR_Word MR_CALL 
html_format__wrap_tags_3_f_0(
  MR_String StartTag_5,
  MR_String EndTag_6,
  MR_Word InnerHTML_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    Var_8 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (StartTag_5)));
    Var_10 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (EndTag_6)));
    Var_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InnerHTML_7, Var_10);
    HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_8, Var_9);
    return HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
html_format__init_format_info_2_f_0(
  MR_Word Deep_4,
  MR_Word Prefs_5)
{
  {
    MR_Word FormatInfo_6;
    MR_Word Var_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Prefs_5, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_String Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 1))));
    MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Prefs_5, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Prefs_5, (MR_Integer) 8))) & (MR_Integer) 1);
    MR_String Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 2))));
    MR_String Var_48 = ((MR_String) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 3))));

    {
      FormatInfo_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FormatInfo_6, 0) = (MR_Box) (((((MR_Unsigned) (Var_7) << 2)) | (((((MR_Unsigned) (Var_14) << 1)) | (MR_Unsigned) (Var_23)))));
      MR_hl_field(MR_mktag(0), FormatInfo_6, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), FormatInfo_6, 2) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), FormatInfo_6, 3) = ((MR_Box) (Var_48));
    }
    return FormatInfo_6;
  }
}

static MR_Word MR_CALL 
html_format__default_style_control_map_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_2;
    MR_Word Var_3;
    MR_Word Var_6;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_17;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_50;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_72;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_83;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_94;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_105;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_116;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_127;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_138;
    MR_Word Var_150;
    MR_Word Var_151;
    MR_Word Var_154;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Var_165;
    MR_Word Var_182;
    MR_Word Var_183;
    MR_Word Var_186;
    MR_Word Var_203;
    MR_Word Var_204;
    MR_Word Var_207;

    Var_6 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&html_format__html_format__type_ctor_info_style_element_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4])));
    {
      Var_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_3, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.allocations"))));
      MR_hl_field(MR_mktag(0), Var_3, 1) = ((MR_Box) (Var_6));
    }
    Var_17 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&html_format__html_format__type_ctor_info_style_element_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4])));
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.callseqs"))));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Var_17));
    }
    Var_28 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&html_format__html_format__type_ctor_info_style_element_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4])));
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.clique"))));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (Var_28));
    }
    Var_39 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&html_format__html_format__type_ctor_info_style_element_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[6])));
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.field_name"))));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (Var_39));
    }
    Var_50 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&html_format__html_format__type_ctor_info_style_element_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4])));
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.memory"))));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (Var_50));
    }
    Var_61 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&html_format__html_format__type_ctor_info_style_element_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[6])));
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.module_name"))));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (Var_61));
    }
    Var_72 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&html_format__html_format__type_ctor_info_style_element_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4])));
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.number"))));
      MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (Var_72));
    }
    Var_83 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&html_format__html_format__type_ctor_info_style_element_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4])));
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.ordinal_rank"))));
      MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (Var_83));
    }
    Var_94 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&html_format__html_format__type_ctor_info_style_element_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4])));
    {
      Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.port_counts"))));
      MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (Var_94));
    }
    Var_105 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&html_format__html_format__type_ctor_info_style_element_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[6])));
    {
      Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.proc"))));
      MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) (Var_105));
    }
    Var_116 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&html_format__html_format__type_ctor_info_style_element_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[6])));
    {
      Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.source_context"))));
      MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (Var_116));
    }
    Var_127 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&html_format__html_format__type_ctor_info_style_element_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4])));
    {
      Var_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.ticks_and_times"))));
      MR_hl_field(MR_mktag(0), Var_124, 1) = ((MR_Box) (Var_127));
    }
    Var_138 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&html_format__html_format__type_ctor_info_style_element_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[10])));
    {
      Var_135 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_135, 0) = ((MR_Box) (((MR_Box) ((MR_String) "a.control"))));
      MR_hl_field(MR_mktag(0), Var_135, 1) = ((MR_Box) (Var_138));
    }
    Var_154 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&html_format__html_format__type_ctor_info_style_element_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[12])));
    {
      Var_151 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_151, 0) = ((MR_Box) (((MR_Box) ((MR_String) "table.plain"))));
      MR_hl_field(MR_mktag(0), Var_151, 1) = ((MR_Box) (Var_154));
    }
    Var_165 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&html_format__html_format__type_ctor_info_style_element_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[18])));
    {
      Var_162 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_162, 0) = ((MR_Box) (((MR_Box) ((MR_String) "table.boxed"))));
      MR_hl_field(MR_mktag(0), Var_162, 1) = ((MR_Box) (Var_165));
    }
    Var_186 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&html_format__html_format__type_ctor_info_style_element_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[23])));
    {
      Var_183 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_183, 0) = ((MR_Box) (((MR_Box) ((MR_String) "table.boxed th"))));
      MR_hl_field(MR_mktag(0), Var_183, 1) = ((MR_Box) (Var_186));
    }
    Var_207 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&html_format__html_format__type_ctor_info_style_element_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(MR_mktag(1), &html_format_scalar_common_2[23])));
    {
      Var_204 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_204, 0) = ((MR_Box) (((MR_Box) ((MR_String) "table.boxed td"))));
      MR_hl_field(MR_mktag(0), Var_204, 1) = ((MR_Box) (Var_207));
    }
    {
      Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_203, 0) = ((MR_Box) (Var_204));
      MR_hl_field(MR_mktag(1), Var_203, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_182, 0) = ((MR_Box) (Var_183));
      MR_hl_field(MR_mktag(1), Var_182, 1) = ((MR_Box) (Var_203));
    }
    {
      Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (Var_162));
      MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) (Var_182));
    }
    {
      Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Var_151));
      MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (Var_161));
    }
    {
      Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Var_135));
      MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_150));
    }
    {
      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_134));
    }
    {
      Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Var_113));
      MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Var_123));
    }
    {
      Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_112));
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_101));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_90));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_79));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_68));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_2, 0) = ((MR_Box) (Var_3));
      MR_hl_field(MR_mktag(1), Var_2, 1) = ((MR_Box) (Var_13));
    }
    HeadVar__1_1 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&html_format__html_format__type_ctor_info_style_control_0), (MR_Word) (&html_format_scalar_common_1[0]), Var_2);
    return HeadVar__1_1;
  }
}

static MR_Box MR_CALL 
html_format__css_style_html_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HTML_5;

    conv0_HTML_5 = html_format__style_control_to_html_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HTML_5));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
html_format__css_style_html_1_f_0(
  MR_Word StyleControlMap_3)
{
  {
    MR_Word HTML_4;
    MR_Word StyleControls_5;
    MR_Word ControlHTMLs_6;
    MR_Word ControlsHTML_7;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&html_format__html_format__type_ctor_info_style_control_0), (MR_Word) (&html_format_scalar_common_1[0]), StyleControlMap_3, &StyleControls_5);
    ControlHTMLs_6 = mercury__list__map_2_f_0((MR_Word) (&html_format_scalar_common_1[1]), (MR_Word) (&html_format_scalar_common_2[0]), (MR_Word) (&html_format_scalar_common_1[5]), StyleControls_5);
    ControlsHTML_7 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ControlHTMLs_6);
    Var_22 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "<style type=\"text/css\">\n")));
    Var_24 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "</style>\n")));
    Var_23 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ControlsHTML_7, Var_24);
    HTML_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_22, Var_23);
    return HTML_4;
  }
}

static MR_bool MR_CALL 
html_format____Unify____column_class_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = html_format____Unify____column_class_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
html_format____Compare____column_class_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    html_format____Compare____column_class_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
html_format____Unify____format_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = html_format____Unify____format_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
html_format____Compare____format_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    html_format____Compare____format_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
html_format____Unify____html_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = html_format____Unify____html_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
html_format____Compare____html_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    html_format____Compare____html_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
html_format____Unify____style_control_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = html_format____Unify____style_control_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
html_format____Compare____style_control_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    html_format____Compare____style_control_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
html_format____Unify____style_control_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = html_format____Unify____style_control_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
html_format____Compare____style_control_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    html_format____Compare____style_control_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
html_format____Unify____style_element_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = html_format____Unify____style_element_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
html_format____Compare____style_element_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    html_format____Compare____style_element_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
html_format____Unify____style_element_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = html_format____Unify____style_element_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
html_format____Compare____style_element_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    html_format____Compare____style_element_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
html_format____Unify____table_header_rows_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = html_format____Unify____table_header_rows_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
html_format____Compare____table_header_rows_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    html_format____Compare____table_header_rows_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module html_format.
