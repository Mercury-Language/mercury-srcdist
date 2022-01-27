/*
** Automatically generated from `dump.m'
** by the Mercury compiler,
** version rotd-2013-03-26, configured for x86_64-apple-darwin12.2.1.
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


/* :- module dump. */
/* :- implementation. */

/*
INIT mercury__dump__init
ENDINIT
*/

#include "dump.mih"


#include "analysis_utils.mih"
#include "array.mih"
#include "array_util.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "coverage.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "exclude.mih"
#include "int.mih"
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
#include "report.mih"
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
#include "var_use_analysis.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 85 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0;

#line 88 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_static_ptr_0;

#line 91 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_call_site_static_ptr_0;

#line 94 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0;

#line 97 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__maybe__pti_maybe_1__plain_profile__type_ctor_info_clique_ptr_0;

#line 100 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 103 "dump.c"
static const MR_FA_TypeInfo_Struct1 dump__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 106 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct2 dump__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 109 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct2 dump__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 112 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_cliques_0_0;

#line 115 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_cliques_0_1;

#line 118 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dump_cliques_0[2];

#line 121 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dump_cliques_0[2];

#line 124 "dump.c"
static const MR_Integer dump__dump__functor_number_map_dump_cliques_0[2];

#line 127 "dump.c"
static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1dump__type_ctor_info_dumpable_array_0;

#line 130 "dump.c"
static const MR_PseudoTypeInfo dump__dump__field_types_dump_options_0_0[6];

#line 133 "dump.c"
static const MR_ConstString dump__dump__field_names_dump_options_0_0[6];

#line 136 "dump.c"
static const MR_DuArgLocn dump__dump__field_locns_dump_options_0_0[6];

#line 139 "dump.c"
static const MR_DuFunctorDesc dump__dump__du_functor_desc_dump_options_0_0;

#line 142 "dump.c"
static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_dump_options_0_0[1];

#line 145 "dump.c"
static const MR_DuPtagLayout dump__dump__du_ptag_ordered_dump_options_0[1];

#line 148 "dump.c"
static const MR_DuFunctorDescPtr dump__dump__du_name_ordered_dump_options_0[1];

#line 151 "dump.c"
static const MR_Integer dump__dump__functor_number_map_dump_options_0[1];

#line 154 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_prop_measurements_0_0;

#line 157 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_prop_measurements_0_1;

#line 160 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dump_prop_measurements_0[2];

#line 163 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dump_prop_measurements_0[2];

#line 166 "dump.c"
static const MR_Integer dump__dump__functor_number_map_dump_prop_measurements_0[2];

#line 169 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_rev_links_0_0;

#line 172 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_rev_links_0_1;

#line 175 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dump_rev_links_0[2];

#line 178 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dump_rev_links_0[2];

#line 181 "dump.c"
static const MR_Integer dump__dump__functor_number_map_dump_rev_links_0[2];

#line 184 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_0;

#line 187 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_1;

#line 190 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_2;

#line 193 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_3;

#line 196 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dumpable_array_0[4];

#line 199 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dumpable_array_0[4];

#line 202 "dump.c"
static const MR_Integer dump__dump__functor_number_map_dumpable_array_0[4];

#line 205 "dump.c"
static const MR_DuFunctorDesc dump__dump__du_functor_desc_restriction_0_0;

#line 208 "dump.c"
static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_static_ptr_0;

#line 211 "dump.c"
static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_call_site_static_ptr_0;

#line 214 "dump.c"
static const MR_PseudoTypeInfo dump__dump__field_types_restriction_0_1[2];

#line 217 "dump.c"
static const MR_DuFunctorDesc dump__dump__du_functor_desc_restriction_0_1;

#line 220 "dump.c"
static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_restriction_0_0[1];

#line 223 "dump.c"
static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_restriction_0_1[1];

#line 226 "dump.c"
static const MR_DuPtagLayout dump__dump__du_ptag_ordered_restriction_0[2];

#line 229 "dump.c"
static const MR_DuFunctorDescPtr dump__dump__du_name_ordered_restriction_0[2];

#line 232 "dump.c"
static const MR_Integer dump__dump__functor_number_map_restriction_0[2];

#line 235 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_restricted_dump_0_0;

#line 238 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_restricted_dump_0_1;

#line 241 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_show_restricted_dump_0[2];

#line 244 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_show_restricted_dump_0[2];

#line 247 "dump.c"
static const MR_Integer dump__dump__functor_number_map_show_restricted_dump_0[2];

#line 250 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_stats_0_0;

#line 253 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_stats_0_1;

#line 256 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_show_stats_0[2];

#line 259 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_show_stats_0[2];

#line 262 "dump.c"
static const MR_Integer dump__dump__functor_number_map_show_stats_0[2];

#line 265 "dump.c"
static MR_bool MR_CALL 
dump____Unify____dump_cliques_0_0_10001(
#line 268 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 270 "dump.c"
  MR_Box dump__wrapper_arg_2);

#line 273 "dump.c"
static void MR_CALL 
dump____Compare____dump_cliques_0_0_10001(
#line 276 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 278 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 280 "dump.c"
  MR_Box dump__wrapper_arg_3);

#line 283 "dump.c"
static MR_bool MR_CALL 
dump____Unify____dump_options_0_0_10001(
#line 286 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 288 "dump.c"
  MR_Box dump__wrapper_arg_2);

#line 291 "dump.c"
static void MR_CALL 
dump____Compare____dump_options_0_0_10001(
#line 294 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 296 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 298 "dump.c"
  MR_Box dump__wrapper_arg_3);

#line 301 "dump.c"
static MR_bool MR_CALL 
dump____Unify____dump_prop_measurements_0_0_10001(
#line 304 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 306 "dump.c"
  MR_Box dump__wrapper_arg_2);

#line 309 "dump.c"
static void MR_CALL 
dump____Compare____dump_prop_measurements_0_0_10001(
#line 312 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 314 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 316 "dump.c"
  MR_Box dump__wrapper_arg_3);

#line 319 "dump.c"
static MR_bool MR_CALL 
dump____Unify____dump_rev_links_0_0_10001(
#line 322 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 324 "dump.c"
  MR_Box dump__wrapper_arg_2);

#line 327 "dump.c"
static void MR_CALL 
dump____Compare____dump_rev_links_0_0_10001(
#line 330 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 332 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 334 "dump.c"
  MR_Box dump__wrapper_arg_3);

#line 337 "dump.c"
static MR_bool MR_CALL 
dump____Unify____dumpable_array_0_0_10001(
#line 340 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 342 "dump.c"
  MR_Box dump__wrapper_arg_2);

#line 345 "dump.c"
static void MR_CALL 
dump____Compare____dumpable_array_0_0_10001(
#line 348 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 350 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 352 "dump.c"
  MR_Box dump__wrapper_arg_3);

#line 355 "dump.c"
static MR_bool MR_CALL 
dump____Unify____restriction_0_0_10001(
#line 358 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 360 "dump.c"
  MR_Box dump__wrapper_arg_2);

#line 363 "dump.c"
static void MR_CALL 
dump____Compare____restriction_0_0_10001(
#line 366 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 368 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 370 "dump.c"
  MR_Box dump__wrapper_arg_3);

#line 373 "dump.c"
static MR_bool MR_CALL 
dump____Unify____show_restricted_dump_0_0_10001(
#line 376 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 378 "dump.c"
  MR_Box dump__wrapper_arg_2);

#line 381 "dump.c"
static void MR_CALL 
dump____Compare____show_restricted_dump_0_0_10001(
#line 384 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 386 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 388 "dump.c"
  MR_Box dump__wrapper_arg_3);

#line 391 "dump.c"
static MR_bool MR_CALL 
dump____Unify____show_stats_0_0_10001(
#line 394 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 396 "dump.c"
  MR_Box dump__wrapper_arg_2);

#line 399 "dump.c"
static void MR_CALL 
dump____Compare____show_stats_0_0_10001(
#line 402 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 404 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 406 "dump.c"
  MR_Box dump__wrapper_arg_3);

#line 272 "dump.m"
static void MR_CALL 
dump__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
#line 272 "dump.m"
  MR_ArrayPtr dump__ProcStatics_8,
#line 272 "dump.m"
  MR_Word dump__ProcDynamic_10,
#line 272 "dump.m"
  MR_Word dump__STATE_VARIABLE_PS_Ptrs_0_16,
#line 272 "dump.m"
  MR_Word * dump__STATE_VARIABLE_PS_Ptrs_17,
#line 272 "dump.m"
  MR_Word dump__STATE_VARIABLE_CSS_Ptrs_0_18,
#line 272 "dump.m"
  MR_Word * dump__STATE_VARIABLE_CSS_Ptrs_19);

#line 872 "dump.m"
static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__872__1_2_p_0(
#line 872 "dump.m"
  MR_Integer dump__CSSOwnMax_20,
#line 872 "dump.m"
  MR_Integer dump__CSSDescMax_21);

#line 863 "dump.m"
static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__863__1_2_p_0(
#line 863 "dump.m"
  MR_Integer dump__PSOwnMax_16,
#line 863 "dump.m"
  MR_Integer dump__PSDescMax_17);

#line 854 "dump.m"
static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__854__1_2_p_0(
#line 854 "dump.m"
  MR_Integer dump__CSDMax_12,
#line 854 "dump.m"
  MR_Integer dump__CSDDescMax_13);

#line 845 "dump.m"
static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__845__1_2_p_0(
#line 845 "dump.m"
  MR_Integer dump__PDOwnMax_8,
#line 845 "dump.m"
  MR_Integer dump__PDDescMax_9);

#line 260 "dump.m"
static void MR_CALL 
dump____Compare____restriction_0_0(
#line 260 "dump.m"
  MR_Word * dump__HeadVar__1_1,
#line 260 "dump.m"
  MR_Word dump__HeadVar__2_2,
#line 260 "dump.m"
  MR_Word dump__HeadVar__3_3);

#line 260 "dump.m"
static MR_bool MR_CALL 
dump____Unify____restriction_0_0(
#line 260 "dump.m"
  MR_Word dump__HeadVar__1_1,
#line 260 "dump.m"
  MR_Word dump__HeadVar__2_2);

#line 964 "dump.m"
static MR_bool MR_CALL 
dump__should_dump_2_p_0(
#line 964 "dump.m"
  MR_Word dump__DumpOptions_3,
#line 964 "dump.m"
  MR_Word dump__What_4);

#line 934 "dump.m"
static void MR_CALL 
dump__dump_own_and_desc_6_p_0(
#line 934 "dump.m"
  MR_String dump__Prefix_7,
#line 934 "dump.m"
  MR_Integer dump__Cur_8,
#line 934 "dump.m"
  MR_Word dump__Own_9,
#line 934 "dump.m"
  MR_Word dump__Desc_10);

#line 920 "dump.m"
static void MR_CALL 
dump__dump_css_measurements_6_p_0(
#line 920 "dump.m"
  MR_Integer dump__Cur_7,
#line 920 "dump.m"
  MR_Integer dump__Max_8,
#line 920 "dump.m"
  MR_ArrayPtr dump__CSSOwn_9,
#line 920 "dump.m"
  MR_ArrayPtr dump__CSSDesc_10);

#line 906 "dump.m"
static void MR_CALL 
dump__dump_ps_measurements_6_p_0(
#line 906 "dump.m"
  MR_Integer dump__Cur_7,
#line 906 "dump.m"
  MR_Integer dump__Max_8,
#line 906 "dump.m"
  MR_ArrayPtr dump__PSOwn_9,
#line 906 "dump.m"
  MR_ArrayPtr dump__PSDesc_10);

#line 891 "dump.m"
static void MR_CALL 
dump__dump_csd_measurements_6_p_0(
#line 891 "dump.m"
  MR_Integer dump__Cur_7,
#line 891 "dump.m"
  MR_Integer dump__Max_8,
#line 891 "dump.m"
  MR_ArrayPtr dump__CSDs_9,
#line 891 "dump.m"
  MR_ArrayPtr dump__CSDDesc_10);

#line 877 "dump.m"
static void MR_CALL 
dump__dump_pd_measurements_6_p_0(
#line 877 "dump.m"
  MR_Integer dump__Cur_7,
#line 877 "dump.m"
  MR_Integer dump__Max_8,
#line 877 "dump.m"
  MR_ArrayPtr dump__PDOwn_9,
#line 877 "dump.m"
  MR_ArrayPtr dump__PDDesc_10);

#line 872 "dump.m"
static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_4(
#line 872 "dump.m"
  MR_Box dump__closure_arg);

#line 863 "dump.m"
static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_3(
#line 863 "dump.m"
  MR_Box dump__closure_arg);

#line 854 "dump.m"
static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_2(
#line 854 "dump.m"
  MR_Box dump__closure_arg);

#line 845 "dump.m"
static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_1(
#line 845 "dump.m"
  MR_Box dump__closure_arg);

#line 838 "dump.m"
static void MR_CALL 
dump__dump_deep_prop_measurements_3_p_0(
#line 838 "dump.m"
  MR_Word dump__Deep_4);

#line 833 "dump.m"
static void MR_CALL 
dump__dump_call_site_calls_to_proc_4_p_0_1(
#line 833 "dump.m"
  MR_Box dump__closure_arg,
#line 833 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 833 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 833 "dump.m"
  MR_Box * dump__wrapper_arg_3);

#line 826 "dump.m"
static void MR_CALL 
dump__dump_call_site_calls_to_proc_4_p_0(
#line 826 "dump.m"
  MR_String dump__Prefix_5,
#line 826 "dump.m"
  MR_Word dump__HeadVar__2_2);

#line 823 "dump.m"
static void MR_CALL 
dump__dump_call_site_calls_4_p_0_1(
#line 823 "dump.m"
  MR_Box dump__closure_arg,
#line 823 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 823 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 823 "dump.m"
  MR_Box * dump__wrapper_arg_3);

#line 808 "dump.m"
static void MR_CALL 
dump__dump_call_site_calls_4_p_0(
#line 808 "dump.m"
  MR_Integer dump__Index_5,
#line 808 "dump.m"
  MR_Word dump__CalleeMap_6);

#line 801 "dump.m"
static void MR_CALL 
dump__dump_call_site_dynamic_to_static_4_p_0(
#line 801 "dump.m"
  MR_Integer dump__Index_5,
#line 801 "dump.m"
  MR_Word dump__CSSPtr_6);

#line 794 "dump.m"
static void MR_CALL 
dump__dump_space_csdptr_3_p_0(
#line 794 "dump.m"
  MR_Word dump__CSDPtr_4);

#line 790 "dump.m"
static void MR_CALL 
dump__dump_proc_static_caller_csds_4_p_0_1(
#line 790 "dump.m"
  MR_Box dump__closure_arg,
#line 790 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 790 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 790 "dump.m"
  MR_Box * dump__wrapper_arg_3);

#line 781 "dump.m"
static void MR_CALL 
dump__dump_proc_static_caller_csds_4_p_0(
#line 781 "dump.m"
  MR_Integer dump__Index_5,
#line 781 "dump.m"
  MR_Word dump__CallerCSDs_6);

#line 778 "dump.m"
static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_3(
#line 778 "dump.m"
  MR_Box dump__closure_arg,
#line 778 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 778 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 778 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 778 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 772 "dump.m"
static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_2(
#line 772 "dump.m"
  MR_Box dump__closure_arg,
#line 772 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 772 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 772 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 772 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 766 "dump.m"
static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_1(
#line 766 "dump.m"
  MR_Box dump__closure_arg,
#line 766 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 766 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 766 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 766 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 761 "dump.m"
static void MR_CALL 
dump__dump_deep_rev_links_3_p_0(
#line 761 "dump.m"
  MR_Word dump__Deep_4);

#line 747 "dump.m"
static void MR_CALL 
dump__dump_clique_maybe_child_4_p_0(
#line 747 "dump.m"
  MR_Integer dump__Index_5,
#line 747 "dump.m"
  MR_Word dump__MaybeCliquePtr_6);

#line 740 "dump.m"
static void MR_CALL 
dump__dump_clique_parent_4_p_0(
#line 740 "dump.m"
  MR_Integer dump__Index_5,
#line 740 "dump.m"
  MR_Word dump__CSDPtr_6);

#line 733 "dump.m"
static void MR_CALL 
dump__dump_pd_in_clique_3_p_0(
#line 733 "dump.m"
  MR_Word dump__PDPtr_4);

#line 730 "dump.m"
static void MR_CALL 
dump__dump_clique_members_4_p_0_1(
#line 730 "dump.m"
  MR_Box dump__closure_arg,
#line 730 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 730 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 730 "dump.m"
  MR_Box * dump__wrapper_arg_3);

#line 725 "dump.m"
static void MR_CALL 
dump__dump_clique_members_4_p_0(
#line 725 "dump.m"
  MR_Integer dump__Index_5,
#line 725 "dump.m"
  MR_Word dump__CliqueMembers_6);

#line 718 "dump.m"
static void MR_CALL 
dump__dump_clique_index_entry_4_p_0(
#line 718 "dump.m"
  MR_Integer dump__Index_5,
#line 718 "dump.m"
  MR_Word dump__CliquePtr_6);

#line 715 "dump.m"
static void MR_CALL 
dump__dump_deep_cliques_3_p_0_4(
#line 715 "dump.m"
  MR_Box dump__closure_arg,
#line 715 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 715 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 715 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 715 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 709 "dump.m"
static void MR_CALL 
dump__dump_deep_cliques_3_p_0_3(
#line 709 "dump.m"
  MR_Box dump__closure_arg,
#line 709 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 709 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 709 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 709 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 704 "dump.m"
static void MR_CALL 
dump__dump_deep_cliques_3_p_0_2(
#line 704 "dump.m"
  MR_Box dump__closure_arg,
#line 704 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 704 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 704 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 704 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 699 "dump.m"
static void MR_CALL 
dump__dump_deep_cliques_3_p_0_1(
#line 699 "dump.m"
  MR_Box dump__closure_arg,
#line 699 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 699 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 699 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 699 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 694 "dump.m"
static void MR_CALL 
dump__dump_deep_cliques_3_p_0(
#line 694 "dump.m"
  MR_Word dump__Deep_4);

#line 652 "dump.m"
static void MR_CALL 
dump__dump_call_site_kind_and_callee_3_p_0(
#line 652 "dump.m"
  MR_Word dump__HeadVar__1_1);

#line 631 "dump.m"
static MR_String MR_CALL 
dump__dump_proc_id_1_f_0(
#line 631 "dump.m"
  MR_Word dump__Proc_1);

#line 615 "dump.m"
static void MR_CALL 
dump__dump_coverage_point_info_4_p_0(
#line 615 "dump.m"
  MR_Integer dump__Num_5,
#line 615 "dump.m"
  MR_Word dump__CoveragePointInfo_6);

#line 605 "dump.m"
static void MR_CALL 
dump__dump_coverage_point_5_p_0(
#line 605 "dump.m"
  MR_Word dump__CoveragePoint_6,
#line 605 "dump.m"
  MR_Integer dump__STATE_VARIABLE_Num_0_14,
#line 605 "dump.m"
  MR_Integer * dump__STATE_VARIABLE_Num_15);

#line 598 "dump.m"
static void MR_CALL 
dump__dump_proc_static_call_sites_4_p_0(
#line 598 "dump.m"
  MR_Integer dump__Slot_5,
#line 598 "dump.m"
  MR_Word dump__CSSPtr_6);

#line 585 "dump.m"
static void MR_CALL 
dump__dump_proc_static_5_p_0_3(
#line 585 "dump.m"
  MR_Box dump__closure_arg,
#line 585 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 585 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 585 "dump.m"
  MR_Box * dump__wrapper_arg_3,
#line 585 "dump.m"
  MR_Box dump__wrapper_arg_4,
#line 585 "dump.m"
  MR_Box * dump__wrapper_arg_5);

#line 590 "dump.m"
static void MR_CALL 
dump__dump_proc_static_5_p_0_2(
#line 590 "dump.m"
  MR_Box dump__closure_arg,
#line 590 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 590 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 590 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 590 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 580 "dump.m"
static void MR_CALL 
dump__dump_proc_static_5_p_0_1(
#line 580 "dump.m"
  MR_Box dump__closure_arg,
#line 580 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 580 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 580 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 580 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 530 "dump.m"
static void MR_CALL 
dump__dump_proc_static_5_p_0(
#line 530 "dump.m"
  MR_Word dump__Restriction_6,
#line 530 "dump.m"
  MR_Integer dump__Index_7,
#line 530 "dump.m"
  MR_Word dump__ProcStatic_8);

#line 527 "dump.m"
static void MR_CALL 
dump__dump_init_proc_statics_4_p_0_1(
#line 527 "dump.m"
  MR_Box dump__closure_arg,
#line 527 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 527 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 527 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 527 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 522 "dump.m"
static void MR_CALL 
dump__dump_init_proc_statics_4_p_0(
#line 522 "dump.m"
  MR_Word dump__Restriction_5,
#line 522 "dump.m"
  MR_ArrayPtr dump__ProcStatics_6);

#line 491 "dump.m"
static void MR_CALL 
dump__dump_call_site_static_5_p_0(
#line 491 "dump.m"
  MR_Word dump__Restriction_6,
#line 491 "dump.m"
  MR_Integer dump__Index_7,
#line 491 "dump.m"
  MR_Word dump__CallSiteStatic_8);

#line 489 "dump.m"
static void MR_CALL 
dump__dump_init_call_site_statics_4_p_0_1(
#line 489 "dump.m"
  MR_Box dump__closure_arg,
#line 489 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 489 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 489 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 489 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 484 "dump.m"
static void MR_CALL 
dump__dump_init_call_site_statics_4_p_0(
#line 484 "dump.m"
  MR_Word dump__Restriction_5,
#line 484 "dump.m"
  MR_ArrayPtr dump__CallStatics_6);

#line 469 "dump.m"
static void MR_CALL 
dump__dump_call_site_array_slot_4_p_0(
#line 469 "dump.m"
  MR_Integer dump__Index_5,
#line 469 "dump.m"
  MR_Word dump__CSA_slot_6);

#line 463 "dump.m"
static void MR_CALL 
dump__dump_proc_dynamic_5_p_0_2(
#line 463 "dump.m"
  MR_Box dump__closure_arg,
#line 463 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 463 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 463 "dump.m"
  MR_Box * dump__wrapper_arg_3,
#line 463 "dump.m"
  MR_Box dump__wrapper_arg_4,
#line 463 "dump.m"
  MR_Box * dump__wrapper_arg_5);

#line 457 "dump.m"
static void MR_CALL 
dump__dump_proc_dynamic_5_p_0_1(
#line 457 "dump.m"
  MR_Box dump__closure_arg,
#line 457 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 457 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 457 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 457 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 442 "dump.m"
static void MR_CALL 
dump__dump_proc_dynamic_5_p_0(
#line 442 "dump.m"
  MR_ArrayPtr dump__ProcStatics_6,
#line 442 "dump.m"
  MR_Integer dump__Index_7,
#line 442 "dump.m"
  MR_Word dump__ProcDynamic_8);

#line 440 "dump.m"
static void MR_CALL 
dump__dump_init_proc_dynamics_4_p_0_1(
#line 440 "dump.m"
  MR_Box dump__closure_arg,
#line 440 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 440 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 440 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 440 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 435 "dump.m"
static void MR_CALL 
dump__dump_init_proc_dynamics_4_p_0(
#line 435 "dump.m"
  MR_ArrayPtr dump__ProcDynamics_5,
#line 435 "dump.m"
  MR_ArrayPtr dump__ProcStatics_6);

#line 354 "dump.m"
static void MR_CALL 
dump__dump_own_prof_info_3_p_0(
#line 354 "dump.m"
  MR_Word dump__Own_4);

#line 341 "dump.m"
static void MR_CALL 
dump__dump_call_site_dynamic_4_p_0(
#line 341 "dump.m"
  MR_Integer dump__Index_5,
#line 341 "dump.m"
  MR_Word dump__CallSiteDynamic_6);

#line 339 "dump.m"
static void MR_CALL 
dump__dump_init_call_site_dynamics_3_p_0_1(
#line 339 "dump.m"
  MR_Box dump__closure_arg,
#line 339 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 339 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 339 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 339 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 334 "dump.m"
static void MR_CALL 
dump__dump_init_call_site_dynamics_3_p_0(
#line 334 "dump.m"
  MR_ArrayPtr dump__CallSiteDynamics_4);

#line 289 "dump.m"
static void MR_CALL 
dump__dump_init_profile_stats_3_p_0(
#line 289 "dump.m"
  MR_Word dump__Stats_4);

#line 272 "dump.m"
static void MR_CALL 
dump__get_static_ptrs_from_dynamic_proc_7_p_0(
#line 272 "dump.m"
  MR_ArrayPtr dump__ProcStatics_8,
#line 272 "dump.m"
  MR_Integer dump__HeadVar__2_9,
#line 272 "dump.m"
  MR_Word dump__ProcDynamic_10,
#line 272 "dump.m"
  MR_Word dump__STATE_VARIABLE_PS_Ptrs_0_16,
#line 272 "dump.m"
  MR_Word * dump__STATE_VARIABLE_PS_Ptrs_17,
#line 272 "dump.m"
  MR_Word dump__STATE_VARIABLE_CSS_Ptrs_0_18,
#line 272 "dump.m"
  MR_Word * dump__STATE_VARIABLE_CSS_Ptrs_19);

#line 198 "dump.m"
static MR_bool MR_CALL 
dump__string_to_dumpable_array_2_p_0(
#line 198 "dump.m"
  MR_String dump__HeadVar__1_1,
#line 198 "dump.m"
  MR_Word * dump__HeadVar__2_2);

#line 189 "dump.m"
static void MR_CALL 
dump__det_string_to_dumpable_array_2_p_0(
#line 189 "dump.m"
  MR_String dump__String_3,
#line 189 "dump.m"
  MR_Word * dump__Array_4);

#line 269 "dump.m"
static void MR_CALL 
dump__dump_initial_deep_4_p_0_1(
#line 269 "dump.m"
  MR_Box dump__closure_arg,
#line 269 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 269 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 269 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 269 "dump.m"
  MR_Box * dump__wrapper_arg_4,
#line 269 "dump.m"
  MR_Box dump__wrapper_arg_5,
#line 269 "dump.m"
  MR_Box * dump__wrapper_arg_6);

#line 1115 "dump.c"
static void MR_CALL 
dump__det_dump_array_options_2_p_0_1(
#line 1118 "dump.c"
  MR_Box dump__closure_arg,
#line 1120 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 1122 "dump.c"
  MR_Box * dump__wrapper_arg_2);

#line 1125 "dump.c"
static MR_bool MR_CALL 
dump__dump_array_options_2_p_0_1(
#line 1128 "dump.c"
  MR_Box dump__closure_arg,
#line 1130 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 1132 "dump.c"
  MR_Box * dump__wrapper_arg_2);


static /* final */ const MR_Box dump_scalar_common_1[10][2];

static /* final */ const MR_Box dump_scalar_common_2[20][3];

static /* final */ const MR_Box dump_scalar_common_3[2][5];

static /* final */ const MR_Box dump_scalar_common_4[1][10];

static /* final */ const MR_Box dump_scalar_common_5[11][7];

static /* final */ const MR_Box dump_scalar_common_6[4][8];

static /* final */ const MR_Box dump_scalar_common_7[2][6];

static /* final */ const MR_Box dump_scalar_common_8[1][4];




static /* final */ const MR_Box dump_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&dump__dump__type_ctor_info_dumpable_array_0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &dump_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &dump_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &dump_scalar_common_1[8])))
  },
};

static /* final */ const MR_Box dump_scalar_common_2[20][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&dump_scalar_common_1[4]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&dump_scalar_common_1[4]))
  },
  /* row 2 */
  {
    ((MR_Box) (&dump_scalar_common_3[0])),
    ((MR_Box) (dump__dump_array_options_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&dump_scalar_common_3[0])),
    ((MR_Box) (dump__det_dump_array_options_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&dump_scalar_common_5[0])),
    ((MR_Box) (dump__dump_init_call_site_dynamics_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&dump_scalar_common_5[1])),
    ((MR_Box) (dump__dump_proc_dynamic_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&dump_scalar_common_6[1])),
    ((MR_Box) (dump__dump_proc_dynamic_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&dump_scalar_common_5[2])),
    ((MR_Box) (dump__dump_proc_static_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&dump_scalar_common_5[3])),
    ((MR_Box) (dump__dump_proc_static_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&dump_scalar_common_6[1])),
    ((MR_Box) (dump__dump_proc_static_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&dump_scalar_common_5[4])),
    ((MR_Box) (dump__dump_deep_cliques_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&dump_scalar_common_5[5])),
    ((MR_Box) (dump__dump_deep_cliques_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&dump_scalar_common_5[6])),
    ((MR_Box) (dump__dump_deep_cliques_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&dump_scalar_common_5[7])),
    ((MR_Box) (dump__dump_deep_cliques_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&dump_scalar_common_7[0])),
    ((MR_Box) (dump__dump_clique_members_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&dump_scalar_common_5[8])),
    ((MR_Box) (dump__dump_deep_rev_links_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&dump_scalar_common_5[2])),
    ((MR_Box) (dump__dump_deep_rev_links_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&dump_scalar_common_5[9])),
    ((MR_Box) (dump__dump_deep_rev_links_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&dump_scalar_common_7[1])),
    ((MR_Box) (dump__dump_proc_static_caller_csds_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&dump_scalar_common_7[1])),
    ((MR_Box) (dump__dump_call_site_calls_to_proc_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box dump_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&dump__dump__type_ctor_info_dumpable_array_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box dump_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&dump__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&dump__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&dump__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&dump__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&dump__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_call_site_static_ptr_0))
  },
};

static /* final */ const MR_Box dump_scalar_common_5[11][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&dump__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&dump__maybe__pti_maybe_1__plain_profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&dump__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&dump__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&dump__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box dump_scalar_common_6[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&dump__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&dump__dump__type_ctor_info_restriction_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&dump__dump__type_ctor_info_restriction_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box dump_scalar_common_7[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box dump_scalar_common_8[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&dump_scalar_common_5[10])),
    ((MR_Box) (dump__dump_call_site_calls_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "\t"))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "profile.mh"
#include "profile.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1578 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_0
  }
};

#line 1586 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 1594 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_call_site_static_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0
  }
};

#line 1602 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 1610 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__maybe__pti_maybe_1__plain_profile__type_ctor_info_clique_ptr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

#line 1618 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1626 "dump.c"
static const MR_FA_TypeInfo_Struct1 dump__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1634 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct2 dump__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &dump__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1643 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct2 dump__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &dump__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1652 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_cliques_0_0 = {
  (MR_String) "dump_cliques",
  (MR_Integer) 0
};

#line 1658 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_cliques_0_1 = {
  (MR_String) "do_not_dump_cliques",
  (MR_Integer) 1
};

#line 1664 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dump_cliques_0[2] = {
  &dump__dump__enum_functor_desc_dump_cliques_0_0,
  &dump__dump__enum_functor_desc_dump_cliques_0_1
};

#line 1670 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dump_cliques_0[2] = {
  &dump__dump__enum_functor_desc_dump_cliques_0_1,
  &dump__dump__enum_functor_desc_dump_cliques_0_0
};

#line 1676 "dump.c"
static const MR_Integer dump__dump__functor_number_map_dump_cliques_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1682 "dump.c"
const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_dump_cliques_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____dump_cliques_0_0_10001)),
  ((MR_Box) (dump____Compare____dump_cliques_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "dump_cliques",
  {
    dump__dump__enum_name_ordered_dump_cliques_0
  },
  {
    dump__dump__enum_value_ordered_dump_cliques_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  dump__dump__functor_number_map_dump_cliques_0
};

#line 1703 "dump.c"
static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1dump__type_ctor_info_dumpable_array_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &dump__dump__type_ctor_info_dumpable_array_0
  }
};

#line 1711 "dump.c"
static const MR_PseudoTypeInfo dump__dump__field_types_dump_options_0_0[6] = {
  (MR_PseudoTypeInfo) &dump__dump__type_ctor_info_show_restricted_dump_0,
  (MR_PseudoTypeInfo) &dump__set_ordlist__ti_set_ordlist_1dump__type_ctor_info_dumpable_array_0,
  (MR_PseudoTypeInfo) &dump__dump__type_ctor_info_show_stats_0,
  (MR_PseudoTypeInfo) &dump__dump__type_ctor_info_dump_cliques_0,
  (MR_PseudoTypeInfo) &dump__dump__type_ctor_info_dump_rev_links_0,
  (MR_PseudoTypeInfo) &dump__dump__type_ctor_info_dump_prop_measurements_0
};

#line 1721 "dump.c"
static const MR_ConstString dump__dump__field_names_dump_options_0_0[6] = {
  (MR_String) "do_restricted",
  (MR_String) "do_arrays",
  (MR_String) "do_stats",
  (MR_String) "do_dump_cliques",
  (MR_String) "do_dump_rev_links",
  (MR_String) "do_dump_prop_measurements"
};

#line 1731 "dump.c"
static const MR_DuArgLocn dump__dump__field_locns_dump_options_0_0[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 3,
    (MR_Integer) 1
  }
};

#line 1765 "dump.c"
static const MR_DuFunctorDesc dump__dump__du_functor_desc_dump_options_0_0 = {
  (MR_String) "dump_options",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  dump__dump__field_types_dump_options_0_0,
  dump__dump__field_names_dump_options_0_0,
  dump__dump__field_locns_dump_options_0_0,
  NULL
};

#line 1780 "dump.c"
static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_dump_options_0_0[1] = {
  &dump__dump__du_functor_desc_dump_options_0_0
};

#line 1785 "dump.c"
static const MR_DuPtagLayout dump__dump__du_ptag_ordered_dump_options_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    dump__dump__du_stag_ordered_dump_options_0_0
  }
};

#line 1794 "dump.c"
static const MR_DuFunctorDescPtr dump__dump__du_name_ordered_dump_options_0[1] = {
  &dump__dump__du_functor_desc_dump_options_0_0
};

#line 1799 "dump.c"
static const MR_Integer dump__dump__functor_number_map_dump_options_0[1] = {
  (MR_Integer) 0
};

#line 1804 "dump.c"
const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_dump_options_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (dump____Unify____dump_options_0_0_10001)),
  ((MR_Box) (dump____Compare____dump_options_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "dump_options",
  {
    dump__dump__du_name_ordered_dump_options_0
  },
  {
    dump__dump__du_ptag_ordered_dump_options_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  dump__dump__functor_number_map_dump_options_0
};

#line 1825 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_prop_measurements_0_0 = {
  (MR_String) "dump_prop_measurements",
  (MR_Integer) 0
};

#line 1831 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_prop_measurements_0_1 = {
  (MR_String) "do_not_dump_prop_measurements",
  (MR_Integer) 1
};

#line 1837 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dump_prop_measurements_0[2] = {
  &dump__dump__enum_functor_desc_dump_prop_measurements_0_0,
  &dump__dump__enum_functor_desc_dump_prop_measurements_0_1
};

#line 1843 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dump_prop_measurements_0[2] = {
  &dump__dump__enum_functor_desc_dump_prop_measurements_0_1,
  &dump__dump__enum_functor_desc_dump_prop_measurements_0_0
};

#line 1849 "dump.c"
static const MR_Integer dump__dump__functor_number_map_dump_prop_measurements_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1855 "dump.c"
const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_dump_prop_measurements_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____dump_prop_measurements_0_0_10001)),
  ((MR_Box) (dump____Compare____dump_prop_measurements_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "dump_prop_measurements",
  {
    dump__dump__enum_name_ordered_dump_prop_measurements_0
  },
  {
    dump__dump__enum_value_ordered_dump_prop_measurements_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  dump__dump__functor_number_map_dump_prop_measurements_0
};

#line 1876 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_rev_links_0_0 = {
  (MR_String) "dump_rev_links",
  (MR_Integer) 0
};

#line 1882 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_rev_links_0_1 = {
  (MR_String) "do_not_dump_rev_links",
  (MR_Integer) 1
};

#line 1888 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dump_rev_links_0[2] = {
  &dump__dump__enum_functor_desc_dump_rev_links_0_0,
  &dump__dump__enum_functor_desc_dump_rev_links_0_1
};

#line 1894 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dump_rev_links_0[2] = {
  &dump__dump__enum_functor_desc_dump_rev_links_0_1,
  &dump__dump__enum_functor_desc_dump_rev_links_0_0
};

#line 1900 "dump.c"
static const MR_Integer dump__dump__functor_number_map_dump_rev_links_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1906 "dump.c"
const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_dump_rev_links_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____dump_rev_links_0_0_10001)),
  ((MR_Box) (dump____Compare____dump_rev_links_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "dump_rev_links",
  {
    dump__dump__enum_name_ordered_dump_rev_links_0
  },
  {
    dump__dump__enum_value_ordered_dump_rev_links_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  dump__dump__functor_number_map_dump_rev_links_0
};

#line 1927 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_0 = {
  (MR_String) "csd",
  (MR_Integer) 0
};

#line 1933 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_1 = {
  (MR_String) "css",
  (MR_Integer) 1
};

#line 1939 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_2 = {
  (MR_String) "pd",
  (MR_Integer) 2
};

#line 1945 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_3 = {
  (MR_String) "ps",
  (MR_Integer) 3
};

#line 1951 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dumpable_array_0[4] = {
  &dump__dump__enum_functor_desc_dumpable_array_0_0,
  &dump__dump__enum_functor_desc_dumpable_array_0_1,
  &dump__dump__enum_functor_desc_dumpable_array_0_2,
  &dump__dump__enum_functor_desc_dumpable_array_0_3
};

#line 1959 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dumpable_array_0[4] = {
  &dump__dump__enum_functor_desc_dumpable_array_0_0,
  &dump__dump__enum_functor_desc_dumpable_array_0_1,
  &dump__dump__enum_functor_desc_dumpable_array_0_2,
  &dump__dump__enum_functor_desc_dumpable_array_0_3
};

