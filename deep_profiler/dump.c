/*
** Automatically generated from `dump.m'
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 90 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0;

#line 93 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_static_ptr_0;

#line 96 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_call_site_static_ptr_0;

#line 99 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0;

#line 102 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__maybe__pti_maybe_1__plain_profile__type_ctor_info_clique_ptr_0;

#line 105 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 108 "dump.c"
static const MR_FA_TypeInfo_Struct1 dump__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 111 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct2 dump__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 114 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct2 dump__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 117 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_cliques_0_0;

#line 120 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_cliques_0_1;

#line 123 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dump_cliques_0[2];

#line 126 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dump_cliques_0[2];

#line 129 "dump.c"
static const MR_Integer dump__dump__functor_number_map_dump_cliques_0[2];

#line 132 "dump.c"
static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1dump__type_ctor_info_dumpable_array_0;

#line 135 "dump.c"
static const MR_PseudoTypeInfo dump__dump__field_types_dump_options_0_0[6];

#line 138 "dump.c"
static const MR_ConstString dump__dump__field_names_dump_options_0_0[6];

#line 141 "dump.c"
static const MR_DuArgLocn dump__dump__field_locns_dump_options_0_0[6];

#line 144 "dump.c"
static const MR_DuFunctorDesc dump__dump__du_functor_desc_dump_options_0_0;

#line 147 "dump.c"
static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_dump_options_0_0[1];

#line 150 "dump.c"
static const MR_DuPtagLayout dump__dump__du_ptag_ordered_dump_options_0[1];

#line 153 "dump.c"
static const MR_DuFunctorDescPtr dump__dump__du_name_ordered_dump_options_0[1];

#line 156 "dump.c"
static const MR_Integer dump__dump__functor_number_map_dump_options_0[1];

#line 159 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_prop_measurements_0_0;

#line 162 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_prop_measurements_0_1;

#line 165 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dump_prop_measurements_0[2];

#line 168 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dump_prop_measurements_0[2];

#line 171 "dump.c"
static const MR_Integer dump__dump__functor_number_map_dump_prop_measurements_0[2];

#line 174 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_rev_links_0_0;

#line 177 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_rev_links_0_1;

#line 180 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dump_rev_links_0[2];

#line 183 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dump_rev_links_0[2];

#line 186 "dump.c"
static const MR_Integer dump__dump__functor_number_map_dump_rev_links_0[2];

#line 189 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_0;

#line 192 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_1;

#line 195 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_2;

#line 198 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_3;

#line 201 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dumpable_array_0[4];

#line 204 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dumpable_array_0[4];

#line 207 "dump.c"
static const MR_Integer dump__dump__functor_number_map_dumpable_array_0[4];

#line 210 "dump.c"
static const MR_DuFunctorDesc dump__dump__du_functor_desc_restriction_0_0;

#line 213 "dump.c"
static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_static_ptr_0;

#line 216 "dump.c"
static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_call_site_static_ptr_0;

#line 219 "dump.c"
static const MR_PseudoTypeInfo dump__dump__field_types_restriction_0_1[2];

#line 222 "dump.c"
static const MR_DuFunctorDesc dump__dump__du_functor_desc_restriction_0_1;

#line 225 "dump.c"
static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_restriction_0_0[1];

#line 228 "dump.c"
static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_restriction_0_1[1];

#line 231 "dump.c"
static const MR_DuPtagLayout dump__dump__du_ptag_ordered_restriction_0[2];

#line 234 "dump.c"
static const MR_DuFunctorDescPtr dump__dump__du_name_ordered_restriction_0[2];

#line 237 "dump.c"
static const MR_Integer dump__dump__functor_number_map_restriction_0[2];

#line 240 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_restricted_dump_0_0;

#line 243 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_restricted_dump_0_1;

#line 246 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_show_restricted_dump_0[2];

#line 249 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_show_restricted_dump_0[2];

#line 252 "dump.c"
static const MR_Integer dump__dump__functor_number_map_show_restricted_dump_0[2];

#line 255 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_stats_0_0;

#line 258 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_stats_0_1;

#line 261 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_show_stats_0[2];

#line 264 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_show_stats_0[2];

#line 267 "dump.c"
static const MR_Integer dump__dump__functor_number_map_show_stats_0[2];

#line 270 "dump.c"
static MR_bool MR_CALL 
dump____Unify____dump_cliques_0_0_10001(
#line 273 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 275 "dump.c"
  MR_Box dump__wrapper_arg_2);

#line 278 "dump.c"
static void MR_CALL 
dump____Compare____dump_cliques_0_0_10001(
#line 281 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 283 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 285 "dump.c"
  MR_Box dump__wrapper_arg_3);

#line 288 "dump.c"
static MR_bool MR_CALL 
dump____Unify____dump_options_0_0_10001(
#line 291 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 293 "dump.c"
  MR_Box dump__wrapper_arg_2);

#line 296 "dump.c"
static void MR_CALL 
dump____Compare____dump_options_0_0_10001(
#line 299 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 301 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 303 "dump.c"
  MR_Box dump__wrapper_arg_3);

#line 306 "dump.c"
static MR_bool MR_CALL 
dump____Unify____dump_prop_measurements_0_0_10001(
#line 309 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 311 "dump.c"
  MR_Box dump__wrapper_arg_2);

#line 314 "dump.c"
static void MR_CALL 
dump____Compare____dump_prop_measurements_0_0_10001(
#line 317 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 319 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 321 "dump.c"
  MR_Box dump__wrapper_arg_3);

#line 324 "dump.c"
static MR_bool MR_CALL 
dump____Unify____dump_rev_links_0_0_10001(
#line 327 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 329 "dump.c"
  MR_Box dump__wrapper_arg_2);

#line 332 "dump.c"
static void MR_CALL 
dump____Compare____dump_rev_links_0_0_10001(
#line 335 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 337 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 339 "dump.c"
  MR_Box dump__wrapper_arg_3);

#line 342 "dump.c"
static MR_bool MR_CALL 
dump____Unify____dumpable_array_0_0_10001(
#line 345 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 347 "dump.c"
  MR_Box dump__wrapper_arg_2);

#line 350 "dump.c"
static void MR_CALL 
dump____Compare____dumpable_array_0_0_10001(
#line 353 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 355 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 357 "dump.c"
  MR_Box dump__wrapper_arg_3);

#line 360 "dump.c"
static MR_bool MR_CALL 
dump____Unify____restriction_0_0_10001(
#line 363 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 365 "dump.c"
  MR_Box dump__wrapper_arg_2);

#line 368 "dump.c"
static void MR_CALL 
dump____Compare____restriction_0_0_10001(
#line 371 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 373 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 375 "dump.c"
  MR_Box dump__wrapper_arg_3);

#line 378 "dump.c"
static MR_bool MR_CALL 
dump____Unify____show_restricted_dump_0_0_10001(
#line 381 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 383 "dump.c"
  MR_Box dump__wrapper_arg_2);

#line 386 "dump.c"
static void MR_CALL 
dump____Compare____show_restricted_dump_0_0_10001(
#line 389 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 391 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 393 "dump.c"
  MR_Box dump__wrapper_arg_3);

#line 396 "dump.c"
static MR_bool MR_CALL 
dump____Unify____show_stats_0_0_10001(
#line 399 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 401 "dump.c"
  MR_Box dump__wrapper_arg_2);

#line 404 "dump.c"
static void MR_CALL 
dump____Compare____show_stats_0_0_10001(
#line 407 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 409 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 411 "dump.c"
  MR_Box dump__wrapper_arg_3);

#line 273 "dump.m"
static void MR_CALL 
dump__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
#line 273 "dump.m"
  MR_ArrayPtr dump__ProcStatics_8,
#line 273 "dump.m"
  MR_Word dump__ProcDynamic_10,
#line 273 "dump.m"
  MR_Word dump__STATE_VARIABLE_PS_Ptrs_0_16,
#line 273 "dump.m"
  MR_Word * dump__STATE_VARIABLE_PS_Ptrs_17,
#line 273 "dump.m"
  MR_Word dump__STATE_VARIABLE_CSS_Ptrs_0_18,
#line 273 "dump.m"
  MR_Word * dump__STATE_VARIABLE_CSS_Ptrs_19);

#line 873 "dump.m"
static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__873__1_2_p_0(
#line 873 "dump.m"
  MR_Integer dump__CSSOwnMax_20,
#line 873 "dump.m"
  MR_Integer dump__CSSDescMax_21);

#line 864 "dump.m"
static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__864__1_2_p_0(
#line 864 "dump.m"
  MR_Integer dump__PSOwnMax_16,
#line 864 "dump.m"
  MR_Integer dump__PSDescMax_17);

#line 855 "dump.m"
static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__855__1_2_p_0(
#line 855 "dump.m"
  MR_Integer dump__CSDMax_12,
#line 855 "dump.m"
  MR_Integer dump__CSDDescMax_13);

#line 846 "dump.m"
static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__846__1_2_p_0(
#line 846 "dump.m"
  MR_Integer dump__PDOwnMax_8,
#line 846 "dump.m"
  MR_Integer dump__PDDescMax_9);

#line 261 "dump.m"
static void MR_CALL 
dump____Compare____restriction_0_0(
#line 261 "dump.m"
  MR_Word * dump__HeadVar__1_1,
#line 261 "dump.m"
  MR_Word dump__HeadVar__2_2,
#line 261 "dump.m"
  MR_Word dump__HeadVar__3_3);

#line 261 "dump.m"
static MR_bool MR_CALL 
dump____Unify____restriction_0_0(
#line 261 "dump.m"
  MR_Word dump__HeadVar__1_1,
#line 261 "dump.m"
  MR_Word dump__HeadVar__2_2);

#line 965 "dump.m"
static MR_bool MR_CALL 
dump__should_dump_2_p_0(
#line 965 "dump.m"
  MR_Word dump__DumpOptions_3,
#line 965 "dump.m"
  MR_Word dump__What_4);

#line 935 "dump.m"
static void MR_CALL 
dump__dump_own_and_desc_6_p_0(
#line 935 "dump.m"
  MR_String dump__Prefix_7,
#line 935 "dump.m"
  MR_Integer dump__Cur_8,
#line 935 "dump.m"
  MR_Word dump__Own_9,
#line 935 "dump.m"
  MR_Word dump__Desc_10);

#line 921 "dump.m"
static void MR_CALL 
dump__dump_css_measurements_6_p_0(
#line 921 "dump.m"
  MR_Integer dump__Cur_7,
#line 921 "dump.m"
  MR_Integer dump__Max_8,
#line 921 "dump.m"
  MR_ArrayPtr dump__CSSOwn_9,
#line 921 "dump.m"
  MR_ArrayPtr dump__CSSDesc_10);

#line 907 "dump.m"
static void MR_CALL 
dump__dump_ps_measurements_6_p_0(
#line 907 "dump.m"
  MR_Integer dump__Cur_7,
#line 907 "dump.m"
  MR_Integer dump__Max_8,
#line 907 "dump.m"
  MR_ArrayPtr dump__PSOwn_9,
#line 907 "dump.m"
  MR_ArrayPtr dump__PSDesc_10);

#line 892 "dump.m"
static void MR_CALL 
dump__dump_csd_measurements_6_p_0(
#line 892 "dump.m"
  MR_Integer dump__Cur_7,
#line 892 "dump.m"
  MR_Integer dump__Max_8,
#line 892 "dump.m"
  MR_ArrayPtr dump__CSDs_9,
#line 892 "dump.m"
  MR_ArrayPtr dump__CSDDesc_10);

#line 878 "dump.m"
static void MR_CALL 
dump__dump_pd_measurements_6_p_0(
#line 878 "dump.m"
  MR_Integer dump__Cur_7,
#line 878 "dump.m"
  MR_Integer dump__Max_8,
#line 878 "dump.m"
  MR_ArrayPtr dump__PDOwn_9,
#line 878 "dump.m"
  MR_ArrayPtr dump__PDDesc_10);

#line 873 "dump.m"
static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_4(
#line 873 "dump.m"
  MR_Box dump__closure_arg);

#line 864 "dump.m"
static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_3(
#line 864 "dump.m"
  MR_Box dump__closure_arg);

#line 855 "dump.m"
static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_2(
#line 855 "dump.m"
  MR_Box dump__closure_arg);

#line 846 "dump.m"
static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_1(
#line 846 "dump.m"
  MR_Box dump__closure_arg);

#line 839 "dump.m"
static void MR_CALL 
dump__dump_deep_prop_measurements_3_p_0(
#line 839 "dump.m"
  MR_Word dump__Deep_4);

#line 834 "dump.m"
static void MR_CALL 
dump__dump_call_site_calls_to_proc_4_p_0_1(
#line 834 "dump.m"
  MR_Box dump__closure_arg,
#line 834 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 834 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 834 "dump.m"
  MR_Box * dump__wrapper_arg_3);

#line 827 "dump.m"
static void MR_CALL 
dump__dump_call_site_calls_to_proc_4_p_0(
#line 827 "dump.m"
  MR_String dump__Prefix_5,
#line 827 "dump.m"
  MR_Word dump__HeadVar__2_2);

#line 824 "dump.m"
static void MR_CALL 
dump__dump_call_site_calls_4_p_0_1(
#line 824 "dump.m"
  MR_Box dump__closure_arg,
#line 824 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 824 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 824 "dump.m"
  MR_Box * dump__wrapper_arg_3);

#line 809 "dump.m"
static void MR_CALL 
dump__dump_call_site_calls_4_p_0(
#line 809 "dump.m"
  MR_Integer dump__Index_5,
#line 809 "dump.m"
  MR_Word dump__CalleeMap_6);

#line 802 "dump.m"
static void MR_CALL 
dump__dump_call_site_dynamic_to_static_4_p_0(
#line 802 "dump.m"
  MR_Integer dump__Index_5,
#line 802 "dump.m"
  MR_Word dump__CSSPtr_6);

#line 795 "dump.m"
static void MR_CALL 
dump__dump_space_csdptr_3_p_0(
#line 795 "dump.m"
  MR_Word dump__CSDPtr_4);

#line 791 "dump.m"
static void MR_CALL 
dump__dump_proc_static_caller_csds_4_p_0_1(
#line 791 "dump.m"
  MR_Box dump__closure_arg,
#line 791 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 791 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 791 "dump.m"
  MR_Box * dump__wrapper_arg_3);

#line 782 "dump.m"
static void MR_CALL 
dump__dump_proc_static_caller_csds_4_p_0(
#line 782 "dump.m"
  MR_Integer dump__Index_5,
#line 782 "dump.m"
  MR_Word dump__CallerCSDs_6);

#line 779 "dump.m"
static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_3(
#line 779 "dump.m"
  MR_Box dump__closure_arg,
#line 779 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 779 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 779 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 779 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 773 "dump.m"
static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_2(
#line 773 "dump.m"
  MR_Box dump__closure_arg,
#line 773 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 773 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 773 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 773 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 767 "dump.m"
static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_1(
#line 767 "dump.m"
  MR_Box dump__closure_arg,
#line 767 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 767 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 767 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 767 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 762 "dump.m"
static void MR_CALL 
dump__dump_deep_rev_links_3_p_0(
#line 762 "dump.m"
  MR_Word dump__Deep_4);

#line 748 "dump.m"
static void MR_CALL 
dump__dump_clique_maybe_child_4_p_0(
#line 748 "dump.m"
  MR_Integer dump__Index_5,
#line 748 "dump.m"
  MR_Word dump__MaybeCliquePtr_6);

#line 741 "dump.m"
static void MR_CALL 
dump__dump_clique_parent_4_p_0(
#line 741 "dump.m"
  MR_Integer dump__Index_5,
#line 741 "dump.m"
  MR_Word dump__CSDPtr_6);

#line 734 "dump.m"
static void MR_CALL 
dump__dump_pd_in_clique_3_p_0(
#line 734 "dump.m"
  MR_Word dump__PDPtr_4);

#line 731 "dump.m"
static void MR_CALL 
dump__dump_clique_members_4_p_0_1(
#line 731 "dump.m"
  MR_Box dump__closure_arg,
#line 731 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 731 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 731 "dump.m"
  MR_Box * dump__wrapper_arg_3);

#line 726 "dump.m"
static void MR_CALL 
dump__dump_clique_members_4_p_0(
#line 726 "dump.m"
  MR_Integer dump__Index_5,
#line 726 "dump.m"
  MR_Word dump__CliqueMembers_6);

#line 719 "dump.m"
static void MR_CALL 
dump__dump_clique_index_entry_4_p_0(
#line 719 "dump.m"
  MR_Integer dump__Index_5,
#line 719 "dump.m"
  MR_Word dump__CliquePtr_6);

#line 716 "dump.m"
static void MR_CALL 
dump__dump_deep_cliques_3_p_0_4(
#line 716 "dump.m"
  MR_Box dump__closure_arg,
#line 716 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 716 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 716 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 716 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 710 "dump.m"
static void MR_CALL 
dump__dump_deep_cliques_3_p_0_3(
#line 710 "dump.m"
  MR_Box dump__closure_arg,
#line 710 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 710 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 710 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 710 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 705 "dump.m"
static void MR_CALL 
dump__dump_deep_cliques_3_p_0_2(
#line 705 "dump.m"
  MR_Box dump__closure_arg,
#line 705 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 705 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 705 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 705 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 700 "dump.m"
static void MR_CALL 
dump__dump_deep_cliques_3_p_0_1(
#line 700 "dump.m"
  MR_Box dump__closure_arg,
#line 700 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 700 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 700 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 700 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 695 "dump.m"
static void MR_CALL 
dump__dump_deep_cliques_3_p_0(
#line 695 "dump.m"
  MR_Word dump__Deep_4);

#line 653 "dump.m"
static void MR_CALL 
dump__dump_call_site_kind_and_callee_3_p_0(
#line 653 "dump.m"
  MR_Word dump__HeadVar__1_1);

#line 632 "dump.m"
static MR_String MR_CALL 
dump__dump_proc_id_1_f_0(
#line 632 "dump.m"
  MR_Word dump__Proc_1);

#line 616 "dump.m"
static void MR_CALL 
dump__dump_coverage_point_info_4_p_0(
#line 616 "dump.m"
  MR_Integer dump__Num_5,
#line 616 "dump.m"
  MR_Word dump__CoveragePointInfo_6);

#line 606 "dump.m"
static void MR_CALL 
dump__dump_coverage_point_5_p_0(
#line 606 "dump.m"
  MR_Word dump__CoveragePoint_6,
#line 606 "dump.m"
  MR_Integer dump__STATE_VARIABLE_Num_0_14,
#line 606 "dump.m"
  MR_Integer * dump__STATE_VARIABLE_Num_15);

#line 599 "dump.m"
static void MR_CALL 
dump__dump_proc_static_call_sites_4_p_0(
#line 599 "dump.m"
  MR_Integer dump__Slot_5,
#line 599 "dump.m"
  MR_Word dump__CSSPtr_6);

#line 586 "dump.m"
static void MR_CALL 
dump__dump_proc_static_5_p_0_3(
#line 586 "dump.m"
  MR_Box dump__closure_arg,
#line 586 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 586 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 586 "dump.m"
  MR_Box * dump__wrapper_arg_3,
#line 586 "dump.m"
  MR_Box dump__wrapper_arg_4,
#line 586 "dump.m"
  MR_Box * dump__wrapper_arg_5);

#line 591 "dump.m"
static void MR_CALL 
dump__dump_proc_static_5_p_0_2(
#line 591 "dump.m"
  MR_Box dump__closure_arg,
#line 591 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 591 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 591 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 591 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 581 "dump.m"
static void MR_CALL 
dump__dump_proc_static_5_p_0_1(
#line 581 "dump.m"
  MR_Box dump__closure_arg,
#line 581 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 581 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 581 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 581 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 531 "dump.m"
static void MR_CALL 
dump__dump_proc_static_5_p_0(
#line 531 "dump.m"
  MR_Word dump__Restriction_6,
#line 531 "dump.m"
  MR_Integer dump__Index_7,
#line 531 "dump.m"
  MR_Word dump__ProcStatic_8);

#line 528 "dump.m"
static void MR_CALL 
dump__dump_init_proc_statics_4_p_0_1(
#line 528 "dump.m"
  MR_Box dump__closure_arg,
#line 528 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 528 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 528 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 528 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 523 "dump.m"
static void MR_CALL 
dump__dump_init_proc_statics_4_p_0(
#line 523 "dump.m"
  MR_Word dump__Restriction_5,
#line 523 "dump.m"
  MR_ArrayPtr dump__ProcStatics_6);

#line 492 "dump.m"
static void MR_CALL 
dump__dump_call_site_static_5_p_0(
#line 492 "dump.m"
  MR_Word dump__Restriction_6,
#line 492 "dump.m"
  MR_Integer dump__Index_7,
#line 492 "dump.m"
  MR_Word dump__CallSiteStatic_8);

#line 490 "dump.m"
static void MR_CALL 
dump__dump_init_call_site_statics_4_p_0_1(
#line 490 "dump.m"
  MR_Box dump__closure_arg,
#line 490 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 490 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 490 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 490 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 485 "dump.m"
static void MR_CALL 
dump__dump_init_call_site_statics_4_p_0(
#line 485 "dump.m"
  MR_Word dump__Restriction_5,
#line 485 "dump.m"
  MR_ArrayPtr dump__CallStatics_6);

#line 470 "dump.m"
static void MR_CALL 
dump__dump_call_site_array_slot_4_p_0(
#line 470 "dump.m"
  MR_Integer dump__Index_5,
#line 470 "dump.m"
  MR_Word dump__CSA_slot_6);

#line 464 "dump.m"
static void MR_CALL 
dump__dump_proc_dynamic_5_p_0_2(
#line 464 "dump.m"
  MR_Box dump__closure_arg,
#line 464 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 464 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 464 "dump.m"
  MR_Box * dump__wrapper_arg_3,
#line 464 "dump.m"
  MR_Box dump__wrapper_arg_4,
#line 464 "dump.m"
  MR_Box * dump__wrapper_arg_5);

#line 458 "dump.m"
static void MR_CALL 
dump__dump_proc_dynamic_5_p_0_1(
#line 458 "dump.m"
  MR_Box dump__closure_arg,
#line 458 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 458 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 458 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 458 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 443 "dump.m"
static void MR_CALL 
dump__dump_proc_dynamic_5_p_0(
#line 443 "dump.m"
  MR_ArrayPtr dump__ProcStatics_6,
#line 443 "dump.m"
  MR_Integer dump__Index_7,
#line 443 "dump.m"
  MR_Word dump__ProcDynamic_8);

#line 441 "dump.m"
static void MR_CALL 
dump__dump_init_proc_dynamics_4_p_0_1(
#line 441 "dump.m"
  MR_Box dump__closure_arg,
#line 441 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 441 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 441 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 441 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 436 "dump.m"
static void MR_CALL 
dump__dump_init_proc_dynamics_4_p_0(
#line 436 "dump.m"
  MR_ArrayPtr dump__ProcDynamics_5,
#line 436 "dump.m"
  MR_ArrayPtr dump__ProcStatics_6);

#line 406 "dump.m"
static void MR_CALL 
dump__dump_inherit_prof_info_3_p_0(
#line 406 "dump.m"
  MR_Word dump__Inherit_4);

#line 355 "dump.m"
static void MR_CALL 
dump__dump_own_prof_info_3_p_0(
#line 355 "dump.m"
  MR_Word dump__Own_4);

#line 342 "dump.m"
static void MR_CALL 
dump__dump_call_site_dynamic_4_p_0(
#line 342 "dump.m"
  MR_Integer dump__Index_5,
#line 342 "dump.m"
  MR_Word dump__CallSiteDynamic_6);

#line 340 "dump.m"
static void MR_CALL 
dump__dump_init_call_site_dynamics_3_p_0_1(
#line 340 "dump.m"
  MR_Box dump__closure_arg,
#line 340 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 340 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 340 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 340 "dump.m"
  MR_Box * dump__wrapper_arg_4);

#line 335 "dump.m"
static void MR_CALL 
dump__dump_init_call_site_dynamics_3_p_0(
#line 335 "dump.m"
  MR_ArrayPtr dump__CallSiteDynamics_4);

#line 290 "dump.m"
static void MR_CALL 
dump__dump_init_profile_stats_3_p_0(
#line 290 "dump.m"
  MR_Word dump__Stats_4);

#line 273 "dump.m"
static void MR_CALL 
dump__get_static_ptrs_from_dynamic_proc_7_p_0(
#line 273 "dump.m"
  MR_ArrayPtr dump__ProcStatics_8,
#line 273 "dump.m"
  MR_Integer dump__HeadVar__2_9,
#line 273 "dump.m"
  MR_Word dump__ProcDynamic_10,
#line 273 "dump.m"
  MR_Word dump__STATE_VARIABLE_PS_Ptrs_0_16,
#line 273 "dump.m"
  MR_Word * dump__STATE_VARIABLE_PS_Ptrs_17,
#line 273 "dump.m"
  MR_Word dump__STATE_VARIABLE_CSS_Ptrs_0_18,
#line 273 "dump.m"
  MR_Word * dump__STATE_VARIABLE_CSS_Ptrs_19);

#line 199 "dump.m"
static MR_bool MR_CALL 
dump__string_to_dumpable_array_2_p_0(
#line 199 "dump.m"
  MR_String dump__HeadVar__1_1,
#line 199 "dump.m"
  MR_Word * dump__HeadVar__2_2);

#line 189 "dump.m"
static void MR_CALL 
dump__det_string_to_dumpable_array_2_p_0(
#line 189 "dump.m"
  MR_String dump__String_3,
#line 189 "dump.m"
  MR_Word * dump__Array_4);

#line 270 "dump.m"
static void MR_CALL 
dump__dump_initial_deep_4_p_0_1(
#line 270 "dump.m"
  MR_Box dump__closure_arg,
#line 270 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 270 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 270 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 270 "dump.m"
  MR_Box * dump__wrapper_arg_4,
#line 270 "dump.m"
  MR_Box dump__wrapper_arg_5,
#line 270 "dump.m"
  MR_Box * dump__wrapper_arg_6);

#line 1126 "dump.c"
static void MR_CALL 
dump__det_dump_array_options_2_p_0_1(
#line 1129 "dump.c"
  MR_Box dump__closure_arg,
#line 1131 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 1133 "dump.c"
  MR_Box * dump__wrapper_arg_2);

#line 1136 "dump.c"
static MR_bool MR_CALL 
dump__dump_array_options_2_p_0_1(
#line 1139 "dump.c"
  MR_Box dump__closure_arg,
#line 1141 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 1143 "dump.c"
  MR_Box * dump__wrapper_arg_2);


static /* final */ const MR_Box dump_scalar_common_1[10][2];

static /* final */ const MR_Box dump_scalar_common_2[20][3];

static /* final */ const MR_Box dump_scalar_common_3[2][5];

static /* final */ const MR_Box dump_scalar_common_4[1][10];

static /* final */ const MR_Box dump_scalar_common_5[1][1];

static /* final */ const MR_Box dump_scalar_common_7[11][7];

static /* final */ const MR_Box dump_scalar_common_8[4][8];

static /* final */ const MR_Box dump_scalar_common_9[2][6];

static /* final */ const MR_Box dump_scalar_common_10[1][4];


#line 201 "dump.m"
/* sealed */ struct dump__vector_common_type_6_0_s {
#line 201 "dump.m"
  const MR_String dump__vector_common_type_6_0__vct_6_f_0;
#line 201 "dump.m"
  const MR_Word dump__vector_common_type_6_0__vct_6_f_1;
#line 201 "dump.m"
};

static /* final */ const struct dump__vector_common_type_6_0_s dump_vector_common_6[8];



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
    ((MR_Box) (&dump_scalar_common_7[0])),
    ((MR_Box) (dump__dump_init_call_site_dynamics_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&dump_scalar_common_7[1])),
    ((MR_Box) (dump__dump_proc_dynamic_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&dump_scalar_common_8[1])),
    ((MR_Box) (dump__dump_proc_dynamic_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&dump_scalar_common_7[2])),
    ((MR_Box) (dump__dump_proc_static_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&dump_scalar_common_7[3])),
    ((MR_Box) (dump__dump_proc_static_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&dump_scalar_common_8[1])),
    ((MR_Box) (dump__dump_proc_static_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&dump_scalar_common_7[4])),
    ((MR_Box) (dump__dump_deep_cliques_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&dump_scalar_common_7[5])),
    ((MR_Box) (dump__dump_deep_cliques_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&dump_scalar_common_7[6])),
    ((MR_Box) (dump__dump_deep_cliques_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&dump_scalar_common_7[7])),
    ((MR_Box) (dump__dump_deep_cliques_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&dump_scalar_common_9[0])),
    ((MR_Box) (dump__dump_clique_members_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&dump_scalar_common_7[8])),
    ((MR_Box) (dump__dump_deep_rev_links_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&dump_scalar_common_7[2])),
    ((MR_Box) (dump__dump_deep_rev_links_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&dump_scalar_common_7[9])),
    ((MR_Box) (dump__dump_deep_rev_links_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&dump_scalar_common_9[1])),
    ((MR_Box) (dump__dump_proc_static_caller_csds_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&dump_scalar_common_9[1])),
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

static /* final */ const MR_Box dump_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box dump_scalar_common_7[11][7] = {
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

static /* final */ const MR_Box dump_scalar_common_8[4][8] = {
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

static /* final */ const MR_Box dump_scalar_common_9[2][6] = {
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

static /* final */ const MR_Box dump_scalar_common_10[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&dump_scalar_common_7[10])),
    ((MR_Box) (dump__dump_call_site_calls_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "\t"))
  },
};


static /* final */ const struct dump__vector_common_type_6_0_s dump_vector_common_6[8] = {
  /* row 0 */
  {
    (MR_String) "csd",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "css",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "pd",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "ps",
    (MR_Integer) 3
  },
  /* row 4 */
  {
    (MR_String) "csd",
    (MR_Integer) 0
  },
  /* row 5 */
  {
    (MR_String) "css",
    (MR_Integer) 1
  },
  /* row 6 */
  {
    (MR_String) "pd",
    (MR_Integer) 2
  },
  /* row 7 */
  {
    (MR_String) "ps",
    (MR_Integer) 3
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1648 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_0
  }
};

#line 1656 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 1664 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_call_site_static_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0
  }
};

#line 1672 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 1680 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__maybe__pti_maybe_1__plain_profile__type_ctor_info_clique_ptr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

#line 1688 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct1 dump__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1696 "dump.c"
static const MR_FA_TypeInfo_Struct1 dump__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1704 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct2 dump__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &dump__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1713 "dump.c"
static const MR_FA_PseudoTypeInfo_Struct2 dump__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &dump__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1722 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_cliques_0_0 = {
  (MR_String) "dump_cliques",
  (MR_Integer) 0
};

#line 1728 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_cliques_0_1 = {
  (MR_String) "do_not_dump_cliques",
  (MR_Integer) 1
};

#line 1734 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dump_cliques_0[2] = {
  &dump__dump__enum_functor_desc_dump_cliques_0_0,
  &dump__dump__enum_functor_desc_dump_cliques_0_1
};

#line 1740 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dump_cliques_0[2] = {
  &dump__dump__enum_functor_desc_dump_cliques_0_1,
  &dump__dump__enum_functor_desc_dump_cliques_0_0
};

#line 1746 "dump.c"
static const MR_Integer dump__dump__functor_number_map_dump_cliques_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1752 "dump.c"
const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_dump_cliques_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____dump_cliques_0_0_10001)),
  ((MR_Box) (dump____Compare____dump_cliques_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "dump_cliques",
  {     dump__dump__enum_name_ordered_dump_cliques_0 },
  {     dump__dump__enum_value_ordered_dump_cliques_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  dump__dump__functor_number_map_dump_cliques_0
};

#line 1769 "dump.c"
static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1dump__type_ctor_info_dumpable_array_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &dump__dump__type_ctor_info_dumpable_array_0
  }
};

#line 1777 "dump.c"
static const MR_PseudoTypeInfo dump__dump__field_types_dump_options_0_0[6] = {
  (MR_PseudoTypeInfo) &dump__dump__type_ctor_info_show_restricted_dump_0,
  (MR_PseudoTypeInfo) &dump__set_ordlist__ti_set_ordlist_1dump__type_ctor_info_dumpable_array_0,
  (MR_PseudoTypeInfo) &dump__dump__type_ctor_info_show_stats_0,
  (MR_PseudoTypeInfo) &dump__dump__type_ctor_info_dump_cliques_0,
  (MR_PseudoTypeInfo) &dump__dump__type_ctor_info_dump_rev_links_0,
  (MR_PseudoTypeInfo) &dump__dump__type_ctor_info_dump_prop_measurements_0
};

#line 1787 "dump.c"
static const MR_ConstString dump__dump__field_names_dump_options_0_0[6] = {
  (MR_String) "do_restricted",
  (MR_String) "do_arrays",
  (MR_String) "do_stats",
  (MR_String) "do_dump_cliques",
  (MR_String) "do_dump_rev_links",
  (MR_String) "do_dump_prop_measurements"
};

