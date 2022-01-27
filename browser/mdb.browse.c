/*
** Automatically generated from `browse.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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


/* :- module mdb.browse. */
/* :- implementation. */

/*
INIT mercury__mdb__browse__init
ENDINIT
*/

#include "mdb.browse.mih"
#include "mdb.browse.mh"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.frame.mih"
#include "mdb.parse.mih"
#include "mdb.sized_pretty.mih"
#include "mdb.term_rep.mih"
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
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "term_io.mih"
#include "term_to_xml.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 91 "mdb.browse.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__browse__pair__pti_pair_2__plain_mdb__parse__type_ctor_info_format_option_0__plain_getopt__type_ctor_info_option_data_0;

#line 94 "mdb.browse.c"
static const MR_PseudoTypeInfo mdb__browse__mdb__browse__field_types_deref_result_1_0[1];

#line 97 "mdb.browse.c"
static const MR_DuFunctorDesc mdb__browse__mdb__browse__du_functor_desc_deref_result_1_0;

#line 100 "mdb.browse.c"
static const MR_FA_TypeInfo_Struct1 mdb__browse__list__ti_list_1mdb__browser_info__type_ctor_info_dir_0;

#line 103 "mdb.browse.c"
static const MR_PseudoTypeInfo mdb__browse__mdb__browse__field_types_deref_result_1_1[2];

#line 106 "mdb.browse.c"
static const MR_DuFunctorDesc mdb__browse__mdb__browse__du_functor_desc_deref_result_1_1;

#line 109 "mdb.browse.c"
static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_stag_ordered_deref_result_1_0[1];

#line 112 "mdb.browse.c"
static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_stag_ordered_deref_result_1_1[1];

#line 115 "mdb.browse.c"
static const MR_DuPtagLayout mdb__browse__mdb__browse__du_ptag_ordered_deref_result_1[2];

#line 118 "mdb.browse.c"
static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_name_ordered_deref_result_1[2];

#line 121 "mdb.browse.c"
static const MR_Integer mdb__browse__mdb__browse__functor_number_map_deref_result_1[2];

#line 124 "mdb.browse.c"
static const MR_EnumFunctorDesc mdb__browse__mdb__browse__enum_functor_desc_unbound_0_0;

#line 127 "mdb.browse.c"
static const MR_EnumFunctorDescPtr mdb__browse__mdb__browse__enum_value_ordered_unbound_0[1];

#line 130 "mdb.browse.c"
static const MR_EnumFunctorDescPtr mdb__browse__mdb__browse__enum_name_ordered_unbound_0[1];

#line 133 "mdb.browse.c"
static const MR_Integer mdb__browse__mdb__browse__functor_number_map_unbound_0[1];

#line 136 "mdb.browse.c"
static const MR_FA_TypeInfo_Struct1 mdb__browse__list__ti_list_1univ__type_ctor_info_univ_0;

#line 139 "mdb.browse.c"
static const MR_PseudoTypeInfo mdb__browse__mdb__browse__field_types_xml_function_wrapper_0_0[3];

#line 142 "mdb.browse.c"
static const MR_ConstString mdb__browse__mdb__browse__field_names_xml_function_wrapper_0_0[3];

#line 145 "mdb.browse.c"
static const MR_DuFunctorDesc mdb__browse__mdb__browse__du_functor_desc_xml_function_wrapper_0_0;

#line 148 "mdb.browse.c"
static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_stag_ordered_xml_function_wrapper_0_0[1];

#line 151 "mdb.browse.c"
static const MR_DuPtagLayout mdb__browse__mdb__browse__du_ptag_ordered_xml_function_wrapper_0[1];

#line 154 "mdb.browse.c"
static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_name_ordered_xml_function_wrapper_0[1];

#line 157 "mdb.browse.c"
static const MR_Integer mdb__browse__mdb__browse__functor_number_map_xml_function_wrapper_0[1];

#line 160 "mdb.browse.c"
static const MR_PseudoTypeInfo mdb__browse__mdb__browse__field_types_xml_predicate_wrapper_0_0[2];

#line 163 "mdb.browse.c"
static const MR_ConstString mdb__browse__mdb__browse__field_names_xml_predicate_wrapper_0_0[2];

#line 166 "mdb.browse.c"
static const MR_DuFunctorDesc mdb__browse__mdb__browse__du_functor_desc_xml_predicate_wrapper_0_0;

#line 169 "mdb.browse.c"
static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_stag_ordered_xml_predicate_wrapper_0_0[1];

#line 172 "mdb.browse.c"
static const MR_DuPtagLayout mdb__browse__mdb__browse__du_ptag_ordered_xml_predicate_wrapper_0[1];

#line 175 "mdb.browse.c"
static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_name_ordered_xml_predicate_wrapper_0[1];

#line 178 "mdb.browse.c"
static const MR_Integer mdb__browse__mdb__browse__functor_number_map_xml_predicate_wrapper_0[1];

#line 181 "mdb.browse.c"
static MR_bool MR_CALL 
mdb__browse____Unify____deref_result_1_0_10001(
#line 184 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_1,
#line 186 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_2,
#line 188 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_3);

#line 191 "mdb.browse.c"
static void MR_CALL 
mdb__browse____Compare____deref_result_1_0_10001(
#line 194 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_1,
#line 196 "mdb.browse.c"
  MR_Box * mdb__browse__wrapper_arg_2,
#line 198 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_3,
#line 200 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_4);

#line 203 "mdb.browse.c"
static MR_bool MR_CALL 
mdb__browse____Unify____unbound_0_0_10001(
#line 206 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_1,
#line 208 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_2);

#line 211 "mdb.browse.c"
static void MR_CALL 
mdb__browse____Compare____unbound_0_0_10001(
#line 214 "mdb.browse.c"
  MR_Box * mdb__browse__wrapper_arg_1,
#line 216 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_2,
#line 218 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_3);

#line 221 "mdb.browse.c"
static MR_bool MR_CALL 
mdb__browse____Unify____xml_function_wrapper_0_0_10001(
#line 224 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_1,
#line 226 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_2);

#line 229 "mdb.browse.c"
static void MR_CALL 
mdb__browse____Compare____xml_function_wrapper_0_0_10001(
#line 232 "mdb.browse.c"
  MR_Box * mdb__browse__wrapper_arg_1,
#line 234 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_2,
#line 236 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_3);

#line 239 "mdb.browse.c"
static MR_bool MR_CALL 
mdb__browse____Unify____xml_predicate_wrapper_0_0_10001(
#line 242 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_1,
#line 244 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_2);

#line 247 "mdb.browse.c"
static void MR_CALL 
mdb__browse____Compare____xml_predicate_wrapper_0_0_10001(
#line 250 "mdb.browse.c"
  MR_Box * mdb__browse__wrapper_arg_1,
#line 252 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_2,
#line 254 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_3);

#line 753 "browse.m"
static void MR_CALL 
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0(
#line 753 "browse.m"
  MR_Box mdb__browse__HeadVar__1_1,
#line 753 "browse.m"
  MR_Integer * mdb__browse__HeadVar__2_2);

#line 264 "browse.m"
static void MR_CALL 
mdb__browse____Compare____xml_predicate_wrapper_0_0(
#line 264 "browse.m"
  MR_Word * mdb__browse__HeadVar__1_1,
#line 264 "browse.m"
  MR_Word mdb__browse__HeadVar__2_2,
#line 264 "browse.m"
  MR_Word mdb__browse__HeadVar__3_3);

#line 264 "browse.m"
static MR_bool MR_CALL 
mdb__browse____Unify____xml_predicate_wrapper_0_0(
#line 264 "browse.m"
  MR_Word mdb__browse__HeadVar__1_1,
#line 264 "browse.m"
  MR_Word mdb__browse__HeadVar__2_2);

#line 270 "browse.m"
static void MR_CALL 
mdb__browse____Compare____xml_function_wrapper_0_0(
#line 270 "browse.m"
  MR_Word * mdb__browse__HeadVar__1_1,
#line 270 "browse.m"
  MR_Word mdb__browse__HeadVar__2_2,
#line 270 "browse.m"
  MR_Word mdb__browse__HeadVar__3_3);

#line 270 "browse.m"
static MR_bool MR_CALL 
mdb__browse____Unify____xml_function_wrapper_0_0(
#line 270 "browse.m"
  MR_Word mdb__browse__HeadVar__1_1,
#line 270 "browse.m"
  MR_Word mdb__browse__HeadVar__2_2);

#line 1392 "browse.m"
static void MR_CALL 
mdb__browse____Compare____deref_result_1_0(
#line 1392 "browse.m"
  MR_Word mdb__browse__TypeInfo_for_T_19,
#line 1392 "browse.m"
  MR_Word * mdb__browse__HeadVar__1_1,
#line 1392 "browse.m"
  MR_Word mdb__browse__HeadVar__2_2,
#line 1392 "browse.m"
  MR_Word mdb__browse__HeadVar__3_3);

#line 1392 "browse.m"
static MR_bool MR_CALL 
mdb__browse____Unify____deref_result_1_0(
#line 1392 "browse.m"
  MR_Word mdb__browse__TypeInfo_for_T_11,
#line 1392 "browse.m"
  MR_Word mdb__browse__HeadVar__1_1,
#line 1392 "browse.m"
  MR_Word mdb__browse__HeadVar__2_2);

#line 1812 "browse.m"
static MR_Word MR_CALL 
mdb__browse__qualified_functor_to_doc_1_f_0(
#line 1812 "browse.m"
  MR_Word mdb__browse__HeadVar__1_1);

#line 1741 "browse.m"
static void MR_CALL 
mdb__browse__write_term_mode_debugger_5_p_0(
#line 1741 "browse.m"
  MR_Word mdb__browse__Debugger_6,
#line 1741 "browse.m"
  MR_Word mdb__browse__MaybeModeFunc_7,
#line 1741 "browse.m"
  MR_Word mdb__browse__Dirs_8);

#line 1727 "browse.m"
static MR_String MR_CALL 
mdb__browse__dirs_to_string_1_f_0(
#line 1727 "browse.m"
  MR_Word mdb__browse__HeadVar__1_1);

#line 1704 "browse.m"
static void MR_CALL 
mdb__browse__simplify_rev_dirs_4_p_0(
#line 1704 "browse.m"
  MR_Word mdb__browse__HeadVar__1_1,
#line 1704 "browse.m"
  MR_Integer mdb__browse__N_2,
#line 1704 "browse.m"
  MR_Word mdb__browse__HeadVar__3_3,
#line 1704 "browse.m"
  MR_Word * mdb__browse__SimpleDirs_4);

#line 1516 "browse.m"
static void MR_CALL 
mdb__browse__change_dir_3_p_0(
#line 1516 "browse.m"
  MR_Word mdb__browse__PwdDirs_4,
#line 1516 "browse.m"
  MR_Word mdb__browse__Path_5,
#line 1516 "browse.m"
  MR_Word * mdb__browse__RootRelDirs_6);

#line 1510 "browse.m"
static void MR_CALL 
mdb__browse__set_path_3_p_0(
#line 1510 "browse.m"
  MR_Word mdb__browse__NewPath_4,
#line 1510 "browse.m"
  MR_Word mdb__browse__Info0_5,
#line 1510 "browse.m"
  MR_Word * mdb__browse__Info_6);

#line 1464 "browse.m"
static void MR_CALL 
mdb__browse__deref_subterm_2_4_p_0(
#line 1464 "browse.m"
  MR_Word mdb__browse__Univ_5,
#line 1464 "browse.m"
  MR_Word mdb__browse__Path_6,
#line 1464 "browse.m"
  MR_Word mdb__browse__RevPath0_7,
#line 1464 "browse.m"
  MR_Word * mdb__browse__Result_8);

#line 1399 "browse.m"
static void MR_CALL 
mdb__browse__deref_subterm_3_p_0(
#line 1399 "browse.m"
  MR_Word mdb__browse__BrowserTerm_4,
#line 1399 "browse.m"
  MR_Word mdb__browse__Path_5,
#line 1399 "browse.m"
  MR_Word * mdb__browse__Result_6);

#line 1379 "browse.m"
static void MR_CALL 
mdb__browse__unlines_2_p_0(
#line 1379 "browse.m"
  MR_Word mdb__browse__HeadVar__1_1,
#line 1379 "browse.m"
  MR_String * mdb__browse__HeadVar__2_2);

#line 1347 "browse.m"
static void MR_CALL 
mdb__browse__args_to_string_verbose_list_9_p_0(
#line 1347 "browse.m"
  MR_Word mdb__browse__HeadVar__1_1,
#line 1347 "browse.m"
  MR_Word mdb__browse__HeadVar__2_2,
#line 1347 "browse.m"
  MR_Integer mdb__browse__HeadVar__3_3,
#line 1347 "browse.m"
  MR_Integer mdb__browse__HeadVar__4_4,
#line 1347 "browse.m"
  MR_Integer mdb__browse__CurSize_5,
#line 1347 "browse.m"
  MR_Integer * mdb__browse__NewSize_6,
#line 1347 "browse.m"
  MR_Integer mdb__browse__HeadVar__7_7,
#line 1347 "browse.m"
  MR_Integer mdb__browse__HeadVar__8_8,
#line 1347 "browse.m"
  MR_Word * mdb__browse__HeadVar__9_9);

#line 1315 "browse.m"
static void MR_CALL 
mdb__browse__browser_term_to_string_verbose_2_8_p_0(
#line 1315 "browse.m"
  MR_Word mdb__browse__BrowserDb_9,
#line 1315 "browse.m"
  MR_Word mdb__browse__BrowserTerm_10,
#line 1315 "browse.m"
  MR_Integer mdb__browse__MaxSize_11,
#line 1315 "browse.m"
  MR_Integer mdb__browse__CurSize_12,
#line 1315 "browse.m"
  MR_Integer * mdb__browse__NewSize_13,
#line 1315 "browse.m"
  MR_Integer mdb__browse__MaxDepth_14,
#line 1315 "browse.m"
  MR_Integer mdb__browse__CurDepth_15,
#line 1315 "browse.m"
  MR_Word * mdb__browse__Frame_16);

#line 1232 "browse.m"
static MR_String MR_CALL 
mdb__browse__comma_string_list_1_f_0(
#line 1232 "browse.m"
  MR_Word mdb__browse__Args_3);

#line 1205 "browse.m"
static void MR_CALL 
mdb__browse__args_to_string_list_8_p_0(
#line 1205 "browse.m"
  MR_Word mdb__browse__HeadVar__1_1,
#line 1205 "browse.m"
  MR_Word mdb__browse__HeadVar__2_2,
#line 1205 "browse.m"
  MR_Integer mdb__browse__HeadVar__3_3,
#line 1205 "browse.m"
  MR_Integer mdb__browse__CurSize_4,
#line 1205 "browse.m"
  MR_Integer * mdb__browse__NewSize_5,
#line 1205 "browse.m"
  MR_Integer mdb__browse__HeadVar__6_6,
#line 1205 "browse.m"
  MR_Integer mdb__browse__HeadVar__7_7,
#line 1205 "browse.m"
  MR_Word * mdb__browse__Strs_8);

#line 1144 "browse.m"
static void MR_CALL 
mdb__browse__list_tail_to_string_list_8_p_0(
#line 1144 "browse.m"
  MR_Word mdb__browse__BrowserDb_9,
#line 1144 "browse.m"
  MR_Word mdb__browse__TailUniv_10,
#line 1144 "browse.m"
  MR_Integer mdb__browse__MaxSize_11,
#line 1144 "browse.m"
  MR_Integer mdb__browse__Size0_12,
#line 1144 "browse.m"
  MR_Integer * mdb__browse__Size_13,
#line 1144 "browse.m"
  MR_Integer mdb__browse__MaxDepth_14,
#line 1144 "browse.m"
  MR_Integer mdb__browse__Depth0_15,
#line 1144 "browse.m"
  MR_Word * mdb__browse__TailStrs_16);

#line 1097 "browse.m"
static void MR_CALL 
mdb__browse__browser_term_to_string_3_10_p_0(
#line 1097 "browse.m"
  MR_Word mdb__browse__BrowserDb_11,
#line 1097 "browse.m"
  MR_String mdb__browse__Functor_12,
#line 1097 "browse.m"
  MR_Word mdb__browse__Args_13,
#line 1097 "browse.m"
  MR_Word mdb__browse__MaybeReturn_14,
#line 1097 "browse.m"
  MR_Integer mdb__browse__MaxSize_15,
#line 1097 "browse.m"
  MR_Integer mdb__browse__Size0_16,
#line 1097 "browse.m"
  MR_Integer * mdb__browse__Size_17,
#line 1097 "browse.m"
  MR_Integer mdb__browse__MaxDepth_18,
#line 1097 "browse.m"
  MR_Integer mdb__browse__Depth0_19,
#line 1097 "browse.m"
  MR_String * mdb__browse__Str_20);

#line 1078 "browse.m"
static void MR_CALL 
mdb__browse__browser_term_to_string_2_8_p_0(
#line 1078 "browse.m"
  MR_Word mdb__browse__BrowserDb_9,
#line 1078 "browse.m"
  MR_Word mdb__browse__BrowserTerm_10,
#line 1078 "browse.m"
  MR_Integer mdb__browse__MaxSize_11,
#line 1078 "browse.m"
  MR_Integer mdb__browse__CurSize_12,
#line 1078 "browse.m"
  MR_Integer * mdb__browse__NewSize_13,
#line 1078 "browse.m"
  MR_Integer mdb__browse__MaxDepth_14,
#line 1078 "browse.m"
  MR_Integer mdb__browse__CurDepth_15,
#line 1078 "browse.m"
  MR_String * mdb__browse__Str_16);

#line 1045 "browse.m"
static void MR_CALL 
mdb__browse__report_deref_error_5_p_0(
#line 1045 "browse.m"
  MR_Word mdb__browse__Debugger_6,
#line 1045 "browse.m"
  MR_Word mdb__browse__OKPath_7,
#line 1045 "browse.m"
  MR_Word mdb__browse__ErrorDir_8);

#line 1035 "browse.m"
static void MR_CALL 
mdb__browse__write_univ_or_unbound_4_p_0(
#line 1035 "browse.m"
  MR_Word mdb__browse__Stream_5,
#line 1035 "browse.m"
  MR_Word mdb__browse__Univ_6);

#line 969 "browse.m"
static void MR_CALL 
mdb__browse__portray_pretty_5_p_0(
#line 969 "browse.m"
  MR_Word mdb__browse__Debugger_6,
#line 969 "browse.m"
  MR_Word mdb__browse__BrowserTerm_7,
#line 969 "browse.m"
  MR_Word mdb__browse__Params_8);

#line 959 "browse.m"
static void MR_CALL 
mdb__browse__portray_verbose_5_p_0(
#line 959 "browse.m"
  MR_Word mdb__browse__Debugger_6,
#line 959 "browse.m"
  MR_Word mdb__browse__BrowserTerm_7,
#line 959 "browse.m"
  MR_Word mdb__browse__Params_8);

#line 948 "browse.m"
static void MR_CALL 
mdb__browse__portray_flat_5_p_0_1(
#line 948 "browse.m"
  MR_Box mdb__browse__closure_arg,
#line 948 "browse.m"
  MR_Box mdb__browse__wrapper_arg_1,
#line 948 "browse.m"
  MR_Box mdb__browse__wrapper_arg_2,
#line 948 "browse.m"
  MR_Box * mdb__browse__wrapper_arg_3);

#line 909 "browse.m"
static void MR_CALL 
mdb__browse__portray_flat_5_p_0(
#line 909 "browse.m"
  MR_Word mdb__browse__Debugger_6,
#line 909 "browse.m"
  MR_Word mdb__browse__BrowserTerm_7,
#line 909 "browse.m"
  MR_Word mdb__browse__Params_8);

#line 871 "browse.m"
static void MR_CALL 
mdb__browse__portray_6_p_0(
#line 871 "browse.m"
  MR_Word mdb__browse__Debugger_7,
#line 871 "browse.m"
  MR_Word mdb__browse__Caller_8,
#line 871 "browse.m"
  MR_Word mdb__browse__MaybeFormat_9,
#line 871 "browse.m"
  MR_Word mdb__browse__Info_10);

#line 858 "browse.m"
static void MR_CALL 
mdb__browse__portray_maybe_path_7_p_0(
#line 858 "browse.m"
  MR_Word mdb__browse__Debugger_8,
#line 858 "browse.m"
  MR_Word mdb__browse__Caller_9,
#line 858 "browse.m"
  MR_Word mdb__browse__MaybeFormat_10,
#line 858 "browse.m"
  MR_Word mdb__browse__Info_11,
#line 858 "browse.m"
  MR_Word mdb__browse__MaybePath_12);

#line 804 "browse.m"
static void MR_CALL 
mdb__browse__help_3_p_0(
#line 804 "browse.m"
  MR_Word mdb__browse__Debugger_4);

#line 799 "browse.m"
static MR_bool MR_CALL 
mdb__browse__bool_format_option_is_true_2_p_0(
#line 799 "browse.m"
  MR_Word mdb__browse__HeadVar__1_1,
#line 799 "browse.m"
  MR_Word * mdb__browse__Format_3);

#line 773 "browse.m"
static MR_bool MR_CALL 
mdb__browse__interpret_format_options_2_p_0_1(
#line 773 "browse.m"
  MR_Box mdb__browse__closure_arg,
#line 773 "browse.m"
  MR_Box mdb__browse__wrapper_arg_1,
#line 773 "browse.m"
  MR_Box * mdb__browse__wrapper_arg_2);

#line 768 "browse.m"
static void MR_CALL 
mdb__browse__interpret_format_options_2_p_0(
#line 768 "browse.m"
  MR_Word mdb__browse__OptionTable_3,
#line 768 "browse.m"
  MR_Word * mdb__browse__MaybeMaybeFormat_4);

#line 753 "browse.m"
static void MR_CALL 
mdb__browse__get_value_representation_2_p_0(
#line 753 "browse.m"
  MR_Word mdb__browse__TypeInfo_for_T_6,
#line 753 "browse.m"
  MR_Box mdb__browse__HeadVar__1_1,
#line 753 "browse.m"
  MR_Integer * mdb__browse__HeadVar__2_2);

#line 722 "browse.m"
static void MR_CALL 
mdb__browse__do_print_memory_addr_5_p_0(
#line 722 "browse.m"
  MR_Word mdb__browse__Debugger_6,
#line 722 "browse.m"
  MR_Word mdb__browse__Info_7,
#line 722 "browse.m"
  MR_Word mdb__browse__MaybePath_8);

#line 692 "browse.m"
static void MR_CALL 
mdb__browse__do_portray_7_p_0(
#line 692 "browse.m"
  MR_Word mdb__browse__Debugger_8,
#line 692 "browse.m"
  MR_Word mdb__browse__CallerType_9,
#line 692 "browse.m"
  MR_Word mdb__browse__MaybeMaybeOptionTable_10,
#line 692 "browse.m"
  MR_Word mdb__browse__Info_11,
#line 692 "browse.m"
  MR_Word mdb__browse__MaybePath_12);

#line 583 "browse.m"
static void MR_CALL 
mdb__browse__run_command_7_p_0(
#line 583 "browse.m"
  MR_Word mdb__browse__Debugger_8,
#line 583 "browse.m"
  MR_Word mdb__browse__Command_9,
#line 583 "browse.m"
  MR_Word * mdb__browse__Quit_10,
#line 583 "browse.m"
  MR_Word mdb__browse__STATE_VARIABLE_Info_0_29,
#line 583 "browse.m"
  MR_Word * mdb__browse__STATE_VARIABLE_Info_30);

#line 547 "browse.m"
static void MR_CALL 
mdb__browse__browse_main_loop_5_p_0(
#line 547 "browse.m"
  MR_Word mdb__browse__Debugger_6,
#line 547 "browse.m"
  MR_Word mdb__browse__STATE_VARIABLE_Info_0_11,
#line 547 "browse.m"
  MR_Word * mdb__browse__STATE_VARIABLE_Info_12);

#line 451 "browse.m"
static void MR_CALL 
mdb__browse__write_indent_3_p_0(
#line 451 "browse.m"
  MR_Integer mdb__browse__Indent_4);

#line 438 "browse.m"
static void MR_CALL 
mdb__browse__save_args_4_p_0(
#line 438 "browse.m"
  MR_Integer mdb__browse__HeadVar__1_1,
#line 438 "browse.m"
  MR_Word mdb__browse__HeadVar__2_2);

#line 403 "browse.m"
static MR_Box MR_CALL 
mdb__browse__save_term_4_p_0_1(
#line 403 "browse.m"
  MR_Box mdb__browse__closure_arg,
#line 403 "browse.m"
  MR_Box mdb__browse__wrapper_arg_1);

#line 393 "browse.m"
static void MR_CALL 
mdb__browse__save_term_4_p_0(
#line 393 "browse.m"
  MR_Word mdb__browse__TypeInfo_for_T_52,
#line 393 "browse.m"
  MR_Integer mdb__browse__Indent_5,
#line 393 "browse.m"
  MR_Box mdb__browse__Term_6);

#line 357 "browse.m"
static void MR_CALL 
mdb__browse__launch_xml_browser_5_p_0(
#line 357 "browse.m"
  MR_Word mdb__browse__OutStream_6,
#line 357 "browse.m"
  MR_Word mdb__browse__ErrStream_7,
#line 357 "browse.m"
  MR_String mdb__browse__CommandStr_8);

#line 1032 "browse.m"
static void MR_CALL 
mdb__browse__browser_term_size_left_from_max_3_p_0_1(
#line 1032 "browse.m"
  MR_Box mdb__browse__closure_arg,
#line 1032 "browse.m"
  MR_Box mdb__browse__wrapper_arg_1,
#line 1032 "browse.m"
  MR_Box mdb__browse__wrapper_arg_2,
#line 1032 "browse.m"
  MR_Box * mdb__browse__wrapper_arg_3);

#line 1004 "browse.m"
static void MR_CALL 
mdb__browse__term_size_left_from_max_3_p_0_1(
#line 1004 "browse.m"
  MR_Box mdb__browse__closure_arg,
#line 1004 "browse.m"
  MR_Box mdb__browse__wrapper_arg_1,
#line 1004 "browse.m"
  MR_Box mdb__browse__wrapper_arg_2,
#line 1004 "browse.m"
  MR_Box * mdb__browse__wrapper_arg_3);


static /* final */ const MR_Box mdb__browse_scalar_common_1[6][3];

static /* final */ const MR_Box mdb__browse_scalar_common_2[2][4];

static /* final */ const MR_Box mdb__browse_scalar_common_3[4][5];

static /* final */ const MR_Box mdb__browse_scalar_common_4[48][2];

static /* final */ const MR_Box mdb__browse_scalar_common_5[10][1];

static /* final */ const MR_Box mdb__browse_scalar_common_6[2][6];

static /* final */ const MR_Integer mdb__browse_scalar_common_8[1][2];

static /* final */ const MR_Box mdb__browse_scalar_common_10[1][7];


#line 1444 "browse.m"
/* sealed */ struct mdb__browse__vector_common_type_7_0_s {
#line 1444 "browse.m"
  const MR_String mdb__browse__vector_common_type_7_0__vct_7_f_0;
#line 1444 "browse.m"
};

static /* final */ const struct mdb__browse__vector_common_type_7_0_s mdb__browse_vector_common_7[20];

#line 783 "browse.m"
/* sealed */ struct mdb__browse__vector_common_type_9_0_s {
#line 783 "browse.m"
  const MR_Word mdb__browse__vector_common_type_9_0__vct_9_f_0;
#line 783 "browse.m"
};

static /* final */ const struct mdb__browse__vector_common_type_9_0_s mdb__browse_vector_common_9[4];



static /* final */ const MR_Box mdb__browse_scalar_common_1[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_debugger_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_6[0])),
    ((MR_Box) (mdb__browse__term_size_left_from_max_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_6[0])),
    ((MR_Box) (mdb__browse__browser_term_size_left_from_max_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_3[3])),
    ((MR_Box) (mdb__browse__interpret_format_options_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_2[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_1[2])),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_debugger_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_3[4][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_2[1])),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_debugger_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__browse__pair__pti_pair_2__plain_mdb__parse__type_ctor_info_format_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_4[48][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "-- Paths can be Unix-style or SICStus-style: /2/3/1 or ^2^3^1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "\th              -- help\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "\t\?              -- help\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "\t^ [path]       -- cd to the specified subterm (default is root)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "\t< n            -- set depth\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "\tp              -- print\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "SICStus Prolog style commands are:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "\thelp           -- show this help message\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "\tquit           -- quit browser\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "\tparams         -- show format and parameter values\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "\t               -- set the named parameter value\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "\tnum_io_actions <n>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "\tlines [format_param_options] <n>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "\twidth [format_param_options] <n>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[17])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "\tsize  [format_param_options] <n>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "\tdepth [format_param_options] <n>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "\t               -- set the format\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "\tformat [format_options] <flat|raw-pretty|verbose|pretty>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "\t                  (default is current)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "\tmode [path]    -- show the mode of the specified subterm\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "\t                  that it makes the current goal invalid\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "\t                  for tracking, asserting for the declarative debugger\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "\t               -- mark the specified subterm (default is current)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "\t[m|mark] [path]\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[27])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "\t                  for tracking, and quit\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "\t               -- mark the specified subterm (default is current)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "\t[t|track] [path]\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[30])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "\tpwd            -- print the path to the current subterm\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[31])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "\tcdr n path     -- repeatedly apply the cd command n times\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "\tcd [path]      -- cd to the specified subterm (default is root)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[33])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "\t               -- print the raw memory address of the specified subterm\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[34])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "\t[addr|memory_addr] [path]\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "\t               -- print the specified subterm using the \140browse\' params\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "\t[print|p|ls] [format_options] [path]\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[37])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_String) "Commands are:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[38])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[40])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_String) "+1")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_String) "]")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_String) ")")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_String) ", ...")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_String) "-")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_5[10][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ", "))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "error: inconsistent format options"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "("))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) " = "))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "."))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_6[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mdb__browse_scalar_common_8[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};

static /* final */ const MR_Integer mdb__browse_scalar_common_8[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_10[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct mdb__browse__vector_common_type_7_0_s mdb__browse_vector_common_7[20] = {
  /* row 0 */   {     (MR_String) "r" },
  /* row 1 */   {     (MR_String) "res" },
  /* row 2 */   {     (MR_String) "result" },
  /* row 3 */   {     (MR_String) "ret" },
  /* row 4 */   {     (MR_String) "return" },
  /* row 5 */   {     (MR_String) "rv" },
  /* row 6 */   {     (MR_String) "!." },
  /* row 7 */   {     (MR_String) "." },
  /* row 8 */   {     (MR_String) ".." },
  /* row 9 */   {     (MR_String) "=.." },
  /* row 10 */   {     (MR_String) "r" },
  /* row 11 */   {     (MR_String) "res" },
  /* row 12 */   {     (MR_String) "result" },
  /* row 13 */   {     (MR_String) "ret" },
  /* row 14 */   {     (MR_String) "return" },
  /* row 15 */   {     (MR_String) "rv" },
  /* row 16 */   {     (MR_String) "Input" },
  /* row 17 */   {     (MR_String) "Output" },
  /* row 18 */   {     (MR_String) "Unbound" },
  /* row 19 */   {     (MR_String) "Not Applicable" },
};

static /* final */ const struct mdb__browse__vector_common_type_9_0_s mdb__browse_vector_common_9[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
};


#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.browse.mh"
#include "mdbcomp.rtti_access.mh"

#line 200 "browse.m"
void 
ML_BROWSE_browse_browser_term(
#line 200 "browse.m"
  MR_Word mdb__browse__Term_9,
#line 200 "browse.m"
  MR_Word mdb__browse__InputStream_10,
#line 200 "browse.m"
  MR_Word mdb__browse__OutputStream_11,
#line 200 "browse.m"
  MR_Word * mdb__browse__MaybeTrack_12,
#line 200 "browse.m"
  MR_Word mdb__browse__STATE_VARIABLE_State_0_15,
#line 200 "browse.m"
  MR_Word * mdb__browse__STATE_VARIABLE_State_16)
#line 200 "browse.m"
{
#line 200 "browse.m"
	mdb__browse__browse_browser_term_no_modes_8_p_0((MR_Word) mdb__browse__Term_9, (MR_Word) mdb__browse__InputStream_10, (MR_Word) mdb__browse__OutputStream_11, (MR_Word *) mdb__browse__MaybeTrack_12, (MR_Word) mdb__browse__STATE_VARIABLE_State_0_15, (MR_Word *) mdb__browse__STATE_VARIABLE_State_16);
}

#line 203 "browse.m"
void 
ML_BROWSE_browse_browser_term_format(
#line 203 "browse.m"
  MR_Word mdb__browse__Term_9,
#line 203 "browse.m"
  MR_Word mdb__browse__InputStream_10,
#line 203 "browse.m"
  MR_Word mdb__browse__OutputStream_11,
#line 203 "browse.m"
  MR_Word mdb__browse__Format_12,
#line 203 "browse.m"
  MR_Word mdb__browse__STATE_VARIABLE_State_0_16,
#line 203 "browse.m"
  MR_Word * mdb__browse__STATE_VARIABLE_State_17)
#line 203 "browse.m"
{
#line 203 "browse.m"
	mdb__browse__browse_browser_term_format_no_modes_8_p_0((MR_Word) mdb__browse__Term_9, (MR_Word) mdb__browse__InputStream_10, (MR_Word) mdb__browse__OutputStream_11, (MR_Word) mdb__browse__Format_12, (MR_Word) mdb__browse__STATE_VARIABLE_State_0_16, (MR_Word *) mdb__browse__STATE_VARIABLE_State_17);
}

#line 206 "browse.m"
void 
ML_BROWSE_browse_external(
#line 206 "browse.m"
  MR_Word mdb__browse__TypeInfo_for_T_25,
#line 206 "browse.m"
  MR_Word mdb__browse__Term_8,
#line 206 "browse.m"
  MR_Word mdb__browse__InputStream_9,
#line 206 "browse.m"
  MR_Word mdb__browse__OutputStream_10,
#line 206 "browse.m"
  MR_Word mdb__browse__STATE_VARIABLE_State_0_14,
#line 206 "browse.m"
  MR_Word * mdb__browse__STATE_VARIABLE_State_15)
#line 206 "browse.m"
{
#line 206 "browse.m"
	mdb__browse__browse_external_no_modes_7_p_0((MR_Word) mdb__browse__TypeInfo_for_T_25, (MR_Box) mdb__browse__Term_8, (MR_Word) mdb__browse__InputStream_9, (MR_Word) mdb__browse__OutputStream_10, (MR_Word) mdb__browse__STATE_VARIABLE_State_0_14, (MR_Word *) mdb__browse__STATE_VARIABLE_State_15);
}

#line 209 "browse.m"
void 
ML_BROWSE_print_browser_term(
#line 209 "browse.m"
  MR_Word mdb__browse__Term_7,
#line 209 "browse.m"
  MR_Word mdb__browse__OutputStream_8,
#line 209 "browse.m"
  MR_Word mdb__browse__Caller_9,
#line 209 "browse.m"
  MR_Word mdb__browse__State_10)
#line 209 "browse.m"
{
#line 209 "browse.m"
	mdb__browse__print_browser_term_6_p_0((MR_Word) mdb__browse__Term_7, (MR_Word) mdb__browse__OutputStream_8, (MR_Word) mdb__browse__Caller_9, (MR_Word) mdb__browse__State_10);
}

#line 211 "browse.m"
void 
ML_BROWSE_print_browser_term_format(
#line 211 "browse.m"
  MR_Word mdb__browse__Term_8,
#line 211 "browse.m"
  MR_Word mdb__browse__OutputStream_9,
#line 211 "browse.m"
  MR_Word mdb__browse__Caller_10,
#line 211 "browse.m"
  MR_Word mdb__browse__Format_11,
#line 211 "browse.m"
  MR_Word mdb__browse__State_12)
#line 211 "browse.m"
{
#line 211 "browse.m"
	mdb__browse__print_browser_term_format_7_p_0((MR_Word) mdb__browse__Term_8, (MR_Word) mdb__browse__OutputStream_9, (MR_Word) mdb__browse__Caller_10, (MR_Word) mdb__browse__Format_11, (MR_Word) mdb__browse__State_12);
}

#line 215 "browse.m"
void 
ML_BROWSE_save_term_to_file(
#line 215 "browse.m"
  MR_String mdb__browse__FileName_7,
#line 215 "browse.m"
  MR_String mdb__browse___Format_8,
#line 215 "browse.m"
  MR_Word mdb__browse__BrowserTerm_9,
#line 215 "browse.m"
  MR_Word mdb__browse__OutStream_10)
#line 215 "browse.m"
{
#line 215 "browse.m"
	mdb__browse__save_term_to_file_6_p_0((MR_String) mdb__browse__FileName_7, (MR_String) mdb__browse___Format_8, (MR_Word) mdb__browse__BrowserTerm_9, (MR_Word) mdb__browse__OutStream_10);
}

#line 218 "browse.m"
void 
ML_BROWSE_save_term_to_file_xml(
#line 218 "browse.m"
  MR_String mdb__browse__FileName_6,
#line 218 "browse.m"
  MR_Word mdb__browse__BrowserTerm_7,
#line 218 "browse.m"
  MR_Word mdb__browse__OutStream_8)
#line 218 "browse.m"
{
#line 218 "browse.m"
	mdb__browse__save_term_to_file_xml_5_p_0((MR_String) mdb__browse__FileName_6, (MR_Word) mdb__browse__BrowserTerm_7, (MR_Word) mdb__browse__OutStream_8);
}

#line 221 "browse.m"
void 
ML_BROWSE_browse_term_xml(
#line 221 "browse.m"
  MR_Word mdb__browse__Term_7,
#line 221 "browse.m"
  MR_Word mdb__browse__OutStream_8,
#line 221 "browse.m"
  MR_Word mdb__browse__ErrStream_9,
#line 221 "browse.m"
  MR_Word mdb__browse__State_10)
#line 221 "browse.m"
{
#line 221 "browse.m"
	mdb__browse__save_and_browse_browser_term_xml_6_p_0((MR_Word) mdb__browse__Term_7, (MR_Word) mdb__browse__OutStream_8, (MR_Word) mdb__browse__ErrStream_9, (MR_Word) mdb__browse__State_10);
}


#line 1426 "mdb.browse.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__browse__pair__pti_pair_2__plain_mdb__parse__type_ctor_info_format_option_0__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdb__parse__mdb__parse__type_ctor_info_format_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 1435 "mdb.browse.c"
static const MR_PseudoTypeInfo mdb__browse__mdb__browse__field_types_deref_result_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1440 "mdb.browse.c"
static const MR_DuFunctorDesc mdb__browse__mdb__browse__du_functor_desc_deref_result_1_0 = {
  (MR_String) "deref_result",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__browse__mdb__browse__field_types_deref_result_1_0,
  NULL,
  NULL,
  NULL
};

#line 1455 "mdb.browse.c"
static const MR_FA_TypeInfo_Struct1 mdb__browse__list__ti_list_1mdb__browser_info__type_ctor_info_dir_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0
  }
};

#line 1463 "mdb.browse.c"
static const MR_PseudoTypeInfo mdb__browse__mdb__browse__field_types_deref_result_1_1[2] = {
  (MR_PseudoTypeInfo) &mdb__browse__list__ti_list_1mdb__browser_info__type_ctor_info_dir_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0
};

#line 1469 "mdb.browse.c"
static const MR_DuFunctorDesc mdb__browse__mdb__browse__du_functor_desc_deref_result_1_1 = {
  (MR_String) "deref_error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__browse__mdb__browse__field_types_deref_result_1_1,
  NULL,
  NULL,
  NULL
};

#line 1484 "mdb.browse.c"
static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_stag_ordered_deref_result_1_0[1] = {
  &mdb__browse__mdb__browse__du_functor_desc_deref_result_1_0
};

#line 1489 "mdb.browse.c"
static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_stag_ordered_deref_result_1_1[1] = {
  &mdb__browse__mdb__browse__du_functor_desc_deref_result_1_1
};

#line 1494 "mdb.browse.c"
static const MR_DuPtagLayout mdb__browse__mdb__browse__du_ptag_ordered_deref_result_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browse__mdb__browse__du_stag_ordered_deref_result_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browse__mdb__browse__du_stag_ordered_deref_result_1_1
  }
};

#line 1508 "mdb.browse.c"
static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_name_ordered_deref_result_1[2] = {
  &mdb__browse__mdb__browse__du_functor_desc_deref_result_1_1,
  &mdb__browse__mdb__browse__du_functor_desc_deref_result_1_0
};

#line 1514 "mdb.browse.c"
static const MR_Integer mdb__browse__mdb__browse__functor_number_map_deref_result_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1520 "mdb.browse.c"
const MR_TypeCtorInfo_Struct mdb__browse__mdb__browse__type_ctor_info_deref_result_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browse____Unify____deref_result_1_0_10001)),
  ((MR_Box) (mdb__browse____Compare____deref_result_1_0_10001)),
  (MR_String) "mdb.browse",
  (MR_String) "deref_result",
  {     mdb__browse__mdb__browse__du_name_ordered_deref_result_1 },
  {     mdb__browse__mdb__browse__du_ptag_ordered_deref_result_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__browse__mdb__browse__functor_number_map_deref_result_1
};

#line 1537 "mdb.browse.c"
static const MR_EnumFunctorDesc mdb__browse__mdb__browse__enum_functor_desc_unbound_0_0 = {
  (MR_String) "_",
  (MR_Integer) 0
};

#line 1543 "mdb.browse.c"
static const MR_EnumFunctorDescPtr mdb__browse__mdb__browse__enum_value_ordered_unbound_0[1] = {
  &mdb__browse__mdb__browse__enum_functor_desc_unbound_0_0
};

#line 1548 "mdb.browse.c"
static const MR_EnumFunctorDescPtr mdb__browse__mdb__browse__enum_name_ordered_unbound_0[1] = {
  &mdb__browse__mdb__browse__enum_functor_desc_unbound_0_0
};

#line 1553 "mdb.browse.c"
static const MR_Integer mdb__browse__mdb__browse__functor_number_map_unbound_0[1] = {
  (MR_Integer) 0
};

#line 1558 "mdb.browse.c"
const MR_TypeCtorInfo_Struct mdb__browse__mdb__browse__type_ctor_info_unbound_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mdb__browse____Unify____unbound_0_0_10001)),
  ((MR_Box) (mdb__browse____Compare____unbound_0_0_10001)),
  (MR_String) "mdb.browse",
  (MR_String) "unbound",
  {     mdb__browse__mdb__browse__enum_name_ordered_unbound_0 },
  {     mdb__browse__mdb__browse__enum_value_ordered_unbound_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__browse__mdb__browse__functor_number_map_unbound_0
};

#line 1575 "mdb.browse.c"
static const MR_FA_TypeInfo_Struct1 mdb__browse__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

#line 1583 "mdb.browse.c"
static const MR_PseudoTypeInfo mdb__browse__mdb__browse__field_types_xml_function_wrapper_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__browse__list__ti_list_1univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

#line 1590 "mdb.browse.c"
static const MR_ConstString mdb__browse__mdb__browse__field_names_xml_function_wrapper_0_0[3] = {
  (MR_String) "function_name",
  (MR_String) "function_arguments",
  (MR_String) "return_value"
};

#line 1597 "mdb.browse.c"
static const MR_DuFunctorDesc mdb__browse__mdb__browse__du_functor_desc_xml_function_wrapper_0_0 = {
  (MR_String) "function",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__browse__mdb__browse__field_types_xml_function_wrapper_0_0,
  mdb__browse__mdb__browse__field_names_xml_function_wrapper_0_0,
  NULL,
  NULL
};

#line 1612 "mdb.browse.c"
static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_stag_ordered_xml_function_wrapper_0_0[1] = {
  &mdb__browse__mdb__browse__du_functor_desc_xml_function_wrapper_0_0
};

#line 1617 "mdb.browse.c"
static const MR_DuPtagLayout mdb__browse__mdb__browse__du_ptag_ordered_xml_function_wrapper_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browse__mdb__browse__du_stag_ordered_xml_function_wrapper_0_0
  }
};

#line 1626 "mdb.browse.c"
static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_name_ordered_xml_function_wrapper_0[1] = {
  &mdb__browse__mdb__browse__du_functor_desc_xml_function_wrapper_0_0
};

#line 1631 "mdb.browse.c"
static const MR_Integer mdb__browse__mdb__browse__functor_number_map_xml_function_wrapper_0[1] = {
  (MR_Integer) 0
};

#line 1636 "mdb.browse.c"
const MR_TypeCtorInfo_Struct mdb__browse__mdb__browse__type_ctor_info_xml_function_wrapper_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browse____Unify____xml_function_wrapper_0_0_10001)),
  ((MR_Box) (mdb__browse____Compare____xml_function_wrapper_0_0_10001)),
  (MR_String) "mdb.browse",
  (MR_String) "xml_function_wrapper",
  {     mdb__browse__mdb__browse__du_name_ordered_xml_function_wrapper_0 },
  {     mdb__browse__mdb__browse__du_ptag_ordered_xml_function_wrapper_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__browse__mdb__browse__functor_number_map_xml_function_wrapper_0
};

#line 1653 "mdb.browse.c"
static const MR_PseudoTypeInfo mdb__browse__mdb__browse__field_types_xml_predicate_wrapper_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__browse__list__ti_list_1univ__type_ctor_info_univ_0
};

#line 1659 "mdb.browse.c"
static const MR_ConstString mdb__browse__mdb__browse__field_names_xml_predicate_wrapper_0_0[2] = {
  (MR_String) "predicate_name",
  (MR_String) "predicate_arguments"
};

#line 1665 "mdb.browse.c"
static const MR_DuFunctorDesc mdb__browse__mdb__browse__du_functor_desc_xml_predicate_wrapper_0_0 = {
  (MR_String) "predicate",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__browse__mdb__browse__field_types_xml_predicate_wrapper_0_0,
  mdb__browse__mdb__browse__field_names_xml_predicate_wrapper_0_0,
  NULL,
  NULL
};

#line 1680 "mdb.browse.c"
static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_stag_ordered_xml_predicate_wrapper_0_0[1] = {
  &mdb__browse__mdb__browse__du_functor_desc_xml_predicate_wrapper_0_0
};

#line 1685 "mdb.browse.c"
static const MR_DuPtagLayout mdb__browse__mdb__browse__du_ptag_ordered_xml_predicate_wrapper_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browse__mdb__browse__du_stag_ordered_xml_predicate_wrapper_0_0
  }
};

#line 1694 "mdb.browse.c"
static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_name_ordered_xml_predicate_wrapper_0[1] = {
  &mdb__browse__mdb__browse__du_functor_desc_xml_predicate_wrapper_0_0
};

#line 1699 "mdb.browse.c"
static const MR_Integer mdb__browse__mdb__browse__functor_number_map_xml_predicate_wrapper_0[1] = {
  (MR_Integer) 0
};

#line 1704 "mdb.browse.c"
const MR_TypeCtorInfo_Struct mdb__browse__mdb__browse__type_ctor_info_xml_predicate_wrapper_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browse____Unify____xml_predicate_wrapper_0_0_10001)),
  ((MR_Box) (mdb__browse____Compare____xml_predicate_wrapper_0_0_10001)),
  (MR_String) "mdb.browse",
  (MR_String) "xml_predicate_wrapper",
  {     mdb__browse__mdb__browse__du_name_ordered_xml_predicate_wrapper_0 },
  {     mdb__browse__mdb__browse__du_ptag_ordered_xml_predicate_wrapper_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__browse__mdb__browse__functor_number_map_xml_predicate_wrapper_0
};

#line 1721 "mdb.browse.c"
static MR_bool MR_CALL 
mdb__browse____Unify____deref_result_1_0_10001(
#line 1724 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_1,
#line 1726 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_2,
#line 1728 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_3)
#line 1730 "mdb.browse.c"
{
#line 1732 "mdb.browse.c"
  {
#line 1734 "mdb.browse.c"
    MR_bool mdb__browse__succeeded;

#line 1737 "mdb.browse.c"
    {
#line 1739 "mdb.browse.c"
      mdb__browse__succeeded = mdb__browse____Unify____deref_result_1_0(((MR_Word) mdb__browse__wrapper_arg_1), ((MR_Word) mdb__browse__wrapper_arg_2), ((MR_Word) mdb__browse__wrapper_arg_3));
    }
#line 1742 "mdb.browse.c"
    return mdb__browse__succeeded;
#line 1744 "mdb.browse.c"
  }
#line 1746 "mdb.browse.c"
}

#line 1749 "mdb.browse.c"
static void MR_CALL 
mdb__browse____Compare____deref_result_1_0_10001(
#line 1752 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_1,
#line 1754 "mdb.browse.c"
  MR_Box * mdb__browse__wrapper_arg_2,
#line 1756 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_3,
#line 1758 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_4)
#line 1760 "mdb.browse.c"
{
#line 1762 "mdb.browse.c"
  {
#line 1764 "mdb.browse.c"
    MR_Word mdb__browse__conv0_HeadVar__1_1;

#line 1767 "mdb.browse.c"
    {
#line 1769 "mdb.browse.c"
      mdb__browse____Compare____deref_result_1_0(((MR_Word) mdb__browse__wrapper_arg_1), &mdb__browse__conv0_HeadVar__1_1, ((MR_Word) mdb__browse__wrapper_arg_3), ((MR_Word) mdb__browse__wrapper_arg_4));
    }
#line 1772 "mdb.browse.c"
    *mdb__browse__wrapper_arg_2 = ((MR_Box) (mdb__browse__conv0_HeadVar__1_1));
#line 1774 "mdb.browse.c"
  }
#line 1776 "mdb.browse.c"
}

#line 1779 "mdb.browse.c"
static MR_bool MR_CALL 
mdb__browse____Unify____unbound_0_0_10001(
#line 1782 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_1,
#line 1784 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_2)
#line 1786 "mdb.browse.c"
{
#line 1788 "mdb.browse.c"
  {
#line 1790 "mdb.browse.c"
    MR_bool mdb__browse__succeeded;

#line 1793 "mdb.browse.c"
    {
#line 1795 "mdb.browse.c"
      mdb__browse__succeeded = mdb__browse____Unify____unbound_0_0();
    }
#line 1798 "mdb.browse.c"
    return mdb__browse__succeeded;
#line 1800 "mdb.browse.c"
  }
#line 1802 "mdb.browse.c"
}

#line 1805 "mdb.browse.c"
static void MR_CALL 
mdb__browse____Compare____unbound_0_0_10001(
#line 1808 "mdb.browse.c"
  MR_Box * mdb__browse__wrapper_arg_1,
#line 1810 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_2,
#line 1812 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_3)
#line 1814 "mdb.browse.c"
{
#line 1816 "mdb.browse.c"
  {
#line 1818 "mdb.browse.c"
    MR_Word mdb__browse__conv0_HeadVar__1_1;

#line 1821 "mdb.browse.c"
    {
#line 1823 "mdb.browse.c"
      mdb__browse____Compare____unbound_0_0(&mdb__browse__conv0_HeadVar__1_1);
    }
#line 1826 "mdb.browse.c"
    *mdb__browse__wrapper_arg_1 = ((MR_Box) (mdb__browse__conv0_HeadVar__1_1));
#line 1828 "mdb.browse.c"
  }
#line 1830 "mdb.browse.c"
}

#line 1833 "mdb.browse.c"
static MR_bool MR_CALL 
mdb__browse____Unify____xml_function_wrapper_0_0_10001(
#line 1836 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_1,
#line 1838 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_2)
#line 1840 "mdb.browse.c"
{
#line 1842 "mdb.browse.c"
  {
#line 1844 "mdb.browse.c"
    MR_bool mdb__browse__succeeded;

#line 1847 "mdb.browse.c"
    {
#line 1849 "mdb.browse.c"
      mdb__browse__succeeded = mdb__browse____Unify____xml_function_wrapper_0_0(((MR_Word) mdb__browse__wrapper_arg_1), ((MR_Word) mdb__browse__wrapper_arg_2));
    }
#line 1852 "mdb.browse.c"
    return mdb__browse__succeeded;
#line 1854 "mdb.browse.c"
  }
#line 1856 "mdb.browse.c"
}

#line 1859 "mdb.browse.c"
static void MR_CALL 
mdb__browse____Compare____xml_function_wrapper_0_0_10001(
#line 1862 "mdb.browse.c"
  MR_Box * mdb__browse__wrapper_arg_1,
#line 1864 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_2,
#line 1866 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_3)
#line 1868 "mdb.browse.c"
{
#line 1870 "mdb.browse.c"
  {
#line 1872 "mdb.browse.c"
    MR_Word mdb__browse__conv0_HeadVar__1_1;

#line 1875 "mdb.browse.c"
    {
#line 1877 "mdb.browse.c"
      mdb__browse____Compare____xml_function_wrapper_0_0(&mdb__browse__conv0_HeadVar__1_1, ((MR_Word) mdb__browse__wrapper_arg_2), ((MR_Word) mdb__browse__wrapper_arg_3));
    }
#line 1880 "mdb.browse.c"
    *mdb__browse__wrapper_arg_1 = ((MR_Box) (mdb__browse__conv0_HeadVar__1_1));
#line 1882 "mdb.browse.c"
  }
#line 1884 "mdb.browse.c"
}

#line 1887 "mdb.browse.c"
static MR_bool MR_CALL 
mdb__browse____Unify____xml_predicate_wrapper_0_0_10001(
#line 1890 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_1,
#line 1892 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_2)
#line 1894 "mdb.browse.c"
{
#line 1896 "mdb.browse.c"
  {
#line 1898 "mdb.browse.c"
    MR_bool mdb__browse__succeeded;

#line 1901 "mdb.browse.c"
    {
#line 1903 "mdb.browse.c"
      mdb__browse__succeeded = mdb__browse____Unify____xml_predicate_wrapper_0_0(((MR_Word) mdb__browse__wrapper_arg_1), ((MR_Word) mdb__browse__wrapper_arg_2));
    }
#line 1906 "mdb.browse.c"
    return mdb__browse__succeeded;
#line 1908 "mdb.browse.c"
  }
#line 1910 "mdb.browse.c"
}

#line 1913 "mdb.browse.c"
static void MR_CALL 
mdb__browse____Compare____xml_predicate_wrapper_0_0_10001(
#line 1916 "mdb.browse.c"
  MR_Box * mdb__browse__wrapper_arg_1,
#line 1918 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_2,
#line 1920 "mdb.browse.c"
  MR_Box mdb__browse__wrapper_arg_3)
#line 1922 "mdb.browse.c"
{
#line 1924 "mdb.browse.c"
  {
#line 1926 "mdb.browse.c"
    MR_Word mdb__browse__conv0_HeadVar__1_1;

#line 1929 "mdb.browse.c"
    {
#line 1931 "mdb.browse.c"
      mdb__browse____Compare____xml_predicate_wrapper_0_0(&mdb__browse__conv0_HeadVar__1_1, ((MR_Word) mdb__browse__wrapper_arg_2), ((MR_Word) mdb__browse__wrapper_arg_3));
    }
#line 1934 "mdb.browse.c"
    *mdb__browse__wrapper_arg_1 = ((MR_Box) (mdb__browse__conv0_HeadVar__1_1));
#line 1936 "mdb.browse.c"
  }
#line 1938 "mdb.browse.c"
}

#line 167 "browse.m"
void MR_CALL 
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 167 "browse.m"
  MR_Word * mdb__browse__HeadVar__1_1)
#line 167 "browse.m"
{
#line 167 "browse.m"
  {
#line 167 "browse.m"
    MR_bool mdb__browse__succeeded;

#line 167 "browse.m"
    *mdb__browse__HeadVar__1_1 = (MR_Integer) 0;
#line 167 "browse.m"
  }
#line 167 "browse.m"
}

#line 167 "browse.m"
MR_bool MR_CALL 
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 167 "browse.m"
{
#line 167 "browse.m"
  {
#line 167 "browse.m"
    return MR_TRUE;
#line 167 "browse.m"
  }
#line 167 "browse.m"
}

#line 753 "browse.m"
static void MR_CALL 
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0(
#line 753 "browse.m"
  MR_Box mdb__browse__HeadVar__1_1,
#line 753 "browse.m"
  MR_Integer * mdb__browse__HeadVar__2_2)
#line 753 "browse.m"
{
#line 755 "browse.m"
  {
#line 755 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 755 "browse.m"
    MR_Word mdb__browse__TypeInfo_for_T_7;

#line 758 "browse.m"
{
#define MR_PROC_LABEL mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0

	MR_Word Value;
	MR_Integer Addr;

	Value = (MR_Word) mdb__browse__HeadVar__1_1 ;
		{
#line 758 "browse.m"

    Addr = (MR_Integer) Value;

#line 2003 "mdb.browse.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__browse__HeadVar__2_2  = Addr;
#line 758 "browse.m"
}
#line 755 "browse.m"
  }
#line 753 "browse.m"
}

#line 142 "browse.m"
void MR_CALL 
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(
#line 142 "browse.m"
  MR_String mdb__browse__FileName_7,
#line 142 "browse.m"
  MR_Word mdb__browse__BrowserTerm_9,
#line 142 "browse.m"
  MR_Word mdb__browse__OutStream_10)
#line 142 "browse.m"
{
#line 230 "browse.m"
  {
#line 230 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 230 "browse.m"
    MR_Word mdb__browse__FileStreamRes_12;

#line 235 "browse.m"
    {
#line 235 "browse.m"
      mercury__io__tell_4_p_0(mdb__browse__FileName_7, &mdb__browse__FileStreamRes_12);
    }
#line 258 "browse.m"
    if ((mdb__browse__FileStreamRes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 237 "browse.m"
      {
#line 242 "browse.m"
        if (((MR_tag((MR_Word) mdb__browse__BrowserTerm_9)) == (MR_mktag((MR_Integer) 0))))
#line 239 "browse.m"
          {
#line 239 "browse.m"
            MR_Word mdb__browse__TypeInfo_12_48;
#line 239 "browse.m"
            MR_Word mdb__browse__Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__BrowserTerm_9, (MR_Integer) 0)));
#line 239 "browse.m"
            MR_Box mdb__browse__V_46_46;

#line 391 "browse.m"
            {
#line 391 "browse.m"
              mdb__browse__V_46_46 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_12_48, mdb__browse__Term_13);
            }
#line 391 "browse.m"
            {
#line 391 "browse.m"
              mdb__browse__save_term_4_p_0(mdb__browse__TypeInfo_12_48, (MR_Integer) 0, mdb__browse__V_46_46);
            }
#line 241 "browse.m"
            {
#line 241 "browse.m"
              mercury__io__nl_2_p_0();
            }
#line 239 "browse.m"
          }
#line 242 "browse.m"
        else
#line 243 "browse.m"
          {
#line 243 "browse.m"
            MR_String mdb__browse__Functor_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_9, (MR_Integer) 0)));
#line 243 "browse.m"
            MR_Word mdb__browse__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_9, (MR_Integer) 1)));
#line 243 "browse.m"
            MR_Word mdb__browse__MaybeRes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_9, (MR_Integer) 2)));

#line 244 "browse.m"
            {
#line 244 "browse.m"
              mercury__io__write_string_3_p_0(mdb__browse__Functor_14);
            }
#line 245 "browse.m"
            {
#line 245 "browse.m"
              mercury__io__write_string_3_p_0((MR_String) "(\n");
            }
#line 246 "browse.m"
            {
#line 246 "browse.m"
              mdb__browse__save_args_4_p_0((MR_Integer) 1, mdb__browse__Args_15);
            }
#line 247 "browse.m"
            {
#line 247 "browse.m"
              mercury__io__write_string_3_p_0((MR_String) "\n)\n");
            }
#line 250 "browse.m"
            if ((mdb__browse__MaybeRes_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 249 "browse.m"
              {
#line 249 "browse.m"
              }
#line 250 "browse.m"
            else
#line 251 "browse.m"
              {
#line 251 "browse.m"
                MR_Word mdb__browse__TypeInfo_12_56;
#line 251 "browse.m"
                MR_Word mdb__browse__Result_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeRes_16, (MR_Integer) 0)));
#line 251 "browse.m"
                MR_Box mdb__browse__V_54_54;

#line 252 "browse.m"
                {
#line 252 "browse.m"
                  mercury__io__write_string_3_p_0((MR_String) "=\n");
                }
#line 391 "browse.m"
                {
#line 391 "browse.m"
                  mdb__browse__V_54_54 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_12_56, mdb__browse__Result_17);
                }
#line 391 "browse.m"
                {
#line 391 "browse.m"
                  mdb__browse__save_term_4_p_0(mdb__browse__TypeInfo_12_56, (MR_Integer) 1, mdb__browse__V_54_54);
                }
#line 254 "browse.m"
                {
#line 254 "browse.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 251 "browse.m"
              }
#line 243 "browse.m"
          }
#line 257 "browse.m"
        {
#line 257 "browse.m"
          mercury__io__told_2_p_0();
#line 257 "browse.m"
          return;
        }
#line 237 "browse.m"
      }
#line 258 "browse.m"
    else
#line 259 "browse.m"
      {
#line 259 "browse.m"
        MR_Word mdb__browse__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__FileStreamRes_12, (MR_Integer) 0)));
#line 259 "browse.m"
        MR_String mdb__browse__Msg_19;

#line 260 "browse.m"
        {
#line 260 "browse.m"
          mercury__io__error_message_2_p_0(mdb__browse__Error_18, &mdb__browse__Msg_19);
        }
#line 261 "browse.m"
        {
#line 261 "browse.m"
          mercury__io__write_string_4_p_0(mdb__browse__OutStream_10, mdb__browse__Msg_19);
#line 261 "browse.m"
          return;
        }
#line 259 "browse.m"
      }
#line 230 "browse.m"
  }
#line 142 "browse.m"
}

#line 264 "browse.m"
static void MR_CALL 
mdb__browse____Compare____xml_predicate_wrapper_0_0(
#line 264 "browse.m"
  MR_Word * mdb__browse__HeadVar__1_1,
#line 264 "browse.m"
  MR_Word mdb__browse__HeadVar__2_2,
#line 264 "browse.m"
  MR_Word mdb__browse__HeadVar__3_3)
#line 264 "browse.m"
{
#line 264 "browse.m"
  {
#line 264 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 264 "browse.m"
    MR_Integer mdb__browse__CastX_9 = (MR_Integer) mdb__browse__HeadVar__2_2;
#line 264 "browse.m"
    MR_Integer mdb__browse__CastY_10 = (MR_Integer) mdb__browse__HeadVar__3_3;

#line 264 "browse.m"
    mdb__browse__succeeded = (mdb__browse__CastX_9 == mdb__browse__CastY_10);
#line 264 "browse.m"
    if (mdb__browse__succeeded)
#line 2203 "mdb.browse.c"
      *mdb__browse__HeadVar__1_1 = (MR_Integer) 0;
#line 264 "browse.m"
    else
#line 264 "browse.m"
      {
#line 264 "browse.m"
        MR_String mdb__browse__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 0)));
#line 264 "browse.m"
        MR_Word mdb__browse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 1)));
#line 264 "browse.m"
        MR_String mdb__browse__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__3_3, (MR_Integer) 0)));
#line 264 "browse.m"
        MR_Word mdb__browse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__3_3, (MR_Integer) 1)));
#line 264 "browse.m"
        MR_Word mdb__browse__V_8_8;

#line 264 "browse.m"
        {
#line 264 "browse.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__browse__V_8_8, mdb__browse__V_4_4, mdb__browse__V_6_6);
        }
#line 2225 "mdb.browse.c"
        mdb__browse__succeeded = (mdb__browse__V_8_8 == (MR_Integer) 0);
#line 264 "browse.m"
        mdb__browse__succeeded = !(mdb__browse__succeeded);
#line 264 "browse.m"
        if (mdb__browse__succeeded)
#line 264 "browse.m"
          *mdb__browse__HeadVar__1_1 = mdb__browse__V_8_8;
#line 264 "browse.m"
        else
#line 264 "browse.m"
          {
#line 264 "browse.m"
            {
#line 264 "browse.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__browse_scalar_common_4[1], mdb__browse__HeadVar__1_1, ((MR_Box) (mdb__browse__V_5_5)), ((MR_Box) (mdb__browse__V_7_7)));
#line 264 "browse.m"
              return;
            }
#line 264 "browse.m"
          }
#line 264 "browse.m"
      }
#line 264 "browse.m"
  }
#line 264 "browse.m"
}

#line 264 "browse.m"
static MR_bool MR_CALL 
mdb__browse____Unify____xml_predicate_wrapper_0_0(
#line 264 "browse.m"
  MR_Word mdb__browse__HeadVar__1_1,
#line 264 "browse.m"
  MR_Word mdb__browse__HeadVar__2_2)
#line 264 "browse.m"
{
#line 264 "browse.m"
  {
#line 264 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 264 "browse.m"
    MR_Integer mdb__browse__CastX_7 = (MR_Integer) mdb__browse__HeadVar__1_1;
#line 264 "browse.m"
    MR_Integer mdb__browse__CastY_8 = (MR_Integer) mdb__browse__HeadVar__2_2;

#line 264 "browse.m"
    mdb__browse__succeeded = (mdb__browse__CastX_7 == mdb__browse__CastY_8);
#line 264 "browse.m"
    if (mdb__browse__succeeded)
#line 264 "browse.m"
      mdb__browse__succeeded = MR_TRUE;
#line 264 "browse.m"
    else
#line 264 "browse.m"
      {
#line 264 "browse.m"
        MR_Word mdb__browse__TypeInfo_9_9;
#line 264 "browse.m"
        MR_String mdb__browse__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__1_1, (MR_Integer) 0)));
#line 264 "browse.m"
        MR_Word mdb__browse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__1_1, (MR_Integer) 1)));
#line 264 "browse.m"
        MR_String mdb__browse__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 0)));
#line 264 "browse.m"
        MR_Word mdb__browse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 1)));

#line 2292 "mdb.browse.c"
        mdb__browse__succeeded = (strcmp(mdb__browse__V_3_3, mdb__browse__V_5_5) == 0);
#line 264 "browse.m"
        if (mdb__browse__succeeded)
#line 264 "browse.m"
          {
#line 2298 "mdb.browse.c"
            mdb__browse__TypeInfo_9_9 = (MR_Word) &mdb__browse_scalar_common_4[1];
#line 2300 "mdb.browse.c"
            {
#line 2302 "mdb.browse.c"
              return mdb__browse__succeeded = mercury__builtin__unify_2_p_0(mdb__browse__TypeInfo_9_9, ((MR_Box) (mdb__browse__V_4_4)), ((MR_Box) (mdb__browse__V_6_6)));
            }
#line 264 "browse.m"
          }
#line 264 "browse.m"
      }
#line 264 "browse.m"
    return mdb__browse__succeeded;
#line 264 "browse.m"
  }
#line 264 "browse.m"
}

#line 270 "browse.m"
static void MR_CALL 
mdb__browse____Compare____xml_function_wrapper_0_0(
#line 270 "browse.m"
  MR_Word * mdb__browse__HeadVar__1_1,
#line 270 "browse.m"
  MR_Word mdb__browse__HeadVar__2_2,
#line 270 "browse.m"
  MR_Word mdb__browse__HeadVar__3_3)
#line 270 "browse.m"
{
#line 270 "browse.m"
  {
#line 270 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 270 "browse.m"
    MR_Integer mdb__browse__CastX_12 = (MR_Integer) mdb__browse__HeadVar__2_2;
#line 270 "browse.m"
    MR_Integer mdb__browse__CastY_13 = (MR_Integer) mdb__browse__HeadVar__3_3;

#line 270 "browse.m"
    mdb__browse__succeeded = (mdb__browse__CastX_12 == mdb__browse__CastY_13);
#line 270 "browse.m"
    if (mdb__browse__succeeded)
#line 2340 "mdb.browse.c"
      *mdb__browse__HeadVar__1_1 = (MR_Integer) 0;
#line 270 "browse.m"
    else
#line 270 "browse.m"
      {
#line 270 "browse.m"
        MR_String mdb__browse__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 0)));
#line 270 "browse.m"
        MR_Word mdb__browse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 1)));
#line 270 "browse.m"
        MR_Word mdb__browse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 2)));
#line 270 "browse.m"
        MR_String mdb__browse__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__3_3, (MR_Integer) 0)));
#line 270 "browse.m"
        MR_Word mdb__browse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__3_3, (MR_Integer) 1)));
#line 270 "browse.m"
        MR_Word mdb__browse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__3_3, (MR_Integer) 2)));
#line 270 "browse.m"
        MR_Word mdb__browse__V_10_10;

#line 270 "browse.m"
        {
#line 270 "browse.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__browse__V_10_10, mdb__browse__V_4_4, mdb__browse__V_7_7);
        }
#line 2366 "mdb.browse.c"
        mdb__browse__succeeded = (mdb__browse__V_10_10 == (MR_Integer) 0);
#line 270 "browse.m"
        mdb__browse__succeeded = !(mdb__browse__succeeded);
#line 270 "browse.m"
        if (mdb__browse__succeeded)
#line 270 "browse.m"
          *mdb__browse__HeadVar__1_1 = mdb__browse__V_10_10;
#line 270 "browse.m"
        else
#line 270 "browse.m"
          {
#line 270 "browse.m"
            MR_Word mdb__browse__V_11_11;

#line 270 "browse.m"
            {
#line 270 "browse.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__browse_scalar_common_4[1], &mdb__browse__V_11_11, ((MR_Box) (mdb__browse__V_5_5)), ((MR_Box) (mdb__browse__V_8_8)));
            }
#line 2386 "mdb.browse.c"
            mdb__browse__succeeded = (mdb__browse__V_11_11 == (MR_Integer) 0);
#line 270 "browse.m"
            mdb__browse__succeeded = !(mdb__browse__succeeded);
#line 270 "browse.m"
            if (mdb__browse__succeeded)
#line 270 "browse.m"
              *mdb__browse__HeadVar__1_1 = mdb__browse__V_11_11;
#line 270 "browse.m"
            else
#line 270 "browse.m"
              {
#line 270 "browse.m"
                mercury__univ____Compare____univ_0_0(mdb__browse__HeadVar__1_1, mdb__browse__V_6_6, mdb__browse__V_9_9);
#line 270 "browse.m"
                return;
              }
#line 270 "browse.m"
          }
#line 270 "browse.m"
      }
#line 270 "browse.m"
  }
#line 270 "browse.m"
}

#line 270 "browse.m"
static MR_bool MR_CALL 
mdb__browse____Unify____xml_function_wrapper_0_0(
#line 270 "browse.m"
  MR_Word mdb__browse__HeadVar__1_1,
#line 270 "browse.m"
  MR_Word mdb__browse__HeadVar__2_2)
#line 270 "browse.m"
{
#line 270 "browse.m"
  {
#line 270 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 270 "browse.m"
    MR_Integer mdb__browse__CastX_9 = (MR_Integer) mdb__browse__HeadVar__1_1;
#line 270 "browse.m"
    MR_Integer mdb__browse__CastY_10 = (MR_Integer) mdb__browse__HeadVar__2_2;

#line 270 "browse.m"
    mdb__browse__succeeded = (mdb__browse__CastX_9 == mdb__browse__CastY_10);
#line 270 "browse.m"
    if (mdb__browse__succeeded)
#line 270 "browse.m"
      mdb__browse__succeeded = MR_TRUE;
#line 270 "browse.m"
    else
#line 270 "browse.m"
      {
#line 270 "browse.m"
        MR_Word mdb__browse__TypeInfo_11_11;
#line 270 "browse.m"
        MR_String mdb__browse__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__1_1, (MR_Integer) 0)));
#line 270 "browse.m"
        MR_Word mdb__browse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__1_1, (MR_Integer) 1)));
#line 270 "browse.m"
        MR_Word mdb__browse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__1_1, (MR_Integer) 2)));
#line 270 "browse.m"
        MR_String mdb__browse__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 0)));
#line 270 "browse.m"
        MR_Word mdb__browse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 1)));
#line 270 "browse.m"
        MR_Word mdb__browse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 2)));

#line 2455 "mdb.browse.c"
        mdb__browse__succeeded = (strcmp(mdb__browse__V_3_3, mdb__browse__V_6_6) == 0);
#line 270 "browse.m"
        if (mdb__browse__succeeded)
#line 270 "browse.m"
          {
#line 2461 "mdb.browse.c"
            mdb__browse__TypeInfo_11_11 = (MR_Word) &mdb__browse_scalar_common_4[1];
#line 2463 "mdb.browse.c"
            {
#line 2465 "mdb.browse.c"
              mdb__browse__succeeded = mercury__builtin__unify_2_p_0(mdb__browse__TypeInfo_11_11, ((MR_Box) (mdb__browse__V_4_4)), ((MR_Box) (mdb__browse__V_7_7)));
            }
#line 270 "browse.m"
            if (mdb__browse__succeeded)
#line 2470 "mdb.browse.c"
              {
#line 2472 "mdb.browse.c"
                return mdb__browse__succeeded = mercury__univ____Unify____univ_0_0(mdb__browse__V_5_5, mdb__browse__V_8_8);
              }
#line 270 "browse.m"
          }
#line 270 "browse.m"
      }
#line 270 "browse.m"
    return mdb__browse__succeeded;
#line 270 "browse.m"
  }
#line 270 "browse.m"
}

#line 167 "browse.m"
void MR_CALL 
mdb__browse____Compare____unbound_0_0(
#line 167 "browse.m"
  MR_Word * mdb__browse__HeadVar__1_1)
#line 167 "browse.m"
{
#line 167 "browse.m"
  {
#line 167 "browse.m"
    MR_bool mdb__browse__succeeded;

#line 167 "browse.m"
    {
#line 167 "browse.m"
      mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mdb__browse__HeadVar__1_1);
#line 167 "browse.m"
      return;
    }
#line 167 "browse.m"
  }
#line 167 "browse.m"
}

#line 167 "browse.m"
MR_bool MR_CALL 
mdb__browse____Unify____unbound_0_0(void)
#line 167 "browse.m"
{
#line 167 "browse.m"
  {
#line 167 "browse.m"
    MR_bool mdb__browse__succeeded;

#line 167 "browse.m"
    {
#line 167 "browse.m"
      return mdb__browse__succeeded = mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 167 "browse.m"
    return mdb__browse__succeeded;
#line 167 "browse.m"
  }
#line 167 "browse.m"
}

#line 1392 "browse.m"
static void MR_CALL 
mdb__browse____Compare____deref_result_1_0(
#line 1392 "browse.m"
  MR_Word mdb__browse__TypeInfo_for_T_19,
#line 1392 "browse.m"
  MR_Word * mdb__browse__HeadVar__1_1,
#line 1392 "browse.m"
  MR_Word mdb__browse__HeadVar__2_2,
#line 1392 "browse.m"
  MR_Word mdb__browse__HeadVar__3_3)
#line 1392 "browse.m"
{
#line 1392 "browse.m"
  {
#line 1392 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 1392 "browse.m"
    MR_Integer mdb__browse__CastX_17 = (MR_Integer) mdb__browse__HeadVar__2_2;
#line 1392 "browse.m"
    MR_Integer mdb__browse__CastY_18 = (MR_Integer) mdb__browse__HeadVar__3_3;

#line 1392 "browse.m"
    mdb__browse__succeeded = (mdb__browse__CastX_17 == mdb__browse__CastY_18);
#line 1392 "browse.m"
    if (mdb__browse__succeeded)
#line 2558 "mdb.browse.c"
      *mdb__browse__HeadVar__1_1 = (MR_Integer) 0;
#line 1392 "browse.m"
    else
#line 1392 "browse.m"
    if (((MR_tag((MR_Word) mdb__browse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1392 "browse.m"
      {
#line 1392 "browse.m"
        MR_Word mdb__browse__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, (MR_Integer) 1)));
#line 1392 "browse.m"
        MR_Word mdb__browse__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, (MR_Integer) 0)));

#line 1392 "browse.m"
        if (((MR_tag((MR_Word) mdb__browse__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1392 "browse.m"
          {
#line 1392 "browse.m"
            MR_Word mdb__browse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__3_3, (MR_Integer) 0)));
#line 1392 "browse.m"
            MR_Word mdb__browse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__3_3, (MR_Integer) 1)));
#line 1392 "browse.m"
            MR_Word mdb__browse__V_16_16;

#line 1392 "browse.m"
            {
#line 1392 "browse.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__browse_scalar_common_4[0], &mdb__browse__V_16_16, ((MR_Box) (mdb__browse__V_23_23)), ((MR_Box) (mdb__browse__V_14_14)));
            }
#line 2587 "mdb.browse.c"
            mdb__browse__succeeded = (mdb__browse__V_16_16 == (MR_Integer) 0);
#line 1392 "browse.m"
            mdb__browse__succeeded = !(mdb__browse__succeeded);
#line 1392 "browse.m"
            if (mdb__browse__succeeded)
#line 1392 "browse.m"
              *mdb__browse__HeadVar__1_1 = mdb__browse__V_16_16;
#line 1392 "browse.m"
            else
#line 1392 "browse.m"
              {
#line 1392 "browse.m"
                mdb__browser_info____Compare____dir_0_0(mdb__browse__HeadVar__1_1, mdb__browse__V_22_22, mdb__browse__V_15_15);
#line 1392 "browse.m"
                return;
              }
#line 1392 "browse.m"
          }
#line 1392 "browse.m"
        else
#line 2608 "mdb.browse.c"
          *mdb__browse__HeadVar__1_1 = (MR_Integer) 2;
#line 1392 "browse.m"
      }
#line 1392 "browse.m"
    else
#line 1392 "browse.m"
      {
#line 1392 "browse.m"
        MR_Box mdb__browse__V_24_24 = (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 0));

#line 1392 "browse.m"
        if (((MR_tag((MR_Word) mdb__browse__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2621 "mdb.browse.c"
          *mdb__browse__HeadVar__1_1 = (MR_Integer) 1;
#line 1392 "browse.m"
        else
#line 1392 "browse.m"
          {
#line 1392 "browse.m"
            MR_Box mdb__browse__V_5_5 = (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__3_3, (MR_Integer) 0));

#line 1392 "browse.m"
            {
#line 1392 "browse.m"
              mercury__builtin__compare_3_p_0(mdb__browse__TypeInfo_for_T_19, mdb__browse__HeadVar__1_1, mdb__browse__V_24_24, mdb__browse__V_5_5);
#line 1392 "browse.m"
              return;
            }
#line 1392 "browse.m"
          }
#line 1392 "browse.m"
      }
#line 1392 "browse.m"
  }
#line 1392 "browse.m"
}

#line 1392 "browse.m"
static MR_bool MR_CALL 
mdb__browse____Unify____deref_result_1_0(
#line 1392 "browse.m"
  MR_Word mdb__browse__TypeInfo_for_T_11,
#line 1392 "browse.m"
  MR_Word mdb__browse__HeadVar__1_1,
#line 1392 "browse.m"
  MR_Word mdb__browse__HeadVar__2_2)
#line 1392 "browse.m"
{
#line 1392 "browse.m"
  {
#line 1392 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 1392 "browse.m"
    MR_Integer mdb__browse__CastX_9 = (MR_Integer) mdb__browse__HeadVar__1_1;
#line 1392 "browse.m"
    MR_Integer mdb__browse__CastY_10 = (MR_Integer) mdb__browse__HeadVar__2_2;

#line 1392 "browse.m"
    mdb__browse__succeeded = (mdb__browse__CastX_9 == mdb__browse__CastY_10);
#line 1392 "browse.m"
    if (mdb__browse__succeeded)
#line 1392 "browse.m"
      mdb__browse__succeeded = MR_TRUE;
#line 1392 "browse.m"
    else
#line 1392 "browse.m"
    if (((MR_tag((MR_Word) mdb__browse__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1392 "browse.m"
      {
#line 1392 "browse.m"
        MR_Word mdb__browse__TypeInfo_12_12;
#line 1392 "browse.m"
        MR_Word mdb__browse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__1_1, (MR_Integer) 0)));
#line 1392 "browse.m"
        MR_Word mdb__browse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__1_1, (MR_Integer) 1)));
#line 1392 "browse.m"
        MR_Word mdb__browse__V_7_7;
#line 1392 "browse.m"
        MR_Word mdb__browse__V_8_8;

#line 1392 "browse.m"
        mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1392 "browse.m"
        if (mdb__browse__succeeded)
#line 1392 "browse.m"
          {
#line 1392 "browse.m"
            mdb__browse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, (MR_Integer) 0)));
#line 1392 "browse.m"
            mdb__browse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, (MR_Integer) 1)));
#line 2699 "mdb.browse.c"
            mdb__browse__TypeInfo_12_12 = (MR_Word) &mdb__browse_scalar_common_4[0];
#line 2701 "mdb.browse.c"
            {
#line 2703 "mdb.browse.c"
              mdb__browse__succeeded = mercury__builtin__unify_2_p_0(mdb__browse__TypeInfo_12_12, ((MR_Box) (mdb__browse__V_5_5)), ((MR_Box) (mdb__browse__V_7_7)));
            }
#line 1392 "browse.m"
            if (mdb__browse__succeeded)
#line 2708 "mdb.browse.c"
              {
#line 2710 "mdb.browse.c"
                return mdb__browse__succeeded = mdb__browser_info____Unify____dir_0_0(mdb__browse__V_6_6, mdb__browse__V_8_8);
              }
#line 1392 "browse.m"
          }
#line 1392 "browse.m"
      }
#line 1392 "browse.m"
    else
#line 1392 "browse.m"
      {
#line 1392 "browse.m"
        MR_Box mdb__browse__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__1_1, (MR_Integer) 0));
#line 1392 "browse.m"
        MR_Box mdb__browse__V_4_4;

#line 1392 "browse.m"
        mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1392 "browse.m"
        if (mdb__browse__succeeded)
#line 1392 "browse.m"
          {
#line 1392 "browse.m"
            mdb__browse__V_4_4 = (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 0));
#line 2734 "mdb.browse.c"
            {
#line 2736 "mdb.browse.c"
              return mdb__browse__succeeded = mercury__builtin__unify_2_p_0(mdb__browse__TypeInfo_for_T_11, mdb__browse__V_3_3, mdb__browse__V_4_4);
            }
#line 1392 "browse.m"
          }
#line 1392 "browse.m"
      }
#line 1392 "browse.m"
    return mdb__browse__succeeded;
#line 1392 "browse.m"
  }
#line 1392 "browse.m"
}

#line 1812 "browse.m"
static MR_Word MR_CALL 
mdb__browse__qualified_functor_to_doc_1_f_0(
#line 1812 "browse.m"
  MR_Word mdb__browse__HeadVar__1_1)
#line 1812 "browse.m"
{
#line 1814 "browse.m"
  {
#line 1814 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 1814 "browse.m"
    MR_Word mdb__browse__HeadVar__2_2;

#line 1814 "browse.m"
    if ((mdb__browse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1814 "browse.m"
      {
#line 1814 "browse.m"
        mdb__browse__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[8]);
#line 1814 "browse.m"
      }
#line 1814 "browse.m"
    else
#line 1814 "browse.m"
      {
#line 1814 "browse.m"
        MR_Word mdb__browse__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__1_1, (MR_Integer) 1)));
#line 1814 "browse.m"
        MR_String mdb__browse__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__1_1, (MR_Integer) 0)));

#line 1814 "browse.m"
        if ((mdb__browse__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1816 "browse.m"
          {
#line 1816 "browse.m"
            MR_String mdb__browse__V_6_6;

#line 1816 "browse.m"
            {
#line 1816 "browse.m"
              mdb__browse__V_6_6 = mercury__term_io__quoted_atom_1_f_0(mdb__browse__V_22_22);
            }
#line 1816 "browse.m"
            {
#line 1816 "browse.m"
              mdb__browse__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1816 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, 0) = ((MR_Box) (mdb__browse__V_6_6));
#line 1816 "browse.m"
            }
#line 1816 "browse.m"
          }
#line 1814 "browse.m"
        else
#line 1818 "browse.m"
          {
#line 1818 "browse.m"
            MR_Word mdb__browse__V_11_11;
#line 1818 "browse.m"
            MR_Word mdb__browse__V_12_12;
#line 1818 "browse.m"
            MR_String mdb__browse__V_13_13;
#line 1818 "browse.m"
            MR_Word mdb__browse__V_14_14;
#line 1818 "browse.m"
            MR_Word mdb__browse__V_17_17;
#line 1818 "browse.m"
            MR_Word mdb__browse__V_18_18;

#line 1819 "browse.m"
            {
#line 1819 "browse.m"
              mdb__browse__V_13_13 = mercury__term_io__quoted_atom_1_f_0(mdb__browse__V_22_22);
            }
#line 1819 "browse.m"
            {
#line 1819 "browse.m"
              mdb__browse__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1819 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_12_12, 0) = ((MR_Box) (mdb__browse__V_13_13));
#line 1819 "browse.m"
            }
#line 1820 "browse.m"
            {
#line 1820 "browse.m"
              mdb__browse__V_18_18 = mdb__browse__qualified_functor_to_doc_1_f_0(mdb__browse__V_21_21);
            }
#line 1820 "browse.m"
            {
#line 1820 "browse.m"
              mdb__browse__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1820 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_17_17, 0) = ((MR_Box) (mdb__browse__V_18_18));
#line 1820 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1820 "browse.m"
            }
#line 1819 "browse.m"
            {
#line 1819 "browse.m"
              mdb__browse__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1819 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[9])));
#line 1819 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_14_14, 1) = ((MR_Box) (mdb__browse__V_17_17));
#line 1819 "browse.m"
            }
#line 1819 "browse.m"
            {
#line 1819 "browse.m"
              mdb__browse__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1819 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_11_11, 0) = ((MR_Box) (mdb__browse__V_12_12));
#line 1819 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_11_11, 1) = ((MR_Box) (mdb__browse__V_14_14));
#line 1819 "browse.m"
            }
#line 1819 "browse.m"
            {
#line 1819 "browse.m"
              mdb__browse__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1819 "browse.m"
              MR_hl_field(MR_mktag(2), mdb__browse__HeadVar__2_2, 0) = ((MR_Box) (mdb__browse__V_11_11));
#line 1819 "browse.m"
            }
#line 1818 "browse.m"
          }
#line 1814 "browse.m"
      }
#line 1814 "browse.m"
    return mdb__browse__HeadVar__2_2;
#line 1814 "browse.m"
  }
#line 1812 "browse.m"
}

#line 1741 "browse.m"
static void MR_CALL 
mdb__browse__write_term_mode_debugger_5_p_0(
#line 1741 "browse.m"
  MR_Word mdb__browse__Debugger_6,
#line 1741 "browse.m"
  MR_Word mdb__browse__MaybeModeFunc_7,
#line 1741 "browse.m"
  MR_Word mdb__browse__Dirs_8)
#line 1741 "browse.m"
{
#line 1746 "browse.m"
  {
#line 1746 "browse.m"
    MR_bool mdb__browse__succeeded;

#line 1746 "browse.m"
    if ((mdb__browse__MaybeModeFunc_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1751 "browse.m"
      {
#line 1752 "browse.m"
        {
#line 1752 "browse.m"
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, (MR_String) "Mode information not available.\n");
#line 1752 "browse.m"
          return;
        }
#line 1751 "browse.m"
      }
#line 1746 "browse.m"
    else
#line 1746 "browse.m"
      {
#line 1746 "browse.m"
        MR_Word mdb__browse__ModeFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeModeFunc_7, (MR_Integer) 0)));
#line 1746 "browse.m"
        MR_Word mdb__browse__Mode_11;
#line 1746 "browse.m"
        MR_String mdb__browse__ModeStr_12;
#line 1746 "browse.m"
        MR_String mdb__browse__V_17_17;
#line 1747 "browse.m"
        MR_Box MR_CALL (* mdb__browse__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mdb__browse__ModeFunc_10, (MR_Integer) 1)));
#line 1747 "browse.m"
        MR_Box mdb__browse__conv1_Mode_11;

#line 1747 "browse.m"
        {
#line 1747 "browse.m"
          mdb__browse__conv1_Mode_11 = mdb__browse__func_0(((MR_Box) mdb__browse__ModeFunc_10), ((MR_Box) (mdb__browse__Dirs_8)));
        }
#line 1747 "browse.m"
        mdb__browse__Mode_11 = ((MR_Word) mdb__browse__conv1_Mode_11);
#line 1758 "browse.m"
        mdb__browse__ModeStr_12 = ((&mdb__browse_vector_common_7[16 + mdb__browse__Mode_11]))->mdb__browse__vector_common_type_7_0__vct_7_f_0;
#line 1749 "browse.m"
        {
#line 1749 "browse.m"
          mdb__browse__V_17_17 = mercury__string__f_43_43_2_f_0(mdb__browse__ModeStr_12, (MR_String) "\n");
        }
#line 1749 "browse.m"
        {
#line 1749 "browse.m"
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, mdb__browse__V_17_17);
#line 1749 "browse.m"
          return;
        }
#line 1746 "browse.m"
      }
#line 1746 "browse.m"
  }
#line 1741 "browse.m"
}

#line 1727 "browse.m"
static MR_String MR_CALL 
mdb__browse__dirs_to_string_1_f_0(
#line 1727 "browse.m"
  MR_Word mdb__browse__HeadVar__1_1)
#line 1727 "browse.m"
{
#line 1729 "browse.m"
  {
#line 1729 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 1729 "browse.m"
    MR_String mdb__browse__HeadVar__2_2;

#line 1729 "browse.m"
    if ((mdb__browse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1729 "browse.m"
      mdb__browse__HeadVar__2_2 = (MR_String) "";
#line 1729 "browse.m"
    else
#line 1730 "browse.m"
      {
#line 1730 "browse.m"
        MR_Word mdb__browse__Dir_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__1_1, (MR_Integer) 0)));
#line 1730 "browse.m"
        MR_Word mdb__browse__Dirs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__1_1, (MR_Integer) 1)));

#line 1734 "browse.m"
        if ((mdb__browse__Dirs_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1723 "browse.m"
#line 1723 "browse.m"
          switch (MR_tag((MR_Word) mdb__browse__Dir_3)) {
#line 1723 "browse.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1723 "browse.m"
            case (MR_Integer) 0:
#line 1723 "browse.m"
              mdb__browse__HeadVar__2_2 = (MR_String) "..";
#line 1723 "browse.m"
              break;
#line 1723 "browse.m"
            case (MR_Integer) 1:
#line 1724 "browse.m"
              {
#line 1724 "browse.m"
                MR_Integer mdb__browse__Num_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browse__Dir_3, (MR_Integer) 0)));

#line 1724 "browse.m"
                {
#line 1724 "browse.m"
                  return mdb__browse__HeadVar__2_2 = mercury__string__int_to_string_1_f_0(mdb__browse__Num_12);
                }
#line 1724 "browse.m"
              }
#line 1723 "browse.m"
              break;
#line 1723 "browse.m"
            case (MR_Integer) 2:
#line 1725 "browse.m"
              mdb__browse__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browse__Dir_3, (MR_Integer) 0)));
#line 1723 "browse.m"
              break;
#line 1723 "browse.m"
          }
#line 1734 "browse.m"
        else
#line 1735 "browse.m"
          {
#line 1735 "browse.m"
            MR_String mdb__browse__V_8_8;
#line 1735 "browse.m"
            MR_String mdb__browse__V_9_9;
#line 1735 "browse.m"
            MR_String mdb__browse__V_11_11;

#line 1723 "browse.m"
#line 1723 "browse.m"
            switch (MR_tag((MR_Word) mdb__browse__Dir_3)) {
#line 1723 "browse.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1723 "browse.m"
              case (MR_Integer) 0:
#line 1723 "browse.m"
                mdb__browse__V_8_8 = (MR_String) "..";
#line 1723 "browse.m"
                break;
#line 1723 "browse.m"
              case (MR_Integer) 1:
#line 1724 "browse.m"
                {
#line 1724 "browse.m"
                  MR_Integer mdb__browse__Num_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browse__Dir_3, (MR_Integer) 0)));

#line 1724 "browse.m"
                  {
#line 1724 "browse.m"
                    mdb__browse__V_8_8 = mercury__string__int_to_string_1_f_0(mdb__browse__Num_14);
                  }
#line 1724 "browse.m"
                }
#line 1723 "browse.m"
                break;
#line 1723 "browse.m"
              case (MR_Integer) 2:
#line 1725 "browse.m"
                mdb__browse__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browse__Dir_3, (MR_Integer) 0)));
#line 1723 "browse.m"
                break;
#line 1723 "browse.m"
            }
#line 1736 "browse.m"
            {
#line 1736 "browse.m"
              mdb__browse__V_11_11 = mdb__browse__dirs_to_string_1_f_0(mdb__browse__Dirs_4);
            }
#line 1736 "browse.m"
            {
#line 1736 "browse.m"
              mdb__browse__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdb__browse__V_11_11);
            }
#line 1736 "browse.m"
            {
#line 1736 "browse.m"
              return mdb__browse__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(mdb__browse__V_8_8, mdb__browse__V_9_9);
            }
#line 1735 "browse.m"
          }
#line 1730 "browse.m"
      }
#line 1729 "browse.m"
    return mdb__browse__HeadVar__2_2;
#line 1729 "browse.m"
  }
#line 1727 "browse.m"
}

#line 1704 "browse.m"
static void MR_CALL 
mdb__browse__simplify_rev_dirs_4_p_0(
#line 1704 "browse.m"
  MR_Word mdb__browse__HeadVar__1_1,
#line 1704 "browse.m"
  MR_Integer mdb__browse__N_2,
#line 1704 "browse.m"
  MR_Word mdb__browse__HeadVar__3_3,
#line 1704 "browse.m"
  MR_Word * mdb__browse__SimpleDirs_4)
#line 1704 "browse.m"
{
#line 1707 "browse.m"
  while (MR_TRUE)
#line 1707 "browse.m"
    {
#line 1707 "browse.m"
      /* tailcall optimized into a loop */
#line 1707 "browse.m"
      {
#line 1707 "browse.m"
        MR_bool mdb__browse__succeeded;

#line 1707 "browse.m"
        if ((mdb__browse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1707 "browse.m"
          *mdb__browse__SimpleDirs_4 = mdb__browse__HeadVar__3_3;
#line 1707 "browse.m"
        else
#line 1708 "browse.m"
          {
#line 1708 "browse.m"
            MR_Word mdb__browse__Dir_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__1_1, (MR_Integer) 0)));
#line 1708 "browse.m"
            MR_Word mdb__browse__Dirs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__1_1, (MR_Integer) 1)));

#line 1712 "browse.m"
#line 1712 "browse.m"
            switch (MR_tag((MR_Word) mdb__browse__Dir_7)) {
#line 1712 "browse.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1712 "browse.m"
              case (MR_Integer) 0:
#line 1710 "browse.m"
                {
#line 1710 "browse.m"
                  MR_Integer mdb__browse__V_18_18 = (mdb__browse__N_2 + (MR_Integer) 1);

#line 1711 "browse.m"
                  /* direct tailcall eliminated */
#line 1711 "browse.m"
                  {
#line 1711 "browse.m"
                    MR_Word mdb__browse__HeadVar__1__tmp_copy_1 = mdb__browse__Dirs_8;
#line 1711 "browse.m"
                    MR_Integer mdb__browse__N__tmp_copy_2 = mdb__browse__V_18_18;

#line 1711 "browse.m"
                    mdb__browse__N_2 = mdb__browse__N__tmp_copy_2;
#line 1711 "browse.m"
                    mdb__browse__HeadVar__1_1 = mdb__browse__HeadVar__1__tmp_copy_1;
#line 1711 "browse.m"
                  }
#line 1711 "browse.m"
                  continue;
#line 1710 "browse.m"
                }
#line 1712 "browse.m"
                break;
#line 1712 "browse.m"
              case (MR_Integer) 1:
#line 1712 "browse.m"
              case (MR_Integer) 2:
#line 1716 "browse.m"
                {
#line 1714 "browse.m"
                  mdb__browse__succeeded = (mdb__browse__N_2 > (MR_Integer) 0);
#line 1716 "browse.m"
                  if (mdb__browse__succeeded)
#line 1715 "browse.m"
                    {
#line 1715 "browse.m"
                      MR_Integer mdb__browse__V_15_15 = (mdb__browse__N_2 - (MR_Integer) 1);

#line 1715 "browse.m"
                      /* direct tailcall eliminated */
#line 1715 "browse.m"
                      {
#line 1715 "browse.m"
                        MR_Word mdb__browse__HeadVar__1__tmp_copy_1 = mdb__browse__Dirs_8;
#line 1715 "browse.m"
                        MR_Integer mdb__browse__N__tmp_copy_2 = mdb__browse__V_15_15;

#line 1715 "browse.m"
                        mdb__browse__N_2 = mdb__browse__N__tmp_copy_2;
#line 1715 "browse.m"
                        mdb__browse__HeadVar__1_1 = mdb__browse__HeadVar__1__tmp_copy_1;
#line 1715 "browse.m"
                      }
#line 1715 "browse.m"
                      continue;
#line 1715 "browse.m"
                    }
#line 1716 "browse.m"
                  else
#line 1717 "browse.m"
                    {
#line 1717 "browse.m"
                      MR_Word mdb__browse__V_17_17;

#line 1717 "browse.m"
                      {
#line 1717 "browse.m"
                        mdb__browse__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1717 "browse.m"
                        MR_hl_field(MR_mktag(1), mdb__browse__V_17_17, 0) = ((MR_Box) (mdb__browse__Dir_7));
#line 1717 "browse.m"
                        MR_hl_field(MR_mktag(1), mdb__browse__V_17_17, 1) = ((MR_Box) (mdb__browse__HeadVar__3_3));
#line 1717 "browse.m"
                      }
#line 1717 "browse.m"
                      /* direct tailcall eliminated */
#line 1717 "browse.m"
                      {
#line 1717 "browse.m"
                        MR_Word mdb__browse__HeadVar__1__tmp_copy_1 = mdb__browse__Dirs_8;
#line 1717 "browse.m"
                        MR_Word mdb__browse__HeadVar__3__tmp_copy_3 = mdb__browse__V_17_17;

#line 1717 "browse.m"
                        mdb__browse__HeadVar__3_3 = mdb__browse__HeadVar__3__tmp_copy_3;
#line 1717 "browse.m"
                        mdb__browse__HeadVar__1_1 = mdb__browse__HeadVar__1__tmp_copy_1;
#line 1717 "browse.m"
                      }
#line 1717 "browse.m"
                      continue;
#line 1717 "browse.m"
                    }
#line 1716 "browse.m"
                }
#line 1712 "browse.m"
                break;
#line 1712 "browse.m"
            }
#line 1708 "browse.m"
          }
#line 1707 "browse.m"
      }
#line 1707 "browse.m"
      break;
#line 1707 "browse.m"
    }
#line 1704 "browse.m"
}

#line 1516 "browse.m"
static void MR_CALL 
mdb__browse__change_dir_3_p_0(
#line 1516 "browse.m"
  MR_Word mdb__browse__PwdDirs_4,
#line 1516 "browse.m"
  MR_Word mdb__browse__Path_5,
#line 1516 "browse.m"
  MR_Word * mdb__browse__RootRelDirs_6)
#line 1516 "browse.m"
{
#line 1518 "browse.m"
  {
#line 1518 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 1518 "browse.m"
    MR_Word mdb__browse__NewDirs_8;
#line 1518 "browse.m"
    MR_Word mdb__browse__RevDirs_13;

#line 1522 "browse.m"
    if (((MR_tag((MR_Word) mdb__browse__Path_5)) == (MR_mktag((MR_Integer) 1))))
#line 1523 "browse.m"
      {
#line 1523 "browse.m"
        MR_Word mdb__browse__Dirs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Path_5, (MR_Integer) 0)));

#line 1524 "browse.m"
        {
#line 1524 "browse.m"
          mercury__list__append_3_p_1((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0, mdb__browse__PwdDirs_4, mdb__browse__Dirs_9, &mdb__browse__NewDirs_8);
        }
#line 1523 "browse.m"
      }
#line 1522 "browse.m"
    else
#line 1520 "browse.m"
      mdb__browse__NewDirs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Path_5, (MR_Integer) 0)));
#line 1693 "browse.m"
    {
#line 1693 "browse.m"
      mercury__list__reverse_2_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0, mdb__browse__NewDirs_8, &mdb__browse__RevDirs_13);
    }
#line 1694 "browse.m"
    {
#line 1694 "browse.m"
      mdb__browse__simplify_rev_dirs_4_p_0(mdb__browse__RevDirs_13, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__RootRelDirs_6);
#line 1694 "browse.m"
      return;
    }
#line 1518 "browse.m"
  }
#line 1516 "browse.m"
}

#line 1510 "browse.m"
static void MR_CALL 
mdb__browse__set_path_3_p_0(
#line 1510 "browse.m"
  MR_Word mdb__browse__NewPath_4,
#line 1510 "browse.m"
  MR_Word mdb__browse__Info0_5,
#line 1510 "browse.m"
  MR_Word * mdb__browse__Info_6)
#line 1510 "browse.m"
{
#line 1512 "browse.m"
  {
#line 1512 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 1512 "browse.m"
    MR_Word mdb__browse__NewDirs_7;
#line 1512 "browse.m"
    MR_Word mdb__browse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info0_5, (MR_Integer) 1)));
#line 1512 "browse.m"
    MR_Word mdb__browse__NewDirs_26;
#line 1512 "browse.m"
    MR_Word mdb__browse__RevDirs_31;
#line 1513 "browse.m"
    MR_Word mdb__browse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info0_5, (MR_Integer) 0)));
#line 1513 "browse.m"
    MR_Word mdb__browse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info0_5, (MR_Integer) 2)));
#line 1513 "browse.m"
    MR_Word mdb__browse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info0_5, (MR_Integer) 3)));
#line 1513 "browse.m"
    MR_Word mdb__browse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info0_5, (MR_Integer) 4)));
#line 1513 "browse.m"
    MR_Word mdb__browse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info0_5, (MR_Integer) 5)));
#line 1513 "browse.m"
    MR_Word mdb__browse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info0_5, (MR_Integer) 6)));
#line 1514 "browse.m"
    MR_Word mdb__browse__V_15_15;
#line 1514 "browse.m"
    MR_Word mdb__browse__V_17_17;
#line 1514 "browse.m"
    MR_Word mdb__browse__V_18_18;
#line 1514 "browse.m"
    MR_Word mdb__browse__V_19_19;
#line 1514 "browse.m"
    MR_Word mdb__browse__V_20_20;
#line 1514 "browse.m"
    MR_Word mdb__browse__V_21_21;
#line 1514 "browse.m"
    MR_Word mdb__browse__V_16_16;

#line 1522 "browse.m"
    if (((MR_tag((MR_Word) mdb__browse__NewPath_4)) == (MR_mktag((MR_Integer) 1))))
#line 1523 "browse.m"
      {
#line 1523 "browse.m"
        MR_Word mdb__browse__Dirs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__NewPath_4, (MR_Integer) 0)));

#line 1524 "browse.m"
        {
#line 1524 "browse.m"
          mercury__list__append_3_p_1((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0, mdb__browse__V_8_8, mdb__browse__Dirs_27, &mdb__browse__NewDirs_26);
        }
#line 1523 "browse.m"
      }
#line 1522 "browse.m"
    else
#line 1520 "browse.m"
      mdb__browse__NewDirs_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__NewPath_4, (MR_Integer) 0)));
#line 1693 "browse.m"
    {
#line 1693 "browse.m"
      mercury__list__reverse_2_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0, mdb__browse__NewDirs_26, &mdb__browse__RevDirs_31);
    }
#line 1694 "browse.m"
    {
#line 1694 "browse.m"
      mdb__browse__simplify_rev_dirs_4_p_0(mdb__browse__RevDirs_31, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__browse__NewDirs_7);
    }
#line 1514 "browse.m"
    mdb__browse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info0_5, (MR_Integer) 0)));
#line 1514 "browse.m"
    mdb__browse__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info0_5, (MR_Integer) 1)));
#line 1514 "browse.m"
    mdb__browse__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info0_5, (MR_Integer) 2)));
#line 1514 "browse.m"
    mdb__browse__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info0_5, (MR_Integer) 3)));
#line 1514 "browse.m"
    mdb__browse__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info0_5, (MR_Integer) 4)));
#line 1514 "browse.m"
    mdb__browse__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info0_5, (MR_Integer) 5)));
#line 1514 "browse.m"
    mdb__browse__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info0_5, (MR_Integer) 6)));
#line 1514 "browse.m"
    {
#line 1514 "browse.m"
      MR_Word base;
#line 1514 "browse.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1514 "browse.m"
      *mdb__browse__Info_6 = base;
#line 1514 "browse.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browse__V_15_15));
#line 1514 "browse.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browse__NewDirs_7));
#line 1514 "browse.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browse__V_17_17));
#line 1514 "browse.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browse__V_18_18));
#line 1514 "browse.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browse__V_19_19));
#line 1514 "browse.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browse__V_20_20));
#line 1514 "browse.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browse__V_21_21));
#line 1514 "browse.m"
    }
#line 1512 "browse.m"
  }
#line 1510 "browse.m"
}

#line 1464 "browse.m"
static void MR_CALL 
mdb__browse__deref_subterm_2_4_p_0(
#line 1464 "browse.m"
  MR_Word mdb__browse__Univ_5,
#line 1464 "browse.m"
  MR_Word mdb__browse__Path_6,
#line 1464 "browse.m"
  MR_Word mdb__browse__RevPath0_7,
#line 1464 "browse.m"
  MR_Word * mdb__browse__Result_8)
#line 1464 "browse.m"
{
#line 1469 "browse.m"
  while (MR_TRUE)
#line 1469 "browse.m"
    {
#line 1469 "browse.m"
      /* tailcall optimized into a loop */
#line 1469 "browse.m"
      {
#line 1469 "browse.m"
        MR_bool mdb__browse__succeeded;

#line 1469 "browse.m"
        if ((mdb__browse__Path_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1470 "browse.m"
          {
#line 1470 "browse.m"
            MR_Word base;
#line 1470 "browse.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1470 "browse.m"
            *mdb__browse__Result_8 = base;
#line 1470 "browse.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browse__Univ_5));
#line 1470 "browse.m"
          }
#line 1469 "browse.m"
        else
#line 1472 "browse.m"
          {
#line 1472 "browse.m"
            MR_Word mdb__browse__Dir_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Path_6, (MR_Integer) 0)));
#line 1472 "browse.m"
            MR_Word mdb__browse__Dirs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Path_6, (MR_Integer) 1)));
#line 1472 "browse.m"
            MR_Word mdb__browse__MaybeValue_13;

#line 1487 "browse.m"
#line 1487 "browse.m"
            switch (MR_tag((MR_Word) mdb__browse__Dir_9)) {
#line 1487 "browse.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1487 "browse.m"
              case (MR_Integer) 0:
#line 1491 "browse.m"
                {
#line 1492 "browse.m"
                  {
#line 1492 "browse.m"
                    mercury__require__error_1_p_0((MR_String) "deref_subterm_2: found parent");
#line 1492 "browse.m"
                    return;
                  }
#line 1491 "browse.m"
                }
#line 1487 "browse.m"
                break;
#line 1487 "browse.m"
              case (MR_Integer) 1:
#line 1474 "browse.m"
                {
#line 1474 "browse.m"
                  MR_Integer mdb__browse__N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browse__Dir_9, (MR_Integer) 0)));
#line 1476 "browse.m"
                  MR_Word mdb__browse__TypeCtor_12;
#line 1476 "browse.m"
                  MR_Word mdb__browse__V_19_19;
#line 1476 "browse.m"
                  MR_String mdb__browse__V_20_20;
#line 1476 "browse.m"
                  MR_String mdb__browse__V_21_21;

#line 1476 "browse.m"
                  {
#line 1476 "browse.m"
                    mdb__browse__V_19_19 = mercury__univ__univ_type_1_f_0(mdb__browse__Univ_5);
                  }
#line 1476 "browse.m"
                  {
#line 1476 "browse.m"
                    mdb__browse__TypeCtor_12 = mercury__type_desc__type_ctor_1_f_0(mdb__browse__V_19_19);
                  }
#line 1477 "browse.m"
                  {
#line 1477 "browse.m"
                    mdb__browse__V_20_20 = mercury__type_desc__type_ctor_name_1_f_0(mdb__browse__TypeCtor_12);
                  }
#line 1477 "browse.m"
                  mdb__browse__succeeded = (strcmp(mdb__browse__V_20_20, (MR_String) "array") == 0);
#line 1476 "browse.m"
                  if (mdb__browse__succeeded)
#line 1476 "browse.m"
                    {
#line 1478 "browse.m"
                      {
#line 1478 "browse.m"
                        mdb__browse__V_21_21 = mercury__type_desc__type_ctor_module_name_1_f_0(mdb__browse__TypeCtor_12);
                      }
#line 1478 "browse.m"
                      mdb__browse__succeeded = (strcmp(mdb__browse__V_21_21, (MR_String) "array") == 0);
#line 1476 "browse.m"
                    }
#line 1482 "browse.m"
                  if (mdb__browse__succeeded)
#line 1481 "browse.m"
                    {
#line 1481 "browse.m"
                      MR_Word mdb__browse__TypeInfo_28_28;
#line 1481 "browse.m"
                      MR_Box mdb__browse__V_22_22;

#line 1481 "browse.m"
                      {
#line 1481 "browse.m"
                        mdb__browse__V_22_22 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_28_28, mdb__browse__Univ_5);
                      }
#line 1481 "browse.m"
                      {
#line 1481 "browse.m"
                        mercury__deconstruct__arg_cc_3_p_0(mdb__browse__TypeInfo_28_28, mdb__browse__V_22_22, mdb__browse__N_11, &mdb__browse__MaybeValue_13);
                      }
#line 1481 "browse.m"
                    }
#line 1482 "browse.m"
                  else
#line 1485 "browse.m"
                    {
#line 1485 "browse.m"
                      MR_Word mdb__browse__TypeInfo_29_29;
#line 1485 "browse.m"
                      MR_Box mdb__browse__V_23_23;
#line 1485 "browse.m"
                      MR_Integer mdb__browse__V_24_24;

#line 1485 "browse.m"
                      {
#line 1485 "browse.m"
                        mdb__browse__V_23_23 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_29_29, mdb__browse__Univ_5);
                      }
#line 1485 "browse.m"
                      mdb__browse__V_24_24 = (mdb__browse__N_11 - (MR_Integer) 1);
#line 1485 "browse.m"
                      {
#line 1485 "browse.m"
                        mercury__deconstruct__arg_cc_3_p_0(mdb__browse__TypeInfo_29_29, mdb__browse__V_23_23, mdb__browse__V_24_24, &mdb__browse__MaybeValue_13);
                      }
#line 1485 "browse.m"
                    }
#line 1474 "browse.m"
                }
#line 1487 "browse.m"
                break;
#line 1487 "browse.m"
              case (MR_Integer) 2:
#line 1488 "browse.m"
                {
#line 1488 "browse.m"
                  MR_Word mdb__browse__TypeInfo_30_30;
#line 1488 "browse.m"
                  MR_String mdb__browse__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browse__Dir_9, (MR_Integer) 0)));
#line 1488 "browse.m"
                  MR_Box mdb__browse__V_18_18;

#line 1489 "browse.m"
                  {
#line 1489 "browse.m"
                    mdb__browse__V_18_18 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_30_30, mdb__browse__Univ_5);
                  }
#line 1489 "browse.m"
                  {
#line 1489 "browse.m"
                    mercury__deconstruct__named_arg_cc_3_p_0(mdb__browse__TypeInfo_30_30, mdb__browse__V_18_18, mdb__browse__Name_14, &mdb__browse__MaybeValue_13);
                  }
#line 1488 "browse.m"
                }
#line 1487 "browse.m"
                break;
#line 1487 "browse.m"
            }
#line 1498 "browse.m"
            if ((mdb__browse__MaybeValue_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1499 "browse.m"
              {
#line 1499 "browse.m"
                MR_Word mdb__browse__V_26_26;

#line 1500 "browse.m"
                {
#line 1500 "browse.m"
                  mdb__browse__V_26_26 = mercury__list__reverse_1_f_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0, mdb__browse__RevPath0_7);
                }
#line 1500 "browse.m"
                {
#line 1500 "browse.m"
                  MR_Word base;
#line 1500 "browse.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1500 "browse.m"
                  *mdb__browse__Result_8 = base;
#line 1500 "browse.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__browse__V_26_26));
#line 1500 "browse.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__browse__Dir_9));
#line 1500 "browse.m"
                }
#line 1499 "browse.m"
              }
#line 1498 "browse.m"
            else
#line 1495 "browse.m"
              {
#line 1495 "browse.m"
                MR_Word mdb__browse__TypeInfo_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeValue_13, (MR_Integer) 0)));
#line 1495 "browse.m"
                MR_Box mdb__browse__Value_15 = (MR_hl_field(MR_mktag(1), mdb__browse__MaybeValue_13, (MR_Integer) 1));
#line 1495 "browse.m"
                MR_Word mdb__browse__ArgN_16;
#line 1495 "browse.m"
                MR_Word mdb__browse__V_27_27;

#line 1496 "browse.m"
                {
#line 1496 "browse.m"
                  mdb__browse__ArgN_16 = mercury__univ__univ_1_f_0(mdb__browse__TypeInfo_31_31, mdb__browse__Value_15);
                }
#line 1497 "browse.m"
                {
#line 1497 "browse.m"
                  mdb__browse__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1497 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_27_27, 0) = ((MR_Box) (mdb__browse__Dir_9));
#line 1497 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_27_27, 1) = ((MR_Box) (mdb__browse__RevPath0_7));
#line 1497 "browse.m"
                }
#line 1497 "browse.m"
                /* direct tailcall eliminated */
#line 1497 "browse.m"
                {
#line 1497 "browse.m"
                  MR_Word mdb__browse__Univ__tmp_copy_5 = mdb__browse__ArgN_16;
#line 1497 "browse.m"
                  MR_Word mdb__browse__Path__tmp_copy_6 = mdb__browse__Dirs_10;
#line 1497 "browse.m"
                  MR_Word mdb__browse__RevPath0__tmp_copy_7 = mdb__browse__V_27_27;

#line 1497 "browse.m"
                  mdb__browse__RevPath0_7 = mdb__browse__RevPath0__tmp_copy_7;
#line 1497 "browse.m"
                  mdb__browse__Path_6 = mdb__browse__Path__tmp_copy_6;
#line 1497 "browse.m"
                  mdb__browse__Univ_5 = mdb__browse__Univ__tmp_copy_5;
#line 1497 "browse.m"
                }
#line 1497 "browse.m"
                continue;
#line 1495 "browse.m"
              }
#line 1472 "browse.m"
          }
#line 1469 "browse.m"
      }
#line 1469 "browse.m"
      break;
#line 1469 "browse.m"
    }
#line 1464 "browse.m"
}

#line 1399 "browse.m"
static void MR_CALL 
mdb__browse__deref_subterm_3_p_0(
#line 1399 "browse.m"
  MR_Word mdb__browse__BrowserTerm_4,
#line 1399 "browse.m"
  MR_Word mdb__browse__Path_5,
#line 1399 "browse.m"
  MR_Word * mdb__browse__Result_6)
#line 1399 "browse.m"
{
#line 1402 "browse.m"
  {
#line 1402 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 1402 "browse.m"
    MR_Word mdb__browse__SimplifiedPath_7;
#line 1402 "browse.m"
    MR_Word mdb__browse__RevDirs_35;

#line 1693 "browse.m"
    {
#line 1693 "browse.m"
      mercury__list__reverse_2_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0, mdb__browse__Path_5, &mdb__browse__RevDirs_35);
    }
#line 1694 "browse.m"
    {
#line 1694 "browse.m"
      mdb__browse__simplify_rev_dirs_4_p_0(mdb__browse__RevDirs_35, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__browse__SimplifiedPath_7);
    }
#line 1408 "browse.m"
    if (((MR_tag((MR_Word) mdb__browse__BrowserTerm_4)) == (MR_mktag((MR_Integer) 0))))
#line 1405 "browse.m"
      {
#line 1405 "browse.m"
        MR_Word mdb__browse__Univ_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__BrowserTerm_4, (MR_Integer) 0)));
#line 1405 "browse.m"
        MR_Word mdb__browse__SubResult_9;

#line 1406 "browse.m"
        {
#line 1406 "browse.m"
          mdb__browse__deref_subterm_2_4_p_0(mdb__browse__Univ_8, mdb__browse__SimplifiedPath_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__browse__SubResult_9);
        }
#line 1456 "browse.m"
        if (((MR_tag((MR_Word) mdb__browse__SubResult_9)) == (MR_mktag((MR_Integer) 1))))
#line 1461 "browse.m"
          *mdb__browse__Result_6 = (MR_Word) mdb__browse__SubResult_9;
#line 1456 "browse.m"
        else
#line 1456 "browse.m"
          {
#line 1456 "browse.m"
            MR_Word mdb__browse__SubUniv_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__SubResult_9, (MR_Integer) 0)));
#line 1456 "browse.m"
            MR_Word mdb__browse__SubBrowserTerm_42;

#line 1457 "browse.m"
            {
#line 1457 "browse.m"
              mdb__browse__SubBrowserTerm_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1457 "browse.m"
              MR_hl_field(MR_mktag(0), mdb__browse__SubBrowserTerm_42, 0) = ((MR_Box) (mdb__browse__SubUniv_41));
#line 1457 "browse.m"
            }
#line 1458 "browse.m"
            {
#line 1458 "browse.m"
              MR_Word base;
#line 1458 "browse.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1458 "browse.m"
              *mdb__browse__Result_6 = base;
#line 1458 "browse.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browse__SubBrowserTerm_42));
#line 1458 "browse.m"
            }
#line 1456 "browse.m"
          }
#line 1405 "browse.m"
      }
#line 1408 "browse.m"
    else
#line 1409 "browse.m"
      {
#line 1409 "browse.m"
        MR_Word mdb__browse__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_4, (MR_Integer) 1)));
#line 1409 "browse.m"
        MR_Word mdb__browse__MaybeReturn_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_4, (MR_Integer) 2)));
#line 1409 "browse.m"
        MR_String mdb__browse___Functor_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_4, (MR_Integer) 0)));

#line 1414 "browse.m"
        if ((mdb__browse__SimplifiedPath_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1413 "browse.m"
          {
#line 1413 "browse.m"
            MR_Word base;
#line 1413 "browse.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1413 "browse.m"
            *mdb__browse__Result_6 = base;
#line 1413 "browse.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browse__BrowserTerm_4));
#line 1413 "browse.m"
          }
#line 1414 "browse.m"
        else
#line 1415 "browse.m"
          {
#line 1415 "browse.m"
            MR_Word mdb__browse__Step_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__SimplifiedPath_7, (MR_Integer) 0)));
#line 1415 "browse.m"
            MR_Word mdb__browse__SimplifiedPathTail_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__SimplifiedPath_7, (MR_Integer) 1)));
#line 1438 "browse.m"
            MR_Word mdb__browse__ArgUniv_18;

#line 1429 "browse.m"
            if (((MR_tag((MR_Word) mdb__browse__Step_14)) == (MR_mktag((MR_Integer) 2))))
#line 1430 "browse.m"
              {
#line 1430 "browse.m"
                MR_String mdb__browse__Name_19 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browse__Step_14, (MR_Integer) 0)));
#line 1444 "browse.m"
                MR_Integer mdb__browse__lo_0;
#line 1444 "browse.m"
                MR_Integer mdb__browse__hi_1;
#line 1444 "browse.m"
                MR_Integer mdb__browse__mid_2;
#line 1444 "browse.m"
                MR_Integer mdb__browse__result_3;

#line 1444 "browse.m"
                /* binary string simple lookup switch */
#line 1444 "browse.m"
                mdb__browse__lo_0 = (MR_Integer) 0;
#line 1444 "browse.m"
                mdb__browse__hi_1 = (MR_Integer) 5;
#line 1444 "browse.m"
                do
#line 1444 "browse.m"
                  {
#line 1444 "browse.m"
                    mdb__browse__mid_2 = (((mdb__browse__lo_0 + mdb__browse__hi_1)) / (MR_Integer) 2);
#line 1444 "browse.m"
                    mdb__browse__result_3 = MR_strcmp(mdb__browse__Name_19, ((&mdb__browse_vector_common_7[10 + mdb__browse__mid_2]))->mdb__browse__vector_common_type_7_0__vct_7_f_0);
#line 1444 "browse.m"
                    if ((mdb__browse__result_3 == (MR_Integer) 0))
#line 1444 "browse.m"
                      {
#line 1444 "browse.m"
                        mdb__browse__succeeded = MR_TRUE;
#line 1444 "browse.m"
                        /* jump out of search loop */
#line 1444 "browse.m"
                        goto label_0;
#line 1444 "browse.m"
                      }
#line 1444 "browse.m"
                    else
#line 1444 "browse.m"
                    if ((mdb__browse__result_3 < (MR_Integer) 0))
#line 1444 "browse.m"
                      mdb__browse__hi_1 = (mdb__browse__mid_2 - (MR_Integer) 1);
#line 1444 "browse.m"
                    else
#line 1444 "browse.m"
                      mdb__browse__lo_0 = (mdb__browse__mid_2 + (MR_Integer) 1);
#line 1444 "browse.m"
                  }
#line 1444 "browse.m"
                while ((mdb__browse__lo_0 <= mdb__browse__hi_1));
#line 1444 "browse.m"
                mdb__browse__succeeded = MR_FALSE;
#line 1444 "browse.m"
              label_0:;
#line 1430 "browse.m"
                if (mdb__browse__succeeded)
#line 1430 "browse.m"
                  {
#line 1432 "browse.m"
                    mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__MaybeReturn_12)) == (MR_mktag((MR_Integer) 1)));
#line 1432 "browse.m"
                    if (mdb__browse__succeeded)
#line 1432 "browse.m"
                      mdb__browse__ArgUniv_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeReturn_12, (MR_Integer) 0)));
#line 1430 "browse.m"
                  }
#line 1430 "browse.m"
              }
#line 1429 "browse.m"
            else
#line 1418 "browse.m"
              {
#line 1418 "browse.m"
                MR_Integer mdb__browse__N_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browse__Step_14, (MR_Integer) 0)));
#line 1424 "browse.m"
                MR_Word mdb__browse__ReturnValue_17;
#line 1420 "browse.m"
                MR_Integer mdb__browse__V_20_20;
#line 1420 "browse.m"
                MR_Integer mdb__browse__V_21_21;

#line 1420 "browse.m"
                {
#line 1420 "browse.m"
                  mdb__browse__V_20_20 = mercury__list__length_1_f_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__browse__Args_11);
                }
#line 1420 "browse.m"
                mdb__browse__V_21_21 = (mdb__browse__N_16 - mdb__browse__V_20_20);
#line 1420 "browse.m"
                mdb__browse__succeeded = (mdb__browse__V_21_21 == (MR_Integer) 1);
#line 1420 "browse.m"
                if (mdb__browse__succeeded)
#line 1420 "browse.m"
                  {
#line 1421 "browse.m"
                    mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__MaybeReturn_12)) == (MR_mktag((MR_Integer) 1)));
#line 1421 "browse.m"
                    if (mdb__browse__succeeded)
#line 1421 "browse.m"
                      mdb__browse__ReturnValue_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeReturn_12, (MR_Integer) 0)));
#line 1420 "browse.m"
                  }
#line 1424 "browse.m"
                if (mdb__browse__succeeded)
#line 1423 "browse.m"
                  {
#line 1423 "browse.m"
                    mdb__browse__ArgUniv_18 = mdb__browse__ReturnValue_17;
#line 1423 "browse.m"
                    mdb__browse__succeeded = MR_TRUE;
#line 1423 "browse.m"
                  }
#line 1424 "browse.m"
                else
#line 1427 "browse.m"
                  {
#line 1427 "browse.m"
                    MR_Box mdb__browse__conv0_ArgUniv_18;

#line 1427 "browse.m"
                    {
#line 1427 "browse.m"
                      mdb__browse__succeeded = mercury__list__index1_3_p_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__browse__Args_11, mdb__browse__N_16, &mdb__browse__conv0_ArgUniv_18);
                    }
#line 1427 "browse.m"
                    if (mdb__browse__succeeded)
#line 1427 "browse.m"
                      {
#line 1427 "browse.m"
                        mdb__browse__ArgUniv_18 = ((MR_Word) mdb__browse__conv0_ArgUniv_18);
#line 1427 "browse.m"
                        mdb__browse__succeeded = MR_TRUE;
#line 1427 "browse.m"
                      }
#line 1427 "browse.m"
                  }
#line 1418 "browse.m"
              }
#line 1438 "browse.m"
            if (mdb__browse__succeeded)
#line 1436 "browse.m"
              {
#line 1436 "browse.m"
                MR_Word mdb__browse__V_22_22;
#line 1436 "browse.m"
                MR_Word mdb__browse__SubResult_26;

#line 1435 "browse.m"
                {
#line 1435 "browse.m"
                  mdb__browse__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1435 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_22_22, 0) = ((MR_Box) (mdb__browse__Step_14));
#line 1435 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1435 "browse.m"
                }
#line 1435 "browse.m"
                {
#line 1435 "browse.m"
                  mdb__browse__deref_subterm_2_4_p_0(mdb__browse__ArgUniv_18, mdb__browse__SimplifiedPathTail_15, mdb__browse__V_22_22, &mdb__browse__SubResult_26);
                }
#line 1456 "browse.m"
                if (((MR_tag((MR_Word) mdb__browse__SubResult_26)) == (MR_mktag((MR_Integer) 1))))
#line 1461 "browse.m"
                  *mdb__browse__Result_6 = (MR_Word) mdb__browse__SubResult_26;
#line 1456 "browse.m"
                else
#line 1456 "browse.m"
                  {
#line 1456 "browse.m"
                    MR_Word mdb__browse__SubUniv_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__SubResult_26, (MR_Integer) 0)));
#line 1456 "browse.m"
                    MR_Word mdb__browse__SubBrowserTerm_48;

#line 1457 "browse.m"
                    {
#line 1457 "browse.m"
                      mdb__browse__SubBrowserTerm_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1457 "browse.m"
                      MR_hl_field(MR_mktag(0), mdb__browse__SubBrowserTerm_48, 0) = ((MR_Box) (mdb__browse__SubUniv_47));
#line 1457 "browse.m"
                    }
#line 1458 "browse.m"
                    {
#line 1458 "browse.m"
                      MR_Word base;
#line 1458 "browse.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1458 "browse.m"
                      *mdb__browse__Result_6 = base;
#line 1458 "browse.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browse__SubBrowserTerm_48));
#line 1458 "browse.m"
                    }
#line 1456 "browse.m"
                  }
#line 1436 "browse.m"
              }
#line 1438 "browse.m"
            else
#line 1439 "browse.m"
              {
#line 1439 "browse.m"
                {
#line 1439 "browse.m"
                  MR_Word base;
#line 1439 "browse.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1439 "browse.m"
                  *mdb__browse__Result_6 = base;
#line 1439 "browse.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1439 "browse.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__browse__Step_14));
#line 1439 "browse.m"
                }
#line 1439 "browse.m"
              }
#line 1415 "browse.m"
          }
#line 1409 "browse.m"
      }
#line 1402 "browse.m"
  }
#line 1399 "browse.m"
}

#line 1379 "browse.m"
static void MR_CALL 
mdb__browse__unlines_2_p_0(
#line 1379 "browse.m"
  MR_Word mdb__browse__HeadVar__1_1,
#line 1379 "browse.m"
  MR_String * mdb__browse__HeadVar__2_2)
#line 1379 "browse.m"
{
#line 1381 "browse.m"
  {
#line 1381 "browse.m"
    MR_bool mdb__browse__succeeded;

#line 1381 "browse.m"
    if ((mdb__browse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1381 "browse.m"
      *mdb__browse__HeadVar__2_2 = (MR_String) "";
#line 1381 "browse.m"
    else
#line 1382 "browse.m"
      {
#line 1382 "browse.m"
        MR_String mdb__browse__Line_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__1_1, (MR_Integer) 0)));
#line 1382 "browse.m"
        MR_Word mdb__browse__Lines_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__1_1, (MR_Integer) 1)));
#line 1382 "browse.m"
        MR_String mdb__browse__NLine_6;
#line 1382 "browse.m"
        MR_String mdb__browse__Strs_7;

#line 1383 "browse.m"
        {
#line 1383 "browse.m"
          mercury__string__append_3_p_2(mdb__browse__Line_3, (MR_String) "\n", &mdb__browse__NLine_6);
        }
#line 1384 "browse.m"
        {
#line 1384 "browse.m"
          mdb__browse__unlines_2_p_0(mdb__browse__Lines_4, &mdb__browse__Strs_7);
        }
#line 1385 "browse.m"
        {
#line 1385 "browse.m"
          mercury__string__append_3_p_2(mdb__browse__NLine_6, mdb__browse__Strs_7, mdb__browse__HeadVar__2_2);
#line 1385 "browse.m"
          return;
        }
#line 1382 "browse.m"
      }
#line 1381 "browse.m"
  }
#line 1379 "browse.m"
}

#line 1347 "browse.m"
static void MR_CALL 
mdb__browse__args_to_string_verbose_list_9_p_0(
#line 1347 "browse.m"
  MR_Word mdb__browse__HeadVar__1_1,
#line 1347 "browse.m"
  MR_Word mdb__browse__HeadVar__2_2,
#line 1347 "browse.m"
  MR_Integer mdb__browse__HeadVar__3_3,
#line 1347 "browse.m"
  MR_Integer mdb__browse__HeadVar__4_4,
#line 1347 "browse.m"
  MR_Integer mdb__browse__CurSize_5,
#line 1347 "browse.m"
  MR_Integer * mdb__browse__NewSize_6,
#line 1347 "browse.m"
  MR_Integer mdb__browse__HeadVar__7_7,
#line 1347 "browse.m"
  MR_Integer mdb__browse__HeadVar__8_8,
#line 1347 "browse.m"
  MR_Word * mdb__browse__HeadVar__9_9)
#line 1347 "browse.m"
{
#line 1352 "browse.m"
  {
#line 1352 "browse.m"
    MR_bool mdb__browse__succeeded;

#line 1352 "browse.m"
    if ((mdb__browse__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1352 "browse.m"
      {
#line 1352 "browse.m"
        *mdb__browse__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1352 "browse.m"
        *mdb__browse__NewSize_6 = mdb__browse__CurSize_5;
#line 1352 "browse.m"
      }
#line 1352 "browse.m"
    else
#line 1352 "browse.m"
      {
#line 1352 "browse.m"
        MR_Word mdb__browse__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, (MR_Integer) 1)));
#line 1352 "browse.m"
        MR_Word mdb__browse__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, (MR_Integer) 0)));

#line 1352 "browse.m"
        if ((mdb__browse__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1355 "browse.m"
          {
#line 1355 "browse.m"
            MR_Word mdb__browse__TreeFrame_26;
#line 1355 "browse.m"
            MR_String mdb__browse__ArgNumS_27;
#line 1355 "browse.m"
            MR_String mdb__browse__LastBranchS_28;
#line 1355 "browse.m"
            MR_Word mdb__browse__V_30_30;
#line 1355 "browse.m"
            MR_Word mdb__browse__V_31_31;
#line 1355 "browse.m"
            MR_Word mdb__browse__V_35_35;

#line 1356 "browse.m"
            {
#line 1356 "browse.m"
              mdb__browse__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1356 "browse.m"
              MR_hl_field(MR_mktag(0), mdb__browse__V_30_30, 0) = ((MR_Box) (mdb__browse__V_74_74));
#line 1356 "browse.m"
            }
#line 1356 "browse.m"
            {
#line 1356 "browse.m"
              mdb__browse__browser_term_to_string_verbose_2_8_p_0(mdb__browse__HeadVar__1_1, mdb__browse__V_30_30, mdb__browse__HeadVar__4_4, mdb__browse__CurSize_5, mdb__browse__NewSize_6, mdb__browse__HeadVar__7_7, mdb__browse__HeadVar__8_8, &mdb__browse__TreeFrame_26);
            }
#line 1359 "browse.m"
            {
#line 1359 "browse.m"
              mercury__string__int_to_string_2_p_0(mdb__browse__HeadVar__3_3, &mdb__browse__ArgNumS_27);
            }
#line 1360 "browse.m"
            {
#line 1360 "browse.m"
              mdb__browse__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1360 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_31_31, 0) = ((MR_Box) (mdb__browse__ArgNumS_27));
#line 1360 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[47])));
#line 1360 "browse.m"
            }
#line 1360 "browse.m"
            {
#line 1360 "browse.m"
              mercury__string__append_list_2_p_0(mdb__browse__V_31_31, &mdb__browse__LastBranchS_28);
            }
#line 1361 "browse.m"
            {
#line 1361 "browse.m"
              mdb__browse__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_35_35, 0) = ((MR_Box) (mdb__browse__LastBranchS_28));
#line 1361 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1361 "browse.m"
            }
#line 1361 "browse.m"
            {
#line 1361 "browse.m"
              *mdb__browse__HeadVar__9_9 = mdb__frame__hglue_2_f_0(mdb__browse__V_35_35, mdb__browse__TreeFrame_26);
            }
#line 1355 "browse.m"
          }
#line 1352 "browse.m"
        else
#line 1363 "browse.m"
          {
#line 1363 "browse.m"
            MR_Integer mdb__browse__NewSize1_48;
#line 1363 "browse.m"
            MR_Word mdb__browse__TreeFrame_49;
#line 1363 "browse.m"
            MR_Integer mdb__browse__ArgNum1_50;
#line 1363 "browse.m"
            MR_Word mdb__browse__RestTreesFrame_52;
#line 1363 "browse.m"
            MR_String mdb__browse__ArgNumS_53;
#line 1363 "browse.m"
            MR_String mdb__browse__BranchFrameS_54;
#line 1363 "browse.m"
            MR_Integer mdb__browse__Height_55;
#line 1363 "browse.m"
            MR_Word mdb__browse__VBranchFrame_56;
#line 1363 "browse.m"
            MR_Word mdb__browse__LeftFrame_57;
#line 1363 "browse.m"
            MR_Word mdb__browse__TopFrame_58;
#line 1363 "browse.m"
            MR_Word mdb__browse__V_60_60;
#line 1363 "browse.m"
            MR_Word mdb__browse__V_63_63;
#line 1363 "browse.m"
            MR_Integer mdb__browse__V_67_67;
#line 1363 "browse.m"
            MR_Word mdb__browse__V_70_70;

#line 1364 "browse.m"
            {
#line 1364 "browse.m"
              mdb__browse__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1364 "browse.m"
              MR_hl_field(MR_mktag(0), mdb__browse__V_60_60, 0) = ((MR_Box) (mdb__browse__V_74_74));
#line 1364 "browse.m"
            }
#line 1364 "browse.m"
            {
#line 1364 "browse.m"
              mdb__browse__browser_term_to_string_verbose_2_8_p_0(mdb__browse__HeadVar__1_1, mdb__browse__V_60_60, mdb__browse__HeadVar__4_4, mdb__browse__CurSize_5, &mdb__browse__NewSize1_48, mdb__browse__HeadVar__7_7, mdb__browse__HeadVar__8_8, &mdb__browse__TreeFrame_49);
            }
#line 1366 "browse.m"
            mdb__browse__ArgNum1_50 = (mdb__browse__HeadVar__3_3 + (MR_Integer) 1);
#line 1367 "browse.m"
            {
#line 1367 "browse.m"
              mdb__browse__args_to_string_verbose_list_9_p_0(mdb__browse__HeadVar__1_1, mdb__browse__V_73_73, mdb__browse__ArgNum1_50, mdb__browse__HeadVar__4_4, mdb__browse__NewSize1_48, mdb__browse__NewSize_6, mdb__browse__HeadVar__7_7, mdb__browse__HeadVar__8_8, &mdb__browse__RestTreesFrame_52);
            }
#line 1371 "browse.m"
            {
#line 1371 "browse.m"
              mercury__string__int_to_string_2_p_0(mdb__browse__HeadVar__3_3, &mdb__browse__ArgNumS_53);
            }
#line 1372 "browse.m"
            {
#line 1372 "browse.m"
              mdb__browse__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1372 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_63_63, 0) = ((MR_Box) (mdb__browse__ArgNumS_53));
#line 1372 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[47])));
#line 1372 "browse.m"
            }
#line 1372 "browse.m"
            {
#line 1372 "browse.m"
              mercury__string__append_list_2_p_0(mdb__browse__V_63_63, &mdb__browse__BranchFrameS_54);
            }
#line 1373 "browse.m"
            {
#line 1373 "browse.m"
              mdb__browse__V_67_67 = mdb__frame__vsize_1_f_0(mdb__browse__TreeFrame_49);
            }
#line 1373 "browse.m"
            mdb__browse__Height_55 = (mdb__browse__V_67_67 - (MR_Integer) 1);
#line 1374 "browse.m"
            {
#line 1374 "browse.m"
              mercury__list__duplicate_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__browse__Height_55, ((MR_Box) ((MR_String) "|")), &mdb__browse__VBranchFrame_56);
            }
#line 1375 "browse.m"
            {
#line 1375 "browse.m"
              mdb__browse__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_70_70, 0) = ((MR_Box) (mdb__browse__BranchFrameS_54));
#line 1375 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1375 "browse.m"
            }
#line 1375 "browse.m"
            {
#line 1375 "browse.m"
              mdb__browse__LeftFrame_57 = mdb__frame__vglue_2_f_0(mdb__browse__V_70_70, mdb__browse__VBranchFrame_56);
            }
#line 1376 "browse.m"
            {
#line 1376 "browse.m"
              mdb__browse__TopFrame_58 = mdb__frame__hglue_2_f_0(mdb__browse__LeftFrame_57, mdb__browse__TreeFrame_49);
            }
#line 1377 "browse.m"
            {
#line 1377 "browse.m"
              *mdb__browse__HeadVar__9_9 = mdb__frame__vglue_2_f_0(mdb__browse__TopFrame_58, mdb__browse__RestTreesFrame_52);
            }
#line 1363 "browse.m"
          }
#line 1352 "browse.m"
      }
#line 1352 "browse.m"
  }
#line 1347 "browse.m"
}

#line 1315 "browse.m"
static void MR_CALL 
mdb__browse__browser_term_to_string_verbose_2_8_p_0(
#line 1315 "browse.m"
  MR_Word mdb__browse__BrowserDb_9,
#line 1315 "browse.m"
  MR_Word mdb__browse__BrowserTerm_10,
#line 1315 "browse.m"
  MR_Integer mdb__browse__MaxSize_11,
#line 1315 "browse.m"
  MR_Integer mdb__browse__CurSize_12,
#line 1315 "browse.m"
  MR_Integer * mdb__browse__NewSize_13,
#line 1315 "browse.m"
  MR_Integer mdb__browse__MaxDepth_14,
#line 1315 "browse.m"
  MR_Integer mdb__browse__CurDepth_15,
#line 1315 "browse.m"
  MR_Word * mdb__browse__Frame_16)
#line 1315 "browse.m"
{
#line 1319 "browse.m"
  {
#line 1319 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 1319 "browse.m"
    MR_Word mdb__browse__MaybeFunctorArityArgs_17;
#line 1319 "browse.m"
    MR_Word mdb__browse__MaybeReturn_18;
#line 1341 "browse.m"
    MR_String mdb__browse__Functor_19;
#line 1341 "browse.m"
    MR_Word mdb__browse__Args0_21;
#line 1323 "browse.m"
    MR_Tuple mdb__browse__V_29_29;
#line 1325 "browse.m"
    MR_Integer mdb__browse___Arity_20;

#line 1320 "browse.m"
    {
#line 1320 "browse.m"
      mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(mdb__browse__BrowserDb_9, mdb__browse__BrowserTerm_10, mdb__browse__MaxSize_11, &mdb__browse__MaybeFunctorArityArgs_17, &mdb__browse__MaybeReturn_18);
    }
#line 1323 "browse.m"
    mdb__browse__succeeded = (mdb__browse__CurSize_12 < mdb__browse__MaxSize_11);
#line 1323 "browse.m"
    if (mdb__browse__succeeded)
#line 1323 "browse.m"
      {
#line 1324 "browse.m"
        mdb__browse__succeeded = (mdb__browse__CurDepth_15 < mdb__browse__MaxDepth_14);
#line 1323 "browse.m"
        if (mdb__browse__succeeded)
#line 1323 "browse.m"
          {
#line 1325 "browse.m"
            mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__MaybeFunctorArityArgs_17)) == (MR_mktag((MR_Integer) 1)));
#line 1325 "browse.m"
            if (mdb__browse__succeeded)
#line 1325 "browse.m"
              {
#line 1325 "browse.m"
                mdb__browse__V_29_29 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeFunctorArityArgs_17, (MR_Integer) 0)));
#line 1325 "browse.m"
                mdb__browse__Functor_19 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__V_29_29, (MR_Integer) 0)));
#line 1325 "browse.m"
                mdb__browse___Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__V_29_29, (MR_Integer) 1)));
#line 1325 "browse.m"
                mdb__browse__Args0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__V_29_29, (MR_Integer) 2)));
#line 1325 "browse.m"
                mdb__browse__succeeded = MR_TRUE;
#line 1325 "browse.m"
              }
#line 1323 "browse.m"
          }
#line 1323 "browse.m"
      }
#line 1341 "browse.m"
    if (mdb__browse__succeeded)
#line 1334 "browse.m"
      {
#line 1334 "browse.m"
        MR_Word mdb__browse__Args_23;
#line 1334 "browse.m"
        MR_Integer mdb__browse__CurSize1_24;
#line 1334 "browse.m"
        MR_Integer mdb__browse__CurDepth1_25;
#line 1334 "browse.m"
        MR_Word mdb__browse__ArgsFrame_27;
#line 1334 "browse.m"
        MR_Word mdb__browse__V_34_34;

#line 1331 "browse.m"
        if ((mdb__browse__MaybeReturn_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1333 "browse.m"
          mdb__browse__Args_23 = mdb__browse__Args0_21;
#line 1331 "browse.m"
        else
#line 1329 "browse.m"
          {
#line 1329 "browse.m"
            MR_Word mdb__browse__Return_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeReturn_18, (MR_Integer) 0)));
#line 1329 "browse.m"
            MR_Word mdb__browse__V_30_30;

#line 1330 "browse.m"
            {
#line 1330 "browse.m"
              mdb__browse__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_30_30, 0) = ((MR_Box) (mdb__browse__Return_22));
#line 1330 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1330 "browse.m"
            }
#line 1330 "browse.m"
            {
#line 1330 "browse.m"
              mercury__list__append_3_p_1((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__browse__Args0_21, mdb__browse__V_30_30, &mdb__browse__Args_23);
            }
#line 1329 "browse.m"
          }
#line 1335 "browse.m"
        mdb__browse__CurSize1_24 = (mdb__browse__CurSize_12 + (MR_Integer) 1);
#line 1336 "browse.m"
        mdb__browse__CurDepth1_25 = (mdb__browse__CurDepth_15 + (MR_Integer) 1);
#line 1338 "browse.m"
        {
#line 1338 "browse.m"
          mdb__browse__args_to_string_verbose_list_9_p_0(mdb__browse__BrowserDb_9, mdb__browse__Args_23, (MR_Integer) 1, mdb__browse__MaxSize_11, mdb__browse__CurSize1_24, mdb__browse__NewSize_13, mdb__browse__MaxDepth_14, mdb__browse__CurDepth1_25, &mdb__browse__ArgsFrame_27);
        }
#line 1340 "browse.m"
        {
#line 1340 "browse.m"
          mdb__browse__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "browse.m"
          MR_hl_field(MR_mktag(1), mdb__browse__V_34_34, 0) = ((MR_Box) (mdb__browse__Functor_19));
#line 1340 "browse.m"
          MR_hl_field(MR_mktag(1), mdb__browse__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1340 "browse.m"
        }
#line 1340 "browse.m"
        {
#line 1340 "browse.m"
          *mdb__browse__Frame_16 = mdb__frame__vglue_2_f_0(mdb__browse__V_34_34, mdb__browse__ArgsFrame_27);
        }
#line 1334 "browse.m"
      }
#line 1341 "browse.m"
    else
#line 1342 "browse.m"
      {
#line 1342 "browse.m"
        MR_String mdb__browse__Line_28;
#line 1342 "browse.m"
        MR_String mdb__browse__Functor_41;
#line 1342 "browse.m"
        MR_Integer mdb__browse__Arity_42;
#line 1342 "browse.m"
        MR_Word mdb__browse__IsFunc_43;

#line 1251 "browse.m"
        {
#line 1251 "browse.m"
          mdb__browser_info__functor_browser_term_cc_5_p_0(mdb__browse__BrowserDb_9, mdb__browse__BrowserTerm_10, &mdb__browse__Functor_41, &mdb__browse__Arity_42, &mdb__browse__IsFunc_43);
        }
#line 1252 "browse.m"
        mdb__browse__succeeded = (mdb__browse__Arity_42 == (MR_Integer) 0);
#line 1254 "browse.m"
        if (mdb__browse__succeeded)
#line 1253 "browse.m"
          mdb__browse__Line_28 = mdb__browse__Functor_41;
#line 1254 "browse.m"
        else
#line 1255 "browse.m"
          {
#line 1255 "browse.m"
            MR_String mdb__browse__ArityStr_44;

#line 1255 "browse.m"
            {
#line 1255 "browse.m"
              mercury__string__int_to_string_2_p_0(mdb__browse__Arity_42, &mdb__browse__ArityStr_44);
            }
#line 1259 "browse.m"
#line 1259 "browse.m"
            switch (mdb__browse__IsFunc_43) {
#line 1259 "browse.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1259 "browse.m"
              case (MR_Integer) 0:
#line 1260 "browse.m"
                {
#line 1260 "browse.m"
                  MR_Word mdb__browse__V_45_45;
#line 1260 "browse.m"
                  MR_Word mdb__browse__V_46_46;
#line 1260 "browse.m"
                  MR_Word mdb__browse__V_48_48;

#line 1261 "browse.m"
                  {
#line 1261 "browse.m"
                    mdb__browse__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_48_48, 0) = ((MR_Box) (mdb__browse__ArityStr_44));
#line 1261 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1261 "browse.m"
                  }
#line 1261 "browse.m"
                  {
#line 1261 "browse.m"
                    mdb__browse__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_46_46, 0) = ((MR_Box) ((MR_String) "/"));
#line 1261 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_46_46, 1) = ((MR_Box) (mdb__browse__V_48_48));
#line 1261 "browse.m"
                  }
#line 1261 "browse.m"
                  {
#line 1261 "browse.m"
                    mdb__browse__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_45_45, 0) = ((MR_Box) (mdb__browse__Functor_41));
#line 1261 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_45_45, 1) = ((MR_Box) (mdb__browse__V_46_46));
#line 1261 "browse.m"
                  }
#line 1261 "browse.m"
                  {
#line 1261 "browse.m"
                    mercury__string__append_list_2_p_0(mdb__browse__V_45_45, &mdb__browse__Line_28);
                  }
#line 1260 "browse.m"
                }
#line 1259 "browse.m"
                break;
#line 1259 "browse.m"
              case (MR_Integer) 1:
#line 1257 "browse.m"
                {
#line 1257 "browse.m"
                  MR_Word mdb__browse__V_50_50;
#line 1257 "browse.m"
                  MR_Word mdb__browse__V_51_51;
#line 1257 "browse.m"
                  MR_Word mdb__browse__V_53_53;

#line 1258 "browse.m"
                  {
#line 1258 "browse.m"
                    mdb__browse__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_53_53, 0) = ((MR_Box) (mdb__browse__ArityStr_44));
#line 1258 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[43])));
#line 1258 "browse.m"
                  }
#line 1258 "browse.m"
                  {
#line 1258 "browse.m"
                    mdb__browse__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_51_51, 0) = ((MR_Box) ((MR_String) "/"));
#line 1258 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_51_51, 1) = ((MR_Box) (mdb__browse__V_53_53));
#line 1258 "browse.m"
                  }
#line 1258 "browse.m"
                  {
#line 1258 "browse.m"
                    mdb__browse__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_50_50, 0) = ((MR_Box) (mdb__browse__Functor_41));
#line 1258 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_50_50, 1) = ((MR_Box) (mdb__browse__V_51_51));
#line 1258 "browse.m"
                  }
#line 1258 "browse.m"
                  {
#line 1258 "browse.m"
                    mercury__string__append_list_2_p_0(mdb__browse__V_50_50, &mdb__browse__Line_28);
                  }
#line 1257 "browse.m"
                }
#line 1259 "browse.m"
                break;
#line 1259 "browse.m"
            }
#line 1255 "browse.m"
          }
#line 1343 "browse.m"
        {
#line 1343 "browse.m"
          MR_Word base;
#line 1343 "browse.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "browse.m"
          *mdb__browse__Frame_16 = base;
#line 1343 "browse.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__browse__Line_28));
#line 1343 "browse.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1343 "browse.m"
        }
#line 1344 "browse.m"
        *mdb__browse__NewSize_13 = mdb__browse__CurSize_12;
#line 1342 "browse.m"
      }
#line 1319 "browse.m"
  }
#line 1315 "browse.m"
}

#line 1232 "browse.m"
static MR_String MR_CALL 
mdb__browse__comma_string_list_1_f_0(
#line 1232 "browse.m"
  MR_Word mdb__browse__Args_3)
#line 1232 "browse.m"
{
#line 1236 "browse.m"
  {
#line 1236 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 1236 "browse.m"
    MR_String mdb__browse__Str_4;

#line 1236 "browse.m"
    if ((mdb__browse__Args_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1236 "browse.m"
      mdb__browse__Str_4 = (MR_String) "";
#line 1236 "browse.m"
    else
#line 1236 "browse.m"
      {
#line 1236 "browse.m"
        MR_Word mdb__browse__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Args_3, (MR_Integer) 1)));
#line 1236 "browse.m"
        MR_String mdb__browse__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__Args_3, (MR_Integer) 0)));

#line 1236 "browse.m"
        if ((mdb__browse__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1240 "browse.m"
          mdb__browse__Str_4 = mdb__browse__V_19_19;
#line 1236 "browse.m"
        else
#line 1242 "browse.m"
          {
#line 1242 "browse.m"
            MR_String mdb__browse__Rest_9;
#line 1242 "browse.m"
            MR_Word mdb__browse__V_12_12;
#line 1242 "browse.m"
            MR_Word mdb__browse__V_13_13;
#line 1242 "browse.m"
            MR_Word mdb__browse__V_15_15;
#line 1242 "browse.m"
            MR_Word mdb__browse__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__V_18_18, (MR_Integer) 1)));
#line 1242 "browse.m"
            MR_String mdb__browse__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__V_18_18, (MR_Integer) 0)));

#line 1236 "browse.m"
            if ((mdb__browse__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1240 "browse.m"
              mdb__browse__Rest_9 = mdb__browse__V_36_36;
#line 1236 "browse.m"
            else
#line 1242 "browse.m"
              {
#line 1242 "browse.m"
                MR_String mdb__browse__Rest_26;
#line 1242 "browse.m"
                MR_Word mdb__browse__V_29_29;
#line 1242 "browse.m"
                MR_Word mdb__browse__V_30_30;
#line 1242 "browse.m"
                MR_Word mdb__browse__V_32_32;

#line 1243 "browse.m"
                {
#line 1243 "browse.m"
                  mdb__browse__Rest_26 = mdb__browse__comma_string_list_1_f_0(mdb__browse__V_35_35);
                }
#line 1244 "browse.m"
                {
#line 1244 "browse.m"
                  mdb__browse__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_32_32, 0) = ((MR_Box) (mdb__browse__Rest_26));
#line 1244 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1244 "browse.m"
                }
#line 1244 "browse.m"
                {
#line 1244 "browse.m"
                  mdb__browse__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_30_30, 0) = ((MR_Box) ((MR_String) ", "));
#line 1244 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_30_30, 1) = ((MR_Box) (mdb__browse__V_32_32));
#line 1244 "browse.m"
                }
#line 1244 "browse.m"
                {
#line 1244 "browse.m"
                  mdb__browse__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_29_29, 0) = ((MR_Box) (mdb__browse__V_36_36));
#line 1244 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_29_29, 1) = ((MR_Box) (mdb__browse__V_30_30));
#line 1244 "browse.m"
                }
#line 1244 "browse.m"
                {
#line 1244 "browse.m"
                  mercury__string__append_list_2_p_0(mdb__browse__V_29_29, &mdb__browse__Rest_9);
                }
#line 1242 "browse.m"
              }
#line 1244 "browse.m"
            {
#line 1244 "browse.m"
              mdb__browse__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_15_15, 0) = ((MR_Box) (mdb__browse__Rest_9));
#line 1244 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1244 "browse.m"
            }
#line 1244 "browse.m"
            {
#line 1244 "browse.m"
              mdb__browse__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_13_13, 0) = ((MR_Box) ((MR_String) ", "));
#line 1244 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_13_13, 1) = ((MR_Box) (mdb__browse__V_15_15));
#line 1244 "browse.m"
            }
#line 1244 "browse.m"
            {
#line 1244 "browse.m"
              mdb__browse__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_12_12, 0) = ((MR_Box) (mdb__browse__V_19_19));
#line 1244 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_12_12, 1) = ((MR_Box) (mdb__browse__V_13_13));
#line 1244 "browse.m"
            }
#line 1244 "browse.m"
            {
#line 1244 "browse.m"
              mercury__string__append_list_2_p_0(mdb__browse__V_12_12, &mdb__browse__Str_4);
            }
#line 1242 "browse.m"
          }
#line 1236 "browse.m"
      }
#line 1236 "browse.m"
    return mdb__browse__Str_4;
#line 1236 "browse.m"
  }
#line 1232 "browse.m"
}

#line 1205 "browse.m"
static void MR_CALL 
mdb__browse__args_to_string_list_8_p_0(
#line 1205 "browse.m"
  MR_Word mdb__browse__HeadVar__1_1,
#line 1205 "browse.m"
  MR_Word mdb__browse__HeadVar__2_2,
#line 1205 "browse.m"
  MR_Integer mdb__browse__HeadVar__3_3,
#line 1205 "browse.m"
  MR_Integer mdb__browse__CurSize_4,
#line 1205 "browse.m"
  MR_Integer * mdb__browse__NewSize_5,
#line 1205 "browse.m"
  MR_Integer mdb__browse__HeadVar__6_6,
#line 1205 "browse.m"
  MR_Integer mdb__browse__HeadVar__7_7,
#line 1205 "browse.m"
  MR_Word * mdb__browse__Strs_8)
#line 1205 "browse.m"
{
#line 1210 "browse.m"
  {
#line 1210 "browse.m"
    MR_bool mdb__browse__succeeded;

#line 1210 "browse.m"
    if ((mdb__browse__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1210 "browse.m"
      {
#line 1211 "browse.m"
        *mdb__browse__Strs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1209 "browse.m"
        *mdb__browse__NewSize_5 = mdb__browse__CurSize_4;
#line 1210 "browse.m"
      }
#line 1210 "browse.m"
    else
#line 1214 "browse.m"
      {
#line 1214 "browse.m"
        MR_Word mdb__browse__Univ_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, (MR_Integer) 0)));
#line 1214 "browse.m"
        MR_Word mdb__browse__Univs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, (MR_Integer) 1)));
#line 1214 "browse.m"
        MR_Integer mdb__browse__NewSize1_25;
#line 1214 "browse.m"
        MR_String mdb__browse__Str_26;
#line 1214 "browse.m"
        MR_Word mdb__browse__RestStrs_27;
#line 1214 "browse.m"
        MR_Word mdb__browse__V_28_28;

#line 1215 "browse.m"
        {
#line 1215 "browse.m"
          mdb__browse__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1215 "browse.m"
          MR_hl_field(MR_mktag(0), mdb__browse__V_28_28, 0) = ((MR_Box) (mdb__browse__Univ_17));
#line 1215 "browse.m"
        }
#line 1215 "browse.m"
        {
#line 1215 "browse.m"
          mdb__browse__browser_term_to_string_2_8_p_0(mdb__browse__HeadVar__1_1, mdb__browse__V_28_28, mdb__browse__HeadVar__3_3, mdb__browse__CurSize_4, &mdb__browse__NewSize1_25, mdb__browse__HeadVar__6_6, mdb__browse__HeadVar__7_7, &mdb__browse__Str_26);
        }
#line 1217 "browse.m"
        {
#line 1217 "browse.m"
          mdb__browse__args_to_string_list_8_p_0(mdb__browse__HeadVar__1_1, mdb__browse__Univs_18, mdb__browse__HeadVar__3_3, mdb__browse__NewSize1_25, mdb__browse__NewSize_5, mdb__browse__HeadVar__6_6, mdb__browse__HeadVar__7_7, &mdb__browse__RestStrs_27);
        }
#line 1219 "browse.m"
        {
#line 1219 "browse.m"
          MR_Word base;
#line 1219 "browse.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1219 "browse.m"
          *mdb__browse__Strs_8 = base;
#line 1219 "browse.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__browse__Str_26));
#line 1219 "browse.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__browse__RestStrs_27));
#line 1219 "browse.m"
        }
#line 1214 "browse.m"
      }
#line 1210 "browse.m"
  }
#line 1205 "browse.m"
}

#line 1144 "browse.m"
static void MR_CALL 
mdb__browse__list_tail_to_string_list_8_p_0(
#line 1144 "browse.m"
  MR_Word mdb__browse__BrowserDb_9,
#line 1144 "browse.m"
  MR_Word mdb__browse__TailUniv_10,
#line 1144 "browse.m"
  MR_Integer mdb__browse__MaxSize_11,
#line 1144 "browse.m"
  MR_Integer mdb__browse__Size0_12,
#line 1144 "browse.m"
  MR_Integer * mdb__browse__Size_13,
#line 1144 "browse.m"
  MR_Integer mdb__browse__MaxDepth_14,
#line 1144 "browse.m"
  MR_Integer mdb__browse__Depth0_15,
#line 1144 "browse.m"
  MR_Word * mdb__browse__TailStrs_16)
#line 1144 "browse.m"
{
#line 1149 "browse.m"
  {
#line 1149 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 1149 "browse.m"
    MR_Integer mdb__browse__Limit_17;
#line 1149 "browse.m"
    MR_Word mdb__browse__MaybeFunctorArityArgs_18;
#line 1149 "browse.m"
    MR_Word mdb__browse__MaybeReturn_19;
#line 1149 "browse.m"
    MR_Word mdb__browse__V_31_31;

#line 1152 "browse.m"
    {
#line 1152 "browse.m"
      mdb__browse__Limit_17 = mercury__int__max_2_f_0(mdb__browse__MaxSize_11, (MR_Integer) 2);
    }
#line 1153 "browse.m"
    {
#line 1153 "browse.m"
      mdb__browse__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1153 "browse.m"
      MR_hl_field(MR_mktag(0), mdb__browse__V_31_31, 0) = ((MR_Box) (mdb__browse__TailUniv_10));
#line 1153 "browse.m"
    }
#line 1153 "browse.m"
    {
#line 1153 "browse.m"
      mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(mdb__browse__BrowserDb_9, mdb__browse__V_31_31, mdb__browse__Limit_17, &mdb__browse__MaybeFunctorArityArgs_18, &mdb__browse__MaybeReturn_19);
    }
#line 1197 "browse.m"
    if ((mdb__browse__MaybeFunctorArityArgs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1198 "browse.m"
      {
#line 1198 "browse.m"
        MR_Word mdb__browse__V_34_34;
#line 1198 "browse.m"
        MR_String mdb__browse__TailCompressedStr_51;
#line 1198 "browse.m"
        MR_String mdb__browse__Functor_55;
#line 1198 "browse.m"
        MR_Integer mdb__browse__Arity_56;
#line 1198 "browse.m"
        MR_Word mdb__browse__IsFunc_57;

#line 1199 "browse.m"
        *mdb__browse__Size_13 = mdb__browse__Size0_12;
#line 1251 "browse.m"
        {
#line 1251 "browse.m"
          mdb__browser_info__functor_browser_term_cc_5_p_0(mdb__browse__BrowserDb_9, mdb__browse__V_31_31, &mdb__browse__Functor_55, &mdb__browse__Arity_56, &mdb__browse__IsFunc_57);
        }
#line 1252 "browse.m"
        mdb__browse__succeeded = (mdb__browse__Arity_56 == (MR_Integer) 0);
#line 1254 "browse.m"
        if (mdb__browse__succeeded)
#line 1253 "browse.m"
          mdb__browse__TailCompressedStr_51 = mdb__browse__Functor_55;
#line 1254 "browse.m"
        else
#line 1255 "browse.m"
          {
#line 1255 "browse.m"
            MR_String mdb__browse__ArityStr_58;

#line 1255 "browse.m"
            {
#line 1255 "browse.m"
              mercury__string__int_to_string_2_p_0(mdb__browse__Arity_56, &mdb__browse__ArityStr_58);
            }
#line 1259 "browse.m"
#line 1259 "browse.m"
            switch (mdb__browse__IsFunc_57) {
#line 1259 "browse.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1259 "browse.m"
              case (MR_Integer) 0:
#line 1260 "browse.m"
                {
#line 1260 "browse.m"
                  MR_Word mdb__browse__V_59_59;
#line 1260 "browse.m"
                  MR_Word mdb__browse__V_60_60;
#line 1260 "browse.m"
                  MR_Word mdb__browse__V_62_62;

#line 1261 "browse.m"
                  {
#line 1261 "browse.m"
                    mdb__browse__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_62_62, 0) = ((MR_Box) (mdb__browse__ArityStr_58));
#line 1261 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1261 "browse.m"
                  }
#line 1261 "browse.m"
                  {
#line 1261 "browse.m"
                    mdb__browse__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_60_60, 0) = ((MR_Box) ((MR_String) "/"));
#line 1261 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_60_60, 1) = ((MR_Box) (mdb__browse__V_62_62));
#line 1261 "browse.m"
                  }
#line 1261 "browse.m"
                  {
#line 1261 "browse.m"
                    mdb__browse__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_59_59, 0) = ((MR_Box) (mdb__browse__Functor_55));
#line 1261 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_59_59, 1) = ((MR_Box) (mdb__browse__V_60_60));
#line 1261 "browse.m"
                  }
#line 1261 "browse.m"
                  {
#line 1261 "browse.m"
                    mercury__string__append_list_2_p_0(mdb__browse__V_59_59, &mdb__browse__TailCompressedStr_51);
                  }
#line 1260 "browse.m"
                }
#line 1259 "browse.m"
                break;
#line 1259 "browse.m"
              case (MR_Integer) 1:
#line 1257 "browse.m"
                {
#line 1257 "browse.m"
                  MR_Word mdb__browse__V_64_64;
#line 1257 "browse.m"
                  MR_Word mdb__browse__V_65_65;
#line 1257 "browse.m"
                  MR_Word mdb__browse__V_67_67;

#line 1258 "browse.m"
                  {
#line 1258 "browse.m"
                    mdb__browse__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_67_67, 0) = ((MR_Box) (mdb__browse__ArityStr_58));
#line 1258 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[43])));
#line 1258 "browse.m"
                  }
#line 1258 "browse.m"
                  {
#line 1258 "browse.m"
                    mdb__browse__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_65_65, 0) = ((MR_Box) ((MR_String) "/"));
#line 1258 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_65_65, 1) = ((MR_Box) (mdb__browse__V_67_67));
#line 1258 "browse.m"
                  }
#line 1258 "browse.m"
                  {
#line 1258 "browse.m"
                    mdb__browse__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_64_64, 0) = ((MR_Box) (mdb__browse__Functor_55));
#line 1258 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_64_64, 1) = ((MR_Box) (mdb__browse__V_65_65));
#line 1258 "browse.m"
                  }
#line 1258 "browse.m"
                  {
#line 1258 "browse.m"
                    mercury__string__append_list_2_p_0(mdb__browse__V_64_64, &mdb__browse__TailCompressedStr_51);
                  }
#line 1257 "browse.m"
                }
#line 1259 "browse.m"
                break;
#line 1259 "browse.m"
            }
#line 1255 "browse.m"
          }
#line 1202 "browse.m"
        {
#line 1202 "browse.m"
          mdb__browse__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "browse.m"
          MR_hl_field(MR_mktag(1), mdb__browse__V_34_34, 0) = ((MR_Box) (mdb__browse__TailCompressedStr_51));
#line 1202 "browse.m"
          MR_hl_field(MR_mktag(1), mdb__browse__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1202 "browse.m"
        }
#line 1202 "browse.m"
        {
#line 1202 "browse.m"
          MR_Word base;
#line 1202 "browse.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "browse.m"
          *mdb__browse__TailStrs_16 = base;
#line 1202 "browse.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) " | "));
#line 1202 "browse.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__browse__V_34_34));
#line 1202 "browse.m"
        }
#line 1198 "browse.m"
      }
#line 1197 "browse.m"
    else
#line 1156 "browse.m"
      {
#line 1156 "browse.m"
        MR_String mdb__browse__Functor_20;
#line 1156 "browse.m"
        MR_Word mdb__browse__Args_22;
#line 1156 "browse.m"
        MR_Tuple mdb__browse__V_36_36 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeFunctorArityArgs_18, (MR_Integer) 0)));
#line 1156 "browse.m"
        MR_Integer mdb__browse___Arity_21;

#line 1156 "browse.m"
        mdb__browse__Functor_20 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__V_36_36, (MR_Integer) 0)));
#line 1156 "browse.m"
        mdb__browse___Arity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__V_36_36, (MR_Integer) 1)));
#line 1156 "browse.m"
        mdb__browse__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__V_36_36, (MR_Integer) 2)));
#line 1158 "browse.m"
        mdb__browse__succeeded = (strcmp(mdb__browse__Functor_20, (MR_String) "[]") == 0);
#line 1158 "browse.m"
        if (mdb__browse__succeeded)
#line 1158 "browse.m"
          {
#line 1159 "browse.m"
            mdb__browse__succeeded = (mdb__browse__Args_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1158 "browse.m"
            if (mdb__browse__succeeded)
#line 1160 "browse.m"
              mdb__browse__succeeded = (mdb__browse__MaybeReturn_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1158 "browse.m"
          }
#line 1164 "browse.m"
        if (mdb__browse__succeeded)
#line 1162 "browse.m"
          {
#line 1162 "browse.m"
            *mdb__browse__Size_13 = mdb__browse__Size0_12;
#line 1163 "browse.m"
            *mdb__browse__TailStrs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1162 "browse.m"
          }
#line 1164 "browse.m"
        else
#line 1182 "browse.m"
          {
#line 1182 "browse.m"
            MR_Word mdb__browse__ListHead_23;
#line 1182 "browse.m"
            MR_Word mdb__browse__ListTail_24;
#line 1165 "browse.m"
            MR_Word mdb__browse__V_37_37;
#line 1165 "browse.m"
            MR_Word mdb__browse__V_38_38;

#line 1165 "browse.m"
            mdb__browse__succeeded = (strcmp(mdb__browse__Functor_20, (MR_String) "[|]") == 0);
#line 1165 "browse.m"
            if (mdb__browse__succeeded)
#line 1165 "browse.m"
              {
#line 1167 "browse.m"
                mdb__browse__succeeded = (mdb__browse__MaybeReturn_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1165 "browse.m"
                if (mdb__browse__succeeded)
#line 1165 "browse.m"
                  {
#line 1166 "browse.m"
                    mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__Args_22)) == (MR_mktag((MR_Integer) 1)));
#line 1166 "browse.m"
                    if (mdb__browse__succeeded)
#line 1166 "browse.m"
                      {
#line 1166 "browse.m"
                        mdb__browse__ListHead_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Args_22, (MR_Integer) 0)));
#line 1166 "browse.m"
                        mdb__browse__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Args_22, (MR_Integer) 1)));
#line 1166 "browse.m"
                        mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 1166 "browse.m"
                        if (mdb__browse__succeeded)
#line 1166 "browse.m"
                          {
#line 1166 "browse.m"
                            mdb__browse__ListTail_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__V_37_37, (MR_Integer) 0)));
#line 1166 "browse.m"
                            mdb__browse__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__V_37_37, (MR_Integer) 1)));
#line 1166 "browse.m"
                            mdb__browse__succeeded = (mdb__browse__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1166 "browse.m"
                          }
#line 1166 "browse.m"
                      }
#line 1165 "browse.m"
                  }
#line 1165 "browse.m"
              }
#line 1182 "browse.m"
            if (mdb__browse__succeeded)
#line 1178 "browse.m"
              {
#line 1170 "browse.m"
                mdb__browse__succeeded = (mdb__browse__Size0_12 < mdb__browse__MaxSize_11);
#line 1170 "browse.m"
                if (mdb__browse__succeeded)
#line 1171 "browse.m"
                  mdb__browse__succeeded = (mdb__browse__Depth0_15 < mdb__browse__MaxDepth_14);
#line 1178 "browse.m"
                if (mdb__browse__succeeded)
#line 1174 "browse.m"
                  {
#line 1174 "browse.m"
                    MR_Integer mdb__browse__Size1_25;
#line 1174 "browse.m"
                    MR_String mdb__browse__HeadStr_26;
#line 1174 "browse.m"
                    MR_Word mdb__browse__TailStrs0_27;
#line 1174 "browse.m"
                    MR_Word mdb__browse__V_39_39;
#line 1174 "browse.m"
                    MR_Word mdb__browse__V_41_41;

#line 1173 "browse.m"
                    {
#line 1173 "browse.m"
                      mdb__browse__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1173 "browse.m"
                      MR_hl_field(MR_mktag(0), mdb__browse__V_39_39, 0) = ((MR_Box) (mdb__browse__ListHead_23));
#line 1173 "browse.m"
                    }
#line 1173 "browse.m"
                    {
#line 1173 "browse.m"
                      mdb__browse__browser_term_to_string_2_8_p_0(mdb__browse__BrowserDb_9, mdb__browse__V_39_39, mdb__browse__MaxSize_11, mdb__browse__Size0_12, &mdb__browse__Size1_25, mdb__browse__MaxDepth_14, mdb__browse__Depth0_15, &mdb__browse__HeadStr_26);
                    }
#line 1175 "browse.m"
                    {
#line 1175 "browse.m"
                      mdb__browse__list_tail_to_string_list_8_p_0(mdb__browse__BrowserDb_9, mdb__browse__ListTail_24, mdb__browse__MaxSize_11, mdb__browse__Size1_25, mdb__browse__Size_13, mdb__browse__MaxDepth_14, mdb__browse__Depth0_15, &mdb__browse__TailStrs0_27);
                    }
#line 1177 "browse.m"
                    {
#line 1177 "browse.m"
                      mdb__browse__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "browse.m"
                      MR_hl_field(MR_mktag(1), mdb__browse__V_41_41, 0) = ((MR_Box) (mdb__browse__HeadStr_26));
#line 1177 "browse.m"
                      MR_hl_field(MR_mktag(1), mdb__browse__V_41_41, 1) = ((MR_Box) (mdb__browse__TailStrs0_27));
#line 1177 "browse.m"
                    }
#line 1177 "browse.m"
                    {
#line 1177 "browse.m"
                      MR_Word base;
#line 1177 "browse.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "browse.m"
                      *mdb__browse__TailStrs_16 = base;
#line 1177 "browse.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ", "));
#line 1177 "browse.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__browse__V_41_41));
#line 1177 "browse.m"
                    }
#line 1174 "browse.m"
                  }
#line 1178 "browse.m"
                else
#line 1179 "browse.m"
                  {
#line 1179 "browse.m"
                    *mdb__browse__Size_13 = mdb__browse__Size0_12;
#line 1180 "browse.m"
                    *mdb__browse__TailStrs_16 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[46]);
#line 1179 "browse.m"
                  }
#line 1178 "browse.m"
              }
#line 1182 "browse.m"
            else
#line 1190 "browse.m"
              {
#line 1184 "browse.m"
                mdb__browse__succeeded = (mdb__browse__Size0_12 < mdb__browse__MaxSize_11);
#line 1184 "browse.m"
                if (mdb__browse__succeeded)
#line 1185 "browse.m"
                  mdb__browse__succeeded = (mdb__browse__Depth0_15 < mdb__browse__MaxDepth_14);
#line 1190 "browse.m"
                if (mdb__browse__succeeded)
#line 1188 "browse.m"
                  {
#line 1188 "browse.m"
                    MR_String mdb__browse__TailStr_28;
#line 1188 "browse.m"
                    MR_Word mdb__browse__V_45_45;

#line 1187 "browse.m"
                    {
#line 1187 "browse.m"
                      mdb__browse__browser_term_to_string_3_10_p_0(mdb__browse__BrowserDb_9, mdb__browse__Functor_20, mdb__browse__Args_22, mdb__browse__MaybeReturn_19, mdb__browse__MaxSize_11, mdb__browse__Size0_12, mdb__browse__Size_13, mdb__browse__MaxDepth_14, mdb__browse__Depth0_15, &mdb__browse__TailStr_28);
                    }
#line 1189 "browse.m"
                    {
#line 1189 "browse.m"
                      mdb__browse__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "browse.m"
                      MR_hl_field(MR_mktag(1), mdb__browse__V_45_45, 0) = ((MR_Box) (mdb__browse__TailStr_28));
#line 1189 "browse.m"
                      MR_hl_field(MR_mktag(1), mdb__browse__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1189 "browse.m"
                    }
#line 1189 "browse.m"
                    {
#line 1189 "browse.m"
                      MR_Word base;
#line 1189 "browse.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "browse.m"
                      *mdb__browse__TailStrs_16 = base;
#line 1189 "browse.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) " | "));
#line 1189 "browse.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__browse__V_45_45));
#line 1189 "browse.m"
                    }
#line 1188 "browse.m"
                  }
#line 1190 "browse.m"
                else
#line 1191 "browse.m"
                  {
#line 1191 "browse.m"
                    MR_String mdb__browse__TailCompressedStr_29;
#line 1191 "browse.m"
                    MR_Word mdb__browse__V_49_49;
#line 1191 "browse.m"
                    MR_String mdb__browse__Functor_74;
#line 1191 "browse.m"
                    MR_Integer mdb__browse__Arity_75;
#line 1191 "browse.m"
                    MR_Word mdb__browse__IsFunc_76;

#line 1191 "browse.m"
                    *mdb__browse__Size_13 = mdb__browse__Size0_12;
#line 1251 "browse.m"
                    {
#line 1251 "browse.m"
                      mdb__browser_info__functor_browser_term_cc_5_p_0(mdb__browse__BrowserDb_9, mdb__browse__V_31_31, &mdb__browse__Functor_74, &mdb__browse__Arity_75, &mdb__browse__IsFunc_76);
                    }
#line 1252 "browse.m"
                    mdb__browse__succeeded = (mdb__browse__Arity_75 == (MR_Integer) 0);
#line 1254 "browse.m"
                    if (mdb__browse__succeeded)
#line 1253 "browse.m"
                      mdb__browse__TailCompressedStr_29 = mdb__browse__Functor_74;
#line 1254 "browse.m"
                    else
#line 1255 "browse.m"
                      {
#line 1255 "browse.m"
                        MR_String mdb__browse__ArityStr_77;

#line 1255 "browse.m"
                        {
#line 1255 "browse.m"
                          mercury__string__int_to_string_2_p_0(mdb__browse__Arity_75, &mdb__browse__ArityStr_77);
                        }
#line 1259 "browse.m"
#line 1259 "browse.m"
                        switch (mdb__browse__IsFunc_76) {
#line 1259 "browse.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1259 "browse.m"
                          case (MR_Integer) 0:
#line 1260 "browse.m"
                            {
#line 1260 "browse.m"
                              MR_Word mdb__browse__V_78_78;
#line 1260 "browse.m"
                              MR_Word mdb__browse__V_79_79;
#line 1260 "browse.m"
                              MR_Word mdb__browse__V_81_81;

#line 1261 "browse.m"
                              {
#line 1261 "browse.m"
                                mdb__browse__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "browse.m"
                                MR_hl_field(MR_mktag(1), mdb__browse__V_81_81, 0) = ((MR_Box) (mdb__browse__ArityStr_77));
#line 1261 "browse.m"
                                MR_hl_field(MR_mktag(1), mdb__browse__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1261 "browse.m"
                              }
#line 1261 "browse.m"
                              {
#line 1261 "browse.m"
                                mdb__browse__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "browse.m"
                                MR_hl_field(MR_mktag(1), mdb__browse__V_79_79, 0) = ((MR_Box) ((MR_String) "/"));
#line 1261 "browse.m"
                                MR_hl_field(MR_mktag(1), mdb__browse__V_79_79, 1) = ((MR_Box) (mdb__browse__V_81_81));
#line 1261 "browse.m"
                              }
#line 1261 "browse.m"
                              {
#line 1261 "browse.m"
                                mdb__browse__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "browse.m"
                                MR_hl_field(MR_mktag(1), mdb__browse__V_78_78, 0) = ((MR_Box) (mdb__browse__Functor_74));
#line 1261 "browse.m"
                                MR_hl_field(MR_mktag(1), mdb__browse__V_78_78, 1) = ((MR_Box) (mdb__browse__V_79_79));
#line 1261 "browse.m"
                              }
#line 1261 "browse.m"
                              {
#line 1261 "browse.m"
                                mercury__string__append_list_2_p_0(mdb__browse__V_78_78, &mdb__browse__TailCompressedStr_29);
                              }
#line 1260 "browse.m"
                            }
#line 1259 "browse.m"
                            break;
#line 1259 "browse.m"
                          case (MR_Integer) 1:
#line 1257 "browse.m"
                            {
#line 1257 "browse.m"
                              MR_Word mdb__browse__V_83_83;
#line 1257 "browse.m"
                              MR_Word mdb__browse__V_84_84;
#line 1257 "browse.m"
                              MR_Word mdb__browse__V_86_86;

#line 1258 "browse.m"
                              {
#line 1258 "browse.m"
                                mdb__browse__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "browse.m"
                                MR_hl_field(MR_mktag(1), mdb__browse__V_86_86, 0) = ((MR_Box) (mdb__browse__ArityStr_77));
#line 1258 "browse.m"
                                MR_hl_field(MR_mktag(1), mdb__browse__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[43])));
#line 1258 "browse.m"
                              }
#line 1258 "browse.m"
                              {
#line 1258 "browse.m"
                                mdb__browse__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "browse.m"
                                MR_hl_field(MR_mktag(1), mdb__browse__V_84_84, 0) = ((MR_Box) ((MR_String) "/"));
#line 1258 "browse.m"
                                MR_hl_field(MR_mktag(1), mdb__browse__V_84_84, 1) = ((MR_Box) (mdb__browse__V_86_86));
#line 1258 "browse.m"
                              }
#line 1258 "browse.m"
                              {
#line 1258 "browse.m"
                                mdb__browse__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "browse.m"
                                MR_hl_field(MR_mktag(1), mdb__browse__V_83_83, 0) = ((MR_Box) (mdb__browse__Functor_74));
#line 1258 "browse.m"
                                MR_hl_field(MR_mktag(1), mdb__browse__V_83_83, 1) = ((MR_Box) (mdb__browse__V_84_84));
#line 1258 "browse.m"
                              }
#line 1258 "browse.m"
                              {
#line 1258 "browse.m"
                                mercury__string__append_list_2_p_0(mdb__browse__V_83_83, &mdb__browse__TailCompressedStr_29);
                              }
#line 1257 "browse.m"
                            }
#line 1259 "browse.m"
                            break;
#line 1259 "browse.m"
                        }
#line 1255 "browse.m"
                      }
#line 1194 "browse.m"
                    {
#line 1194 "browse.m"
                      mdb__browse__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1194 "browse.m"
                      MR_hl_field(MR_mktag(1), mdb__browse__V_49_49, 0) = ((MR_Box) (mdb__browse__TailCompressedStr_29));
#line 1194 "browse.m"
                      MR_hl_field(MR_mktag(1), mdb__browse__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1194 "browse.m"
                    }
#line 1194 "browse.m"
                    {
#line 1194 "browse.m"
                      MR_Word base;
#line 1194 "browse.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1194 "browse.m"
                      *mdb__browse__TailStrs_16 = base;
#line 1194 "browse.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) " | "));
#line 1194 "browse.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__browse__V_49_49));
#line 1194 "browse.m"
                    }
#line 1191 "browse.m"
                  }
#line 1190 "browse.m"
              }
#line 1182 "browse.m"
          }
#line 1156 "browse.m"
      }
#line 1149 "browse.m"
  }
#line 1144 "browse.m"
}

#line 1097 "browse.m"
static void MR_CALL 
mdb__browse__browser_term_to_string_3_10_p_0(
#line 1097 "browse.m"
  MR_Word mdb__browse__BrowserDb_11,
#line 1097 "browse.m"
  MR_String mdb__browse__Functor_12,
#line 1097 "browse.m"
  MR_Word mdb__browse__Args_13,
#line 1097 "browse.m"
  MR_Word mdb__browse__MaybeReturn_14,
#line 1097 "browse.m"
  MR_Integer mdb__browse__MaxSize_15,
#line 1097 "browse.m"
  MR_Integer mdb__browse__Size0_16,
#line 1097 "browse.m"
  MR_Integer * mdb__browse__Size_17,
#line 1097 "browse.m"
  MR_Integer mdb__browse__MaxDepth_18,
#line 1097 "browse.m"
  MR_Integer mdb__browse__Depth0_19,
#line 1097 "browse.m"
  MR_String * mdb__browse__Str_20)
#line 1097 "browse.m"
{
#line 1118 "browse.m"
  {
#line 1118 "browse.m"
    MR_bool mdb__browse__succeeded = (strcmp(mdb__browse__Functor_12, (MR_String) "[|]") == 0);
#line 1118 "browse.m"
    MR_Word mdb__browse__ListHead_21;
#line 1118 "browse.m"
    MR_Word mdb__browse__ListTail_22;
#line 1104 "browse.m"
    MR_Word mdb__browse__V_33_33;
#line 1104 "browse.m"
    MR_Word mdb__browse__V_34_34;

#line 1104 "browse.m"
    if (mdb__browse__succeeded)
#line 1104 "browse.m"
      {
#line 1106 "browse.m"
        mdb__browse__succeeded = (mdb__browse__MaybeReturn_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1104 "browse.m"
        if (mdb__browse__succeeded)
#line 1104 "browse.m"
          {
#line 1105 "browse.m"
            mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 1105 "browse.m"
            if (mdb__browse__succeeded)
#line 1105 "browse.m"
              {
#line 1105 "browse.m"
                mdb__browse__ListHead_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Args_13, (MR_Integer) 0)));
#line 1105 "browse.m"
                mdb__browse__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Args_13, (MR_Integer) 1)));
#line 1105 "browse.m"
                mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 1105 "browse.m"
                if (mdb__browse__succeeded)
#line 1105 "browse.m"
                  {
#line 1105 "browse.m"
                    mdb__browse__ListTail_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__V_33_33, (MR_Integer) 0)));
#line 1105 "browse.m"
                    mdb__browse__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__V_33_33, (MR_Integer) 1)));
#line 1105 "browse.m"
                    mdb__browse__succeeded = (mdb__browse__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1105 "browse.m"
                  }
#line 1105 "browse.m"
              }
#line 1104 "browse.m"
          }
#line 1104 "browse.m"
      }
#line 1118 "browse.m"
    if (mdb__browse__succeeded)
#line 1110 "browse.m"
      {
#line 1110 "browse.m"
        MR_Integer mdb__browse__Size1_23 = (mdb__browse__Size0_16 + (MR_Integer) 1);
#line 1110 "browse.m"
        MR_Integer mdb__browse__Depth1_24 = (mdb__browse__Depth0_19 + (MR_Integer) 1);
#line 1110 "browse.m"
        MR_Integer mdb__browse__Size2_25;
#line 1110 "browse.m"
        MR_String mdb__browse__HeadStr_26;
#line 1110 "browse.m"
        MR_Word mdb__browse__TailStrs_27;
#line 1110 "browse.m"
        MR_Word mdb__browse__Strs_28;
#line 1110 "browse.m"
        MR_Word mdb__browse__V_37_37;
#line 1110 "browse.m"
        MR_Word mdb__browse__V_41_41;
#line 1110 "browse.m"
        MR_Word mdb__browse__V_43_43;

#line 1112 "browse.m"
        {
#line 1112 "browse.m"
          mdb__browse__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1112 "browse.m"
          MR_hl_field(MR_mktag(0), mdb__browse__V_37_37, 0) = ((MR_Box) (mdb__browse__ListHead_21));
#line 1112 "browse.m"
        }
#line 1112 "browse.m"
        {
#line 1112 "browse.m"
          mdb__browse__browser_term_to_string_2_8_p_0(mdb__browse__BrowserDb_11, mdb__browse__V_37_37, mdb__browse__MaxSize_15, mdb__browse__Size1_23, &mdb__browse__Size2_25, mdb__browse__MaxDepth_18, mdb__browse__Depth1_24, &mdb__browse__HeadStr_26);
        }
#line 1114 "browse.m"
        {
#line 1114 "browse.m"
          mdb__browse__list_tail_to_string_list_8_p_0(mdb__browse__BrowserDb_11, mdb__browse__ListTail_22, mdb__browse__MaxSize_15, mdb__browse__Size2_25, mdb__browse__Size_17, mdb__browse__MaxDepth_18, mdb__browse__Depth1_24, &mdb__browse__TailStrs_27);
        }
#line 1116 "browse.m"
        {
#line 1116 "browse.m"
          mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__browse__TailStrs_27, (MR_Word) MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[44]), &mdb__browse__Strs_28);
        }
#line 1117 "browse.m"
        {
#line 1117 "browse.m"
          mdb__browse__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "browse.m"
          MR_hl_field(MR_mktag(1), mdb__browse__V_43_43, 0) = ((MR_Box) (mdb__browse__HeadStr_26));
#line 1117 "browse.m"
          MR_hl_field(MR_mktag(1), mdb__browse__V_43_43, 1) = ((MR_Box) (mdb__browse__Strs_28));
#line 1117 "browse.m"
        }
#line 1117 "browse.m"
        {
#line 1117 "browse.m"
          mdb__browse__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "browse.m"
          MR_hl_field(MR_mktag(1), mdb__browse__V_41_41, 0) = ((MR_Box) ((MR_String) "["));
#line 1117 "browse.m"
          MR_hl_field(MR_mktag(1), mdb__browse__V_41_41, 1) = ((MR_Box) (mdb__browse__V_43_43));
#line 1117 "browse.m"
        }
#line 1117 "browse.m"
        {
#line 1117 "browse.m"
          mercury__string__append_list_2_p_0(mdb__browse__V_41_41, mdb__browse__Str_20);
#line 1117 "browse.m"
          return;
        }
#line 1110 "browse.m"
      }
#line 1118 "browse.m"
    else
#line 1125 "browse.m"
      {
#line 1119 "browse.m"
        mdb__browse__succeeded = (strcmp(mdb__browse__Functor_12, (MR_String) "[]") == 0);
#line 1119 "browse.m"
        if (mdb__browse__succeeded)
#line 1119 "browse.m"
          {
#line 1120 "browse.m"
            mdb__browse__succeeded = (mdb__browse__Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1119 "browse.m"
            if (mdb__browse__succeeded)
#line 1121 "browse.m"
              mdb__browse__succeeded = (mdb__browse__MaybeReturn_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1119 "browse.m"
          }
#line 1125 "browse.m"
        if (mdb__browse__succeeded)
#line 1123 "browse.m"
          {
#line 1123 "browse.m"
            *mdb__browse__Size_17 = (mdb__browse__Size0_16 + (MR_Integer) 1);
#line 1124 "browse.m"
            *mdb__browse__Str_20 = (MR_String) "[]";
#line 1123 "browse.m"
          }
#line 1125 "browse.m"
        else
#line 1126 "browse.m"
          {
#line 1126 "browse.m"
            MR_Word mdb__browse__ArgStrs_29;
#line 1126 "browse.m"
            MR_String mdb__browse__BracketedArgsStr_30;
#line 1126 "browse.m"
            MR_Integer mdb__browse__Size1_57 = (mdb__browse__Size0_16 + (MR_Integer) 1);
#line 1126 "browse.m"
            MR_Integer mdb__browse__Depth1_58 = (mdb__browse__Depth0_19 + (MR_Integer) 1);
#line 1126 "browse.m"
            MR_Integer mdb__browse__Size2_59;

#line 1128 "browse.m"
            {
#line 1128 "browse.m"
              mdb__browse__args_to_string_list_8_p_0(mdb__browse__BrowserDb_11, mdb__browse__Args_13, mdb__browse__MaxSize_15, mdb__browse__Size1_57, &mdb__browse__Size2_59, mdb__browse__MaxDepth_18, mdb__browse__Depth1_58, &mdb__browse__ArgStrs_29);
            }
#line 1225 "browse.m"
            if ((mdb__browse__ArgStrs_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1226 "browse.m"
              mdb__browse__BracketedArgsStr_30 = (MR_String) "";
#line 1225 "browse.m"
            else
#line 1228 "browse.m"
              {
#line 1228 "browse.m"
                MR_Word mdb__browse__V_68_68;
#line 1228 "browse.m"
                MR_Word mdb__browse__V_70_70;
#line 1228 "browse.m"
                MR_String mdb__browse__V_71_71;

#line 1229 "browse.m"
                {
#line 1229 "browse.m"
                  mdb__browse__V_71_71 = mdb__browse__comma_string_list_1_f_0(mdb__browse__ArgStrs_29);
                }
#line 1229 "browse.m"
                {
#line 1229 "browse.m"
                  mdb__browse__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_70_70, 0) = ((MR_Box) (mdb__browse__V_71_71));
#line 1229 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[45])));
#line 1229 "browse.m"
                }
#line 1229 "browse.m"
                {
#line 1229 "browse.m"
                  mdb__browse__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_68_68, 0) = ((MR_Box) ((MR_String) "("));
#line 1229 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_68_68, 1) = ((MR_Box) (mdb__browse__V_70_70));
#line 1229 "browse.m"
                }
#line 1229 "browse.m"
                {
#line 1229 "browse.m"
                  mercury__string__append_list_2_p_0(mdb__browse__V_68_68, &mdb__browse__BracketedArgsStr_30);
                }
#line 1228 "browse.m"
              }
#line 1137 "browse.m"
            if ((mdb__browse__MaybeReturn_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1138 "browse.m"
              {
#line 1138 "browse.m"
                MR_Word mdb__browse__V_47_47;
#line 1138 "browse.m"
                MR_Word mdb__browse__V_48_48;

#line 1139 "browse.m"
                *mdb__browse__Size_17 = mdb__browse__Size2_59;
#line 1140 "browse.m"
                {
#line 1140 "browse.m"
                  mdb__browse__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_48_48, 0) = ((MR_Box) (mdb__browse__BracketedArgsStr_30));
#line 1140 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1140 "browse.m"
                }
#line 1140 "browse.m"
                {
#line 1140 "browse.m"
                  mdb__browse__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_47_47, 0) = ((MR_Box) (mdb__browse__Functor_12));
#line 1140 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_47_47, 1) = ((MR_Box) (mdb__browse__V_48_48));
#line 1140 "browse.m"
                }
#line 1140 "browse.m"
                {
#line 1140 "browse.m"
                  mercury__string__append_list_2_p_0(mdb__browse__V_47_47, mdb__browse__Str_20);
#line 1140 "browse.m"
                  return;
                }
#line 1138 "browse.m"
              }
#line 1137 "browse.m"
            else
#line 1132 "browse.m"
              {
#line 1132 "browse.m"
                MR_Word mdb__browse__Return_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeReturn_14, (MR_Integer) 0)));
#line 1132 "browse.m"
                MR_String mdb__browse__ReturnStr_32;
#line 1132 "browse.m"
                MR_Word mdb__browse__V_50_50;
#line 1132 "browse.m"
                MR_Word mdb__browse__V_51_51;
#line 1132 "browse.m"
                MR_Word mdb__browse__V_52_52;
#line 1132 "browse.m"
                MR_Word mdb__browse__V_53_53;
#line 1132 "browse.m"
                MR_Word mdb__browse__V_55_55;

#line 1133 "browse.m"
                {
#line 1133 "browse.m"
                  mdb__browse__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1133 "browse.m"
                  MR_hl_field(MR_mktag(0), mdb__browse__V_50_50, 0) = ((MR_Box) (mdb__browse__Return_31));
#line 1133 "browse.m"
                }
#line 1133 "browse.m"
                {
#line 1133 "browse.m"
                  mdb__browse__browser_term_to_string_2_8_p_0(mdb__browse__BrowserDb_11, mdb__browse__V_50_50, mdb__browse__MaxSize_15, mdb__browse__Size2_59, mdb__browse__Size_17, mdb__browse__MaxDepth_18, mdb__browse__Depth1_58, &mdb__browse__ReturnStr_32);
                }
#line 1135 "browse.m"
                {
#line 1135 "browse.m"
                  mdb__browse__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_55_55, 0) = ((MR_Box) (mdb__browse__ReturnStr_32));
#line 1135 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1135 "browse.m"
                }
#line 1135 "browse.m"
                {
#line 1135 "browse.m"
                  mdb__browse__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_53_53, 0) = ((MR_Box) ((MR_String) " = "));
#line 1135 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_53_53, 1) = ((MR_Box) (mdb__browse__V_55_55));
#line 1135 "browse.m"
                }
#line 1135 "browse.m"
                {
#line 1135 "browse.m"
                  mdb__browse__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_52_52, 0) = ((MR_Box) (mdb__browse__BracketedArgsStr_30));
#line 1135 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_52_52, 1) = ((MR_Box) (mdb__browse__V_53_53));
#line 1135 "browse.m"
                }
#line 1135 "browse.m"
                {
#line 1135 "browse.m"
                  mdb__browse__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_51_51, 0) = ((MR_Box) (mdb__browse__Functor_12));
#line 1135 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_51_51, 1) = ((MR_Box) (mdb__browse__V_52_52));
#line 1135 "browse.m"
                }
#line 1135 "browse.m"
                {
#line 1135 "browse.m"
                  mercury__string__append_list_2_p_0(mdb__browse__V_51_51, mdb__browse__Str_20);
#line 1135 "browse.m"
                  return;
                }
#line 1132 "browse.m"
              }
#line 1126 "browse.m"
          }
#line 1125 "browse.m"
      }
#line 1118 "browse.m"
  }
#line 1097 "browse.m"
}

#line 1078 "browse.m"
static void MR_CALL 
mdb__browse__browser_term_to_string_2_8_p_0(
#line 1078 "browse.m"
  MR_Word mdb__browse__BrowserDb_9,
#line 1078 "browse.m"
  MR_Word mdb__browse__BrowserTerm_10,
#line 1078 "browse.m"
  MR_Integer mdb__browse__MaxSize_11,
#line 1078 "browse.m"
  MR_Integer mdb__browse__CurSize_12,
#line 1078 "browse.m"
  MR_Integer * mdb__browse__NewSize_13,
#line 1078 "browse.m"
  MR_Integer mdb__browse__MaxDepth_14,
#line 1078 "browse.m"
  MR_Integer mdb__browse__CurDepth_15,
#line 1078 "browse.m"
  MR_String * mdb__browse__Str_16)
#line 1078 "browse.m"
{
#line 1082 "browse.m"
  {
#line 1082 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 1082 "browse.m"
    MR_Word mdb__browse__MaybeFunctorArityArgs_17;
#line 1082 "browse.m"
    MR_Word mdb__browse__MaybeReturn_18;
#line 1092 "browse.m"
    MR_String mdb__browse__Functor_19;
#line 1092 "browse.m"
    MR_Word mdb__browse__Args_21;
#line 1086 "browse.m"
    MR_Tuple mdb__browse__V_22_22;
#line 1088 "browse.m"
    MR_Integer mdb__browse___Arity_20;

#line 1083 "browse.m"
    {
#line 1083 "browse.m"
      mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(mdb__browse__BrowserDb_9, mdb__browse__BrowserTerm_10, mdb__browse__MaxSize_11, &mdb__browse__MaybeFunctorArityArgs_17, &mdb__browse__MaybeReturn_18);
    }
#line 1086 "browse.m"
    mdb__browse__succeeded = (mdb__browse__CurSize_12 < mdb__browse__MaxSize_11);
#line 1086 "browse.m"
    if (mdb__browse__succeeded)
#line 1086 "browse.m"
      {
#line 1087 "browse.m"
        mdb__browse__succeeded = (mdb__browse__CurDepth_15 < mdb__browse__MaxDepth_14);
#line 1086 "browse.m"
        if (mdb__browse__succeeded)
#line 1086 "browse.m"
          {
#line 1088 "browse.m"
            mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__MaybeFunctorArityArgs_17)) == (MR_mktag((MR_Integer) 1)));
#line 1088 "browse.m"
            if (mdb__browse__succeeded)
#line 1088 "browse.m"
              {
#line 1088 "browse.m"
                mdb__browse__V_22_22 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeFunctorArityArgs_17, (MR_Integer) 0)));
#line 1088 "browse.m"
                mdb__browse__Functor_19 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__V_22_22, (MR_Integer) 0)));
#line 1088 "browse.m"
                mdb__browse___Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__V_22_22, (MR_Integer) 1)));
#line 1088 "browse.m"
                mdb__browse__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__V_22_22, (MR_Integer) 2)));
#line 1088 "browse.m"
                mdb__browse__succeeded = MR_TRUE;
#line 1088 "browse.m"
              }
#line 1086 "browse.m"
          }
#line 1086 "browse.m"
      }
#line 1092 "browse.m"
    if (mdb__browse__succeeded)
#line 1090 "browse.m"
      {
#line 1090 "browse.m"
        mdb__browse__browser_term_to_string_3_10_p_0(mdb__browse__BrowserDb_9, mdb__browse__Functor_19, mdb__browse__Args_21, mdb__browse__MaybeReturn_18, mdb__browse__MaxSize_11, mdb__browse__CurSize_12, mdb__browse__NewSize_13, mdb__browse__MaxDepth_14, mdb__browse__CurDepth_15, mdb__browse__Str_16);
#line 1090 "browse.m"
        return;
      }
#line 1092 "browse.m"
    else
#line 1093 "browse.m"
      {
#line 1093 "browse.m"
        MR_String mdb__browse__Functor_26;
#line 1093 "browse.m"
        MR_Integer mdb__browse__Arity_27;
#line 1093 "browse.m"
        MR_Word mdb__browse__IsFunc_28;

#line 1251 "browse.m"
        {
#line 1251 "browse.m"
          mdb__browser_info__functor_browser_term_cc_5_p_0(mdb__browse__BrowserDb_9, mdb__browse__BrowserTerm_10, &mdb__browse__Functor_26, &mdb__browse__Arity_27, &mdb__browse__IsFunc_28);
        }
#line 1252 "browse.m"
        mdb__browse__succeeded = (mdb__browse__Arity_27 == (MR_Integer) 0);
#line 1254 "browse.m"
        if (mdb__browse__succeeded)
#line 1253 "browse.m"
          *mdb__browse__Str_16 = mdb__browse__Functor_26;
#line 1254 "browse.m"
        else
#line 1255 "browse.m"
          {
#line 1255 "browse.m"
            MR_String mdb__browse__ArityStr_29;

#line 1255 "browse.m"
            {
#line 1255 "browse.m"
              mercury__string__int_to_string_2_p_0(mdb__browse__Arity_27, &mdb__browse__ArityStr_29);
            }
#line 1259 "browse.m"
#line 1259 "browse.m"
            switch (mdb__browse__IsFunc_28) {
#line 1259 "browse.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1259 "browse.m"
              case (MR_Integer) 0:
#line 1260 "browse.m"
                {
#line 1260 "browse.m"
                  MR_Word mdb__browse__V_30_30;
#line 1260 "browse.m"
                  MR_Word mdb__browse__V_31_31;
#line 1260 "browse.m"
                  MR_Word mdb__browse__V_33_33;

#line 1261 "browse.m"
                  {
#line 1261 "browse.m"
                    mdb__browse__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_33_33, 0) = ((MR_Box) (mdb__browse__ArityStr_29));
#line 1261 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1261 "browse.m"
                  }
#line 1261 "browse.m"
                  {
#line 1261 "browse.m"
                    mdb__browse__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_31_31, 0) = ((MR_Box) ((MR_String) "/"));
#line 1261 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_31_31, 1) = ((MR_Box) (mdb__browse__V_33_33));
#line 1261 "browse.m"
                  }
#line 1261 "browse.m"
                  {
#line 1261 "browse.m"
                    mdb__browse__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_30_30, 0) = ((MR_Box) (mdb__browse__Functor_26));
#line 1261 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_30_30, 1) = ((MR_Box) (mdb__browse__V_31_31));
#line 1261 "browse.m"
                  }
#line 1261 "browse.m"
                  {
#line 1261 "browse.m"
                    mercury__string__append_list_2_p_0(mdb__browse__V_30_30, mdb__browse__Str_16);
                  }
#line 1260 "browse.m"
                }
#line 1259 "browse.m"
                break;
#line 1259 "browse.m"
              case (MR_Integer) 1:
#line 1257 "browse.m"
                {
#line 1257 "browse.m"
                  MR_Word mdb__browse__V_35_35;
#line 1257 "browse.m"
                  MR_Word mdb__browse__V_36_36;
#line 1257 "browse.m"
                  MR_Word mdb__browse__V_38_38;

#line 1258 "browse.m"
                  {
#line 1258 "browse.m"
                    mdb__browse__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_38_38, 0) = ((MR_Box) (mdb__browse__ArityStr_29));
#line 1258 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[43])));
#line 1258 "browse.m"
                  }
#line 1258 "browse.m"
                  {
#line 1258 "browse.m"
                    mdb__browse__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_36_36, 0) = ((MR_Box) ((MR_String) "/"));
#line 1258 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_36_36, 1) = ((MR_Box) (mdb__browse__V_38_38));
#line 1258 "browse.m"
                  }
#line 1258 "browse.m"
                  {
#line 1258 "browse.m"
                    mdb__browse__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_35_35, 0) = ((MR_Box) (mdb__browse__Functor_26));
#line 1258 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_35_35, 1) = ((MR_Box) (mdb__browse__V_36_36));
#line 1258 "browse.m"
                  }
#line 1258 "browse.m"
                  {
#line 1258 "browse.m"
                    mercury__string__append_list_2_p_0(mdb__browse__V_35_35, mdb__browse__Str_16);
                  }
#line 1257 "browse.m"
                }
#line 1259 "browse.m"
                break;
#line 1259 "browse.m"
            }
#line 1255 "browse.m"
          }
#line 1094 "browse.m"
        *mdb__browse__NewSize_13 = mdb__browse__CurSize_12;
#line 1093 "browse.m"
      }
#line 1082 "browse.m"
  }
#line 1078 "browse.m"
}

#line 1045 "browse.m"
static void MR_CALL 
mdb__browse__report_deref_error_5_p_0(
#line 1045 "browse.m"
  MR_Word mdb__browse__Debugger_6,
#line 1045 "browse.m"
  MR_Word mdb__browse__OKPath_7,
#line 1045 "browse.m"
  MR_Word mdb__browse__ErrorDir_8)
#line 1045 "browse.m"
{
#line 1048 "browse.m"
  {
#line 1048 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 1048 "browse.m"
    MR_String mdb__browse__Msg_13;
#line 1048 "browse.m"
    MR_String mdb__browse__V_24_24;
#line 1048 "browse.m"
    MR_String mdb__browse__V_25_25;

#line 1049 "browse.m"
    {
#line 1049 "browse.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, (MR_String) "error: ");
    }
#line 1054 "browse.m"
    if ((mdb__browse__OKPath_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1055 "browse.m"
      {
#line 1055 "browse.m"
      }
#line 1054 "browse.m"
    else
#line 1051 "browse.m"
      {
#line 1051 "browse.m"
        MR_String mdb__browse__Context_12;
#line 1051 "browse.m"
        MR_String mdb__browse__V_19_19;
#line 1051 "browse.m"
        MR_String mdb__browse__V_20_20;

#line 1052 "browse.m"
        {
#line 1052 "browse.m"
          mdb__browse__V_20_20 = mdb__browse__dirs_to_string_1_f_0(mdb__browse__OKPath_7);
        }
#line 1052 "browse.m"
        {
#line 1052 "browse.m"
          mdb__browse__V_19_19 = mercury__string__f_43_43_2_f_0(mdb__browse__V_20_20, (MR_String) ": ");
        }
#line 1052 "browse.m"
        {
#line 1052 "browse.m"
          mdb__browse__Context_12 = mercury__string__f_43_43_2_f_0((MR_String) "in subdir ", mdb__browse__V_19_19);
        }
#line 1053 "browse.m"
        {
#line 1053 "browse.m"
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, mdb__browse__Context_12);
        }
#line 1051 "browse.m"
      }
#line 1723 "browse.m"
#line 1723 "browse.m"
    switch (MR_tag((MR_Word) mdb__browse__ErrorDir_8)) {
#line 1723 "browse.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1723 "browse.m"
      case (MR_Integer) 0:
#line 1723 "browse.m"
        mdb__browse__V_25_25 = (MR_String) "..";
#line 1723 "browse.m"
        break;
#line 1723 "browse.m"
      case (MR_Integer) 1:
#line 1724 "browse.m"
        {
#line 1724 "browse.m"
          MR_Integer mdb__browse__Num_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browse__ErrorDir_8, (MR_Integer) 0)));

#line 1724 "browse.m"
          {
#line 1724 "browse.m"
            mdb__browse__V_25_25 = mercury__string__int_to_string_1_f_0(mdb__browse__Num_28);
          }
#line 1724 "browse.m"
        }
#line 1723 "browse.m"
        break;
#line 1723 "browse.m"
      case (MR_Integer) 2:
#line 1725 "browse.m"
        mdb__browse__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browse__ErrorDir_8, (MR_Integer) 0)));
#line 1723 "browse.m"
        break;
#line 1723 "browse.m"
    }
#line 1057 "browse.m"
    {
#line 1057 "browse.m"
      mdb__browse__V_24_24 = mercury__string__f_43_43_2_f_0(mdb__browse__V_25_25, (MR_String) "\n");
    }
#line 1057 "browse.m"
    {
#line 1057 "browse.m"
      mdb__browse__Msg_13 = mercury__string__f_43_43_2_f_0((MR_String) "there is no subterm ", mdb__browse__V_24_24);
    }
#line 1058 "browse.m"
    {
#line 1058 "browse.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, mdb__browse__Msg_13);
#line 1058 "browse.m"
      return;
    }
#line 1048 "browse.m"
  }
#line 1045 "browse.m"
}

#line 1035 "browse.m"
static void MR_CALL 
mdb__browse__write_univ_or_unbound_4_p_0(
#line 1035 "browse.m"
  MR_Word mdb__browse__Stream_5,
#line 1035 "browse.m"
  MR_Word mdb__browse__Univ_6)
#line 1035 "browse.m"
{
#line 1041 "browse.m"
  {
#line 1041 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 1039 "browse.m"
    MR_Box mdb__browse__conv0_V_11_11;

#line 1039 "browse.m"
    {
#line 1039 "browse.m"
      mdb__browse__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mdb__browse__mdb__browse__type_ctor_info_unbound_0, mdb__browse__Univ_6, &mdb__browse__conv0_V_11_11);
    }
#line 1039 "browse.m"
    if (mdb__browse__succeeded)
#line 1039 "browse.m"
      mdb__browse__succeeded = MR_TRUE;
#line 1041 "browse.m"
    if (mdb__browse__succeeded)
#line 1040 "browse.m"
      {
#line 1040 "browse.m"
        {
#line 1040 "browse.m"
          mercury__io__write_char_4_p_0(mdb__browse__Stream_5, (MR_Char) 95);
#line 1040 "browse.m"
          return;
        }
#line 1040 "browse.m"
      }
#line 1041 "browse.m"
    else
#line 1042 "browse.m"
      {
#line 1042 "browse.m"
        {
#line 1042 "browse.m"
          mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2((MR_Word) &mdb__browse_scalar_common_3[0], (MR_Word) &mdb__browse_scalar_common_3[1], mdb__browse__Stream_5, (MR_Integer) 2, mdb__browse__Univ_6);
#line 1042 "browse.m"
          return;
        }
#line 1042 "browse.m"
      }
#line 1041 "browse.m"
  }
#line 1035 "browse.m"
}

#line 969 "browse.m"
static void MR_CALL 
mdb__browse__portray_pretty_5_p_0(
#line 969 "browse.m"
  MR_Word mdb__browse__Debugger_6,
#line 969 "browse.m"
  MR_Word mdb__browse__BrowserTerm_7,
#line 969 "browse.m"
  MR_Word mdb__browse__Params_8)
#line 969 "browse.m"
{
#line 972 "browse.m"
  {
#line 972 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 972 "browse.m"
    MR_Integer mdb__browse__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 2)));
#line 972 "browse.m"
    MR_Integer mdb__browse__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 0)));
#line 972 "browse.m"
    MR_Integer mdb__browse__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 1)));
#line 972 "browse.m"
    MR_Integer mdb__browse__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 3)));
#line 972 "browse.m"
    MR_Word mdb__browse__Doc_40;
#line 972 "browse.m"
    MR_Word mdb__browse__Formatters_44;
#line 972 "browse.m"
    MR_Word mdb__browse__Limit_45;
#line 1287 "browse.m"
    MR_Integer mdb__browse__V_47_47;
#line 1294 "browse.m"
    MR_Word mdb__browse__V_48_48;
#line 1294 "browse.m"
    MR_Box mdb__browse__conv0_STATE_VARIABLE_IO_11;

#line 1281 "browse.m"
    if (((MR_tag((MR_Word) mdb__browse__BrowserTerm_7)) == (MR_mktag((MR_Integer) 0))))
#line 1279 "browse.m"
      {
#line 1279 "browse.m"
        MR_Word mdb__browse__Univ_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__BrowserTerm_7, (MR_Integer) 0)));

#line 1280 "browse.m"
        {
#line 1280 "browse.m"
          mdb__browse__Doc_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1280 "browse.m"
          MR_hl_field(MR_mktag(3), mdb__browse__Doc_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1280 "browse.m"
          MR_hl_field(MR_mktag(3), mdb__browse__Doc_40, 1) = ((MR_Box) (mdb__browse__Univ_39));
#line 1280 "browse.m"
        }
#line 1279 "browse.m"
      }
#line 1281 "browse.m"
    else
#line 1282 "browse.m"
      {
#line 1282 "browse.m"
        MR_String mdb__browse__Functor_41 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_7, (MR_Integer) 0)));
#line 1282 "browse.m"
        MR_Word mdb__browse__Args_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_7, (MR_Integer) 1)));
#line 1282 "browse.m"
        MR_Word mdb__browse__MaybeReturn_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_7, (MR_Integer) 2)));
#line 1282 "browse.m"
        MR_Word mdb__browse__Doc0_54;

#line 1780 "browse.m"
        {
#line 1780 "browse.m"
          MR_Integer mdb__browse__lo_0;
#line 1780 "browse.m"
          MR_Integer mdb__browse__hi_1;
#line 1780 "browse.m"
          MR_Integer mdb__browse__mid_2;
#line 1780 "browse.m"
          MR_Integer mdb__browse__result_3;

#line 1780 "browse.m"
          /* binary string simple lookup switch */
#line 1780 "browse.m"
          mdb__browse__lo_0 = (MR_Integer) 0;
#line 1780 "browse.m"
          mdb__browse__hi_1 = (MR_Integer) 3;
#line 1780 "browse.m"
          do
#line 1780 "browse.m"
            {
#line 1780 "browse.m"
              mdb__browse__mid_2 = (((mdb__browse__lo_0 + mdb__browse__hi_1)) / (MR_Integer) 2);
#line 1780 "browse.m"
              mdb__browse__result_3 = MR_strcmp(mdb__browse__Functor_41, ((&mdb__browse_vector_common_7[6 + mdb__browse__mid_2]))->mdb__browse__vector_common_type_7_0__vct_7_f_0);
#line 1780 "browse.m"
              if ((mdb__browse__result_3 == (MR_Integer) 0))
#line 1780 "browse.m"
                {
#line 1780 "browse.m"
                  mdb__browse__succeeded = MR_TRUE;
#line 1780 "browse.m"
                  /* jump out of search loop */
#line 1780 "browse.m"
                  goto label_0;
#line 1780 "browse.m"
                }
#line 1780 "browse.m"
              else
#line 1780 "browse.m"
              if ((mdb__browse__result_3 < (MR_Integer) 0))
#line 1780 "browse.m"
                mdb__browse__hi_1 = (mdb__browse__mid_2 - (MR_Integer) 1);
#line 1780 "browse.m"
              else
#line 1780 "browse.m"
                mdb__browse__lo_0 = (mdb__browse__mid_2 + (MR_Integer) 1);
#line 1780 "browse.m"
            }
#line 1780 "browse.m"
          while ((mdb__browse__lo_0 <= mdb__browse__hi_1));
#line 1780 "browse.m"
          mdb__browse__succeeded = MR_FALSE;
#line 1780 "browse.m"
        label_0:;
#line 1780 "browse.m"
        }
#line 1780 "browse.m"
        if (!(mdb__browse__succeeded))
#line 1783 "browse.m"
          {
#line 1783 "browse.m"
            {
#line 1783 "browse.m"
              mdb__browse__succeeded = mercury__string__contains_char_2_p_0(mdb__browse__Functor_41, (MR_Char) 46);
            }
#line 1783 "browse.m"
            mdb__browse__succeeded = !(mdb__browse__succeeded);
#line 1783 "browse.m"
          }
#line 1787 "browse.m"
        if (mdb__browse__succeeded)
#line 1786 "browse.m"
          {
#line 1786 "browse.m"
            mdb__browse__Doc0_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1786 "browse.m"
            MR_hl_field(MR_mktag(3), mdb__browse__Doc0_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1786 "browse.m"
            MR_hl_field(MR_mktag(3), mdb__browse__Doc0_54, 1) = ((MR_Box) (mdb__browse__Functor_41));
#line 1786 "browse.m"
            MR_hl_field(MR_mktag(3), mdb__browse__Doc0_54, 2) = ((MR_Box) (mdb__browse__Args_42));
#line 1786 "browse.m"
          }
#line 1787 "browse.m"
        else
#line 1789 "browse.m"
          {
#line 1789 "browse.m"
            MR_Word mdb__browse__FunctorDoc_55;
#line 1789 "browse.m"
            MR_Word mdb__browse__V_60_60;

#line 1789 "browse.m"
            {
#line 1789 "browse.m"
              mdb__browse__V_60_60 = mercury__string__split_at_char_2_f_0((MR_Char) 46, mdb__browse__Functor_41);
            }
#line 1789 "browse.m"
            {
#line 1789 "browse.m"
              mdb__browse__FunctorDoc_55 = mdb__browse__qualified_functor_to_doc_1_f_0(mdb__browse__V_60_60);
            }
#line 1793 "browse.m"
            if ((mdb__browse__Args_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1792 "browse.m"
              mdb__browse__Doc0_54 = mdb__browse__FunctorDoc_55;
#line 1793 "browse.m"
            else
#line 1794 "browse.m"
              {
#line 1794 "browse.m"
                MR_Word mdb__browse__V_62_62;
#line 1794 "browse.m"
                MR_Word mdb__browse__V_63_63;
#line 1794 "browse.m"
                MR_Word mdb__browse__V_66_66;
#line 1794 "browse.m"
                MR_Word mdb__browse__V_67_67;
#line 1794 "browse.m"
                MR_Word mdb__browse__V_68_68;

#line 1797 "browse.m"
                {
#line 1797 "browse.m"
                  mdb__browse__V_68_68 = mercury__pretty_printer__group_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[41]));
                }
#line 1797 "browse.m"
                {
#line 1797 "browse.m"
                  mdb__browse__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1797 "browse.m"
                  MR_hl_field(MR_mktag(3), mdb__browse__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1797 "browse.m"
                  MR_hl_field(MR_mktag(3), mdb__browse__V_67_67, 1) = ((MR_Box) (mdb__browse__Args_42));
#line 1797 "browse.m"
                  MR_hl_field(MR_mktag(3), mdb__browse__V_67_67, 2) = ((MR_Box) (mdb__browse__V_68_68));
#line 1797 "browse.m"
                }
#line 1797 "browse.m"
                {
#line 1797 "browse.m"
                  mdb__browse__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1797 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_66_66, 0) = ((MR_Box) (mdb__browse__V_67_67));
#line 1797 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[42])));
#line 1797 "browse.m"
                }
#line 1796 "browse.m"
                {
#line 1796 "browse.m"
                  mdb__browse__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1796 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[5])));
#line 1796 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_63_63, 1) = ((MR_Box) (mdb__browse__V_66_66));
#line 1796 "browse.m"
                }
#line 1796 "browse.m"
                {
#line 1796 "browse.m"
                  mdb__browse__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1796 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_62_62, 0) = ((MR_Box) (mdb__browse__FunctorDoc_55));
#line 1796 "browse.m"
                  MR_hl_field(MR_mktag(1), mdb__browse__V_62_62, 1) = ((MR_Box) (mdb__browse__V_63_63));
#line 1796 "browse.m"
                }
#line 1795 "browse.m"
                {
#line 1795 "browse.m"
                  mdb__browse__Doc0_54 = mercury__pretty_printer__indent_1_f_0(mdb__browse__V_62_62);
                }
#line 1794 "browse.m"
              }
#line 1789 "browse.m"
          }
#line 1805 "browse.m"
        if ((mdb__browse__MaybeReturn_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1804 "browse.m"
          mdb__browse__Doc_40 = mdb__browse__Doc0_54;
#line 1805 "browse.m"
        else
#line 1806 "browse.m"
          {
#line 1806 "browse.m"
            MR_Word mdb__browse__Return_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeReturn_43, (MR_Integer) 0)));
#line 1806 "browse.m"
            MR_Word mdb__browse__V_79_79;
#line 1806 "browse.m"
            MR_Word mdb__browse__V_80_80;
#line 1806 "browse.m"
            MR_Word mdb__browse__V_83_83;
#line 1806 "browse.m"
            MR_Word mdb__browse__V_84_84;
#line 1806 "browse.m"
            MR_Word mdb__browse__V_85_85;

#line 1807 "browse.m"
            {
#line 1807 "browse.m"
              mdb__browse__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1807 "browse.m"
              MR_hl_field(MR_mktag(3), mdb__browse__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1807 "browse.m"
              MR_hl_field(MR_mktag(3), mdb__browse__V_85_85, 1) = ((MR_Box) (mdb__browse__Return_58));
#line 1807 "browse.m"
            }
#line 1807 "browse.m"
            {
#line 1807 "browse.m"
              mdb__browse__V_84_84 = mercury__pretty_printer__format_arg_1_f_0(mdb__browse__V_85_85);
            }
#line 1807 "browse.m"
            {
#line 1807 "browse.m"
              mdb__browse__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1807 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_83_83, 0) = ((MR_Box) (mdb__browse__V_84_84));
#line 1807 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1807 "browse.m"
            }
#line 1807 "browse.m"
            {
#line 1807 "browse.m"
              mdb__browse__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1807 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_80_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[7])));
#line 1807 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_80_80, 1) = ((MR_Box) (mdb__browse__V_83_83));
#line 1807 "browse.m"
            }
#line 1807 "browse.m"
            {
#line 1807 "browse.m"
              mdb__browse__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1807 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_79_79, 0) = ((MR_Box) (mdb__browse__Doc0_54));
#line 1807 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_79_79, 1) = ((MR_Box) (mdb__browse__V_80_80));
#line 1807 "browse.m"
            }
#line 1807 "browse.m"
            {
#line 1807 "browse.m"
              mdb__browse__Doc_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1807 "browse.m"
              MR_hl_field(MR_mktag(2), mdb__browse__Doc_40, 0) = ((MR_Box) (mdb__browse__V_79_79));
#line 1807 "browse.m"
            }
#line 1806 "browse.m"
          }
#line 1282 "browse.m"
      }
#line 1285 "browse.m"
    {
#line 1285 "browse.m"
      mercury__pretty_printer__get_default_formatter_map_3_p_0(&mdb__browse__Formatters_44);
    }
#line 1287 "browse.m"
    mdb__browse__V_47_47 = (MR_Integer) 0;
#line 1287 "browse.m"
    mdb__browse__succeeded = (mdb__browse__V_17_17 > mdb__browse__V_47_47);
#line 1289 "browse.m"
    if (mdb__browse__succeeded)
#line 1288 "browse.m"
      {
#line 1288 "browse.m"
        mdb__browse__Limit_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1288 "browse.m"
        MR_hl_field(MR_mktag(1), mdb__browse__Limit_45, 0) = ((MR_Box) (mdb__browse__V_17_17));
#line 1288 "browse.m"
      }
#line 1289 "browse.m"
    else
#line 1290 "browse.m"
      {
#line 1290 "browse.m"
        mdb__browse__Limit_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1290 "browse.m"
        MR_hl_field(MR_mktag(0), mdb__browse__Limit_45, 0) = ((MR_Box) (mdb__browse__V_18_18));
#line 1290 "browse.m"
      }
#line 1294 "browse.m"
    mdb__browse__V_48_48 = (MR_Integer) 2;
#line 1294 "browse.m"
    {
#line 1294 "browse.m"
      mercury__pretty_printer__write_doc_to_stream_9_p_1((MR_Word) &mdb__browse_scalar_common_3[2], ((MR_Box) (mdb__browse__Debugger_6)), mdb__browse__V_48_48, mdb__browse__Formatters_44, mdb__browse__V_12_12, mdb__browse__V_19_19, mdb__browse__Limit_45, mdb__browse__Doc_40, ((MR_Box) ((MR_Integer) 0)), &mdb__browse__conv0_STATE_VARIABLE_IO_11);
    }
#line 972 "browse.m"
  }
#line 969 "browse.m"
}

#line 959 "browse.m"
static void MR_CALL 
mdb__browse__portray_verbose_5_p_0(
#line 959 "browse.m"
  MR_Word mdb__browse__Debugger_6,
#line 959 "browse.m"
  MR_Word mdb__browse__BrowserTerm_7,
#line 959 "browse.m"
  MR_Word mdb__browse__Params_8)
#line 959 "browse.m"
{
#line 962 "browse.m"
  {
#line 962 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 962 "browse.m"
    MR_Word mdb__browse__StreamDb_10;
#line 962 "browse.m"
    MR_Word mdb__browse__BrowserDb_11;
#line 962 "browse.m"
    MR_String mdb__browse__Str_12;
#line 962 "browse.m"
    MR_Integer mdb__browse__V_16_16;
#line 962 "browse.m"
    MR_Integer mdb__browse__V_21_21;
#line 962 "browse.m"
    MR_Integer mdb__browse__V_22_22;
#line 962 "browse.m"
    MR_Integer mdb__browse__V_23_23;
#line 962 "browse.m"
    MR_Word mdb__browse__Frame_43;
#line 962 "browse.m"
    MR_Word mdb__browse__ClippedFrame_44;
#line 962 "browse.m"
    MR_Word mdb__browse__V_45_45;
#line 1310 "browse.m"
    MR_Integer mdb__browse___NewSize_42;

#line 963 "browse.m"
    {
#line 963 "browse.m"
      mercury__io__get_stream_db_3_p_0(&mdb__browse__StreamDb_10);
    }
#line 964 "browse.m"
    mdb__browse__BrowserDb_11 = (MR_Word) mdb__browse__StreamDb_10;
#line 965 "browse.m"
    mdb__browse__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 0)));
#line 965 "browse.m"
    mdb__browse__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 1)));
#line 965 "browse.m"
    mdb__browse__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 2)));
#line 965 "browse.m"
    mdb__browse__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 3)));
#line 1310 "browse.m"
    {
#line 1310 "browse.m"
      mdb__browse__browser_term_to_string_verbose_2_8_p_0(mdb__browse__BrowserDb_11, mdb__browse__BrowserTerm_7, mdb__browse__V_16_16, (MR_Integer) 0, &mdb__browse___NewSize_42, mdb__browse__V_21_21, (MR_Integer) 0, &mdb__browse__Frame_43);
    }
#line 1312 "browse.m"
    {
#line 1312 "browse.m"
      mdb__browse__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1312 "browse.m"
      MR_hl_field(MR_mktag(0), mdb__browse__V_45_45, 0) = ((MR_Box) (mdb__browse__V_22_22));
#line 1312 "browse.m"
      MR_hl_field(MR_mktag(0), mdb__browse__V_45_45, 1) = ((MR_Box) (mdb__browse__V_23_23));
#line 1312 "browse.m"
    }
#line 1312 "browse.m"
    {
#line 1312 "browse.m"
      mdb__browse__ClippedFrame_44 = mdb__frame__clip_2_f_0(mdb__browse__V_45_45, mdb__browse__Frame_43);
    }
#line 1313 "browse.m"
    {
#line 1313 "browse.m"
      mdb__browse__unlines_2_p_0(mdb__browse__ClippedFrame_44, &mdb__browse__Str_12);
    }
#line 967 "browse.m"
    {
#line 967 "browse.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, mdb__browse__Str_12);
#line 967 "browse.m"
      return;
    }
#line 962 "browse.m"
  }
#line 959 "browse.m"
}

#line 948 "browse.m"
static void MR_CALL 
mdb__browse__portray_flat_5_p_0_1(
#line 948 "browse.m"
  MR_Box mdb__browse__closure_arg,
#line 948 "browse.m"
  MR_Box mdb__browse__wrapper_arg_1,
#line 948 "browse.m"
  MR_Box mdb__browse__wrapper_arg_2,
#line 948 "browse.m"
  MR_Box * mdb__browse__wrapper_arg_3)
#line 948 "browse.m"
{
#line 948 "browse.m"
  {
#line 948 "browse.m"
    MR_Box mdb__browse__closure = mdb__browse__closure_arg;

#line 948 "browse.m"
    {
#line 948 "browse.m"
      mdb__browse__write_univ_or_unbound_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__closure, (MR_Integer) 3))), ((MR_Word) mdb__browse__wrapper_arg_1));
#line 948 "browse.m"
      return;
    }
#line 948 "browse.m"
  }
#line 948 "browse.m"
}

#line 909 "browse.m"
static void MR_CALL 
mdb__browse__portray_flat_5_p_0(
#line 909 "browse.m"
  MR_Word mdb__browse__Debugger_6,
#line 909 "browse.m"
  MR_Word mdb__browse__BrowserTerm_7,
#line 909 "browse.m"
  MR_Word mdb__browse__Params_8)
#line 909 "browse.m"
{
#line 912 "browse.m"
  {
#line 912 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 912 "browse.m"
    MR_Integer mdb__browse__RemainingSize_10;

#line 921 "browse.m"
    {
#line 921 "browse.m"
      mdb__browse__browser_term_size_left_from_max_3_p_0(mdb__browse__BrowserTerm_7, (MR_Integer) 60, &mdb__browse__RemainingSize_10);
    }
#line 923 "browse.m"
    mdb__browse__succeeded = (mdb__browse__RemainingSize_10 >= (MR_Integer) 0);
#line 925 "browse.m"
    if (mdb__browse__succeeded)
#line 936 "browse.m"
      if (((MR_tag((MR_Word) mdb__browse__BrowserTerm_7)) == (MR_mktag((MR_Integer) 0))))
#line 936 "browse.m"
        {
#line 936 "browse.m"
          MR_Word mdb__browse__Univ_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__BrowserTerm_7, (MR_Integer) 0)));
#line 936 "browse.m"
          MR_Word mdb__browse__Stream_31;

#line 937 "browse.m"
          {
#line 937 "browse.m"
            mercury__io__output_stream_3_p_0(&mdb__browse__Stream_31);
          }
#line 938 "browse.m"
          {
#line 938 "browse.m"
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2((MR_Word) &mdb__browse_scalar_common_3[0], (MR_Word) &mdb__browse_scalar_common_3[1], mdb__browse__Stream_31, (MR_Integer) 2, mdb__browse__Univ_29);
#line 938 "browse.m"
            return;
          }
#line 936 "browse.m"
        }
#line 936 "browse.m"
      else
#line 940 "browse.m"
        {
#line 940 "browse.m"
          MR_String mdb__browse__Functor_37 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_7, (MR_Integer) 0)));
#line 940 "browse.m"
          MR_Word mdb__browse__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_7, (MR_Integer) 1)));
#line 940 "browse.m"
          MR_Word mdb__browse__MaybeReturn_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_7, (MR_Integer) 2)));
#line 940 "browse.m"
          MR_Word mdb__browse__Stream_41;

#line 941 "browse.m"
          {
#line 941 "browse.m"
            mercury__io__write_string_3_p_0(mdb__browse__Functor_37);
          }
#line 942 "browse.m"
          {
#line 942 "browse.m"
            mercury__io__output_stream_3_p_0(&mdb__browse__Stream_41);
          }
#line 945 "browse.m"
          if ((mdb__browse__Args_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 944 "browse.m"
            {
#line 944 "browse.m"
            }
#line 945 "browse.m"
          else
#line 946 "browse.m"
            {
#line 946 "browse.m"
              MR_Word mdb__browse__V_52_52;

#line 947 "browse.m"
              {
#line 947 "browse.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 948 "browse.m"
              {
#line 948 "browse.m"
                mdb__browse__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 948 "browse.m"
                MR_hl_field(MR_mktag(0), mdb__browse__V_52_52, 0) = ((MR_Box) (&mdb__browse_scalar_common_10[0]));
#line 948 "browse.m"
                MR_hl_field(MR_mktag(0), mdb__browse__V_52_52, 1) = ((MR_Box) (mdb__browse__portray_flat_5_p_0_1));
#line 948 "browse.m"
                MR_hl_field(MR_mktag(0), mdb__browse__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 948 "browse.m"
                MR_hl_field(MR_mktag(0), mdb__browse__V_52_52, 3) = ((MR_Box) (mdb__browse__Stream_41));
#line 948 "browse.m"
              }
#line 948 "browse.m"
              {
#line 948 "browse.m"
                mercury__io__write_list_5_p_1((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__browse__Args_38, (MR_String) ", ", mdb__browse__V_52_52);
              }
#line 949 "browse.m"
              {
#line 949 "browse.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 946 "browse.m"
            }
#line 955 "browse.m"
          if ((mdb__browse__MaybeReturn_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 956 "browse.m"
            {
#line 956 "browse.m"
            }
#line 955 "browse.m"
          else
#line 952 "browse.m"
            {
#line 952 "browse.m"
              MR_Word mdb__browse__Return_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeReturn_39, (MR_Integer) 0)));

#line 953 "browse.m"
              {
#line 953 "browse.m"
                mercury__io__write_string_3_p_0((MR_String) " = ");
              }
#line 954 "browse.m"
              {
#line 954 "browse.m"
                mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2((MR_Word) &mdb__browse_scalar_common_3[0], (MR_Word) &mdb__browse_scalar_common_3[1], mdb__browse__Stream_41, (MR_Integer) 2, mdb__browse__Return_44);
#line 954 "browse.m"
                return;
              }
#line 952 "browse.m"
            }
#line 940 "browse.m"
        }
#line 925 "browse.m"
    else
#line 926 "browse.m"
      {
#line 926 "browse.m"
        MR_Word mdb__browse__StreamDb_11;
#line 926 "browse.m"
        MR_Word mdb__browse__BrowserDb_12;
#line 926 "browse.m"
        MR_String mdb__browse__Str_13;
#line 926 "browse.m"
        MR_Integer mdb__browse__V_20_20;
#line 926 "browse.m"
        MR_Integer mdb__browse__V_23_23;
#line 928 "browse.m"
        MR_Integer mdb__browse__V_24_24;
#line 928 "browse.m"
        MR_Integer mdb__browse__V_25_25;
#line 1071 "browse.m"
        MR_Integer mdb__browse___NewSize_75;

#line 926 "browse.m"
        {
#line 926 "browse.m"
          mercury__io__get_stream_db_3_p_0(&mdb__browse__StreamDb_11);
        }
#line 927 "browse.m"
        mdb__browse__BrowserDb_12 = (MR_Word) mdb__browse__StreamDb_11;
#line 928 "browse.m"
        mdb__browse__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 0)));
#line 928 "browse.m"
        mdb__browse__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 1)));
#line 928 "browse.m"
        mdb__browse__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 2)));
#line 928 "browse.m"
        mdb__browse__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 3)));
#line 1071 "browse.m"
        {
#line 1071 "browse.m"
          mdb__browse__browser_term_to_string_2_8_p_0(mdb__browse__BrowserDb_12, mdb__browse__BrowserTerm_7, mdb__browse__V_20_20, (MR_Integer) 0, &mdb__browse___NewSize_75, mdb__browse__V_23_23, (MR_Integer) 0, &mdb__browse__Str_13);
        }
#line 930 "browse.m"
        {
#line 930 "browse.m"
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, mdb__browse__Str_13);
#line 930 "browse.m"
          return;
        }
#line 926 "browse.m"
      }
#line 912 "browse.m"
  }
#line 909 "browse.m"
}

#line 871 "browse.m"
static void MR_CALL 
mdb__browse__portray_6_p_0(
#line 871 "browse.m"
  MR_Word mdb__browse__Debugger_7,
#line 871 "browse.m"
  MR_Word mdb__browse__Caller_8,
#line 871 "browse.m"
  MR_Word mdb__browse__MaybeFormat_9,
#line 871 "browse.m"
  MR_Word mdb__browse__Info_10)
#line 871 "browse.m"
{
#line 875 "browse.m"
  {
#line 875 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 875 "browse.m"
    MR_Word mdb__browse__Format_12;
#line 875 "browse.m"
    MR_Word mdb__browse__Params_13;
#line 875 "browse.m"
    MR_Word mdb__browse__SubResult_14;
#line 875 "browse.m"
    MR_Word mdb__browse__V_20_20;
#line 875 "browse.m"
    MR_Word mdb__browse__V_28_28;
#line 878 "browse.m"
    MR_Word mdb__browse__V_29_29;
#line 878 "browse.m"
    MR_Word mdb__browse__V_30_30;
#line 878 "browse.m"
    MR_Word mdb__browse__V_31_31;
#line 878 "browse.m"
    MR_Word mdb__browse__V_32_32;
#line 878 "browse.m"
    MR_Word mdb__browse__V_33_33;

#line 876 "browse.m"
    {
#line 876 "browse.m"
      mdb__browser_info__get_format_4_p_0(mdb__browse__Info_10, mdb__browse__Caller_8, mdb__browse__MaybeFormat_9, &mdb__browse__Format_12);
    }
#line 877 "browse.m"
    {
#line 877 "browse.m"
      mdb__browser_info__get_format_params_4_p_0(mdb__browse__Info_10, mdb__browse__Caller_8, mdb__browse__Format_12, &mdb__browse__Params_13);
    }
#line 878 "browse.m"
    mdb__browse__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_10, (MR_Integer) 0)));
#line 878 "browse.m"
    mdb__browse__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_10, (MR_Integer) 1)));
#line 878 "browse.m"
    mdb__browse__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_10, (MR_Integer) 2)));
#line 878 "browse.m"
    mdb__browse__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_10, (MR_Integer) 3)));
#line 878 "browse.m"
    mdb__browse__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_10, (MR_Integer) 4)));
#line 878 "browse.m"
    mdb__browse__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_10, (MR_Integer) 5)));
#line 878 "browse.m"
    mdb__browse__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_10, (MR_Integer) 6)));
#line 878 "browse.m"
    {
#line 878 "browse.m"
      mdb__browse__deref_subterm_3_p_0(mdb__browse__V_20_20, mdb__browse__V_28_28, &mdb__browse__SubResult_14);
    }
#line 894 "browse.m"
    if (((MR_tag((MR_Word) mdb__browse__SubResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 895 "browse.m"
      {
#line 895 "browse.m"
        MR_Word mdb__browse__OKPath_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__SubResult_14, (MR_Integer) 0)));
#line 895 "browse.m"
        MR_Word mdb__browse__ErrorDir_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__SubResult_14, (MR_Integer) 1)));
#line 895 "browse.m"
        MR_String mdb__browse__Msg_49;
#line 895 "browse.m"
        MR_String mdb__browse__V_58_58;
#line 895 "browse.m"
        MR_String mdb__browse__V_59_59;

#line 1049 "browse.m"
        {
#line 1049 "browse.m"
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_7, (MR_String) "error: ");
        }
#line 1054 "browse.m"
        if ((mdb__browse__OKPath_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1055 "browse.m"
          {
#line 1055 "browse.m"
          }
#line 1054 "browse.m"
        else
#line 1051 "browse.m"
          {
#line 1051 "browse.m"
            MR_String mdb__browse__Context_48;
#line 1051 "browse.m"
            MR_String mdb__browse__V_53_53;
#line 1051 "browse.m"
            MR_String mdb__browse__V_54_54;

#line 1052 "browse.m"
            {
#line 1052 "browse.m"
              mdb__browse__V_54_54 = mdb__browse__dirs_to_string_1_f_0(mdb__browse__OKPath_16);
            }
#line 1052 "browse.m"
            {
#line 1052 "browse.m"
              mdb__browse__V_53_53 = mercury__string__f_43_43_2_f_0(mdb__browse__V_54_54, (MR_String) ": ");
            }
#line 1052 "browse.m"
            {
#line 1052 "browse.m"
              mdb__browse__Context_48 = mercury__string__f_43_43_2_f_0((MR_String) "in subdir ", mdb__browse__V_53_53);
            }
#line 1053 "browse.m"
            {
#line 1053 "browse.m"
              mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_7, mdb__browse__Context_48);
            }
#line 1051 "browse.m"
          }
#line 1723 "browse.m"
#line 1723 "browse.m"
        switch (MR_tag((MR_Word) mdb__browse__ErrorDir_17)) {
#line 1723 "browse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1723 "browse.m"
          case (MR_Integer) 0:
#line 1723 "browse.m"
            mdb__browse__V_59_59 = (MR_String) "..";
#line 1723 "browse.m"
            break;
#line 1723 "browse.m"
          case (MR_Integer) 1:
#line 1724 "browse.m"
            {
#line 1724 "browse.m"
              MR_Integer mdb__browse__Num_62 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browse__ErrorDir_17, (MR_Integer) 0)));

#line 1724 "browse.m"
              {
#line 1724 "browse.m"
                mdb__browse__V_59_59 = mercury__string__int_to_string_1_f_0(mdb__browse__Num_62);
              }
#line 1724 "browse.m"
            }
#line 1723 "browse.m"
            break;
#line 1723 "browse.m"
          case (MR_Integer) 2:
#line 1725 "browse.m"
            mdb__browse__V_59_59 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browse__ErrorDir_17, (MR_Integer) 0)));
#line 1723 "browse.m"
            break;
#line 1723 "browse.m"
        }
#line 1057 "browse.m"
        {
#line 1057 "browse.m"
          mdb__browse__V_58_58 = mercury__string__f_43_43_2_f_0(mdb__browse__V_59_59, (MR_String) "\n");
        }
#line 1057 "browse.m"
        {
#line 1057 "browse.m"
          mdb__browse__Msg_49 = mercury__string__f_43_43_2_f_0((MR_String) "there is no subterm ", mdb__browse__V_58_58);
        }
#line 1058 "browse.m"
        {
#line 1058 "browse.m"
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_7, mdb__browse__Msg_49);
        }
#line 895 "browse.m"
      }
#line 894 "browse.m"
    else
#line 880 "browse.m"
      {
#line 880 "browse.m"
        MR_Word mdb__browse__SubUniv_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__SubResult_14, (MR_Integer) 0)));

#line 884 "browse.m"
#line 884 "browse.m"
        switch (mdb__browse__Format_12) {
#line 884 "browse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 884 "browse.m"
          case (MR_Integer) 0:
#line 883 "browse.m"
            {
#line 883 "browse.m"
              mdb__browse__portray_flat_5_p_0(mdb__browse__Debugger_7, mdb__browse__SubUniv_15, mdb__browse__Params_13);
            }
#line 884 "browse.m"
            break;
#line 884 "browse.m"
          case (MR_Integer) 3:
#line 892 "browse.m"
            {
#line 892 "browse.m"
              mdb__browse__portray_pretty_5_p_0(mdb__browse__Debugger_7, mdb__browse__SubUniv_15, mdb__browse__Params_13);
            }
#line 884 "browse.m"
            break;
#line 884 "browse.m"
          case (MR_Integer) 1:
#line 979 "browse.m"
            {
#line 979 "browse.m"
              MR_Word mdb__browse__StreamDb_70;
#line 979 "browse.m"
              MR_Word mdb__browse__BrowserDb_71;
#line 979 "browse.m"
              MR_String mdb__browse__Str_72;
#line 979 "browse.m"
              MR_Integer mdb__browse__V_74_74;
#line 979 "browse.m"
              MR_Integer mdb__browse__V_79_79;
#line 982 "browse.m"
              MR_Integer mdb__browse__V_77_77;
#line 982 "browse.m"
              MR_Integer mdb__browse__V_78_78;

#line 980 "browse.m"
              {
#line 980 "browse.m"
                mercury__io__get_stream_db_3_p_0(&mdb__browse__StreamDb_70);
              }
#line 981 "browse.m"
              mdb__browse__BrowserDb_71 = (MR_Word) mdb__browse__StreamDb_70;
#line 982 "browse.m"
              mdb__browse__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_13, (MR_Integer) 0)));
#line 982 "browse.m"
              mdb__browse__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_13, (MR_Integer) 1)));
#line 982 "browse.m"
              mdb__browse__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_13, (MR_Integer) 2)));
#line 982 "browse.m"
              mdb__browse__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_13, (MR_Integer) 3)));
#line 982 "browse.m"
              {
#line 982 "browse.m"
                mdb__sized_pretty__browser_term_to_string_line_5_p_0(mdb__browse__BrowserDb_71, mdb__browse__SubUniv_15, mdb__browse__V_74_74, mdb__browse__V_79_79, &mdb__browse__Str_72);
              }
#line 984 "browse.m"
              {
#line 984 "browse.m"
                mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_7, mdb__browse__Str_72);
              }
#line 979 "browse.m"
            }
#line 884 "browse.m"
            break;
#line 884 "browse.m"
          case (MR_Integer) 2:
#line 889 "browse.m"
            {
#line 889 "browse.m"
              mdb__browse__portray_verbose_5_p_0(mdb__browse__Debugger_7, mdb__browse__SubUniv_15, mdb__browse__Params_13);
            }
#line 884 "browse.m"
            break;
#line 884 "browse.m"
        }
#line 880 "browse.m"
      }
#line 899 "browse.m"
    {
#line 899 "browse.m"
      mdb__browser_info__nl_debugger_3_p_0(mdb__browse__Debugger_7);
#line 899 "browse.m"
      return;
    }
#line 875 "browse.m"
  }
#line 871 "browse.m"
}

#line 858 "browse.m"
static void MR_CALL 
mdb__browse__portray_maybe_path_7_p_0(
#line 858 "browse.m"
  MR_Word mdb__browse__Debugger_8,
#line 858 "browse.m"
  MR_Word mdb__browse__Caller_9,
#line 858 "browse.m"
  MR_Word mdb__browse__MaybeFormat_10,
#line 858 "browse.m"
  MR_Word mdb__browse__Info_11,
#line 858 "browse.m"
  MR_Word mdb__browse__MaybePath_12)
#line 858 "browse.m"
{
#line 864 "browse.m"
  {
#line 864 "browse.m"
    MR_bool mdb__browse__succeeded;

#line 864 "browse.m"
    if ((mdb__browse__MaybePath_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 865 "browse.m"
      {
#line 865 "browse.m"
        mdb__browse__portray_6_p_0(mdb__browse__Debugger_8, mdb__browse__Caller_9, mdb__browse__MaybeFormat_10, mdb__browse__Info_11);
#line 865 "browse.m"
        return;
      }
#line 864 "browse.m"
    else
#line 867 "browse.m"
      {
#line 867 "browse.m"
        MR_Word mdb__browse__Path_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybePath_12, (MR_Integer) 0)));
#line 867 "browse.m"
        MR_Word mdb__browse__Info_27;
#line 867 "browse.m"
        MR_Word mdb__browse__NewDirs_32;
#line 867 "browse.m"
        MR_Word mdb__browse__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 1)));
#line 867 "browse.m"
        MR_Word mdb__browse__NewDirs_51;
#line 867 "browse.m"
        MR_Word mdb__browse__RevDirs_56;
#line 1513 "browse.m"
        MR_Word mdb__browse__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 0)));
#line 1513 "browse.m"
        MR_Word mdb__browse__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 2)));
#line 1513 "browse.m"
        MR_Word mdb__browse__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 3)));
#line 1513 "browse.m"
        MR_Word mdb__browse__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 4)));
#line 1513 "browse.m"
        MR_Word mdb__browse__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 5)));
#line 1513 "browse.m"
        MR_Word mdb__browse__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 6)));
#line 1514 "browse.m"
        MR_Word mdb__browse__V_40_40;
#line 1514 "browse.m"
        MR_Word mdb__browse__V_42_42;
#line 1514 "browse.m"
        MR_Word mdb__browse__V_43_43;
#line 1514 "browse.m"
        MR_Word mdb__browse__V_44_44;
#line 1514 "browse.m"
        MR_Word mdb__browse__V_45_45;
#line 1514 "browse.m"
        MR_Word mdb__browse__V_46_46;
#line 1514 "browse.m"
        MR_Word mdb__browse__V_41_41;

#line 1522 "browse.m"
        if (((MR_tag((MR_Word) mdb__browse__Path_14)) == (MR_mktag((MR_Integer) 1))))
#line 1523 "browse.m"
          {
#line 1523 "browse.m"
            MR_Word mdb__browse__Dirs_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Path_14, (MR_Integer) 0)));

#line 1524 "browse.m"
            {
#line 1524 "browse.m"
              mercury__list__append_3_p_1((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0, mdb__browse__V_33_33, mdb__browse__Dirs_52, &mdb__browse__NewDirs_51);
            }
#line 1523 "browse.m"
          }
#line 1522 "browse.m"
        else
#line 1520 "browse.m"
          mdb__browse__NewDirs_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Path_14, (MR_Integer) 0)));
#line 1693 "browse.m"
        {
#line 1693 "browse.m"
          mercury__list__reverse_2_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0, mdb__browse__NewDirs_51, &mdb__browse__RevDirs_56);
        }
#line 1694 "browse.m"
        {
#line 1694 "browse.m"
          mdb__browse__simplify_rev_dirs_4_p_0(mdb__browse__RevDirs_56, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__browse__NewDirs_32);
        }
#line 1514 "browse.m"
        mdb__browse__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 0)));
#line 1514 "browse.m"
        mdb__browse__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 1)));
#line 1514 "browse.m"
        mdb__browse__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 2)));
#line 1514 "browse.m"
        mdb__browse__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 3)));
#line 1514 "browse.m"
        mdb__browse__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 4)));
#line 1514 "browse.m"
        mdb__browse__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 5)));
#line 1514 "browse.m"
        mdb__browse__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 6)));
#line 1514 "browse.m"
        {
#line 1514 "browse.m"
          mdb__browse__Info_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1514 "browse.m"
          MR_hl_field(MR_mktag(0), mdb__browse__Info_27, 0) = ((MR_Box) (mdb__browse__V_40_40));
#line 1514 "browse.m"
          MR_hl_field(MR_mktag(0), mdb__browse__Info_27, 1) = ((MR_Box) (mdb__browse__NewDirs_32));
#line 1514 "browse.m"
          MR_hl_field(MR_mktag(0), mdb__browse__Info_27, 2) = ((MR_Box) (mdb__browse__V_42_42));
#line 1514 "browse.m"
          MR_hl_field(MR_mktag(0), mdb__browse__Info_27, 3) = ((MR_Box) (mdb__browse__V_43_43));
#line 1514 "browse.m"
          MR_hl_field(MR_mktag(0), mdb__browse__Info_27, 4) = ((MR_Box) (mdb__browse__V_44_44));
#line 1514 "browse.m"
          MR_hl_field(MR_mktag(0), mdb__browse__Info_27, 5) = ((MR_Box) (mdb__browse__V_45_45));
#line 1514 "browse.m"
          MR_hl_field(MR_mktag(0), mdb__browse__Info_27, 6) = ((MR_Box) (mdb__browse__V_46_46));
#line 1514 "browse.m"
        }
#line 907 "browse.m"
        {
#line 907 "browse.m"
          mdb__browse__portray_6_p_0(mdb__browse__Debugger_8, mdb__browse__Caller_9, mdb__browse__MaybeFormat_10, mdb__browse__Info_27);
#line 907 "browse.m"
          return;
        }
#line 867 "browse.m"
      }
#line 864 "browse.m"
  }
#line 858 "browse.m"
}

#line 804 "browse.m"
static void MR_CALL 
mdb__browse__help_3_p_0(
#line 804 "browse.m"
  MR_Word mdb__browse__Debugger_4)
#line 804 "browse.m"
{
#line 806 "browse.m"
  {
#line 806 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 806 "browse.m"
    MR_String mdb__browse__HelpMessage_6;

#line 807 "browse.m"
    {
#line 807 "browse.m"
      mercury__string__append_list_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[39]), &mdb__browse__HelpMessage_6);
    }
#line 851 "browse.m"
    {
#line 851 "browse.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_4, mdb__browse__HelpMessage_6);
#line 851 "browse.m"
      return;
    }
#line 806 "browse.m"
  }
#line 804 "browse.m"
}

#line 799 "browse.m"
static MR_bool MR_CALL 
mdb__browse__bool_format_option_is_true_2_p_0(
#line 799 "browse.m"
  MR_Word mdb__browse__HeadVar__1_1,
#line 799 "browse.m"
  MR_Word * mdb__browse__Format_3)
#line 799 "browse.m"
{
#line 802 "browse.m"
  {
#line 802 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 802 "browse.m"
    MR_Word mdb__browse__V_4_4;
#line 802 "browse.m"
    MR_Word mdb__browse__V_5_5;

#line 802 "browse.m"
    *mdb__browse__Format_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__1_1, (MR_Integer) 0)));
#line 802 "browse.m"
    mdb__browse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__1_1, (MR_Integer) 1)));
#line 802 "browse.m"
    mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__V_4_4)) == (MR_mktag((MR_Integer) 1)));
#line 802 "browse.m"
    if (mdb__browse__succeeded)
#line 802 "browse.m"
      {
#line 802 "browse.m"
        mdb__browse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__V_4_4, (MR_Integer) 0)));
#line 802 "browse.m"
        mdb__browse__succeeded = (mdb__browse__V_5_5 == (MR_Integer) 1);
#line 802 "browse.m"
      }
#line 802 "browse.m"
    return mdb__browse__succeeded;
#line 802 "browse.m"
  }
#line 799 "browse.m"
}

#line 773 "browse.m"
static MR_bool MR_CALL 
mdb__browse__interpret_format_options_2_p_0_1(
#line 773 "browse.m"
  MR_Box mdb__browse__closure_arg,
#line 773 "browse.m"
  MR_Box mdb__browse__wrapper_arg_1,
#line 773 "browse.m"
  MR_Box * mdb__browse__wrapper_arg_2)
#line 773 "browse.m"
{
#line 773 "browse.m"
  {
#line 773 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 773 "browse.m"
    MR_Box mdb__browse__closure = mdb__browse__closure_arg;
#line 773 "browse.m"
    MR_Word mdb__browse__conv0_Format_3;

#line 773 "browse.m"
    {
#line 773 "browse.m"
      mdb__browse__succeeded = mdb__browse__bool_format_option_is_true_2_p_0(((MR_Word) mdb__browse__wrapper_arg_1), &mdb__browse__conv0_Format_3);
    }
#line 773 "browse.m"
    if (mdb__browse__succeeded)
#line 773 "browse.m"
      {
#line 773 "browse.m"
        *mdb__browse__wrapper_arg_2 = ((MR_Box) (mdb__browse__conv0_Format_3));
#line 773 "browse.m"
        mdb__browse__succeeded = MR_TRUE;
#line 773 "browse.m"
      }
#line 773 "browse.m"
    return mdb__browse__succeeded;
#line 773 "browse.m"
  }
#line 773 "browse.m"
}

#line 768 "browse.m"
static void MR_CALL 
mdb__browse__interpret_format_options_2_p_0(
#line 768 "browse.m"
  MR_Word mdb__browse__OptionTable_3,
#line 768 "browse.m"
  MR_Word * mdb__browse__MaybeMaybeFormat_4)
#line 768 "browse.m"
{
#line 771 "browse.m"
  {
#line 771 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 771 "browse.m"
    MR_Word mdb__browse__TypeCtorInfo_18_18 = (MR_Word) &mdb__parse__mdb__parse__type_ctor_info_format_option_0;
#line 771 "browse.m"
    MR_Word mdb__browse__OptionAssocList_5;
#line 771 "browse.m"
    MR_Word mdb__browse__TrueFormatOptions_6;

#line 772 "browse.m"
    {
#line 772 "browse.m"
      mercury__map__to_assoc_list_2_p_0(mdb__browse__TypeCtorInfo_18_18, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, mdb__browse__OptionTable_3, &mdb__browse__OptionAssocList_5);
    }
#line 773 "browse.m"
    {
#line 773 "browse.m"
      mercury__list__filter_map_3_p_0((MR_Word) &mdb__browse_scalar_common_1[1], mdb__browse__TypeCtorInfo_18_18, (MR_Word) &mdb__browse_scalar_common_1[5], mdb__browse__OptionAssocList_5, &mdb__browse__TrueFormatOptions_6);
    }
#line 778 "browse.m"
    if ((mdb__browse__TrueFormatOptions_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 776 "browse.m"
      {
#line 777 "browse.m"
        *mdb__browse__MaybeMaybeFormat_4 = (MR_Word) &mdb__browse_scalar_common_5[3];
#line 776 "browse.m"
      }
#line 778 "browse.m"
    else
#line 778 "browse.m"
      {
#line 778 "browse.m"
        MR_Word mdb__browse__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__TrueFormatOptions_6, (MR_Integer) 1)));
#line 778 "browse.m"
        MR_Word mdb__browse__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__TrueFormatOptions_6, (MR_Integer) 0)));

#line 778 "browse.m"
        if ((mdb__browse__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 779 "browse.m"
          {
#line 779 "browse.m"
            MR_Word mdb__browse__Format_8 = ((&mdb__browse_vector_common_9[0 + mdb__browse__V_24_24]))->mdb__browse__vector_common_type_9_0__vct_9_f_0;
#line 779 "browse.m"
            MR_Word mdb__browse__V_16_16;

#line 793 "browse.m"
            {
#line 793 "browse.m"
              mdb__browse__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 793 "browse.m"
              MR_hl_field(MR_mktag(1), mdb__browse__V_16_16, 0) = ((MR_Box) (mdb__browse__Format_8));
#line 793 "browse.m"
            }
#line 793 "browse.m"
            {
#line 793 "browse.m"
              MR_Word base;
#line 793 "browse.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 793 "browse.m"
              *mdb__browse__MaybeMaybeFormat_4 = base;
#line 793 "browse.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browse__V_16_16));
#line 793 "browse.m"
            }
#line 779 "browse.m"
          }
#line 778 "browse.m"
        else
#line 795 "browse.m"
          {
#line 796 "browse.m"
            *mdb__browse__MaybeMaybeFormat_4 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[4]);
#line 795 "browse.m"
          }
#line 778 "browse.m"
      }
#line 771 "browse.m"
  }
#line 768 "browse.m"
}

#line 753 "browse.m"
static void MR_CALL 
mdb__browse__get_value_representation_2_p_0(
#line 753 "browse.m"
  MR_Word mdb__browse__TypeInfo_for_T_6,
#line 753 "browse.m"
  MR_Box mdb__browse__HeadVar__1_1,
#line 753 "browse.m"
  MR_Integer * mdb__browse__HeadVar__2_2)
#line 753 "browse.m"
{
#line 755 "browse.m"
  {
#line 755 "browse.m"
    MR_bool mdb__browse__succeeded;

#line 755 "browse.m"
    {
#line 755 "browse.m"
      mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0(mdb__browse__HeadVar__1_1, mdb__browse__HeadVar__2_2);
#line 755 "browse.m"
      return;
    }
#line 755 "browse.m"
  }
#line 753 "browse.m"
}

#line 722 "browse.m"
static void MR_CALL 
mdb__browse__do_print_memory_addr_5_p_0(
#line 722 "browse.m"
  MR_Word mdb__browse__Debugger_6,
#line 722 "browse.m"
  MR_Word mdb__browse__Info_7,
#line 722 "browse.m"
  MR_Word mdb__browse__MaybePath_8)
#line 722 "browse.m"
{
#line 725 "browse.m"
  {
#line 725 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 725 "browse.m"
    MR_Word mdb__browse__Dirs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_7, (MR_Integer) 1)));
#line 725 "browse.m"
    MR_Word mdb__browse__Dirs_11;
#line 725 "browse.m"
    MR_Word mdb__browse__DerefResult_13;
#line 725 "browse.m"
    MR_Word mdb__browse__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_7, (MR_Integer) 0)));
#line 726 "browse.m"
    MR_Word mdb__browse__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_7, (MR_Integer) 2)));
#line 726 "browse.m"
    MR_Word mdb__browse__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_7, (MR_Integer) 3)));
#line 726 "browse.m"
    MR_Word mdb__browse__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_7, (MR_Integer) 4)));
#line 726 "browse.m"
    MR_Word mdb__browse__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_7, (MR_Integer) 5)));
#line 726 "browse.m"
    MR_Word mdb__browse__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_7, (MR_Integer) 6)));

#line 730 "browse.m"
    if ((mdb__browse__MaybePath_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 729 "browse.m"
      mdb__browse__Dirs_11 = mdb__browse__Dirs0_10;
#line 730 "browse.m"
    else
#line 731 "browse.m"
      {
#line 731 "browse.m"
        MR_Word mdb__browse__Path_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybePath_8, (MR_Integer) 0)));
#line 731 "browse.m"
        MR_Word mdb__browse__NewDirs_62;
#line 731 "browse.m"
        MR_Word mdb__browse__RevDirs_67;

#line 1522 "browse.m"
        if (((MR_tag((MR_Word) mdb__browse__Path_12)) == (MR_mktag((MR_Integer) 1))))
#line 1523 "browse.m"
          {
#line 1523 "browse.m"
            MR_Word mdb__browse__Dirs_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Path_12, (MR_Integer) 0)));

#line 1524 "browse.m"
            {
#line 1524 "browse.m"
              mercury__list__append_3_p_1((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0, mdb__browse__Dirs0_10, mdb__browse__Dirs_63, &mdb__browse__NewDirs_62);
            }
#line 1523 "browse.m"
          }
#line 1522 "browse.m"
        else
#line 1520 "browse.m"
          mdb__browse__NewDirs_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Path_12, (MR_Integer) 0)));
#line 1693 "browse.m"
        {
#line 1693 "browse.m"
          mercury__list__reverse_2_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0, mdb__browse__NewDirs_62, &mdb__browse__RevDirs_67);
        }
#line 1694 "browse.m"
        {
#line 1694 "browse.m"
          mdb__browse__simplify_rev_dirs_4_p_0(mdb__browse__RevDirs_67, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__browse__Dirs_11);
        }
#line 731 "browse.m"
      }
#line 734 "browse.m"
    {
#line 734 "browse.m"
      mdb__browse__deref_subterm_3_p_0(mdb__browse__V_34_34, mdb__browse__Dirs_11, &mdb__browse__DerefResult_13);
    }
#line 747 "browse.m"
    if (((MR_tag((MR_Word) mdb__browse__DerefResult_13)) == (MR_mktag((MR_Integer) 1))))
#line 748 "browse.m"
      {
#line 748 "browse.m"
        MR_Word mdb__browse__OKPath_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__DerefResult_13, (MR_Integer) 0)));
#line 748 "browse.m"
        MR_Word mdb__browse__ErrorDir_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__DerefResult_13, (MR_Integer) 1)));
#line 748 "browse.m"
        MR_String mdb__browse__Msg_80;
#line 748 "browse.m"
        MR_String mdb__browse__V_89_89;
#line 748 "browse.m"
        MR_String mdb__browse__V_90_90;

#line 1049 "browse.m"
        {
#line 1049 "browse.m"
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, (MR_String) "error: ");
        }
#line 1054 "browse.m"
        if ((mdb__browse__OKPath_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1055 "browse.m"
          {
#line 1055 "browse.m"
          }
#line 1054 "browse.m"
        else
#line 1051 "browse.m"
          {
#line 1051 "browse.m"
            MR_String mdb__browse__Context_79;
#line 1051 "browse.m"
            MR_String mdb__browse__V_84_84;
#line 1051 "browse.m"
            MR_String mdb__browse__V_85_85;

#line 1052 "browse.m"
            {
#line 1052 "browse.m"
              mdb__browse__V_85_85 = mdb__browse__dirs_to_string_1_f_0(mdb__browse__OKPath_22);
            }
#line 1052 "browse.m"
            {
#line 1052 "browse.m"
              mdb__browse__V_84_84 = mercury__string__f_43_43_2_f_0(mdb__browse__V_85_85, (MR_String) ": ");
            }
#line 1052 "browse.m"
            {
#line 1052 "browse.m"
              mdb__browse__Context_79 = mercury__string__f_43_43_2_f_0((MR_String) "in subdir ", mdb__browse__V_84_84);
            }
#line 1053 "browse.m"
            {
#line 1053 "browse.m"
              mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, mdb__browse__Context_79);
            }
#line 1051 "browse.m"
          }
#line 1723 "browse.m"
#line 1723 "browse.m"
        switch (MR_tag((MR_Word) mdb__browse__ErrorDir_23)) {
#line 1723 "browse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1723 "browse.m"
          case (MR_Integer) 0:
#line 1723 "browse.m"
            mdb__browse__V_90_90 = (MR_String) "..";
#line 1723 "browse.m"
            break;
#line 1723 "browse.m"
          case (MR_Integer) 1:
#line 1724 "browse.m"
            {
#line 1724 "browse.m"
              MR_Integer mdb__browse__Num_93 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browse__ErrorDir_23, (MR_Integer) 0)));

#line 1724 "browse.m"
              {
#line 1724 "browse.m"
                mdb__browse__V_90_90 = mercury__string__int_to_string_1_f_0(mdb__browse__Num_93);
              }
#line 1724 "browse.m"
            }
#line 1723 "browse.m"
            break;
#line 1723 "browse.m"
          case (MR_Integer) 2:
#line 1725 "browse.m"
            mdb__browse__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browse__ErrorDir_23, (MR_Integer) 0)));
#line 1723 "browse.m"
            break;
#line 1723 "browse.m"
        }
#line 1057 "browse.m"
        {
#line 1057 "browse.m"
          mdb__browse__V_89_89 = mercury__string__f_43_43_2_f_0(mdb__browse__V_90_90, (MR_String) "\n");
        }
#line 1057 "browse.m"
        {
#line 1057 "browse.m"
          mdb__browse__Msg_80 = mercury__string__f_43_43_2_f_0((MR_String) "there is no subterm ", mdb__browse__V_89_89);
        }
#line 1058 "browse.m"
        {
#line 1058 "browse.m"
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, mdb__browse__Msg_80);
        }
#line 750 "browse.m"
        {
#line 750 "browse.m"
          mdb__browser_info__nl_debugger_3_p_0(mdb__browse__Debugger_6);
#line 750 "browse.m"
          return;
        }
#line 748 "browse.m"
      }
#line 747 "browse.m"
    else
#line 736 "browse.m"
      {
#line 736 "browse.m"
        MR_Word mdb__browse__BrowserTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__DerefResult_13, (MR_Integer) 0)));
#line 736 "browse.m"
        MR_String mdb__browse__Str_18;

#line 742 "browse.m"
        if (((MR_tag((MR_Word) mdb__browse__BrowserTerm_14)) == (MR_mktag((MR_Integer) 0))))
#line 738 "browse.m"
          {
#line 738 "browse.m"
            MR_Word mdb__browse__Univ_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__BrowserTerm_14, (MR_Integer) 0)));
#line 738 "browse.m"
            MR_Box mdb__browse__Value_16;
#line 738 "browse.m"
            MR_Integer mdb__browse__Addr_17;
#line 738 "browse.m"
            MR_String mdb__browse__V_48_48;
#line 738 "browse.m"
            MR_String mdb__browse__V_56_56;
#line 739 "browse.m"
            MR_Word mdb__browse__TypeInfo_46_46;
#line 755 "browse.m"
            MR_Word mdb__browse__TypeInfo_46_98;

#line 739 "browse.m"
            {
#line 739 "browse.m"
              mdb__browse__Value_16 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_46_46, mdb__browse__Univ_15);
            }
#line 758 "browse.m"
{
#define MR_PROC_LABEL mdb__browse__do_print_memory_addr_5_p_0

	MR_Word Value;
	MR_Integer Addr;

	Value = (MR_Word) mdb__browse__Value_16 ;
		{
#line 758 "browse.m"

    Addr = (MR_Integer) Value;

#line 7945 "mdb.browse.c"

		;}
#undef MR_PROC_LABEL
	 mdb__browse__Addr_17  = Addr;
#line 758 "browse.m"
}
#line 741 "browse.m"
            {
#line 741 "browse.m"
              mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) &mdb__browse_scalar_common_5[2], (MR_Integer) 2, mdb__browse__Addr_17, &mdb__browse__V_48_48);
            }
#line 741 "browse.m"
            {
#line 741 "browse.m"
              mdb__browse__V_56_56 = mercury__string__f_43_43_2_f_0(mdb__browse__V_48_48, (MR_String) "\n");
            }
#line 741 "browse.m"
            {
#line 741 "browse.m"
              mdb__browse__Str_18 = mercury__string__f_43_43_2_f_0((MR_String) "addr = ", mdb__browse__V_56_56);
            }
#line 738 "browse.m"
          }
#line 742 "browse.m"
        else
#line 744 "browse.m"
          mdb__browse__Str_18 = (MR_String) "synthetic terms have no addresses\n";
#line 746 "browse.m"
        {
#line 746 "browse.m"
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, mdb__browse__Str_18);
#line 746 "browse.m"
          return;
        }
#line 736 "browse.m"
      }
#line 725 "browse.m"
  }
#line 722 "browse.m"
}

#line 692 "browse.m"
static void MR_CALL 
mdb__browse__do_portray_7_p_0(
#line 692 "browse.m"
  MR_Word mdb__browse__Debugger_8,
#line 692 "browse.m"
  MR_Word mdb__browse__CallerType_9,
#line 692 "browse.m"
  MR_Word mdb__browse__MaybeMaybeOptionTable_10,
#line 692 "browse.m"
  MR_Word mdb__browse__Info_11,
#line 692 "browse.m"
  MR_Word mdb__browse__MaybePath_12)
#line 692 "browse.m"
{
#line 699 "browse.m"
  {
#line 699 "browse.m"
    MR_bool mdb__browse__succeeded;

#line 699 "browse.m"
    if ((mdb__browse__MaybeMaybeOptionTable_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 699 "browse.m"
      {
#line 699 "browse.m"
        MR_Word mdb__browse__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 864 "browse.m"
        if ((mdb__browse__MaybePath_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 865 "browse.m"
          {
#line 865 "browse.m"
            mdb__browse__portray_6_p_0(mdb__browse__Debugger_8, mdb__browse__CallerType_9, mdb__browse__V_28_28, mdb__browse__Info_11);
#line 865 "browse.m"
            return;
          }
#line 864 "browse.m"
        else
#line 867 "browse.m"
          {
#line 867 "browse.m"
            MR_Word mdb__browse__Path_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybePath_12, (MR_Integer) 0)));
#line 867 "browse.m"
            MR_Word mdb__browse__Info_50;
#line 867 "browse.m"
            MR_Word mdb__browse__NewDirs_55;
#line 867 "browse.m"
            MR_Word mdb__browse__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 1)));
#line 867 "browse.m"
            MR_Word mdb__browse__NewDirs_74;
#line 867 "browse.m"
            MR_Word mdb__browse__RevDirs_79;
#line 1513 "browse.m"
            MR_Word mdb__browse__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 0)));
#line 1513 "browse.m"
            MR_Word mdb__browse__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 2)));
#line 1513 "browse.m"
            MR_Word mdb__browse__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 3)));
#line 1513 "browse.m"
            MR_Word mdb__browse__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 4)));
#line 1513 "browse.m"
            MR_Word mdb__browse__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 5)));
#line 1513 "browse.m"
            MR_Word mdb__browse__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 6)));
#line 1514 "browse.m"
            MR_Word mdb__browse__V_63_63;
#line 1514 "browse.m"
            MR_Word mdb__browse__V_65_65;
#line 1514 "browse.m"
            MR_Word mdb__browse__V_66_66;
#line 1514 "browse.m"
            MR_Word mdb__browse__V_67_67;
#line 1514 "browse.m"
            MR_Word mdb__browse__V_68_68;
#line 1514 "browse.m"
            MR_Word mdb__browse__V_69_69;
#line 1514 "browse.m"
            MR_Word mdb__browse__V_64_64;

#line 1522 "browse.m"
            if (((MR_tag((MR_Word) mdb__browse__Path_39)) == (MR_mktag((MR_Integer) 1))))
#line 1523 "browse.m"
              {
#line 1523 "browse.m"
                MR_Word mdb__browse__Dirs_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Path_39, (MR_Integer) 0)));

#line 1524 "browse.m"
                {
#line 1524 "browse.m"
                  mercury__list__append_3_p_1((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0, mdb__browse__V_56_56, mdb__browse__Dirs_75, &mdb__browse__NewDirs_74);
                }
#line 1523 "browse.m"
              }
#line 1522 "browse.m"
            else
#line 1520 "browse.m"
              mdb__browse__NewDirs_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Path_39, (MR_Integer) 0)));
#line 1693 "browse.m"
            {
#line 1693 "browse.m"
              mercury__list__reverse_2_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0, mdb__browse__NewDirs_74, &mdb__browse__RevDirs_79);
            }
#line 1694 "browse.m"
            {
#line 1694 "browse.m"
              mdb__browse__simplify_rev_dirs_4_p_0(mdb__browse__RevDirs_79, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__browse__NewDirs_55);
            }
#line 1514 "browse.m"
            mdb__browse__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 0)));
#line 1514 "browse.m"
            mdb__browse__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 1)));
#line 1514 "browse.m"
            mdb__browse__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 2)));
#line 1514 "browse.m"
            mdb__browse__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 3)));
#line 1514 "browse.m"
            mdb__browse__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 4)));
#line 1514 "browse.m"
            mdb__browse__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 5)));
#line 1514 "browse.m"
            mdb__browse__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 6)));
#line 1514 "browse.m"
            {
#line 1514 "browse.m"
              mdb__browse__Info_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1514 "browse.m"
              MR_hl_field(MR_mktag(0), mdb__browse__Info_50, 0) = ((MR_Box) (mdb__browse__V_63_63));
#line 1514 "browse.m"
              MR_hl_field(MR_mktag(0), mdb__browse__Info_50, 1) = ((MR_Box) (mdb__browse__NewDirs_55));
#line 1514 "browse.m"
              MR_hl_field(MR_mktag(0), mdb__browse__Info_50, 2) = ((MR_Box) (mdb__browse__V_65_65));
#line 1514 "browse.m"
              MR_hl_field(MR_mktag(0), mdb__browse__Info_50, 3) = ((MR_Box) (mdb__browse__V_66_66));
#line 1514 "browse.m"
              MR_hl_field(MR_mktag(0), mdb__browse__Info_50, 4) = ((MR_Box) (mdb__browse__V_67_67));
#line 1514 "browse.m"
              MR_hl_field(MR_mktag(0), mdb__browse__Info_50, 5) = ((MR_Box) (mdb__browse__V_68_68));
#line 1514 "browse.m"
              MR_hl_field(MR_mktag(0), mdb__browse__Info_50, 6) = ((MR_Box) (mdb__browse__V_69_69));
#line 1514 "browse.m"
            }
#line 907 "browse.m"
            {
#line 907 "browse.m"
              mdb__browse__portray_6_p_0(mdb__browse__Debugger_8, mdb__browse__CallerType_9, mdb__browse__V_28_28, mdb__browse__Info_50);
#line 907 "browse.m"
              return;
            }
#line 867 "browse.m"
          }
#line 699 "browse.m"
      }
#line 699 "browse.m"
    else
#line 702 "browse.m"
      {
#line 702 "browse.m"
        MR_Word mdb__browse__MaybeOptionTable_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeMaybeOptionTable_10, (MR_Integer) 0)));

#line 715 "browse.m"
        if (((MR_tag((MR_Word) mdb__browse__MaybeOptionTable_14)) == (MR_mktag((MR_Integer) 1))))
#line 716 "browse.m"
          {
#line 716 "browse.m"
            MR_String mdb__browse__Msg_30 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeOptionTable_14, (MR_Integer) 0)));

#line 717 "browse.m"
            {
#line 717 "browse.m"
              mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_8, mdb__browse__Msg_30);
            }
#line 718 "browse.m"
            {
#line 718 "browse.m"
              mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_8, (MR_String) "\n");
#line 718 "browse.m"
              return;
            }
#line 716 "browse.m"
          }
#line 715 "browse.m"
        else
#line 704 "browse.m"
          {
#line 704 "browse.m"
            MR_Word mdb__browse__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__MaybeOptionTable_14, (MR_Integer) 0)));
#line 704 "browse.m"
            MR_Word mdb__browse__FormatResult_16;

#line 705 "browse.m"
            {
#line 705 "browse.m"
              mdb__browse__interpret_format_options_2_p_0(mdb__browse__OptionTable_15, &mdb__browse__FormatResult_16);
            }
#line 710 "browse.m"
            if (((MR_tag((MR_Word) mdb__browse__FormatResult_16)) == (MR_mktag((MR_Integer) 1))))
#line 711 "browse.m"
              {
#line 711 "browse.m"
                MR_String mdb__browse__Msg_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__FormatResult_16, (MR_Integer) 0)));

#line 712 "browse.m"
                {
#line 712 "browse.m"
                  mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_8, mdb__browse__Msg_18);
                }
#line 713 "browse.m"
                {
#line 713 "browse.m"
                  mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_8, (MR_String) "\n");
#line 713 "browse.m"
                  return;
                }
#line 711 "browse.m"
              }
#line 710 "browse.m"
            else
#line 707 "browse.m"
              {
#line 707 "browse.m"
                MR_Word mdb__browse__MaybeFormat_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__FormatResult_16, (MR_Integer) 0)));

#line 708 "browse.m"
                {
#line 708 "browse.m"
                  mdb__browse__portray_maybe_path_7_p_0(mdb__browse__Debugger_8, mdb__browse__CallerType_9, mdb__browse__MaybeFormat_17, mdb__browse__Info_11, mdb__browse__MaybePath_12);
#line 708 "browse.m"
                  return;
                }
#line 707 "browse.m"
              }
#line 704 "browse.m"
          }
#line 702 "browse.m"
      }
#line 699 "browse.m"
  }
#line 692 "browse.m"
}

#line 583 "browse.m"
static void MR_CALL 
mdb__browse__run_command_7_p_0(
#line 583 "browse.m"
  MR_Word mdb__browse__Debugger_8,
#line 583 "browse.m"
  MR_Word mdb__browse__Command_9,
#line 583 "browse.m"
  MR_Word * mdb__browse__Quit_10,
#line 583 "browse.m"
  MR_Word mdb__browse__STATE_VARIABLE_Info_0_29,
#line 583 "browse.m"
  MR_Word * mdb__browse__STATE_VARIABLE_Info_30)
#line 583 "browse.m"
{
#line 586 "browse.m"
  {
#line 586 "browse.m"
    MR_bool mdb__browse__succeeded;

#line 597 "browse.m"
#line 597 "browse.m"
    switch (MR_tag((MR_Word) mdb__browse__Command_9)) {
#line 597 "browse.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 597 "browse.m"
      case (MR_Integer) 0:
#line 597 "browse.m"
#line 597 "browse.m"
        switch (MR_unmkbody(mdb__browse__Command_9)) {
#line 597 "browse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 597 "browse.m"
          case (MR_Integer) 0:
#line 598 "browse.m"
            {
#line 599 "browse.m"
              {
#line 599 "browse.m"
                mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_8, (MR_String) "command not yet implemented\n");
              }
#line 600 "browse.m"
              *mdb__browse__Quit_10 = (MR_Integer) 0;
#line 598 "browse.m"
              *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
#line 598 "browse.m"
            }
#line 597 "browse.m"
            break;
#line 597 "browse.m"
          case (MR_Integer) 1:
#line 602 "browse.m"
            {
#line 603 "browse.m"
              {
#line 603 "browse.m"
                mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_8, (MR_String) "command not yet implemented\n");
              }
#line 604 "browse.m"
              *mdb__browse__Quit_10 = (MR_Integer) 0;
#line 602 "browse.m"
              *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
#line 602 "browse.m"
            }
#line 597 "browse.m"
            break;
#line 597 "browse.m"
          case (MR_Integer) 2:
#line 610 "browse.m"
            {
#line 611 "browse.m"
              {
#line 611 "browse.m"
                mdb__browse__set_path_3_p_0((MR_Word) &mdb__browse_scalar_common_5[1], mdb__browse__STATE_VARIABLE_Info_0_29, mdb__browse__STATE_VARIABLE_Info_30);
              }
#line 612 "browse.m"
              *mdb__browse__Quit_10 = (MR_Integer) 0;
#line 610 "browse.m"
            }
#line 597 "browse.m"
            break;
#line 597 "browse.m"
          case (MR_Integer) 3:
#line 626 "browse.m"
            {
#line 626 "browse.m"
              MR_Word mdb__browse__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 1)));
#line 627 "browse.m"
              MR_Word mdb__browse__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 0)));
#line 627 "browse.m"
              MR_Word mdb__browse__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 2)));
#line 627 "browse.m"
              MR_Word mdb__browse__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 3)));
#line 627 "browse.m"
              MR_Word mdb__browse__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 4)));
#line 627 "browse.m"
              MR_Word mdb__browse__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 5)));
#line 627 "browse.m"
              MR_Word mdb__browse__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 6)));

#line 627 "browse.m"
              {
#line 627 "browse.m"
                mdb__browser_info__write_path_4_p_0(mdb__browse__Debugger_8, mdb__browse__V_54_54);
              }
#line 628 "browse.m"
              {
#line 628 "browse.m"
                mdb__browser_info__nl_debugger_3_p_0(mdb__browse__Debugger_8);
              }
#line 629 "browse.m"
              *mdb__browse__Quit_10 = (MR_Integer) 0;
#line 626 "browse.m"
              *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
#line 626 "browse.m"
            }
#line 597 "browse.m"
            break;
#line 597 "browse.m"
          case (MR_Integer) 4:
#line 660 "browse.m"
            {
#line 660 "browse.m"
              MR_Word mdb__browse__MaybeModeFunc_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 6)));
#line 660 "browse.m"
              MR_Word mdb__browse__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 1)));
#line 661 "browse.m"
              MR_Word mdb__browse__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 0)));
#line 661 "browse.m"
              MR_Word mdb__browse__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 2)));
#line 661 "browse.m"
              MR_Word mdb__browse__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 3)));
#line 661 "browse.m"
              MR_Word mdb__browse__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 4)));
#line 661 "browse.m"
              MR_Word mdb__browse__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 5)));

#line 662 "browse.m"
              {
#line 662 "browse.m"
                mdb__browse__write_term_mode_debugger_5_p_0(mdb__browse__Debugger_8, mdb__browse__MaybeModeFunc_83, mdb__browse__V_154_154);
              }
#line 663 "browse.m"
              *mdb__browse__Quit_10 = (MR_Integer) 0;
#line 660 "browse.m"
              *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
#line 660 "browse.m"
            }
#line 597 "browse.m"
            break;
#line 597 "browse.m"
          case (MR_Integer) 5:
#line 669 "browse.m"
            {
#line 670 "browse.m"
              {
#line 670 "browse.m"
                mdb__browse__help_3_p_0(mdb__browse__Debugger_8);
              }
#line 671 "browse.m"
              *mdb__browse__Quit_10 = (MR_Integer) 0;
#line 669 "browse.m"
              *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
#line 669 "browse.m"
            }
#line 597 "browse.m"
            break;
#line 597 "browse.m"
          case (MR_Integer) 6:
#line 673 "browse.m"
            {
#line 674 "browse.m"
              *mdb__browse__Quit_10 = (MR_Integer) 1;
#line 673 "browse.m"
              *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
#line 673 "browse.m"
            }
#line 597 "browse.m"
            break;
#line 597 "browse.m"
          case (MR_Integer) 7:
#line 676 "browse.m"
            {
#line 677 "browse.m"
              *mdb__browse__Quit_10 = (MR_Integer) 0;
#line 676 "browse.m"
              *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
#line 676 "browse.m"
            }
#line 597 "browse.m"
            break;
#line 597 "browse.m"
          case (MR_Integer) 8:
#line 679 "browse.m"
            {
#line 680 "browse.m"
              {
#line 680 "browse.m"
                mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_8, (MR_String) "Error: unknown command or syntax error.\n");
              }
#line 682 "browse.m"
              {
#line 682 "browse.m"
                mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_8, (MR_String) "Type \"help\" for help.\n");
              }
#line 683 "browse.m"
              *mdb__browse__Quit_10 = (MR_Integer) 0;
#line 679 "browse.m"
              *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
#line 679 "browse.m"
            }
#line 597 "browse.m"
            break;
#line 597 "browse.m"
        }
#line 597 "browse.m"
        break;
#line 597 "browse.m"
      case (MR_Integer) 1:
#line 594 "browse.m"
        {
#line 594 "browse.m"
          MR_Word mdb__browse__PrintOption_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Command_9, (MR_Integer) 0)));
#line 594 "browse.m"
          MR_Word mdb__browse__MaybePath_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Command_9, (MR_Integer) 1)));

#line 595 "browse.m"
          {
#line 595 "browse.m"
            mdb__browse__do_portray_7_p_0(mdb__browse__Debugger_8, (MR_Integer) 1, mdb__browse__PrintOption_13, mdb__browse__STATE_VARIABLE_Info_0_29, mdb__browse__MaybePath_14);
          }
#line 596 "browse.m"
          *mdb__browse__Quit_10 = (MR_Integer) 0;
#line 594 "browse.m"
          *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
#line 594 "browse.m"
        }
#line 597 "browse.m"
        break;
#line 597 "browse.m"
      case (MR_Integer) 2:
#line 606 "browse.m"
        {
#line 606 "browse.m"
          MR_Word mdb__browse__MaybePath_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browse__Command_9, (MR_Integer) 0)));

#line 607 "browse.m"
          {
#line 607 "browse.m"
            mdb__browse__do_print_memory_addr_5_p_0(mdb__browse__Debugger_8, mdb__browse__STATE_VARIABLE_Info_0_29, mdb__browse__MaybePath_73);
          }
#line 608 "browse.m"
          *mdb__browse__Quit_10 = (MR_Integer) 0;
#line 606 "browse.m"
          *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
#line 606 "browse.m"
        }
#line 597 "browse.m"
        break;
#line 597 "browse.m"
      case (MR_Integer) 3:
#line 597 "browse.m"
#line 597 "browse.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browse__Command_9, (MR_Integer) 0)))) {
#line 597 "browse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 597 "browse.m"
          case (MR_Integer) 0:
#line 614 "browse.m"
            {
#line 614 "browse.m"
              MR_Word mdb__browse__Path_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browse__Command_9, (MR_Integer) 1)));
#line 614 "browse.m"
              MR_Word mdb__browse__NewPwd_16;
#line 614 "browse.m"
              MR_Word mdb__browse__Result_17;
#line 614 "browse.m"
              MR_Word mdb__browse__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 1)));
#line 614 "browse.m"
              MR_Word mdb__browse__V_58_58;
#line 615 "browse.m"
              MR_Word mdb__browse__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 0)));
#line 615 "browse.m"
              MR_Word mdb__browse__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 2)));
#line 615 "browse.m"
              MR_Word mdb__browse__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 3)));
#line 615 "browse.m"
              MR_Word mdb__browse__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 4)));
#line 615 "browse.m"
              MR_Word mdb__browse__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 5)));
#line 615 "browse.m"
              MR_Word mdb__browse__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 6)));
#line 616 "browse.m"
              MR_Word mdb__browse__V_90_90;
#line 616 "browse.m"
              MR_Word mdb__browse__V_91_91;
#line 616 "browse.m"
              MR_Word mdb__browse__V_92_92;
#line 616 "browse.m"
              MR_Word mdb__browse__V_93_93;
#line 616 "browse.m"
              MR_Word mdb__browse__V_94_94;
#line 616 "browse.m"
              MR_Word mdb__browse__V_95_95;

#line 615 "browse.m"
              {
#line 615 "browse.m"
                mdb__browse__change_dir_3_p_0(mdb__browse__V_57_57, mdb__browse__Path_15, &mdb__browse__NewPwd_16);
              }
#line 616 "browse.m"
              mdb__browse__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 0)));
#line 616 "browse.m"
              mdb__browse__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 1)));
#line 616 "browse.m"
              mdb__browse__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 2)));
#line 616 "browse.m"
              mdb__browse__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 3)));
#line 616 "browse.m"
              mdb__browse__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 4)));
#line 616 "browse.m"
              mdb__browse__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 5)));
#line 616 "browse.m"
              mdb__browse__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 6)));
#line 616 "browse.m"
              {
#line 616 "browse.m"
                mdb__browse__deref_subterm_3_p_0(mdb__browse__V_58_58, mdb__browse__NewPwd_16, &mdb__browse__Result_17);
              }
#line 620 "browse.m"
              if (((MR_tag((MR_Word) mdb__browse__Result_17)) == (MR_mktag((MR_Integer) 1))))
#line 621 "browse.m"
                {
#line 621 "browse.m"
                  MR_Word mdb__browse__OKPath_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Result_17, (MR_Integer) 0)));
#line 621 "browse.m"
                  MR_Word mdb__browse__ErrorDir_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Result_17, (MR_Integer) 1)));

#line 622 "browse.m"
                  {
#line 622 "browse.m"
                    mdb__browse__report_deref_error_5_p_0(mdb__browse__Debugger_8, mdb__browse__OKPath_19, mdb__browse__ErrorDir_20);
                  }
#line 621 "browse.m"
                  *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
#line 621 "browse.m"
                }
#line 620 "browse.m"
              else
#line 618 "browse.m"
                {
#line 619 "browse.m"
                  MR_Word mdb__browse__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 0)));
#line 619 "browse.m"
                  MR_Word mdb__browse__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 2)));
#line 619 "browse.m"
                  MR_Word mdb__browse__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 3)));
#line 619 "browse.m"
                  MR_Word mdb__browse__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 4)));
#line 619 "browse.m"
                  MR_Word mdb__browse__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 5)));
#line 619 "browse.m"
                  MR_Word mdb__browse__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 6)));
#line 619 "browse.m"
                  MR_Word mdb__browse__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 1)));

#line 619 "browse.m"
                  {
#line 619 "browse.m"
                    MR_Word base;
#line 619 "browse.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 619 "browse.m"
                    *mdb__browse__STATE_VARIABLE_Info_30 = base;
#line 619 "browse.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browse__V_96_96));
#line 619 "browse.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browse__NewPwd_16));
#line 619 "browse.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browse__V_98_98));
#line 619 "browse.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browse__V_99_99));
#line 619 "browse.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browse__V_100_100));
#line 619 "browse.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browse__V_101_101));
#line 619 "browse.m"
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browse__V_102_102));
#line 619 "browse.m"
                  }
#line 618 "browse.m"
                }
#line 624 "browse.m"
              *mdb__browse__Quit_10 = (MR_Integer) 0;
#line 614 "browse.m"
            }
#line 597 "browse.m"
            break;
#line 597 "browse.m"
          case (MR_Integer) 1:
#line 631 "browse.m"
            {
#line 631 "browse.m"
              MR_Word mdb__browse__HowTrack_21 = ((((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browse__Command_9, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 631 "browse.m"
              MR_Word mdb__browse__ShouldAssertInvalid_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browse__Command_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 631 "browse.m"
              MR_Word mdb__browse__MaybePath_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browse__Command_9, (MR_Integer) 2)));
#line 631 "browse.m"
              MR_Word mdb__browse__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 6)));
#line 631 "browse.m"
              MR_Word mdb__browse__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 4)));
#line 631 "browse.m"
              MR_Word mdb__browse__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 3)));
#line 631 "browse.m"
              MR_Word mdb__browse__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 2)));
#line 631 "browse.m"
              MR_Word mdb__browse__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 1)));
#line 631 "browse.m"
              MR_Word mdb__browse__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 0)));
#line 634 "browse.m"
              MR_Word mdb__browse__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 5)));

#line 647 "browse.m"
              if ((mdb__browse__MaybePath_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 648 "browse.m"
                {
#line 648 "browse.m"
                  MR_Word mdb__browse__V_46_46;

#line 650 "browse.m"
                  {
#line 650 "browse.m"
                    mdb__browse__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 650 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_46_46, 0) = ((MR_Box) ((mdb__browse__HowTrack_21 | ((mdb__browse__ShouldAssertInvalid_22 << (MR_Integer) 1)))));
#line 650 "browse.m"
                    MR_hl_field(MR_mktag(1), mdb__browse__V_46_46, 1) = ((MR_Box) (mdb__browse__V_170_170));
#line 650 "browse.m"
                  }
#line 649 "browse.m"
                  {
#line 649 "browse.m"
                    MR_Word base;
#line 649 "browse.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 649 "browse.m"
                    *mdb__browse__STATE_VARIABLE_Info_30 = base;
#line 649 "browse.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browse__V_171_171));
#line 649 "browse.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browse__V_170_170));
#line 649 "browse.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browse__V_169_169));
#line 649 "browse.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browse__V_168_168));
#line 649 "browse.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browse__V_167_167));
#line 649 "browse.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browse__V_46_46));
#line 649 "browse.m"
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browse__V_165_165));
#line 649 "browse.m"
                  }
#line 651 "browse.m"
                  *mdb__browse__Quit_10 = (MR_Integer) 1;
#line 648 "browse.m"
                }
#line 647 "browse.m"
              else
#line 633 "browse.m"
                {
#line 633 "browse.m"
                  MR_Word mdb__browse__SubResult_23;
#line 633 "browse.m"
                  MR_Word mdb__browse__V_49_49;
#line 633 "browse.m"
                  MR_Word mdb__browse__Path_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybePath_78, (MR_Integer) 0)));
#line 633 "browse.m"
                  MR_Word mdb__browse__NewPwd_75;
#line 635 "browse.m"
                  MR_Word mdb__browse__V_115_115;
#line 635 "browse.m"
                  MR_Word mdb__browse__V_116_116;
#line 635 "browse.m"
                  MR_Word mdb__browse__V_117_117;
#line 635 "browse.m"
                  MR_Word mdb__browse__V_118_118;
#line 635 "browse.m"
                  MR_Word mdb__browse__V_119_119;
#line 635 "browse.m"
                  MR_Word mdb__browse__V_120_120;

#line 634 "browse.m"
                  {
#line 634 "browse.m"
                    mdb__browse__change_dir_3_p_0(mdb__browse__V_170_170, mdb__browse__Path_74, &mdb__browse__NewPwd_75);
                  }
#line 635 "browse.m"
                  mdb__browse__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 0)));
#line 635 "browse.m"
                  mdb__browse__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 1)));
#line 635 "browse.m"
                  mdb__browse__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 2)));
#line 635 "browse.m"
                  mdb__browse__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 3)));
#line 635 "browse.m"
                  mdb__browse__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 4)));
#line 635 "browse.m"
                  mdb__browse__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 5)));
#line 635 "browse.m"
                  mdb__browse__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 6)));
#line 635 "browse.m"
                  {
#line 635 "browse.m"
                    mdb__browse__deref_subterm_3_p_0(mdb__browse__V_49_49, mdb__browse__NewPwd_75, &mdb__browse__SubResult_23);
                  }
#line 641 "browse.m"
                  if (((MR_tag((MR_Word) mdb__browse__SubResult_23)) == (MR_mktag((MR_Integer) 1))))
#line 642 "browse.m"
                    {
#line 643 "browse.m"
                      {
#line 643 "browse.m"
                        mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_8, (MR_String) "error: cannot track subterm\n");
                      }
#line 645 "browse.m"
                      *mdb__browse__Quit_10 = (MR_Integer) 0;
#line 642 "browse.m"
                      *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
#line 642 "browse.m"
                    }
#line 641 "browse.m"
                  else
#line 637 "browse.m"
                    {
#line 637 "browse.m"
                      MR_Word mdb__browse__V_53_53;
#line 638 "browse.m"
                      MR_Word mdb__browse__V_121_121;
#line 638 "browse.m"
                      MR_Word mdb__browse__V_122_122;
#line 638 "browse.m"
                      MR_Word mdb__browse__V_123_123;
#line 638 "browse.m"
                      MR_Word mdb__browse__V_124_124;
#line 638 "browse.m"
                      MR_Word mdb__browse__V_125_125;
#line 638 "browse.m"
                      MR_Word mdb__browse__V_127_127;
#line 638 "browse.m"
                      MR_Word mdb__browse__V_126_126;

#line 639 "browse.m"
                      {
#line 639 "browse.m"
                        mdb__browse__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "browse.m"
                        MR_hl_field(MR_mktag(1), mdb__browse__V_53_53, 0) = ((MR_Box) ((mdb__browse__HowTrack_21 | ((mdb__browse__ShouldAssertInvalid_22 << (MR_Integer) 1)))));
#line 639 "browse.m"
                        MR_hl_field(MR_mktag(1), mdb__browse__V_53_53, 1) = ((MR_Box) (mdb__browse__NewPwd_75));
#line 639 "browse.m"
                      }
#line 638 "browse.m"
                      mdb__browse__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 0)));
#line 638 "browse.m"
                      mdb__browse__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 1)));
#line 638 "browse.m"
                      mdb__browse__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 2)));
#line 638 "browse.m"
                      mdb__browse__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 3)));
#line 638 "browse.m"
                      mdb__browse__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 4)));
#line 638 "browse.m"
                      mdb__browse__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 5)));
#line 638 "browse.m"
                      mdb__browse__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 6)));
#line 638 "browse.m"
                      {
#line 638 "browse.m"
                        MR_Word base;
#line 638 "browse.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 638 "browse.m"
                        *mdb__browse__STATE_VARIABLE_Info_30 = base;
#line 638 "browse.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browse__V_121_121));
#line 638 "browse.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browse__V_122_122));
#line 638 "browse.m"
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browse__V_123_123));
#line 638 "browse.m"
                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browse__V_124_124));
#line 638 "browse.m"
                        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browse__V_125_125));
#line 638 "browse.m"
                        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browse__V_53_53));
#line 638 "browse.m"
                        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browse__V_127_127));
#line 638 "browse.m"
                      }
#line 640 "browse.m"
                      *mdb__browse__Quit_10 = (MR_Integer) 1;
#line 637 "browse.m"
                    }
#line 633 "browse.m"
                }
#line 631 "browse.m"
            }
#line 597 "browse.m"
            break;
#line 597 "browse.m"
          case (MR_Integer) 2:
#line 654 "browse.m"
            {
#line 654 "browse.m"
              MR_Word mdb__browse__MaybeModeFunc_27;
#line 654 "browse.m"
              MR_Word mdb__browse__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 1)));
#line 654 "browse.m"
              MR_Word mdb__browse__Path_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browse__Command_9, (MR_Integer) 1)));
#line 654 "browse.m"
              MR_Word mdb__browse__NewPwd_82;
#line 655 "browse.m"
              MR_Word mdb__browse__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 0)));
#line 655 "browse.m"
              MR_Word mdb__browse__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 2)));
#line 655 "browse.m"
              MR_Word mdb__browse__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 3)));
#line 655 "browse.m"
              MR_Word mdb__browse__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 4)));
#line 655 "browse.m"
              MR_Word mdb__browse__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 5)));
#line 655 "browse.m"
              MR_Word mdb__browse__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 6)));
#line 656 "browse.m"
              MR_Word mdb__browse__V_147_147;
#line 656 "browse.m"
              MR_Word mdb__browse__V_148_148;
#line 656 "browse.m"
              MR_Word mdb__browse__V_149_149;
#line 656 "browse.m"
              MR_Word mdb__browse__V_150_150;
#line 656 "browse.m"
              MR_Word mdb__browse__V_151_151;
#line 656 "browse.m"
              MR_Word mdb__browse__V_152_152;

#line 655 "browse.m"
              {
#line 655 "browse.m"
                mdb__browse__change_dir_3_p_0(mdb__browse__V_43_43, mdb__browse__Path_81, &mdb__browse__NewPwd_82);
              }
#line 656 "browse.m"
              mdb__browse__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 0)));
#line 656 "browse.m"
              mdb__browse__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 1)));
#line 656 "browse.m"
              mdb__browse__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 2)));
#line 656 "browse.m"
              mdb__browse__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 3)));
#line 656 "browse.m"
              mdb__browse__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 4)));
#line 656 "browse.m"
              mdb__browse__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 5)));
#line 656 "browse.m"
              mdb__browse__MaybeModeFunc_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 6)));
#line 657 "browse.m"
              {
#line 657 "browse.m"
                mdb__browse__write_term_mode_debugger_5_p_0(mdb__browse__Debugger_8, mdb__browse__MaybeModeFunc_27, mdb__browse__NewPwd_82);
              }
#line 658 "browse.m"
              *mdb__browse__Quit_10 = (MR_Integer) 0;
#line 654 "browse.m"
              *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
#line 654 "browse.m"
            }
#line 597 "browse.m"
            break;
#line 597 "browse.m"
          case (MR_Integer) 3:
#line 665 "browse.m"
            {
#line 665 "browse.m"
              MR_Word mdb__browse__ParamCmd_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browse__Command_9, (MR_Integer) 1)));

#line 666 "browse.m"
              {
#line 666 "browse.m"
                mdb__browser_info__run_param_command_7_p_0(mdb__browse__Debugger_8, mdb__browse__ParamCmd_28, (MR_Integer) 1, mdb__browse__STATE_VARIABLE_Info_0_29, mdb__browse__STATE_VARIABLE_Info_30);
              }
#line 667 "browse.m"
              *mdb__browse__Quit_10 = (MR_Integer) 0;
#line 665 "browse.m"
            }
#line 597 "browse.m"
            break;
#line 597 "browse.m"
        }
#line 597 "browse.m"
        break;
#line 597 "browse.m"
    }
#line 688 "browse.m"
#line 688 "browse.m"
    switch (mdb__browse__Debugger_8) {
#line 688 "browse.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 688 "browse.m"
      case (MR_Integer) 1:
#line 686 "browse.m"
        {
#line 687 "browse.m"
          {
#line 687 "browse.m"
            mdb__browser_info__send_term_to_socket_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
#line 687 "browse.m"
            return;
          }
#line 686 "browse.m"
        }
#line 688 "browse.m"
        break;
#line 688 "browse.m"
      case (MR_Integer) 0:
#line 689 "browse.m"
        {
#line 689 "browse.m"
        }
#line 688 "browse.m"
        break;
#line 688 "browse.m"
    }
#line 586 "browse.m"
  }
#line 583 "browse.m"
}

#line 547 "browse.m"
static void MR_CALL 
mdb__browse__browse_main_loop_5_p_0(
#line 547 "browse.m"
  MR_Word mdb__browse__Debugger_6,
#line 547 "browse.m"
  MR_Word mdb__browse__STATE_VARIABLE_Info_0_11,
#line 547 "browse.m"
  MR_Word * mdb__browse__STATE_VARIABLE_Info_12)
#line 547 "browse.m"
{
#line 550 "browse.m"
  while (MR_TRUE)
#line 550 "browse.m"
    {
#line 550 "browse.m"
      /* tailcall optimized into a loop */
#line 550 "browse.m"
      {
#line 550 "browse.m"
        MR_bool mdb__browse__succeeded;
#line 550 "browse.m"
        MR_Word mdb__browse__Command_9;
#line 550 "browse.m"
        MR_Word mdb__browse__Quit_10;
#line 550 "browse.m"
        MR_Word mdb__browse__STATE_VARIABLE_Info_18_18;

#line 554 "browse.m"
#line 554 "browse.m"
        switch (mdb__browse__Debugger_6) {
#line 554 "browse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 554 "browse.m"
          case (MR_Integer) 1:
#line 556 "browse.m"
            {
#line 556 "browse.m"
              mdb__parse__read_command_external_3_p_0(&mdb__browse__Command_9);
            }
#line 554 "browse.m"
            break;
#line 554 "browse.m"
          case (MR_Integer) 0:
#line 552 "browse.m"
            {
#line 553 "browse.m"
              {
#line 553 "browse.m"
                mdb__parse__read_command_4_p_0((MR_String) "browser> ", &mdb__browse__Command_9);
              }
#line 552 "browse.m"
            }
#line 554 "browse.m"
            break;
#line 554 "browse.m"
        }
#line 558 "browse.m"
        {
#line 558 "browse.m"
          mdb__browse__run_command_7_p_0(mdb__browse__Debugger_6, mdb__browse__Command_9, &mdb__browse__Quit_10, mdb__browse__STATE_VARIABLE_Info_0_11, &mdb__browse__STATE_VARIABLE_Info_18_18);
        }
#line 568 "browse.m"
#line 568 "browse.m"
        switch (mdb__browse__Quit_10) {
#line 568 "browse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 568 "browse.m"
          case (MR_Integer) 0:
#line 570 "browse.m"
            {
#line 570 "browse.m"
              /* direct tailcall eliminated */
#line 570 "browse.m"
              {
#line 570 "browse.m"
                MR_Word mdb__browse__STATE_VARIABLE_Info_0__tmp_copy_11 = mdb__browse__STATE_VARIABLE_Info_18_18;

#line 570 "browse.m"
                mdb__browse__STATE_VARIABLE_Info_0_11 = mdb__browse__STATE_VARIABLE_Info_0__tmp_copy_11;
#line 570 "browse.m"
              }
#line 570 "browse.m"
              continue;
#line 570 "browse.m"
            }
#line 568 "browse.m"
            break;
#line 568 "browse.m"
          case (MR_Integer) 1:
#line 560 "browse.m"
            {
#line 565 "browse.m"
#line 565 "browse.m"
              switch (mdb__browse__Debugger_6) {
#line 565 "browse.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 565 "browse.m"
                case (MR_Integer) 1:
#line 563 "browse.m"
                  {
#line 564 "browse.m"
                    {
#line 564 "browse.m"
                      mdb__browser_info__send_term_to_socket_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
                    }
#line 563 "browse.m"
                  }
#line 565 "browse.m"
                  break;
#line 565 "browse.m"
                case (MR_Integer) 0:
#line 566 "browse.m"
                  {
#line 566 "browse.m"
                  }
#line 565 "browse.m"
                  break;
#line 565 "browse.m"
              }
#line 560 "browse.m"
              *mdb__browse__STATE_VARIABLE_Info_12 = mdb__browse__STATE_VARIABLE_Info_18_18;
#line 560 "browse.m"
            }
#line 568 "browse.m"
            break;
#line 568 "browse.m"
        }
#line 550 "browse.m"
      }
#line 550 "browse.m"
      break;
#line 550 "browse.m"
    }
#line 547 "browse.m"
}

#line 451 "browse.m"
static void MR_CALL 
mdb__browse__write_indent_3_p_0(
#line 451 "browse.m"
  MR_Integer mdb__browse__Indent_4)
#line 451 "browse.m"
{
#line 456 "browse.m"
  while (MR_TRUE)
#line 456 "browse.m"
    {
#line 456 "browse.m"
      /* tailcall optimized into a loop */
#line 456 "browse.m"
      {
#line 456 "browse.m"
        MR_bool mdb__browse__succeeded = (mdb__browse__Indent_4 <= (MR_Integer) 0);

#line 456 "browse.m"
        if (mdb__browse__succeeded)
#line 456 "browse.m"
          {
#line 456 "browse.m"
          }
#line 456 "browse.m"
        else
#line 457 "browse.m"
          {
#line 457 "browse.m"
            MR_Integer mdb__browse__V_11_11;

#line 457 "browse.m"
            {
#line 457 "browse.m"
              mercury__io__write_char_3_p_0((MR_Char) 32);
            }
#line 458 "browse.m"
            mdb__browse__V_11_11 = (mdb__browse__Indent_4 - (MR_Integer) 1);
#line 458 "browse.m"
            /* direct tailcall eliminated */
#line 458 "browse.m"
            {
#line 458 "browse.m"
              MR_Integer mdb__browse__Indent__tmp_copy_4 = mdb__browse__V_11_11;

#line 458 "browse.m"
              mdb__browse__Indent_4 = mdb__browse__Indent__tmp_copy_4;
#line 458 "browse.m"
            }
#line 458 "browse.m"
            continue;
#line 457 "browse.m"
          }
#line 456 "browse.m"
      }
#line 456 "browse.m"
      break;
#line 456 "browse.m"
    }
#line 451 "browse.m"
}

#line 438 "browse.m"
static void MR_CALL 
mdb__browse__save_args_4_p_0(
#line 438 "browse.m"
  MR_Integer mdb__browse__HeadVar__1_1,
#line 438 "browse.m"
  MR_Word mdb__browse__HeadVar__2_2)
#line 438 "browse.m"
{
#line 440 "browse.m"
  while (MR_TRUE)
#line 440 "browse.m"
    {
#line 440 "browse.m"
      /* tailcall optimized into a loop */
#line 440 "browse.m"
      {
#line 440 "browse.m"
        MR_bool mdb__browse__succeeded;

#line 440 "browse.m"
        if ((mdb__browse__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 440 "browse.m"
          {
#line 440 "browse.m"
          }
#line 440 "browse.m"
        else
#line 441 "browse.m"
          {
#line 441 "browse.m"
            MR_Word mdb__browse__TypeInfo_12_28;
#line 441 "browse.m"
            MR_Word mdb__browse__Univ_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, (MR_Integer) 0)));
#line 441 "browse.m"
            MR_Word mdb__browse__Univs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, (MR_Integer) 1)));
#line 441 "browse.m"
            MR_Box mdb__browse__V_26_26;

#line 391 "browse.m"
            {
#line 391 "browse.m"
              mdb__browse__V_26_26 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_12_28, mdb__browse__Univ_10);
            }
#line 391 "browse.m"
            {
#line 391 "browse.m"
              mdb__browse__save_term_4_p_0(mdb__browse__TypeInfo_12_28, mdb__browse__HeadVar__1_1, mdb__browse__V_26_26);
            }
#line 445 "browse.m"
            if ((mdb__browse__Univs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 444 "browse.m"
              {
#line 444 "browse.m"
              }
#line 445 "browse.m"
            else
#line 446 "browse.m"
              {
#line 446 "browse.m"
                MR_Word mdb__browse__TypeInfo_12_52;
#line 446 "browse.m"
                MR_Word mdb__browse__Univ_34;
#line 446 "browse.m"
                MR_Word mdb__browse__Univs_35;
#line 446 "browse.m"
                MR_Box mdb__browse__V_50_50;

#line 447 "browse.m"
                {
#line 447 "browse.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n");
                }
#line 441 "browse.m"
                mdb__browse__Univ_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Univs_11, (MR_Integer) 0)));
#line 441 "browse.m"
                mdb__browse__Univs_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Univs_11, (MR_Integer) 1)));
#line 391 "browse.m"
                {
#line 391 "browse.m"
                  mdb__browse__V_50_50 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_12_52, mdb__browse__Univ_34);
                }
#line 391 "browse.m"
                {
#line 391 "browse.m"
                  mdb__browse__save_term_4_p_0(mdb__browse__TypeInfo_12_52, mdb__browse__HeadVar__1_1, mdb__browse__V_50_50);
                }
#line 445 "browse.m"
                if ((mdb__browse__Univs_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 444 "browse.m"
                  {
#line 444 "browse.m"
                  }
#line 445 "browse.m"
                else
#line 446 "browse.m"
                  {
#line 447 "browse.m"
                    {
#line 447 "browse.m"
                      mercury__io__write_string_3_p_0((MR_String) ",\n");
                    }
#line 448 "browse.m"
                    /* direct tailcall eliminated */
#line 448 "browse.m"
                    {
#line 448 "browse.m"
                      MR_Word mdb__browse__HeadVar__2__tmp_copy_2 = mdb__browse__Univs_35;

#line 448 "browse.m"
                      mdb__browse__HeadVar__2_2 = mdb__browse__HeadVar__2__tmp_copy_2;
#line 448 "browse.m"
                    }
#line 448 "browse.m"
                    continue;
#line 446 "browse.m"
                  }
#line 446 "browse.m"
              }
#line 441 "browse.m"
          }
#line 440 "browse.m"
      }
#line 440 "browse.m"
      break;
#line 440 "browse.m"
    }
#line 438 "browse.m"
}

#line 403 "browse.m"
static MR_Box MR_CALL 
mdb__browse__save_term_4_p_0_1(
#line 403 "browse.m"
  MR_Box mdb__browse__closure_arg,
#line 403 "browse.m"
  MR_Box mdb__browse__wrapper_arg_1)
#line 403 "browse.m"
{
#line 403 "browse.m"
  {
#line 403 "browse.m"
    MR_Box mdb__browse__wrapper_arg_2;
#line 403 "browse.m"
    MR_Box mdb__browse__closure = mdb__browse__closure_arg;
#line 403 "browse.m"
    MR_Word mdb__browse__conv1_HeadVar__2_2;

#line 403 "browse.m"
    {
#line 403 "browse.m"
      mdb__browse__conv1_HeadVar__2_2 = mercury__univ__univ_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__closure, (MR_Integer) 3))), mdb__browse__wrapper_arg_1);
    }
#line 403 "browse.m"
    mdb__browse__wrapper_arg_2 = ((MR_Box) (mdb__browse__conv1_HeadVar__2_2));
#line 403 "browse.m"
    return mdb__browse__wrapper_arg_2;
#line 403 "browse.m"
  }
#line 403 "browse.m"
}

#line 393 "browse.m"
static void MR_CALL 
mdb__browse__save_term_4_p_0(
#line 393 "browse.m"
  MR_Word mdb__browse__TypeInfo_for_T_52,
#line 393 "browse.m"
  MR_Integer mdb__browse__Indent_5,
#line 393 "browse.m"
  MR_Box mdb__browse__Term_6)
#line 393 "browse.m"
{
#line 414 "browse.m"
  {
#line 414 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 414 "browse.m"
    MR_Word mdb__browse__TypeInfo_53_53;
#line 414 "browse.m"
    MR_Word mdb__browse__List_8;
#line 432 "browse.m"
    MR_Word mdb__browse__TypeCtorInfo_15_65;
#line 432 "browse.m"
    MR_Word mdb__browse__TypeInfo_16_66;
#line 432 "browse.m"
    MR_Word mdb__browse__TypeInfo_19_69;
#line 432 "browse.m"
    MR_Word mdb__browse__ArgTypeDesc_57;
#line 432 "browse.m"
    MR_Word mdb__browse__V_60_60;
#line 432 "browse.m"
    MR_Word mdb__browse__V_62_62;
#line 432 "browse.m"
    MR_Word mdb__browse__V_68_68;
#line 434 "browse.m"
    MR_Box mdb__browse__V_67_67;
#line 435 "browse.m"
    MR_Box mdb__browse__V_63_63;
#line 436 "browse.m"
    MR_Box mdb__browse__conv0_List_8;

#line 434 "browse.m"
    {
#line 434 "browse.m"
      mdb__browse__V_62_62 = mercury__type_desc__type_of_1_f_0(mdb__browse__TypeInfo_for_T_52);
    }
#line 434 "browse.m"
    {
#line 434 "browse.m"
      mdb__browse__V_60_60 = mercury__type_desc__type_args_1_f_0(mdb__browse__V_62_62);
    }
#line 434 "browse.m"
    mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 434 "browse.m"
    if (mdb__browse__succeeded)
#line 434 "browse.m"
      {
#line 434 "browse.m"
        mdb__browse__ArgTypeDesc_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__V_60_60, (MR_Integer) 0)));
#line 434 "browse.m"
        mdb__browse__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__V_60_60, (MR_Integer) 1)));
#line 9387 "mdb.browse.c"
        mdb__browse__TypeInfo_19_69 = (MR_Word) &mdb__browse_scalar_common_4[2];
#line 434 "browse.m"
        {
#line 434 "browse.m"
          mdb__browse__succeeded = mercury__builtin__unify_2_p_0(mdb__browse__TypeInfo_19_69, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (mdb__browse__V_68_68)));
        }
#line 432 "browse.m"
        if (mdb__browse__succeeded)
#line 432 "browse.m"
          {
#line 435 "browse.m"
            {
#line 435 "browse.m"
              mercury__type_desc__has_type_2_p_0(&mdb__browse__TypeInfo_53_53, mdb__browse__ArgTypeDesc_57);
            }
#line 9403 "mdb.browse.c"
            mdb__browse__TypeCtorInfo_15_65 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 9405 "mdb.browse.c"
            {
#line 9407 "mdb.browse.c"
              mdb__browse__TypeInfo_16_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9409 "mdb.browse.c"
              MR_hl_field(MR_mktag(0), mdb__browse__TypeInfo_16_66, 0) = ((MR_Box) (mdb__browse__TypeCtorInfo_15_65));
#line 9411 "mdb.browse.c"
              MR_hl_field(MR_mktag(0), mdb__browse__TypeInfo_16_66, 1) = ((MR_Box) (mdb__browse__TypeInfo_53_53));
#line 9413 "mdb.browse.c"
            }
#line 436 "browse.m"
            {
#line 436 "browse.m"
              mdb__browse__succeeded = mercury__builtin__dynamic_cast_2_p_0(mdb__browse__TypeInfo_for_T_52, mdb__browse__TypeInfo_16_66, mdb__browse__Term_6, &mdb__browse__conv0_List_8);
            }
#line 436 "browse.m"
            if (mdb__browse__succeeded)
#line 436 "browse.m"
              {
#line 436 "browse.m"
                mdb__browse__List_8 = ((MR_Word) mdb__browse__conv0_List_8);
#line 436 "browse.m"
                mdb__browse__succeeded = MR_TRUE;
#line 436 "browse.m"
              }
#line 432 "browse.m"
          }
#line 434 "browse.m"
      }
#line 414 "browse.m"
    if (mdb__browse__succeeded)
#line 401 "browse.m"
      if ((mdb__browse__List_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 398 "browse.m"
        {
#line 399 "browse.m"
          {
#line 399 "browse.m"
            mdb__browse__write_indent_3_p_0(mdb__browse__Indent_5);
          }
#line 400 "browse.m"
          {
#line 400 "browse.m"
            mercury__io__write_string_3_p_0((MR_String) "[]");
#line 400 "browse.m"
            return;
          }
#line 398 "browse.m"
        }
#line 401 "browse.m"
      else
#line 402 "browse.m"
        {
#line 402 "browse.m"
          MR_Word mdb__browse__MakeUniv_11;
#line 402 "browse.m"
          MR_Word mdb__browse__Univs_14;
#line 402 "browse.m"
          MR_Integer mdb__browse__V_27_27;

#line 403 "browse.m"
          {
#line 403 "browse.m"
            mdb__browse__MakeUniv_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 403 "browse.m"
            MR_hl_field(MR_mktag(0), mdb__browse__MakeUniv_11, 0) = ((MR_Box) (&mdb__browse_scalar_common_6[1]));
#line 403 "browse.m"
            MR_hl_field(MR_mktag(0), mdb__browse__MakeUniv_11, 1) = ((MR_Box) (mdb__browse__save_term_4_p_0_1));
#line 403 "browse.m"
            MR_hl_field(MR_mktag(0), mdb__browse__MakeUniv_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 403 "browse.m"
            MR_hl_field(MR_mktag(0), mdb__browse__MakeUniv_11, 3) = ((MR_Box) (mdb__browse__TypeInfo_53_53));
#line 403 "browse.m"
          }
#line 406 "browse.m"
          {
#line 406 "browse.m"
            mdb__browse__Univs_14 = mercury__list__map_2_f_0(mdb__browse__TypeInfo_53_53, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__browse__MakeUniv_11, mdb__browse__List_8);
          }
#line 407 "browse.m"
          {
#line 407 "browse.m"
            mdb__browse__write_indent_3_p_0(mdb__browse__Indent_5);
          }
#line 408 "browse.m"
          {
#line 408 "browse.m"
            mercury__io__write_string_3_p_0((MR_String) "[\n");
          }
#line 409 "browse.m"
          mdb__browse__V_27_27 = (mdb__browse__Indent_5 + (MR_Integer) 1);
#line 409 "browse.m"
          {
#line 409 "browse.m"
            mdb__browse__save_args_4_p_0(mdb__browse__V_27_27, mdb__browse__Univs_14);
          }
#line 410 "browse.m"
          {
#line 410 "browse.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 411 "browse.m"
          {
#line 411 "browse.m"
            mdb__browse__write_indent_3_p_0(mdb__browse__Indent_5);
          }
#line 412 "browse.m"
          {
#line 412 "browse.m"
            mercury__io__write_string_3_p_0((MR_String) "]");
#line 412 "browse.m"
            return;
          }
#line 402 "browse.m"
        }
#line 414 "browse.m"
    else
#line 415 "browse.m"
      {
#line 415 "browse.m"
        MR_String mdb__browse__Functor_15;
#line 415 "browse.m"
        MR_Word mdb__browse__Args_17;
#line 415 "browse.m"
        MR_Integer mdb__browse___Arity_16;

#line 415 "browse.m"
        {
#line 415 "browse.m"
          mercury__deconstruct__deconstruct_5_p_2(mdb__browse__TypeInfo_for_T_52, mdb__browse__Term_6, (MR_Integer) 2, &mdb__browse__Functor_15, &mdb__browse___Arity_16, &mdb__browse__Args_17);
        }
#line 416 "browse.m"
        {
#line 416 "browse.m"
          mdb__browse__write_indent_3_p_0(mdb__browse__Indent_5);
        }
#line 417 "browse.m"
        {
#line 417 "browse.m"
          mercury__io__write_string_3_p_0(mdb__browse__Functor_15);
        }
#line 420 "browse.m"
        if ((mdb__browse__Args_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 419 "browse.m"
          {
#line 419 "browse.m"
          }
#line 420 "browse.m"
        else
#line 421 "browse.m"
          {
#line 421 "browse.m"
            MR_Word mdb__browse__TypeInfo_12_93;
#line 421 "browse.m"
            MR_Integer mdb__browse__V_43_43;
#line 421 "browse.m"
            MR_Word mdb__browse__Univ_75;
#line 421 "browse.m"
            MR_Word mdb__browse__Univs_76;
#line 421 "browse.m"
            MR_Box mdb__browse__V_91_91;

#line 422 "browse.m"
            {
#line 422 "browse.m"
              mercury__io__write_string_3_p_0((MR_String) "(\n");
            }
#line 423 "browse.m"
            mdb__browse__V_43_43 = (mdb__browse__Indent_5 + (MR_Integer) 1);
#line 441 "browse.m"
            mdb__browse__Univ_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Args_17, (MR_Integer) 0)));
#line 441 "browse.m"
            mdb__browse__Univs_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Args_17, (MR_Integer) 1)));
#line 391 "browse.m"
            {
#line 391 "browse.m"
              mdb__browse__V_91_91 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_12_93, mdb__browse__Univ_75);
            }
#line 391 "browse.m"
            {
#line 391 "browse.m"
              mdb__browse__save_term_4_p_0(mdb__browse__TypeInfo_12_93, mdb__browse__V_43_43, mdb__browse__V_91_91);
            }
#line 445 "browse.m"
            if ((mdb__browse__Univs_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 444 "browse.m"
              {
#line 444 "browse.m"
              }
#line 445 "browse.m"
            else
#line 446 "browse.m"
              {
#line 447 "browse.m"
                {
#line 447 "browse.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n");
                }
#line 448 "browse.m"
                {
#line 448 "browse.m"
                  mdb__browse__save_args_4_p_0(mdb__browse__V_43_43, mdb__browse__Univs_76);
                }
#line 446 "browse.m"
              }
#line 424 "browse.m"
            {
#line 424 "browse.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 425 "browse.m"
            {
#line 425 "browse.m"
              mdb__browse__write_indent_3_p_0(mdb__browse__Indent_5);
            }
#line 426 "browse.m"
            {
#line 426 "browse.m"
              mercury__io__write_string_3_p_0((MR_String) ")");
#line 426 "browse.m"
              return;
            }
#line 421 "browse.m"
          }
#line 415 "browse.m"
      }
#line 414 "browse.m"
  }
#line 393 "browse.m"
}

#line 357 "browse.m"
static void MR_CALL 
mdb__browse__launch_xml_browser_5_p_0(
#line 357 "browse.m"
  MR_Word mdb__browse__OutStream_6,
#line 357 "browse.m"
  MR_Word mdb__browse__ErrStream_7,
#line 357 "browse.m"
  MR_String mdb__browse__CommandStr_8)
#line 357 "browse.m"
{
#line 360 "browse.m"
  {
#line 360 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 360 "browse.m"
    MR_Word mdb__browse__Result_10;

#line 361 "browse.m"
    {
#line 361 "browse.m"
      mercury__io__write_string_4_p_0(mdb__browse__OutStream_6, (MR_String) "Launching XML browser (this may take some time) ...\n");
    }
#line 365 "browse.m"
    {
#line 365 "browse.m"
      mercury__io__flush_output_3_p_0(mdb__browse__OutStream_6);
    }
#line 366 "browse.m"
    {
#line 366 "browse.m"
      mercury__io__call_system_return_signal_4_p_0(mdb__browse__CommandStr_8, &mdb__browse__Result_10);
    }
#line 382 "browse.m"
    if (((MR_tag((MR_Word) mdb__browse__Result_10)) == (MR_mktag((MR_Integer) 1))))
#line 383 "browse.m"
      {
#line 383 "browse.m"
        MR_Word mdb__browse__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Result_10, (MR_Integer) 0)));
#line 383 "browse.m"
        MR_String mdb__browse__V_23_23;
#line 383 "browse.m"
        MR_String mdb__browse__V_26_26;
#line 383 "browse.m"
        MR_String mdb__browse__V_27_27;

#line 385 "browse.m"
        {
#line 385 "browse.m"
          mdb__browse__V_27_27 = mercury__string__string_1_f_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mdb__browse__Error_14)));
        }
#line 385 "browse.m"
        {
#line 385 "browse.m"
          mdb__browse__V_26_26 = mercury__string__f_43_43_2_f_0(mdb__browse__V_27_27, (MR_String) ".\n");
        }
#line 385 "browse.m"
        {
#line 385 "browse.m"
          mdb__browse__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "mdb: Error launching browser: ", mdb__browse__V_26_26);
        }
#line 384 "browse.m"
        {
#line 384 "browse.m"
          mercury__io__write_string_4_p_0(mdb__browse__ErrStream_7, mdb__browse__V_23_23);
#line 384 "browse.m"
          return;
        }
#line 383 "browse.m"
      }
#line 382 "browse.m"
    else
#line 368 "browse.m"
      {
#line 368 "browse.m"
        MR_Word mdb__browse__ExitStatus_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Result_10, (MR_Integer) 0)));

#line 378 "browse.m"
        if (((MR_tag((MR_Word) mdb__browse__ExitStatus_11)) == (MR_mktag((MR_Integer) 0))))
#line 370 "browse.m"
          {
#line 370 "browse.m"
            MR_Integer mdb__browse__ExitCode_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__ExitStatus_11, (MR_Integer) 0)));

#line 371 "browse.m"
            mdb__browse__succeeded = (mdb__browse__ExitCode_12 == (MR_Integer) 0);
#line 373 "browse.m"
            if (mdb__browse__succeeded)
#line 373 "browse.m"
              {
#line 373 "browse.m"
              }
#line 373 "browse.m"
            else
#line 374 "browse.m"
              {
#line 374 "browse.m"
                MR_String mdb__browse__V_31_31;
#line 374 "browse.m"
                MR_String mdb__browse__V_34_34;

#line 375 "browse.m"
                {
#line 375 "browse.m"
                  mdb__browse__V_34_34 = mercury__string__f_43_43_2_f_0(mdb__browse__CommandStr_8, (MR_String) "\' terminated with a non-zero exit code.\n");
                }
#line 375 "browse.m"
                {
#line 375 "browse.m"
                  mdb__browse__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "mdb: The command \140", mdb__browse__V_34_34);
                }
#line 374 "browse.m"
                {
#line 374 "browse.m"
                  mercury__io__write_string_4_p_0(mdb__browse__ErrStream_7, mdb__browse__V_31_31);
#line 374 "browse.m"
                  return;
                }
#line 374 "browse.m"
              }
#line 370 "browse.m"
          }
#line 378 "browse.m"
        else
#line 379 "browse.m"
          {
#line 380 "browse.m"
            {
#line 380 "browse.m"
              mercury__io__write_string_4_p_0(mdb__browse__ErrStream_7, (MR_String) "mdb: The browser was killed.\n");
#line 380 "browse.m"
              return;
            }
#line 379 "browse.m"
          }
#line 368 "browse.m"
      }
#line 360 "browse.m"
  }
#line 357 "browse.m"
}

#line 163 "browse.m"
MR_bool MR_CALL 
mdb__browse__string_is_return_value_alias_1_p_0(
#line 163 "browse.m"
  MR_String mdb__browse__HeadVar__1_1)
#line 163 "browse.m"
{
#line 1444 "browse.m"
  {
#line 1444 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 1444 "browse.m"
    MR_Integer mdb__browse__lo_0;
#line 1444 "browse.m"
    MR_Integer mdb__browse__hi_1;
#line 1444 "browse.m"
    MR_Integer mdb__browse__mid_2;
#line 1444 "browse.m"
    MR_Integer mdb__browse__result_3;

#line 1444 "browse.m"
    /* binary string simple lookup switch */
#line 1444 "browse.m"
    mdb__browse__lo_0 = (MR_Integer) 0;
#line 1444 "browse.m"
    mdb__browse__hi_1 = (MR_Integer) 5;
#line 1444 "browse.m"
    do
#line 1444 "browse.m"
      {
#line 1444 "browse.m"
        mdb__browse__mid_2 = (((mdb__browse__lo_0 + mdb__browse__hi_1)) / (MR_Integer) 2);
#line 1444 "browse.m"
        mdb__browse__result_3 = MR_strcmp(mdb__browse__HeadVar__1_1, ((&mdb__browse_vector_common_7[0 + mdb__browse__mid_2]))->mdb__browse__vector_common_type_7_0__vct_7_f_0);
#line 1444 "browse.m"
        if ((mdb__browse__result_3 == (MR_Integer) 0))
#line 1444 "browse.m"
          {
#line 1444 "browse.m"
            mdb__browse__succeeded = MR_TRUE;
#line 1444 "browse.m"
            /* jump out of search loop */
#line 1444 "browse.m"
            goto label_0;
#line 1444 "browse.m"
          }
#line 1444 "browse.m"
        else
#line 1444 "browse.m"
        if ((mdb__browse__result_3 < (MR_Integer) 0))
#line 1444 "browse.m"
          mdb__browse__hi_1 = (mdb__browse__mid_2 - (MR_Integer) 1);
#line 1444 "browse.m"
        else
#line 1444 "browse.m"
          mdb__browse__lo_0 = (mdb__browse__mid_2 + (MR_Integer) 1);
#line 1444 "browse.m"
      }
#line 1444 "browse.m"
    while ((mdb__browse__lo_0 <= mdb__browse__hi_1));
#line 1444 "browse.m"
    mdb__browse__succeeded = MR_FALSE;
#line 1444 "browse.m"
  label_0:;
#line 1444 "browse.m"
    return mdb__browse__succeeded;
#line 1444 "browse.m"
  }
#line 163 "browse.m"
}

#line 158 "browse.m"
void MR_CALL 
mdb__browse__simplify_dirs_2_p_0(
#line 158 "browse.m"
  MR_Word mdb__browse__Dirs_3,
#line 158 "browse.m"
  MR_Word * mdb__browse__SimpleDirs_4)
#line 158 "browse.m"
{
#line 1692 "browse.m"
  {
#line 1692 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 1692 "browse.m"
    MR_Word mdb__browse__RevDirs_5;

#line 1693 "browse.m"
    {
#line 1693 "browse.m"
      mercury__list__reverse_2_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0, mdb__browse__Dirs_3, &mdb__browse__RevDirs_5);
    }
#line 1694 "browse.m"
    {
#line 1694 "browse.m"
      mdb__browse__simplify_rev_dirs_4_p_0(mdb__browse__RevDirs_5, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__SimpleDirs_4);
#line 1694 "browse.m"
      return;
    }
#line 1692 "browse.m"
  }
#line 158 "browse.m"
}

#line 150 "browse.m"
void MR_CALL 
mdb__browse__save_term_to_file_xml_5_p_0(
#line 150 "browse.m"
  MR_String mdb__browse__FileName_6,
#line 150 "browse.m"
  MR_Word mdb__browse__BrowserTerm_7,
#line 150 "browse.m"
  MR_Word mdb__browse__OutStream_8)
#line 150 "browse.m"
{
#line 277 "browse.m"
  {
#line 277 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 277 "browse.m"
    MR_Word mdb__browse__Result_10;

#line 292 "browse.m"
    {
#line 292 "browse.m"
      mercury__io__open_output_4_p_0(mdb__browse__FileName_6, &mdb__browse__Result_10);
    }
#line 315 "browse.m"
    if (((MR_tag((MR_Word) mdb__browse__Result_10)) == (MR_mktag((MR_Integer) 1))))
#line 316 "browse.m"
      {
#line 316 "browse.m"
      }
#line 315 "browse.m"
    else
#line 294 "browse.m"
      {
#line 294 "browse.m"
        MR_Word mdb__browse__OutputStream_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Result_10, (MR_Integer) 0)));

#line 300 "browse.m"
        if (((MR_tag((MR_Word) mdb__browse__BrowserTerm_7)) == (MR_mktag((MR_Integer) 0))))
#line 296 "browse.m"
          {
#line 296 "browse.m"
            MR_Word mdb__browse__TypeInfo_39_52;
#line 296 "browse.m"
            MR_Word mdb__browse__Univ_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__BrowserTerm_7, (MR_Integer) 0)));
#line 296 "browse.m"
            MR_Box mdb__browse__Term_27;
#line 298 "browse.m"
            MR_Word mdb__browse__V_28_28;
#line 298 "browse.m"
            MR_Box mdb__browse__conv0_STATE_VARIABLE_IO_37_50;

#line 297 "browse.m"
            {
#line 297 "browse.m"
              mdb__browse__Term_27 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_39_52, mdb__browse__Univ_26);
            }
#line 298 "browse.m"
            {
#line 298 "browse.m"
              mercury__term_to_xml__write_xml_doc_general_cc_8_p_0(mdb__browse__TypeInfo_39_52, (MR_Word) &mdb__browse_scalar_common_3[0], ((MR_Box) (mdb__browse__OutputStream_25)), mdb__browse__Term_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &mdb__browse__V_28_28, ((MR_Box) ((MR_Integer) 0)), &mdb__browse__conv0_STATE_VARIABLE_IO_37_50);
            }
#line 296 "browse.m"
          }
#line 300 "browse.m"
        else
#line 301 "browse.m"
          {
#line 301 "browse.m"
            MR_String mdb__browse__Functor_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_7, (MR_Integer) 0)));
#line 301 "browse.m"
            MR_Word mdb__browse__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_7, (MR_Integer) 1)));
#line 301 "browse.m"
            MR_Word mdb__browse__MaybeRes_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_7, (MR_Integer) 2)));

#line 307 "browse.m"
            if ((mdb__browse__MaybeRes_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 303 "browse.m"
              {
#line 303 "browse.m"
                MR_Word mdb__browse__PredicateTerm_32;
#line 305 "browse.m"
                MR_Word mdb__browse__V_33_33;
#line 305 "browse.m"
                MR_Box mdb__browse__conv1_STATE_VARIABLE_IO_37_50;

#line 304 "browse.m"
                {
#line 304 "browse.m"
                  mdb__browse__PredicateTerm_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 304 "browse.m"
                  MR_hl_field(MR_mktag(0), mdb__browse__PredicateTerm_32, 0) = ((MR_Box) (mdb__browse__Functor_29));
#line 304 "browse.m"
                  MR_hl_field(MR_mktag(0), mdb__browse__PredicateTerm_32, 1) = ((MR_Box) (mdb__browse__Args_30));
#line 304 "browse.m"
                }
#line 305 "browse.m"
                {
#line 305 "browse.m"
                  mercury__term_to_xml__write_xml_doc_general_cc_8_p_0((MR_Word) &mdb__browse__mdb__browse__type_ctor_info_xml_predicate_wrapper_0, (MR_Word) &mdb__browse_scalar_common_3[0], ((MR_Box) (mdb__browse__OutputStream_25)), ((MR_Box) (mdb__browse__PredicateTerm_32)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &mdb__browse__V_33_33, ((MR_Box) ((MR_Integer) 0)), &mdb__browse__conv1_STATE_VARIABLE_IO_37_50);
                }
#line 303 "browse.m"
              }
#line 307 "browse.m"
            else
#line 308 "browse.m"
              {
#line 308 "browse.m"
                MR_Word mdb__browse__Result_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeRes_31, (MR_Integer) 0)));
#line 308 "browse.m"
                MR_Word mdb__browse__FunctionTerm_35;
#line 310 "browse.m"
                MR_Word mdb__browse__V_36_36;
#line 310 "browse.m"
                MR_Box mdb__browse__conv2_STATE_VARIABLE_IO_37_50;

#line 309 "browse.m"
                {
#line 309 "browse.m"
                  mdb__browse__FunctionTerm_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 309 "browse.m"
                  MR_hl_field(MR_mktag(0), mdb__browse__FunctionTerm_35, 0) = ((MR_Box) (mdb__browse__Functor_29));
#line 309 "browse.m"
                  MR_hl_field(MR_mktag(0), mdb__browse__FunctionTerm_35, 1) = ((MR_Box) (mdb__browse__Args_30));
#line 309 "browse.m"
                  MR_hl_field(MR_mktag(0), mdb__browse__FunctionTerm_35, 2) = ((MR_Box) (mdb__browse__Result_34));
#line 309 "browse.m"
                }
#line 310 "browse.m"
                {
#line 310 "browse.m"
                  mercury__term_to_xml__write_xml_doc_general_cc_8_p_0((MR_Word) &mdb__browse__mdb__browse__type_ctor_info_xml_function_wrapper_0, (MR_Word) &mdb__browse_scalar_common_3[0], ((MR_Box) (mdb__browse__OutputStream_25)), ((MR_Box) (mdb__browse__FunctionTerm_35)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &mdb__browse__V_36_36, ((MR_Box) ((MR_Integer) 0)), &mdb__browse__conv2_STATE_VARIABLE_IO_37_50);
                }
#line 308 "browse.m"
              }
#line 301 "browse.m"
          }
#line 314 "browse.m"
        {
#line 314 "browse.m"
          mercury__io__close_output_3_p_0(mdb__browse__OutputStream_25);
        }
#line 294 "browse.m"
      }
#line 281 "browse.m"
    if (((MR_tag((MR_Word) mdb__browse__Result_10)) == (MR_mktag((MR_Integer) 1))))
#line 282 "browse.m"
      {
#line 282 "browse.m"
        MR_Word mdb__browse__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Result_10, (MR_Integer) 0)));
#line 282 "browse.m"
        MR_String mdb__browse__Msg_13;

#line 283 "browse.m"
        {
#line 283 "browse.m"
          mercury__io__error_message_2_p_0(mdb__browse__Error_12, &mdb__browse__Msg_13);
        }
#line 284 "browse.m"
        {
#line 284 "browse.m"
          mercury__io__write_string_4_p_0(mdb__browse__OutStream_8, mdb__browse__Msg_13);
        }
#line 285 "browse.m"
        {
#line 285 "browse.m"
          mercury__io__nl_2_p_0();
#line 285 "browse.m"
          return;
        }
#line 282 "browse.m"
      }
#line 281 "browse.m"
    else
#line 280 "browse.m"
      {
#line 280 "browse.m"
      }
#line 277 "browse.m"
  }
#line 150 "browse.m"
}

#line 142 "browse.m"
void MR_CALL 
mdb__browse__save_term_to_file_6_p_0(
#line 142 "browse.m"
  MR_String mdb__browse__FileName_7,
#line 142 "browse.m"
  MR_String mdb__browse___Format_8,
#line 142 "browse.m"
  MR_Word mdb__browse__BrowserTerm_9,
#line 142 "browse.m"
  MR_Word mdb__browse__OutStream_10)
#line 142 "browse.m"
{
#line 230 "browse.m"
  {
#line 230 "browse.m"
    MR_bool mdb__browse__succeeded;

#line 230 "browse.m"
    {
#line 230 "browse.m"
      mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(mdb__browse__FileName_7, mdb__browse__BrowserTerm_9, mdb__browse__OutStream_10);
#line 230 "browse.m"
      return;
    }
#line 230 "browse.m"
  }
#line 142 "browse.m"
}

#line 1032 "browse.m"
static void MR_CALL 
mdb__browse__browser_term_size_left_from_max_3_p_0_1(
#line 1032 "browse.m"
  MR_Box mdb__browse__closure_arg,
#line 1032 "browse.m"
  MR_Box mdb__browse__wrapper_arg_1,
#line 1032 "browse.m"
  MR_Box mdb__browse__wrapper_arg_2,
#line 1032 "browse.m"
  MR_Box * mdb__browse__wrapper_arg_3)
#line 1032 "browse.m"
{
#line 1032 "browse.m"
  {
#line 1032 "browse.m"
    MR_Box mdb__browse__closure = mdb__browse__closure_arg;
#line 1032 "browse.m"
    MR_Integer mdb__browse__conv0_RemainingSize_6;

#line 1032 "browse.m"
    {
#line 1032 "browse.m"
      mdb__browse__term_size_left_from_max_3_p_0(((MR_Word) mdb__browse__wrapper_arg_1), ((MR_Integer) mdb__browse__wrapper_arg_2), &mdb__browse__conv0_RemainingSize_6);
    }
#line 1032 "browse.m"
    *mdb__browse__wrapper_arg_3 = ((MR_Box) (mdb__browse__conv0_RemainingSize_6));
#line 1032 "browse.m"
  }
#line 1032 "browse.m"
}

#line 129 "browse.m"
void MR_CALL 
mdb__browse__browser_term_size_left_from_max_3_p_0(
#line 129 "browse.m"
  MR_Word mdb__browse__BrowserTerm_4,
#line 129 "browse.m"
  MR_Integer mdb__browse__MaxSize_5,
#line 129 "browse.m"
  MR_Integer * mdb__browse__RemainingSize_6)
#line 129 "browse.m"
{
#line 1016 "browse.m"
  {
#line 1016 "browse.m"
    MR_bool mdb__browse__succeeded;

#line 1016 "browse.m"
    if (((MR_tag((MR_Word) mdb__browse__BrowserTerm_4)) == (MR_mktag((MR_Integer) 0))))
#line 1016 "browse.m"
      {
#line 1016 "browse.m"
        MR_Word mdb__browse__Univ_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__BrowserTerm_4, (MR_Integer) 0)));

#line 1017 "browse.m"
        {
#line 1017 "browse.m"
          mdb__browse__term_size_left_from_max_3_p_0(mdb__browse__Univ_7, mdb__browse__MaxSize_5, mdb__browse__RemainingSize_6);
#line 1017 "browse.m"
          return;
        }
#line 1016 "browse.m"
      }
#line 1016 "browse.m"
    else
#line 1019 "browse.m"
      {
#line 1019 "browse.m"
        MR_Word mdb__browse__TypeCtorInfo_23_23;
#line 1019 "browse.m"
        MR_String mdb__browse__Functor_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_4, (MR_Integer) 0)));
#line 1019 "browse.m"
        MR_Word mdb__browse__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_4, (MR_Integer) 1)));
#line 1019 "browse.m"
        MR_Word mdb__browse__MaybeReturn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_4, (MR_Integer) 2)));
#line 1019 "browse.m"
        MR_Integer mdb__browse__FunctorSize_11;
#line 1019 "browse.m"
        MR_Integer mdb__browse__Arity_12;
#line 1019 "browse.m"
        MR_Integer mdb__browse__PrincipalSize_14;
#line 1019 "browse.m"
        MR_Integer mdb__browse__MaxArgsSize_15;
#line 1032 "browse.m"
        MR_Box mdb__browse__conv1_RemainingSize_6;

#line 1020 "browse.m"
        {
#line 1020 "browse.m"
          mercury__string__length_2_p_0(mdb__browse__Functor_8, &mdb__browse__FunctorSize_11);
        }
#line 10186 "mdb.browse.c"
        mdb__browse__TypeCtorInfo_23_23 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 1021 "browse.m"
        {
#line 1021 "browse.m"
          mercury__list__length_2_p_0(mdb__browse__TypeCtorInfo_23_23, mdb__browse__Args_9, &mdb__browse__Arity_12);
        }
#line 1026 "browse.m"
        if ((mdb__browse__MaybeReturn_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1027 "browse.m"
          {
#line 1027 "browse.m"
            MR_Integer mdb__browse__V_16_16 = (mdb__browse__Arity_12 * (MR_Integer) 2);

#line 1029 "browse.m"
            mdb__browse__PrincipalSize_14 = (mdb__browse__FunctorSize_11 + mdb__browse__V_16_16);
#line 1027 "browse.m"
          }
#line 1026 "browse.m"
        else
#line 1023 "browse.m"
          {
#line 1023 "browse.m"
            MR_Integer mdb__browse__V_18_18;
#line 1023 "browse.m"
            MR_Integer mdb__browse__V_19_19 = (mdb__browse__Arity_12 * (MR_Integer) 2);

#line 1025 "browse.m"
            mdb__browse__V_18_18 = (mdb__browse__FunctorSize_11 + mdb__browse__V_19_19);
#line 1025 "browse.m"
            mdb__browse__PrincipalSize_14 = (mdb__browse__V_18_18 + (MR_Integer) 3);
#line 1023 "browse.m"
          }
#line 1031 "browse.m"
        mdb__browse__MaxArgsSize_15 = (mdb__browse__MaxSize_5 - mdb__browse__PrincipalSize_14);
#line 1032 "browse.m"
        {
#line 1032 "browse.m"
          mercury__list__foldl_4_p_9(mdb__browse__TypeCtorInfo_23_23, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__browse_scalar_common_1[4], mdb__browse__Args_9, ((MR_Box) (mdb__browse__MaxArgsSize_15)), &mdb__browse__conv1_RemainingSize_6);
        }
#line 1032 "browse.m"
        *mdb__browse__RemainingSize_6 = ((MR_Integer) mdb__browse__conv1_RemainingSize_6);
#line 1019 "browse.m"
      }
#line 1016 "browse.m"
  }
#line 129 "browse.m"
}

#line 1004 "browse.m"
static void MR_CALL 
mdb__browse__term_size_left_from_max_3_p_0_1(
#line 1004 "browse.m"
  MR_Box mdb__browse__closure_arg,
#line 1004 "browse.m"
  MR_Box mdb__browse__wrapper_arg_1,
#line 1004 "browse.m"
  MR_Box mdb__browse__wrapper_arg_2,
#line 1004 "browse.m"
  MR_Box * mdb__browse__wrapper_arg_3)
#line 1004 "browse.m"
{
#line 1004 "browse.m"
  {
#line 1004 "browse.m"
    MR_Box mdb__browse__closure = mdb__browse__closure_arg;
#line 1004 "browse.m"
    MR_Integer mdb__browse__conv0_RemainingSize_6;

#line 1004 "browse.m"
    {
#line 1004 "browse.m"
      mdb__browse__term_size_left_from_max_3_p_0(((MR_Word) mdb__browse__wrapper_arg_1), ((MR_Integer) mdb__browse__wrapper_arg_2), &mdb__browse__conv0_RemainingSize_6);
    }
#line 1004 "browse.m"
    *mdb__browse__wrapper_arg_3 = ((MR_Box) (mdb__browse__conv0_RemainingSize_6));
#line 1004 "browse.m"
  }
#line 1004 "browse.m"
}

#line 128 "browse.m"
void MR_CALL 
mdb__browse__term_size_left_from_max_3_p_0(
#line 128 "browse.m"
  MR_Word mdb__browse__Univ_4,
#line 128 "browse.m"
  MR_Integer mdb__browse__MaxSize_5,
#line 128 "browse.m"
  MR_Integer * mdb__browse__RemainingSize_6)
#line 128 "browse.m"
{
#line 995 "browse.m"
  {
#line 995 "browse.m"
    MR_bool mdb__browse__succeeded = (mdb__browse__MaxSize_5 < (MR_Integer) 0);

#line 995 "browse.m"
    if (mdb__browse__succeeded)
#line 994 "browse.m"
      *mdb__browse__RemainingSize_6 = mdb__browse__MaxSize_5;
#line 995 "browse.m"
    else
#line 997 "browse.m"
      {
#line 997 "browse.m"
        MR_Word mdb__browse__TypeInfo_20_20;
#line 997 "browse.m"
        MR_Word mdb__browse__MaybeFunctorArityArgs_7;
#line 997 "browse.m"
        MR_Box mdb__browse__V_15_15;

#line 996 "browse.m"
        {
#line 996 "browse.m"
          mdb__browse__V_15_15 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_20_20, mdb__browse__Univ_4);
        }
#line 996 "browse.m"
        {
#line 996 "browse.m"
          mercury__deconstruct__limited_deconstruct_cc_3_p_0(mdb__browse__TypeInfo_20_20, mdb__browse__V_15_15, mdb__browse__MaxSize_5, &mdb__browse__MaybeFunctorArityArgs_7);
        }
#line 1006 "browse.m"
        if ((mdb__browse__MaybeFunctorArityArgs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1008 "browse.m"
          *mdb__browse__RemainingSize_6 = (MR_Integer) -1;
#line 1006 "browse.m"
        else
#line 999 "browse.m"
          {
#line 999 "browse.m"
            MR_String mdb__browse__Functor_8;
#line 999 "browse.m"
            MR_Integer mdb__browse__Arity_9;
#line 999 "browse.m"
            MR_Word mdb__browse__Args_10;
#line 999 "browse.m"
            MR_Integer mdb__browse__FunctorSize_11;
#line 999 "browse.m"
            MR_Integer mdb__browse__PrincipalSize_12;
#line 999 "browse.m"
            MR_Integer mdb__browse__MaxArgsSize_13;
#line 999 "browse.m"
            MR_Tuple mdb__browse__V_16_16 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeFunctorArityArgs_7, (MR_Integer) 0)));
#line 999 "browse.m"
            MR_Integer mdb__browse__V_17_17;
#line 1004 "browse.m"
            MR_Box mdb__browse__conv1_RemainingSize_6;

#line 999 "browse.m"
            mdb__browse__Functor_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__V_16_16, (MR_Integer) 0)));
#line 999 "browse.m"
            mdb__browse__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__V_16_16, (MR_Integer) 1)));
#line 999 "browse.m"
            mdb__browse__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__V_16_16, (MR_Integer) 2)));
#line 1000 "browse.m"
            {
#line 1000 "browse.m"
              mercury__string__length_2_p_0(mdb__browse__Functor_8, &mdb__browse__FunctorSize_11);
            }
#line 1002 "browse.m"
            mdb__browse__V_17_17 = (mdb__browse__Arity_9 * (MR_Integer) 2);
#line 1002 "browse.m"
            mdb__browse__PrincipalSize_12 = (mdb__browse__FunctorSize_11 + mdb__browse__V_17_17);
#line 1003 "browse.m"
            mdb__browse__MaxArgsSize_13 = (mdb__browse__MaxSize_5 - mdb__browse__PrincipalSize_12);
#line 1004 "browse.m"
            {
#line 1004 "browse.m"
              mercury__list__foldl_4_p_9((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__browse_scalar_common_1[3], mdb__browse__Args_10, ((MR_Box) (mdb__browse__MaxArgsSize_13)), &mdb__browse__conv1_RemainingSize_6);
            }
#line 1004 "browse.m"
            *mdb__browse__RemainingSize_6 = ((MR_Integer) mdb__browse__conv1_RemainingSize_6);
#line 999 "browse.m"
          }
#line 997 "browse.m"
      }
#line 995 "browse.m"
  }
#line 128 "browse.m"
}

#line 109 "browse.m"
void MR_CALL 
mdb__browse__print_browser_term_format_7_p_0(
#line 109 "browse.m"
  MR_Word mdb__browse__Term_8,
#line 109 "browse.m"
  MR_Word mdb__browse__OutputStream_9,
#line 109 "browse.m"
  MR_Word mdb__browse__Caller_10,
#line 109 "browse.m"
  MR_Word mdb__browse__Format_11,
#line 109 "browse.m"
  MR_Word mdb__browse__State_12)
#line 109 "browse.m"
{
#line 469 "browse.m"
  {
#line 469 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 469 "browse.m"
    MR_Word mdb__browse__V_16_16;
#line 469 "browse.m"
    MR_Word mdb__browse__Info_26;
#line 469 "browse.m"
    MR_Word mdb__browse__OldStream_27;
#line 469 "browse.m"
    MR_Word mdb__browse__Format_28;
#line 485 "browse.m"
    MR_Word mdb__browse__V_29_29;
#line 493 "browse.m"
    MR_Word mdb__browse__V_30_30;

#line 470 "browse.m"
    {
#line 470 "browse.m"
      mdb__browse__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 470 "browse.m"
      MR_hl_field(MR_mktag(1), mdb__browse__V_16_16, 0) = ((MR_Box) (mdb__browse__Format_11));
#line 470 "browse.m"
    }
#line 477 "browse.m"
    {
#line 477 "browse.m"
      mdb__browse__Info_26 = mdb__browser_info__init_5_f_0(mdb__browse__Term_8, mdb__browse__Caller_10, mdb__browse__V_16_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__State_12);
    }
#line 478 "browse.m"
    {
#line 478 "browse.m"
      mercury__io__set_output_stream_4_p_0(mdb__browse__OutputStream_9, &mdb__browse__OldStream_27);
    }
#line 479 "browse.m"
    {
#line 479 "browse.m"
      mdb__browser_info__get_format_4_p_0(mdb__browse__Info_26, mdb__browse__Caller_10, mdb__browse__V_16_16, &mdb__browse__Format_28);
    }
#line 485 "browse.m"
    mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 485 "browse.m"
    if (mdb__browse__succeeded)
#line 485 "browse.m"
      {
#line 485 "browse.m"
        mdb__browse__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Term_8, (MR_Integer) 0)));
#line 486 "browse.m"
        mdb__browse__succeeded = (mdb__browse__Format_28 == (MR_Integer) 0);
#line 486 "browse.m"
        mdb__browse__succeeded = !(mdb__browse__succeeded);
#line 485 "browse.m"
      }
#line 489 "browse.m"
    if (mdb__browse__succeeded)
#line 488 "browse.m"
      {
#line 488 "browse.m"
        mercury__io__nl_2_p_0();
      }
#line 489 "browse.m"
    else
#line 489 "browse.m"
      {
#line 489 "browse.m"
      }
#line 492 "browse.m"
    {
#line 492 "browse.m"
      mdb__browse__portray_6_p_0((MR_Integer) 0, mdb__browse__Caller_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__Info_26);
    }
#line 493 "browse.m"
    {
#line 493 "browse.m"
      mercury__io__set_output_stream_4_p_0(mdb__browse__OldStream_27, &mdb__browse__V_30_30);
    }
#line 469 "browse.m"
  }
#line 109 "browse.m"
}

#line 103 "browse.m"
void MR_CALL 
mdb__browse__print_browser_term_6_p_0(
#line 103 "browse.m"
  MR_Word mdb__browse__Term_7,
#line 103 "browse.m"
  MR_Word mdb__browse__OutputStream_8,
#line 103 "browse.m"
  MR_Word mdb__browse__Caller_9,
#line 103 "browse.m"
  MR_Word mdb__browse__State_10)
#line 103 "browse.m"
{
#line 466 "browse.m"
  {
#line 466 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 466 "browse.m"
    MR_Word mdb__browse__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 466 "browse.m"
    MR_Word mdb__browse__Info_24;
#line 466 "browse.m"
    MR_Word mdb__browse__OldStream_25;
#line 466 "browse.m"
    MR_Word mdb__browse__Format_26;
#line 485 "browse.m"
    MR_Word mdb__browse__V_27_27;
#line 493 "browse.m"
    MR_Word mdb__browse__V_28_28;

#line 477 "browse.m"
    {
#line 477 "browse.m"
      mdb__browse__Info_24 = mdb__browser_info__init_5_f_0(mdb__browse__Term_7, mdb__browse__Caller_9, mdb__browse__V_14_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__State_10);
    }
#line 478 "browse.m"
    {
#line 478 "browse.m"
      mercury__io__set_output_stream_4_p_0(mdb__browse__OutputStream_8, &mdb__browse__OldStream_25);
    }
#line 479 "browse.m"
    {
#line 479 "browse.m"
      mdb__browser_info__get_format_4_p_0(mdb__browse__Info_24, mdb__browse__Caller_9, mdb__browse__V_14_14, &mdb__browse__Format_26);
    }
#line 485 "browse.m"
    mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 485 "browse.m"
    if (mdb__browse__succeeded)
#line 485 "browse.m"
      {
#line 485 "browse.m"
        mdb__browse__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Term_7, (MR_Integer) 0)));
#line 486 "browse.m"
        mdb__browse__succeeded = (mdb__browse__Format_26 == (MR_Integer) 0);
#line 486 "browse.m"
        mdb__browse__succeeded = !(mdb__browse__succeeded);
#line 485 "browse.m"
      }
#line 489 "browse.m"
    if (mdb__browse__succeeded)
#line 488 "browse.m"
      {
#line 488 "browse.m"
        mercury__io__nl_2_p_0();
      }
#line 489 "browse.m"
    else
#line 489 "browse.m"
      {
#line 489 "browse.m"
      }
#line 492 "browse.m"
    {
#line 492 "browse.m"
      mdb__browse__portray_6_p_0((MR_Integer) 0, mdb__browse__Caller_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__Info_24);
    }
#line 493 "browse.m"
    {
#line 493 "browse.m"
      mercury__io__set_output_stream_4_p_0(mdb__browse__OldStream_25, &mdb__browse__V_28_28);
    }
#line 466 "browse.m"
  }
#line 103 "browse.m"
}

#line 94 "browse.m"
void MR_CALL 
mdb__browse__browse_external_8_p_0(
#line 94 "browse.m"
  MR_Word mdb__browse__TypeInfo_for_T_26,
#line 94 "browse.m"
  MR_Box mdb__browse__Term_9,
#line 94 "browse.m"
  MR_Word mdb__browse__InputStream_10,
#line 94 "browse.m"
  MR_Word mdb__browse__OutputStream_11,
#line 94 "browse.m"
  MR_Word mdb__browse__MaybeModeFunc_12,
#line 94 "browse.m"
  MR_Word mdb__browse__STATE_VARIABLE_State_0_16,
#line 94 "browse.m"
  MR_Word * mdb__browse__STATE_VARIABLE_State_17)
#line 94 "browse.m"
{
#line 524 "browse.m"
  {
#line 524 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 524 "browse.m"
    MR_Word mdb__browse__V_21_21;
#line 524 "browse.m"
    MR_Word mdb__browse__V_25_25;
#line 524 "browse.m"
    MR_Word mdb__browse__Info0_40;
#line 524 "browse.m"
    MR_Word mdb__browse__OldInputStream_41;
#line 524 "browse.m"
    MR_Word mdb__browse__OldOutputStream_42;
#line 524 "browse.m"
    MR_Word mdb__browse__Info_43;
#line 542 "browse.m"
    MR_Word mdb__browse__V_44_44;
#line 543 "browse.m"
    MR_Word mdb__browse__V_45_45;
#line 544 "browse.m"
    MR_Word mdb__browse__V_15_15;
#line 544 "browse.m"
    MR_Word mdb__browse__V_53_53;
#line 544 "browse.m"
    MR_Word mdb__browse__V_54_54;
#line 544 "browse.m"
    MR_Word mdb__browse__V_55_55;
#line 544 "browse.m"
    MR_Word mdb__browse__V_56_56;
#line 544 "browse.m"
    MR_Word mdb__browse__V_58_58;

#line 525 "browse.m"
    {
#line 525 "browse.m"
      mdb__browse__V_25_25 = mercury__univ__univ_1_f_0(mdb__browse__TypeInfo_for_T_26, mdb__browse__Term_9);
    }
#line 525 "browse.m"
    {
#line 525 "browse.m"
      mdb__browse__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 525 "browse.m"
      MR_hl_field(MR_mktag(0), mdb__browse__V_21_21, 0) = ((MR_Box) (mdb__browse__V_25_25));
#line 525 "browse.m"
    }
#line 536 "browse.m"
    {
#line 536 "browse.m"
      mdb__browse__Info0_40 = mdb__browser_info__init_5_f_0(mdb__browse__V_21_21, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__MaybeModeFunc_12, mdb__browse__STATE_VARIABLE_State_0_16);
    }
#line 538 "browse.m"
    {
#line 538 "browse.m"
      mercury__io__set_input_stream_4_p_0(mdb__browse__InputStream_10, &mdb__browse__OldInputStream_41);
    }
#line 539 "browse.m"
    {
#line 539 "browse.m"
      mercury__io__set_output_stream_4_p_0(mdb__browse__OutputStream_11, &mdb__browse__OldOutputStream_42);
    }
#line 541 "browse.m"
    {
#line 541 "browse.m"
      mdb__browse__browse_main_loop_5_p_0((MR_Integer) 1, mdb__browse__Info0_40, &mdb__browse__Info_43);
    }
#line 542 "browse.m"
    {
#line 542 "browse.m"
      mercury__io__set_input_stream_4_p_0(mdb__browse__OldInputStream_41, &mdb__browse__V_44_44);
    }
#line 543 "browse.m"
    {
#line 543 "browse.m"
      mercury__io__set_output_stream_4_p_0(mdb__browse__OldOutputStream_42, &mdb__browse__V_45_45);
    }
#line 544 "browse.m"
    mdb__browse__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_43, (MR_Integer) 0)));
#line 544 "browse.m"
    mdb__browse__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_43, (MR_Integer) 1)));
#line 544 "browse.m"
    mdb__browse__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_43, (MR_Integer) 2)));
#line 544 "browse.m"
    mdb__browse__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_43, (MR_Integer) 3)));
#line 544 "browse.m"
    *mdb__browse__STATE_VARIABLE_State_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_43, (MR_Integer) 4)));
#line 544 "browse.m"
    mdb__browse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_43, (MR_Integer) 5)));
#line 544 "browse.m"
    mdb__browse__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_43, (MR_Integer) 6)));
#line 524 "browse.m"
  }
#line 94 "browse.m"
}

#line 86 "browse.m"
void MR_CALL 
mdb__browse__browse_external_no_modes_7_p_0(
#line 86 "browse.m"
  MR_Word mdb__browse__TypeInfo_for_T_25,
#line 86 "browse.m"
  MR_Box mdb__browse__Term_8,
#line 86 "browse.m"
  MR_Word mdb__browse__InputStream_9,
#line 86 "browse.m"
  MR_Word mdb__browse__OutputStream_10,
#line 86 "browse.m"
  MR_Word mdb__browse__STATE_VARIABLE_State_0_14,
#line 86 "browse.m"
  MR_Word * mdb__browse__STATE_VARIABLE_State_15)
#line 86 "browse.m"
{
#line 520 "browse.m"
  {
#line 520 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 520 "browse.m"
    MR_Word mdb__browse__V_19_19;
#line 520 "browse.m"
    MR_Word mdb__browse__V_24_24;
#line 520 "browse.m"
    MR_Word mdb__browse__Info0_39;
#line 520 "browse.m"
    MR_Word mdb__browse__OldInputStream_40;
#line 520 "browse.m"
    MR_Word mdb__browse__OldOutputStream_41;
#line 520 "browse.m"
    MR_Word mdb__browse__Info_42;
#line 542 "browse.m"
    MR_Word mdb__browse__V_43_43;
#line 543 "browse.m"
    MR_Word mdb__browse__V_44_44;
#line 544 "browse.m"
    MR_Word mdb__browse__V_13_13;
#line 544 "browse.m"
    MR_Word mdb__browse__V_52_52;
#line 544 "browse.m"
    MR_Word mdb__browse__V_53_53;
#line 544 "browse.m"
    MR_Word mdb__browse__V_54_54;
#line 544 "browse.m"
    MR_Word mdb__browse__V_55_55;
#line 544 "browse.m"
    MR_Word mdb__browse__V_57_57;

#line 521 "browse.m"
    {
#line 521 "browse.m"
      mdb__browse__V_24_24 = mercury__univ__univ_1_f_0(mdb__browse__TypeInfo_for_T_25, mdb__browse__Term_8);
    }
#line 521 "browse.m"
    {
#line 521 "browse.m"
      mdb__browse__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 521 "browse.m"
      MR_hl_field(MR_mktag(0), mdb__browse__V_19_19, 0) = ((MR_Box) (mdb__browse__V_24_24));
#line 521 "browse.m"
    }
#line 536 "browse.m"
    {
#line 536 "browse.m"
      mdb__browse__Info0_39 = mdb__browser_info__init_5_f_0(mdb__browse__V_19_19, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__STATE_VARIABLE_State_0_14);
    }
#line 538 "browse.m"
    {
#line 538 "browse.m"
      mercury__io__set_input_stream_4_p_0(mdb__browse__InputStream_9, &mdb__browse__OldInputStream_40);
    }
#line 539 "browse.m"
    {
#line 539 "browse.m"
      mercury__io__set_output_stream_4_p_0(mdb__browse__OutputStream_10, &mdb__browse__OldOutputStream_41);
    }
#line 541 "browse.m"
    {
#line 541 "browse.m"
      mdb__browse__browse_main_loop_5_p_0((MR_Integer) 1, mdb__browse__Info0_39, &mdb__browse__Info_42);
    }
#line 542 "browse.m"
    {
#line 542 "browse.m"
      mercury__io__set_input_stream_4_p_0(mdb__browse__OldInputStream_40, &mdb__browse__V_43_43);
    }
#line 543 "browse.m"
    {
#line 543 "browse.m"
      mercury__io__set_output_stream_4_p_0(mdb__browse__OldOutputStream_41, &mdb__browse__V_44_44);
    }
#line 544 "browse.m"
    mdb__browse__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 0)));
#line 544 "browse.m"
    mdb__browse__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 1)));
#line 544 "browse.m"
    mdb__browse__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 2)));
#line 544 "browse.m"
    mdb__browse__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 3)));
#line 544 "browse.m"
    *mdb__browse__STATE_VARIABLE_State_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 4)));
#line 544 "browse.m"
    mdb__browse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 5)));
#line 544 "browse.m"
    mdb__browse__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 6)));
#line 520 "browse.m"
  }
#line 86 "browse.m"
}

#line 75 "browse.m"
void MR_CALL 
mdb__browse__browse_browser_term_format_9_p_0(
#line 75 "browse.m"
  MR_Word mdb__browse__Term_10,
#line 75 "browse.m"
  MR_Word mdb__browse__InputStream_11,
#line 75 "browse.m"
  MR_Word mdb__browse__OutputStream_12,
#line 75 "browse.m"
  MR_Word mdb__browse__Format_13,
#line 75 "browse.m"
  MR_Word mdb__browse__MaybeModeFunc_14,
#line 75 "browse.m"
  MR_Word mdb__browse__STATE_VARIABLE_State_0_18,
#line 75 "browse.m"
  MR_Word * mdb__browse__STATE_VARIABLE_State_19)
#line 75 "browse.m"
{
#line 516 "browse.m"
  {
#line 516 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 516 "browse.m"
    MR_Word mdb__browse__V_23_23;
#line 516 "browse.m"
    MR_Word mdb__browse__Info0_39;
#line 516 "browse.m"
    MR_Word mdb__browse__OldInputStream_40;
#line 516 "browse.m"
    MR_Word mdb__browse__OldOutputStream_41;
#line 516 "browse.m"
    MR_Word mdb__browse__Info_42;
#line 542 "browse.m"
    MR_Word mdb__browse__V_43_43;
#line 543 "browse.m"
    MR_Word mdb__browse__V_44_44;
#line 544 "browse.m"
    MR_Word mdb__browse__V_17_17;
#line 544 "browse.m"
    MR_Word mdb__browse__V_52_52;
#line 544 "browse.m"
    MR_Word mdb__browse__V_53_53;
#line 544 "browse.m"
    MR_Word mdb__browse__V_54_54;
#line 544 "browse.m"
    MR_Word mdb__browse__V_55_55;
#line 544 "browse.m"
    MR_Word mdb__browse__V_57_57;

#line 518 "browse.m"
    {
#line 518 "browse.m"
      mdb__browse__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 518 "browse.m"
      MR_hl_field(MR_mktag(1), mdb__browse__V_23_23, 0) = ((MR_Box) (mdb__browse__Format_13));
#line 518 "browse.m"
    }
#line 536 "browse.m"
    {
#line 536 "browse.m"
      mdb__browse__Info0_39 = mdb__browser_info__init_5_f_0(mdb__browse__Term_10, (MR_Integer) 1, mdb__browse__V_23_23, mdb__browse__MaybeModeFunc_14, mdb__browse__STATE_VARIABLE_State_0_18);
    }
#line 538 "browse.m"
    {
#line 538 "browse.m"
      mercury__io__set_input_stream_4_p_0(mdb__browse__InputStream_11, &mdb__browse__OldInputStream_40);
    }
#line 539 "browse.m"
    {
#line 539 "browse.m"
      mercury__io__set_output_stream_4_p_0(mdb__browse__OutputStream_12, &mdb__browse__OldOutputStream_41);
    }
#line 541 "browse.m"
    {
#line 541 "browse.m"
      mdb__browse__browse_main_loop_5_p_0((MR_Integer) 0, mdb__browse__Info0_39, &mdb__browse__Info_42);
    }
#line 542 "browse.m"
    {
#line 542 "browse.m"
      mercury__io__set_input_stream_4_p_0(mdb__browse__OldInputStream_40, &mdb__browse__V_43_43);
    }
#line 543 "browse.m"
    {
#line 543 "browse.m"
      mercury__io__set_output_stream_4_p_0(mdb__browse__OldOutputStream_41, &mdb__browse__V_44_44);
    }
#line 544 "browse.m"
    mdb__browse__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 0)));
#line 544 "browse.m"
    mdb__browse__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 1)));
#line 544 "browse.m"
    mdb__browse__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 2)));
#line 544 "browse.m"
    mdb__browse__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 3)));
#line 544 "browse.m"
    *mdb__browse__STATE_VARIABLE_State_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 4)));
#line 544 "browse.m"
    mdb__browse__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 5)));
#line 544 "browse.m"
    mdb__browse__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 6)));
#line 516 "browse.m"
  }
#line 75 "browse.m"
}

#line 68 "browse.m"
void MR_CALL 
mdb__browse__browse_browser_term_format_no_modes_8_p_0(
#line 68 "browse.m"
  MR_Word mdb__browse__Term_9,
#line 68 "browse.m"
  MR_Word mdb__browse__InputStream_10,
#line 68 "browse.m"
  MR_Word mdb__browse__OutputStream_11,
#line 68 "browse.m"
  MR_Word mdb__browse__Format_12,
#line 68 "browse.m"
  MR_Word mdb__browse__STATE_VARIABLE_State_0_16,
#line 68 "browse.m"
  MR_Word * mdb__browse__STATE_VARIABLE_State_17)
#line 68 "browse.m"
{
#line 511 "browse.m"
  {
#line 511 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 511 "browse.m"
    MR_Word mdb__browse__V_21_21;
#line 511 "browse.m"
    MR_Word mdb__browse__Info0_38;
#line 511 "browse.m"
    MR_Word mdb__browse__OldInputStream_39;
#line 511 "browse.m"
    MR_Word mdb__browse__OldOutputStream_40;
#line 511 "browse.m"
    MR_Word mdb__browse__Info_41;
#line 542 "browse.m"
    MR_Word mdb__browse__V_42_42;
#line 543 "browse.m"
    MR_Word mdb__browse__V_43_43;
#line 544 "browse.m"
    MR_Word mdb__browse__V_15_15;
#line 544 "browse.m"
    MR_Word mdb__browse__V_51_51;
#line 544 "browse.m"
    MR_Word mdb__browse__V_52_52;
#line 544 "browse.m"
    MR_Word mdb__browse__V_53_53;
#line 544 "browse.m"
    MR_Word mdb__browse__V_54_54;
#line 544 "browse.m"
    MR_Word mdb__browse__V_56_56;

#line 513 "browse.m"
    {
#line 513 "browse.m"
      mdb__browse__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 513 "browse.m"
      MR_hl_field(MR_mktag(1), mdb__browse__V_21_21, 0) = ((MR_Box) (mdb__browse__Format_12));
#line 513 "browse.m"
    }
#line 536 "browse.m"
    {
#line 536 "browse.m"
      mdb__browse__Info0_38 = mdb__browser_info__init_5_f_0(mdb__browse__Term_9, (MR_Integer) 1, mdb__browse__V_21_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__STATE_VARIABLE_State_0_16);
    }
#line 538 "browse.m"
    {
#line 538 "browse.m"
      mercury__io__set_input_stream_4_p_0(mdb__browse__InputStream_10, &mdb__browse__OldInputStream_39);
    }
#line 539 "browse.m"
    {
#line 539 "browse.m"
      mercury__io__set_output_stream_4_p_0(mdb__browse__OutputStream_11, &mdb__browse__OldOutputStream_40);
    }
#line 541 "browse.m"
    {
#line 541 "browse.m"
      mdb__browse__browse_main_loop_5_p_0((MR_Integer) 0, mdb__browse__Info0_38, &mdb__browse__Info_41);
    }
#line 542 "browse.m"
    {
#line 542 "browse.m"
      mercury__io__set_input_stream_4_p_0(mdb__browse__OldInputStream_39, &mdb__browse__V_42_42);
    }
#line 543 "browse.m"
    {
#line 543 "browse.m"
      mercury__io__set_output_stream_4_p_0(mdb__browse__OldOutputStream_40, &mdb__browse__V_43_43);
    }
#line 544 "browse.m"
    mdb__browse__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 0)));
#line 544 "browse.m"
    mdb__browse__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 1)));
#line 544 "browse.m"
    mdb__browse__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 2)));
#line 544 "browse.m"
    mdb__browse__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 3)));
#line 544 "browse.m"
    *mdb__browse__STATE_VARIABLE_State_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 4)));
#line 544 "browse.m"
    mdb__browse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 5)));
#line 544 "browse.m"
    mdb__browse__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 6)));
#line 511 "browse.m"
  }
#line 68 "browse.m"
}

#line 60 "browse.m"
void MR_CALL 
mdb__browse__save_and_browse_browser_term_xml_6_p_0(
#line 60 "browse.m"
  MR_Word mdb__browse__Term_7,
#line 60 "browse.m"
  MR_Word mdb__browse__OutStream_8,
#line 60 "browse.m"
  MR_Word mdb__browse__ErrStream_9,
#line 60 "browse.m"
  MR_Word mdb__browse__State_10)
#line 60 "browse.m"
{
#line 319 "browse.m"
  {
#line 319 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 319 "browse.m"
    MR_Word mdb__browse__MaybeXMLBrowserCmd_12;
#line 319 "browse.m"
    MR_Word mdb__browse__MaybeTmpFileName_13;

#line 320 "browse.m"
    {
#line 320 "browse.m"
      mdb__browse__MaybeXMLBrowserCmd_12 = mdb__browser_info__xml_browser_cmd_1_f_0(mdb__browse__State_10);
    }
#line 321 "browse.m"
    {
#line 321 "browse.m"
      mdb__browse__MaybeTmpFileName_13 = mdb__browser_info__xml_tmp_filename_1_f_0(mdb__browse__State_10);
    }
#line 338 "browse.m"
    if ((mdb__browse__MaybeXMLBrowserCmd_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 338 "browse.m"
      if ((mdb__browse__MaybeTmpFileName_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 349 "browse.m"
        {
#line 351 "browse.m"
          {
#line 351 "browse.m"
            mercury__io__write_string_4_p_0(mdb__browse__ErrStream_9, (MR_String) "mdb: You need to issue a \"set xml_browser_cmd \'<command>\'\" command\nand a \"set xml_tmp_filename \'<filename>\'\" command first.\n");
#line 351 "browse.m"
            return;
          }
#line 349 "browse.m"
        }
#line 338 "browse.m"
      else
#line 344 "browse.m"
        {
#line 346 "browse.m"
          {
#line 346 "browse.m"
            mercury__io__write_string_4_p_0(mdb__browse__ErrStream_9, (MR_String) "mdb: You need to issue a \"set xml_browser_cmd \'<command>\'\" command first.\n");
#line 346 "browse.m"
            return;
          }
#line 344 "browse.m"
        }
#line 338 "browse.m"
    else
#line 338 "browse.m"
      {
#line 338 "browse.m"
        MR_String mdb__browse__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeXMLBrowserCmd_12, (MR_Integer) 0)));

#line 338 "browse.m"
        if ((mdb__browse__MaybeTmpFileName_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 339 "browse.m"
          {
#line 341 "browse.m"
            {
#line 341 "browse.m"
              mercury__io__write_string_4_p_0(mdb__browse__ErrStream_9, (MR_String) "mdb: You need to issue a \"set xml_tmp_filename \'<filename>\'\" command first.\n");
#line 341 "browse.m"
              return;
            }
#line 339 "browse.m"
          }
#line 338 "browse.m"
        else
#line 323 "browse.m"
          {
#line 323 "browse.m"
            MR_String mdb__browse__TmpFileName_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeTmpFileName_13, (MR_Integer) 0)));
#line 323 "browse.m"
            MR_Word mdb__browse__SaveResult_16;

#line 325 "browse.m"
            {
#line 325 "browse.m"
              mercury__io__write_string_4_p_0(mdb__browse__OutStream_8, (MR_String) "Saving term to XML file...\n");
            }
#line 292 "browse.m"
            {
#line 292 "browse.m"
              mercury__io__open_output_4_p_0(mdb__browse__TmpFileName_15, &mdb__browse__SaveResult_16);
            }
#line 315 "browse.m"
            if (((MR_tag((MR_Word) mdb__browse__SaveResult_16)) == (MR_mktag((MR_Integer) 1))))
#line 316 "browse.m"
              {
#line 316 "browse.m"
              }
#line 315 "browse.m"
            else
#line 294 "browse.m"
              {
#line 294 "browse.m"
                MR_Word mdb__browse__OutputStream_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__SaveResult_16, (MR_Integer) 0)));

#line 300 "browse.m"
                if (((MR_tag((MR_Word) mdb__browse__Term_7)) == (MR_mktag((MR_Integer) 0))))
#line 296 "browse.m"
                  {
#line 296 "browse.m"
                    MR_Word mdb__browse__TypeInfo_39_83;
#line 296 "browse.m"
                    MR_Word mdb__browse__Univ_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Term_7, (MR_Integer) 0)));
#line 296 "browse.m"
                    MR_Box mdb__browse__Term_58;
#line 298 "browse.m"
                    MR_Word mdb__browse__V_59_59;
#line 298 "browse.m"
                    MR_Box mdb__browse__conv0_STATE_VARIABLE_IO_37_81;

#line 297 "browse.m"
                    {
#line 297 "browse.m"
                      mdb__browse__Term_58 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_39_83, mdb__browse__Univ_57);
                    }
#line 298 "browse.m"
                    {
#line 298 "browse.m"
                      mercury__term_to_xml__write_xml_doc_general_cc_8_p_0(mdb__browse__TypeInfo_39_83, (MR_Word) &mdb__browse_scalar_common_3[0], ((MR_Box) (mdb__browse__OutputStream_56)), mdb__browse__Term_58, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &mdb__browse__V_59_59, ((MR_Box) ((MR_Integer) 0)), &mdb__browse__conv0_STATE_VARIABLE_IO_37_81);
                    }
#line 296 "browse.m"
                  }
#line 300 "browse.m"
                else
#line 301 "browse.m"
                  {
#line 301 "browse.m"
                    MR_String mdb__browse__Functor_60 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__Term_7, (MR_Integer) 0)));
#line 301 "browse.m"
                    MR_Word mdb__browse__Args_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Term_7, (MR_Integer) 1)));
#line 301 "browse.m"
                    MR_Word mdb__browse__MaybeRes_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Term_7, (MR_Integer) 2)));

#line 307 "browse.m"
                    if ((mdb__browse__MaybeRes_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 303 "browse.m"
                      {
#line 303 "browse.m"
                        MR_Word mdb__browse__PredicateTerm_63;
#line 305 "browse.m"
                        MR_Word mdb__browse__V_64_64;
#line 305 "browse.m"
                        MR_Box mdb__browse__conv1_STATE_VARIABLE_IO_37_81;

#line 304 "browse.m"
                        {
#line 304 "browse.m"
                          mdb__browse__PredicateTerm_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 304 "browse.m"
                          MR_hl_field(MR_mktag(0), mdb__browse__PredicateTerm_63, 0) = ((MR_Box) (mdb__browse__Functor_60));
#line 304 "browse.m"
                          MR_hl_field(MR_mktag(0), mdb__browse__PredicateTerm_63, 1) = ((MR_Box) (mdb__browse__Args_61));
#line 304 "browse.m"
                        }
#line 305 "browse.m"
                        {
#line 305 "browse.m"
                          mercury__term_to_xml__write_xml_doc_general_cc_8_p_0((MR_Word) &mdb__browse__mdb__browse__type_ctor_info_xml_predicate_wrapper_0, (MR_Word) &mdb__browse_scalar_common_3[0], ((MR_Box) (mdb__browse__OutputStream_56)), ((MR_Box) (mdb__browse__PredicateTerm_63)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &mdb__browse__V_64_64, ((MR_Box) ((MR_Integer) 0)), &mdb__browse__conv1_STATE_VARIABLE_IO_37_81);
                        }
#line 303 "browse.m"
                      }
#line 307 "browse.m"
                    else
#line 308 "browse.m"
                      {
#line 308 "browse.m"
                        MR_Word mdb__browse__Result_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeRes_62, (MR_Integer) 0)));
#line 308 "browse.m"
                        MR_Word mdb__browse__FunctionTerm_66;
#line 310 "browse.m"
                        MR_Word mdb__browse__V_67_67;
#line 310 "browse.m"
                        MR_Box mdb__browse__conv2_STATE_VARIABLE_IO_37_81;

#line 309 "browse.m"
                        {
#line 309 "browse.m"
                          mdb__browse__FunctionTerm_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 309 "browse.m"
                          MR_hl_field(MR_mktag(0), mdb__browse__FunctionTerm_66, 0) = ((MR_Box) (mdb__browse__Functor_60));
#line 309 "browse.m"
                          MR_hl_field(MR_mktag(0), mdb__browse__FunctionTerm_66, 1) = ((MR_Box) (mdb__browse__Args_61));
#line 309 "browse.m"
                          MR_hl_field(MR_mktag(0), mdb__browse__FunctionTerm_66, 2) = ((MR_Box) (mdb__browse__Result_65));
#line 309 "browse.m"
                        }
#line 310 "browse.m"
                        {
#line 310 "browse.m"
                          mercury__term_to_xml__write_xml_doc_general_cc_8_p_0((MR_Word) &mdb__browse__mdb__browse__type_ctor_info_xml_function_wrapper_0, (MR_Word) &mdb__browse_scalar_common_3[0], ((MR_Box) (mdb__browse__OutputStream_56)), ((MR_Box) (mdb__browse__FunctionTerm_66)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &mdb__browse__V_67_67, ((MR_Box) ((MR_Integer) 0)), &mdb__browse__conv2_STATE_VARIABLE_IO_37_81);
                        }
#line 308 "browse.m"
                      }
#line 301 "browse.m"
                  }
#line 314 "browse.m"
                {
#line 314 "browse.m"
                  mercury__io__close_output_3_p_0(mdb__browse__OutputStream_56);
                }
#line 294 "browse.m"
              }
#line 330 "browse.m"
            if (((MR_tag((MR_Word) mdb__browse__SaveResult_16)) == (MR_mktag((MR_Integer) 1))))
#line 331 "browse.m"
              {
#line 331 "browse.m"
                MR_Word mdb__browse__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__SaveResult_16, (MR_Integer) 0)));
#line 331 "browse.m"
                MR_String mdb__browse__Msg_19;
#line 331 "browse.m"
                MR_String mdb__browse__V_41_41;
#line 331 "browse.m"
                MR_String mdb__browse__V_44_44;

#line 332 "browse.m"
                {
#line 332 "browse.m"
                  mercury__io__error_message_2_p_0(mdb__browse__Error_18, &mdb__browse__Msg_19);
                }
#line 334 "browse.m"
                {
#line 334 "browse.m"
                  mdb__browse__V_44_44 = mercury__string__f_43_43_2_f_0(mdb__browse__TmpFileName_15, (MR_String) "\': ");
                }
#line 334 "browse.m"
                {
#line 334 "browse.m"
                  mdb__browse__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "Error opening file \140", mdb__browse__V_44_44);
                }
#line 333 "browse.m"
                {
#line 333 "browse.m"
                  mercury__io__write_string_4_p_0(mdb__browse__ErrStream_9, mdb__browse__V_41_41);
                }
#line 335 "browse.m"
                {
#line 335 "browse.m"
                  mercury__io__write_string_4_p_0(mdb__browse__ErrStream_9, mdb__browse__Msg_19);
                }
#line 336 "browse.m"
                {
#line 336 "browse.m"
                  mercury__io__nl_2_p_0();
#line 336 "browse.m"
                  return;
                }
#line 331 "browse.m"
              }
#line 330 "browse.m"
            else
#line 329 "browse.m"
              {
#line 329 "browse.m"
                mdb__browse__launch_xml_browser_5_p_0(mdb__browse__OutStream_8, mdb__browse__ErrStream_9, mdb__browse__V_49_49);
#line 329 "browse.m"
                return;
              }
#line 323 "browse.m"
          }
#line 338 "browse.m"
      }
#line 319 "browse.m"
  }
#line 60 "browse.m"
}

#line 51 "browse.m"
void MR_CALL 
mdb__browse__browse_browser_term_9_p_0(
#line 51 "browse.m"
  MR_Word mdb__browse__Term_10,
#line 51 "browse.m"
  MR_Word mdb__browse__InputStream_11,
#line 51 "browse.m"
  MR_Word mdb__browse__OutputStream_12,
#line 51 "browse.m"
  MR_Word mdb__browse__MaybeModeFunc_13,
#line 51 "browse.m"
  MR_Word * mdb__browse__MaybeTrack_14,
#line 51 "browse.m"
  MR_Word mdb__browse__STATE_VARIABLE_State_0_17,
#line 51 "browse.m"
  MR_Word * mdb__browse__STATE_VARIABLE_State_18)
#line 51 "browse.m"
{
#line 506 "browse.m"
  {
#line 506 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 506 "browse.m"
    MR_Word mdb__browse__Info0_38;
#line 506 "browse.m"
    MR_Word mdb__browse__OldInputStream_39;
#line 506 "browse.m"
    MR_Word mdb__browse__OldOutputStream_40;
#line 506 "browse.m"
    MR_Word mdb__browse__Info_41;
#line 542 "browse.m"
    MR_Word mdb__browse__V_42_42;
#line 543 "browse.m"
    MR_Word mdb__browse__V_43_43;
#line 544 "browse.m"
    MR_Word mdb__browse__V_51_51;
#line 544 "browse.m"
    MR_Word mdb__browse__V_52_52;
#line 544 "browse.m"
    MR_Word mdb__browse__V_53_53;
#line 544 "browse.m"
    MR_Word mdb__browse__V_54_54;
#line 544 "browse.m"
    MR_Word mdb__browse__V_56_56;

#line 536 "browse.m"
    {
#line 536 "browse.m"
      mdb__browse__Info0_38 = mdb__browser_info__init_5_f_0(mdb__browse__Term_10, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__MaybeModeFunc_13, mdb__browse__STATE_VARIABLE_State_0_17);
    }
#line 538 "browse.m"
    {
#line 538 "browse.m"
      mercury__io__set_input_stream_4_p_0(mdb__browse__InputStream_11, &mdb__browse__OldInputStream_39);
    }
#line 539 "browse.m"
    {
#line 539 "browse.m"
      mercury__io__set_output_stream_4_p_0(mdb__browse__OutputStream_12, &mdb__browse__OldOutputStream_40);
    }
#line 541 "browse.m"
    {
#line 541 "browse.m"
      mdb__browse__browse_main_loop_5_p_0((MR_Integer) 0, mdb__browse__Info0_38, &mdb__browse__Info_41);
    }
#line 542 "browse.m"
    {
#line 542 "browse.m"
      mercury__io__set_input_stream_4_p_0(mdb__browse__OldInputStream_39, &mdb__browse__V_42_42);
    }
#line 543 "browse.m"
    {
#line 543 "browse.m"
      mercury__io__set_output_stream_4_p_0(mdb__browse__OldOutputStream_40, &mdb__browse__V_43_43);
    }
#line 544 "browse.m"
    mdb__browse__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 0)));
#line 544 "browse.m"
    mdb__browse__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 1)));
#line 544 "browse.m"
    mdb__browse__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 2)));
#line 544 "browse.m"
    mdb__browse__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 3)));
#line 544 "browse.m"
    *mdb__browse__STATE_VARIABLE_State_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 4)));
#line 544 "browse.m"
    *mdb__browse__MaybeTrack_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 5)));
#line 544 "browse.m"
    mdb__browse__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 6)));
#line 506 "browse.m"
  }
#line 51 "browse.m"
}

#line 42 "browse.m"
void MR_CALL 
mdb__browse__browse_browser_term_no_modes_8_p_0(
#line 42 "browse.m"
  MR_Word mdb__browse__Term_9,
#line 42 "browse.m"
  MR_Word mdb__browse__InputStream_10,
#line 42 "browse.m"
  MR_Word mdb__browse__OutputStream_11,
#line 42 "browse.m"
  MR_Word * mdb__browse__MaybeTrack_12,
#line 42 "browse.m"
  MR_Word mdb__browse__STATE_VARIABLE_State_0_15,
#line 42 "browse.m"
  MR_Word * mdb__browse__STATE_VARIABLE_State_16)
#line 42 "browse.m"
{
#line 501 "browse.m"
  {
#line 501 "browse.m"
    MR_bool mdb__browse__succeeded;
#line 501 "browse.m"
    MR_Word mdb__browse__Info0_37;
#line 501 "browse.m"
    MR_Word mdb__browse__OldInputStream_38;
#line 501 "browse.m"
    MR_Word mdb__browse__OldOutputStream_39;
#line 501 "browse.m"
    MR_Word mdb__browse__Info_40;
#line 542 "browse.m"
    MR_Word mdb__browse__V_41_41;
#line 543 "browse.m"
    MR_Word mdb__browse__V_42_42;
#line 544 "browse.m"
    MR_Word mdb__browse__V_50_50;
#line 544 "browse.m"
    MR_Word mdb__browse__V_51_51;
#line 544 "browse.m"
    MR_Word mdb__browse__V_52_52;
#line 544 "browse.m"
    MR_Word mdb__browse__V_53_53;
#line 544 "browse.m"
    MR_Word mdb__browse__V_55_55;

#line 536 "browse.m"
    {
#line 536 "browse.m"
      mdb__browse__Info0_37 = mdb__browser_info__init_5_f_0(mdb__browse__Term_9, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__STATE_VARIABLE_State_0_15);
    }
#line 538 "browse.m"
    {
#line 538 "browse.m"
      mercury__io__set_input_stream_4_p_0(mdb__browse__InputStream_10, &mdb__browse__OldInputStream_38);
    }
#line 539 "browse.m"
    {
#line 539 "browse.m"
      mercury__io__set_output_stream_4_p_0(mdb__browse__OutputStream_11, &mdb__browse__OldOutputStream_39);
    }
#line 541 "browse.m"
    {
#line 541 "browse.m"
      mdb__browse__browse_main_loop_5_p_0((MR_Integer) 0, mdb__browse__Info0_37, &mdb__browse__Info_40);
    }
#line 542 "browse.m"
    {
#line 542 "browse.m"
      mercury__io__set_input_stream_4_p_0(mdb__browse__OldInputStream_38, &mdb__browse__V_41_41);
    }
#line 543 "browse.m"
    {
#line 543 "browse.m"
      mercury__io__set_output_stream_4_p_0(mdb__browse__OldOutputStream_39, &mdb__browse__V_42_42);
    }
#line 544 "browse.m"
    mdb__browse__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_40, (MR_Integer) 0)));
#line 544 "browse.m"
    mdb__browse__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_40, (MR_Integer) 1)));
#line 544 "browse.m"
    mdb__browse__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_40, (MR_Integer) 2)));
#line 544 "browse.m"
    mdb__browse__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_40, (MR_Integer) 3)));
#line 544 "browse.m"
    *mdb__browse__STATE_VARIABLE_State_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_40, (MR_Integer) 4)));
#line 544 "browse.m"
    *mdb__browse__MaybeTrack_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_40, (MR_Integer) 5)));
#line 544 "browse.m"
    mdb__browse__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_40, (MR_Integer) 6)));
#line 501 "browse.m"
  }
#line 42 "browse.m"
}

void mercury__mdb__browse__init(void)
{
}

void mercury__mdb__browse__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__browse__mdb__browse__type_ctor_info_deref_result_1);
	MR_register_type_ctor_info(&mdb__browse__mdb__browse__type_ctor_info_unbound_0);
	MR_register_type_ctor_info(&mdb__browse__mdb__browse__type_ctor_info_xml_function_wrapper_0);
	MR_register_type_ctor_info(&mdb__browse__mdb__browse__type_ctor_info_xml_predicate_wrapper_0);
}

void mercury__mdb__browse__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.browse. */