#line 1967 "dump.c"
static const MR_Integer dump__dump__functor_number_map_dumpable_array_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 1975 "dump.c"
const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_dumpable_array_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____dumpable_array_0_0_10001)),
  ((MR_Box) (dump____Compare____dumpable_array_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "dumpable_array",
  {
    dump__dump__enum_name_ordered_dumpable_array_0
  },
  {
    dump__dump__enum_value_ordered_dumpable_array_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  dump__dump__functor_number_map_dumpable_array_0
};

#line 1996 "dump.c"
static const MR_DuFunctorDesc dump__dump__du_functor_desc_restriction_0_0 = {
  (MR_String) "none",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2011 "dump.c"
static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 2019 "dump.c"
static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_call_site_static_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0
  }
};

#line 2027 "dump.c"
static const MR_PseudoTypeInfo dump__dump__field_types_restriction_0_1[2] = {
  (MR_PseudoTypeInfo) &dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_call_site_static_ptr_0
};

#line 2033 "dump.c"
static const MR_DuFunctorDesc dump__dump__du_functor_desc_restriction_0_1 = {
  (MR_String) "these",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  dump__dump__field_types_restriction_0_1,
  NULL,
  NULL,
  NULL
};

#line 2048 "dump.c"
static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_restriction_0_0[1] = {
  &dump__dump__du_functor_desc_restriction_0_0
};

#line 2053 "dump.c"
static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_restriction_0_1[1] = {
  &dump__dump__du_functor_desc_restriction_0_1
};

#line 2058 "dump.c"
static const MR_DuPtagLayout dump__dump__du_ptag_ordered_restriction_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    dump__dump__du_stag_ordered_restriction_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    dump__dump__du_stag_ordered_restriction_0_1
  }
};

#line 2072 "dump.c"
static const MR_DuFunctorDescPtr dump__dump__du_name_ordered_restriction_0[2] = {
  &dump__dump__du_functor_desc_restriction_0_0,
  &dump__dump__du_functor_desc_restriction_0_1
};

#line 2078 "dump.c"
static const MR_Integer dump__dump__functor_number_map_restriction_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2084 "dump.c"
const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_restriction_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (dump____Unify____restriction_0_0_10001)),
  ((MR_Box) (dump____Compare____restriction_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "restriction",
  {
    dump__dump__du_name_ordered_restriction_0
  },
  {
    dump__dump__du_ptag_ordered_restriction_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  dump__dump__functor_number_map_restriction_0
};

#line 2105 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_restricted_dump_0_0 = {
  (MR_String) "show_restricted_dump",
  (MR_Integer) 0
};

#line 2111 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_restricted_dump_0_1 = {
  (MR_String) "show_complete_dump",
  (MR_Integer) 1
};

#line 2117 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_show_restricted_dump_0[2] = {
  &dump__dump__enum_functor_desc_show_restricted_dump_0_0,
  &dump__dump__enum_functor_desc_show_restricted_dump_0_1
};

#line 2123 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_show_restricted_dump_0[2] = {
  &dump__dump__enum_functor_desc_show_restricted_dump_0_1,
  &dump__dump__enum_functor_desc_show_restricted_dump_0_0
};

#line 2129 "dump.c"
static const MR_Integer dump__dump__functor_number_map_show_restricted_dump_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2135 "dump.c"
const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_show_restricted_dump_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____show_restricted_dump_0_0_10001)),
  ((MR_Box) (dump____Compare____show_restricted_dump_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "show_restricted_dump",
  {
    dump__dump__enum_name_ordered_show_restricted_dump_0
  },
  {
    dump__dump__enum_value_ordered_show_restricted_dump_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  dump__dump__functor_number_map_show_restricted_dump_0
};

#line 2156 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_stats_0_0 = {
  (MR_String) "show_stats",
  (MR_Integer) 0
};

#line 2162 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_stats_0_1 = {
  (MR_String) "do_not_show_stats",
  (MR_Integer) 1
};

#line 2168 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_show_stats_0[2] = {
  &dump__dump__enum_functor_desc_show_stats_0_0,
  &dump__dump__enum_functor_desc_show_stats_0_1
};

#line 2174 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_show_stats_0[2] = {
  &dump__dump__enum_functor_desc_show_stats_0_1,
  &dump__dump__enum_functor_desc_show_stats_0_0
};

#line 2180 "dump.c"
static const MR_Integer dump__dump__functor_number_map_show_stats_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2186 "dump.c"
const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_show_stats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____show_stats_0_0_10001)),
  ((MR_Box) (dump____Compare____show_stats_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "show_stats",
  {
    dump__dump__enum_name_ordered_show_stats_0
  },
  {
    dump__dump__enum_value_ordered_show_stats_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  dump__dump__functor_number_map_show_stats_0
};

#line 2207 "dump.c"
static MR_bool MR_CALL 
dump____Unify____dump_cliques_0_0_10001(
#line 2210 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 2212 "dump.c"
  MR_Box dump__wrapper_arg_2)
#line 2214 "dump.c"
{
#line 2216 "dump.c"
  {
#line 2218 "dump.c"
    MR_bool dump__succeeded;

#line 2221 "dump.c"
    {
#line 2223 "dump.c"
      dump__succeeded = dump____Unify____dump_cliques_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
#line 2226 "dump.c"
    return dump__succeeded;
#line 2228 "dump.c"
  }
#line 2230 "dump.c"
}

#line 2233 "dump.c"
static void MR_CALL 
dump____Compare____dump_cliques_0_0_10001(
#line 2236 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 2238 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 2240 "dump.c"
  MR_Box dump__wrapper_arg_3)
#line 2242 "dump.c"
{
#line 2244 "dump.c"
  {
#line 2246 "dump.c"
    MR_Word dump__conv0_HeadVar__1_1;

#line 2249 "dump.c"
    {
#line 2251 "dump.c"
      dump____Compare____dump_cliques_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
#line 2254 "dump.c"
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
#line 2256 "dump.c"
  }
#line 2258 "dump.c"
}

#line 2261 "dump.c"
static MR_bool MR_CALL 
dump____Unify____dump_options_0_0_10001(
#line 2264 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 2266 "dump.c"
  MR_Box dump__wrapper_arg_2)
#line 2268 "dump.c"
{
#line 2270 "dump.c"
  {
#line 2272 "dump.c"
    MR_bool dump__succeeded;

#line 2275 "dump.c"
    {
#line 2277 "dump.c"
      dump__succeeded = dump____Unify____dump_options_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
#line 2280 "dump.c"
    return dump__succeeded;
#line 2282 "dump.c"
  }
#line 2284 "dump.c"
}

#line 2287 "dump.c"
static void MR_CALL 
dump____Compare____dump_options_0_0_10001(
#line 2290 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 2292 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 2294 "dump.c"
  MR_Box dump__wrapper_arg_3)
#line 2296 "dump.c"
{
#line 2298 "dump.c"
  {
#line 2300 "dump.c"
    MR_Word dump__conv0_HeadVar__1_1;

#line 2303 "dump.c"
    {
#line 2305 "dump.c"
      dump____Compare____dump_options_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
#line 2308 "dump.c"
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
#line 2310 "dump.c"
  }
#line 2312 "dump.c"
}

#line 2315 "dump.c"
static MR_bool MR_CALL 
dump____Unify____dump_prop_measurements_0_0_10001(
#line 2318 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 2320 "dump.c"
  MR_Box dump__wrapper_arg_2)
#line 2322 "dump.c"
{
#line 2324 "dump.c"
  {
#line 2326 "dump.c"
    MR_bool dump__succeeded;

#line 2329 "dump.c"
    {
#line 2331 "dump.c"
      dump__succeeded = dump____Unify____dump_prop_measurements_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
#line 2334 "dump.c"
    return dump__succeeded;
#line 2336 "dump.c"
  }
#line 2338 "dump.c"
}

#line 2341 "dump.c"
static void MR_CALL 
dump____Compare____dump_prop_measurements_0_0_10001(
#line 2344 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 2346 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 2348 "dump.c"
  MR_Box dump__wrapper_arg_3)
#line 2350 "dump.c"
{
#line 2352 "dump.c"
  {
#line 2354 "dump.c"
    MR_Word dump__conv0_HeadVar__1_1;

#line 2357 "dump.c"
    {
#line 2359 "dump.c"
      dump____Compare____dump_prop_measurements_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
#line 2362 "dump.c"
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
#line 2364 "dump.c"
  }
#line 2366 "dump.c"
}

#line 2369 "dump.c"
static MR_bool MR_CALL 
dump____Unify____dump_rev_links_0_0_10001(
#line 2372 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 2374 "dump.c"
  MR_Box dump__wrapper_arg_2)
#line 2376 "dump.c"
{
#line 2378 "dump.c"
  {
#line 2380 "dump.c"
    MR_bool dump__succeeded;

#line 2383 "dump.c"
    {
#line 2385 "dump.c"
      dump__succeeded = dump____Unify____dump_rev_links_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
#line 2388 "dump.c"
    return dump__succeeded;
#line 2390 "dump.c"
  }
#line 2392 "dump.c"
}

#line 2395 "dump.c"
static void MR_CALL 
dump____Compare____dump_rev_links_0_0_10001(
#line 2398 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 2400 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 2402 "dump.c"
  MR_Box dump__wrapper_arg_3)
#line 2404 "dump.c"
{
#line 2406 "dump.c"
  {
#line 2408 "dump.c"
    MR_Word dump__conv0_HeadVar__1_1;

#line 2411 "dump.c"
    {
#line 2413 "dump.c"
      dump____Compare____dump_rev_links_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
#line 2416 "dump.c"
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
#line 2418 "dump.c"
  }
#line 2420 "dump.c"
}

#line 2423 "dump.c"
static MR_bool MR_CALL 
dump____Unify____dumpable_array_0_0_10001(
#line 2426 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 2428 "dump.c"
  MR_Box dump__wrapper_arg_2)
#line 2430 "dump.c"
{
#line 2432 "dump.c"
  {
#line 2434 "dump.c"
    MR_bool dump__succeeded;

#line 2437 "dump.c"
    {
#line 2439 "dump.c"
      dump__succeeded = dump____Unify____dumpable_array_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
#line 2442 "dump.c"
    return dump__succeeded;
#line 2444 "dump.c"
  }
#line 2446 "dump.c"
}

#line 2449 "dump.c"
static void MR_CALL 
dump____Compare____dumpable_array_0_0_10001(
#line 2452 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 2454 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 2456 "dump.c"
  MR_Box dump__wrapper_arg_3)
#line 2458 "dump.c"
{
#line 2460 "dump.c"
  {
#line 2462 "dump.c"
    MR_Word dump__conv0_HeadVar__1_1;

#line 2465 "dump.c"
    {
#line 2467 "dump.c"
      dump____Compare____dumpable_array_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
#line 2470 "dump.c"
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
#line 2472 "dump.c"
  }
#line 2474 "dump.c"
}

#line 2477 "dump.c"
static MR_bool MR_CALL 
dump____Unify____restriction_0_0_10001(
#line 2480 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 2482 "dump.c"
  MR_Box dump__wrapper_arg_2)
#line 2484 "dump.c"
{
#line 2486 "dump.c"
  {
#line 2488 "dump.c"
    MR_bool dump__succeeded;

#line 2491 "dump.c"
    {
#line 2493 "dump.c"
      dump__succeeded = dump____Unify____restriction_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
#line 2496 "dump.c"
    return dump__succeeded;
#line 2498 "dump.c"
  }
#line 2500 "dump.c"
}

#line 2503 "dump.c"
static void MR_CALL 
dump____Compare____restriction_0_0_10001(
#line 2506 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 2508 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 2510 "dump.c"
  MR_Box dump__wrapper_arg_3)
#line 2512 "dump.c"
{
#line 2514 "dump.c"
  {
#line 2516 "dump.c"
    MR_Word dump__conv0_HeadVar__1_1;

#line 2519 "dump.c"
    {
#line 2521 "dump.c"
      dump____Compare____restriction_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
#line 2524 "dump.c"
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
#line 2526 "dump.c"
  }
#line 2528 "dump.c"
}

#line 2531 "dump.c"
static MR_bool MR_CALL 
dump____Unify____show_restricted_dump_0_0_10001(
#line 2534 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 2536 "dump.c"
  MR_Box dump__wrapper_arg_2)
#line 2538 "dump.c"
{
#line 2540 "dump.c"
  {
#line 2542 "dump.c"
    MR_bool dump__succeeded;

#line 2545 "dump.c"
    {
#line 2547 "dump.c"
      dump__succeeded = dump____Unify____show_restricted_dump_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
#line 2550 "dump.c"
    return dump__succeeded;
#line 2552 "dump.c"
  }
#line 2554 "dump.c"
}

#line 2557 "dump.c"
static void MR_CALL 
dump____Compare____show_restricted_dump_0_0_10001(
#line 2560 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 2562 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 2564 "dump.c"
  MR_Box dump__wrapper_arg_3)
#line 2566 "dump.c"
{
#line 2568 "dump.c"
  {
#line 2570 "dump.c"
    MR_Word dump__conv0_HeadVar__1_1;

#line 2573 "dump.c"
    {
#line 2575 "dump.c"
      dump____Compare____show_restricted_dump_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
#line 2578 "dump.c"
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
#line 2580 "dump.c"
  }
#line 2582 "dump.c"
}

#line 2585 "dump.c"
static MR_bool MR_CALL 
dump____Unify____show_stats_0_0_10001(
#line 2588 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 2590 "dump.c"
  MR_Box dump__wrapper_arg_2)
#line 2592 "dump.c"
{
#line 2594 "dump.c"
  {
#line 2596 "dump.c"
    MR_bool dump__succeeded;

#line 2599 "dump.c"
    {
#line 2601 "dump.c"
      dump__succeeded = dump____Unify____show_stats_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
#line 2604 "dump.c"
    return dump__succeeded;
#line 2606 "dump.c"
  }
#line 2608 "dump.c"
}

#line 2611 "dump.c"
static void MR_CALL 
dump____Compare____show_stats_0_0_10001(
#line 2614 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 2616 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 2618 "dump.c"
  MR_Box dump__wrapper_arg_3)
#line 2620 "dump.c"
{
#line 2622 "dump.c"
  {
#line 2624 "dump.c"
    MR_Word dump__conv0_HeadVar__1_1;

#line 2627 "dump.c"
    {
#line 2629 "dump.c"
      dump____Compare____show_stats_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
#line 2632 "dump.c"
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
#line 2634 "dump.c"
  }
#line 2636 "dump.c"
}

#line 272 "dump.m"
static void MR_CALL 
dump__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
#line 272 "dump.m"
  MR_ArrayPtr dump__ProcStatics_8,
#line 272 "dump.m"
  MR_Word dump__ProcDynamic_10,
#line 272 "dump.m"
  MR_Word dump__STATE_VARIABLE_PS_Ptrs_0_16,
#line 272 "dump.m"
  MR_Word * dump__STATE_VARIABLE_PS_Ptrs_17,
#line 272 "dump.m"
  MR_Word dump__STATE_VARIABLE_CSS_Ptrs_0_18,
#line 272 "dump.m"
  MR_Word * dump__STATE_VARIABLE_CSS_Ptrs_19)
#line 272 "dump.m"
{
#line 277 "dump.m"
  {
#line 277 "dump.m"
    MR_bool dump__succeeded;
#line 277 "dump.m"
    MR_Word dump__TypeCtorInfo_37_37;
#line 277 "dump.m"
    MR_Word dump__ProcStaticPtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcDynamic_10, (MR_Integer) 0)));
#line 277 "dump.m"
    MR_Word dump__ProcStatic_14;
#line 277 "dump.m"
    MR_Word dump__CSSs_15;
#line 277 "dump.m"
    MR_ArrayPtr dump__V_21_21;
#line 278 "dump.m"
    MR_ArrayPtr dump__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__ProcDynamic_10, (MR_Integer) 1)));
#line 278 "dump.m"
    MR_Word dump__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcDynamic_10, (MR_Integer) 2)));
#line 281 "dump.m"
    MR_Word dump__V_25_25;
#line 281 "dump.m"
    MR_String dump__V_26_26;
#line 281 "dump.m"
    MR_String dump__V_27_27;
#line 281 "dump.m"
    MR_String dump__V_28_28;
#line 281 "dump.m"
    MR_String dump__V_29_29;
#line 281 "dump.m"
    MR_String dump__V_30_30;
#line 281 "dump.m"
    MR_Integer dump__V_31_31;
#line 281 "dump.m"
    MR_Word dump__V_32_32;
#line 281 "dump.m"
    MR_ArrayPtr dump__V_33_33;
#line 281 "dump.m"
    MR_Word dump__V_34_34;
#line 281 "dump.m"
    MR_Word dump__V_35_35;

#line 279 "dump.m"
    {
#line 279 "dump.m"
      mercury__set__insert_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, ((MR_Box) (dump__ProcStaticPtr_13)), dump__STATE_VARIABLE_PS_Ptrs_0_16, dump__STATE_VARIABLE_PS_Ptrs_17);
    }
#line 280 "dump.m"
    {
#line 280 "dump.m"
      profile__lookup_proc_statics_3_p_0(dump__ProcStatics_8, dump__ProcStaticPtr_13, &dump__ProcStatic_14);
    }
#line 2707 "dump.c"
    dump__TypeCtorInfo_37_37 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
#line 281 "dump.m"
    dump__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 0)));
#line 281 "dump.m"
    dump__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 1)));
#line 281 "dump.m"
    dump__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 2)));
#line 281 "dump.m"
    dump__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 3)));
#line 281 "dump.m"
    dump__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 4)));
#line 281 "dump.m"
    dump__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 5)));
#line 281 "dump.m"
    dump__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 6)));
#line 281 "dump.m"
    dump__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 7)));
#line 281 "dump.m"
    dump__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 8)));
#line 281 "dump.m"
    dump__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 9)));
#line 281 "dump.m"
    dump__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 10)));
#line 281 "dump.m"
    dump__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 11)));
#line 281 "dump.m"
    {
#line 281 "dump.m"
      dump__CSSs_15 = mercury__array__to_list_1_f_0(dump__TypeCtorInfo_37_37, (MR_ArrayPtr) dump__V_21_21);
    }
#line 282 "dump.m"
    {
#line 282 "dump.m"
      mercury__set__insert_list_3_p_0(dump__TypeCtorInfo_37_37, dump__CSSs_15, dump__STATE_VARIABLE_CSS_Ptrs_0_18, dump__STATE_VARIABLE_CSS_Ptrs_19);
#line 282 "dump.m"
      return;
    }
#line 277 "dump.m"
  }
#line 272 "dump.m"
}

#line 872 "dump.m"
static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__872__1_2_p_0(
#line 872 "dump.m"
  MR_Integer dump__CSSOwnMax_20,
#line 872 "dump.m"
  MR_Integer dump__CSSDescMax_21)
#line 872 "dump.m"
{
#line 872 "dump.m"
  {
#line 872 "dump.m"
    MR_bool dump__succeeded = (dump__CSSOwnMax_20 == dump__CSSDescMax_21);

#line 872 "dump.m"
    return dump__succeeded;
#line 872 "dump.m"
  }
#line 872 "dump.m"
}

#line 863 "dump.m"
static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__863__1_2_p_0(
#line 863 "dump.m"
  MR_Integer dump__PSOwnMax_16,
#line 863 "dump.m"
  MR_Integer dump__PSDescMax_17)
#line 863 "dump.m"
{
#line 863 "dump.m"
  {
#line 863 "dump.m"
    MR_bool dump__succeeded = (dump__PSOwnMax_16 == dump__PSDescMax_17);

#line 863 "dump.m"
    return dump__succeeded;
#line 863 "dump.m"
  }
#line 863 "dump.m"
}

#line 854 "dump.m"
static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__854__1_2_p_0(
#line 854 "dump.m"
  MR_Integer dump__CSDMax_12,
#line 854 "dump.m"
  MR_Integer dump__CSDDescMax_13)
#line 854 "dump.m"
{
#line 854 "dump.m"
  {
#line 854 "dump.m"
    MR_bool dump__succeeded = (dump__CSDMax_12 == dump__CSDDescMax_13);

#line 854 "dump.m"
    return dump__succeeded;
#line 854 "dump.m"
  }
#line 854 "dump.m"
}

#line 845 "dump.m"
static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__845__1_2_p_0(
#line 845 "dump.m"
  MR_Integer dump__PDOwnMax_8,
#line 845 "dump.m"
  MR_Integer dump__PDDescMax_9)
#line 845 "dump.m"
{
#line 845 "dump.m"
  {
#line 845 "dump.m"
    MR_bool dump__succeeded = (dump__PDOwnMax_8 == dump__PDDescMax_9);

#line 845 "dump.m"
    return dump__succeeded;
#line 845 "dump.m"
  }
#line 845 "dump.m"
}

#line 61 "dump.m"
void MR_CALL 
dump____Compare____show_stats_0_0(
#line 61 "dump.m"
  MR_Word * dump__HeadVar__1_1,
#line 61 "dump.m"
  MR_Word dump__HeadVar__2_2,
#line 61 "dump.m"
  MR_Word dump__HeadVar__3_3)
#line 61 "dump.m"
{
#line 61 "dump.m"
  {
#line 61 "dump.m"
    MR_bool dump__succeeded;
#line 61 "dump.m"
    MR_Integer dump__Cast_HeadVar1_4 = (MR_Integer) dump__HeadVar__2_2;
#line 61 "dump.m"
    MR_Integer dump__Cast_HeadVar2_5 = (MR_Integer) dump__HeadVar__3_3;

#line 61 "dump.m"
    {
#line 61 "dump.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(dump__HeadVar__1_1, dump__Cast_HeadVar1_4, dump__Cast_HeadVar2_5);
#line 61 "dump.m"
      return;
    }
#line 61 "dump.m"
  }
#line 61 "dump.m"
}

#line 61 "dump.m"
MR_bool MR_CALL 
dump____Unify____show_stats_0_0(
#line 61 "dump.m"
  MR_Word dump__HeadVar__2_1,
#line 61 "dump.m"
  MR_Word dump__HeadVar__2_2)
#line 61 "dump.m"
{
#line 2875 "dump.c"
  {
#line 2877 "dump.c"
    MR_bool dump__succeeded = (dump__HeadVar__2_1 == dump__HeadVar__2_2);

#line 2880 "dump.c"
    return dump__succeeded;
#line 2882 "dump.c"
  }
#line 61 "dump.m"
}

#line 45 "dump.m"
void MR_CALL 
dump____Compare____show_restricted_dump_0_0(
#line 45 "dump.m"
  MR_Word * dump__HeadVar__1_1,
#line 45 "dump.m"
  MR_Word dump__HeadVar__2_2,
#line 45 "dump.m"
  MR_Word dump__HeadVar__3_3)
#line 45 "dump.m"
{
#line 45 "dump.m"
  {
#line 45 "dump.m"
    MR_bool dump__succeeded;
#line 45 "dump.m"
    MR_Integer dump__Cast_HeadVar1_4 = (MR_Integer) dump__HeadVar__2_2;
#line 45 "dump.m"
    MR_Integer dump__Cast_HeadVar2_5 = (MR_Integer) dump__HeadVar__3_3;

#line 45 "dump.m"
    {
#line 45 "dump.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(dump__HeadVar__1_1, dump__Cast_HeadVar1_4, dump__Cast_HeadVar2_5);
#line 45 "dump.m"
      return;
    }
#line 45 "dump.m"
  }
#line 45 "dump.m"
}

#line 45 "dump.m"
MR_bool MR_CALL 
dump____Unify____show_restricted_dump_0_0(
#line 45 "dump.m"
  MR_Word dump__HeadVar__2_1,
#line 45 "dump.m"
  MR_Word dump__HeadVar__2_2)
#line 45 "dump.m"
{
#line 2928 "dump.c"
  {
#line 2930 "dump.c"
    MR_bool dump__succeeded = (dump__HeadVar__2_1 == dump__HeadVar__2_2);

#line 2933 "dump.c"
    return dump__succeeded;
#line 2935 "dump.c"
  }
#line 45 "dump.m"
}

#line 260 "dump.m"
static void MR_CALL 
dump____Compare____restriction_0_0(
#line 260 "dump.m"
  MR_Word * dump__HeadVar__1_1,
#line 260 "dump.m"
  MR_Word dump__HeadVar__2_2,
#line 260 "dump.m"
  MR_Word dump__HeadVar__3_3)
#line 260 "dump.m"
{
#line 260 "dump.m"
  {
#line 260 "dump.m"
    MR_bool dump__succeeded;
#line 260 "dump.m"
    MR_Integer dump__CastX_13 = (MR_Integer) dump__HeadVar__2_2;
#line 260 "dump.m"
    MR_Integer dump__CastY_14 = (MR_Integer) dump__HeadVar__3_3;

#line 260 "dump.m"
    dump__succeeded = (dump__CastX_13 == dump__CastY_14);
#line 260 "dump.m"
    if (dump__succeeded)
#line 2964 "dump.c"
      *dump__HeadVar__1_1 = (MR_Integer) 0;
#line 260 "dump.m"
    else
#line 260 "dump.m"
      if ((dump__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 260 "dump.m"
        if ((dump__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 260 "dump.m"
          *dump__HeadVar__1_1 = (MR_Integer) 0;
#line 260 "dump.m"
        else
#line 2976 "dump.c"
          *dump__HeadVar__1_1 = (MR_Integer) 1;
#line 260 "dump.m"
      else
#line 260 "dump.m"
        {
#line 260 "dump.m"
          MR_Word dump__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__2_2, (MR_Integer) 1)));
#line 260 "dump.m"
          MR_Word dump__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__2_2, (MR_Integer) 0)));

#line 260 "dump.m"
          if ((dump__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2989 "dump.c"
            *dump__HeadVar__1_1 = (MR_Integer) 2;
#line 260 "dump.m"
          else
#line 260 "dump.m"
            {
#line 260 "dump.m"
              MR_Word dump__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__3_3, (MR_Integer) 0)));
#line 260 "dump.m"
              MR_Word dump__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__3_3, (MR_Integer) 1)));
#line 260 "dump.m"
              MR_Word dump__V_12_12;

#line 260 "dump.m"
              {
#line 260 "dump.m"
                mercury__builtin__compare_3_p_0((MR_Word) &dump_scalar_common_1[0], &dump__V_12_12, ((MR_Box) (dump__V_18_18)), ((MR_Box) (dump__V_10_10)));
              }
#line 3007 "dump.c"
              dump__succeeded = (dump__V_12_12 == (MR_Integer) 0);
#line 260 "dump.m"
              dump__succeeded = !(dump__succeeded);
#line 260 "dump.m"
              if (dump__succeeded)
#line 260 "dump.m"
                *dump__HeadVar__1_1 = dump__V_12_12;
#line 260 "dump.m"
              else
#line 260 "dump.m"
                {
#line 260 "dump.m"
                  {
#line 260 "dump.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &dump_scalar_common_1[1], dump__HeadVar__1_1, ((MR_Box) (dump__V_17_17)), ((MR_Box) (dump__V_11_11)));
#line 260 "dump.m"
                    return;
                  }
#line 260 "dump.m"
                }
#line 260 "dump.m"
            }
#line 260 "dump.m"
        }
#line 260 "dump.m"
  }
#line 260 "dump.m"
}

#line 260 "dump.m"
static MR_bool MR_CALL 
dump____Unify____restriction_0_0(
#line 260 "dump.m"
  MR_Word dump__HeadVar__1_1,
#line 260 "dump.m"
  MR_Word dump__HeadVar__2_2)
#line 260 "dump.m"
{
#line 260 "dump.m"
  {
#line 260 "dump.m"
    MR_bool dump__succeeded;
#line 260 "dump.m"
    MR_Integer dump__CastX_9 = (MR_Integer) dump__HeadVar__1_1;
#line 260 "dump.m"
    MR_Integer dump__CastY_10 = (MR_Integer) dump__HeadVar__2_2;

#line 260 "dump.m"
    dump__succeeded = (dump__CastX_9 == dump__CastY_10);
#line 260 "dump.m"
    if (dump__succeeded)
#line 260 "dump.m"
      dump__succeeded = MR_TRUE;
#line 260 "dump.m"
    else
#line 260 "dump.m"
      if ((dump__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 260 "dump.m"
        {
#line 260 "dump.m"
          MR_Integer dump__CastX_3 = (MR_Integer) dump__HeadVar__1_1;
#line 260 "dump.m"
          MR_Integer dump__CastY_4 = (MR_Integer) dump__HeadVar__2_2;

#line 260 "dump.m"
          dump__succeeded = (dump__CastY_4 == dump__CastX_3);
#line 260 "dump.m"
        }
#line 260 "dump.m"
      else
#line 260 "dump.m"
        {
#line 260 "dump.m"
          MR_Word dump__TypeInfo_11_11;
#line 260 "dump.m"
          MR_Word dump__TypeInfo_12_12;
#line 260 "dump.m"
          MR_Word dump__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__1_1, (MR_Integer) 0)));
#line 260 "dump.m"
          MR_Word dump__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__1_1, (MR_Integer) 1)));
#line 260 "dump.m"
          MR_Word dump__V_7_7;
#line 260 "dump.m"
          MR_Word dump__V_8_8;

#line 260 "dump.m"
          dump__succeeded = ((MR_tag((MR_Word) dump__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 260 "dump.m"
          if (dump__succeeded)
#line 260 "dump.m"
            {
#line 260 "dump.m"
              dump__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__2_2, (MR_Integer) 0)));
#line 260 "dump.m"
              dump__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__2_2, (MR_Integer) 1)));
#line 3103 "dump.c"
              dump__TypeInfo_11_11 = (MR_Word) &dump_scalar_common_1[0];
#line 3105 "dump.c"
              {
#line 3107 "dump.c"
                dump__succeeded = mercury__builtin__unify_2_p_0(dump__TypeInfo_11_11, ((MR_Box) (dump__V_5_5)), ((MR_Box) (dump__V_7_7)));
              }
#line 260 "dump.m"
              if (dump__succeeded)
#line 260 "dump.m"
                {
#line 3114 "dump.c"
                  dump__TypeInfo_12_12 = (MR_Word) &dump_scalar_common_1[1];
#line 3116 "dump.c"
                  {
#line 3118 "dump.c"
                    return dump__succeeded = mercury__builtin__unify_2_p_0(dump__TypeInfo_12_12, ((MR_Box) (dump__V_6_6)), ((MR_Box) (dump__V_8_8)));
                  }
#line 260 "dump.m"
                }
#line 260 "dump.m"
            }
#line 260 "dump.m"
        }
#line 260 "dump.m"
    return dump__succeeded;
#line 260 "dump.m"
  }
#line 260 "dump.m"
}

#line 52 "dump.m"
void MR_CALL 
dump____Compare____dumpable_array_0_0(
#line 52 "dump.m"
  MR_Word * dump__HeadVar__1_1,
#line 52 "dump.m"
  MR_Word dump__HeadVar__2_2,
#line 52 "dump.m"
  MR_Word dump__HeadVar__3_3)
#line 52 "dump.m"
{
#line 52 "dump.m"
  {
#line 52 "dump.m"
    MR_bool dump__succeeded;
#line 52 "dump.m"
    MR_Integer dump__Cast_HeadVar1_4 = (MR_Integer) dump__HeadVar__2_2;
#line 52 "dump.m"
    MR_Integer dump__Cast_HeadVar2_5 = (MR_Integer) dump__HeadVar__3_3;

#line 52 "dump.m"
    {
#line 52 "dump.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(dump__HeadVar__1_1, dump__Cast_HeadVar1_4, dump__Cast_HeadVar2_5);
#line 52 "dump.m"
      return;
    }
#line 52 "dump.m"
  }
#line 52 "dump.m"
}

#line 52 "dump.m"
MR_bool MR_CALL 
dump____Unify____dumpable_array_0_0(
#line 52 "dump.m"
  MR_Word dump__HeadVar__2_1,
#line 52 "dump.m"
  MR_Word dump__HeadVar__2_2)
#line 52 "dump.m"
{
#line 3175 "dump.c"
  {
#line 3177 "dump.c"
    MR_bool dump__succeeded = (dump__HeadVar__2_1 == dump__HeadVar__2_2);

#line 3180 "dump.c"
    return dump__succeeded;
#line 3182 "dump.c"
  }
#line 52 "dump.m"
}

#line 72 "dump.m"
void MR_CALL 
dump____Compare____dump_rev_links_0_0(
#line 72 "dump.m"
  MR_Word * dump__HeadVar__1_1,
#line 72 "dump.m"
  MR_Word dump__HeadVar__2_2,
#line 72 "dump.m"
  MR_Word dump__HeadVar__3_3)
#line 72 "dump.m"
{
#line 72 "dump.m"
  {
#line 72 "dump.m"
    MR_bool dump__succeeded;
#line 72 "dump.m"
    MR_Integer dump__Cast_HeadVar1_4 = (MR_Integer) dump__HeadVar__2_2;
#line 72 "dump.m"
    MR_Integer dump__Cast_HeadVar2_5 = (MR_Integer) dump__HeadVar__3_3;

#line 72 "dump.m"
    {
#line 72 "dump.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(dump__HeadVar__1_1, dump__Cast_HeadVar1_4, dump__Cast_HeadVar2_5);
#line 72 "dump.m"
      return;
    }
#line 72 "dump.m"
  }
#line 72 "dump.m"
}

#line 72 "dump.m"
MR_bool MR_CALL 
dump____Unify____dump_rev_links_0_0(
#line 72 "dump.m"
  MR_Word dump__HeadVar__2_1,
#line 72 "dump.m"
  MR_Word dump__HeadVar__2_2)
#line 72 "dump.m"
{
#line 3228 "dump.c"
  {
#line 3230 "dump.c"
    MR_bool dump__succeeded = (dump__HeadVar__2_1 == dump__HeadVar__2_2);

#line 3233 "dump.c"
    return dump__succeeded;
#line 3235 "dump.c"
  }
#line 72 "dump.m"
}

#line 76 "dump.m"
void MR_CALL 
dump____Compare____dump_prop_measurements_0_0(
#line 76 "dump.m"
  MR_Word * dump__HeadVar__1_1,
#line 76 "dump.m"
  MR_Word dump__HeadVar__2_2,
#line 76 "dump.m"
  MR_Word dump__HeadVar__3_3)
#line 76 "dump.m"
{
#line 76 "dump.m"
  {
#line 76 "dump.m"
    MR_bool dump__succeeded;
#line 76 "dump.m"
    MR_Integer dump__Cast_HeadVar1_4 = (MR_Integer) dump__HeadVar__2_2;
#line 76 "dump.m"
    MR_Integer dump__Cast_HeadVar2_5 = (MR_Integer) dump__HeadVar__3_3;

#line 76 "dump.m"
    {
#line 76 "dump.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(dump__HeadVar__1_1, dump__Cast_HeadVar1_4, dump__Cast_HeadVar2_5);
#line 76 "dump.m"
      return;
    }
#line 76 "dump.m"
  }
#line 76 "dump.m"
}

#line 76 "dump.m"
MR_bool MR_CALL 
dump____Unify____dump_prop_measurements_0_0(
#line 76 "dump.m"
  MR_Word dump__HeadVar__2_1,
#line 76 "dump.m"
  MR_Word dump__HeadVar__2_2)
#line 76 "dump.m"
{
#line 3281 "dump.c"
  {
#line 3283 "dump.c"
    MR_bool dump__succeeded = (dump__HeadVar__2_1 == dump__HeadVar__2_2);

#line 3286 "dump.c"
    return dump__succeeded;
#line 3288 "dump.c"
  }
#line 76 "dump.m"
}

#line 31 "dump.m"
void MR_CALL 
dump____Compare____dump_options_0_0(
#line 31 "dump.m"
  MR_Word * dump__HeadVar__1_1,
#line 31 "dump.m"
  MR_Word dump__HeadVar__2_2,
#line 31 "dump.m"
  MR_Word dump__HeadVar__3_3)
#line 31 "dump.m"
{
#line 31 "dump.m"
  {
#line 31 "dump.m"
    MR_bool dump__succeeded;
#line 31 "dump.m"
    MR_Integer dump__CastX_21 = (MR_Integer) dump__HeadVar__2_2;
#line 31 "dump.m"
    MR_Integer dump__CastY_22 = (MR_Integer) dump__HeadVar__3_3;

#line 31 "dump.m"
    dump__succeeded = (dump__CastX_21 == dump__CastY_22);
#line 31 "dump.m"
    if (dump__succeeded)
#line 3317 "dump.c"
      *dump__HeadVar__1_1 = (MR_Integer) 0;
#line 31 "dump.m"
    else
#line 31 "dump.m"
      {
#line 31 "dump.m"
        MR_Word dump__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 0)));
#line 31 "dump.m"
        MR_Word dump__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 1)));
#line 31 "dump.m"
        MR_Word dump__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 31 "dump.m"
        MR_Word dump__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 31 "dump.m"
        MR_Word dump__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 31 "dump.m"
        MR_Word dump__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 31 "dump.m"
        MR_Word dump__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__3_3, (MR_Integer) 0)));
#line 31 "dump.m"
        MR_Word dump__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__3_3, (MR_Integer) 1)));
#line 31 "dump.m"
        MR_Word dump__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__3_3, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 31 "dump.m"
        MR_Word dump__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 31 "dump.m"
        MR_Word dump__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 31 "dump.m"
        MR_Word dump__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 31 "dump.m"
        MR_Word dump__V_16_16;
#line 31 "dump.m"
        MR_Integer dump__V_29_29 = (MR_Integer) dump__V_4_4;
#line 31 "dump.m"
        MR_Integer dump__V_30_30 = (MR_Integer) dump__V_10_10;

#line 31 "dump.m"
        {
#line 31 "dump.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&dump__V_16_16, dump__V_29_29, dump__V_30_30);
        }
#line 3359 "dump.c"
        dump__succeeded = (dump__V_16_16 == (MR_Integer) 0);
#line 31 "dump.m"
        dump__succeeded = !(dump__succeeded);
#line 31 "dump.m"
        if (dump__succeeded)
#line 31 "dump.m"
          *dump__HeadVar__1_1 = dump__V_16_16;
#line 31 "dump.m"
        else