#line 1797 "dump.c"
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

#line 1831 "dump.c"
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

#line 1846 "dump.c"
static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_dump_options_0_0[1] = {
  &dump__dump__du_functor_desc_dump_options_0_0
};

#line 1851 "dump.c"
static const MR_DuPtagLayout dump__dump__du_ptag_ordered_dump_options_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    dump__dump__du_stag_ordered_dump_options_0_0
  }
};

#line 1860 "dump.c"
static const MR_DuFunctorDescPtr dump__dump__du_name_ordered_dump_options_0[1] = {
  &dump__dump__du_functor_desc_dump_options_0_0
};

#line 1865 "dump.c"
static const MR_Integer dump__dump__functor_number_map_dump_options_0[1] = {
  (MR_Integer) 0
};

#line 1870 "dump.c"
const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_dump_options_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (dump____Unify____dump_options_0_0_10001)),
  ((MR_Box) (dump____Compare____dump_options_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "dump_options",
  {     dump__dump__du_name_ordered_dump_options_0 },
  {     dump__dump__du_ptag_ordered_dump_options_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  dump__dump__functor_number_map_dump_options_0
};

#line 1887 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_prop_measurements_0_0 = {
  (MR_String) "dump_prop_measurements",
  (MR_Integer) 0
};

#line 1893 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_prop_measurements_0_1 = {
  (MR_String) "do_not_dump_prop_measurements",
  (MR_Integer) 1
};

#line 1899 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dump_prop_measurements_0[2] = {
  &dump__dump__enum_functor_desc_dump_prop_measurements_0_0,
  &dump__dump__enum_functor_desc_dump_prop_measurements_0_1
};

#line 1905 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dump_prop_measurements_0[2] = {
  &dump__dump__enum_functor_desc_dump_prop_measurements_0_1,
  &dump__dump__enum_functor_desc_dump_prop_measurements_0_0
};

#line 1911 "dump.c"
static const MR_Integer dump__dump__functor_number_map_dump_prop_measurements_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1917 "dump.c"
const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_dump_prop_measurements_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____dump_prop_measurements_0_0_10001)),
  ((MR_Box) (dump____Compare____dump_prop_measurements_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "dump_prop_measurements",
  {     dump__dump__enum_name_ordered_dump_prop_measurements_0 },
  {     dump__dump__enum_value_ordered_dump_prop_measurements_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  dump__dump__functor_number_map_dump_prop_measurements_0
};

#line 1934 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_rev_links_0_0 = {
  (MR_String) "dump_rev_links",
  (MR_Integer) 0
};

#line 1940 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_rev_links_0_1 = {
  (MR_String) "do_not_dump_rev_links",
  (MR_Integer) 1
};

#line 1946 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dump_rev_links_0[2] = {
  &dump__dump__enum_functor_desc_dump_rev_links_0_0,
  &dump__dump__enum_functor_desc_dump_rev_links_0_1
};

#line 1952 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dump_rev_links_0[2] = {
  &dump__dump__enum_functor_desc_dump_rev_links_0_1,
  &dump__dump__enum_functor_desc_dump_rev_links_0_0
};

#line 1958 "dump.c"
static const MR_Integer dump__dump__functor_number_map_dump_rev_links_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1964 "dump.c"
const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_dump_rev_links_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____dump_rev_links_0_0_10001)),
  ((MR_Box) (dump____Compare____dump_rev_links_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "dump_rev_links",
  {     dump__dump__enum_name_ordered_dump_rev_links_0 },
  {     dump__dump__enum_value_ordered_dump_rev_links_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  dump__dump__functor_number_map_dump_rev_links_0
};

#line 1981 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_0 = {
  (MR_String) "csd",
  (MR_Integer) 0
};

#line 1987 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_1 = {
  (MR_String) "css",
  (MR_Integer) 1
};

#line 1993 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_2 = {
  (MR_String) "pd",
  (MR_Integer) 2
};

#line 1999 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_3 = {
  (MR_String) "ps",
  (MR_Integer) 3
};

#line 2005 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dumpable_array_0[4] = {
  &dump__dump__enum_functor_desc_dumpable_array_0_0,
  &dump__dump__enum_functor_desc_dumpable_array_0_1,
  &dump__dump__enum_functor_desc_dumpable_array_0_2,
  &dump__dump__enum_functor_desc_dumpable_array_0_3
};

#line 2013 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dumpable_array_0[4] = {
  &dump__dump__enum_functor_desc_dumpable_array_0_0,
  &dump__dump__enum_functor_desc_dumpable_array_0_1,
  &dump__dump__enum_functor_desc_dumpable_array_0_2,
  &dump__dump__enum_functor_desc_dumpable_array_0_3
};

#line 2021 "dump.c"
static const MR_Integer dump__dump__functor_number_map_dumpable_array_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 2029 "dump.c"
const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_dumpable_array_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____dumpable_array_0_0_10001)),
  ((MR_Box) (dump____Compare____dumpable_array_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "dumpable_array",
  {     dump__dump__enum_name_ordered_dumpable_array_0 },
  {     dump__dump__enum_value_ordered_dumpable_array_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  dump__dump__functor_number_map_dumpable_array_0
};

#line 2046 "dump.c"
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

#line 2061 "dump.c"
static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 2069 "dump.c"
static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_call_site_static_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0
  }
};

#line 2077 "dump.c"
static const MR_PseudoTypeInfo dump__dump__field_types_restriction_0_1[2] = {
  (MR_PseudoTypeInfo) &dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_call_site_static_ptr_0
};

#line 2083 "dump.c"
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

#line 2098 "dump.c"
static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_restriction_0_0[1] = {
  &dump__dump__du_functor_desc_restriction_0_0
};

#line 2103 "dump.c"
static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_restriction_0_1[1] = {
  &dump__dump__du_functor_desc_restriction_0_1
};

#line 2108 "dump.c"
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

#line 2122 "dump.c"
static const MR_DuFunctorDescPtr dump__dump__du_name_ordered_restriction_0[2] = {
  &dump__dump__du_functor_desc_restriction_0_0,
  &dump__dump__du_functor_desc_restriction_0_1
};

#line 2128 "dump.c"
static const MR_Integer dump__dump__functor_number_map_restriction_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2134 "dump.c"
const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_restriction_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (dump____Unify____restriction_0_0_10001)),
  ((MR_Box) (dump____Compare____restriction_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "restriction",
  {     dump__dump__du_name_ordered_restriction_0 },
  {     dump__dump__du_ptag_ordered_restriction_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  dump__dump__functor_number_map_restriction_0
};

#line 2151 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_restricted_dump_0_0 = {
  (MR_String) "show_restricted_dump",
  (MR_Integer) 0
};

#line 2157 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_restricted_dump_0_1 = {
  (MR_String) "show_complete_dump",
  (MR_Integer) 1
};

#line 2163 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_show_restricted_dump_0[2] = {
  &dump__dump__enum_functor_desc_show_restricted_dump_0_0,
  &dump__dump__enum_functor_desc_show_restricted_dump_0_1
};

#line 2169 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_show_restricted_dump_0[2] = {
  &dump__dump__enum_functor_desc_show_restricted_dump_0_1,
  &dump__dump__enum_functor_desc_show_restricted_dump_0_0
};

#line 2175 "dump.c"
static const MR_Integer dump__dump__functor_number_map_show_restricted_dump_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2181 "dump.c"
const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_show_restricted_dump_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____show_restricted_dump_0_0_10001)),
  ((MR_Box) (dump____Compare____show_restricted_dump_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "show_restricted_dump",
  {     dump__dump__enum_name_ordered_show_restricted_dump_0 },
  {     dump__dump__enum_value_ordered_show_restricted_dump_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  dump__dump__functor_number_map_show_restricted_dump_0
};

#line 2198 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_stats_0_0 = {
  (MR_String) "show_stats",
  (MR_Integer) 0
};

#line 2204 "dump.c"
static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_stats_0_1 = {
  (MR_String) "do_not_show_stats",
  (MR_Integer) 1
};

#line 2210 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_show_stats_0[2] = {
  &dump__dump__enum_functor_desc_show_stats_0_0,
  &dump__dump__enum_functor_desc_show_stats_0_1
};

#line 2216 "dump.c"
static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_show_stats_0[2] = {
  &dump__dump__enum_functor_desc_show_stats_0_1,
  &dump__dump__enum_functor_desc_show_stats_0_0
};

#line 2222 "dump.c"
static const MR_Integer dump__dump__functor_number_map_show_stats_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2228 "dump.c"
const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_show_stats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____show_stats_0_0_10001)),
  ((MR_Box) (dump____Compare____show_stats_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "show_stats",
  {     dump__dump__enum_name_ordered_show_stats_0 },
  {     dump__dump__enum_value_ordered_show_stats_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  dump__dump__functor_number_map_show_stats_0
};

#line 2245 "dump.c"
static MR_bool MR_CALL 
dump____Unify____dump_cliques_0_0_10001(
#line 2248 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 2250 "dump.c"
  MR_Box dump__wrapper_arg_2)
#line 2252 "dump.c"
{
#line 2254 "dump.c"
  {
#line 2256 "dump.c"
    MR_bool dump__succeeded;

#line 2259 "dump.c"
    {
#line 2261 "dump.c"
      dump__succeeded = dump____Unify____dump_cliques_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
#line 2264 "dump.c"
    return dump__succeeded;
#line 2266 "dump.c"
  }
#line 2268 "dump.c"
}

#line 2271 "dump.c"
static void MR_CALL 
dump____Compare____dump_cliques_0_0_10001(
#line 2274 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 2276 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 2278 "dump.c"
  MR_Box dump__wrapper_arg_3)
#line 2280 "dump.c"
{
#line 2282 "dump.c"
  {
#line 2284 "dump.c"
    MR_Word dump__conv0_HeadVar__1_1;

#line 2287 "dump.c"
    {
#line 2289 "dump.c"
      dump____Compare____dump_cliques_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
#line 2292 "dump.c"
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
#line 2294 "dump.c"
  }
#line 2296 "dump.c"
}

#line 2299 "dump.c"
static MR_bool MR_CALL 
dump____Unify____dump_options_0_0_10001(
#line 2302 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 2304 "dump.c"
  MR_Box dump__wrapper_arg_2)
#line 2306 "dump.c"
{
#line 2308 "dump.c"
  {
#line 2310 "dump.c"
    MR_bool dump__succeeded;

#line 2313 "dump.c"
    {
#line 2315 "dump.c"
      dump__succeeded = dump____Unify____dump_options_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
#line 2318 "dump.c"
    return dump__succeeded;
#line 2320 "dump.c"
  }
#line 2322 "dump.c"
}

#line 2325 "dump.c"
static void MR_CALL 
dump____Compare____dump_options_0_0_10001(
#line 2328 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 2330 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 2332 "dump.c"
  MR_Box dump__wrapper_arg_3)
#line 2334 "dump.c"
{
#line 2336 "dump.c"
  {
#line 2338 "dump.c"
    MR_Word dump__conv0_HeadVar__1_1;

#line 2341 "dump.c"
    {
#line 2343 "dump.c"
      dump____Compare____dump_options_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
#line 2346 "dump.c"
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
#line 2348 "dump.c"
  }
#line 2350 "dump.c"
}

#line 2353 "dump.c"
static MR_bool MR_CALL 
dump____Unify____dump_prop_measurements_0_0_10001(
#line 2356 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 2358 "dump.c"
  MR_Box dump__wrapper_arg_2)
#line 2360 "dump.c"
{
#line 2362 "dump.c"
  {
#line 2364 "dump.c"
    MR_bool dump__succeeded;

#line 2367 "dump.c"
    {
#line 2369 "dump.c"
      dump__succeeded = dump____Unify____dump_prop_measurements_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
#line 2372 "dump.c"
    return dump__succeeded;
#line 2374 "dump.c"
  }
#line 2376 "dump.c"
}

#line 2379 "dump.c"
static void MR_CALL 
dump____Compare____dump_prop_measurements_0_0_10001(
#line 2382 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 2384 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 2386 "dump.c"
  MR_Box dump__wrapper_arg_3)
#line 2388 "dump.c"
{
#line 2390 "dump.c"
  {
#line 2392 "dump.c"
    MR_Word dump__conv0_HeadVar__1_1;

#line 2395 "dump.c"
    {
#line 2397 "dump.c"
      dump____Compare____dump_prop_measurements_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
#line 2400 "dump.c"
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
#line 2402 "dump.c"
  }
#line 2404 "dump.c"
}

#line 2407 "dump.c"
static MR_bool MR_CALL 
dump____Unify____dump_rev_links_0_0_10001(
#line 2410 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 2412 "dump.c"
  MR_Box dump__wrapper_arg_2)
#line 2414 "dump.c"
{
#line 2416 "dump.c"
  {
#line 2418 "dump.c"
    MR_bool dump__succeeded;

#line 2421 "dump.c"
    {
#line 2423 "dump.c"
      dump__succeeded = dump____Unify____dump_rev_links_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
#line 2426 "dump.c"
    return dump__succeeded;
#line 2428 "dump.c"
  }
#line 2430 "dump.c"
}

#line 2433 "dump.c"
static void MR_CALL 
dump____Compare____dump_rev_links_0_0_10001(
#line 2436 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 2438 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 2440 "dump.c"
  MR_Box dump__wrapper_arg_3)
#line 2442 "dump.c"
{
#line 2444 "dump.c"
  {
#line 2446 "dump.c"
    MR_Word dump__conv0_HeadVar__1_1;

#line 2449 "dump.c"
    {
#line 2451 "dump.c"
      dump____Compare____dump_rev_links_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
#line 2454 "dump.c"
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
#line 2456 "dump.c"
  }
#line 2458 "dump.c"
}

#line 2461 "dump.c"
static MR_bool MR_CALL 
dump____Unify____dumpable_array_0_0_10001(
#line 2464 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 2466 "dump.c"
  MR_Box dump__wrapper_arg_2)
#line 2468 "dump.c"
{
#line 2470 "dump.c"
  {
#line 2472 "dump.c"
    MR_bool dump__succeeded;

#line 2475 "dump.c"
    {
#line 2477 "dump.c"
      dump__succeeded = dump____Unify____dumpable_array_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
#line 2480 "dump.c"
    return dump__succeeded;
#line 2482 "dump.c"
  }
#line 2484 "dump.c"
}

#line 2487 "dump.c"
static void MR_CALL 
dump____Compare____dumpable_array_0_0_10001(
#line 2490 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 2492 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 2494 "dump.c"
  MR_Box dump__wrapper_arg_3)
#line 2496 "dump.c"
{
#line 2498 "dump.c"
  {
#line 2500 "dump.c"
    MR_Word dump__conv0_HeadVar__1_1;

#line 2503 "dump.c"
    {
#line 2505 "dump.c"
      dump____Compare____dumpable_array_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
#line 2508 "dump.c"
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
#line 2510 "dump.c"
  }
#line 2512 "dump.c"
}

#line 2515 "dump.c"
static MR_bool MR_CALL 
dump____Unify____restriction_0_0_10001(
#line 2518 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 2520 "dump.c"
  MR_Box dump__wrapper_arg_2)
#line 2522 "dump.c"
{
#line 2524 "dump.c"
  {
#line 2526 "dump.c"
    MR_bool dump__succeeded;

#line 2529 "dump.c"
    {
#line 2531 "dump.c"
      dump__succeeded = dump____Unify____restriction_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
#line 2534 "dump.c"
    return dump__succeeded;
#line 2536 "dump.c"
  }
#line 2538 "dump.c"
}

#line 2541 "dump.c"
static void MR_CALL 
dump____Compare____restriction_0_0_10001(
#line 2544 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 2546 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 2548 "dump.c"
  MR_Box dump__wrapper_arg_3)
#line 2550 "dump.c"
{
#line 2552 "dump.c"
  {
#line 2554 "dump.c"
    MR_Word dump__conv0_HeadVar__1_1;

#line 2557 "dump.c"
    {
#line 2559 "dump.c"
      dump____Compare____restriction_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
#line 2562 "dump.c"
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
#line 2564 "dump.c"
  }
#line 2566 "dump.c"
}

#line 2569 "dump.c"
static MR_bool MR_CALL 
dump____Unify____show_restricted_dump_0_0_10001(
#line 2572 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 2574 "dump.c"
  MR_Box dump__wrapper_arg_2)
#line 2576 "dump.c"
{
#line 2578 "dump.c"
  {
#line 2580 "dump.c"
    MR_bool dump__succeeded;

#line 2583 "dump.c"
    {
#line 2585 "dump.c"
      dump__succeeded = dump____Unify____show_restricted_dump_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
#line 2588 "dump.c"
    return dump__succeeded;
#line 2590 "dump.c"
  }
#line 2592 "dump.c"
}

#line 2595 "dump.c"
static void MR_CALL 
dump____Compare____show_restricted_dump_0_0_10001(
#line 2598 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 2600 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 2602 "dump.c"
  MR_Box dump__wrapper_arg_3)
#line 2604 "dump.c"
{
#line 2606 "dump.c"
  {
#line 2608 "dump.c"
    MR_Word dump__conv0_HeadVar__1_1;

#line 2611 "dump.c"
    {
#line 2613 "dump.c"
      dump____Compare____show_restricted_dump_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
#line 2616 "dump.c"
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
#line 2618 "dump.c"
  }
#line 2620 "dump.c"
}

#line 2623 "dump.c"
static MR_bool MR_CALL 
dump____Unify____show_stats_0_0_10001(
#line 2626 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 2628 "dump.c"
  MR_Box dump__wrapper_arg_2)
#line 2630 "dump.c"
{
#line 2632 "dump.c"
  {
#line 2634 "dump.c"
    MR_bool dump__succeeded;

#line 2637 "dump.c"
    {
#line 2639 "dump.c"
      dump__succeeded = dump____Unify____show_stats_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
#line 2642 "dump.c"
    return dump__succeeded;
#line 2644 "dump.c"
  }
#line 2646 "dump.c"
}

#line 2649 "dump.c"
static void MR_CALL 
dump____Compare____show_stats_0_0_10001(
#line 2652 "dump.c"
  MR_Box * dump__wrapper_arg_1,
#line 2654 "dump.c"
  MR_Box dump__wrapper_arg_2,
#line 2656 "dump.c"
  MR_Box dump__wrapper_arg_3)
#line 2658 "dump.c"
{
#line 2660 "dump.c"
  {
#line 2662 "dump.c"
    MR_Word dump__conv0_HeadVar__1_1;

#line 2665 "dump.c"
    {
#line 2667 "dump.c"
      dump____Compare____show_stats_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
#line 2670 "dump.c"
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
#line 2672 "dump.c"
  }
#line 2674 "dump.c"
}

#line 273 "dump.m"
static void MR_CALL 
dump__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
#line 273 "dump.m"
  MR_ArrayPtr dump__ProcStatics_8,
#line 273 "dump.m"
  MR_Word dump__ProcDynamic_10,
#line 273 "dump.m"
  MR_Word dump__STATE_VARIABLE_PS_Ptrs_0_16,
#line 273 "dump.m"
  MR_Word * dump__STATE_VARIABLE_PS_Ptrs_17,
#line 273 "dump.m"
  MR_Word dump__STATE_VARIABLE_CSS_Ptrs_0_18,
#line 273 "dump.m"
  MR_Word * dump__STATE_VARIABLE_CSS_Ptrs_19)
#line 273 "dump.m"
{
#line 278 "dump.m"
  {
#line 278 "dump.m"
    MR_bool dump__succeeded;
#line 278 "dump.m"
    MR_Word dump__TypeCtorInfo_37_37;
#line 278 "dump.m"
    MR_Word dump__ProcStaticPtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcDynamic_10, (MR_Integer) 0)));
#line 278 "dump.m"
    MR_Word dump__ProcStatic_14;
#line 278 "dump.m"
    MR_Word dump__CSSs_15;
#line 278 "dump.m"
    MR_ArrayPtr dump__V_21_21;
#line 279 "dump.m"
    MR_ArrayPtr dump__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__ProcDynamic_10, (MR_Integer) 1)));
#line 279 "dump.m"
    MR_Word dump__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcDynamic_10, (MR_Integer) 2)));
#line 282 "dump.m"
    MR_Word dump__V_25_25;
#line 282 "dump.m"
    MR_String dump__V_26_26;
#line 282 "dump.m"
    MR_String dump__V_27_27;
#line 282 "dump.m"
    MR_String dump__V_28_28;
#line 282 "dump.m"
    MR_String dump__V_29_29;
#line 282 "dump.m"
    MR_String dump__V_30_30;
#line 282 "dump.m"
    MR_Integer dump__V_31_31;
#line 282 "dump.m"
    MR_Word dump__V_32_32;
#line 282 "dump.m"
    MR_ArrayPtr dump__V_33_33;
#line 282 "dump.m"
    MR_Word dump__V_34_34;
#line 282 "dump.m"
    MR_Word dump__V_35_35;

#line 280 "dump.m"
    {
#line 280 "dump.m"
      mercury__set__insert_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, ((MR_Box) (dump__ProcStaticPtr_13)), dump__STATE_VARIABLE_PS_Ptrs_0_16, dump__STATE_VARIABLE_PS_Ptrs_17);
    }
#line 281 "dump.m"
    {
#line 281 "dump.m"
      profile__lookup_proc_statics_3_p_0(dump__ProcStatics_8, dump__ProcStaticPtr_13, &dump__ProcStatic_14);
    }
#line 2745 "dump.c"
    dump__TypeCtorInfo_37_37 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
#line 282 "dump.m"
    dump__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 0)));
#line 282 "dump.m"
    dump__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 1)));
#line 282 "dump.m"
    dump__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 2)));
#line 282 "dump.m"
    dump__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 3)));
#line 282 "dump.m"
    dump__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 4)));
#line 282 "dump.m"
    dump__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 5)));
#line 282 "dump.m"
    dump__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 6)));
#line 282 "dump.m"
    dump__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 7)));
#line 282 "dump.m"
    dump__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 8)));
#line 282 "dump.m"
    dump__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 9)));
#line 282 "dump.m"
    dump__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 10)));
#line 282 "dump.m"
    dump__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 11)));
#line 282 "dump.m"
    {
#line 282 "dump.m"
      dump__CSSs_15 = mercury__array__to_list_1_f_0(dump__TypeCtorInfo_37_37, (MR_ArrayPtr) dump__V_21_21);
    }
#line 283 "dump.m"
    {
#line 283 "dump.m"
      mercury__set__insert_list_3_p_0(dump__TypeCtorInfo_37_37, dump__CSSs_15, dump__STATE_VARIABLE_CSS_Ptrs_0_18, dump__STATE_VARIABLE_CSS_Ptrs_19);
#line 283 "dump.m"
      return;
    }
#line 278 "dump.m"
  }
#line 273 "dump.m"
}

#line 873 "dump.m"
static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__873__1_2_p_0(
#line 873 "dump.m"
  MR_Integer dump__CSSOwnMax_20,
#line 873 "dump.m"
  MR_Integer dump__CSSDescMax_21)
#line 873 "dump.m"
{
#line 873 "dump.m"
  {
#line 873 "dump.m"
    MR_bool dump__succeeded = (dump__CSSOwnMax_20 == dump__CSSDescMax_21);

#line 873 "dump.m"
    return dump__succeeded;
#line 873 "dump.m"
  }
#line 873 "dump.m"
}

#line 864 "dump.m"
static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__864__1_2_p_0(
#line 864 "dump.m"
  MR_Integer dump__PSOwnMax_16,
#line 864 "dump.m"
  MR_Integer dump__PSDescMax_17)
#line 864 "dump.m"
{
#line 864 "dump.m"
  {
#line 864 "dump.m"
    MR_bool dump__succeeded = (dump__PSOwnMax_16 == dump__PSDescMax_17);

#line 864 "dump.m"
    return dump__succeeded;
#line 864 "dump.m"
  }
#line 864 "dump.m"
}

#line 855 "dump.m"
static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__855__1_2_p_0(
#line 855 "dump.m"
  MR_Integer dump__CSDMax_12,
#line 855 "dump.m"
  MR_Integer dump__CSDDescMax_13)
#line 855 "dump.m"
{
#line 855 "dump.m"
  {
#line 855 "dump.m"
    MR_bool dump__succeeded = (dump__CSDMax_12 == dump__CSDDescMax_13);

#line 855 "dump.m"
    return dump__succeeded;
#line 855 "dump.m"
  }
#line 855 "dump.m"
}

#line 846 "dump.m"
static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__846__1_2_p_0(
#line 846 "dump.m"
  MR_Integer dump__PDOwnMax_8,
#line 846 "dump.m"
  MR_Integer dump__PDDescMax_9)
#line 846 "dump.m"
{
#line 846 "dump.m"
  {
#line 846 "dump.m"
    MR_bool dump__succeeded = (dump__PDOwnMax_8 == dump__PDDescMax_9);

#line 846 "dump.m"
    return dump__succeeded;
#line 846 "dump.m"
  }
#line 846 "dump.m"
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
#line 2913 "dump.c"
  {
#line 2915 "dump.c"
    MR_bool dump__succeeded = (dump__HeadVar__2_1 == dump__HeadVar__2_2);

#line 2918 "dump.c"
    return dump__succeeded;
#line 2920 "dump.c"
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
#line 2966 "dump.c"
  {
#line 2968 "dump.c"
    MR_bool dump__succeeded = (dump__HeadVar__2_1 == dump__HeadVar__2_2);

#line 2971 "dump.c"
    return dump__succeeded;
#line 2973 "dump.c"
  }
#line 45 "dump.m"
}

#line 261 "dump.m"
static void MR_CALL 
dump____Compare____restriction_0_0(
#line 261 "dump.m"
  MR_Word * dump__HeadVar__1_1,
#line 261 "dump.m"
  MR_Word dump__HeadVar__2_2,
#line 261 "dump.m"
  MR_Word dump__HeadVar__3_3)
#line 261 "dump.m"
{
#line 261 "dump.m"
  {
#line 261 "dump.m"
    MR_bool dump__succeeded;
#line 261 "dump.m"
    MR_Integer dump__CastX_13 = (MR_Integer) dump__HeadVar__2_2;
#line 261 "dump.m"
    MR_Integer dump__CastY_14 = (MR_Integer) dump__HeadVar__3_3;

#line 261 "dump.m"
    dump__succeeded = (dump__CastX_13 == dump__CastY_14);
#line 261 "dump.m"
    if (dump__succeeded)
#line 3002 "dump.c"
      *dump__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "dump.m"
    else
#line 261 "dump.m"
    if ((dump__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 261 "dump.m"
      if ((dump__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 261 "dump.m"
        *dump__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "dump.m"
      else
#line 3014 "dump.c"
        *dump__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "dump.m"
    else
#line 261 "dump.m"
      {
#line 261 "dump.m"
        MR_Word dump__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__2_2, (MR_Integer) 1)));
#line 261 "dump.m"
        MR_Word dump__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__2_2, (MR_Integer) 0)));

#line 261 "dump.m"
        if ((dump__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3027 "dump.c"
          *dump__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "dump.m"
        else
#line 261 "dump.m"
          {
#line 261 "dump.m"
            MR_Word dump__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__3_3, (MR_Integer) 0)));
#line 261 "dump.m"
            MR_Word dump__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__3_3, (MR_Integer) 1)));
#line 261 "dump.m"
            MR_Word dump__V_12_12;

#line 261 "dump.m"
            {
#line 261 "dump.m"
              mercury__builtin__compare_3_p_0((MR_Word) &dump_scalar_common_1[0], &dump__V_12_12, ((MR_Box) (dump__V_18_18)), ((MR_Box) (dump__V_10_10)));
            }
#line 3045 "dump.c"
            dump__succeeded = (dump__V_12_12 == (MR_Integer) 0);
#line 261 "dump.m"
            dump__succeeded = !(dump__succeeded);
#line 261 "dump.m"
            if (dump__succeeded)
#line 261 "dump.m"
              *dump__HeadVar__1_1 = dump__V_12_12;
#line 261 "dump.m"
            else
#line 261 "dump.m"
              {
#line 261 "dump.m"
                {
#line 261 "dump.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &dump_scalar_common_1[1], dump__HeadVar__1_1, ((MR_Box) (dump__V_17_17)), ((MR_Box) (dump__V_11_11)));
#line 261 "dump.m"
                  return;
                }
#line 261 "dump.m"
              }
#line 261 "dump.m"
          }
#line 261 "dump.m"
      }
#line 261 "dump.m"
  }
#line 261 "dump.m"
}

#line 261 "dump.m"
static MR_bool MR_CALL 
dump____Unify____restriction_0_0(
#line 261 "dump.m"
  MR_Word dump__HeadVar__1_1,
#line 261 "dump.m"
  MR_Word dump__HeadVar__2_2)
#line 261 "dump.m"
{
#line 261 "dump.m"
  {
#line 261 "dump.m"
    MR_bool dump__succeeded;
#line 261 "dump.m"
    MR_Integer dump__CastX_9 = (MR_Integer) dump__HeadVar__1_1;
#line 261 "dump.m"
    MR_Integer dump__CastY_10 = (MR_Integer) dump__HeadVar__2_2;

#line 261 "dump.m"
    dump__succeeded = (dump__CastX_9 == dump__CastY_10);
#line 261 "dump.m"
    if (dump__succeeded)
#line 261 "dump.m"
      dump__succeeded = MR_TRUE;
#line 261 "dump.m"
    else
#line 261 "dump.m"
    if ((dump__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 261 "dump.m"
      {
#line 261 "dump.m"
        MR_Integer dump__CastX_3 = (MR_Integer) dump__HeadVar__1_1;
#line 261 "dump.m"
        MR_Integer dump__CastY_4 = (MR_Integer) dump__HeadVar__2_2;

#line 261 "dump.m"
        dump__succeeded = (dump__CastY_4 == dump__CastX_3);
#line 261 "dump.m"
      }
#line 261 "dump.m"
    else
#line 261 "dump.m"
      {
#line 261 "dump.m"
        MR_Word dump__TypeInfo_11_11;
#line 261 "dump.m"
        MR_Word dump__TypeInfo_12_12;
#line 261 "dump.m"
        MR_Word dump__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__1_1, (MR_Integer) 0)));
#line 261 "dump.m"
        MR_Word dump__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__1_1, (MR_Integer) 1)));
#line 261 "dump.m"
        MR_Word dump__V_7_7;
#line 261 "dump.m"
        MR_Word dump__V_8_8;

#line 261 "dump.m"
        dump__succeeded = ((MR_tag((MR_Word) dump__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 261 "dump.m"
        if (dump__succeeded)
#line 261 "dump.m"
          {
#line 261 "dump.m"
            dump__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__2_2, (MR_Integer) 0)));
#line 261 "dump.m"
            dump__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__2_2, (MR_Integer) 1)));
#line 3141 "dump.c"
            dump__TypeInfo_11_11 = (MR_Word) &dump_scalar_common_1[0];
#line 3143 "dump.c"
            {
#line 3145 "dump.c"
              dump__succeeded = mercury__builtin__unify_2_p_0(dump__TypeInfo_11_11, ((MR_Box) (dump__V_5_5)), ((MR_Box) (dump__V_7_7)));
            }
#line 261 "dump.m"
            if (dump__succeeded)
#line 261 "dump.m"
              {
#line 3152 "dump.c"
                dump__TypeInfo_12_12 = (MR_Word) &dump_scalar_common_1[1];
#line 3154 "dump.c"
                {
#line 3156 "dump.c"
                  return dump__succeeded = mercury__builtin__unify_2_p_0(dump__TypeInfo_12_12, ((MR_Box) (dump__V_6_6)), ((MR_Box) (dump__V_8_8)));
                }
#line 261 "dump.m"
              }
#line 261 "dump.m"
          }
#line 261 "dump.m"
      }
#line 261 "dump.m"
    return dump__succeeded;
#line 261 "dump.m"
  }
