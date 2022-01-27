/*
** Automatically generated from `html_format.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "display.mih"
#include "enum.mih"
#include "exclude.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
#include "query.mih"
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 152 "html_format.m"
struct html_format__item_to_html_7_p_0_env_0_s {
#line 158 "html_format.m"
  MR_bool html_format__item_to_html_7_p_0_env_0__succeeded;
#line 180 "html_format.m"
  MR_Word html_format__item_to_html_7_p_0_env_0__Items_21;
#line 188 "html_format.m"
  jmp_buf html_format__item_to_html_7_p_0_env_0__commit_0;
#line 188 "html_format.m"
  MR_Word html_format__item_to_html_7_p_0_env_0__ListItem_45;
#line 188 "html_format.m"
  MR_Box html_format__item_to_html_7_p_0_env_0__conv0_ListItem_45;
#line 152 "html_format.m"
};


#line 102 "html_format.c"
static const MR_VA_PseudoTypeInfo_Struct2 html_format____vpti_pred_2__plain_builtin__type_ctor_info_character_0__plain_builtin__type_ctor_info_string_0;

#line 105 "html_format.c"
static const MR_FA_PseudoTypeInfo_Struct1 html_format__list__pti_list_1__plain_builtin__type_ctor_info_character_0;

#line 108 "html_format.c"
static const MR_FA_TypeInfo_Struct2 html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0;

#line 111 "html_format.c"
static const MR_FA_PseudoTypeInfo_Struct2 html_format__pair__pti_pair_2__plain_html_format__type_ctor_info_style_control_0__plain_tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0;

#line 114 "html_format.c"
static const MR_FA_PseudoTypeInfo_Struct1 html_format__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

#line 117 "html_format.c"
static const MR_FA_PseudoTypeInfo_Struct2 html_format__pair__pti_pair_2__plain_html_format__type_ctor_info_style_element_0__plain_builtin__type_ctor_info_string_0;

#line 120 "html_format.c"
static const MR_FA_PseudoTypeInfo_Struct2 html_format__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

#line 123 "html_format.c"
static const MR_FA_PseudoTypeInfo_Struct1 html_format__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

#line 126 "html_format.c"
static const MR_FA_PseudoTypeInfo_Struct2 html_format__tree234__pti_tree234_2__plain_html_format__type_ctor_info_style_control_0__plain_tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0;

#line 129 "html_format.c"
static const MR_FA_TypeInfo_Struct2 html_format__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0;

#line 132 "html_format.c"
static const MR_PseudoTypeInfo html_format__html_format__field_types_format_info_0_0[6];

#line 135 "html_format.c"
static const MR_ConstString html_format__html_format__field_names_format_info_0_0[6];

#line 138 "html_format.c"
static const MR_DuArgLocn html_format__html_format__field_locns_format_info_0_0[6];

#line 141 "html_format.c"
static const MR_DuFunctorDesc html_format__html_format__du_functor_desc_format_info_0_0;

#line 144 "html_format.c"
static const MR_DuFunctorDescPtr html_format__html_format__du_stag_ordered_format_info_0_0[1];

#line 147 "html_format.c"
static const MR_DuPtagLayout html_format__html_format__du_ptag_ordered_format_info_0[1];

#line 150 "html_format.c"
static const MR_DuFunctorDescPtr html_format__html_format__du_name_ordered_format_info_0[1];

#line 153 "html_format.c"
static const MR_Integer html_format__html_format__functor_number_map_format_info_0[1];

#line 156 "html_format.c"
static const MR_FA_TypeInfo_Struct1 html_format__cord__ti_cord_1builtin__type_ctor_info_string_0;

#line 159 "html_format.c"
static const MR_Integer html_format__html_format__functor_number_map_style_control_0[1];

#line 162 "html_format.c"
static const MR_NotagFunctorDesc html_format__html_format__notag_functor_desc_style_control_0;

#line 165 "html_format.c"
static const MR_FA_TypeInfo_Struct2 html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_control_0tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0;

#line 168 "html_format.c"
static const MR_Integer html_format__html_format__functor_number_map_style_element_0[1];

#line 171 "html_format.c"
static const MR_NotagFunctorDesc html_format__html_format__notag_functor_desc_style_element_0;

#line 174 "html_format.c"
static const MR_EnumFunctorDesc html_format__html_format__enum_functor_desc_table_header_rows_0_0;

#line 177 "html_format.c"
static const MR_EnumFunctorDesc html_format__html_format__enum_functor_desc_table_header_rows_0_1;

#line 180 "html_format.c"
static const MR_EnumFunctorDescPtr html_format__html_format__enum_value_ordered_table_header_rows_0[2];

#line 183 "html_format.c"
static const MR_EnumFunctorDescPtr html_format__html_format__enum_name_ordered_table_header_rows_0[2];

#line 186 "html_format.c"
static const MR_Integer html_format__html_format__functor_number_map_table_header_rows_0[2];

#line 189 "html_format.c"
static MR_bool MR_CALL 
html_format____Unify____column_class_map_0_0_10001(
#line 192 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 194 "html_format.c"
  MR_Box html_format__wrapper_arg_2);

#line 197 "html_format.c"
static void MR_CALL 
html_format____Compare____column_class_map_0_0_10001(
#line 200 "html_format.c"
  MR_Box * html_format__wrapper_arg_1,
#line 202 "html_format.c"
  MR_Box html_format__wrapper_arg_2,
#line 204 "html_format.c"
  MR_Box html_format__wrapper_arg_3);

#line 207 "html_format.c"
static MR_bool MR_CALL 
html_format____Unify____format_info_0_0_10001(
#line 210 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 212 "html_format.c"
  MR_Box html_format__wrapper_arg_2);

#line 215 "html_format.c"
static void MR_CALL 
html_format____Compare____format_info_0_0_10001(
#line 218 "html_format.c"
  MR_Box * html_format__wrapper_arg_1,
#line 220 "html_format.c"
  MR_Box html_format__wrapper_arg_2,
#line 222 "html_format.c"
  MR_Box html_format__wrapper_arg_3);

#line 225 "html_format.c"
static MR_bool MR_CALL 
html_format____Unify____html_0_0_10001(
#line 228 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 230 "html_format.c"
  MR_Box html_format__wrapper_arg_2);

#line 233 "html_format.c"
static void MR_CALL 
html_format____Compare____html_0_0_10001(
#line 236 "html_format.c"
  MR_Box * html_format__wrapper_arg_1,
#line 238 "html_format.c"
  MR_Box html_format__wrapper_arg_2,
#line 240 "html_format.c"
  MR_Box html_format__wrapper_arg_3);

#line 243 "html_format.c"
static MR_bool MR_CALL 
html_format____Unify____style_control_0_0_10001(
#line 246 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 248 "html_format.c"
  MR_Box html_format__wrapper_arg_2);

#line 251 "html_format.c"
static void MR_CALL 
html_format____Compare____style_control_0_0_10001(
#line 254 "html_format.c"
  MR_Box * html_format__wrapper_arg_1,
#line 256 "html_format.c"
  MR_Box html_format__wrapper_arg_2,
#line 258 "html_format.c"
  MR_Box html_format__wrapper_arg_3);

#line 261 "html_format.c"
static MR_bool MR_CALL 
html_format____Unify____style_control_map_0_0_10001(
#line 264 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 266 "html_format.c"
  MR_Box html_format__wrapper_arg_2);

#line 269 "html_format.c"
static void MR_CALL 
html_format____Compare____style_control_map_0_0_10001(
#line 272 "html_format.c"
  MR_Box * html_format__wrapper_arg_1,
#line 274 "html_format.c"
  MR_Box html_format__wrapper_arg_2,
#line 276 "html_format.c"
  MR_Box html_format__wrapper_arg_3);

#line 279 "html_format.c"
static MR_bool MR_CALL 
html_format____Unify____style_element_0_0_10001(
#line 282 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 284 "html_format.c"
  MR_Box html_format__wrapper_arg_2);

#line 287 "html_format.c"
static void MR_CALL 
html_format____Compare____style_element_0_0_10001(
#line 290 "html_format.c"
  MR_Box * html_format__wrapper_arg_1,
#line 292 "html_format.c"
  MR_Box html_format__wrapper_arg_2,
#line 294 "html_format.c"
  MR_Box html_format__wrapper_arg_3);

#line 297 "html_format.c"
static MR_bool MR_CALL 
html_format____Unify____style_element_map_0_0_10001(
#line 300 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 302 "html_format.c"
  MR_Box html_format__wrapper_arg_2);

#line 305 "html_format.c"
static void MR_CALL 
html_format____Compare____style_element_map_0_0_10001(
#line 308 "html_format.c"
  MR_Box * html_format__wrapper_arg_1,
#line 310 "html_format.c"
  MR_Box html_format__wrapper_arg_2,
#line 312 "html_format.c"
  MR_Box html_format__wrapper_arg_3);

#line 315 "html_format.c"
static MR_bool MR_CALL 
html_format____Unify____table_header_rows_0_0_10001(
#line 318 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 320 "html_format.c"
  MR_Box html_format__wrapper_arg_2);

#line 323 "html_format.c"
static void MR_CALL 
html_format____Compare____table_header_rows_0_0_10001(
#line 326 "html_format.c"
  MR_Box * html_format__wrapper_arg_1,
#line 328 "html_format.c"
  MR_Box html_format__wrapper_arg_2,
#line 330 "html_format.c"
  MR_Box html_format__wrapper_arg_3);

#line 926 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_p_0(
#line 926 "html_format.m"
  MR_Word html_format__V_34_34,
#line 926 "html_format.m"
  MR_Word html_format__V_35_35,
#line 926 "html_format.m"
  MR_Word html_format__Separator_1,
#line 926 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
#line 926 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
#line 926 "html_format.m"
  MR_Word html_format__HeadVar__5_5,
#line 926 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_HTML_0_6,
#line 926 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_HTML_7);

#line 926 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_p_0(
#line 926 "html_format.m"
  MR_Word html_format__V_34_34,
#line 926 "html_format.m"
  MR_Word html_format__Separator_1,
#line 926 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
#line 926 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
#line 926 "html_format.m"
  MR_Word html_format__HeadVar__5_5,
#line 926 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_HTML_0_6,
#line 926 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_HTML_7);

#line 926 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_p_0(
#line 926 "html_format.m"
  MR_Word html_format__V_34_34,
#line 926 "html_format.m"
  MR_Word html_format__V_35_35,
#line 926 "html_format.m"
  MR_Integer html_format__V_36_36,
#line 926 "html_format.m"
  MR_Word html_format__Separator_1,
#line 926 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
#line 926 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
#line 926 "html_format.m"
  MR_Word html_format__HeadVar__5_5,
#line 926 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_HTML_0_6,
#line 926 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_HTML_7);

#line 926 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_p_0(
#line 926 "html_format.m"
  MR_Word html_format__V_34_34,
#line 926 "html_format.m"
  MR_Word html_format__V_35_35,
#line 926 "html_format.m"
  MR_Word html_format__Separator_1,
#line 926 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
#line 926 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
#line 926 "html_format.m"
  MR_Word html_format__HeadVar__5_5,
#line 926 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_HTML_0_6,
#line 926 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_HTML_7);

#line 969 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_p_0(
#line 969 "html_format.m"
  MR_Word html_format__V_39_39,
#line 969 "html_format.m"
  MR_Word html_format__V_40_40,
#line 969 "html_format.m"
  MR_Word html_format__Separator_1,
#line 969 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
#line 969 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
#line 969 "html_format.m"
  MR_Integer html_format__STATE_VARIABLE_ColumnNum_0_5,
#line 969 "html_format.m"
  MR_Word html_format__HeadVar__6_6,
#line 969 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_HTML_0_7,
#line 969 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_HTML_8);

#line 926 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_p_0(
#line 926 "html_format.m"
  MR_String html_format__V_34_34,
#line 926 "html_format.m"
  MR_String html_format__V_35_35,
#line 926 "html_format.m"
  MR_Word html_format__V_36_36,
#line 926 "html_format.m"
  MR_Word html_format__Separator_1,
#line 926 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
#line 926 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
#line 926 "html_format.m"
  MR_Word html_format__HeadVar__5_5,
#line 926 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_HTML_0_6,
#line 926 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_HTML_7);

#line 902 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_p_0(
#line 902 "html_format.m"
  MR_String html_format__V_15_15,
#line 902 "html_format.m"
  MR_String html_format__V_16_16,
#line 902 "html_format.m"
  MR_Word html_format__V_17_17,
#line 902 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_10,
#line 902 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_11,
#line 902 "html_format.m"
  MR_Word html_format__List_8,
#line 902 "html_format.m"
  MR_Word * html_format__HTML_9);

#line 902 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_p_0(
#line 902 "html_format.m"
  MR_Word html_format__V_15_15,
#line 902 "html_format.m"
  MR_Word html_format__V_16_16,
#line 902 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_10,
#line 902 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_11,
#line 902 "html_format.m"
  MR_Word html_format__List_8,
#line 902 "html_format.m"
  MR_Word * html_format__HTML_9);

#line 902 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_p_0(
#line 902 "html_format.m"
  MR_Word html_format__V_15_15,
#line 902 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_10,
#line 902 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_11,
#line 902 "html_format.m"
  MR_Word html_format__List_8,
#line 902 "html_format.m"
  MR_Word * html_format__HTML_9);

#line 902 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_p_0(
#line 902 "html_format.m"
  MR_Word html_format__V_15_15,
#line 902 "html_format.m"
  MR_Word html_format__V_16_16,
#line 902 "html_format.m"
  MR_Integer html_format__V_17_17,
#line 902 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_10,
#line 902 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_11,
#line 902 "html_format.m"
  MR_Word html_format__List_8,
#line 902 "html_format.m"
  MR_Word * html_format__HTML_9);

#line 942 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(
#line 942 "html_format.m"
  MR_Word html_format__V_18_18,
#line 942 "html_format.m"
  MR_Word html_format__V_19_19,
#line 942 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_12,
#line 942 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_13,
#line 942 "html_format.m"
  MR_Integer html_format__STATE_VARIABLE_ColumnNum_0_14,
#line 942 "html_format.m"
  MR_Word html_format__List_10,
#line 942 "html_format.m"
  MR_Word * html_format__HTML_11);

#line 914 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_49_95_95_91_53_93_95_48_6_p_0(
#line 914 "html_format.m"
  MR_String html_format__V_24_24,
#line 914 "html_format.m"
  MR_String html_format__V_25_25,
#line 914 "html_format.m"
  MR_Word html_format__V_26_26,
#line 914 "html_format.m"
  MR_Word html_format__Separator_1,
#line 914 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
#line 914 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
#line 914 "html_format.m"
  MR_Word html_format__HeadVar__5_5,
#line 914 "html_format.m"
  MR_Word * html_format__HeadVar__6_6);

#line 1018 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_4(
#line 1018 "html_format.m"
  MR_Box html_format__closure_arg,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_1,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_2,
#line 1018 "html_format.m"
  MR_Box * html_format__wrapper_arg_3);

#line 573 "html_format.c"
static MR_bool MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_3(
#line 576 "html_format.c"
  MR_Box html_format__closure_arg,
#line 578 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 580 "html_format.c"
  MR_Box * html_format__wrapper_arg_2);

#line 1018 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_2(
#line 1018 "html_format.m"
  MR_Box html_format__closure_arg,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_1,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_2,
#line 1018 "html_format.m"
  MR_Box * html_format__wrapper_arg_3);

#line 595 "html_format.c"
static MR_bool MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_1(
#line 598 "html_format.c"
  MR_Box html_format__closure_arg,
#line 600 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 602 "html_format.c"
  MR_Box * html_format__wrapper_arg_2);

#line 816 "html_format.m"
static MR_Word MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0(
#line 816 "html_format.m"
  MR_Word html_format__PseudoLink_5);

#line 223 "html_format.m"
static void MR_CALL 
html_format____Compare____table_header_rows_0_0(
#line 223 "html_format.m"
  MR_Word * html_format__HeadVar__1_1,
#line 223 "html_format.m"
  MR_Word html_format__HeadVar__2_2,
#line 223 "html_format.m"
  MR_Word html_format__HeadVar__3_3);

#line 223 "html_format.m"
static MR_bool MR_CALL 
html_format____Unify____table_header_rows_0_0(
#line 223 "html_format.m"
  MR_Word html_format__HeadVar__2_1,
#line 223 "html_format.m"
  MR_Word html_format__HeadVar__2_2);

#line 617 "html_format.m"
static void MR_CALL 
html_format____Compare____style_element_map_0_0(
#line 617 "html_format.m"
  MR_Word * html_format__HeadVar__1_1,
#line 617 "html_format.m"
  MR_Word html_format__HeadVar__2_2,
#line 617 "html_format.m"
  MR_Word html_format__HeadVar__3_3);

#line 617 "html_format.m"
static MR_bool MR_CALL 
html_format____Unify____style_element_map_0_0(
#line 617 "html_format.m"
  MR_Word html_format__HeadVar__1_1,
#line 617 "html_format.m"
  MR_Word html_format__HeadVar__2_2);

#line 612 "html_format.m"
static void MR_CALL 
html_format____Compare____style_element_0_0(
#line 612 "html_format.m"
  MR_Word * html_format__HeadVar__1_1,
#line 612 "html_format.m"
  MR_Word html_format__HeadVar__2_2,
#line 612 "html_format.m"
  MR_Word html_format__HeadVar__3_3);

#line 612 "html_format.m"
static MR_bool MR_CALL 
html_format____Unify____style_element_0_0(
#line 612 "html_format.m"
  MR_Word html_format__HeadVar__1_1,
#line 612 "html_format.m"
  MR_Word html_format__HeadVar__2_2);

#line 627 "html_format.m"
static void MR_CALL 
html_format____Compare____style_control_map_0_0(
#line 627 "html_format.m"
  MR_Word * html_format__HeadVar__1_1,
#line 627 "html_format.m"
  MR_Word html_format__HeadVar__2_2,
#line 627 "html_format.m"
  MR_Word html_format__HeadVar__3_3);

#line 627 "html_format.m"
static MR_bool MR_CALL 
html_format____Unify____style_control_map_0_0(
#line 627 "html_format.m"
  MR_Word html_format__HeadVar__1_1,
#line 627 "html_format.m"
  MR_Word html_format__HeadVar__2_2);

#line 622 "html_format.m"
static void MR_CALL 
html_format____Compare____style_control_0_0(
#line 622 "html_format.m"
  MR_Word * html_format__HeadVar__1_1,
#line 622 "html_format.m"
  MR_Word html_format__HeadVar__2_2,
#line 622 "html_format.m"
  MR_Word html_format__HeadVar__3_3);

#line 622 "html_format.m"
static MR_bool MR_CALL 
html_format____Unify____style_control_0_0(
#line 622 "html_format.m"
  MR_Word html_format__HeadVar__1_1,
#line 622 "html_format.m"
  MR_Word html_format__HeadVar__2_2);

#line 833 "html_format.m"
static void MR_CALL 
html_format____Compare____format_info_0_0(
#line 833 "html_format.m"
  MR_Word * html_format__HeadVar__1_1,
#line 833 "html_format.m"
  MR_Word html_format__HeadVar__2_2,
#line 833 "html_format.m"
  MR_Word html_format__HeadVar__3_3);

#line 833 "html_format.m"
static MR_bool MR_CALL 
html_format____Unify____format_info_0_0(
#line 833 "html_format.m"
  MR_Word html_format__HeadVar__1_1,
#line 833 "html_format.m"
  MR_Word html_format__HeadVar__2_2);

#line 229 "html_format.m"
static void MR_CALL 
html_format____Compare____column_class_map_0_0(
#line 229 "html_format.m"
  MR_Word * html_format__HeadVar__1_1,
#line 229 "html_format.m"
  MR_Word html_format__HeadVar__2_2,
#line 229 "html_format.m"
  MR_Word html_format__HeadVar__3_3);

#line 229 "html_format.m"
static MR_bool MR_CALL 
html_format____Unify____column_class_map_0_0(
#line 229 "html_format.m"
  MR_Word html_format__HeadVar__1_1,
#line 229 "html_format.m"
  MR_Word html_format__HeadVar__2_2);

#line 1045 "html_format.m"
static MR_bool MR_CALL 
html_format__special_html_char_or_break_2_p_0(
#line 1045 "html_format.m"
  MR_Char html_format__HeadVar__1_1,
#line 1045 "html_format.m"
  MR_String * html_format__HeadVar__2_2);

#line 1033 "html_format.m"
static MR_bool MR_CALL 
html_format__special_html_char_2_p_0(
#line 1033 "html_format.m"
  MR_Char html_format__HeadVar__1_1,
#line 1033 "html_format.m"
  MR_String * html_format__HeadVar__2_2);

#line 1021 "html_format.m"
static void MR_CALL 
html_format__replace_special_char_2_4_p_0(
#line 1021 "html_format.m"
  MR_Word html_format__SpecialCharTable_5,
#line 1021 "html_format.m"
  MR_Char html_format__Char_6,
#line 1021 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_Acc_0_10,
#line 1021 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_Acc_11);

#line 998 "html_format.m"
static MR_String MR_CALL 
html_format__handle_html_attrs_2_f_0(
#line 998 "html_format.m"
  MR_Word html_format__HeadVar__1_1,
#line 998 "html_format.m"
  MR_String html_format__HeadVar__2_2);

#line 894 "html_format.m"
static MR_Word MR_CALL 
html_format__str_to_html_1_f_0(
#line 894 "html_format.m"
  MR_String html_format__Str_3);

#line 886 "html_format.m"
static MR_Word MR_CALL 
html_format__empty_html_0_f_0(void);

#line 881 "html_format.m"
static MR_Word MR_CALL 
html_format__wrap_tags_3_f_0(
#line 881 "html_format.m"
  MR_String html_format__StartTag_5,
#line 881 "html_format.m"
  MR_String html_format__EndTag_6,
#line 881 "html_format.m"
  MR_Word html_format__InnerHTML_7);

#line 858 "html_format.m"
static void MR_CALL 
html_format__deep_cmd_to_url_4_p_0(
#line 858 "html_format.m"
  MR_Word html_format__FormatInfo_5,
#line 858 "html_format.m"
  MR_Word html_format__Cmd_6,
#line 858 "html_format.m"
  MR_Word html_format__MaybePrefs_7,
#line 858 "html_format.m"
  MR_String * html_format__URL_8);

#line 847 "html_format.m"
static MR_Word MR_CALL 
html_format__init_format_info_2_f_0(
#line 847 "html_format.m"
  MR_Word html_format__Deep_4,
#line 847 "html_format.m"
  MR_Word html_format__Prefs_5);

#line 795 "html_format.m"
static MR_Word MR_CALL 
html_format__link_to_html_2_f_0(
#line 795 "html_format.m"
  MR_Word html_format__FormatInfo_4,
#line 795 "html_format.m"
  MR_Word html_format__Link_5);

#line 733 "html_format.m"
static void MR_CALL 
html_format__list_to_html_7_p_0(
#line 733 "html_format.m"
  MR_Word html_format__FormatInfo_8,
#line 733 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_26,
#line 733 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_27,
#line 733 "html_format.m"
  MR_Word html_format__Class_10,
#line 733 "html_format.m"
  MR_Word html_format__MaybeTitle_11,
#line 733 "html_format.m"
  MR_Word html_format__Items_12,
#line 733 "html_format.m"
  MR_Word * html_format__HTML_13);

#line 631 "html_format.m"
static MR_Word MR_CALL 
html_format__default_style_control_map_0_f_0(void);

#line 586 "html_format.m"
static MR_String MR_CALL 
html_format__table_class_to_string_2_f_0(
#line 586 "html_format.m"
  MR_Word html_format__FormatInfo_4,
#line 586 "html_format.m"
  MR_Word html_format__Class_5);

#line 568 "html_format.m"
static MR_String MR_CALL 
html_format__table_column_class_to_string_1_f_0(
#line 568 "html_format.m"
  MR_Word html_format__HeadVar__1_1);

#line 564 "html_format.m"
static MR_Word MR_CALL 
html_format__default_table_column_class_0_f_0(void);

#line 556 "html_format.m"
static MR_bool MR_CALL 
html_format__table_data_class_2_p_0(
#line 556 "html_format.m"
  MR_Word html_format__HeadVar__1_1,
#line 556 "html_format.m"
  MR_Word * html_format__HeadVar__2_2);

#line 1018 "html_format.m"
static void MR_CALL 
html_format__table_data_to_html_2_f_0_2(
#line 1018 "html_format.m"
  MR_Box html_format__closure_arg,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_1,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_2,
#line 1018 "html_format.m"
  MR_Box * html_format__wrapper_arg_3);

#line 881 "html_format.c"
static MR_bool MR_CALL 
html_format__table_data_to_html_2_f_0_1(
#line 884 "html_format.c"
  MR_Box html_format__closure_arg,
#line 886 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 888 "html_format.c"
  MR_Box * html_format__wrapper_arg_2);

#line 532 "html_format.m"
static MR_Word MR_CALL 
html_format__table_data_to_html_2_f_0(
#line 532 "html_format.m"
  MR_Word html_format__FormatInfo_1,
#line 532 "html_format.m"
  MR_Word html_format__HeadVar__2_2);

#line 481 "html_format.m"
static void MR_CALL 
html_format__table_cell_to_html_8_p_0(
#line 481 "html_format.m"
  MR_Word html_format__FormatInfo_9,
#line 481 "html_format.m"
  MR_Word html_format__MaybeClassMap_10,
#line 481 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_27,
#line 481 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_28,
#line 481 "html_format.m"
  MR_Integer html_format__STATE_VARIABLE_ColumnNum_0_29,
#line 481 "html_format.m"
  MR_Integer * html_format__STATE_VARIABLE_ColumnNum_30,
#line 481 "html_format.m"
  MR_Word html_format__Cell_13,
#line 481 "html_format.m"
  MR_Word * html_format__HTML_14);

#line 444 "html_format.m"
static void MR_CALL 
html_format__table_row_to_html_7_p_0(
#line 444 "html_format.m"
  MR_Word html_format__FormatInfo_8,
#line 444 "html_format.m"
  MR_Word html_format__MaybeColClassMap_9,
#line 444 "html_format.m"
  MR_Integer html_format__NumColumns_10,
#line 444 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_23,
#line 444 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_24,
#line 444 "html_format.m"
  MR_Word html_format__TableRow_12,
#line 444 "html_format.m"
  MR_Word * html_format__HTML_13);

#line 413 "html_format.m"
static void MR_CALL 
html_format__update_style_control_map_7_p_0(
#line 413 "html_format.m"
  MR_String html_format__ColumnClassStr_8,
#line 413 "html_format.m"
  MR_Integer html_format__STATE_VARIABLE_HeaderGroupNumber_0_17,
#line 413 "html_format.m"
  MR_Integer * html_format__STATE_VARIABLE_HeaderGroupNumber_18,
#line 413 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_ColouredClassStrs_0_19,
#line 413 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_ColouredClassStrs_20,
#line 413 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_21,
#line 413 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_22);

#line 407 "html_format.m"
static void MR_CALL 
html_format__insert_column_into_classmap_4_p_0(
#line 407 "html_format.m"
  MR_String html_format__Value_5,
#line 407 "html_format.m"
  MR_Integer html_format__Key_6,
#line 407 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_Map_0_8,
#line 407 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_Map_9);

#line 385 "html_format.m"
static void MR_CALL 
html_format__table_header_num_rows_and_classmap_14_p_0_1(
#line 385 "html_format.m"
  MR_Box html_format__closure_arg,
#line 385 "html_format.m"
  MR_Box html_format__wrapper_arg_1,
#line 385 "html_format.m"
  MR_Box html_format__wrapper_arg_2,
#line 385 "html_format.m"
  MR_Box * html_format__wrapper_arg_3);

#line 365 "html_format.m"
static void MR_CALL 
html_format__table_header_num_rows_and_classmap_14_p_0(
#line 365 "html_format.m"
  MR_Word html_format__FormatInfo_15,
#line 365 "html_format.m"
  MR_Word html_format__HeaderGroup_16,
#line 365 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_NumRows_0_32,
#line 365 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_NumRows_33,
#line 365 "html_format.m"
  MR_Integer html_format__STATE_VARIABLE_ColumnNumber_0_34,
#line 365 "html_format.m"
  MR_Integer * html_format__STATE_VARIABLE_ColumnNumber_35,
#line 365 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_ClassMap_0_36,
#line 365 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_ClassMap_37,
#line 365 "html_format.m"
  MR_Integer html_format__STATE_VARIABLE_HeaderGroupNumber_0_38,
#line 365 "html_format.m"
  MR_Integer * html_format__STATE_VARIABLE_HeaderGroupNumber_39,
#line 365 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_ColouredClassStrs_0_40,
#line 365 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_ColouredClassStrs_41,
#line 365 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_42,
#line 365 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_43);

#line 345 "html_format.m"
static void MR_CALL 
html_format__table_data_to_th_html_6_p_0(
#line 345 "html_format.m"
  MR_Word html_format__FormatInfo_7,
#line 345 "html_format.m"
  MR_Word html_format__ColumnClass_8,
#line 345 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_16,
#line 345 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_17,
#line 345 "html_format.m"
  MR_Word html_format__TableData_10,
#line 345 "html_format.m"
  MR_Word * html_format__HTML_11);

#line 327 "html_format.m"
static void MR_CALL 
html_format__table_header_group_to_html_row_2_5_p_0(
#line 327 "html_format.m"
  MR_Word html_format__FormatInfo_6,
#line 327 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_16,
#line 327 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_17,
#line 327 "html_format.m"
  MR_Word html_format__HeaderGroup_8,
#line 327 "html_format.m"
  MR_Word * html_format__HTML_9);

#line 292 "html_format.m"
static void MR_CALL 
html_format__table_header_group_to_html_row_1_6_p_0(
#line 292 "html_format.m"
  MR_Word html_format__FormatInfo_7,
#line 292 "html_format.m"
  MR_Word html_format__HeaderNumRows_8,
#line 292 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_25,
#line 292 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_26,
#line 292 "html_format.m"
  MR_Word html_format__HeaderGroup_10,
#line 292 "html_format.m"
  MR_Word * html_format__HTML_11);

#line 249 "html_format.m"
static void MR_CALL 
html_format__table_to_html_5_p_0_1(
#line 249 "html_format.m"
  MR_Box html_format__closure_arg,
#line 249 "html_format.m"
  MR_Box html_format__wrapper_arg_1,
#line 249 "html_format.m"
  MR_Box html_format__wrapper_arg_2,
#line 249 "html_format.m"
  MR_Box * html_format__wrapper_arg_3,
#line 249 "html_format.m"
  MR_Box html_format__wrapper_arg_4,
#line 249 "html_format.m"
  MR_Box * html_format__wrapper_arg_5,
#line 249 "html_format.m"
  MR_Box html_format__wrapper_arg_6,
#line 249 "html_format.m"
  MR_Box * html_format__wrapper_arg_7,
#line 249 "html_format.m"
  MR_Box html_format__wrapper_arg_8,
#line 249 "html_format.m"
  MR_Box * html_format__wrapper_arg_9,
#line 249 "html_format.m"
  MR_Box html_format__wrapper_arg_10,
#line 249 "html_format.m"
  MR_Box * html_format__wrapper_arg_11,
#line 249 "html_format.m"
  MR_Box html_format__wrapper_arg_12,
#line 249 "html_format.m"
  MR_Box * html_format__wrapper_arg_13);

#line 235 "html_format.m"
static void MR_CALL 
html_format__table_to_html_5_p_0(
#line 235 "html_format.m"
  MR_Word html_format__FormatInfo_6,
#line 235 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_34,
#line 235 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_35,
#line 235 "html_format.m"
  MR_Word html_format__Table_8,
#line 235 "html_format.m"
  MR_Word * html_format__HTML_9);

#line 188 "html_format.m"
static void MR_CALL 
html_format__item_to_html_7_p_0_1(
#line 188 "html_format.m"
  void * html_format__env_ptr_arg);

#line 188 "html_format.m"
static void MR_CALL 
html_format__item_to_html_7_p_0_3(
#line 188 "html_format.m"
  void * html_format__env_ptr_arg);

#line 188 "html_format.m"
static void MR_CALL 
html_format__item_to_html_7_p_0_2(
#line 188 "html_format.m"
  void * html_format__env_ptr_arg);

#line 188 "html_format.m"
static void MR_CALL 
html_format__item_to_html_7_p_0_4(
#line 188 "html_format.m"
  void * html_format__env_ptr_arg);

#line 152 "html_format.m"
static void MR_CALL 
html_format__item_to_html_7_p_0(
#line 152 "html_format.m"
  MR_String html_format__StartTag_8,
#line 152 "html_format.m"
  MR_String html_format__EndTag_9,
#line 152 "html_format.m"
  MR_Word html_format__FormatInfo_10,
#line 152 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_27,
#line 152 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_28,
#line 152 "html_format.m"
  MR_Word html_format__Item_12,
#line 152 "html_format.m"
  MR_Word * html_format__HTML_13);

#line 143 "html_format.m"
static MR_Word MR_CALL 
html_format__style_element_to_html_1_f_0(
#line 143 "html_format.m"
  MR_Word html_format__HeadVar__1_1);

#line 136 "html_format.m"
static MR_Box MR_CALL 
html_format__style_control_to_html_1_f_0_1(
#line 136 "html_format.m"
  MR_Box html_format__closure_arg,
#line 136 "html_format.m"
  MR_Box html_format__wrapper_arg_1);

#line 131 "html_format.m"
static MR_Word MR_CALL 
html_format__style_control_to_html_1_f_0(
#line 131 "html_format.m"
  MR_Word html_format__HeadVar__1_1);

#line 126 "html_format.m"
static MR_Box MR_CALL 
html_format__css_style_html_1_f_0_1(
#line 126 "html_format.m"
  MR_Box html_format__closure_arg,
#line 126 "html_format.m"
  MR_Box html_format__wrapper_arg_1);

#line 119 "html_format.m"
static MR_Word MR_CALL 
html_format__css_style_html_1_f_0(
#line 119 "html_format.m"
  MR_Word html_format__StyleControlMap_3);

#line 1018 "html_format.m"
static void MR_CALL 
html_format__escape_break_html_attr_string_1_f_0_2(
#line 1018 "html_format.m"
  MR_Box html_format__closure_arg,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_1,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_2,
#line 1018 "html_format.m"
  MR_Box * html_format__wrapper_arg_3);

#line 1191 "html_format.c"
static MR_bool MR_CALL 
html_format__escape_break_html_attr_string_1_f_0_1(
#line 1194 "html_format.c"
  MR_Box html_format__closure_arg,
#line 1196 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 1198 "html_format.c"
  MR_Box * html_format__wrapper_arg_2);

#line 1018 "html_format.m"
static void MR_CALL 
html_format__escape_break_html_string_1_f_0_2(
#line 1018 "html_format.m"
  MR_Box html_format__closure_arg,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_1,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_2,
#line 1018 "html_format.m"
  MR_Box * html_format__wrapper_arg_3);

#line 1213 "html_format.c"
static MR_bool MR_CALL 
html_format__escape_break_html_string_1_f_0_1(
#line 1216 "html_format.c"
  MR_Box html_format__closure_arg,
#line 1218 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 1220 "html_format.c"
  MR_Box * html_format__wrapper_arg_2);

#line 1018 "html_format.m"
static void MR_CALL 
html_format__escape_html_attr_string_1_f_0_2(
#line 1018 "html_format.m"
  MR_Box html_format__closure_arg,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_1,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_2,
#line 1018 "html_format.m"
  MR_Box * html_format__wrapper_arg_3);

#line 1235 "html_format.c"
static MR_bool MR_CALL 
html_format__escape_html_attr_string_1_f_0_1(
#line 1238 "html_format.c"
  MR_Box html_format__closure_arg,
#line 1240 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 1242 "html_format.c"
  MR_Box * html_format__wrapper_arg_2);

#line 1018 "html_format.m"
static void MR_CALL 
html_format__escape_html_string_1_f_0_2(
#line 1018 "html_format.m"
  MR_Box html_format__closure_arg,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_1,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_2,
#line 1018 "html_format.m"
  MR_Box * html_format__wrapper_arg_3);

#line 1257 "html_format.c"
static MR_bool MR_CALL 
html_format__escape_html_string_1_f_0_1(
#line 1260 "html_format.c"
  MR_Box html_format__closure_arg,
#line 1262 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 1264 "html_format.c"
  MR_Box * html_format__wrapper_arg_2);


static /* final */ const MR_Box html_format_scalar_common_1[14][3];

static /* final */ const MR_Box html_format_scalar_common_2[24][2];

static /* final */ const MR_Box html_format_scalar_common_3[3][5];

static /* final */ const MR_Box html_format_scalar_common_4[2][7];

static /* final */ const MR_Box html_format_scalar_common_5[7][4];

static /* final */ const MR_Box html_format_scalar_common_6[1][1];

static /* final */ const MR_Box html_format_scalar_common_7[1][17];


#line 570 "html_format.m"
/* sealed */ struct html_format__vector_common_type_8_0_s {
#line 570 "html_format.m"
  const MR_String html_format__vector_common_type_8_0__vct_8_f_0;
#line 570 "html_format.m"
};

static /* final */ const struct html_format__vector_common_type_8_0_s html_format_vector_common_8[52];



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
    ((MR_Box) (html_format__escape_html_string_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&html_format_scalar_common_3[0])),
    ((MR_Box) (html_format__escape_html_attr_string_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&html_format_scalar_common_3[0])),
    ((MR_Box) (html_format__escape_break_html_string_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&html_format_scalar_common_3[0])),
    ((MR_Box) (html_format__escape_break_html_attr_string_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&html_format_scalar_common_3[1])),
    ((MR_Box) (html_format__css_style_html_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&html_format_scalar_common_3[2])),
    ((MR_Box) (html_format__style_control_to_html_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&html_format_scalar_common_3[0])),
    ((MR_Box) (html_format__table_data_to_html_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&html_format_scalar_common_3[0])),
    ((MR_Box) (html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&html_format_scalar_common_3[0])),
    ((MR_Box) (html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_3)),
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&html_format__pair__pti_pair_2__plain_html_format__type_ctor_info_style_control_0__plain_tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&html_format__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
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
    ((MR_Box) (html_format__escape_html_string_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[5]))
  },
  /* row 1 */
  {
    ((MR_Box) (&html_format_scalar_common_4[0])),
    ((MR_Box) (html_format__escape_html_attr_string_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[6]))
  },
  /* row 2 */
  {
    ((MR_Box) (&html_format_scalar_common_4[0])),
    ((MR_Box) (html_format__escape_break_html_string_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[7]))
  },
  /* row 3 */
  {
    ((MR_Box) (&html_format_scalar_common_4[0])),
    ((MR_Box) (html_format__escape_break_html_attr_string_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[8]))
  },
  /* row 4 */
  {
    ((MR_Box) (&html_format_scalar_common_4[0])),
    ((MR_Box) (html_format__table_data_to_html_2_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[11]))
  },
  /* row 5 */
  {
    ((MR_Box) (&html_format_scalar_common_4[0])),
    ((MR_Box) (html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[12]))
  },
  /* row 6 */
  {
    ((MR_Box) (&html_format_scalar_common_4[0])),
    ((MR_Box) (html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&html_format_scalar_common_1[13]))
  },
};

static /* final */ const MR_Box html_format_scalar_common_6[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box html_format_scalar_common_7[1][17] = {
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


static /* final */ const struct html_format__vector_common_type_8_0_s html_format_vector_common_8[52] = {
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


#include "profile.mh"
#include "profile.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1704 "html_format.c"
static const MR_VA_PseudoTypeInfo_Struct2 html_format____vpti_pred_2__plain_builtin__type_ctor_info_character_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1714 "html_format.c"
static const MR_FA_PseudoTypeInfo_Struct1 html_format__list__pti_list_1__plain_builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

#line 1722 "html_format.c"
static const MR_FA_TypeInfo_Struct2 html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &html_format__html_format__type_ctor_info_style_element_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1731 "html_format.c"
static const MR_FA_PseudoTypeInfo_Struct2 html_format__pair__pti_pair_2__plain_html_format__type_ctor_info_style_control_0__plain_tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &html_format__html_format__type_ctor_info_style_control_0,
    (MR_PseudoTypeInfo) &html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0
  }
};

#line 1740 "html_format.c"
static const MR_FA_PseudoTypeInfo_Struct1 html_format__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1748 "html_format.c"
static const MR_FA_PseudoTypeInfo_Struct2 html_format__pair__pti_pair_2__plain_html_format__type_ctor_info_style_element_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &html_format__html_format__type_ctor_info_style_element_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1757 "html_format.c"
static const MR_FA_PseudoTypeInfo_Struct2 html_format__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1766 "html_format.c"
static const MR_FA_PseudoTypeInfo_Struct1 html_format__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1774 "html_format.c"
static const MR_FA_PseudoTypeInfo_Struct2 html_format__tree234__pti_tree234_2__plain_html_format__type_ctor_info_style_control_0__plain_tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &html_format__html_format__type_ctor_info_style_control_0,
    (MR_PseudoTypeInfo) &html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0
  }
};

#line 1783 "html_format.c"
static const MR_FA_TypeInfo_Struct2 html_format__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1792 "html_format.c"
const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_column_class_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1809 "html_format.c"
static const MR_PseudoTypeInfo html_format__html_format__field_types_format_info_0_0[6] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_colour_column_groups_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_box_tables_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_developer_mode_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1819 "html_format.c"
static const MR_ConstString html_format__html_format__field_names_format_info_0_0[6] = {
  (MR_String) "fi_pref_colour_scheme",
  (MR_String) "fi_pref_box",
  (MR_String) "fi_pref_developer",
  (MR_String) "fi_server_name_port",
  (MR_String) "fi_script_name",
  (MR_String) "fi_deep_file"
};

#line 1829 "html_format.c"
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

#line 1863 "html_format.c"
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
  NULL
};

#line 1878 "html_format.c"
static const MR_DuFunctorDescPtr html_format__html_format__du_stag_ordered_format_info_0_0[1] = {
  &html_format__html_format__du_functor_desc_format_info_0_0
};

#line 1883 "html_format.c"
static const MR_DuPtagLayout html_format__html_format__du_ptag_ordered_format_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    html_format__html_format__du_stag_ordered_format_info_0_0
  }
};

#line 1892 "html_format.c"
static const MR_DuFunctorDescPtr html_format__html_format__du_name_ordered_format_info_0[1] = {
  &html_format__html_format__du_functor_desc_format_info_0_0
};

#line 1897 "html_format.c"
static const MR_Integer html_format__html_format__functor_number_map_format_info_0[1] = {
  (MR_Integer) 0
};

#line 1902 "html_format.c"
const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_format_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1919 "html_format.c"
static const MR_FA_TypeInfo_Struct1 html_format__cord__ti_cord_1builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1927 "html_format.c"
const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_html_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1944 "html_format.c"
static const MR_Integer html_format__html_format__functor_number_map_style_control_0[1] = {
  (MR_Integer) 0
};

#line 1949 "html_format.c"
static const MR_NotagFunctorDesc html_format__html_format__notag_functor_desc_style_control_0 = {
  (MR_String) "style_control",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 1956 "html_format.c"
const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_style_control_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1973 "html_format.c"
static const MR_FA_TypeInfo_Struct2 html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_control_0tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &html_format__html_format__type_ctor_info_style_control_0,
    (MR_TypeInfo) &html_format__tree234__ti_tree234_2html_format__type_ctor_info_style_element_0builtin__type_ctor_info_string_0
  }
};

#line 1982 "html_format.c"
const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_style_control_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1999 "html_format.c"
static const MR_Integer html_format__html_format__functor_number_map_style_element_0[1] = {
  (MR_Integer) 0
};

#line 2004 "html_format.c"
static const MR_NotagFunctorDesc html_format__html_format__notag_functor_desc_style_element_0 = {
  (MR_String) "style_element",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 2011 "html_format.c"
const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_style_element_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 2028 "html_format.c"
const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_style_element_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 2045 "html_format.c"
static const MR_EnumFunctorDesc html_format__html_format__enum_functor_desc_table_header_rows_0_0 = {
  (MR_String) "one_header_row",
  (MR_Integer) 0
};

#line 2051 "html_format.c"
static const MR_EnumFunctorDesc html_format__html_format__enum_functor_desc_table_header_rows_0_1 = {
  (MR_String) "two_header_rows",
  (MR_Integer) 1
};

#line 2057 "html_format.c"
static const MR_EnumFunctorDescPtr html_format__html_format__enum_value_ordered_table_header_rows_0[2] = {
  &html_format__html_format__enum_functor_desc_table_header_rows_0_0,
  &html_format__html_format__enum_functor_desc_table_header_rows_0_1
};

#line 2063 "html_format.c"
static const MR_EnumFunctorDescPtr html_format__html_format__enum_name_ordered_table_header_rows_0[2] = {
  &html_format__html_format__enum_functor_desc_table_header_rows_0_0,
  &html_format__html_format__enum_functor_desc_table_header_rows_0_1
};

#line 2069 "html_format.c"
static const MR_Integer html_format__html_format__functor_number_map_table_header_rows_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2075 "html_format.c"
const MR_TypeCtorInfo_Struct html_format__html_format__type_ctor_info_table_header_rows_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 2092 "html_format.c"
static MR_bool MR_CALL 
html_format____Unify____column_class_map_0_0_10001(
#line 2095 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 2097 "html_format.c"
  MR_Box html_format__wrapper_arg_2)
#line 2099 "html_format.c"
{
#line 2101 "html_format.c"
  {
#line 2103 "html_format.c"
    MR_bool html_format__succeeded;

#line 2106 "html_format.c"
    {
#line 2108 "html_format.c"
      html_format__succeeded = html_format____Unify____column_class_map_0_0(((MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2));
    }
#line 2111 "html_format.c"
    return html_format__succeeded;
#line 2113 "html_format.c"
  }
#line 2115 "html_format.c"
}

#line 2118 "html_format.c"
static void MR_CALL 
html_format____Compare____column_class_map_0_0_10001(
#line 2121 "html_format.c"
  MR_Box * html_format__wrapper_arg_1,
#line 2123 "html_format.c"
  MR_Box html_format__wrapper_arg_2,
#line 2125 "html_format.c"
  MR_Box html_format__wrapper_arg_3)
#line 2127 "html_format.c"
{
#line 2129 "html_format.c"
  {
#line 2131 "html_format.c"
    MR_Word html_format__conv0_HeadVar__1_1;

#line 2134 "html_format.c"
    {
#line 2136 "html_format.c"
      html_format____Compare____column_class_map_0_0(&html_format__conv0_HeadVar__1_1, ((MR_Word) html_format__wrapper_arg_2), ((MR_Word) html_format__wrapper_arg_3));
    }
#line 2139 "html_format.c"
    *html_format__wrapper_arg_1 = ((MR_Box) (html_format__conv0_HeadVar__1_1));
#line 2141 "html_format.c"
  }
#line 2143 "html_format.c"
}

#line 2146 "html_format.c"
static MR_bool MR_CALL 
html_format____Unify____format_info_0_0_10001(
#line 2149 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 2151 "html_format.c"
  MR_Box html_format__wrapper_arg_2)
#line 2153 "html_format.c"
{
#line 2155 "html_format.c"
  {
#line 2157 "html_format.c"
    MR_bool html_format__succeeded;

#line 2160 "html_format.c"
    {
#line 2162 "html_format.c"
      html_format__succeeded = html_format____Unify____format_info_0_0(((MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2));
    }
#line 2165 "html_format.c"
    return html_format__succeeded;
#line 2167 "html_format.c"
  }
#line 2169 "html_format.c"
}

#line 2172 "html_format.c"
static void MR_CALL 
html_format____Compare____format_info_0_0_10001(
#line 2175 "html_format.c"
  MR_Box * html_format__wrapper_arg_1,
#line 2177 "html_format.c"
  MR_Box html_format__wrapper_arg_2,
#line 2179 "html_format.c"
  MR_Box html_format__wrapper_arg_3)
#line 2181 "html_format.c"
{
#line 2183 "html_format.c"
  {
#line 2185 "html_format.c"
    MR_Word html_format__conv0_HeadVar__1_1;

#line 2188 "html_format.c"
    {
#line 2190 "html_format.c"
      html_format____Compare____format_info_0_0(&html_format__conv0_HeadVar__1_1, ((MR_Word) html_format__wrapper_arg_2), ((MR_Word) html_format__wrapper_arg_3));
    }
#line 2193 "html_format.c"
    *html_format__wrapper_arg_1 = ((MR_Box) (html_format__conv0_HeadVar__1_1));
#line 2195 "html_format.c"
  }
#line 2197 "html_format.c"
}

#line 2200 "html_format.c"
static MR_bool MR_CALL 
html_format____Unify____html_0_0_10001(
#line 2203 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 2205 "html_format.c"
  MR_Box html_format__wrapper_arg_2)
#line 2207 "html_format.c"
{
#line 2209 "html_format.c"
  {
#line 2211 "html_format.c"
    MR_bool html_format__succeeded;

#line 2214 "html_format.c"
    {
#line 2216 "html_format.c"
      html_format__succeeded = html_format____Unify____html_0_0(((MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2));
    }
#line 2219 "html_format.c"
    return html_format__succeeded;
#line 2221 "html_format.c"
  }
#line 2223 "html_format.c"
}

#line 2226 "html_format.c"
static void MR_CALL 
html_format____Compare____html_0_0_10001(
#line 2229 "html_format.c"
  MR_Box * html_format__wrapper_arg_1,
#line 2231 "html_format.c"
  MR_Box html_format__wrapper_arg_2,
#line 2233 "html_format.c"
  MR_Box html_format__wrapper_arg_3)
#line 2235 "html_format.c"
{
#line 2237 "html_format.c"
  {
#line 2239 "html_format.c"
    MR_Word html_format__conv0_HeadVar__1_1;

#line 2242 "html_format.c"
    {
#line 2244 "html_format.c"
      html_format____Compare____html_0_0(&html_format__conv0_HeadVar__1_1, ((MR_Word) html_format__wrapper_arg_2), ((MR_Word) html_format__wrapper_arg_3));
    }
#line 2247 "html_format.c"
    *html_format__wrapper_arg_1 = ((MR_Box) (html_format__conv0_HeadVar__1_1));
#line 2249 "html_format.c"
  }
#line 2251 "html_format.c"
}

#line 2254 "html_format.c"
static MR_bool MR_CALL 
html_format____Unify____style_control_0_0_10001(
#line 2257 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 2259 "html_format.c"
  MR_Box html_format__wrapper_arg_2)
#line 2261 "html_format.c"
{
#line 2263 "html_format.c"
  {
#line 2265 "html_format.c"
    MR_bool html_format__succeeded;

#line 2268 "html_format.c"
    {
#line 2270 "html_format.c"
      html_format__succeeded = html_format____Unify____style_control_0_0(((MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2));
    }
#line 2273 "html_format.c"
    return html_format__succeeded;
#line 2275 "html_format.c"
  }
#line 2277 "html_format.c"
}

#line 2280 "html_format.c"
static void MR_CALL 
html_format____Compare____style_control_0_0_10001(
#line 2283 "html_format.c"
  MR_Box * html_format__wrapper_arg_1,
#line 2285 "html_format.c"
  MR_Box html_format__wrapper_arg_2,
#line 2287 "html_format.c"
  MR_Box html_format__wrapper_arg_3)
#line 2289 "html_format.c"
{
#line 2291 "html_format.c"
  {
#line 2293 "html_format.c"
    MR_Word html_format__conv0_HeadVar__1_1;

#line 2296 "html_format.c"
    {
#line 2298 "html_format.c"
      html_format____Compare____style_control_0_0(&html_format__conv0_HeadVar__1_1, ((MR_Word) html_format__wrapper_arg_2), ((MR_Word) html_format__wrapper_arg_3));
    }
#line 2301 "html_format.c"
    *html_format__wrapper_arg_1 = ((MR_Box) (html_format__conv0_HeadVar__1_1));
#line 2303 "html_format.c"
  }
#line 2305 "html_format.c"
}

#line 2308 "html_format.c"
static MR_bool MR_CALL 
html_format____Unify____style_control_map_0_0_10001(
#line 2311 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 2313 "html_format.c"
  MR_Box html_format__wrapper_arg_2)
#line 2315 "html_format.c"
{
#line 2317 "html_format.c"
  {
#line 2319 "html_format.c"
    MR_bool html_format__succeeded;

#line 2322 "html_format.c"
    {
#line 2324 "html_format.c"
      html_format__succeeded = html_format____Unify____style_control_map_0_0(((MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2));
    }
#line 2327 "html_format.c"
    return html_format__succeeded;
#line 2329 "html_format.c"
  }
#line 2331 "html_format.c"
}

#line 2334 "html_format.c"
static void MR_CALL 
html_format____Compare____style_control_map_0_0_10001(
#line 2337 "html_format.c"
  MR_Box * html_format__wrapper_arg_1,
#line 2339 "html_format.c"
  MR_Box html_format__wrapper_arg_2,
#line 2341 "html_format.c"
  MR_Box html_format__wrapper_arg_3)
#line 2343 "html_format.c"
{
#line 2345 "html_format.c"
  {
#line 2347 "html_format.c"
    MR_Word html_format__conv0_HeadVar__1_1;

#line 2350 "html_format.c"
    {
#line 2352 "html_format.c"
      html_format____Compare____style_control_map_0_0(&html_format__conv0_HeadVar__1_1, ((MR_Word) html_format__wrapper_arg_2), ((MR_Word) html_format__wrapper_arg_3));
    }
#line 2355 "html_format.c"
    *html_format__wrapper_arg_1 = ((MR_Box) (html_format__conv0_HeadVar__1_1));
#line 2357 "html_format.c"
  }
#line 2359 "html_format.c"
}

#line 2362 "html_format.c"
static MR_bool MR_CALL 
html_format____Unify____style_element_0_0_10001(
#line 2365 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 2367 "html_format.c"
  MR_Box html_format__wrapper_arg_2)
#line 2369 "html_format.c"
{
#line 2371 "html_format.c"
  {
#line 2373 "html_format.c"
    MR_bool html_format__succeeded;

#line 2376 "html_format.c"
    {
#line 2378 "html_format.c"
      html_format__succeeded = html_format____Unify____style_element_0_0(((MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2));
    }
#line 2381 "html_format.c"
    return html_format__succeeded;
#line 2383 "html_format.c"
  }
#line 2385 "html_format.c"
}

#line 2388 "html_format.c"
static void MR_CALL 
html_format____Compare____style_element_0_0_10001(
#line 2391 "html_format.c"
  MR_Box * html_format__wrapper_arg_1,
#line 2393 "html_format.c"
  MR_Box html_format__wrapper_arg_2,
#line 2395 "html_format.c"
  MR_Box html_format__wrapper_arg_3)
#line 2397 "html_format.c"
{
#line 2399 "html_format.c"
  {
#line 2401 "html_format.c"
    MR_Word html_format__conv0_HeadVar__1_1;

#line 2404 "html_format.c"
    {
#line 2406 "html_format.c"
      html_format____Compare____style_element_0_0(&html_format__conv0_HeadVar__1_1, ((MR_Word) html_format__wrapper_arg_2), ((MR_Word) html_format__wrapper_arg_3));
    }
#line 2409 "html_format.c"
    *html_format__wrapper_arg_1 = ((MR_Box) (html_format__conv0_HeadVar__1_1));
#line 2411 "html_format.c"
  }
#line 2413 "html_format.c"
}

#line 2416 "html_format.c"
static MR_bool MR_CALL 
html_format____Unify____style_element_map_0_0_10001(
#line 2419 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 2421 "html_format.c"
  MR_Box html_format__wrapper_arg_2)
#line 2423 "html_format.c"
{
#line 2425 "html_format.c"
  {
#line 2427 "html_format.c"
    MR_bool html_format__succeeded;

#line 2430 "html_format.c"
    {
#line 2432 "html_format.c"
      html_format__succeeded = html_format____Unify____style_element_map_0_0(((MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2));
    }
#line 2435 "html_format.c"
    return html_format__succeeded;
#line 2437 "html_format.c"
  }
#line 2439 "html_format.c"
}

#line 2442 "html_format.c"
static void MR_CALL 
html_format____Compare____style_element_map_0_0_10001(
#line 2445 "html_format.c"
  MR_Box * html_format__wrapper_arg_1,
#line 2447 "html_format.c"
  MR_Box html_format__wrapper_arg_2,
#line 2449 "html_format.c"
  MR_Box html_format__wrapper_arg_3)
#line 2451 "html_format.c"
{
#line 2453 "html_format.c"
  {
#line 2455 "html_format.c"
    MR_Word html_format__conv0_HeadVar__1_1;

#line 2458 "html_format.c"
    {
#line 2460 "html_format.c"
      html_format____Compare____style_element_map_0_0(&html_format__conv0_HeadVar__1_1, ((MR_Word) html_format__wrapper_arg_2), ((MR_Word) html_format__wrapper_arg_3));
    }
#line 2463 "html_format.c"
    *html_format__wrapper_arg_1 = ((MR_Box) (html_format__conv0_HeadVar__1_1));
#line 2465 "html_format.c"
  }
#line 2467 "html_format.c"
}

#line 2470 "html_format.c"
static MR_bool MR_CALL 
html_format____Unify____table_header_rows_0_0_10001(
#line 2473 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 2475 "html_format.c"
  MR_Box html_format__wrapper_arg_2)
#line 2477 "html_format.c"
{
#line 2479 "html_format.c"
  {
#line 2481 "html_format.c"
    MR_bool html_format__succeeded;

#line 2484 "html_format.c"
    {
#line 2486 "html_format.c"
      html_format__succeeded = html_format____Unify____table_header_rows_0_0(((MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2));
    }
#line 2489 "html_format.c"
    return html_format__succeeded;
#line 2491 "html_format.c"
  }
#line 2493 "html_format.c"
}

#line 2496 "html_format.c"
static void MR_CALL 
html_format____Compare____table_header_rows_0_0_10001(
#line 2499 "html_format.c"
  MR_Box * html_format__wrapper_arg_1,
#line 2501 "html_format.c"
  MR_Box html_format__wrapper_arg_2,
#line 2503 "html_format.c"
  MR_Box html_format__wrapper_arg_3)
#line 2505 "html_format.c"
{
#line 2507 "html_format.c"
  {
#line 2509 "html_format.c"
    MR_Word html_format__conv0_HeadVar__1_1;

#line 2512 "html_format.c"
    {
#line 2514 "html_format.c"
      html_format____Compare____table_header_rows_0_0(&html_format__conv0_HeadVar__1_1, ((MR_Word) html_format__wrapper_arg_2), ((MR_Word) html_format__wrapper_arg_3));
    }
#line 2517 "html_format.c"
    *html_format__wrapper_arg_1 = ((MR_Box) (html_format__conv0_HeadVar__1_1));
#line 2519 "html_format.c"
  }
#line 2521 "html_format.c"
}

#line 926 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_p_0(
#line 926 "html_format.m"
  MR_Word html_format__V_34_34,
#line 926 "html_format.m"
  MR_Word html_format__V_35_35,
#line 926 "html_format.m"
  MR_Word html_format__Separator_1,
#line 926 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
#line 926 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
#line 926 "html_format.m"
  MR_Word html_format__HeadVar__5_5,
#line 926 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_HTML_0_6,
#line 926 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_HTML_7)
#line 926 "html_format.m"
{
#line 932 "html_format.m"
  while (MR_TRUE)
#line 932 "html_format.m"
    {
#line 932 "html_format.m"
      /* tailcall optimized into a loop */
#line 932 "html_format.m"
      {
#line 932 "html_format.m"
        MR_bool html_format__succeeded;

#line 932 "html_format.m"
        if ((html_format__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 932 "html_format.m"
          {
#line 932 "html_format.m"
            *html_format__STATE_VARIABLE_HTML_7 = html_format__STATE_VARIABLE_HTML_0_6;
#line 932 "html_format.m"
            *html_format__STATE_VARIABLE_StyleControlMap_4 = html_format__STATE_VARIABLE_StyleControlMap_0_3;
#line 932 "html_format.m"
          }
#line 932 "html_format.m"
        else
#line 934 "html_format.m"
          {
#line 934 "html_format.m"
            MR_Word html_format__TypeCtorInfo_33_33;
#line 934 "html_format.m"
            MR_Word html_format__Head_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 0)));
#line 934 "html_format.m"
            MR_Word html_format__Tail_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 1)));
#line 934 "html_format.m"
            MR_Word html_format__HeadHTML_22;
#line 934 "html_format.m"
            MR_Word html_format__STATE_VARIABLE_StyleControlMap_27_27;
#line 934 "html_format.m"
            MR_Word html_format__STATE_VARIABLE_HTML_28_28;
#line 934 "html_format.m"
            MR_Word html_format__V_29_29;

#line 935 "html_format.m"
            {
#line 935 "html_format.m"
              html_format__table_header_group_to_html_row_1_6_p_0(html_format__V_34_34, html_format__V_35_35, html_format__STATE_VARIABLE_StyleControlMap_0_3, &html_format__STATE_VARIABLE_StyleControlMap_27_27, html_format__Head_19, &html_format__HeadHTML_22);
            }
#line 2590 "html_format.c"
            html_format__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 936 "html_format.m"
            {
#line 936 "html_format.m"
              html_format__V_29_29 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_33_33, html_format__Separator_1, html_format__HeadHTML_22);
            }
#line 936 "html_format.m"
            {
#line 936 "html_format.m"
              html_format__STATE_VARIABLE_HTML_28_28 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_33_33, html_format__STATE_VARIABLE_HTML_0_6, html_format__V_29_29);
            }
#line 937 "html_format.m"
            /* direct tailcall eliminated */
#line 937 "html_format.m"
            {
#line 937 "html_format.m"
              MR_Word html_format__STATE_VARIABLE_StyleControlMap_0__tmp_copy_3 = html_format__STATE_VARIABLE_StyleControlMap_27_27;
#line 937 "html_format.m"
              MR_Word html_format__HeadVar__5__tmp_copy_5 = html_format__Tail_20;
#line 937 "html_format.m"
              MR_Word html_format__STATE_VARIABLE_HTML_0__tmp_copy_6 = html_format__STATE_VARIABLE_HTML_28_28;

#line 937 "html_format.m"
              html_format__STATE_VARIABLE_HTML_0_6 = html_format__STATE_VARIABLE_HTML_0__tmp_copy_6;
#line 937 "html_format.m"
              html_format__HeadVar__5_5 = html_format__HeadVar__5__tmp_copy_5;
#line 937 "html_format.m"
              html_format__STATE_VARIABLE_StyleControlMap_0_3 = html_format__STATE_VARIABLE_StyleControlMap_0__tmp_copy_3;
#line 937 "html_format.m"
            }
#line 937 "html_format.m"
            continue;
#line 934 "html_format.m"
          }
#line 932 "html_format.m"
      }
#line 932 "html_format.m"
      break;
#line 932 "html_format.m"
    }
#line 926 "html_format.m"
}

#line 926 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_p_0(
#line 926 "html_format.m"
  MR_Word html_format__V_34_34,
#line 926 "html_format.m"
  MR_Word html_format__Separator_1,
#line 926 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
#line 926 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
#line 926 "html_format.m"
  MR_Word html_format__HeadVar__5_5,
#line 926 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_HTML_0_6,
#line 926 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_HTML_7)
#line 926 "html_format.m"
{
#line 932 "html_format.m"
  while (MR_TRUE)
#line 932 "html_format.m"
    {
#line 932 "html_format.m"
      /* tailcall optimized into a loop */
#line 932 "html_format.m"
      {
#line 932 "html_format.m"
        MR_bool html_format__succeeded;

#line 932 "html_format.m"
        if ((html_format__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 932 "html_format.m"
          {
#line 932 "html_format.m"
            *html_format__STATE_VARIABLE_HTML_7 = html_format__STATE_VARIABLE_HTML_0_6;
#line 932 "html_format.m"
            *html_format__STATE_VARIABLE_StyleControlMap_4 = html_format__STATE_VARIABLE_StyleControlMap_0_3;
#line 932 "html_format.m"
          }
#line 932 "html_format.m"
        else
#line 934 "html_format.m"
          {
#line 934 "html_format.m"
            MR_Word html_format__TypeCtorInfo_33_33;
#line 934 "html_format.m"
            MR_Word html_format__Head_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 0)));
#line 934 "html_format.m"
            MR_Word html_format__Tail_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 1)));
#line 934 "html_format.m"
            MR_Word html_format__HeadHTML_22;
#line 934 "html_format.m"
            MR_Word html_format__STATE_VARIABLE_StyleControlMap_27_27;
#line 934 "html_format.m"
            MR_Word html_format__STATE_VARIABLE_HTML_28_28;
#line 934 "html_format.m"
            MR_Word html_format__V_29_29;

#line 935 "html_format.m"
            {
#line 935 "html_format.m"
              html_format__table_header_group_to_html_row_2_5_p_0(html_format__V_34_34, html_format__STATE_VARIABLE_StyleControlMap_0_3, &html_format__STATE_VARIABLE_StyleControlMap_27_27, html_format__Head_19, &html_format__HeadHTML_22);
            }
#line 2698 "html_format.c"
            html_format__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 936 "html_format.m"
            {
#line 936 "html_format.m"
              html_format__V_29_29 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_33_33, html_format__Separator_1, html_format__HeadHTML_22);
            }
#line 936 "html_format.m"
            {
#line 936 "html_format.m"
              html_format__STATE_VARIABLE_HTML_28_28 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_33_33, html_format__STATE_VARIABLE_HTML_0_6, html_format__V_29_29);
            }
#line 937 "html_format.m"
            /* direct tailcall eliminated */
#line 937 "html_format.m"
            {
#line 937 "html_format.m"
              MR_Word html_format__STATE_VARIABLE_StyleControlMap_0__tmp_copy_3 = html_format__STATE_VARIABLE_StyleControlMap_27_27;
#line 937 "html_format.m"
              MR_Word html_format__HeadVar__5__tmp_copy_5 = html_format__Tail_20;
#line 937 "html_format.m"
              MR_Word html_format__STATE_VARIABLE_HTML_0__tmp_copy_6 = html_format__STATE_VARIABLE_HTML_28_28;

#line 937 "html_format.m"
              html_format__STATE_VARIABLE_HTML_0_6 = html_format__STATE_VARIABLE_HTML_0__tmp_copy_6;
#line 937 "html_format.m"
              html_format__HeadVar__5_5 = html_format__HeadVar__5__tmp_copy_5;
#line 937 "html_format.m"
              html_format__STATE_VARIABLE_StyleControlMap_0_3 = html_format__STATE_VARIABLE_StyleControlMap_0__tmp_copy_3;
#line 937 "html_format.m"
            }
#line 937 "html_format.m"
            continue;
#line 934 "html_format.m"
          }
#line 932 "html_format.m"
      }
#line 932 "html_format.m"
      break;
#line 932 "html_format.m"
    }
#line 926 "html_format.m"
}

#line 926 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_p_0(
#line 926 "html_format.m"
  MR_Word html_format__V_34_34,
#line 926 "html_format.m"
  MR_Word html_format__V_35_35,
#line 926 "html_format.m"
  MR_Integer html_format__V_36_36,
#line 926 "html_format.m"
  MR_Word html_format__Separator_1,
#line 926 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
#line 926 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
#line 926 "html_format.m"
  MR_Word html_format__HeadVar__5_5,
#line 926 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_HTML_0_6,
#line 926 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_HTML_7)
#line 926 "html_format.m"
{
#line 932 "html_format.m"
  while (MR_TRUE)
#line 932 "html_format.m"
    {
#line 932 "html_format.m"
      /* tailcall optimized into a loop */
#line 932 "html_format.m"
      {
#line 932 "html_format.m"
        MR_bool html_format__succeeded;

#line 932 "html_format.m"
        if ((html_format__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 932 "html_format.m"
          {
#line 932 "html_format.m"
            *html_format__STATE_VARIABLE_HTML_7 = html_format__STATE_VARIABLE_HTML_0_6;
#line 932 "html_format.m"
            *html_format__STATE_VARIABLE_StyleControlMap_4 = html_format__STATE_VARIABLE_StyleControlMap_0_3;
#line 932 "html_format.m"
          }
#line 932 "html_format.m"
        else
#line 934 "html_format.m"
          {
#line 934 "html_format.m"
            MR_Word html_format__TypeCtorInfo_33_33;
#line 934 "html_format.m"
            MR_Word html_format__Head_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 0)));
#line 934 "html_format.m"
            MR_Word html_format__Tail_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 1)));
#line 934 "html_format.m"
            MR_Word html_format__HeadHTML_22;
#line 934 "html_format.m"
            MR_Word html_format__STATE_VARIABLE_StyleControlMap_27_27;
#line 934 "html_format.m"
            MR_Word html_format__STATE_VARIABLE_HTML_28_28;
#line 934 "html_format.m"
            MR_Word html_format__V_29_29;

#line 935 "html_format.m"
            {
#line 935 "html_format.m"
              html_format__table_row_to_html_7_p_0(html_format__V_34_34, html_format__V_35_35, html_format__V_36_36, html_format__STATE_VARIABLE_StyleControlMap_0_3, &html_format__STATE_VARIABLE_StyleControlMap_27_27, html_format__Head_19, &html_format__HeadHTML_22);
            }
#line 2810 "html_format.c"
            html_format__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 936 "html_format.m"
            {
#line 936 "html_format.m"
              html_format__V_29_29 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_33_33, html_format__Separator_1, html_format__HeadHTML_22);
            }
#line 936 "html_format.m"
            {
#line 936 "html_format.m"
              html_format__STATE_VARIABLE_HTML_28_28 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_33_33, html_format__STATE_VARIABLE_HTML_0_6, html_format__V_29_29);
            }
#line 937 "html_format.m"
            /* direct tailcall eliminated */
#line 937 "html_format.m"
            {
#line 937 "html_format.m"
              MR_Word html_format__STATE_VARIABLE_StyleControlMap_0__tmp_copy_3 = html_format__STATE_VARIABLE_StyleControlMap_27_27;
#line 937 "html_format.m"
              MR_Word html_format__HeadVar__5__tmp_copy_5 = html_format__Tail_20;
#line 937 "html_format.m"
              MR_Word html_format__STATE_VARIABLE_HTML_0__tmp_copy_6 = html_format__STATE_VARIABLE_HTML_28_28;

#line 937 "html_format.m"
              html_format__STATE_VARIABLE_HTML_0_6 = html_format__STATE_VARIABLE_HTML_0__tmp_copy_6;
#line 937 "html_format.m"
              html_format__HeadVar__5_5 = html_format__HeadVar__5__tmp_copy_5;
#line 937 "html_format.m"
              html_format__STATE_VARIABLE_StyleControlMap_0_3 = html_format__STATE_VARIABLE_StyleControlMap_0__tmp_copy_3;
#line 937 "html_format.m"
            }
#line 937 "html_format.m"
            continue;
#line 934 "html_format.m"
          }
#line 932 "html_format.m"
      }
#line 932 "html_format.m"
      break;
#line 932 "html_format.m"
    }
#line 926 "html_format.m"
}

#line 926 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_p_0(
#line 926 "html_format.m"
  MR_Word html_format__V_34_34,
#line 926 "html_format.m"
  MR_Word html_format__V_35_35,
#line 926 "html_format.m"
  MR_Word html_format__Separator_1,
#line 926 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
#line 926 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
#line 926 "html_format.m"
  MR_Word html_format__HeadVar__5_5,
#line 926 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_HTML_0_6,
#line 926 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_HTML_7)
#line 926 "html_format.m"
{
#line 932 "html_format.m"
  while (MR_TRUE)
#line 932 "html_format.m"
    {
#line 932 "html_format.m"
      /* tailcall optimized into a loop */
#line 932 "html_format.m"
      {
#line 932 "html_format.m"
        MR_bool html_format__succeeded;

#line 932 "html_format.m"
        if ((html_format__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 932 "html_format.m"
          {
#line 932 "html_format.m"
            *html_format__STATE_VARIABLE_HTML_7 = html_format__STATE_VARIABLE_HTML_0_6;
#line 932 "html_format.m"
            *html_format__STATE_VARIABLE_StyleControlMap_4 = html_format__STATE_VARIABLE_StyleControlMap_0_3;
#line 932 "html_format.m"
          }
#line 932 "html_format.m"
        else
#line 934 "html_format.m"
          {
#line 934 "html_format.m"
            MR_Word html_format__TypeCtorInfo_33_33;
#line 934 "html_format.m"
            MR_Word html_format__Head_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 0)));
#line 934 "html_format.m"
            MR_Word html_format__Tail_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 1)));
#line 934 "html_format.m"
            MR_Word html_format__HeadHTML_22;
#line 934 "html_format.m"
            MR_Word html_format__STATE_VARIABLE_StyleControlMap_27_27;
#line 934 "html_format.m"
            MR_Word html_format__STATE_VARIABLE_HTML_28_28;
#line 934 "html_format.m"
            MR_Word html_format__V_29_29;

#line 935 "html_format.m"
            {
#line 935 "html_format.m"
              html_format__table_data_to_th_html_6_p_0(html_format__V_34_34, html_format__V_35_35, html_format__STATE_VARIABLE_StyleControlMap_0_3, &html_format__STATE_VARIABLE_StyleControlMap_27_27, html_format__Head_19, &html_format__HeadHTML_22);
            }
#line 2920 "html_format.c"
            html_format__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 936 "html_format.m"
            {
#line 936 "html_format.m"
              html_format__V_29_29 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_33_33, html_format__Separator_1, html_format__HeadHTML_22);
            }
#line 936 "html_format.m"
            {
#line 936 "html_format.m"
              html_format__STATE_VARIABLE_HTML_28_28 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_33_33, html_format__STATE_VARIABLE_HTML_0_6, html_format__V_29_29);
            }
#line 937 "html_format.m"
            /* direct tailcall eliminated */
#line 937 "html_format.m"
            {
#line 937 "html_format.m"
              MR_Word html_format__STATE_VARIABLE_StyleControlMap_0__tmp_copy_3 = html_format__STATE_VARIABLE_StyleControlMap_27_27;
#line 937 "html_format.m"
              MR_Word html_format__HeadVar__5__tmp_copy_5 = html_format__Tail_20;
#line 937 "html_format.m"
              MR_Word html_format__STATE_VARIABLE_HTML_0__tmp_copy_6 = html_format__STATE_VARIABLE_HTML_28_28;

#line 937 "html_format.m"
              html_format__STATE_VARIABLE_HTML_0_6 = html_format__STATE_VARIABLE_HTML_0__tmp_copy_6;
#line 937 "html_format.m"
              html_format__HeadVar__5_5 = html_format__HeadVar__5__tmp_copy_5;
#line 937 "html_format.m"
              html_format__STATE_VARIABLE_StyleControlMap_0_3 = html_format__STATE_VARIABLE_StyleControlMap_0__tmp_copy_3;
#line 937 "html_format.m"
            }
#line 937 "html_format.m"
            continue;
#line 934 "html_format.m"
          }
#line 932 "html_format.m"
      }
#line 932 "html_format.m"
      break;
#line 932 "html_format.m"
    }
#line 926 "html_format.m"
}

#line 969 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_p_0(
#line 969 "html_format.m"
  MR_Word html_format__V_39_39,
#line 969 "html_format.m"
  MR_Word html_format__V_40_40,
#line 969 "html_format.m"
  MR_Word html_format__Separator_1,
#line 969 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
#line 969 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
#line 969 "html_format.m"
  MR_Integer html_format__STATE_VARIABLE_ColumnNum_0_5,
#line 969 "html_format.m"
  MR_Word html_format__HeadVar__6_6,
#line 969 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_HTML_0_7,
#line 969 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_HTML_8)
#line 969 "html_format.m"
{
#line 975 "html_format.m"
  while (MR_TRUE)
#line 975 "html_format.m"
    {
#line 975 "html_format.m"
      /* tailcall optimized into a loop */
#line 975 "html_format.m"
      {
#line 975 "html_format.m"
        MR_bool html_format__succeeded;

#line 975 "html_format.m"
        if ((html_format__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 975 "html_format.m"
          {
#line 975 "html_format.m"
            *html_format__STATE_VARIABLE_HTML_8 = html_format__STATE_VARIABLE_HTML_0_7;
#line 975 "html_format.m"
            *html_format__STATE_VARIABLE_StyleControlMap_4 = html_format__STATE_VARIABLE_StyleControlMap_0_3;
#line 975 "html_format.m"
          }
#line 975 "html_format.m"
        else
#line 977 "html_format.m"
          {
#line 977 "html_format.m"
            MR_Word html_format__TypeCtorInfo_38_38;
#line 977 "html_format.m"
            MR_Word html_format__Head_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__6_6, (MR_Integer) 0)));
#line 977 "html_format.m"
            MR_Word html_format__Tail_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__6_6, (MR_Integer) 1)));
#line 977 "html_format.m"
            MR_Word html_format__HeadHTML_25;
#line 977 "html_format.m"
            MR_Word html_format__STATE_VARIABLE_StyleControlMap_31_31;
#line 977 "html_format.m"
            MR_Integer html_format__STATE_VARIABLE_ColumnNum_32_32;
#line 977 "html_format.m"
            MR_Word html_format__STATE_VARIABLE_HTML_33_33;
#line 977 "html_format.m"
            MR_Word html_format__V_34_34;

#line 978 "html_format.m"
            {
#line 978 "html_format.m"
              html_format__table_cell_to_html_8_p_0(html_format__V_39_39, html_format__V_40_40, html_format__STATE_VARIABLE_StyleControlMap_0_3, &html_format__STATE_VARIABLE_StyleControlMap_31_31, html_format__STATE_VARIABLE_ColumnNum_0_5, &html_format__STATE_VARIABLE_ColumnNum_32_32, html_format__Head_22, &html_format__HeadHTML_25);
            }
#line 3034 "html_format.c"
            html_format__TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 979 "html_format.m"
            {
#line 979 "html_format.m"
              html_format__V_34_34 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_38_38, html_format__Separator_1, html_format__HeadHTML_25);
            }
#line 979 "html_format.m"
            {
#line 979 "html_format.m"
              html_format__STATE_VARIABLE_HTML_33_33 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_38_38, html_format__STATE_VARIABLE_HTML_0_7, html_format__V_34_34);
            }
#line 980 "html_format.m"
            /* direct tailcall eliminated */
#line 980 "html_format.m"
            {
#line 980 "html_format.m"
              MR_Word html_format__STATE_VARIABLE_StyleControlMap_0__tmp_copy_3 = html_format__STATE_VARIABLE_StyleControlMap_31_31;
#line 980 "html_format.m"
              MR_Integer html_format__STATE_VARIABLE_ColumnNum_0__tmp_copy_5 = html_format__STATE_VARIABLE_ColumnNum_32_32;
#line 980 "html_format.m"
              MR_Word html_format__HeadVar__6__tmp_copy_6 = html_format__Tail_23;
#line 980 "html_format.m"
              MR_Word html_format__STATE_VARIABLE_HTML_0__tmp_copy_7 = html_format__STATE_VARIABLE_HTML_33_33;

#line 980 "html_format.m"
              html_format__STATE_VARIABLE_HTML_0_7 = html_format__STATE_VARIABLE_HTML_0__tmp_copy_7;
#line 980 "html_format.m"
              html_format__HeadVar__6_6 = html_format__HeadVar__6__tmp_copy_6;
#line 980 "html_format.m"
              html_format__STATE_VARIABLE_ColumnNum_0_5 = html_format__STATE_VARIABLE_ColumnNum_0__tmp_copy_5;
#line 980 "html_format.m"
              html_format__STATE_VARIABLE_StyleControlMap_0_3 = html_format__STATE_VARIABLE_StyleControlMap_0__tmp_copy_3;
#line 980 "html_format.m"
            }
#line 980 "html_format.m"
            continue;
#line 977 "html_format.m"
          }
#line 975 "html_format.m"
      }
#line 975 "html_format.m"
      break;
#line 975 "html_format.m"
    }
#line 969 "html_format.m"
}

#line 926 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_p_0(
#line 926 "html_format.m"
  MR_String html_format__V_34_34,
#line 926 "html_format.m"
  MR_String html_format__V_35_35,
#line 926 "html_format.m"
  MR_Word html_format__V_36_36,
#line 926 "html_format.m"
  MR_Word html_format__Separator_1,
#line 926 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
#line 926 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
#line 926 "html_format.m"
  MR_Word html_format__HeadVar__5_5,
#line 926 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_HTML_0_6,
#line 926 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_HTML_7)
#line 926 "html_format.m"
{
#line 932 "html_format.m"
  while (MR_TRUE)
#line 932 "html_format.m"
    {
#line 932 "html_format.m"
      /* tailcall optimized into a loop */
#line 932 "html_format.m"
      {
#line 932 "html_format.m"
        MR_bool html_format__succeeded;

#line 932 "html_format.m"
        if ((html_format__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 932 "html_format.m"
          {
#line 932 "html_format.m"
            *html_format__STATE_VARIABLE_HTML_7 = html_format__STATE_VARIABLE_HTML_0_6;
#line 932 "html_format.m"
            *html_format__STATE_VARIABLE_StyleControlMap_4 = html_format__STATE_VARIABLE_StyleControlMap_0_3;
#line 932 "html_format.m"
          }
#line 932 "html_format.m"
        else
#line 934 "html_format.m"
          {
#line 934 "html_format.m"
            MR_Word html_format__TypeCtorInfo_33_33;
#line 934 "html_format.m"
            MR_Word html_format__Head_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 0)));
#line 934 "html_format.m"
            MR_Word html_format__Tail_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 1)));
#line 934 "html_format.m"
            MR_Word html_format__HeadHTML_22;
#line 934 "html_format.m"
            MR_Word html_format__STATE_VARIABLE_StyleControlMap_27_27;
#line 934 "html_format.m"
            MR_Word html_format__STATE_VARIABLE_HTML_28_28;
#line 934 "html_format.m"
            MR_Word html_format__V_29_29;

#line 935 "html_format.m"
            {
#line 935 "html_format.m"
              html_format__item_to_html_7_p_0(html_format__V_34_34, html_format__V_35_35, html_format__V_36_36, html_format__STATE_VARIABLE_StyleControlMap_0_3, &html_format__STATE_VARIABLE_StyleControlMap_27_27, html_format__Head_19, &html_format__HeadHTML_22);
            }
#line 3150 "html_format.c"
            html_format__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 936 "html_format.m"
            {
#line 936 "html_format.m"
              html_format__V_29_29 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_33_33, html_format__Separator_1, html_format__HeadHTML_22);
            }
#line 936 "html_format.m"
            {
#line 936 "html_format.m"
              html_format__STATE_VARIABLE_HTML_28_28 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_33_33, html_format__STATE_VARIABLE_HTML_0_6, html_format__V_29_29);
            }
#line 937 "html_format.m"
            /* direct tailcall eliminated */
#line 937 "html_format.m"
            {
#line 937 "html_format.m"
              MR_Word html_format__STATE_VARIABLE_StyleControlMap_0__tmp_copy_3 = html_format__STATE_VARIABLE_StyleControlMap_27_27;
#line 937 "html_format.m"
              MR_Word html_format__HeadVar__5__tmp_copy_5 = html_format__Tail_20;
#line 937 "html_format.m"
              MR_Word html_format__STATE_VARIABLE_HTML_0__tmp_copy_6 = html_format__STATE_VARIABLE_HTML_28_28;

#line 937 "html_format.m"
              html_format__STATE_VARIABLE_HTML_0_6 = html_format__STATE_VARIABLE_HTML_0__tmp_copy_6;
#line 937 "html_format.m"
              html_format__HeadVar__5_5 = html_format__HeadVar__5__tmp_copy_5;
#line 937 "html_format.m"
              html_format__STATE_VARIABLE_StyleControlMap_0_3 = html_format__STATE_VARIABLE_StyleControlMap_0__tmp_copy_3;
#line 937 "html_format.m"
            }
#line 937 "html_format.m"
            continue;
#line 934 "html_format.m"
          }
#line 932 "html_format.m"
      }
#line 932 "html_format.m"
      break;
#line 932 "html_format.m"
    }
#line 926 "html_format.m"
}

#line 902 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_p_0(
#line 902 "html_format.m"
  MR_String html_format__V_15_15,
#line 902 "html_format.m"
  MR_String html_format__V_16_16,
#line 902 "html_format.m"
  MR_Word html_format__V_17_17,
#line 902 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_10,
#line 902 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_11,
#line 902 "html_format.m"
  MR_Word html_format__List_8,
#line 902 "html_format.m"
  MR_Word * html_format__HTML_9)
#line 902 "html_format.m"
{
#line 908 "html_format.m"
  {
#line 908 "html_format.m"
    MR_bool html_format__succeeded;
#line 908 "html_format.m"
    MR_Word html_format__V_12_12;

#line 888 "html_format.m"
    {
#line 888 "html_format.m"
      html_format__V_12_12 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
#line 920 "html_format.m"
    if ((html_format__List_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 920 "html_format.m"
      {
#line 888 "html_format.m"
        {
#line 888 "html_format.m"
          *html_format__HTML_9 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 920 "html_format.m"
        *html_format__STATE_VARIABLE_StyleControlMap_11 = html_format__STATE_VARIABLE_StyleControlMap_0_10;
#line 920 "html_format.m"
      }
#line 920 "html_format.m"
    else
#line 921 "html_format.m"
      {
#line 921 "html_format.m"
        MR_Word html_format__Head_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__List_8, (MR_Integer) 0)));
#line 921 "html_format.m"
        MR_Word html_format__Tail_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__List_8, (MR_Integer) 1)));
#line 921 "html_format.m"
        MR_Word html_format__HeadHTML_30;
#line 921 "html_format.m"
        MR_Word html_format__STATE_VARIABLE_StyleControlMap_21_33;

#line 922 "html_format.m"
        {
#line 922 "html_format.m"
          html_format__item_to_html_7_p_0(html_format__V_15_15, html_format__V_16_16, html_format__V_17_17, html_format__STATE_VARIABLE_StyleControlMap_0_10, &html_format__STATE_VARIABLE_StyleControlMap_21_33, html_format__Head_27, &html_format__HeadHTML_30);
        }
#line 923 "html_format.m"
        {
#line 923 "html_format.m"
          html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_p_0(html_format__V_15_15, html_format__V_16_16, html_format__V_17_17, html_format__V_12_12, html_format__STATE_VARIABLE_StyleControlMap_21_33, html_format__STATE_VARIABLE_StyleControlMap_11, html_format__Tail_28, html_format__HeadHTML_30, html_format__HTML_9);
#line 923 "html_format.m"
          return;
        }
#line 921 "html_format.m"
      }
#line 908 "html_format.m"
  }
#line 902 "html_format.m"
}

#line 902 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_p_0(
#line 902 "html_format.m"
  MR_Word html_format__V_15_15,
#line 902 "html_format.m"
  MR_Word html_format__V_16_16,
#line 902 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_10,
#line 902 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_11,
#line 902 "html_format.m"
  MR_Word html_format__List_8,
#line 902 "html_format.m"
  MR_Word * html_format__HTML_9)
#line 902 "html_format.m"
{
#line 908 "html_format.m"
  {
#line 908 "html_format.m"
    MR_bool html_format__succeeded;
#line 908 "html_format.m"
    MR_Word html_format__V_12_12;

#line 888 "html_format.m"
    {
#line 888 "html_format.m"
      html_format__V_12_12 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
#line 920 "html_format.m"
    if ((html_format__List_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 920 "html_format.m"
      {
#line 888 "html_format.m"
        {
#line 888 "html_format.m"
          *html_format__HTML_9 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 920 "html_format.m"
        *html_format__STATE_VARIABLE_StyleControlMap_11 = html_format__STATE_VARIABLE_StyleControlMap_0_10;
#line 920 "html_format.m"
      }
#line 920 "html_format.m"
    else
#line 921 "html_format.m"
      {
#line 921 "html_format.m"
        MR_Word html_format__Head_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__List_8, (MR_Integer) 0)));
#line 921 "html_format.m"
        MR_Word html_format__Tail_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__List_8, (MR_Integer) 1)));
#line 921 "html_format.m"
        MR_Word html_format__HeadHTML_29;
#line 921 "html_format.m"
        MR_Word html_format__STATE_VARIABLE_StyleControlMap_21_32;

#line 922 "html_format.m"
        {
#line 922 "html_format.m"
          html_format__table_header_group_to_html_row_1_6_p_0(html_format__V_15_15, html_format__V_16_16, html_format__STATE_VARIABLE_StyleControlMap_0_10, &html_format__STATE_VARIABLE_StyleControlMap_21_32, html_format__Head_26, &html_format__HeadHTML_29);
        }
#line 923 "html_format.m"
        {
#line 923 "html_format.m"
          html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_50_48_95_95_91_52_93_95_48_7_p_0(html_format__V_15_15, html_format__V_16_16, html_format__V_12_12, html_format__STATE_VARIABLE_StyleControlMap_21_32, html_format__STATE_VARIABLE_StyleControlMap_11, html_format__Tail_27, html_format__HeadHTML_29, html_format__HTML_9);
#line 923 "html_format.m"
          return;
        }
#line 921 "html_format.m"
      }
#line 908 "html_format.m"
  }
#line 902 "html_format.m"
}

#line 902 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_p_0(
#line 902 "html_format.m"
  MR_Word html_format__V_15_15,
#line 902 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_10,
#line 902 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_11,
#line 902 "html_format.m"
  MR_Word html_format__List_8,
#line 902 "html_format.m"
  MR_Word * html_format__HTML_9)
#line 902 "html_format.m"
{
#line 908 "html_format.m"
  {
#line 908 "html_format.m"
    MR_bool html_format__succeeded;
#line 908 "html_format.m"
    MR_Word html_format__V_12_12;

#line 888 "html_format.m"
    {
#line 888 "html_format.m"
      html_format__V_12_12 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
#line 920 "html_format.m"
    if ((html_format__List_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 920 "html_format.m"
      {
#line 888 "html_format.m"
        {
#line 888 "html_format.m"
          *html_format__HTML_9 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 920 "html_format.m"
        *html_format__STATE_VARIABLE_StyleControlMap_11 = html_format__STATE_VARIABLE_StyleControlMap_0_10;
#line 920 "html_format.m"
      }
#line 920 "html_format.m"
    else
#line 921 "html_format.m"
      {
#line 921 "html_format.m"
        MR_Word html_format__Head_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__List_8, (MR_Integer) 0)));
#line 921 "html_format.m"
        MR_Word html_format__Tail_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__List_8, (MR_Integer) 1)));
#line 921 "html_format.m"
        MR_Word html_format__HeadHTML_28;
#line 921 "html_format.m"
        MR_Word html_format__STATE_VARIABLE_StyleControlMap_21_31;

#line 922 "html_format.m"
        {
#line 922 "html_format.m"
          html_format__table_header_group_to_html_row_2_5_p_0(html_format__V_15_15, html_format__STATE_VARIABLE_StyleControlMap_0_10, &html_format__STATE_VARIABLE_StyleControlMap_21_31, html_format__Head_25, &html_format__HeadHTML_28);
        }
#line 923 "html_format.m"
        {
#line 923 "html_format.m"
          html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_57_95_95_91_51_93_95_48_7_p_0(html_format__V_15_15, html_format__V_12_12, html_format__STATE_VARIABLE_StyleControlMap_21_31, html_format__STATE_VARIABLE_StyleControlMap_11, html_format__Tail_26, html_format__HeadHTML_28, html_format__HTML_9);
#line 923 "html_format.m"
          return;
        }
#line 921 "html_format.m"
      }
#line 908 "html_format.m"
  }
#line 902 "html_format.m"
}

#line 902 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_p_0(
#line 902 "html_format.m"
  MR_Word html_format__V_15_15,
#line 902 "html_format.m"
  MR_Word html_format__V_16_16,
#line 902 "html_format.m"
  MR_Integer html_format__V_17_17,
#line 902 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_10,
#line 902 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_11,
#line 902 "html_format.m"
  MR_Word html_format__List_8,
#line 902 "html_format.m"
  MR_Word * html_format__HTML_9)
#line 902 "html_format.m"
{
#line 908 "html_format.m"
  {
#line 908 "html_format.m"
    MR_bool html_format__succeeded;
#line 908 "html_format.m"
    MR_Word html_format__V_12_12;

#line 888 "html_format.m"
    {
#line 888 "html_format.m"
      html_format__V_12_12 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
#line 920 "html_format.m"
    if ((html_format__List_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 920 "html_format.m"
      {
#line 888 "html_format.m"
        {
#line 888 "html_format.m"
          *html_format__HTML_9 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 920 "html_format.m"
        *html_format__STATE_VARIABLE_StyleControlMap_11 = html_format__STATE_VARIABLE_StyleControlMap_0_10;
#line 920 "html_format.m"
      }
#line 920 "html_format.m"
    else
#line 921 "html_format.m"
      {
#line 921 "html_format.m"
        MR_Word html_format__Head_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__List_8, (MR_Integer) 0)));
#line 921 "html_format.m"
        MR_Word html_format__Tail_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__List_8, (MR_Integer) 1)));
#line 921 "html_format.m"
        MR_Word html_format__HeadHTML_30;
#line 921 "html_format.m"
        MR_Word html_format__STATE_VARIABLE_StyleControlMap_21_33;

#line 922 "html_format.m"
        {
#line 922 "html_format.m"
          html_format__table_row_to_html_7_p_0(html_format__V_15_15, html_format__V_16_16, html_format__V_17_17, html_format__STATE_VARIABLE_StyleControlMap_0_10, &html_format__STATE_VARIABLE_StyleControlMap_21_33, html_format__Head_27, &html_format__HeadHTML_30);
        }
#line 923 "html_format.m"
        {
#line 923 "html_format.m"
          html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_56_95_95_91_53_93_95_48_7_p_0(html_format__V_15_15, html_format__V_16_16, html_format__V_17_17, html_format__V_12_12, html_format__STATE_VARIABLE_StyleControlMap_21_33, html_format__STATE_VARIABLE_StyleControlMap_11, html_format__Tail_28, html_format__HeadHTML_30, html_format__HTML_9);
#line 923 "html_format.m"
          return;
        }
#line 921 "html_format.m"
      }
#line 908 "html_format.m"
  }
#line 902 "html_format.m"
}

#line 942 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(
#line 942 "html_format.m"
  MR_Word html_format__V_18_18,
#line 942 "html_format.m"
  MR_Word html_format__V_19_19,
#line 942 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_12,
#line 942 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_13,
#line 942 "html_format.m"
  MR_Integer html_format__STATE_VARIABLE_ColumnNum_0_14,
#line 942 "html_format.m"
  MR_Word html_format__List_10,
#line 942 "html_format.m"
  MR_Word * html_format__HTML_11)
#line 942 "html_format.m"
{
#line 948 "html_format.m"
  {
#line 948 "html_format.m"
    MR_bool html_format__succeeded;
#line 948 "html_format.m"
    MR_Word html_format__V_15_15;

#line 888 "html_format.m"
    {
#line 888 "html_format.m"
      html_format__V_15_15 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
#line 962 "html_format.m"
    if ((html_format__List_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 962 "html_format.m"
      {
#line 888 "html_format.m"
        {
#line 888 "html_format.m"
          *html_format__HTML_11 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 962 "html_format.m"
        *html_format__STATE_VARIABLE_StyleControlMap_13 = html_format__STATE_VARIABLE_StyleControlMap_0_12;
#line 962 "html_format.m"
      }
#line 962 "html_format.m"
    else
#line 964 "html_format.m"
      {
#line 964 "html_format.m"
        MR_Word html_format__Head_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__List_10, (MR_Integer) 0)));
#line 964 "html_format.m"
        MR_Word html_format__Tail_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__List_10, (MR_Integer) 1)));
#line 964 "html_format.m"
        MR_Word html_format__HeadHTML_34;
#line 964 "html_format.m"
        MR_Word html_format__STATE_VARIABLE_StyleControlMap_25_38;
#line 964 "html_format.m"
        MR_Integer html_format__STATE_VARIABLE_ColumnNum_26_39;

#line 965 "html_format.m"
        {
#line 965 "html_format.m"
          html_format__table_cell_to_html_8_p_0(html_format__V_18_18, html_format__V_19_19, html_format__STATE_VARIABLE_StyleControlMap_0_12, &html_format__STATE_VARIABLE_StyleControlMap_25_38, html_format__STATE_VARIABLE_ColumnNum_0_14, &html_format__STATE_VARIABLE_ColumnNum_26_39, html_format__Head_31, &html_format__HeadHTML_34);
        }
#line 966 "html_format.m"
        {
#line 966 "html_format.m"
          html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_97_99_99_95_95_104_111_49_54_95_95_91_52_93_95_48_8_p_0(html_format__V_18_18, html_format__V_19_19, html_format__V_15_15, html_format__STATE_VARIABLE_StyleControlMap_25_38, html_format__STATE_VARIABLE_StyleControlMap_13, html_format__STATE_VARIABLE_ColumnNum_26_39, html_format__Tail_32, html_format__HeadHTML_34, html_format__HTML_11);
#line 966 "html_format.m"
          return;
        }
#line 964 "html_format.m"
      }
#line 948 "html_format.m"
  }
#line 942 "html_format.m"
}

#line 914 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_49_95_95_91_53_93_95_48_6_p_0(
#line 914 "html_format.m"
  MR_String html_format__V_24_24,
#line 914 "html_format.m"
  MR_String html_format__V_25_25,
#line 914 "html_format.m"
  MR_Word html_format__V_26_26,
#line 914 "html_format.m"
  MR_Word html_format__Separator_1,
#line 914 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_3,
#line 914 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_4,
#line 914 "html_format.m"
  MR_Word html_format__HeadVar__5_5,
#line 914 "html_format.m"
  MR_Word * html_format__HeadVar__6_6)
#line 914 "html_format.m"
{
#line 920 "html_format.m"
  {
#line 920 "html_format.m"
    MR_bool html_format__succeeded;

#line 920 "html_format.m"
    if ((html_format__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 920 "html_format.m"
      {
#line 888 "html_format.m"
        {
#line 888 "html_format.m"
          *html_format__HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 920 "html_format.m"
        *html_format__STATE_VARIABLE_StyleControlMap_4 = html_format__STATE_VARIABLE_StyleControlMap_0_3;
#line 920 "html_format.m"
      }
#line 920 "html_format.m"
    else
#line 921 "html_format.m"
      {
#line 921 "html_format.m"
        MR_Word html_format__Head_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 0)));
#line 921 "html_format.m"
        MR_Word html_format__Tail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__5_5, (MR_Integer) 1)));
#line 921 "html_format.m"
        MR_Word html_format__HeadHTML_18;
#line 921 "html_format.m"
        MR_Word html_format__STATE_VARIABLE_StyleControlMap_21_21;

#line 922 "html_format.m"
        {
#line 922 "html_format.m"
          html_format__item_to_html_7_p_0(html_format__V_24_24, html_format__V_25_25, html_format__V_26_26, html_format__STATE_VARIABLE_StyleControlMap_0_3, &html_format__STATE_VARIABLE_StyleControlMap_21_21, html_format__Head_15, &html_format__HeadHTML_18);
        }
#line 923 "html_format.m"
        {
#line 923 "html_format.m"
          html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_53_95_95_91_53_93_95_48_7_p_0(html_format__V_24_24, html_format__V_25_25, html_format__V_26_26, html_format__Separator_1, html_format__STATE_VARIABLE_StyleControlMap_21_21, html_format__STATE_VARIABLE_StyleControlMap_4, html_format__Tail_16, html_format__HeadHTML_18, html_format__HeadVar__6_6);
#line 923 "html_format.m"
          return;
        }
#line 921 "html_format.m"
      }
#line 920 "html_format.m"
  }
#line 914 "html_format.m"
}

#line 1018 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_4(
#line 1018 "html_format.m"
  MR_Box html_format__closure_arg,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_1,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_2,
#line 1018 "html_format.m"
  MR_Box * html_format__wrapper_arg_3)
#line 1018 "html_format.m"
{
#line 1018 "html_format.m"
  {
#line 1018 "html_format.m"
    MR_Box html_format__closure = html_format__closure_arg;
#line 1018 "html_format.m"
    MR_Word html_format__conv4_STATE_VARIABLE_Acc_11;

#line 1018 "html_format.m"
    {
#line 1018 "html_format.m"
      html_format__replace_special_char_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), html_format__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2), &html_format__conv4_STATE_VARIABLE_Acc_11);
    }
#line 1018 "html_format.m"
    *html_format__wrapper_arg_3 = ((MR_Box) (html_format__conv4_STATE_VARIABLE_Acc_11));
#line 1018 "html_format.m"
  }
#line 1018 "html_format.m"
}

#line 3673 "html_format.c"
static MR_bool MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_3(
#line 3676 "html_format.c"
  MR_Box html_format__closure_arg,
#line 3678 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 3680 "html_format.c"
  MR_Box * html_format__wrapper_arg_2)
#line 3682 "html_format.c"
{
#line 3684 "html_format.c"
  {
#line 3686 "html_format.c"
    MR_bool html_format__succeeded;
#line 3688 "html_format.c"
    MR_Box html_format__closure = html_format__closure_arg;
#line 3690 "html_format.c"
    MR_String html_format__conv3_HeadVar__2_2;

#line 3693 "html_format.c"
    {
#line 3695 "html_format.c"
      html_format__succeeded = html_format__special_html_char_or_break_2_p_0(((MR_Char) (MR_Word) html_format__wrapper_arg_1), &html_format__conv3_HeadVar__2_2);
    }
#line 3698 "html_format.c"
    if (html_format__succeeded)
#line 3700 "html_format.c"
      {
#line 3702 "html_format.c"
        *html_format__wrapper_arg_2 = ((MR_Box) (html_format__conv3_HeadVar__2_2));
#line 3704 "html_format.c"
        html_format__succeeded = MR_TRUE;
#line 3706 "html_format.c"
      }
#line 3708 "html_format.c"
    return html_format__succeeded;
#line 3710 "html_format.c"
  }
#line 3712 "html_format.c"
}

#line 1018 "html_format.m"
static void MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_2(
#line 1018 "html_format.m"
  MR_Box html_format__closure_arg,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_1,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_2,
#line 1018 "html_format.m"
  MR_Box * html_format__wrapper_arg_3)
#line 1018 "html_format.m"
{
#line 1018 "html_format.m"
  {
#line 1018 "html_format.m"
    MR_Box html_format__closure = html_format__closure_arg;
#line 1018 "html_format.m"
    MR_Word html_format__conv1_STATE_VARIABLE_Acc_11;

#line 1018 "html_format.m"
    {
#line 1018 "html_format.m"
      html_format__replace_special_char_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), html_format__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2), &html_format__conv1_STATE_VARIABLE_Acc_11);
    }
#line 1018 "html_format.m"
    *html_format__wrapper_arg_3 = ((MR_Box) (html_format__conv1_STATE_VARIABLE_Acc_11));
#line 1018 "html_format.m"
  }
#line 1018 "html_format.m"
}

#line 3747 "html_format.c"
static MR_bool MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0_1(
#line 3750 "html_format.c"
  MR_Box html_format__closure_arg,
#line 3752 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 3754 "html_format.c"
  MR_Box * html_format__wrapper_arg_2)
#line 3756 "html_format.c"
{
#line 3758 "html_format.c"
  {
#line 3760 "html_format.c"
    MR_bool html_format__succeeded;
#line 3762 "html_format.c"
    MR_Box html_format__closure = html_format__closure_arg;
#line 3764 "html_format.c"
    MR_String html_format__conv0_HeadVar__2_2;

#line 3767 "html_format.c"
    {
#line 3769 "html_format.c"
      html_format__succeeded = html_format__special_html_char_or_break_2_p_0(((MR_Char) (MR_Word) html_format__wrapper_arg_1), &html_format__conv0_HeadVar__2_2);
    }
#line 3772 "html_format.c"
    if (html_format__succeeded)
#line 3774 "html_format.c"
      {
#line 3776 "html_format.c"
        *html_format__wrapper_arg_2 = ((MR_Box) (html_format__conv0_HeadVar__2_2));
#line 3778 "html_format.c"
        html_format__succeeded = MR_TRUE;
#line 3780 "html_format.c"
      }
#line 3782 "html_format.c"
    return html_format__succeeded;
#line 3784 "html_format.c"
  }
#line 3786 "html_format.c"
}

#line 816 "html_format.m"
static MR_Word MR_CALL 
html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0(
#line 816 "html_format.m"
  MR_Word html_format__PseudoLink_5)
#line 816 "html_format.m"
{
#line 818 "html_format.m"
  {
#line 818 "html_format.m"
    MR_bool html_format__succeeded;
#line 818 "html_format.m"
    MR_Word html_format__HTML_6;
#line 818 "html_format.m"
    MR_String html_format__Label_7 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__PseudoLink_5, (MR_Integer) 0)));
#line 818 "html_format.m"
    MR_Word html_format__Class_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__PseudoLink_5, (MR_Integer) 1)));
#line 818 "html_format.m"
    MR_String html_format__HTMLStr_9;

#line 823 "html_format.m"
#line 823 "html_format.m"
    switch (html_format__Class_8) {
#line 823 "html_format.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 823 "html_format.m"
      case (MR_Integer) 1:
#line 821 "html_format.m"
        {
#line 821 "html_format.m"
          MR_String html_format__V_11_11;
#line 821 "html_format.m"
          MR_String html_format__V_12_12;
#line 821 "html_format.m"
          MR_Word html_format__Chars_22;
#line 1018 "html_format.m"
          MR_Box html_format__conv2_Chars_22;

#line 1018 "html_format.m"
          {
#line 1018 "html_format.m"
            mercury__string__foldr_4_p_0((MR_Word) &html_format_scalar_common_2[2], (MR_Word) &html_format_scalar_common_5[5], html_format__Label_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &html_format__conv2_Chars_22);
          }
#line 1018 "html_format.m"
          html_format__Chars_22 = ((MR_Word) html_format__conv2_Chars_22);
#line 1019 "html_format.m"
          {
#line 1019 "html_format.m"
            mercury__string__from_char_list_2_p_0(html_format__Chars_22, &html_format__V_12_12);
          }
#line 822 "html_format.m"
          {
#line 822 "html_format.m"
            html_format__V_11_11 = mercury__string__f_43_43_2_f_0(html_format__V_12_12, (MR_String) "]");
          }
#line 822 "html_format.m"
          {
#line 822 "html_format.m"
            html_format__HTMLStr_9 = mercury__string__f_43_43_2_f_0((MR_String) "[", html_format__V_11_11);
          }
#line 821 "html_format.m"
        }
#line 823 "html_format.m"
        break;
#line 823 "html_format.m"
      case (MR_Integer) 0:
#line 991 "html_format.m"
        {
#line 991 "html_format.m"
          MR_Word html_format__Chars_37;
#line 1018 "html_format.m"
          MR_Box html_format__conv5_Chars_37;

#line 1018 "html_format.m"
          {
#line 1018 "html_format.m"
            mercury__string__foldr_4_p_0((MR_Word) &html_format_scalar_common_2[2], (MR_Word) &html_format_scalar_common_5[6], html_format__Label_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &html_format__conv5_Chars_37);
          }
#line 1018 "html_format.m"
          html_format__Chars_37 = ((MR_Word) html_format__conv5_Chars_37);
#line 1019 "html_format.m"
          {
#line 1019 "html_format.m"
            mercury__string__from_char_list_2_p_0(html_format__Chars_37, &html_format__HTMLStr_9);
          }
#line 991 "html_format.m"
        }
#line 823 "html_format.m"
        break;
#line 823 "html_format.m"
    }
#line 896 "html_format.m"
    {
#line 896 "html_format.m"
      html_format__HTML_6 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__HTMLStr_9)));
    }
#line 818 "html_format.m"
    return html_format__HTML_6;
#line 818 "html_format.m"
  }
#line 816 "html_format.m"
}

#line 223 "html_format.m"
static void MR_CALL 
html_format____Compare____table_header_rows_0_0(
#line 223 "html_format.m"
  MR_Word * html_format__HeadVar__1_1,
#line 223 "html_format.m"
  MR_Word html_format__HeadVar__2_2,
#line 223 "html_format.m"
  MR_Word html_format__HeadVar__3_3)
#line 223 "html_format.m"
{
#line 223 "html_format.m"
  {
#line 223 "html_format.m"
    MR_bool html_format__succeeded;
#line 223 "html_format.m"
    MR_Integer html_format__Cast_HeadVar1_4 = (MR_Integer) html_format__HeadVar__2_2;
#line 223 "html_format.m"
    MR_Integer html_format__Cast_HeadVar2_5 = (MR_Integer) html_format__HeadVar__3_3;

#line 223 "html_format.m"
    {
#line 223 "html_format.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(html_format__HeadVar__1_1, html_format__Cast_HeadVar1_4, html_format__Cast_HeadVar2_5);
#line 223 "html_format.m"
      return;
    }
#line 223 "html_format.m"
  }
#line 223 "html_format.m"
}

#line 223 "html_format.m"
static MR_bool MR_CALL 
html_format____Unify____table_header_rows_0_0(
#line 223 "html_format.m"
  MR_Word html_format__HeadVar__2_1,
#line 223 "html_format.m"
  MR_Word html_format__HeadVar__2_2)
#line 223 "html_format.m"
{
#line 3933 "html_format.c"
  {
#line 3935 "html_format.c"
    MR_bool html_format__succeeded = (html_format__HeadVar__2_1 == html_format__HeadVar__2_2);

#line 3938 "html_format.c"
    return html_format__succeeded;
#line 3940 "html_format.c"
  }
#line 223 "html_format.m"
}

#line 617 "html_format.m"
static void MR_CALL 
html_format____Compare____style_element_map_0_0(
#line 617 "html_format.m"
  MR_Word * html_format__HeadVar__1_1,
#line 617 "html_format.m"
  MR_Word html_format__HeadVar__2_2,
#line 617 "html_format.m"
  MR_Word html_format__HeadVar__3_3)
#line 617 "html_format.m"
{
#line 617 "html_format.m"
  {
#line 617 "html_format.m"
    MR_bool html_format__succeeded;
#line 617 "html_format.m"
    MR_Word html_format__Cast_HeadVar1_4 = html_format__HeadVar__2_2;
#line 617 "html_format.m"
    MR_Word html_format__Cast_HeadVar2_5 = html_format__HeadVar__3_3;

#line 617 "html_format.m"
    {
#line 617 "html_format.m"
      mercury__builtin__compare_3_p_0((MR_Word) &html_format_scalar_common_1[0], html_format__HeadVar__1_1, ((MR_Box) (html_format__Cast_HeadVar1_4)), ((MR_Box) (html_format__Cast_HeadVar2_5)));
#line 617 "html_format.m"
      return;
    }
#line 617 "html_format.m"
  }
#line 617 "html_format.m"
}

#line 617 "html_format.m"
static MR_bool MR_CALL 
html_format____Unify____style_element_map_0_0(
#line 617 "html_format.m"
  MR_Word html_format__HeadVar__1_1,
#line 617 "html_format.m"
  MR_Word html_format__HeadVar__2_2)
#line 617 "html_format.m"
{
#line 617 "html_format.m"
  {
#line 617 "html_format.m"
    MR_bool html_format__succeeded;
#line 617 "html_format.m"
    MR_Word html_format__Cast_HeadVar1_3 = html_format__HeadVar__1_1;
#line 617 "html_format.m"
    MR_Word html_format__Cast_HeadVar2_4 = html_format__HeadVar__2_2;

#line 617 "html_format.m"
    {
#line 617 "html_format.m"
      return html_format__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &html_format_scalar_common_1[0], ((MR_Box) (html_format__Cast_HeadVar1_3)), ((MR_Box) (html_format__Cast_HeadVar2_4)));
    }
#line 617 "html_format.m"
    return html_format__succeeded;
#line 617 "html_format.m"
  }
#line 617 "html_format.m"
}

#line 612 "html_format.m"
static void MR_CALL 
html_format____Compare____style_element_0_0(
#line 612 "html_format.m"
  MR_Word * html_format__HeadVar__1_1,
#line 612 "html_format.m"
  MR_Word html_format__HeadVar__2_2,
#line 612 "html_format.m"
  MR_Word html_format__HeadVar__3_3)
#line 612 "html_format.m"
{
#line 612 "html_format.m"
  {
#line 612 "html_format.m"
    MR_bool html_format__succeeded;
#line 612 "html_format.m"
    MR_Integer html_format__CastX_6 = (MR_Integer) html_format__HeadVar__2_2;
#line 612 "html_format.m"
    MR_Integer html_format__CastY_7 = (MR_Integer) html_format__HeadVar__3_3;

#line 612 "html_format.m"
    html_format__succeeded = (html_format__CastX_6 == html_format__CastY_7);
#line 612 "html_format.m"
    if (html_format__succeeded)
#line 4031 "html_format.c"
      *html_format__HeadVar__1_1 = (MR_Integer) 0;
#line 612 "html_format.m"
    else
#line 612 "html_format.m"
      {
#line 612 "html_format.m"
        MR_String html_format__V_4_4 = (MR_String) html_format__HeadVar__2_2;
#line 612 "html_format.m"
        MR_String html_format__V_5_5 = (MR_String) html_format__HeadVar__3_3;

#line 612 "html_format.m"
        {
#line 612 "html_format.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(html_format__HeadVar__1_1, html_format__V_4_4, html_format__V_5_5);
#line 612 "html_format.m"
          return;
        }
#line 612 "html_format.m"
      }
#line 612 "html_format.m"
  }
#line 612 "html_format.m"
}

#line 612 "html_format.m"
static MR_bool MR_CALL 
html_format____Unify____style_element_0_0(
#line 612 "html_format.m"
  MR_Word html_format__HeadVar__1_1,
#line 612 "html_format.m"
  MR_Word html_format__HeadVar__2_2)
#line 612 "html_format.m"
{
#line 612 "html_format.m"
  {
#line 612 "html_format.m"
    MR_bool html_format__succeeded;
#line 612 "html_format.m"
    MR_Integer html_format__CastX_5 = (MR_Integer) html_format__HeadVar__1_1;
#line 612 "html_format.m"
    MR_Integer html_format__CastY_6 = (MR_Integer) html_format__HeadVar__2_2;

#line 612 "html_format.m"
    html_format__succeeded = (html_format__CastX_5 == html_format__CastY_6);
#line 612 "html_format.m"
    if (html_format__succeeded)
#line 612 "html_format.m"
      html_format__succeeded = MR_TRUE;
#line 612 "html_format.m"
    else
#line 612 "html_format.m"
      {
#line 612 "html_format.m"
        MR_String html_format__V_3_3 = (MR_String) html_format__HeadVar__1_1;
#line 612 "html_format.m"
        MR_String html_format__V_4_4 = (MR_String) html_format__HeadVar__2_2;

#line 4089 "html_format.c"
        html_format__succeeded = (strcmp(html_format__V_3_3, html_format__V_4_4) == 0);
#line 612 "html_format.m"
      }
#line 612 "html_format.m"
    return html_format__succeeded;
#line 612 "html_format.m"
  }
#line 612 "html_format.m"
}

#line 627 "html_format.m"
static void MR_CALL 
html_format____Compare____style_control_map_0_0(
#line 627 "html_format.m"
  MR_Word * html_format__HeadVar__1_1,
#line 627 "html_format.m"
  MR_Word html_format__HeadVar__2_2,
#line 627 "html_format.m"
  MR_Word html_format__HeadVar__3_3)
#line 627 "html_format.m"
{
#line 627 "html_format.m"
  {
#line 627 "html_format.m"
    MR_bool html_format__succeeded;
#line 627 "html_format.m"
    MR_Word html_format__Cast_HeadVar1_4 = html_format__HeadVar__2_2;
#line 627 "html_format.m"
    MR_Word html_format__Cast_HeadVar2_5 = html_format__HeadVar__3_3;

#line 627 "html_format.m"
    {
#line 627 "html_format.m"
      mercury__builtin__compare_3_p_0((MR_Word) &html_format_scalar_common_1[4], html_format__HeadVar__1_1, ((MR_Box) (html_format__Cast_HeadVar1_4)), ((MR_Box) (html_format__Cast_HeadVar2_5)));
#line 627 "html_format.m"
      return;
    }
#line 627 "html_format.m"
  }
#line 627 "html_format.m"
}

#line 627 "html_format.m"
static MR_bool MR_CALL 
html_format____Unify____style_control_map_0_0(
#line 627 "html_format.m"
  MR_Word html_format__HeadVar__1_1,
#line 627 "html_format.m"
  MR_Word html_format__HeadVar__2_2)
#line 627 "html_format.m"
{
#line 627 "html_format.m"
  {
#line 627 "html_format.m"
    MR_bool html_format__succeeded;
#line 627 "html_format.m"
    MR_Word html_format__Cast_HeadVar1_3 = html_format__HeadVar__1_1;
#line 627 "html_format.m"
    MR_Word html_format__Cast_HeadVar2_4 = html_format__HeadVar__2_2;

#line 627 "html_format.m"
    {
#line 627 "html_format.m"
      return html_format__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &html_format_scalar_common_1[4], ((MR_Box) (html_format__Cast_HeadVar1_3)), ((MR_Box) (html_format__Cast_HeadVar2_4)));
    }
#line 627 "html_format.m"
    return html_format__succeeded;
#line 627 "html_format.m"
  }
#line 627 "html_format.m"
}

#line 622 "html_format.m"
static void MR_CALL 
html_format____Compare____style_control_0_0(
#line 622 "html_format.m"
  MR_Word * html_format__HeadVar__1_1,
#line 622 "html_format.m"
  MR_Word html_format__HeadVar__2_2,
#line 622 "html_format.m"
  MR_Word html_format__HeadVar__3_3)
#line 622 "html_format.m"
{
#line 622 "html_format.m"
  {
#line 622 "html_format.m"
    MR_bool html_format__succeeded;
#line 622 "html_format.m"
    MR_Integer html_format__CastX_6 = (MR_Integer) html_format__HeadVar__2_2;
#line 622 "html_format.m"
    MR_Integer html_format__CastY_7 = (MR_Integer) html_format__HeadVar__3_3;

#line 622 "html_format.m"
    html_format__succeeded = (html_format__CastX_6 == html_format__CastY_7);
#line 622 "html_format.m"
    if (html_format__succeeded)
#line 4186 "html_format.c"
      *html_format__HeadVar__1_1 = (MR_Integer) 0;
#line 622 "html_format.m"
    else
#line 622 "html_format.m"
      {
#line 622 "html_format.m"
        MR_String html_format__V_4_4 = (MR_String) html_format__HeadVar__2_2;
#line 622 "html_format.m"
        MR_String html_format__V_5_5 = (MR_String) html_format__HeadVar__3_3;

#line 622 "html_format.m"
        {
#line 622 "html_format.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(html_format__HeadVar__1_1, html_format__V_4_4, html_format__V_5_5);
#line 622 "html_format.m"
          return;
        }
#line 622 "html_format.m"
      }
#line 622 "html_format.m"
  }
#line 622 "html_format.m"
}

#line 622 "html_format.m"
static MR_bool MR_CALL 
html_format____Unify____style_control_0_0(
#line 622 "html_format.m"
  MR_Word html_format__HeadVar__1_1,
#line 622 "html_format.m"
  MR_Word html_format__HeadVar__2_2)
#line 622 "html_format.m"
{
#line 622 "html_format.m"
  {
#line 622 "html_format.m"
    MR_bool html_format__succeeded;
#line 622 "html_format.m"
    MR_Integer html_format__CastX_5 = (MR_Integer) html_format__HeadVar__1_1;
#line 622 "html_format.m"
    MR_Integer html_format__CastY_6 = (MR_Integer) html_format__HeadVar__2_2;

#line 622 "html_format.m"
    html_format__succeeded = (html_format__CastX_5 == html_format__CastY_6);
#line 622 "html_format.m"
    if (html_format__succeeded)
#line 622 "html_format.m"
      html_format__succeeded = MR_TRUE;
#line 622 "html_format.m"
    else
#line 622 "html_format.m"
      {
#line 622 "html_format.m"
        MR_String html_format__V_3_3 = (MR_String) html_format__HeadVar__1_1;
#line 622 "html_format.m"
        MR_String html_format__V_4_4 = (MR_String) html_format__HeadVar__2_2;

#line 4244 "html_format.c"
        html_format__succeeded = (strcmp(html_format__V_3_3, html_format__V_4_4) == 0);
#line 622 "html_format.m"
      }
#line 622 "html_format.m"
    return html_format__succeeded;
#line 622 "html_format.m"
  }
#line 622 "html_format.m"
}

#line 34 "html_format.m"
void MR_CALL 
html_format____Compare____html_0_0(
#line 34 "html_format.m"
  MR_Word * html_format__HeadVar__1_1,
#line 34 "html_format.m"
  MR_Word html_format__HeadVar__2_2,
#line 34 "html_format.m"
  MR_Word html_format__HeadVar__3_3)
#line 34 "html_format.m"
{
#line 34 "html_format.m"
  {
#line 34 "html_format.m"
    MR_bool html_format__succeeded;
#line 34 "html_format.m"
    MR_Word html_format__Cast_HeadVar1_4 = html_format__HeadVar__2_2;
#line 34 "html_format.m"
    MR_Word html_format__Cast_HeadVar2_5 = html_format__HeadVar__3_3;

#line 34 "html_format.m"
    {
#line 34 "html_format.m"
      mercury__builtin__compare_3_p_0((MR_Word) &html_format_scalar_common_2[0], html_format__HeadVar__1_1, ((MR_Box) (html_format__Cast_HeadVar1_4)), ((MR_Box) (html_format__Cast_HeadVar2_5)));
#line 34 "html_format.m"
      return;
    }
#line 34 "html_format.m"
  }
#line 34 "html_format.m"
}

#line 34 "html_format.m"
MR_bool MR_CALL 
html_format____Unify____html_0_0(
#line 34 "html_format.m"
  MR_Word html_format__HeadVar__1_1,
#line 34 "html_format.m"
  MR_Word html_format__HeadVar__2_2)
#line 34 "html_format.m"
{
#line 34 "html_format.m"
  {
#line 34 "html_format.m"
    MR_bool html_format__succeeded;
#line 34 "html_format.m"
    MR_Word html_format__Cast_HeadVar1_3 = html_format__HeadVar__1_1;
#line 34 "html_format.m"
    MR_Word html_format__Cast_HeadVar2_4 = html_format__HeadVar__2_2;

#line 34 "html_format.m"
    {
#line 34 "html_format.m"
      return html_format__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &html_format_scalar_common_2[0], ((MR_Box) (html_format__Cast_HeadVar1_3)), ((MR_Box) (html_format__Cast_HeadVar2_4)));
    }
#line 34 "html_format.m"
    return html_format__succeeded;
#line 34 "html_format.m"
  }
#line 34 "html_format.m"
}

#line 833 "html_format.m"
static void MR_CALL 
html_format____Compare____format_info_0_0(
#line 833 "html_format.m"
  MR_Word * html_format__HeadVar__1_1,
#line 833 "html_format.m"
  MR_Word html_format__HeadVar__2_2,
#line 833 "html_format.m"
  MR_Word html_format__HeadVar__3_3)
#line 833 "html_format.m"
{
#line 833 "html_format.m"
  {
#line 833 "html_format.m"
    MR_bool html_format__succeeded;
#line 833 "html_format.m"
    MR_Integer html_format__CastX_21 = (MR_Integer) html_format__HeadVar__2_2;
#line 833 "html_format.m"
    MR_Integer html_format__CastY_22 = (MR_Integer) html_format__HeadVar__3_3;

#line 833 "html_format.m"
    html_format__succeeded = (html_format__CastX_21 == html_format__CastY_22);
#line 833 "html_format.m"
    if (html_format__succeeded)
#line 4341 "html_format.c"
      *html_format__HeadVar__1_1 = (MR_Integer) 0;
#line 833 "html_format.m"
    else
#line 833 "html_format.m"
      {
#line 833 "html_format.m"
        MR_Word html_format__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 833 "html_format.m"
        MR_Word html_format__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 833 "html_format.m"
        MR_Word html_format__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 833 "html_format.m"
        MR_String html_format__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 1)));
#line 833 "html_format.m"
        MR_String html_format__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 2)));
#line 833 "html_format.m"
        MR_String html_format__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 3)));
#line 833 "html_format.m"
        MR_Word html_format__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 833 "html_format.m"
        MR_Word html_format__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 833 "html_format.m"
        MR_Word html_format__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 833 "html_format.m"
        MR_String html_format__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__3_3, (MR_Integer) 1)));
#line 833 "html_format.m"
        MR_String html_format__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__3_3, (MR_Integer) 2)));
#line 833 "html_format.m"
        MR_String html_format__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__3_3, (MR_Integer) 3)));
#line 833 "html_format.m"
        MR_Word html_format__V_16_16;
#line 833 "html_format.m"
        MR_Integer html_format__V_29_29 = (MR_Integer) html_format__V_4_4;
#line 833 "html_format.m"
        MR_Integer html_format__V_30_30 = (MR_Integer) html_format__V_10_10;

#line 833 "html_format.m"
        {
#line 833 "html_format.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&html_format__V_16_16, html_format__V_29_29, html_format__V_30_30);
        }
#line 4383 "html_format.c"
        html_format__succeeded = (html_format__V_16_16 == (MR_Integer) 0);
#line 833 "html_format.m"
        html_format__succeeded = !(html_format__succeeded);
#line 833 "html_format.m"
        if (html_format__succeeded)
#line 833 "html_format.m"
          *html_format__HeadVar__1_1 = html_format__V_16_16;
#line 833 "html_format.m"
        else
#line 833 "html_format.m"
          {
#line 833 "html_format.m"
            MR_Word html_format__V_17_17;
#line 833 "html_format.m"
            MR_Integer html_format__V_31_31 = (MR_Integer) html_format__V_5_5;
#line 833 "html_format.m"
            MR_Integer html_format__V_32_32 = (MR_Integer) html_format__V_11_11;

#line 833 "html_format.m"
            {
#line 833 "html_format.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&html_format__V_17_17, html_format__V_31_31, html_format__V_32_32);
            }
#line 4407 "html_format.c"
            html_format__succeeded = (html_format__V_17_17 == (MR_Integer) 0);
#line 833 "html_format.m"
            html_format__succeeded = !(html_format__succeeded);
#line 833 "html_format.m"
            if (html_format__succeeded)
#line 833 "html_format.m"
              *html_format__HeadVar__1_1 = html_format__V_17_17;
#line 833 "html_format.m"
            else
#line 833 "html_format.m"
              {
#line 833 "html_format.m"
                MR_Word html_format__V_18_18;
#line 833 "html_format.m"
                MR_Integer html_format__V_33_33 = (MR_Integer) html_format__V_6_6;
#line 833 "html_format.m"
                MR_Integer html_format__V_34_34 = (MR_Integer) html_format__V_12_12;

#line 833 "html_format.m"
                {
#line 833 "html_format.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&html_format__V_18_18, html_format__V_33_33, html_format__V_34_34);
                }
#line 4431 "html_format.c"
                html_format__succeeded = (html_format__V_18_18 == (MR_Integer) 0);
#line 833 "html_format.m"
                html_format__succeeded = !(html_format__succeeded);
#line 833 "html_format.m"
                if (html_format__succeeded)
#line 833 "html_format.m"
                  *html_format__HeadVar__1_1 = html_format__V_18_18;
#line 833 "html_format.m"
                else
#line 833 "html_format.m"
                  {
#line 833 "html_format.m"
                    MR_Word html_format__V_19_19;

#line 833 "html_format.m"
                    {
#line 833 "html_format.m"
                      mercury__private_builtin__builtin_compare_string_3_p_0(&html_format__V_19_19, html_format__V_7_7, html_format__V_13_13);
                    }
#line 4451 "html_format.c"
                    html_format__succeeded = (html_format__V_19_19 == (MR_Integer) 0);
#line 833 "html_format.m"
                    html_format__succeeded = !(html_format__succeeded);
#line 833 "html_format.m"
                    if (html_format__succeeded)
#line 833 "html_format.m"
                      *html_format__HeadVar__1_1 = html_format__V_19_19;
#line 833 "html_format.m"
                    else
#line 833 "html_format.m"
                      {
#line 833 "html_format.m"
                        MR_Word html_format__V_20_20;

#line 833 "html_format.m"
                        {
#line 833 "html_format.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&html_format__V_20_20, html_format__V_8_8, html_format__V_14_14);
                        }
#line 4471 "html_format.c"
                        html_format__succeeded = (html_format__V_20_20 == (MR_Integer) 0);
#line 833 "html_format.m"
                        html_format__succeeded = !(html_format__succeeded);
#line 833 "html_format.m"
                        if (html_format__succeeded)
#line 833 "html_format.m"
                          *html_format__HeadVar__1_1 = html_format__V_20_20;
#line 833 "html_format.m"
                        else
#line 833 "html_format.m"
                          {
#line 833 "html_format.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(html_format__HeadVar__1_1, html_format__V_9_9, html_format__V_15_15);
#line 833 "html_format.m"
                            return;
                          }
#line 833 "html_format.m"
                      }
#line 833 "html_format.m"
                  }
#line 833 "html_format.m"
              }
#line 833 "html_format.m"
          }
#line 833 "html_format.m"
      }
#line 833 "html_format.m"
  }
#line 833 "html_format.m"
}

#line 833 "html_format.m"
static MR_bool MR_CALL 
html_format____Unify____format_info_0_0(
#line 833 "html_format.m"
  MR_Word html_format__HeadVar__1_1,
#line 833 "html_format.m"
  MR_Word html_format__HeadVar__2_2)
#line 833 "html_format.m"
{
#line 833 "html_format.m"
  {
#line 833 "html_format.m"
    MR_bool html_format__succeeded;
#line 833 "html_format.m"
    MR_Integer html_format__CastX_15 = (MR_Integer) html_format__HeadVar__1_1;
#line 833 "html_format.m"
    MR_Integer html_format__CastY_16 = (MR_Integer) html_format__HeadVar__2_2;

#line 833 "html_format.m"
    html_format__succeeded = (html_format__CastX_15 == html_format__CastY_16);
#line 833 "html_format.m"
    if (html_format__succeeded)
#line 833 "html_format.m"
      html_format__succeeded = MR_TRUE;
#line 833 "html_format.m"
    else
#line 833 "html_format.m"
      {
#line 833 "html_format.m"
        MR_Word html_format__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 833 "html_format.m"
        MR_Word html_format__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 833 "html_format.m"
        MR_Word html_format__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 833 "html_format.m"
        MR_String html_format__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 1)));
#line 833 "html_format.m"
        MR_String html_format__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 2)));
#line 833 "html_format.m"
        MR_String html_format__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 3)));
#line 833 "html_format.m"
        MR_Word html_format__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 833 "html_format.m"
        MR_Word html_format__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 833 "html_format.m"
        MR_Word html_format__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 833 "html_format.m"
        MR_String html_format__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 1)));
#line 833 "html_format.m"
        MR_String html_format__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 2)));
#line 833 "html_format.m"
        MR_String html_format__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__2_2, (MR_Integer) 3)));

#line 4556 "html_format.c"
        html_format__succeeded = (html_format__V_3_3 == html_format__V_9_9);
#line 833 "html_format.m"
        if (html_format__succeeded)
#line 833 "html_format.m"
          {
#line 4562 "html_format.c"
            html_format__succeeded = (html_format__V_4_4 == html_format__V_10_10);
#line 833 "html_format.m"
            if (html_format__succeeded)
#line 833 "html_format.m"
              {
#line 4568 "html_format.c"
                html_format__succeeded = (html_format__V_5_5 == html_format__V_11_11);
#line 833 "html_format.m"
                if (html_format__succeeded)
#line 833 "html_format.m"
                  {
#line 4574 "html_format.c"
                    html_format__succeeded = (strcmp(html_format__V_6_6, html_format__V_12_12) == 0);
#line 833 "html_format.m"
                    if (html_format__succeeded)
#line 833 "html_format.m"
                      {
#line 4580 "html_format.c"
                        html_format__succeeded = (strcmp(html_format__V_7_7, html_format__V_13_13) == 0);
#line 833 "html_format.m"
                        if (html_format__succeeded)
#line 4584 "html_format.c"
                          html_format__succeeded = (strcmp(html_format__V_8_8, html_format__V_14_14) == 0);
#line 833 "html_format.m"
                      }
#line 833 "html_format.m"
                  }
#line 833 "html_format.m"
              }
#line 833 "html_format.m"
          }
#line 833 "html_format.m"
      }
#line 833 "html_format.m"
    return html_format__succeeded;
#line 833 "html_format.m"
  }
#line 833 "html_format.m"
}

#line 229 "html_format.m"
static void MR_CALL 
html_format____Compare____column_class_map_0_0(
#line 229 "html_format.m"
  MR_Word * html_format__HeadVar__1_1,
#line 229 "html_format.m"
  MR_Word html_format__HeadVar__2_2,
#line 229 "html_format.m"
  MR_Word html_format__HeadVar__3_3)
#line 229 "html_format.m"
{
#line 229 "html_format.m"
  {
#line 229 "html_format.m"
    MR_bool html_format__succeeded;
#line 229 "html_format.m"
    MR_Word html_format__Cast_HeadVar1_4 = html_format__HeadVar__2_2;
#line 229 "html_format.m"
    MR_Word html_format__Cast_HeadVar2_5 = html_format__HeadVar__3_3;

#line 229 "html_format.m"
    {
#line 229 "html_format.m"
      mercury__builtin__compare_3_p_0((MR_Word) &html_format_scalar_common_1[3], html_format__HeadVar__1_1, ((MR_Box) (html_format__Cast_HeadVar1_4)), ((MR_Box) (html_format__Cast_HeadVar2_5)));
#line 229 "html_format.m"
      return;
    }
#line 229 "html_format.m"
  }
#line 229 "html_format.m"
}

#line 229 "html_format.m"
static MR_bool MR_CALL 
html_format____Unify____column_class_map_0_0(
#line 229 "html_format.m"
  MR_Word html_format__HeadVar__1_1,
#line 229 "html_format.m"
  MR_Word html_format__HeadVar__2_2)
#line 229 "html_format.m"
{
#line 229 "html_format.m"
  {
#line 229 "html_format.m"
    MR_bool html_format__succeeded;
#line 229 "html_format.m"
    MR_Word html_format__Cast_HeadVar1_3 = html_format__HeadVar__1_1;
#line 229 "html_format.m"
    MR_Word html_format__Cast_HeadVar2_4 = html_format__HeadVar__2_2;

#line 229 "html_format.m"
    {
#line 229 "html_format.m"
      return html_format__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &html_format_scalar_common_1[3], ((MR_Box) (html_format__Cast_HeadVar1_3)), ((MR_Box) (html_format__Cast_HeadVar2_4)));
    }
#line 229 "html_format.m"
    return html_format__succeeded;
#line 229 "html_format.m"
  }
#line 229 "html_format.m"
}

#line 1045 "html_format.m"
static MR_bool MR_CALL 
html_format__special_html_char_or_break_2_p_0(
#line 1045 "html_format.m"
  MR_Char html_format__HeadVar__1_1,
#line 1045 "html_format.m"
  MR_String * html_format__HeadVar__2_2)
#line 1045 "html_format.m"
{
#line 1047 "html_format.m"
  {
#line 1047 "html_format.m"
    MR_bool html_format__succeeded;

#line 1047 "html_format.m"
#line 1047 "html_format.m"
    switch (html_format__HeadVar__1_1) {
#line 1047 "html_format.m"
      default:
#line 1047 "html_format.m"
        html_format__succeeded = MR_FALSE;
#line 1047 "html_format.m"
        break;
#line 1047 "html_format.m"
      case (MR_Char) 34:
#line 1051 "html_format.m"
        {
#line 1051 "html_format.m"
          *html_format__HeadVar__2_2 = (MR_String) "&quot;";
#line 1051 "html_format.m"
          html_format__succeeded = MR_TRUE;
#line 1051 "html_format.m"
        }
#line 1047 "html_format.m"
        break;
#line 1047 "html_format.m"
      case (MR_Char) 38:
#line 1047 "html_format.m"
        {
#line 1047 "html_format.m"
          *html_format__HeadVar__2_2 = (MR_String) "&amp;";
#line 1047 "html_format.m"
          html_format__succeeded = MR_TRUE;
#line 1047 "html_format.m"
        }
#line 1047 "html_format.m"
        break;
#line 1047 "html_format.m"
      case (MR_Char) 39:
#line 1050 "html_format.m"
        {
#line 1050 "html_format.m"
          *html_format__HeadVar__2_2 = (MR_String) "&apos;";
#line 1050 "html_format.m"
          html_format__succeeded = MR_TRUE;
#line 1050 "html_format.m"
        }
#line 1047 "html_format.m"
        break;
#line 1047 "html_format.m"
      case (MR_Char) 46:
#line 1052 "html_format.m"
        {
#line 1052 "html_format.m"
          *html_format__HeadVar__2_2 = (MR_String) ".<wbr />";
#line 1052 "html_format.m"
          html_format__succeeded = MR_TRUE;
#line 1052 "html_format.m"
        }
#line 1047 "html_format.m"
        break;
#line 1047 "html_format.m"
      case (MR_Char) 47:
#line 1054 "html_format.m"
        {
#line 1054 "html_format.m"
          *html_format__HeadVar__2_2 = (MR_String) "/<wbr />";
#line 1054 "html_format.m"
          html_format__succeeded = MR_TRUE;
#line 1054 "html_format.m"
        }
#line 1047 "html_format.m"
        break;
#line 1047 "html_format.m"
      case (MR_Char) 58:
#line 1055 "html_format.m"
        {
#line 1055 "html_format.m"
          *html_format__HeadVar__2_2 = (MR_String) ":<wbr />";
#line 1055 "html_format.m"
          html_format__succeeded = MR_TRUE;
#line 1055 "html_format.m"
        }
#line 1047 "html_format.m"
        break;
#line 1047 "html_format.m"
      case (MR_Char) 60:
#line 1048 "html_format.m"
        {
#line 1048 "html_format.m"
          *html_format__HeadVar__2_2 = (MR_String) "&lt;";
#line 1048 "html_format.m"
          html_format__succeeded = MR_TRUE;
#line 1048 "html_format.m"
        }
#line 1047 "html_format.m"
        break;
#line 1047 "html_format.m"
      case (MR_Char) 62:
#line 1049 "html_format.m"
        {
#line 1049 "html_format.m"
          *html_format__HeadVar__2_2 = (MR_String) "&gt;";
#line 1049 "html_format.m"
          html_format__succeeded = MR_TRUE;
#line 1049 "html_format.m"
        }
#line 1047 "html_format.m"
        break;
#line 1047 "html_format.m"
      case (MR_Char) 95:
#line 1053 "html_format.m"
        {
#line 1053 "html_format.m"
          *html_format__HeadVar__2_2 = (MR_String) "_<wbr />";
#line 1053 "html_format.m"
          html_format__succeeded = MR_TRUE;
#line 1053 "html_format.m"
        }
#line 1047 "html_format.m"
        break;
#line 1047 "html_format.m"
    }
#line 1047 "html_format.m"
    return html_format__succeeded;
#line 1047 "html_format.m"
  }
#line 1045 "html_format.m"
}

#line 1033 "html_format.m"
static MR_bool MR_CALL 
html_format__special_html_char_2_p_0(
#line 1033 "html_format.m"
  MR_Char html_format__HeadVar__1_1,
#line 1033 "html_format.m"
  MR_String * html_format__HeadVar__2_2)
#line 1033 "html_format.m"
{
#line 1035 "html_format.m"
  {
#line 1035 "html_format.m"
    MR_bool html_format__succeeded;

#line 1035 "html_format.m"
#line 1035 "html_format.m"
    switch (html_format__HeadVar__1_1) {
#line 1035 "html_format.m"
      default:
#line 1035 "html_format.m"
        html_format__succeeded = MR_FALSE;
#line 1035 "html_format.m"
        break;
#line 1035 "html_format.m"
      case (MR_Char) 34:
#line 1039 "html_format.m"
        {
#line 1039 "html_format.m"
          *html_format__HeadVar__2_2 = (MR_String) "&quot;";
#line 1039 "html_format.m"
          html_format__succeeded = MR_TRUE;
#line 1039 "html_format.m"
        }
#line 1035 "html_format.m"
        break;
#line 1035 "html_format.m"
      case (MR_Char) 38:
#line 1035 "html_format.m"
        {
#line 1035 "html_format.m"
          *html_format__HeadVar__2_2 = (MR_String) "&amp;";
#line 1035 "html_format.m"
          html_format__succeeded = MR_TRUE;
#line 1035 "html_format.m"
        }
#line 1035 "html_format.m"
        break;
#line 1035 "html_format.m"
      case (MR_Char) 39:
#line 1038 "html_format.m"
        {
#line 1038 "html_format.m"
          *html_format__HeadVar__2_2 = (MR_String) "&apos;";
#line 1038 "html_format.m"
          html_format__succeeded = MR_TRUE;
#line 1038 "html_format.m"
        }
#line 1035 "html_format.m"
        break;
#line 1035 "html_format.m"
      case (MR_Char) 60:
#line 1036 "html_format.m"
        {
#line 1036 "html_format.m"
          *html_format__HeadVar__2_2 = (MR_String) "&lt;";
#line 1036 "html_format.m"
          html_format__succeeded = MR_TRUE;
#line 1036 "html_format.m"
        }
#line 1035 "html_format.m"
        break;
#line 1035 "html_format.m"
      case (MR_Char) 62:
#line 1037 "html_format.m"
        {
#line 1037 "html_format.m"
          *html_format__HeadVar__2_2 = (MR_String) "&gt;";
#line 1037 "html_format.m"
          html_format__succeeded = MR_TRUE;
#line 1037 "html_format.m"
        }
#line 1035 "html_format.m"
        break;
#line 1035 "html_format.m"
    }
#line 1035 "html_format.m"
    return html_format__succeeded;
#line 1035 "html_format.m"
  }
#line 1033 "html_format.m"
}

#line 1021 "html_format.m"
static void MR_CALL 
html_format__replace_special_char_2_4_p_0(
#line 1021 "html_format.m"
  MR_Word html_format__SpecialCharTable_5,
#line 1021 "html_format.m"
  MR_Char html_format__Char_6,
#line 1021 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_Acc_0_10,
#line 1021 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_Acc_11)
#line 1021 "html_format.m"
{
#line 1029 "html_format.m"
  {
#line 1029 "html_format.m"
    MR_bool html_format__succeeded;
#line 1029 "html_format.m"
    MR_String html_format__String_8;
#line 1026 "html_format.m"
    MR_bool MR_CALL (* html_format__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), html_format__SpecialCharTable_5, (MR_Integer) 1)));
#line 1026 "html_format.m"
    MR_Box html_format__conv1_String_8;

#line 1026 "html_format.m"
    {
#line 1026 "html_format.m"
      html_format__succeeded = html_format__func_0(((MR_Box) html_format__SpecialCharTable_5), ((MR_Box) (MR_Word) (html_format__Char_6)), &html_format__conv1_String_8);
    }
#line 1026 "html_format.m"
    if (html_format__succeeded)
#line 1026 "html_format.m"
      {
#line 1026 "html_format.m"
        html_format__String_8 = ((MR_String) html_format__conv1_String_8);
#line 1026 "html_format.m"
        html_format__succeeded = MR_TRUE;
#line 1026 "html_format.m"
      }
#line 1029 "html_format.m"
    if (html_format__succeeded)
#line 1027 "html_format.m"
      {
#line 1027 "html_format.m"
        MR_Word html_format__Chars_9;

#line 1027 "html_format.m"
        {
#line 1027 "html_format.m"
          mercury__string__to_char_list_2_p_0(html_format__String_8, &html_format__Chars_9);
        }
#line 1028 "html_format.m"
        {
#line 1028 "html_format.m"
          mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, html_format__Chars_9, html_format__STATE_VARIABLE_Acc_0_10, html_format__STATE_VARIABLE_Acc_11);
#line 1028 "html_format.m"
          return;
        }
#line 1027 "html_format.m"
      }
#line 1029 "html_format.m"
    else
#line 1030 "html_format.m"
      {
#line 1030 "html_format.m"
        {
#line 1030 "html_format.m"
          mercury__list__cons_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, ((MR_Box) (MR_Word) (html_format__Char_6)), html_format__STATE_VARIABLE_Acc_0_10, html_format__STATE_VARIABLE_Acc_11);
#line 1030 "html_format.m"
          return;
        }
#line 1030 "html_format.m"
      }
#line 1029 "html_format.m"
  }
#line 1021 "html_format.m"
}

#line 998 "html_format.m"
static MR_String MR_CALL 
html_format__handle_html_attrs_2_f_0(
#line 998 "html_format.m"
  MR_Word html_format__HeadVar__1_1,
#line 998 "html_format.m"
  MR_String html_format__HeadVar__2_2)
#line 998 "html_format.m"
{
#line 1000 "html_format.m"
  {
#line 1000 "html_format.m"
    MR_bool html_format__succeeded;
#line 1000 "html_format.m"
    MR_String html_format__Str_3;

#line 1000 "html_format.m"
    if ((html_format__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1000 "html_format.m"
      html_format__Str_3 = html_format__HeadVar__2_2;
#line 1000 "html_format.m"
    else
#line 1001 "html_format.m"
      {
#line 1001 "html_format.m"
        MR_Word html_format__Attr_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__1_1, (MR_Integer) 0)));
#line 1001 "html_format.m"
        MR_Word html_format__Attrs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__HeadVar__1_1, (MR_Integer) 1)));
#line 1001 "html_format.m"
        MR_String html_format__InnerStr_9;

#line 1002 "html_format.m"
        {
#line 1002 "html_format.m"
          html_format__InnerStr_9 = html_format__handle_html_attrs_2_f_0(html_format__Attrs_6, html_format__HeadVar__2_2);
        }
#line 1006 "html_format.m"
#line 1006 "html_format.m"
        switch (html_format__Attr_5) {
#line 1006 "html_format.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1006 "html_format.m"
          case (MR_Integer) 0:
#line 1004 "html_format.m"
            {
#line 1004 "html_format.m"
              MR_String html_format__V_17_17;

#line 1005 "html_format.m"
              {
#line 1005 "html_format.m"
                html_format__V_17_17 = mercury__string__f_43_43_2_f_0(html_format__InnerStr_9, (MR_String) "</b>");
              }
#line 1005 "html_format.m"
              {
#line 1005 "html_format.m"
                return html_format__Str_3 = mercury__string__f_43_43_2_f_0((MR_String) "<b>", html_format__V_17_17);
              }
#line 1004 "html_format.m"
            }
#line 1006 "html_format.m"
            break;
#line 1006 "html_format.m"
          case (MR_Integer) 1:
#line 1007 "html_format.m"
            {
#line 1007 "html_format.m"
              MR_String html_format__V_14_14;

#line 1008 "html_format.m"
              {
#line 1008 "html_format.m"
                html_format__V_14_14 = mercury__string__f_43_43_2_f_0(html_format__InnerStr_9, (MR_String) "</i>");
              }
#line 1008 "html_format.m"
              {
#line 1008 "html_format.m"
                return html_format__Str_3 = mercury__string__f_43_43_2_f_0((MR_String) "<i>", html_format__V_14_14);
              }
#line 1007 "html_format.m"
            }
#line 1006 "html_format.m"
            break;
#line 1006 "html_format.m"
          case (MR_Integer) 2:
#line 1010 "html_format.m"
            {
#line 1010 "html_format.m"
              MR_String html_format__V_11_11;

#line 1011 "html_format.m"
              {
#line 1011 "html_format.m"
                html_format__V_11_11 = mercury__string__f_43_43_2_f_0(html_format__InnerStr_9, (MR_String) "</u>");
              }
#line 1011 "html_format.m"
              {
#line 1011 "html_format.m"
                return html_format__Str_3 = mercury__string__f_43_43_2_f_0((MR_String) "<u>", html_format__V_11_11);
              }
#line 1010 "html_format.m"
            }
#line 1006 "html_format.m"
            break;
#line 1006 "html_format.m"
        }
#line 1001 "html_format.m"
      }
#line 1000 "html_format.m"
    return html_format__Str_3;
#line 1000 "html_format.m"
  }
#line 998 "html_format.m"
}

#line 894 "html_format.m"
static MR_Word MR_CALL 
html_format__str_to_html_1_f_0(
#line 894 "html_format.m"
  MR_String html_format__Str_3)
#line 894 "html_format.m"
{
#line 896 "html_format.m"
  {
#line 896 "html_format.m"
    MR_bool html_format__succeeded;
#line 896 "html_format.m"
    MR_Word html_format__HeadVar__2_2;

#line 896 "html_format.m"
    {
#line 896 "html_format.m"
      html_format__HeadVar__2_2 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Str_3)));
    }
#line 896 "html_format.m"
    return html_format__HeadVar__2_2;
#line 896 "html_format.m"
  }
#line 894 "html_format.m"
}

#line 886 "html_format.m"
static MR_Word MR_CALL 
html_format__empty_html_0_f_0(void)
#line 886 "html_format.m"
{
#line 888 "html_format.m"
  {
#line 888 "html_format.m"
    MR_bool html_format__succeeded;
#line 888 "html_format.m"
    MR_Word html_format__HeadVar__1_1;

#line 888 "html_format.m"
    {
#line 888 "html_format.m"
      html_format__HeadVar__1_1 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
#line 888 "html_format.m"
    return html_format__HeadVar__1_1;
#line 888 "html_format.m"
  }
#line 886 "html_format.m"
}

#line 881 "html_format.m"
static MR_Word MR_CALL 
html_format__wrap_tags_3_f_0(
#line 881 "html_format.m"
  MR_String html_format__StartTag_5,
#line 881 "html_format.m"
  MR_String html_format__EndTag_6,
#line 881 "html_format.m"
  MR_Word html_format__InnerHTML_7)
#line 881 "html_format.m"
{
#line 883 "html_format.m"
  {
#line 883 "html_format.m"
    MR_bool html_format__succeeded;
#line 883 "html_format.m"
    MR_Word html_format__HeadVar__4_4;
#line 883 "html_format.m"
    MR_Word html_format__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 883 "html_format.m"
    MR_Word html_format__V_8_8;
#line 883 "html_format.m"
    MR_Word html_format__V_9_9;
#line 883 "html_format.m"
    MR_Word html_format__V_10_10;

#line 896 "html_format.m"
    {
#line 896 "html_format.m"
      html_format__V_8_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__StartTag_5)));
    }
#line 896 "html_format.m"
    {
#line 896 "html_format.m"
      html_format__V_10_10 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__EndTag_6)));
    }
#line 884 "html_format.m"
    {
#line 884 "html_format.m"
      html_format__V_9_9 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_11, html_format__InnerHTML_7, html_format__V_10_10);
    }
#line 884 "html_format.m"
    {
#line 884 "html_format.m"
      html_format__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_11, html_format__V_8_8, html_format__V_9_9);
    }
#line 883 "html_format.m"
    return html_format__HeadVar__4_4;
#line 883 "html_format.m"
  }
#line 881 "html_format.m"
}

#line 858 "html_format.m"
static void MR_CALL 
html_format__deep_cmd_to_url_4_p_0(
#line 858 "html_format.m"
  MR_Word html_format__FormatInfo_5,
#line 858 "html_format.m"
  MR_Word html_format__Cmd_6,
#line 858 "html_format.m"
  MR_Word html_format__MaybePrefs_7,
#line 858 "html_format.m"
  MR_String * html_format__URL_8)
#line 858 "html_format.m"
{
#line 861 "html_format.m"
  {
#line 861 "html_format.m"
    MR_bool html_format__succeeded;
#line 861 "html_format.m"
    MR_String html_format__HostAndPort_9 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_5, (MR_Integer) 1)));
#line 861 "html_format.m"
    MR_String html_format__Script_10 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_5, (MR_Integer) 2)));
#line 861 "html_format.m"
    MR_String html_format__DeepFileName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_5, (MR_Integer) 3)));
#line 861 "html_format.m"
    MR_Word html_format__DeepQuery_12;
#line 861 "html_format.m"
    MR_Word html_format__V_13_13;
#line 861 "html_format.m"
    MR_String html_format__V_21_21;
#line 861 "html_format.m"
    MR_String html_format__V_38_38;
#line 861 "html_format.m"
    MR_Word html_format__V_44_44;
#line 861 "html_format.m"
    MR_String html_format__V_46_46;
#line 861 "html_format.m"
    MR_String html_format__V_47_47;
#line 861 "html_format.m"
    MR_String html_format__V_54_54;
#line 861 "html_format.m"
    MR_String html_format__V_55_55;
#line 861 "html_format.m"
    MR_String html_format__V_62_62;
#line 862 "html_format.m"
    MR_Word html_format__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_5, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 862 "html_format.m"
    MR_Word html_format__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 862 "html_format.m"
    MR_Word html_format__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 865 "html_format.m"
    {
#line 865 "html_format.m"
      html_format__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 865 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_13_13, 0) = ((MR_Box) (html_format__Cmd_6));
#line 865 "html_format.m"
    }
#line 865 "html_format.m"
    {
#line 865 "html_format.m"
      html_format__DeepQuery_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 865 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__DeepQuery_12, 0) = ((MR_Box) (html_format__V_13_13));
#line 865 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__DeepQuery_12, 1) = ((MR_Box) (html_format__DeepFileName_11));
#line 865 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__DeepQuery_12, 2) = ((MR_Box) (html_format__MaybePrefs_7));
#line 865 "html_format.m"
    }
#line 867 "html_format.m"
    {
#line 867 "html_format.m"
      html_format__V_21_21 = query__query_to_string_1_f_0(html_format__DeepQuery_12);
    }
#line 5268 "html_format.c"
    html_format__V_44_44 = (MR_Word) &html_format_scalar_common_6[0];
#line 867 "html_format.m"
    {
#line 867 "html_format.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(html_format__V_44_44, html_format__V_21_21, &html_format__V_38_38);
    }
#line 866 "html_format.m"
    {
#line 866 "html_format.m"
      html_format__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "\?", html_format__V_38_38);
    }
#line 867 "html_format.m"
    {
#line 867 "html_format.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(html_format__V_44_44, html_format__Script_10, &html_format__V_47_47);
    }
#line 866 "html_format.m"
    {
#line 866 "html_format.m"
      html_format__V_54_54 = mercury__string__f_43_43_2_f_0(html_format__V_47_47, html_format__V_46_46);
    }
#line 867 "html_format.m"
    {
#line 867 "html_format.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(html_format__V_44_44, html_format__HostAndPort_9, &html_format__V_55_55);
    }
#line 866 "html_format.m"
    {
#line 866 "html_format.m"
      html_format__V_62_62 = mercury__string__f_43_43_2_f_0(html_format__V_55_55, html_format__V_54_54);
    }
#line 866 "html_format.m"
    {
#line 866 "html_format.m"
      *html_format__URL_8 = mercury__string__f_43_43_2_f_0((MR_String) "http://", html_format__V_62_62);
    }
#line 861 "html_format.m"
  }
#line 858 "html_format.m"
}

#line 847 "html_format.m"
static MR_Word MR_CALL 
html_format__init_format_info_2_f_0(
#line 847 "html_format.m"
  MR_Word html_format__Deep_4,
#line 847 "html_format.m"
  MR_Word html_format__Prefs_5)
#line 847 "html_format.m"
{
#line 849 "html_format.m"
  {
#line 849 "html_format.m"
    MR_bool html_format__succeeded;
#line 849 "html_format.m"
    MR_Word html_format__FormatInfo_6;
#line 849 "html_format.m"
    MR_Word html_format__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 849 "html_format.m"
    MR_String html_format__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 1)));
#line 849 "html_format.m"
    MR_Word html_format__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 849 "html_format.m"
    MR_Word html_format__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 8)));
#line 849 "html_format.m"
    MR_String html_format__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 2)));
#line 849 "html_format.m"
    MR_String html_format__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 3)));
#line 850 "html_format.m"
    MR_Word html_format__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 0)));
#line 850 "html_format.m"
    MR_Word html_format__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 2)));
#line 850 "html_format.m"
    MR_Integer html_format__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 3)));
#line 850 "html_format.m"
    MR_Word html_format__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 4)));
#line 850 "html_format.m"
    MR_Word html_format__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 5)));
#line 850 "html_format.m"
    MR_Word html_format__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 850 "html_format.m"
    MR_Word html_format__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
#line 850 "html_format.m"
    MR_Word html_format__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
#line 850 "html_format.m"
    MR_Word html_format__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Prefs_5, (MR_Integer) 7)));
#line 850 "html_format.m"
    MR_Word html_format__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 0)));
#line 850 "html_format.m"
    MR_Word html_format__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 4)));
#line 850 "html_format.m"
    MR_ArrayPtr html_format__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 5)));
#line 850 "html_format.m"
    MR_ArrayPtr html_format__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 6)));
#line 850 "html_format.m"
    MR_ArrayPtr html_format__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 7)));
#line 850 "html_format.m"
    MR_ArrayPtr html_format__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 8)));
#line 850 "html_format.m"
    MR_ArrayPtr html_format__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 9)));
#line 850 "html_format.m"
    MR_ArrayPtr html_format__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 10)));
#line 850 "html_format.m"
    MR_ArrayPtr html_format__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 11)));
#line 850 "html_format.m"
    MR_ArrayPtr html_format__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 12)));
#line 850 "html_format.m"
    MR_ArrayPtr html_format__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 13)));
#line 850 "html_format.m"
    MR_ArrayPtr html_format__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 14)));
#line 850 "html_format.m"
    MR_ArrayPtr html_format__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 15)));
#line 850 "html_format.m"
    MR_ArrayPtr html_format__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 16)));
#line 850 "html_format.m"
    MR_ArrayPtr html_format__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 17)));
#line 850 "html_format.m"
    MR_ArrayPtr html_format__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 18)));
#line 850 "html_format.m"
    MR_ArrayPtr html_format__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 19)));
#line 850 "html_format.m"
    MR_ArrayPtr html_format__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 20)));
#line 850 "html_format.m"
    MR_ArrayPtr html_format__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 21)));
#line 850 "html_format.m"
    MR_ArrayPtr html_format__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 22)));
#line 850 "html_format.m"
    MR_ArrayPtr html_format__V_68_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 23)));
#line 850 "html_format.m"
    MR_ArrayPtr html_format__V_69_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 24)));
#line 850 "html_format.m"
    MR_Word html_format__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 25)));
#line 850 "html_format.m"
    MR_Word html_format__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 26)));
#line 850 "html_format.m"
    MR_Word html_format__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 27)));
#line 850 "html_format.m"
    MR_Word html_format__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_4, (MR_Integer) 28)));

#line 850 "html_format.m"
    {
#line 850 "html_format.m"
      html_format__FormatInfo_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 850 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__FormatInfo_6, 0) = ((MR_Box) ((html_format__V_7_7 | ((((html_format__V_14_14 << (MR_Integer) 1)) | ((html_format__V_23_23 << (MR_Integer) 2)))))));
#line 850 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__FormatInfo_6, 1) = ((MR_Box) (html_format__V_10_10));
#line 850 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__FormatInfo_6, 2) = ((MR_Box) (html_format__V_47_47));
#line 850 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__FormatInfo_6, 3) = ((MR_Box) (html_format__V_48_48));
#line 850 "html_format.m"
    }
#line 849 "html_format.m"
    return html_format__FormatInfo_6;
#line 849 "html_format.m"
  }
#line 847 "html_format.m"
}

#line 795 "html_format.m"
static MR_Word MR_CALL 
html_format__link_to_html_2_f_0(
#line 795 "html_format.m"
  MR_Word html_format__FormatInfo_4,
#line 795 "html_format.m"
  MR_Word html_format__Link_5)
#line 795 "html_format.m"
{
#line 797 "html_format.m"
  {
#line 797 "html_format.m"
    MR_bool html_format__succeeded;
#line 797 "html_format.m"
    MR_Word html_format__HTML_6;
#line 797 "html_format.m"
    MR_Word html_format__Cmd_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Link_5, (MR_Integer) 0)));
#line 797 "html_format.m"
    MR_Word html_format__MaybePrefs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Link_5, (MR_Integer) 1)));
#line 797 "html_format.m"
    MR_Word html_format__Label_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Link_5, (MR_Integer) 2)));
#line 797 "html_format.m"
    MR_Word html_format__Class_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Link_5, (MR_Integer) 3)));
#line 797 "html_format.m"
    MR_String html_format__URL_11;
#line 797 "html_format.m"
    MR_String html_format__HTMLStr_13;

#line 799 "html_format.m"
    {
#line 799 "html_format.m"
      html_format__deep_cmd_to_url_4_p_0(html_format__FormatInfo_4, html_format__Cmd_7, html_format__MaybePrefs_8, &html_format__URL_11);
    }
#line 805 "html_format.m"
#line 805 "html_format.m"
    switch (html_format__Class_10) {
#line 805 "html_format.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 805 "html_format.m"
      case (MR_Integer) 1:
#line 801 "html_format.m"
        {
#line 801 "html_format.m"
          MR_String html_format__V_24_24;
#line 801 "html_format.m"
          MR_String html_format__V_48_48;
#line 801 "html_format.m"
          MR_Word html_format__V_54_54;
#line 801 "html_format.m"
          MR_String html_format__V_55_55;
#line 801 "html_format.m"
          MR_String html_format__V_57_57;
#line 801 "html_format.m"
          MR_String html_format__V_58_58;
#line 801 "html_format.m"
          MR_String html_format__V_65_65;

#line 804 "html_format.m"
          {
#line 804 "html_format.m"
            html_format__V_24_24 = html_format__escape_break_html_attr_string_1_f_0(html_format__Label_9);
          }
#line 5491 "html_format.c"
          html_format__V_54_54 = (MR_Word) &html_format_scalar_common_6[0];
#line 804 "html_format.m"
          {
#line 804 "html_format.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(html_format__V_54_54, html_format__V_24_24, &html_format__V_48_48);
          }
#line 803 "html_format.m"
          {
#line 803 "html_format.m"
            html_format__V_55_55 = mercury__string__f_43_43_2_f_0(html_format__V_48_48, (MR_String) "]</a>");
          }
#line 803 "html_format.m"
          {
#line 803 "html_format.m"
            html_format__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) "\">[", html_format__V_55_55);
          }
#line 804 "html_format.m"
          {
#line 804 "html_format.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(html_format__V_54_54, html_format__URL_11, &html_format__V_58_58);
          }
#line 803 "html_format.m"
          {
#line 803 "html_format.m"
            html_format__V_65_65 = mercury__string__f_43_43_2_f_0(html_format__V_58_58, html_format__V_57_57);
          }
#line 803 "html_format.m"
          {
#line 803 "html_format.m"
            html_format__HTMLStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "<a class=\"control\" href=\"", html_format__V_65_65);
          }
#line 801 "html_format.m"
        }
#line 805 "html_format.m"
        break;
#line 805 "html_format.m"
      case (MR_Integer) 0:
#line 806 "html_format.m"
        {
#line 806 "html_format.m"
          MR_String html_format__V_18_18;
#line 806 "html_format.m"
          MR_String html_format__V_28_28;
#line 806 "html_format.m"
          MR_Word html_format__V_34_34;
#line 806 "html_format.m"
          MR_String html_format__V_35_35;
#line 806 "html_format.m"
          MR_String html_format__V_37_37;
#line 806 "html_format.m"
          MR_String html_format__V_38_38;
#line 806 "html_format.m"
          MR_String html_format__V_45_45;

#line 809 "html_format.m"
          {
#line 809 "html_format.m"
            html_format__V_18_18 = html_format__escape_break_html_attr_string_1_f_0(html_format__Label_9);
          }
#line 5551 "html_format.c"
          html_format__V_34_34 = (MR_Word) &html_format_scalar_common_6[0];
#line 809 "html_format.m"
          {
#line 809 "html_format.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(html_format__V_34_34, html_format__V_18_18, &html_format__V_28_28);
          }
#line 808 "html_format.m"
          {
#line 808 "html_format.m"
            html_format__V_35_35 = mercury__string__f_43_43_2_f_0(html_format__V_28_28, (MR_String) "</a>");
          }
#line 808 "html_format.m"
          {
#line 808 "html_format.m"
            html_format__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) "\">", html_format__V_35_35);
          }
#line 809 "html_format.m"
          {
#line 809 "html_format.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(html_format__V_34_34, html_format__URL_11, &html_format__V_38_38);
          }
#line 808 "html_format.m"
          {
#line 808 "html_format.m"
            html_format__V_45_45 = mercury__string__f_43_43_2_f_0(html_format__V_38_38, html_format__V_37_37);
          }
#line 808 "html_format.m"
          {
#line 808 "html_format.m"
            html_format__HTMLStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "<a class=\"link\" href=\"", html_format__V_45_45);
          }
#line 806 "html_format.m"
        }
#line 805 "html_format.m"
        break;
#line 805 "html_format.m"
    }
#line 896 "html_format.m"
    {
#line 896 "html_format.m"
      html_format__HTML_6 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__HTMLStr_13)));
    }
#line 797 "html_format.m"
    return html_format__HTML_6;
#line 797 "html_format.m"
  }
#line 795 "html_format.m"
}

#line 733 "html_format.m"
static void MR_CALL 
html_format__list_to_html_7_p_0(
#line 733 "html_format.m"
  MR_Word html_format__FormatInfo_8,
#line 733 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_26,
#line 733 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_27,
#line 733 "html_format.m"
  MR_Word html_format__Class_10,
#line 733 "html_format.m"
  MR_Word html_format__MaybeTitle_11,
#line 733 "html_format.m"
  MR_Word html_format__Items_12,
#line 733 "html_format.m"
  MR_Word * html_format__HTML_13)
#line 733 "html_format.m"
{
#line 738 "html_format.m"
  {
#line 738 "html_format.m"
    MR_bool html_format__succeeded;
#line 738 "html_format.m"
    MR_Word html_format__TypeCtorInfo_40_40;
#line 738 "html_format.m"
    MR_Word html_format__TypeCtorInfo_11_70;
#line 738 "html_format.m"
    MR_Word html_format__TitleHTML_17;
#line 738 "html_format.m"
    MR_Word html_format__PostTitleHTML_18;
#line 738 "html_format.m"
    MR_String html_format__OutsideStartTag_19;
#line 738 "html_format.m"
    MR_String html_format__OutsideEndTag_20;
#line 738 "html_format.m"
    MR_String html_format__InnerStartTag_21;
#line 738 "html_format.m"
    MR_String html_format__InnerEndTag_22;
#line 738 "html_format.m"
    MR_Word html_format__Separator_23;
#line 738 "html_format.m"
    MR_Word html_format__InnerItemsHTML_24;
#line 738 "html_format.m"
    MR_Word html_format__ItemsHTML_25;
#line 738 "html_format.m"
    MR_Word html_format__V_34_34;
#line 738 "html_format.m"
    MR_Word html_format__V_67_67;
#line 738 "html_format.m"
    MR_Word html_format__V_68_68;
#line 738 "html_format.m"
    MR_Word html_format__V_69_69;

#line 755 "html_format.m"
    if ((html_format__MaybeTitle_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 756 "html_format.m"
      {
#line 888 "html_format.m"
        {
#line 888 "html_format.m"
          html_format__TitleHTML_17 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 888 "html_format.m"
        {
#line 888 "html_format.m"
          html_format__PostTitleHTML_18 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 756 "html_format.m"
      }
#line 755 "html_format.m"
    else
#line 740 "html_format.m"
      {
#line 740 "html_format.m"
        MR_Word html_format__TypeCtorInfo_11_51;
#line 740 "html_format.m"
        MR_String html_format__Title_14 = ((MR_String) (MR_hl_field(MR_mktag(1), html_format__MaybeTitle_11, (MR_Integer) 0)));
#line 740 "html_format.m"
        MR_Word html_format__V_28_28;
#line 740 "html_format.m"
        MR_Word html_format__V_48_48;
#line 740 "html_format.m"
        MR_Word html_format__V_49_49;
#line 740 "html_format.m"
        MR_Word html_format__V_50_50;

#line 896 "html_format.m"
        {
#line 896 "html_format.m"
          html_format__V_28_28 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Title_14)));
        }
#line 5693 "html_format.c"
        html_format__TypeCtorInfo_11_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 896 "html_format.m"
        {
#line 896 "html_format.m"
          html_format__V_48_48 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "<span id=\"list_title\">")));
        }
#line 896 "html_format.m"
        {
#line 896 "html_format.m"
          html_format__V_50_50 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "</span>\n")));
        }
#line 884 "html_format.m"
        {
#line 884 "html_format.m"
          html_format__V_49_49 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_51, html_format__V_28_28, html_format__V_50_50);
        }
#line 884 "html_format.m"
        {
#line 884 "html_format.m"
          html_format__TitleHTML_17 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_51, html_format__V_48_48, html_format__V_49_49);
        }
#line 748 "html_format.m"
#line 748 "html_format.m"
        switch (html_format__Class_10) {
#line 748 "html_format.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 748 "html_format.m"
          case (MR_Integer) 2:
#line 888 "html_format.m"
            {
#line 888 "html_format.m"
              {
#line 888 "html_format.m"
                html_format__PostTitleHTML_18 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
              }
#line 888 "html_format.m"
            }
#line 748 "html_format.m"
            break;
#line 748 "html_format.m"
          case (MR_Integer) 3:
#line 748 "html_format.m"
          case (MR_Integer) 1:
#line 748 "html_format.m"
          case (MR_Integer) 0:
#line 752 "html_format.m"
            {
#line 896 "html_format.m"
              {
#line 896 "html_format.m"
                html_format__PostTitleHTML_18 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "<br>\n")));
              }
#line 752 "html_format.m"
            }
#line 748 "html_format.m"
            break;
#line 748 "html_format.m"
        }
#line 740 "html_format.m"
      }
#line 769 "html_format.m"
#line 769 "html_format.m"
    switch (html_format__Class_10) {
#line 769 "html_format.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 769 "html_format.m"
      case (MR_Integer) 2:
#line 769 "html_format.m"
      case (MR_Integer) 3:
#line 763 "html_format.m"
        {
#line 764 "html_format.m"
          html_format__OutsideStartTag_19 = (MR_String) "";
#line 765 "html_format.m"
          html_format__OutsideEndTag_20 = (MR_String) "\n";
#line 766 "html_format.m"
          html_format__InnerStartTag_21 = (MR_String) "";
#line 767 "html_format.m"
          html_format__InnerEndTag_22 = (MR_String) "\n";
#line 896 "html_format.m"
          {
#line 896 "html_format.m"
            html_format__Separator_23 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "")));
          }
#line 763 "html_format.m"
        }
#line 769 "html_format.m"
        break;
#line 769 "html_format.m"
      case (MR_Integer) 1:
#line 777 "html_format.m"
        {
#line 778 "html_format.m"
          html_format__OutsideStartTag_19 = (MR_String) "<ul>\n";
#line 779 "html_format.m"
          html_format__OutsideEndTag_20 = (MR_String) "</ul>\n";
#line 780 "html_format.m"
          html_format__InnerStartTag_21 = (MR_String) "<li>\n";
#line 781 "html_format.m"
          html_format__InnerEndTag_22 = (MR_String) "</li>\n";
#line 888 "html_format.m"
          {
#line 888 "html_format.m"
            html_format__Separator_23 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
          }
#line 777 "html_format.m"
        }
#line 769 "html_format.m"
        break;
#line 769 "html_format.m"
      case (MR_Integer) 0:
#line 770 "html_format.m"
        {
#line 771 "html_format.m"
          html_format__OutsideStartTag_19 = (MR_String) "";
#line 772 "html_format.m"
          html_format__OutsideEndTag_20 = (MR_String) "\n";
#line 773 "html_format.m"
          html_format__InnerStartTag_21 = (MR_String) "";
#line 774 "html_format.m"
          html_format__InnerEndTag_22 = (MR_String) "\n";
#line 896 "html_format.m"
          {
#line 896 "html_format.m"
            html_format__Separator_23 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "<br>\n")));
          }
#line 770 "html_format.m"
        }
#line 769 "html_format.m"
        break;
#line 769 "html_format.m"
    }
#line 784 "html_format.m"
    {
#line 784 "html_format.m"
      html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_49_95_95_91_53_93_95_48_6_p_0(html_format__InnerStartTag_21, html_format__InnerEndTag_22, html_format__FormatInfo_8, html_format__Separator_23, html_format__STATE_VARIABLE_StyleControlMap_0_26, html_format__STATE_VARIABLE_StyleControlMap_27, html_format__Items_12, &html_format__InnerItemsHTML_24);
    }
#line 5831 "html_format.c"
    html_format__TypeCtorInfo_11_70 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 896 "html_format.m"
    {
#line 896 "html_format.m"
      html_format__V_67_67 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__OutsideStartTag_19)));
    }
#line 896 "html_format.m"
    {
#line 896 "html_format.m"
      html_format__V_69_69 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__OutsideEndTag_20)));
    }
#line 884 "html_format.m"
    {
#line 884 "html_format.m"
      html_format__V_68_68 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_70, html_format__InnerItemsHTML_24, html_format__V_69_69);
    }
#line 884 "html_format.m"
    {
#line 884 "html_format.m"
      html_format__ItemsHTML_25 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_70, html_format__V_67_67, html_format__V_68_68);
    }
#line 5853 "html_format.c"
    html_format__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 789 "html_format.m"
    {
#line 789 "html_format.m"
      html_format__V_34_34 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_40_40, html_format__PostTitleHTML_18, html_format__ItemsHTML_25);
    }
#line 789 "html_format.m"
    {
#line 789 "html_format.m"
      *html_format__HTML_13 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_40_40, html_format__TitleHTML_17, html_format__V_34_34);
    }
#line 738 "html_format.m"
  }
#line 733 "html_format.m"
}

#line 631 "html_format.m"
static MR_Word MR_CALL 
html_format__default_style_control_map_0_f_0(void)
#line 631 "html_format.m"
{
#line 633 "html_format.m"
  {
#line 633 "html_format.m"
    MR_bool html_format__succeeded;
#line 633 "html_format.m"
    MR_Word html_format__HeadVar__1_1;
#line 633 "html_format.m"
    MR_Word html_format__TypeCtorInfo_227_227 = (MR_Word) &html_format__html_format__type_ctor_info_style_element_0;
#line 633 "html_format.m"
    MR_Word html_format__TypeCtorInfo_228_228 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 633 "html_format.m"
    MR_Word html_format__V_2_2;
#line 633 "html_format.m"
    MR_Word html_format__V_3_3;
#line 633 "html_format.m"
    MR_Word html_format__V_6_6;
#line 633 "html_format.m"
    MR_Word html_format__V_13_13;
#line 633 "html_format.m"
    MR_Word html_format__V_14_14;
#line 633 "html_format.m"
    MR_Word html_format__V_17_17;
#line 633 "html_format.m"
    MR_Word html_format__V_24_24;
#line 633 "html_format.m"
    MR_Word html_format__V_25_25;
#line 633 "html_format.m"
    MR_Word html_format__V_28_28;
#line 633 "html_format.m"
    MR_Word html_format__V_35_35;
#line 633 "html_format.m"
    MR_Word html_format__V_36_36;
#line 633 "html_format.m"
    MR_Word html_format__V_39_39;
#line 633 "html_format.m"
    MR_Word html_format__V_46_46;
#line 633 "html_format.m"
    MR_Word html_format__V_47_47;
#line 633 "html_format.m"
    MR_Word html_format__V_50_50;
#line 633 "html_format.m"
    MR_Word html_format__V_57_57;
#line 633 "html_format.m"
    MR_Word html_format__V_58_58;
#line 633 "html_format.m"
    MR_Word html_format__V_61_61;
#line 633 "html_format.m"
    MR_Word html_format__V_68_68;
#line 633 "html_format.m"
    MR_Word html_format__V_69_69;
#line 633 "html_format.m"
    MR_Word html_format__V_72_72;
#line 633 "html_format.m"
    MR_Word html_format__V_79_79;
#line 633 "html_format.m"
    MR_Word html_format__V_80_80;
#line 633 "html_format.m"
    MR_Word html_format__V_83_83;
#line 633 "html_format.m"
    MR_Word html_format__V_90_90;
#line 633 "html_format.m"
    MR_Word html_format__V_91_91;
#line 633 "html_format.m"
    MR_Word html_format__V_94_94;
#line 633 "html_format.m"
    MR_Word html_format__V_101_101;
#line 633 "html_format.m"
    MR_Word html_format__V_102_102;
#line 633 "html_format.m"
    MR_Word html_format__V_105_105;
#line 633 "html_format.m"
    MR_Word html_format__V_112_112;
#line 633 "html_format.m"
    MR_Word html_format__V_113_113;
#line 633 "html_format.m"
    MR_Word html_format__V_116_116;
#line 633 "html_format.m"
    MR_Word html_format__V_123_123;
#line 633 "html_format.m"
    MR_Word html_format__V_124_124;
#line 633 "html_format.m"
    MR_Word html_format__V_127_127;
#line 633 "html_format.m"
    MR_Word html_format__V_134_134;
#line 633 "html_format.m"
    MR_Word html_format__V_135_135;
#line 633 "html_format.m"
    MR_Word html_format__V_138_138;
#line 633 "html_format.m"
    MR_Word html_format__V_150_150;
#line 633 "html_format.m"
    MR_Word html_format__V_151_151;
#line 633 "html_format.m"
    MR_Word html_format__V_154_154;
#line 633 "html_format.m"
    MR_Word html_format__V_161_161;
#line 633 "html_format.m"
    MR_Word html_format__V_162_162;
#line 633 "html_format.m"
    MR_Word html_format__V_165_165;
#line 633 "html_format.m"
    MR_Word html_format__V_182_182;
#line 633 "html_format.m"
    MR_Word html_format__V_183_183;
#line 633 "html_format.m"
    MR_Word html_format__V_186_186;
#line 633 "html_format.m"
    MR_Word html_format__V_203_203;
#line 633 "html_format.m"
    MR_Word html_format__V_204_204;
#line 633 "html_format.m"
    MR_Word html_format__V_207_207;

#line 636 "html_format.m"
    {
#line 636 "html_format.m"
      html_format__V_6_6 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4]));
    }
#line 635 "html_format.m"
    {
#line 635 "html_format.m"
      html_format__V_3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 635 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_3_3, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.allocations"))));
#line 635 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_3_3, 1) = ((MR_Box) (html_format__V_6_6));
#line 635 "html_format.m"
    }
#line 641 "html_format.m"
    {
#line 641 "html_format.m"
      html_format__V_17_17 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4]));
    }
#line 640 "html_format.m"
    {
#line 640 "html_format.m"
      html_format__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 640 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_14_14, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.callseqs"))));
#line 640 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_14_14, 1) = ((MR_Box) (html_format__V_17_17));
#line 640 "html_format.m"
    }
#line 646 "html_format.m"
    {
#line 646 "html_format.m"
      html_format__V_28_28 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4]));
    }
#line 645 "html_format.m"
    {
#line 645 "html_format.m"
      html_format__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 645 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_25_25, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.clique"))));
#line 645 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_25_25, 1) = ((MR_Box) (html_format__V_28_28));
#line 645 "html_format.m"
    }
#line 651 "html_format.m"
    {
#line 651 "html_format.m"
      html_format__V_39_39 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[6]));
    }
#line 650 "html_format.m"
    {
#line 650 "html_format.m"
      html_format__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 650 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_36_36, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.field_name"))));
#line 650 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_36_36, 1) = ((MR_Box) (html_format__V_39_39));
#line 650 "html_format.m"
    }
#line 656 "html_format.m"
    {
#line 656 "html_format.m"
      html_format__V_50_50 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4]));
    }
#line 655 "html_format.m"
    {
#line 655 "html_format.m"
      html_format__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 655 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_47_47, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.memory"))));
#line 655 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_47_47, 1) = ((MR_Box) (html_format__V_50_50));
#line 655 "html_format.m"
    }
#line 661 "html_format.m"
    {
#line 661 "html_format.m"
      html_format__V_61_61 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[6]));
    }
#line 660 "html_format.m"
    {
#line 660 "html_format.m"
      html_format__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 660 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_58_58, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.module_name"))));
#line 660 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_58_58, 1) = ((MR_Box) (html_format__V_61_61));
#line 660 "html_format.m"
    }
#line 666 "html_format.m"
    {
#line 666 "html_format.m"
      html_format__V_72_72 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4]));
    }
#line 665 "html_format.m"
    {
#line 665 "html_format.m"
      html_format__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 665 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_69_69, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.number"))));
#line 665 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_69_69, 1) = ((MR_Box) (html_format__V_72_72));
#line 665 "html_format.m"
    }
#line 671 "html_format.m"
    {
#line 671 "html_format.m"
      html_format__V_83_83 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4]));
    }
#line 670 "html_format.m"
    {
#line 670 "html_format.m"
      html_format__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 670 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_80_80, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.ordinal_rank"))));
#line 670 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_80_80, 1) = ((MR_Box) (html_format__V_83_83));
#line 670 "html_format.m"
    }
#line 676 "html_format.m"
    {
#line 676 "html_format.m"
      html_format__V_94_94 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4]));
    }
#line 675 "html_format.m"
    {
#line 675 "html_format.m"
      html_format__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 675 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_91_91, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.port_counts"))));
#line 675 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_91_91, 1) = ((MR_Box) (html_format__V_94_94));
#line 675 "html_format.m"
    }
#line 681 "html_format.m"
    {
#line 681 "html_format.m"
      html_format__V_105_105 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[6]));
    }
#line 680 "html_format.m"
    {
#line 680 "html_format.m"
      html_format__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 680 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_102_102, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.proc"))));
#line 680 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_102_102, 1) = ((MR_Box) (html_format__V_105_105));
#line 680 "html_format.m"
    }
#line 686 "html_format.m"
    {
#line 686 "html_format.m"
      html_format__V_116_116 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[6]));
    }
#line 685 "html_format.m"
    {
#line 685 "html_format.m"
      html_format__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 685 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_113_113, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.source_context"))));
#line 685 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_113_113, 1) = ((MR_Box) (html_format__V_116_116));
#line 685 "html_format.m"
    }
#line 691 "html_format.m"
    {
#line 691 "html_format.m"
      html_format__V_127_127 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[4]));
    }
#line 690 "html_format.m"
    {
#line 690 "html_format.m"
      html_format__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 690 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_124_124, 0) = ((MR_Box) (((MR_Box) ((MR_String) "td.ticks_and_times"))));
#line 690 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_124_124, 1) = ((MR_Box) (html_format__V_127_127));
#line 690 "html_format.m"
    }
#line 696 "html_format.m"
    {
#line 696 "html_format.m"
      html_format__V_138_138 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[10]));
    }
#line 695 "html_format.m"
    {
#line 695 "html_format.m"
      html_format__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 695 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_135_135, 0) = ((MR_Box) (((MR_Box) ((MR_String) "a.control"))));
#line 695 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_135_135, 1) = ((MR_Box) (html_format__V_138_138));
#line 695 "html_format.m"
    }
#line 702 "html_format.m"
    {
#line 702 "html_format.m"
      html_format__V_154_154 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[12]));
    }
#line 701 "html_format.m"
    {
#line 701 "html_format.m"
      html_format__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 701 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_151_151, 0) = ((MR_Box) (((MR_Box) ((MR_String) "table.plain"))));
#line 701 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_151_151, 1) = ((MR_Box) (html_format__V_154_154));
#line 701 "html_format.m"
    }
#line 707 "html_format.m"
    {
#line 707 "html_format.m"
      html_format__V_165_165 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[18]));
    }
#line 706 "html_format.m"
    {
#line 706 "html_format.m"
      html_format__V_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 706 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_162_162, 0) = ((MR_Box) (((MR_Box) ((MR_String) "table.boxed"))));
#line 706 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_162_162, 1) = ((MR_Box) (html_format__V_165_165));
#line 706 "html_format.m"
    }
#line 714 "html_format.m"
    {
#line 714 "html_format.m"
      html_format__V_186_186 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[23]));
    }
#line 713 "html_format.m"
    {
#line 713 "html_format.m"
      html_format__V_183_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 713 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_183_183, 0) = ((MR_Box) (((MR_Box) ((MR_String) "table.boxed th"))));
#line 713 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_183_183, 1) = ((MR_Box) (html_format__V_186_186));
#line 713 "html_format.m"
    }
#line 721 "html_format.m"
    {
#line 721 "html_format.m"
      html_format__V_207_207 = mercury__map__from_assoc_list_1_f_0(html_format__TypeCtorInfo_227_227, html_format__TypeCtorInfo_228_228, (MR_Word) MR_mkword(MR_mktag(1), &html_format_scalar_common_2[23]));
    }
#line 720 "html_format.m"
    {
#line 720 "html_format.m"
      html_format__V_204_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 720 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_204_204, 0) = ((MR_Box) (((MR_Box) ((MR_String) "table.boxed td"))));
#line 720 "html_format.m"
      MR_hl_field(MR_mktag(0), html_format__V_204_204, 1) = ((MR_Box) (html_format__V_207_207));
#line 720 "html_format.m"
    }
#line 727 "html_format.m"
    {
#line 727 "html_format.m"
      html_format__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_203_203, 0) = ((MR_Box) (html_format__V_204_204));
#line 727 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_203_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "html_format.m"
    }
#line 719 "html_format.m"
    {
#line 719 "html_format.m"
      html_format__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_182_182, 0) = ((MR_Box) (html_format__V_183_183));
#line 719 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_182_182, 1) = ((MR_Box) (html_format__V_203_203));
#line 719 "html_format.m"
    }
#line 712 "html_format.m"
    {
#line 712 "html_format.m"
      html_format__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_161_161, 0) = ((MR_Box) (html_format__V_162_162));
#line 712 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_161_161, 1) = ((MR_Box) (html_format__V_182_182));
#line 712 "html_format.m"
    }
#line 705 "html_format.m"
    {
#line 705 "html_format.m"
      html_format__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_150_150, 0) = ((MR_Box) (html_format__V_151_151));
#line 705 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_150_150, 1) = ((MR_Box) (html_format__V_161_161));
#line 705 "html_format.m"
    }
#line 700 "html_format.m"
    {
#line 700 "html_format.m"
      html_format__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_134_134, 0) = ((MR_Box) (html_format__V_135_135));
#line 700 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_134_134, 1) = ((MR_Box) (html_format__V_150_150));
#line 700 "html_format.m"
    }
#line 694 "html_format.m"
    {
#line 694 "html_format.m"
      html_format__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_123_123, 0) = ((MR_Box) (html_format__V_124_124));
#line 694 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_123_123, 1) = ((MR_Box) (html_format__V_134_134));
#line 694 "html_format.m"
    }
#line 689 "html_format.m"
    {
#line 689 "html_format.m"
      html_format__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_112_112, 0) = ((MR_Box) (html_format__V_113_113));
#line 689 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_112_112, 1) = ((MR_Box) (html_format__V_123_123));
#line 689 "html_format.m"
    }
#line 684 "html_format.m"
    {
#line 684 "html_format.m"
      html_format__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_101_101, 0) = ((MR_Box) (html_format__V_102_102));
#line 684 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_101_101, 1) = ((MR_Box) (html_format__V_112_112));
#line 684 "html_format.m"
    }
#line 679 "html_format.m"
    {
#line 679 "html_format.m"
      html_format__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 679 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_90_90, 0) = ((MR_Box) (html_format__V_91_91));
#line 679 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_90_90, 1) = ((MR_Box) (html_format__V_101_101));
#line 679 "html_format.m"
    }
#line 674 "html_format.m"
    {
#line 674 "html_format.m"
      html_format__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_79_79, 0) = ((MR_Box) (html_format__V_80_80));
#line 674 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_79_79, 1) = ((MR_Box) (html_format__V_90_90));
#line 674 "html_format.m"
    }
#line 669 "html_format.m"
    {
#line 669 "html_format.m"
      html_format__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_68_68, 0) = ((MR_Box) (html_format__V_69_69));
#line 669 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_68_68, 1) = ((MR_Box) (html_format__V_79_79));
#line 669 "html_format.m"
    }
#line 664 "html_format.m"
    {
#line 664 "html_format.m"
      html_format__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_57_57, 0) = ((MR_Box) (html_format__V_58_58));
#line 664 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_57_57, 1) = ((MR_Box) (html_format__V_68_68));
#line 664 "html_format.m"
    }
#line 659 "html_format.m"
    {
#line 659 "html_format.m"
      html_format__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_46_46, 0) = ((MR_Box) (html_format__V_47_47));
#line 659 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_46_46, 1) = ((MR_Box) (html_format__V_57_57));
#line 659 "html_format.m"
    }
#line 654 "html_format.m"
    {
#line 654 "html_format.m"
      html_format__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_35_35, 0) = ((MR_Box) (html_format__V_36_36));
#line 654 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_35_35, 1) = ((MR_Box) (html_format__V_46_46));
#line 654 "html_format.m"
    }
#line 649 "html_format.m"
    {
#line 649 "html_format.m"
      html_format__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_24_24, 0) = ((MR_Box) (html_format__V_25_25));
#line 649 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_24_24, 1) = ((MR_Box) (html_format__V_35_35));
#line 649 "html_format.m"
    }
#line 644 "html_format.m"
    {
#line 644 "html_format.m"
      html_format__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_13_13, 0) = ((MR_Box) (html_format__V_14_14));
#line 644 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_13_13, 1) = ((MR_Box) (html_format__V_24_24));
#line 644 "html_format.m"
    }
#line 639 "html_format.m"
    {
#line 639 "html_format.m"
      html_format__V_2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_2_2, 0) = ((MR_Box) (html_format__V_3_3));
#line 639 "html_format.m"
      MR_hl_field(MR_mktag(1), html_format__V_2_2, 1) = ((MR_Box) (html_format__V_13_13));
#line 639 "html_format.m"
    }
#line 634 "html_format.m"
    {
#line 634 "html_format.m"
      html_format__HeadVar__1_1 = mercury__map__from_assoc_list_1_f_0((MR_Word) &html_format__html_format__type_ctor_info_style_control_0, (MR_Word) &html_format_scalar_common_1[0], html_format__V_2_2);
    }
#line 633 "html_format.m"
    return html_format__HeadVar__1_1;
#line 633 "html_format.m"
  }
#line 631 "html_format.m"
}

#line 586 "html_format.m"
static MR_String MR_CALL 
html_format__table_class_to_string_2_f_0(
#line 586 "html_format.m"
  MR_Word html_format__FormatInfo_4,
#line 586 "html_format.m"
  MR_Word html_format__Class_5)
#line 586 "html_format.m"
{
#line 590 "html_format.m"
  {
#line 590 "html_format.m"
    MR_bool html_format__succeeded;
#line 590 "html_format.m"
    MR_String html_format__ClassStr_6;

#line 590 "html_format.m"
#line 590 "html_format.m"
    switch (html_format__Class_5) {
#line 590 "html_format.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 590 "html_format.m"
      case (MR_Integer) 1:
#line 594 "html_format.m"
        html_format__ClassStr_6 = (MR_String) "boxed";
#line 590 "html_format.m"
        break;
#line 590 "html_format.m"
      case (MR_Integer) 2:
#line 596 "html_format.m"
        {
#line 596 "html_format.m"
          MR_Word html_format__BoxPrefs_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 597 "html_format.m"
          MR_Word html_format__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_4, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 597 "html_format.m"
          MR_Word html_format__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 597 "html_format.m"
          MR_String html_format__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_4, (MR_Integer) 1)));
#line 597 "html_format.m"
          MR_String html_format__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_4, (MR_Integer) 2)));
#line 597 "html_format.m"
          MR_String html_format__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_4, (MR_Integer) 3)));

#line 601 "html_format.m"
#line 601 "html_format.m"
          switch (html_format__BoxPrefs_7) {
#line 601 "html_format.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 601 "html_format.m"
            case (MR_Integer) 0:
#line 603 "html_format.m"
              html_format__ClassStr_6 = (MR_String) "boxed";
#line 601 "html_format.m"
              break;
#line 601 "html_format.m"
            case (MR_Integer) 1:
#line 600 "html_format.m"
              html_format__ClassStr_6 = (MR_String) "plain";
#line 601 "html_format.m"
              break;
#line 601 "html_format.m"
          }
#line 596 "html_format.m"
        }
#line 590 "html_format.m"
        break;
#line 590 "html_format.m"
      case (MR_Integer) 0:
#line 591 "html_format.m"
        html_format__ClassStr_6 = (MR_String) "plain";
#line 590 "html_format.m"
        break;
#line 590 "html_format.m"
    }
#line 590 "html_format.m"
    return html_format__ClassStr_6;
#line 590 "html_format.m"
  }
#line 586 "html_format.m"
}

#line 568 "html_format.m"
static MR_String MR_CALL 
html_format__table_column_class_to_string_1_f_0(
#line 568 "html_format.m"
  MR_Word html_format__HeadVar__1_1)
#line 568 "html_format.m"
{
#line 570 "html_format.m"
  {
#line 570 "html_format.m"
    MR_bool html_format__succeeded;
#line 570 "html_format.m"
    MR_String html_format__HeadVar__2_2 = ((&html_format_vector_common_8[39 + html_format__HeadVar__1_1]))->html_format__vector_common_type_8_0__vct_8_f_0;

#line 570 "html_format.m"
    return html_format__HeadVar__2_2;
#line 570 "html_format.m"
  }
#line 568 "html_format.m"
}

#line 564 "html_format.m"
static MR_Word MR_CALL 
html_format__default_table_column_class_0_f_0(void)
#line 564 "html_format.m"
{
#line 566 "html_format.m"
  {
#line 566 "html_format.m"
    MR_bool html_format__succeeded;

#line 566 "html_format.m"
    return (MR_Integer) 6;
#line 566 "html_format.m"
  }
#line 564 "html_format.m"
}

#line 556 "html_format.m"
static MR_bool MR_CALL 
html_format__table_data_class_2_p_0(
#line 556 "html_format.m"
  MR_Word html_format__HeadVar__1_1,
#line 556 "html_format.m"
  MR_Word * html_format__HeadVar__2_2)
#line 556 "html_format.m"
{
#line 558 "html_format.m"
  {
#line 558 "html_format.m"
    MR_bool html_format__succeeded;

#line 558 "html_format.m"
#line 558 "html_format.m"
    switch (MR_tag((MR_Word) html_format__HeadVar__1_1)) {
#line 558 "html_format.m"
      default:
#line 558 "html_format.m"
        html_format__succeeded = MR_FALSE;
#line 558 "html_format.m"
        break;
#line 558 "html_format.m"
      case (MR_Integer) 2:
#line 558 "html_format.m"
        {
#line 558 "html_format.m"
          *html_format__HeadVar__2_2 = (MR_Integer) 7;
#line 558 "html_format.m"
          html_format__succeeded = MR_TRUE;
#line 558 "html_format.m"
        }
#line 558 "html_format.m"
        break;
#line 558 "html_format.m"
      case (MR_Integer) 3:
#line 558 "html_format.m"
#line 558 "html_format.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), html_format__HeadVar__1_1, (MR_Integer) 0)))) {
#line 558 "html_format.m"
          default:
#line 558 "html_format.m"
            html_format__succeeded = MR_FALSE;
#line 558 "html_format.m"
            break;
#line 558 "html_format.m"
          case (MR_Integer) 0:
#line 559 "html_format.m"
            {
#line 559 "html_format.m"
              *html_format__HeadVar__2_2 = (MR_Integer) 7;
#line 559 "html_format.m"
              html_format__succeeded = MR_TRUE;
#line 559 "html_format.m"
            }
#line 558 "html_format.m"
            break;
#line 558 "html_format.m"
          case (MR_Integer) 1:
#line 560 "html_format.m"
            {
#line 560 "html_format.m"
              *html_format__HeadVar__2_2 = (MR_Integer) 7;
#line 560 "html_format.m"
              html_format__succeeded = MR_TRUE;
#line 560 "html_format.m"
            }
#line 558 "html_format.m"
            break;
#line 558 "html_format.m"
          case (MR_Integer) 2:
#line 561 "html_format.m"
            {
#line 561 "html_format.m"
              *html_format__HeadVar__2_2 = (MR_Integer) 7;
#line 561 "html_format.m"
              html_format__succeeded = MR_TRUE;
#line 561 "html_format.m"
            }
#line 558 "html_format.m"
            break;
#line 558 "html_format.m"
          case (MR_Integer) 4:
#line 562 "html_format.m"
            {
#line 562 "html_format.m"
              *html_format__HeadVar__2_2 = (MR_Integer) 7;
#line 562 "html_format.m"
              html_format__succeeded = MR_TRUE;
#line 562 "html_format.m"
            }
#line 558 "html_format.m"
            break;
#line 558 "html_format.m"
        }
#line 558 "html_format.m"
        break;
#line 558 "html_format.m"
    }
#line 558 "html_format.m"
    return html_format__succeeded;
#line 558 "html_format.m"
  }
#line 556 "html_format.m"
}

#line 1018 "html_format.m"
static void MR_CALL 
html_format__table_data_to_html_2_f_0_2(
#line 1018 "html_format.m"
  MR_Box html_format__closure_arg,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_1,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_2,
#line 1018 "html_format.m"
  MR_Box * html_format__wrapper_arg_3)
#line 1018 "html_format.m"
{
#line 1018 "html_format.m"
  {
#line 1018 "html_format.m"
    MR_Box html_format__closure = html_format__closure_arg;
#line 1018 "html_format.m"
    MR_Word html_format__conv1_STATE_VARIABLE_Acc_11;

#line 1018 "html_format.m"
    {
#line 1018 "html_format.m"
      html_format__replace_special_char_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), html_format__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2), &html_format__conv1_STATE_VARIABLE_Acc_11);
    }
#line 1018 "html_format.m"
    *html_format__wrapper_arg_3 = ((MR_Box) (html_format__conv1_STATE_VARIABLE_Acc_11));
#line 1018 "html_format.m"
  }
#line 1018 "html_format.m"
}

#line 6684 "html_format.c"
static MR_bool MR_CALL 
html_format__table_data_to_html_2_f_0_1(
#line 6687 "html_format.c"
  MR_Box html_format__closure_arg,
#line 6689 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 6691 "html_format.c"
  MR_Box * html_format__wrapper_arg_2)
#line 6693 "html_format.c"
{
#line 6695 "html_format.c"
  {
#line 6697 "html_format.c"
    MR_bool html_format__succeeded;
#line 6699 "html_format.c"
    MR_Box html_format__closure = html_format__closure_arg;
#line 6701 "html_format.c"
    MR_String html_format__conv0_HeadVar__2_2;

#line 6704 "html_format.c"
    {
#line 6706 "html_format.c"
      html_format__succeeded = html_format__special_html_char_or_break_2_p_0(((MR_Char) (MR_Word) html_format__wrapper_arg_1), &html_format__conv0_HeadVar__2_2);
    }
#line 6709 "html_format.c"
    if (html_format__succeeded)
#line 6711 "html_format.c"
      {
#line 6713 "html_format.c"
        *html_format__wrapper_arg_2 = ((MR_Box) (html_format__conv0_HeadVar__2_2));
#line 6715 "html_format.c"
        html_format__succeeded = MR_TRUE;
#line 6717 "html_format.c"
      }
#line 6719 "html_format.c"
    return html_format__succeeded;
#line 6721 "html_format.c"
  }
#line 6723 "html_format.c"
}

#line 532 "html_format.m"
static MR_Word MR_CALL 
html_format__table_data_to_html_2_f_0(
#line 532 "html_format.m"
  MR_Word html_format__FormatInfo_1,
#line 532 "html_format.m"
  MR_Word html_format__HeadVar__2_2)
#line 532 "html_format.m"
{
#line 534 "html_format.m"
  {
#line 534 "html_format.m"
    MR_bool html_format__succeeded;
#line 534 "html_format.m"
    MR_Word html_format__HeadVar__3_3;

#line 534 "html_format.m"
#line 534 "html_format.m"
    switch (MR_tag((MR_Word) html_format__HeadVar__2_2)) {
#line 534 "html_format.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 534 "html_format.m"
      case (MR_Integer) 0:
#line 538 "html_format.m"
        {
#line 538 "html_format.m"
          MR_Word html_format__Link_11 = (MR_Word) MR_body(((MR_Word) html_format__HeadVar__2_2), (MR_Integer) 0);

#line 539 "html_format.m"
          {
#line 539 "html_format.m"
            return html_format__HeadVar__3_3 = html_format__link_to_html_2_f_0(html_format__FormatInfo_1, html_format__Link_11);
          }
#line 538 "html_format.m"
        }
#line 534 "html_format.m"
        break;
#line 534 "html_format.m"
      case (MR_Integer) 1:
#line 546 "html_format.m"
        {
#line 546 "html_format.m"
          MR_Word html_format__AttrString_24 = (MR_Word) MR_body(((MR_Word) html_format__HeadVar__2_2), (MR_Integer) 1);
#line 546 "html_format.m"
          MR_String html_format__V_25_25;

#line 547 "html_format.m"
          {
#line 547 "html_format.m"
            html_format__V_25_25 = html_format__escape_break_html_attr_string_1_f_0(html_format__AttrString_24);
          }
#line 896 "html_format.m"
          {
#line 896 "html_format.m"
            html_format__HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__V_25_25)));
          }
#line 546 "html_format.m"
        }
#line 534 "html_format.m"
        break;
#line 534 "html_format.m"
      case (MR_Integer) 2:
#line 534 "html_format.m"
        {
#line 534 "html_format.m"
          MR_Float html_format__Float_5 = MR_unbox_float((MR_hl_field(MR_mktag(2), html_format__HeadVar__2_2, (MR_Integer) 0)));
#line 534 "html_format.m"
          MR_String html_format__V_6_6;

#line 535 "html_format.m"
          {
#line 535 "html_format.m"
            html_format__V_6_6 = measurement_units__two_decimal_fraction_1_f_0(html_format__Float_5);
          }
#line 896 "html_format.m"
          {
#line 896 "html_format.m"
            html_format__HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__V_6_6)));
          }
#line 534 "html_format.m"
        }
#line 534 "html_format.m"
        break;
#line 534 "html_format.m"
      case (MR_Integer) 3:
#line 534 "html_format.m"
#line 534 "html_format.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), html_format__HeadVar__2_2, (MR_Integer) 0)))) {
#line 534 "html_format.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 534 "html_format.m"
          case (MR_Integer) 0:
#line 536 "html_format.m"
            {
#line 536 "html_format.m"
              MR_Integer html_format__Int_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), html_format__HeadVar__2_2, (MR_Integer) 1)));
#line 536 "html_format.m"
              MR_String html_format__V_9_9;

#line 537 "html_format.m"
              {
#line 537 "html_format.m"
                html_format__V_9_9 = measurement_units__commas_1_f_0(html_format__Int_8);
              }
#line 896 "html_format.m"
              {
#line 896 "html_format.m"
                html_format__HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__V_9_9)));
              }
#line 536 "html_format.m"
            }
#line 534 "html_format.m"
            break;
#line 534 "html_format.m"
          case (MR_Integer) 1:
#line 540 "html_format.m"
            {
#line 540 "html_format.m"
              MR_Word html_format__Mem_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), html_format__HeadVar__2_2, (MR_Integer) 1)));
#line 540 "html_format.m"
              MR_Word html_format__Units_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), html_format__HeadVar__2_2, (MR_Integer) 2)));
#line 540 "html_format.m"
              MR_Integer html_format__Decimals_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), html_format__HeadVar__2_2, (MR_Integer) 3)));
#line 540 "html_format.m"
              MR_String html_format__V_16_16;

#line 541 "html_format.m"
              {
#line 541 "html_format.m"
                html_format__V_16_16 = measurement_units__format_memory_3_f_0(html_format__Mem_13, html_format__Units_14, html_format__Decimals_15);
              }
#line 896 "html_format.m"
              {
#line 896 "html_format.m"
                html_format__HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__V_16_16)));
              }
#line 540 "html_format.m"
            }
#line 534 "html_format.m"
            break;
#line 534 "html_format.m"
          case (MR_Integer) 2:
#line 542 "html_format.m"
            {
#line 542 "html_format.m"
              MR_Word html_format__Percent_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), html_format__HeadVar__2_2, (MR_Integer) 1)));
#line 542 "html_format.m"
              MR_String html_format__V_19_19;

#line 543 "html_format.m"
              {
#line 543 "html_format.m"
                html_format__V_19_19 = measurement_units__format_percent_1_f_0(html_format__Percent_18);
              }
#line 896 "html_format.m"
              {
#line 896 "html_format.m"
                html_format__HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__V_19_19)));
              }
#line 542 "html_format.m"
            }
#line 534 "html_format.m"
            break;
#line 534 "html_format.m"
          case (MR_Integer) 3:
#line 544 "html_format.m"
            {
#line 544 "html_format.m"
              MR_String html_format__String_21 = ((MR_String) (MR_hl_field(MR_mktag(3), html_format__HeadVar__2_2, (MR_Integer) 1)));
#line 544 "html_format.m"
              MR_String html_format__V_22_22;
#line 544 "html_format.m"
              MR_Word html_format__Chars_47;
#line 1018 "html_format.m"
              MR_Box html_format__conv2_Chars_47;

#line 1018 "html_format.m"
              {
#line 1018 "html_format.m"
                mercury__string__foldr_4_p_0((MR_Word) &html_format_scalar_common_2[2], (MR_Word) &html_format_scalar_common_5[4], html_format__String_21, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &html_format__conv2_Chars_47);
              }
#line 1018 "html_format.m"
              html_format__Chars_47 = ((MR_Word) html_format__conv2_Chars_47);
#line 1019 "html_format.m"
              {
#line 1019 "html_format.m"
                mercury__string__from_char_list_2_p_0(html_format__Chars_47, &html_format__V_22_22);
              }
#line 896 "html_format.m"
              {
#line 896 "html_format.m"
                html_format__HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__V_22_22)));
              }
#line 544 "html_format.m"
            }
#line 534 "html_format.m"
            break;
#line 534 "html_format.m"
          case (MR_Integer) 4:
#line 548 "html_format.m"
            {
#line 548 "html_format.m"
              MR_Word html_format__Time_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), html_format__HeadVar__2_2, (MR_Integer) 1)));
#line 548 "html_format.m"
              MR_String html_format__V_28_28;

#line 549 "html_format.m"
              {
#line 549 "html_format.m"
                html_format__V_28_28 = measurement_units__format_time_1_f_0(html_format__Time_27);
              }
#line 896 "html_format.m"
              {
#line 896 "html_format.m"
                html_format__HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__V_28_28)));
              }
#line 548 "html_format.m"
            }
#line 534 "html_format.m"
            break;
#line 534 "html_format.m"
        }
#line 534 "html_format.m"
        break;
#line 534 "html_format.m"
    }
#line 534 "html_format.m"
    return html_format__HeadVar__3_3;
#line 534 "html_format.m"
  }
#line 532 "html_format.m"
}

#line 481 "html_format.m"
static void MR_CALL 
html_format__table_cell_to_html_8_p_0(
#line 481 "html_format.m"
  MR_Word html_format__FormatInfo_9,
#line 481 "html_format.m"
  MR_Word html_format__MaybeClassMap_10,
#line 481 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_27,
#line 481 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_28,
#line 481 "html_format.m"
  MR_Integer html_format__STATE_VARIABLE_ColumnNum_0_29,
#line 481 "html_format.m"
  MR_Integer * html_format__STATE_VARIABLE_ColumnNum_30,
#line 481 "html_format.m"
  MR_Word html_format__Cell_13,
#line 481 "html_format.m"
  MR_Word * html_format__HTML_14)
#line 481 "html_format.m"
{
#line 486 "html_format.m"
  {
#line 486 "html_format.m"
    MR_bool html_format__succeeded;

#line 491 "html_format.m"
#line 491 "html_format.m"
    switch (MR_tag((MR_Word) html_format__Cell_13)) {
#line 491 "html_format.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 491 "html_format.m"
      case (MR_Integer) 0:
#line 488 "html_format.m"
        {
#line 489 "html_format.m"
          *html_format__STATE_VARIABLE_ColumnNum_30 = (html_format__STATE_VARIABLE_ColumnNum_0_29 + (MR_Integer) 1);
#line 490 "html_format.m"
          {
#line 490 "html_format.m"
            *html_format__HTML_14 = html_format__str_to_html_1_f_0((MR_String) "<td/>");
          }
#line 488 "html_format.m"
        }
#line 491 "html_format.m"
        break;
#line 491 "html_format.m"
      case (MR_Integer) 1:
#line 497 "html_format.m"
        {
#line 497 "html_format.m"
          MR_Word html_format__CellData_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__Cell_13, (MR_Integer) 0)));
#line 497 "html_format.m"
          MR_String html_format__ColumnClassStr_19;
#line 497 "html_format.m"
          MR_Word html_format__CellHTML_23;
#line 497 "html_format.m"
          MR_String html_format__StartTag_25;
#line 497 "html_format.m"
          MR_String html_format__V_198_198;
#line 497 "html_format.m"
          MR_Word html_format__V_204_204;
#line 497 "html_format.m"
          MR_String html_format__V_205_205;
#line 497 "html_format.m"
          MR_String html_format__V_207_207;
#line 497 "html_format.m"
          MR_String html_format__V_208_208;
#line 497 "html_format.m"
          MR_String html_format__V_215_215;

#line 508 "html_format.m"
          if ((html_format__MaybeClassMap_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 509 "html_format.m"
            {
#line 509 "html_format.m"
              MR_Word html_format__ColumnClass_22;
#line 512 "html_format.m"
              MR_Word html_format__ColumnClassPrime_21;

#line 510 "html_format.m"
              {
#line 510 "html_format.m"
                html_format__succeeded = html_format__table_data_class_2_p_0(html_format__CellData_15, &html_format__ColumnClassPrime_21);
              }
#line 512 "html_format.m"
              if (html_format__succeeded)
#line 511 "html_format.m"
                html_format__ColumnClass_22 = html_format__ColumnClassPrime_21;
#line 512 "html_format.m"
              else
#line 513 "html_format.m"
                {
#line 513 "html_format.m"
                  html_format__ColumnClass_22 = html_format__default_table_column_class_0_f_0();
                }
#line 515 "html_format.m"
              {
#line 515 "html_format.m"
                html_format__ColumnClassStr_19 = html_format__table_column_class_to_string_1_f_0(html_format__ColumnClass_22);
              }
#line 509 "html_format.m"
            }
#line 508 "html_format.m"
          else
#line 499 "html_format.m"
            {
#line 499 "html_format.m"
              MR_Word html_format__ClassMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__MaybeClassMap_10, (MR_Integer) 0)));
#line 502 "html_format.m"
              MR_String html_format__ColumnClassStrPrime_18;
#line 500 "html_format.m"
              MR_Box html_format__conv0_ColumnClassStrPrime_18;

#line 500 "html_format.m"
              {
#line 500 "html_format.m"
                html_format__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, html_format__ClassMap_17, html_format__STATE_VARIABLE_ColumnNum_0_29, &html_format__conv0_ColumnClassStrPrime_18);
              }
#line 500 "html_format.m"
              if (html_format__succeeded)
#line 500 "html_format.m"
                {
#line 500 "html_format.m"
                  html_format__ColumnClassStrPrime_18 = ((MR_String) html_format__conv0_ColumnClassStrPrime_18);
#line 500 "html_format.m"
                  html_format__succeeded = MR_TRUE;
#line 500 "html_format.m"
                }
#line 502 "html_format.m"
              if (html_format__succeeded)
#line 501 "html_format.m"
                html_format__ColumnClassStr_19 = html_format__ColumnClassStrPrime_18;
#line 502 "html_format.m"
              else
#line 505 "html_format.m"
                {
#line 505 "html_format.m"
                  MR_String html_format__Msg_20;
#line 505 "html_format.m"
                  MR_String html_format__V_178_178;
#line 505 "html_format.m"
                  MR_String html_format__V_185_185;

#line 505 "html_format.m"
                  {
#line 505 "html_format.m"
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &html_format_scalar_common_6[0], html_format__STATE_VARIABLE_ColumnNum_0_29, &html_format__V_178_178);
                  }
#line 503 "html_format.m"
                  {
#line 503 "html_format.m"
                    html_format__V_185_185 = mercury__string__f_43_43_2_f_0(html_format__V_178_178, (MR_String) ", check table structure");
                  }
#line 503 "html_format.m"
                  {
#line 503 "html_format.m"
                    html_format__Msg_20 = mercury__string__f_43_43_2_f_0((MR_String) "Class map had no class for col ", html_format__V_185_185);
                  }
#line 506 "html_format.m"
                  {
#line 506 "html_format.m"
                    mercury__require__unexpected_3_p_0((MR_String) "html_format", (MR_String) "predicate \140html_format.table_cell_to_html\'/8", html_format__Msg_20);
#line 506 "html_format.m"
                    return;
                  }
#line 505 "html_format.m"
                }
#line 499 "html_format.m"
            }
#line 517 "html_format.m"
          {
#line 517 "html_format.m"
            html_format__CellHTML_23 = html_format__table_data_to_html_2_f_0(html_format__FormatInfo_9, html_format__CellData_15);
          }
#line 523 "html_format.m"
          *html_format__STATE_VARIABLE_ColumnNum_30 = (html_format__STATE_VARIABLE_ColumnNum_0_29 + (MR_Integer) 1);
#line 7136 "html_format.c"
          html_format__V_204_204 = (MR_Word) &html_format_scalar_common_6[0];
#line 525 "html_format.m"
          {
#line 525 "html_format.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(html_format__V_204_204, html_format__ColumnClassStr_19, &html_format__V_198_198);
          }
#line 524 "html_format.m"
          {
#line 524 "html_format.m"
            html_format__V_205_205 = mercury__string__f_43_43_2_f_0(html_format__V_198_198, (MR_String) "\">");
          }
#line 524 "html_format.m"
          {
#line 524 "html_format.m"
            html_format__V_207_207 = mercury__string__f_43_43_2_f_0((MR_String) "class=\"", html_format__V_205_205);
          }
#line 525 "html_format.m"
          {
#line 525 "html_format.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(html_format__V_204_204, (MR_String) "", &html_format__V_208_208);
          }
#line 524 "html_format.m"
          {
#line 524 "html_format.m"
            html_format__V_215_215 = mercury__string__f_43_43_2_f_0(html_format__V_208_208, html_format__V_207_207);
          }
#line 524 "html_format.m"
          {
#line 524 "html_format.m"
            html_format__StartTag_25 = mercury__string__f_43_43_2_f_0((MR_String) "<td ", html_format__V_215_215);
          }
#line 527 "html_format.m"
          {
#line 527 "html_format.m"
            *html_format__HTML_14 = html_format__wrap_tags_3_f_0(html_format__StartTag_25, (MR_String) "</td>\n", html_format__CellHTML_23);
          }
#line 497 "html_format.m"
        }
#line 491 "html_format.m"
        break;
#line 491 "html_format.m"
      case (MR_Integer) 2:
#line 497 "html_format.m"
        {
#line 497 "html_format.m"
          MR_Word html_format__CellData_107 = ((MR_Word) (MR_hl_field(MR_mktag(2), html_format__Cell_13, (MR_Integer) 0)));
#line 497 "html_format.m"
          MR_Integer html_format__Span_108 = ((MR_Integer) (MR_hl_field(MR_mktag(2), html_format__Cell_13, (MR_Integer) 1)));
#line 497 "html_format.m"
          MR_String html_format__ColumnClassStr_111;
#line 497 "html_format.m"
          MR_Word html_format__CellHTML_115;
#line 497 "html_format.m"
          MR_String html_format__SpanStr_116;
#line 497 "html_format.m"
          MR_String html_format__StartTag_117;
#line 497 "html_format.m"
          MR_String html_format__V_158_158;
#line 497 "html_format.m"
          MR_Word html_format__V_164_164;
#line 497 "html_format.m"
          MR_String html_format__V_165_165;
#line 497 "html_format.m"
          MR_String html_format__V_167_167;
#line 497 "html_format.m"
          MR_String html_format__V_168_168;
#line 497 "html_format.m"
          MR_String html_format__V_175_175;

#line 508 "html_format.m"
          if ((html_format__MaybeClassMap_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 509 "html_format.m"
            {
#line 509 "html_format.m"
              MR_Word html_format__ColumnClass_55;
#line 512 "html_format.m"
              MR_Word html_format__ColumnClassPrime_53;

#line 510 "html_format.m"
              {
#line 510 "html_format.m"
                html_format__succeeded = html_format__table_data_class_2_p_0(html_format__CellData_107, &html_format__ColumnClassPrime_53);
              }
#line 512 "html_format.m"
              if (html_format__succeeded)
#line 511 "html_format.m"
                html_format__ColumnClass_55 = html_format__ColumnClassPrime_53;
#line 512 "html_format.m"
              else
#line 513 "html_format.m"
                {
#line 513 "html_format.m"
                  html_format__ColumnClass_55 = html_format__default_table_column_class_0_f_0();
                }
#line 515 "html_format.m"
              {
#line 515 "html_format.m"
                html_format__ColumnClassStr_111 = html_format__table_column_class_to_string_1_f_0(html_format__ColumnClass_55);
              }
#line 509 "html_format.m"
            }
#line 508 "html_format.m"
          else
#line 499 "html_format.m"
            {
#line 499 "html_format.m"
              MR_Word html_format__ClassMap_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__MaybeClassMap_10, (MR_Integer) 0)));
#line 502 "html_format.m"
              MR_String html_format__ColumnClassStrPrime_65;
#line 500 "html_format.m"
              MR_Box html_format__conv1_ColumnClassStrPrime_65;

#line 500 "html_format.m"
              {
#line 500 "html_format.m"
                html_format__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, html_format__ClassMap_75, html_format__STATE_VARIABLE_ColumnNum_0_29, &html_format__conv1_ColumnClassStrPrime_65);
              }
#line 500 "html_format.m"
              if (html_format__succeeded)
#line 500 "html_format.m"
                {
#line 500 "html_format.m"
                  html_format__ColumnClassStrPrime_65 = ((MR_String) html_format__conv1_ColumnClassStrPrime_65);
#line 500 "html_format.m"
                  html_format__succeeded = MR_TRUE;
#line 500 "html_format.m"
                }
#line 502 "html_format.m"
              if (html_format__succeeded)
#line 501 "html_format.m"
                html_format__ColumnClassStr_111 = html_format__ColumnClassStrPrime_65;
#line 502 "html_format.m"
              else
#line 505 "html_format.m"
                {
#line 505 "html_format.m"
                  MR_String html_format__Msg_58;
#line 505 "html_format.m"
                  MR_String html_format__V_138_138;
#line 505 "html_format.m"
                  MR_String html_format__V_145_145;

#line 505 "html_format.m"
                  {
#line 505 "html_format.m"
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &html_format_scalar_common_6[0], html_format__STATE_VARIABLE_ColumnNum_0_29, &html_format__V_138_138);
                  }
#line 503 "html_format.m"
                  {
#line 503 "html_format.m"
                    html_format__V_145_145 = mercury__string__f_43_43_2_f_0(html_format__V_138_138, (MR_String) ", check table structure");
                  }
#line 503 "html_format.m"
                  {
#line 503 "html_format.m"
                    html_format__Msg_58 = mercury__string__f_43_43_2_f_0((MR_String) "Class map had no class for col ", html_format__V_145_145);
                  }
#line 506 "html_format.m"
                  {
#line 506 "html_format.m"
                    mercury__require__unexpected_3_p_0((MR_String) "html_format", (MR_String) "predicate \140html_format.table_cell_to_html\'/8", html_format__Msg_58);
#line 506 "html_format.m"
                    return;
                  }
#line 505 "html_format.m"
                }
#line 499 "html_format.m"
            }
#line 517 "html_format.m"
          {
#line 517 "html_format.m"
            html_format__CellHTML_115 = html_format__table_data_to_html_2_f_0(html_format__FormatInfo_9, html_format__CellData_107);
          }
#line 518 "html_format.m"
          html_format__succeeded = (html_format__Span_108 == (MR_Integer) 1);
#line 520 "html_format.m"
          if (html_format__succeeded)
#line 519 "html_format.m"
            html_format__SpanStr_116 = (MR_String) "";
#line 520 "html_format.m"
          else
#line 521 "html_format.m"
            {
#line 521 "html_format.m"
              MR_String html_format__V_148_148;
#line 521 "html_format.m"
              MR_String html_format__V_155_155;

#line 521 "html_format.m"
              {
#line 521 "html_format.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &html_format_scalar_common_6[0], html_format__Span_108, &html_format__V_148_148);
              }
#line 521 "html_format.m"
              {
#line 521 "html_format.m"
                html_format__V_155_155 = mercury__string__f_43_43_2_f_0(html_format__V_148_148, (MR_String) " ");
              }
#line 521 "html_format.m"
              {
#line 521 "html_format.m"
                html_format__SpanStr_116 = mercury__string__f_43_43_2_f_0((MR_String) "colspan=", html_format__V_155_155);
              }
#line 521 "html_format.m"
            }
#line 523 "html_format.m"
          *html_format__STATE_VARIABLE_ColumnNum_30 = (html_format__STATE_VARIABLE_ColumnNum_0_29 + html_format__Span_108);
#line 7344 "html_format.c"
          html_format__V_164_164 = (MR_Word) &html_format_scalar_common_6[0];
#line 525 "html_format.m"
          {
#line 525 "html_format.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(html_format__V_164_164, html_format__ColumnClassStr_111, &html_format__V_158_158);
          }
#line 524 "html_format.m"
          {
#line 524 "html_format.m"
            html_format__V_165_165 = mercury__string__f_43_43_2_f_0(html_format__V_158_158, (MR_String) "\">");
          }
#line 524 "html_format.m"
          {
#line 524 "html_format.m"
            html_format__V_167_167 = mercury__string__f_43_43_2_f_0((MR_String) "class=\"", html_format__V_165_165);
          }
#line 525 "html_format.m"
          {
#line 525 "html_format.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(html_format__V_164_164, html_format__SpanStr_116, &html_format__V_168_168);
          }
#line 524 "html_format.m"
          {
#line 524 "html_format.m"
            html_format__V_175_175 = mercury__string__f_43_43_2_f_0(html_format__V_168_168, html_format__V_167_167);
          }
#line 524 "html_format.m"
          {
#line 524 "html_format.m"
            html_format__StartTag_117 = mercury__string__f_43_43_2_f_0((MR_String) "<td ", html_format__V_175_175);
          }
#line 527 "html_format.m"
          {
#line 527 "html_format.m"
            *html_format__HTML_14 = html_format__wrap_tags_3_f_0(html_format__StartTag_117, (MR_String) "</td>\n", html_format__CellHTML_115);
          }
#line 497 "html_format.m"
        }
#line 491 "html_format.m"
        break;
#line 491 "html_format.m"
    }
#line 486 "html_format.m"
    *html_format__STATE_VARIABLE_StyleControlMap_28 = html_format__STATE_VARIABLE_StyleControlMap_0_27;
#line 486 "html_format.m"
  }
#line 481 "html_format.m"
}

#line 444 "html_format.m"
static void MR_CALL 
html_format__table_row_to_html_7_p_0(
#line 444 "html_format.m"
  MR_Word html_format__FormatInfo_8,
#line 444 "html_format.m"
  MR_Word html_format__MaybeColClassMap_9,
#line 444 "html_format.m"
  MR_Integer html_format__NumColumns_10,
#line 444 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_23,
#line 444 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_24,
#line 444 "html_format.m"
  MR_Word html_format__TableRow_12,
#line 444 "html_format.m"
  MR_Word * html_format__HTML_13)
#line 444 "html_format.m"
{
#line 451 "html_format.m"
  while (MR_TRUE)
#line 451 "html_format.m"
    {
#line 451 "html_format.m"
      /* tailcall optimized into a loop */
#line 451 "html_format.m"
      {
#line 451 "html_format.m"
        MR_bool html_format__succeeded;

#line 451 "html_format.m"
#line 451 "html_format.m"
        switch (MR_tag((MR_Word) html_format__TableRow_12)) {
#line 451 "html_format.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 451 "html_format.m"
          case (MR_Integer) 0:
#line 457 "html_format.m"
            {
#line 457 "html_format.m"
              MR_String html_format__Str_18;
#line 457 "html_format.m"
              MR_String html_format__V_53_53;
#line 457 "html_format.m"
              MR_String html_format__V_60_60;

#line 459 "html_format.m"
              {
#line 459 "html_format.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &html_format_scalar_common_6[0], html_format__NumColumns_10, &html_format__V_53_53);
              }
#line 458 "html_format.m"
              {
#line 458 "html_format.m"
                html_format__V_60_60 = mercury__string__f_43_43_2_f_0(html_format__V_53_53, (MR_String) "\"></td></tr>\n");
              }
#line 458 "html_format.m"
              {
#line 458 "html_format.m"
                html_format__Str_18 = mercury__string__f_43_43_2_f_0((MR_String) "<tr><td colspan=\"", html_format__V_60_60);
              }
#line 896 "html_format.m"
              {
#line 896 "html_format.m"
                *html_format__HTML_13 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Str_18)));
              }
#line 457 "html_format.m"
              *html_format__STATE_VARIABLE_StyleControlMap_24 = html_format__STATE_VARIABLE_StyleControlMap_0_23;
#line 457 "html_format.m"
            }
#line 451 "html_format.m"
            break;
#line 451 "html_format.m"
          case (MR_Integer) 1:
#line 462 "html_format.m"
            {
#line 462 "html_format.m"
              MR_Word html_format__TypeCtorInfo_11_78;
#line 462 "html_format.m"
              MR_Word html_format__Cells_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__TableRow_12, (MR_Integer) 0)));
#line 462 "html_format.m"
              MR_Word html_format__InnerHTML_20;
#line 462 "html_format.m"
              MR_Word html_format__V_75_75;
#line 462 "html_format.m"
              MR_Word html_format__V_76_76;
#line 462 "html_format.m"
              MR_Word html_format__V_77_77;

#line 463 "html_format.m"
              {
#line 463 "html_format.m"
                html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_99_111_117_110_116_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(html_format__FormatInfo_8, html_format__MaybeColClassMap_9, html_format__STATE_VARIABLE_StyleControlMap_0_23, html_format__STATE_VARIABLE_StyleControlMap_24, (MR_Integer) 0, html_format__Cells_19, &html_format__InnerHTML_20);
              }
#line 7488 "html_format.c"
              html_format__TypeCtorInfo_11_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 896 "html_format.m"
              {
#line 896 "html_format.m"
                html_format__V_75_75 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "<tr>\n")));
              }
#line 896 "html_format.m"
              {
#line 896 "html_format.m"
                html_format__V_77_77 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "</tr>\n")));
              }
#line 884 "html_format.m"
              {
#line 884 "html_format.m"
                html_format__V_76_76 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_78, html_format__InnerHTML_20, html_format__V_77_77);
              }
#line 884 "html_format.m"
              {
#line 884 "html_format.m"
                *html_format__HTML_13 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_78, html_format__V_75_75, html_format__V_76_76);
              }
#line 462 "html_format.m"
            }
#line 451 "html_format.m"
            break;
#line 451 "html_format.m"
          case (MR_Integer) 2:
#line 451 "html_format.m"
            {
#line 451 "html_format.m"
              MR_Word html_format__TypeCtorInfo_11_89;
#line 451 "html_format.m"
              MR_Word html_format__Contents_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), html_format__TableRow_12, (MR_Integer) 0)));
#line 451 "html_format.m"
              MR_Word html_format__ContentsHTML_15;
#line 451 "html_format.m"
              MR_String html_format__StartTag_16;
#line 451 "html_format.m"
              MR_String html_format__V_63_63;
#line 451 "html_format.m"
              MR_String html_format__V_70_70;
#line 451 "html_format.m"
              MR_Word html_format__V_86_86;
#line 451 "html_format.m"
              MR_Word html_format__V_87_87;
#line 451 "html_format.m"
              MR_Word html_format__V_88_88;

#line 452 "html_format.m"
              {
#line 452 "html_format.m"
                html_format__ContentsHTML_15 = html_format__table_data_to_html_2_f_0(html_format__FormatInfo_8, html_format__Contents_14);
              }
#line 453 "html_format.m"
              {
#line 453 "html_format.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &html_format_scalar_common_6[0], html_format__NumColumns_10, &html_format__V_63_63);
              }
#line 453 "html_format.m"
              {
#line 453 "html_format.m"
                html_format__V_70_70 = mercury__string__f_43_43_2_f_0(html_format__V_63_63, (MR_String) "\">");
              }
#line 453 "html_format.m"
              {
#line 453 "html_format.m"
                html_format__StartTag_16 = mercury__string__f_43_43_2_f_0((MR_String) "<tr><td colspan=\"", html_format__V_70_70);
              }
#line 7557 "html_format.c"
              html_format__TypeCtorInfo_11_89 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 896 "html_format.m"
              {
#line 896 "html_format.m"
                html_format__V_86_86 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__StartTag_16)));
              }
#line 896 "html_format.m"
              {
#line 896 "html_format.m"
                html_format__V_88_88 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "</td></tr>\n")));
              }
#line 884 "html_format.m"
              {
#line 884 "html_format.m"
                html_format__V_87_87 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_89, html_format__ContentsHTML_15, html_format__V_88_88);
              }
#line 884 "html_format.m"
              {
#line 884 "html_format.m"
                *html_format__HTML_13 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_89, html_format__V_86_86, html_format__V_87_87);
              }
#line 451 "html_format.m"
              *html_format__STATE_VARIABLE_StyleControlMap_24 = html_format__STATE_VARIABLE_StyleControlMap_0_23;
#line 451 "html_format.m"
            }
#line 451 "html_format.m"
            break;
#line 451 "html_format.m"
          case (MR_Integer) 3:
#line 467 "html_format.m"
            {
#line 467 "html_format.m"
              MR_Word html_format__RealTableRow_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), html_format__TableRow_12, (MR_Integer) 0)));
#line 467 "html_format.m"
              MR_Word html_format__Developer_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_8, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 468 "html_format.m"
              MR_Word html_format__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_8, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 468 "html_format.m"
              MR_Word html_format__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 468 "html_format.m"
              MR_String html_format__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_8, (MR_Integer) 1)));
#line 468 "html_format.m"
              MR_String html_format__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_8, (MR_Integer) 2)));
#line 468 "html_format.m"
              MR_String html_format__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_8, (MR_Integer) 3)));

#line 473 "html_format.m"
#line 473 "html_format.m"
              switch (html_format__Developer_22) {
#line 473 "html_format.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 473 "html_format.m"
                case (MR_Integer) 1:
#line 474 "html_format.m"
                  {
#line 475 "html_format.m"
                    {
#line 475 "html_format.m"
                      *html_format__HTML_13 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
                    }
#line 474 "html_format.m"
                    *html_format__STATE_VARIABLE_StyleControlMap_24 = html_format__STATE_VARIABLE_StyleControlMap_0_23;
#line 474 "html_format.m"
                  }
#line 473 "html_format.m"
                  break;
#line 473 "html_format.m"
                case (MR_Integer) 0:
#line 471 "html_format.m"
                  {
#line 471 "html_format.m"
                    /* direct tailcall eliminated */
#line 471 "html_format.m"
                    {
#line 471 "html_format.m"
                      MR_Word html_format__TableRow__tmp_copy_12 = html_format__RealTableRow_21;

#line 471 "html_format.m"
                      html_format__TableRow_12 = html_format__TableRow__tmp_copy_12;
#line 471 "html_format.m"
                    }
#line 471 "html_format.m"
                    continue;
#line 471 "html_format.m"
                  }
#line 473 "html_format.m"
                  break;
#line 473 "html_format.m"
              }
#line 467 "html_format.m"
            }
#line 451 "html_format.m"
            break;
#line 451 "html_format.m"
        }
#line 451 "html_format.m"
      }
#line 451 "html_format.m"
      break;
#line 451 "html_format.m"
    }
#line 444 "html_format.m"
}

#line 413 "html_format.m"
static void MR_CALL 
html_format__update_style_control_map_7_p_0(
#line 413 "html_format.m"
  MR_String html_format__ColumnClassStr_8,
#line 413 "html_format.m"
  MR_Integer html_format__STATE_VARIABLE_HeaderGroupNumber_0_17,
#line 413 "html_format.m"
  MR_Integer * html_format__STATE_VARIABLE_HeaderGroupNumber_18,
#line 413 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_ColouredClassStrs_0_19,
#line 413 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_ColouredClassStrs_20,
#line 413 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_21,
#line 413 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_22)
#line 413 "html_format.m"
{
#line 418 "html_format.m"
  {
#line 418 "html_format.m"
    MR_bool html_format__succeeded;
#line 418 "html_format.m"
    MR_Word html_format__StyleControl_12;
#line 418 "html_format.m"
    MR_Word html_format__StyleElement_13;
#line 418 "html_format.m"
    MR_String html_format__Colour_14;
#line 418 "html_format.m"
    MR_String html_format__V_23_23;
#line 421 "html_format.m"
    MR_Integer html_format__V_26_26;
#line 434 "html_format.m"
    MR_Word html_format__StyleElementMap0_15;
#line 431 "html_format.m"
    MR_Box html_format__conv0_StyleElementMap0_15;

#line 419 "html_format.m"
    {
#line 419 "html_format.m"
      html_format__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "td.", html_format__ColumnClassStr_8);
    }
#line 419 "html_format.m"
    html_format__StyleControl_12 = (MR_Word) html_format__V_23_23;
#line 420 "html_format.m"
    html_format__StyleElement_13 = (MR_Word) ((MR_Box) ((MR_String) "background"));
#line 421 "html_format.m"
    html_format__V_26_26 = (html_format__STATE_VARIABLE_HeaderGroupNumber_0_17 & (MR_Integer) 1);
#line 421 "html_format.m"
    html_format__succeeded = (html_format__V_26_26 == (MR_Integer) 0);
#line 423 "html_format.m"
    if (html_format__succeeded)
#line 422 "html_format.m"
      html_format__Colour_14 = (MR_String) "LightGrey";
#line 423 "html_format.m"
    else
#line 424 "html_format.m"
      html_format__Colour_14 = (MR_String) "White";
#line 426 "html_format.m"
    {
#line 426 "html_format.m"
      html_format__succeeded = mercury__set__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__ColumnClassStr_8)), html_format__STATE_VARIABLE_ColouredClassStrs_0_19);
    }
#line 428 "html_format.m"
    if (html_format__succeeded)
#line 427 "html_format.m"
      {
#line 427 "html_format.m"
        {
#line 427 "html_format.m"
          mercury__require__unexpected_3_p_0((MR_String) "html_format", (MR_String) "predicate \140html_format.update_style_control_map\'/7", (MR_String) "repeated table_column_class");
#line 427 "html_format.m"
          return;
        }
#line 427 "html_format.m"
      }
#line 428 "html_format.m"
    else
#line 429 "html_format.m"
      {
#line 429 "html_format.m"
        {
#line 429 "html_format.m"
          mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__ColumnClassStr_8)), html_format__STATE_VARIABLE_ColouredClassStrs_0_19, html_format__STATE_VARIABLE_ColouredClassStrs_20);
        }
#line 429 "html_format.m"
      }
#line 431 "html_format.m"
    {
#line 431 "html_format.m"
      html_format__succeeded = mercury__map__search_3_p_0((MR_Word) &html_format__html_format__type_ctor_info_style_control_0, (MR_Word) &html_format_scalar_common_1[0], html_format__STATE_VARIABLE_StyleControlMap_0_21, ((MR_Box) (html_format__StyleControl_12)), &html_format__conv0_StyleElementMap0_15);
    }
#line 431 "html_format.m"
    if (html_format__succeeded)
#line 431 "html_format.m"
      {
#line 431 "html_format.m"
        html_format__StyleElementMap0_15 = ((MR_Word) html_format__conv0_StyleElementMap0_15);
#line 431 "html_format.m"
        html_format__succeeded = MR_TRUE;
#line 431 "html_format.m"
      }
#line 434 "html_format.m"
    if (html_format__succeeded)
#line 432 "html_format.m"
      {
#line 432 "html_format.m"
        MR_Word html_format__StyleElementMap_16;

#line 432 "html_format.m"
        {
#line 432 "html_format.m"
          mercury__map__set_4_p_0((MR_Word) &html_format__html_format__type_ctor_info_style_element_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__StyleElement_13)), ((MR_Box) (html_format__Colour_14)), html_format__StyleElementMap0_15, &html_format__StyleElementMap_16);
        }
#line 433 "html_format.m"
        {
#line 433 "html_format.m"
          mercury__map__det_update_4_p_0((MR_Word) &html_format__html_format__type_ctor_info_style_control_0, (MR_Word) &html_format_scalar_common_1[0], ((MR_Box) (html_format__StyleControl_12)), ((MR_Box) (html_format__StyleElementMap_16)), html_format__STATE_VARIABLE_StyleControlMap_0_21, html_format__STATE_VARIABLE_StyleControlMap_22);
        }
#line 432 "html_format.m"
      }
#line 434 "html_format.m"
    else
#line 435 "html_format.m"
      {
#line 435 "html_format.m"
        MR_Word html_format__StyleElementMap_36;

#line 435 "html_format.m"
        {
#line 435 "html_format.m"
          html_format__StyleElementMap_36 = mercury__map__singleton_2_f_0((MR_Word) &html_format__html_format__type_ctor_info_style_element_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__StyleElement_13)), ((MR_Box) (html_format__Colour_14)));
        }
#line 436 "html_format.m"
        {
#line 436 "html_format.m"
          mercury__map__det_insert_4_p_0((MR_Word) &html_format__html_format__type_ctor_info_style_control_0, (MR_Word) &html_format_scalar_common_1[0], ((MR_Box) (html_format__StyleControl_12)), ((MR_Box) (html_format__StyleElementMap_36)), html_format__STATE_VARIABLE_StyleControlMap_0_21, html_format__STATE_VARIABLE_StyleControlMap_22);
        }
#line 435 "html_format.m"
      }
#line 438 "html_format.m"
    *html_format__STATE_VARIABLE_HeaderGroupNumber_18 = (html_format__STATE_VARIABLE_HeaderGroupNumber_0_17 + (MR_Integer) 1);
#line 418 "html_format.m"
  }
#line 413 "html_format.m"
}

#line 407 "html_format.m"
static void MR_CALL 
html_format__insert_column_into_classmap_4_p_0(
#line 407 "html_format.m"
  MR_String html_format__Value_5,
#line 407 "html_format.m"
  MR_Integer html_format__Key_6,
#line 407 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_Map_0_8,
#line 407 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_Map_9)
#line 407 "html_format.m"
{
#line 411 "html_format.m"
  {
#line 411 "html_format.m"
    MR_bool html_format__succeeded;

#line 411 "html_format.m"
    {
#line 411 "html_format.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, html_format__Key_6, ((MR_Box) (html_format__Value_5)), html_format__STATE_VARIABLE_Map_0_8, html_format__STATE_VARIABLE_Map_9);
#line 411 "html_format.m"
      return;
    }
#line 411 "html_format.m"
  }
#line 407 "html_format.m"
}

#line 385 "html_format.m"
static void MR_CALL 
html_format__table_header_num_rows_and_classmap_14_p_0_1(
#line 385 "html_format.m"
  MR_Box html_format__closure_arg,
#line 385 "html_format.m"
  MR_Box html_format__wrapper_arg_1,
#line 385 "html_format.m"
  MR_Box html_format__wrapper_arg_2,
#line 385 "html_format.m"
  MR_Box * html_format__wrapper_arg_3)
#line 385 "html_format.m"
{
#line 385 "html_format.m"
  {
#line 385 "html_format.m"
    MR_Box html_format__closure = html_format__closure_arg;
#line 385 "html_format.m"
    MR_Word html_format__conv0_STATE_VARIABLE_Map_9;

#line 385 "html_format.m"
    {
#line 385 "html_format.m"
      html_format__insert_column_into_classmap_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), html_format__closure, (MR_Integer) 3))), ((MR_Integer) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2), &html_format__conv0_STATE_VARIABLE_Map_9);
    }
#line 385 "html_format.m"
    *html_format__wrapper_arg_3 = ((MR_Box) (html_format__conv0_STATE_VARIABLE_Map_9));
#line 385 "html_format.m"
  }
#line 385 "html_format.m"
}

#line 365 "html_format.m"
static void MR_CALL 
html_format__table_header_num_rows_and_classmap_14_p_0(
#line 365 "html_format.m"
  MR_Word html_format__FormatInfo_15,
#line 365 "html_format.m"
  MR_Word html_format__HeaderGroup_16,
#line 365 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_NumRows_0_32,
#line 365 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_NumRows_33,
#line 365 "html_format.m"
  MR_Integer html_format__STATE_VARIABLE_ColumnNumber_0_34,
#line 365 "html_format.m"
  MR_Integer * html_format__STATE_VARIABLE_ColumnNumber_35,
#line 365 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_ClassMap_0_36,
#line 365 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_ClassMap_37,
#line 365 "html_format.m"
  MR_Integer html_format__STATE_VARIABLE_HeaderGroupNumber_0_38,
#line 365 "html_format.m"
  MR_Integer * html_format__STATE_VARIABLE_HeaderGroupNumber_39,
#line 365 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_ColouredClassStrs_0_40,
#line 365 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_ColouredClassStrs_41,
#line 365 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_42,
#line 365 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_43)
#line 365 "html_format.m"
{
#line 373 "html_format.m"
  {
#line 373 "html_format.m"
    MR_bool html_format__succeeded;
#line 373 "html_format.m"
    MR_Word html_format__ColumnTitles_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeaderGroup_16, (MR_Integer) 0)));
#line 373 "html_format.m"
    MR_Word html_format__ColumnClass_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeaderGroup_16, (MR_Integer) 1)))) & (MR_Integer) 15);
#line 373 "html_format.m"
    MR_Word html_format__MaybeColour_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeaderGroup_16, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
#line 373 "html_format.m"
    MR_String html_format__ColumnClassStr_26 = ((&html_format_vector_common_8[26 + html_format__ColumnClass_24]))->html_format__vector_common_type_8_0__vct_8_f_0;
#line 373 "html_format.m"
    MR_Integer html_format__NumSubCols_28;

#line 380 "html_format.m"
    if (((MR_tag((MR_Word) html_format__ColumnTitles_23)) == (MR_mktag((MR_Integer) 1))))
#line 381 "html_format.m"
      {
#line 381 "html_format.m"
        MR_Word html_format__SubTitles_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__ColumnTitles_23, (MR_Integer) 1)));
#line 381 "html_format.m"
        MR_Word html_format__V_45_45;
#line 381 "html_format.m"
        MR_Integer html_format__V_46_46;
#line 381 "html_format.m"
        MR_Integer html_format__V_48_48;
#line 381 "html_format.m"
        MR_String html_format__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(1), html_format__ColumnTitles_23, (MR_Integer) 0)));
#line 385 "html_format.m"
        MR_Box html_format__conv1_STATE_VARIABLE_ClassMap_37;

#line 382 "html_format.m"
        {
#line 382 "html_format.m"
          mercury__list__length_2_p_0((MR_Word) &display__display__type_ctor_info_table_data_0, html_format__SubTitles_30, &html_format__NumSubCols_28);
        }
#line 383 "html_format.m"
        *html_format__STATE_VARIABLE_NumRows_33 = (MR_Integer) 1;
#line 385 "html_format.m"
        {
#line 385 "html_format.m"
          html_format__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 385 "html_format.m"
          MR_hl_field(MR_mktag(0), html_format__V_45_45, 0) = ((MR_Box) (&html_format_scalar_common_4[1]));
#line 385 "html_format.m"
          MR_hl_field(MR_mktag(0), html_format__V_45_45, 1) = ((MR_Box) (html_format__table_header_num_rows_and_classmap_14_p_0_1));
#line 385 "html_format.m"
          MR_hl_field(MR_mktag(0), html_format__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 385 "html_format.m"
          MR_hl_field(MR_mktag(0), html_format__V_45_45, 3) = ((MR_Box) (html_format__ColumnClassStr_26));
#line 385 "html_format.m"
        }
#line 386 "html_format.m"
        html_format__V_48_48 = (html_format__STATE_VARIABLE_ColumnNumber_0_34 + html_format__NumSubCols_28);
#line 386 "html_format.m"
        html_format__V_46_46 = (html_format__V_48_48 - (MR_Integer) 1);
#line 385 "html_format.m"
        {
#line 385 "html_format.m"
          mercury__int__fold_up_5_p_0((MR_Word) &html_format_scalar_common_1[3], html_format__V_45_45, html_format__STATE_VARIABLE_ColumnNumber_0_34, html_format__V_46_46, ((MR_Box) (html_format__STATE_VARIABLE_ClassMap_0_36)), &html_format__conv1_STATE_VARIABLE_ClassMap_37);
        }
#line 385 "html_format.m"
        *html_format__STATE_VARIABLE_ClassMap_37 = ((MR_Word) html_format__conv1_STATE_VARIABLE_ClassMap_37);
#line 381 "html_format.m"
      }
#line 380 "html_format.m"
    else
#line 377 "html_format.m"
      {
#line 378 "html_format.m"
        html_format__NumSubCols_28 = (MR_Integer) 1;
#line 379 "html_format.m"
        {
#line 379 "html_format.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, html_format__STATE_VARIABLE_ColumnNumber_0_34, ((MR_Box) (html_format__ColumnClassStr_26)), html_format__STATE_VARIABLE_ClassMap_0_36, html_format__STATE_VARIABLE_ClassMap_37);
        }
#line 377 "html_format.m"
        *html_format__STATE_VARIABLE_NumRows_33 = html_format__STATE_VARIABLE_NumRows_0_32;
#line 377 "html_format.m"
      }
#line 388 "html_format.m"
    *html_format__STATE_VARIABLE_ColumnNumber_35 = (html_format__STATE_VARIABLE_ColumnNumber_0_34 + html_format__NumSubCols_28);
#line 7988 "html_format.c"
#line 7989 "html_format.c"
    switch (html_format__MaybeColour_25) {
#line 7991 "html_format.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 7993 "html_format.c"
      case (MR_Integer) 1:
#line 403 "html_format.m"
        {
#line 403 "html_format.m"
          html_format__update_style_control_map_7_p_0(html_format__ColumnClassStr_26, html_format__STATE_VARIABLE_HeaderGroupNumber_0_38, html_format__STATE_VARIABLE_HeaderGroupNumber_39, html_format__STATE_VARIABLE_ColouredClassStrs_0_40, html_format__STATE_VARIABLE_ColouredClassStrs_41, html_format__STATE_VARIABLE_StyleControlMap_0_42, html_format__STATE_VARIABLE_StyleControlMap_43);
#line 403 "html_format.m"
          return;
        }
#line 8002 "html_format.c"
        break;
#line 8004 "html_format.c"
      case (MR_Integer) 2:
#line 8006 "html_format.c"
        {
#line 8008 "html_format.c"
          MR_Word html_format__Colour_67 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_15, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 397 "html_format.m"
          MR_Word html_format__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_15, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 397 "html_format.m"
          MR_Word html_format__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_15, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 397 "html_format.m"
          MR_String html_format__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_15, (MR_Integer) 1)));
#line 397 "html_format.m"
          MR_String html_format__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_15, (MR_Integer) 2)));
#line 397 "html_format.m"
          MR_String html_format__V_59_59 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_15, (MR_Integer) 3)));

#line 401 "html_format.m"
#line 401 "html_format.m"
          switch (html_format__Colour_67) {
#line 401 "html_format.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 401 "html_format.m"
            case (MR_Integer) 0:
#line 403 "html_format.m"
              {
#line 403 "html_format.m"
                html_format__update_style_control_map_7_p_0(html_format__ColumnClassStr_26, html_format__STATE_VARIABLE_HeaderGroupNumber_0_38, html_format__STATE_VARIABLE_HeaderGroupNumber_39, html_format__STATE_VARIABLE_ColouredClassStrs_0_40, html_format__STATE_VARIABLE_ColouredClassStrs_41, html_format__STATE_VARIABLE_StyleControlMap_0_42, html_format__STATE_VARIABLE_StyleControlMap_43);
#line 403 "html_format.m"
                return;
              }
#line 401 "html_format.m"
              break;
#line 401 "html_format.m"
            case (MR_Integer) 1:
#line 400 "html_format.m"
              {
#line 400 "html_format.m"
                *html_format__STATE_VARIABLE_HeaderGroupNumber_39 = html_format__STATE_VARIABLE_HeaderGroupNumber_0_38;
#line 400 "html_format.m"
                *html_format__STATE_VARIABLE_ColouredClassStrs_41 = html_format__STATE_VARIABLE_ColouredClassStrs_0_40;
#line 400 "html_format.m"
                *html_format__STATE_VARIABLE_StyleControlMap_43 = html_format__STATE_VARIABLE_StyleControlMap_0_42;
#line 400 "html_format.m"
              }
#line 401 "html_format.m"
              break;
#line 401 "html_format.m"
          }
#line 8053 "html_format.c"
        }
#line 8055 "html_format.c"
        break;
#line 8057 "html_format.c"
      case (MR_Integer) 0:
#line 8059 "html_format.c"
        {
#line 400 "html_format.m"
          *html_format__STATE_VARIABLE_HeaderGroupNumber_39 = html_format__STATE_VARIABLE_HeaderGroupNumber_0_38;
#line 400 "html_format.m"
          *html_format__STATE_VARIABLE_ColouredClassStrs_41 = html_format__STATE_VARIABLE_ColouredClassStrs_0_40;
#line 400 "html_format.m"
          *html_format__STATE_VARIABLE_StyleControlMap_43 = html_format__STATE_VARIABLE_StyleControlMap_0_42;
#line 8067 "html_format.c"
        }
#line 8069 "html_format.c"
        break;
#line 8071 "html_format.c"
    }
#line 373 "html_format.m"
  }
#line 365 "html_format.m"
}

#line 345 "html_format.m"
static void MR_CALL 
html_format__table_data_to_th_html_6_p_0(
#line 345 "html_format.m"
  MR_Word html_format__FormatInfo_7,
#line 345 "html_format.m"
  MR_Word html_format__ColumnClass_8,
#line 345 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_16,
#line 345 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_17,
#line 345 "html_format.m"
  MR_Word html_format__TableData_10,
#line 345 "html_format.m"
  MR_Word * html_format__HTML_11)
#line 345 "html_format.m"
{
#line 350 "html_format.m"
  {
#line 350 "html_format.m"
    MR_bool html_format__succeeded;
#line 350 "html_format.m"
    MR_Word html_format__TypeCtorInfo_11_38;
#line 350 "html_format.m"
    MR_String html_format__ColumnClassStr_12 = ((&html_format_vector_common_8[13 + html_format__ColumnClass_8]))->html_format__vector_common_type_8_0__vct_8_f_0;
#line 350 "html_format.m"
    MR_Word html_format__TableDataHTML_13;
#line 350 "html_format.m"
    MR_String html_format__StartTag_14;
#line 350 "html_format.m"
    MR_String html_format__V_23_23;
#line 350 "html_format.m"
    MR_String html_format__V_30_30;
#line 350 "html_format.m"
    MR_Word html_format__V_35_35;
#line 350 "html_format.m"
    MR_Word html_format__V_36_36;
#line 350 "html_format.m"
    MR_Word html_format__V_37_37;

#line 352 "html_format.m"
    {
#line 352 "html_format.m"
      html_format__TableDataHTML_13 = html_format__table_data_to_html_2_f_0(html_format__FormatInfo_7, html_format__TableData_10);
    }
#line 353 "html_format.m"
    {
#line 353 "html_format.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &html_format_scalar_common_6[0], html_format__ColumnClassStr_12, &html_format__V_23_23);
    }
#line 353 "html_format.m"
    {
#line 353 "html_format.m"
      html_format__V_30_30 = mercury__string__f_43_43_2_f_0(html_format__V_23_23, (MR_String) "\">");
    }
#line 353 "html_format.m"
    {
#line 353 "html_format.m"
      html_format__StartTag_14 = mercury__string__f_43_43_2_f_0((MR_String) "<th class=\"", html_format__V_30_30);
    }
#line 8138 "html_format.c"
    html_format__TypeCtorInfo_11_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 896 "html_format.m"
    {
#line 896 "html_format.m"
      html_format__V_35_35 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__StartTag_14)));
    }
#line 896 "html_format.m"
    {
#line 896 "html_format.m"
      html_format__V_37_37 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "</th>\n")));
    }
#line 884 "html_format.m"
    {
#line 884 "html_format.m"
      html_format__V_36_36 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_38, html_format__TableDataHTML_13, html_format__V_37_37);
    }
#line 884 "html_format.m"
    {
#line 884 "html_format.m"
      *html_format__HTML_11 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_38, html_format__V_35_35, html_format__V_36_36);
    }
#line 350 "html_format.m"
    *html_format__STATE_VARIABLE_StyleControlMap_17 = html_format__STATE_VARIABLE_StyleControlMap_0_16;
#line 350 "html_format.m"
  }
#line 345 "html_format.m"
}

#line 327 "html_format.m"
static void MR_CALL 
html_format__table_header_group_to_html_row_2_5_p_0(
#line 327 "html_format.m"
  MR_Word html_format__FormatInfo_6,
#line 327 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_16,
#line 327 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_17,
#line 327 "html_format.m"
  MR_Word html_format__HeaderGroup_8,
#line 327 "html_format.m"
  MR_Word * html_format__HTML_9)
#line 327 "html_format.m"
{
#line 332 "html_format.m"
  {
#line 332 "html_format.m"
    MR_bool html_format__succeeded;
#line 332 "html_format.m"
    MR_Word html_format__Titles_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeaderGroup_8, (MR_Integer) 0)));
#line 332 "html_format.m"
    MR_Word html_format__ColumnClass_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeaderGroup_8, (MR_Integer) 1)))) & (MR_Integer) 15);
#line 333 "html_format.m"
    MR_Word html_format___SetStyle_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeaderGroup_8, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);

#line 337 "html_format.m"
    if (((MR_tag((MR_Word) html_format__Titles_10)) == (MR_mktag((MR_Integer) 1))))
#line 338 "html_format.m"
      {
#line 338 "html_format.m"
        MR_Word html_format__SubTitleCells_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__Titles_10, (MR_Integer) 1)));
#line 338 "html_format.m"
        MR_Word html_format__V_31_31;
#line 338 "html_format.m"
        MR_String html_format__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), html_format__Titles_10, (MR_Integer) 0)));

#line 888 "html_format.m"
        {
#line 888 "html_format.m"
          html_format__V_31_31 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 920 "html_format.m"
        if ((html_format__SubTitleCells_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 920 "html_format.m"
          {
#line 888 "html_format.m"
            {
#line 888 "html_format.m"
              *html_format__HTML_9 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
#line 920 "html_format.m"
            *html_format__STATE_VARIABLE_StyleControlMap_17 = html_format__STATE_VARIABLE_StyleControlMap_0_16;
#line 920 "html_format.m"
          }
#line 920 "html_format.m"
        else
#line 921 "html_format.m"
          {
#line 921 "html_format.m"
            MR_Word html_format__Head_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__SubTitleCells_15, (MR_Integer) 0)));
#line 921 "html_format.m"
            MR_Word html_format__Tail_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__SubTitleCells_15, (MR_Integer) 1)));
#line 921 "html_format.m"
            MR_Word html_format__HeadHTML_46;
#line 921 "html_format.m"
            MR_Word html_format__STATE_VARIABLE_StyleControlMap_21_49;

#line 922 "html_format.m"
            {
#line 922 "html_format.m"
              html_format__table_data_to_th_html_6_p_0(html_format__FormatInfo_6, html_format__ColumnClass_11, html_format__STATE_VARIABLE_StyleControlMap_0_16, &html_format__STATE_VARIABLE_StyleControlMap_21_49, html_format__Head_43, &html_format__HeadHTML_46);
            }
#line 923 "html_format.m"
            {
#line 923 "html_format.m"
              html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_97_99_99_95_95_104_111_49_55_95_95_91_52_93_95_48_7_p_0(html_format__FormatInfo_6, html_format__ColumnClass_11, html_format__V_31_31, html_format__STATE_VARIABLE_StyleControlMap_21_49, html_format__STATE_VARIABLE_StyleControlMap_17, html_format__Tail_44, html_format__HeadHTML_46, html_format__HTML_9);
#line 923 "html_format.m"
              return;
            }
#line 921 "html_format.m"
          }
#line 338 "html_format.m"
      }
#line 337 "html_format.m"
    else
#line 335 "html_format.m"
      {
#line 888 "html_format.m"
        {
#line 888 "html_format.m"
          *html_format__HTML_9 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 335 "html_format.m"
        *html_format__STATE_VARIABLE_StyleControlMap_17 = html_format__STATE_VARIABLE_StyleControlMap_0_16;
#line 335 "html_format.m"
      }
#line 332 "html_format.m"
  }
#line 327 "html_format.m"
}

#line 292 "html_format.m"
static void MR_CALL 
html_format__table_header_group_to_html_row_1_6_p_0(
#line 292 "html_format.m"
  MR_Word html_format__FormatInfo_7,
#line 292 "html_format.m"
  MR_Word html_format__HeaderNumRows_8,
#line 292 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_25,
#line 292 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_26,
#line 292 "html_format.m"
  MR_Word html_format__HeaderGroup_10,
#line 292 "html_format.m"
  MR_Word * html_format__HTML_11)
#line 292 "html_format.m"
{
#line 297 "html_format.m"
  {
#line 297 "html_format.m"
    MR_bool html_format__succeeded;
#line 297 "html_format.m"
    MR_Word html_format__TypeCtorInfo_11_74;
#line 297 "html_format.m"
    MR_Word html_format__Titles_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeaderGroup_10, (MR_Integer) 0)));
#line 297 "html_format.m"
    MR_Word html_format__ColumnClass_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeaderGroup_10, (MR_Integer) 1)))) & (MR_Integer) 15);
#line 297 "html_format.m"
    MR_String html_format__RowSpan_16;
#line 297 "html_format.m"
    MR_String html_format__ColumnSpan_17;
#line 297 "html_format.m"
    MR_Word html_format__ContentsHTML_18;
#line 297 "html_format.m"
    MR_String html_format__ColumnClassStr_22;
#line 297 "html_format.m"
    MR_String html_format__StartTag_23;
#line 297 "html_format.m"
    MR_String html_format__V_37_37;
#line 297 "html_format.m"
    MR_Word html_format__V_43_43;
#line 297 "html_format.m"
    MR_String html_format__V_44_44;
#line 297 "html_format.m"
    MR_String html_format__V_46_46;
#line 297 "html_format.m"
    MR_String html_format__V_47_47;
#line 297 "html_format.m"
    MR_String html_format__V_54_54;
#line 297 "html_format.m"
    MR_String html_format__V_56_56;
#line 297 "html_format.m"
    MR_String html_format__V_57_57;
#line 297 "html_format.m"
    MR_String html_format__V_64_64;
#line 297 "html_format.m"
    MR_Word html_format__V_71_71;
#line 297 "html_format.m"
    MR_Word html_format__V_72_72;
#line 297 "html_format.m"
    MR_Word html_format__V_73_73;
#line 298 "html_format.m"
    MR_Word html_format___SetStyle_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeaderGroup_10, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);

#line 310 "html_format.m"
    if (((MR_tag((MR_Word) html_format__Titles_12)) == (MR_mktag((MR_Integer) 1))))
#line 311 "html_format.m"
      {
#line 311 "html_format.m"
        MR_String html_format__MainTitle_19 = ((MR_String) (MR_hl_field(MR_mktag(1), html_format__Titles_12, (MR_Integer) 0)));
#line 311 "html_format.m"
        MR_Word html_format__SubTitleCells_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__Titles_12, (MR_Integer) 1)));
#line 311 "html_format.m"
        MR_Integer html_format__NumSubTitleCells_21;

#line 312 "html_format.m"
        html_format__RowSpan_16 = (MR_String) "1";
#line 313 "html_format.m"
        {
#line 313 "html_format.m"
          mercury__list__length_2_p_0((MR_Word) &display__display__type_ctor_info_table_data_0, html_format__SubTitleCells_20, &html_format__NumSubTitleCells_21);
        }
#line 314 "html_format.m"
        {
#line 314 "html_format.m"
          html_format__ColumnSpan_17 = mercury__string__int_to_string_1_f_0(html_format__NumSubTitleCells_21);
        }
#line 896 "html_format.m"
        {
#line 896 "html_format.m"
          html_format__ContentsHTML_18 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__MainTitle_19)));
        }
#line 311 "html_format.m"
      }
#line 310 "html_format.m"
    else
#line 300 "html_format.m"
      {
#line 300 "html_format.m"
        MR_Word html_format__Title_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Titles_12, (MR_Integer) 0)));

#line 304 "html_format.m"
#line 304 "html_format.m"
        switch (html_format__HeaderNumRows_8) {
#line 304 "html_format.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 304 "html_format.m"
          case (MR_Integer) 0:
#line 303 "html_format.m"
            html_format__RowSpan_16 = (MR_String) "1";
#line 304 "html_format.m"
            break;
#line 304 "html_format.m"
          case (MR_Integer) 1:
#line 306 "html_format.m"
            html_format__RowSpan_16 = (MR_String) "2";
#line 304 "html_format.m"
            break;
#line 304 "html_format.m"
        }
#line 308 "html_format.m"
        html_format__ColumnSpan_17 = (MR_String) "1";
#line 309 "html_format.m"
        {
#line 309 "html_format.m"
          html_format__ContentsHTML_18 = html_format__table_data_to_html_2_f_0(html_format__FormatInfo_7, html_format__Title_15);
        }
#line 300 "html_format.m"
      }
#line 570 "html_format.m"
    html_format__ColumnClassStr_22 = ((&html_format_vector_common_8[0 + html_format__ColumnClass_13]))->html_format__vector_common_type_8_0__vct_8_f_0;
#line 8400 "html_format.c"
    html_format__V_43_43 = (MR_Word) &html_format_scalar_common_6[0];
#line 321 "html_format.m"
    {
#line 321 "html_format.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(html_format__V_43_43, html_format__ColumnClassStr_22, &html_format__V_37_37);
    }
#line 319 "html_format.m"
    {
#line 319 "html_format.m"
      html_format__V_44_44 = mercury__string__f_43_43_2_f_0(html_format__V_37_37, (MR_String) "\">");
    }
#line 319 "html_format.m"
    {
#line 319 "html_format.m"
      html_format__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "\" class=\"", html_format__V_44_44);
    }
#line 321 "html_format.m"
    {
#line 321 "html_format.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(html_format__V_43_43, html_format__ColumnSpan_17, &html_format__V_47_47);
    }
#line 319 "html_format.m"
    {
#line 319 "html_format.m"
      html_format__V_54_54 = mercury__string__f_43_43_2_f_0(html_format__V_47_47, html_format__V_46_46);
    }
#line 319 "html_format.m"
    {
#line 319 "html_format.m"
      html_format__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) "\" colspan=\"", html_format__V_54_54);
    }
#line 321 "html_format.m"
    {
#line 321 "html_format.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(html_format__V_43_43, html_format__RowSpan_16, &html_format__V_57_57);
    }
#line 319 "html_format.m"
    {
#line 319 "html_format.m"
      html_format__V_64_64 = mercury__string__f_43_43_2_f_0(html_format__V_57_57, html_format__V_56_56);
    }
#line 319 "html_format.m"
    {
#line 319 "html_format.m"
      html_format__StartTag_23 = mercury__string__f_43_43_2_f_0((MR_String) "<th rowspan=\"", html_format__V_64_64);
    }
#line 8447 "html_format.c"
    html_format__TypeCtorInfo_11_74 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 896 "html_format.m"
    {
#line 896 "html_format.m"
      html_format__V_71_71 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__StartTag_23)));
    }
#line 896 "html_format.m"
    {
#line 896 "html_format.m"
      html_format__V_73_73 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "</th>\n")));
    }
#line 884 "html_format.m"
    {
#line 884 "html_format.m"
      html_format__V_72_72 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_74, html_format__ContentsHTML_18, html_format__V_73_73);
    }
#line 884 "html_format.m"
    {
#line 884 "html_format.m"
      *html_format__HTML_11 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_74, html_format__V_71_71, html_format__V_72_72);
    }
#line 297 "html_format.m"
    *html_format__STATE_VARIABLE_StyleControlMap_26 = html_format__STATE_VARIABLE_StyleControlMap_0_25;
#line 297 "html_format.m"
  }
#line 292 "html_format.m"
}

#line 249 "html_format.m"
static void MR_CALL 
html_format__table_to_html_5_p_0_1(
#line 249 "html_format.m"
  MR_Box html_format__closure_arg,
#line 249 "html_format.m"
  MR_Box html_format__wrapper_arg_1,
#line 249 "html_format.m"
  MR_Box html_format__wrapper_arg_2,
#line 249 "html_format.m"
  MR_Box * html_format__wrapper_arg_3,
#line 249 "html_format.m"
  MR_Box html_format__wrapper_arg_4,
#line 249 "html_format.m"
  MR_Box * html_format__wrapper_arg_5,
#line 249 "html_format.m"
  MR_Box html_format__wrapper_arg_6,
#line 249 "html_format.m"
  MR_Box * html_format__wrapper_arg_7,
#line 249 "html_format.m"
  MR_Box html_format__wrapper_arg_8,
#line 249 "html_format.m"
  MR_Box * html_format__wrapper_arg_9,
#line 249 "html_format.m"
  MR_Box html_format__wrapper_arg_10,
#line 249 "html_format.m"
  MR_Box * html_format__wrapper_arg_11,
#line 249 "html_format.m"
  MR_Box html_format__wrapper_arg_12,
#line 249 "html_format.m"
  MR_Box * html_format__wrapper_arg_13)
#line 249 "html_format.m"
{
#line 249 "html_format.m"
  {
#line 249 "html_format.m"
    MR_Box html_format__closure = html_format__closure_arg;
#line 249 "html_format.m"
    MR_Word html_format__conv5_STATE_VARIABLE_NumRows_33;
#line 249 "html_format.m"
    MR_Integer html_format__conv4_STATE_VARIABLE_ColumnNumber_35;
#line 249 "html_format.m"
    MR_Word html_format__conv3_STATE_VARIABLE_ClassMap_37;
#line 249 "html_format.m"
    MR_Integer html_format__conv2_STATE_VARIABLE_HeaderGroupNumber_39;
#line 249 "html_format.m"
    MR_Word html_format__conv1_STATE_VARIABLE_ColouredClassStrs_41;
#line 249 "html_format.m"
    MR_Word html_format__conv0_STATE_VARIABLE_StyleControlMap_43;

#line 249 "html_format.m"
    {
#line 249 "html_format.m"
      html_format__table_header_num_rows_and_classmap_14_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), html_format__closure, (MR_Integer) 3))), ((MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2), &html_format__conv5_STATE_VARIABLE_NumRows_33, ((MR_Integer) html_format__wrapper_arg_4), &html_format__conv4_STATE_VARIABLE_ColumnNumber_35, ((MR_Word) html_format__wrapper_arg_6), &html_format__conv3_STATE_VARIABLE_ClassMap_37, ((MR_Integer) html_format__wrapper_arg_8), &html_format__conv2_STATE_VARIABLE_HeaderGroupNumber_39, ((MR_Word) html_format__wrapper_arg_10), &html_format__conv1_STATE_VARIABLE_ColouredClassStrs_41, ((MR_Word) html_format__wrapper_arg_12), &html_format__conv0_STATE_VARIABLE_StyleControlMap_43);
    }
#line 249 "html_format.m"
    *html_format__wrapper_arg_3 = ((MR_Box) (html_format__conv5_STATE_VARIABLE_NumRows_33));
#line 249 "html_format.m"
    *html_format__wrapper_arg_5 = ((MR_Box) (html_format__conv4_STATE_VARIABLE_ColumnNumber_35));
#line 249 "html_format.m"
    *html_format__wrapper_arg_7 = ((MR_Box) (html_format__conv3_STATE_VARIABLE_ClassMap_37));
#line 249 "html_format.m"
    *html_format__wrapper_arg_9 = ((MR_Box) (html_format__conv2_STATE_VARIABLE_HeaderGroupNumber_39));
#line 249 "html_format.m"
    *html_format__wrapper_arg_11 = ((MR_Box) (html_format__conv1_STATE_VARIABLE_ColouredClassStrs_41));
#line 249 "html_format.m"
    *html_format__wrapper_arg_13 = ((MR_Box) (html_format__conv0_STATE_VARIABLE_StyleControlMap_43));
#line 249 "html_format.m"
  }
#line 249 "html_format.m"
}

#line 235 "html_format.m"
static void MR_CALL 
html_format__table_to_html_5_p_0(
#line 235 "html_format.m"
  MR_Word html_format__FormatInfo_6,
#line 235 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_34,
#line 235 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_35,
#line 235 "html_format.m"
  MR_Word html_format__Table_8,
#line 235 "html_format.m"
  MR_Word * html_format__HTML_9)
#line 235 "html_format.m"
{
#line 239 "html_format.m"
  {
#line 239 "html_format.m"
    MR_bool html_format__succeeded;
#line 239 "html_format.m"
    MR_Word html_format__Class_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Table_8, (MR_Integer) 0)));
#line 239 "html_format.m"
    MR_Integer html_format__NumColumns_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), html_format__Table_8, (MR_Integer) 1)));
#line 239 "html_format.m"
    MR_Word html_format__MaybeHeader_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Table_8, (MR_Integer) 2)));
#line 239 "html_format.m"
    MR_Word html_format__BodyRows_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Table_8, (MR_Integer) 3)));
#line 239 "html_format.m"
    MR_String html_format__ClassStr_14;
#line 239 "html_format.m"
    MR_String html_format__TableStartTag_15;
#line 239 "html_format.m"
    MR_Word html_format__MaybeClassMap_23;
#line 239 "html_format.m"
    MR_Word html_format__HeaderHTML_30;
#line 239 "html_format.m"
    MR_Word html_format__BodyRowsHTML_31;
#line 239 "html_format.m"
    MR_Word html_format__WrappedHeaderHTML_32;
#line 239 "html_format.m"
    MR_Word html_format__WrappedBodyHTML_33;
#line 239 "html_format.m"
    MR_String html_format__V_37_37;
#line 239 "html_format.m"
    MR_Word html_format__STATE_VARIABLE_StyleControlMap_52_52;
#line 239 "html_format.m"
    MR_Word html_format__V_69_69;

#line 242 "html_format.m"
    {
#line 242 "html_format.m"
      html_format__ClassStr_14 = html_format__table_class_to_string_2_f_0(html_format__FormatInfo_6, html_format__Class_10);
    }
#line 243 "html_format.m"
    {
#line 243 "html_format.m"
      html_format__V_37_37 = mercury__string__f_43_43_2_f_0(html_format__ClassStr_14, (MR_String) "\">\n");
    }
#line 243 "html_format.m"
    {
#line 243 "html_format.m"
      html_format__TableStartTag_15 = mercury__string__f_43_43_2_f_0((MR_String) "<table class=\"", html_format__V_37_37);
    }
#line 272 "html_format.m"
    if ((html_format__MaybeHeader_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 273 "html_format.m"
      {
#line 274 "html_format.m"
        html_format__MaybeClassMap_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 275 "html_format.m"
        {
#line 275 "html_format.m"
          html_format__HeaderHTML_30 = html_format__empty_html_0_f_0();
        }
#line 273 "html_format.m"
        html_format__STATE_VARIABLE_StyleControlMap_52_52 = html_format__STATE_VARIABLE_StyleControlMap_0_34;
#line 273 "html_format.m"
      }
#line 272 "html_format.m"
    else
#line 248 "html_format.m"
      {
#line 248 "html_format.m"
        MR_Word html_format__TypeCtorInfo_83_83;
#line 248 "html_format.m"
        MR_Word html_format__TypeCtorInfo_84_84;
#line 248 "html_format.m"
        MR_Word html_format__THCells_17;
#line 248 "html_format.m"
        MR_Word html_format__THNumRows_18;
#line 248 "html_format.m"
        MR_Word html_format__ClassMap_20;
#line 248 "html_format.m"
        MR_Word html_format__InnerHeaderRowOneHTML_24;
#line 248 "html_format.m"
        MR_Word html_format__HeaderRowOneHTML_25;
#line 248 "html_format.m"
        MR_Word html_format__HeaderRowTwoHTML_26;
#line 248 "html_format.m"
        MR_String html_format__InnerHeaderRowThree_28;
#line 248 "html_format.m"
        MR_Word html_format__HeaderRowThreeHTML_29;
#line 248 "html_format.m"
        MR_Word html_format__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), html_format__MaybeHeader_12, (MR_Integer) 0)));
#line 248 "html_format.m"
        MR_Word html_format__V_40_40;
#line 248 "html_format.m"
        MR_Word html_format__V_43_43;
#line 248 "html_format.m"
        MR_Word html_format__V_45_45;
#line 248 "html_format.m"
        MR_Word html_format__STATE_VARIABLE_StyleControlMap_46_46;
#line 248 "html_format.m"
        MR_Word html_format__STATE_VARIABLE_StyleControlMap_48_48;
#line 248 "html_format.m"
        MR_Word html_format__V_61_61;
#line 248 "html_format.m"
        MR_Word html_format__V_62_62;
#line 248 "html_format.m"
        MR_String html_format__V_105_105;
#line 248 "html_format.m"
        MR_String html_format__V_112_112;
#line 249 "html_format.m"
        MR_Integer html_format__V_19_19;
#line 249 "html_format.m"
        MR_Integer html_format__V_21_21;
#line 249 "html_format.m"
        MR_Word html_format__V_22_22;
#line 249 "html_format.m"
        MR_Box html_format__conv11_THNumRows_18;
#line 249 "html_format.m"
        MR_Box html_format__conv10_V_19_19;
#line 249 "html_format.m"
        MR_Box html_format__conv9_ClassMap_20;
#line 249 "html_format.m"
        MR_Box html_format__conv8_V_21_21;
#line 249 "html_format.m"
        MR_Box html_format__conv7_V_22_22;
#line 249 "html_format.m"
        MR_Box html_format__conv6_STATE_VARIABLE_StyleControlMap_46_46;

#line 248 "html_format.m"
        html_format__THCells_17 = (MR_Word) html_format__V_39_39;
#line 249 "html_format.m"
        {
#line 249 "html_format.m"
          html_format__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 249 "html_format.m"
          MR_hl_field(MR_mktag(0), html_format__V_40_40, 0) = ((MR_Box) (&html_format_scalar_common_7[0]));
#line 249 "html_format.m"
          MR_hl_field(MR_mktag(0), html_format__V_40_40, 1) = ((MR_Box) (html_format__table_to_html_5_p_0_1));
#line 249 "html_format.m"
          MR_hl_field(MR_mktag(0), html_format__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 249 "html_format.m"
          MR_hl_field(MR_mktag(0), html_format__V_40_40, 3) = ((MR_Box) (html_format__FormatInfo_6));
#line 249 "html_format.m"
        }
#line 8705 "html_format.c"
        html_format__TypeCtorInfo_83_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 8707 "html_format.c"
        html_format__TypeCtorInfo_84_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 250 "html_format.m"
        {
#line 250 "html_format.m"
          html_format__V_43_43 = mercury__map__init_0_f_0(html_format__TypeCtorInfo_83_83, html_format__TypeCtorInfo_84_84);
        }
#line 251 "html_format.m"
        {
#line 251 "html_format.m"
          html_format__V_45_45 = mercury__set__init_0_f_0(html_format__TypeCtorInfo_84_84);
        }
#line 249 "html_format.m"
        {
#line 249 "html_format.m"
          mercury__list__foldl6_14_p_0((MR_Word) &display__display__type_ctor_info_table_header_group_0, (MR_Word) &html_format__html_format__type_ctor_info_table_header_rows_0, html_format__TypeCtorInfo_83_83, (MR_Word) &html_format_scalar_common_1[3], html_format__TypeCtorInfo_83_83, (MR_Word) &html_format_scalar_common_2[1], (MR_Word) &html_format_scalar_common_1[4], html_format__V_40_40, html_format__THCells_17, ((MR_Box) ((MR_Integer) 0)), &html_format__conv11_THNumRows_18, ((MR_Box) ((MR_Integer) 0)), &html_format__conv10_V_19_19, ((MR_Box) (html_format__V_43_43)), &html_format__conv9_ClassMap_20, ((MR_Box) ((MR_Integer) 0)), &html_format__conv8_V_21_21, ((MR_Box) (html_format__V_45_45)), &html_format__conv7_V_22_22, ((MR_Box) (html_format__STATE_VARIABLE_StyleControlMap_0_34)), &html_format__conv6_STATE_VARIABLE_StyleControlMap_46_46);
        }
#line 249 "html_format.m"
        html_format__THNumRows_18 = ((MR_Word) html_format__conv11_THNumRows_18);
#line 249 "html_format.m"
        html_format__V_19_19 = ((MR_Integer) html_format__conv10_V_19_19);
#line 249 "html_format.m"
        html_format__ClassMap_20 = ((MR_Word) html_format__conv9_ClassMap_20);
#line 249 "html_format.m"
        html_format__V_21_21 = ((MR_Integer) html_format__conv8_V_21_21);
#line 249 "html_format.m"
        html_format__V_22_22 = ((MR_Word) html_format__conv7_V_22_22);
#line 249 "html_format.m"
        html_format__STATE_VARIABLE_StyleControlMap_46_46 = ((MR_Word) html_format__conv6_STATE_VARIABLE_StyleControlMap_46_46);
#line 252 "html_format.m"
        {
#line 252 "html_format.m"
          html_format__MaybeClassMap_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 252 "html_format.m"
          MR_hl_field(MR_mktag(1), html_format__MaybeClassMap_23, 0) = ((MR_Box) (html_format__ClassMap_20));
#line 252 "html_format.m"
        }
#line 253 "html_format.m"
        {
#line 253 "html_format.m"
          html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_54_95_95_91_51_93_95_48_5_p_0(html_format__FormatInfo_6, html_format__THNumRows_18, html_format__STATE_VARIABLE_StyleControlMap_46_46, &html_format__STATE_VARIABLE_StyleControlMap_48_48, html_format__THCells_17, &html_format__InnerHeaderRowOneHTML_24);
        }
#line 256 "html_format.m"
        {
#line 256 "html_format.m"
          html_format__HeaderRowOneHTML_25 = html_format__wrap_tags_3_f_0((MR_String) "<tr>\n", (MR_String) "</tr>\n", html_format__InnerHeaderRowOneHTML_24);
        }
#line 260 "html_format.m"
#line 260 "html_format.m"
        switch (html_format__THNumRows_18) {
#line 260 "html_format.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 260 "html_format.m"
          case (MR_Integer) 0:
#line 258 "html_format.m"
            {
#line 259 "html_format.m"
              {
#line 259 "html_format.m"
                html_format__HeaderRowTwoHTML_26 = html_format__empty_html_0_f_0();
              }
#line 258 "html_format.m"
              html_format__STATE_VARIABLE_StyleControlMap_52_52 = html_format__STATE_VARIABLE_StyleControlMap_48_48;
#line 258 "html_format.m"
            }
#line 260 "html_format.m"
            break;
#line 260 "html_format.m"
          case (MR_Integer) 1:
#line 261 "html_format.m"
            {
#line 261 "html_format.m"
              MR_Word html_format__InnerHeaderRowTwoHTML_27;

#line 262 "html_format.m"
              {
#line 262 "html_format.m"
                html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_53_95_95_91_50_93_95_48_5_p_0(html_format__FormatInfo_6, html_format__STATE_VARIABLE_StyleControlMap_48_48, &html_format__STATE_VARIABLE_StyleControlMap_52_52, html_format__THCells_17, &html_format__InnerHeaderRowTwoHTML_27);
              }
#line 265 "html_format.m"
              {
#line 265 "html_format.m"
                html_format__HeaderRowTwoHTML_26 = html_format__wrap_tags_3_f_0((MR_String) "<tr>\n", (MR_String) "</tr>\n", html_format__InnerHeaderRowTwoHTML_27);
              }
#line 261 "html_format.m"
            }
#line 260 "html_format.m"
            break;
#line 260 "html_format.m"
        }
#line 268 "html_format.m"
        {
#line 268 "html_format.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &html_format_scalar_common_6[0], html_format__NumColumns_11, &html_format__V_105_105);
        }
#line 268 "html_format.m"
        {
#line 268 "html_format.m"
          html_format__V_112_112 = mercury__string__f_43_43_2_f_0(html_format__V_105_105, (MR_String) "\"/>");
        }
#line 268 "html_format.m"
        {
#line 268 "html_format.m"
          html_format__InnerHeaderRowThree_28 = mercury__string__f_43_43_2_f_0((MR_String) "<td colspan=\"", html_format__V_112_112);
        }
#line 270 "html_format.m"
        {
#line 270 "html_format.m"
          html_format__V_61_61 = html_format__str_to_html_1_f_0(html_format__InnerHeaderRowThree_28);
        }
#line 270 "html_format.m"
        {
#line 270 "html_format.m"
          html_format__HeaderRowThreeHTML_29 = html_format__wrap_tags_3_f_0((MR_String) "<tr>", (MR_String) "</tr>", html_format__V_61_61);
        }
#line 271 "html_format.m"
        {
#line 271 "html_format.m"
          html_format__V_62_62 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_84_84, html_format__HeaderRowTwoHTML_26, html_format__HeaderRowThreeHTML_29);
        }
#line 271 "html_format.m"
        {
#line 271 "html_format.m"
          html_format__HeaderHTML_30 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_84_84, html_format__HeaderRowOneHTML_25, html_format__V_62_62);
        }
#line 248 "html_format.m"
      }
#line 279 "html_format.m"
    {
#line 279 "html_format.m"
      html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_52_95_95_91_52_93_95_48_5_p_0(html_format__FormatInfo_6, html_format__MaybeClassMap_23, html_format__NumColumns_11, html_format__STATE_VARIABLE_StyleControlMap_52_52, html_format__STATE_VARIABLE_StyleControlMap_35, html_format__BodyRows_13, &html_format__BodyRowsHTML_31);
    }
#line 283 "html_format.m"
    {
#line 283 "html_format.m"
      html_format__WrappedHeaderHTML_32 = html_format__wrap_tags_3_f_0((MR_String) "<thead>\n", (MR_String) "</thead>\n", html_format__HeaderHTML_30);
    }
#line 284 "html_format.m"
    {
#line 284 "html_format.m"
      html_format__WrappedBodyHTML_33 = html_format__wrap_tags_3_f_0((MR_String) "<tbody>\n", (MR_String) "</tbody>\n", html_format__BodyRowsHTML_31);
    }
#line 286 "html_format.m"
    {
#line 286 "html_format.m"
      html_format__V_69_69 = mercury__cord__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, html_format__WrappedHeaderHTML_32, html_format__WrappedBodyHTML_33);
    }
#line 285 "html_format.m"
    {
#line 285 "html_format.m"
      *html_format__HTML_9 = html_format__wrap_tags_3_f_0(html_format__TableStartTag_15, (MR_String) "</table>\n", html_format__V_69_69);
    }
#line 239 "html_format.m"
  }
#line 235 "html_format.m"
}

#line 188 "html_format.m"
static void MR_CALL 
html_format__item_to_html_7_p_0_1(
#line 188 "html_format.m"
  void * html_format__env_ptr_arg)
#line 188 "html_format.m"
{
#line 188 "html_format.m"
  {
#line 188 "html_format.m"
    struct html_format__item_to_html_7_p_0_env_0_s * html_format__env_ptr = (struct html_format__item_to_html_7_p_0_env_0_s *) html_format__env_ptr_arg;

#line 188 "html_format.m"
    MR_builtin_longjmp((html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__commit_0, 1);
#line 188 "html_format.m"
  }
#line 188 "html_format.m"
}

#line 188 "html_format.m"
static void MR_CALL 
html_format__item_to_html_7_p_0_3(
#line 188 "html_format.m"
  void * html_format__env_ptr_arg)
#line 188 "html_format.m"
{
#line 188 "html_format.m"
  {
#line 188 "html_format.m"
    struct html_format__item_to_html_7_p_0_env_0_s * html_format__env_ptr = (struct html_format__item_to_html_7_p_0_env_0_s *) html_format__env_ptr_arg;

#line 188 "html_format.m"
    (html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__ListItem_45 = ((MR_Word) (html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__conv0_ListItem_45);
#line 188 "html_format.m"
    {
#line 188 "html_format.m"
      html_format__item_to_html_7_p_0_2(html_format__env_ptr);
#line 188 "html_format.m"
      return;
    }
#line 188 "html_format.m"
  }
#line 188 "html_format.m"
}

#line 188 "html_format.m"
static void MR_CALL 
html_format__item_to_html_7_p_0_2(
#line 188 "html_format.m"
  void * html_format__env_ptr_arg)
#line 188 "html_format.m"
{
#line 188 "html_format.m"
  {
#line 188 "html_format.m"
    struct html_format__item_to_html_7_p_0_env_0_s * html_format__env_ptr = (struct html_format__item_to_html_7_p_0_env_0_s *) html_format__env_ptr_arg;

#line 188 "html_format.m"
    {
#line 189 "html_format.m"
      MR_Word html_format__V_24_24;

#line 189 "html_format.m"
      (html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__ListItem_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__ListItem_45, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 189 "html_format.m"
      if ((html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded)
#line 189 "html_format.m"
        html_format__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), (html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__ListItem_45, (MR_Integer) 1)));
#line 189 "html_format.m"
      (html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded = !((html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded);
#line 189 "html_format.m"
      if ((html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded)
#line 189 "html_format.m"
        {
#line 189 "html_format.m"
          html_format__item_to_html_7_p_0_1(html_format__env_ptr);
#line 189 "html_format.m"
          return;
        }
#line 188 "html_format.m"
    }
#line 188 "html_format.m"
  }
#line 188 "html_format.m"
}

#line 188 "html_format.m"
static void MR_CALL 
html_format__item_to_html_7_p_0_4(
#line 188 "html_format.m"
  void * html_format__env_ptr_arg)
#line 188 "html_format.m"
{
#line 188 "html_format.m"
  {
#line 188 "html_format.m"
    struct html_format__item_to_html_7_p_0_env_0_s * html_format__env_ptr = (struct html_format__item_to_html_7_p_0_env_0_s *) html_format__env_ptr_arg;

#line 188 "html_format.m"
    if (MR_builtin_setjmp((html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__commit_0) == 0)
#line 188 "html_format.m"
      {
#line 188 "html_format.m"
        {
#line 188 "html_format.m"
          {
#line 188 "html_format.m"
            mercury__list__member_2_p_1((MR_Word) &display__display__type_ctor_info_display_item_0, &(html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__conv0_ListItem_45, (html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__Items_21, html_format__item_to_html_7_p_0_3, html_format__env_ptr);
          }
#line 188 "html_format.m"
        }
#line 188 "html_format.m"
        (html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded = MR_FALSE;
#line 188 "html_format.m"
      }
#line 188 "html_format.m"
    else
#line 188 "html_format.m"
      (html_format__env_ptr)->html_format__item_to_html_7_p_0_env_0__succeeded = MR_TRUE;
#line 188 "html_format.m"
  }
#line 188 "html_format.m"
}

#line 152 "html_format.m"
static void MR_CALL 
html_format__item_to_html_7_p_0(
#line 152 "html_format.m"
  MR_String html_format__StartTag_8,
#line 152 "html_format.m"
  MR_String html_format__EndTag_9,
#line 152 "html_format.m"
  MR_Word html_format__FormatInfo_10,
#line 152 "html_format.m"
  MR_Word html_format__STATE_VARIABLE_StyleControlMap_0_27,
#line 152 "html_format.m"
  MR_Word * html_format__STATE_VARIABLE_StyleControlMap_28,
#line 152 "html_format.m"
  MR_Word html_format__Item_12,
#line 152 "html_format.m"
  MR_Word * html_format__HTML_13)
#line 152 "html_format.m"
{
#line 152 "html_format.m"
  {
#line 152 "html_format.m"
    struct html_format__item_to_html_7_p_0_env_0_s html_format__env;

#line 158 "html_format.m"
    while (MR_TRUE)
#line 158 "html_format.m"
      {
#line 158 "html_format.m"
        /* tailcall optimized into a loop */
#line 158 "html_format.m"
#line 158 "html_format.m"
        switch (MR_tag((MR_Word) html_format__Item_12)) {
#line 158 "html_format.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 158 "html_format.m"
          case (MR_Integer) 0:
#line 165 "html_format.m"
            {
#line 896 "html_format.m"
              {
#line 896 "html_format.m"
                *html_format__HTML_13 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "<p>\n")));
              }
#line 165 "html_format.m"
              *html_format__STATE_VARIABLE_StyleControlMap_28 = html_format__STATE_VARIABLE_StyleControlMap_0_27;
#line 165 "html_format.m"
            }
#line 158 "html_format.m"
            break;
#line 158 "html_format.m"
          case (MR_Integer) 1:
#line 168 "html_format.m"
            {
#line 168 "html_format.m"
              MR_Word html_format__DeepLink_15 = (MR_Word) MR_body(((MR_Word) html_format__Item_12), (MR_Integer) 1);
#line 168 "html_format.m"
              MR_Word html_format__V_37_37;

#line 170 "html_format.m"
              {
#line 170 "html_format.m"
                html_format__V_37_37 = html_format__link_to_html_2_f_0(html_format__FormatInfo_10, html_format__DeepLink_15);
              }
#line 169 "html_format.m"
              {
#line 169 "html_format.m"
                *html_format__HTML_13 = html_format__wrap_tags_3_f_0(html_format__StartTag_8, html_format__EndTag_9, html_format__V_37_37);
              }
#line 168 "html_format.m"
              *html_format__STATE_VARIABLE_StyleControlMap_28 = html_format__STATE_VARIABLE_StyleControlMap_0_27;
#line 168 "html_format.m"
            }
#line 158 "html_format.m"
            break;
#line 158 "html_format.m"
          case (MR_Integer) 2:
#line 172 "html_format.m"
            {
#line 172 "html_format.m"
              MR_Word html_format__PseudoLink_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), html_format__Item_12, (MR_Integer) 0)));
#line 172 "html_format.m"
              MR_Word html_format__V_36_36;

#line 174 "html_format.m"
              {
#line 174 "html_format.m"
                html_format__V_36_36 = html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_115_101_117_100_111_95_108_105_110_107_95_116_111_95_104_116_109_108_95_95_91_49_93_95_48_2_f_0(html_format__PseudoLink_16);
              }
#line 173 "html_format.m"
              {
#line 173 "html_format.m"
                *html_format__HTML_13 = html_format__wrap_tags_3_f_0(html_format__StartTag_8, html_format__EndTag_9, html_format__V_36_36);
              }
#line 172 "html_format.m"
              *html_format__STATE_VARIABLE_StyleControlMap_28 = html_format__STATE_VARIABLE_StyleControlMap_0_27;
#line 172 "html_format.m"
            }
#line 158 "html_format.m"
            break;
#line 158 "html_format.m"
          case (MR_Integer) 3:
#line 158 "html_format.m"
#line 158 "html_format.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), html_format__Item_12, (MR_Integer) 0)))) {
#line 158 "html_format.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 158 "html_format.m"
              case (MR_Integer) 0:
#line 176 "html_format.m"
                {
#line 176 "html_format.m"
                  MR_Word html_format__Table_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), html_format__Item_12, (MR_Integer) 1)));
#line 176 "html_format.m"
                  MR_Word html_format__TableHTML_18;

#line 177 "html_format.m"
                  {
#line 177 "html_format.m"
                    html_format__table_to_html_5_p_0(html_format__FormatInfo_10, html_format__STATE_VARIABLE_StyleControlMap_0_27, html_format__STATE_VARIABLE_StyleControlMap_28, html_format__Table_17, &html_format__TableHTML_18);
                  }
#line 178 "html_format.m"
                  {
#line 178 "html_format.m"
                    *html_format__HTML_13 = html_format__wrap_tags_3_f_0(html_format__StartTag_8, html_format__EndTag_9, html_format__TableHTML_18);
                  }
#line 176 "html_format.m"
                }
#line 158 "html_format.m"
                break;
#line 158 "html_format.m"
              case (MR_Integer) 1:
#line 158 "html_format.m"
                {
#line 158 "html_format.m"
                  MR_Word html_format__TypeCtorInfo_11_71;
#line 158 "html_format.m"
                  MR_Word html_format__TypeCtorInfo_11_82;
#line 158 "html_format.m"
                  MR_String html_format__Message_14 = ((MR_String) (MR_hl_field(MR_mktag(3), html_format__Item_12, (MR_Integer) 1)));
#line 158 "html_format.m"
                  MR_Word html_format__V_40_40;
#line 158 "html_format.m"
                  MR_Word html_format__V_43_43;
#line 158 "html_format.m"
                  MR_Word html_format__V_68_68;
#line 158 "html_format.m"
                  MR_Word html_format__V_69_69;
#line 158 "html_format.m"
                  MR_Word html_format__V_70_70;
#line 158 "html_format.m"
                  MR_Word html_format__V_79_79;
#line 158 "html_format.m"
                  MR_Word html_format__V_80_80;
#line 158 "html_format.m"
                  MR_Word html_format__V_81_81;

#line 896 "html_format.m"
                  {
#line 896 "html_format.m"
                    html_format__V_43_43 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Message_14)));
                  }
#line 9150 "html_format.c"
                  html_format__TypeCtorInfo_11_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 896 "html_format.m"
                  {
#line 896 "html_format.m"
                    html_format__V_68_68 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "<h3>")));
                  }
#line 896 "html_format.m"
                  {
#line 896 "html_format.m"
                    html_format__V_70_70 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "</h3>\n")));
                  }
#line 884 "html_format.m"
                  {
#line 884 "html_format.m"
                    html_format__V_69_69 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_71, html_format__V_43_43, html_format__V_70_70);
                  }
#line 884 "html_format.m"
                  {
#line 884 "html_format.m"
                    html_format__V_40_40 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_71, html_format__V_68_68, html_format__V_69_69);
                  }
#line 9172 "html_format.c"
                  html_format__TypeCtorInfo_11_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 896 "html_format.m"
                  {
#line 896 "html_format.m"
                    html_format__V_79_79 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__StartTag_8)));
                  }
#line 896 "html_format.m"
                  {
#line 896 "html_format.m"
                    html_format__V_81_81 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__EndTag_9)));
                  }
#line 884 "html_format.m"
                  {
#line 884 "html_format.m"
                    html_format__V_80_80 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_82, html_format__V_40_40, html_format__V_81_81);
                  }
#line 884 "html_format.m"
                  {
#line 884 "html_format.m"
                    *html_format__HTML_13 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_82, html_format__V_79_79, html_format__V_80_80);
                  }
#line 158 "html_format.m"
                  *html_format__STATE_VARIABLE_StyleControlMap_28 = html_format__STATE_VARIABLE_StyleControlMap_0_27;
#line 158 "html_format.m"
                }
#line 158 "html_format.m"
                break;
#line 158 "html_format.m"
              case (MR_Integer) 2:
#line 162 "html_format.m"
                {
#line 162 "html_format.m"
                  MR_Word html_format__V_39_39;
#line 162 "html_format.m"
                  MR_String html_format__Message_44 = ((MR_String) (MR_hl_field(MR_mktag(3), html_format__Item_12, (MR_Integer) 1)));

#line 896 "html_format.m"
                  {
#line 896 "html_format.m"
                    html_format__V_39_39 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Message_44)));
                  }
#line 163 "html_format.m"
                  {
#line 163 "html_format.m"
                    *html_format__HTML_13 = html_format__wrap_tags_3_f_0(html_format__StartTag_8, html_format__EndTag_9, html_format__V_39_39);
                  }
#line 162 "html_format.m"
                  *html_format__STATE_VARIABLE_StyleControlMap_28 = html_format__STATE_VARIABLE_StyleControlMap_0_27;
#line 162 "html_format.m"
                }
#line 158 "html_format.m"
                break;
#line 158 "html_format.m"
              case (MR_Integer) 3:
#line 180 "html_format.m"
                {
#line 180 "html_format.m"
                  MR_Word html_format__Class_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), html_format__Item_12, (MR_Integer) 1)));
#line 180 "html_format.m"
                  MR_Word html_format__MaybeTitle_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), html_format__Item_12, (MR_Integer) 2)));
#line 180 "html_format.m"
                  MR_Word html_format__DeveloperMode_22;
#line 181 "html_format.m"
                  MR_Word html_format__V_50_50;
#line 181 "html_format.m"
                  MR_Word html_format__V_51_51;
#line 181 "html_format.m"
                  MR_String html_format__V_52_52;
#line 181 "html_format.m"
                  MR_String html_format__V_53_53;
#line 181 "html_format.m"
                  MR_String html_format__V_54_54;

#line 180 "html_format.m"
                  (html_format__env).html_format__item_to_html_7_p_0_env_0__Items_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), html_format__Item_12, (MR_Integer) 3)));
#line 181 "html_format.m"
                  html_format__V_50_50 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 181 "html_format.m"
                  html_format__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 181 "html_format.m"
                  html_format__DeveloperMode_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 181 "html_format.m"
                  html_format__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 1)));
#line 181 "html_format.m"
                  html_format__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 2)));
#line 181 "html_format.m"
                  html_format__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 3)));
#line 185 "html_format.m"
                  (html_format__env).html_format__item_to_html_7_p_0_env_0__succeeded = (html_format__DeveloperMode_22 == (MR_Integer) 1);
#line 185 "html_format.m"
                  if ((html_format__env).html_format__item_to_html_7_p_0_env_0__succeeded)
#line 185 "html_format.m"
                    {
#line 188 "html_format.m"
                      {
#line 188 "html_format.m"
                        html_format__item_to_html_7_p_0_4(&html_format__env);
                      }
#line 186 "html_format.m"
                      (html_format__env).html_format__item_to_html_7_p_0_env_0__succeeded = !((html_format__env).html_format__item_to_html_7_p_0_env_0__succeeded);
#line 185 "html_format.m"
                    }
#line 194 "html_format.m"
                  if ((html_format__env).html_format__item_to_html_7_p_0_env_0__succeeded)
#line 193 "html_format.m"
                    {
#line 193 "html_format.m"
                      {
#line 193 "html_format.m"
                        *html_format__HTML_13 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
                      }
#line 193 "html_format.m"
                      *html_format__STATE_VARIABLE_StyleControlMap_28 = html_format__STATE_VARIABLE_StyleControlMap_0_27;
#line 193 "html_format.m"
                    }
#line 194 "html_format.m"
                  else
#line 196 "html_format.m"
                    {
#line 196 "html_format.m"
                      MR_Word html_format__TableHTML_46;

#line 195 "html_format.m"
                      {
#line 195 "html_format.m"
                        html_format__list_to_html_7_p_0(html_format__FormatInfo_10, html_format__STATE_VARIABLE_StyleControlMap_0_27, html_format__STATE_VARIABLE_StyleControlMap_28, html_format__Class_19, html_format__MaybeTitle_20, (html_format__env).html_format__item_to_html_7_p_0_env_0__Items_21, &html_format__TableHTML_46);
                      }
#line 197 "html_format.m"
                      {
#line 197 "html_format.m"
                        *html_format__HTML_13 = html_format__wrap_tags_3_f_0(html_format__StartTag_8, html_format__EndTag_9, html_format__TableHTML_46);
                      }
#line 196 "html_format.m"
                    }
#line 180 "html_format.m"
                }
#line 158 "html_format.m"
                break;
#line 158 "html_format.m"
              case (MR_Integer) 4:
#line 200 "html_format.m"
                {
#line 200 "html_format.m"
                  MR_String html_format__Text_25 = ((MR_String) (MR_hl_field(MR_mktag(3), html_format__Item_12, (MR_Integer) 1)));
#line 200 "html_format.m"
                  MR_Word html_format__V_30_30;
#line 200 "html_format.m"
                  MR_Word html_format__V_33_33;

#line 896 "html_format.m"
                  {
#line 896 "html_format.m"
                    html_format__V_33_33 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Text_25)));
                  }
#line 202 "html_format.m"
                  {
#line 202 "html_format.m"
                    html_format__V_30_30 = html_format__wrap_tags_3_f_0((MR_String) "<pre>", (MR_String) "</pre>", html_format__V_33_33);
                  }
#line 201 "html_format.m"
                  {
#line 201 "html_format.m"
                    *html_format__HTML_13 = html_format__wrap_tags_3_f_0(html_format__StartTag_8, html_format__EndTag_9, html_format__V_30_30);
                  }
#line 200 "html_format.m"
                  *html_format__STATE_VARIABLE_StyleControlMap_28 = html_format__STATE_VARIABLE_StyleControlMap_0_27;
#line 200 "html_format.m"
                }
#line 158 "html_format.m"
                break;
#line 158 "html_format.m"
              case (MR_Integer) 5:
#line 204 "html_format.m"
                {
#line 204 "html_format.m"
                  MR_Word html_format__SubItem_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), html_format__Item_12, (MR_Integer) 1)));
#line 204 "html_format.m"
                  MR_Word html_format__DeveloperMode_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 205 "html_format.m"
                  MR_Word html_format__V_55_55 = ((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 205 "html_format.m"
                  MR_Word html_format__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 205 "html_format.m"
                  MR_String html_format__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 1)));
#line 205 "html_format.m"
                  MR_String html_format__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 2)));
#line 205 "html_format.m"
                  MR_String html_format__V_59_59 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__FormatInfo_10, (MR_Integer) 3)));

#line 210 "html_format.m"
#line 210 "html_format.m"
                  switch (html_format__DeveloperMode_49) {
#line 210 "html_format.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 210 "html_format.m"
                    case (MR_Integer) 1:
#line 211 "html_format.m"
                      {
#line 212 "html_format.m"
                        {
#line 212 "html_format.m"
                          *html_format__HTML_13 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
                        }
#line 211 "html_format.m"
                        *html_format__STATE_VARIABLE_StyleControlMap_28 = html_format__STATE_VARIABLE_StyleControlMap_0_27;
#line 211 "html_format.m"
                      }
#line 210 "html_format.m"
                      break;
#line 210 "html_format.m"
                    case (MR_Integer) 0:
#line 208 "html_format.m"
                      {
#line 208 "html_format.m"
                        /* direct tailcall eliminated */
#line 208 "html_format.m"
                        {
#line 208 "html_format.m"
                          MR_Word html_format__Item__tmp_copy_12 = html_format__SubItem_26;

#line 208 "html_format.m"
                          html_format__Item_12 = html_format__Item__tmp_copy_12;
#line 208 "html_format.m"
                        }
#line 208 "html_format.m"
                        continue;
#line 208 "html_format.m"
                      }
#line 210 "html_format.m"
                      break;
#line 210 "html_format.m"
                  }
#line 204 "html_format.m"
                }
#line 158 "html_format.m"
                break;
#line 158 "html_format.m"
            }
#line 158 "html_format.m"
            break;
#line 158 "html_format.m"
        }
#line 158 "html_format.m"
        break;
#line 158 "html_format.m"
      }
#line 152 "html_format.m"
  }
#line 152 "html_format.m"
}

#line 143 "html_format.m"
static MR_Word MR_CALL 
html_format__style_element_to_html_1_f_0(
#line 143 "html_format.m"
  MR_Word html_format__HeadVar__1_1)
#line 143 "html_format.m"
{
#line 145 "html_format.m"
  {
#line 145 "html_format.m"
    MR_bool html_format__succeeded;
#line 145 "html_format.m"
    MR_Word html_format__HeadVar__2_2;
#line 145 "html_format.m"
    MR_String html_format__ElementName_3;
#line 145 "html_format.m"
    MR_String html_format__Value_4 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 1)));
#line 145 "html_format.m"
    MR_Word html_format__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 0)));
#line 145 "html_format.m"
    MR_String html_format__V_6_6;
#line 145 "html_format.m"
    MR_String html_format__V_14_14;
#line 145 "html_format.m"
    MR_Word html_format__V_20_20;
#line 145 "html_format.m"
    MR_String html_format__V_21_21;
#line 145 "html_format.m"
    MR_String html_format__V_23_23;
#line 145 "html_format.m"
    MR_String html_format__V_24_24;
#line 145 "html_format.m"
    MR_String html_format__V_31_31;

#line 145 "html_format.m"
    html_format__ElementName_3 = (MR_String) html_format__V_5_5;
#line 9460 "html_format.c"
    html_format__V_20_20 = (MR_Word) &html_format_scalar_common_6[0];
#line 146 "html_format.m"
    {
#line 146 "html_format.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(html_format__V_20_20, html_format__Value_4, &html_format__V_14_14);
    }
#line 146 "html_format.m"
    {
#line 146 "html_format.m"
      html_format__V_21_21 = mercury__string__f_43_43_2_f_0(html_format__V_14_14, (MR_String) ";\n");
    }
#line 146 "html_format.m"
    {
#line 146 "html_format.m"
      html_format__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) ": ", html_format__V_21_21);
    }
#line 146 "html_format.m"
    {
#line 146 "html_format.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(html_format__V_20_20, html_format__ElementName_3, &html_format__V_24_24);
    }
#line 146 "html_format.m"
    {
#line 146 "html_format.m"
      html_format__V_31_31 = mercury__string__f_43_43_2_f_0(html_format__V_24_24, html_format__V_23_23);
    }
#line 146 "html_format.m"
    {
#line 146 "html_format.m"
      html_format__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", html_format__V_31_31);
    }
#line 896 "html_format.m"
    {
#line 896 "html_format.m"
      html_format__HeadVar__2_2 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__V_6_6)));
    }
#line 145 "html_format.m"
    return html_format__HeadVar__2_2;
#line 145 "html_format.m"
  }
#line 143 "html_format.m"
}

#line 136 "html_format.m"
static MR_Box MR_CALL 
html_format__style_control_to_html_1_f_0_1(
#line 136 "html_format.m"
  MR_Box html_format__closure_arg,
#line 136 "html_format.m"
  MR_Box html_format__wrapper_arg_1)
#line 136 "html_format.m"
{
#line 136 "html_format.m"
  {
#line 136 "html_format.m"
    MR_Box html_format__wrapper_arg_2;
#line 136 "html_format.m"
    MR_Box html_format__closure = html_format__closure_arg;
#line 136 "html_format.m"
    MR_Word html_format__conv0_HeadVar__2_2;

#line 136 "html_format.m"
    {
#line 136 "html_format.m"
      html_format__conv0_HeadVar__2_2 = html_format__style_element_to_html_1_f_0(((MR_Word) html_format__wrapper_arg_1));
    }
#line 136 "html_format.m"
    html_format__wrapper_arg_2 = ((MR_Box) (html_format__conv0_HeadVar__2_2));
#line 136 "html_format.m"
    return html_format__wrapper_arg_2;
#line 136 "html_format.m"
  }
#line 136 "html_format.m"
}

#line 131 "html_format.m"
static MR_Word MR_CALL 
html_format__style_control_to_html_1_f_0(
#line 131 "html_format.m"
  MR_Word html_format__HeadVar__1_1)
#line 131 "html_format.m"
{
#line 133 "html_format.m"
  {
#line 133 "html_format.m"
    MR_bool html_format__succeeded;
#line 133 "html_format.m"
    MR_Word html_format__HTML_5;
#line 133 "html_format.m"
    MR_Word html_format__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 133 "html_format.m"
    MR_Word html_format__Control_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 0)));
#line 133 "html_format.m"
    MR_Word html_format__StyleElementMap_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 1)));
#line 133 "html_format.m"
    MR_String html_format__ControlName_6 = (MR_String) html_format__Control_3;
#line 133 "html_format.m"
    MR_Word html_format__StyleElements_7;
#line 133 "html_format.m"
    MR_Word html_format__ElementHTMLs_8;
#line 133 "html_format.m"
    MR_Word html_format__ElementsHTML_9;
#line 133 "html_format.m"
    MR_Word html_format__StartFragmentHTML_10;
#line 133 "html_format.m"
    MR_Word html_format__EndFragmentHTML_11;
#line 133 "html_format.m"
    MR_String html_format__V_13_13;
#line 133 "html_format.m"
    MR_Word html_format__V_19_19;
#line 133 "html_format.m"
    MR_String html_format__V_27_27;
#line 133 "html_format.m"
    MR_String html_format__V_34_34;

#line 135 "html_format.m"
    {
#line 135 "html_format.m"
      html_format__StyleElements_7 = mercury__map__to_assoc_list_1_f_0((MR_Word) &html_format__html_format__type_ctor_info_style_element_0, html_format__TypeCtorInfo_21_21, html_format__StyleElementMap_4);
    }
#line 136 "html_format.m"
    {
#line 136 "html_format.m"
      html_format__ElementHTMLs_8 = mercury__list__map_2_f_0((MR_Word) &html_format_scalar_common_1[2], (MR_Word) &html_format_scalar_common_2[0], (MR_Word) &html_format_scalar_common_1[10], html_format__StyleElements_7);
    }
#line 879 "html_format.m"
    {
#line 879 "html_format.m"
      html_format__ElementsHTML_9 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, html_format__ElementHTMLs_8);
    }
#line 139 "html_format.m"
    {
#line 139 "html_format.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &html_format_scalar_common_6[0], html_format__ControlName_6, &html_format__V_27_27);
    }
#line 139 "html_format.m"
    {
#line 139 "html_format.m"
      html_format__V_34_34 = mercury__string__f_43_43_2_f_0(html_format__V_27_27, (MR_String) "\n\t{\n");
    }
#line 139 "html_format.m"
    {
#line 139 "html_format.m"
      html_format__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "\t", html_format__V_34_34);
    }
#line 896 "html_format.m"
    {
#line 896 "html_format.m"
      html_format__StartFragmentHTML_10 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__V_13_13)));
    }
#line 896 "html_format.m"
    {
#line 896 "html_format.m"
      html_format__EndFragmentHTML_11 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\t}\n")));
    }
#line 141 "html_format.m"
    {
#line 141 "html_format.m"
      html_format__V_19_19 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_21_21, html_format__ElementsHTML_9, html_format__EndFragmentHTML_11);
    }
#line 141 "html_format.m"
    {
#line 141 "html_format.m"
      html_format__HTML_5 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_21_21, html_format__StartFragmentHTML_10, html_format__V_19_19);
    }
#line 133 "html_format.m"
    return html_format__HTML_5;
#line 133 "html_format.m"
  }
#line 131 "html_format.m"
}

#line 126 "html_format.m"
static MR_Box MR_CALL 
html_format__css_style_html_1_f_0_1(
#line 126 "html_format.m"
  MR_Box html_format__closure_arg,
#line 126 "html_format.m"
  MR_Box html_format__wrapper_arg_1)
#line 126 "html_format.m"
{
#line 126 "html_format.m"
  {
#line 126 "html_format.m"
    MR_Box html_format__wrapper_arg_2;
#line 126 "html_format.m"
    MR_Box html_format__closure = html_format__closure_arg;
#line 126 "html_format.m"
    MR_Word html_format__conv0_HTML_5;

#line 126 "html_format.m"
    {
#line 126 "html_format.m"
      html_format__conv0_HTML_5 = html_format__style_control_to_html_1_f_0(((MR_Word) html_format__wrapper_arg_1));
    }
#line 126 "html_format.m"
    html_format__wrapper_arg_2 = ((MR_Box) (html_format__conv0_HTML_5));
#line 126 "html_format.m"
    return html_format__wrapper_arg_2;
#line 126 "html_format.m"
  }
#line 126 "html_format.m"
}

#line 119 "html_format.m"
static MR_Word MR_CALL 
html_format__css_style_html_1_f_0(
#line 119 "html_format.m"
  MR_Word html_format__StyleControlMap_3)
#line 119 "html_format.m"
{
#line 121 "html_format.m"
  {
#line 121 "html_format.m"
    MR_bool html_format__succeeded;
#line 121 "html_format.m"
    MR_Word html_format__HTML_4;
#line 121 "html_format.m"
    MR_Word html_format__TypeCtorInfo_11_25;
#line 121 "html_format.m"
    MR_Word html_format__StyleControls_5;
#line 121 "html_format.m"
    MR_Word html_format__ControlHTMLs_6;
#line 121 "html_format.m"
    MR_Word html_format__ControlsHTML_7;
#line 121 "html_format.m"
    MR_Word html_format__V_22_22;
#line 121 "html_format.m"
    MR_Word html_format__V_23_23;
#line 121 "html_format.m"
    MR_Word html_format__V_24_24;

#line 125 "html_format.m"
    {
#line 125 "html_format.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &html_format__html_format__type_ctor_info_style_control_0, (MR_Word) &html_format_scalar_common_1[0], html_format__StyleControlMap_3, &html_format__StyleControls_5);
    }
#line 126 "html_format.m"
    {
#line 126 "html_format.m"
      html_format__ControlHTMLs_6 = mercury__list__map_2_f_0((MR_Word) &html_format_scalar_common_1[1], (MR_Word) &html_format_scalar_common_2[0], (MR_Word) &html_format_scalar_common_1[9], html_format__StyleControls_5);
    }
#line 879 "html_format.m"
    {
#line 879 "html_format.m"
      html_format__ControlsHTML_7 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, html_format__ControlHTMLs_6);
    }
#line 9708 "html_format.c"
    html_format__TypeCtorInfo_11_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 896 "html_format.m"
    {
#line 896 "html_format.m"
      html_format__V_22_22 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "<style type=\"text/css\">\n")));
    }
#line 896 "html_format.m"
    {
#line 896 "html_format.m"
      html_format__V_24_24 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "</style>\n")));
    }
#line 884 "html_format.m"
    {
#line 884 "html_format.m"
      html_format__V_23_23 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_25, html_format__ControlsHTML_7, html_format__V_24_24);
    }
#line 884 "html_format.m"
    {
#line 884 "html_format.m"
      html_format__HTML_4 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_11_25, html_format__V_22_22, html_format__V_23_23);
    }
#line 121 "html_format.m"
    return html_format__HTML_4;
#line 121 "html_format.m"
  }
#line 119 "html_format.m"
}

#line 1018 "html_format.m"
static void MR_CALL 
html_format__escape_break_html_attr_string_1_f_0_2(
#line 1018 "html_format.m"
  MR_Box html_format__closure_arg,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_1,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_2,
#line 1018 "html_format.m"
  MR_Box * html_format__wrapper_arg_3)
#line 1018 "html_format.m"
{
#line 1018 "html_format.m"
  {
#line 1018 "html_format.m"
    MR_Box html_format__closure = html_format__closure_arg;
#line 1018 "html_format.m"
    MR_Word html_format__conv1_STATE_VARIABLE_Acc_11;

#line 1018 "html_format.m"
    {
#line 1018 "html_format.m"
      html_format__replace_special_char_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), html_format__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2), &html_format__conv1_STATE_VARIABLE_Acc_11);
    }
#line 1018 "html_format.m"
    *html_format__wrapper_arg_3 = ((MR_Box) (html_format__conv1_STATE_VARIABLE_Acc_11));
#line 1018 "html_format.m"
  }
#line 1018 "html_format.m"
}

#line 9769 "html_format.c"
static MR_bool MR_CALL 
html_format__escape_break_html_attr_string_1_f_0_1(
#line 9772 "html_format.c"
  MR_Box html_format__closure_arg,
#line 9774 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 9776 "html_format.c"
  MR_Box * html_format__wrapper_arg_2)
#line 9778 "html_format.c"
{
#line 9780 "html_format.c"
  {
#line 9782 "html_format.c"
    MR_bool html_format__succeeded;
#line 9784 "html_format.c"
    MR_Box html_format__closure = html_format__closure_arg;
#line 9786 "html_format.c"
    MR_String html_format__conv0_HeadVar__2_2;

#line 9789 "html_format.c"
    {
#line 9791 "html_format.c"
      html_format__succeeded = html_format__special_html_char_or_break_2_p_0(((MR_Char) (MR_Word) html_format__wrapper_arg_1), &html_format__conv0_HeadVar__2_2);
    }
#line 9794 "html_format.c"
    if (html_format__succeeded)
#line 9796 "html_format.c"
      {
#line 9798 "html_format.c"
        *html_format__wrapper_arg_2 = ((MR_Box) (html_format__conv0_HeadVar__2_2));
#line 9800 "html_format.c"
        html_format__succeeded = MR_TRUE;
#line 9802 "html_format.c"
      }
#line 9804 "html_format.c"
    return html_format__succeeded;
#line 9806 "html_format.c"
  }
#line 9808 "html_format.c"
}

#line 61 "html_format.m"
MR_String MR_CALL 
html_format__escape_break_html_attr_string_1_f_0(
#line 61 "html_format.m"
  MR_Word html_format__HeadVar__1_1)
#line 61 "html_format.m"
{
#line 994 "html_format.m"
  {
#line 994 "html_format.m"
    MR_bool html_format__succeeded;
#line 994 "html_format.m"
    MR_String html_format__HeadVar__2_2;
#line 994 "html_format.m"
    MR_Word html_format__Attrs_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 0)));
#line 994 "html_format.m"
    MR_String html_format__String_4 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 1)));
#line 994 "html_format.m"
    MR_String html_format__V_5_5;
#line 994 "html_format.m"
    MR_Word html_format__Chars_13;
#line 1018 "html_format.m"
    MR_Box html_format__conv2_Chars_13;

#line 1018 "html_format.m"
    {
#line 1018 "html_format.m"
      mercury__string__foldr_4_p_0((MR_Word) &html_format_scalar_common_2[2], (MR_Word) &html_format_scalar_common_5[3], html_format__String_4, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &html_format__conv2_Chars_13);
    }
#line 1018 "html_format.m"
    html_format__Chars_13 = ((MR_Word) html_format__conv2_Chars_13);
#line 1019 "html_format.m"
    {
#line 1019 "html_format.m"
      mercury__string__from_char_list_2_p_0(html_format__Chars_13, &html_format__V_5_5);
    }
#line 995 "html_format.m"
    {
#line 995 "html_format.m"
      return html_format__HeadVar__2_2 = html_format__handle_html_attrs_2_f_0(html_format__Attrs_3, html_format__V_5_5);
    }
#line 994 "html_format.m"
    return html_format__HeadVar__2_2;
#line 994 "html_format.m"
  }
#line 61 "html_format.m"
}

#line 1018 "html_format.m"
static void MR_CALL 
html_format__escape_break_html_string_1_f_0_2(
#line 1018 "html_format.m"
  MR_Box html_format__closure_arg,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_1,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_2,
#line 1018 "html_format.m"
  MR_Box * html_format__wrapper_arg_3)
#line 1018 "html_format.m"
{
#line 1018 "html_format.m"
  {
#line 1018 "html_format.m"
    MR_Box html_format__closure = html_format__closure_arg;
#line 1018 "html_format.m"
    MR_Word html_format__conv1_STATE_VARIABLE_Acc_11;

#line 1018 "html_format.m"
    {
#line 1018 "html_format.m"
      html_format__replace_special_char_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), html_format__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2), &html_format__conv1_STATE_VARIABLE_Acc_11);
    }
#line 1018 "html_format.m"
    *html_format__wrapper_arg_3 = ((MR_Box) (html_format__conv1_STATE_VARIABLE_Acc_11));
#line 1018 "html_format.m"
  }
#line 1018 "html_format.m"
}

#line 9891 "html_format.c"
static MR_bool MR_CALL 
html_format__escape_break_html_string_1_f_0_1(
#line 9894 "html_format.c"
  MR_Box html_format__closure_arg,
#line 9896 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 9898 "html_format.c"
  MR_Box * html_format__wrapper_arg_2)
#line 9900 "html_format.c"
{
#line 9902 "html_format.c"
  {
#line 9904 "html_format.c"
    MR_bool html_format__succeeded;
#line 9906 "html_format.c"
    MR_Box html_format__closure = html_format__closure_arg;
#line 9908 "html_format.c"
    MR_String html_format__conv0_HeadVar__2_2;

#line 9911 "html_format.c"
    {
#line 9913 "html_format.c"
      html_format__succeeded = html_format__special_html_char_or_break_2_p_0(((MR_Char) (MR_Word) html_format__wrapper_arg_1), &html_format__conv0_HeadVar__2_2);
    }
#line 9916 "html_format.c"
    if (html_format__succeeded)
#line 9918 "html_format.c"
      {
#line 9920 "html_format.c"
        *html_format__wrapper_arg_2 = ((MR_Box) (html_format__conv0_HeadVar__2_2));
#line 9922 "html_format.c"
        html_format__succeeded = MR_TRUE;
#line 9924 "html_format.c"
      }
#line 9926 "html_format.c"
    return html_format__succeeded;
#line 9928 "html_format.c"
  }
#line 9930 "html_format.c"
}

#line 60 "html_format.m"
MR_String MR_CALL 
html_format__escape_break_html_string_1_f_0(
#line 60 "html_format.m"
  MR_String html_format__String_3)
#line 60 "html_format.m"
{
#line 991 "html_format.m"
  {
#line 991 "html_format.m"
    MR_bool html_format__succeeded;
#line 991 "html_format.m"
    MR_String html_format__HeadVar__2_2;
#line 991 "html_format.m"
    MR_Word html_format__Chars_11;
#line 1018 "html_format.m"
    MR_Box html_format__conv2_Chars_11;

#line 1018 "html_format.m"
    {
#line 1018 "html_format.m"
      mercury__string__foldr_4_p_0((MR_Word) &html_format_scalar_common_2[2], (MR_Word) &html_format_scalar_common_5[2], html_format__String_3, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &html_format__conv2_Chars_11);
    }
#line 1018 "html_format.m"
    html_format__Chars_11 = ((MR_Word) html_format__conv2_Chars_11);
#line 1019 "html_format.m"
    {
#line 1019 "html_format.m"
      mercury__string__from_char_list_2_p_0(html_format__Chars_11, &html_format__HeadVar__2_2);
    }
#line 991 "html_format.m"
    return html_format__HeadVar__2_2;
#line 991 "html_format.m"
  }
#line 60 "html_format.m"
}

#line 1018 "html_format.m"
static void MR_CALL 
html_format__escape_html_attr_string_1_f_0_2(
#line 1018 "html_format.m"
  MR_Box html_format__closure_arg,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_1,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_2,
#line 1018 "html_format.m"
  MR_Box * html_format__wrapper_arg_3)
#line 1018 "html_format.m"
{
#line 1018 "html_format.m"
  {
#line 1018 "html_format.m"
    MR_Box html_format__closure = html_format__closure_arg;
#line 1018 "html_format.m"
    MR_Word html_format__conv1_STATE_VARIABLE_Acc_11;

#line 1018 "html_format.m"
    {
#line 1018 "html_format.m"
      html_format__replace_special_char_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), html_format__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2), &html_format__conv1_STATE_VARIABLE_Acc_11);
    }
#line 1018 "html_format.m"
    *html_format__wrapper_arg_3 = ((MR_Box) (html_format__conv1_STATE_VARIABLE_Acc_11));
#line 1018 "html_format.m"
  }
#line 1018 "html_format.m"
}

#line 10002 "html_format.c"
static MR_bool MR_CALL 
html_format__escape_html_attr_string_1_f_0_1(
#line 10005 "html_format.c"
  MR_Box html_format__closure_arg,
#line 10007 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 10009 "html_format.c"
  MR_Box * html_format__wrapper_arg_2)
#line 10011 "html_format.c"
{
#line 10013 "html_format.c"
  {
#line 10015 "html_format.c"
    MR_bool html_format__succeeded;
#line 10017 "html_format.c"
    MR_Box html_format__closure = html_format__closure_arg;
#line 10019 "html_format.c"
    MR_String html_format__conv0_HeadVar__2_2;

#line 10022 "html_format.c"
    {
#line 10024 "html_format.c"
      html_format__succeeded = html_format__special_html_char_2_p_0(((MR_Char) (MR_Word) html_format__wrapper_arg_1), &html_format__conv0_HeadVar__2_2);
    }
#line 10027 "html_format.c"
    if (html_format__succeeded)
#line 10029 "html_format.c"
      {
#line 10031 "html_format.c"
        *html_format__wrapper_arg_2 = ((MR_Box) (html_format__conv0_HeadVar__2_2));
#line 10033 "html_format.c"
        html_format__succeeded = MR_TRUE;
#line 10035 "html_format.c"
      }
#line 10037 "html_format.c"
    return html_format__succeeded;
#line 10039 "html_format.c"
  }
#line 10041 "html_format.c"
}

#line 54 "html_format.m"
MR_String MR_CALL 
html_format__escape_html_attr_string_1_f_0(
#line 54 "html_format.m"
  MR_Word html_format__HeadVar__1_1)
#line 54 "html_format.m"
{
#line 988 "html_format.m"
  {
#line 988 "html_format.m"
    MR_bool html_format__succeeded;
#line 988 "html_format.m"
    MR_String html_format__HeadVar__2_2;
#line 988 "html_format.m"
    MR_Word html_format__Attrs_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 0)));
#line 988 "html_format.m"
    MR_String html_format__String_4 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__HeadVar__1_1, (MR_Integer) 1)));
#line 988 "html_format.m"
    MR_String html_format__V_5_5;
#line 988 "html_format.m"
    MR_Word html_format__Chars_13;
#line 1018 "html_format.m"
    MR_Box html_format__conv2_Chars_13;

#line 1018 "html_format.m"
    {
#line 1018 "html_format.m"
      mercury__string__foldr_4_p_0((MR_Word) &html_format_scalar_common_2[2], (MR_Word) &html_format_scalar_common_5[1], html_format__String_4, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &html_format__conv2_Chars_13);
    }
#line 1018 "html_format.m"
    html_format__Chars_13 = ((MR_Word) html_format__conv2_Chars_13);
#line 1019 "html_format.m"
    {
#line 1019 "html_format.m"
      mercury__string__from_char_list_2_p_0(html_format__Chars_13, &html_format__V_5_5);
    }
#line 989 "html_format.m"
    {
#line 989 "html_format.m"
      return html_format__HeadVar__2_2 = html_format__handle_html_attrs_2_f_0(html_format__Attrs_3, html_format__V_5_5);
    }
#line 988 "html_format.m"
    return html_format__HeadVar__2_2;
#line 988 "html_format.m"
  }
#line 54 "html_format.m"
}

#line 1018 "html_format.m"
static void MR_CALL 
html_format__escape_html_string_1_f_0_2(
#line 1018 "html_format.m"
  MR_Box html_format__closure_arg,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_1,
#line 1018 "html_format.m"
  MR_Box html_format__wrapper_arg_2,
#line 1018 "html_format.m"
  MR_Box * html_format__wrapper_arg_3)
#line 1018 "html_format.m"
{
#line 1018 "html_format.m"
  {
#line 1018 "html_format.m"
    MR_Box html_format__closure = html_format__closure_arg;
#line 1018 "html_format.m"
    MR_Word html_format__conv1_STATE_VARIABLE_Acc_11;

#line 1018 "html_format.m"
    {
#line 1018 "html_format.m"
      html_format__replace_special_char_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), html_format__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) html_format__wrapper_arg_1), ((MR_Word) html_format__wrapper_arg_2), &html_format__conv1_STATE_VARIABLE_Acc_11);
    }
#line 1018 "html_format.m"
    *html_format__wrapper_arg_3 = ((MR_Box) (html_format__conv1_STATE_VARIABLE_Acc_11));
#line 1018 "html_format.m"
  }
#line 1018 "html_format.m"
}

#line 10124 "html_format.c"
static MR_bool MR_CALL 
html_format__escape_html_string_1_f_0_1(
#line 10127 "html_format.c"
  MR_Box html_format__closure_arg,
#line 10129 "html_format.c"
  MR_Box html_format__wrapper_arg_1,
#line 10131 "html_format.c"
  MR_Box * html_format__wrapper_arg_2)
#line 10133 "html_format.c"
{
#line 10135 "html_format.c"
  {
#line 10137 "html_format.c"
    MR_bool html_format__succeeded;
#line 10139 "html_format.c"
    MR_Box html_format__closure = html_format__closure_arg;
#line 10141 "html_format.c"
    MR_String html_format__conv0_HeadVar__2_2;

#line 10144 "html_format.c"
    {
#line 10146 "html_format.c"
      html_format__succeeded = html_format__special_html_char_2_p_0(((MR_Char) (MR_Word) html_format__wrapper_arg_1), &html_format__conv0_HeadVar__2_2);
    }
#line 10149 "html_format.c"
    if (html_format__succeeded)
#line 10151 "html_format.c"
      {
#line 10153 "html_format.c"
        *html_format__wrapper_arg_2 = ((MR_Box) (html_format__conv0_HeadVar__2_2));
#line 10155 "html_format.c"
        html_format__succeeded = MR_TRUE;
#line 10157 "html_format.c"
      }
#line 10159 "html_format.c"
    return html_format__succeeded;
#line 10161 "html_format.c"
  }
#line 10163 "html_format.c"
}

#line 53 "html_format.m"
MR_String MR_CALL 
html_format__escape_html_string_1_f_0(
#line 53 "html_format.m"
  MR_String html_format__String_3)
#line 53 "html_format.m"
{
#line 985 "html_format.m"
  {
#line 985 "html_format.m"
    MR_bool html_format__succeeded;
#line 985 "html_format.m"
    MR_String html_format__HeadVar__2_2;
#line 985 "html_format.m"
    MR_Word html_format__Chars_11;
#line 1018 "html_format.m"
    MR_Box html_format__conv2_Chars_11;

#line 1018 "html_format.m"
    {
#line 1018 "html_format.m"
      mercury__string__foldr_4_p_0((MR_Word) &html_format_scalar_common_2[2], (MR_Word) &html_format_scalar_common_5[0], html_format__String_3, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &html_format__conv2_Chars_11);
    }
#line 1018 "html_format.m"
    html_format__Chars_11 = ((MR_Word) html_format__conv2_Chars_11);
#line 1019 "html_format.m"
    {
#line 1019 "html_format.m"
      mercury__string__from_char_list_2_p_0(html_format__Chars_11, &html_format__HeadVar__2_2);
    }
#line 985 "html_format.m"
    return html_format__HeadVar__2_2;
#line 985 "html_format.m"
  }
#line 53 "html_format.m"
}

#line 46 "html_format.m"
MR_Word MR_CALL 
html_format__htmlize_display_3_f_0(
#line 46 "html_format.m"
  MR_Word html_format__Deep_5,
#line 46 "html_format.m"
  MR_Word html_format__Prefs_6,
#line 46 "html_format.m"
  MR_Word html_format__Display_7)
#line 46 "html_format.m"
{
#line 82 "html_format.m"
  {
#line 82 "html_format.m"
    MR_bool html_format__succeeded;
#line 82 "html_format.m"
    MR_Word html_format__HTML_8;
#line 82 "html_format.m"
    MR_Word html_format__TypeCtorInfo_77_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 82 "html_format.m"
    MR_Word html_format__MaybeTitle_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Display_7, (MR_Integer) 0)));
#line 82 "html_format.m"
    MR_Word html_format__Items_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Display_7, (MR_Integer) 1)));
#line 82 "html_format.m"
    MR_Word html_format__MainTitle_11;
#line 82 "html_format.m"
    MR_Word html_format__HeadTitle_12;
#line 82 "html_format.m"
    MR_Word html_format__HeadingHTML_13;
#line 82 "html_format.m"
    MR_Word html_format__HeadTitleHTML_16;
#line 82 "html_format.m"
    MR_Word html_format__FormatInfo_17;
#line 82 "html_format.m"
    MR_Word html_format__StyleControlMap0_18;
#line 82 "html_format.m"
    MR_Word html_format__StyleControlMap_19;
#line 82 "html_format.m"
    MR_Word html_format__ItemsHTML_20;
#line 82 "html_format.m"
    MR_Word html_format__StyleHTML_21;
#line 82 "html_format.m"
    MR_Word html_format__V_22_22;
#line 82 "html_format.m"
    MR_Word html_format__V_24_24;
#line 82 "html_format.m"
    MR_String html_format__V_25_25;
#line 82 "html_format.m"
    MR_Word html_format__V_36_36;
#line 82 "html_format.m"
    MR_Word html_format__V_37_37;
#line 82 "html_format.m"
    MR_Word html_format__V_40_40;
#line 82 "html_format.m"
    MR_Word html_format__V_41_41;
#line 82 "html_format.m"
    MR_Word html_format__V_44_44;
#line 82 "html_format.m"
    MR_Word html_format__V_45_45;
#line 82 "html_format.m"
    MR_Word html_format__V_48_48;
#line 85 "html_format.m"
    MR_Word html_format__V_49_49;
#line 85 "html_format.m"
    MR_String html_format__V_50_50;
#line 85 "html_format.m"
    MR_String html_format__V_51_51;
#line 85 "html_format.m"
    MR_Word html_format__V_52_52;
#line 85 "html_format.m"
    MR_ArrayPtr html_format__V_53_53;
#line 85 "html_format.m"
    MR_ArrayPtr html_format__V_54_54;
#line 85 "html_format.m"
    MR_ArrayPtr html_format__V_55_55;
#line 85 "html_format.m"
    MR_ArrayPtr html_format__V_56_56;
#line 85 "html_format.m"
    MR_ArrayPtr html_format__V_57_57;
#line 85 "html_format.m"
    MR_ArrayPtr html_format__V_58_58;
#line 85 "html_format.m"
    MR_ArrayPtr html_format__V_59_59;
#line 85 "html_format.m"
    MR_ArrayPtr html_format__V_60_60;
#line 85 "html_format.m"
    MR_ArrayPtr html_format__V_61_61;
#line 85 "html_format.m"
    MR_ArrayPtr html_format__V_62_62;
#line 85 "html_format.m"
    MR_ArrayPtr html_format__V_63_63;
#line 85 "html_format.m"
    MR_ArrayPtr html_format__V_64_64;
#line 85 "html_format.m"
    MR_ArrayPtr html_format__V_65_65;
#line 85 "html_format.m"
    MR_ArrayPtr html_format__V_66_66;
#line 85 "html_format.m"
    MR_ArrayPtr html_format__V_67_67;
#line 85 "html_format.m"
    MR_ArrayPtr html_format__V_68_68;
#line 85 "html_format.m"
    MR_ArrayPtr html_format__V_69_69;
#line 85 "html_format.m"
    MR_ArrayPtr html_format__V_70_70;
#line 85 "html_format.m"
    MR_ArrayPtr html_format__V_71_71;
#line 85 "html_format.m"
    MR_ArrayPtr html_format__V_72_72;
#line 85 "html_format.m"
    MR_Word html_format__V_73_73;
#line 85 "html_format.m"
    MR_Word html_format__V_74_74;
#line 85 "html_format.m"
    MR_Word html_format__V_75_75;
#line 85 "html_format.m"
    MR_Word html_format__V_76_76;

#line 896 "html_format.m"
    {
#line 896 "html_format.m"
      html_format__V_22_22 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Mercury Deep Profile for ")));
    }
#line 85 "html_format.m"
    html_format__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 0)));
#line 85 "html_format.m"
    html_format__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 1)));
#line 85 "html_format.m"
    html_format__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 2)));
#line 85 "html_format.m"
    html_format__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 3)));
#line 85 "html_format.m"
    html_format__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 4)));
#line 85 "html_format.m"
    html_format__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 5)));
#line 85 "html_format.m"
    html_format__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 6)));
#line 85 "html_format.m"
    html_format__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 7)));
#line 85 "html_format.m"
    html_format__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 8)));
#line 85 "html_format.m"
    html_format__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 9)));
#line 85 "html_format.m"
    html_format__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 10)));
#line 85 "html_format.m"
    html_format__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 11)));
#line 85 "html_format.m"
    html_format__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 12)));
#line 85 "html_format.m"
    html_format__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 13)));
#line 85 "html_format.m"
    html_format__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 14)));
#line 85 "html_format.m"
    html_format__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 15)));
#line 85 "html_format.m"
    html_format__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 16)));
#line 85 "html_format.m"
    html_format__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 17)));
#line 85 "html_format.m"
    html_format__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 18)));
#line 85 "html_format.m"
    html_format__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 19)));
#line 85 "html_format.m"
    html_format__V_68_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 20)));
#line 85 "html_format.m"
    html_format__V_69_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 21)));
#line 85 "html_format.m"
    html_format__V_70_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 22)));
#line 85 "html_format.m"
    html_format__V_71_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 23)));
#line 85 "html_format.m"
    html_format__V_72_72 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 24)));
#line 85 "html_format.m"
    html_format__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 25)));
#line 85 "html_format.m"
    html_format__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 26)));
#line 85 "html_format.m"
    html_format__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 27)));
#line 85 "html_format.m"
    html_format__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), html_format__Deep_5, (MR_Integer) 28)));
#line 896 "html_format.m"
    {
#line 896 "html_format.m"
      html_format__V_24_24 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__V_25_25)));
    }
#line 84 "html_format.m"
    {
#line 84 "html_format.m"
      html_format__MainTitle_11 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_77_77, html_format__V_22_22, html_format__V_24_24);
    }
#line 90 "html_format.m"
    if ((html_format__MaybeTitle_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 87 "html_format.m"
      {
#line 88 "html_format.m"
        html_format__HeadTitle_12 = html_format__MainTitle_11;
#line 888 "html_format.m"
        {
#line 888 "html_format.m"
          html_format__HeadingHTML_13 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 87 "html_format.m"
      }
#line 90 "html_format.m"
    else
#line 91 "html_format.m"
      {
#line 91 "html_format.m"
        MR_String html_format__Title_14 = ((MR_String) (MR_hl_field(MR_mktag(1), html_format__MaybeTitle_9, (MR_Integer) 0)));
#line 91 "html_format.m"
        MR_Word html_format__TitleHTML_15;
#line 91 "html_format.m"
        MR_Word html_format__V_26_26;
#line 91 "html_format.m"
        MR_Word html_format__V_27_27;

#line 896 "html_format.m"
        {
#line 896 "html_format.m"
          html_format__TitleHTML_15 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (html_format__Title_14)));
        }
#line 896 "html_format.m"
        {
#line 896 "html_format.m"
          html_format__V_27_27 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) " - ")));
        }
#line 93 "html_format.m"
        {
#line 93 "html_format.m"
          html_format__V_26_26 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_77_77, html_format__V_27_27, html_format__TitleHTML_15);
        }
#line 93 "html_format.m"
        {
#line 93 "html_format.m"
          html_format__HeadTitle_12 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_77_77, html_format__MainTitle_11, html_format__V_26_26);
        }
#line 94 "html_format.m"
        {
#line 94 "html_format.m"
          html_format__HeadingHTML_13 = html_format__wrap_tags_3_f_0((MR_String) "<h3>", (MR_String) "</h3>\n", html_format__TitleHTML_15);
        }
#line 91 "html_format.m"
      }
#line 96 "html_format.m"
    {
#line 96 "html_format.m"
      html_format__HeadTitleHTML_16 = html_format__wrap_tags_3_f_0((MR_String) "<title>", (MR_String) "</title>\n", html_format__HeadTitle_12);
    }
#line 98 "html_format.m"
    {
#line 98 "html_format.m"
      html_format__FormatInfo_17 = html_format__init_format_info_2_f_0(html_format__Deep_5, html_format__Prefs_6);
    }
#line 99 "html_format.m"
    {
#line 99 "html_format.m"
      html_format__StyleControlMap0_18 = html_format__default_style_control_map_0_f_0();
    }
#line 100 "html_format.m"
    {
#line 100 "html_format.m"
      html_format__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_106_111_105_110_95_104_116_109_108_95_95_104_111_57_95_95_91_52_93_95_48_5_p_0((MR_String) "<div>\n", (MR_String) "</div>\n", html_format__FormatInfo_17, html_format__StyleControlMap0_18, &html_format__StyleControlMap_19, html_format__Items_10, &html_format__ItemsHTML_20);
    }
#line 102 "html_format.m"
    {
#line 102 "html_format.m"
      html_format__StyleHTML_21 = html_format__css_style_html_1_f_0(html_format__StyleControlMap_19);
    }
#line 896 "html_format.m"
    {
#line 896 "html_format.m"
      html_format__V_36_36 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\"\n\"http://www.w3.org/TR/html4/strict.dtd\">\n")));
    }
#line 106 "html_format.m"
    {
#line 106 "html_format.m"
      html_format__V_44_44 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_77_77, html_format__HeadTitleHTML_16, html_format__StyleHTML_21);
    }
#line 106 "html_format.m"
    {
#line 106 "html_format.m"
      html_format__V_41_41 = html_format__wrap_tags_3_f_0((MR_String) "<head>\n", (MR_String) "</head>\n", html_format__V_44_44);
    }
#line 107 "html_format.m"
    {
#line 107 "html_format.m"
      html_format__V_48_48 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_77_77, html_format__HeadingHTML_13, html_format__ItemsHTML_20);
    }
#line 107 "html_format.m"
    {
#line 107 "html_format.m"
      html_format__V_45_45 = html_format__wrap_tags_3_f_0((MR_String) "<body>\n", (MR_String) "</body>\n", html_format__V_48_48);
    }
#line 106 "html_format.m"
    {
#line 106 "html_format.m"
      html_format__V_40_40 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_77_77, html_format__V_41_41, html_format__V_45_45);
    }
#line 105 "html_format.m"
    {
#line 105 "html_format.m"
      html_format__V_37_37 = html_format__wrap_tags_3_f_0((MR_String) "<html>\n", (MR_String) "</html>\n", html_format__V_40_40);
    }
#line 104 "html_format.m"
    {
#line 104 "html_format.m"
      html_format__HTML_8 = mercury__cord__f_43_43_2_f_0(html_format__TypeCtorInfo_77_77, html_format__V_36_36, html_format__V_37_37);
    }
#line 82 "html_format.m"
    return html_format__HTML_8;
#line 82 "html_format.m"
  }
#line 46 "html_format.m"
}

#line 36 "html_format.m"
MR_String MR_CALL 
html_format__html_to_string_1_f_0(
#line 36 "html_format.m"
  MR_Word html_format__HTML_3)
#line 36 "html_format.m"
{
#line 874 "html_format.m"
  {
#line 874 "html_format.m"
    MR_bool html_format__succeeded;
#line 874 "html_format.m"
    MR_String html_format__Str_4;
#line 874 "html_format.m"
    MR_Word html_format__V_5_5;

#line 875 "html_format.m"
    {
#line 875 "html_format.m"
      html_format__V_5_5 = mercury__cord__list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, html_format__HTML_3);
    }
#line 875 "html_format.m"
    {
#line 875 "html_format.m"
      mercury__string__append_list_2_p_0(html_format__V_5_5, &html_format__Str_4);
    }
#line 874 "html_format.m"
    return html_format__Str_4;
#line 874 "html_format.m"
  }
#line 36 "html_format.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module html_format. */