#line 31 "dump.m"
          {
#line 31 "dump.m"
            MR_Word dump__V_17_17;

#line 31 "dump.m"
            {
#line 31 "dump.m"
              mercury__builtin__compare_3_p_0((MR_Word) &dump_scalar_common_1[5], &dump__V_17_17, ((MR_Box) (dump__V_5_5)), ((MR_Box) (dump__V_11_11)));
            }
#line 3379 "dump.c"
            dump__succeeded = (dump__V_17_17 == (MR_Integer) 0);
#line 31 "dump.m"
            dump__succeeded = !(dump__succeeded);
#line 31 "dump.m"
            if (dump__succeeded)
#line 31 "dump.m"
              *dump__HeadVar__1_1 = dump__V_17_17;
#line 31 "dump.m"
            else
#line 31 "dump.m"
              {
#line 31 "dump.m"
                MR_Word dump__V_18_18;
#line 31 "dump.m"
                MR_Integer dump__V_31_31 = (MR_Integer) dump__V_6_6;
#line 31 "dump.m"
                MR_Integer dump__V_32_32 = (MR_Integer) dump__V_12_12;

#line 31 "dump.m"
                {
#line 31 "dump.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&dump__V_18_18, dump__V_31_31, dump__V_32_32);
                }
#line 3403 "dump.c"
                dump__succeeded = (dump__V_18_18 == (MR_Integer) 0);
#line 31 "dump.m"
                dump__succeeded = !(dump__succeeded);
#line 31 "dump.m"
                if (dump__succeeded)
#line 31 "dump.m"
                  *dump__HeadVar__1_1 = dump__V_18_18;
#line 31 "dump.m"
                else
#line 31 "dump.m"
                  {
#line 31 "dump.m"
                    MR_Word dump__V_19_19;
#line 31 "dump.m"
                    MR_Integer dump__V_33_33 = (MR_Integer) dump__V_7_7;
#line 31 "dump.m"
                    MR_Integer dump__V_34_34 = (MR_Integer) dump__V_13_13;

#line 31 "dump.m"
                    {
#line 31 "dump.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&dump__V_19_19, dump__V_33_33, dump__V_34_34);
                    }
#line 3427 "dump.c"
                    dump__succeeded = (dump__V_19_19 == (MR_Integer) 0);
#line 31 "dump.m"
                    dump__succeeded = !(dump__succeeded);
#line 31 "dump.m"
                    if (dump__succeeded)
#line 31 "dump.m"
                      *dump__HeadVar__1_1 = dump__V_19_19;
#line 31 "dump.m"
                    else
#line 31 "dump.m"
                      {
#line 31 "dump.m"
                        MR_Word dump__V_20_20;
#line 31 "dump.m"
                        MR_Integer dump__V_35_35 = (MR_Integer) dump__V_8_8;
#line 31 "dump.m"
                        MR_Integer dump__V_36_36 = (MR_Integer) dump__V_14_14;

#line 31 "dump.m"
                        {
#line 31 "dump.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&dump__V_20_20, dump__V_35_35, dump__V_36_36);
                        }
#line 3451 "dump.c"
                        dump__succeeded = (dump__V_20_20 == (MR_Integer) 0);
#line 31 "dump.m"
                        dump__succeeded = !(dump__succeeded);
#line 31 "dump.m"
                        if (dump__succeeded)
#line 31 "dump.m"
                          *dump__HeadVar__1_1 = dump__V_20_20;
#line 31 "dump.m"
                        else
#line 31 "dump.m"
                          {
#line 31 "dump.m"
                            MR_Integer dump__V_37_37 = (MR_Integer) dump__V_9_9;
#line 31 "dump.m"
                            MR_Integer dump__V_38_38 = (MR_Integer) dump__V_15_15;

#line 31 "dump.m"
                            {
#line 31 "dump.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(dump__HeadVar__1_1, dump__V_37_37, dump__V_38_38);
#line 31 "dump.m"
                              return;
                            }
#line 31 "dump.m"
                          }
#line 31 "dump.m"
                      }
#line 31 "dump.m"
                  }
#line 31 "dump.m"
              }
#line 31 "dump.m"
          }
#line 31 "dump.m"
      }
#line 31 "dump.m"
  }
#line 31 "dump.m"
}

#line 31 "dump.m"
MR_bool MR_CALL 
dump____Unify____dump_options_0_0(
#line 31 "dump.m"
  MR_Word dump__HeadVar__1_1,
#line 31 "dump.m"
  MR_Word dump__HeadVar__2_2)
#line 31 "dump.m"
{
#line 31 "dump.m"
  {
#line 31 "dump.m"
    MR_bool dump__succeeded;
#line 31 "dump.m"
    MR_Integer dump__CastX_15 = (MR_Integer) dump__HeadVar__1_1;
#line 31 "dump.m"
    MR_Integer dump__CastY_16 = (MR_Integer) dump__HeadVar__2_2;

#line 31 "dump.m"
    dump__succeeded = (dump__CastX_15 == dump__CastY_16);
#line 31 "dump.m"
    if (dump__succeeded)
#line 31 "dump.m"
      dump__succeeded = MR_TRUE;
#line 31 "dump.m"
    else
#line 31 "dump.m"
      {
#line 31 "dump.m"
        MR_Word dump__TypeInfo_17_17;
#line 31 "dump.m"
        MR_Word dump__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__1_1, (MR_Integer) 0)));
#line 31 "dump.m"
        MR_Word dump__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__1_1, (MR_Integer) 1)));
#line 31 "dump.m"
        MR_Word dump__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__1_1, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 31 "dump.m"
        MR_Word dump__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 31 "dump.m"
        MR_Word dump__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 31 "dump.m"
        MR_Word dump__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 31 "dump.m"
        MR_Word dump__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 0)));
#line 31 "dump.m"
        MR_Word dump__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 1)));
#line 31 "dump.m"
        MR_Word dump__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 31 "dump.m"
        MR_Word dump__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 31 "dump.m"
        MR_Word dump__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 31 "dump.m"
        MR_Word dump__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 3547 "dump.c"
        dump__succeeded = (dump__V_3_3 == dump__V_9_9);
#line 31 "dump.m"
        if (dump__succeeded)
#line 31 "dump.m"
          {
#line 3553 "dump.c"
            dump__TypeInfo_17_17 = (MR_Word) &dump_scalar_common_1[5];
#line 3555 "dump.c"
            {
#line 3557 "dump.c"
              dump__succeeded = mercury__builtin__unify_2_p_0(dump__TypeInfo_17_17, ((MR_Box) (dump__V_4_4)), ((MR_Box) (dump__V_10_10)));
            }
#line 31 "dump.m"
            if (dump__succeeded)
#line 31 "dump.m"
              {
#line 3564 "dump.c"
                dump__succeeded = (dump__V_5_5 == dump__V_11_11);
#line 31 "dump.m"
                if (dump__succeeded)
#line 31 "dump.m"
                  {
#line 3570 "dump.c"
                    dump__succeeded = (dump__V_6_6 == dump__V_12_12);
#line 31 "dump.m"
                    if (dump__succeeded)
#line 31 "dump.m"
                      {
#line 3576 "dump.c"
                        dump__succeeded = (dump__V_7_7 == dump__V_13_13);
#line 31 "dump.m"
                        if (dump__succeeded)
#line 3580 "dump.c"
                          dump__succeeded = (dump__V_8_8 == dump__V_14_14);
#line 31 "dump.m"
                      }
#line 31 "dump.m"
                  }
#line 31 "dump.m"
              }
#line 31 "dump.m"
          }
#line 31 "dump.m"
      }
#line 31 "dump.m"
    return dump__succeeded;
#line 31 "dump.m"
  }
#line 31 "dump.m"
}

#line 68 "dump.m"
void MR_CALL 
dump____Compare____dump_cliques_0_0(
#line 68 "dump.m"
  MR_Word * dump__HeadVar__1_1,
#line 68 "dump.m"
  MR_Word dump__HeadVar__2_2,
#line 68 "dump.m"
  MR_Word dump__HeadVar__3_3)
#line 68 "dump.m"
{
#line 68 "dump.m"
  {
#line 68 "dump.m"
    MR_bool dump__succeeded;
#line 68 "dump.m"
    MR_Integer dump__Cast_HeadVar1_4 = (MR_Integer) dump__HeadVar__2_2;
#line 68 "dump.m"
    MR_Integer dump__Cast_HeadVar2_5 = (MR_Integer) dump__HeadVar__3_3;

#line 68 "dump.m"
    {
#line 68 "dump.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(dump__HeadVar__1_1, dump__Cast_HeadVar1_4, dump__Cast_HeadVar2_5);
#line 68 "dump.m"
      return;
    }
#line 68 "dump.m"
  }
#line 68 "dump.m"
}

#line 68 "dump.m"
MR_bool MR_CALL 
dump____Unify____dump_cliques_0_0(
#line 68 "dump.m"
  MR_Word dump__HeadVar__2_1,
#line 68 "dump.m"
  MR_Word dump__HeadVar__2_2)
#line 68 "dump.m"
{
#line 3640 "dump.c"
  {
#line 3642 "dump.c"
    MR_bool dump__succeeded = (dump__HeadVar__2_1 == dump__HeadVar__2_2);

#line 3645 "dump.c"
    return dump__succeeded;
#line 3647 "dump.c"
  }
#line 68 "dump.m"
}

#line 964 "dump.m"
static MR_bool MR_CALL 
dump__should_dump_2_p_0(
#line 964 "dump.m"
  MR_Word dump__DumpOptions_3,
#line 964 "dump.m"
  MR_Word dump__What_4)
#line 964 "dump.m"
{
#line 966 "dump.m"
  {
#line 966 "dump.m"
    MR_bool dump__succeeded;
#line 966 "dump.m"
    MR_Word dump__Arrays_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_3, (MR_Integer) 1)));
#line 967 "dump.m"
    MR_Word dump__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_3, (MR_Integer) 0)));
#line 967 "dump.m"
    MR_Word dump__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_3, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 967 "dump.m"
    MR_Word dump__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_3, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 967 "dump.m"
    MR_Word dump__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 967 "dump.m"
    MR_Word dump__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 968 "dump.m"
    {
#line 968 "dump.m"
      return dump__succeeded = mercury__set__member_2_p_0((MR_Word) &dump__dump__type_ctor_info_dumpable_array_0, ((MR_Box) (dump__What_4)), dump__Arrays_5);
    }
#line 966 "dump.m"
    return dump__succeeded;
#line 966 "dump.m"
  }
#line 964 "dump.m"
}

#line 934 "dump.m"
static void MR_CALL 
dump__dump_own_and_desc_6_p_0(
#line 934 "dump.m"
  MR_String dump__Prefix_7,
#line 934 "dump.m"
  MR_Integer dump__Cur_8,
#line 934 "dump.m"
  MR_Word dump__Own_9,
#line 934 "dump.m"
  MR_Word dump__Desc_10)
#line 934 "dump.m"
{
#line 937 "dump.m"
  {
#line 937 "dump.m"
    MR_bool dump__succeeded;
#line 937 "dump.m"
    MR_Word dump__PrintedOwn_12;
#line 937 "dump.m"
    MR_Word dump__PrintedDesc_13;

#line 938 "dump.m"
    {
#line 938 "dump.m"
      dump__succeeded = measurements__is_zero_own_prof_info_1_p_0(dump__Own_9);
    }
#line 940 "dump.m"
    if (dump__succeeded)
#line 939 "dump.m"
      dump__PrintedOwn_12 = (MR_Integer) 0;
#line 940 "dump.m"
    else
#line 941 "dump.m"
      {
#line 941 "dump.m"
        MR_String dump__V_34_34;
#line 941 "dump.m"
        MR_String dump__V_35_35;
#line 941 "dump.m"
        MR_String dump__V_36_36;

#line 3732 "dump.c"
        {
#line 3734 "dump.c"
          dump__V_34_34 = mercury__string__int_to_string_1_f_0(dump__Cur_8);
        }
#line 3737 "dump.c"
        {
#line 3739 "dump.c"
          dump__V_35_35 = mercury__string__f_43_43_2_f_0(dump__V_34_34, (MR_String) " own:\n");
        }
#line 3742 "dump.c"
        {
#line 3744 "dump.c"
          dump__V_36_36 = mercury__string__f_43_43_2_f_0(dump__Prefix_7, dump__V_35_35);
        }
#line 3747 "dump.c"
        {
#line 3749 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_36_36);
        }
#line 942 "dump.m"
        {
#line 942 "dump.m"
          dump__dump_own_prof_info_3_p_0(dump__Own_9);
        }
#line 943 "dump.m"
        dump__PrintedOwn_12 = (MR_Integer) 1;
#line 941 "dump.m"
      }
#line 945 "dump.m"
    {
#line 945 "dump.m"
      dump__succeeded = measurements__is_zero_inherit_prof_info_1_p_0(dump__Desc_10);
    }
#line 947 "dump.m"
    if (dump__succeeded)
#line 946 "dump.m"
      dump__PrintedDesc_13 = (MR_Integer) 0;
#line 947 "dump.m"
    else
#line 948 "dump.m"
      {
#line 948 "dump.m"
        MR_String dump__V_38_38;
#line 948 "dump.m"
        MR_String dump__V_39_39;
#line 948 "dump.m"
        MR_String dump__V_40_40;
#line 948 "dump.m"
        MR_Integer dump__Quanta_45;
#line 948 "dump.m"
        MR_Integer dump__CallSeqs_46;
#line 948 "dump.m"
        MR_Integer dump__Allocs_47;
#line 948 "dump.m"
        MR_Integer dump__Words_48;

#line 3789 "dump.c"
        {
#line 3791 "dump.c"
          dump__V_38_38 = mercury__string__int_to_string_1_f_0(dump__Cur_8);
        }
#line 3794 "dump.c"
        {
#line 3796 "dump.c"
          dump__V_39_39 = mercury__string__f_43_43_2_f_0(dump__V_38_38, (MR_String) " inherit:\n");
        }
#line 3799 "dump.c"
        {
#line 3801 "dump.c"
          dump__V_40_40 = mercury__string__f_43_43_2_f_0(dump__Prefix_7, dump__V_39_39);
        }
#line 3804 "dump.c"
        {
#line 3806 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_40_40);
        }
#line 408 "dump.m"
        {
#line 408 "dump.m"
          dump__Quanta_45 = measurements__inherit_quanta_1_f_0(dump__Desc_10);
        }
#line 409 "dump.m"
        {
#line 409 "dump.m"
          dump__CallSeqs_46 = measurements__inherit_callseqs_1_f_0(dump__Desc_10);
        }
#line 410 "dump.m"
        {
#line 410 "dump.m"
          dump__Allocs_47 = measurements__inherit_allocs_1_f_0(dump__Desc_10);
        }
#line 411 "dump.m"
        {
#line 411 "dump.m"
          dump__Words_48 = measurements__inherit_words_1_f_0(dump__Desc_10);
        }
#line 412 "dump.m"
        dump__succeeded = (dump__Quanta_45 == (MR_Integer) 0);
#line 414 "dump.m"
        if (dump__succeeded)
#line 412 "dump.m"
          {
#line 412 "dump.m"
          }
#line 414 "dump.m"
        else
#line 415 "dump.m"
          {
#line 415 "dump.m"
            MR_String dump__V_70_70;
#line 415 "dump.m"
            MR_String dump__V_71_71;
#line 415 "dump.m"
            MR_String dump__V_73_73;

#line 3848 "dump.c"
            {
#line 3850 "dump.c"
              dump__V_70_70 = mercury__string__int_to_string_1_f_0(dump__Quanta_45);
            }
#line 3853 "dump.c"
            {
#line 3855 "dump.c"
              dump__V_71_71 = mercury__string__f_43_43_2_f_0(dump__V_70_70, (MR_String) "\n");
            }
#line 3858 "dump.c"
            {
#line 3860 "dump.c"
              dump__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) "\tquanta:\t\t", dump__V_71_71);
            }
#line 3863 "dump.c"
            {
#line 3865 "dump.c"
              mercury__io__write_string_3_p_0(dump__V_73_73);
            }
#line 415 "dump.m"
          }
#line 417 "dump.m"
        dump__succeeded = (dump__CallSeqs_46 == (MR_Integer) 0);
#line 419 "dump.m"
        if (dump__succeeded)
#line 417 "dump.m"
          {
#line 417 "dump.m"
          }
#line 419 "dump.m"
        else
#line 420 "dump.m"
          {
#line 420 "dump.m"
            MR_String dump__V_75_75;
#line 420 "dump.m"
            MR_String dump__V_76_76;
#line 420 "dump.m"
            MR_String dump__V_78_78;

#line 3889 "dump.c"
            {
#line 3891 "dump.c"
              dump__V_75_75 = mercury__string__int_to_string_1_f_0(dump__CallSeqs_46);
            }
#line 3894 "dump.c"
            {
#line 3896 "dump.c"
              dump__V_76_76 = mercury__string__f_43_43_2_f_0(dump__V_75_75, (MR_String) "\n");
            }
#line 3899 "dump.c"
            {
#line 3901 "dump.c"
              dump__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) "\tcallseqs:\t", dump__V_76_76);
            }
#line 3904 "dump.c"
            {
#line 3906 "dump.c"
              mercury__io__write_string_3_p_0(dump__V_78_78);
            }
#line 420 "dump.m"
          }
#line 422 "dump.m"
        dump__succeeded = (dump__Allocs_47 == (MR_Integer) 0);
#line 424 "dump.m"
        if (dump__succeeded)
#line 422 "dump.m"
          {
#line 422 "dump.m"
          }
#line 424 "dump.m"
        else
#line 425 "dump.m"
          {
#line 425 "dump.m"
            MR_String dump__V_80_80;
#line 425 "dump.m"
            MR_String dump__V_81_81;
#line 425 "dump.m"
            MR_String dump__V_83_83;

#line 3930 "dump.c"
            {
#line 3932 "dump.c"
              dump__V_80_80 = mercury__string__int_to_string_1_f_0(dump__Allocs_47);
            }
#line 3935 "dump.c"
            {
#line 3937 "dump.c"
              dump__V_81_81 = mercury__string__f_43_43_2_f_0(dump__V_80_80, (MR_String) "\n");
            }
#line 3940 "dump.c"
            {
#line 3942 "dump.c"
              dump__V_83_83 = mercury__string__f_43_43_2_f_0((MR_String) "\tallocs:\t\t", dump__V_81_81);
            }
#line 3945 "dump.c"
            {
#line 3947 "dump.c"
              mercury__io__write_string_3_p_0(dump__V_83_83);
            }
#line 425 "dump.m"
          }
#line 427 "dump.m"
        dump__succeeded = (dump__Words_48 == (MR_Integer) 0);
#line 429 "dump.m"
        if (dump__succeeded)
#line 427 "dump.m"
          {
#line 427 "dump.m"
          }
#line 429 "dump.m"
        else
#line 430 "dump.m"
          {
#line 430 "dump.m"
            MR_String dump__V_85_85;
#line 430 "dump.m"
            MR_String dump__V_86_86;
#line 430 "dump.m"
            MR_String dump__V_88_88;

#line 3971 "dump.c"
            {
#line 3973 "dump.c"
              dump__V_85_85 = mercury__string__int_to_string_1_f_0(dump__Words_48);
            }
#line 3976 "dump.c"
            {
#line 3978 "dump.c"
              dump__V_86_86 = mercury__string__f_43_43_2_f_0(dump__V_85_85, (MR_String) "\n");
            }
#line 3981 "dump.c"
            {
#line 3983 "dump.c"
              dump__V_88_88 = mercury__string__f_43_43_2_f_0((MR_String) "\twords:\t\t", dump__V_86_86);
            }
#line 3986 "dump.c"
            {
#line 3988 "dump.c"
              mercury__io__write_string_3_p_0(dump__V_88_88);
            }
#line 430 "dump.m"
          }
#line 950 "dump.m"
        dump__PrintedDesc_13 = (MR_Integer) 1;
#line 948 "dump.m"
      }
#line 953 "dump.m"
    dump__succeeded = (dump__PrintedOwn_12 == (MR_Integer) 1);
#line 954 "dump.m"
    if (!(dump__succeeded))
#line 954 "dump.m"
      dump__succeeded = (dump__PrintedDesc_13 == (MR_Integer) 1);
#line 958 "dump.m"
    if (dump__succeeded)
#line 957 "dump.m"
      {
#line 957 "dump.m"
        mercury__io__nl_2_p_0();
#line 957 "dump.m"
        return;
      }
#line 958 "dump.m"
    else
#line 957 "dump.m"
      {
#line 957 "dump.m"
      }
#line 937 "dump.m"
  }
#line 934 "dump.m"
}

#line 920 "dump.m"
static void MR_CALL 
dump__dump_css_measurements_6_p_0(
#line 920 "dump.m"
  MR_Integer dump__Cur_7,
#line 920 "dump.m"
  MR_Integer dump__Max_8,
#line 920 "dump.m"
  MR_ArrayPtr dump__CSSOwn_9,
#line 920 "dump.m"
  MR_ArrayPtr dump__CSSDesc_10)
#line 920 "dump.m"
{
#line 930 "dump.m"
  while (MR_TRUE)
#line 930 "dump.m"
    {
#line 930 "dump.m"
      /* tailcall optimized into a loop */
#line 930 "dump.m"
      {
#line 930 "dump.m"
        MR_bool dump__succeeded = (dump__Cur_7 <= dump__Max_8);

#line 930 "dump.m"
        if (dump__succeeded)
#line 926 "dump.m"
          {
#line 926 "dump.m"
            MR_Word dump__Own_12;
#line 926 "dump.m"
            MR_Word dump__Desc_13;
#line 926 "dump.m"
            MR_Integer dump__V_18_18;
#line 926 "dump.m"
            MR_Box dump__conv0_Own_12;
#line 927 "dump.m"
            MR_Box dump__conv1_Desc_13;

#line 926 "dump.m"
            {
#line 926 "dump.m"
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) dump__CSSOwn_9, dump__Cur_7, &dump__conv0_Own_12);
            }
#line 926 "dump.m"
            dump__Own_12 = ((MR_Word) dump__conv0_Own_12);
#line 927 "dump.m"
            {
#line 927 "dump.m"
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) dump__CSSDesc_10, dump__Cur_7, &dump__conv1_Desc_13);
            }
#line 927 "dump.m"
            dump__Desc_13 = ((MR_Word) dump__conv1_Desc_13);
#line 928 "dump.m"
            {
#line 928 "dump.m"
              dump__dump_own_and_desc_6_p_0((MR_String) "css", dump__Cur_7, dump__Own_12, dump__Desc_13);
            }
#line 929 "dump.m"
            dump__V_18_18 = (dump__Cur_7 + (MR_Integer) 1);
#line 929 "dump.m"
            /* direct tailcall eliminated */
#line 929 "dump.m"
            {
#line 929 "dump.m"
              MR_Integer dump__Cur__tmp_copy_7 = dump__V_18_18;

#line 929 "dump.m"
              dump__Cur_7 = dump__Cur__tmp_copy_7;
#line 929 "dump.m"
            }
#line 929 "dump.m"
            continue;
#line 926 "dump.m"
          }
#line 930 "dump.m"
        else
#line 929 "dump.m"
          {
#line 929 "dump.m"
          }
#line 930 "dump.m"
      }
#line 930 "dump.m"
      break;
#line 930 "dump.m"
    }
#line 920 "dump.m"
}

#line 906 "dump.m"
static void MR_CALL 
dump__dump_ps_measurements_6_p_0(
#line 906 "dump.m"
  MR_Integer dump__Cur_7,
#line 906 "dump.m"
  MR_Integer dump__Max_8,
#line 906 "dump.m"
  MR_ArrayPtr dump__PSOwn_9,
#line 906 "dump.m"
  MR_ArrayPtr dump__PSDesc_10)
#line 906 "dump.m"
{
#line 916 "dump.m"
  while (MR_TRUE)
#line 916 "dump.m"
    {
#line 916 "dump.m"
      /* tailcall optimized into a loop */
#line 916 "dump.m"
      {
#line 916 "dump.m"
        MR_bool dump__succeeded = (dump__Cur_7 <= dump__Max_8);

#line 916 "dump.m"
        if (dump__succeeded)
#line 912 "dump.m"
          {
#line 912 "dump.m"
            MR_Word dump__Own_12;
#line 912 "dump.m"
            MR_Word dump__Desc_13;
#line 912 "dump.m"
            MR_Integer dump__V_18_18;
#line 912 "dump.m"
            MR_Box dump__conv0_Own_12;
#line 913 "dump.m"
            MR_Box dump__conv1_Desc_13;

#line 912 "dump.m"
            {
#line 912 "dump.m"
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) dump__PSOwn_9, dump__Cur_7, &dump__conv0_Own_12);
            }
#line 912 "dump.m"
            dump__Own_12 = ((MR_Word) dump__conv0_Own_12);
#line 913 "dump.m"
            {
#line 913 "dump.m"
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) dump__PSDesc_10, dump__Cur_7, &dump__conv1_Desc_13);
            }
#line 913 "dump.m"
            dump__Desc_13 = ((MR_Word) dump__conv1_Desc_13);
#line 914 "dump.m"
            {
#line 914 "dump.m"
              dump__dump_own_and_desc_6_p_0((MR_String) "ps", dump__Cur_7, dump__Own_12, dump__Desc_13);
            }
#line 915 "dump.m"
            dump__V_18_18 = (dump__Cur_7 + (MR_Integer) 1);
#line 915 "dump.m"
            /* direct tailcall eliminated */
#line 915 "dump.m"
            {
#line 915 "dump.m"
              MR_Integer dump__Cur__tmp_copy_7 = dump__V_18_18;

#line 915 "dump.m"
              dump__Cur_7 = dump__Cur__tmp_copy_7;
#line 915 "dump.m"
            }
#line 915 "dump.m"
            continue;
#line 912 "dump.m"
          }
#line 916 "dump.m"
        else
#line 915 "dump.m"
          {
#line 915 "dump.m"
          }
#line 916 "dump.m"
      }
#line 916 "dump.m"
      break;
#line 916 "dump.m"
    }
#line 906 "dump.m"
}

#line 891 "dump.m"
static void MR_CALL 
dump__dump_csd_measurements_6_p_0(
#line 891 "dump.m"
  MR_Integer dump__Cur_7,
#line 891 "dump.m"
  MR_Integer dump__Max_8,
#line 891 "dump.m"
  MR_ArrayPtr dump__CSDs_9,
#line 891 "dump.m"
  MR_ArrayPtr dump__CSDDesc_10)
#line 891 "dump.m"
{
#line 902 "dump.m"
  while (MR_TRUE)
#line 902 "dump.m"
    {
#line 902 "dump.m"
      /* tailcall optimized into a loop */
#line 902 "dump.m"
      {
#line 902 "dump.m"
        MR_bool dump__succeeded = (dump__Cur_7 <= dump__Max_8);

#line 902 "dump.m"
        if (dump__succeeded)
#line 897 "dump.m"
          {
#line 897 "dump.m"
            MR_Word dump__CSD_12;
#line 897 "dump.m"
            MR_Word dump__Own_13;
#line 897 "dump.m"
            MR_Word dump__Desc_14;
#line 897 "dump.m"
            MR_Integer dump__V_19_19;
#line 897 "dump.m"
            MR_Box dump__conv0_CSD_12;
#line 898 "dump.m"
            MR_Word dump__V_22_22;
#line 898 "dump.m"
            MR_Word dump__V_23_23;
#line 899 "dump.m"
            MR_Box dump__conv1_Desc_14;

#line 897 "dump.m"
            {
#line 897 "dump.m"
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) dump__CSDs_9, dump__Cur_7, &dump__conv0_CSD_12);
            }
#line 897 "dump.m"
            dump__CSD_12 = ((MR_Word) dump__conv0_CSD_12);
#line 898 "dump.m"
            dump__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CSD_12, (MR_Integer) 0)));
#line 898 "dump.m"
            dump__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CSD_12, (MR_Integer) 1)));
#line 898 "dump.m"
            dump__Own_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CSD_12, (MR_Integer) 2)));
#line 899 "dump.m"
            {
#line 899 "dump.m"
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) dump__CSDDesc_10, dump__Cur_7, &dump__conv1_Desc_14);
            }
#line 899 "dump.m"
            dump__Desc_14 = ((MR_Word) dump__conv1_Desc_14);
#line 900 "dump.m"
            {
#line 900 "dump.m"
              dump__dump_own_and_desc_6_p_0((MR_String) "csd", dump__Cur_7, dump__Own_13, dump__Desc_14);
            }
#line 901 "dump.m"
            dump__V_19_19 = (dump__Cur_7 + (MR_Integer) 1);
#line 901 "dump.m"
            /* direct tailcall eliminated */
#line 901 "dump.m"
            {
#line 901 "dump.m"
              MR_Integer dump__Cur__tmp_copy_7 = dump__V_19_19;

#line 901 "dump.m"
              dump__Cur_7 = dump__Cur__tmp_copy_7;
#line 901 "dump.m"
            }
#line 901 "dump.m"
            continue;
#line 897 "dump.m"
          }
#line 902 "dump.m"
        else
#line 901 "dump.m"
          {
#line 901 "dump.m"
          }
#line 902 "dump.m"
      }
#line 902 "dump.m"
      break;
#line 902 "dump.m"
    }
#line 891 "dump.m"
}

#line 877 "dump.m"
static void MR_CALL 
dump__dump_pd_measurements_6_p_0(
#line 877 "dump.m"
  MR_Integer dump__Cur_7,
#line 877 "dump.m"
  MR_Integer dump__Max_8,
#line 877 "dump.m"
  MR_ArrayPtr dump__PDOwn_9,
#line 877 "dump.m"
  MR_ArrayPtr dump__PDDesc_10)
#line 877 "dump.m"
{
#line 887 "dump.m"
  while (MR_TRUE)
#line 887 "dump.m"
    {
#line 887 "dump.m"
      /* tailcall optimized into a loop */
#line 887 "dump.m"
      {
#line 887 "dump.m"
        MR_bool dump__succeeded = (dump__Cur_7 <= dump__Max_8);

#line 887 "dump.m"
        if (dump__succeeded)
#line 883 "dump.m"
          {
#line 883 "dump.m"
            MR_Word dump__Own_12;
#line 883 "dump.m"
            MR_Word dump__Desc_13;
#line 883 "dump.m"
            MR_Integer dump__V_18_18;
#line 883 "dump.m"
            MR_Box dump__conv0_Own_12;
#line 884 "dump.m"
            MR_Box dump__conv1_Desc_13;

#line 883 "dump.m"
            {
#line 883 "dump.m"
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) dump__PDOwn_9, dump__Cur_7, &dump__conv0_Own_12);
            }
#line 883 "dump.m"
            dump__Own_12 = ((MR_Word) dump__conv0_Own_12);
#line 884 "dump.m"
            {
#line 884 "dump.m"
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) dump__PDDesc_10, dump__Cur_7, &dump__conv1_Desc_13);
            }
#line 884 "dump.m"
            dump__Desc_13 = ((MR_Word) dump__conv1_Desc_13);
#line 885 "dump.m"
            {
#line 885 "dump.m"
              dump__dump_own_and_desc_6_p_0((MR_String) "pd", dump__Cur_7, dump__Own_12, dump__Desc_13);
            }
#line 886 "dump.m"
            dump__V_18_18 = (dump__Cur_7 + (MR_Integer) 1);
#line 886 "dump.m"
            /* direct tailcall eliminated */
#line 886 "dump.m"
            {
#line 886 "dump.m"
              MR_Integer dump__Cur__tmp_copy_7 = dump__V_18_18;

#line 886 "dump.m"
              dump__Cur_7 = dump__Cur__tmp_copy_7;
#line 886 "dump.m"
            }
#line 886 "dump.m"
            continue;
#line 883 "dump.m"
          }
#line 887 "dump.m"
        else
#line 886 "dump.m"
          {
#line 886 "dump.m"
          }
#line 887 "dump.m"
      }
#line 887 "dump.m"
      break;
#line 887 "dump.m"
    }
#line 877 "dump.m"
}

#line 872 "dump.m"
static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_4(
#line 872 "dump.m"
  MR_Box dump__closure_arg)
#line 872 "dump.m"
{
#line 872 "dump.m"
  {
#line 872 "dump.m"
    MR_bool dump__succeeded;
#line 872 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 872 "dump.m"
    {
#line 872 "dump.m"
      return dump__succeeded = dump__IntroducedFrom__pred__dump_deep_prop_measurements__872__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 4))));
    }
#line 872 "dump.m"
    return dump__succeeded;
#line 872 "dump.m"
  }
#line 872 "dump.m"
}

#line 863 "dump.m"
static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_3(
#line 863 "dump.m"
  MR_Box dump__closure_arg)
#line 863 "dump.m"
{
#line 863 "dump.m"
  {
#line 863 "dump.m"
    MR_bool dump__succeeded;
#line 863 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 863 "dump.m"
    {
#line 863 "dump.m"
      return dump__succeeded = dump__IntroducedFrom__pred__dump_deep_prop_measurements__863__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 4))));
    }
#line 863 "dump.m"
    return dump__succeeded;
#line 863 "dump.m"
  }
#line 863 "dump.m"
}

#line 854 "dump.m"
static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_2(
#line 854 "dump.m"
  MR_Box dump__closure_arg)
#line 854 "dump.m"
{
#line 854 "dump.m"
  {
#line 854 "dump.m"
    MR_bool dump__succeeded;
#line 854 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 854 "dump.m"
    {
#line 854 "dump.m"
      return dump__succeeded = dump__IntroducedFrom__pred__dump_deep_prop_measurements__854__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 4))));
    }
#line 854 "dump.m"
    return dump__succeeded;
#line 854 "dump.m"
  }
#line 854 "dump.m"
}

#line 845 "dump.m"
static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_1(
#line 845 "dump.m"
  MR_Box dump__closure_arg)
#line 845 "dump.m"
{
#line 845 "dump.m"
  {
#line 845 "dump.m"
    MR_bool dump__succeeded;
#line 845 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 845 "dump.m"
    {
#line 845 "dump.m"
      return dump__succeeded = dump__IntroducedFrom__pred__dump_deep_prop_measurements__845__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 4))));
    }
#line 845 "dump.m"
    return dump__succeeded;
#line 845 "dump.m"
  }
#line 845 "dump.m"
}

#line 838 "dump.m"
static void MR_CALL 
dump__dump_deep_prop_measurements_3_p_0(
#line 838 "dump.m"
  MR_Word dump__Deep_4)