#line 261 "dump.m"
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
#line 3213 "dump.c"
  {
#line 3215 "dump.c"
    MR_bool dump__succeeded = (dump__HeadVar__2_1 == dump__HeadVar__2_2);

#line 3218 "dump.c"
    return dump__succeeded;
#line 3220 "dump.c"
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
#line 3266 "dump.c"
  {
#line 3268 "dump.c"
    MR_bool dump__succeeded = (dump__HeadVar__2_1 == dump__HeadVar__2_2);

#line 3271 "dump.c"
    return dump__succeeded;
#line 3273 "dump.c"
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
#line 3319 "dump.c"
  {
#line 3321 "dump.c"
    MR_bool dump__succeeded = (dump__HeadVar__2_1 == dump__HeadVar__2_2);

#line 3324 "dump.c"
    return dump__succeeded;
#line 3326 "dump.c"
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
#line 3355 "dump.c"
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
#line 3397 "dump.c"
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
#line 3417 "dump.c"
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
#line 3441 "dump.c"
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
#line 3465 "dump.c"
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
#line 3489 "dump.c"
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

#line 3585 "dump.c"
        dump__succeeded = (dump__V_3_3 == dump__V_9_9);
#line 31 "dump.m"
        if (dump__succeeded)
#line 31 "dump.m"
          {
#line 3591 "dump.c"
            dump__TypeInfo_17_17 = (MR_Word) &dump_scalar_common_1[5];
#line 3593 "dump.c"
            {
#line 3595 "dump.c"
              dump__succeeded = mercury__builtin__unify_2_p_0(dump__TypeInfo_17_17, ((MR_Box) (dump__V_4_4)), ((MR_Box) (dump__V_10_10)));
            }
#line 31 "dump.m"
            if (dump__succeeded)
#line 31 "dump.m"
              {
#line 3602 "dump.c"
                dump__succeeded = (dump__V_5_5 == dump__V_11_11);
#line 31 "dump.m"
                if (dump__succeeded)
#line 31 "dump.m"
                  {
#line 3608 "dump.c"
                    dump__succeeded = (dump__V_6_6 == dump__V_12_12);
#line 31 "dump.m"
                    if (dump__succeeded)
#line 31 "dump.m"
                      {
#line 3614 "dump.c"
                        dump__succeeded = (dump__V_7_7 == dump__V_13_13);
#line 31 "dump.m"
                        if (dump__succeeded)
#line 3618 "dump.c"
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
#line 3678 "dump.c"
  {
#line 3680 "dump.c"
    MR_bool dump__succeeded = (dump__HeadVar__2_1 == dump__HeadVar__2_2);

#line 3683 "dump.c"
    return dump__succeeded;
#line 3685 "dump.c"
  }
#line 68 "dump.m"
}

#line 965 "dump.m"
static MR_bool MR_CALL 
dump__should_dump_2_p_0(
#line 965 "dump.m"
  MR_Word dump__DumpOptions_3,
#line 965 "dump.m"
  MR_Word dump__What_4)
#line 965 "dump.m"
{
#line 967 "dump.m"
  {
#line 967 "dump.m"
    MR_bool dump__succeeded;
#line 967 "dump.m"
    MR_Word dump__Arrays_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_3, (MR_Integer) 1)));
#line 968 "dump.m"
    MR_Word dump__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_3, (MR_Integer) 0)));
#line 968 "dump.m"
    MR_Word dump__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_3, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 968 "dump.m"
    MR_Word dump__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_3, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 968 "dump.m"
    MR_Word dump__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 968 "dump.m"
    MR_Word dump__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 969 "dump.m"
    {
#line 969 "dump.m"
      return dump__succeeded = mercury__set__member_2_p_0((MR_Word) &dump__dump__type_ctor_info_dumpable_array_0, ((MR_Box) (dump__What_4)), dump__Arrays_5);
    }
#line 967 "dump.m"
    return dump__succeeded;
#line 967 "dump.m"
  }
#line 965 "dump.m"
}

#line 935 "dump.m"
static void MR_CALL 
dump__dump_own_and_desc_6_p_0(
#line 935 "dump.m"
  MR_String dump__Prefix_7,
#line 935 "dump.m"
  MR_Integer dump__Cur_8,
#line 935 "dump.m"
  MR_Word dump__Own_9,
#line 935 "dump.m"
  MR_Word dump__Desc_10)
#line 935 "dump.m"
{
#line 938 "dump.m"
  {
#line 938 "dump.m"
    MR_bool dump__succeeded;
#line 938 "dump.m"
    MR_Word dump__PrintedOwn_12;
#line 938 "dump.m"
    MR_Word dump__PrintedDesc_13;

#line 939 "dump.m"
    {
#line 939 "dump.m"
      dump__succeeded = measurements__is_zero_own_prof_info_1_p_0(dump__Own_9);
    }
#line 941 "dump.m"
    if (dump__succeeded)
#line 940 "dump.m"
      dump__PrintedOwn_12 = (MR_Integer) 0;
#line 941 "dump.m"
    else
#line 942 "dump.m"
      {
#line 942 "dump.m"
        MR_String dump__V_34_34;
#line 942 "dump.m"
        MR_Word dump__V_40_40 = (MR_Word) &dump_scalar_common_5[0];
#line 942 "dump.m"
        MR_String dump__V_42_42;

#line 942 "dump.m"
        {
#line 942 "dump.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_40_40, dump__Prefix_7, &dump__V_34_34);
        }
#line 942 "dump.m"
        {
#line 942 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_34_34);
        }
#line 942 "dump.m"
        {
#line 942 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_40_40, dump__Cur_8, &dump__V_42_42);
        }
#line 942 "dump.m"
        {
#line 942 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_42_42);
        }
#line 942 "dump.m"
        {
#line 942 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) " own:\n");
        }
#line 943 "dump.m"
        {
#line 943 "dump.m"
          dump__dump_own_prof_info_3_p_0(dump__Own_9);
        }
#line 944 "dump.m"
        dump__PrintedOwn_12 = (MR_Integer) 1;
#line 942 "dump.m"
      }
#line 946 "dump.m"
    {
#line 946 "dump.m"
      dump__succeeded = measurements__is_zero_inherit_prof_info_1_p_0(dump__Desc_10);
    }
#line 948 "dump.m"
    if (dump__succeeded)
#line 947 "dump.m"
      dump__PrintedDesc_13 = (MR_Integer) 0;
#line 948 "dump.m"
    else
#line 949 "dump.m"
      {
#line 949 "dump.m"
        MR_String dump__V_51_51;
#line 949 "dump.m"
        MR_Word dump__V_57_57 = (MR_Word) &dump_scalar_common_5[0];
#line 949 "dump.m"
        MR_String dump__V_59_59;

#line 949 "dump.m"
        {
#line 949 "dump.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_57_57, dump__Prefix_7, &dump__V_51_51);
        }
#line 949 "dump.m"
        {
#line 949 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_51_51);
        }
#line 949 "dump.m"
        {
#line 949 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_57_57, dump__Cur_8, &dump__V_59_59);
        }
#line 949 "dump.m"
        {
#line 949 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_59_59);
        }
#line 949 "dump.m"
        {
#line 949 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) " inherit:\n");
        }
#line 950 "dump.m"
        {
#line 950 "dump.m"
          dump__dump_inherit_prof_info_3_p_0(dump__Desc_10);
        }
#line 951 "dump.m"
        dump__PrintedDesc_13 = (MR_Integer) 1;
#line 949 "dump.m"
      }
#line 954 "dump.m"
    dump__succeeded = (dump__PrintedOwn_12 == (MR_Integer) 1);
#line 955 "dump.m"
    if (!(dump__succeeded))
#line 955 "dump.m"
      dump__succeeded = (dump__PrintedDesc_13 == (MR_Integer) 1);
#line 959 "dump.m"
    if (dump__succeeded)
#line 958 "dump.m"
      {
#line 958 "dump.m"
        mercury__io__nl_2_p_0();
#line 958 "dump.m"
        return;
      }
#line 959 "dump.m"
    else
#line 959 "dump.m"
      {
#line 959 "dump.m"
      }
#line 938 "dump.m"
  }
#line 935 "dump.m"
}

#line 921 "dump.m"
static void MR_CALL 
dump__dump_css_measurements_6_p_0(
#line 921 "dump.m"
  MR_Integer dump__Cur_7,
#line 921 "dump.m"
  MR_Integer dump__Max_8,
#line 921 "dump.m"
  MR_ArrayPtr dump__CSSOwn_9,
#line 921 "dump.m"
  MR_ArrayPtr dump__CSSDesc_10)
#line 921 "dump.m"
{
#line 931 "dump.m"
  while (MR_TRUE)
#line 931 "dump.m"
    {
#line 931 "dump.m"
      /* tailcall optimized into a loop */
#line 931 "dump.m"
      {
#line 931 "dump.m"
        MR_bool dump__succeeded = (dump__Cur_7 <= dump__Max_8);

#line 931 "dump.m"
        if (dump__succeeded)
#line 927 "dump.m"
          {
#line 927 "dump.m"
            MR_Word dump__Own_12;
#line 927 "dump.m"
            MR_Word dump__Desc_13;
#line 927 "dump.m"
            MR_Integer dump__V_18_18;
#line 927 "dump.m"
            MR_Box dump__conv0_Own_12;
#line 928 "dump.m"
            MR_Box dump__conv1_Desc_13;

#line 927 "dump.m"
            {
#line 927 "dump.m"
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) dump__CSSOwn_9, dump__Cur_7, &dump__conv0_Own_12);
            }
#line 927 "dump.m"
            dump__Own_12 = ((MR_Word) dump__conv0_Own_12);
#line 928 "dump.m"
            {
#line 928 "dump.m"
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) dump__CSSDesc_10, dump__Cur_7, &dump__conv1_Desc_13);
            }
#line 928 "dump.m"
            dump__Desc_13 = ((MR_Word) dump__conv1_Desc_13);
#line 929 "dump.m"
            {
#line 929 "dump.m"
              dump__dump_own_and_desc_6_p_0((MR_String) "css", dump__Cur_7, dump__Own_12, dump__Desc_13);
            }
#line 930 "dump.m"
            dump__V_18_18 = (dump__Cur_7 + (MR_Integer) 1);
#line 930 "dump.m"
            /* direct tailcall eliminated */
#line 930 "dump.m"
            {
#line 930 "dump.m"
              MR_Integer dump__Cur__tmp_copy_7 = dump__V_18_18;

#line 930 "dump.m"
              dump__Cur_7 = dump__Cur__tmp_copy_7;
#line 930 "dump.m"
            }
#line 930 "dump.m"
            continue;
#line 927 "dump.m"
          }
#line 931 "dump.m"
        else
#line 931 "dump.m"
          {
#line 931 "dump.m"
          }
#line 931 "dump.m"
      }
#line 931 "dump.m"
      break;
#line 931 "dump.m"
    }
#line 921 "dump.m"
}

#line 907 "dump.m"
static void MR_CALL 
dump__dump_ps_measurements_6_p_0(
#line 907 "dump.m"
  MR_Integer dump__Cur_7,
#line 907 "dump.m"
  MR_Integer dump__Max_8,
#line 907 "dump.m"
  MR_ArrayPtr dump__PSOwn_9,
#line 907 "dump.m"
  MR_ArrayPtr dump__PSDesc_10)
#line 907 "dump.m"
{
#line 917 "dump.m"
  while (MR_TRUE)
#line 917 "dump.m"
    {
#line 917 "dump.m"
      /* tailcall optimized into a loop */
#line 917 "dump.m"
      {
#line 917 "dump.m"
        MR_bool dump__succeeded = (dump__Cur_7 <= dump__Max_8);

#line 917 "dump.m"
        if (dump__succeeded)
#line 913 "dump.m"
          {
#line 913 "dump.m"
            MR_Word dump__Own_12;
#line 913 "dump.m"
            MR_Word dump__Desc_13;
#line 913 "dump.m"
            MR_Integer dump__V_18_18;
#line 913 "dump.m"
            MR_Box dump__conv0_Own_12;
#line 914 "dump.m"
            MR_Box dump__conv1_Desc_13;

#line 913 "dump.m"
            {
#line 913 "dump.m"
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) dump__PSOwn_9, dump__Cur_7, &dump__conv0_Own_12);
            }
#line 913 "dump.m"
            dump__Own_12 = ((MR_Word) dump__conv0_Own_12);
#line 914 "dump.m"
            {
#line 914 "dump.m"
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) dump__PSDesc_10, dump__Cur_7, &dump__conv1_Desc_13);
            }
#line 914 "dump.m"
            dump__Desc_13 = ((MR_Word) dump__conv1_Desc_13);
#line 915 "dump.m"
            {
#line 915 "dump.m"
              dump__dump_own_and_desc_6_p_0((MR_String) "ps", dump__Cur_7, dump__Own_12, dump__Desc_13);
            }
#line 916 "dump.m"
            dump__V_18_18 = (dump__Cur_7 + (MR_Integer) 1);
#line 916 "dump.m"
            /* direct tailcall eliminated */
#line 916 "dump.m"
            {
#line 916 "dump.m"
              MR_Integer dump__Cur__tmp_copy_7 = dump__V_18_18;

#line 916 "dump.m"
              dump__Cur_7 = dump__Cur__tmp_copy_7;
#line 916 "dump.m"
            }
#line 916 "dump.m"
            continue;
#line 913 "dump.m"
          }
#line 917 "dump.m"
        else
#line 917 "dump.m"
          {
#line 917 "dump.m"
          }
#line 917 "dump.m"
      }
#line 917 "dump.m"
      break;
#line 917 "dump.m"
    }
#line 907 "dump.m"
}

#line 892 "dump.m"
static void MR_CALL 
dump__dump_csd_measurements_6_p_0(
#line 892 "dump.m"
  MR_Integer dump__Cur_7,
#line 892 "dump.m"
  MR_Integer dump__Max_8,
#line 892 "dump.m"
  MR_ArrayPtr dump__CSDs_9,
#line 892 "dump.m"
  MR_ArrayPtr dump__CSDDesc_10)
#line 892 "dump.m"
{
#line 903 "dump.m"
  while (MR_TRUE)
#line 903 "dump.m"
    {
#line 903 "dump.m"
      /* tailcall optimized into a loop */
#line 903 "dump.m"
      {
#line 903 "dump.m"
        MR_bool dump__succeeded = (dump__Cur_7 <= dump__Max_8);

#line 903 "dump.m"
        if (dump__succeeded)
#line 898 "dump.m"
          {
#line 898 "dump.m"
            MR_Word dump__CSD_12;
#line 898 "dump.m"
            MR_Word dump__Own_13;
#line 898 "dump.m"
            MR_Word dump__Desc_14;
#line 898 "dump.m"
            MR_Integer dump__V_19_19;
#line 898 "dump.m"
            MR_Box dump__conv0_CSD_12;
#line 899 "dump.m"
            MR_Word dump__V_22_22;
#line 899 "dump.m"
            MR_Word dump__V_23_23;
#line 900 "dump.m"
            MR_Box dump__conv1_Desc_14;

#line 898 "dump.m"
            {
#line 898 "dump.m"
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) dump__CSDs_9, dump__Cur_7, &dump__conv0_CSD_12);
            }
#line 898 "dump.m"
            dump__CSD_12 = ((MR_Word) dump__conv0_CSD_12);
#line 899 "dump.m"
            dump__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CSD_12, (MR_Integer) 0)));
#line 899 "dump.m"
            dump__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CSD_12, (MR_Integer) 1)));
#line 899 "dump.m"
            dump__Own_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CSD_12, (MR_Integer) 2)));
#line 900 "dump.m"
            {
#line 900 "dump.m"
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) dump__CSDDesc_10, dump__Cur_7, &dump__conv1_Desc_14);
            }
#line 900 "dump.m"
            dump__Desc_14 = ((MR_Word) dump__conv1_Desc_14);
#line 901 "dump.m"
            {
#line 901 "dump.m"
              dump__dump_own_and_desc_6_p_0((MR_String) "csd", dump__Cur_7, dump__Own_13, dump__Desc_14);
            }
#line 902 "dump.m"
            dump__V_19_19 = (dump__Cur_7 + (MR_Integer) 1);
#line 902 "dump.m"
            /* direct tailcall eliminated */
#line 902 "dump.m"
            {
#line 902 "dump.m"
              MR_Integer dump__Cur__tmp_copy_7 = dump__V_19_19;

#line 902 "dump.m"
              dump__Cur_7 = dump__Cur__tmp_copy_7;
#line 902 "dump.m"
            }
#line 902 "dump.m"
            continue;
#line 898 "dump.m"
          }
#line 903 "dump.m"
        else
#line 903 "dump.m"
          {
#line 903 "dump.m"
          }
#line 903 "dump.m"
      }
#line 903 "dump.m"
      break;
#line 903 "dump.m"
    }
#line 892 "dump.m"
}

#line 878 "dump.m"
static void MR_CALL 
dump__dump_pd_measurements_6_p_0(
#line 878 "dump.m"
  MR_Integer dump__Cur_7,
#line 878 "dump.m"
  MR_Integer dump__Max_8,
#line 878 "dump.m"
  MR_ArrayPtr dump__PDOwn_9,
#line 878 "dump.m"
  MR_ArrayPtr dump__PDDesc_10)
#line 878 "dump.m"
{
#line 888 "dump.m"
  while (MR_TRUE)
#line 888 "dump.m"
    {
#line 888 "dump.m"
      /* tailcall optimized into a loop */
#line 888 "dump.m"
      {
#line 888 "dump.m"
        MR_bool dump__succeeded = (dump__Cur_7 <= dump__Max_8);

#line 888 "dump.m"
        if (dump__succeeded)
#line 884 "dump.m"
          {
#line 884 "dump.m"
            MR_Word dump__Own_12;
#line 884 "dump.m"
            MR_Word dump__Desc_13;
#line 884 "dump.m"
            MR_Integer dump__V_18_18;
#line 884 "dump.m"
            MR_Box dump__conv0_Own_12;
#line 885 "dump.m"
            MR_Box dump__conv1_Desc_13;

#line 884 "dump.m"
            {
#line 884 "dump.m"
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) dump__PDOwn_9, dump__Cur_7, &dump__conv0_Own_12);
            }
#line 884 "dump.m"
            dump__Own_12 = ((MR_Word) dump__conv0_Own_12);
#line 885 "dump.m"
            {
#line 885 "dump.m"
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) dump__PDDesc_10, dump__Cur_7, &dump__conv1_Desc_13);
            }
#line 885 "dump.m"
            dump__Desc_13 = ((MR_Word) dump__conv1_Desc_13);
#line 886 "dump.m"
            {
#line 886 "dump.m"
              dump__dump_own_and_desc_6_p_0((MR_String) "pd", dump__Cur_7, dump__Own_12, dump__Desc_13);
            }
#line 887 "dump.m"
            dump__V_18_18 = (dump__Cur_7 + (MR_Integer) 1);
#line 887 "dump.m"
            /* direct tailcall eliminated */
#line 887 "dump.m"
            {
#line 887 "dump.m"
              MR_Integer dump__Cur__tmp_copy_7 = dump__V_18_18;

#line 887 "dump.m"
              dump__Cur_7 = dump__Cur__tmp_copy_7;
#line 887 "dump.m"
            }
#line 887 "dump.m"
            continue;
#line 884 "dump.m"
          }
#line 888 "dump.m"
        else
#line 888 "dump.m"
          {
#line 888 "dump.m"
          }
#line 888 "dump.m"
      }
#line 888 "dump.m"
      break;
#line 888 "dump.m"
    }
#line 878 "dump.m"
}

#line 873 "dump.m"
static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_4(
#line 873 "dump.m"
  MR_Box dump__closure_arg)
#line 873 "dump.m"
{
#line 873 "dump.m"
  {
#line 873 "dump.m"
    MR_bool dump__succeeded;
#line 873 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 873 "dump.m"
    {
#line 873 "dump.m"
      return dump__succeeded = dump__IntroducedFrom__pred__dump_deep_prop_measurements__873__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 4))));
    }
#line 873 "dump.m"
    return dump__succeeded;
#line 873 "dump.m"
  }
#line 873 "dump.m"
}

#line 864 "dump.m"
static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_3(
#line 864 "dump.m"
  MR_Box dump__closure_arg)
#line 864 "dump.m"
{
#line 864 "dump.m"
  {
#line 864 "dump.m"
    MR_bool dump__succeeded;
#line 864 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 864 "dump.m"
    {
#line 864 "dump.m"
      return dump__succeeded = dump__IntroducedFrom__pred__dump_deep_prop_measurements__864__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 4))));
    }
#line 864 "dump.m"
    return dump__succeeded;
#line 864 "dump.m"
  }
#line 864 "dump.m"
}

#line 855 "dump.m"
static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_2(
#line 855 "dump.m"
  MR_Box dump__closure_arg)
#line 855 "dump.m"
{
#line 855 "dump.m"
  {
#line 855 "dump.m"
    MR_bool dump__succeeded;
#line 855 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 855 "dump.m"
    {
#line 855 "dump.m"
      return dump__succeeded = dump__IntroducedFrom__pred__dump_deep_prop_measurements__855__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 4))));
    }
#line 855 "dump.m"
    return dump__succeeded;
#line 855 "dump.m"
  }
#line 855 "dump.m"
}

#line 846 "dump.m"
static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_1(
#line 846 "dump.m"
  MR_Box dump__closure_arg)
#line 846 "dump.m"
{
#line 846 "dump.m"
  {
#line 846 "dump.m"
    MR_bool dump__succeeded;
#line 846 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 846 "dump.m"
    {
#line 846 "dump.m"
      return dump__succeeded = dump__IntroducedFrom__pred__dump_deep_prop_measurements__846__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 4))));
    }
#line 846 "dump.m"
    return dump__succeeded;
#line 846 "dump.m"
  }
#line 846 "dump.m"
}

#line 839 "dump.m"
static void MR_CALL 
dump__dump_deep_prop_measurements_3_p_0(
#line 839 "dump.m"
  MR_Word dump__Deep_4)
#line 839 "dump.m"
{
#line 841 "dump.m"
  {
#line 841 "dump.m"
    MR_bool dump__succeeded;
#line 841 "dump.m"
    MR_Word dump__TypeCtorInfo_272_272 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
#line 841 "dump.m"
    MR_Word dump__TypeCtorInfo_273_273;
#line 841 "dump.m"
    MR_ArrayPtr dump__PDOwn_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 841 "dump.m"
    MR_ArrayPtr dump__PDDesc_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 841 "dump.m"
    MR_Integer dump__PDOwnMax_8;
#line 841 "dump.m"
    MR_Integer dump__PDDescMax_9;
#line 841 "dump.m"
    MR_ArrayPtr dump__CSDs_10;
#line 841 "dump.m"
    MR_ArrayPtr dump__CSDDesc_11;
#line 841 "dump.m"
    MR_Integer dump__CSDMax_12;
#line 841 "dump.m"
    MR_Integer dump__CSDDescMax_13;
#line 841 "dump.m"
    MR_ArrayPtr dump__PSOwn_14;
#line 841 "dump.m"
    MR_ArrayPtr dump__PSDesc_15;
#line 841 "dump.m"
    MR_Integer dump__PSOwnMax_16;
#line 841 "dump.m"
    MR_Integer dump__PSDescMax_17;
#line 841 "dump.m"
    MR_ArrayPtr dump__CSSOwn_18;
#line 841 "dump.m"
    MR_ArrayPtr dump__CSSDesc_19;
#line 841 "dump.m"
    MR_Integer dump__CSSOwnMax_20;
#line 841 "dump.m"
    MR_Integer dump__CSSDescMax_21;
#line 841 "dump.m"
    MR_Word dump__V_24_24;
#line 841 "dump.m"
    MR_Word dump__V_30_30;
#line 841 "dump.m"
    MR_Word dump__V_36_36;
#line 841 "dump.m"
    MR_Word dump__V_42_42;
#line 842 "dump.m"
    MR_Word dump__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 842 "dump.m"
    MR_String dump__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 842 "dump.m"
    MR_String dump__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 842 "dump.m"
    MR_String dump__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 842 "dump.m"
    MR_Word dump__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 842 "dump.m"
    MR_ArrayPtr dump__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 842 "dump.m"
    MR_ArrayPtr dump__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 842 "dump.m"
    MR_ArrayPtr dump__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 842 "dump.m"
    MR_ArrayPtr dump__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 842 "dump.m"
    MR_ArrayPtr dump__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 842 "dump.m"
    MR_ArrayPtr dump__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 842 "dump.m"
    MR_ArrayPtr dump__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 842 "dump.m"
    MR_ArrayPtr dump__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 842 "dump.m"
    MR_ArrayPtr dump__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 842 "dump.m"
    MR_ArrayPtr dump__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 842 "dump.m"
    MR_ArrayPtr dump__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 842 "dump.m"
    MR_ArrayPtr dump__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 842 "dump.m"
    MR_ArrayPtr dump__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 842 "dump.m"
    MR_ArrayPtr dump__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 842 "dump.m"
    MR_ArrayPtr dump__V_68_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 842 "dump.m"
    MR_ArrayPtr dump__V_69_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 842 "dump.m"
    MR_ArrayPtr dump__V_70_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 842 "dump.m"
    MR_ArrayPtr dump__V_71_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 842 "dump.m"
    MR_Word dump__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 842 "dump.m"
    MR_Word dump__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 842 "dump.m"
    MR_Word dump__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 842 "dump.m"
    MR_Word dump__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 851 "dump.m"
    MR_Word dump__V_104_104;
#line 851 "dump.m"
    MR_String dump__V_105_105;
#line 851 "dump.m"
    MR_String dump__V_106_106;
#line 851 "dump.m"
    MR_String dump__V_107_107;
#line 851 "dump.m"
    MR_Word dump__V_108_108;
#line 851 "dump.m"
    MR_ArrayPtr dump__V_109_109;
#line 851 "dump.m"
    MR_ArrayPtr dump__V_110_110;
#line 851 "dump.m"
    MR_ArrayPtr dump__V_111_111;
#line 851 "dump.m"
    MR_ArrayPtr dump__V_112_112;
#line 851 "dump.m"
    MR_ArrayPtr dump__V_113_113;
#line 851 "dump.m"
    MR_ArrayPtr dump__V_114_114;
#line 851 "dump.m"
    MR_ArrayPtr dump__V_115_115;
#line 851 "dump.m"
    MR_ArrayPtr dump__V_116_116;
#line 851 "dump.m"
    MR_ArrayPtr dump__V_117_117;
#line 851 "dump.m"
    MR_ArrayPtr dump__V_118_118;
#line 851 "dump.m"
    MR_ArrayPtr dump__V_119_119;
#line 851 "dump.m"
    MR_ArrayPtr dump__V_120_120;
#line 851 "dump.m"
    MR_ArrayPtr dump__V_122_122;
#line 851 "dump.m"
    MR_ArrayPtr dump__V_123_123;
#line 851 "dump.m"
    MR_ArrayPtr dump__V_124_124;
#line 851 "dump.m"
    MR_ArrayPtr dump__V_125_125;
#line 851 "dump.m"
    MR_ArrayPtr dump__V_126_126;
#line 851 "dump.m"
    MR_ArrayPtr dump__V_127_127;
#line 851 "dump.m"
    MR_Word dump__V_128_128;
#line 851 "dump.m"
    MR_Word dump__V_129_129;
#line 851 "dump.m"
    MR_Word dump__V_130_130;
#line 851 "dump.m"
    MR_Word dump__V_131_131;
#line 860 "dump.m"
    MR_Word dump__V_160_160;
#line 860 "dump.m"
    MR_String dump__V_161_161;
#line 860 "dump.m"
    MR_String dump__V_162_162;
#line 860 "dump.m"
    MR_String dump__V_163_163;
#line 860 "dump.m"
    MR_Word dump__V_164_164;
#line 860 "dump.m"
    MR_ArrayPtr dump__V_165_165;
#line 860 "dump.m"
    MR_ArrayPtr dump__V_166_166;
#line 860 "dump.m"
    MR_ArrayPtr dump__V_167_167;
#line 860 "dump.m"
    MR_ArrayPtr dump__V_168_168;
#line 860 "dump.m"
    MR_ArrayPtr dump__V_169_169;
#line 860 "dump.m"
    MR_ArrayPtr dump__V_170_170;
#line 860 "dump.m"
    MR_ArrayPtr dump__V_171_171;
#line 860 "dump.m"
    MR_ArrayPtr dump__V_172_172;
#line 860 "dump.m"
    MR_ArrayPtr dump__V_173_173;
#line 860 "dump.m"
    MR_ArrayPtr dump__V_174_174;
#line 860 "dump.m"
    MR_ArrayPtr dump__V_175_175;
#line 860 "dump.m"
    MR_ArrayPtr dump__V_176_176;
#line 860 "dump.m"
    MR_ArrayPtr dump__V_177_177;
#line 860 "dump.m"
    MR_ArrayPtr dump__V_178_178;
#line 860 "dump.m"
    MR_ArrayPtr dump__V_180_180;
#line 860 "dump.m"
    MR_ArrayPtr dump__V_181_181;
#line 860 "dump.m"
    MR_ArrayPtr dump__V_182_182;
#line 860 "dump.m"
    MR_ArrayPtr dump__V_183_183;
#line 860 "dump.m"
    MR_Word dump__V_184_184;
#line 860 "dump.m"
    MR_Word dump__V_185_185;
#line 860 "dump.m"
    MR_Word dump__V_186_186;
#line 860 "dump.m"
    MR_Word dump__V_187_187;
#line 869 "dump.m"
    MR_Word dump__V_216_216;
#line 869 "dump.m"
    MR_String dump__V_217_217;
#line 869 "dump.m"
    MR_String dump__V_218_218;
#line 869 "dump.m"
    MR_String dump__V_219_219;
#line 869 "dump.m"
    MR_Word dump__V_220_220;
#line 869 "dump.m"
    MR_ArrayPtr dump__V_221_221;
#line 869 "dump.m"
    MR_ArrayPtr dump__V_222_222;
#line 869 "dump.m"
    MR_ArrayPtr dump__V_223_223;
#line 869 "dump.m"
    MR_ArrayPtr dump__V_224_224;
#line 869 "dump.m"
    MR_ArrayPtr dump__V_225_225;
#line 869 "dump.m"
    MR_ArrayPtr dump__V_226_226;
#line 869 "dump.m"
    MR_ArrayPtr dump__V_227_227;
#line 869 "dump.m"
    MR_ArrayPtr dump__V_228_228;
#line 869 "dump.m"
    MR_ArrayPtr dump__V_229_229;
#line 869 "dump.m"
    MR_ArrayPtr dump__V_230_230;
#line 869 "dump.m"
    MR_ArrayPtr dump__V_231_231;
#line 869 "dump.m"
    MR_ArrayPtr dump__V_232_232;
#line 869 "dump.m"
    MR_ArrayPtr dump__V_233_233;
#line 869 "dump.m"
    MR_ArrayPtr dump__V_234_234;
#line 869 "dump.m"
    MR_ArrayPtr dump__V_235_235;
#line 869 "dump.m"
    MR_ArrayPtr dump__V_236_236;
#line 869 "dump.m"
    MR_ArrayPtr dump__V_238_238;
#line 869 "dump.m"
    MR_ArrayPtr dump__V_239_239;
#line 869 "dump.m"
    MR_Word dump__V_240_240;
#line 869 "dump.m"
    MR_Word dump__V_241_241;
#line 869 "dump.m"
    MR_Word dump__V_242_242;
#line 869 "dump.m"
    MR_Word dump__V_243_243;

#line 844 "dump.m"
    {
#line 844 "dump.m"
      dump__PDOwnMax_8 = mercury__array__max_1_f_0(dump__TypeCtorInfo_272_272, (MR_ArrayPtr) dump__PDOwn_6);
    }
#line 4637 "dump.c"
    dump__TypeCtorInfo_273_273 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
#line 845 "dump.m"
    {
#line 845 "dump.m"
      dump__PDDescMax_9 = mercury__array__max_1_f_0(dump__TypeCtorInfo_273_273, (MR_ArrayPtr) dump__PDDesc_7);
    }
#line 846 "dump.m"
    {
#line 846 "dump.m"
      dump__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 846 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_24_24, 0) = ((MR_Box) (&dump_scalar_common_3[1]));
#line 846 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_24_24, 1) = ((MR_Box) (dump__dump_deep_prop_measurements_3_p_0_1));
#line 846 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 846 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_24_24, 3) = ((MR_Box) (dump__PDOwnMax_8));
#line 846 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_24_24, 4) = ((MR_Box) (dump__PDDescMax_9));
#line 846 "dump.m"
    }
#line 846 "dump.m"
    {
#line 846 "dump.m"
      mercury__require__require_2_p_0(dump__V_24_24, (MR_String) "dump_deep: PDOwnMax != PDDescMax");
    }
#line 848 "dump.m"
    {
#line 848 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION PROC DYNAMIC MEASUREMENTS:\n\n");
    }
#line 849 "dump.m"
    {
#line 849 "dump.m"
      dump__dump_pd_measurements_6_p_0((MR_Integer) 1, dump__PDOwnMax_8, dump__PDOwn_6, dump__PDDesc_7);
    }
#line 851 "dump.m"
    dump__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 851 "dump.m"
    dump__V_105_105 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 851 "dump.m"
    dump__V_106_106 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 851 "dump.m"
    dump__V_107_107 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 851 "dump.m"
    dump__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 851 "dump.m"
    dump__CSDs_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 851 "dump.m"
    dump__V_109_109 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 851 "dump.m"
    dump__V_110_110 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 851 "dump.m"
    dump__V_111_111 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 851 "dump.m"
    dump__V_112_112 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 851 "dump.m"
    dump__V_113_113 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 851 "dump.m"
    dump__V_114_114 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 851 "dump.m"
    dump__V_115_115 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 851 "dump.m"
    dump__V_116_116 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 851 "dump.m"
    dump__V_117_117 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 851 "dump.m"
    dump__V_118_118 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 851 "dump.m"
    dump__V_119_119 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 851 "dump.m"
    dump__V_120_120 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 851 "dump.m"
    dump__CSDDesc_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 851 "dump.m"
    dump__V_122_122 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 851 "dump.m"
    dump__V_123_123 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 851 "dump.m"
    dump__V_124_124 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 851 "dump.m"
    dump__V_125_125 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 851 "dump.m"
    dump__V_126_126 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 851 "dump.m"
    dump__V_127_127 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 851 "dump.m"
    dump__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 851 "dump.m"
    dump__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 851 "dump.m"
    dump__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 851 "dump.m"
    dump__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 853 "dump.m"
    {
#line 853 "dump.m"
      dump__CSDMax_12 = mercury__array__max_1_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) dump__CSDs_10);
    }