#line 838 "dump.m"
{
#line 840 "dump.m"
  {
#line 840 "dump.m"
    MR_bool dump__succeeded;
#line 840 "dump.m"
    MR_Word dump__TypeCtorInfo_272_272 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
#line 840 "dump.m"
    MR_Word dump__TypeCtorInfo_273_273;
#line 840 "dump.m"
    MR_ArrayPtr dump__PDOwn_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 840 "dump.m"
    MR_ArrayPtr dump__PDDesc_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 840 "dump.m"
    MR_Integer dump__PDOwnMax_8;
#line 840 "dump.m"
    MR_Integer dump__PDDescMax_9;
#line 840 "dump.m"
    MR_ArrayPtr dump__CSDs_10;
#line 840 "dump.m"
    MR_ArrayPtr dump__CSDDesc_11;
#line 840 "dump.m"
    MR_Integer dump__CSDMax_12;
#line 840 "dump.m"
    MR_Integer dump__CSDDescMax_13;
#line 840 "dump.m"
    MR_ArrayPtr dump__PSOwn_14;
#line 840 "dump.m"
    MR_ArrayPtr dump__PSDesc_15;
#line 840 "dump.m"
    MR_Integer dump__PSOwnMax_16;
#line 840 "dump.m"
    MR_Integer dump__PSDescMax_17;
#line 840 "dump.m"
    MR_ArrayPtr dump__CSSOwn_18;
#line 840 "dump.m"
    MR_ArrayPtr dump__CSSDesc_19;
#line 840 "dump.m"
    MR_Integer dump__CSSOwnMax_20;
#line 840 "dump.m"
    MR_Integer dump__CSSDescMax_21;
#line 840 "dump.m"
    MR_Word dump__V_24_24;
#line 840 "dump.m"
    MR_Word dump__V_30_30;
#line 840 "dump.m"
    MR_Word dump__V_36_36;
#line 840 "dump.m"
    MR_Word dump__V_42_42;
#line 841 "dump.m"
    MR_Word dump__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 841 "dump.m"
    MR_String dump__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 841 "dump.m"
    MR_String dump__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 841 "dump.m"
    MR_String dump__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 841 "dump.m"
    MR_Word dump__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 841 "dump.m"
    MR_ArrayPtr dump__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 841 "dump.m"
    MR_ArrayPtr dump__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 841 "dump.m"
    MR_ArrayPtr dump__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 841 "dump.m"
    MR_ArrayPtr dump__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 841 "dump.m"
    MR_ArrayPtr dump__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 841 "dump.m"
    MR_ArrayPtr dump__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 841 "dump.m"
    MR_ArrayPtr dump__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 841 "dump.m"
    MR_ArrayPtr dump__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 841 "dump.m"
    MR_ArrayPtr dump__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 841 "dump.m"
    MR_ArrayPtr dump__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 841 "dump.m"
    MR_ArrayPtr dump__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 841 "dump.m"
    MR_ArrayPtr dump__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 841 "dump.m"
    MR_ArrayPtr dump__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 841 "dump.m"
    MR_ArrayPtr dump__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 841 "dump.m"
    MR_ArrayPtr dump__V_68_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 841 "dump.m"
    MR_ArrayPtr dump__V_69_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 841 "dump.m"
    MR_ArrayPtr dump__V_70_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 841 "dump.m"
    MR_ArrayPtr dump__V_71_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 841 "dump.m"
    MR_Word dump__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 841 "dump.m"
    MR_Word dump__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 841 "dump.m"
    MR_Word dump__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 841 "dump.m"
    MR_Word dump__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 850 "dump.m"
    MR_Word dump__V_104_104;
#line 850 "dump.m"
    MR_String dump__V_105_105;
#line 850 "dump.m"
    MR_String dump__V_106_106;
#line 850 "dump.m"
    MR_String dump__V_107_107;
#line 850 "dump.m"
    MR_Word dump__V_108_108;
#line 850 "dump.m"
    MR_ArrayPtr dump__V_109_109;
#line 850 "dump.m"
    MR_ArrayPtr dump__V_110_110;
#line 850 "dump.m"
    MR_ArrayPtr dump__V_111_111;
#line 850 "dump.m"
    MR_ArrayPtr dump__V_112_112;
#line 850 "dump.m"
    MR_ArrayPtr dump__V_113_113;
#line 850 "dump.m"
    MR_ArrayPtr dump__V_114_114;
#line 850 "dump.m"
    MR_ArrayPtr dump__V_115_115;
#line 850 "dump.m"
    MR_ArrayPtr dump__V_116_116;
#line 850 "dump.m"
    MR_ArrayPtr dump__V_117_117;
#line 850 "dump.m"
    MR_ArrayPtr dump__V_118_118;
#line 850 "dump.m"
    MR_ArrayPtr dump__V_119_119;
#line 850 "dump.m"
    MR_ArrayPtr dump__V_120_120;
#line 850 "dump.m"
    MR_ArrayPtr dump__V_122_122;
#line 850 "dump.m"
    MR_ArrayPtr dump__V_123_123;
#line 850 "dump.m"
    MR_ArrayPtr dump__V_124_124;
#line 850 "dump.m"
    MR_ArrayPtr dump__V_125_125;
#line 850 "dump.m"
    MR_ArrayPtr dump__V_126_126;
#line 850 "dump.m"
    MR_ArrayPtr dump__V_127_127;
#line 850 "dump.m"
    MR_Word dump__V_128_128;
#line 850 "dump.m"
    MR_Word dump__V_129_129;
#line 850 "dump.m"
    MR_Word dump__V_130_130;
#line 850 "dump.m"
    MR_Word dump__V_131_131;
#line 859 "dump.m"
    MR_Word dump__V_160_160;
#line 859 "dump.m"
    MR_String dump__V_161_161;
#line 859 "dump.m"
    MR_String dump__V_162_162;
#line 859 "dump.m"
    MR_String dump__V_163_163;
#line 859 "dump.m"
    MR_Word dump__V_164_164;
#line 859 "dump.m"
    MR_ArrayPtr dump__V_165_165;
#line 859 "dump.m"
    MR_ArrayPtr dump__V_166_166;
#line 859 "dump.m"
    MR_ArrayPtr dump__V_167_167;
#line 859 "dump.m"
    MR_ArrayPtr dump__V_168_168;
#line 859 "dump.m"
    MR_ArrayPtr dump__V_169_169;
#line 859 "dump.m"
    MR_ArrayPtr dump__V_170_170;
#line 859 "dump.m"
    MR_ArrayPtr dump__V_171_171;
#line 859 "dump.m"
    MR_ArrayPtr dump__V_172_172;
#line 859 "dump.m"
    MR_ArrayPtr dump__V_173_173;
#line 859 "dump.m"
    MR_ArrayPtr dump__V_174_174;
#line 859 "dump.m"
    MR_ArrayPtr dump__V_175_175;
#line 859 "dump.m"
    MR_ArrayPtr dump__V_176_176;
#line 859 "dump.m"
    MR_ArrayPtr dump__V_177_177;
#line 859 "dump.m"
    MR_ArrayPtr dump__V_178_178;
#line 859 "dump.m"
    MR_ArrayPtr dump__V_180_180;
#line 859 "dump.m"
    MR_ArrayPtr dump__V_181_181;
#line 859 "dump.m"
    MR_ArrayPtr dump__V_182_182;
#line 859 "dump.m"
    MR_ArrayPtr dump__V_183_183;
#line 859 "dump.m"
    MR_Word dump__V_184_184;
#line 859 "dump.m"
    MR_Word dump__V_185_185;
#line 859 "dump.m"
    MR_Word dump__V_186_186;
#line 859 "dump.m"
    MR_Word dump__V_187_187;
#line 868 "dump.m"
    MR_Word dump__V_216_216;
#line 868 "dump.m"
    MR_String dump__V_217_217;
#line 868 "dump.m"
    MR_String dump__V_218_218;
#line 868 "dump.m"
    MR_String dump__V_219_219;
#line 868 "dump.m"
    MR_Word dump__V_220_220;
#line 868 "dump.m"
    MR_ArrayPtr dump__V_221_221;
#line 868 "dump.m"
    MR_ArrayPtr dump__V_222_222;
#line 868 "dump.m"
    MR_ArrayPtr dump__V_223_223;
#line 868 "dump.m"
    MR_ArrayPtr dump__V_224_224;
#line 868 "dump.m"
    MR_ArrayPtr dump__V_225_225;
#line 868 "dump.m"
    MR_ArrayPtr dump__V_226_226;
#line 868 "dump.m"
    MR_ArrayPtr dump__V_227_227;
#line 868 "dump.m"
    MR_ArrayPtr dump__V_228_228;
#line 868 "dump.m"
    MR_ArrayPtr dump__V_229_229;
#line 868 "dump.m"
    MR_ArrayPtr dump__V_230_230;
#line 868 "dump.m"
    MR_ArrayPtr dump__V_231_231;
#line 868 "dump.m"
    MR_ArrayPtr dump__V_232_232;
#line 868 "dump.m"
    MR_ArrayPtr dump__V_233_233;
#line 868 "dump.m"
    MR_ArrayPtr dump__V_234_234;
#line 868 "dump.m"
    MR_ArrayPtr dump__V_235_235;
#line 868 "dump.m"
    MR_ArrayPtr dump__V_236_236;
#line 868 "dump.m"
    MR_ArrayPtr dump__V_238_238;
#line 868 "dump.m"
    MR_ArrayPtr dump__V_239_239;
#line 868 "dump.m"
    MR_Word dump__V_240_240;
#line 868 "dump.m"
    MR_Word dump__V_241_241;
#line 868 "dump.m"
    MR_Word dump__V_242_242;
#line 868 "dump.m"
    MR_Word dump__V_243_243;

#line 843 "dump.m"
    {
#line 843 "dump.m"
      dump__PDOwnMax_8 = mercury__array__max_1_f_0(dump__TypeCtorInfo_272_272, (MR_ArrayPtr) dump__PDOwn_6);
    }
#line 4776 "dump.c"
    dump__TypeCtorInfo_273_273 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
#line 844 "dump.m"
    {
#line 844 "dump.m"
      dump__PDDescMax_9 = mercury__array__max_1_f_0(dump__TypeCtorInfo_273_273, (MR_ArrayPtr) dump__PDDesc_7);
    }
#line 845 "dump.m"
    {
#line 845 "dump.m"
      dump__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 845 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_24_24, 0) = ((MR_Box) (&dump_scalar_common_3[1]));
#line 845 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_24_24, 1) = ((MR_Box) (dump__dump_deep_prop_measurements_3_p_0_1));
#line 845 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 845 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_24_24, 3) = ((MR_Box) (dump__PDOwnMax_8));
#line 845 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_24_24, 4) = ((MR_Box) (dump__PDDescMax_9));
#line 845 "dump.m"
    }
#line 845 "dump.m"
    {
#line 845 "dump.m"
      mercury__require__require_2_p_0(dump__V_24_24, (MR_String) "dump_deep: PDOwnMax != PDDescMax");
    }
#line 847 "dump.m"
    {
#line 847 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION PROC DYNAMIC MEASUREMENTS:\n\n");
    }
#line 848 "dump.m"
    {
#line 848 "dump.m"
      dump__dump_pd_measurements_6_p_0((MR_Integer) 1, dump__PDOwnMax_8, dump__PDOwn_6, dump__PDDesc_7);
    }
#line 850 "dump.m"
    dump__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 850 "dump.m"
    dump__V_105_105 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 850 "dump.m"
    dump__V_106_106 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 850 "dump.m"
    dump__V_107_107 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 850 "dump.m"
    dump__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 850 "dump.m"
    dump__CSDs_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 850 "dump.m"
    dump__V_109_109 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 850 "dump.m"
    dump__V_110_110 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 850 "dump.m"
    dump__V_111_111 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 850 "dump.m"
    dump__V_112_112 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 850 "dump.m"
    dump__V_113_113 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 850 "dump.m"
    dump__V_114_114 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 850 "dump.m"
    dump__V_115_115 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 850 "dump.m"
    dump__V_116_116 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 850 "dump.m"
    dump__V_117_117 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 850 "dump.m"
    dump__V_118_118 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 850 "dump.m"
    dump__V_119_119 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 850 "dump.m"
    dump__V_120_120 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 850 "dump.m"
    dump__CSDDesc_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 850 "dump.m"
    dump__V_122_122 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 850 "dump.m"
    dump__V_123_123 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 850 "dump.m"
    dump__V_124_124 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 850 "dump.m"
    dump__V_125_125 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 850 "dump.m"
    dump__V_126_126 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 850 "dump.m"
    dump__V_127_127 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 850 "dump.m"
    dump__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 850 "dump.m"
    dump__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 850 "dump.m"
    dump__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 850 "dump.m"
    dump__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 852 "dump.m"
    {
#line 852 "dump.m"
      dump__CSDMax_12 = mercury__array__max_1_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) dump__CSDs_10);
    }
#line 853 "dump.m"
    {
#line 853 "dump.m"
      dump__CSDDescMax_13 = mercury__array__max_1_f_0(dump__TypeCtorInfo_273_273, (MR_ArrayPtr) dump__CSDDesc_11);
    }
#line 854 "dump.m"
    {
#line 854 "dump.m"
      dump__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 854 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_30_30, 0) = ((MR_Box) (&dump_scalar_common_3[1]));
#line 854 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_30_30, 1) = ((MR_Box) (dump__dump_deep_prop_measurements_3_p_0_2));
#line 854 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 854 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_30_30, 3) = ((MR_Box) (dump__CSDMax_12));
#line 854 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_30_30, 4) = ((MR_Box) (dump__CSDDescMax_13));
#line 854 "dump.m"
    }
#line 854 "dump.m"
    {
#line 854 "dump.m"
      mercury__require__require_2_p_0(dump__V_30_30, (MR_String) "dump_deep: CSDMax != CSDDescMax");
    }
#line 856 "dump.m"
    {
#line 856 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION CALL SITE DYNAMIC MEASUREMENTS:\n\n");
    }
#line 857 "dump.m"
    {
#line 857 "dump.m"
      dump__dump_csd_measurements_6_p_0((MR_Integer) 1, dump__CSDMax_12, dump__CSDs_10, dump__CSDDesc_11);
    }
#line 859 "dump.m"
    dump__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 859 "dump.m"
    dump__V_161_161 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 859 "dump.m"
    dump__V_162_162 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 859 "dump.m"
    dump__V_163_163 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 859 "dump.m"
    dump__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 859 "dump.m"
    dump__V_165_165 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 859 "dump.m"
    dump__V_166_166 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 859 "dump.m"
    dump__V_167_167 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 859 "dump.m"
    dump__V_168_168 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 859 "dump.m"
    dump__V_169_169 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 859 "dump.m"
    dump__V_170_170 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 859 "dump.m"
    dump__V_171_171 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 859 "dump.m"
    dump__V_172_172 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 859 "dump.m"
    dump__V_173_173 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 859 "dump.m"
    dump__V_174_174 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 859 "dump.m"
    dump__V_175_175 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 859 "dump.m"
    dump__V_176_176 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 859 "dump.m"
    dump__V_177_177 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 859 "dump.m"
    dump__V_178_178 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 859 "dump.m"
    dump__PSOwn_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 859 "dump.m"
    dump__PSDesc_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 859 "dump.m"
    dump__V_180_180 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 859 "dump.m"
    dump__V_181_181 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 859 "dump.m"
    dump__V_182_182 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 859 "dump.m"
    dump__V_183_183 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 859 "dump.m"
    dump__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 859 "dump.m"
    dump__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 859 "dump.m"
    dump__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 859 "dump.m"
    dump__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 861 "dump.m"
    {
#line 861 "dump.m"
      dump__PSOwnMax_16 = mercury__array__max_1_f_0(dump__TypeCtorInfo_272_272, (MR_ArrayPtr) dump__PSOwn_14);
    }
#line 862 "dump.m"
    {
#line 862 "dump.m"
      dump__PSDescMax_17 = mercury__array__max_1_f_0(dump__TypeCtorInfo_273_273, (MR_ArrayPtr) dump__PSDesc_15);
    }
#line 863 "dump.m"
    {
#line 863 "dump.m"
      dump__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 863 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_36_36, 0) = ((MR_Box) (&dump_scalar_common_3[1]));
#line 863 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_36_36, 1) = ((MR_Box) (dump__dump_deep_prop_measurements_3_p_0_3));
#line 863 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 863 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_36_36, 3) = ((MR_Box) (dump__PSOwnMax_16));
#line 863 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_36_36, 4) = ((MR_Box) (dump__PSDescMax_17));
#line 863 "dump.m"
    }
#line 863 "dump.m"
    {
#line 863 "dump.m"
      mercury__require__require_2_p_0(dump__V_36_36, (MR_String) "dump_deep: PSOwnMax != PSDescMax");
    }
#line 865 "dump.m"
    {
#line 865 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION PROC STATIC MEASUREMENTS:\n\n");
    }
#line 866 "dump.m"
    {
#line 866 "dump.m"
      dump__dump_ps_measurements_6_p_0((MR_Integer) 1, dump__PSOwnMax_16, dump__PSOwn_14, dump__PSDesc_15);
    }
#line 868 "dump.m"
    dump__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 868 "dump.m"
    dump__V_217_217 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 868 "dump.m"
    dump__V_218_218 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 868 "dump.m"
    dump__V_219_219 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 868 "dump.m"
    dump__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 868 "dump.m"
    dump__V_221_221 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 868 "dump.m"
    dump__V_222_222 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 868 "dump.m"
    dump__V_223_223 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 868 "dump.m"
    dump__V_224_224 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 868 "dump.m"
    dump__V_225_225 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 868 "dump.m"
    dump__V_226_226 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 868 "dump.m"
    dump__V_227_227 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 868 "dump.m"
    dump__V_228_228 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 868 "dump.m"
    dump__V_229_229 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 868 "dump.m"
    dump__V_230_230 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 868 "dump.m"
    dump__V_231_231 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 868 "dump.m"
    dump__V_232_232 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 868 "dump.m"
    dump__V_233_233 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 868 "dump.m"
    dump__V_234_234 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 868 "dump.m"
    dump__V_235_235 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 868 "dump.m"
    dump__V_236_236 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 868 "dump.m"
    dump__CSSOwn_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 868 "dump.m"
    dump__CSSDesc_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 868 "dump.m"
    dump__V_238_238 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 868 "dump.m"
    dump__V_239_239 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 868 "dump.m"
    dump__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 868 "dump.m"
    dump__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 868 "dump.m"
    dump__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 868 "dump.m"
    dump__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 870 "dump.m"
    {
#line 870 "dump.m"
      dump__CSSOwnMax_20 = mercury__array__max_1_f_0(dump__TypeCtorInfo_272_272, (MR_ArrayPtr) dump__CSSOwn_18);
    }
#line 871 "dump.m"
    {
#line 871 "dump.m"
      dump__CSSDescMax_21 = mercury__array__max_1_f_0(dump__TypeCtorInfo_273_273, (MR_ArrayPtr) dump__CSSDesc_19);
    }
#line 872 "dump.m"
    {
#line 872 "dump.m"
      dump__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 872 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_42_42, 0) = ((MR_Box) (&dump_scalar_common_3[1]));
#line 872 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_42_42, 1) = ((MR_Box) (dump__dump_deep_prop_measurements_3_p_0_4));
#line 872 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 872 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_42_42, 3) = ((MR_Box) (dump__CSSOwnMax_20));
#line 872 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_42_42, 4) = ((MR_Box) (dump__CSSDescMax_21));
#line 872 "dump.m"
    }
#line 872 "dump.m"
    {
#line 872 "dump.m"
      mercury__require__require_2_p_0(dump__V_42_42, (MR_String) "dump_deep: CSSOwnMax != CSSDescMax");
    }
#line 874 "dump.m"
    {
#line 874 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION CALL SITE STATIC MEASUREMENTS:\n\n");
    }
#line 875 "dump.m"
    {
#line 875 "dump.m"
      dump__dump_css_measurements_6_p_0((MR_Integer) 1, dump__CSSOwnMax_20, dump__CSSOwn_18, dump__CSSDesc_19);
#line 875 "dump.m"
      return;
    }
#line 840 "dump.m"
  }
#line 838 "dump.m"
}

#line 833 "dump.m"
static void MR_CALL 
dump__dump_call_site_calls_to_proc_4_p_0_1(
#line 833 "dump.m"
  MR_Box dump__closure_arg,
#line 833 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 833 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 833 "dump.m"
  MR_Box * dump__wrapper_arg_3)
#line 833 "dump.m"
{
#line 833 "dump.m"
  {
#line 833 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 833 "dump.m"
    {
#line 833 "dump.m"
      dump__dump_space_csdptr_3_p_0(((MR_Word) dump__wrapper_arg_1));
#line 833 "dump.m"
      return;
    }
#line 833 "dump.m"
  }
#line 833 "dump.m"
}

#line 826 "dump.m"
static void MR_CALL 
dump__dump_call_site_calls_to_proc_4_p_0(
#line 826 "dump.m"
  MR_String dump__Prefix_5,
#line 826 "dump.m"
  MR_Word dump__HeadVar__2_2)
#line 826 "dump.m"
{
#line 830 "dump.m"
  {
#line 830 "dump.m"
    MR_bool dump__succeeded;
#line 830 "dump.m"
    MR_Word dump__PSPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 0)));
#line 830 "dump.m"
    MR_Word dump__CSDPtrs_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 1)));
#line 830 "dump.m"
    MR_Integer dump__PSNum_9 = (MR_Integer) dump__PSPtr_6;
#line 830 "dump.m"
    MR_String dump__V_28_28;
#line 830 "dump.m"
    MR_String dump__V_29_29;
#line 830 "dump.m"
    MR_String dump__V_31_31;
#line 830 "dump.m"
    MR_String dump__V_32_32;
#line 833 "dump.m"
    MR_Box dump__conv0_STATE_VARIABLE_IO_20_20;

#line 5178 "dump.c"
    {
#line 5180 "dump.c"
      dump__V_28_28 = mercury__string__int_to_string_1_f_0(dump__PSNum_9);
    }
#line 5183 "dump.c"
    {
#line 5185 "dump.c"
      dump__V_29_29 = mercury__string__f_43_43_2_f_0(dump__V_28_28, (MR_String) ":");
    }
#line 5188 "dump.c"
    {
#line 5190 "dump.c"
      dump__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "ps", dump__V_29_29);
    }
#line 5193 "dump.c"
    {
#line 5195 "dump.c"
      dump__V_32_32 = mercury__string__f_43_43_2_f_0(dump__Prefix_5, dump__V_31_31);
    }
#line 5198 "dump.c"
    {
#line 5200 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_32_32);
    }
#line 833 "dump.m"
    {
#line 833 "dump.m"
      mercury__list__foldl_4_p_2((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &dump_scalar_common_2[19], dump__CSDPtrs_7, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_20_20);
    }
#line 834 "dump.m"
    {
#line 834 "dump.m"
      mercury__io__nl_2_p_0();
#line 834 "dump.m"
      return;
    }
#line 830 "dump.m"
  }
#line 826 "dump.m"
}

#line 823 "dump.m"
static void MR_CALL 
dump__dump_call_site_calls_4_p_0_1(
#line 823 "dump.m"
  MR_Box dump__closure_arg,
#line 823 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 823 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 823 "dump.m"
  MR_Box * dump__wrapper_arg_3)
#line 823 "dump.m"
{
#line 823 "dump.m"
  {
#line 823 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 823 "dump.m"
    {
#line 823 "dump.m"
      dump__dump_call_site_calls_to_proc_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Word) dump__wrapper_arg_1));
#line 823 "dump.m"
      return;
    }
#line 823 "dump.m"
  }
#line 823 "dump.m"
}

#line 808 "dump.m"
static void MR_CALL 
dump__dump_call_site_calls_4_p_0(
#line 808 "dump.m"
  MR_Integer dump__Index_5,
#line 808 "dump.m"
  MR_Word dump__CalleeMap_6)
#line 808 "dump.m"
{
#line 812 "dump.m"
  {
#line 812 "dump.m"
    MR_bool dump__succeeded;
#line 812 "dump.m"
    MR_Word dump__CalleeList_8;

#line 813 "dump.m"
    {
#line 813 "dump.m"
      dump__CalleeList_8 = mercury__map__to_assoc_list_1_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &dump_scalar_common_1[4], dump__CalleeMap_6);
    }
#line 816 "dump.m"
    if ((dump__CalleeList_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 815 "dump.m"
      {
#line 815 "dump.m"
      }
#line 816 "dump.m"
    else
#line 816 "dump.m"
      {
#line 816 "dump.m"
        MR_Word dump__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__CalleeList_8, (MR_Integer) 1)));
#line 816 "dump.m"
        MR_Word dump__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__CalleeList_8, (MR_Integer) 0)));

#line 816 "dump.m"
        if ((dump__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 817 "dump.m"
          {
#line 817 "dump.m"
            MR_String dump__V_42_42;
#line 817 "dump.m"
            MR_String dump__V_43_43;
#line 817 "dump.m"
            MR_String dump__V_45_45;

#line 5297 "dump.c"
            {
#line 5299 "dump.c"
              dump__V_42_42 = mercury__string__int_to_string_1_f_0(dump__Index_5);
            }
#line 5302 "dump.c"
            {
#line 5304 "dump.c"
              dump__V_43_43 = mercury__string__f_43_43_2_f_0(dump__V_42_42, (MR_String) " calls one procedure: ");
            }
#line 5307 "dump.c"
            {
#line 5309 "dump.c"
              dump__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) "css", dump__V_43_43);
            }
#line 5312 "dump.c"
            {
#line 5314 "dump.c"
              mercury__io__write_string_3_p_0(dump__V_45_45);
            }
#line 819 "dump.m"
            {
#line 819 "dump.m"
              dump__dump_call_site_calls_to_proc_4_p_0((MR_String) "", dump__V_40_40);
#line 819 "dump.m"
              return;
            }
#line 817 "dump.m"
          }
#line 816 "dump.m"
        else
#line 821 "dump.m"
          {
#line 821 "dump.m"
            MR_String dump__V_47_47;
#line 821 "dump.m"
            MR_String dump__V_48_48;
#line 821 "dump.m"
            MR_String dump__V_50_50;
#line 823 "dump.m"
            MR_Box dump__conv0_STATE_VARIABLE_IO_14;

#line 5339 "dump.c"
            {
#line 5341 "dump.c"
              dump__V_47_47 = mercury__string__int_to_string_1_f_0(dump__Index_5);
            }
#line 5344 "dump.c"
            {
#line 5346 "dump.c"
              dump__V_48_48 = mercury__string__f_43_43_2_f_0(dump__V_47_47, (MR_String) " calls several procedures:\n");
            }
#line 5349 "dump.c"
            {
#line 5351 "dump.c"
              dump__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) "css", dump__V_48_48);
            }
#line 5354 "dump.c"
            {
#line 5356 "dump.c"
              mercury__io__write_string_3_p_0(dump__V_50_50);
            }
#line 823 "dump.m"
            {
#line 823 "dump.m"
              mercury__list__foldl_4_p_2((MR_Word) &dump_scalar_common_2[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &dump_scalar_common_8[0], dump__CalleeList_8, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_14);
            }
#line 821 "dump.m"
          }
#line 816 "dump.m"
      }
#line 812 "dump.m"
  }
#line 808 "dump.m"
}

#line 801 "dump.m"
static void MR_CALL 
dump__dump_call_site_dynamic_to_static_4_p_0(
#line 801 "dump.m"
  MR_Integer dump__Index_5,
#line 801 "dump.m"
  MR_Word dump__CSSPtr_6)
#line 801 "dump.m"
{
#line 804 "dump.m"
  {
#line 804 "dump.m"
    MR_bool dump__succeeded;
#line 804 "dump.m"
    MR_Integer dump__CSSNum_8 = (MR_Integer) dump__CSSPtr_6;
#line 804 "dump.m"
    MR_String dump__V_19_19;
#line 804 "dump.m"
    MR_String dump__V_20_20;
#line 804 "dump.m"
    MR_String dump__V_22_22;
#line 804 "dump.m"
    MR_String dump__V_23_23;
#line 804 "dump.m"
    MR_String dump__V_24_24;
#line 804 "dump.m"
    MR_String dump__V_26_26;

#line 5401 "dump.c"
    {
#line 5403 "dump.c"
      dump__V_19_19 = mercury__string__int_to_string_1_f_0(dump__CSSNum_8);
    }
#line 5406 "dump.c"
    {
#line 5408 "dump.c"
      dump__V_20_20 = mercury__string__f_43_43_2_f_0(dump__V_19_19, (MR_String) "\n");
    }
#line 5411 "dump.c"
    {
#line 5413 "dump.c"
      dump__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) " is at css", dump__V_20_20);
    }
#line 5416 "dump.c"
    {
#line 5418 "dump.c"
      dump__V_23_23 = mercury__string__int_to_string_1_f_0(dump__Index_5);
    }
#line 5421 "dump.c"
    {
#line 5423 "dump.c"
      dump__V_24_24 = mercury__string__f_43_43_2_f_0(dump__V_23_23, dump__V_22_22);
    }
#line 5426 "dump.c"
    {
#line 5428 "dump.c"
      dump__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "csd", dump__V_24_24);
    }
#line 5431 "dump.c"
    {
#line 5433 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_26_26);
#line 5435 "dump.c"
      return;
    }
#line 804 "dump.m"
  }
#line 801 "dump.m"
}

#line 794 "dump.m"
static void MR_CALL 
dump__dump_space_csdptr_3_p_0(
#line 794 "dump.m"
  MR_Word dump__CSDPtr_4)
#line 794 "dump.m"
{
#line 796 "dump.m"
  {
#line 796 "dump.m"
    MR_bool dump__succeeded;
#line 796 "dump.m"
    MR_Integer dump__CSDNum_6 = (MR_Integer) dump__CSDPtr_4;

#line 798 "dump.m"
    {
#line 798 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) " csd");
    }
#line 799 "dump.m"
    {
#line 799 "dump.m"
      mercury__io__write_int_3_p_0(dump__CSDNum_6);
#line 799 "dump.m"
      return;
    }
#line 796 "dump.m"
  }
#line 794 "dump.m"
}

#line 790 "dump.m"
static void MR_CALL 
dump__dump_proc_static_caller_csds_4_p_0_1(
#line 790 "dump.m"
  MR_Box dump__closure_arg,
#line 790 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 790 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 790 "dump.m"
  MR_Box * dump__wrapper_arg_3)
#line 790 "dump.m"
{
#line 790 "dump.m"
  {
#line 790 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 790 "dump.m"
    {
#line 790 "dump.m"
      dump__dump_space_csdptr_3_p_0(((MR_Word) dump__wrapper_arg_1));
#line 790 "dump.m"
      return;
    }
#line 790 "dump.m"
  }
#line 790 "dump.m"
}

#line 781 "dump.m"
static void MR_CALL 
dump__dump_proc_static_caller_csds_4_p_0(
#line 781 "dump.m"
  MR_Integer dump__Index_5,
#line 781 "dump.m"
  MR_Word dump__CallerCSDs_6)
#line 781 "dump.m"
{
#line 786 "dump.m"
  {
#line 786 "dump.m"
    MR_bool dump__succeeded;

#line 786 "dump.m"
    if ((dump__CallerCSDs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 786 "dump.m"
      {
#line 786 "dump.m"
      }
#line 786 "dump.m"
    else
#line 788 "dump.m"
      {
#line 788 "dump.m"
        MR_String dump__V_26_26;
#line 788 "dump.m"
        MR_String dump__V_27_27;
#line 788 "dump.m"
        MR_String dump__V_29_29;
#line 790 "dump.m"
        MR_Box dump__conv0_STATE_VARIABLE_IO_18_18;

#line 5537 "dump.c"
        {
#line 5539 "dump.c"
          dump__V_26_26 = mercury__string__int_to_string_1_f_0(dump__Index_5);
        }
#line 5542 "dump.c"
        {
#line 5544 "dump.c"
          dump__V_27_27 = mercury__string__f_43_43_2_f_0(dump__V_26_26, (MR_String) " callers:");
        }
#line 5547 "dump.c"
        {
#line 5549 "dump.c"
          dump__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) "ps", dump__V_27_27);
        }
#line 5552 "dump.c"
        {
#line 5554 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_29_29);
        }
#line 790 "dump.m"
        {
#line 790 "dump.m"
          mercury__list__foldl_4_p_2((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &dump_scalar_common_2[18], dump__CallerCSDs_6, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_18_18);
        }
#line 791 "dump.m"
        {
#line 791 "dump.m"
          mercury__io__nl_2_p_0();
#line 791 "dump.m"
          return;
        }
#line 788 "dump.m"
      }
#line 786 "dump.m"
  }
#line 781 "dump.m"
}

#line 778 "dump.m"
static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_3(
#line 778 "dump.m"
  MR_Box dump__closure_arg,
#line 778 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 778 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 778 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 778 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 778 "dump.m"
{
#line 778 "dump.m"
  {
#line 778 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 778 "dump.m"
    {
#line 778 "dump.m"
      dump__dump_call_site_calls_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 778 "dump.m"
      return;
    }
#line 778 "dump.m"
  }
#line 778 "dump.m"
}

#line 772 "dump.m"
static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_2(
#line 772 "dump.m"
  MR_Box dump__closure_arg,
#line 772 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 772 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 772 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 772 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 772 "dump.m"
{
#line 772 "dump.m"
  {
#line 772 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 772 "dump.m"
    {
#line 772 "dump.m"
      dump__dump_call_site_dynamic_to_static_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 772 "dump.m"
      return;
    }
#line 772 "dump.m"
  }
#line 772 "dump.m"
}

#line 766 "dump.m"
static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_1(
#line 766 "dump.m"
  MR_Box dump__closure_arg,
#line 766 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 766 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 766 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 766 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 766 "dump.m"
{
#line 766 "dump.m"
  {
#line 766 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 766 "dump.m"
    {
#line 766 "dump.m"
      dump__dump_proc_static_caller_csds_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 766 "dump.m"
      return;
    }
#line 766 "dump.m"
  }
#line 766 "dump.m"
}

#line 761 "dump.m"
static void MR_CALL 
dump__dump_deep_rev_links_3_p_0(
#line 761 "dump.m"
  MR_Word dump__Deep_4)
#line 761 "dump.m"
{
#line 763 "dump.m"
  {
#line 763 "dump.m"
    MR_bool dump__succeeded;
#line 763 "dump.m"
    MR_Word dump__TypeCtorInfo_115_115;
#line 763 "dump.m"
    MR_ArrayPtr dump__ProcCallers_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 763 "dump.m"
    MR_ArrayPtr dump__CallSiteStaticMap_7;
#line 763 "dump.m"
    MR_ArrayPtr dump__CallSiteCalls_8;
#line 764 "dump.m"
    MR_Word dump__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 764 "dump.m"
    MR_String dump__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 764 "dump.m"
    MR_String dump__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 764 "dump.m"
    MR_String dump__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 764 "dump.m"
    MR_Word dump__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 764 "dump.m"
    MR_ArrayPtr dump__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 764 "dump.m"
    MR_ArrayPtr dump__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 764 "dump.m"
    MR_ArrayPtr dump__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 764 "dump.m"
    MR_ArrayPtr dump__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 764 "dump.m"
    MR_ArrayPtr dump__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 764 "dump.m"
    MR_ArrayPtr dump__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 764 "dump.m"
    MR_ArrayPtr dump__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 764 "dump.m"
    MR_ArrayPtr dump__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 764 "dump.m"
    MR_ArrayPtr dump__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 764 "dump.m"
    MR_ArrayPtr dump__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 764 "dump.m"
    MR_ArrayPtr dump__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 764 "dump.m"
    MR_ArrayPtr dump__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 764 "dump.m"
    MR_ArrayPtr dump__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 764 "dump.m"
    MR_ArrayPtr dump__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 764 "dump.m"
    MR_ArrayPtr dump__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 764 "dump.m"
    MR_ArrayPtr dump__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 764 "dump.m"
    MR_ArrayPtr dump__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 764 "dump.m"
    MR_ArrayPtr dump__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 764 "dump.m"
    MR_ArrayPtr dump__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 764 "dump.m"
    MR_Word dump__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 764 "dump.m"
    MR_Word dump__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 764 "dump.m"
    MR_Word dump__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 764 "dump.m"
    MR_Word dump__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 766 "dump.m"
    MR_Box dump__conv0_STATE_VARIABLE_IO_14_14;
#line 769 "dump.m"
    MR_Word dump__V_54_54;
#line 769 "dump.m"
    MR_String dump__V_55_55;
#line 769 "dump.m"
    MR_String dump__V_56_56;
#line 769 "dump.m"
    MR_String dump__V_57_57;
#line 769 "dump.m"
    MR_Word dump__V_58_58;
#line 769 "dump.m"
    MR_ArrayPtr dump__V_59_59;
#line 769 "dump.m"
    MR_ArrayPtr dump__V_60_60;
#line 769 "dump.m"
    MR_ArrayPtr dump__V_61_61;
#line 769 "dump.m"
    MR_ArrayPtr dump__V_62_62;
#line 769 "dump.m"
    MR_ArrayPtr dump__V_63_63;
#line 769 "dump.m"
    MR_ArrayPtr dump__V_64_64;
#line 769 "dump.m"
    MR_ArrayPtr dump__V_65_65;
#line 769 "dump.m"
    MR_ArrayPtr dump__V_66_66;
#line 769 "dump.m"
    MR_ArrayPtr dump__V_67_67;
#line 769 "dump.m"
    MR_ArrayPtr dump__V_68_68;
#line 769 "dump.m"
    MR_ArrayPtr dump__V_69_69;
#line 769 "dump.m"
    MR_ArrayPtr dump__V_70_70;
#line 769 "dump.m"
    MR_ArrayPtr dump__V_71_71;
#line 769 "dump.m"
    MR_ArrayPtr dump__V_72_72;
#line 769 "dump.m"
    MR_ArrayPtr dump__V_73_73;
#line 769 "dump.m"
    MR_ArrayPtr dump__V_74_74;
#line 769 "dump.m"
    MR_ArrayPtr dump__V_75_75;
#line 769 "dump.m"
    MR_ArrayPtr dump__V_76_76;
#line 769 "dump.m"
    MR_ArrayPtr dump__V_77_77;
#line 769 "dump.m"
    MR_Word dump__V_78_78;
#line 769 "dump.m"
    MR_Word dump__V_79_79;
#line 769 "dump.m"
    MR_Word dump__V_80_80;
#line 769 "dump.m"
    MR_Word dump__V_81_81;
#line 772 "dump.m"
    MR_Box dump__conv1_STATE_VARIABLE_IO_19_19;
#line 776 "dump.m"
    MR_Word dump__V_82_82;
#line 776 "dump.m"
    MR_String dump__V_83_83;
#line 776 "dump.m"
    MR_String dump__V_84_84;
#line 776 "dump.m"
    MR_String dump__V_85_85;
#line 776 "dump.m"
    MR_Word dump__V_86_86;
#line 776 "dump.m"
    MR_ArrayPtr dump__V_87_87;
#line 776 "dump.m"
    MR_ArrayPtr dump__V_88_88;
#line 776 "dump.m"
    MR_ArrayPtr dump__V_89_89;
#line 776 "dump.m"
    MR_ArrayPtr dump__V_90_90;
#line 776 "dump.m"
    MR_ArrayPtr dump__V_91_91;
#line 776 "dump.m"
    MR_ArrayPtr dump__V_92_92;
#line 776 "dump.m"
    MR_ArrayPtr dump__V_93_93;
#line 776 "dump.m"
    MR_ArrayPtr dump__V_94_94;
#line 776 "dump.m"
    MR_ArrayPtr dump__V_95_95;
#line 776 "dump.m"
    MR_ArrayPtr dump__V_96_96;
#line 776 "dump.m"
    MR_ArrayPtr dump__V_97_97;
#line 776 "dump.m"
    MR_ArrayPtr dump__V_98_98;
#line 776 "dump.m"
    MR_ArrayPtr dump__V_99_99;
#line 776 "dump.m"
    MR_ArrayPtr dump__V_100_100;
#line 776 "dump.m"
    MR_ArrayPtr dump__V_101_101;
#line 776 "dump.m"
    MR_ArrayPtr dump__V_102_102;
#line 776 "dump.m"
    MR_ArrayPtr dump__V_103_103;
#line 776 "dump.m"
    MR_ArrayPtr dump__V_104_104;
#line 776 "dump.m"
    MR_ArrayPtr dump__V_105_105;
#line 776 "dump.m"
    MR_Word dump__V_106_106;
#line 776 "dump.m"
    MR_Word dump__V_107_107;
#line 776 "dump.m"
    MR_Word dump__V_108_108;
#line 776 "dump.m"
    MR_Word dump__V_109_109;
#line 778 "dump.m"
    MR_Box dump__conv2_STATE_VARIABLE_IO_24_24;

#line 765 "dump.m"
    {
#line 765 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM PROC STATIC TO CALLER CSDs:\n\n");
    }
#line 5871 "dump.c"
    dump__TypeCtorInfo_115_115 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 766 "dump.m"
    {
#line 766 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &dump_scalar_common_1[4], dump__TypeCtorInfo_115_115, (MR_Word) &dump_scalar_common_2[15], (MR_ArrayPtr) dump__ProcCallers_6, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_14_14);
    }
#line 767 "dump.m"
    {
#line 767 "dump.m"
      mercury__io__nl_2_p_0();
    }
#line 769 "dump.m"
    dump__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 769 "dump.m"
    dump__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 769 "dump.m"
    dump__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 769 "dump.m"
    dump__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 769 "dump.m"
    dump__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 769 "dump.m"
    dump__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 769 "dump.m"
    dump__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 769 "dump.m"
    dump__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 769 "dump.m"
    dump__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 769 "dump.m"
    dump__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 769 "dump.m"
    dump__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 769 "dump.m"
    dump__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 769 "dump.m"
    dump__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 769 "dump.m"
    dump__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 769 "dump.m"
    dump__CallSiteStaticMap_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 769 "dump.m"
    dump__V_68_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 769 "dump.m"
    dump__V_69_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 769 "dump.m"
    dump__V_70_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 769 "dump.m"
    dump__V_71_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 769 "dump.m"
    dump__V_72_72 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 769 "dump.m"
    dump__V_73_73 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 769 "dump.m"
    dump__V_74_74 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 769 "dump.m"
    dump__V_75_75 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 769 "dump.m"
    dump__V_76_76 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 769 "dump.m"
    dump__V_77_77 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 769 "dump.m"
    dump__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 769 "dump.m"
    dump__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 769 "dump.m"
    dump__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 769 "dump.m"
    dump__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 770 "dump.m"
    {
#line 770 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM CALL SITE DYNAMICS TO STATICS:\n\n");
    }
#line 772 "dump.m"
    {
#line 772 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, dump__TypeCtorInfo_115_115, (MR_Word) &dump_scalar_common_2[16], (MR_ArrayPtr) dump__CallSiteStaticMap_7, ((MR_Box) ((MR_Integer) 0)), &dump__conv1_STATE_VARIABLE_IO_19_19);
    }
#line 774 "dump.m"
    {
#line 774 "dump.m"
      mercury__io__nl_2_p_0();
    }
#line 776 "dump.m"
    dump__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 776 "dump.m"
    dump__V_83_83 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 776 "dump.m"
    dump__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 776 "dump.m"
    dump__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 776 "dump.m"
    dump__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 776 "dump.m"
    dump__V_87_87 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 776 "dump.m"
    dump__V_88_88 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 776 "dump.m"
    dump__V_89_89 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 776 "dump.m"
    dump__V_90_90 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 776 "dump.m"
    dump__V_91_91 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 776 "dump.m"
    dump__V_92_92 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 776 "dump.m"
    dump__V_93_93 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 776 "dump.m"
    dump__V_94_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 776 "dump.m"
    dump__V_95_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 776 "dump.m"
    dump__V_96_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 776 "dump.m"
    dump__CallSiteCalls_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 776 "dump.m"
    dump__V_97_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 776 "dump.m"
    dump__V_98_98 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 776 "dump.m"
    dump__V_99_99 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 776 "dump.m"
    dump__V_100_100 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 776 "dump.m"
    dump__V_101_101 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 776 "dump.m"
    dump__V_102_102 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 776 "dump.m"
    dump__V_103_103 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 776 "dump.m"
    dump__V_104_104 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 776 "dump.m"
    dump__V_105_105 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 776 "dump.m"
    dump__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 776 "dump.m"
    dump__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 776 "dump.m"
    dump__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 776 "dump.m"
    dump__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 777 "dump.m"
    {
#line 777 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM CALL SITE STATICS TO CALLS:\n\n");
    }
#line 778 "dump.m"
    {
#line 778 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &dump_scalar_common_2[0], dump__TypeCtorInfo_115_115, (MR_Word) &dump_scalar_common_2[17], (MR_ArrayPtr) dump__CallSiteCalls_8, ((MR_Box) ((MR_Integer) 0)), &dump__conv2_STATE_VARIABLE_IO_24_24);
    }
#line 779 "dump.m"
    {
#line 779 "dump.m"
      mercury__io__nl_2_p_0();
#line 779 "dump.m"
      return;
    }
#line 763 "dump.m"
  }
#line 761 "dump.m"
}

#line 747 "dump.m"
static void MR_CALL 
dump__dump_clique_maybe_child_4_p_0(
#line 747 "dump.m"
  MR_Integer dump__Index_5,
#line 747 "dump.m"
  MR_Word dump__MaybeCliquePtr_6)
#line 747 "dump.m"
{
#line 752 "dump.m"
  {
#line 752 "dump.m"
    MR_bool dump__succeeded;

#line 752 "dump.m"
    if ((dump__MaybeCliquePtr_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 752 "dump.m"
      {
#line 752 "dump.m"
      }
#line 752 "dump.m"
    else
#line 754 "dump.m"
      {
#line 754 "dump.m"
        MR_Word dump__CliquePtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__MaybeCliquePtr_6, (MR_Integer) 0)));
#line 754 "dump.m"
        MR_Integer dump__CliqueNum_9 = (MR_Integer) dump__CliquePtr_8;
#line 754 "dump.m"
        MR_String dump__V_20_20;
#line 754 "dump.m"
        MR_String dump__V_21_21;
#line 754 "dump.m"
        MR_String dump__V_23_23;
#line 754 "dump.m"
        MR_String dump__V_24_24;
#line 754 "dump.m"
        MR_String dump__V_25_25;
#line 754 "dump.m"
        MR_String dump__V_27_27;

#line 6077 "dump.c"
        {
#line 6079 "dump.c"
          dump__V_20_20 = mercury__string__int_to_string_1_f_0(dump__CliqueNum_9);
        }
#line 6082 "dump.c"
        {
#line 6084 "dump.c"
          dump__V_21_21 = mercury__string__f_43_43_2_f_0(dump__V_20_20, (MR_String) "\n");
        }
#line 6087 "dump.c"
        {
#line 6089 "dump.c"
          dump__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) " child: clique", dump__V_21_21);
        }
#line 6092 "dump.c"
        {
#line 6094 "dump.c"
          dump__V_24_24 = mercury__string__int_to_string_1_f_0(dump__Index_5);
        }
#line 6097 "dump.c"
        {
#line 6099 "dump.c"
          dump__V_25_25 = mercury__string__f_43_43_2_f_0(dump__V_24_24, dump__V_23_23);
        }
#line 6102 "dump.c"
        {
#line 6104 "dump.c"
          dump__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) "csd", dump__V_25_25);
        }
#line 6107 "dump.c"
        {
#line 6109 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_27_27);
#line 6111 "dump.c"
          return;
        }
#line 754 "dump.m"
      }
#line 752 "dump.m"
  }
#line 747 "dump.m"
}

#line 740 "dump.m"
static void MR_CALL 
dump__dump_clique_parent_4_p_0(
#line 740 "dump.m"
  MR_Integer dump__Index_5,
#line 740 "dump.m"
  MR_Word dump__CSDPtr_6)
#line 740 "dump.m"
{
#line 743 "dump.m"
  {
#line 743 "dump.m"
    MR_bool dump__succeeded;
#line 743 "dump.m"
    MR_Integer dump__CSDNum_8 = (MR_Integer) dump__CSDPtr_6;
#line 743 "dump.m"
    MR_String dump__V_19_19;
#line 743 "dump.m"
    MR_String dump__V_20_20;
#line 743 "dump.m"
    MR_String dump__V_22_22;
#line 743 "dump.m"
    MR_String dump__V_23_23;
#line 743 "dump.m"
    MR_String dump__V_24_24;
#line 743 "dump.m"
    MR_String dump__V_26_26;

#line 6149 "dump.c"
    {
#line 6151 "dump.c"
      dump__V_19_19 = mercury__string__int_to_string_1_f_0(dump__CSDNum_8);
    }
#line 6154 "dump.c"
    {
#line 6156 "dump.c"
      dump__V_20_20 = mercury__string__f_43_43_2_f_0(dump__V_19_19, (MR_String) "\n");
    }
#line 6159 "dump.c"
    {
#line 6161 "dump.c"
      dump__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) " parent: csd", dump__V_20_20);
    }
#line 6164 "dump.c"
    {
#line 6166 "dump.c"
      dump__V_23_23 = mercury__string__int_to_string_1_f_0(dump__Index_5);
    }
#line 6169 "dump.c"
    {
#line 6171 "dump.c"
      dump__V_24_24 = mercury__string__f_43_43_2_f_0(dump__V_23_23, dump__V_22_22);
    }
#line 6174 "dump.c"
    {
#line 6176 "dump.c"
      dump__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "clique", dump__V_24_24);
    }
#line 6179 "dump.c"
    {
#line 6181 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_26_26);
#line 6183 "dump.c"
      return;
    }
#line 743 "dump.m"
  }
#line 740 "dump.m"
}

#line 733 "dump.m"
static void MR_CALL 
dump__dump_pd_in_clique_3_p_0(
#line 733 "dump.m"
  MR_Word dump__PDPtr_4)
#line 733 "dump.m"
{
#line 735 "dump.m"
  {
#line 735 "dump.m"
    MR_bool dump__succeeded;
#line 735 "dump.m"
    MR_Integer dump__PDNum_6 = (MR_Integer) dump__PDPtr_4;

#line 737 "dump.m"
    {
#line 737 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) " pd");
    }
#line 738 "dump.m"
    {
#line 738 "dump.m"
      mercury__io__write_int_3_p_0(dump__PDNum_6);
#line 738 "dump.m"
      return;
    }
#line 735 "dump.m"
  }
#line 733 "dump.m"
}

#line 730 "dump.m"
static void MR_CALL 
dump__dump_clique_members_4_p_0_1(
#line 730 "dump.m"
  MR_Box dump__closure_arg,
#line 730 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 730 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 730 "dump.m"
  MR_Box * dump__wrapper_arg_3)
#line 730 "dump.m"
{
#line 730 "dump.m"
  {
#line 730 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 730 "dump.m"
    {
#line 730 "dump.m"
      dump__dump_pd_in_clique_3_p_0(((MR_Word) dump__wrapper_arg_1));
#line 730 "dump.m"
      return;
    }
#line 730 "dump.m"
  }
#line 730 "dump.m"
}

#line 725 "dump.m"
static void MR_CALL 
dump__dump_clique_members_4_p_0(
#line 725 "dump.m"
  MR_Integer dump__Index_5,
#line 725 "dump.m"
  MR_Word dump__CliqueMembers_6)
#line 725 "dump.m"
{
#line 728 "dump.m"
  {
#line 728 "dump.m"
    MR_bool dump__succeeded;
#line 728 "dump.m"
    MR_String dump__V_24_24;
#line 728 "dump.m"
    MR_String dump__V_25_25;
#line 728 "dump.m"
    MR_String dump__V_27_27;
#line 730 "dump.m"
    MR_Box dump__conv0_STATE_VARIABLE_IO_16_16;

#line 6274 "dump.c"
    {
#line 6276 "dump.c"
      dump__V_24_24 = mercury__string__int_to_string_1_f_0(dump__Index_5);
    }
#line 6279 "dump.c"
    {
#line 6281 "dump.c"
      dump__V_25_25 = mercury__string__f_43_43_2_f_0(dump__V_24_24, (MR_String) " members:");
    }
#line 6284 "dump.c"
    {
#line 6286 "dump.c"
      dump__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) "clique", dump__V_25_25);
    }
#line 6289 "dump.c"
    {
#line 6291 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_27_27);
    }
#line 730 "dump.m"
    {
#line 730 "dump.m"
      mercury__list__foldl_4_p_2((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &dump_scalar_common_2[14], dump__CliqueMembers_6, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_16_16);
    }
#line 731 "dump.m"
    {
#line 731 "dump.m"
      mercury__io__nl_2_p_0();
#line 731 "dump.m"
      return;
    }
#line 728 "dump.m"
  }
#line 725 "dump.m"
}

#line 718 "dump.m"
static void MR_CALL 
dump__dump_clique_index_entry_4_p_0(
#line 718 "dump.m"
  MR_Integer dump__Index_5,
#line 718 "dump.m"
  MR_Word dump__CliquePtr_6)
#line 718 "dump.m"
{
#line 721 "dump.m"
  {
#line 721 "dump.m"
    MR_bool dump__succeeded;
#line 721 "dump.m"
    MR_Integer dump__CliqueNum_8 = (MR_Integer) dump__CliquePtr_6;
#line 721 "dump.m"
    MR_String dump__V_19_19;
#line 721 "dump.m"
    MR_String dump__V_20_20;
#line 721 "dump.m"
    MR_String dump__V_22_22;
#line 721 "dump.m"
    MR_String dump__V_23_23;
#line 721 "dump.m"
    MR_String dump__V_24_24;
#line 721 "dump.m"
    MR_String dump__V_26_26;

#line 6339 "dump.c"
    {
#line 6341 "dump.c"
      dump__V_19_19 = mercury__string__int_to_string_1_f_0(dump__CliqueNum_8);
    }
#line 6344 "dump.c"
    {
#line 6346 "dump.c"
      dump__V_20_20 = mercury__string__f_43_43_2_f_0(dump__V_19_19, (MR_String) "\n");
    }
#line 6349 "dump.c"
    {
#line 6351 "dump.c"
      dump__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) " is in clique", dump__V_20_20);
    }
#line 6354 "dump.c"
    {
#line 6356 "dump.c"
      dump__V_23_23 = mercury__string__int_to_string_1_f_0(dump__Index_5);
    }
#line 6359 "dump.c"
    {
#line 6361 "dump.c"
      dump__V_24_24 = mercury__string__f_43_43_2_f_0(dump__V_23_23, dump__V_22_22);
    }
#line 6364 "dump.c"
    {
#line 6366 "dump.c"
      dump__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "pd", dump__V_24_24);
    }
#line 6369 "dump.c"
    {
#line 6371 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_26_26);
#line 6373 "dump.c"
      return;
    }
#line 721 "dump.m"
  }
#line 718 "dump.m"
}

#line 715 "dump.m"
static void MR_CALL 
dump__dump_deep_cliques_3_p_0_4(
#line 715 "dump.m"
  MR_Box dump__closure_arg,
#line 715 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 715 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 715 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 715 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 715 "dump.m"
{
#line 715 "dump.m"
  {
#line 715 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 715 "dump.m"
    {
#line 715 "dump.m"
      dump__dump_clique_maybe_child_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 715 "dump.m"
      return;
    }
#line 715 "dump.m"
  }
#line 715 "dump.m"
}

#line 709 "dump.m"
static void MR_CALL 
dump__dump_deep_cliques_3_p_0_3(
#line 709 "dump.m"
  MR_Box dump__closure_arg,
#line 709 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 709 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 709 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 709 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 709 "dump.m"
{
#line 709 "dump.m"
  {
#line 709 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 709 "dump.m"
    {
#line 709 "dump.m"
      dump__dump_clique_parent_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 709 "dump.m"
      return;
    }
#line 709 "dump.m"
  }
#line 709 "dump.m"
}

#line 704 "dump.m"
static void MR_CALL 
dump__dump_deep_cliques_3_p_0_2(
#line 704 "dump.m"
  MR_Box dump__closure_arg,
#line 704 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 704 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 704 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 704 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 704 "dump.m"
{
#line 704 "dump.m"
  {
#line 704 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 704 "dump.m"
    {
#line 704 "dump.m"
      dump__dump_clique_members_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 704 "dump.m"
      return;
    }
#line 704 "dump.m"
  }
#line 704 "dump.m"
}

#line 699 "dump.m"
static void MR_CALL 
dump__dump_deep_cliques_3_p_0_1(
#line 699 "dump.m"
  MR_Box dump__closure_arg,
#line 699 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 699 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 699 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 699 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 699 "dump.m"
{
#line 699 "dump.m"
  {
#line 699 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 699 "dump.m"
    {
#line 699 "dump.m"
      dump__dump_clique_index_entry_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 699 "dump.m"
      return;
    }
#line 699 "dump.m"
  }
#line 699 "dump.m"
}

#line 694 "dump.m"
static void MR_CALL 
dump__dump_deep_cliques_3_p_0(
#line 694 "dump.m"
  MR_Word dump__Deep_4)
#line 694 "dump.m"
{
#line 696 "dump.m"
  {
#line 696 "dump.m"
    MR_bool dump__succeeded;
#line 696 "dump.m"
    MR_Word dump__TypeCtorInfo_149_149;
#line 696 "dump.m"
    MR_ArrayPtr dump__CliqueIndex_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 696 "dump.m"
    MR_ArrayPtr dump__CliqueMembers_7;
#line 696 "dump.m"
    MR_ArrayPtr dump__CliqueParents_8;
#line 696 "dump.m"
    MR_ArrayPtr dump__CliqueMaybeChild_9;
#line 697 "dump.m"
    MR_Word dump__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 697 "dump.m"
    MR_String dump__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 697 "dump.m"
    MR_String dump__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 697 "dump.m"
    MR_String dump__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 697 "dump.m"
    MR_Word dump__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 697 "dump.m"
    MR_ArrayPtr dump__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 697 "dump.m"
    MR_ArrayPtr dump__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 697 "dump.m"
    MR_ArrayPtr dump__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 697 "dump.m"
    MR_ArrayPtr dump__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 697 "dump.m"
    MR_ArrayPtr dump__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 697 "dump.m"
    MR_ArrayPtr dump__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 697 "dump.m"
    MR_ArrayPtr dump__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 697 "dump.m"
    MR_ArrayPtr dump__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 697 "dump.m"
    MR_ArrayPtr dump__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 697 "dump.m"
    MR_ArrayPtr dump__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 697 "dump.m"
    MR_ArrayPtr dump__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 697 "dump.m"
    MR_ArrayPtr dump__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 697 "dump.m"
    MR_ArrayPtr dump__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 697 "dump.m"
    MR_ArrayPtr dump__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 697 "dump.m"
    MR_ArrayPtr dump__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 697 "dump.m"
    MR_ArrayPtr dump__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 697 "dump.m"
    MR_ArrayPtr dump__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 697 "dump.m"
    MR_ArrayPtr dump__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 697 "dump.m"
    MR_ArrayPtr dump__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 697 "dump.m"
    MR_Word dump__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 697 "dump.m"
    MR_Word dump__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 697 "dump.m"
    MR_Word dump__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 697 "dump.m"
    MR_Word dump__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 699 "dump.m"
    MR_Box dump__conv0_STATE_VARIABLE_IO_15_15;
#line 702 "dump.m"
    MR_Word dump__V_60_60;
#line 702 "dump.m"
    MR_String dump__V_61_61;
#line 702 "dump.m"
    MR_String dump__V_62_62;
#line 702 "dump.m"
    MR_String dump__V_63_63;
#line 702 "dump.m"
    MR_Word dump__V_64_64;
#line 702 "dump.m"
    MR_ArrayPtr dump__V_65_65;
#line 702 "dump.m"
    MR_ArrayPtr dump__V_66_66;
#line 702 "dump.m"
    MR_ArrayPtr dump__V_67_67;
#line 702 "dump.m"
    MR_ArrayPtr dump__V_68_68;
#line 702 "dump.m"
    MR_ArrayPtr dump__V_69_69;
#line 702 "dump.m"
    MR_ArrayPtr dump__V_70_70;
#line 702 "dump.m"
    MR_ArrayPtr dump__V_71_71;
#line 702 "dump.m"
    MR_ArrayPtr dump__V_72_72;
#line 702 "dump.m"
    MR_ArrayPtr dump__V_73_73;
#line 702 "dump.m"
    MR_ArrayPtr dump__V_74_74;
#line 702 "dump.m"
    MR_ArrayPtr dump__V_75_75;
#line 702 "dump.m"
    MR_ArrayPtr dump__V_76_76;
#line 702 "dump.m"
    MR_ArrayPtr dump__V_77_77;
#line 702 "dump.m"
    MR_ArrayPtr dump__V_78_78;
#line 702 "dump.m"
    MR_ArrayPtr dump__V_79_79;
#line 702 "dump.m"
    MR_ArrayPtr dump__V_80_80;
#line 702 "dump.m"
    MR_ArrayPtr dump__V_81_81;
#line 702 "dump.m"
    MR_ArrayPtr dump__V_82_82;
#line 702 "dump.m"
    MR_ArrayPtr dump__V_83_83;
#line 702 "dump.m"
    MR_Word dump__V_84_84;
#line 702 "dump.m"
    MR_Word dump__V_85_85;
#line 702 "dump.m"
    MR_Word dump__V_86_86;
#line 702 "dump.m"
    MR_Word dump__V_87_87;
#line 704 "dump.m"
    MR_Box dump__conv1_STATE_VARIABLE_IO_20_20;
#line 707 "dump.m"
    MR_Word dump__V_88_88;
#line 707 "dump.m"
    MR_String dump__V_89_89;
#line 707 "dump.m"
    MR_String dump__V_90_90;
#line 707 "dump.m"
    MR_String dump__V_91_91;
#line 707 "dump.m"
    MR_Word dump__V_92_92;
#line 707 "dump.m"
    MR_ArrayPtr dump__V_93_93;
#line 707 "dump.m"
    MR_ArrayPtr dump__V_94_94;
#line 707 "dump.m"
    MR_ArrayPtr dump__V_95_95;
#line 707 "dump.m"
    MR_ArrayPtr dump__V_96_96;
#line 707 "dump.m"
    MR_ArrayPtr dump__V_97_97;
#line 707 "dump.m"
    MR_ArrayPtr dump__V_98_98;
#line 707 "dump.m"
    MR_ArrayPtr dump__V_99_99;
#line 707 "dump.m"
    MR_ArrayPtr dump__V_100_100;
#line 707 "dump.m"
    MR_ArrayPtr dump__V_101_101;
#line 707 "dump.m"
    MR_ArrayPtr dump__V_102_102;
#line 707 "dump.m"
    MR_ArrayPtr dump__V_103_103;
#line 707 "dump.m"
    MR_ArrayPtr dump__V_104_104;
#line 707 "dump.m"
    MR_ArrayPtr dump__V_105_105;
#line 707 "dump.m"
    MR_ArrayPtr dump__V_106_106;
#line 707 "dump.m"
    MR_ArrayPtr dump__V_107_107;
#line 707 "dump.m"
    MR_ArrayPtr dump__V_108_108;
#line 707 "dump.m"
    MR_ArrayPtr dump__V_109_109;
#line 707 "dump.m"
    MR_ArrayPtr dump__V_110_110;
#line 707 "dump.m"
    MR_ArrayPtr dump__V_111_111;
#line 707 "dump.m"
    MR_Word dump__V_112_112;
#line 707 "dump.m"
    MR_Word dump__V_113_113;
#line 707 "dump.m"
    MR_Word dump__V_114_114;
#line 707 "dump.m"
    MR_Word dump__V_115_115;
#line 709 "dump.m"
    MR_Box dump__conv2_STATE_VARIABLE_IO_25_25;
#line 712 "dump.m"
    MR_Word dump__V_116_116;
#line 712 "dump.m"
    MR_String dump__V_117_117;
#line 712 "dump.m"
    MR_String dump__V_118_118;
#line 712 "dump.m"
    MR_String dump__V_119_119;
#line 712 "dump.m"
    MR_Word dump__V_120_120;
#line 712 "dump.m"
    MR_ArrayPtr dump__V_121_121;
#line 712 "dump.m"
    MR_ArrayPtr dump__V_122_122;
#line 712 "dump.m"
    MR_ArrayPtr dump__V_123_123;
#line 712 "dump.m"
    MR_ArrayPtr dump__V_124_124;
#line 712 "dump.m"
    MR_ArrayPtr dump__V_125_125;
#line 712 "dump.m"
    MR_ArrayPtr dump__V_126_126;
#line 712 "dump.m"
    MR_ArrayPtr dump__V_127_127;
#line 712 "dump.m"
    MR_ArrayPtr dump__V_128_128;
#line 712 "dump.m"
    MR_ArrayPtr dump__V_129_129;
#line 712 "dump.m"
    MR_ArrayPtr dump__V_130_130;
#line 712 "dump.m"
    MR_ArrayPtr dump__V_131_131;
#line 712 "dump.m"
    MR_ArrayPtr dump__V_132_132;
#line 712 "dump.m"
    MR_ArrayPtr dump__V_133_133;
#line 712 "dump.m"
    MR_ArrayPtr dump__V_134_134;
#line 712 "dump.m"
    MR_ArrayPtr dump__V_135_135;
#line 712 "dump.m"
    MR_ArrayPtr dump__V_136_136;
#line 712 "dump.m"
    MR_ArrayPtr dump__V_137_137;
#line 712 "dump.m"
    MR_ArrayPtr dump__V_138_138;
#line 712 "dump.m"
    MR_ArrayPtr dump__V_139_139;
#line 712 "dump.m"
    MR_Word dump__V_140_140;
#line 712 "dump.m"
    MR_Word dump__V_141_141;
#line 712 "dump.m"
    MR_Word dump__V_142_142;
#line 712 "dump.m"
    MR_Word dump__V_143_143;
#line 715 "dump.m"
    MR_Box dump__conv3_STATE_VARIABLE_IO_30_30;

#line 698 "dump.m"
    {
#line 698 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM PROC DYNAMIC TO CLIQUE:\n\n");
    }
#line 6768 "dump.c"
    dump__TypeCtorInfo_149_149 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 699 "dump.m"
    {
#line 699 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, dump__TypeCtorInfo_149_149, (MR_Word) &dump_scalar_common_2[10], (MR_ArrayPtr) dump__CliqueIndex_6, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_15_15);
    }
#line 700 "dump.m"
    {
#line 700 "dump.m"
      mercury__io__nl_2_p_0();
    }
#line 702 "dump.m"
    dump__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 702 "dump.m"
    dump__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 702 "dump.m"
    dump__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 702 "dump.m"
    dump__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 702 "dump.m"
    dump__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 702 "dump.m"
    dump__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 702 "dump.m"
    dump__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 702 "dump.m"
    dump__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 702 "dump.m"
    dump__V_68_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 702 "dump.m"
    dump__V_69_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 702 "dump.m"
    dump__CliqueMembers_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 702 "dump.m"
    dump__V_70_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 702 "dump.m"
    dump__V_71_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 702 "dump.m"
    dump__V_72_72 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 702 "dump.m"
    dump__V_73_73 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 702 "dump.m"
    dump__V_74_74 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 702 "dump.m"
    dump__V_75_75 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 702 "dump.m"
    dump__V_76_76 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 702 "dump.m"
    dump__V_77_77 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 702 "dump.m"
    dump__V_78_78 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 702 "dump.m"
    dump__V_79_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 702 "dump.m"
    dump__V_80_80 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 702 "dump.m"
    dump__V_81_81 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 702 "dump.m"
    dump__V_82_82 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 702 "dump.m"
    dump__V_83_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 702 "dump.m"
    dump__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 702 "dump.m"
    dump__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 702 "dump.m"
    dump__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 702 "dump.m"
    dump__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 703 "dump.m"
    {
#line 703 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM CLIQUE TO PROC DYNAMICS:\n\n");
    }
#line 704 "dump.m"
    {
#line 704 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &dump_scalar_common_1[2], dump__TypeCtorInfo_149_149, (MR_Word) &dump_scalar_common_2[11], (MR_ArrayPtr) dump__CliqueMembers_7, ((MR_Box) ((MR_Integer) 0)), &dump__conv1_STATE_VARIABLE_IO_20_20);
    }
#line 705 "dump.m"
    {
#line 705 "dump.m"
      mercury__io__nl_2_p_0();
    }
#line 707 "dump.m"
    dump__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 707 "dump.m"
    dump__V_89_89 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 707 "dump.m"
    dump__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 707 "dump.m"
    dump__V_91_91 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 707 "dump.m"
    dump__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 707 "dump.m"
    dump__V_93_93 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 707 "dump.m"
    dump__V_94_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 707 "dump.m"
    dump__V_95_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 707 "dump.m"
    dump__V_96_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 707 "dump.m"
    dump__V_97_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 707 "dump.m"
    dump__V_98_98 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 707 "dump.m"
    dump__CliqueParents_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 707 "dump.m"
    dump__V_99_99 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 707 "dump.m"
    dump__V_100_100 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 707 "dump.m"
    dump__V_101_101 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 707 "dump.m"
    dump__V_102_102 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 707 "dump.m"
    dump__V_103_103 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 707 "dump.m"
    dump__V_104_104 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 707 "dump.m"
    dump__V_105_105 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 707 "dump.m"
    dump__V_106_106 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 707 "dump.m"
    dump__V_107_107 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 707 "dump.m"
    dump__V_108_108 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 707 "dump.m"
    dump__V_109_109 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 707 "dump.m"
    dump__V_110_110 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 707 "dump.m"
    dump__V_111_111 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 707 "dump.m"
    dump__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 707 "dump.m"
    dump__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 707 "dump.m"
    dump__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 707 "dump.m"
    dump__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 708 "dump.m"
    {
#line 708 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM CLIQUE TO PARENT CSD:\n\n");
    }
#line 709 "dump.m"
    {
#line 709 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, dump__TypeCtorInfo_149_149, (MR_Word) &dump_scalar_common_2[12], (MR_ArrayPtr) dump__CliqueParents_8, ((MR_Box) ((MR_Integer) 0)), &dump__conv2_STATE_VARIABLE_IO_25_25);
    }
#line 710 "dump.m"
    {
#line 710 "dump.m"
      mercury__io__nl_2_p_0();
    }
#line 712 "dump.m"
    dump__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 712 "dump.m"
    dump__V_117_117 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 712 "dump.m"
    dump__V_118_118 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 712 "dump.m"
    dump__V_119_119 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 712 "dump.m"
    dump__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 712 "dump.m"
    dump__V_121_121 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 712 "dump.m"
    dump__V_122_122 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 712 "dump.m"
    dump__V_123_123 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 712 "dump.m"
    dump__V_124_124 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 712 "dump.m"
    dump__V_125_125 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 712 "dump.m"
    dump__V_126_126 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 712 "dump.m"
    dump__V_127_127 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 712 "dump.m"
    dump__CliqueMaybeChild_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 712 "dump.m"
    dump__V_128_128 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 712 "dump.m"
    dump__V_129_129 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 712 "dump.m"
    dump__V_130_130 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 712 "dump.m"
    dump__V_131_131 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 712 "dump.m"
    dump__V_132_132 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 712 "dump.m"
    dump__V_133_133 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 712 "dump.m"
    dump__V_134_134 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 712 "dump.m"
    dump__V_135_135 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 712 "dump.m"
    dump__V_136_136 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 712 "dump.m"
    dump__V_137_137 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 712 "dump.m"
    dump__V_138_138 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 712 "dump.m"
    dump__V_139_139 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 712 "dump.m"
    dump__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 712 "dump.m"
    dump__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 712 "dump.m"
    dump__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 712 "dump.m"
    dump__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 713 "dump.m"
    {
#line 713 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM CSD TO MAYBE CHILD CLIQUE:\n\n");
    }
#line 715 "dump.m"
    {
#line 715 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &dump_scalar_common_1[3], dump__TypeCtorInfo_149_149, (MR_Word) &dump_scalar_common_2[13], (MR_ArrayPtr) dump__CliqueMaybeChild_9, ((MR_Box) ((MR_Integer) 0)), &dump__conv3_STATE_VARIABLE_IO_30_30);
    }
#line 716 "dump.m"
    {
#line 716 "dump.m"
      mercury__io__nl_2_p_0();
#line 716 "dump.m"
      return;
    }
#line 696 "dump.m"
  }
#line 694 "dump.m"
}

#line 652 "dump.m"
static void MR_CALL 
dump__dump_call_site_kind_and_callee_3_p_0(
#line 652 "dump.m"
  MR_Word dump__HeadVar__1_1)
#line 652 "dump.m"
{
#line 655 "dump.m"
  {
#line 655 "dump.m"
    MR_bool dump__succeeded;

#line 655 "dump.m"
    if ((dump__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 664 "dump.m"
      {
#line 665 "dump.m"
        {
#line 665 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "callback");
#line 665 "dump.m"
          return;
        }
#line 664 "dump.m"
      }
#line 655 "dump.m"
    else
#line 655 "dump.m"
      if ((dump__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 660 "dump.m"
        {
#line 661 "dump.m"
          {
#line 661 "dump.m"
            mercury__io__write_string_3_p_0((MR_String) "higher_order_call");
#line 661 "dump.m"
            return;
          }
#line 660 "dump.m"
        }
#line 655 "dump.m"
      else
#line 655 "dump.m"
        if ((dump__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 662 "dump.m"
          {
#line 663 "dump.m"
            {
#line 663 "dump.m"
              mercury__io__write_string_3_p_0((MR_String) "method_call");
#line 663 "dump.m"
              return;
            }
#line 662 "dump.m"
          }
#line 655 "dump.m"
        else
#line 655 "dump.m"
          if ((dump__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 658 "dump.m"
            {
#line 659 "dump.m"
              {
#line 659 "dump.m"
                mercury__io__write_string_3_p_0((MR_String) "special_call");
#line 659 "dump.m"
                return;
              }
#line 658 "dump.m"
            }
#line 655 "dump.m"
          else
#line 655 "dump.m"
            {
#line 655 "dump.m"
              MR_Word dump__Ptr_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__1_1, (MR_Integer) 0)));
#line 655 "dump.m"
              MR_String dump__String_5 = ((MR_String) (MR_hl_field(MR_mktag(1), dump__HeadVar__1_1, (MR_Integer) 1)));
#line 655 "dump.m"
              MR_Integer dump__Val_7 = (MR_Integer) dump__Ptr_4;
#line 655 "dump.m"
              MR_String dump__V_38_38;
#line 655 "dump.m"
              MR_String dump__V_40_40;
#line 655 "dump.m"
              MR_String dump__V_41_41;
#line 655 "dump.m"
              MR_String dump__V_42_42;
#line 655 "dump.m"
              MR_String dump__V_44_44;

#line 7097 "dump.c"
              {
#line 7099 "dump.c"
                dump__V_38_38 = mercury__string__f_43_43_2_f_0(dump__String_5, (MR_String) "\")");
              }
#line 7102 "dump.c"
              {
#line 7104 "dump.c"
                dump__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) ", \"", dump__V_38_38);
              }
#line 7107 "dump.c"
              {
#line 7109 "dump.c"
                dump__V_41_41 = mercury__string__int_to_string_1_f_0(dump__Val_7);
              }
#line 7112 "dump.c"
              {
#line 7114 "dump.c"
                dump__V_42_42 = mercury__string__f_43_43_2_f_0(dump__V_41_41, dump__V_40_40);
              }
#line 7117 "dump.c"
              {
#line 7119 "dump.c"
                dump__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) "normal_call(", dump__V_42_42);
              }
#line 7122 "dump.c"
              {
#line 7124 "dump.c"
                mercury__io__write_string_3_p_0(dump__V_44_44);
#line 7126 "dump.c"
                return;
              }
#line 655 "dump.m"
            }
#line 655 "dump.m"
  }
#line 652 "dump.m"
}

#line 631 "dump.m"
static MR_String MR_CALL 
dump__dump_proc_id_1_f_0(
#line 631 "dump.m"
  MR_Word dump__Proc_1)
#line 631 "dump.m"
{
#line 633 "dump.m"
  {
#line 633 "dump.m"
    MR_bool dump__succeeded;
#line 633 "dump.m"
    MR_String dump__Str_2;

#line 633 "dump.m"
    if (((MR_tag((MR_Word) dump__Proc_1)) == (MR_mktag((MR_Integer) 0))))
#line 633 "dump.m"
      {
#line 633 "dump.m"
        MR_Word dump__PredOrFunc_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Proc_1, (MR_Integer) 0)));
#line 633 "dump.m"
        MR_String dump__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Proc_1, (MR_Integer) 3)));
#line 633 "dump.m"
        MR_Integer dump__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Proc_1, (MR_Integer) 4)));
#line 633 "dump.m"
        MR_Integer dump__Mode_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Proc_1, (MR_Integer) 5)));
#line 633 "dump.m"
        MR_String dump__Suffix_11;
#line 633 "dump.m"
        MR_String dump__V_36_36;
#line 633 "dump.m"
        MR_String dump__V_37_37;
#line 633 "dump.m"
        MR_String dump__V_39_39;
#line 633 "dump.m"
        MR_String dump__V_40_40;
#line 633 "dump.m"
        MR_String dump__V_41_41;
#line 633 "dump.m"
        MR_String dump__V_43_43;
#line 634 "dump.m"
        MR_String dump___DeclModule_6 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Proc_1, (MR_Integer) 1)));
#line 634 "dump.m"
        MR_String dump___DefnModule_7 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Proc_1, (MR_Integer) 2)));

#line 639 "dump.m"
        if ((dump__PredOrFunc_5 == (MR_Integer) 1))
#line 641 "dump.m"
          dump__Suffix_11 = (MR_String) "+1";
#line 639 "dump.m"
        else
#line 638 "dump.m"
          dump__Suffix_11 = (MR_String) "";
#line 7189 "dump.c"
        {
#line 7191 "dump.c"
          dump__V_36_36 = mercury__string__int_to_string_1_f_0(dump__Mode_10);
        }
#line 7194 "dump.c"
        {
#line 7196 "dump.c"
          dump__V_37_37 = mercury__string__f_43_43_2_f_0(dump__V_36_36, dump__Suffix_11);
        }
#line 7199 "dump.c"
        {
#line 7201 "dump.c"
          dump__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "-", dump__V_37_37);
        }
#line 7204 "dump.c"
        {
#line 7206 "dump.c"
          dump__V_40_40 = mercury__string__int_to_string_1_f_0(dump__Arity_9);
        }
#line 7209 "dump.c"
        {
#line 7211 "dump.c"
          dump__V_41_41 = mercury__string__f_43_43_2_f_0(dump__V_40_40, dump__V_39_39);
        }
#line 7214 "dump.c"
        {
#line 7216 "dump.c"
          dump__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "/", dump__V_41_41);
        }
#line 7219 "dump.c"
        {
#line 7221 "dump.c"
          return dump__Str_2 = mercury__string__f_43_43_2_f_0(dump__Name_8, dump__V_43_43);
        }
#line 633 "dump.m"
      }
#line 633 "dump.m"
    else
#line 645 "dump.m"
      {
#line 645 "dump.m"
        MR_String dump__Type_24 = ((MR_String) (MR_hl_field(MR_mktag(1), dump__Proc_1, (MR_Integer) 0)));
#line 645 "dump.m"
        MR_String dump__Name_27 = ((MR_String) (MR_hl_field(MR_mktag(1), dump__Proc_1, (MR_Integer) 3)));
#line 645 "dump.m"
        MR_String dump__V_45_45;
#line 645 "dump.m"
        MR_String dump__V_47_47;
#line 646 "dump.m"
        MR_String dump___TypeModule_25 = ((MR_String) (MR_hl_field(MR_mktag(1), dump__Proc_1, (MR_Integer) 1)));
#line 646 "dump.m"
        MR_String dump___DefModule_26 = ((MR_String) (MR_hl_field(MR_mktag(1), dump__Proc_1, (MR_Integer) 2)));
#line 646 "dump.m"
        MR_Integer dump___Arity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), dump__Proc_1, (MR_Integer) 4)));
#line 646 "dump.m"
        MR_Integer dump___Mode_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), dump__Proc_1, (MR_Integer) 5)));

#line 7247 "dump.c"
        {
#line 7249 "dump.c"
          dump__V_45_45 = mercury__string__f_43_43_2_f_0(dump__Type_24, (MR_String) "\'");
        }
#line 7252 "dump.c"
        {
#line 7254 "dump.c"
          dump__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) " predicate for type \140", dump__V_45_45);
        }
#line 7257 "dump.c"
        {
#line 7259 "dump.c"
          return dump__Str_2 = mercury__string__f_43_43_2_f_0(dump__Name_27, dump__V_47_47);
        }
#line 645 "dump.m"
      }