#line 854 "dump.m"
    {
#line 854 "dump.m"
      dump__CSDDescMax_13 = mercury__array__max_1_f_0(dump__TypeCtorInfo_273_273, (MR_ArrayPtr) dump__CSDDesc_11);
    }
#line 855 "dump.m"
    {
#line 855 "dump.m"
      dump__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 855 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_30_30, 0) = ((MR_Box) (&dump_scalar_common_3[1]));
#line 855 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_30_30, 1) = ((MR_Box) (dump__dump_deep_prop_measurements_3_p_0_2));
#line 855 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 855 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_30_30, 3) = ((MR_Box) (dump__CSDMax_12));
#line 855 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_30_30, 4) = ((MR_Box) (dump__CSDDescMax_13));
#line 855 "dump.m"
    }
#line 855 "dump.m"
    {
#line 855 "dump.m"
      mercury__require__require_2_p_0(dump__V_30_30, (MR_String) "dump_deep: CSDMax != CSDDescMax");
    }
#line 857 "dump.m"
    {
#line 857 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION CALL SITE DYNAMIC MEASUREMENTS:\n\n");
    }
#line 858 "dump.m"
    {
#line 858 "dump.m"
      dump__dump_csd_measurements_6_p_0((MR_Integer) 1, dump__CSDMax_12, dump__CSDs_10, dump__CSDDesc_11);
    }
#line 860 "dump.m"
    dump__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 860 "dump.m"
    dump__V_161_161 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 860 "dump.m"
    dump__V_162_162 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 860 "dump.m"
    dump__V_163_163 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 860 "dump.m"
    dump__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 860 "dump.m"
    dump__V_165_165 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 860 "dump.m"
    dump__V_166_166 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 860 "dump.m"
    dump__V_167_167 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 860 "dump.m"
    dump__V_168_168 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 860 "dump.m"
    dump__V_169_169 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 860 "dump.m"
    dump__V_170_170 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 860 "dump.m"
    dump__V_171_171 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 860 "dump.m"
    dump__V_172_172 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 860 "dump.m"
    dump__V_173_173 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 860 "dump.m"
    dump__V_174_174 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 860 "dump.m"
    dump__V_175_175 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 860 "dump.m"
    dump__V_176_176 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 860 "dump.m"
    dump__V_177_177 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 860 "dump.m"
    dump__V_178_178 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 860 "dump.m"
    dump__PSOwn_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 860 "dump.m"
    dump__PSDesc_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 860 "dump.m"
    dump__V_180_180 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 860 "dump.m"
    dump__V_181_181 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 860 "dump.m"
    dump__V_182_182 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 860 "dump.m"
    dump__V_183_183 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 860 "dump.m"
    dump__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 860 "dump.m"
    dump__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 860 "dump.m"
    dump__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 860 "dump.m"
    dump__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 862 "dump.m"
    {
#line 862 "dump.m"
      dump__PSOwnMax_16 = mercury__array__max_1_f_0(dump__TypeCtorInfo_272_272, (MR_ArrayPtr) dump__PSOwn_14);
    }
#line 863 "dump.m"
    {
#line 863 "dump.m"
      dump__PSDescMax_17 = mercury__array__max_1_f_0(dump__TypeCtorInfo_273_273, (MR_ArrayPtr) dump__PSDesc_15);
    }
#line 864 "dump.m"
    {
#line 864 "dump.m"
      dump__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 864 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_36_36, 0) = ((MR_Box) (&dump_scalar_common_3[1]));
#line 864 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_36_36, 1) = ((MR_Box) (dump__dump_deep_prop_measurements_3_p_0_3));
#line 864 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 864 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_36_36, 3) = ((MR_Box) (dump__PSOwnMax_16));
#line 864 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_36_36, 4) = ((MR_Box) (dump__PSDescMax_17));
#line 864 "dump.m"
    }
#line 864 "dump.m"
    {
#line 864 "dump.m"
      mercury__require__require_2_p_0(dump__V_36_36, (MR_String) "dump_deep: PSOwnMax != PSDescMax");
    }
#line 866 "dump.m"
    {
#line 866 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION PROC STATIC MEASUREMENTS:\n\n");
    }
#line 867 "dump.m"
    {
#line 867 "dump.m"
      dump__dump_ps_measurements_6_p_0((MR_Integer) 1, dump__PSOwnMax_16, dump__PSOwn_14, dump__PSDesc_15);
    }
#line 869 "dump.m"
    dump__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 869 "dump.m"
    dump__V_217_217 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 869 "dump.m"
    dump__V_218_218 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 869 "dump.m"
    dump__V_219_219 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 869 "dump.m"
    dump__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 869 "dump.m"
    dump__V_221_221 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 869 "dump.m"
    dump__V_222_222 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 869 "dump.m"
    dump__V_223_223 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 869 "dump.m"
    dump__V_224_224 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 869 "dump.m"
    dump__V_225_225 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 869 "dump.m"
    dump__V_226_226 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 869 "dump.m"
    dump__V_227_227 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 869 "dump.m"
    dump__V_228_228 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 869 "dump.m"
    dump__V_229_229 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 869 "dump.m"
    dump__V_230_230 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 869 "dump.m"
    dump__V_231_231 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 869 "dump.m"
    dump__V_232_232 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 869 "dump.m"
    dump__V_233_233 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 869 "dump.m"
    dump__V_234_234 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 869 "dump.m"
    dump__V_235_235 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 869 "dump.m"
    dump__V_236_236 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 869 "dump.m"
    dump__CSSOwn_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 869 "dump.m"
    dump__CSSDesc_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 869 "dump.m"
    dump__V_238_238 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 869 "dump.m"
    dump__V_239_239 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 869 "dump.m"
    dump__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 869 "dump.m"
    dump__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 869 "dump.m"
    dump__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 869 "dump.m"
    dump__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 871 "dump.m"
    {
#line 871 "dump.m"
      dump__CSSOwnMax_20 = mercury__array__max_1_f_0(dump__TypeCtorInfo_272_272, (MR_ArrayPtr) dump__CSSOwn_18);
    }
#line 872 "dump.m"
    {
#line 872 "dump.m"
      dump__CSSDescMax_21 = mercury__array__max_1_f_0(dump__TypeCtorInfo_273_273, (MR_ArrayPtr) dump__CSSDesc_19);
    }
#line 873 "dump.m"
    {
#line 873 "dump.m"
      dump__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 873 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_42_42, 0) = ((MR_Box) (&dump_scalar_common_3[1]));
#line 873 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_42_42, 1) = ((MR_Box) (dump__dump_deep_prop_measurements_3_p_0_4));
#line 873 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 873 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_42_42, 3) = ((MR_Box) (dump__CSSOwnMax_20));
#line 873 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_42_42, 4) = ((MR_Box) (dump__CSSDescMax_21));
#line 873 "dump.m"
    }
#line 873 "dump.m"
    {
#line 873 "dump.m"
      mercury__require__require_2_p_0(dump__V_42_42, (MR_String) "dump_deep: CSSOwnMax != CSSDescMax");
    }
#line 875 "dump.m"
    {
#line 875 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION CALL SITE STATIC MEASUREMENTS:\n\n");
    }
#line 876 "dump.m"
    {
#line 876 "dump.m"
      dump__dump_css_measurements_6_p_0((MR_Integer) 1, dump__CSSOwnMax_20, dump__CSSOwn_18, dump__CSSDesc_19);
#line 876 "dump.m"
      return;
    }
#line 841 "dump.m"
  }
#line 839 "dump.m"
}

#line 834 "dump.m"
static void MR_CALL 
dump__dump_call_site_calls_to_proc_4_p_0_1(
#line 834 "dump.m"
  MR_Box dump__closure_arg,
#line 834 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 834 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 834 "dump.m"
  MR_Box * dump__wrapper_arg_3)
#line 834 "dump.m"
{
#line 834 "dump.m"
  {
#line 834 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 834 "dump.m"
    {
#line 834 "dump.m"
      dump__dump_space_csdptr_3_p_0(((MR_Word) dump__wrapper_arg_1));
#line 834 "dump.m"
      return;
    }
#line 834 "dump.m"
  }
#line 834 "dump.m"
}

#line 827 "dump.m"
static void MR_CALL 
dump__dump_call_site_calls_to_proc_4_p_0(
#line 827 "dump.m"
  MR_String dump__Prefix_5,
#line 827 "dump.m"
  MR_Word dump__HeadVar__2_2)
#line 827 "dump.m"
{
#line 831 "dump.m"
  {
#line 831 "dump.m"
    MR_bool dump__succeeded;
#line 831 "dump.m"
    MR_Word dump__PSPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 0)));
#line 831 "dump.m"
    MR_Word dump__CSDPtrs_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 1)));
#line 831 "dump.m"
    MR_Integer dump__PSNum_9 = (MR_Integer) dump__PSPtr_6;
#line 831 "dump.m"
    MR_String dump__V_28_28;
#line 831 "dump.m"
    MR_Word dump__V_34_34 = (MR_Word) &dump_scalar_common_5[0];
#line 831 "dump.m"
    MR_String dump__V_38_38;
#line 834 "dump.m"
    MR_Box dump__conv0_STATE_VARIABLE_IO_20_20;

#line 833 "dump.m"
    {
#line 833 "dump.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_34_34, dump__Prefix_5, &dump__V_28_28);
    }
#line 833 "dump.m"
    {
#line 833 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_28_28);
    }
#line 833 "dump.m"
    {
#line 833 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "ps");
    }
#line 833 "dump.m"
    {
#line 833 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_34_34, dump__PSNum_9, &dump__V_38_38);
    }
#line 833 "dump.m"
    {
#line 833 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_38_38);
    }
#line 833 "dump.m"
    {
#line 833 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) ":");
    }
#line 834 "dump.m"
    {
#line 834 "dump.m"
      mercury__list__foldl_4_p_2((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &dump_scalar_common_2[19], dump__CSDPtrs_7, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_20_20);
    }
#line 835 "dump.m"
    {
#line 835 "dump.m"
      mercury__io__nl_2_p_0();
#line 835 "dump.m"
      return;
    }
#line 831 "dump.m"
  }
#line 827 "dump.m"
}

#line 824 "dump.m"
static void MR_CALL 
dump__dump_call_site_calls_4_p_0_1(
#line 824 "dump.m"
  MR_Box dump__closure_arg,
#line 824 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 824 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 824 "dump.m"
  MR_Box * dump__wrapper_arg_3)
#line 824 "dump.m"
{
#line 824 "dump.m"
  {
#line 824 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 824 "dump.m"
    {
#line 824 "dump.m"
      dump__dump_call_site_calls_to_proc_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Word) dump__wrapper_arg_1));
#line 824 "dump.m"
      return;
    }
#line 824 "dump.m"
  }
#line 824 "dump.m"
}

#line 809 "dump.m"
static void MR_CALL 
dump__dump_call_site_calls_4_p_0(
#line 809 "dump.m"
  MR_Integer dump__Index_5,
#line 809 "dump.m"
  MR_Word dump__CalleeMap_6)
#line 809 "dump.m"
{
#line 813 "dump.m"
  {
#line 813 "dump.m"
    MR_bool dump__succeeded;
#line 813 "dump.m"
    MR_Word dump__CalleeList_8;

#line 814 "dump.m"
    {
#line 814 "dump.m"
      dump__CalleeList_8 = mercury__map__to_assoc_list_1_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &dump_scalar_common_1[4], dump__CalleeMap_6);
    }
#line 817 "dump.m"
    if ((dump__CalleeList_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 816 "dump.m"
      {
#line 816 "dump.m"
      }
#line 817 "dump.m"
    else
#line 817 "dump.m"
      {
#line 817 "dump.m"
        MR_Word dump__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__CalleeList_8, (MR_Integer) 1)));
#line 817 "dump.m"
        MR_Word dump__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__CalleeList_8, (MR_Integer) 0)));

#line 817 "dump.m"
        if ((dump__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 818 "dump.m"
          {
#line 818 "dump.m"
            MR_String dump__V_55_55;

#line 819 "dump.m"
            {
#line 819 "dump.m"
              mercury__io__write_string_3_p_0((MR_String) "css");
            }
#line 819 "dump.m"
            {
#line 819 "dump.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_5[0], dump__Index_5, &dump__V_55_55);
            }
#line 819 "dump.m"
            {
#line 819 "dump.m"
              mercury__io__write_string_3_p_0(dump__V_55_55);
            }
#line 819 "dump.m"
            {
#line 819 "dump.m"
              mercury__io__write_string_3_p_0((MR_String) " calls one procedure: ");
            }
#line 820 "dump.m"
            {
#line 820 "dump.m"
              dump__dump_call_site_calls_to_proc_4_p_0((MR_String) "", dump__V_40_40);
#line 820 "dump.m"
              return;
            }
#line 818 "dump.m"
          }
#line 817 "dump.m"
        else
#line 822 "dump.m"
          {
#line 822 "dump.m"
            MR_String dump__V_44_44;
#line 824 "dump.m"
            MR_Box dump__conv0_STATE_VARIABLE_IO_14;

#line 823 "dump.m"
            {
#line 823 "dump.m"
              mercury__io__write_string_3_p_0((MR_String) "css");
            }
#line 823 "dump.m"
            {
#line 823 "dump.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_5[0], dump__Index_5, &dump__V_44_44);
            }
#line 823 "dump.m"
            {
#line 823 "dump.m"
              mercury__io__write_string_3_p_0(dump__V_44_44);
            }
#line 823 "dump.m"
            {
#line 823 "dump.m"
              mercury__io__write_string_3_p_0((MR_String) " calls several procedures:\n");
            }
#line 824 "dump.m"
            {
#line 824 "dump.m"
              mercury__list__foldl_4_p_2((MR_Word) &dump_scalar_common_2[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &dump_scalar_common_10[0], dump__CalleeList_8, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_14);
            }
#line 822 "dump.m"
          }
#line 817 "dump.m"
      }
#line 813 "dump.m"
  }
#line 809 "dump.m"
}

#line 802 "dump.m"
static void MR_CALL 
dump__dump_call_site_dynamic_to_static_4_p_0(
#line 802 "dump.m"
  MR_Integer dump__Index_5,
#line 802 "dump.m"
  MR_Word dump__CSSPtr_6)
#line 802 "dump.m"
{
#line 805 "dump.m"
  {
#line 805 "dump.m"
    MR_bool dump__succeeded;
#line 805 "dump.m"
    MR_Integer dump__CSSNum_8 = (MR_Integer) dump__CSSPtr_6;
#line 805 "dump.m"
    MR_String dump__V_21_21;
#line 805 "dump.m"
    MR_Word dump__V_27_27;
#line 805 "dump.m"
    MR_String dump__V_31_31;

#line 807 "dump.m"
    {
#line 807 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "csd");
    }
#line 5256 "dump.c"
    dump__V_27_27 = (MR_Word) &dump_scalar_common_5[0];
#line 807 "dump.m"
    {
#line 807 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_27_27, dump__Index_5, &dump__V_21_21);
    }
#line 807 "dump.m"
    {
#line 807 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_21_21);
    }
#line 807 "dump.m"
    {
#line 807 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) " is at css");
    }
#line 807 "dump.m"
    {
#line 807 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_27_27, dump__CSSNum_8, &dump__V_31_31);
    }
#line 807 "dump.m"
    {
#line 807 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_31_31);
    }
#line 807 "dump.m"
    {
#line 807 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 807 "dump.m"
      return;
    }
#line 805 "dump.m"
  }
#line 802 "dump.m"
}

#line 795 "dump.m"
static void MR_CALL 
dump__dump_space_csdptr_3_p_0(
#line 795 "dump.m"
  MR_Word dump__CSDPtr_4)
#line 795 "dump.m"
{
#line 797 "dump.m"
  {
#line 797 "dump.m"
    MR_bool dump__succeeded;
#line 797 "dump.m"
    MR_Integer dump__CSDNum_6 = (MR_Integer) dump__CSDPtr_4;

#line 799 "dump.m"
    {
#line 799 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) " csd");
    }
#line 800 "dump.m"
    {
#line 800 "dump.m"
      mercury__io__write_int_3_p_0(dump__CSDNum_6);
#line 800 "dump.m"
      return;
    }
#line 797 "dump.m"
  }
#line 795 "dump.m"
}

#line 791 "dump.m"
static void MR_CALL 
dump__dump_proc_static_caller_csds_4_p_0_1(
#line 791 "dump.m"
  MR_Box dump__closure_arg,
#line 791 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 791 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 791 "dump.m"
  MR_Box * dump__wrapper_arg_3)
#line 791 "dump.m"
{
#line 791 "dump.m"
  {
#line 791 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 791 "dump.m"
    {
#line 791 "dump.m"
      dump__dump_space_csdptr_3_p_0(((MR_Word) dump__wrapper_arg_1));
#line 791 "dump.m"
      return;
    }
#line 791 "dump.m"
  }
#line 791 "dump.m"
}

#line 782 "dump.m"
static void MR_CALL 
dump__dump_proc_static_caller_csds_4_p_0(
#line 782 "dump.m"
  MR_Integer dump__Index_5,
#line 782 "dump.m"
  MR_Word dump__CallerCSDs_6)