#line 633 "dump.m"
    return dump__Str_2;
#line 633 "dump.m"
  }
#line 631 "dump.m"
}

#line 615 "dump.m"
static void MR_CALL 
dump__dump_coverage_point_info_4_p_0(
#line 615 "dump.m"
  MR_Integer dump__Num_5,
#line 615 "dump.m"
  MR_Word dump__CoveragePointInfo_6)
#line 615 "dump.m"
{
#line 618 "dump.m"
  {
#line 618 "dump.m"
    MR_bool dump__succeeded;
#line 618 "dump.m"
    MR_String dump__CPInfoStr_8;
#line 618 "dump.m"
    MR_String dump__V_17_17;
#line 618 "dump.m"
    MR_String dump__V_19_19;
#line 618 "dump.m"
    MR_Word dump__RevPath_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CoveragePointInfo_6, (MR_Integer) 0)));
#line 618 "dump.m"
    MR_Word dump__CPType_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CoveragePointInfo_6, (MR_Integer) 1)));
#line 618 "dump.m"
    MR_String dump__PathString_24;
#line 618 "dump.m"
    MR_String dump__V_30_30;
#line 618 "dump.m"
    MR_String dump__V_36_36;
#line 618 "dump.m"
    MR_String dump__V_37_37;
#line 618 "dump.m"
    MR_String dump__V_39_39;
#line 618 "dump.m"
    MR_String dump__V_40_40;
#line 618 "dump.m"
    MR_String dump__V_41_41;

#line 625 "dump.m"
    {
#line 625 "dump.m"
      dump__PathString_24 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(dump__RevPath_22);
    }
#line 627 "dump.m"
    {
#line 627 "dump.m"
      dump__V_30_30 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0, ((MR_Box) (dump__CPType_23)));
    }
#line 7319 "dump.c"
    {
#line 7321 "dump.c"
      dump__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) ", ", dump__PathString_24);
    }
#line 7324 "dump.c"
    {
#line 7326 "dump.c"
      dump__V_37_37 = mercury__string__f_43_43_2_f_0(dump__V_30_30, dump__V_36_36);
    }
#line 7329 "dump.c"
    {
#line 7331 "dump.c"
      dump__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "]: ", dump__V_37_37);
    }
#line 7334 "dump.c"
    {
#line 7336 "dump.c"
      dump__V_40_40 = mercury__string__int_to_string_1_f_0(dump__Num_5);
    }
#line 7339 "dump.c"
    {
#line 7341 "dump.c"
      dump__V_41_41 = mercury__string__f_43_43_2_f_0(dump__V_40_40, dump__V_39_39);
    }
#line 7344 "dump.c"
    {
#line 7346 "dump.c"
      dump__CPInfoStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "coverage_point[", dump__V_41_41);
    }
#line 7349 "dump.c"
    {
#line 7351 "dump.c"
      dump__V_17_17 = mercury__string__f_43_43_2_f_0(dump__CPInfoStr_8, (MR_String) "\n");
    }
#line 7354 "dump.c"
    {
#line 7356 "dump.c"
      dump__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "\t", dump__V_17_17);
    }
#line 7359 "dump.c"
    {
#line 7361 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_19_19);
#line 7363 "dump.c"
      return;
    }
#line 618 "dump.m"
  }
#line 615 "dump.m"
}

#line 605 "dump.m"
static void MR_CALL 
dump__dump_coverage_point_5_p_0(
#line 605 "dump.m"
  MR_Word dump__CoveragePoint_6,
#line 605 "dump.m"
  MR_Integer dump__STATE_VARIABLE_Num_0_14,
#line 605 "dump.m"
  MR_Integer * dump__STATE_VARIABLE_Num_15)
#line 605 "dump.m"
{
#line 608 "dump.m"
  {
#line 608 "dump.m"
    MR_bool dump__succeeded;
#line 608 "dump.m"
    MR_Integer dump__Count_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__CoveragePoint_6, (MR_Integer) 0)));
#line 608 "dump.m"
    MR_String dump__CPInfoStr_13;
#line 608 "dump.m"
    MR_String dump__V_28_28;
#line 608 "dump.m"
    MR_String dump__V_29_29;
#line 608 "dump.m"
    MR_String dump__V_31_31;
#line 608 "dump.m"
    MR_String dump__V_32_32;
#line 608 "dump.m"
    MR_String dump__V_34_34;
#line 608 "dump.m"
    MR_Word dump__RevPath_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CoveragePoint_6, (MR_Integer) 1)));
#line 608 "dump.m"
    MR_Word dump__CPType_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CoveragePoint_6, (MR_Integer) 2)));
#line 608 "dump.m"
    MR_String dump__PathString_39;
#line 608 "dump.m"
    MR_String dump__V_45_45;
#line 608 "dump.m"
    MR_String dump__V_51_51;
#line 608 "dump.m"
    MR_String dump__V_52_52;
#line 608 "dump.m"
    MR_String dump__V_54_54;
#line 608 "dump.m"
    MR_String dump__V_55_55;
#line 608 "dump.m"
    MR_String dump__V_56_56;

#line 625 "dump.m"
    {
#line 625 "dump.m"
      dump__PathString_39 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(dump__RevPath_37);
    }
#line 627 "dump.m"
    {
#line 627 "dump.m"
      dump__V_45_45 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0, ((MR_Box) (dump__CPType_38)));
    }
#line 7429 "dump.c"
    {
#line 7431 "dump.c"
      dump__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) ", ", dump__PathString_39);
    }
#line 7434 "dump.c"
    {
#line 7436 "dump.c"
      dump__V_52_52 = mercury__string__f_43_43_2_f_0(dump__V_45_45, dump__V_51_51);
    }
#line 7439 "dump.c"
    {
#line 7441 "dump.c"
      dump__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "]: ", dump__V_52_52);
    }
#line 7444 "dump.c"
    {
#line 7446 "dump.c"
      dump__V_55_55 = mercury__string__int_to_string_1_f_0(dump__STATE_VARIABLE_Num_0_14);
    }
#line 7449 "dump.c"
    {
#line 7451 "dump.c"
      dump__V_56_56 = mercury__string__f_43_43_2_f_0(dump__V_55_55, dump__V_54_54);
    }
#line 7454 "dump.c"
    {
#line 7456 "dump.c"
      dump__CPInfoStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "coverage_point[", dump__V_56_56);
    }
#line 7459 "dump.c"
    {
#line 7461 "dump.c"
      dump__V_28_28 = mercury__string__int_to_string_1_f_0(dump__Count_9);
    }
#line 7464 "dump.c"
    {
#line 7466 "dump.c"
      dump__V_29_29 = mercury__string__f_43_43_2_f_0(dump__V_28_28, (MR_String) "\n");
    }
#line 7469 "dump.c"
    {
#line 7471 "dump.c"
      dump__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) ": ", dump__V_29_29);
    }
#line 7474 "dump.c"
    {
#line 7476 "dump.c"
      dump__V_32_32 = mercury__string__f_43_43_2_f_0(dump__CPInfoStr_13, dump__V_31_31);
    }
#line 7479 "dump.c"
    {
#line 7481 "dump.c"
      dump__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) "\t", dump__V_32_32);
    }
#line 7484 "dump.c"
    {
#line 7486 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_34_34);
    }
#line 613 "dump.m"
    *dump__STATE_VARIABLE_Num_15 = (dump__STATE_VARIABLE_Num_0_14 + (MR_Integer) 1);
#line 608 "dump.m"
  }
#line 605 "dump.m"
}

#line 598 "dump.m"
static void MR_CALL 
dump__dump_proc_static_call_sites_4_p_0(
#line 598 "dump.m"
  MR_Integer dump__Slot_5,
#line 598 "dump.m"
  MR_Word dump__CSSPtr_6)
#line 598 "dump.m"
{
#line 601 "dump.m"
  {
#line 601 "dump.m"
    MR_bool dump__succeeded;
#line 601 "dump.m"
    MR_Integer dump__CSSI_8 = (MR_Integer) dump__CSSPtr_6;
#line 601 "dump.m"
    MR_String dump__V_19_19;
#line 601 "dump.m"
    MR_String dump__V_20_20;
#line 601 "dump.m"
    MR_String dump__V_22_22;
#line 601 "dump.m"
    MR_String dump__V_23_23;
#line 601 "dump.m"
    MR_String dump__V_24_24;
#line 601 "dump.m"
    MR_String dump__V_26_26;

#line 7524 "dump.c"
    {
#line 7526 "dump.c"
      dump__V_19_19 = mercury__string__int_to_string_1_f_0(dump__CSSI_8);
    }
#line 7529 "dump.c"
    {
#line 7531 "dump.c"
      dump__V_20_20 = mercury__string__f_43_43_2_f_0(dump__V_19_19, (MR_String) "\n");
    }
#line 7534 "dump.c"
    {
#line 7536 "dump.c"
      dump__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "]: css", dump__V_20_20);
    }
#line 7539 "dump.c"
    {
#line 7541 "dump.c"
      dump__V_23_23 = mercury__string__int_to_string_1_f_0(dump__Slot_5);
    }
#line 7544 "dump.c"
    {
#line 7546 "dump.c"
      dump__V_24_24 = mercury__string__f_43_43_2_f_0(dump__V_23_23, dump__V_22_22);
    }
#line 7549 "dump.c"
    {
#line 7551 "dump.c"
      dump__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "\tps_site[", dump__V_24_24);
    }
#line 7554 "dump.c"
    {
#line 7556 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_26_26);
#line 7558 "dump.c"
      return;
    }
#line 601 "dump.m"
  }
#line 598 "dump.m"
}

#line 585 "dump.m"
static void MR_CALL 
dump__dump_proc_static_5_p_0_3(
#line 585 "dump.m"
  MR_Box dump__closure_arg,
#line 585 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 585 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 585 "dump.m"
  MR_Box * dump__wrapper_arg_3,
#line 585 "dump.m"
  MR_Box dump__wrapper_arg_4,
#line 585 "dump.m"
  MR_Box * dump__wrapper_arg_5)
#line 585 "dump.m"
{
#line 585 "dump.m"
  {
#line 585 "dump.m"
    MR_Box dump__closure = dump__closure_arg;
#line 585 "dump.m"
    MR_Integer dump__conv2_STATE_VARIABLE_Num_15;

#line 585 "dump.m"
    {
#line 585 "dump.m"
      dump__dump_coverage_point_5_p_0(((MR_Word) dump__wrapper_arg_1), ((MR_Integer) dump__wrapper_arg_2), &dump__conv2_STATE_VARIABLE_Num_15);
    }
#line 585 "dump.m"
    *dump__wrapper_arg_3 = ((MR_Box) (dump__conv2_STATE_VARIABLE_Num_15));
#line 585 "dump.m"
  }
#line 585 "dump.m"
}

#line 590 "dump.m"
static void MR_CALL 
dump__dump_proc_static_5_p_0_2(
#line 590 "dump.m"
  MR_Box dump__closure_arg,
#line 590 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 590 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 590 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 590 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 590 "dump.m"
{
#line 590 "dump.m"
  {
#line 590 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 590 "dump.m"
    {
#line 590 "dump.m"
      dump__dump_coverage_point_info_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 590 "dump.m"
      return;
    }
#line 590 "dump.m"
  }
#line 590 "dump.m"
}

#line 580 "dump.m"
static void MR_CALL 
dump__dump_proc_static_5_p_0_1(
#line 580 "dump.m"
  MR_Box dump__closure_arg,
#line 580 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 580 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 580 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 580 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 580 "dump.m"
{
#line 580 "dump.m"
  {
#line 580 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 580 "dump.m"
    {
#line 580 "dump.m"
      dump__dump_proc_static_call_sites_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 580 "dump.m"
      return;
    }
#line 580 "dump.m"
  }
#line 580 "dump.m"
}

#line 530 "dump.m"
static void MR_CALL 
dump__dump_proc_static_5_p_0(
#line 530 "dump.m"
  MR_Word dump__Restriction_6,
#line 530 "dump.m"
  MR_Integer dump__Index_7,
#line 530 "dump.m"
  MR_Word dump__ProcStatic_8)
#line 530 "dump.m"
{
#line 594 "dump.m"
  {
#line 594 "dump.m"
    MR_bool dump__succeeded;

#line 537 "dump.m"
    if ((dump__Restriction_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 536 "dump.m"
      dump__succeeded = MR_TRUE;
#line 537 "dump.m"
    else
#line 538 "dump.m"
      {
#line 538 "dump.m"
        MR_Word dump__UsedProcStatics_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__Restriction_6, (MR_Integer) 0)));
#line 538 "dump.m"
        MR_Word dump__V_31_31 = (MR_Word) dump__Index_7;
#line 538 "dump.m"
        MR_Word dump__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__Restriction_6, (MR_Integer) 1)));

#line 539 "dump.m"
        {
#line 539 "dump.m"
          dump__succeeded = mercury__set__member_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, ((MR_Box) (dump__V_31_31)), dump__UsedProcStatics_10);
        }
#line 538 "dump.m"
      }
#line 594 "dump.m"
    if (dump__succeeded)
#line 545 "dump.m"
      {
#line 545 "dump.m"
        MR_Word dump__TypeCtorInfo_90_90;
#line 545 "dump.m"
        MR_Word dump__Id_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 0)));
#line 545 "dump.m"
        MR_String dump__DeclModule_13 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 1)));
#line 545 "dump.m"
        MR_String dump__QualRefinedId_15 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 3)));
#line 545 "dump.m"
        MR_String dump__RawId_16 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 4)));
#line 545 "dump.m"
        MR_String dump__FileName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 5)));
#line 545 "dump.m"
        MR_Integer dump__LineNumber_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 6)));
#line 545 "dump.m"
        MR_Word dump__InInterface_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 7)));
#line 545 "dump.m"
        MR_ArrayPtr dump__Sites_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 8)));
#line 545 "dump.m"
        MR_ArrayPtr dump__CoveragePointInfos_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 9)));
#line 545 "dump.m"
        MR_Word dump__MaybeCoveragePoints_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 10)));
#line 545 "dump.m"
        MR_Word dump__IsZeroed_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 11)));
#line 545 "dump.m"
        MR_String dump__IdStr_24;
#line 545 "dump.m"
        MR_String dump__IsZeroStr_25;
#line 545 "dump.m"
        MR_String dump__V_106_106;
#line 545 "dump.m"
        MR_String dump__V_107_107;
#line 545 "dump.m"
        MR_String dump__V_109_109;
#line 545 "dump.m"
        MR_String dump__V_111_111;
#line 545 "dump.m"
        MR_String dump__V_113_113;
#line 545 "dump.m"
        MR_String dump__V_115_115;
#line 545 "dump.m"
        MR_String dump__V_125_125;
#line 545 "dump.m"
        MR_String dump__V_126_126;
#line 545 "dump.m"
        MR_String dump__V_128_128;
#line 545 "dump.m"
        MR_String dump__V_129_129;
#line 545 "dump.m"
        MR_String dump__V_131_131;
#line 545 "dump.m"
        MR_String dump__V_133_133;
#line 545 "dump.m"
        MR_String dump__V_135_135;
#line 542 "dump.m"
        MR_String dump___UnQualRefinedId_14 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 2)));
#line 551 "dump.m"
        MR_String dump__V_48_48;
#line 551 "dump.m"
        MR_String dump__V_104_104;
#line 580 "dump.m"
        MR_Box dump__conv0_STATE_VARIABLE_IO_75_75;

#line 546 "dump.m"
        {
#line 546 "dump.m"
          dump__IdStr_24 = dump__dump_proc_id_1_f_0(dump__Id_12);
        }
#line 7776 "dump.c"
        {
#line 7778 "dump.c"
          dump__V_106_106 = mercury__string__int_to_string_1_f_0(dump__Index_7);
        }
#line 7781 "dump.c"
        {
#line 7783 "dump.c"
          dump__V_107_107 = mercury__string__f_43_43_2_f_0(dump__V_106_106, (MR_String) ":\n");
        }
#line 7786 "dump.c"
        {
#line 7788 "dump.c"
          dump__V_109_109 = mercury__string__f_43_43_2_f_0((MR_String) "ps", dump__V_107_107);
        }
#line 7791 "dump.c"
        {
#line 7793 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_109_109);
        }
#line 7796 "dump.c"
        {
#line 7798 "dump.c"
          dump__V_111_111 = mercury__string__f_43_43_2_f_0((MR_String) "\tps_id\t\t= ", dump__IdStr_24);
        }
#line 7801 "dump.c"
        {
#line 7803 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_111_111);
        }
#line 549 "dump.m"
        {
#line 549 "dump.m"
          mercury__io__nl_2_p_0();
        }
#line 7811 "dump.c"
        {
#line 7813 "dump.c"
          dump__V_113_113 = mercury__string__f_43_43_2_f_0(dump__DeclModule_13, (MR_String) "\n");
        }
#line 7816 "dump.c"
        {
#line 7818 "dump.c"
          dump__V_115_115 = mercury__string__f_43_43_2_f_0((MR_String) "\tps_decl_module\t= ", dump__V_113_113);
        }
#line 7821 "dump.c"
        {
#line 7823 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_115_115);
        }
#line 551 "dump.m"
        {
#line 551 "dump.m"
          dump__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) ".", dump__IdStr_24);
        }
#line 551 "dump.m"
        {
#line 551 "dump.m"
          dump__V_104_104 = mercury__string__f_43_43_2_f_0(dump__DeclModule_13, dump__V_48_48);
        }
#line 551 "dump.m"
        dump__succeeded = (strcmp(dump__QualRefinedId_15, dump__V_104_104) == 0);
#line 555 "dump.m"
        if (dump__succeeded)
#line 551 "dump.m"
          {
#line 551 "dump.m"
          }
#line 555 "dump.m"
        else
#line 556 "dump.m"
          {
#line 556 "dump.m"
            MR_String dump__V_117_117;
#line 556 "dump.m"
            MR_String dump__V_119_119;

#line 7853 "dump.c"
            {
#line 7855 "dump.c"
              dump__V_117_117 = mercury__string__f_43_43_2_f_0(dump__QualRefinedId_15, (MR_String) "\n");
            }
#line 7858 "dump.c"
            {
#line 7860 "dump.c"
              dump__V_119_119 = mercury__string__f_43_43_2_f_0((MR_String) "\tps_q_refined_id\t= ", dump__V_117_117);
            }
#line 7863 "dump.c"
            {
#line 7865 "dump.c"
              mercury__io__write_string_3_p_0(dump__V_119_119);
            }
#line 556 "dump.m"
          }
#line 558 "dump.m"
        dump__succeeded = (strcmp(dump__QualRefinedId_15, dump__RawId_16) == 0);
#line 558 "dump.m"
        dump__succeeded = !(dump__succeeded);
#line 562 "dump.m"
        if (dump__succeeded)
#line 558 "dump.m"
          {
#line 558 "dump.m"
          }
#line 562 "dump.m"
        else
#line 563 "dump.m"
          {
#line 563 "dump.m"
            MR_String dump__V_121_121;
#line 563 "dump.m"
            MR_String dump__V_123_123;

#line 7889 "dump.c"
            {
#line 7891 "dump.c"
              dump__V_121_121 = mercury__string__f_43_43_2_f_0(dump__RawId_16, (MR_String) "\n");
            }
#line 7894 "dump.c"
            {
#line 7896 "dump.c"
              dump__V_123_123 = mercury__string__f_43_43_2_f_0((MR_String) "\tps_raw_id\t= ", dump__V_121_121);
            }
#line 7899 "dump.c"
            {
#line 7901 "dump.c"
              mercury__io__write_string_3_p_0(dump__V_123_123);
            }
#line 563 "dump.m"
          }
#line 7906 "dump.c"
        {
#line 7908 "dump.c"
          dump__V_125_125 = mercury__string__int_to_string_1_f_0(dump__LineNumber_18);
        }
#line 7911 "dump.c"
        {
#line 7913 "dump.c"
          dump__V_126_126 = mercury__string__f_43_43_2_f_0(dump__V_125_125, (MR_String) "\n");
        }
#line 7916 "dump.c"
        {
#line 7918 "dump.c"
          dump__V_128_128 = mercury__string__f_43_43_2_f_0((MR_String) ":", dump__V_126_126);
        }
#line 7921 "dump.c"
        {
#line 7923 "dump.c"
          dump__V_129_129 = mercury__string__f_43_43_2_f_0(dump__FileName_17, dump__V_128_128);
        }
#line 7926 "dump.c"
        {
#line 7928 "dump.c"
          dump__V_131_131 = mercury__string__f_43_43_2_f_0((MR_String) "\tlocation\t= ", dump__V_129_129);
        }
#line 7931 "dump.c"
        {
#line 7933 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_131_131);
        }
#line 569 "dump.m"
        if ((dump__InInterface_19 == (MR_Integer) 0))
#line 570 "dump.m"
          {
#line 570 "dump.m"
          }
#line 569 "dump.m"
        else
#line 567 "dump.m"
          {
#line 568 "dump.m"
            {
#line 568 "dump.m"
              mercury__io__write_string_3_p_0((MR_String) "\tin_interface\n");
            }
#line 567 "dump.m"
          }
#line 575 "dump.m"
        if ((dump__IsZeroed_23 == (MR_Integer) 1))
#line 577 "dump.m"
          dump__IsZeroStr_25 = (MR_String) "not_zeroed";
#line 575 "dump.m"
        else
#line 574 "dump.m"
          dump__IsZeroStr_25 = (MR_String) "zeroed";
#line 7961 "dump.c"
        {
#line 7963 "dump.c"
          dump__V_133_133 = mercury__string__f_43_43_2_f_0(dump__IsZeroStr_25, (MR_String) "\n");
        }
#line 7966 "dump.c"
        {
#line 7968 "dump.c"
          dump__V_135_135 = mercury__string__f_43_43_2_f_0((MR_String) "\t", dump__V_133_133);
        }
#line 7971 "dump.c"
        {
#line 7973 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_135_135);
        }
#line 7976 "dump.c"
        dump__TypeCtorInfo_90_90 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 580 "dump.m"
        {
#line 580 "dump.m"
          array_util__array_foldl_from_0_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, dump__TypeCtorInfo_90_90, (MR_Word) &dump_scalar_common_2[7], (MR_ArrayPtr) dump__Sites_20, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_75_75);
        }
#line 586 "dump.m"
        if ((dump__MaybeCoveragePoints_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 587 "dump.m"
          {
#line 590 "dump.m"
            MR_Box dump__conv1_STATE_VARIABLE_IO_82_82;

#line 588 "dump.m"
            {
#line 588 "dump.m"
              mercury__io__write_string_3_p_0((MR_String) "\tCoverage counts not present in proc static\n");
            }
#line 590 "dump.m"
            {
#line 590 "dump.m"
              array_util__array_foldl_from_0_4_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, dump__TypeCtorInfo_90_90, (MR_Word) &dump_scalar_common_2[8], (MR_ArrayPtr) dump__CoveragePointInfos_21, ((MR_Box) ((MR_Integer) 0)), &dump__conv1_STATE_VARIABLE_IO_82_82);
            }
#line 587 "dump.m"
          }
#line 586 "dump.m"
        else
#line 582 "dump.m"
          {
#line 582 "dump.m"
            MR_ArrayPtr dump__CoveragePointsArray_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), dump__MaybeCoveragePoints_22, (MR_Integer) 0)));
#line 582 "dump.m"
            MR_Word dump__CoveragePoints_27;
#line 585 "dump.m"
            MR_Integer dump__V_28_28;
#line 585 "dump.m"
            MR_Box dump__conv4_V_28_28;
#line 585 "dump.m"
            MR_Box dump__conv3_STATE_VARIABLE_IO_82_82;

#line 583 "dump.m"
            {
#line 583 "dump.m"
              coverage__coverage_point_arrays_to_list_3_p_0(dump__CoveragePointInfos_21, dump__CoveragePointsArray_26, &dump__CoveragePoints_27);
            }
#line 585 "dump.m"
            {
#line 585 "dump.m"
              mercury__list__foldl2_6_p_2((MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, dump__TypeCtorInfo_90_90, (MR_Word) &dump_scalar_common_2[9], dump__CoveragePoints_27, ((MR_Box) ((MR_Integer) 0)), &dump__conv4_V_28_28, ((MR_Box) ((MR_Integer) 0)), &dump__conv3_STATE_VARIABLE_IO_82_82);
            }
#line 585 "dump.m"
            dump__V_28_28 = ((MR_Integer) dump__conv4_V_28_28);
#line 582 "dump.m"
          }
#line 593 "dump.m"
        {
#line 593 "dump.m"
          mercury__io__nl_2_p_0();
#line 593 "dump.m"
          return;
        }
#line 545 "dump.m"
      }
#line 594 "dump.m"
    else
#line 593 "dump.m"
      {
#line 593 "dump.m"
      }
#line 594 "dump.m"
  }
#line 530 "dump.m"
}

#line 527 "dump.m"
static void MR_CALL 
dump__dump_init_proc_statics_4_p_0_1(
#line 527 "dump.m"
  MR_Box dump__closure_arg,
#line 527 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 527 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 527 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 527 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 527 "dump.m"
{
#line 527 "dump.m"
  {
#line 527 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 527 "dump.m"
    {
#line 527 "dump.m"
      dump__dump_proc_static_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 527 "dump.m"
      return;
    }
#line 527 "dump.m"
  }
#line 527 "dump.m"
}

#line 522 "dump.m"
static void MR_CALL 
dump__dump_init_proc_statics_4_p_0(
#line 522 "dump.m"
  MR_Word dump__Restriction_5,
#line 522 "dump.m"
  MR_ArrayPtr dump__ProcStatics_6)
#line 522 "dump.m"
{
#line 525 "dump.m"
  {
#line 525 "dump.m"
    MR_bool dump__succeeded;
#line 525 "dump.m"
    MR_Word dump__V_12_12;
#line 527 "dump.m"
    MR_Box dump__conv0_STATE_VARIABLE_IO_13_13;

#line 526 "dump.m"
    {
#line 526 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION PROC STATICS:\n\n");
    }
#line 527 "dump.m"
    {
#line 527 "dump.m"
      dump__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 527 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 0) = ((MR_Box) (&dump_scalar_common_6[3]));
#line 527 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 1) = ((MR_Box) (dump__dump_init_proc_statics_4_p_0_1));
#line 527 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 527 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 3) = ((MR_Box) (dump__Restriction_5));
#line 527 "dump.m"
    }
#line 527 "dump.m"
    {
#line 527 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, dump__V_12_12, (MR_ArrayPtr) dump__ProcStatics_6, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_13_13);
    }
#line 528 "dump.m"
    {
#line 528 "dump.m"
      mercury__io__nl_2_p_0();
#line 528 "dump.m"
      return;
    }
#line 525 "dump.m"
  }
#line 522 "dump.m"
}

#line 491 "dump.m"
static void MR_CALL 
dump__dump_call_site_static_5_p_0(
#line 491 "dump.m"
  MR_Word dump__Restriction_6,
#line 491 "dump.m"
  MR_Integer dump__Index_7,
#line 491 "dump.m"
  MR_Word dump__CallSiteStatic_8)
#line 491 "dump.m"
{
#line 516 "dump.m"
  {
#line 516 "dump.m"
    MR_bool dump__succeeded;

#line 498 "dump.m"
    if ((dump__Restriction_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 497 "dump.m"
      dump__succeeded = MR_TRUE;
#line 498 "dump.m"
    else
#line 499 "dump.m"
      {
#line 499 "dump.m"
        MR_Word dump__UsedCallSiteStatics_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__Restriction_6, (MR_Integer) 1)));
#line 499 "dump.m"
        MR_Word dump__V_21_21 = (MR_Word) dump__Index_7;
#line 499 "dump.m"
        MR_Word dump__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__Restriction_6, (MR_Integer) 0)));

#line 500 "dump.m"
        {
#line 500 "dump.m"
          dump__succeeded = mercury__set__member_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, ((MR_Box) (dump__V_21_21)), dump__UsedCallSiteStatics_11);
        }
#line 499 "dump.m"
      }
#line 516 "dump.m"
    if (dump__succeeded)
#line 504 "dump.m"
      {
#line 504 "dump.m"
        MR_Word dump__ContainerPSPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CallSiteStatic_8, (MR_Integer) 0)));
#line 504 "dump.m"
        MR_Integer dump__SlotNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__CallSiteStatic_8, (MR_Integer) 1)));
#line 504 "dump.m"
        MR_Word dump__Kind_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CallSiteStatic_8, (MR_Integer) 2)));
#line 504 "dump.m"
        MR_Integer dump__LineNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__CallSiteStatic_8, (MR_Integer) 3)));
#line 504 "dump.m"
        MR_Word dump__GoalPath_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CallSiteStatic_8, (MR_Integer) 4)));
#line 504 "dump.m"
        MR_Integer dump__ContainerPSI_17 = (MR_Integer) dump__ContainerPSPtr_12;
#line 504 "dump.m"
        MR_String dump__GoalPathString_18;
#line 504 "dump.m"
        MR_String dump__V_54_54;
#line 504 "dump.m"
        MR_String dump__V_55_55;
#line 504 "dump.m"
        MR_String dump__V_57_57;
#line 504 "dump.m"
        MR_String dump__V_59_59;
#line 504 "dump.m"
        MR_String dump__V_60_60;
#line 504 "dump.m"
        MR_String dump__V_62_62;
#line 504 "dump.m"
        MR_String dump__V_64_64;
#line 504 "dump.m"
        MR_String dump__V_65_65;
#line 504 "dump.m"
        MR_String dump__V_67_67;
#line 504 "dump.m"
        MR_String dump__V_69_69;
#line 504 "dump.m"
        MR_String dump__V_70_70;
#line 504 "dump.m"
        MR_String dump__V_72_72;
#line 504 "dump.m"
        MR_String dump__V_74_74;
#line 504 "dump.m"
        MR_String dump__V_76_76;

#line 506 "dump.m"
        {
#line 506 "dump.m"
          dump__GoalPathString_18 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(dump__GoalPath_16);
        }
#line 8227 "dump.c"
        {
#line 8229 "dump.c"
          dump__V_54_54 = mercury__string__int_to_string_1_f_0(dump__Index_7);
        }
#line 8232 "dump.c"
        {
#line 8234 "dump.c"
          dump__V_55_55 = mercury__string__f_43_43_2_f_0(dump__V_54_54, (MR_String) ":\n");
        }
#line 8237 "dump.c"
        {
#line 8239 "dump.c"
          dump__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) "css", dump__V_55_55);
        }
#line 8242 "dump.c"
        {
#line 8244 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_57_57);
        }
#line 8247 "dump.c"
        {
#line 8249 "dump.c"
          dump__V_59_59 = mercury__string__int_to_string_1_f_0(dump__ContainerPSI_17);
        }
#line 8252 "dump.c"
        {
#line 8254 "dump.c"
          dump__V_60_60 = mercury__string__f_43_43_2_f_0(dump__V_59_59, (MR_String) "\n");
        }
#line 8257 "dump.c"
        {
#line 8259 "dump.c"
          dump__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) "\tcss_container\t= ps", dump__V_60_60);
        }
#line 8262 "dump.c"
        {
#line 8264 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_62_62);
        }
#line 8267 "dump.c"
        {
#line 8269 "dump.c"
          dump__V_64_64 = mercury__string__int_to_string_1_f_0(dump__SlotNum_13);
        }
#line 8272 "dump.c"
        {
#line 8274 "dump.c"
          dump__V_65_65 = mercury__string__f_43_43_2_f_0(dump__V_64_64, (MR_String) ">\n");
        }
#line 8277 "dump.c"
        {
#line 8279 "dump.c"
          dump__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "\tcss_slot_num\t= <", dump__V_65_65);
        }
#line 8282 "dump.c"
        {
#line 8284 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_67_67);
        }
#line 8287 "dump.c"
        {
#line 8289 "dump.c"
          dump__V_69_69 = mercury__string__int_to_string_1_f_0(dump__LineNum_15);
        }
#line 8292 "dump.c"
        {
#line 8294 "dump.c"
          dump__V_70_70 = mercury__string__f_43_43_2_f_0(dump__V_69_69, (MR_String) ">\n");
        }
#line 8297 "dump.c"
        {
#line 8299 "dump.c"
          dump__V_72_72 = mercury__string__f_43_43_2_f_0((MR_String) "\tcss_line_num\t= <", dump__V_70_70);
        }
#line 8302 "dump.c"
        {
#line 8304 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_72_72);
        }
#line 8307 "dump.c"
        {
#line 8309 "dump.c"
          dump__V_74_74 = mercury__string__f_43_43_2_f_0(dump__GoalPathString_18, (MR_String) ">\n");
        }
#line 8312 "dump.c"
        {
#line 8314 "dump.c"
          dump__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) "\tcss_goal_path\t= <", dump__V_74_74);
        }
#line 8317 "dump.c"
        {
#line 8319 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_76_76);
        }
#line 512 "dump.m"
        {
#line 512 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\tcss_kind\t= ");
        }
#line 513 "dump.m"
        {
#line 513 "dump.m"
          dump__dump_call_site_kind_and_callee_3_p_0(dump__Kind_14);
        }
#line 514 "dump.m"
        {
#line 514 "dump.m"
          mercury__io__nl_2_p_0();
        }
#line 515 "dump.m"
        {
#line 515 "dump.m"
          mercury__io__nl_2_p_0();
#line 515 "dump.m"
          return;
        }
#line 504 "dump.m"
      }
#line 516 "dump.m"
    else
#line 515 "dump.m"
      {
#line 515 "dump.m"
      }
#line 516 "dump.m"
  }
#line 491 "dump.m"
}

#line 489 "dump.m"
static void MR_CALL 
dump__dump_init_call_site_statics_4_p_0_1(
#line 489 "dump.m"
  MR_Box dump__closure_arg,
#line 489 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 489 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 489 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 489 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 489 "dump.m"
{
#line 489 "dump.m"
  {
#line 489 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 489 "dump.m"
    {
#line 489 "dump.m"
      dump__dump_call_site_static_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 489 "dump.m"
      return;
    }
#line 489 "dump.m"
  }
#line 489 "dump.m"
}

#line 484 "dump.m"
static void MR_CALL 
dump__dump_init_call_site_statics_4_p_0(
#line 484 "dump.m"
  MR_Word dump__Restriction_5,
#line 484 "dump.m"
  MR_ArrayPtr dump__CallStatics_6)
#line 484 "dump.m"
{
#line 487 "dump.m"
  {
#line 487 "dump.m"
    MR_bool dump__succeeded;
#line 487 "dump.m"
    MR_Word dump__V_12_12;
#line 489 "dump.m"
    MR_Box dump__conv0_STATE_VARIABLE_IO_9;

#line 488 "dump.m"
    {
#line 488 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION CALL SITE STATICS:\n\n");
    }
#line 489 "dump.m"
    {
#line 489 "dump.m"
      dump__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 489 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 0) = ((MR_Box) (&dump_scalar_common_6[2]));
#line 489 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 1) = ((MR_Box) (dump__dump_init_call_site_statics_4_p_0_1));
#line 489 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 489 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 3) = ((MR_Box) (dump__Restriction_5));
#line 489 "dump.m"
    }
#line 489 "dump.m"
    {
#line 489 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, dump__V_12_12, (MR_ArrayPtr) dump__CallStatics_6, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_9);
    }
#line 487 "dump.m"
  }
#line 484 "dump.m"
}

#line 469 "dump.m"
static void MR_CALL 
dump__dump_call_site_array_slot_4_p_0(
#line 469 "dump.m"
  MR_Integer dump__Index_5,
#line 469 "dump.m"
  MR_Word dump__CSA_slot_6)
#line 469 "dump.m"
{
#line 472 "dump.m"
  {
#line 472 "dump.m"
    MR_bool dump__succeeded;
#line 472 "dump.m"
    MR_String dump__V_16_16;
#line 472 "dump.m"
    MR_String dump__V_19_19;
#line 472 "dump.m"
    MR_String dump__V_21_21;
#line 472 "dump.m"
    MR_String dump__V_22_22;
#line 472 "dump.m"
    MR_String dump__V_23_23;
#line 472 "dump.m"
    MR_String dump__V_25_25;

#line 478 "dump.m"
    if (((MR_tag((MR_Word) dump__CSA_slot_6)) == (MR_mktag((MR_Integer) 1))))
#line 480 "dump.m"
      dump__V_16_16 = (MR_String) "multi";
#line 478 "dump.m"
    else
#line 478 "dump.m"
      {
#line 478 "dump.m"
        MR_Integer dump__CSDI_26;
#line 478 "dump.m"
        MR_Word dump__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CSA_slot_6, (MR_Integer) 0)));
#line 478 "dump.m"
        MR_String dump__V_35_35;
#line 478 "dump.m"
        MR_String dump__V_36_36;

#line 478 "dump.m"
        dump__CSDI_26 = (MR_Integer) dump__V_27_27;
#line 8481 "dump.c"
        {
#line 8483 "dump.c"
          dump__V_35_35 = mercury__string__int_to_string_1_f_0(dump__CSDI_26);
        }
#line 8486 "dump.c"
        {
#line 8488 "dump.c"
          dump__V_36_36 = mercury__string__f_43_43_2_f_0(dump__V_35_35, (MR_String) ")");
        }
#line 8491 "dump.c"
        {
#line 8493 "dump.c"
          dump__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "normal(csd", dump__V_36_36);
        }
#line 478 "dump.m"
      }
#line 8498 "dump.c"
    {
#line 8500 "dump.c"
      dump__V_19_19 = mercury__string__f_43_43_2_f_0(dump__V_16_16, (MR_String) "\n");
    }
#line 8503 "dump.c"
    {
#line 8505 "dump.c"
      dump__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "] = ", dump__V_19_19);
    }
#line 8508 "dump.c"
    {
#line 8510 "dump.c"
      dump__V_22_22 = mercury__string__int_to_string_1_f_0(dump__Index_5);
    }
#line 8513 "dump.c"
    {
#line 8515 "dump.c"
      dump__V_23_23 = mercury__string__f_43_43_2_f_0(dump__V_22_22, dump__V_21_21);
    }
#line 8518 "dump.c"
    {
#line 8520 "dump.c"
      dump__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "\tpd_site[", dump__V_23_23);
    }
#line 8523 "dump.c"
    {
#line 8525 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_25_25);
#line 8527 "dump.c"
      return;
    }
#line 472 "dump.m"
  }