#line 782 "dump.m"
{
#line 787 "dump.m"
  {
#line 787 "dump.m"
    MR_bool dump__succeeded;

#line 787 "dump.m"
    if ((dump__CallerCSDs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 787 "dump.m"
      {
#line 787 "dump.m"
      }
#line 787 "dump.m"
    else
#line 789 "dump.m"
      {
#line 789 "dump.m"
        MR_String dump__V_28_28;
#line 791 "dump.m"
        MR_Box dump__conv0_STATE_VARIABLE_IO_18_18;

#line 790 "dump.m"
        {
#line 790 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "ps");
        }
#line 790 "dump.m"
        {
#line 790 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_5[0], dump__Index_5, &dump__V_28_28);
        }
#line 790 "dump.m"
        {
#line 790 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_28_28);
        }
#line 790 "dump.m"
        {
#line 790 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) " callers:");
        }
#line 791 "dump.m"
        {
#line 791 "dump.m"
          mercury__list__foldl_4_p_2((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &dump_scalar_common_2[18], dump__CallerCSDs_6, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_18_18);
        }
#line 792 "dump.m"
        {
#line 792 "dump.m"
          mercury__io__nl_2_p_0();
#line 792 "dump.m"
          return;
        }
#line 789 "dump.m"
      }
#line 787 "dump.m"
  }
#line 782 "dump.m"
}

#line 779 "dump.m"
static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_3(
#line 779 "dump.m"
  MR_Box dump__closure_arg,
#line 779 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 779 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 779 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 779 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 779 "dump.m"
{
#line 779 "dump.m"
  {
#line 779 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 779 "dump.m"
    {
#line 779 "dump.m"
      dump__dump_call_site_calls_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 779 "dump.m"
      return;
    }
#line 779 "dump.m"
  }
#line 779 "dump.m"
}

#line 773 "dump.m"
static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_2(
#line 773 "dump.m"
  MR_Box dump__closure_arg,
#line 773 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 773 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 773 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 773 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 773 "dump.m"
{
#line 773 "dump.m"
  {
#line 773 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 773 "dump.m"
    {
#line 773 "dump.m"
      dump__dump_call_site_dynamic_to_static_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 773 "dump.m"
      return;
    }
#line 773 "dump.m"
  }
#line 773 "dump.m"
}

#line 767 "dump.m"
static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_1(
#line 767 "dump.m"
  MR_Box dump__closure_arg,
#line 767 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 767 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 767 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 767 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 767 "dump.m"
{
#line 767 "dump.m"
  {
#line 767 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 767 "dump.m"
    {
#line 767 "dump.m"
      dump__dump_proc_static_caller_csds_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 767 "dump.m"
      return;
    }
#line 767 "dump.m"
  }
#line 767 "dump.m"
}

#line 762 "dump.m"
static void MR_CALL 
dump__dump_deep_rev_links_3_p_0(
#line 762 "dump.m"
  MR_Word dump__Deep_4)
#line 762 "dump.m"
{
#line 764 "dump.m"
  {
#line 764 "dump.m"
    MR_bool dump__succeeded;
#line 764 "dump.m"
    MR_Word dump__TypeCtorInfo_115_115;
#line 764 "dump.m"
    MR_ArrayPtr dump__ProcCallers_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 764 "dump.m"
    MR_ArrayPtr dump__CallSiteStaticMap_7;
#line 764 "dump.m"
    MR_ArrayPtr dump__CallSiteCalls_8;
#line 765 "dump.m"
    MR_Word dump__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 765 "dump.m"
    MR_String dump__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 765 "dump.m"
    MR_String dump__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 765 "dump.m"
    MR_String dump__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 765 "dump.m"
    MR_Word dump__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 765 "dump.m"
    MR_ArrayPtr dump__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 765 "dump.m"
    MR_ArrayPtr dump__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 765 "dump.m"
    MR_ArrayPtr dump__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 765 "dump.m"
    MR_ArrayPtr dump__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 765 "dump.m"
    MR_ArrayPtr dump__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 765 "dump.m"
    MR_ArrayPtr dump__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 765 "dump.m"
    MR_ArrayPtr dump__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 765 "dump.m"
    MR_ArrayPtr dump__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 765 "dump.m"
    MR_ArrayPtr dump__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 765 "dump.m"
    MR_ArrayPtr dump__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 765 "dump.m"
    MR_ArrayPtr dump__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 765 "dump.m"
    MR_ArrayPtr dump__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 765 "dump.m"
    MR_ArrayPtr dump__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 765 "dump.m"
    MR_ArrayPtr dump__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 765 "dump.m"
    MR_ArrayPtr dump__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 765 "dump.m"
    MR_ArrayPtr dump__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 765 "dump.m"
    MR_ArrayPtr dump__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 765 "dump.m"
    MR_ArrayPtr dump__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 765 "dump.m"
    MR_ArrayPtr dump__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 765 "dump.m"
    MR_Word dump__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 765 "dump.m"
    MR_Word dump__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 765 "dump.m"
    MR_Word dump__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 765 "dump.m"
    MR_Word dump__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 767 "dump.m"
    MR_Box dump__conv0_STATE_VARIABLE_IO_14_14;
#line 770 "dump.m"
    MR_Word dump__V_54_54;
#line 770 "dump.m"
    MR_String dump__V_55_55;
#line 770 "dump.m"
    MR_String dump__V_56_56;
#line 770 "dump.m"
    MR_String dump__V_57_57;
#line 770 "dump.m"
    MR_Word dump__V_58_58;
#line 770 "dump.m"
    MR_ArrayPtr dump__V_59_59;
#line 770 "dump.m"
    MR_ArrayPtr dump__V_60_60;
#line 770 "dump.m"
    MR_ArrayPtr dump__V_61_61;
#line 770 "dump.m"
    MR_ArrayPtr dump__V_62_62;
#line 770 "dump.m"
    MR_ArrayPtr dump__V_63_63;
#line 770 "dump.m"
    MR_ArrayPtr dump__V_64_64;
#line 770 "dump.m"
    MR_ArrayPtr dump__V_65_65;
#line 770 "dump.m"
    MR_ArrayPtr dump__V_66_66;
#line 770 "dump.m"
    MR_ArrayPtr dump__V_67_67;
#line 770 "dump.m"
    MR_ArrayPtr dump__V_68_68;
#line 770 "dump.m"
    MR_ArrayPtr dump__V_69_69;
#line 770 "dump.m"
    MR_ArrayPtr dump__V_70_70;
#line 770 "dump.m"
    MR_ArrayPtr dump__V_71_71;
#line 770 "dump.m"
    MR_ArrayPtr dump__V_72_72;
#line 770 "dump.m"
    MR_ArrayPtr dump__V_73_73;
#line 770 "dump.m"
    MR_ArrayPtr dump__V_74_74;
#line 770 "dump.m"
    MR_ArrayPtr dump__V_75_75;
#line 770 "dump.m"
    MR_ArrayPtr dump__V_76_76;
#line 770 "dump.m"
    MR_ArrayPtr dump__V_77_77;
#line 770 "dump.m"
    MR_Word dump__V_78_78;
#line 770 "dump.m"
    MR_Word dump__V_79_79;
#line 770 "dump.m"
    MR_Word dump__V_80_80;
#line 770 "dump.m"
    MR_Word dump__V_81_81;
#line 773 "dump.m"
    MR_Box dump__conv1_STATE_VARIABLE_IO_19_19;
#line 777 "dump.m"
    MR_Word dump__V_82_82;
#line 777 "dump.m"
    MR_String dump__V_83_83;
#line 777 "dump.m"
    MR_String dump__V_84_84;
#line 777 "dump.m"
    MR_String dump__V_85_85;
#line 777 "dump.m"
    MR_Word dump__V_86_86;
#line 777 "dump.m"
    MR_ArrayPtr dump__V_87_87;
#line 777 "dump.m"
    MR_ArrayPtr dump__V_88_88;
#line 777 "dump.m"
    MR_ArrayPtr dump__V_89_89;
#line 777 "dump.m"
    MR_ArrayPtr dump__V_90_90;
#line 777 "dump.m"
    MR_ArrayPtr dump__V_91_91;
#line 777 "dump.m"
    MR_ArrayPtr dump__V_92_92;
#line 777 "dump.m"
    MR_ArrayPtr dump__V_93_93;
#line 777 "dump.m"
    MR_ArrayPtr dump__V_94_94;
#line 777 "dump.m"
    MR_ArrayPtr dump__V_95_95;
#line 777 "dump.m"
    MR_ArrayPtr dump__V_96_96;
#line 777 "dump.m"
    MR_ArrayPtr dump__V_97_97;
#line 777 "dump.m"
    MR_ArrayPtr dump__V_98_98;
#line 777 "dump.m"
    MR_ArrayPtr dump__V_99_99;
#line 777 "dump.m"
    MR_ArrayPtr dump__V_100_100;
#line 777 "dump.m"
    MR_ArrayPtr dump__V_101_101;
#line 777 "dump.m"
    MR_ArrayPtr dump__V_102_102;
#line 777 "dump.m"
    MR_ArrayPtr dump__V_103_103;
#line 777 "dump.m"
    MR_ArrayPtr dump__V_104_104;
#line 777 "dump.m"
    MR_ArrayPtr dump__V_105_105;
#line 777 "dump.m"
    MR_Word dump__V_106_106;
#line 777 "dump.m"
    MR_Word dump__V_107_107;
#line 777 "dump.m"
    MR_Word dump__V_108_108;
#line 777 "dump.m"
    MR_Word dump__V_109_109;
#line 779 "dump.m"
    MR_Box dump__conv2_STATE_VARIABLE_IO_24_24;

#line 766 "dump.m"
    {
#line 766 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM PROC STATIC TO CALLER CSDs:\n\n");
    }
#line 5719 "dump.c"
    dump__TypeCtorInfo_115_115 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 767 "dump.m"
    {
#line 767 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &dump_scalar_common_1[4], dump__TypeCtorInfo_115_115, (MR_Word) &dump_scalar_common_2[15], (MR_ArrayPtr) dump__ProcCallers_6, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_14_14);
    }
#line 768 "dump.m"
    {
#line 768 "dump.m"
      mercury__io__nl_2_p_0();
    }
#line 770 "dump.m"
    dump__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 770 "dump.m"
    dump__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 770 "dump.m"
    dump__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 770 "dump.m"
    dump__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 770 "dump.m"
    dump__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 770 "dump.m"
    dump__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 770 "dump.m"
    dump__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 770 "dump.m"
    dump__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 770 "dump.m"
    dump__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 770 "dump.m"
    dump__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 770 "dump.m"
    dump__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 770 "dump.m"
    dump__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 770 "dump.m"
    dump__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 770 "dump.m"
    dump__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 770 "dump.m"
    dump__CallSiteStaticMap_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 770 "dump.m"
    dump__V_68_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 770 "dump.m"
    dump__V_69_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 770 "dump.m"
    dump__V_70_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 770 "dump.m"
    dump__V_71_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 770 "dump.m"
    dump__V_72_72 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 770 "dump.m"
    dump__V_73_73 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 770 "dump.m"
    dump__V_74_74 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 770 "dump.m"
    dump__V_75_75 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 770 "dump.m"
    dump__V_76_76 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 770 "dump.m"
    dump__V_77_77 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 770 "dump.m"
    dump__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 770 "dump.m"
    dump__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 770 "dump.m"
    dump__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 770 "dump.m"
    dump__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 771 "dump.m"
    {
#line 771 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM CALL SITE DYNAMICS TO STATICS:\n\n");
    }
#line 773 "dump.m"
    {
#line 773 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, dump__TypeCtorInfo_115_115, (MR_Word) &dump_scalar_common_2[16], (MR_ArrayPtr) dump__CallSiteStaticMap_7, ((MR_Box) ((MR_Integer) 0)), &dump__conv1_STATE_VARIABLE_IO_19_19);
    }
#line 775 "dump.m"
    {
#line 775 "dump.m"
      mercury__io__nl_2_p_0();
    }
#line 777 "dump.m"
    dump__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 777 "dump.m"
    dump__V_83_83 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 777 "dump.m"
    dump__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 777 "dump.m"
    dump__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 777 "dump.m"
    dump__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 777 "dump.m"
    dump__V_87_87 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 777 "dump.m"
    dump__V_88_88 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 777 "dump.m"
    dump__V_89_89 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 777 "dump.m"
    dump__V_90_90 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 777 "dump.m"
    dump__V_91_91 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 777 "dump.m"
    dump__V_92_92 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 777 "dump.m"
    dump__V_93_93 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 777 "dump.m"
    dump__V_94_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 777 "dump.m"
    dump__V_95_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 777 "dump.m"
    dump__V_96_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 777 "dump.m"
    dump__CallSiteCalls_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 777 "dump.m"
    dump__V_97_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 777 "dump.m"
    dump__V_98_98 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 777 "dump.m"
    dump__V_99_99 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 777 "dump.m"
    dump__V_100_100 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 777 "dump.m"
    dump__V_101_101 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 777 "dump.m"
    dump__V_102_102 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 777 "dump.m"
    dump__V_103_103 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 777 "dump.m"
    dump__V_104_104 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 777 "dump.m"
    dump__V_105_105 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 777 "dump.m"
    dump__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 777 "dump.m"
    dump__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 777 "dump.m"
    dump__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 777 "dump.m"
    dump__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 778 "dump.m"
    {
#line 778 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM CALL SITE STATICS TO CALLS:\n\n");
    }
#line 779 "dump.m"
    {
#line 779 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &dump_scalar_common_2[0], dump__TypeCtorInfo_115_115, (MR_Word) &dump_scalar_common_2[17], (MR_ArrayPtr) dump__CallSiteCalls_8, ((MR_Box) ((MR_Integer) 0)), &dump__conv2_STATE_VARIABLE_IO_24_24);
    }
#line 780 "dump.m"
    {
#line 780 "dump.m"
      mercury__io__nl_2_p_0();
#line 780 "dump.m"
      return;
    }
#line 764 "dump.m"
  }
#line 762 "dump.m"
}

#line 748 "dump.m"
static void MR_CALL 
dump__dump_clique_maybe_child_4_p_0(
#line 748 "dump.m"
  MR_Integer dump__Index_5,
#line 748 "dump.m"
  MR_Word dump__MaybeCliquePtr_6)
#line 748 "dump.m"
{
#line 753 "dump.m"
  {
#line 753 "dump.m"
    MR_bool dump__succeeded;

#line 753 "dump.m"
    if ((dump__MaybeCliquePtr_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 753 "dump.m"
      {
#line 753 "dump.m"
      }
#line 753 "dump.m"
    else
#line 755 "dump.m"
      {
#line 755 "dump.m"
        MR_Word dump__CliquePtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__MaybeCliquePtr_6, (MR_Integer) 0)));
#line 755 "dump.m"
        MR_Integer dump__CliqueNum_9 = (MR_Integer) dump__CliquePtr_8;
#line 755 "dump.m"
        MR_String dump__V_22_22;
#line 755 "dump.m"
        MR_Word dump__V_28_28;
#line 755 "dump.m"
        MR_String dump__V_32_32;

#line 757 "dump.m"
        {
#line 757 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "csd");
        }
#line 5924 "dump.c"
        dump__V_28_28 = (MR_Word) &dump_scalar_common_5[0];
#line 757 "dump.m"
        {
#line 757 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_28_28, dump__Index_5, &dump__V_22_22);
        }
#line 757 "dump.m"
        {
#line 757 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_22_22);
        }
#line 757 "dump.m"
        {
#line 757 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) " child: clique");
        }
#line 757 "dump.m"
        {
#line 757 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_28_28, dump__CliqueNum_9, &dump__V_32_32);
        }
#line 757 "dump.m"
        {
#line 757 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_32_32);
        }
#line 757 "dump.m"
        {
#line 757 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 757 "dump.m"
          return;
        }
#line 755 "dump.m"
      }
#line 753 "dump.m"
  }
#line 748 "dump.m"
}

#line 741 "dump.m"
static void MR_CALL 
dump__dump_clique_parent_4_p_0(
#line 741 "dump.m"
  MR_Integer dump__Index_5,
#line 741 "dump.m"
  MR_Word dump__CSDPtr_6)
#line 741 "dump.m"
{
#line 744 "dump.m"
  {
#line 744 "dump.m"
    MR_bool dump__succeeded;
#line 744 "dump.m"
    MR_Integer dump__CSDNum_8 = (MR_Integer) dump__CSDPtr_6;
#line 744 "dump.m"
    MR_String dump__V_21_21;
#line 744 "dump.m"
    MR_Word dump__V_27_27;
#line 744 "dump.m"
    MR_String dump__V_31_31;

#line 746 "dump.m"
    {
#line 746 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "clique");
    }
#line 5992 "dump.c"
    dump__V_27_27 = (MR_Word) &dump_scalar_common_5[0];
#line 746 "dump.m"
    {
#line 746 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_27_27, dump__Index_5, &dump__V_21_21);
    }
#line 746 "dump.m"
    {
#line 746 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_21_21);
    }
#line 746 "dump.m"
    {
#line 746 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) " parent: csd");
    }
#line 746 "dump.m"
    {
#line 746 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_27_27, dump__CSDNum_8, &dump__V_31_31);
    }
#line 746 "dump.m"
    {
#line 746 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_31_31);
    }
#line 746 "dump.m"
    {
#line 746 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 746 "dump.m"
      return;
    }
#line 744 "dump.m"
  }
#line 741 "dump.m"
}

#line 734 "dump.m"
static void MR_CALL 
dump__dump_pd_in_clique_3_p_0(
#line 734 "dump.m"
  MR_Word dump__PDPtr_4)
#line 734 "dump.m"
{
#line 736 "dump.m"
  {
#line 736 "dump.m"
    MR_bool dump__succeeded;
#line 736 "dump.m"
    MR_Integer dump__PDNum_6 = (MR_Integer) dump__PDPtr_4;

#line 738 "dump.m"
    {
#line 738 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) " pd");
    }
#line 739 "dump.m"
    {
#line 739 "dump.m"
      mercury__io__write_int_3_p_0(dump__PDNum_6);
#line 739 "dump.m"
      return;
    }
#line 736 "dump.m"
  }
#line 734 "dump.m"
}

#line 731 "dump.m"
static void MR_CALL 
dump__dump_clique_members_4_p_0_1(
#line 731 "dump.m"
  MR_Box dump__closure_arg,
#line 731 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 731 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 731 "dump.m"
  MR_Box * dump__wrapper_arg_3)
#line 731 "dump.m"
{
#line 731 "dump.m"
  {
#line 731 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 731 "dump.m"
    {
#line 731 "dump.m"
      dump__dump_pd_in_clique_3_p_0(((MR_Word) dump__wrapper_arg_1));
#line 731 "dump.m"
      return;
    }
#line 731 "dump.m"
  }
#line 731 "dump.m"
}

#line 726 "dump.m"
static void MR_CALL 
dump__dump_clique_members_4_p_0(
#line 726 "dump.m"
  MR_Integer dump__Index_5,
#line 726 "dump.m"
  MR_Word dump__CliqueMembers_6)
#line 726 "dump.m"
{
#line 729 "dump.m"
  {
#line 729 "dump.m"
    MR_bool dump__succeeded;
#line 729 "dump.m"
    MR_String dump__V_26_26;
#line 731 "dump.m"
    MR_Box dump__conv0_STATE_VARIABLE_IO_16_16;

#line 730 "dump.m"
    {
#line 730 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "clique");
    }
#line 730 "dump.m"
    {
#line 730 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_5[0], dump__Index_5, &dump__V_26_26);
    }
#line 730 "dump.m"
    {
#line 730 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_26_26);
    }
#line 730 "dump.m"
    {
#line 730 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) " members:");
    }
#line 731 "dump.m"
    {
#line 731 "dump.m"
      mercury__list__foldl_4_p_2((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &dump_scalar_common_2[14], dump__CliqueMembers_6, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_16_16);
    }
#line 732 "dump.m"
    {
#line 732 "dump.m"
      mercury__io__nl_2_p_0();
#line 732 "dump.m"
      return;
    }
#line 729 "dump.m"
  }
#line 726 "dump.m"
}

#line 719 "dump.m"
static void MR_CALL 
dump__dump_clique_index_entry_4_p_0(
#line 719 "dump.m"
  MR_Integer dump__Index_5,
#line 719 "dump.m"
  MR_Word dump__CliquePtr_6)
#line 719 "dump.m"
{
#line 722 "dump.m"
  {
#line 722 "dump.m"
    MR_bool dump__succeeded;
#line 722 "dump.m"
    MR_Integer dump__CliqueNum_8 = (MR_Integer) dump__CliquePtr_6;
#line 722 "dump.m"
    MR_String dump__V_21_21;
#line 722 "dump.m"
    MR_Word dump__V_27_27;
#line 722 "dump.m"
    MR_String dump__V_31_31;

#line 724 "dump.m"
    {
#line 724 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "pd");
    }
#line 6174 "dump.c"
    dump__V_27_27 = (MR_Word) &dump_scalar_common_5[0];
#line 724 "dump.m"
    {
#line 724 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_27_27, dump__Index_5, &dump__V_21_21);
    }
#line 724 "dump.m"
    {
#line 724 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_21_21);
    }
#line 724 "dump.m"
    {
#line 724 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) " is in clique");
    }
#line 724 "dump.m"
    {
#line 724 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_27_27, dump__CliqueNum_8, &dump__V_31_31);
    }
#line 724 "dump.m"
    {
#line 724 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_31_31);
    }
#line 724 "dump.m"
    {
#line 724 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 724 "dump.m"
      return;
    }
#line 722 "dump.m"
  }
#line 719 "dump.m"
}

#line 716 "dump.m"
static void MR_CALL 
dump__dump_deep_cliques_3_p_0_4(
#line 716 "dump.m"
  MR_Box dump__closure_arg,
#line 716 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 716 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 716 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 716 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 716 "dump.m"
{
#line 716 "dump.m"
  {
#line 716 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 716 "dump.m"
    {
#line 716 "dump.m"
      dump__dump_clique_maybe_child_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 716 "dump.m"
      return;
    }
#line 716 "dump.m"
  }
#line 716 "dump.m"
}

#line 710 "dump.m"
static void MR_CALL 
dump__dump_deep_cliques_3_p_0_3(
#line 710 "dump.m"
  MR_Box dump__closure_arg,
#line 710 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 710 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 710 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 710 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 710 "dump.m"
{
#line 710 "dump.m"
  {
#line 710 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 710 "dump.m"
    {
#line 710 "dump.m"
      dump__dump_clique_parent_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 710 "dump.m"
      return;
    }
#line 710 "dump.m"
  }
#line 710 "dump.m"
}

#line 705 "dump.m"
static void MR_CALL 
dump__dump_deep_cliques_3_p_0_2(
#line 705 "dump.m"
  MR_Box dump__closure_arg,
#line 705 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 705 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 705 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 705 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 705 "dump.m"
{
#line 705 "dump.m"
  {
#line 705 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 705 "dump.m"
    {
#line 705 "dump.m"
      dump__dump_clique_members_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 705 "dump.m"
      return;
    }
#line 705 "dump.m"
  }
#line 705 "dump.m"
}

#line 700 "dump.m"
static void MR_CALL 
dump__dump_deep_cliques_3_p_0_1(
#line 700 "dump.m"
  MR_Box dump__closure_arg,
#line 700 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 700 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 700 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 700 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 700 "dump.m"
{
#line 700 "dump.m"
  {
#line 700 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 700 "dump.m"
    {
#line 700 "dump.m"
      dump__dump_clique_index_entry_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 700 "dump.m"
      return;
    }
#line 700 "dump.m"
  }
#line 700 "dump.m"
}

#line 695 "dump.m"
static void MR_CALL 
dump__dump_deep_cliques_3_p_0(
#line 695 "dump.m"
  MR_Word dump__Deep_4)
#line 695 "dump.m"
{
#line 697 "dump.m"
  {
#line 697 "dump.m"
    MR_bool dump__succeeded;
#line 697 "dump.m"
    MR_Word dump__TypeCtorInfo_149_149;
#line 697 "dump.m"
    MR_ArrayPtr dump__CliqueIndex_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 697 "dump.m"
    MR_ArrayPtr dump__CliqueMembers_7;
#line 697 "dump.m"
    MR_ArrayPtr dump__CliqueParents_8;
#line 697 "dump.m"
    MR_ArrayPtr dump__CliqueMaybeChild_9;
#line 698 "dump.m"
    MR_Word dump__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 698 "dump.m"
    MR_String dump__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 698 "dump.m"
    MR_String dump__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 698 "dump.m"
    MR_String dump__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 698 "dump.m"
    MR_Word dump__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 698 "dump.m"
    MR_ArrayPtr dump__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 698 "dump.m"
    MR_ArrayPtr dump__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 698 "dump.m"
    MR_ArrayPtr dump__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 698 "dump.m"
    MR_ArrayPtr dump__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 698 "dump.m"
    MR_ArrayPtr dump__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 698 "dump.m"
    MR_ArrayPtr dump__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 698 "dump.m"
    MR_ArrayPtr dump__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 698 "dump.m"
    MR_ArrayPtr dump__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 698 "dump.m"
    MR_ArrayPtr dump__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 698 "dump.m"
    MR_ArrayPtr dump__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 698 "dump.m"
    MR_ArrayPtr dump__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 698 "dump.m"
    MR_ArrayPtr dump__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 698 "dump.m"
    MR_ArrayPtr dump__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 698 "dump.m"
    MR_ArrayPtr dump__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 698 "dump.m"
    MR_ArrayPtr dump__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 698 "dump.m"
    MR_ArrayPtr dump__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 698 "dump.m"
    MR_ArrayPtr dump__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 698 "dump.m"
    MR_ArrayPtr dump__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 698 "dump.m"
    MR_ArrayPtr dump__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 698 "dump.m"
    MR_Word dump__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 698 "dump.m"
    MR_Word dump__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 698 "dump.m"
    MR_Word dump__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 698 "dump.m"
    MR_Word dump__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 700 "dump.m"
    MR_Box dump__conv0_STATE_VARIABLE_IO_15_15;
#line 703 "dump.m"
    MR_Word dump__V_60_60;
#line 703 "dump.m"
    MR_String dump__V_61_61;
#line 703 "dump.m"
    MR_String dump__V_62_62;
#line 703 "dump.m"
    MR_String dump__V_63_63;
#line 703 "dump.m"
    MR_Word dump__V_64_64;
#line 703 "dump.m"
    MR_ArrayPtr dump__V_65_65;
#line 703 "dump.m"
    MR_ArrayPtr dump__V_66_66;
#line 703 "dump.m"
    MR_ArrayPtr dump__V_67_67;
#line 703 "dump.m"
    MR_ArrayPtr dump__V_68_68;
#line 703 "dump.m"
    MR_ArrayPtr dump__V_69_69;
#line 703 "dump.m"
    MR_ArrayPtr dump__V_70_70;
#line 703 "dump.m"
    MR_ArrayPtr dump__V_71_71;
#line 703 "dump.m"
    MR_ArrayPtr dump__V_72_72;
#line 703 "dump.m"
    MR_ArrayPtr dump__V_73_73;
#line 703 "dump.m"
    MR_ArrayPtr dump__V_74_74;
#line 703 "dump.m"
    MR_ArrayPtr dump__V_75_75;
#line 703 "dump.m"
    MR_ArrayPtr dump__V_76_76;
#line 703 "dump.m"
    MR_ArrayPtr dump__V_77_77;
#line 703 "dump.m"
    MR_ArrayPtr dump__V_78_78;
#line 703 "dump.m"
    MR_ArrayPtr dump__V_79_79;
#line 703 "dump.m"
    MR_ArrayPtr dump__V_80_80;
#line 703 "dump.m"
    MR_ArrayPtr dump__V_81_81;
#line 703 "dump.m"
    MR_ArrayPtr dump__V_82_82;
#line 703 "dump.m"
    MR_ArrayPtr dump__V_83_83;
#line 703 "dump.m"
    MR_Word dump__V_84_84;
#line 703 "dump.m"
    MR_Word dump__V_85_85;
#line 703 "dump.m"
    MR_Word dump__V_86_86;
#line 703 "dump.m"
    MR_Word dump__V_87_87;
#line 705 "dump.m"
    MR_Box dump__conv1_STATE_VARIABLE_IO_20_20;
#line 708 "dump.m"
    MR_Word dump__V_88_88;
#line 708 "dump.m"
    MR_String dump__V_89_89;
#line 708 "dump.m"
    MR_String dump__V_90_90;
#line 708 "dump.m"
    MR_String dump__V_91_91;
#line 708 "dump.m"
    MR_Word dump__V_92_92;
#line 708 "dump.m"
    MR_ArrayPtr dump__V_93_93;
#line 708 "dump.m"
    MR_ArrayPtr dump__V_94_94;
#line 708 "dump.m"
    MR_ArrayPtr dump__V_95_95;
#line 708 "dump.m"
    MR_ArrayPtr dump__V_96_96;
#line 708 "dump.m"
    MR_ArrayPtr dump__V_97_97;
#line 708 "dump.m"
    MR_ArrayPtr dump__V_98_98;
#line 708 "dump.m"
    MR_ArrayPtr dump__V_99_99;
#line 708 "dump.m"
    MR_ArrayPtr dump__V_100_100;
#line 708 "dump.m"
    MR_ArrayPtr dump__V_101_101;
#line 708 "dump.m"
    MR_ArrayPtr dump__V_102_102;
#line 708 "dump.m"
    MR_ArrayPtr dump__V_103_103;
#line 708 "dump.m"
    MR_ArrayPtr dump__V_104_104;
#line 708 "dump.m"
    MR_ArrayPtr dump__V_105_105;
#line 708 "dump.m"
    MR_ArrayPtr dump__V_106_106;
#line 708 "dump.m"
    MR_ArrayPtr dump__V_107_107;
#line 708 "dump.m"
    MR_ArrayPtr dump__V_108_108;
#line 708 "dump.m"
    MR_ArrayPtr dump__V_109_109;
#line 708 "dump.m"
    MR_ArrayPtr dump__V_110_110;
#line 708 "dump.m"
    MR_ArrayPtr dump__V_111_111;
#line 708 "dump.m"
    MR_Word dump__V_112_112;
#line 708 "dump.m"
    MR_Word dump__V_113_113;
#line 708 "dump.m"
    MR_Word dump__V_114_114;
#line 708 "dump.m"
    MR_Word dump__V_115_115;
#line 710 "dump.m"
    MR_Box dump__conv2_STATE_VARIABLE_IO_25_25;
#line 713 "dump.m"
    MR_Word dump__V_116_116;
#line 713 "dump.m"
    MR_String dump__V_117_117;
#line 713 "dump.m"
    MR_String dump__V_118_118;
#line 713 "dump.m"
    MR_String dump__V_119_119;
#line 713 "dump.m"
    MR_Word dump__V_120_120;
#line 713 "dump.m"
    MR_ArrayPtr dump__V_121_121;
#line 713 "dump.m"
    MR_ArrayPtr dump__V_122_122;
#line 713 "dump.m"
    MR_ArrayPtr dump__V_123_123;
#line 713 "dump.m"
    MR_ArrayPtr dump__V_124_124;
#line 713 "dump.m"
    MR_ArrayPtr dump__V_125_125;
#line 713 "dump.m"
    MR_ArrayPtr dump__V_126_126;
#line 713 "dump.m"
    MR_ArrayPtr dump__V_127_127;
#line 713 "dump.m"
    MR_ArrayPtr dump__V_128_128;
#line 713 "dump.m"
    MR_ArrayPtr dump__V_129_129;
#line 713 "dump.m"
    MR_ArrayPtr dump__V_130_130;
#line 713 "dump.m"
    MR_ArrayPtr dump__V_131_131;
#line 713 "dump.m"
    MR_ArrayPtr dump__V_132_132;
#line 713 "dump.m"
    MR_ArrayPtr dump__V_133_133;
#line 713 "dump.m"
    MR_ArrayPtr dump__V_134_134;
#line 713 "dump.m"
    MR_ArrayPtr dump__V_135_135;
#line 713 "dump.m"
    MR_ArrayPtr dump__V_136_136;
#line 713 "dump.m"
    MR_ArrayPtr dump__V_137_137;
#line 713 "dump.m"
    MR_ArrayPtr dump__V_138_138;
#line 713 "dump.m"
    MR_ArrayPtr dump__V_139_139;
#line 713 "dump.m"
    MR_Word dump__V_140_140;
#line 713 "dump.m"
    MR_Word dump__V_141_141;
#line 713 "dump.m"
    MR_Word dump__V_142_142;
#line 713 "dump.m"
    MR_Word dump__V_143_143;
#line 716 "dump.m"
    MR_Box dump__conv3_STATE_VARIABLE_IO_30_30;

#line 699 "dump.m"
    {
#line 699 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM PROC DYNAMIC TO CLIQUE:\n\n");
    }
#line 6600 "dump.c"
    dump__TypeCtorInfo_149_149 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 700 "dump.m"
    {
#line 700 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, dump__TypeCtorInfo_149_149, (MR_Word) &dump_scalar_common_2[10], (MR_ArrayPtr) dump__CliqueIndex_6, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_15_15);
    }
#line 701 "dump.m"
    {
#line 701 "dump.m"
      mercury__io__nl_2_p_0();
    }
#line 703 "dump.m"
    dump__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 703 "dump.m"
    dump__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 703 "dump.m"
    dump__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 703 "dump.m"
    dump__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 703 "dump.m"
    dump__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 703 "dump.m"
    dump__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 703 "dump.m"
    dump__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 703 "dump.m"
    dump__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 703 "dump.m"
    dump__V_68_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 703 "dump.m"
    dump__V_69_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 703 "dump.m"
    dump__CliqueMembers_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 703 "dump.m"
    dump__V_70_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 703 "dump.m"
    dump__V_71_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 703 "dump.m"
    dump__V_72_72 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 703 "dump.m"
    dump__V_73_73 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 703 "dump.m"
    dump__V_74_74 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 703 "dump.m"
    dump__V_75_75 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 703 "dump.m"
    dump__V_76_76 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 703 "dump.m"
    dump__V_77_77 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 703 "dump.m"
    dump__V_78_78 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 703 "dump.m"
    dump__V_79_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 703 "dump.m"
    dump__V_80_80 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 703 "dump.m"
    dump__V_81_81 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 703 "dump.m"
    dump__V_82_82 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 703 "dump.m"
    dump__V_83_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 703 "dump.m"
    dump__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 703 "dump.m"
    dump__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 703 "dump.m"
    dump__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 703 "dump.m"
    dump__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 704 "dump.m"
    {
#line 704 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM CLIQUE TO PROC DYNAMICS:\n\n");
    }
#line 705 "dump.m"
    {
#line 705 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &dump_scalar_common_1[2], dump__TypeCtorInfo_149_149, (MR_Word) &dump_scalar_common_2[11], (MR_ArrayPtr) dump__CliqueMembers_7, ((MR_Box) ((MR_Integer) 0)), &dump__conv1_STATE_VARIABLE_IO_20_20);
    }
#line 706 "dump.m"
    {
#line 706 "dump.m"
      mercury__io__nl_2_p_0();
    }
#line 708 "dump.m"
    dump__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 708 "dump.m"
    dump__V_89_89 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 708 "dump.m"
    dump__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 708 "dump.m"
    dump__V_91_91 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 708 "dump.m"
    dump__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 708 "dump.m"
    dump__V_93_93 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 708 "dump.m"
    dump__V_94_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 708 "dump.m"
    dump__V_95_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 708 "dump.m"
    dump__V_96_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 708 "dump.m"
    dump__V_97_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 708 "dump.m"
    dump__V_98_98 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 708 "dump.m"
    dump__CliqueParents_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 708 "dump.m"
    dump__V_99_99 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 708 "dump.m"
    dump__V_100_100 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 708 "dump.m"
    dump__V_101_101 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 708 "dump.m"
    dump__V_102_102 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 708 "dump.m"
    dump__V_103_103 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 708 "dump.m"
    dump__V_104_104 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 708 "dump.m"
    dump__V_105_105 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 708 "dump.m"
    dump__V_106_106 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 708 "dump.m"
    dump__V_107_107 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 708 "dump.m"
    dump__V_108_108 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 708 "dump.m"
    dump__V_109_109 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 708 "dump.m"
    dump__V_110_110 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 708 "dump.m"
    dump__V_111_111 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 708 "dump.m"
    dump__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 708 "dump.m"
    dump__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 708 "dump.m"
    dump__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 708 "dump.m"
    dump__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 709 "dump.m"
    {
#line 709 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM CLIQUE TO PARENT CSD:\n\n");
    }
#line 710 "dump.m"
    {
#line 710 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, dump__TypeCtorInfo_149_149, (MR_Word) &dump_scalar_common_2[12], (MR_ArrayPtr) dump__CliqueParents_8, ((MR_Box) ((MR_Integer) 0)), &dump__conv2_STATE_VARIABLE_IO_25_25);
    }
#line 711 "dump.m"
    {
#line 711 "dump.m"
      mercury__io__nl_2_p_0();
    }
#line 713 "dump.m"
    dump__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
#line 713 "dump.m"
    dump__V_117_117 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
#line 713 "dump.m"
    dump__V_118_118 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
#line 713 "dump.m"
    dump__V_119_119 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
#line 713 "dump.m"
    dump__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
#line 713 "dump.m"
    dump__V_121_121 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
#line 713 "dump.m"
    dump__V_122_122 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
#line 713 "dump.m"
    dump__V_123_123 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
#line 713 "dump.m"
    dump__V_124_124 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
#line 713 "dump.m"
    dump__V_125_125 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
#line 713 "dump.m"
    dump__V_126_126 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
#line 713 "dump.m"
    dump__V_127_127 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
#line 713 "dump.m"
    dump__CliqueMaybeChild_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
#line 713 "dump.m"
    dump__V_128_128 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
#line 713 "dump.m"
    dump__V_129_129 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
#line 713 "dump.m"
    dump__V_130_130 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
#line 713 "dump.m"
    dump__V_131_131 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
#line 713 "dump.m"
    dump__V_132_132 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
#line 713 "dump.m"
    dump__V_133_133 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
#line 713 "dump.m"
    dump__V_134_134 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
#line 713 "dump.m"
    dump__V_135_135 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
#line 713 "dump.m"
    dump__V_136_136 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
#line 713 "dump.m"
    dump__V_137_137 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
#line 713 "dump.m"
    dump__V_138_138 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
#line 713 "dump.m"
    dump__V_139_139 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
#line 713 "dump.m"
    dump__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
#line 713 "dump.m"
    dump__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
#line 713 "dump.m"
    dump__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
#line 713 "dump.m"
    dump__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
#line 714 "dump.m"
    {
#line 714 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM CSD TO MAYBE CHILD CLIQUE:\n\n");
    }
#line 716 "dump.m"
    {
#line 716 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &dump_scalar_common_1[3], dump__TypeCtorInfo_149_149, (MR_Word) &dump_scalar_common_2[13], (MR_ArrayPtr) dump__CliqueMaybeChild_9, ((MR_Box) ((MR_Integer) 0)), &dump__conv3_STATE_VARIABLE_IO_30_30);
    }
#line 717 "dump.m"
    {
#line 717 "dump.m"
      mercury__io__nl_2_p_0();
#line 717 "dump.m"
      return;
    }
#line 697 "dump.m"
  }
#line 695 "dump.m"
}

#line 653 "dump.m"
static void MR_CALL 
dump__dump_call_site_kind_and_callee_3_p_0(
#line 653 "dump.m"
  MR_Word dump__HeadVar__1_1)
#line 653 "dump.m"
{
#line 656 "dump.m"
  {
#line 656 "dump.m"
    MR_bool dump__succeeded;

#line 656 "dump.m"
#line 656 "dump.m"
    switch (MR_tag((MR_Word) dump__HeadVar__1_1)) {
#line 656 "dump.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 656 "dump.m"
      case (MR_Integer) 0:
#line 656 "dump.m"
#line 656 "dump.m"
        switch (MR_unmkbody(dump__HeadVar__1_1)) {
#line 656 "dump.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 656 "dump.m"
          case (MR_Integer) 0:
#line 659 "dump.m"
            {
#line 660 "dump.m"
              {
#line 660 "dump.m"
                mercury__io__write_string_3_p_0((MR_String) "special_call");
#line 660 "dump.m"
                return;
              }
#line 659 "dump.m"
            }
#line 656 "dump.m"
            break;
#line 656 "dump.m"
          case (MR_Integer) 1:
#line 661 "dump.m"
            {
#line 662 "dump.m"
              {
#line 662 "dump.m"
                mercury__io__write_string_3_p_0((MR_String) "higher_order_call");
#line 662 "dump.m"
                return;
              }
#line 661 "dump.m"
            }
#line 656 "dump.m"
            break;
#line 656 "dump.m"
          case (MR_Integer) 2:
#line 663 "dump.m"
            {
#line 664 "dump.m"
              {
#line 664 "dump.m"
                mercury__io__write_string_3_p_0((MR_String) "method_call");
#line 664 "dump.m"
                return;
              }
#line 663 "dump.m"
            }
#line 656 "dump.m"
            break;
#line 656 "dump.m"
          case (MR_Integer) 3:
#line 665 "dump.m"
            {
#line 666 "dump.m"
              {
#line 666 "dump.m"
                mercury__io__write_string_3_p_0((MR_String) "callback");
#line 666 "dump.m"
                return;
              }
#line 665 "dump.m"
            }
#line 656 "dump.m"
            break;
#line 656 "dump.m"
        }
#line 656 "dump.m"
        break;
#line 656 "dump.m"
      case (MR_Integer) 1:
#line 656 "dump.m"
        {
#line 656 "dump.m"
          MR_Word dump__Ptr_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__1_1, (MR_Integer) 0)));
#line 656 "dump.m"
          MR_String dump__String_5 = ((MR_String) (MR_hl_field(MR_mktag(1), dump__HeadVar__1_1, (MR_Integer) 1)));
#line 656 "dump.m"
          MR_Integer dump__Val_7 = (MR_Integer) dump__Ptr_4;
#line 656 "dump.m"
          MR_String dump__V_40_40;
#line 656 "dump.m"
          MR_Word dump__V_46_46;
#line 656 "dump.m"
          MR_String dump__V_50_50;

#line 658 "dump.m"
          {
#line 658 "dump.m"
            mercury__io__write_string_3_p_0((MR_String) "normal_call(");
          }
#line 6948 "dump.c"
          dump__V_46_46 = (MR_Word) &dump_scalar_common_5[0];
#line 658 "dump.m"
          {
#line 658 "dump.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_46_46, dump__Val_7, &dump__V_40_40);
          }
#line 658 "dump.m"
          {
#line 658 "dump.m"
            mercury__io__write_string_3_p_0(dump__V_40_40);
          }
#line 658 "dump.m"
          {
#line 658 "dump.m"
            mercury__io__write_string_3_p_0((MR_String) ", \"");
          }
#line 658 "dump.m"
          {
#line 658 "dump.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_46_46, dump__String_5, &dump__V_50_50);
          }
#line 658 "dump.m"
          {
#line 658 "dump.m"
            mercury__io__write_string_3_p_0(dump__V_50_50);
          }
#line 658 "dump.m"
          {
#line 658 "dump.m"
            mercury__io__write_string_3_p_0((MR_String) "\")");
#line 658 "dump.m"
            return;
          }
#line 656 "dump.m"
        }
#line 656 "dump.m"
        break;
#line 656 "dump.m"
    }
#line 656 "dump.m"
  }
#line 653 "dump.m"
}

#line 632 "dump.m"
static MR_String MR_CALL 
dump__dump_proc_id_1_f_0(
#line 632 "dump.m"
  MR_Word dump__Proc_1)
#line 632 "dump.m"
{
#line 634 "dump.m"
  {
#line 634 "dump.m"
    MR_bool dump__succeeded;
#line 634 "dump.m"
    MR_String dump__Str_2;

#line 634 "dump.m"
    if (((MR_tag((MR_Word) dump__Proc_1)) == (MR_mktag((MR_Integer) 0))))
#line 634 "dump.m"
      {
#line 634 "dump.m"
        MR_Word dump__PredOrFunc_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Proc_1, (MR_Integer) 0)));
#line 634 "dump.m"
        MR_String dump__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Proc_1, (MR_Integer) 3)));
#line 634 "dump.m"
        MR_Integer dump__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Proc_1, (MR_Integer) 4)));
#line 634 "dump.m"
        MR_Integer dump__Mode_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Proc_1, (MR_Integer) 5)));
#line 634 "dump.m"
        MR_String dump__Suffix_11;
#line 634 "dump.m"
        MR_String dump__V_54_54;
#line 634 "dump.m"
        MR_Word dump__V_60_60;
#line 634 "dump.m"
        MR_String dump__V_61_61;
#line 634 "dump.m"
        MR_String dump__V_68_68;
#line 634 "dump.m"
        MR_String dump__V_70_70;
#line 634 "dump.m"
        MR_String dump__V_71_71;
#line 634 "dump.m"
        MR_String dump__V_78_78;
#line 634 "dump.m"
        MR_String dump__V_80_80;
#line 634 "dump.m"
        MR_String dump__V_81_81;
#line 635 "dump.m"
        MR_String dump___DeclModule_6 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Proc_1, (MR_Integer) 1)));
#line 635 "dump.m"
        MR_String dump___DefnModule_7 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Proc_1, (MR_Integer) 2)));

#line 640 "dump.m"
#line 640 "dump.m"
        switch (dump__PredOrFunc_5) {
#line 640 "dump.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 640 "dump.m"
          case (MR_Integer) 1:
#line 642 "dump.m"
            dump__Suffix_11 = (MR_String) "+1";
#line 640 "dump.m"
            break;
#line 640 "dump.m"
          case (MR_Integer) 0:
#line 639 "dump.m"
            dump__Suffix_11 = (MR_String) "";
#line 640 "dump.m"
            break;
#line 640 "dump.m"
        }
#line 7063 "dump.c"
        dump__V_60_60 = (MR_Word) &dump_scalar_common_5[0];
#line 644 "dump.m"
        {
#line 644 "dump.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_60_60, dump__Suffix_11, &dump__V_54_54);
        }
#line 644 "dump.m"
        {
#line 644 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_60_60, dump__Mode_10, &dump__V_61_61);
        }
#line 644 "dump.m"
        {
#line 644 "dump.m"
          dump__V_68_68 = mercury__string__f_43_43_2_f_0(dump__V_61_61, dump__V_54_54);
        }
#line 644 "dump.m"
        {
#line 644 "dump.m"
          dump__V_70_70 = mercury__string__f_43_43_2_f_0((MR_String) "-", dump__V_68_68);
        }
#line 644 "dump.m"
        {
#line 644 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_60_60, dump__Arity_9, &dump__V_71_71);
        }
#line 644 "dump.m"
        {
#line 644 "dump.m"
          dump__V_78_78 = mercury__string__f_43_43_2_f_0(dump__V_71_71, dump__V_70_70);
        }
#line 644 "dump.m"
        {
#line 644 "dump.m"
          dump__V_80_80 = mercury__string__f_43_43_2_f_0((MR_String) "/", dump__V_78_78);
        }
#line 644 "dump.m"
        {
#line 644 "dump.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_60_60, dump__Name_8, &dump__V_81_81);
        }
#line 644 "dump.m"
        {
#line 644 "dump.m"
          return dump__Str_2 = mercury__string__f_43_43_2_f_0(dump__V_81_81, dump__V_80_80);
        }
#line 634 "dump.m"
      }
#line 634 "dump.m"
    else