#line 469 "dump.m"
}

#line 463 "dump.m"
static void MR_CALL 
dump__dump_proc_dynamic_5_p_0_2(
#line 463 "dump.m"
  MR_Box dump__closure_arg,
#line 463 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 463 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 463 "dump.m"
  MR_Box * dump__wrapper_arg_3,
#line 463 "dump.m"
  MR_Box dump__wrapper_arg_4,
#line 463 "dump.m"
  MR_Box * dump__wrapper_arg_5)
#line 463 "dump.m"
{
#line 463 "dump.m"
  {
#line 463 "dump.m"
    MR_Box dump__closure = dump__closure_arg;
#line 463 "dump.m"
    MR_Integer dump__conv1_STATE_VARIABLE_Num_15;

#line 463 "dump.m"
    {
#line 463 "dump.m"
      dump__dump_coverage_point_5_p_0(((MR_Word) dump__wrapper_arg_1), ((MR_Integer) dump__wrapper_arg_2), &dump__conv1_STATE_VARIABLE_Num_15);
    }
#line 463 "dump.m"
    *dump__wrapper_arg_3 = ((MR_Box) (dump__conv1_STATE_VARIABLE_Num_15));
#line 463 "dump.m"
  }
#line 463 "dump.m"
}

#line 457 "dump.m"
static void MR_CALL 
dump__dump_proc_dynamic_5_p_0_1(
#line 457 "dump.m"
  MR_Box dump__closure_arg,
#line 457 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 457 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 457 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 457 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 457 "dump.m"
{
#line 457 "dump.m"
  {
#line 457 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 457 "dump.m"
    {
#line 457 "dump.m"
      dump__dump_call_site_array_slot_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 457 "dump.m"
      return;
    }
#line 457 "dump.m"
  }
#line 457 "dump.m"
}

#line 442 "dump.m"
static void MR_CALL 
dump__dump_proc_dynamic_5_p_0(
#line 442 "dump.m"
  MR_ArrayPtr dump__ProcStatics_6,
#line 442 "dump.m"
  MR_Integer dump__Index_7,
#line 442 "dump.m"
  MR_Word dump__ProcDynamic_8)
#line 442 "dump.m"
{
#line 445 "dump.m"
  {
#line 445 "dump.m"
    MR_bool dump__succeeded;
#line 445 "dump.m"
    MR_Word dump__TypeCtorInfo_81_81;
#line 445 "dump.m"
    MR_Word dump__PSPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcDynamic_8, (MR_Integer) 0)));
#line 445 "dump.m"
    MR_ArrayPtr dump__Sites_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__ProcDynamic_8, (MR_Integer) 1)));
#line 445 "dump.m"
    MR_Word dump__MaybeCPs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcDynamic_8, (MR_Integer) 2)));
#line 445 "dump.m"
    MR_Integer dump__PSI_13 = (MR_Integer) dump__PSPtr_10;
#line 445 "dump.m"
    MR_Word dump__PS_14;
#line 445 "dump.m"
    MR_String dump__QualRefinedPSId_15;
#line 445 "dump.m"
    MR_String dump__V_90_90;
#line 445 "dump.m"
    MR_String dump__V_91_91;
#line 445 "dump.m"
    MR_String dump__V_93_93;
#line 445 "dump.m"
    MR_String dump__V_95_95;
#line 445 "dump.m"
    MR_String dump__V_97_97;
#line 445 "dump.m"
    MR_String dump__V_98_98;
#line 445 "dump.m"
    MR_String dump__V_99_99;
#line 445 "dump.m"
    MR_String dump__V_101_101;
#line 449 "dump.m"
    MR_String dump__V_22_22;
#line 449 "dump.m"
    MR_Word dump__V_43_43;
#line 449 "dump.m"
    MR_String dump__V_44_44;
#line 449 "dump.m"
    MR_String dump__V_45_45;
#line 449 "dump.m"
    MR_String dump__V_46_46;
#line 449 "dump.m"
    MR_String dump__V_47_47;
#line 449 "dump.m"
    MR_Integer dump__V_48_48;
#line 449 "dump.m"
    MR_Word dump__V_49_49;
#line 449 "dump.m"
    MR_ArrayPtr dump__V_50_50;
#line 449 "dump.m"
    MR_ArrayPtr dump__V_51_51;
#line 449 "dump.m"
    MR_Word dump__V_52_52;
#line 449 "dump.m"
    MR_Word dump__V_53_53;
#line 457 "dump.m"
    MR_Box dump__conv0_STATE_VARIABLE_IO_36_36;

#line 448 "dump.m"
    {
#line 448 "dump.m"
      profile__lookup_proc_statics_3_p_0(dump__ProcStatics_6, dump__PSPtr_10, &dump__PS_14);
    }
#line 449 "dump.m"
    dump__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 0)));
#line 449 "dump.m"
    dump__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 1)));
#line 449 "dump.m"
    dump__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 2)));
#line 449 "dump.m"
    dump__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 3)));
#line 449 "dump.m"
    dump__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 4)));
#line 449 "dump.m"
    dump__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 5)));
#line 449 "dump.m"
    dump__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 6)));
#line 449 "dump.m"
    dump__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 7)));
#line 449 "dump.m"
    dump__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 8)));
#line 449 "dump.m"
    dump__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 9)));
#line 449 "dump.m"
    dump__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 10)));
#line 449 "dump.m"
    dump__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 11)));
#line 449 "dump.m"
    dump__succeeded = (strcmp(dump__V_22_22, (MR_String) "") == 0);
#line 451 "dump.m"
    if (dump__succeeded)
#line 450 "dump.m"
      dump__QualRefinedPSId_15 = (MR_String) "UNKNOWN_PS";
#line 451 "dump.m"
    else
#line 452 "dump.m"
      {
#line 452 "dump.m"
        MR_Word dump__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 0)));
#line 452 "dump.m"
        MR_String dump__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 1)));
#line 452 "dump.m"
        MR_String dump__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 2)));
#line 452 "dump.m"
        MR_String dump__V_57_57;
#line 452 "dump.m"
        MR_String dump__V_58_58;
#line 452 "dump.m"
        MR_Integer dump__V_59_59;
#line 452 "dump.m"
        MR_Word dump__V_60_60;
#line 452 "dump.m"
        MR_ArrayPtr dump__V_61_61;
#line 452 "dump.m"
        MR_ArrayPtr dump__V_62_62;
#line 452 "dump.m"
        MR_Word dump__V_63_63;
#line 452 "dump.m"
        MR_Word dump__V_64_64;

#line 452 "dump.m"
        dump__QualRefinedPSId_15 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 3)));
#line 452 "dump.m"
        dump__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 4)));
#line 452 "dump.m"
        dump__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 5)));
#line 452 "dump.m"
        dump__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 6)));
#line 452 "dump.m"
        dump__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 7)));
#line 452 "dump.m"
        dump__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 8)));
#line 452 "dump.m"
        dump__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 9)));
#line 452 "dump.m"
        dump__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 10)));
#line 452 "dump.m"
        dump__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 11)));
#line 452 "dump.m"
      }
#line 8757 "dump.c"
    {
#line 8759 "dump.c"
      dump__V_90_90 = mercury__string__int_to_string_1_f_0(dump__Index_7);
    }
#line 8762 "dump.c"
    {
#line 8764 "dump.c"
      dump__V_91_91 = mercury__string__f_43_43_2_f_0(dump__V_90_90, (MR_String) ":\n");
    }
#line 8767 "dump.c"
    {
#line 8769 "dump.c"
      dump__V_93_93 = mercury__string__f_43_43_2_f_0((MR_String) "pd", dump__V_91_91);
    }
#line 8772 "dump.c"
    {
#line 8774 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_93_93);
    }
#line 8777 "dump.c"
    {
#line 8779 "dump.c"
      dump__V_95_95 = mercury__string__f_43_43_2_f_0(dump__QualRefinedPSId_15, (MR_String) ")\n");
    }
#line 8782 "dump.c"
    {
#line 8784 "dump.c"
      dump__V_97_97 = mercury__string__f_43_43_2_f_0((MR_String) " (", dump__V_95_95);
    }
#line 8787 "dump.c"
    {
#line 8789 "dump.c"
      dump__V_98_98 = mercury__string__int_to_string_1_f_0(dump__PSI_13);
    }
#line 8792 "dump.c"
    {
#line 8794 "dump.c"
      dump__V_99_99 = mercury__string__f_43_43_2_f_0(dump__V_98_98, dump__V_97_97);
    }
#line 8797 "dump.c"
    {
#line 8799 "dump.c"
      dump__V_101_101 = mercury__string__f_43_43_2_f_0((MR_String) "\tpd_proc_static = ", dump__V_99_99);
    }
#line 8802 "dump.c"
    {
#line 8804 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_101_101);
    }
#line 8807 "dump.c"
    dump__TypeCtorInfo_81_81 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 457 "dump.m"
    {
#line 457 "dump.m"
      array_util__array_foldl_from_0_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, dump__TypeCtorInfo_81_81, (MR_Word) &dump_scalar_common_2[5], (MR_ArrayPtr) dump__Sites_11, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_36_36);
    }
#line 464 "dump.m"
    if ((dump__MaybeCPs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 465 "dump.m"
      {
#line 465 "dump.m"
      }
#line 464 "dump.m"
    else
#line 459 "dump.m"
      {
#line 459 "dump.m"
        MR_ArrayPtr dump__CPCounts_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), dump__MaybeCPs_12, (MR_Integer) 0)));
#line 459 "dump.m"
        MR_ArrayPtr dump__CPInfos_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 9)));
#line 459 "dump.m"
        MR_Word dump__CPs_18;
#line 460 "dump.m"
        MR_Word dump__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 0)));
#line 460 "dump.m"
        MR_String dump__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 1)));
#line 460 "dump.m"
        MR_String dump__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 2)));
#line 460 "dump.m"
        MR_String dump__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 3)));
#line 460 "dump.m"
        MR_String dump__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 4)));
#line 460 "dump.m"
        MR_String dump__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 5)));
#line 460 "dump.m"
        MR_Integer dump__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 6)));
#line 460 "dump.m"
        MR_Word dump__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 7)));
#line 460 "dump.m"
        MR_ArrayPtr dump__V_73_73 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 8)));
#line 460 "dump.m"
        MR_Word dump__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 10)));
#line 460 "dump.m"
        MR_Word dump__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 11)));
#line 463 "dump.m"
        MR_Integer dump__V_19_19;
#line 463 "dump.m"
        MR_Box dump__conv3_V_19_19;
#line 463 "dump.m"
        MR_Box dump__conv2_STATE_VARIABLE_IO_41_41;

#line 461 "dump.m"
        {
#line 461 "dump.m"
          coverage__coverage_point_arrays_to_list_3_p_0(dump__CPInfos_17, dump__CPCounts_16, &dump__CPs_18);
        }
#line 462 "dump.m"
        {
#line 462 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "Coverage points:\n");
        }
#line 463 "dump.m"
        {
#line 463 "dump.m"
          mercury__list__foldl2_6_p_2((MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, dump__TypeCtorInfo_81_81, (MR_Word) &dump_scalar_common_2[6], dump__CPs_18, ((MR_Box) ((MR_Integer) 0)), &dump__conv3_V_19_19, ((MR_Box) ((MR_Integer) 0)), &dump__conv2_STATE_VARIABLE_IO_41_41);
        }
#line 463 "dump.m"
        dump__V_19_19 = ((MR_Integer) dump__conv3_V_19_19);
#line 459 "dump.m"
      }
#line 467 "dump.m"
    {
#line 467 "dump.m"
      mercury__io__nl_2_p_0();
#line 467 "dump.m"
      return;
    }
#line 445 "dump.m"
  }
#line 442 "dump.m"
}

#line 440 "dump.m"
static void MR_CALL 
dump__dump_init_proc_dynamics_4_p_0_1(
#line 440 "dump.m"
  MR_Box dump__closure_arg,
#line 440 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 440 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 440 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 440 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 440 "dump.m"
{
#line 440 "dump.m"
  {
#line 440 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 440 "dump.m"
    {
#line 440 "dump.m"
      dump__dump_proc_dynamic_5_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 440 "dump.m"
      return;
    }
#line 440 "dump.m"
  }
#line 440 "dump.m"
}

#line 435 "dump.m"
static void MR_CALL 
dump__dump_init_proc_dynamics_4_p_0(
#line 435 "dump.m"
  MR_ArrayPtr dump__ProcDynamics_5,
#line 435 "dump.m"
  MR_ArrayPtr dump__ProcStatics_6)
#line 435 "dump.m"
{
#line 438 "dump.m"
  {
#line 438 "dump.m"
    MR_bool dump__succeeded;
#line 438 "dump.m"
    MR_Word dump__V_12_12;
#line 440 "dump.m"
    MR_Box dump__conv0_STATE_VARIABLE_IO_9;

#line 439 "dump.m"
    {
#line 439 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION PROC DYNAMICS:\n\n");
    }
#line 440 "dump.m"
    {
#line 440 "dump.m"
      dump__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 440 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 0) = ((MR_Box) (&dump_scalar_common_6[0]));
#line 440 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 1) = ((MR_Box) (dump__dump_init_proc_dynamics_4_p_0_1));
#line 440 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 440 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 3) = ((MR_Box) (dump__ProcStatics_6));
#line 440 "dump.m"
    }
#line 440 "dump.m"
    {
#line 440 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, dump__V_12_12, (MR_ArrayPtr) dump__ProcDynamics_5, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_9);
    }
#line 438 "dump.m"
  }
#line 435 "dump.m"
}

#line 354 "dump.m"
static void MR_CALL 
dump__dump_own_prof_info_3_p_0(
#line 354 "dump.m"
  MR_Word dump__Own_4)
#line 354 "dump.m"
{
#line 356 "dump.m"
  {
#line 356 "dump.m"
    MR_bool dump__succeeded;
#line 356 "dump.m"
    MR_Integer dump__Calls_6;
#line 356 "dump.m"
    MR_Integer dump__Exits_7;
#line 356 "dump.m"
    MR_Integer dump__Fails_8;
#line 356 "dump.m"
    MR_Integer dump__Redos_9;
#line 356 "dump.m"
    MR_Integer dump__Excps_10;
#line 356 "dump.m"
    MR_Integer dump__Quanta_11;
#line 356 "dump.m"
    MR_Integer dump__CallSeqs_12;
#line 356 "dump.m"
    MR_Integer dump__Allocs_13;
#line 356 "dump.m"
    MR_Integer dump__Words_14;

#line 357 "dump.m"
    {
#line 357 "dump.m"
      measurements__decompress_profile_10_p_0(dump__Own_4, &dump__Calls_6, &dump__Exits_7, &dump__Fails_8, &dump__Redos_9, &dump__Excps_10, &dump__Quanta_11, &dump__CallSeqs_12, &dump__Allocs_13, &dump__Words_14);
    }
#line 359 "dump.m"
    dump__succeeded = (dump__Calls_6 == (MR_Integer) 0);
#line 361 "dump.m"
    if (dump__succeeded)
#line 359 "dump.m"
      {
#line 359 "dump.m"
      }
#line 361 "dump.m"
    else
#line 362 "dump.m"
      {
#line 362 "dump.m"
        MR_String dump__V_63_63;
#line 362 "dump.m"
        MR_String dump__V_64_64;
#line 362 "dump.m"
        MR_String dump__V_66_66;

#line 9023 "dump.c"
        {
#line 9025 "dump.c"
          dump__V_63_63 = mercury__string__int_to_string_1_f_0(dump__Calls_6);
        }
#line 9028 "dump.c"
        {
#line 9030 "dump.c"
          dump__V_64_64 = mercury__string__f_43_43_2_f_0(dump__V_63_63, (MR_String) "\n");
        }
#line 9033 "dump.c"
        {
#line 9035 "dump.c"
          dump__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) "\tcalls:\t\t", dump__V_64_64);
        }
#line 9038 "dump.c"
        {
#line 9040 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_66_66);
        }
#line 362 "dump.m"
      }
#line 364 "dump.m"
    dump__succeeded = (dump__Exits_7 == (MR_Integer) 0);
#line 366 "dump.m"
    if (dump__succeeded)
#line 364 "dump.m"
      {
#line 364 "dump.m"
      }
#line 366 "dump.m"
    else
#line 367 "dump.m"
      {
#line 367 "dump.m"
        MR_String dump__V_68_68;
#line 367 "dump.m"
        MR_String dump__V_69_69;
#line 367 "dump.m"
        MR_String dump__V_71_71;

#line 9064 "dump.c"
        {
#line 9066 "dump.c"
          dump__V_68_68 = mercury__string__int_to_string_1_f_0(dump__Exits_7);
        }
#line 9069 "dump.c"
        {
#line 9071 "dump.c"
          dump__V_69_69 = mercury__string__f_43_43_2_f_0(dump__V_68_68, (MR_String) "\n");
        }
#line 9074 "dump.c"
        {
#line 9076 "dump.c"
          dump__V_71_71 = mercury__string__f_43_43_2_f_0((MR_String) "\texits:\t\t", dump__V_69_69);
        }
#line 9079 "dump.c"
        {
#line 9081 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_71_71);
        }
#line 367 "dump.m"
      }
#line 369 "dump.m"
    dump__succeeded = (dump__Fails_8 == (MR_Integer) 0);
#line 371 "dump.m"
    if (dump__succeeded)
#line 369 "dump.m"
      {
#line 369 "dump.m"
      }
#line 371 "dump.m"
    else
#line 372 "dump.m"
      {
#line 372 "dump.m"
        MR_String dump__V_73_73;
#line 372 "dump.m"
        MR_String dump__V_74_74;
#line 372 "dump.m"
        MR_String dump__V_76_76;

#line 9105 "dump.c"
        {
#line 9107 "dump.c"
          dump__V_73_73 = mercury__string__int_to_string_1_f_0(dump__Fails_8);
        }
#line 9110 "dump.c"
        {
#line 9112 "dump.c"
          dump__V_74_74 = mercury__string__f_43_43_2_f_0(dump__V_73_73, (MR_String) "\n");
        }
#line 9115 "dump.c"
        {
#line 9117 "dump.c"
          dump__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) "\tfails:\t\t", dump__V_74_74);
        }
#line 9120 "dump.c"
        {
#line 9122 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_76_76);
        }
#line 372 "dump.m"
      }
#line 374 "dump.m"
    dump__succeeded = (dump__Redos_9 == (MR_Integer) 0);
#line 376 "dump.m"
    if (dump__succeeded)
#line 374 "dump.m"
      {
#line 374 "dump.m"
      }
#line 376 "dump.m"
    else
#line 377 "dump.m"
      {
#line 377 "dump.m"
        MR_String dump__V_78_78;
#line 377 "dump.m"
        MR_String dump__V_79_79;
#line 377 "dump.m"
        MR_String dump__V_81_81;

#line 9146 "dump.c"
        {
#line 9148 "dump.c"
          dump__V_78_78 = mercury__string__int_to_string_1_f_0(dump__Redos_9);
        }
#line 9151 "dump.c"
        {
#line 9153 "dump.c"
          dump__V_79_79 = mercury__string__f_43_43_2_f_0(dump__V_78_78, (MR_String) "\n");
        }
#line 9156 "dump.c"
        {
#line 9158 "dump.c"
          dump__V_81_81 = mercury__string__f_43_43_2_f_0((MR_String) "\tredos:\t\t", dump__V_79_79);
        }
#line 9161 "dump.c"
        {
#line 9163 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_81_81);
        }
#line 377 "dump.m"
      }
#line 379 "dump.m"
    dump__succeeded = (dump__Excps_10 == (MR_Integer) 0);
#line 381 "dump.m"
    if (dump__succeeded)
#line 379 "dump.m"
      {
#line 379 "dump.m"
      }
#line 381 "dump.m"
    else
#line 382 "dump.m"
      {
#line 382 "dump.m"
        MR_String dump__V_83_83;
#line 382 "dump.m"
        MR_String dump__V_84_84;
#line 382 "dump.m"
        MR_String dump__V_86_86;

#line 9187 "dump.c"
        {
#line 9189 "dump.c"
          dump__V_83_83 = mercury__string__int_to_string_1_f_0(dump__Excps_10);
        }
#line 9192 "dump.c"
        {
#line 9194 "dump.c"
          dump__V_84_84 = mercury__string__f_43_43_2_f_0(dump__V_83_83, (MR_String) "\n");
        }
#line 9197 "dump.c"
        {
#line 9199 "dump.c"
          dump__V_86_86 = mercury__string__f_43_43_2_f_0((MR_String) "\texcps:\t\t", dump__V_84_84);
        }
#line 9202 "dump.c"
        {
#line 9204 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_86_86);
        }
#line 382 "dump.m"
      }
#line 384 "dump.m"
    dump__succeeded = (dump__Quanta_11 == (MR_Integer) 0);
#line 386 "dump.m"
    if (dump__succeeded)
#line 384 "dump.m"
      {
#line 384 "dump.m"
      }
#line 386 "dump.m"
    else
#line 387 "dump.m"
      {
#line 387 "dump.m"
        MR_String dump__V_88_88;
#line 387 "dump.m"
        MR_String dump__V_89_89;
#line 387 "dump.m"
        MR_String dump__V_91_91;

#line 9228 "dump.c"
        {
#line 9230 "dump.c"
          dump__V_88_88 = mercury__string__int_to_string_1_f_0(dump__Quanta_11);
        }
#line 9233 "dump.c"
        {
#line 9235 "dump.c"
          dump__V_89_89 = mercury__string__f_43_43_2_f_0(dump__V_88_88, (MR_String) "\n");
        }
#line 9238 "dump.c"
        {
#line 9240 "dump.c"
          dump__V_91_91 = mercury__string__f_43_43_2_f_0((MR_String) "\tquanta:\t\t", dump__V_89_89);
        }
#line 9243 "dump.c"
        {
#line 9245 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_91_91);
        }
#line 387 "dump.m"
      }
#line 389 "dump.m"
    dump__succeeded = (dump__CallSeqs_12 == (MR_Integer) 0);
#line 391 "dump.m"
    if (dump__succeeded)
#line 389 "dump.m"
      {
#line 389 "dump.m"
      }
#line 391 "dump.m"
    else
#line 392 "dump.m"
      {
#line 392 "dump.m"
        MR_String dump__V_93_93;
#line 392 "dump.m"
        MR_String dump__V_94_94;
#line 392 "dump.m"
        MR_String dump__V_96_96;

#line 9269 "dump.c"
        {
#line 9271 "dump.c"
          dump__V_93_93 = mercury__string__int_to_string_1_f_0(dump__CallSeqs_12);
        }
#line 9274 "dump.c"
        {
#line 9276 "dump.c"
          dump__V_94_94 = mercury__string__f_43_43_2_f_0(dump__V_93_93, (MR_String) "\n");
        }
#line 9279 "dump.c"
        {
#line 9281 "dump.c"
          dump__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) "\tcallseqs:\t", dump__V_94_94);
        }
#line 9284 "dump.c"
        {
#line 9286 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_96_96);
        }
#line 392 "dump.m"
      }
#line 394 "dump.m"
    dump__succeeded = (dump__Allocs_13 == (MR_Integer) 0);
#line 396 "dump.m"
    if (dump__succeeded)
#line 394 "dump.m"
      {
#line 394 "dump.m"
      }
#line 396 "dump.m"
    else
#line 397 "dump.m"
      {
#line 397 "dump.m"
        MR_String dump__V_98_98;
#line 397 "dump.m"
        MR_String dump__V_99_99;
#line 397 "dump.m"
        MR_String dump__V_101_101;

#line 9310 "dump.c"
        {
#line 9312 "dump.c"
          dump__V_98_98 = mercury__string__int_to_string_1_f_0(dump__Allocs_13);
        }
#line 9315 "dump.c"
        {
#line 9317 "dump.c"
          dump__V_99_99 = mercury__string__f_43_43_2_f_0(dump__V_98_98, (MR_String) "\n");
        }
#line 9320 "dump.c"
        {
#line 9322 "dump.c"
          dump__V_101_101 = mercury__string__f_43_43_2_f_0((MR_String) "\tallocs:\t\t", dump__V_99_99);
        }
#line 9325 "dump.c"
        {
#line 9327 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_101_101);
        }
#line 397 "dump.m"
      }
#line 399 "dump.m"
    dump__succeeded = (dump__Words_14 == (MR_Integer) 0);
#line 401 "dump.m"
    if (dump__succeeded)
#line 399 "dump.m"
      {
#line 399 "dump.m"
      }
#line 401 "dump.m"
    else
#line 402 "dump.m"
      {
#line 402 "dump.m"
        MR_String dump__V_103_103;
#line 402 "dump.m"
        MR_String dump__V_104_104;
#line 402 "dump.m"
        MR_String dump__V_106_106;

#line 9351 "dump.c"
        {
#line 9353 "dump.c"
          dump__V_103_103 = mercury__string__int_to_string_1_f_0(dump__Words_14);
        }
#line 9356 "dump.c"
        {
#line 9358 "dump.c"
          dump__V_104_104 = mercury__string__f_43_43_2_f_0(dump__V_103_103, (MR_String) "\n");
        }
#line 9361 "dump.c"
        {
#line 9363 "dump.c"
          dump__V_106_106 = mercury__string__f_43_43_2_f_0((MR_String) "\twords:\t\t", dump__V_104_104);
        }
#line 9366 "dump.c"
        {
#line 9368 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_106_106);
#line 9370 "dump.c"
          return;
        }
#line 402 "dump.m"
      }
#line 356 "dump.m"
  }
#line 354 "dump.m"
}

#line 341 "dump.m"
static void MR_CALL 
dump__dump_call_site_dynamic_4_p_0(
#line 341 "dump.m"
  MR_Integer dump__Index_5,
#line 341 "dump.m"
  MR_Word dump__CallSiteDynamic_6)
#line 341 "dump.m"
{
#line 344 "dump.m"
  {
#line 344 "dump.m"
    MR_bool dump__succeeded;
#line 344 "dump.m"
    MR_Word dump__CallerPDPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CallSiteDynamic_6, (MR_Integer) 0)));
#line 344 "dump.m"
    MR_Word dump__CalleePDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CallSiteDynamic_6, (MR_Integer) 1)));
#line 344 "dump.m"
    MR_Word dump__Own_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CallSiteDynamic_6, (MR_Integer) 2)));
#line 344 "dump.m"
    MR_Integer dump__CallerPDI_11 = (MR_Integer) dump__CallerPDPtr_8;
#line 344 "dump.m"
    MR_Integer dump__CalleePDI_12 = (MR_Integer) dump__CalleePDPtr_9;
#line 344 "dump.m"
    MR_String dump__V_33_33;
#line 344 "dump.m"
    MR_String dump__V_34_34;
#line 344 "dump.m"
    MR_String dump__V_36_36;
#line 344 "dump.m"
    MR_String dump__V_38_38;
#line 344 "dump.m"
    MR_String dump__V_39_39;
#line 344 "dump.m"
    MR_String dump__V_41_41;
#line 344 "dump.m"
    MR_String dump__V_43_43;
#line 344 "dump.m"
    MR_String dump__V_44_44;
#line 344 "dump.m"
    MR_String dump__V_46_46;

#line 9422 "dump.c"
    {
#line 9424 "dump.c"
      dump__V_33_33 = mercury__string__int_to_string_1_f_0(dump__Index_5);
    }
#line 9427 "dump.c"
    {
#line 9429 "dump.c"
      dump__V_34_34 = mercury__string__f_43_43_2_f_0(dump__V_33_33, (MR_String) ":\n");
    }
#line 9432 "dump.c"
    {
#line 9434 "dump.c"
      dump__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) "csd", dump__V_34_34);
    }
#line 9437 "dump.c"
    {
#line 9439 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_36_36);
    }
#line 9442 "dump.c"
    {
#line 9444 "dump.c"
      dump__V_38_38 = mercury__string__int_to_string_1_f_0(dump__CallerPDI_11);
    }
#line 9447 "dump.c"
    {
#line 9449 "dump.c"
      dump__V_39_39 = mercury__string__f_43_43_2_f_0(dump__V_38_38, (MR_String) "\n");
    }
#line 9452 "dump.c"
    {
#line 9454 "dump.c"
      dump__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "\tcsd_caller = pd", dump__V_39_39);
    }
#line 9457 "dump.c"
    {
#line 9459 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_41_41);
    }
#line 9462 "dump.c"
    {
#line 9464 "dump.c"
      dump__V_43_43 = mercury__string__int_to_string_1_f_0(dump__CalleePDI_12);
    }
#line 9467 "dump.c"
    {
#line 9469 "dump.c"
      dump__V_44_44 = mercury__string__f_43_43_2_f_0(dump__V_43_43, (MR_String) "\n");
    }
#line 9472 "dump.c"
    {
#line 9474 "dump.c"
      dump__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tcsd_callee = pd", dump__V_44_44);
    }
#line 9477 "dump.c"
    {
#line 9479 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_46_46);
    }
#line 351 "dump.m"
    {
#line 351 "dump.m"
      dump__dump_own_prof_info_3_p_0(dump__Own_10);
    }
#line 352 "dump.m"
    {
#line 352 "dump.m"
      mercury__io__nl_2_p_0();
#line 352 "dump.m"
      return;
    }
#line 344 "dump.m"
  }
#line 341 "dump.m"
}

#line 339 "dump.m"
static void MR_CALL 
dump__dump_init_call_site_dynamics_3_p_0_1(
#line 339 "dump.m"
  MR_Box dump__closure_arg,
#line 339 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 339 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 339 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 339 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 339 "dump.m"
{
#line 339 "dump.m"
  {
#line 339 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 339 "dump.m"
    {
#line 339 "dump.m"
      dump__dump_call_site_dynamic_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 339 "dump.m"
      return;
    }
#line 339 "dump.m"
  }
#line 339 "dump.m"
}

#line 334 "dump.m"
static void MR_CALL 
dump__dump_init_call_site_dynamics_3_p_0(
#line 334 "dump.m"
  MR_ArrayPtr dump__CallSiteDynamics_4)
#line 334 "dump.m"
{
#line 337 "dump.m"
  {
#line 337 "dump.m"
    MR_bool dump__succeeded;
#line 339 "dump.m"
    MR_Box dump__conv0_STATE_VARIABLE_IO_7;

#line 338 "dump.m"
    {
#line 338 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION CALL SITE DYNAMICS:\n\n");
    }
#line 339 "dump.m"
    {
#line 339 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &dump_scalar_common_2[4], (MR_ArrayPtr) dump__CallSiteDynamics_4, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_7);
    }
#line 337 "dump.m"
  }
#line 334 "dump.m"
}

#line 289 "dump.m"
static void MR_CALL 
dump__dump_init_profile_stats_3_p_0(
#line 289 "dump.m"
  MR_Word dump__Stats_4)
#line 289 "dump.m"
{
#line 291 "dump.m"
  {
#line 291 "dump.m"
    MR_bool dump__succeeded;
#line 291 "dump.m"
    MR_String dump__ProgramName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 0)));
#line 291 "dump.m"
    MR_Integer dump__MaxCSD_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 1)));
#line 291 "dump.m"
    MR_Integer dump__MaxCSS_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 2)));
#line 291 "dump.m"
    MR_Integer dump__MaxPD_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 3)));
#line 291 "dump.m"
    MR_Integer dump__MaxPS_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 4)));
#line 291 "dump.m"
    MR_Integer dump__TicksPerSec_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 5)));
#line 291 "dump.m"
    MR_Integer dump__InstrumentQuanta_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 6)));
#line 291 "dump.m"
    MR_Integer dump__UserQuanta_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 7)));
#line 291 "dump.m"
    MR_Integer dump__NumCallSeqs_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 8)));
#line 291 "dump.m"
    MR_Word dump__DeepFlags_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 9)));
#line 291 "dump.m"
    MR_Integer dump__WordSize_16;
#line 291 "dump.m"
    MR_Word dump__Canonical_17;
#line 291 "dump.m"
    MR_Word dump__CoverageDataType_19;
#line 291 "dump.m"
    MR_String dump__V_24_24;
#line 291 "dump.m"
    MR_String dump__V_27_27;
#line 291 "dump.m"
    MR_String dump__V_88_88;
#line 291 "dump.m"
    MR_String dump__V_93_93;
#line 291 "dump.m"
    MR_String dump__V_94_94;
#line 291 "dump.m"
    MR_String dump__V_96_96;
#line 291 "dump.m"
    MR_String dump__V_98_98;
#line 291 "dump.m"
    MR_String dump__V_99_99;
#line 291 "dump.m"
    MR_String dump__V_101_101;
#line 291 "dump.m"
    MR_String dump__V_103_103;
#line 291 "dump.m"
    MR_String dump__V_104_104;
#line 291 "dump.m"
    MR_String dump__V_106_106;
#line 291 "dump.m"
    MR_String dump__V_108_108;
#line 291 "dump.m"
    MR_String dump__V_109_109;
#line 291 "dump.m"
    MR_String dump__V_111_111;
#line 291 "dump.m"
    MR_String dump__V_113_113;
#line 291 "dump.m"
    MR_String dump__V_114_114;
#line 291 "dump.m"
    MR_String dump__V_116_116;
#line 291 "dump.m"
    MR_String dump__V_118_118;
#line 291 "dump.m"
    MR_String dump__V_119_119;
#line 291 "dump.m"
    MR_String dump__V_121_121;
#line 291 "dump.m"
    MR_String dump__V_123_123;
#line 291 "dump.m"
    MR_String dump__V_124_124;
#line 291 "dump.m"
    MR_String dump__V_126_126;
#line 291 "dump.m"
    MR_String dump__V_128_128;
#line 291 "dump.m"
    MR_String dump__V_129_129;
#line 291 "dump.m"
    MR_String dump__V_131_131;
#line 291 "dump.m"
    MR_String dump__V_133_133;
#line 291 "dump.m"
    MR_String dump__V_134_134;
#line 291 "dump.m"
    MR_String dump__V_136_136;
#line 291 "dump.m"
    MR_String dump__V_138_138;
#line 291 "dump.m"
    MR_String dump__V_140_140;

#line 294 "dump.m"
    {
#line 294 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION PROFILING STATS:\n\n");
    }
#line 295 "dump.m"
    {
#line 295 "dump.m"
      dump__V_27_27 = mercury__string__f_43_43_2_f_0(dump__ProgramName_6, (MR_String) "\n");
    }
#line 295 "dump.m"
    {
#line 295 "dump.m"
      dump__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "\tprogram_name = ", dump__V_27_27);
    }
#line 295 "dump.m"
    {
#line 295 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_24_24);
    }
#line 9682 "dump.c"
    {
#line 9684 "dump.c"
      dump__V_93_93 = mercury__string__int_to_string_1_f_0(dump__MaxCSD_7);
    }
#line 9687 "dump.c"
    {
#line 9689 "dump.c"
      dump__V_94_94 = mercury__string__f_43_43_2_f_0(dump__V_93_93, (MR_String) "\n");
    }
#line 9692 "dump.c"
    {
#line 9694 "dump.c"
      dump__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) "\tmax_csd = ", dump__V_94_94);
    }
#line 9697 "dump.c"
    {
#line 9699 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_96_96);
    }
#line 9702 "dump.c"
    {
#line 9704 "dump.c"
      dump__V_98_98 = mercury__string__int_to_string_1_f_0(dump__MaxCSS_8);
    }
#line 9707 "dump.c"
    {
#line 9709 "dump.c"
      dump__V_99_99 = mercury__string__f_43_43_2_f_0(dump__V_98_98, (MR_String) "\n");
    }
#line 9712 "dump.c"
    {
#line 9714 "dump.c"
      dump__V_101_101 = mercury__string__f_43_43_2_f_0((MR_String) "\tmax_css = ", dump__V_99_99);
    }
#line 9717 "dump.c"
    {
#line 9719 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_101_101);
    }
#line 9722 "dump.c"
    {
#line 9724 "dump.c"
      dump__V_103_103 = mercury__string__int_to_string_1_f_0(dump__MaxPD_9);
    }
#line 9727 "dump.c"
    {
#line 9729 "dump.c"
      dump__V_104_104 = mercury__string__f_43_43_2_f_0(dump__V_103_103, (MR_String) "\n");
    }
#line 9732 "dump.c"
    {
#line 9734 "dump.c"
      dump__V_106_106 = mercury__string__f_43_43_2_f_0((MR_String) "\tmax_pd  = ", dump__V_104_104);
    }
#line 9737 "dump.c"
    {
#line 9739 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_106_106);
    }
#line 9742 "dump.c"
    {
#line 9744 "dump.c"
      dump__V_108_108 = mercury__string__int_to_string_1_f_0(dump__MaxPS_10);
    }
#line 9747 "dump.c"
    {
#line 9749 "dump.c"
      dump__V_109_109 = mercury__string__f_43_43_2_f_0(dump__V_108_108, (MR_String) "\n");
    }
#line 9752 "dump.c"
    {
#line 9754 "dump.c"
      dump__V_111_111 = mercury__string__f_43_43_2_f_0((MR_String) "\tmax_ps  = ", dump__V_109_109);
    }
#line 9757 "dump.c"
    {
#line 9759 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_111_111);
    }
#line 9762 "dump.c"
    {
#line 9764 "dump.c"
      dump__V_113_113 = mercury__string__int_to_string_1_f_0(dump__TicksPerSec_11);
    }
#line 9767 "dump.c"
    {
#line 9769 "dump.c"
      dump__V_114_114 = mercury__string__f_43_43_2_f_0(dump__V_113_113, (MR_String) "\n");
    }
#line 9772 "dump.c"
    {
#line 9774 "dump.c"
      dump__V_116_116 = mercury__string__f_43_43_2_f_0((MR_String) "\tticks_per_sec = ", dump__V_114_114);
    }
#line 9777 "dump.c"
    {
#line 9779 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_116_116);
    }
#line 9782 "dump.c"
    {
#line 9784 "dump.c"
      dump__V_118_118 = mercury__string__int_to_string_1_f_0(dump__InstrumentQuanta_12);
    }
#line 9787 "dump.c"
    {
#line 9789 "dump.c"
      dump__V_119_119 = mercury__string__f_43_43_2_f_0(dump__V_118_118, (MR_String) "\n");
    }
#line 9792 "dump.c"
    {
#line 9794 "dump.c"
      dump__V_121_121 = mercury__string__f_43_43_2_f_0((MR_String) "\tinstrument_quanta = ", dump__V_119_119);
    }
#line 9797 "dump.c"
    {
#line 9799 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_121_121);
    }
#line 9802 "dump.c"
    {
#line 9804 "dump.c"
      dump__V_123_123 = mercury__string__int_to_string_1_f_0(dump__UserQuanta_13);
    }
#line 9807 "dump.c"
    {
#line 9809 "dump.c"
      dump__V_124_124 = mercury__string__f_43_43_2_f_0(dump__V_123_123, (MR_String) "\n");
    }
#line 9812 "dump.c"
    {
#line 9814 "dump.c"
      dump__V_126_126 = mercury__string__f_43_43_2_f_0((MR_String) "\tuser_quanta = ", dump__V_124_124);
    }
#line 9817 "dump.c"
    {
#line 9819 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_126_126);
    }
#line 9822 "dump.c"
    {
#line 9824 "dump.c"
      dump__V_128_128 = mercury__string__int_to_string_1_f_0(dump__NumCallSeqs_14);
    }
#line 9827 "dump.c"
    {
#line 9829 "dump.c"
      dump__V_129_129 = mercury__string__f_43_43_2_f_0(dump__V_128_128, (MR_String) "\n");
    }
#line 9832 "dump.c"
    {
#line 9834 "dump.c"
      dump__V_131_131 = mercury__string__f_43_43_2_f_0((MR_String) "\tnum_callseqs = ", dump__V_129_129);
    }
#line 9837 "dump.c"
    {
#line 9839 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_131_131);
    }
#line 304 "dump.m"
    dump__WordSize_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__DeepFlags_15, (MR_Integer) 0)));
#line 304 "dump.m"
    dump__Canonical_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DeepFlags_15, (MR_Integer) 1)));
#line 304 "dump.m"
    dump__CoverageDataType_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DeepFlags_15, (MR_Integer) 3)));
#line 9848 "dump.c"
    {
#line 9850 "dump.c"
      dump__V_133_133 = mercury__string__int_to_string_1_f_0(dump__WordSize_16);
    }
#line 9853 "dump.c"
    {
#line 9855 "dump.c"
      dump__V_134_134 = mercury__string__f_43_43_2_f_0(dump__V_133_133, (MR_String) "\n");
    }
#line 9858 "dump.c"
    {
#line 9860 "dump.c"
      dump__V_136_136 = mercury__string__f_43_43_2_f_0((MR_String) "\tword_size   = ", dump__V_134_134);
    }
#line 9863 "dump.c"
    {
#line 9865 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_136_136);
    }
#line 306 "dump.m"
    {
#line 306 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\tcanonical = ");
    }
#line 310 "dump.m"
    if ((dump__Canonical_17 == (MR_Integer) 0))
#line 308 "dump.m"
      {
#line 309 "dump.m"
        {
#line 309 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "yes\n");
        }
#line 308 "dump.m"
      }
#line 310 "dump.m"
    else
#line 311 "dump.m"
      {
#line 312 "dump.m"
        {
#line 312 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "no\n");
        }
#line 311 "dump.m"
      }
#line 314 "dump.m"
    {
#line 314 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\tcompression = ");
    }
#line 317 "dump.m"
    {
#line 317 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "none\n");
    }
#line 319 "dump.m"
    {
#line 319 "dump.m"
      dump__V_88_88 = mercury__string__string_1_f_0((MR_Word) &profile__profile__type_ctor_info_coverage_data_type_0, ((MR_Box) (dump__CoverageDataType_19)));
    }
#line 9910 "dump.c"
    {
#line 9912 "dump.c"
      dump__V_138_138 = mercury__string__f_43_43_2_f_0(dump__V_88_88, (MR_String) "\n");
    }
#line 9915 "dump.c"
    {
#line 9917 "dump.c"
      dump__V_140_140 = mercury__string__f_43_43_2_f_0((MR_String) "\tcoverage_data_type = ", dump__V_138_138);
    }
#line 9920 "dump.c"
    {
#line 9922 "dump.c"
      mercury__io__write_string_3_p_0(dump__V_140_140);
    }
#line 321 "dump.m"
    {
#line 321 "dump.m"
      mercury__io__nl_2_p_0();
#line 321 "dump.m"
      return;
    }
#line 291 "dump.m"
  }
#line 289 "dump.m"
}

#line 272 "dump.m"
static void MR_CALL 
dump__get_static_ptrs_from_dynamic_proc_7_p_0(
#line 272 "dump.m"
  MR_ArrayPtr dump__ProcStatics_8,
#line 272 "dump.m"
  MR_Integer dump__HeadVar__2_9,
#line 272 "dump.m"
  MR_Word dump__ProcDynamic_10,
#line 272 "dump.m"
  MR_Word dump__STATE_VARIABLE_PS_Ptrs_0_16,
#line 272 "dump.m"
  MR_Word * dump__STATE_VARIABLE_PS_Ptrs_17,
#line 272 "dump.m"
  MR_Word dump__STATE_VARIABLE_CSS_Ptrs_0_18,
#line 272 "dump.m"
  MR_Word * dump__STATE_VARIABLE_CSS_Ptrs_19)
#line 272 "dump.m"
{
#line 277 "dump.m"
  {
#line 277 "dump.m"
    MR_bool dump__succeeded;

#line 277 "dump.m"
    {
#line 277 "dump.m"
      dump__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(dump__ProcStatics_8, dump__ProcDynamic_10, dump__STATE_VARIABLE_PS_Ptrs_0_16, dump__STATE_VARIABLE_PS_Ptrs_17, dump__STATE_VARIABLE_CSS_Ptrs_0_18, dump__STATE_VARIABLE_CSS_Ptrs_19);
#line 277 "dump.m"
      return;
    }
#line 277 "dump.m"
  }
#line 272 "dump.m"
}

#line 198 "dump.m"
static MR_bool MR_CALL 
dump__string_to_dumpable_array_2_p_0(
#line 198 "dump.m"
  MR_String dump__HeadVar__1_1,
#line 198 "dump.m"
  MR_Word * dump__HeadVar__2_2)
#line 198 "dump.m"
{
#line 200 "dump.m"
  {
#line 200 "dump.m"
    MR_bool dump__succeeded;

#line 200 "dump.m"
    if ((strcmp(dump__HeadVar__1_1, (MR_String) "pd") == 0))
#line 202 "dump.m"
      {
#line 202 "dump.m"
        *dump__HeadVar__2_2 = (MR_Integer) 2;
#line 202 "dump.m"
        dump__succeeded = MR_TRUE;
#line 202 "dump.m"
      }
#line 200 "dump.m"
    else
#line 200 "dump.m"
      if ((strcmp(dump__HeadVar__1_1, (MR_String) "ps") == 0))
#line 203 "dump.m"
        {
#line 203 "dump.m"
          *dump__HeadVar__2_2 = (MR_Integer) 3;
#line 203 "dump.m"
          dump__succeeded = MR_TRUE;
#line 203 "dump.m"
        }
#line 200 "dump.m"
      else
#line 200 "dump.m"
        if ((strcmp(dump__HeadVar__1_1, (MR_String) "csd") == 0))
#line 200 "dump.m"
          {
#line 200 "dump.m"
            *dump__HeadVar__2_2 = (MR_Integer) 0;
#line 200 "dump.m"
            dump__succeeded = MR_TRUE;
#line 200 "dump.m"
          }
#line 200 "dump.m"
        else
#line 200 "dump.m"
          if ((strcmp(dump__HeadVar__1_1, (MR_String) "css") == 0))
#line 201 "dump.m"
            {
#line 201 "dump.m"
              *dump__HeadVar__2_2 = (MR_Integer) 1;
#line 201 "dump.m"
              dump__succeeded = MR_TRUE;
#line 201 "dump.m"
            }
#line 200 "dump.m"
          else
#line 200 "dump.m"
            dump__succeeded = MR_FALSE;
#line 200 "dump.m"
    return dump__succeeded;
#line 200 "dump.m"
  }
#line 198 "dump.m"
}

#line 189 "dump.m"
static void MR_CALL 
dump__det_string_to_dumpable_array_2_p_0(
#line 189 "dump.m"
  MR_String dump__String_3,
#line 189 "dump.m"
  MR_Word * dump__Array_4)
#line 189 "dump.m"
{
#line 194 "dump.m"
  {
#line 194 "dump.m"
    MR_bool dump__succeeded;
#line 194 "dump.m"
    MR_Word dump__ArrayP_5;

#line 200 "dump.m"
    if ((strcmp(dump__String_3, (MR_String) "pd") == 0))
#line 202 "dump.m"
      {
#line 202 "dump.m"
        dump__ArrayP_5 = (MR_Integer) 2;
#line 202 "dump.m"
        dump__succeeded = MR_TRUE;
#line 202 "dump.m"
      }
#line 200 "dump.m"
    else
#line 200 "dump.m"
      if ((strcmp(dump__String_3, (MR_String) "ps") == 0))
#line 203 "dump.m"
        {
#line 203 "dump.m"
          dump__ArrayP_5 = (MR_Integer) 3;
#line 203 "dump.m"
          dump__succeeded = MR_TRUE;
#line 203 "dump.m"
        }
#line 200 "dump.m"
      else
#line 200 "dump.m"
        if ((strcmp(dump__String_3, (MR_String) "csd") == 0))
#line 200 "dump.m"
          {
#line 200 "dump.m"
            dump__ArrayP_5 = (MR_Integer) 0;
#line 200 "dump.m"
            dump__succeeded = MR_TRUE;
#line 200 "dump.m"
          }
#line 200 "dump.m"
        else
#line 200 "dump.m"
          if ((strcmp(dump__String_3, (MR_String) "css") == 0))
#line 201 "dump.m"
            {
#line 201 "dump.m"
              dump__ArrayP_5 = (MR_Integer) 1;
#line 201 "dump.m"
              dump__succeeded = MR_TRUE;
#line 201 "dump.m"
            }
#line 200 "dump.m"
          else
#line 200 "dump.m"
            dump__succeeded = MR_FALSE;
#line 194 "dump.m"
    if (dump__succeeded)
#line 193 "dump.m"
      *dump__Array_4 = dump__ArrayP_5;
#line 194 "dump.m"
    else
#line 195 "dump.m"
      {
#line 195 "dump.m"
        MR_String dump__V_6_6;

#line 195 "dump.m"
        {
#line 195 "dump.m"
          dump__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "Invalid array name in dump options: ", dump__String_3);
        }
#line 195 "dump.m"
        {
#line 195 "dump.m"
          mercury__require__error_1_p_0(dump__V_6_6);
#line 195 "dump.m"
          return;
        }
#line 195 "dump.m"
      }
#line 194 "dump.m"
  }
#line 189 "dump.m"
}

#line 119 "dump.m"
void MR_CALL 
dump__dump_deep_4_p_0(
#line 119 "dump.m"
  MR_Word dump__Deep_5,
#line 119 "dump.m"
  MR_Word dump__DumpOptions_6)
#line 119 "dump.m"
{
#line 669 "dump.m"
  {
#line 669 "dump.m"
    MR_bool dump__succeeded;
#line 669 "dump.m"
    MR_Word dump__DumpCliques_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 669 "dump.m"
    MR_Word dump__DumpRevLinks_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 669 "dump.m"
    MR_Word dump__DumpPropMeasurements_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 670 "dump.m"
    MR_Word dump__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 0)));
#line 670 "dump.m"
    MR_Word dump__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 1)));
#line 670 "dump.m"
    MR_Word dump__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) & (MR_Integer) 1);

#line 676 "dump.m"
    if ((dump__DumpCliques_8 == (MR_Integer) 1))
#line 677 "dump.m"
      {
#line 677 "dump.m"
      }
#line 676 "dump.m"
    else
#line 675 "dump.m"
      {
#line 675 "dump.m"
        dump__dump_deep_cliques_3_p_0(dump__Deep_5);
      }
#line 682 "dump.m"
    if ((dump__DumpRevLinks_9 == (MR_Integer) 1))
#line 683 "dump.m"
      {
#line 683 "dump.m"
      }
#line 682 "dump.m"
    else
#line 681 "dump.m"
      {
#line 681 "dump.m"
        dump__dump_deep_rev_links_3_p_0(dump__Deep_5);
      }
#line 688 "dump.m"
    if ((dump__DumpPropMeasurements_10 == (MR_Integer) 1))
#line 689 "dump.m"
      {
#line 689 "dump.m"
      }
#line 688 "dump.m"
    else
#line 687 "dump.m"
      {
#line 687 "dump.m"
        dump__dump_deep_prop_measurements_3_p_0(dump__Deep_5);
#line 687 "dump.m"
        return;
      }
#line 669 "dump.m"
  }
#line 119 "dump.m"
}

#line 269 "dump.m"
static void MR_CALL 
dump__dump_initial_deep_4_p_0_1(
#line 269 "dump.m"
  MR_Box dump__closure_arg,
#line 269 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 269 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 269 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 269 "dump.m"
  MR_Box * dump__wrapper_arg_4,
#line 269 "dump.m"
  MR_Box dump__wrapper_arg_5,
#line 269 "dump.m"
  MR_Box * dump__wrapper_arg_6)
#line 269 "dump.m"
{
#line 269 "dump.m"
  {
#line 269 "dump.m"
    MR_Box dump__closure = dump__closure_arg;
#line 269 "dump.m"
    MR_Word dump__conv1_STATE_VARIABLE_PS_Ptrs_17;
#line 269 "dump.m"
    MR_Word dump__conv0_STATE_VARIABLE_CSS_Ptrs_19;

#line 269 "dump.m"
    {
#line 269 "dump.m"
      dump__get_static_ptrs_from_dynamic_proc_7_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3), &dump__conv1_STATE_VARIABLE_PS_Ptrs_17, ((MR_Word) dump__wrapper_arg_5), &dump__conv0_STATE_VARIABLE_CSS_Ptrs_19);
    }
#line 269 "dump.m"
    *dump__wrapper_arg_4 = ((MR_Box) (dump__conv1_STATE_VARIABLE_PS_Ptrs_17));
#line 269 "dump.m"
    *dump__wrapper_arg_6 = ((MR_Box) (dump__conv0_STATE_VARIABLE_CSS_Ptrs_19));
#line 269 "dump.m"
  }
#line 269 "dump.m"
}

#line 109 "dump.m"
void MR_CALL 
dump__dump_initial_deep_4_p_0(
#line 109 "dump.m"
  MR_Word dump__InitialDeep_5,
#line 109 "dump.m"
  MR_Word dump__DumpOptions_6)
#line 109 "dump.m"
{
#line 215 "dump.m"
  {
#line 215 "dump.m"
    MR_bool dump__succeeded;
#line 215 "dump.m"
    MR_Word dump__Stats_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__InitialDeep_5, (MR_Integer) 0)));
#line 215 "dump.m"
    MR_Word dump__InitRoot_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__InitialDeep_5, (MR_Integer) 1)));
#line 215 "dump.m"
    MR_ArrayPtr dump__CSDs_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__InitialDeep_5, (MR_Integer) 2)));
#line 215 "dump.m"
    MR_ArrayPtr dump__PDs_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__InitialDeep_5, (MR_Integer) 3)));
#line 215 "dump.m"
    MR_ArrayPtr dump__CSSs_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__InitialDeep_5, (MR_Integer) 4)));
#line 215 "dump.m"
    MR_ArrayPtr dump__PSs_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__InitialDeep_5, (MR_Integer) 5)));
#line 215 "dump.m"
    MR_Word dump__Restrict_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 0)));
#line 215 "dump.m"
    MR_Word dump__Restriction_17;
#line 215 "dump.m"
    MR_Word dump__ShowStats_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 217 "dump.m"
    MR_Word dump__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 1)));
#line 217 "dump.m"
    MR_Word dump__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 217 "dump.m"
    MR_Word dump__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 217 "dump.m"
    MR_Word dump__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 234 "dump.m"
    MR_Word dump__Arrays_78;
#line 967 "dump.m"
    MR_Word dump__V_79_79;
#line 967 "dump.m"
    MR_Word dump__V_80_80;
#line 967 "dump.m"
    MR_Word dump__V_81_81;
#line 967 "dump.m"
    MR_Word dump__V_82_82;
#line 967 "dump.m"
    MR_Word dump__V_83_83;
#line 239 "dump.m"
    MR_Word dump__Arrays_87;
#line 967 "dump.m"
    MR_Word dump__V_88_88;
#line 967 "dump.m"
    MR_Word dump__V_89_89;
#line 967 "dump.m"
    MR_Word dump__V_90_90;
#line 967 "dump.m"
    MR_Word dump__V_91_91;
#line 967 "dump.m"
    MR_Word dump__V_92_92;

#line 222 "dump.m"
    if ((dump__Restrict_14 == (MR_Integer) 1))
#line 224 "dump.m"
      dump__Restriction_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 222 "dump.m"
    else
#line 219 "dump.m"
      {
#line 219 "dump.m"
        MR_Word dump__UsedPSs_15;
#line 219 "dump.m"
        MR_Word dump__UsedCSSs_16;
#line 219 "dump.m"
        MR_Word dump__V_45_45;
#line 219 "dump.m"
        MR_Word dump__V_46_46;
#line 219 "dump.m"
        MR_Word dump__V_47_47;
#line 269 "dump.m"
        MR_Box dump__conv3_UsedPSs_15;
#line 269 "dump.m"
        MR_Box dump__conv2_UsedCSSs_16;

#line 269 "dump.m"
        {
#line 269 "dump.m"
          dump__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 269 "dump.m"
          MR_hl_field(MR_mktag(0), dump__V_45_45, 0) = ((MR_Box) (&dump_scalar_common_4[0]));
#line 269 "dump.m"
          MR_hl_field(MR_mktag(0), dump__V_45_45, 1) = ((MR_Box) (dump__dump_initial_deep_4_p_0_1));
#line 269 "dump.m"
          MR_hl_field(MR_mktag(0), dump__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 269 "dump.m"
          MR_hl_field(MR_mktag(0), dump__V_45_45, 3) = ((MR_Box) (dump__PSs_13));
#line 269 "dump.m"
        }
#line 269 "dump.m"
        {
#line 269 "dump.m"
          dump__V_46_46 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0);
        }
#line 269 "dump.m"
        {
#line 269 "dump.m"
          dump__V_47_47 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0);
        }
#line 269 "dump.m"
        {
#line 269 "dump.m"
          array_util__array_foldl2_from_1_6_p_1((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_Word) &dump_scalar_common_1[0], (MR_Word) &dump_scalar_common_1[1], dump__V_45_45, (MR_ArrayPtr) dump__PDs_11, ((MR_Box) (dump__V_46_46)), &dump__conv3_UsedPSs_15, ((MR_Box) (dump__V_47_47)), &dump__conv2_UsedCSSs_16);
        }
#line 269 "dump.m"
        dump__UsedPSs_15 = ((MR_Word) dump__conv3_UsedPSs_15);
#line 269 "dump.m"
        dump__UsedCSSs_16 = ((MR_Word) dump__conv2_UsedCSSs_16);
#line 221 "dump.m"
        {
#line 221 "dump.m"
          dump__Restriction_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "dump.m"
          MR_hl_field(MR_mktag(1), dump__Restriction_17, 0) = ((MR_Box) (dump__UsedPSs_15));
#line 221 "dump.m"
          MR_hl_field(MR_mktag(1), dump__Restriction_17, 1) = ((MR_Box) (dump__UsedCSSs_16));
#line 221 "dump.m"
        }
#line 219 "dump.m"
      }
#line 231 "dump.m"
    if ((dump__ShowStats_18 == (MR_Integer) 1))
#line 232 "dump.m"
      {
#line 232 "dump.m"
      }
#line 231 "dump.m"
    else
#line 228 "dump.m"
      {
#line 228 "dump.m"
        MR_Integer dump__Root_61;
#line 228 "dump.m"
        MR_String dump__V_72_72;
#line 228 "dump.m"
        MR_String dump__V_73_73;
#line 228 "dump.m"
        MR_String dump__V_75_75;

#line 229 "dump.m"
        {
#line 229 "dump.m"
          dump__dump_init_profile_stats_3_p_0(dump__Stats_8);
        }
#line 327 "dump.m"
        dump__Root_61 = (MR_Integer) dump__InitRoot_9;
#line 328 "dump.m"
        {
#line 328 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "INITIAL ROOT:\n");
        }
#line 10417 "dump.c"
        {
#line 10419 "dump.c"
          dump__V_72_72 = mercury__string__int_to_string_1_f_0(dump__Root_61);
        }
#line 10422 "dump.c"
        {
#line 10424 "dump.c"
          dump__V_73_73 = mercury__string__f_43_43_2_f_0(dump__V_72_72, (MR_String) "\n");
        }
#line 10427 "dump.c"
        {
#line 10429 "dump.c"
          dump__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "\tinitial root = ", dump__V_73_73);
        }
#line 10432 "dump.c"
        {
#line 10434 "dump.c"
          mercury__io__write_string_3_p_0(dump__V_75_75);
        }
#line 330 "dump.m"
        {
#line 330 "dump.m"
          mercury__io__nl_2_p_0();
        }
#line 228 "dump.m"
      }
#line 967 "dump.m"
    dump__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 0)));
#line 967 "dump.m"
    dump__Arrays_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 1)));
#line 967 "dump.m"
    dump__V_80_80 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 967 "dump.m"
    dump__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 967 "dump.m"
    dump__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 967 "dump.m"
    dump__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 968 "dump.m"
    {
#line 968 "dump.m"
      dump__succeeded = mercury__set__member_2_p_0((MR_Word) &dump__dump__type_ctor_info_dumpable_array_0, ((MR_Box) ((MR_Integer) 0)), dump__Arrays_78);
    }
#line 236 "dump.m"
    if (dump__succeeded)
#line 235 "dump.m"
      {
#line 235 "dump.m"
        dump__dump_init_call_site_dynamics_3_p_0(dump__CSDs_10);
      }
#line 236 "dump.m"
    else
#line 235 "dump.m"
      {
#line 235 "dump.m"
      }
#line 967 "dump.m"
    dump__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 0)));
#line 967 "dump.m"
    dump__Arrays_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 1)));
#line 967 "dump.m"
    dump__V_89_89 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 967 "dump.m"
    dump__V_90_90 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 967 "dump.m"
    dump__V_91_91 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 967 "dump.m"
    dump__V_92_92 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 968 "dump.m"
    {
#line 968 "dump.m"
      dump__succeeded = mercury__set__member_2_p_0((MR_Word) &dump__dump__type_ctor_info_dumpable_array_0, ((MR_Box) ((MR_Integer) 2)), dump__Arrays_87);
    }
#line 241 "dump.m"
    if (dump__succeeded)
#line 240 "dump.m"
      {
#line 240 "dump.m"
        dump__dump_init_proc_dynamics_4_p_0(dump__PDs_11, dump__PSs_13);
      }
#line 241 "dump.m"
    else
#line 240 "dump.m"
      {
#line 240 "dump.m"
      }
#line 244 "dump.m"
    {
#line 244 "dump.m"
      dump__succeeded = dump__should_dump_2_p_0(dump__DumpOptions_6, (MR_Integer) 1);
    }
#line 246 "dump.m"
    if (dump__succeeded)
#line 245 "dump.m"
      {
#line 245 "dump.m"
        dump__dump_init_call_site_statics_4_p_0(dump__Restriction_17, dump__CSSs_12);
      }
#line 246 "dump.m"
    else
#line 245 "dump.m"
      {
#line 245 "dump.m"
      }
#line 249 "dump.m"
    {
#line 249 "dump.m"
      dump__succeeded = dump__should_dump_2_p_0(dump__DumpOptions_6, (MR_Integer) 3);
    }
#line 251 "dump.m"
    if (dump__succeeded)
#line 250 "dump.m"
      {
#line 250 "dump.m"
        dump__dump_init_proc_statics_4_p_0(dump__Restriction_17, dump__PSs_13);
#line 250 "dump.m"
        return;
      }
#line 251 "dump.m"
    else
#line 250 "dump.m"
      {
#line 250 "dump.m"
      }
#line 215 "dump.m"
  }
#line 109 "dump.m"
}

#line 101 "dump.m"
void MR_CALL 
dump__dump_array_options_to_dump_options_2_p_0(
#line 101 "dump.m"
  MR_Word dump__Strings_3,
#line 101 "dump.m"
  MR_Word * dump__DumpOptions_4)
#line 101 "dump.m"
{
#line 177 "dump.m"
  {
#line 177 "dump.m"
    MR_bool dump__succeeded;
#line 177 "dump.m"
    MR_Word dump__DumpArrayOptions_5;
#line 177 "dump.m"
    MR_Word dump__V_6_6;
#line 179 "dump.m"
    MR_Word dump__V_7_7;
#line 179 "dump.m"
    MR_Word dump__V_9_9;
#line 179 "dump.m"
    MR_Word dump__V_10_10;
#line 179 "dump.m"
    MR_Word dump__V_11_11;
#line 179 "dump.m"
    MR_Word dump__V_12_12;
#line 179 "dump.m"
    MR_Word dump__V_8_8;

#line 178 "dump.m"
    {
#line 178 "dump.m"
      dump__det_dump_array_options_2_p_0(dump__Strings_3, &dump__DumpArrayOptions_5);
    }
#line 179 "dump.m"
    {
#line 179 "dump.m"
      dump__V_6_6 = dump__default_dump_options_0_f_0();
    }
#line 179 "dump.m"
    dump__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__V_6_6, (MR_Integer) 0)));
#line 179 "dump.m"
    dump__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__V_6_6, (MR_Integer) 1)));
#line 179 "dump.m"
    dump__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__V_6_6, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 179 "dump.m"
    dump__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__V_6_6, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 179 "dump.m"
    dump__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__V_6_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 179 "dump.m"
    dump__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__V_6_6, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 179 "dump.m"
    {
#line 179 "dump.m"
      MR_Word base;
#line 179 "dump.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 179 "dump.m"
      *dump__DumpOptions_4 = base;
#line 179 "dump.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (dump__V_7_7));
#line 179 "dump.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (dump__DumpArrayOptions_5));
#line 179 "dump.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((dump__V_9_9 | ((((dump__V_10_10 << (MR_Integer) 1)) | ((((dump__V_11_11 << (MR_Integer) 2)) | ((dump__V_12_12 << (MR_Integer) 3)))))))));
#line 179 "dump.m"
    }
#line 177 "dump.m"
  }
#line 101 "dump.m"
}

#line 10620 "dump.c"
static void MR_CALL 
dump__det_dump_array_options_2_p_0_1(
#line 10623 "dump.c"
  MR_Box dump__closure_arg,
#line 10625 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 10627 "dump.c"
  MR_Box * dump__wrapper_arg_2)
#line 10629 "dump.c"
{
#line 10631 "dump.c"
  {
#line 10633 "dump.c"
    MR_Box dump__closure = dump__closure_arg;
#line 10635 "dump.c"
    MR_Word dump__conv0_Array_4;

#line 10638 "dump.c"
    {
#line 10640 "dump.c"
      dump__det_string_to_dumpable_array_2_p_0(((MR_String) dump__wrapper_arg_1), &dump__conv0_Array_4);
    }
#line 10643 "dump.c"
    *dump__wrapper_arg_2 = ((MR_Box) (dump__conv0_Array_4));
#line 10645 "dump.c"
  }
#line 10647 "dump.c"
}

#line 94 "dump.m"
void MR_CALL 
dump__det_dump_array_options_2_p_0(
#line 94 "dump.m"
  MR_Word dump__Strings_3,
#line 94 "dump.m"
  MR_Word * dump__DumpArrayOptions_4)
#line 94 "dump.m"
{
#line 154 "dump.m"
  {
#line 154 "dump.m"
    MR_bool dump__succeeded;
#line 154 "dump.m"
    MR_Word dump__DumpArrayOptionsSpecial_5;

#line 174 "dump.m"
    if ((dump__Strings_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "dump.m"
      {
#line 208 "dump.m"
        {
#line 208 "dump.m"
          dump__DumpArrayOptionsSpecial_5 = mercury__set__list_to_set_1_f_0((MR_Word) &dump__dump__type_ctor_info_dumpable_array_0, (MR_Word) MR_mkword(MR_mktag(1), &dump_scalar_common_1[9]));
        }
#line 208 "dump.m"
        dump__succeeded = MR_TRUE;
#line 208 "dump.m"
      }
#line 174 "dump.m"
    else
#line 175 "dump.m"
      {
#line 175 "dump.m"
        MR_Word dump__TypeCtorInfo_12_33;
#line 175 "dump.m"
        MR_String dump__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), dump__Strings_3, (MR_Integer) 0)));
#line 175 "dump.m"
        MR_Word dump__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__Strings_3, (MR_Integer) 1)));
#line 175 "dump.m"
        MR_Word dump__V_24_24;

#line 175 "dump.m"
        dump__succeeded = (strcmp(dump__V_10_10, (MR_String) "all") == 0);
#line 175 "dump.m"
        if (dump__succeeded)
#line 175 "dump.m"
          {
#line 175 "dump.m"
            dump__succeeded = (dump__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "dump.m"
            if (dump__succeeded)
#line 175 "dump.m"
              {
#line 10704 "dump.c"
                dump__TypeCtorInfo_12_33 = (MR_Word) &dump__dump__type_ctor_info_dumpable_array_0;
#line 208 "dump.m"
                dump__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), &dump_scalar_common_1[9]);
#line 208 "dump.m"
                {
#line 208 "dump.m"
                  dump__DumpArrayOptionsSpecial_5 = mercury__set__list_to_set_1_f_0(dump__TypeCtorInfo_12_33, dump__V_24_24);
                }
#line 208 "dump.m"
                dump__succeeded = MR_TRUE;
#line 175 "dump.m"
              }
#line 175 "dump.m"
          }
#line 175 "dump.m"
      }
#line 154 "dump.m"
    if (dump__succeeded)
#line 153 "dump.m"
      *dump__DumpArrayOptions_4 = dump__DumpArrayOptionsSpecial_5;
#line 154 "dump.m"
    else
#line 155 "dump.m"
      {
#line 155 "dump.m"
        MR_Word dump__TypeInfo_for_X_39 = (MR_Word) &dump__dump__type_ctor_info_dumpable_array_0;
#line 155 "dump.m"
        MR_Word dump__List_38;

#line 186 "dump.m"
        {
#line 186 "dump.m"
          mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, dump__TypeInfo_for_X_39, (MR_Word) &dump_scalar_common_2[3], dump__Strings_3, &dump__List_38);
        }
#line 187 "dump.m"
        {
#line 187 "dump.m"
          mercury__set__list_to_set_2_p_0(dump__TypeInfo_for_X_39, dump__List_38, dump__DumpArrayOptions_4);
#line 187 "dump.m"
          return;
        }
#line 155 "dump.m"
      }
#line 154 "dump.m"
  }
#line 94 "dump.m"
}

#line 10753 "dump.c"
static MR_bool MR_CALL 
dump__dump_array_options_2_p_0_1(
#line 10756 "dump.c"
  MR_Box dump__closure_arg,
#line 10758 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 10760 "dump.c"
  MR_Box * dump__wrapper_arg_2)
#line 10762 "dump.c"
{
#line 10764 "dump.c"
  {
#line 10766 "dump.c"
    MR_bool dump__succeeded;
#line 10768 "dump.c"
    MR_Box dump__closure = dump__closure_arg;
#line 10770 "dump.c"
    MR_Word dump__conv0_HeadVar__2_2;

#line 10773 "dump.c"
    {
#line 10775 "dump.c"
      dump__succeeded = dump__string_to_dumpable_array_2_p_0(((MR_String) dump__wrapper_arg_1), &dump__conv0_HeadVar__2_2);
    }
#line 10778 "dump.c"
    if (dump__succeeded)
#line 10780 "dump.c"
      {
#line 10782 "dump.c"
        *dump__wrapper_arg_2 = ((MR_Box) (dump__conv0_HeadVar__2_2));
#line 10784 "dump.c"
        dump__succeeded = MR_TRUE;
#line 10786 "dump.c"
      }
#line 10788 "dump.c"
    return dump__succeeded;
#line 10790 "dump.c"
  }
#line 10792 "dump.c"
}

#line 92 "dump.m"
MR_bool MR_CALL 
dump__dump_array_options_2_p_0(
#line 92 "dump.m"
  MR_Word dump__Strings_3,
#line 92 "dump.m"
  MR_Word * dump__DumpArrayOptions_4)
#line 92 "dump.m"
{
#line 164 "dump.m"
  {
#line 164 "dump.m"
    MR_bool dump__succeeded;
#line 164 "dump.m"
    MR_Word dump__DumpArrayOptionsSpecial_5;

#line 174 "dump.m"
    if ((dump__Strings_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "dump.m"
      {
#line 208 "dump.m"
        {
#line 208 "dump.m"
          dump__DumpArrayOptionsSpecial_5 = mercury__set__list_to_set_1_f_0((MR_Word) &dump__dump__type_ctor_info_dumpable_array_0, (MR_Word) MR_mkword(MR_mktag(1), &dump_scalar_common_1[9]));
        }
#line 208 "dump.m"
        dump__succeeded = MR_TRUE;
#line 208 "dump.m"
      }
#line 174 "dump.m"
    else
#line 175 "dump.m"
      {
#line 175 "dump.m"
        MR_Word dump__TypeCtorInfo_12_33;
#line 175 "dump.m"
        MR_String dump__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), dump__Strings_3, (MR_Integer) 0)));
#line 175 "dump.m"
        MR_Word dump__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__Strings_3, (MR_Integer) 1)));
#line 175 "dump.m"
        MR_Word dump__V_24_24;

#line 175 "dump.m"
        dump__succeeded = (strcmp(dump__V_10_10, (MR_String) "all") == 0);
#line 175 "dump.m"
        if (dump__succeeded)
#line 175 "dump.m"
          {
#line 175 "dump.m"
            dump__succeeded = (dump__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "dump.m"
            if (dump__succeeded)
#line 175 "dump.m"
              {
#line 10849 "dump.c"
                dump__TypeCtorInfo_12_33 = (MR_Word) &dump__dump__type_ctor_info_dumpable_array_0;
#line 208 "dump.m"
                dump__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), &dump_scalar_common_1[9]);
#line 208 "dump.m"
                {
#line 208 "dump.m"
                  dump__DumpArrayOptionsSpecial_5 = mercury__set__list_to_set_1_f_0(dump__TypeCtorInfo_12_33, dump__V_24_24);
                }
#line 208 "dump.m"
                dump__succeeded = MR_TRUE;
#line 175 "dump.m"
              }
#line 175 "dump.m"
          }
#line 175 "dump.m"
      }
#line 164 "dump.m"
    if (dump__succeeded)
#line 163 "dump.m"
      {
#line 163 "dump.m"
        *dump__DumpArrayOptions_4 = dump__DumpArrayOptionsSpecial_5;
#line 163 "dump.m"
        dump__succeeded = MR_TRUE;
#line 163 "dump.m"
      }
#line 164 "dump.m"
    else
#line 165 "dump.m"
      {
#line 165 "dump.m"
        MR_Word dump__TypeInfo_for_X_39 = (MR_Word) &dump__dump__type_ctor_info_dumpable_array_0;
#line 165 "dump.m"
        MR_Word dump__List_38;

#line 186 "dump.m"
        {
#line 186 "dump.m"
          dump__succeeded = mercury__list__map_3_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, dump__TypeInfo_for_X_39, (MR_Word) &dump_scalar_common_2[2], dump__Strings_3, &dump__List_38);
        }
#line 165 "dump.m"
        if (dump__succeeded)
#line 165 "dump.m"
          {
#line 187 "dump.m"
            {
#line 187 "dump.m"
              mercury__set__list_to_set_2_p_0(dump__TypeInfo_for_X_39, dump__List_38, dump__DumpArrayOptions_4);
            }
#line 187 "dump.m"
            dump__succeeded = MR_TRUE;
#line 165 "dump.m"
          }
#line 165 "dump.m"
      }
#line 164 "dump.m"
    return dump__succeeded;
#line 164 "dump.m"
  }
#line 92 "dump.m"
}

#line 84 "dump.m"
MR_Word MR_CALL 
dump__default_dump_options_0_f_0(void)
#line 84 "dump.m"
{
#line 146 "dump.m"
  {
#line 146 "dump.m"
    MR_bool dump__succeeded;
#line 146 "dump.m"
    MR_Word dump__DumpOptions_2;
#line 146 "dump.m"
    MR_Word dump__V_4_4;

#line 208 "dump.m"
    {
#line 208 "dump.m"
      dump__V_4_4 = mercury__set__list_to_set_1_f_0((MR_Word) &dump__dump__type_ctor_info_dumpable_array_0, (MR_Word) MR_mkword(MR_mktag(1), &dump_scalar_common_1[9]));
    }
#line 146 "dump.m"
    {
#line 146 "dump.m"
      dump__DumpOptions_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 146 "dump.m"
      MR_hl_field(MR_mktag(0), dump__DumpOptions_2, 0) = ((MR_Box) ((MR_Integer) 1));
#line 146 "dump.m"
      MR_hl_field(MR_mktag(0), dump__DumpOptions_2, 1) = ((MR_Box) (dump__V_4_4));
#line 146 "dump.m"
      MR_hl_field(MR_mktag(0), dump__DumpOptions_2, 2) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((MR_Integer) 0 << (MR_Integer) 3)))))))));
#line 146 "dump.m"
    }
#line 146 "dump.m"
    return dump__DumpOptions_2;
#line 146 "dump.m"
  }
#line 84 "dump.m"
}

void mercury__dump__init(void)
{
}

void mercury__dump__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&dump__dump__type_ctor_info_dump_cliques_0);
	MR_register_type_ctor_info(&dump__dump__type_ctor_info_dump_options_0);
	MR_register_type_ctor_info(&dump__dump__type_ctor_info_dump_prop_measurements_0);
	MR_register_type_ctor_info(&dump__dump__type_ctor_info_dump_rev_links_0);
	MR_register_type_ctor_info(&dump__dump__type_ctor_info_dumpable_array_0);
	MR_register_type_ctor_info(&dump__dump__type_ctor_info_restriction_0);
	MR_register_type_ctor_info(&dump__dump__type_ctor_info_show_restricted_dump_0);
	MR_register_type_ctor_info(&dump__dump__type_ctor_info_show_stats_0);
}

void mercury__dump__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module dump. */