#line 646 "dump.m"
      {
#line 646 "dump.m"
        MR_String dump__Type_24 = ((MR_String) (MR_hl_field(MR_mktag(1), dump__Proc_1, (MR_Integer) 0)));
#line 646 "dump.m"
        MR_String dump__Name_27 = ((MR_String) (MR_hl_field(MR_mktag(1), dump__Proc_1, (MR_Integer) 3)));
#line 646 "dump.m"
        MR_String dump__V_37_37;
#line 646 "dump.m"
        MR_Word dump__V_43_43 = (MR_Word) &dump_scalar_common_5[0];
#line 646 "dump.m"
        MR_String dump__V_44_44;
#line 646 "dump.m"
        MR_String dump__V_46_46;
#line 646 "dump.m"
        MR_String dump__V_47_47;
#line 647 "dump.m"
        MR_String dump___TypeModule_25 = ((MR_String) (MR_hl_field(MR_mktag(1), dump__Proc_1, (MR_Integer) 1)));
#line 647 "dump.m"
        MR_String dump___DefModule_26 = ((MR_String) (MR_hl_field(MR_mktag(1), dump__Proc_1, (MR_Integer) 2)));
#line 647 "dump.m"
        MR_Integer dump___Arity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), dump__Proc_1, (MR_Integer) 4)));
#line 647 "dump.m"
        MR_Integer dump___Mode_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), dump__Proc_1, (MR_Integer) 5)));

#line 649 "dump.m"
        {
#line 649 "dump.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_43_43, dump__Type_24, &dump__V_37_37);
        }
#line 649 "dump.m"
        {
#line 649 "dump.m"
          dump__V_44_44 = mercury__string__f_43_43_2_f_0(dump__V_37_37, (MR_String) "\'");
        }
#line 649 "dump.m"
        {
#line 649 "dump.m"
          dump__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) " predicate for type \140", dump__V_44_44);
        }
#line 649 "dump.m"
        {
#line 649 "dump.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_43_43, dump__Name_27, &dump__V_47_47);
        }
#line 649 "dump.m"
        {
#line 649 "dump.m"
          return dump__Str_2 = mercury__string__f_43_43_2_f_0(dump__V_47_47, dump__V_46_46);
        }
#line 646 "dump.m"
      }
#line 634 "dump.m"
    return dump__Str_2;
#line 634 "dump.m"
  }
#line 632 "dump.m"
}

#line 616 "dump.m"
static void MR_CALL 
dump__dump_coverage_point_info_4_p_0(
#line 616 "dump.m"
  MR_Integer dump__Num_5,
#line 616 "dump.m"
  MR_Word dump__CoveragePointInfo_6)
#line 616 "dump.m"
{
#line 619 "dump.m"
  {
#line 619 "dump.m"
    MR_bool dump__succeeded;
#line 619 "dump.m"
    MR_String dump__CPInfoStr_8;
#line 619 "dump.m"
    MR_String dump__V_19_19;
#line 619 "dump.m"
    MR_Word dump__RevPath_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CoveragePointInfo_6, (MR_Integer) 0)));
#line 619 "dump.m"
    MR_Word dump__CPType_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CoveragePointInfo_6, (MR_Integer) 1)));
#line 619 "dump.m"
    MR_String dump__PathString_31;
#line 619 "dump.m"
    MR_String dump__V_37_37;
#line 619 "dump.m"
    MR_String dump__V_42_42;
#line 619 "dump.m"
    MR_Word dump__V_48_48;
#line 619 "dump.m"
    MR_String dump__V_50_50;
#line 619 "dump.m"
    MR_String dump__V_51_51;
#line 619 "dump.m"
    MR_String dump__V_58_58;
#line 619 "dump.m"
    MR_String dump__V_60_60;
#line 619 "dump.m"
    MR_String dump__V_61_61;
#line 619 "dump.m"
    MR_String dump__V_68_68;

#line 626 "dump.m"
    {
#line 626 "dump.m"
      dump__PathString_31 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(dump__RevPath_29);
    }
#line 628 "dump.m"
    {
#line 628 "dump.m"
      dump__V_37_37 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0, ((MR_Box) (dump__CPType_30)));
    }
#line 7225 "dump.c"
    dump__V_48_48 = (MR_Word) &dump_scalar_common_5[0];
#line 628 "dump.m"
    {
#line 628 "dump.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_48_48, dump__PathString_31, &dump__V_42_42);
    }
#line 627 "dump.m"
    {
#line 627 "dump.m"
      dump__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) ", ", dump__V_42_42);
    }
#line 628 "dump.m"
    {
#line 628 "dump.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_48_48, dump__V_37_37, &dump__V_51_51);
    }
#line 627 "dump.m"
    {
#line 627 "dump.m"
      dump__V_58_58 = mercury__string__f_43_43_2_f_0(dump__V_51_51, dump__V_50_50);
    }
#line 627 "dump.m"
    {
#line 627 "dump.m"
      dump__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) "]: ", dump__V_58_58);
    }
#line 628 "dump.m"
    {
#line 628 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_48_48, dump__Num_5, &dump__V_61_61);
    }
#line 627 "dump.m"
    {
#line 627 "dump.m"
      dump__V_68_68 = mercury__string__f_43_43_2_f_0(dump__V_61_61, dump__V_60_60);
    }
#line 627 "dump.m"
    {
#line 627 "dump.m"
      dump__CPInfoStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "coverage_point[", dump__V_68_68);
    }
#line 621 "dump.m"
    {
#line 621 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 621 "dump.m"
    {
#line 621 "dump.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_48_48, dump__CPInfoStr_8, &dump__V_19_19);
    }
#line 621 "dump.m"
    {
#line 621 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_19_19);
    }
#line 621 "dump.m"
    {
#line 621 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 621 "dump.m"
      return;
    }
#line 619 "dump.m"
  }
#line 616 "dump.m"
}

#line 606 "dump.m"
static void MR_CALL 
dump__dump_coverage_point_5_p_0(
#line 606 "dump.m"
  MR_Word dump__CoveragePoint_6,
#line 606 "dump.m"
  MR_Integer dump__STATE_VARIABLE_Num_0_14,
#line 606 "dump.m"
  MR_Integer * dump__STATE_VARIABLE_Num_15)
#line 606 "dump.m"
{
#line 609 "dump.m"
  {
#line 609 "dump.m"
    MR_bool dump__succeeded;
#line 609 "dump.m"
    MR_Integer dump__Count_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__CoveragePoint_6, (MR_Integer) 0)));
#line 609 "dump.m"
    MR_String dump__CPInfoStr_13;
#line 609 "dump.m"
    MR_String dump__V_30_30;
#line 609 "dump.m"
    MR_String dump__V_40_40;
#line 609 "dump.m"
    MR_Word dump__RevPath_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CoveragePoint_6, (MR_Integer) 1)));
#line 609 "dump.m"
    MR_Word dump__CPType_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CoveragePoint_6, (MR_Integer) 2)));
#line 609 "dump.m"
    MR_String dump__PathString_52;
#line 609 "dump.m"
    MR_String dump__V_58_58;
#line 609 "dump.m"
    MR_String dump__V_63_63;
#line 609 "dump.m"
    MR_Word dump__V_69_69;
#line 609 "dump.m"
    MR_String dump__V_71_71;
#line 609 "dump.m"
    MR_String dump__V_72_72;
#line 609 "dump.m"
    MR_String dump__V_79_79;
#line 609 "dump.m"
    MR_String dump__V_81_81;
#line 609 "dump.m"
    MR_String dump__V_82_82;
#line 609 "dump.m"
    MR_String dump__V_89_89;

#line 626 "dump.m"
    {
#line 626 "dump.m"
      dump__PathString_52 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(dump__RevPath_50);
    }
#line 628 "dump.m"
    {
#line 628 "dump.m"
      dump__V_58_58 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0, ((MR_Box) (dump__CPType_51)));
    }
#line 7352 "dump.c"
    dump__V_69_69 = (MR_Word) &dump_scalar_common_5[0];
#line 628 "dump.m"
    {
#line 628 "dump.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_69_69, dump__PathString_52, &dump__V_63_63);
    }
#line 627 "dump.m"
    {
#line 627 "dump.m"
      dump__V_71_71 = mercury__string__f_43_43_2_f_0((MR_String) ", ", dump__V_63_63);
    }
#line 628 "dump.m"
    {
#line 628 "dump.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_69_69, dump__V_58_58, &dump__V_72_72);
    }
#line 627 "dump.m"
    {
#line 627 "dump.m"
      dump__V_79_79 = mercury__string__f_43_43_2_f_0(dump__V_72_72, dump__V_71_71);
    }
#line 627 "dump.m"
    {
#line 627 "dump.m"
      dump__V_81_81 = mercury__string__f_43_43_2_f_0((MR_String) "]: ", dump__V_79_79);
    }
#line 628 "dump.m"
    {
#line 628 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_69_69, dump__STATE_VARIABLE_Num_0_14, &dump__V_82_82);
    }
#line 627 "dump.m"
    {
#line 627 "dump.m"
      dump__V_89_89 = mercury__string__f_43_43_2_f_0(dump__V_82_82, dump__V_81_81);
    }
#line 627 "dump.m"
    {
#line 627 "dump.m"
      dump__CPInfoStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "coverage_point[", dump__V_89_89);
    }
#line 613 "dump.m"
    {
#line 613 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 613 "dump.m"
    {
#line 613 "dump.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_69_69, dump__CPInfoStr_13, &dump__V_30_30);
    }
#line 613 "dump.m"
    {
#line 613 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_30_30);
    }
#line 613 "dump.m"
    {
#line 613 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 613 "dump.m"
    {
#line 613 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_69_69, dump__Count_9, &dump__V_40_40);
    }
#line 613 "dump.m"
    {
#line 613 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_40_40);
    }
#line 613 "dump.m"
    {
#line 613 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 614 "dump.m"
    *dump__STATE_VARIABLE_Num_15 = (dump__STATE_VARIABLE_Num_0_14 + (MR_Integer) 1);
#line 609 "dump.m"
  }
#line 606 "dump.m"
}

#line 599 "dump.m"
static void MR_CALL 
dump__dump_proc_static_call_sites_4_p_0(
#line 599 "dump.m"
  MR_Integer dump__Slot_5,
#line 599 "dump.m"
  MR_Word dump__CSSPtr_6)
#line 599 "dump.m"
{
#line 602 "dump.m"
  {
#line 602 "dump.m"
    MR_bool dump__succeeded;
#line 602 "dump.m"
    MR_Integer dump__CSSI_8 = (MR_Integer) dump__CSSPtr_6;
#line 602 "dump.m"
    MR_String dump__V_21_21;
#line 602 "dump.m"
    MR_Word dump__V_27_27;
#line 602 "dump.m"
    MR_String dump__V_31_31;

#line 604 "dump.m"
    {
#line 604 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\tps_site[");
    }
#line 7463 "dump.c"
    dump__V_27_27 = (MR_Word) &dump_scalar_common_5[0];
#line 604 "dump.m"
    {
#line 604 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_27_27, dump__Slot_5, &dump__V_21_21);
    }
#line 604 "dump.m"
    {
#line 604 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_21_21);
    }
#line 604 "dump.m"
    {
#line 604 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "]: css");
    }
#line 604 "dump.m"
    {
#line 604 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_27_27, dump__CSSI_8, &dump__V_31_31);
    }
#line 604 "dump.m"
    {
#line 604 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_31_31);
    }
#line 604 "dump.m"
    {
#line 604 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 604 "dump.m"
      return;
    }
#line 602 "dump.m"
  }
#line 599 "dump.m"
}

#line 586 "dump.m"
static void MR_CALL 
dump__dump_proc_static_5_p_0_3(
#line 586 "dump.m"
  MR_Box dump__closure_arg,
#line 586 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 586 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 586 "dump.m"
  MR_Box * dump__wrapper_arg_3,
#line 586 "dump.m"
  MR_Box dump__wrapper_arg_4,
#line 586 "dump.m"
  MR_Box * dump__wrapper_arg_5)
#line 586 "dump.m"
{
#line 586 "dump.m"
  {
#line 586 "dump.m"
    MR_Box dump__closure = dump__closure_arg;
#line 586 "dump.m"
    MR_Integer dump__conv2_STATE_VARIABLE_Num_15;

#line 586 "dump.m"
    {
#line 586 "dump.m"
      dump__dump_coverage_point_5_p_0(((MR_Word) dump__wrapper_arg_1), ((MR_Integer) dump__wrapper_arg_2), &dump__conv2_STATE_VARIABLE_Num_15);
    }
#line 586 "dump.m"
    *dump__wrapper_arg_3 = ((MR_Box) (dump__conv2_STATE_VARIABLE_Num_15));
#line 586 "dump.m"
  }
#line 586 "dump.m"
}

#line 591 "dump.m"
static void MR_CALL 
dump__dump_proc_static_5_p_0_2(
#line 591 "dump.m"
  MR_Box dump__closure_arg,
#line 591 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 591 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 591 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 591 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 591 "dump.m"
{
#line 591 "dump.m"
  {
#line 591 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 591 "dump.m"
    {
#line 591 "dump.m"
      dump__dump_coverage_point_info_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 591 "dump.m"
      return;
    }
#line 591 "dump.m"
  }
#line 591 "dump.m"
}

#line 581 "dump.m"
static void MR_CALL 
dump__dump_proc_static_5_p_0_1(
#line 581 "dump.m"
  MR_Box dump__closure_arg,
#line 581 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 581 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 581 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 581 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 581 "dump.m"
{
#line 581 "dump.m"
  {
#line 581 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 581 "dump.m"
    {
#line 581 "dump.m"
      dump__dump_proc_static_call_sites_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 581 "dump.m"
      return;
    }
#line 581 "dump.m"
  }
#line 581 "dump.m"
}

#line 531 "dump.m"
static void MR_CALL 
dump__dump_proc_static_5_p_0(
#line 531 "dump.m"
  MR_Word dump__Restriction_6,
#line 531 "dump.m"
  MR_Integer dump__Index_7,
#line 531 "dump.m"
  MR_Word dump__ProcStatic_8)
#line 531 "dump.m"
{
#line 595 "dump.m"
  {
#line 595 "dump.m"
    MR_bool dump__succeeded;

#line 538 "dump.m"
    if ((dump__Restriction_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 537 "dump.m"
      dump__succeeded = MR_TRUE;
#line 538 "dump.m"
    else
#line 539 "dump.m"
      {
#line 539 "dump.m"
        MR_Word dump__UsedProcStatics_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__Restriction_6, (MR_Integer) 0)));
#line 539 "dump.m"
        MR_Word dump__V_31_31 = (MR_Word) dump__Index_7;
#line 539 "dump.m"
        MR_Word dump__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__Restriction_6, (MR_Integer) 1)));

#line 540 "dump.m"
        {
#line 540 "dump.m"
          dump__succeeded = mercury__set__member_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, ((MR_Box) (dump__V_31_31)), dump__UsedProcStatics_10);
        }
#line 539 "dump.m"
      }
#line 595 "dump.m"
    if (dump__succeeded)
#line 546 "dump.m"
      {
#line 546 "dump.m"
        MR_Word dump__TypeCtorInfo_90_90;
#line 546 "dump.m"
        MR_Word dump__Id_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 0)));
#line 546 "dump.m"
        MR_String dump__DeclModule_13 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 1)));
#line 546 "dump.m"
        MR_String dump__QualRefinedId_15 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 3)));
#line 546 "dump.m"
        MR_String dump__RawId_16 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 4)));
#line 546 "dump.m"
        MR_String dump__FileName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 5)));
#line 546 "dump.m"
        MR_Integer dump__LineNumber_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 6)));
#line 546 "dump.m"
        MR_Word dump__InInterface_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 7)));
#line 546 "dump.m"
        MR_ArrayPtr dump__Sites_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 8)));
#line 546 "dump.m"
        MR_ArrayPtr dump__CoveragePointInfos_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 9)));
#line 546 "dump.m"
        MR_Word dump__MaybeCoveragePoints_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 10)));
#line 546 "dump.m"
        MR_Word dump__IsZeroed_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 11)));
#line 546 "dump.m"
        MR_String dump__IdStr_24;
#line 546 "dump.m"
        MR_String dump__IsZeroStr_25;
#line 546 "dump.m"
        MR_String dump__V_108_108;
#line 546 "dump.m"
        MR_Word dump__V_114_114;
#line 546 "dump.m"
        MR_String dump__V_118_118;
#line 546 "dump.m"
        MR_String dump__V_128_128;
#line 546 "dump.m"
        MR_String dump__V_161_161;
#line 546 "dump.m"
        MR_String dump__V_171_171;
#line 546 "dump.m"
        MR_String dump__V_182_182;
#line 543 "dump.m"
        MR_String dump___UnQualRefinedId_14 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 2)));
#line 552 "dump.m"
        MR_String dump__V_48_48;
#line 552 "dump.m"
        MR_String dump__V_104_104;
#line 581 "dump.m"
        MR_Box dump__conv0_STATE_VARIABLE_IO_75_75;

#line 547 "dump.m"
        {
#line 547 "dump.m"
          dump__IdStr_24 = dump__dump_proc_id_1_f_0(dump__Id_12);
        }
#line 548 "dump.m"
        {
#line 548 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "ps");
        }
#line 7705 "dump.c"
        dump__V_114_114 = (MR_Word) &dump_scalar_common_5[0];
#line 548 "dump.m"
        {
#line 548 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_114_114, dump__Index_7, &dump__V_108_108);
        }
#line 548 "dump.m"
        {
#line 548 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_108_108);
        }
#line 548 "dump.m"
        {
#line 548 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) ":\n");
        }
#line 549 "dump.m"
        {
#line 549 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\tps_id\t\t= ");
        }
#line 549 "dump.m"
        {
#line 549 "dump.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_114_114, dump__IdStr_24, &dump__V_118_118);
        }
#line 549 "dump.m"
        {
#line 549 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_118_118);
        }
#line 550 "dump.m"
        {
#line 550 "dump.m"
          mercury__io__nl_2_p_0();
        }
#line 551 "dump.m"
        {
#line 551 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\tps_decl_module\t= ");
        }
#line 551 "dump.m"
        {
#line 551 "dump.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_114_114, dump__DeclModule_13, &dump__V_128_128);
        }
#line 551 "dump.m"
        {
#line 551 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_128_128);
        }
#line 551 "dump.m"
        {
#line 551 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 552 "dump.m"
        {
#line 552 "dump.m"
          dump__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) ".", dump__IdStr_24);
        }
#line 552 "dump.m"
        {
#line 552 "dump.m"
          dump__V_104_104 = mercury__string__f_43_43_2_f_0(dump__DeclModule_13, dump__V_48_48);
        }
#line 552 "dump.m"
        dump__succeeded = (strcmp(dump__QualRefinedId_15, dump__V_104_104) == 0);
#line 556 "dump.m"
        if (dump__succeeded)
#line 556 "dump.m"
          {
#line 556 "dump.m"
          }
#line 556 "dump.m"
        else
#line 557 "dump.m"
          {
#line 557 "dump.m"
            MR_String dump__V_139_139;

#line 557 "dump.m"
            {
#line 557 "dump.m"
              mercury__io__write_string_3_p_0((MR_String) "\tps_q_refined_id\t= ");
            }
#line 557 "dump.m"
            {
#line 557 "dump.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_114_114, dump__QualRefinedId_15, &dump__V_139_139);
            }
#line 557 "dump.m"
            {
#line 557 "dump.m"
              mercury__io__write_string_3_p_0(dump__V_139_139);
            }
#line 557 "dump.m"
            {
#line 557 "dump.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 557 "dump.m"
          }
#line 559 "dump.m"
        dump__succeeded = (strcmp(dump__QualRefinedId_15, dump__RawId_16) == 0);
#line 559 "dump.m"
        dump__succeeded = !(dump__succeeded);
#line 563 "dump.m"
        if (dump__succeeded)
#line 563 "dump.m"
          {
#line 563 "dump.m"
          }
#line 563 "dump.m"
        else
#line 564 "dump.m"
          {
#line 564 "dump.m"
            MR_String dump__V_150_150;

#line 564 "dump.m"
            {
#line 564 "dump.m"
              mercury__io__write_string_3_p_0((MR_String) "\tps_raw_id\t= ");
            }
#line 564 "dump.m"
            {
#line 564 "dump.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_114_114, dump__RawId_16, &dump__V_150_150);
            }
#line 564 "dump.m"
            {
#line 564 "dump.m"
              mercury__io__write_string_3_p_0(dump__V_150_150);
            }
#line 564 "dump.m"
            {
#line 564 "dump.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 564 "dump.m"
          }
#line 566 "dump.m"
        {
#line 566 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\tlocation\t= ");
        }
#line 566 "dump.m"
        {
#line 566 "dump.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_114_114, dump__FileName_17, &dump__V_161_161);
        }
#line 566 "dump.m"
        {
#line 566 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_161_161);
        }
#line 566 "dump.m"
        {
#line 566 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) ":");
        }
#line 566 "dump.m"
        {
#line 566 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_114_114, dump__LineNumber_18, &dump__V_171_171);
        }
#line 566 "dump.m"
        {
#line 566 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_171_171);
        }
#line 566 "dump.m"
        {
#line 566 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 570 "dump.m"
#line 570 "dump.m"
        switch (dump__InInterface_19) {
#line 570 "dump.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 570 "dump.m"
          case (MR_Integer) 0:
#line 571 "dump.m"
            {
#line 571 "dump.m"
            }
#line 570 "dump.m"
            break;
#line 570 "dump.m"
          case (MR_Integer) 1:
#line 568 "dump.m"
            {
#line 569 "dump.m"
              {
#line 569 "dump.m"
                mercury__io__write_string_3_p_0((MR_String) "\tin_interface\n");
              }
#line 568 "dump.m"
            }
#line 570 "dump.m"
            break;
#line 570 "dump.m"
        }
#line 576 "dump.m"
#line 576 "dump.m"
        switch (dump__IsZeroed_23) {
#line 576 "dump.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 576 "dump.m"
          case (MR_Integer) 1:
#line 578 "dump.m"
            dump__IsZeroStr_25 = (MR_String) "not_zeroed";
#line 576 "dump.m"
            break;
#line 576 "dump.m"
          case (MR_Integer) 0:
#line 575 "dump.m"
            dump__IsZeroStr_25 = (MR_String) "zeroed";
#line 576 "dump.m"
            break;
#line 576 "dump.m"
        }
#line 580 "dump.m"
        {
#line 580 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
#line 580 "dump.m"
        {
#line 580 "dump.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_114_114, dump__IsZeroStr_25, &dump__V_182_182);
        }
#line 580 "dump.m"
        {
#line 580 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_182_182);
        }
#line 580 "dump.m"
        {
#line 580 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 7950 "dump.c"
        dump__TypeCtorInfo_90_90 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 581 "dump.m"
        {
#line 581 "dump.m"
          array_util__array_foldl_from_0_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, dump__TypeCtorInfo_90_90, (MR_Word) &dump_scalar_common_2[7], (MR_ArrayPtr) dump__Sites_20, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_75_75);
        }
#line 587 "dump.m"
        if ((dump__MaybeCoveragePoints_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 588 "dump.m"
          {
#line 591 "dump.m"
            MR_Box dump__conv1_STATE_VARIABLE_IO_82_82;

#line 589 "dump.m"
            {
#line 589 "dump.m"
              mercury__io__write_string_3_p_0((MR_String) "\tCoverage counts not present in proc static\n");
            }
#line 591 "dump.m"
            {
#line 591 "dump.m"
              array_util__array_foldl_from_0_4_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, dump__TypeCtorInfo_90_90, (MR_Word) &dump_scalar_common_2[8], (MR_ArrayPtr) dump__CoveragePointInfos_21, ((MR_Box) ((MR_Integer) 0)), &dump__conv1_STATE_VARIABLE_IO_82_82);
            }
#line 588 "dump.m"
          }
#line 587 "dump.m"
        else
#line 583 "dump.m"
          {
#line 583 "dump.m"
            MR_ArrayPtr dump__CoveragePointsArray_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), dump__MaybeCoveragePoints_22, (MR_Integer) 0)));
#line 583 "dump.m"
            MR_Word dump__CoveragePoints_27;
#line 586 "dump.m"
            MR_Integer dump__V_28_28;
#line 586 "dump.m"
            MR_Box dump__conv4_V_28_28;
#line 586 "dump.m"
            MR_Box dump__conv3_STATE_VARIABLE_IO_82_82;

#line 584 "dump.m"
            {
#line 584 "dump.m"
              coverage__coverage_point_arrays_to_list_3_p_0(dump__CoveragePointInfos_21, dump__CoveragePointsArray_26, &dump__CoveragePoints_27);
            }
#line 586 "dump.m"
            {
#line 586 "dump.m"
              mercury__list__foldl2_6_p_2((MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, dump__TypeCtorInfo_90_90, (MR_Word) &dump_scalar_common_2[9], dump__CoveragePoints_27, ((MR_Box) ((MR_Integer) 0)), &dump__conv4_V_28_28, ((MR_Box) ((MR_Integer) 0)), &dump__conv3_STATE_VARIABLE_IO_82_82);
            }
#line 586 "dump.m"
            dump__V_28_28 = ((MR_Integer) dump__conv4_V_28_28);
#line 583 "dump.m"
          }
#line 594 "dump.m"
        {
#line 594 "dump.m"
          mercury__io__nl_2_p_0();
#line 594 "dump.m"
          return;
        }
#line 546 "dump.m"
      }
#line 595 "dump.m"
    else
#line 595 "dump.m"
      {
#line 595 "dump.m"
      }
#line 595 "dump.m"
  }
#line 531 "dump.m"
}

#line 528 "dump.m"
static void MR_CALL 
dump__dump_init_proc_statics_4_p_0_1(
#line 528 "dump.m"
  MR_Box dump__closure_arg,
#line 528 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 528 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 528 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 528 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 528 "dump.m"
{
#line 528 "dump.m"
  {
#line 528 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 528 "dump.m"
    {
#line 528 "dump.m"
      dump__dump_proc_static_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 528 "dump.m"
      return;
    }
#line 528 "dump.m"
  }
#line 528 "dump.m"
}

#line 523 "dump.m"
static void MR_CALL 
dump__dump_init_proc_statics_4_p_0(
#line 523 "dump.m"
  MR_Word dump__Restriction_5,
#line 523 "dump.m"
  MR_ArrayPtr dump__ProcStatics_6)
#line 523 "dump.m"
{
#line 526 "dump.m"
  {
#line 526 "dump.m"
    MR_bool dump__succeeded;
#line 526 "dump.m"
    MR_Word dump__V_12_12;
#line 528 "dump.m"
    MR_Box dump__conv0_STATE_VARIABLE_IO_13_13;

#line 527 "dump.m"
    {
#line 527 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION PROC STATICS:\n\n");
    }
#line 528 "dump.m"
    {
#line 528 "dump.m"
      dump__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 528 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 0) = ((MR_Box) (&dump_scalar_common_8[3]));
#line 528 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 1) = ((MR_Box) (dump__dump_init_proc_statics_4_p_0_1));
#line 528 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 528 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 3) = ((MR_Box) (dump__Restriction_5));
#line 528 "dump.m"
    }
#line 528 "dump.m"
    {
#line 528 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, dump__V_12_12, (MR_ArrayPtr) dump__ProcStatics_6, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_13_13);
    }
#line 529 "dump.m"
    {
#line 529 "dump.m"
      mercury__io__nl_2_p_0();
#line 529 "dump.m"
      return;
    }
#line 526 "dump.m"
  }
#line 523 "dump.m"
}

#line 492 "dump.m"
static void MR_CALL 
dump__dump_call_site_static_5_p_0(
#line 492 "dump.m"
  MR_Word dump__Restriction_6,
#line 492 "dump.m"
  MR_Integer dump__Index_7,
#line 492 "dump.m"
  MR_Word dump__CallSiteStatic_8)
#line 492 "dump.m"
{
#line 517 "dump.m"
  {
#line 517 "dump.m"
    MR_bool dump__succeeded;

#line 499 "dump.m"
    if ((dump__Restriction_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 498 "dump.m"
      dump__succeeded = MR_TRUE;
#line 499 "dump.m"
    else
#line 500 "dump.m"
      {
#line 500 "dump.m"
        MR_Word dump__UsedCallSiteStatics_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__Restriction_6, (MR_Integer) 1)));
#line 500 "dump.m"
        MR_Word dump__V_21_21 = (MR_Word) dump__Index_7;
#line 500 "dump.m"
        MR_Word dump__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__Restriction_6, (MR_Integer) 0)));

#line 501 "dump.m"
        {
#line 501 "dump.m"
          dump__succeeded = mercury__set__member_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, ((MR_Box) (dump__V_21_21)), dump__UsedCallSiteStatics_11);
        }
#line 500 "dump.m"
      }
#line 517 "dump.m"
    if (dump__succeeded)
#line 505 "dump.m"
      {
#line 505 "dump.m"
        MR_Word dump__ContainerPSPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CallSiteStatic_8, (MR_Integer) 0)));
#line 505 "dump.m"
        MR_Integer dump__SlotNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__CallSiteStatic_8, (MR_Integer) 1)));
#line 505 "dump.m"
        MR_Word dump__Kind_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CallSiteStatic_8, (MR_Integer) 2)));
#line 505 "dump.m"
        MR_Integer dump__LineNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__CallSiteStatic_8, (MR_Integer) 3)));
#line 505 "dump.m"
        MR_Word dump__GoalPath_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CallSiteStatic_8, (MR_Integer) 4)));
#line 505 "dump.m"
        MR_Integer dump__ContainerPSI_17 = (MR_Integer) dump__ContainerPSPtr_12;
#line 505 "dump.m"
        MR_String dump__GoalPathString_18;
#line 505 "dump.m"
        MR_String dump__V_56_56;
#line 505 "dump.m"
        MR_Word dump__V_62_62;
#line 505 "dump.m"
        MR_String dump__V_67_67;
#line 505 "dump.m"
        MR_String dump__V_78_78;
#line 505 "dump.m"
        MR_String dump__V_89_89;
#line 505 "dump.m"
        MR_String dump__V_100_100;

#line 507 "dump.m"
        {
#line 507 "dump.m"
          dump__GoalPathString_18 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(dump__GoalPath_16);
        }
#line 508 "dump.m"
        {
#line 508 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "css");
        }
#line 8190 "dump.c"
        dump__V_62_62 = (MR_Word) &dump_scalar_common_5[0];
#line 508 "dump.m"
        {
#line 508 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_62_62, dump__Index_7, &dump__V_56_56);
        }
#line 508 "dump.m"
        {
#line 508 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_56_56);
        }
#line 508 "dump.m"
        {
#line 508 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) ":\n");
        }
#line 509 "dump.m"
        {
#line 509 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\tcss_container\t= ps");
        }
#line 509 "dump.m"
        {
#line 509 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_62_62, dump__ContainerPSI_17, &dump__V_67_67);
        }
#line 509 "dump.m"
        {
#line 509 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_67_67);
        }
#line 509 "dump.m"
        {
#line 509 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 510 "dump.m"
        {
#line 510 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\tcss_slot_num\t= <");
        }
#line 510 "dump.m"
        {
#line 510 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_62_62, dump__SlotNum_13, &dump__V_78_78);
        }
#line 510 "dump.m"
        {
#line 510 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_78_78);
        }
#line 510 "dump.m"
        {
#line 510 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) ">\n");
        }
#line 511 "dump.m"
        {
#line 511 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\tcss_line_num\t= <");
        }
#line 511 "dump.m"
        {
#line 511 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_62_62, dump__LineNum_15, &dump__V_89_89);
        }
#line 511 "dump.m"
        {
#line 511 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_89_89);
        }
#line 511 "dump.m"
        {
#line 511 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) ">\n");
        }
#line 512 "dump.m"
        {
#line 512 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\tcss_goal_path\t= <");
        }
#line 512 "dump.m"
        {
#line 512 "dump.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_62_62, dump__GoalPathString_18, &dump__V_100_100);
        }
#line 512 "dump.m"
        {
#line 512 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_100_100);
        }
#line 512 "dump.m"
        {
#line 512 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) ">\n");
        }
#line 513 "dump.m"
        {
#line 513 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\tcss_kind\t= ");
        }
#line 514 "dump.m"
        {
#line 514 "dump.m"
          dump__dump_call_site_kind_and_callee_3_p_0(dump__Kind_14);
        }
#line 515 "dump.m"
        {
#line 515 "dump.m"
          mercury__io__nl_2_p_0();
        }
#line 516 "dump.m"
        {
#line 516 "dump.m"
          mercury__io__nl_2_p_0();
#line 516 "dump.m"
          return;
        }
#line 505 "dump.m"
      }
#line 517 "dump.m"
    else
#line 517 "dump.m"
      {
#line 517 "dump.m"
      }
#line 517 "dump.m"
  }
#line 492 "dump.m"
}

#line 490 "dump.m"
static void MR_CALL 
dump__dump_init_call_site_statics_4_p_0_1(
#line 490 "dump.m"
  MR_Box dump__closure_arg,
#line 490 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 490 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 490 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 490 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 490 "dump.m"
{
#line 490 "dump.m"
  {
#line 490 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 490 "dump.m"
    {
#line 490 "dump.m"
      dump__dump_call_site_static_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 490 "dump.m"
      return;
    }
#line 490 "dump.m"
  }
#line 490 "dump.m"
}

#line 485 "dump.m"
static void MR_CALL 
dump__dump_init_call_site_statics_4_p_0(
#line 485 "dump.m"
  MR_Word dump__Restriction_5,
#line 485 "dump.m"
  MR_ArrayPtr dump__CallStatics_6)
#line 485 "dump.m"
{
#line 488 "dump.m"
  {
#line 488 "dump.m"
    MR_bool dump__succeeded;
#line 488 "dump.m"
    MR_Word dump__V_12_12;
#line 490 "dump.m"
    MR_Box dump__conv0_STATE_VARIABLE_IO_9;

#line 489 "dump.m"
    {
#line 489 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION CALL SITE STATICS:\n\n");
    }
#line 490 "dump.m"
    {
#line 490 "dump.m"
      dump__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 490 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 0) = ((MR_Box) (&dump_scalar_common_8[2]));
#line 490 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 1) = ((MR_Box) (dump__dump_init_call_site_statics_4_p_0_1));
#line 490 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 490 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 3) = ((MR_Box) (dump__Restriction_5));
#line 490 "dump.m"
    }
#line 490 "dump.m"
    {
#line 490 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, dump__V_12_12, (MR_ArrayPtr) dump__CallStatics_6, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_9);
    }
#line 488 "dump.m"
  }
#line 485 "dump.m"
}

#line 470 "dump.m"
static void MR_CALL 
dump__dump_call_site_array_slot_4_p_0(
#line 470 "dump.m"
  MR_Integer dump__Index_5,
#line 470 "dump.m"
  MR_Word dump__CSA_slot_6)
#line 470 "dump.m"
{
#line 473 "dump.m"
  {
#line 473 "dump.m"
    MR_bool dump__succeeded;
#line 473 "dump.m"
    MR_String dump__V_16_16;
#line 473 "dump.m"
    MR_String dump__V_21_21;
#line 473 "dump.m"
    MR_Word dump__V_27_27;
#line 473 "dump.m"
    MR_String dump__V_31_31;

#line 479 "dump.m"
    if (((MR_tag((MR_Word) dump__CSA_slot_6)) == (MR_mktag((MR_Integer) 1))))
#line 481 "dump.m"
      dump__V_16_16 = (MR_String) "multi";
#line 479 "dump.m"
    else
#line 479 "dump.m"
      {
#line 479 "dump.m"
        MR_Integer dump__CSDI_39;
#line 479 "dump.m"
        MR_Word dump__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CSA_slot_6, (MR_Integer) 0)));
#line 479 "dump.m"
        MR_String dump__V_48_48;
#line 479 "dump.m"
        MR_String dump__V_55_55;

#line 479 "dump.m"
        dump__CSDI_39 = (MR_Integer) dump__V_40_40;
#line 480 "dump.m"
        {
#line 480 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_5[0], dump__CSDI_39, &dump__V_48_48);
        }
#line 480 "dump.m"
        {
#line 480 "dump.m"
          dump__V_55_55 = mercury__string__f_43_43_2_f_0(dump__V_48_48, (MR_String) ")");
        }
#line 480 "dump.m"
        {
#line 480 "dump.m"
          dump__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "normal(csd", dump__V_55_55);
        }
#line 479 "dump.m"
      }
#line 474 "dump.m"
    {
#line 474 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\tpd_site[");
    }
#line 8464 "dump.c"
    dump__V_27_27 = (MR_Word) &dump_scalar_common_5[0];
#line 475 "dump.m"
    {
#line 475 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_27_27, dump__Index_5, &dump__V_21_21);
    }
#line 475 "dump.m"
    {
#line 475 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_21_21);
    }
#line 474 "dump.m"
    {
#line 474 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "] = ");
    }
#line 475 "dump.m"
    {
#line 475 "dump.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_27_27, dump__V_16_16, &dump__V_31_31);
    }
#line 475 "dump.m"
    {
#line 475 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_31_31);
    }
#line 474 "dump.m"
    {
#line 474 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 474 "dump.m"
      return;
    }
#line 473 "dump.m"
  }
#line 470 "dump.m"
}

#line 464 "dump.m"
static void MR_CALL 
dump__dump_proc_dynamic_5_p_0_2(
#line 464 "dump.m"
  MR_Box dump__closure_arg,
#line 464 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 464 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 464 "dump.m"
  MR_Box * dump__wrapper_arg_3,
#line 464 "dump.m"
  MR_Box dump__wrapper_arg_4,
#line 464 "dump.m"
  MR_Box * dump__wrapper_arg_5)
#line 464 "dump.m"
{
#line 464 "dump.m"
  {
#line 464 "dump.m"
    MR_Box dump__closure = dump__closure_arg;
#line 464 "dump.m"
    MR_Integer dump__conv1_STATE_VARIABLE_Num_15;

#line 464 "dump.m"
    {
#line 464 "dump.m"
      dump__dump_coverage_point_5_p_0(((MR_Word) dump__wrapper_arg_1), ((MR_Integer) dump__wrapper_arg_2), &dump__conv1_STATE_VARIABLE_Num_15);
    }
#line 464 "dump.m"
    *dump__wrapper_arg_3 = ((MR_Box) (dump__conv1_STATE_VARIABLE_Num_15));
#line 464 "dump.m"
  }
#line 464 "dump.m"
}

#line 458 "dump.m"
static void MR_CALL 
dump__dump_proc_dynamic_5_p_0_1(
#line 458 "dump.m"
  MR_Box dump__closure_arg,
#line 458 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 458 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 458 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 458 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 458 "dump.m"
{
#line 458 "dump.m"
  {
#line 458 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 458 "dump.m"
    {
#line 458 "dump.m"
      dump__dump_call_site_array_slot_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 458 "dump.m"
      return;
    }
#line 458 "dump.m"
  }
#line 458 "dump.m"
}

#line 443 "dump.m"
static void MR_CALL 
dump__dump_proc_dynamic_5_p_0(
#line 443 "dump.m"
  MR_ArrayPtr dump__ProcStatics_6,
#line 443 "dump.m"
  MR_Integer dump__Index_7,
#line 443 "dump.m"
  MR_Word dump__ProcDynamic_8)
#line 443 "dump.m"
{
#line 446 "dump.m"
  {
#line 446 "dump.m"
    MR_bool dump__succeeded;
#line 446 "dump.m"
    MR_Word dump__TypeCtorInfo_81_81;
#line 446 "dump.m"
    MR_Word dump__PSPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcDynamic_8, (MR_Integer) 0)));
#line 446 "dump.m"
    MR_ArrayPtr dump__Sites_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__ProcDynamic_8, (MR_Integer) 1)));
#line 446 "dump.m"
    MR_Word dump__MaybeCPs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcDynamic_8, (MR_Integer) 2)));
#line 446 "dump.m"
    MR_Integer dump__PSI_13 = (MR_Integer) dump__PSPtr_10;
#line 446 "dump.m"
    MR_Word dump__PS_14;
#line 446 "dump.m"
    MR_String dump__QualRefinedPSId_15;
#line 446 "dump.m"
    MR_String dump__V_92_92;
#line 446 "dump.m"
    MR_Word dump__V_98_98;
#line 446 "dump.m"
    MR_String dump__V_103_103;
#line 446 "dump.m"
    MR_String dump__V_113_113;
#line 450 "dump.m"
    MR_String dump__V_22_22;
#line 450 "dump.m"
    MR_Word dump__V_43_43;
#line 450 "dump.m"
    MR_String dump__V_44_44;
#line 450 "dump.m"
    MR_String dump__V_45_45;
#line 450 "dump.m"
    MR_String dump__V_46_46;
#line 450 "dump.m"
    MR_String dump__V_47_47;
#line 450 "dump.m"
    MR_Integer dump__V_48_48;
#line 450 "dump.m"
    MR_Word dump__V_49_49;
#line 450 "dump.m"
    MR_ArrayPtr dump__V_50_50;
#line 450 "dump.m"
    MR_ArrayPtr dump__V_51_51;
#line 450 "dump.m"
    MR_Word dump__V_52_52;
#line 450 "dump.m"
    MR_Word dump__V_53_53;
#line 458 "dump.m"
    MR_Box dump__conv0_STATE_VARIABLE_IO_36_36;

#line 449 "dump.m"
    {
#line 449 "dump.m"
      profile__lookup_proc_statics_3_p_0(dump__ProcStatics_6, dump__PSPtr_10, &dump__PS_14);
    }
#line 450 "dump.m"
    dump__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 0)));
#line 450 "dump.m"
    dump__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 1)));
#line 450 "dump.m"
    dump__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 2)));
#line 450 "dump.m"
    dump__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 3)));
#line 450 "dump.m"
    dump__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 4)));
#line 450 "dump.m"
    dump__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 5)));
#line 450 "dump.m"
    dump__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 6)));
#line 450 "dump.m"
    dump__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 7)));
#line 450 "dump.m"
    dump__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 8)));
#line 450 "dump.m"
    dump__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 9)));
#line 450 "dump.m"
    dump__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 10)));
#line 450 "dump.m"
    dump__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 11)));
#line 450 "dump.m"
    dump__succeeded = (strcmp(dump__V_22_22, (MR_String) "") == 0);
#line 452 "dump.m"
    if (dump__succeeded)
#line 451 "dump.m"
      dump__QualRefinedPSId_15 = (MR_String) "UNKNOWN_PS";
#line 452 "dump.m"
    else
#line 453 "dump.m"
      {
#line 453 "dump.m"
        MR_Word dump__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 0)));
#line 453 "dump.m"
        MR_String dump__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 1)));
#line 453 "dump.m"
        MR_String dump__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 2)));
#line 453 "dump.m"
        MR_String dump__V_57_57;
#line 453 "dump.m"
        MR_String dump__V_58_58;
#line 453 "dump.m"
        MR_Integer dump__V_59_59;
#line 453 "dump.m"
        MR_Word dump__V_60_60;
#line 453 "dump.m"
        MR_ArrayPtr dump__V_61_61;
#line 453 "dump.m"
        MR_ArrayPtr dump__V_62_62;
#line 453 "dump.m"
        MR_Word dump__V_63_63;
#line 453 "dump.m"
        MR_Word dump__V_64_64;

#line 453 "dump.m"
        dump__QualRefinedPSId_15 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 3)));
#line 453 "dump.m"
        dump__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 4)));
#line 453 "dump.m"
        dump__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 5)));
#line 453 "dump.m"
        dump__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 6)));
#line 453 "dump.m"
        dump__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 7)));
#line 453 "dump.m"
        dump__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 8)));
#line 453 "dump.m"
        dump__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 9)));
#line 453 "dump.m"
        dump__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 10)));
#line 453 "dump.m"
        dump__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 11)));
#line 453 "dump.m"
      }
#line 455 "dump.m"
    {
#line 455 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "pd");
    }
#line 8722 "dump.c"
    dump__V_98_98 = (MR_Word) &dump_scalar_common_5[0];
#line 455 "dump.m"
    {
#line 455 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_98_98, dump__Index_7, &dump__V_92_92);
    }
#line 455 "dump.m"
    {
#line 455 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_92_92);
    }
#line 455 "dump.m"
    {
#line 455 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
#line 456 "dump.m"
    {
#line 456 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\tpd_proc_static = ");
    }
#line 457 "dump.m"
    {
#line 457 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_98_98, dump__PSI_13, &dump__V_103_103);
    }
#line 457 "dump.m"
    {
#line 457 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_103_103);
    }
#line 456 "dump.m"
    {
#line 456 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) " (");
    }
#line 457 "dump.m"
    {
#line 457 "dump.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_98_98, dump__QualRefinedPSId_15, &dump__V_113_113);
    }
#line 457 "dump.m"
    {
#line 457 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_113_113);
    }
#line 456 "dump.m"
    {
#line 456 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
    }
#line 8774 "dump.c"
    dump__TypeCtorInfo_81_81 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 458 "dump.m"
    {
#line 458 "dump.m"
      array_util__array_foldl_from_0_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, dump__TypeCtorInfo_81_81, (MR_Word) &dump_scalar_common_2[5], (MR_ArrayPtr) dump__Sites_11, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_36_36);
    }
#line 465 "dump.m"
    if ((dump__MaybeCPs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 466 "dump.m"
      {
#line 466 "dump.m"
      }
#line 465 "dump.m"
    else
#line 460 "dump.m"
      {
#line 460 "dump.m"
        MR_ArrayPtr dump__CPCounts_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), dump__MaybeCPs_12, (MR_Integer) 0)));
#line 460 "dump.m"
        MR_ArrayPtr dump__CPInfos_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 9)));
#line 460 "dump.m"
        MR_Word dump__CPs_18;
#line 461 "dump.m"
        MR_Word dump__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 0)));
#line 461 "dump.m"
        MR_String dump__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 1)));
#line 461 "dump.m"
        MR_String dump__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 2)));
#line 461 "dump.m"
        MR_String dump__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 3)));
#line 461 "dump.m"
        MR_String dump__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 4)));
#line 461 "dump.m"
        MR_String dump__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 5)));
#line 461 "dump.m"
        MR_Integer dump__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 6)));
#line 461 "dump.m"
        MR_Word dump__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 7)));
#line 461 "dump.m"
        MR_ArrayPtr dump__V_73_73 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 8)));
#line 461 "dump.m"
        MR_Word dump__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 10)));
#line 461 "dump.m"
        MR_Word dump__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 11)));
#line 464 "dump.m"
        MR_Integer dump__V_19_19;
#line 464 "dump.m"
        MR_Box dump__conv3_V_19_19;
#line 464 "dump.m"
        MR_Box dump__conv2_STATE_VARIABLE_IO_41_41;

#line 462 "dump.m"
        {
#line 462 "dump.m"
          coverage__coverage_point_arrays_to_list_3_p_0(dump__CPInfos_17, dump__CPCounts_16, &dump__CPs_18);
        }
#line 463 "dump.m"
        {
#line 463 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "Coverage points:\n");
        }
#line 464 "dump.m"
        {
#line 464 "dump.m"
          mercury__list__foldl2_6_p_2((MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, dump__TypeCtorInfo_81_81, (MR_Word) &dump_scalar_common_2[6], dump__CPs_18, ((MR_Box) ((MR_Integer) 0)), &dump__conv3_V_19_19, ((MR_Box) ((MR_Integer) 0)), &dump__conv2_STATE_VARIABLE_IO_41_41);
        }
#line 464 "dump.m"
        dump__V_19_19 = ((MR_Integer) dump__conv3_V_19_19);
#line 460 "dump.m"
      }
#line 468 "dump.m"
    {
#line 468 "dump.m"
      mercury__io__nl_2_p_0();
#line 468 "dump.m"
      return;
    }
#line 446 "dump.m"
  }
#line 443 "dump.m"
}

#line 441 "dump.m"
static void MR_CALL 
dump__dump_init_proc_dynamics_4_p_0_1(
#line 441 "dump.m"
  MR_Box dump__closure_arg,
#line 441 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 441 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 441 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 441 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 441 "dump.m"
{
#line 441 "dump.m"
  {
#line 441 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 441 "dump.m"
    {
#line 441 "dump.m"
      dump__dump_proc_dynamic_5_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 441 "dump.m"
      return;
    }
#line 441 "dump.m"
  }
#line 441 "dump.m"
}

#line 436 "dump.m"
static void MR_CALL 
dump__dump_init_proc_dynamics_4_p_0(
#line 436 "dump.m"
  MR_ArrayPtr dump__ProcDynamics_5,
#line 436 "dump.m"
  MR_ArrayPtr dump__ProcStatics_6)
#line 436 "dump.m"
{
#line 439 "dump.m"
  {
#line 439 "dump.m"
    MR_bool dump__succeeded;
#line 439 "dump.m"
    MR_Word dump__V_12_12;
#line 441 "dump.m"
    MR_Box dump__conv0_STATE_VARIABLE_IO_9;

#line 440 "dump.m"
    {
#line 440 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION PROC DYNAMICS:\n\n");
    }
#line 441 "dump.m"
    {
#line 441 "dump.m"
      dump__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 441 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 0) = ((MR_Box) (&dump_scalar_common_8[0]));
#line 441 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 1) = ((MR_Box) (dump__dump_init_proc_dynamics_4_p_0_1));
#line 441 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 441 "dump.m"
      MR_hl_field(MR_mktag(0), dump__V_12_12, 3) = ((MR_Box) (dump__ProcStatics_6));
#line 441 "dump.m"
    }
#line 441 "dump.m"
    {
#line 441 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, dump__V_12_12, (MR_ArrayPtr) dump__ProcDynamics_5, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_9);
    }
#line 439 "dump.m"
  }
#line 436 "dump.m"
}

#line 406 "dump.m"
static void MR_CALL 
dump__dump_inherit_prof_info_3_p_0(
#line 406 "dump.m"
  MR_Word dump__Inherit_4)
#line 406 "dump.m"
{
#line 408 "dump.m"
  {
#line 408 "dump.m"
    MR_bool dump__succeeded;
#line 408 "dump.m"
    MR_Integer dump__Quanta_6;
#line 408 "dump.m"
    MR_Integer dump__CallSeqs_7;
#line 408 "dump.m"
    MR_Integer dump__Allocs_8;
#line 408 "dump.m"
    MR_Integer dump__Words_9;

#line 409 "dump.m"
    {
#line 409 "dump.m"
      dump__Quanta_6 = measurements__inherit_quanta_1_f_0(dump__Inherit_4);
    }
#line 410 "dump.m"
    {
#line 410 "dump.m"
      dump__CallSeqs_7 = measurements__inherit_callseqs_1_f_0(dump__Inherit_4);
    }
#line 411 "dump.m"
    {
#line 411 "dump.m"
      dump__Allocs_8 = measurements__inherit_allocs_1_f_0(dump__Inherit_4);
    }
#line 412 "dump.m"
    {
#line 412 "dump.m"
      dump__Words_9 = measurements__inherit_words_1_f_0(dump__Inherit_4);
    }
#line 413 "dump.m"
    dump__succeeded = (dump__Quanta_6 == (MR_Integer) 0);
#line 415 "dump.m"
    if (dump__succeeded)
#line 415 "dump.m"
      {
#line 415 "dump.m"
      }
#line 415 "dump.m"
    else
#line 416 "dump.m"
      {
#line 416 "dump.m"
        MR_String dump__V_35_35;

#line 416 "dump.m"
        {
#line 416 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\tquanta:\t\t");
        }
#line 416 "dump.m"
        {
#line 416 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_5[0], dump__Quanta_6, &dump__V_35_35);
        }
#line 416 "dump.m"
        {
#line 416 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_35_35);
        }
#line 416 "dump.m"
        {
#line 416 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 416 "dump.m"
      }
#line 418 "dump.m"
    dump__succeeded = (dump__CallSeqs_7 == (MR_Integer) 0);
#line 420 "dump.m"
    if (dump__succeeded)
#line 420 "dump.m"
      {
#line 420 "dump.m"
      }
#line 420 "dump.m"
    else
#line 421 "dump.m"
      {
#line 421 "dump.m"
        MR_String dump__V_46_46;

#line 421 "dump.m"
        {
#line 421 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\tcallseqs:\t");
        }
#line 421 "dump.m"
        {
#line 421 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_5[0], dump__CallSeqs_7, &dump__V_46_46);
        }
#line 421 "dump.m"
        {
#line 421 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_46_46);
        }
#line 421 "dump.m"
        {
#line 421 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 421 "dump.m"
      }
#line 423 "dump.m"
    dump__succeeded = (dump__Allocs_8 == (MR_Integer) 0);
#line 425 "dump.m"
    if (dump__succeeded)
#line 425 "dump.m"
      {
#line 425 "dump.m"
      }
#line 425 "dump.m"
    else
#line 426 "dump.m"
      {
#line 426 "dump.m"
        MR_String dump__V_57_57;

#line 426 "dump.m"
        {
#line 426 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\tallocs:\t\t");
        }
#line 426 "dump.m"
        {
#line 426 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_5[0], dump__Allocs_8, &dump__V_57_57);
        }
#line 426 "dump.m"
        {
#line 426 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_57_57);
        }
#line 426 "dump.m"
        {
#line 426 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 426 "dump.m"
      }
#line 428 "dump.m"
    dump__succeeded = (dump__Words_9 == (MR_Integer) 0);
#line 430 "dump.m"
    if (dump__succeeded)
#line 430 "dump.m"
      {
#line 430 "dump.m"
      }
#line 430 "dump.m"
    else
#line 431 "dump.m"
      {
#line 431 "dump.m"
        MR_String dump__V_68_68;

#line 431 "dump.m"
        {
#line 431 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\twords:\t\t");
        }
#line 431 "dump.m"
        {
#line 431 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_5[0], dump__Words_9, &dump__V_68_68);
        }
#line 431 "dump.m"
        {
#line 431 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_68_68);
        }
#line 431 "dump.m"
        {
#line 431 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 431 "dump.m"
          return;
        }
#line 431 "dump.m"
      }
#line 408 "dump.m"
  }
#line 406 "dump.m"
}

#line 355 "dump.m"
static void MR_CALL 
dump__dump_own_prof_info_3_p_0(
#line 355 "dump.m"
  MR_Word dump__Own_4)
#line 355 "dump.m"
{
#line 357 "dump.m"
  {
#line 357 "dump.m"
    MR_bool dump__succeeded;
#line 357 "dump.m"
    MR_Integer dump__Calls_6;
#line 357 "dump.m"
    MR_Integer dump__Exits_7;
#line 357 "dump.m"
    MR_Integer dump__Fails_8;
#line 357 "dump.m"
    MR_Integer dump__Redos_9;
#line 357 "dump.m"
    MR_Integer dump__Excps_10;
#line 357 "dump.m"
    MR_Integer dump__Quanta_11;
#line 357 "dump.m"
    MR_Integer dump__CallSeqs_12;
#line 357 "dump.m"
    MR_Integer dump__Allocs_13;
#line 357 "dump.m"
    MR_Integer dump__Words_14;

#line 358 "dump.m"
    {
#line 358 "dump.m"
      measurements__decompress_profile_10_p_0(dump__Own_4, &dump__Calls_6, &dump__Exits_7, &dump__Fails_8, &dump__Redos_9, &dump__Excps_10, &dump__Quanta_11, &dump__CallSeqs_12, &dump__Allocs_13, &dump__Words_14);
    }
#line 360 "dump.m"
    dump__succeeded = (dump__Calls_6 == (MR_Integer) 0);
#line 362 "dump.m"
    if (dump__succeeded)
#line 362 "dump.m"
      {
#line 362 "dump.m"
      }
#line 362 "dump.m"
    else
#line 363 "dump.m"
      {
#line 363 "dump.m"
        MR_String dump__V_65_65;

#line 363 "dump.m"
        {
#line 363 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\tcalls:\t\t");
        }
#line 363 "dump.m"
        {
#line 363 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_5[0], dump__Calls_6, &dump__V_65_65);
        }
#line 363 "dump.m"
        {
#line 363 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_65_65);
        }
#line 363 "dump.m"
        {
#line 363 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 363 "dump.m"
      }
#line 365 "dump.m"
    dump__succeeded = (dump__Exits_7 == (MR_Integer) 0);
#line 367 "dump.m"
    if (dump__succeeded)
#line 367 "dump.m"
      {
#line 367 "dump.m"
      }
#line 367 "dump.m"
    else
#line 368 "dump.m"
      {
#line 368 "dump.m"
        MR_String dump__V_76_76;

#line 368 "dump.m"
        {
#line 368 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\texits:\t\t");
        }
#line 368 "dump.m"
        {
#line 368 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_5[0], dump__Exits_7, &dump__V_76_76);
        }
#line 368 "dump.m"
        {
#line 368 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_76_76);
        }
#line 368 "dump.m"
        {
#line 368 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 368 "dump.m"
      }
#line 370 "dump.m"
    dump__succeeded = (dump__Fails_8 == (MR_Integer) 0);
#line 372 "dump.m"
    if (dump__succeeded)
#line 372 "dump.m"
      {
#line 372 "dump.m"
      }
#line 372 "dump.m"
    else
#line 373 "dump.m"
      {
#line 373 "dump.m"
        MR_String dump__V_87_87;

#line 373 "dump.m"
        {
#line 373 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\tfails:\t\t");
        }
#line 373 "dump.m"
        {
#line 373 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_5[0], dump__Fails_8, &dump__V_87_87);
        }
#line 373 "dump.m"
        {
#line 373 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_87_87);
        }
#line 373 "dump.m"
        {
#line 373 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 373 "dump.m"
      }
#line 375 "dump.m"
    dump__succeeded = (dump__Redos_9 == (MR_Integer) 0);
#line 377 "dump.m"
    if (dump__succeeded)
#line 377 "dump.m"
      {
#line 377 "dump.m"
      }
#line 377 "dump.m"
    else
#line 378 "dump.m"
      {
#line 378 "dump.m"
        MR_String dump__V_98_98;

#line 378 "dump.m"
        {
#line 378 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\tredos:\t\t");
        }
#line 378 "dump.m"
        {
#line 378 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_5[0], dump__Redos_9, &dump__V_98_98);
        }
#line 378 "dump.m"
        {
#line 378 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_98_98);
        }
#line 378 "dump.m"
        {
#line 378 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 378 "dump.m"
      }
#line 380 "dump.m"
    dump__succeeded = (dump__Excps_10 == (MR_Integer) 0);
#line 382 "dump.m"
    if (dump__succeeded)
#line 382 "dump.m"
      {
#line 382 "dump.m"
      }
#line 382 "dump.m"
    else
#line 383 "dump.m"
      {
#line 383 "dump.m"
        MR_String dump__V_109_109;

#line 383 "dump.m"
        {
#line 383 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\texcps:\t\t");
        }
#line 383 "dump.m"
        {
#line 383 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_5[0], dump__Excps_10, &dump__V_109_109);
        }
#line 383 "dump.m"
        {
#line 383 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_109_109);
        }
#line 383 "dump.m"
        {
#line 383 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 383 "dump.m"
      }
#line 385 "dump.m"
    dump__succeeded = (dump__Quanta_11 == (MR_Integer) 0);
#line 387 "dump.m"
    if (dump__succeeded)
#line 387 "dump.m"
      {
#line 387 "dump.m"
      }
#line 387 "dump.m"
    else
#line 388 "dump.m"
      {
#line 388 "dump.m"
        MR_String dump__V_120_120;

#line 388 "dump.m"
        {
#line 388 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\tquanta:\t\t");
        }
#line 388 "dump.m"
        {
#line 388 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_5[0], dump__Quanta_11, &dump__V_120_120);
        }
#line 388 "dump.m"
        {
#line 388 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_120_120);
        }
#line 388 "dump.m"
        {
#line 388 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 388 "dump.m"
      }
#line 390 "dump.m"
    dump__succeeded = (dump__CallSeqs_12 == (MR_Integer) 0);
#line 392 "dump.m"
    if (dump__succeeded)
#line 392 "dump.m"
      {
#line 392 "dump.m"
      }
#line 392 "dump.m"
    else
#line 393 "dump.m"
      {
#line 393 "dump.m"
        MR_String dump__V_131_131;

#line 393 "dump.m"
        {
#line 393 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\tcallseqs:\t");
        }
#line 393 "dump.m"
        {
#line 393 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_5[0], dump__CallSeqs_12, &dump__V_131_131);
        }
#line 393 "dump.m"
        {
#line 393 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_131_131);
        }
#line 393 "dump.m"
        {
#line 393 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 393 "dump.m"
      }
#line 395 "dump.m"
    dump__succeeded = (dump__Allocs_13 == (MR_Integer) 0);
#line 397 "dump.m"
    if (dump__succeeded)
#line 397 "dump.m"
      {
#line 397 "dump.m"
      }
#line 397 "dump.m"
    else
#line 398 "dump.m"
      {
#line 398 "dump.m"
        MR_String dump__V_142_142;

#line 398 "dump.m"
        {
#line 398 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\tallocs:\t\t");
        }
#line 398 "dump.m"
        {
#line 398 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_5[0], dump__Allocs_13, &dump__V_142_142);
        }
#line 398 "dump.m"
        {
#line 398 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_142_142);
        }
#line 398 "dump.m"
        {
#line 398 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 398 "dump.m"
      }
#line 400 "dump.m"
    dump__succeeded = (dump__Words_14 == (MR_Integer) 0);
#line 402 "dump.m"
    if (dump__succeeded)
#line 402 "dump.m"
      {
#line 402 "dump.m"
      }
#line 402 "dump.m"
    else
#line 403 "dump.m"
      {
#line 403 "dump.m"
        MR_String dump__V_153_153;

#line 403 "dump.m"
        {
#line 403 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\twords:\t\t");
        }
#line 403 "dump.m"
        {
#line 403 "dump.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_5[0], dump__Words_14, &dump__V_153_153);
        }
#line 403 "dump.m"
        {
#line 403 "dump.m"
          mercury__io__write_string_3_p_0(dump__V_153_153);
        }
#line 403 "dump.m"
        {
#line 403 "dump.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 403 "dump.m"
          return;
        }
#line 403 "dump.m"
      }
#line 357 "dump.m"
  }
#line 355 "dump.m"
}

#line 342 "dump.m"
static void MR_CALL 
dump__dump_call_site_dynamic_4_p_0(
#line 342 "dump.m"
  MR_Integer dump__Index_5,
#line 342 "dump.m"
  MR_Word dump__CallSiteDynamic_6)
#line 342 "dump.m"
{
#line 345 "dump.m"
  {
#line 345 "dump.m"
    MR_bool dump__succeeded;
#line 345 "dump.m"
    MR_Word dump__CallerPDPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CallSiteDynamic_6, (MR_Integer) 0)));
#line 345 "dump.m"
    MR_Word dump__CalleePDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CallSiteDynamic_6, (MR_Integer) 1)));
#line 345 "dump.m"
    MR_Word dump__Own_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CallSiteDynamic_6, (MR_Integer) 2)));
#line 345 "dump.m"
    MR_Integer dump__CallerPDI_11 = (MR_Integer) dump__CallerPDPtr_8;
#line 345 "dump.m"
    MR_Integer dump__CalleePDI_12 = (MR_Integer) dump__CalleePDPtr_9;
#line 345 "dump.m"
    MR_String dump__V_35_35;
#line 345 "dump.m"
    MR_Word dump__V_41_41;
#line 345 "dump.m"
    MR_String dump__V_46_46;
#line 345 "dump.m"
    MR_String dump__V_57_57;

#line 349 "dump.m"
    {
#line 349 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "csd");
    }
#line 9543 "dump.c"
    dump__V_41_41 = (MR_Word) &dump_scalar_common_5[0];
#line 349 "dump.m"
    {
#line 349 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_41_41, dump__Index_5, &dump__V_35_35);
    }
#line 349 "dump.m"
    {
#line 349 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_35_35);
    }
#line 349 "dump.m"
    {
#line 349 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
#line 350 "dump.m"
    {
#line 350 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\tcsd_caller = pd");
    }
#line 350 "dump.m"
    {
#line 350 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_41_41, dump__CallerPDI_11, &dump__V_46_46);
    }
#line 350 "dump.m"
    {
#line 350 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_46_46);
    }
#line 350 "dump.m"
    {
#line 350 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 351 "dump.m"
    {
#line 351 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\tcsd_callee = pd");
    }
#line 351 "dump.m"
    {
#line 351 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_41_41, dump__CalleePDI_12, &dump__V_57_57);
    }
#line 351 "dump.m"
    {
#line 351 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_57_57);
    }
#line 351 "dump.m"
    {
#line 351 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 352 "dump.m"
    {
#line 352 "dump.m"
      dump__dump_own_prof_info_3_p_0(dump__Own_10);
    }
#line 353 "dump.m"
    {
#line 353 "dump.m"
      mercury__io__nl_2_p_0();
#line 353 "dump.m"
      return;
    }
#line 345 "dump.m"
  }
#line 342 "dump.m"
}

#line 340 "dump.m"
static void MR_CALL 
dump__dump_init_call_site_dynamics_3_p_0_1(
#line 340 "dump.m"
  MR_Box dump__closure_arg,
#line 340 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 340 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 340 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 340 "dump.m"
  MR_Box * dump__wrapper_arg_4)
#line 340 "dump.m"
{
#line 340 "dump.m"
  {
#line 340 "dump.m"
    MR_Box dump__closure = dump__closure_arg;

#line 340 "dump.m"
    {
#line 340 "dump.m"
      dump__dump_call_site_dynamic_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
#line 340 "dump.m"
      return;
    }
#line 340 "dump.m"
  }
#line 340 "dump.m"
}

#line 335 "dump.m"
static void MR_CALL 
dump__dump_init_call_site_dynamics_3_p_0(
#line 335 "dump.m"
  MR_ArrayPtr dump__CallSiteDynamics_4)
#line 335 "dump.m"
{
#line 338 "dump.m"
  {
#line 338 "dump.m"
    MR_bool dump__succeeded;
#line 340 "dump.m"
    MR_Box dump__conv0_STATE_VARIABLE_IO_7;

#line 339 "dump.m"
    {
#line 339 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION CALL SITE DYNAMICS:\n\n");
    }
#line 340 "dump.m"
    {
#line 340 "dump.m"
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &dump_scalar_common_2[4], (MR_ArrayPtr) dump__CallSiteDynamics_4, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_7);
    }
#line 338 "dump.m"
  }
#line 335 "dump.m"
}

#line 290 "dump.m"
static void MR_CALL 
dump__dump_init_profile_stats_3_p_0(
#line 290 "dump.m"
  MR_Word dump__Stats_4)
#line 290 "dump.m"
{
#line 292 "dump.m"
  {
#line 292 "dump.m"
    MR_bool dump__succeeded;
#line 292 "dump.m"
    MR_String dump__ProgramName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 0)));
#line 292 "dump.m"
    MR_Integer dump__MaxCSD_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 1)));
#line 292 "dump.m"
    MR_Integer dump__MaxCSS_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 2)));
#line 292 "dump.m"
    MR_Integer dump__MaxPD_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 3)));
#line 292 "dump.m"
    MR_Integer dump__MaxPS_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 4)));
#line 292 "dump.m"
    MR_Integer dump__TicksPerSec_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 5)));
#line 292 "dump.m"
    MR_Integer dump__InstrumentQuanta_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 6)));
#line 292 "dump.m"
    MR_Integer dump__UserQuanta_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 7)));
#line 292 "dump.m"
    MR_Integer dump__NumCallSeqs_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 8)));
#line 292 "dump.m"
    MR_Word dump__DeepFlags_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 9)));
#line 292 "dump.m"
    MR_Integer dump__WordSize_16;
#line 292 "dump.m"
    MR_Word dump__Canonical_17;
#line 292 "dump.m"
    MR_Word dump__CoverageDataType_19;
#line 292 "dump.m"
    MR_String dump__V_24_24;
#line 292 "dump.m"
    MR_String dump__V_27_27;
#line 292 "dump.m"
    MR_String dump__V_88_88;
#line 292 "dump.m"
    MR_String dump__V_95_95;
#line 292 "dump.m"
    MR_Word dump__V_101_101;
#line 292 "dump.m"
    MR_String dump__V_106_106;
#line 292 "dump.m"
    MR_String dump__V_117_117;
#line 292 "dump.m"
    MR_String dump__V_128_128;
#line 292 "dump.m"
    MR_String dump__V_139_139;
#line 292 "dump.m"
    MR_String dump__V_150_150;
#line 292 "dump.m"
    MR_String dump__V_161_161;
#line 292 "dump.m"
    MR_String dump__V_172_172;
#line 292 "dump.m"
    MR_String dump__V_183_183;
#line 292 "dump.m"
    MR_String dump__V_194_194;

#line 295 "dump.m"
    {
#line 295 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "SECTION PROFILING STATS:\n\n");
    }
#line 296 "dump.m"
    {
#line 296 "dump.m"
      dump__V_27_27 = mercury__string__f_43_43_2_f_0(dump__ProgramName_6, (MR_String) "\n");
    }
#line 296 "dump.m"
    {
#line 296 "dump.m"
      dump__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "\tprogram_name = ", dump__V_27_27);
    }
#line 296 "dump.m"
    {
#line 296 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_24_24);
    }
#line 297 "dump.m"
    {
#line 297 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\tmax_csd = ");
    }
#line 9769 "dump.c"
    dump__V_101_101 = (MR_Word) &dump_scalar_common_5[0];
#line 297 "dump.m"
    {
#line 297 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_101_101, dump__MaxCSD_7, &dump__V_95_95);
    }
#line 297 "dump.m"
    {
#line 297 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_95_95);
    }
#line 297 "dump.m"
    {
#line 297 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 298 "dump.m"
    {
#line 298 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\tmax_css = ");
    }
#line 298 "dump.m"
    {
#line 298 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_101_101, dump__MaxCSS_8, &dump__V_106_106);
    }
#line 298 "dump.m"
    {
#line 298 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_106_106);
    }
#line 298 "dump.m"
    {
#line 298 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 299 "dump.m"
    {
#line 299 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\tmax_pd  = ");
    }
#line 299 "dump.m"
    {
#line 299 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_101_101, dump__MaxPD_9, &dump__V_117_117);
    }
#line 299 "dump.m"
    {
#line 299 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_117_117);
    }
#line 299 "dump.m"
    {
#line 299 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 300 "dump.m"
    {
#line 300 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\tmax_ps  = ");
    }
#line 300 "dump.m"
    {
#line 300 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_101_101, dump__MaxPS_10, &dump__V_128_128);
    }
#line 300 "dump.m"
    {
#line 300 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_128_128);
    }
#line 300 "dump.m"
    {
#line 300 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 301 "dump.m"
    {
#line 301 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\tticks_per_sec = ");
    }
#line 301 "dump.m"
    {
#line 301 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_101_101, dump__TicksPerSec_11, &dump__V_139_139);
    }
#line 301 "dump.m"
    {
#line 301 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_139_139);
    }
#line 301 "dump.m"
    {
#line 301 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 302 "dump.m"
    {
#line 302 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\tinstrument_quanta = ");
    }
#line 302 "dump.m"
    {
#line 302 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_101_101, dump__InstrumentQuanta_12, &dump__V_150_150);
    }
#line 302 "dump.m"
    {
#line 302 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_150_150);
    }
#line 302 "dump.m"
    {
#line 302 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 303 "dump.m"
    {
#line 303 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\tuser_quanta = ");
    }
#line 303 "dump.m"
    {
#line 303 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_101_101, dump__UserQuanta_13, &dump__V_161_161);
    }
#line 303 "dump.m"
    {
#line 303 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_161_161);
    }
#line 303 "dump.m"
    {
#line 303 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 304 "dump.m"
    {
#line 304 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\tnum_callseqs = ");
    }
#line 304 "dump.m"
    {
#line 304 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_101_101, dump__NumCallSeqs_14, &dump__V_172_172);
    }
#line 304 "dump.m"
    {
#line 304 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_172_172);
    }
#line 304 "dump.m"
    {
#line 304 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 305 "dump.m"
    dump__WordSize_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__DeepFlags_15, (MR_Integer) 0)));
#line 305 "dump.m"
    dump__Canonical_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DeepFlags_15, (MR_Integer) 1)));
#line 305 "dump.m"
    dump__CoverageDataType_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DeepFlags_15, (MR_Integer) 3)));
#line 306 "dump.m"
    {
#line 306 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\tword_size   = ");
    }
#line 306 "dump.m"
    {
#line 306 "dump.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__V_101_101, dump__WordSize_16, &dump__V_183_183);
    }
#line 306 "dump.m"
    {
#line 306 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_183_183);
    }
#line 306 "dump.m"
    {
#line 306 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 307 "dump.m"
    {
#line 307 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\tcanonical = ");
    }
#line 311 "dump.m"
#line 311 "dump.m"
    switch (dump__Canonical_17) {
#line 311 "dump.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 311 "dump.m"
      case (MR_Integer) 0:
#line 309 "dump.m"
        {
#line 310 "dump.m"
          {
#line 310 "dump.m"
            mercury__io__write_string_3_p_0((MR_String) "yes\n");
          }
#line 309 "dump.m"
        }
#line 311 "dump.m"
        break;
#line 311 "dump.m"
      case (MR_Integer) 1:
#line 312 "dump.m"
        {
#line 313 "dump.m"
          {
#line 313 "dump.m"
            mercury__io__write_string_3_p_0((MR_String) "no\n");
          }
#line 312 "dump.m"
        }
#line 311 "dump.m"
        break;
#line 311 "dump.m"
    }
#line 315 "dump.m"
    {
#line 315 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\tcompression = ");
    }
#line 318 "dump.m"
    {
#line 318 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "none\n");
    }
#line 320 "dump.m"
    {
#line 320 "dump.m"
      dump__V_88_88 = mercury__string__string_1_f_0((MR_Word) &profile__profile__type_ctor_info_coverage_data_type_0, ((MR_Box) (dump__CoverageDataType_19)));
    }
#line 320 "dump.m"
    {
#line 320 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\tcoverage_data_type = ");
    }
#line 320 "dump.m"
    {
#line 320 "dump.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(dump__V_101_101, dump__V_88_88, &dump__V_194_194);
    }
#line 320 "dump.m"
    {
#line 320 "dump.m"
      mercury__io__write_string_3_p_0(dump__V_194_194);
    }
#line 320 "dump.m"
    {
#line 320 "dump.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 322 "dump.m"
    {
#line 322 "dump.m"
      mercury__io__nl_2_p_0();
#line 322 "dump.m"
      return;
    }
#line 292 "dump.m"
  }
#line 290 "dump.m"
}

#line 273 "dump.m"
static void MR_CALL 
dump__get_static_ptrs_from_dynamic_proc_7_p_0(
#line 273 "dump.m"
  MR_ArrayPtr dump__ProcStatics_8,
#line 273 "dump.m"
  MR_Integer dump__HeadVar__2_9,
#line 273 "dump.m"
  MR_Word dump__ProcDynamic_10,
#line 273 "dump.m"
  MR_Word dump__STATE_VARIABLE_PS_Ptrs_0_16,
#line 273 "dump.m"
  MR_Word * dump__STATE_VARIABLE_PS_Ptrs_17,
#line 273 "dump.m"
  MR_Word dump__STATE_VARIABLE_CSS_Ptrs_0_18,
#line 273 "dump.m"
  MR_Word * dump__STATE_VARIABLE_CSS_Ptrs_19)
#line 273 "dump.m"
{
#line 278 "dump.m"
  {
#line 278 "dump.m"
    MR_bool dump__succeeded;

#line 278 "dump.m"
    {
#line 278 "dump.m"
      dump__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(dump__ProcStatics_8, dump__ProcDynamic_10, dump__STATE_VARIABLE_PS_Ptrs_0_16, dump__STATE_VARIABLE_PS_Ptrs_17, dump__STATE_VARIABLE_CSS_Ptrs_0_18, dump__STATE_VARIABLE_CSS_Ptrs_19);
#line 278 "dump.m"
      return;
    }
#line 278 "dump.m"
  }
#line 273 "dump.m"
}

#line 199 "dump.m"
static MR_bool MR_CALL 
dump__string_to_dumpable_array_2_p_0(
#line 199 "dump.m"
  MR_String dump__HeadVar__1_1,
#line 199 "dump.m"
  MR_Word * dump__HeadVar__2_2)
#line 199 "dump.m"
{
#line 201 "dump.m"
  {
#line 201 "dump.m"
    MR_bool dump__succeeded;
#line 201 "dump.m"
    MR_Integer dump__lo_0;
#line 201 "dump.m"
    MR_Integer dump__hi_1;
#line 201 "dump.m"
    MR_Integer dump__mid_2;
#line 201 "dump.m"
    MR_Integer dump__result_3;

#line 201 "dump.m"
    /* binary string simple lookup switch */
#line 201 "dump.m"
    dump__lo_0 = (MR_Integer) 0;
#line 201 "dump.m"
    dump__hi_1 = (MR_Integer) 3;
#line 201 "dump.m"
    do
#line 201 "dump.m"
      {
#line 201 "dump.m"
        dump__mid_2 = (((dump__lo_0 + dump__hi_1)) / (MR_Integer) 2);
#line 201 "dump.m"
        dump__result_3 = MR_strcmp(dump__HeadVar__1_1, ((&dump_vector_common_6[4 + dump__mid_2]))->dump__vector_common_type_6_0__vct_6_f_0);
#line 201 "dump.m"
        if ((dump__result_3 == (MR_Integer) 0))
#line 201 "dump.m"
          {
#line 201 "dump.m"
            *dump__HeadVar__2_2 = ((&dump_vector_common_6[4 + dump__mid_2]))->dump__vector_common_type_6_0__vct_6_f_1;
#line 201 "dump.m"
            dump__succeeded = MR_TRUE;
#line 201 "dump.m"
            /* jump out of search loop */
#line 201 "dump.m"
            goto label_0;
#line 201 "dump.m"
          }
#line 201 "dump.m"
        else
#line 201 "dump.m"
        if ((dump__result_3 < (MR_Integer) 0))
#line 201 "dump.m"
          dump__hi_1 = (dump__mid_2 - (MR_Integer) 1);
#line 201 "dump.m"
        else
#line 201 "dump.m"
          dump__lo_0 = (dump__mid_2 + (MR_Integer) 1);
#line 201 "dump.m"
      }
#line 201 "dump.m"
    while ((dump__lo_0 <= dump__hi_1));
#line 201 "dump.m"
    dump__succeeded = MR_FALSE;
#line 201 "dump.m"
  label_0:;
#line 201 "dump.m"
    return dump__succeeded;
#line 201 "dump.m"
  }
#line 199 "dump.m"
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
#line 201 "dump.m"
    MR_Integer dump__lo_0;
#line 201 "dump.m"
    MR_Integer dump__hi_1;
#line 201 "dump.m"
    MR_Integer dump__mid_2;
#line 201 "dump.m"
    MR_Integer dump__result_3;

#line 201 "dump.m"
    /* binary string simple lookup switch */
#line 201 "dump.m"
    dump__lo_0 = (MR_Integer) 0;
#line 201 "dump.m"
    dump__hi_1 = (MR_Integer) 3;
#line 201 "dump.m"
    do
#line 201 "dump.m"
      {
#line 201 "dump.m"
        dump__mid_2 = (((dump__lo_0 + dump__hi_1)) / (MR_Integer) 2);
#line 201 "dump.m"
        dump__result_3 = MR_strcmp(dump__String_3, ((&dump_vector_common_6[0 + dump__mid_2]))->dump__vector_common_type_6_0__vct_6_f_0);
#line 201 "dump.m"
        if ((dump__result_3 == (MR_Integer) 0))
#line 201 "dump.m"
          {
#line 201 "dump.m"
            dump__ArrayP_5 = ((&dump_vector_common_6[0 + dump__mid_2]))->dump__vector_common_type_6_0__vct_6_f_1;
#line 201 "dump.m"
            dump__succeeded = MR_TRUE;
#line 201 "dump.m"
            /* jump out of search loop */
#line 201 "dump.m"
            goto label_0;
#line 201 "dump.m"
          }
#line 201 "dump.m"
        else
#line 201 "dump.m"
        if ((dump__result_3 < (MR_Integer) 0))
#line 201 "dump.m"
          dump__hi_1 = (dump__mid_2 - (MR_Integer) 1);
#line 201 "dump.m"
        else
#line 201 "dump.m"
          dump__lo_0 = (dump__mid_2 + (MR_Integer) 1);
#line 201 "dump.m"
      }
#line 201 "dump.m"
    while ((dump__lo_0 <= dump__hi_1));
#line 201 "dump.m"
    dump__succeeded = MR_FALSE;
#line 201 "dump.m"
  label_0:;
#line 194 "dump.m"
    if (dump__succeeded)
#line 193 "dump.m"
      *dump__Array_4 = dump__ArrayP_5;
#line 194 "dump.m"
    else
#line 195 "dump.m"
      {
#line 195 "dump.m"
        MR_String dump__V_8_8;

#line 196 "dump.m"
        {
#line 196 "dump.m"
          dump__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "Invalid array name in dump options: ", dump__String_3);
        }
#line 195 "dump.m"
        {
#line 195 "dump.m"
          mercury__require__unexpected_3_p_0((MR_String) "dump", (MR_String) "predicate \140dump.det_string_to_dumpable_array\'/2", dump__V_8_8);
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
#line 670 "dump.m"
  {
#line 670 "dump.m"
    MR_bool dump__succeeded;
#line 670 "dump.m"
    MR_Word dump__DumpCliques_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 670 "dump.m"
    MR_Word dump__DumpRevLinks_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 670 "dump.m"
    MR_Word dump__DumpPropMeasurements_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 671 "dump.m"
    MR_Word dump__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 0)));
#line 671 "dump.m"
    MR_Word dump__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 1)));
#line 671 "dump.m"
    MR_Word dump__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) & (MR_Integer) 1);

#line 677 "dump.m"
#line 677 "dump.m"
    switch (dump__DumpCliques_8) {
#line 677 "dump.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 677 "dump.m"
      case (MR_Integer) 1:
#line 678 "dump.m"
        {
#line 678 "dump.m"
        }
#line 677 "dump.m"
        break;
#line 677 "dump.m"
      case (MR_Integer) 0:
#line 676 "dump.m"
        {
#line 676 "dump.m"
          dump__dump_deep_cliques_3_p_0(dump__Deep_5);
        }
#line 677 "dump.m"
        break;
#line 677 "dump.m"
    }
#line 683 "dump.m"
#line 683 "dump.m"
    switch (dump__DumpRevLinks_9) {
#line 683 "dump.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 683 "dump.m"
      case (MR_Integer) 1:
#line 684 "dump.m"
        {
#line 684 "dump.m"
        }
#line 683 "dump.m"
        break;
#line 683 "dump.m"
      case (MR_Integer) 0:
#line 682 "dump.m"
        {
#line 682 "dump.m"
          dump__dump_deep_rev_links_3_p_0(dump__Deep_5);
        }
#line 683 "dump.m"
        break;
#line 683 "dump.m"
    }
#line 689 "dump.m"
#line 689 "dump.m"
    switch (dump__DumpPropMeasurements_10) {
#line 689 "dump.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 689 "dump.m"
      case (MR_Integer) 1:
#line 690 "dump.m"
        {
#line 690 "dump.m"
        }
#line 689 "dump.m"
        break;
#line 689 "dump.m"
      case (MR_Integer) 0:
#line 688 "dump.m"
        {
#line 688 "dump.m"
          dump__dump_deep_prop_measurements_3_p_0(dump__Deep_5);
#line 688 "dump.m"
          return;
        }
#line 689 "dump.m"
        break;
#line 689 "dump.m"
    }
#line 670 "dump.m"
  }
#line 119 "dump.m"
}

#line 270 "dump.m"
static void MR_CALL 
dump__dump_initial_deep_4_p_0_1(
#line 270 "dump.m"
  MR_Box dump__closure_arg,
#line 270 "dump.m"
  MR_Box dump__wrapper_arg_1,
#line 270 "dump.m"
  MR_Box dump__wrapper_arg_2,
#line 270 "dump.m"
  MR_Box dump__wrapper_arg_3,
#line 270 "dump.m"
  MR_Box * dump__wrapper_arg_4,
#line 270 "dump.m"
  MR_Box dump__wrapper_arg_5,
#line 270 "dump.m"
  MR_Box * dump__wrapper_arg_6)
#line 270 "dump.m"
{
#line 270 "dump.m"
  {
#line 270 "dump.m"
    MR_Box dump__closure = dump__closure_arg;
#line 270 "dump.m"
    MR_Word dump__conv1_STATE_VARIABLE_PS_Ptrs_17;
#line 270 "dump.m"
    MR_Word dump__conv0_STATE_VARIABLE_CSS_Ptrs_19;

#line 270 "dump.m"
    {
#line 270 "dump.m"
      dump__get_static_ptrs_from_dynamic_proc_7_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3), &dump__conv1_STATE_VARIABLE_PS_Ptrs_17, ((MR_Word) dump__wrapper_arg_5), &dump__conv0_STATE_VARIABLE_CSS_Ptrs_19);
    }
#line 270 "dump.m"
    *dump__wrapper_arg_4 = ((MR_Box) (dump__conv1_STATE_VARIABLE_PS_Ptrs_17));
#line 270 "dump.m"
    *dump__wrapper_arg_6 = ((MR_Box) (dump__conv0_STATE_VARIABLE_CSS_Ptrs_19));
#line 270 "dump.m"
  }
#line 270 "dump.m"
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
#line 216 "dump.m"
  {
#line 216 "dump.m"
    MR_bool dump__succeeded;
#line 216 "dump.m"
    MR_Word dump__Stats_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__InitialDeep_5, (MR_Integer) 0)));
#line 216 "dump.m"
    MR_Word dump__InitRoot_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__InitialDeep_5, (MR_Integer) 1)));
#line 216 "dump.m"
    MR_ArrayPtr dump__CSDs_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__InitialDeep_5, (MR_Integer) 2)));
#line 216 "dump.m"
    MR_ArrayPtr dump__PDs_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__InitialDeep_5, (MR_Integer) 3)));
#line 216 "dump.m"
    MR_ArrayPtr dump__CSSs_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__InitialDeep_5, (MR_Integer) 4)));
#line 216 "dump.m"
    MR_ArrayPtr dump__PSs_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__InitialDeep_5, (MR_Integer) 5)));
#line 216 "dump.m"
    MR_Word dump__Restrict_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 0)));
#line 216 "dump.m"
    MR_Word dump__Restriction_17;
#line 216 "dump.m"
    MR_Word dump__ShowStats_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 218 "dump.m"
    MR_Word dump__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 1)));
#line 218 "dump.m"
    MR_Word dump__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 218 "dump.m"
    MR_Word dump__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 218 "dump.m"
    MR_Word dump__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 235 "dump.m"
    MR_Word dump__Arrays_84;
#line 968 "dump.m"
    MR_Word dump__V_85_85;
#line 968 "dump.m"
    MR_Word dump__V_86_86;
#line 968 "dump.m"
    MR_Word dump__V_87_87;
#line 968 "dump.m"
    MR_Word dump__V_88_88;
#line 968 "dump.m"
    MR_Word dump__V_89_89;

#line 223 "dump.m"
#line 223 "dump.m"
    switch (dump__Restrict_14) {
#line 223 "dump.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 223 "dump.m"
      case (MR_Integer) 1:
#line 225 "dump.m"
        dump__Restriction_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 223 "dump.m"
        break;
#line 223 "dump.m"
      case (MR_Integer) 0:
#line 220 "dump.m"
        {
#line 220 "dump.m"
          MR_Word dump__UsedPSs_15;
#line 220 "dump.m"
          MR_Word dump__UsedCSSs_16;
#line 220 "dump.m"
          MR_Word dump__V_45_45;
#line 220 "dump.m"
          MR_Word dump__V_46_46;
#line 220 "dump.m"
          MR_Word dump__V_47_47;
#line 270 "dump.m"
          MR_Box dump__conv3_UsedPSs_15;
#line 270 "dump.m"
          MR_Box dump__conv2_UsedCSSs_16;

#line 270 "dump.m"
          {
#line 270 "dump.m"
            dump__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 270 "dump.m"
            MR_hl_field(MR_mktag(0), dump__V_45_45, 0) = ((MR_Box) (&dump_scalar_common_4[0]));
#line 270 "dump.m"
            MR_hl_field(MR_mktag(0), dump__V_45_45, 1) = ((MR_Box) (dump__dump_initial_deep_4_p_0_1));
#line 270 "dump.m"
            MR_hl_field(MR_mktag(0), dump__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 270 "dump.m"
            MR_hl_field(MR_mktag(0), dump__V_45_45, 3) = ((MR_Box) (dump__PSs_13));
#line 270 "dump.m"
          }
#line 271 "dump.m"
          {
#line 271 "dump.m"
            dump__V_46_46 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0);
          }
#line 271 "dump.m"
          {
#line 271 "dump.m"
            dump__V_47_47 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0);
          }
#line 270 "dump.m"
          {
#line 270 "dump.m"
            array_util__array_foldl2_from_1_6_p_1((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_Word) &dump_scalar_common_1[0], (MR_Word) &dump_scalar_common_1[1], dump__V_45_45, (MR_ArrayPtr) dump__PDs_11, ((MR_Box) (dump__V_46_46)), &dump__conv3_UsedPSs_15, ((MR_Box) (dump__V_47_47)), &dump__conv2_UsedCSSs_16);
          }
#line 270 "dump.m"
          dump__UsedPSs_15 = ((MR_Word) dump__conv3_UsedPSs_15);
#line 270 "dump.m"
          dump__UsedCSSs_16 = ((MR_Word) dump__conv2_UsedCSSs_16);
#line 222 "dump.m"
          {
#line 222 "dump.m"
            dump__Restriction_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "dump.m"
            MR_hl_field(MR_mktag(1), dump__Restriction_17, 0) = ((MR_Box) (dump__UsedPSs_15));
#line 222 "dump.m"
            MR_hl_field(MR_mktag(1), dump__Restriction_17, 1) = ((MR_Box) (dump__UsedCSSs_16));
#line 222 "dump.m"
          }
#line 220 "dump.m"
        }
#line 223 "dump.m"
        break;
#line 223 "dump.m"
    }
#line 232 "dump.m"
#line 232 "dump.m"
    switch (dump__ShowStats_18) {
#line 232 "dump.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 232 "dump.m"
      case (MR_Integer) 1:
#line 233 "dump.m"
        {
#line 233 "dump.m"
        }
#line 232 "dump.m"
        break;
#line 232 "dump.m"
      case (MR_Integer) 0:
#line 229 "dump.m"
        {
#line 229 "dump.m"
          MR_Integer dump__Root_61;
#line 229 "dump.m"
          MR_String dump__V_74_74;

#line 230 "dump.m"
          {
#line 230 "dump.m"
            dump__dump_init_profile_stats_3_p_0(dump__Stats_8);
          }
#line 328 "dump.m"
          dump__Root_61 = (MR_Integer) dump__InitRoot_9;
#line 329 "dump.m"
          {
#line 329 "dump.m"
            mercury__io__write_string_3_p_0((MR_String) "INITIAL ROOT:\n");
          }
#line 330 "dump.m"
          {
#line 330 "dump.m"
            mercury__io__write_string_3_p_0((MR_String) "\tinitial root = ");
          }
#line 330 "dump.m"
          {
#line 330 "dump.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_5[0], dump__Root_61, &dump__V_74_74);
          }
#line 330 "dump.m"
          {
#line 330 "dump.m"
            mercury__io__write_string_3_p_0(dump__V_74_74);
          }
#line 330 "dump.m"
          {
#line 330 "dump.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 331 "dump.m"
          {
#line 331 "dump.m"
            mercury__io__nl_2_p_0();
          }
#line 229 "dump.m"
        }
#line 232 "dump.m"
        break;
#line 232 "dump.m"
    }
#line 968 "dump.m"
    dump__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 0)));
#line 968 "dump.m"
    dump__Arrays_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 1)));
#line 968 "dump.m"
    dump__V_86_86 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 968 "dump.m"
    dump__V_87_87 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 968 "dump.m"
    dump__V_88_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 968 "dump.m"
    dump__V_89_89 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 969 "dump.m"
    {
#line 969 "dump.m"
      dump__succeeded = mercury__set__member_2_p_0((MR_Word) &dump__dump__type_ctor_info_dumpable_array_0, ((MR_Box) ((MR_Integer) 0)), dump__Arrays_84);
    }
#line 237 "dump.m"
    if (dump__succeeded)
#line 236 "dump.m"
      {
#line 236 "dump.m"
        dump__dump_init_call_site_dynamics_3_p_0(dump__CSDs_10);
      }
#line 237 "dump.m"
    else
#line 237 "dump.m"
      {
#line 237 "dump.m"
      }
#line 240 "dump.m"
    {
#line 240 "dump.m"
      dump__succeeded = dump__should_dump_2_p_0(dump__DumpOptions_6, (MR_Integer) 2);
    }
#line 242 "dump.m"
    if (dump__succeeded)
#line 241 "dump.m"
      {
#line 241 "dump.m"
        dump__dump_init_proc_dynamics_4_p_0(dump__PDs_11, dump__PSs_13);
      }
#line 242 "dump.m"
    else
#line 242 "dump.m"
      {
#line 242 "dump.m"
      }
#line 245 "dump.m"
    {
#line 245 "dump.m"
      dump__succeeded = dump__should_dump_2_p_0(dump__DumpOptions_6, (MR_Integer) 1);
    }
#line 247 "dump.m"
    if (dump__succeeded)
#line 246 "dump.m"
      {
#line 246 "dump.m"
        dump__dump_init_call_site_statics_4_p_0(dump__Restriction_17, dump__CSSs_12);
      }
#line 247 "dump.m"
    else
#line 247 "dump.m"
      {
#line 247 "dump.m"
      }
#line 250 "dump.m"
    {
#line 250 "dump.m"
      dump__succeeded = dump__should_dump_2_p_0(dump__DumpOptions_6, (MR_Integer) 3);
    }
#line 252 "dump.m"
    if (dump__succeeded)
#line 251 "dump.m"
      {
#line 251 "dump.m"
        dump__dump_init_proc_statics_4_p_0(dump__Restriction_17, dump__PSs_13);
#line 251 "dump.m"
        return;
      }
#line 252 "dump.m"
    else
#line 252 "dump.m"
      {
#line 252 "dump.m"
      }
#line 216 "dump.m"
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

#line 10755 "dump.c"
static void MR_CALL 
dump__det_dump_array_options_2_p_0_1(
#line 10758 "dump.c"
  MR_Box dump__closure_arg,
#line 10760 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 10762 "dump.c"
  MR_Box * dump__wrapper_arg_2)
#line 10764 "dump.c"
{
#line 10766 "dump.c"
  {
#line 10768 "dump.c"
    MR_Box dump__closure = dump__closure_arg;
#line 10770 "dump.c"
    MR_Word dump__conv0_Array_4;

#line 10773 "dump.c"
    {
#line 10775 "dump.c"
      dump__det_string_to_dumpable_array_2_p_0(((MR_String) dump__wrapper_arg_1), &dump__conv0_Array_4);
    }
#line 10778 "dump.c"
    *dump__wrapper_arg_2 = ((MR_Box) (dump__conv0_Array_4));
#line 10780 "dump.c"
  }
#line 10782 "dump.c"
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
#line 209 "dump.m"
      {
#line 209 "dump.m"
        {
#line 209 "dump.m"
          dump__DumpArrayOptionsSpecial_5 = mercury__set__list_to_set_1_f_0((MR_Word) &dump__dump__type_ctor_info_dumpable_array_0, (MR_Word) MR_mkword(MR_mktag(1), &dump_scalar_common_1[9]));
        }
#line 209 "dump.m"
        dump__succeeded = MR_TRUE;
#line 209 "dump.m"
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
#line 10839 "dump.c"
                dump__TypeCtorInfo_12_33 = (MR_Word) &dump__dump__type_ctor_info_dumpable_array_0;
#line 209 "dump.m"
                dump__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), &dump_scalar_common_1[9]);
#line 209 "dump.m"
                {
#line 209 "dump.m"
                  dump__DumpArrayOptionsSpecial_5 = mercury__set__list_to_set_1_f_0(dump__TypeCtorInfo_12_33, dump__V_24_24);
                }
#line 209 "dump.m"
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

#line 10888 "dump.c"
static MR_bool MR_CALL 
dump__dump_array_options_2_p_0_1(
#line 10891 "dump.c"
  MR_Box dump__closure_arg,
#line 10893 "dump.c"
  MR_Box dump__wrapper_arg_1,
#line 10895 "dump.c"
  MR_Box * dump__wrapper_arg_2)
#line 10897 "dump.c"
{
#line 10899 "dump.c"
  {
#line 10901 "dump.c"
    MR_bool dump__succeeded;
#line 10903 "dump.c"
    MR_Box dump__closure = dump__closure_arg;
#line 10905 "dump.c"
    MR_Word dump__conv0_HeadVar__2_2;

#line 10908 "dump.c"
    {
#line 10910 "dump.c"
      dump__succeeded = dump__string_to_dumpable_array_2_p_0(((MR_String) dump__wrapper_arg_1), &dump__conv0_HeadVar__2_2);
    }
#line 10913 "dump.c"
    if (dump__succeeded)
#line 10915 "dump.c"
      {
#line 10917 "dump.c"
        *dump__wrapper_arg_2 = ((MR_Box) (dump__conv0_HeadVar__2_2));
#line 10919 "dump.c"
        dump__succeeded = MR_TRUE;
#line 10921 "dump.c"
      }
#line 10923 "dump.c"
    return dump__succeeded;
#line 10925 "dump.c"
  }
#line 10927 "dump.c"
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
#line 209 "dump.m"
      {
#line 209 "dump.m"
        {
#line 209 "dump.m"
          dump__DumpArrayOptionsSpecial_5 = mercury__set__list_to_set_1_f_0((MR_Word) &dump__dump__type_ctor_info_dumpable_array_0, (MR_Word) MR_mkword(MR_mktag(1), &dump_scalar_common_1[9]));
        }
#line 209 "dump.m"
        dump__succeeded = MR_TRUE;
#line 209 "dump.m"
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
#line 10984 "dump.c"
                dump__TypeCtorInfo_12_33 = (MR_Word) &dump__dump__type_ctor_info_dumpable_array_0;
#line 209 "dump.m"
                dump__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), &dump_scalar_common_1[9]);
#line 209 "dump.m"
                {
#line 209 "dump.m"
                  dump__DumpArrayOptionsSpecial_5 = mercury__set__list_to_set_1_f_0(dump__TypeCtorInfo_12_33, dump__V_24_24);
                }
#line 209 "dump.m"
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

#line 209 "dump.m"
    {
#line 209 "dump.m"
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
