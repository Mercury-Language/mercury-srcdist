/*
** Automatically generated from `dump.m'
** by the Mercury compiler,
** version rotd-2017-07-23
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
#include "array_util.mih"
#include "coverage.mih"
#include "exclude.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "profile.mih"
#include "query.mih"
#include "report.mih"
#include "var_use_analysis.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 dump__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0;

static const MR_FA_PseudoTypeInfo_Struct1 dump__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_static_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 dump__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_call_site_static_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 dump__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 dump__maybe__pti_maybe_1__plain_profile__type_ctor_info_clique_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 dump__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 dump__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 dump__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 dump__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_cliques_0_0;

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_cliques_0_1;

static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dump_cliques_0[2];

static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dump_cliques_0[2];

static const MR_Integer dump__dump__functor_number_map_dump_cliques_0[2];

static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1dump__type_ctor_info_dumpable_array_0;

static const MR_PseudoTypeInfo dump__dump__field_types_dump_options_0_0[6];

static const MR_ConstString dump__dump__field_names_dump_options_0_0[6];

static const MR_DuArgLocn dump__dump__field_locns_dump_options_0_0[6];

static const MR_DuFunctorDesc dump__dump__du_functor_desc_dump_options_0_0;

static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_dump_options_0_0[1];

static const MR_DuPtagLayout dump__dump__du_ptag_ordered_dump_options_0[1];

static const MR_DuFunctorDescPtr dump__dump__du_name_ordered_dump_options_0[1];

static const MR_Integer dump__dump__functor_number_map_dump_options_0[1];

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_prop_measurements_0_0;

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_prop_measurements_0_1;

static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dump_prop_measurements_0[2];

static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dump_prop_measurements_0[2];

static const MR_Integer dump__dump__functor_number_map_dump_prop_measurements_0[2];

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_rev_links_0_0;

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_rev_links_0_1;

static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dump_rev_links_0[2];

static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dump_rev_links_0[2];

static const MR_Integer dump__dump__functor_number_map_dump_rev_links_0[2];

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_0;

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_1;

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_2;

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_3;

static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dumpable_array_0[4];

static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dumpable_array_0[4];

static const MR_Integer dump__dump__functor_number_map_dumpable_array_0[4];

static const MR_DuFunctorDesc dump__dump__du_functor_desc_restriction_0_0;

static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_static_ptr_0;

static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_call_site_static_ptr_0;

static const MR_PseudoTypeInfo dump__dump__field_types_restriction_0_1[2];

static const MR_DuFunctorDesc dump__dump__du_functor_desc_restriction_0_1;

static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_restriction_0_0[1];

static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_restriction_0_1[1];

static const MR_DuPtagLayout dump__dump__du_ptag_ordered_restriction_0[2];

static const MR_DuFunctorDescPtr dump__dump__du_name_ordered_restriction_0[2];

static const MR_Integer dump__dump__functor_number_map_restriction_0[2];

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_restricted_dump_0_0;

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_restricted_dump_0_1;

static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_show_restricted_dump_0[2];

static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_show_restricted_dump_0[2];

static const MR_Integer dump__dump__functor_number_map_show_restricted_dump_0[2];

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_stats_0_0;

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_stats_0_1;

static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_show_stats_0[2];

static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_show_stats_0[2];

static const MR_Integer dump__dump__functor_number_map_show_stats_0[2];

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__873__1_2_p_0(
  MR_Integer dump__CSSOwnMax_20,
  MR_Integer dump__CSSDescMax_21);

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__864__1_2_p_0(
  MR_Integer dump__PSOwnMax_16,
  MR_Integer dump__PSDescMax_17);

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__855__1_2_p_0(
  MR_Integer dump__CSDMax_12,
  MR_Integer dump__CSDDescMax_13);

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__846__1_2_p_0(
  MR_Integer dump__PDOwnMax_8,
  MR_Integer dump__PDDescMax_9);

static void MR_CALL 
dump____Compare____restriction_0_0(
  MR_Word * dump__HeadVar__1_1,
  MR_Word dump__HeadVar__2_2,
  MR_Word dump__HeadVar__3_3);

static MR_bool MR_CALL 
dump____Unify____restriction_0_0(
  MR_Word dump__HeadVar__1_1,
  MR_Word dump__HeadVar__2_2);

static void MR_CALL 
dump__dump_call_site_calls_4_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box * dump__wrapper_arg_3);

static void MR_CALL 
dump__dump_call_site_calls_4_p_0(
  MR_Integer dump__Index_5,
  MR_Word dump__CalleeMap_6);

static void MR_CALL 
dump__dump_call_site_calls_to_proc_4_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box * dump__wrapper_arg_3);

static void MR_CALL 
dump__dump_call_site_calls_to_proc_4_p_0(
  MR_String dump__Prefix_5,
  MR_Word dump__HeadVar__2_2);

static void MR_CALL 
dump__dump_call_site_dynamic_to_static_4_p_0(
  MR_Integer dump__Index_5,
  MR_Word dump__CSSPtr_6);

static void MR_CALL 
dump__dump_space_csdptr_3_p_0(
  MR_Word dump__CSDPtr_4);

static void MR_CALL 
dump__dump_proc_static_caller_csds_4_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box * dump__wrapper_arg_3);

static void MR_CALL 
dump__dump_proc_static_caller_csds_4_p_0(
  MR_Integer dump__Index_5,
  MR_Word dump__CallerCSDs_6);

static void MR_CALL 
dump__dump_clique_maybe_child_4_p_0(
  MR_Integer dump__Index_5,
  MR_Word dump__MaybeCliquePtr_6);

static void MR_CALL 
dump__dump_clique_parent_4_p_0(
  MR_Integer dump__Index_5,
  MR_Word dump__CSDPtr_6);

static void MR_CALL 
dump__dump_pd_in_clique_3_p_0(
  MR_Word dump__PDPtr_4);

static void MR_CALL 
dump__dump_clique_members_4_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box * dump__wrapper_arg_3);

static void MR_CALL 
dump__dump_clique_members_4_p_0(
  MR_Integer dump__Index_5,
  MR_Word dump__CliqueMembers_6);

static void MR_CALL 
dump__dump_clique_index_entry_4_p_0(
  MR_Integer dump__Index_5,
  MR_Word dump__CliquePtr_6);

static void MR_CALL 
dump__dump_coverage_point_info_4_p_0(
  MR_Integer dump__Num_5,
  MR_Word dump__CoveragePointInfo_6);

static void MR_CALL 
dump__dump_coverage_point_5_p_0(
  MR_Word dump__CoveragePoint_6,
  MR_Integer dump__STATE_VARIABLE_Num_0_14,
  MR_Integer * dump__STATE_VARIABLE_Num_15);

static void MR_CALL 
dump__dump_proc_static_call_sites_4_p_0(
  MR_Integer dump__Slot_5,
  MR_Word dump__CSSPtr_6);

static void MR_CALL 
dump__dump_proc_static_5_p_0_3(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box * dump__wrapper_arg_3,
  MR_Box dump__wrapper_arg_4,
  MR_Box * dump__wrapper_arg_5);

static void MR_CALL 
dump__dump_proc_static_5_p_0_2(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4);

static void MR_CALL 
dump__dump_proc_static_5_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4);

static void MR_CALL 
dump__dump_proc_static_5_p_0(
  MR_Word dump__Restriction_6,
  MR_Integer dump__Index_7,
  MR_Word dump__ProcStatic_8);

static MR_String MR_CALL 
dump__dump_proc_id_1_f_0(
  MR_Word dump__Proc_1);

static void MR_CALL 
dump__dump_call_site_static_5_p_0(
  MR_Word dump__Restriction_6,
  MR_Integer dump__Index_7,
  MR_Word dump__CallSiteStatic_8);

static void MR_CALL 
dump__dump_call_site_kind_and_callee_3_p_0(
  MR_Word dump__HeadVar__1_1);

static void MR_CALL 
dump__dump_call_site_array_slot_4_p_0(
  MR_Integer dump__Index_5,
  MR_Word dump__CSA_slot_6);

static void MR_CALL 
dump__dump_proc_dynamic_5_p_0_2(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box * dump__wrapper_arg_3,
  MR_Box dump__wrapper_arg_4,
  MR_Box * dump__wrapper_arg_5);

static void MR_CALL 
dump__dump_proc_dynamic_5_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4);

static void MR_CALL 
dump__dump_proc_dynamic_5_p_0(
  MR_ArrayPtr dump__ProcStatics_6,
  MR_Integer dump__Index_7,
  MR_Word dump__ProcDynamic_8);

static void MR_CALL 
dump__dump_call_site_dynamic_4_p_0(
  MR_Integer dump__Index_5,
  MR_Word dump__CallSiteDynamic_6);

static void MR_CALL 
dump__get_static_ptrs_from_dynamic_proc_7_p_0(
  MR_ArrayPtr dump__ProcStatics_8,
  MR_Integer dump__HeadVar__2_9,
  MR_Word dump__ProcDynamic_10,
  MR_Word dump__STATE_VARIABLE_PS_Ptrs_0_16,
  MR_Word * dump__STATE_VARIABLE_PS_Ptrs_17,
  MR_Word dump__STATE_VARIABLE_CSS_Ptrs_0_18,
  MR_Word * dump__STATE_VARIABLE_CSS_Ptrs_19);

static void MR_CALL 
dump__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
  MR_ArrayPtr dump__ProcStatics_8,
  MR_Word dump__ProcDynamic_10,
  MR_Word dump__STATE_VARIABLE_PS_Ptrs_0_16,
  MR_Word * dump__STATE_VARIABLE_PS_Ptrs_17,
  MR_Word dump__STATE_VARIABLE_CSS_Ptrs_0_18,
  MR_Word * dump__STATE_VARIABLE_CSS_Ptrs_19);

static MR_bool MR_CALL 
dump__string_to_dumpable_array_2_p_0(
  MR_String dump__HeadVar__1_1,
  MR_Word * dump__HeadVar__2_2);

static void MR_CALL 
dump__det_string_to_dumpable_array_2_p_0(
  MR_String dump__String_3,
  MR_Word * dump__Array_4);

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_4(
  MR_Box dump__closure_arg);

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_3(
  MR_Box dump__closure_arg);

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_2(
  MR_Box dump__closure_arg);

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_1(
  MR_Box dump__closure_arg);

static void MR_CALL 
dump__dump_deep_prop_measurements_3_p_0(
  MR_Word dump__Deep_4);

static void MR_CALL 
dump__dump_css_measurements_6_p_0(
  MR_Integer dump__Cur_7,
  MR_Integer dump__Max_8,
  MR_ArrayPtr dump__CSSOwn_9,
  MR_ArrayPtr dump__CSSDesc_10);

static void MR_CALL 
dump__dump_ps_measurements_6_p_0(
  MR_Integer dump__Cur_7,
  MR_Integer dump__Max_8,
  MR_ArrayPtr dump__PSOwn_9,
  MR_ArrayPtr dump__PSDesc_10);

static void MR_CALL 
dump__dump_csd_measurements_6_p_0(
  MR_Integer dump__Cur_7,
  MR_Integer dump__Max_8,
  MR_ArrayPtr dump__CSDs_9,
  MR_ArrayPtr dump__CSDDesc_10);

static void MR_CALL 
dump__dump_pd_measurements_6_p_0(
  MR_Integer dump__Cur_7,
  MR_Integer dump__Max_8,
  MR_ArrayPtr dump__PDOwn_9,
  MR_ArrayPtr dump__PDDesc_10);

static void MR_CALL 
dump__dump_own_and_desc_6_p_0(
  MR_String dump__Prefix_7,
  MR_Integer dump__Cur_8,
  MR_Word dump__Own_9,
  MR_Word dump__Desc_10);

static void MR_CALL 
dump__dump_inherit_prof_info_3_p_0(
  MR_Word dump__Inherit_4);

static void MR_CALL 
dump__dump_own_prof_info_3_p_0(
  MR_Word dump__Own_4);

static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_3(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_2(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_rev_links_3_p_0(
  MR_Word dump__Deep_4);

static void MR_CALL 
dump__dump_deep_cliques_3_p_0_4(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_cliques_3_p_0_3(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_cliques_3_p_0_2(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_cliques_3_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_cliques_3_p_0(
  MR_Word dump__Deep_4);

static void MR_CALL 
dump__dump_initial_deep_4_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4,
  MR_Box dump__wrapper_arg_5,
  MR_Box * dump__wrapper_arg_6);

static MR_bool MR_CALL 
dump__should_dump_2_p_0(
  MR_Word dump__DumpOptions_3,
  MR_Word dump__What_4);

static void MR_CALL 
dump__dump_init_proc_statics_4_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4);

static void MR_CALL 
dump__dump_init_proc_statics_4_p_0(
  MR_Word dump__Restriction_5,
  MR_ArrayPtr dump__ProcStatics_6);

static void MR_CALL 
dump__dump_init_call_site_statics_4_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4);

static void MR_CALL 
dump__dump_init_call_site_statics_4_p_0(
  MR_Word dump__Restriction_5,
  MR_ArrayPtr dump__CallStatics_6);

static void MR_CALL 
dump__dump_init_proc_dynamics_4_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4);

static void MR_CALL 
dump__dump_init_proc_dynamics_4_p_0(
  MR_ArrayPtr dump__ProcDynamics_5,
  MR_ArrayPtr dump__ProcStatics_6);

static void MR_CALL 
dump__dump_init_call_site_dynamics_3_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4);

static void MR_CALL 
dump__dump_init_call_site_dynamics_3_p_0(
  MR_ArrayPtr dump__CallSiteDynamics_4);

static void MR_CALL 
dump__dump_init_profile_stats_3_p_0(
  MR_Word dump__Stats_4);

static void MR_CALL 
dump__det_dump_array_options_2_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box * dump__wrapper_arg_2);

static MR_bool MR_CALL 
dump__dump_array_options_2_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box * dump__wrapper_arg_2);

static MR_bool MR_CALL 
dump____Unify____dump_cliques_0_0_10001(
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2);

static void MR_CALL 
dump____Compare____dump_cliques_0_0_10001(
  MR_Box * dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3);

static MR_bool MR_CALL 
dump____Unify____dump_options_0_0_10001(
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2);

static void MR_CALL 
dump____Compare____dump_options_0_0_10001(
  MR_Box * dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3);

static MR_bool MR_CALL 
dump____Unify____dump_prop_measurements_0_0_10001(
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2);

static void MR_CALL 
dump____Compare____dump_prop_measurements_0_0_10001(
  MR_Box * dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3);

static MR_bool MR_CALL 
dump____Unify____dump_rev_links_0_0_10001(
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2);

static void MR_CALL 
dump____Compare____dump_rev_links_0_0_10001(
  MR_Box * dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3);

static MR_bool MR_CALL 
dump____Unify____dumpable_array_0_0_10001(
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2);

static void MR_CALL 
dump____Compare____dumpable_array_0_0_10001(
  MR_Box * dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3);

static MR_bool MR_CALL 
dump____Unify____restriction_0_0_10001(
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2);

static void MR_CALL 
dump____Compare____restriction_0_0_10001(
  MR_Box * dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3);

static MR_bool MR_CALL 
dump____Unify____show_restricted_dump_0_0_10001(
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2);

static void MR_CALL 
dump____Compare____show_restricted_dump_0_0_10001(
  MR_Box * dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3);

static MR_bool MR_CALL 
dump____Unify____show_stats_0_0_10001(
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2);

static void MR_CALL 
dump____Compare____show_stats_0_0_10001(
  MR_Box * dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3);


static /* final */ const MR_Box dump_scalar_common_1[10][2];

static /* final */ const MR_Box dump_scalar_common_2[20][3];

static /* final */ const MR_Box dump_scalar_common_3[2][5];

static /* final */ const MR_Box dump_scalar_common_4[1][1];

static /* final */ const MR_Box dump_scalar_common_5[11][7];

static /* final */ const MR_Box dump_scalar_common_6[4][8];

static /* final */ const MR_Box dump_scalar_common_7[1][10];

static /* final */ const MR_Box dump_scalar_common_9[2][6];

static /* final */ const MR_Box dump_scalar_common_10[1][4];


/* sealed */ struct dump__vector_common_type_8_0_s {
  const MR_String dump__vector_common_type_8_0__vct_8_f_0;
  const MR_Word dump__vector_common_type_8_0__vct_8_f_1;
};

static /* final */ const struct dump__vector_common_type_8_0_s dump_vector_common_8[8];



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
    ((MR_Box) (dump__dump_deep_cliques_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&dump_scalar_common_5[2])),
    ((MR_Box) (dump__dump_deep_cliques_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&dump_scalar_common_5[3])),
    ((MR_Box) (dump__dump_deep_cliques_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&dump_scalar_common_5[4])),
    ((MR_Box) (dump__dump_deep_cliques_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&dump_scalar_common_5[5])),
    ((MR_Box) (dump__dump_deep_rev_links_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&dump_scalar_common_5[6])),
    ((MR_Box) (dump__dump_deep_rev_links_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&dump_scalar_common_5[7])),
    ((MR_Box) (dump__dump_deep_rev_links_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&dump_scalar_common_5[8])),
    ((MR_Box) (dump__dump_proc_dynamic_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&dump_scalar_common_6[3])),
    ((MR_Box) (dump__dump_proc_dynamic_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&dump_scalar_common_5[6])),
    ((MR_Box) (dump__dump_proc_static_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&dump_scalar_common_5[9])),
    ((MR_Box) (dump__dump_proc_static_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&dump_scalar_common_6[3])),
    ((MR_Box) (dump__dump_proc_static_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&dump_scalar_common_9[0])),
    ((MR_Box) (dump__dump_clique_members_4_p_0_1)),
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

static /* final */ const MR_Box dump_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&dump__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&dump__maybe__pti_maybe_1__plain_profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&dump__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&dump__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0)),
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
    ((MR_Box) (&dump__dump__type_ctor_info_restriction_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_0)),
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
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
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
};

static /* final */ const MR_Box dump_scalar_common_7[1][10] = {
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
    ((MR_Box) (&dump_scalar_common_5[10])),
    ((MR_Box) (dump__dump_call_site_calls_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "\t"))
  },
};


static /* final */ const struct dump__vector_common_type_8_0_s dump_vector_common_8[8] = {
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


#include "array.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 dump__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 dump__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 dump__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_call_site_static_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 dump__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 dump__maybe__pti_maybe_1__plain_profile__type_ctor_info_clique_ptr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 dump__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_TypeInfo_Struct1 dump__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 dump__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &dump__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 dump__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &dump__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_cliques_0_0 = {
  (MR_String) "dump_cliques",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_cliques_0_1 = {
  (MR_String) "do_not_dump_cliques",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dump_cliques_0[2] = {
  &dump__dump__enum_functor_desc_dump_cliques_0_0,
  &dump__dump__enum_functor_desc_dump_cliques_0_1
};

static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dump_cliques_0[2] = {
  &dump__dump__enum_functor_desc_dump_cliques_0_1,
  &dump__dump__enum_functor_desc_dump_cliques_0_0
};

static const MR_Integer dump__dump__functor_number_map_dump_cliques_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_dump_cliques_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1dump__type_ctor_info_dumpable_array_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &dump__dump__type_ctor_info_dumpable_array_0
  }
};

static const MR_PseudoTypeInfo dump__dump__field_types_dump_options_0_0[6] = {
  (MR_PseudoTypeInfo) &dump__dump__type_ctor_info_show_restricted_dump_0,
  (MR_PseudoTypeInfo) &dump__set_ordlist__ti_set_ordlist_1dump__type_ctor_info_dumpable_array_0,
  (MR_PseudoTypeInfo) &dump__dump__type_ctor_info_show_stats_0,
  (MR_PseudoTypeInfo) &dump__dump__type_ctor_info_dump_cliques_0,
  (MR_PseudoTypeInfo) &dump__dump__type_ctor_info_dump_rev_links_0,
  (MR_PseudoTypeInfo) &dump__dump__type_ctor_info_dump_prop_measurements_0
};

static const MR_ConstString dump__dump__field_names_dump_options_0_0[6] = {
  (MR_String) "do_restricted",
  (MR_String) "do_arrays",
  (MR_String) "do_stats",
  (MR_String) "do_dump_cliques",
  (MR_String) "do_dump_rev_links",
  (MR_String) "do_dump_prop_measurements"
};

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

static const MR_DuFunctorDesc dump__dump__du_functor_desc_dump_options_0_0 = {
  (MR_String) "dump_options",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  dump__dump__field_types_dump_options_0_0,
  dump__dump__field_names_dump_options_0_0,
  dump__dump__field_locns_dump_options_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_dump_options_0_0[1] = {
  &dump__dump__du_functor_desc_dump_options_0_0
};

static const MR_DuPtagLayout dump__dump__du_ptag_ordered_dump_options_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    dump__dump__du_stag_ordered_dump_options_0_0
  }
};

static const MR_DuFunctorDescPtr dump__dump__du_name_ordered_dump_options_0[1] = {
  &dump__dump__du_functor_desc_dump_options_0_0
};

static const MR_Integer dump__dump__functor_number_map_dump_options_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_dump_options_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_prop_measurements_0_0 = {
  (MR_String) "dump_prop_measurements",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_prop_measurements_0_1 = {
  (MR_String) "do_not_dump_prop_measurements",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dump_prop_measurements_0[2] = {
  &dump__dump__enum_functor_desc_dump_prop_measurements_0_0,
  &dump__dump__enum_functor_desc_dump_prop_measurements_0_1
};

static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dump_prop_measurements_0[2] = {
  &dump__dump__enum_functor_desc_dump_prop_measurements_0_1,
  &dump__dump__enum_functor_desc_dump_prop_measurements_0_0
};

static const MR_Integer dump__dump__functor_number_map_dump_prop_measurements_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_dump_prop_measurements_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_rev_links_0_0 = {
  (MR_String) "dump_rev_links",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_rev_links_0_1 = {
  (MR_String) "do_not_dump_rev_links",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dump_rev_links_0[2] = {
  &dump__dump__enum_functor_desc_dump_rev_links_0_0,
  &dump__dump__enum_functor_desc_dump_rev_links_0_1
};

static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dump_rev_links_0[2] = {
  &dump__dump__enum_functor_desc_dump_rev_links_0_1,
  &dump__dump__enum_functor_desc_dump_rev_links_0_0
};

static const MR_Integer dump__dump__functor_number_map_dump_rev_links_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_dump_rev_links_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_0 = {
  (MR_String) "csd",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_1 = {
  (MR_String) "css",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_2 = {
  (MR_String) "pd",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_3 = {
  (MR_String) "ps",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_dumpable_array_0[4] = {
  &dump__dump__enum_functor_desc_dumpable_array_0_0,
  &dump__dump__enum_functor_desc_dumpable_array_0_1,
  &dump__dump__enum_functor_desc_dumpable_array_0_2,
  &dump__dump__enum_functor_desc_dumpable_array_0_3
};

static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dumpable_array_0[4] = {
  &dump__dump__enum_functor_desc_dumpable_array_0_0,
  &dump__dump__enum_functor_desc_dumpable_array_0_1,
  &dump__dump__enum_functor_desc_dumpable_array_0_2,
  &dump__dump__enum_functor_desc_dumpable_array_0_3
};

static const MR_Integer dump__dump__functor_number_map_dumpable_array_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_dumpable_array_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_DuFunctorDesc dump__dump__du_functor_desc_restriction_0_0 = {
  (MR_String) "none",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_call_site_static_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0
  }
};

static const MR_PseudoTypeInfo dump__dump__field_types_restriction_0_1[2] = {
  (MR_PseudoTypeInfo) &dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_call_site_static_ptr_0
};

static const MR_DuFunctorDesc dump__dump__du_functor_desc_restriction_0_1 = {
  (MR_String) "these",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  dump__dump__field_types_restriction_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_restriction_0_0[1] = {
  &dump__dump__du_functor_desc_restriction_0_0
};

static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_restriction_0_1[1] = {
  &dump__dump__du_functor_desc_restriction_0_1
};

static const MR_DuPtagLayout dump__dump__du_ptag_ordered_restriction_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    dump__dump__du_stag_ordered_restriction_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    dump__dump__du_stag_ordered_restriction_0_1
  }
};

static const MR_DuFunctorDescPtr dump__dump__du_name_ordered_restriction_0[2] = {
  &dump__dump__du_functor_desc_restriction_0_0,
  &dump__dump__du_functor_desc_restriction_0_1
};

static const MR_Integer dump__dump__functor_number_map_restriction_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_restriction_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_restricted_dump_0_0 = {
  (MR_String) "show_restricted_dump",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_restricted_dump_0_1 = {
  (MR_String) "show_complete_dump",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_show_restricted_dump_0[2] = {
  &dump__dump__enum_functor_desc_show_restricted_dump_0_0,
  &dump__dump__enum_functor_desc_show_restricted_dump_0_1
};

static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_show_restricted_dump_0[2] = {
  &dump__dump__enum_functor_desc_show_restricted_dump_0_1,
  &dump__dump__enum_functor_desc_show_restricted_dump_0_0
};

static const MR_Integer dump__dump__functor_number_map_show_restricted_dump_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_show_restricted_dump_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_stats_0_0 = {
  (MR_String) "show_stats",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_stats_0_1 = {
  (MR_String) "do_not_show_stats",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr dump__dump__enum_value_ordered_show_stats_0[2] = {
  &dump__dump__enum_functor_desc_show_stats_0_0,
  &dump__dump__enum_functor_desc_show_stats_0_1
};

static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_show_stats_0[2] = {
  &dump__dump__enum_functor_desc_show_stats_0_1,
  &dump__dump__enum_functor_desc_show_stats_0_0
};

static const MR_Integer dump__dump__functor_number_map_show_stats_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_show_stats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__873__1_2_p_0(
  MR_Integer dump__CSSOwnMax_20,
  MR_Integer dump__CSSDescMax_21)
{
  {
    MR_bool dump__succeeded = (dump__CSSOwnMax_20 == dump__CSSDescMax_21);

    return dump__succeeded;
  }
}

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__864__1_2_p_0(
  MR_Integer dump__PSOwnMax_16,
  MR_Integer dump__PSDescMax_17)
{
  {
    MR_bool dump__succeeded = (dump__PSOwnMax_16 == dump__PSDescMax_17);

    return dump__succeeded;
  }
}

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__855__1_2_p_0(
  MR_Integer dump__CSDMax_12,
  MR_Integer dump__CSDDescMax_13)
{
  {
    MR_bool dump__succeeded = (dump__CSDMax_12 == dump__CSDDescMax_13);

    return dump__succeeded;
  }
}

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__846__1_2_p_0(
  MR_Integer dump__PDOwnMax_8,
  MR_Integer dump__PDDescMax_9)
{
  {
    MR_bool dump__succeeded = (dump__PDOwnMax_8 == dump__PDDescMax_9);

    return dump__succeeded;
  }
}

void MR_CALL 
dump____Compare____show_stats_0_0(
  MR_Word * dump__HeadVar__1_1,
  MR_Word dump__HeadVar__2_2,
  MR_Word dump__HeadVar__3_3)
{
  {
    MR_bool dump__succeeded;
    MR_Integer dump__Cast_HeadVar1_4 = (MR_Integer) dump__HeadVar__2_2;
    MR_Integer dump__Cast_HeadVar2_5 = (MR_Integer) dump__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(dump__HeadVar__1_1, dump__Cast_HeadVar1_4, dump__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
dump____Unify____show_stats_0_0(
  MR_Word dump__HeadVar__2_1,
  MR_Word dump__HeadVar__2_2)
{
  {
    MR_bool dump__succeeded = (dump__HeadVar__2_1 == dump__HeadVar__2_2);

    return dump__succeeded;
  }
}

void MR_CALL 
dump____Compare____show_restricted_dump_0_0(
  MR_Word * dump__HeadVar__1_1,
  MR_Word dump__HeadVar__2_2,
  MR_Word dump__HeadVar__3_3)
{
  {
    MR_bool dump__succeeded;
    MR_Integer dump__Cast_HeadVar1_4 = (MR_Integer) dump__HeadVar__2_2;
    MR_Integer dump__Cast_HeadVar2_5 = (MR_Integer) dump__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(dump__HeadVar__1_1, dump__Cast_HeadVar1_4, dump__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
dump____Unify____show_restricted_dump_0_0(
  MR_Word dump__HeadVar__2_1,
  MR_Word dump__HeadVar__2_2)
{
  {
    MR_bool dump__succeeded = (dump__HeadVar__2_1 == dump__HeadVar__2_2);

    return dump__succeeded;
  }
}

static void MR_CALL 
dump____Compare____restriction_0_0(
  MR_Word * dump__HeadVar__1_1,
  MR_Word dump__HeadVar__2_2,
  MR_Word dump__HeadVar__3_3)
{
  {
    MR_bool dump__succeeded;
    MR_Integer dump__CastX_13 = (MR_Integer) dump__HeadVar__2_2;
    MR_Integer dump__CastY_14 = (MR_Integer) dump__HeadVar__3_3;

    dump__succeeded = (dump__CastX_13 == dump__CastY_14);
    if (dump__succeeded)
      *dump__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((dump__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((dump__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *dump__HeadVar__1_1 = (MR_Integer) 0;
      else
        *dump__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word dump__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word dump__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__2_2, (MR_Integer) 0)));

        if ((dump__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *dump__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word dump__ArgY1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word dump__ArgY2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word dump__Var_12;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &dump_scalar_common_1[0], &dump__Var_12, ((MR_Box) (dump__Var_18)), ((MR_Box) (dump__ArgY1_9)));
            }
            dump__succeeded = (dump__Var_12 == (MR_Integer) 0);
            dump__succeeded = !(dump__succeeded);
            if (dump__succeeded)
              *dump__HeadVar__1_1 = dump__Var_12;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &dump_scalar_common_1[1], dump__HeadVar__1_1, ((MR_Box) (dump__Var_17)), ((MR_Box) (dump__ArgY2_11)));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
dump____Unify____restriction_0_0(
  MR_Word dump__HeadVar__1_1,
  MR_Word dump__HeadVar__2_2)
{
  {
    MR_bool dump__succeeded;
    MR_Integer dump__CastX_9 = (MR_Integer) dump__HeadVar__1_1;
    MR_Integer dump__CastY_10 = (MR_Integer) dump__HeadVar__2_2;

    dump__succeeded = (dump__CastX_9 == dump__CastY_10);
    if (dump__succeeded)
      dump__succeeded = MR_TRUE;
    else
    if ((dump__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer dump__CastX_3 = (MR_Integer) dump__HeadVar__1_1;
        MR_Integer dump__CastY_4 = (MR_Integer) dump__HeadVar__2_2;

        dump__succeeded = (dump__CastY_4 == dump__CastX_3);
      }
    else
      {
        MR_Word dump__TypeInfo_11_11;
        MR_Word dump__TypeInfo_12_12;
        MR_Word dump__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word dump__ArgY1_6;
        MR_Word dump__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word dump__ArgY2_8;

        dump__succeeded = ((MR_tag((MR_Word) dump__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (dump__succeeded)
          {
            dump__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__2_2, (MR_Integer) 0)));
            dump__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__2_2, (MR_Integer) 1)));
            dump__TypeInfo_11_11 = (MR_Word) &dump_scalar_common_1[0];
            {
              dump__succeeded = mercury__builtin__unify_2_p_0(dump__TypeInfo_11_11, ((MR_Box) (dump__ArgX1_5)), ((MR_Box) (dump__ArgY1_6)));
            }
            if (dump__succeeded)
              {
                dump__TypeInfo_12_12 = (MR_Word) &dump_scalar_common_1[1];
                {
                  dump__succeeded = mercury__builtin__unify_2_p_0(dump__TypeInfo_12_12, ((MR_Box) (dump__ArgX2_7)), ((MR_Box) (dump__ArgY2_8)));
                }
              }
          }
      }
    return dump__succeeded;
  }
}

void MR_CALL 
dump____Compare____dumpable_array_0_0(
  MR_Word * dump__HeadVar__1_1,
  MR_Word dump__HeadVar__2_2,
  MR_Word dump__HeadVar__3_3)
{
  {
    MR_bool dump__succeeded;
    MR_Integer dump__Cast_HeadVar1_4 = (MR_Integer) dump__HeadVar__2_2;
    MR_Integer dump__Cast_HeadVar2_5 = (MR_Integer) dump__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(dump__HeadVar__1_1, dump__Cast_HeadVar1_4, dump__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
dump____Unify____dumpable_array_0_0(
  MR_Word dump__HeadVar__2_1,
  MR_Word dump__HeadVar__2_2)
{
  {
    MR_bool dump__succeeded = (dump__HeadVar__2_1 == dump__HeadVar__2_2);

    return dump__succeeded;
  }
}

void MR_CALL 
dump____Compare____dump_rev_links_0_0(
  MR_Word * dump__HeadVar__1_1,
  MR_Word dump__HeadVar__2_2,
  MR_Word dump__HeadVar__3_3)
{
  {
    MR_bool dump__succeeded;
    MR_Integer dump__Cast_HeadVar1_4 = (MR_Integer) dump__HeadVar__2_2;
    MR_Integer dump__Cast_HeadVar2_5 = (MR_Integer) dump__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(dump__HeadVar__1_1, dump__Cast_HeadVar1_4, dump__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
dump____Unify____dump_rev_links_0_0(
  MR_Word dump__HeadVar__2_1,
  MR_Word dump__HeadVar__2_2)
{
  {
    MR_bool dump__succeeded = (dump__HeadVar__2_1 == dump__HeadVar__2_2);

    return dump__succeeded;
  }
}

void MR_CALL 
dump____Compare____dump_prop_measurements_0_0(
  MR_Word * dump__HeadVar__1_1,
  MR_Word dump__HeadVar__2_2,
  MR_Word dump__HeadVar__3_3)
{
  {
    MR_bool dump__succeeded;
    MR_Integer dump__Cast_HeadVar1_4 = (MR_Integer) dump__HeadVar__2_2;
    MR_Integer dump__Cast_HeadVar2_5 = (MR_Integer) dump__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(dump__HeadVar__1_1, dump__Cast_HeadVar1_4, dump__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
dump____Unify____dump_prop_measurements_0_0(
  MR_Word dump__HeadVar__2_1,
  MR_Word dump__HeadVar__2_2)
{
  {
    MR_bool dump__succeeded = (dump__HeadVar__2_1 == dump__HeadVar__2_2);

    return dump__succeeded;
  }
}

void MR_CALL 
dump____Compare____dump_options_0_0(
  MR_Word * dump__HeadVar__1_1,
  MR_Word dump__HeadVar__2_2,
  MR_Word dump__HeadVar__3_3)
{
  {
    MR_bool dump__succeeded;
    MR_Integer dump__CastX_21 = (MR_Integer) dump__HeadVar__2_2;
    MR_Integer dump__CastY_22 = (MR_Integer) dump__HeadVar__3_3;

    dump__succeeded = (dump__CastX_21 == dump__CastY_22);
    if (dump__succeeded)
      *dump__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word dump__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word dump__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word dump__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word dump__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word dump__ArgX3_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 1);
        MR_Word dump__ArgY3_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__3_3, (MR_Integer) 2)))) & (MR_Integer) 1);
        MR_Word dump__ArgX4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word dump__ArgY4_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word dump__ArgX5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word dump__ArgY5_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word dump__ArgX6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word dump__ArgY6_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word dump__Var_16;
        MR_Integer dump__Var_29 = (MR_Integer) dump__ArgX1_4;
        MR_Integer dump__Var_30 = (MR_Integer) dump__ArgY1_5;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&dump__Var_16, dump__Var_29, dump__Var_30);
        }
        dump__succeeded = (dump__Var_16 == (MR_Integer) 0);
        dump__succeeded = !(dump__succeeded);
        if (dump__succeeded)
          *dump__HeadVar__1_1 = dump__Var_16;
        else
          {
            MR_Word dump__Var_17;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &dump_scalar_common_1[5], &dump__Var_17, ((MR_Box) (dump__ArgX2_6)), ((MR_Box) (dump__ArgY2_7)));
            }
            dump__succeeded = (dump__Var_17 == (MR_Integer) 0);
            dump__succeeded = !(dump__succeeded);
            if (dump__succeeded)
              *dump__HeadVar__1_1 = dump__Var_17;
            else
              {
                MR_Word dump__Var_18;
                MR_Integer dump__Var_31 = (MR_Integer) dump__ArgX3_8;
                MR_Integer dump__Var_32 = (MR_Integer) dump__ArgY3_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&dump__Var_18, dump__Var_31, dump__Var_32);
                }
                dump__succeeded = (dump__Var_18 == (MR_Integer) 0);
                dump__succeeded = !(dump__succeeded);
                if (dump__succeeded)
                  *dump__HeadVar__1_1 = dump__Var_18;
                else
                  {
                    MR_Word dump__Var_19;
                    MR_Integer dump__Var_33 = (MR_Integer) dump__ArgX4_10;
                    MR_Integer dump__Var_34 = (MR_Integer) dump__ArgY4_11;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&dump__Var_19, dump__Var_33, dump__Var_34);
                    }
                    dump__succeeded = (dump__Var_19 == (MR_Integer) 0);
                    dump__succeeded = !(dump__succeeded);
                    if (dump__succeeded)
                      *dump__HeadVar__1_1 = dump__Var_19;
                    else
                      {
                        MR_Word dump__Var_20;
                        MR_Integer dump__Var_35 = (MR_Integer) dump__ArgX5_12;
                        MR_Integer dump__Var_36 = (MR_Integer) dump__ArgY5_13;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&dump__Var_20, dump__Var_35, dump__Var_36);
                        }
                        dump__succeeded = (dump__Var_20 == (MR_Integer) 0);
                        dump__succeeded = !(dump__succeeded);
                        if (dump__succeeded)
                          *dump__HeadVar__1_1 = dump__Var_20;
                        else
                          {
                            MR_Integer dump__Var_37 = (MR_Integer) dump__ArgX6_14;
                            MR_Integer dump__Var_38 = (MR_Integer) dump__ArgY6_15;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(dump__HeadVar__1_1, dump__Var_37, dump__Var_38);
                            }
                          }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
dump____Unify____dump_options_0_0(
  MR_Word dump__HeadVar__1_1,
  MR_Word dump__HeadVar__2_2)
{
  {
    MR_bool dump__succeeded;
    MR_Integer dump__CastX_15 = (MR_Integer) dump__HeadVar__1_1;
    MR_Integer dump__CastY_16 = (MR_Integer) dump__HeadVar__2_2;

    dump__succeeded = (dump__CastX_15 == dump__CastY_16);
    if (dump__succeeded)
      dump__succeeded = MR_TRUE;
    else
      {
        MR_Word dump__TypeInfo_17_17;
        MR_Word dump__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word dump__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word dump__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word dump__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word dump__ArgX3_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__1_1, (MR_Integer) 2)))) & (MR_Integer) 1);
        MR_Word dump__ArgY3_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 1);
        MR_Word dump__ArgX4_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word dump__ArgY4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word dump__ArgX5_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word dump__ArgY5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word dump__ArgX6_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word dump__ArgY6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

        dump__succeeded = (dump__ArgX1_3 == dump__ArgY1_4);
        if (dump__succeeded)
          {
            dump__TypeInfo_17_17 = (MR_Word) &dump_scalar_common_1[5];
            {
              dump__succeeded = mercury__builtin__unify_2_p_0(dump__TypeInfo_17_17, ((MR_Box) (dump__ArgX2_5)), ((MR_Box) (dump__ArgY2_6)));
            }
            if (dump__succeeded)
              {
                dump__succeeded = (dump__ArgX3_7 == dump__ArgY3_8);
                if (dump__succeeded)
                  {
                    dump__succeeded = (dump__ArgX4_9 == dump__ArgY4_10);
                    if (dump__succeeded)
                      {
                        dump__succeeded = (dump__ArgX5_11 == dump__ArgY5_12);
                        if (dump__succeeded)
                          dump__succeeded = (dump__ArgX6_13 == dump__ArgY6_14);
                      }
                  }
              }
          }
      }
    return dump__succeeded;
  }
}

void MR_CALL 
dump____Compare____dump_cliques_0_0(
  MR_Word * dump__HeadVar__1_1,
  MR_Word dump__HeadVar__2_2,
  MR_Word dump__HeadVar__3_3)
{
  {
    MR_bool dump__succeeded;
    MR_Integer dump__Cast_HeadVar1_4 = (MR_Integer) dump__HeadVar__2_2;
    MR_Integer dump__Cast_HeadVar2_5 = (MR_Integer) dump__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(dump__HeadVar__1_1, dump__Cast_HeadVar1_4, dump__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
dump____Unify____dump_cliques_0_0(
  MR_Word dump__HeadVar__2_1,
  MR_Word dump__HeadVar__2_2)
{
  {
    MR_bool dump__succeeded = (dump__HeadVar__2_1 == dump__HeadVar__2_2);

    return dump__succeeded;
  }
}

static void MR_CALL 
dump__dump_call_site_calls_4_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box * dump__wrapper_arg_3)
{
  {
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__dump_call_site_calls_to_proc_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Word) dump__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
dump__dump_call_site_calls_4_p_0(
  MR_Integer dump__Index_5,
  MR_Word dump__CalleeMap_6)
{
  {
    MR_bool dump__succeeded;
    MR_Word dump__CalleeList_8;

    {
      dump__CalleeList_8 = mercury__map__to_assoc_list_1_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &dump_scalar_common_1[4], dump__CalleeMap_6);
    }
    if ((dump__CalleeList_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word dump__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__CalleeList_8, (MR_Integer) 1)));
        MR_Word dump__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__CalleeList_8, (MR_Integer) 0)));

        if ((dump__Var_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String dump__Var_55;

            {
              mercury__io__write_string_3_p_0((MR_String) "css");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Index_5, &dump__Var_55);
            }
            {
              mercury__io__write_string_3_p_0(dump__Var_55);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " calls one procedure: ");
            }
            {
              dump__dump_call_site_calls_to_proc_4_p_0((MR_String) "", dump__Var_40);
            }
          }
        else
          {
            MR_String dump__Var_44;
            MR_Box dump__conv0_STATE_VARIABLE_IO_14;

            {
              mercury__io__write_string_3_p_0((MR_String) "css");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Index_5, &dump__Var_44);
            }
            {
              mercury__io__write_string_3_p_0(dump__Var_44);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " calls several procedures:\n");
            }
            {
              mercury__list__foldl_4_p_2((MR_Word) &dump_scalar_common_2[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &dump_scalar_common_10[0], dump__CalleeList_8, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_14);
            }
          }
      }
  }
}

static void MR_CALL 
dump__dump_call_site_calls_to_proc_4_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box * dump__wrapper_arg_3)
{
  {
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__dump_space_csdptr_3_p_0(((MR_Word) dump__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
dump__dump_call_site_calls_to_proc_4_p_0(
  MR_String dump__Prefix_5,
  MR_Word dump__HeadVar__2_2)
{
  {
    MR_bool dump__succeeded;
    MR_Word dump__PSPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word dump__CSDPtrs_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__HeadVar__2_2, (MR_Integer) 1)));
    MR_Integer dump__PSNum_9 = (MR_Integer) dump__PSPtr_6;
    MR_String dump__Var_31;
    MR_Box dump__conv0_STATE_VARIABLE_IO_20_20;

    {
      mercury__io__write_string_3_p_0(dump__Prefix_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "ps");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__PSNum_9, &dump__Var_31);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_31);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ":");
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &dump_scalar_common_2[19], dump__CSDPtrs_7, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_20_20);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
dump__dump_call_site_dynamic_to_static_4_p_0(
  MR_Integer dump__Index_5,
  MR_Word dump__CSSPtr_6)
{
  {
    MR_bool dump__succeeded;
    MR_Integer dump__CSSNum_8 = (MR_Integer) dump__CSSPtr_6;
    MR_String dump__Var_21;
    MR_Word dump__Var_27;
    MR_String dump__Var_31;

    {
      mercury__io__write_string_3_p_0((MR_String) "csd");
    }
    dump__Var_27 = (MR_Word) &dump_scalar_common_4[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_27, dump__Index_5, &dump__Var_21);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_21);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " is at css");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_27, dump__CSSNum_8, &dump__Var_31);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_31);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
dump__dump_space_csdptr_3_p_0(
  MR_Word dump__CSDPtr_4)
{
  {
    MR_bool dump__succeeded;
    MR_Integer dump__CSDNum_6 = (MR_Integer) dump__CSDPtr_4;

    {
      mercury__io__write_string_3_p_0((MR_String) " csd");
    }
    {
      mercury__io__write_int_3_p_0(dump__CSDNum_6);
    }
  }
}

static void MR_CALL 
dump__dump_proc_static_caller_csds_4_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box * dump__wrapper_arg_3)
{
  {
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__dump_space_csdptr_3_p_0(((MR_Word) dump__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
dump__dump_proc_static_caller_csds_4_p_0(
  MR_Integer dump__Index_5,
  MR_Word dump__CallerCSDs_6)
{
  {
    MR_bool dump__succeeded;

    if ((dump__CallerCSDs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_String dump__Var_28;
        MR_Box dump__conv0_STATE_VARIABLE_IO_18_18;

        {
          mercury__io__write_string_3_p_0((MR_String) "ps");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Index_5, &dump__Var_28);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_28);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " callers:");
        }
        {
          mercury__list__foldl_4_p_2((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &dump_scalar_common_2[18], dump__CallerCSDs_6, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_18_18);
        }
        {
          mercury__io__nl_2_p_0();
        }
      }
  }
}

static void MR_CALL 
dump__dump_clique_maybe_child_4_p_0(
  MR_Integer dump__Index_5,
  MR_Word dump__MaybeCliquePtr_6)
{
  {
    MR_bool dump__succeeded;

    if ((dump__MaybeCliquePtr_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word dump__CliquePtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__MaybeCliquePtr_6, (MR_Integer) 0)));
        MR_Integer dump__CliqueNum_9 = (MR_Integer) dump__CliquePtr_8;
        MR_String dump__Var_22;
        MR_Word dump__Var_28;
        MR_String dump__Var_32;

        {
          mercury__io__write_string_3_p_0((MR_String) "csd");
        }
        dump__Var_28 = (MR_Word) &dump_scalar_common_4[0];
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_28, dump__Index_5, &dump__Var_22);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_22);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " child: clique");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_28, dump__CliqueNum_9, &dump__Var_32);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_32);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
  }
}

static void MR_CALL 
dump__dump_clique_parent_4_p_0(
  MR_Integer dump__Index_5,
  MR_Word dump__CSDPtr_6)
{
  {
    MR_bool dump__succeeded;
    MR_Integer dump__CSDNum_8 = (MR_Integer) dump__CSDPtr_6;
    MR_String dump__Var_21;
    MR_Word dump__Var_27;
    MR_String dump__Var_31;

    {
      mercury__io__write_string_3_p_0((MR_String) "clique");
    }
    dump__Var_27 = (MR_Word) &dump_scalar_common_4[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_27, dump__Index_5, &dump__Var_21);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_21);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " parent: csd");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_27, dump__CSDNum_8, &dump__Var_31);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_31);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
dump__dump_pd_in_clique_3_p_0(
  MR_Word dump__PDPtr_4)
{
  {
    MR_bool dump__succeeded;
    MR_Integer dump__PDNum_6 = (MR_Integer) dump__PDPtr_4;

    {
      mercury__io__write_string_3_p_0((MR_String) " pd");
    }
    {
      mercury__io__write_int_3_p_0(dump__PDNum_6);
    }
  }
}

static void MR_CALL 
dump__dump_clique_members_4_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box * dump__wrapper_arg_3)
{
  {
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__dump_pd_in_clique_3_p_0(((MR_Word) dump__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
dump__dump_clique_members_4_p_0(
  MR_Integer dump__Index_5,
  MR_Word dump__CliqueMembers_6)
{
  {
    MR_bool dump__succeeded;
    MR_String dump__Var_26;
    MR_Box dump__conv0_STATE_VARIABLE_IO_16_16;

    {
      mercury__io__write_string_3_p_0((MR_String) "clique");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Index_5, &dump__Var_26);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_26);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " members:");
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &dump_scalar_common_2[17], dump__CliqueMembers_6, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_16_16);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
dump__dump_clique_index_entry_4_p_0(
  MR_Integer dump__Index_5,
  MR_Word dump__CliquePtr_6)
{
  {
    MR_bool dump__succeeded;
    MR_Integer dump__CliqueNum_8 = (MR_Integer) dump__CliquePtr_6;
    MR_String dump__Var_21;
    MR_Word dump__Var_27;
    MR_String dump__Var_31;

    {
      mercury__io__write_string_3_p_0((MR_String) "pd");
    }
    dump__Var_27 = (MR_Word) &dump_scalar_common_4[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_27, dump__Index_5, &dump__Var_21);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_21);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " is in clique");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_27, dump__CliqueNum_8, &dump__Var_31);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_31);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
dump__dump_coverage_point_info_4_p_0(
  MR_Integer dump__Num_5,
  MR_Word dump__CoveragePointInfo_6)
{
  {
    MR_bool dump__succeeded;
    MR_String dump__CPInfoStr_8;
    MR_Word dump__RevPath_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CoveragePointInfo_6, (MR_Integer) 0)));
    MR_Word dump__CPType_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CoveragePointInfo_6, (MR_Integer) 1)));
    MR_String dump__PathString_24;
    MR_String dump__Var_30;
    MR_String dump__Var_36;
    MR_String dump__Var_37;
    MR_String dump__Var_39;
    MR_String dump__Var_40;
    MR_String dump__Var_47;

    {
      dump__PathString_24 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(dump__RevPath_22);
    }
    {
      dump__Var_30 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0, ((MR_Box) (dump__CPType_23)));
    }
    {
      dump__Var_36 = mercury__string__f_43_43_2_f_0((MR_String) ", ", dump__PathString_24);
    }
    {
      dump__Var_37 = mercury__string__f_43_43_2_f_0(dump__Var_30, dump__Var_36);
    }
    {
      dump__Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "]: ", dump__Var_37);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Num_5, &dump__Var_40);
    }
    {
      dump__Var_47 = mercury__string__f_43_43_2_f_0(dump__Var_40, dump__Var_39);
    }
    {
      dump__CPInfoStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "coverage_point[", dump__Var_47);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
    {
      mercury__io__write_string_3_p_0(dump__CPInfoStr_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
dump__dump_coverage_point_5_p_0(
  MR_Word dump__CoveragePoint_6,
  MR_Integer dump__STATE_VARIABLE_Num_0_14,
  MR_Integer * dump__STATE_VARIABLE_Num_15)
{
  {
    MR_bool dump__succeeded;
    MR_Integer dump__Count_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__CoveragePoint_6, (MR_Integer) 0)));
    MR_String dump__CPInfoStr_13;
    MR_String dump__Var_33;
    MR_Word dump__RevPath_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CoveragePoint_6, (MR_Integer) 1)));
    MR_Word dump__CPType_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CoveragePoint_6, (MR_Integer) 2)));
    MR_String dump__PathString_45;
    MR_String dump__Var_51;
    MR_String dump__Var_57;
    MR_String dump__Var_58;
    MR_String dump__Var_60;
    MR_String dump__Var_61;
    MR_Word dump__Var_67;
    MR_String dump__Var_68;

    {
      dump__PathString_45 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(dump__RevPath_43);
    }
    {
      dump__Var_51 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0, ((MR_Box) (dump__CPType_44)));
    }
    {
      dump__Var_57 = mercury__string__f_43_43_2_f_0((MR_String) ", ", dump__PathString_45);
    }
    {
      dump__Var_58 = mercury__string__f_43_43_2_f_0(dump__Var_51, dump__Var_57);
    }
    {
      dump__Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "]: ", dump__Var_58);
    }
    dump__Var_67 = (MR_Word) &dump_scalar_common_4[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_67, dump__STATE_VARIABLE_Num_0_14, &dump__Var_61);
    }
    {
      dump__Var_68 = mercury__string__f_43_43_2_f_0(dump__Var_61, dump__Var_60);
    }
    {
      dump__CPInfoStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "coverage_point[", dump__Var_68);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
    {
      mercury__io__write_string_3_p_0(dump__CPInfoStr_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_67, dump__Count_9, &dump__Var_33);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_33);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    *dump__STATE_VARIABLE_Num_15 = (dump__STATE_VARIABLE_Num_0_14 + (MR_Integer) 1);
  }
}

static void MR_CALL 
dump__dump_proc_static_call_sites_4_p_0(
  MR_Integer dump__Slot_5,
  MR_Word dump__CSSPtr_6)
{
  {
    MR_bool dump__succeeded;
    MR_Integer dump__CSSI_8 = (MR_Integer) dump__CSSPtr_6;
    MR_String dump__Var_21;
    MR_Word dump__Var_27;
    MR_String dump__Var_31;

    {
      mercury__io__write_string_3_p_0((MR_String) "\tps_site[");
    }
    dump__Var_27 = (MR_Word) &dump_scalar_common_4[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_27, dump__Slot_5, &dump__Var_21);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_21);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "]: css");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_27, dump__CSSI_8, &dump__Var_31);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_31);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
dump__dump_proc_static_5_p_0_3(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box * dump__wrapper_arg_3,
  MR_Box dump__wrapper_arg_4,
  MR_Box * dump__wrapper_arg_5)
{
  {
    MR_Box dump__closure = dump__closure_arg;
    MR_Integer dump__conv2_STATE_VARIABLE_Num_15;

    {
      dump__dump_coverage_point_5_p_0(((MR_Word) dump__wrapper_arg_1), ((MR_Integer) dump__wrapper_arg_2), &dump__conv2_STATE_VARIABLE_Num_15);
    }
    *dump__wrapper_arg_3 = ((MR_Box) (dump__conv2_STATE_VARIABLE_Num_15));
  }
}

static void MR_CALL 
dump__dump_proc_static_5_p_0_2(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4)
{
  {
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__dump_coverage_point_info_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
dump__dump_proc_static_5_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4)
{
  {
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__dump_proc_static_call_sites_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
dump__dump_proc_static_5_p_0(
  MR_Word dump__Restriction_6,
  MR_Integer dump__Index_7,
  MR_Word dump__ProcStatic_8)
{
  {
    MR_bool dump__succeeded;

    if ((dump__Restriction_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      dump__succeeded = MR_TRUE;
    else
      {
        MR_Word dump__UsedProcStatics_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__Restriction_6, (MR_Integer) 0)));
        MR_Word dump__Var_31 = (MR_Word) dump__Index_7;
        MR_Word dump__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__Restriction_6, (MR_Integer) 1)));

        {
          dump__succeeded = mercury__set__member_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, ((MR_Box) (dump__Var_31)), dump__UsedProcStatics_10);
        }
      }
    if (dump__succeeded)
      {
        MR_Word dump__TypeCtorInfo_90_90;
        MR_Word dump__Id_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 0)));
        MR_String dump__DeclModule_13 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 1)));
        MR_String dump__QualRefinedId_15 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 3)));
        MR_String dump__RawId_16 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 4)));
        MR_String dump__FileName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 5)));
        MR_Integer dump__LineNumber_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 6)));
        MR_Word dump__InInterface_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 7)));
        MR_ArrayPtr dump__Sites_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 8)));
        MR_ArrayPtr dump__CoveragePointInfos_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 9)));
        MR_Word dump__MaybeCoveragePoints_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 10)));
        MR_Word dump__IsZeroed_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 11)));
        MR_String dump__IdStr_24;
        MR_String dump__IsZeroStr_25;
        MR_String dump__Var_108;
        MR_Word dump__Var_114;
        MR_String dump__Var_136;
        MR_String dump___UnQualRefinedId_14 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_8, (MR_Integer) 2)));
        MR_String dump__Var_48;
        MR_String dump__Var_104;
        MR_Box dump__conv0_STATE_VARIABLE_IO_75_75;

        {
          dump__IdStr_24 = dump__dump_proc_id_1_f_0(dump__Id_12);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "ps");
        }
        dump__Var_114 = (MR_Word) &dump_scalar_common_4[0];
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_114, dump__Index_7, &dump__Var_108);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_108);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ":\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\tps_id\t\t= ");
        }
        {
          mercury__io__write_string_3_p_0(dump__IdStr_24);
        }
        {
          mercury__io__nl_2_p_0();
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\tps_decl_module\t= ");
        }
        {
          mercury__io__write_string_3_p_0(dump__DeclModule_13);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        {
          dump__Var_48 = mercury__string__f_43_43_2_f_0((MR_String) ".", dump__IdStr_24);
        }
        {
          dump__Var_104 = mercury__string__f_43_43_2_f_0(dump__DeclModule_13, dump__Var_48);
        }
        dump__succeeded = (strcmp(dump__QualRefinedId_15, dump__Var_104) == 0);
        if (dump__succeeded)
          {
          }
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "\tps_q_refined_id\t= ");
            }
            {
              mercury__io__write_string_3_p_0(dump__QualRefinedId_15);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        dump__succeeded = (strcmp(dump__QualRefinedId_15, dump__RawId_16) == 0);
        dump__succeeded = !(dump__succeeded);
        if (dump__succeeded)
          {
          }
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "\tps_raw_id\t= ");
            }
            {
              mercury__io__write_string_3_p_0(dump__RawId_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        {
          mercury__io__write_string_3_p_0((MR_String) "\tlocation\t= ");
        }
        {
          mercury__io__write_string_3_p_0(dump__FileName_17);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ":");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_114, dump__LineNumber_18, &dump__Var_136);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_136);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        switch (dump__InInterface_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "\tin_interface\n");
              }
            }
            break;
        }
        switch (dump__IsZeroed_23) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            dump__IsZeroStr_25 = (MR_String) "not_zeroed";
            break;
          case (MR_Integer) 0:
            dump__IsZeroStr_25 = (MR_String) "zeroed";
            break;
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
        {
          mercury__io__write_string_3_p_0(dump__IsZeroStr_25);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        dump__TypeCtorInfo_90_90 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
        {
          array_util__array_foldl_from_0_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, dump__TypeCtorInfo_90_90, (MR_Word) &dump_scalar_common_2[14], (MR_ArrayPtr) dump__Sites_20, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_75_75);
        }
        if ((dump__MaybeCoveragePoints_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Box dump__conv1_STATE_VARIABLE_IO_82_82;

            {
              mercury__io__write_string_3_p_0((MR_String) "\tCoverage counts not present in proc static\n");
            }
            {
              array_util__array_foldl_from_0_4_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, dump__TypeCtorInfo_90_90, (MR_Word) &dump_scalar_common_2[15], (MR_ArrayPtr) dump__CoveragePointInfos_21, ((MR_Box) ((MR_Integer) 0)), &dump__conv1_STATE_VARIABLE_IO_82_82);
            }
          }
        else
          {
            MR_ArrayPtr dump__CoveragePointsArray_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), dump__MaybeCoveragePoints_22, (MR_Integer) 0)));
            MR_Word dump__CoveragePoints_27;
            MR_Integer dump__Var_28;
            MR_Box dump__conv4_Var_28;
            MR_Box dump__conv3_STATE_VARIABLE_IO_82_82;

            {
              coverage__coverage_point_arrays_to_list_3_p_0(dump__CoveragePointInfos_21, dump__CoveragePointsArray_26, &dump__CoveragePoints_27);
            }
            {
              mercury__list__foldl2_6_p_2((MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, dump__TypeCtorInfo_90_90, (MR_Word) &dump_scalar_common_2[16], dump__CoveragePoints_27, ((MR_Box) ((MR_Integer) 0)), &dump__conv4_Var_28, ((MR_Box) ((MR_Integer) 0)), &dump__conv3_STATE_VARIABLE_IO_82_82);
            }
            dump__Var_28 = ((MR_Integer) dump__conv4_Var_28);
          }
        {
          mercury__io__nl_2_p_0();
        }
      }
    else
      {
      }
  }
}

static MR_String MR_CALL 
dump__dump_proc_id_1_f_0(
  MR_Word dump__Proc_1)
{
  {
    MR_bool dump__succeeded;
    MR_String dump__Str_2;

    if (((MR_tag((MR_Word) dump__Proc_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word dump__PredOrFunc_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Proc_1, (MR_Integer) 0)));
        MR_String dump__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Proc_1, (MR_Integer) 3)));
        MR_Integer dump__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Proc_1, (MR_Integer) 4)));
        MR_Integer dump__Mode_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Proc_1, (MR_Integer) 5)));
        MR_String dump__Suffix_11;
        MR_String dump__Var_40;
        MR_Word dump__Var_46;
        MR_String dump__Var_47;
        MR_String dump__Var_49;
        MR_String dump__Var_50;
        MR_String dump__Var_57;
        MR_String dump__Var_59;
        MR_String dump___DeclModule_6 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Proc_1, (MR_Integer) 1)));
        MR_String dump___DefnModule_7 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Proc_1, (MR_Integer) 2)));

        switch (dump__PredOrFunc_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            dump__Suffix_11 = (MR_String) "+1";
            break;
          case (MR_Integer) 0:
            dump__Suffix_11 = (MR_String) "";
            break;
        }
        dump__Var_46 = (MR_Word) &dump_scalar_common_4[0];
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_46, dump__Mode_10, &dump__Var_40);
        }
        {
          dump__Var_47 = mercury__string__f_43_43_2_f_0(dump__Var_40, dump__Suffix_11);
        }
        {
          dump__Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "-", dump__Var_47);
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_46, dump__Arity_9, &dump__Var_50);
        }
        {
          dump__Var_57 = mercury__string__f_43_43_2_f_0(dump__Var_50, dump__Var_49);
        }
        {
          dump__Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "/", dump__Var_57);
        }
        {
          dump__Str_2 = mercury__string__f_43_43_2_f_0(dump__Name_8, dump__Var_59);
        }
      }
    else
      {
        MR_String dump__Type_24 = ((MR_String) (MR_hl_field(MR_mktag(1), dump__Proc_1, (MR_Integer) 0)));
        MR_String dump__Name_27 = ((MR_String) (MR_hl_field(MR_mktag(1), dump__Proc_1, (MR_Integer) 3)));
        MR_String dump__Var_37;
        MR_String dump__Var_39;
        MR_String dump___TypeModule_25 = ((MR_String) (MR_hl_field(MR_mktag(1), dump__Proc_1, (MR_Integer) 1)));
        MR_String dump___DefModule_26 = ((MR_String) (MR_hl_field(MR_mktag(1), dump__Proc_1, (MR_Integer) 2)));
        MR_Integer dump___Arity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), dump__Proc_1, (MR_Integer) 4)));
        MR_Integer dump___Mode_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), dump__Proc_1, (MR_Integer) 5)));

        {
          dump__Var_37 = mercury__string__f_43_43_2_f_0(dump__Type_24, (MR_String) "\'");
        }
        {
          dump__Var_39 = mercury__string__f_43_43_2_f_0((MR_String) " predicate for type \140", dump__Var_37);
        }
        {
          dump__Str_2 = mercury__string__f_43_43_2_f_0(dump__Name_27, dump__Var_39);
        }
      }
    return dump__Str_2;
  }
}

static void MR_CALL 
dump__dump_call_site_static_5_p_0(
  MR_Word dump__Restriction_6,
  MR_Integer dump__Index_7,
  MR_Word dump__CallSiteStatic_8)
{
  {
    MR_bool dump__succeeded;

    if ((dump__Restriction_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      dump__succeeded = MR_TRUE;
    else
      {
        MR_Word dump__UsedCallSiteStatics_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__Restriction_6, (MR_Integer) 1)));
        MR_Word dump__Var_21 = (MR_Word) dump__Index_7;
        MR_Word dump__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__Restriction_6, (MR_Integer) 0)));

        {
          dump__succeeded = mercury__set__member_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, ((MR_Box) (dump__Var_21)), dump__UsedCallSiteStatics_11);
        }
      }
    if (dump__succeeded)
      {
        MR_Word dump__ContainerPSPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CallSiteStatic_8, (MR_Integer) 0)));
        MR_Integer dump__SlotNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__CallSiteStatic_8, (MR_Integer) 1)));
        MR_Word dump__Kind_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CallSiteStatic_8, (MR_Integer) 2)));
        MR_Integer dump__LineNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__CallSiteStatic_8, (MR_Integer) 3)));
        MR_Word dump__GoalPath_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CallSiteStatic_8, (MR_Integer) 4)));
        MR_Integer dump__ContainerPSI_17 = (MR_Integer) dump__ContainerPSPtr_12;
        MR_String dump__GoalPathString_18;
        MR_String dump__Var_56;
        MR_Word dump__Var_62;
        MR_String dump__Var_67;
        MR_String dump__Var_78;
        MR_String dump__Var_89;

        {
          dump__GoalPathString_18 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(dump__GoalPath_16);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "css");
        }
        dump__Var_62 = (MR_Word) &dump_scalar_common_4[0];
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_62, dump__Index_7, &dump__Var_56);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_56);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ":\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\tcss_container\t= ps");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_62, dump__ContainerPSI_17, &dump__Var_67);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_67);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\tcss_slot_num\t= <");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_62, dump__SlotNum_13, &dump__Var_78);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_78);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ">\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\tcss_line_num\t= <");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_62, dump__LineNum_15, &dump__Var_89);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_89);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ">\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\tcss_goal_path\t= <");
        }
        {
          mercury__io__write_string_3_p_0(dump__GoalPathString_18);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ">\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\tcss_kind\t= ");
        }
        {
          dump__dump_call_site_kind_and_callee_3_p_0(dump__Kind_14);
        }
        {
          mercury__io__nl_2_p_0();
        }
        {
          mercury__io__nl_2_p_0();
        }
      }
    else
      {
      }
  }
}

static void MR_CALL 
dump__dump_call_site_kind_and_callee_3_p_0(
  MR_Word dump__HeadVar__1_1)
{
  {
    MR_bool dump__succeeded;

    switch (MR_tag((MR_Word) dump__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(dump__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "special_call");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "higher_order_call");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "method_call");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "callback");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word dump__Ptr_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__HeadVar__1_1, (MR_Integer) 0)));
          MR_String dump__String_5 = ((MR_String) (MR_hl_field(MR_mktag(1), dump__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer dump__Val_7 = (MR_Integer) dump__Ptr_4;
          MR_String dump__Var_40;

          {
            mercury__io__write_string_3_p_0((MR_String) "normal_call(");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Val_7, &dump__Var_40);
          }
          {
            mercury__io__write_string_3_p_0(dump__Var_40);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ", \"");
          }
          {
            mercury__io__write_string_3_p_0(dump__String_5);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\")");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
dump__dump_call_site_array_slot_4_p_0(
  MR_Integer dump__Index_5,
  MR_Word dump__CSA_slot_6)
{
  {
    MR_bool dump__succeeded;
    MR_String dump__Var_16;
    MR_String dump__Var_21;

    if (((MR_tag((MR_Word) dump__CSA_slot_6)) == (MR_mktag((MR_Integer) 1))))
      dump__Var_16 = (MR_String) "multi";
    else
      {
        MR_Integer dump__CSDI_32;
        MR_Word dump__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CSA_slot_6, (MR_Integer) 0)));
        MR_String dump__Var_41;
        MR_String dump__Var_48;

        dump__CSDI_32 = (MR_Integer) dump__Var_33;
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__CSDI_32, &dump__Var_41);
        }
        {
          dump__Var_48 = mercury__string__f_43_43_2_f_0(dump__Var_41, (MR_String) ")");
        }
        {
          dump__Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "normal(csd", dump__Var_48);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tpd_site[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Index_5, &dump__Var_21);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_21);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = ");
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
dump__dump_proc_dynamic_5_p_0_2(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box * dump__wrapper_arg_3,
  MR_Box dump__wrapper_arg_4,
  MR_Box * dump__wrapper_arg_5)
{
  {
    MR_Box dump__closure = dump__closure_arg;
    MR_Integer dump__conv1_STATE_VARIABLE_Num_15;

    {
      dump__dump_coverage_point_5_p_0(((MR_Word) dump__wrapper_arg_1), ((MR_Integer) dump__wrapper_arg_2), &dump__conv1_STATE_VARIABLE_Num_15);
    }
    *dump__wrapper_arg_3 = ((MR_Box) (dump__conv1_STATE_VARIABLE_Num_15));
  }
}

static void MR_CALL 
dump__dump_proc_dynamic_5_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4)
{
  {
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__dump_call_site_array_slot_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
dump__dump_proc_dynamic_5_p_0(
  MR_ArrayPtr dump__ProcStatics_6,
  MR_Integer dump__Index_7,
  MR_Word dump__ProcDynamic_8)
{
  {
    MR_bool dump__succeeded;
    MR_Word dump__TypeCtorInfo_81_81;
    MR_Word dump__PSPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcDynamic_8, (MR_Integer) 0)));
    MR_ArrayPtr dump__Sites_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__ProcDynamic_8, (MR_Integer) 1)));
    MR_Word dump__MaybeCPs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcDynamic_8, (MR_Integer) 2)));
    MR_Integer dump__PSI_13 = (MR_Integer) dump__PSPtr_10;
    MR_Word dump__PS_14;
    MR_String dump__QualRefinedPSId_15;
    MR_String dump__Var_92;
    MR_Word dump__Var_98;
    MR_String dump__Var_103;
    MR_String dump__Var_22;
    MR_Word dump__Var_43;
    MR_String dump__Var_44;
    MR_String dump__Var_45;
    MR_String dump__Var_46;
    MR_String dump__Var_47;
    MR_Integer dump__Var_48;
    MR_Word dump__Var_49;
    MR_ArrayPtr dump__Var_50;
    MR_ArrayPtr dump__Var_51;
    MR_Word dump__Var_52;
    MR_Word dump__Var_53;
    MR_Box dump__conv0_STATE_VARIABLE_IO_36_36;

    {
      profile__lookup_proc_statics_3_p_0(dump__ProcStatics_6, dump__PSPtr_10, &dump__PS_14);
    }
    dump__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 0)));
    dump__Var_44 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 1)));
    dump__Var_45 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 2)));
    dump__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 3)));
    dump__Var_46 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 4)));
    dump__Var_47 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 5)));
    dump__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 6)));
    dump__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 7)));
    dump__Var_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 8)));
    dump__Var_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 9)));
    dump__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 10)));
    dump__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 11)));
    dump__succeeded = (strcmp(dump__Var_22, (MR_String) "") == 0);
    if (dump__succeeded)
      dump__QualRefinedPSId_15 = (MR_String) "UNKNOWN_PS";
    else
      {
        MR_Word dump__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 0)));
        MR_String dump__Var_55 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 1)));
        MR_String dump__Var_56 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 2)));
        MR_String dump__Var_57;
        MR_String dump__Var_58;
        MR_Integer dump__Var_59;
        MR_Word dump__Var_60;
        MR_ArrayPtr dump__Var_61;
        MR_ArrayPtr dump__Var_62;
        MR_Word dump__Var_63;
        MR_Word dump__Var_64;

        dump__QualRefinedPSId_15 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 3)));
        dump__Var_57 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 4)));
        dump__Var_58 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 5)));
        dump__Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 6)));
        dump__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 7)));
        dump__Var_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 8)));
        dump__Var_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 9)));
        dump__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 10)));
        dump__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 11)));
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "pd");
    }
    dump__Var_98 = (MR_Word) &dump_scalar_common_4[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_98, dump__Index_7, &dump__Var_92);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_92);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tpd_proc_static = ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_98, dump__PSI_13, &dump__Var_103);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_103);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " (");
    }
    {
      mercury__io__write_string_3_p_0(dump__QualRefinedPSId_15);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")\n");
    }
    dump__TypeCtorInfo_81_81 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      array_util__array_foldl_from_0_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, dump__TypeCtorInfo_81_81, (MR_Word) &dump_scalar_common_2[12], (MR_ArrayPtr) dump__Sites_11, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_36_36);
    }
    if ((dump__MaybeCPs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_ArrayPtr dump__CPCounts_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), dump__MaybeCPs_12, (MR_Integer) 0)));
        MR_ArrayPtr dump__CPInfos_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 9)));
        MR_Word dump__CPs_18;
        MR_Word dump__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 0)));
        MR_String dump__Var_66 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 1)));
        MR_String dump__Var_67 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 2)));
        MR_String dump__Var_68 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 3)));
        MR_String dump__Var_69 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 4)));
        MR_String dump__Var_70 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 5)));
        MR_Integer dump__Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 6)));
        MR_Word dump__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 7)));
        MR_ArrayPtr dump__Var_73 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 8)));
        MR_Word dump__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 10)));
        MR_Word dump__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__PS_14, (MR_Integer) 11)));
        MR_Integer dump__Var_19;
        MR_Box dump__conv3_Var_19;
        MR_Box dump__conv2_STATE_VARIABLE_IO_41_41;

        {
          coverage__coverage_point_arrays_to_list_3_p_0(dump__CPInfos_17, dump__CPCounts_16, &dump__CPs_18);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "Coverage points:\n");
        }
        {
          mercury__list__foldl2_6_p_2((MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, dump__TypeCtorInfo_81_81, (MR_Word) &dump_scalar_common_2[13], dump__CPs_18, ((MR_Box) ((MR_Integer) 0)), &dump__conv3_Var_19, ((MR_Box) ((MR_Integer) 0)), &dump__conv2_STATE_VARIABLE_IO_41_41);
        }
        dump__Var_19 = ((MR_Integer) dump__conv3_Var_19);
      }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
dump__dump_call_site_dynamic_4_p_0(
  MR_Integer dump__Index_5,
  MR_Word dump__CallSiteDynamic_6)
{
  {
    MR_bool dump__succeeded;
    MR_Word dump__CallerPDPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CallSiteDynamic_6, (MR_Integer) 0)));
    MR_Word dump__CalleePDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CallSiteDynamic_6, (MR_Integer) 1)));
    MR_Word dump__Own_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CallSiteDynamic_6, (MR_Integer) 2)));
    MR_Integer dump__CallerPDI_11 = (MR_Integer) dump__CallerPDPtr_8;
    MR_Integer dump__CalleePDI_12 = (MR_Integer) dump__CalleePDPtr_9;
    MR_String dump__Var_35;
    MR_Word dump__Var_41;
    MR_String dump__Var_46;
    MR_String dump__Var_57;

    {
      mercury__io__write_string_3_p_0((MR_String) "csd");
    }
    dump__Var_41 = (MR_Word) &dump_scalar_common_4[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_41, dump__Index_5, &dump__Var_35);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_35);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tcsd_caller = pd");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_41, dump__CallerPDI_11, &dump__Var_46);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_46);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tcsd_callee = pd");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_41, dump__CalleePDI_12, &dump__Var_57);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_57);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      dump__dump_own_prof_info_3_p_0(dump__Own_10);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
dump__get_static_ptrs_from_dynamic_proc_7_p_0(
  MR_ArrayPtr dump__ProcStatics_8,
  MR_Integer dump__HeadVar__2_9,
  MR_Word dump__ProcDynamic_10,
  MR_Word dump__STATE_VARIABLE_PS_Ptrs_0_16,
  MR_Word * dump__STATE_VARIABLE_PS_Ptrs_17,
  MR_Word dump__STATE_VARIABLE_CSS_Ptrs_0_18,
  MR_Word * dump__STATE_VARIABLE_CSS_Ptrs_19)
{
  {
    MR_bool dump__succeeded;

    {
      dump__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(dump__ProcStatics_8, dump__ProcDynamic_10, dump__STATE_VARIABLE_PS_Ptrs_0_16, dump__STATE_VARIABLE_PS_Ptrs_17, dump__STATE_VARIABLE_CSS_Ptrs_0_18, dump__STATE_VARIABLE_CSS_Ptrs_19);
    }
  }
}

static void MR_CALL 
dump__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
  MR_ArrayPtr dump__ProcStatics_8,
  MR_Word dump__ProcDynamic_10,
  MR_Word dump__STATE_VARIABLE_PS_Ptrs_0_16,
  MR_Word * dump__STATE_VARIABLE_PS_Ptrs_17,
  MR_Word dump__STATE_VARIABLE_CSS_Ptrs_0_18,
  MR_Word * dump__STATE_VARIABLE_CSS_Ptrs_19)
{
  {
    MR_bool dump__succeeded;
    MR_Word dump__TypeCtorInfo_37_37;
    MR_Word dump__ProcStaticPtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcDynamic_10, (MR_Integer) 0)));
    MR_Word dump__ProcStatic_14;
    MR_Word dump__CSSs_15;
    MR_ArrayPtr dump__Var_21;
    MR_ArrayPtr dump__Var_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__ProcDynamic_10, (MR_Integer) 1)));
    MR_Word dump__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcDynamic_10, (MR_Integer) 2)));
    MR_Word dump__Var_25;
    MR_String dump__Var_26;
    MR_String dump__Var_27;
    MR_String dump__Var_28;
    MR_String dump__Var_29;
    MR_String dump__Var_30;
    MR_Integer dump__Var_31;
    MR_Word dump__Var_32;
    MR_ArrayPtr dump__Var_33;
    MR_Word dump__Var_34;
    MR_Word dump__Var_35;

    {
      mercury__set__insert_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, ((MR_Box) (dump__ProcStaticPtr_13)), dump__STATE_VARIABLE_PS_Ptrs_0_16, dump__STATE_VARIABLE_PS_Ptrs_17);
    }
    {
      profile__lookup_proc_statics_3_p_0(dump__ProcStatics_8, dump__ProcStaticPtr_13, &dump__ProcStatic_14);
    }
    dump__TypeCtorInfo_37_37 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
    dump__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 0)));
    dump__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 1)));
    dump__Var_27 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 2)));
    dump__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 3)));
    dump__Var_29 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 4)));
    dump__Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 5)));
    dump__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 6)));
    dump__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 7)));
    dump__Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 8)));
    dump__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 9)));
    dump__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 10)));
    dump__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__ProcStatic_14, (MR_Integer) 11)));
    {
      dump__CSSs_15 = mercury__array__to_list_1_f_0(dump__TypeCtorInfo_37_37, (MR_ArrayPtr) dump__Var_21);
    }
    {
      mercury__set__insert_list_3_p_0(dump__TypeCtorInfo_37_37, dump__CSSs_15, dump__STATE_VARIABLE_CSS_Ptrs_0_18, dump__STATE_VARIABLE_CSS_Ptrs_19);
    }
  }
}

static MR_bool MR_CALL 
dump__string_to_dumpable_array_2_p_0(
  MR_String dump__HeadVar__1_1,
  MR_Word * dump__HeadVar__2_2)
{
  {
    MR_bool dump__succeeded;
    MR_Integer dump__lo_0;
    MR_Integer dump__hi_1;
    MR_Integer dump__mid_2;
    MR_Integer dump__result_3;

    /* binary string simple lookup switch */
    dump__lo_0 = (MR_Integer) 0;
    dump__hi_1 = (MR_Integer) 3;
    do
      {
        dump__mid_2 = (((dump__lo_0 + dump__hi_1)) / (MR_Integer) 2);
        dump__result_3 = MR_strcmp(dump__HeadVar__1_1, ((&dump_vector_common_8[4 + dump__mid_2]))->dump__vector_common_type_8_0__vct_8_f_0);
        if ((dump__result_3 == (MR_Integer) 0))
          {
            *dump__HeadVar__2_2 = ((&dump_vector_common_8[4 + dump__mid_2]))->dump__vector_common_type_8_0__vct_8_f_1;
            dump__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((dump__result_3 < (MR_Integer) 0))
          dump__hi_1 = (dump__mid_2 - (MR_Integer) 1);
        else
          dump__lo_0 = (dump__mid_2 + (MR_Integer) 1);
      }
    while ((dump__lo_0 <= dump__hi_1));
    dump__succeeded = MR_FALSE;
  label_0:;
    return dump__succeeded;
  }
}

static void MR_CALL 
dump__det_string_to_dumpable_array_2_p_0(
  MR_String dump__String_3,
  MR_Word * dump__Array_4)
{
  {
    MR_bool dump__succeeded;
    MR_Word dump__ArrayP_5;
    MR_Integer dump__lo_0;
    MR_Integer dump__hi_1;
    MR_Integer dump__mid_2;
    MR_Integer dump__result_3;

    /* binary string simple lookup switch */
    dump__lo_0 = (MR_Integer) 0;
    dump__hi_1 = (MR_Integer) 3;
    do
      {
        dump__mid_2 = (((dump__lo_0 + dump__hi_1)) / (MR_Integer) 2);
        dump__result_3 = MR_strcmp(dump__String_3, ((&dump_vector_common_8[0 + dump__mid_2]))->dump__vector_common_type_8_0__vct_8_f_0);
        if ((dump__result_3 == (MR_Integer) 0))
          {
            dump__ArrayP_5 = ((&dump_vector_common_8[0 + dump__mid_2]))->dump__vector_common_type_8_0__vct_8_f_1;
            dump__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((dump__result_3 < (MR_Integer) 0))
          dump__hi_1 = (dump__mid_2 - (MR_Integer) 1);
        else
          dump__lo_0 = (dump__mid_2 + (MR_Integer) 1);
      }
    while ((dump__lo_0 <= dump__hi_1));
    dump__succeeded = MR_FALSE;
  label_0:;
    if (dump__succeeded)
      *dump__Array_4 = dump__ArrayP_5;
    else
      {
        MR_String dump__Var_8;

        {
          dump__Var_8 = mercury__string__f_43_43_2_f_0((MR_String) "Invalid array name in dump options: ", dump__String_3);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "dump", (MR_String) "predicate \140dump.det_string_to_dumpable_array\'/2", dump__Var_8);
          return;
        }
      }
  }
}

void MR_CALL 
dump__dump_deep_4_p_0(
  MR_Word dump__Deep_5,
  MR_Word dump__DumpOptions_6)
{
  {
    MR_bool dump__succeeded;
    MR_Word dump__DumpCliques_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word dump__DumpRevLinks_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word dump__DumpPropMeasurements_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word dump__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 0)));
    MR_Word dump__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 1)));
    MR_Word dump__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) & (MR_Integer) 1);

    switch (dump__DumpCliques_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 0:
        {
          dump__dump_deep_cliques_3_p_0(dump__Deep_5);
        }
        break;
    }
    switch (dump__DumpRevLinks_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 0:
        {
          dump__dump_deep_rev_links_3_p_0(dump__Deep_5);
        }
        break;
    }
    switch (dump__DumpPropMeasurements_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 0:
        {
          dump__dump_deep_prop_measurements_3_p_0(dump__Deep_5);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_4(
  MR_Box dump__closure_arg)
{
  {
    MR_bool dump__succeeded;
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__succeeded = dump__IntroducedFrom__pred__dump_deep_prop_measurements__873__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 4))));
    }
    return dump__succeeded;
  }
}

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_3(
  MR_Box dump__closure_arg)
{
  {
    MR_bool dump__succeeded;
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__succeeded = dump__IntroducedFrom__pred__dump_deep_prop_measurements__864__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 4))));
    }
    return dump__succeeded;
  }
}

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_2(
  MR_Box dump__closure_arg)
{
  {
    MR_bool dump__succeeded;
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__succeeded = dump__IntroducedFrom__pred__dump_deep_prop_measurements__855__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 4))));
    }
    return dump__succeeded;
  }
}

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_1(
  MR_Box dump__closure_arg)
{
  {
    MR_bool dump__succeeded;
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__succeeded = dump__IntroducedFrom__pred__dump_deep_prop_measurements__846__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 4))));
    }
    return dump__succeeded;
  }
}

static void MR_CALL 
dump__dump_deep_prop_measurements_3_p_0(
  MR_Word dump__Deep_4)
{
  {
    MR_bool dump__succeeded;
    MR_Word dump__TypeCtorInfo_272_272 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
    MR_Word dump__TypeCtorInfo_273_273;
    MR_ArrayPtr dump__PDOwn_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr dump__PDDesc_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
    MR_Integer dump__PDOwnMax_8;
    MR_Integer dump__PDDescMax_9;
    MR_ArrayPtr dump__CSDs_10;
    MR_ArrayPtr dump__CSDDesc_11;
    MR_Integer dump__CSDMax_12;
    MR_Integer dump__CSDDescMax_13;
    MR_ArrayPtr dump__PSOwn_14;
    MR_ArrayPtr dump__PSDesc_15;
    MR_Integer dump__PSOwnMax_16;
    MR_Integer dump__PSDescMax_17;
    MR_ArrayPtr dump__CSSOwn_18;
    MR_ArrayPtr dump__CSSDesc_19;
    MR_Integer dump__CSSOwnMax_20;
    MR_Integer dump__CSSDescMax_21;
    MR_Word dump__Var_24;
    MR_Word dump__Var_30;
    MR_Word dump__Var_36;
    MR_Word dump__Var_42;
    MR_Word dump__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
    MR_String dump__Var_49 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
    MR_String dump__Var_50 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
    MR_String dump__Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
    MR_Word dump__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr dump__Var_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr dump__Var_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr dump__Var_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr dump__Var_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr dump__Var_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr dump__Var_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr dump__Var_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr dump__Var_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr dump__Var_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr dump__Var_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr dump__Var_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr dump__Var_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr dump__Var_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr dump__Var_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr dump__Var_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr dump__Var_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr dump__Var_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr dump__Var_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
    MR_Word dump__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
    MR_Word dump__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
    MR_Word dump__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
    MR_Word dump__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
    MR_Word dump__Var_104;
    MR_String dump__Var_105;
    MR_String dump__Var_106;
    MR_String dump__Var_107;
    MR_Word dump__Var_108;
    MR_ArrayPtr dump__Var_109;
    MR_ArrayPtr dump__Var_110;
    MR_ArrayPtr dump__Var_111;
    MR_ArrayPtr dump__Var_112;
    MR_ArrayPtr dump__Var_113;
    MR_ArrayPtr dump__Var_114;
    MR_ArrayPtr dump__Var_115;
    MR_ArrayPtr dump__Var_116;
    MR_ArrayPtr dump__Var_117;
    MR_ArrayPtr dump__Var_118;
    MR_ArrayPtr dump__Var_119;
    MR_ArrayPtr dump__Var_120;
    MR_ArrayPtr dump__Var_122;
    MR_ArrayPtr dump__Var_123;
    MR_ArrayPtr dump__Var_124;
    MR_ArrayPtr dump__Var_125;
    MR_ArrayPtr dump__Var_126;
    MR_ArrayPtr dump__Var_127;
    MR_Word dump__Var_128;
    MR_Word dump__Var_129;
    MR_Word dump__Var_130;
    MR_Word dump__Var_131;
    MR_Word dump__Var_160;
    MR_String dump__Var_161;
    MR_String dump__Var_162;
    MR_String dump__Var_163;
    MR_Word dump__Var_164;
    MR_ArrayPtr dump__Var_165;
    MR_ArrayPtr dump__Var_166;
    MR_ArrayPtr dump__Var_167;
    MR_ArrayPtr dump__Var_168;
    MR_ArrayPtr dump__Var_169;
    MR_ArrayPtr dump__Var_170;
    MR_ArrayPtr dump__Var_171;
    MR_ArrayPtr dump__Var_172;
    MR_ArrayPtr dump__Var_173;
    MR_ArrayPtr dump__Var_174;
    MR_ArrayPtr dump__Var_175;
    MR_ArrayPtr dump__Var_176;
    MR_ArrayPtr dump__Var_177;
    MR_ArrayPtr dump__Var_178;
    MR_ArrayPtr dump__Var_180;
    MR_ArrayPtr dump__Var_181;
    MR_ArrayPtr dump__Var_182;
    MR_ArrayPtr dump__Var_183;
    MR_Word dump__Var_184;
    MR_Word dump__Var_185;
    MR_Word dump__Var_186;
    MR_Word dump__Var_187;
    MR_Word dump__Var_216;
    MR_String dump__Var_217;
    MR_String dump__Var_218;
    MR_String dump__Var_219;
    MR_Word dump__Var_220;
    MR_ArrayPtr dump__Var_221;
    MR_ArrayPtr dump__Var_222;
    MR_ArrayPtr dump__Var_223;
    MR_ArrayPtr dump__Var_224;
    MR_ArrayPtr dump__Var_225;
    MR_ArrayPtr dump__Var_226;
    MR_ArrayPtr dump__Var_227;
    MR_ArrayPtr dump__Var_228;
    MR_ArrayPtr dump__Var_229;
    MR_ArrayPtr dump__Var_230;
    MR_ArrayPtr dump__Var_231;
    MR_ArrayPtr dump__Var_232;
    MR_ArrayPtr dump__Var_233;
    MR_ArrayPtr dump__Var_234;
    MR_ArrayPtr dump__Var_235;
    MR_ArrayPtr dump__Var_236;
    MR_ArrayPtr dump__Var_238;
    MR_ArrayPtr dump__Var_239;
    MR_Word dump__Var_240;
    MR_Word dump__Var_241;
    MR_Word dump__Var_242;
    MR_Word dump__Var_243;

    {
      dump__PDOwnMax_8 = mercury__array__max_1_f_0(dump__TypeCtorInfo_272_272, (MR_ArrayPtr) dump__PDOwn_6);
    }
    dump__TypeCtorInfo_273_273 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
    {
      dump__PDDescMax_9 = mercury__array__max_1_f_0(dump__TypeCtorInfo_273_273, (MR_ArrayPtr) dump__PDDesc_7);
    }
    {
      dump__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), dump__Var_24, 0) = ((MR_Box) (&dump_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), dump__Var_24, 1) = ((MR_Box) (dump__dump_deep_prop_measurements_3_p_0_1));
      MR_hl_field(MR_mktag(0), dump__Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), dump__Var_24, 3) = ((MR_Box) (dump__PDOwnMax_8));
      MR_hl_field(MR_mktag(0), dump__Var_24, 4) = ((MR_Box) (dump__PDDescMax_9));
    }
    {
      mercury__require__require_2_p_0(dump__Var_24, (MR_String) "dump_deep: PDOwnMax != PDDescMax");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "SECTION PROC DYNAMIC MEASUREMENTS:\n\n");
    }
    {
      dump__dump_pd_measurements_6_p_0((MR_Integer) 1, dump__PDOwnMax_8, dump__PDOwn_6, dump__PDDesc_7);
    }
    dump__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
    dump__Var_105 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
    dump__Var_106 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
    dump__Var_107 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
    dump__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
    dump__CSDs_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
    dump__Var_109 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
    dump__Var_110 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
    dump__Var_111 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
    dump__Var_112 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
    dump__Var_113 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
    dump__Var_114 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
    dump__Var_115 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
    dump__Var_116 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
    dump__Var_117 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
    dump__Var_118 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
    dump__Var_119 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
    dump__Var_120 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
    dump__CSDDesc_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
    dump__Var_122 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
    dump__Var_123 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
    dump__Var_124 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
    dump__Var_125 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
    dump__Var_126 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
    dump__Var_127 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
    dump__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
    dump__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
    dump__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
    dump__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
    {
      dump__CSDMax_12 = mercury__array__max_1_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) dump__CSDs_10);
    }
    {
      dump__CSDDescMax_13 = mercury__array__max_1_f_0(dump__TypeCtorInfo_273_273, (MR_ArrayPtr) dump__CSDDesc_11);
    }
    {
      dump__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), dump__Var_30, 0) = ((MR_Box) (&dump_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), dump__Var_30, 1) = ((MR_Box) (dump__dump_deep_prop_measurements_3_p_0_2));
      MR_hl_field(MR_mktag(0), dump__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), dump__Var_30, 3) = ((MR_Box) (dump__CSDMax_12));
      MR_hl_field(MR_mktag(0), dump__Var_30, 4) = ((MR_Box) (dump__CSDDescMax_13));
    }
    {
      mercury__require__require_2_p_0(dump__Var_30, (MR_String) "dump_deep: CSDMax != CSDDescMax");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "SECTION CALL SITE DYNAMIC MEASUREMENTS:\n\n");
    }
    {
      dump__dump_csd_measurements_6_p_0((MR_Integer) 1, dump__CSDMax_12, dump__CSDs_10, dump__CSDDesc_11);
    }
    dump__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
    dump__Var_161 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
    dump__Var_162 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
    dump__Var_163 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
    dump__Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
    dump__Var_165 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
    dump__Var_166 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
    dump__Var_167 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
    dump__Var_168 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
    dump__Var_169 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
    dump__Var_170 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
    dump__Var_171 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
    dump__Var_172 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
    dump__Var_173 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
    dump__Var_174 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
    dump__Var_175 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
    dump__Var_176 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
    dump__Var_177 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
    dump__Var_178 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
    dump__PSOwn_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
    dump__PSDesc_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
    dump__Var_180 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
    dump__Var_181 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
    dump__Var_182 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
    dump__Var_183 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
    dump__Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
    dump__Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
    dump__Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
    dump__Var_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
    {
      dump__PSOwnMax_16 = mercury__array__max_1_f_0(dump__TypeCtorInfo_272_272, (MR_ArrayPtr) dump__PSOwn_14);
    }
    {
      dump__PSDescMax_17 = mercury__array__max_1_f_0(dump__TypeCtorInfo_273_273, (MR_ArrayPtr) dump__PSDesc_15);
    }
    {
      dump__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), dump__Var_36, 0) = ((MR_Box) (&dump_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), dump__Var_36, 1) = ((MR_Box) (dump__dump_deep_prop_measurements_3_p_0_3));
      MR_hl_field(MR_mktag(0), dump__Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), dump__Var_36, 3) = ((MR_Box) (dump__PSOwnMax_16));
      MR_hl_field(MR_mktag(0), dump__Var_36, 4) = ((MR_Box) (dump__PSDescMax_17));
    }
    {
      mercury__require__require_2_p_0(dump__Var_36, (MR_String) "dump_deep: PSOwnMax != PSDescMax");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "SECTION PROC STATIC MEASUREMENTS:\n\n");
    }
    {
      dump__dump_ps_measurements_6_p_0((MR_Integer) 1, dump__PSOwnMax_16, dump__PSOwn_14, dump__PSDesc_15);
    }
    dump__Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
    dump__Var_217 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
    dump__Var_218 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
    dump__Var_219 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
    dump__Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
    dump__Var_221 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
    dump__Var_222 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
    dump__Var_223 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
    dump__Var_224 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
    dump__Var_225 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
    dump__Var_226 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
    dump__Var_227 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
    dump__Var_228 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
    dump__Var_229 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
    dump__Var_230 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
    dump__Var_231 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
    dump__Var_232 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
    dump__Var_233 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
    dump__Var_234 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
    dump__Var_235 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
    dump__Var_236 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
    dump__CSSOwn_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
    dump__CSSDesc_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
    dump__Var_238 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
    dump__Var_239 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
    dump__Var_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
    dump__Var_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
    dump__Var_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
    dump__Var_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
    {
      dump__CSSOwnMax_20 = mercury__array__max_1_f_0(dump__TypeCtorInfo_272_272, (MR_ArrayPtr) dump__CSSOwn_18);
    }
    {
      dump__CSSDescMax_21 = mercury__array__max_1_f_0(dump__TypeCtorInfo_273_273, (MR_ArrayPtr) dump__CSSDesc_19);
    }
    {
      dump__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), dump__Var_42, 0) = ((MR_Box) (&dump_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), dump__Var_42, 1) = ((MR_Box) (dump__dump_deep_prop_measurements_3_p_0_4));
      MR_hl_field(MR_mktag(0), dump__Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), dump__Var_42, 3) = ((MR_Box) (dump__CSSOwnMax_20));
      MR_hl_field(MR_mktag(0), dump__Var_42, 4) = ((MR_Box) (dump__CSSDescMax_21));
    }
    {
      mercury__require__require_2_p_0(dump__Var_42, (MR_String) "dump_deep: CSSOwnMax != CSSDescMax");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "SECTION CALL SITE STATIC MEASUREMENTS:\n\n");
    }
    {
      dump__dump_css_measurements_6_p_0((MR_Integer) 1, dump__CSSOwnMax_20, dump__CSSOwn_18, dump__CSSDesc_19);
    }
  }
}

static void MR_CALL 
dump__dump_css_measurements_6_p_0(
  MR_Integer dump__Cur_7,
  MR_Integer dump__Max_8,
  MR_ArrayPtr dump__CSSOwn_9,
  MR_ArrayPtr dump__CSSDesc_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool dump__succeeded = (dump__Cur_7 <= dump__Max_8);

        if (dump__succeeded)
          {
            MR_Word dump__Own_12;
            MR_Word dump__Desc_13;
            MR_Integer dump__Var_18;
            MR_Box dump__conv0_Own_12;
            MR_Box dump__conv1_Desc_13;

            {
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) dump__CSSOwn_9, dump__Cur_7, &dump__conv0_Own_12);
            }
            dump__Own_12 = ((MR_Word) dump__conv0_Own_12);
            {
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) dump__CSSDesc_10, dump__Cur_7, &dump__conv1_Desc_13);
            }
            dump__Desc_13 = ((MR_Word) dump__conv1_Desc_13);
            {
              dump__dump_own_and_desc_6_p_0((MR_String) "css", dump__Cur_7, dump__Own_12, dump__Desc_13);
            }
            dump__Var_18 = (dump__Cur_7 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer dump__next_value_of_Cur_7 = dump__Var_18;

              dump__Cur_7 = dump__next_value_of_Cur_7;
            }
            continue;
          }
        else
          {
          }
      }
      break;
    }
}

static void MR_CALL 
dump__dump_ps_measurements_6_p_0(
  MR_Integer dump__Cur_7,
  MR_Integer dump__Max_8,
  MR_ArrayPtr dump__PSOwn_9,
  MR_ArrayPtr dump__PSDesc_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool dump__succeeded = (dump__Cur_7 <= dump__Max_8);

        if (dump__succeeded)
          {
            MR_Word dump__Own_12;
            MR_Word dump__Desc_13;
            MR_Integer dump__Var_18;
            MR_Box dump__conv0_Own_12;
            MR_Box dump__conv1_Desc_13;

            {
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) dump__PSOwn_9, dump__Cur_7, &dump__conv0_Own_12);
            }
            dump__Own_12 = ((MR_Word) dump__conv0_Own_12);
            {
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) dump__PSDesc_10, dump__Cur_7, &dump__conv1_Desc_13);
            }
            dump__Desc_13 = ((MR_Word) dump__conv1_Desc_13);
            {
              dump__dump_own_and_desc_6_p_0((MR_String) "ps", dump__Cur_7, dump__Own_12, dump__Desc_13);
            }
            dump__Var_18 = (dump__Cur_7 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer dump__next_value_of_Cur_7 = dump__Var_18;

              dump__Cur_7 = dump__next_value_of_Cur_7;
            }
            continue;
          }
        else
          {
          }
      }
      break;
    }
}

static void MR_CALL 
dump__dump_csd_measurements_6_p_0(
  MR_Integer dump__Cur_7,
  MR_Integer dump__Max_8,
  MR_ArrayPtr dump__CSDs_9,
  MR_ArrayPtr dump__CSDDesc_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool dump__succeeded = (dump__Cur_7 <= dump__Max_8);

        if (dump__succeeded)
          {
            MR_Word dump__CSD_12;
            MR_Word dump__Own_13;
            MR_Word dump__Desc_14;
            MR_Integer dump__Var_19;
            MR_Box dump__conv0_CSD_12;
            MR_Word dump__Var_22;
            MR_Word dump__Var_23;
            MR_Box dump__conv1_Desc_14;

            {
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) dump__CSDs_9, dump__Cur_7, &dump__conv0_CSD_12);
            }
            dump__CSD_12 = ((MR_Word) dump__conv0_CSD_12);
            dump__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CSD_12, (MR_Integer) 0)));
            dump__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CSD_12, (MR_Integer) 1)));
            dump__Own_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__CSD_12, (MR_Integer) 2)));
            {
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) dump__CSDDesc_10, dump__Cur_7, &dump__conv1_Desc_14);
            }
            dump__Desc_14 = ((MR_Word) dump__conv1_Desc_14);
            {
              dump__dump_own_and_desc_6_p_0((MR_String) "csd", dump__Cur_7, dump__Own_13, dump__Desc_14);
            }
            dump__Var_19 = (dump__Cur_7 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer dump__next_value_of_Cur_7 = dump__Var_19;

              dump__Cur_7 = dump__next_value_of_Cur_7;
            }
            continue;
          }
        else
          {
          }
      }
      break;
    }
}

static void MR_CALL 
dump__dump_pd_measurements_6_p_0(
  MR_Integer dump__Cur_7,
  MR_Integer dump__Max_8,
  MR_ArrayPtr dump__PDOwn_9,
  MR_ArrayPtr dump__PDDesc_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool dump__succeeded = (dump__Cur_7 <= dump__Max_8);

        if (dump__succeeded)
          {
            MR_Word dump__Own_12;
            MR_Word dump__Desc_13;
            MR_Integer dump__Var_18;
            MR_Box dump__conv0_Own_12;
            MR_Box dump__conv1_Desc_13;

            {
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) dump__PDOwn_9, dump__Cur_7, &dump__conv0_Own_12);
            }
            dump__Own_12 = ((MR_Word) dump__conv0_Own_12);
            {
              mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) dump__PDDesc_10, dump__Cur_7, &dump__conv1_Desc_13);
            }
            dump__Desc_13 = ((MR_Word) dump__conv1_Desc_13);
            {
              dump__dump_own_and_desc_6_p_0((MR_String) "pd", dump__Cur_7, dump__Own_12, dump__Desc_13);
            }
            dump__Var_18 = (dump__Cur_7 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer dump__next_value_of_Cur_7 = dump__Var_18;

              dump__Cur_7 = dump__next_value_of_Cur_7;
            }
            continue;
          }
        else
          {
          }
      }
      break;
    }
}

static void MR_CALL 
dump__dump_own_and_desc_6_p_0(
  MR_String dump__Prefix_7,
  MR_Integer dump__Cur_8,
  MR_Word dump__Own_9,
  MR_Word dump__Desc_10)
{
  {
    MR_bool dump__succeeded;
    MR_Word dump__PrintedOwn_12;
    MR_Word dump__PrintedDesc_13;

    {
      dump__succeeded = measurements__is_zero_own_prof_info_1_p_0(dump__Own_9);
    }
    if (dump__succeeded)
      dump__PrintedOwn_12 = (MR_Integer) 0;
    else
      {
        MR_String dump__Var_35;

        {
          mercury__io__write_string_3_p_0(dump__Prefix_7);
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Cur_8, &dump__Var_35);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_35);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " own:\n");
        }
        {
          dump__dump_own_prof_info_3_p_0(dump__Own_9);
        }
        dump__PrintedOwn_12 = (MR_Integer) 1;
      }
    {
      dump__succeeded = measurements__is_zero_inherit_prof_info_1_p_0(dump__Desc_10);
    }
    if (dump__succeeded)
      dump__PrintedDesc_13 = (MR_Integer) 0;
    else
      {
        MR_String dump__Var_45;

        {
          mercury__io__write_string_3_p_0(dump__Prefix_7);
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Cur_8, &dump__Var_45);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_45);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " inherit:\n");
        }
        {
          dump__dump_inherit_prof_info_3_p_0(dump__Desc_10);
        }
        dump__PrintedDesc_13 = (MR_Integer) 1;
      }
    dump__succeeded = (dump__PrintedOwn_12 == (MR_Integer) 1);
    if (!(dump__succeeded))
      dump__succeeded = (dump__PrintedDesc_13 == (MR_Integer) 1);
    if (dump__succeeded)
      {
        mercury__io__nl_2_p_0();
      }
    else
      {
      }
  }
}

static void MR_CALL 
dump__dump_inherit_prof_info_3_p_0(
  MR_Word dump__Inherit_4)
{
  {
    MR_bool dump__succeeded;
    MR_Integer dump__Quanta_6;
    MR_Integer dump__CallSeqs_7;
    MR_Integer dump__Allocs_8;
    MR_Integer dump__Words_9;

    {
      dump__Quanta_6 = measurements__inherit_quanta_1_f_0(dump__Inherit_4);
    }
    {
      dump__CallSeqs_7 = measurements__inherit_callseqs_1_f_0(dump__Inherit_4);
    }
    {
      dump__Allocs_8 = measurements__inherit_allocs_1_f_0(dump__Inherit_4);
    }
    {
      dump__Words_9 = measurements__inherit_words_1_f_0(dump__Inherit_4);
    }
    dump__succeeded = (dump__Quanta_6 == (MR_Integer) 0);
    if (dump__succeeded)
      {
      }
    else
      {
        MR_String dump__Var_35;

        {
          mercury__io__write_string_3_p_0((MR_String) "\tquanta:\t\t");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Quanta_6, &dump__Var_35);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_35);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    dump__succeeded = (dump__CallSeqs_7 == (MR_Integer) 0);
    if (dump__succeeded)
      {
      }
    else
      {
        MR_String dump__Var_46;

        {
          mercury__io__write_string_3_p_0((MR_String) "\tcallseqs:\t");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__CallSeqs_7, &dump__Var_46);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_46);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    dump__succeeded = (dump__Allocs_8 == (MR_Integer) 0);
    if (dump__succeeded)
      {
      }
    else
      {
        MR_String dump__Var_57;

        {
          mercury__io__write_string_3_p_0((MR_String) "\tallocs:\t\t");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Allocs_8, &dump__Var_57);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_57);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    dump__succeeded = (dump__Words_9 == (MR_Integer) 0);
    if (dump__succeeded)
      {
      }
    else
      {
        MR_String dump__Var_68;

        {
          mercury__io__write_string_3_p_0((MR_String) "\twords:\t\t");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Words_9, &dump__Var_68);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_68);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
  }
}

static void MR_CALL 
dump__dump_own_prof_info_3_p_0(
  MR_Word dump__Own_4)
{
  {
    MR_bool dump__succeeded;
    MR_Integer dump__Calls_6;
    MR_Integer dump__Exits_7;
    MR_Integer dump__Fails_8;
    MR_Integer dump__Redos_9;
    MR_Integer dump__Excps_10;
    MR_Integer dump__Quanta_11;
    MR_Integer dump__CallSeqs_12;
    MR_Integer dump__Allocs_13;
    MR_Integer dump__Words_14;

    {
      measurements__decompress_profile_10_p_0(dump__Own_4, &dump__Calls_6, &dump__Exits_7, &dump__Fails_8, &dump__Redos_9, &dump__Excps_10, &dump__Quanta_11, &dump__CallSeqs_12, &dump__Allocs_13, &dump__Words_14);
    }
    dump__succeeded = (dump__Calls_6 == (MR_Integer) 0);
    if (dump__succeeded)
      {
      }
    else
      {
        MR_String dump__Var_65;

        {
          mercury__io__write_string_3_p_0((MR_String) "\tcalls:\t\t");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Calls_6, &dump__Var_65);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_65);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    dump__succeeded = (dump__Exits_7 == (MR_Integer) 0);
    if (dump__succeeded)
      {
      }
    else
      {
        MR_String dump__Var_76;

        {
          mercury__io__write_string_3_p_0((MR_String) "\texits:\t\t");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Exits_7, &dump__Var_76);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_76);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    dump__succeeded = (dump__Fails_8 == (MR_Integer) 0);
    if (dump__succeeded)
      {
      }
    else
      {
        MR_String dump__Var_87;

        {
          mercury__io__write_string_3_p_0((MR_String) "\tfails:\t\t");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Fails_8, &dump__Var_87);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_87);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    dump__succeeded = (dump__Redos_9 == (MR_Integer) 0);
    if (dump__succeeded)
      {
      }
    else
      {
        MR_String dump__Var_98;

        {
          mercury__io__write_string_3_p_0((MR_String) "\tredos:\t\t");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Redos_9, &dump__Var_98);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_98);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    dump__succeeded = (dump__Excps_10 == (MR_Integer) 0);
    if (dump__succeeded)
      {
      }
    else
      {
        MR_String dump__Var_109;

        {
          mercury__io__write_string_3_p_0((MR_String) "\texcps:\t\t");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Excps_10, &dump__Var_109);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_109);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    dump__succeeded = (dump__Quanta_11 == (MR_Integer) 0);
    if (dump__succeeded)
      {
      }
    else
      {
        MR_String dump__Var_120;

        {
          mercury__io__write_string_3_p_0((MR_String) "\tquanta:\t\t");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Quanta_11, &dump__Var_120);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_120);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    dump__succeeded = (dump__CallSeqs_12 == (MR_Integer) 0);
    if (dump__succeeded)
      {
      }
    else
      {
        MR_String dump__Var_131;

        {
          mercury__io__write_string_3_p_0((MR_String) "\tcallseqs:\t");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__CallSeqs_12, &dump__Var_131);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_131);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    dump__succeeded = (dump__Allocs_13 == (MR_Integer) 0);
    if (dump__succeeded)
      {
      }
    else
      {
        MR_String dump__Var_142;

        {
          mercury__io__write_string_3_p_0((MR_String) "\tallocs:\t\t");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Allocs_13, &dump__Var_142);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_142);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    dump__succeeded = (dump__Words_14 == (MR_Integer) 0);
    if (dump__succeeded)
      {
      }
    else
      {
        MR_String dump__Var_153;

        {
          mercury__io__write_string_3_p_0((MR_String) "\twords:\t\t");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Words_14, &dump__Var_153);
        }
        {
          mercury__io__write_string_3_p_0(dump__Var_153);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
  }
}

static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_3(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4)
{
  {
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__dump_call_site_calls_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_2(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4)
{
  {
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__dump_call_site_dynamic_to_static_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4)
{
  {
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__dump_proc_static_caller_csds_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
dump__dump_deep_rev_links_3_p_0(
  MR_Word dump__Deep_4)
{
  {
    MR_bool dump__succeeded;
    MR_Word dump__TypeCtorInfo_115_115;
    MR_ArrayPtr dump__ProcCallers_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr dump__CallSiteStaticMap_7;
    MR_ArrayPtr dump__CallSiteCalls_8;
    MR_Word dump__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
    MR_String dump__Var_27 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
    MR_String dump__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
    MR_String dump__Var_29 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
    MR_Word dump__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr dump__Var_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr dump__Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr dump__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr dump__Var_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr dump__Var_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr dump__Var_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr dump__Var_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr dump__Var_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr dump__Var_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr dump__Var_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr dump__Var_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr dump__Var_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr dump__Var_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr dump__Var_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr dump__Var_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr dump__Var_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr dump__Var_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr dump__Var_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr dump__Var_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
    MR_Word dump__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
    MR_Word dump__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
    MR_Word dump__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
    MR_Word dump__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
    MR_Box dump__conv0_STATE_VARIABLE_IO_14_14;
    MR_Word dump__Var_54;
    MR_String dump__Var_55;
    MR_String dump__Var_56;
    MR_String dump__Var_57;
    MR_Word dump__Var_58;
    MR_ArrayPtr dump__Var_59;
    MR_ArrayPtr dump__Var_60;
    MR_ArrayPtr dump__Var_61;
    MR_ArrayPtr dump__Var_62;
    MR_ArrayPtr dump__Var_63;
    MR_ArrayPtr dump__Var_64;
    MR_ArrayPtr dump__Var_65;
    MR_ArrayPtr dump__Var_66;
    MR_ArrayPtr dump__Var_67;
    MR_ArrayPtr dump__Var_68;
    MR_ArrayPtr dump__Var_69;
    MR_ArrayPtr dump__Var_70;
    MR_ArrayPtr dump__Var_71;
    MR_ArrayPtr dump__Var_72;
    MR_ArrayPtr dump__Var_73;
    MR_ArrayPtr dump__Var_74;
    MR_ArrayPtr dump__Var_75;
    MR_ArrayPtr dump__Var_76;
    MR_ArrayPtr dump__Var_77;
    MR_Word dump__Var_78;
    MR_Word dump__Var_79;
    MR_Word dump__Var_80;
    MR_Word dump__Var_81;
    MR_Box dump__conv1_STATE_VARIABLE_IO_19_19;
    MR_Word dump__Var_82;
    MR_String dump__Var_83;
    MR_String dump__Var_84;
    MR_String dump__Var_85;
    MR_Word dump__Var_86;
    MR_ArrayPtr dump__Var_87;
    MR_ArrayPtr dump__Var_88;
    MR_ArrayPtr dump__Var_89;
    MR_ArrayPtr dump__Var_90;
    MR_ArrayPtr dump__Var_91;
    MR_ArrayPtr dump__Var_92;
    MR_ArrayPtr dump__Var_93;
    MR_ArrayPtr dump__Var_94;
    MR_ArrayPtr dump__Var_95;
    MR_ArrayPtr dump__Var_96;
    MR_ArrayPtr dump__Var_97;
    MR_ArrayPtr dump__Var_98;
    MR_ArrayPtr dump__Var_99;
    MR_ArrayPtr dump__Var_100;
    MR_ArrayPtr dump__Var_101;
    MR_ArrayPtr dump__Var_102;
    MR_ArrayPtr dump__Var_103;
    MR_ArrayPtr dump__Var_104;
    MR_ArrayPtr dump__Var_105;
    MR_Word dump__Var_106;
    MR_Word dump__Var_107;
    MR_Word dump__Var_108;
    MR_Word dump__Var_109;
    MR_Box dump__conv2_STATE_VARIABLE_IO_24_24;

    {
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM PROC STATIC TO CALLER CSDs:\n\n");
    }
    dump__TypeCtorInfo_115_115 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      array_util__array_foldl_from_1_4_p_0((MR_Word) &dump_scalar_common_1[4], dump__TypeCtorInfo_115_115, (MR_Word) &dump_scalar_common_2[9], (MR_ArrayPtr) dump__ProcCallers_6, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_14_14);
    }
    {
      mercury__io__nl_2_p_0();
    }
    dump__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
    dump__Var_55 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
    dump__Var_56 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
    dump__Var_57 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
    dump__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
    dump__Var_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
    dump__Var_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
    dump__Var_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
    dump__Var_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
    dump__Var_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
    dump__Var_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
    dump__Var_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
    dump__Var_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
    dump__Var_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
    dump__CallSiteStaticMap_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
    dump__Var_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
    dump__Var_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
    dump__Var_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
    dump__Var_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
    dump__Var_72 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
    dump__Var_73 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
    dump__Var_74 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
    dump__Var_75 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
    dump__Var_76 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
    dump__Var_77 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
    dump__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
    dump__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
    dump__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
    dump__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
    {
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM CALL SITE DYNAMICS TO STATICS:\n\n");
    }
    {
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, dump__TypeCtorInfo_115_115, (MR_Word) &dump_scalar_common_2[10], (MR_ArrayPtr) dump__CallSiteStaticMap_7, ((MR_Box) ((MR_Integer) 0)), &dump__conv1_STATE_VARIABLE_IO_19_19);
    }
    {
      mercury__io__nl_2_p_0();
    }
    dump__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
    dump__Var_83 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
    dump__Var_84 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
    dump__Var_85 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
    dump__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
    dump__Var_87 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
    dump__Var_88 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
    dump__Var_89 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
    dump__Var_90 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
    dump__Var_91 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
    dump__Var_92 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
    dump__Var_93 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
    dump__Var_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
    dump__Var_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
    dump__Var_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
    dump__CallSiteCalls_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
    dump__Var_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
    dump__Var_98 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
    dump__Var_99 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
    dump__Var_100 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
    dump__Var_101 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
    dump__Var_102 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
    dump__Var_103 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
    dump__Var_104 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
    dump__Var_105 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
    dump__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
    dump__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
    dump__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
    dump__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
    {
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM CALL SITE STATICS TO CALLS:\n\n");
    }
    {
      array_util__array_foldl_from_1_4_p_0((MR_Word) &dump_scalar_common_2[0], dump__TypeCtorInfo_115_115, (MR_Word) &dump_scalar_common_2[11], (MR_ArrayPtr) dump__CallSiteCalls_8, ((MR_Box) ((MR_Integer) 0)), &dump__conv2_STATE_VARIABLE_IO_24_24);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
dump__dump_deep_cliques_3_p_0_4(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4)
{
  {
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__dump_clique_maybe_child_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
dump__dump_deep_cliques_3_p_0_3(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4)
{
  {
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__dump_clique_parent_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
dump__dump_deep_cliques_3_p_0_2(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4)
{
  {
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__dump_clique_members_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
dump__dump_deep_cliques_3_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4)
{
  {
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__dump_clique_index_entry_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
dump__dump_deep_cliques_3_p_0(
  MR_Word dump__Deep_4)
{
  {
    MR_bool dump__succeeded;
    MR_Word dump__TypeCtorInfo_149_149;
    MR_ArrayPtr dump__CliqueIndex_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr dump__CliqueMembers_7;
    MR_ArrayPtr dump__CliqueParents_8;
    MR_ArrayPtr dump__CliqueMaybeChild_9;
    MR_Word dump__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
    MR_String dump__Var_33 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
    MR_String dump__Var_34 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
    MR_String dump__Var_35 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
    MR_Word dump__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr dump__Var_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr dump__Var_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr dump__Var_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr dump__Var_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr dump__Var_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr dump__Var_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr dump__Var_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr dump__Var_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr dump__Var_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr dump__Var_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr dump__Var_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr dump__Var_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr dump__Var_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr dump__Var_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr dump__Var_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr dump__Var_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr dump__Var_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr dump__Var_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr dump__Var_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
    MR_Word dump__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
    MR_Word dump__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
    MR_Word dump__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
    MR_Word dump__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
    MR_Box dump__conv0_STATE_VARIABLE_IO_15_15;
    MR_Word dump__Var_60;
    MR_String dump__Var_61;
    MR_String dump__Var_62;
    MR_String dump__Var_63;
    MR_Word dump__Var_64;
    MR_ArrayPtr dump__Var_65;
    MR_ArrayPtr dump__Var_66;
    MR_ArrayPtr dump__Var_67;
    MR_ArrayPtr dump__Var_68;
    MR_ArrayPtr dump__Var_69;
    MR_ArrayPtr dump__Var_70;
    MR_ArrayPtr dump__Var_71;
    MR_ArrayPtr dump__Var_72;
    MR_ArrayPtr dump__Var_73;
    MR_ArrayPtr dump__Var_74;
    MR_ArrayPtr dump__Var_75;
    MR_ArrayPtr dump__Var_76;
    MR_ArrayPtr dump__Var_77;
    MR_ArrayPtr dump__Var_78;
    MR_ArrayPtr dump__Var_79;
    MR_ArrayPtr dump__Var_80;
    MR_ArrayPtr dump__Var_81;
    MR_ArrayPtr dump__Var_82;
    MR_ArrayPtr dump__Var_83;
    MR_Word dump__Var_84;
    MR_Word dump__Var_85;
    MR_Word dump__Var_86;
    MR_Word dump__Var_87;
    MR_Box dump__conv1_STATE_VARIABLE_IO_20_20;
    MR_Word dump__Var_88;
    MR_String dump__Var_89;
    MR_String dump__Var_90;
    MR_String dump__Var_91;
    MR_Word dump__Var_92;
    MR_ArrayPtr dump__Var_93;
    MR_ArrayPtr dump__Var_94;
    MR_ArrayPtr dump__Var_95;
    MR_ArrayPtr dump__Var_96;
    MR_ArrayPtr dump__Var_97;
    MR_ArrayPtr dump__Var_98;
    MR_ArrayPtr dump__Var_99;
    MR_ArrayPtr dump__Var_100;
    MR_ArrayPtr dump__Var_101;
    MR_ArrayPtr dump__Var_102;
    MR_ArrayPtr dump__Var_103;
    MR_ArrayPtr dump__Var_104;
    MR_ArrayPtr dump__Var_105;
    MR_ArrayPtr dump__Var_106;
    MR_ArrayPtr dump__Var_107;
    MR_ArrayPtr dump__Var_108;
    MR_ArrayPtr dump__Var_109;
    MR_ArrayPtr dump__Var_110;
    MR_ArrayPtr dump__Var_111;
    MR_Word dump__Var_112;
    MR_Word dump__Var_113;
    MR_Word dump__Var_114;
    MR_Word dump__Var_115;
    MR_Box dump__conv2_STATE_VARIABLE_IO_25_25;
    MR_Word dump__Var_116;
    MR_String dump__Var_117;
    MR_String dump__Var_118;
    MR_String dump__Var_119;
    MR_Word dump__Var_120;
    MR_ArrayPtr dump__Var_121;
    MR_ArrayPtr dump__Var_122;
    MR_ArrayPtr dump__Var_123;
    MR_ArrayPtr dump__Var_124;
    MR_ArrayPtr dump__Var_125;
    MR_ArrayPtr dump__Var_126;
    MR_ArrayPtr dump__Var_127;
    MR_ArrayPtr dump__Var_128;
    MR_ArrayPtr dump__Var_129;
    MR_ArrayPtr dump__Var_130;
    MR_ArrayPtr dump__Var_131;
    MR_ArrayPtr dump__Var_132;
    MR_ArrayPtr dump__Var_133;
    MR_ArrayPtr dump__Var_134;
    MR_ArrayPtr dump__Var_135;
    MR_ArrayPtr dump__Var_136;
    MR_ArrayPtr dump__Var_137;
    MR_ArrayPtr dump__Var_138;
    MR_ArrayPtr dump__Var_139;
    MR_Word dump__Var_140;
    MR_Word dump__Var_141;
    MR_Word dump__Var_142;
    MR_Word dump__Var_143;
    MR_Box dump__conv3_STATE_VARIABLE_IO_30_30;

    {
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM PROC DYNAMIC TO CLIQUE:\n\n");
    }
    dump__TypeCtorInfo_149_149 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, dump__TypeCtorInfo_149_149, (MR_Word) &dump_scalar_common_2[5], (MR_ArrayPtr) dump__CliqueIndex_6, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_15_15);
    }
    {
      mercury__io__nl_2_p_0();
    }
    dump__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
    dump__Var_61 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
    dump__Var_62 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
    dump__Var_63 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
    dump__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
    dump__Var_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
    dump__Var_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
    dump__Var_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
    dump__Var_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
    dump__Var_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
    dump__CliqueMembers_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
    dump__Var_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
    dump__Var_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
    dump__Var_72 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
    dump__Var_73 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
    dump__Var_74 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
    dump__Var_75 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
    dump__Var_76 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
    dump__Var_77 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
    dump__Var_78 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
    dump__Var_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
    dump__Var_80 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
    dump__Var_81 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
    dump__Var_82 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
    dump__Var_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
    dump__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
    dump__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
    dump__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
    dump__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
    {
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM CLIQUE TO PROC DYNAMICS:\n\n");
    }
    {
      array_util__array_foldl_from_1_4_p_0((MR_Word) &dump_scalar_common_1[2], dump__TypeCtorInfo_149_149, (MR_Word) &dump_scalar_common_2[6], (MR_ArrayPtr) dump__CliqueMembers_7, ((MR_Box) ((MR_Integer) 0)), &dump__conv1_STATE_VARIABLE_IO_20_20);
    }
    {
      mercury__io__nl_2_p_0();
    }
    dump__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
    dump__Var_89 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
    dump__Var_90 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
    dump__Var_91 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
    dump__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
    dump__Var_93 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
    dump__Var_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
    dump__Var_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
    dump__Var_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
    dump__Var_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
    dump__Var_98 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
    dump__CliqueParents_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
    dump__Var_99 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
    dump__Var_100 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
    dump__Var_101 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
    dump__Var_102 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
    dump__Var_103 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
    dump__Var_104 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
    dump__Var_105 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
    dump__Var_106 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
    dump__Var_107 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
    dump__Var_108 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
    dump__Var_109 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
    dump__Var_110 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
    dump__Var_111 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
    dump__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
    dump__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
    dump__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
    dump__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
    {
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM CLIQUE TO PARENT CSD:\n\n");
    }
    {
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, dump__TypeCtorInfo_149_149, (MR_Word) &dump_scalar_common_2[7], (MR_ArrayPtr) dump__CliqueParents_8, ((MR_Box) ((MR_Integer) 0)), &dump__conv2_STATE_VARIABLE_IO_25_25);
    }
    {
      mercury__io__nl_2_p_0();
    }
    dump__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 0)));
    dump__Var_117 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 1)));
    dump__Var_118 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 2)));
    dump__Var_119 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 3)));
    dump__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 4)));
    dump__Var_121 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 5)));
    dump__Var_122 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 6)));
    dump__Var_123 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 7)));
    dump__Var_124 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 8)));
    dump__Var_125 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 9)));
    dump__Var_126 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 10)));
    dump__Var_127 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 11)));
    dump__CliqueMaybeChild_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 12)));
    dump__Var_128 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 13)));
    dump__Var_129 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 14)));
    dump__Var_130 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 15)));
    dump__Var_131 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 16)));
    dump__Var_132 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 17)));
    dump__Var_133 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 18)));
    dump__Var_134 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 19)));
    dump__Var_135 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 20)));
    dump__Var_136 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 21)));
    dump__Var_137 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 22)));
    dump__Var_138 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 23)));
    dump__Var_139 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 24)));
    dump__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 25)));
    dump__Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 26)));
    dump__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 27)));
    dump__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Deep_4, (MR_Integer) 28)));
    {
      mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM CSD TO MAYBE CHILD CLIQUE:\n\n");
    }
    {
      array_util__array_foldl_from_1_4_p_0((MR_Word) &dump_scalar_common_1[3], dump__TypeCtorInfo_149_149, (MR_Word) &dump_scalar_common_2[8], (MR_ArrayPtr) dump__CliqueMaybeChild_9, ((MR_Box) ((MR_Integer) 0)), &dump__conv3_STATE_VARIABLE_IO_30_30);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
dump__dump_initial_deep_4_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4,
  MR_Box dump__wrapper_arg_5,
  MR_Box * dump__wrapper_arg_6)
{
  {
    MR_Box dump__closure = dump__closure_arg;
    MR_Word dump__conv1_STATE_VARIABLE_PS_Ptrs_17;
    MR_Word dump__conv0_STATE_VARIABLE_CSS_Ptrs_19;

    {
      dump__get_static_ptrs_from_dynamic_proc_7_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3), &dump__conv1_STATE_VARIABLE_PS_Ptrs_17, ((MR_Word) dump__wrapper_arg_5), &dump__conv0_STATE_VARIABLE_CSS_Ptrs_19);
    }
    *dump__wrapper_arg_4 = ((MR_Box) (dump__conv1_STATE_VARIABLE_PS_Ptrs_17));
    *dump__wrapper_arg_6 = ((MR_Box) (dump__conv0_STATE_VARIABLE_CSS_Ptrs_19));
  }
}

void MR_CALL 
dump__dump_initial_deep_4_p_0(
  MR_Word dump__InitialDeep_5,
  MR_Word dump__DumpOptions_6)
{
  {
    MR_bool dump__succeeded;
    MR_Word dump__Stats_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__InitialDeep_5, (MR_Integer) 0)));
    MR_Word dump__InitRoot_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__InitialDeep_5, (MR_Integer) 1)));
    MR_ArrayPtr dump__CSDs_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__InitialDeep_5, (MR_Integer) 2)));
    MR_ArrayPtr dump__PDs_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__InitialDeep_5, (MR_Integer) 3)));
    MR_ArrayPtr dump__CSSs_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__InitialDeep_5, (MR_Integer) 4)));
    MR_ArrayPtr dump__PSs_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__InitialDeep_5, (MR_Integer) 5)));
    MR_Word dump__Restrict_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 0)));
    MR_Word dump__Restriction_17;
    MR_Word dump__ShowStats_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) & (MR_Integer) 1);
    MR_Word dump__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 1)));
    MR_Word dump__Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word dump__Var_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word dump__Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word dump__Arrays_84;
    MR_Word dump__Var_85;
    MR_Word dump__Var_86;
    MR_Word dump__Var_87;
    MR_Word dump__Var_88;
    MR_Word dump__Var_89;

    switch (dump__Restrict_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        dump__Restriction_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 0:
        {
          MR_Word dump__UsedPSs_15;
          MR_Word dump__UsedCSSs_16;
          MR_Word dump__Var_45;
          MR_Word dump__Var_46;
          MR_Word dump__Var_47;
          MR_Box dump__conv3_UsedPSs_15;
          MR_Box dump__conv2_UsedCSSs_16;

          {
            dump__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), dump__Var_45, 0) = ((MR_Box) (&dump_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), dump__Var_45, 1) = ((MR_Box) (dump__dump_initial_deep_4_p_0_1));
            MR_hl_field(MR_mktag(0), dump__Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), dump__Var_45, 3) = ((MR_Box) (dump__PSs_13));
          }
          {
            dump__Var_46 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0);
          }
          {
            dump__Var_47 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0);
          }
          {
            array_util__array_foldl2_from_1_6_p_1((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_Word) &dump_scalar_common_1[0], (MR_Word) &dump_scalar_common_1[1], dump__Var_45, (MR_ArrayPtr) dump__PDs_11, ((MR_Box) (dump__Var_46)), &dump__conv3_UsedPSs_15, ((MR_Box) (dump__Var_47)), &dump__conv2_UsedCSSs_16);
          }
          dump__UsedPSs_15 = ((MR_Word) dump__conv3_UsedPSs_15);
          dump__UsedCSSs_16 = ((MR_Word) dump__conv2_UsedCSSs_16);
          {
            dump__Restriction_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), dump__Restriction_17, 0) = ((MR_Box) (dump__UsedPSs_15));
            MR_hl_field(MR_mktag(1), dump__Restriction_17, 1) = ((MR_Box) (dump__UsedCSSs_16));
          }
        }
        break;
    }
    switch (dump__ShowStats_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Integer dump__Root_61;
          MR_String dump__Var_74;

          {
            dump__dump_init_profile_stats_3_p_0(dump__Stats_8);
          }
          dump__Root_61 = (MR_Integer) dump__InitRoot_9;
          {
            mercury__io__write_string_3_p_0((MR_String) "INITIAL ROOT:\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\tinitial root = ");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &dump_scalar_common_4[0], dump__Root_61, &dump__Var_74);
          }
          {
            mercury__io__write_string_3_p_0(dump__Var_74);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          {
            mercury__io__nl_2_p_0();
          }
        }
        break;
    }
    dump__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 0)));
    dump__Arrays_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 1)));
    dump__Var_86 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) & (MR_Integer) 1);
    dump__Var_87 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    dump__Var_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    dump__Var_89 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_6, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    {
      dump__succeeded = mercury__set__member_2_p_0((MR_Word) &dump__dump__type_ctor_info_dumpable_array_0, ((MR_Box) ((MR_Integer) 0)), dump__Arrays_84);
    }
    if (dump__succeeded)
      {
        dump__dump_init_call_site_dynamics_3_p_0(dump__CSDs_10);
      }
    else
      {
      }
    {
      dump__succeeded = dump__should_dump_2_p_0(dump__DumpOptions_6, (MR_Integer) 2);
    }
    if (dump__succeeded)
      {
        dump__dump_init_proc_dynamics_4_p_0(dump__PDs_11, dump__PSs_13);
      }
    else
      {
      }
    {
      dump__succeeded = dump__should_dump_2_p_0(dump__DumpOptions_6, (MR_Integer) 1);
    }
    if (dump__succeeded)
      {
        dump__dump_init_call_site_statics_4_p_0(dump__Restriction_17, dump__CSSs_12);
      }
    else
      {
      }
    {
      dump__succeeded = dump__should_dump_2_p_0(dump__DumpOptions_6, (MR_Integer) 3);
    }
    if (dump__succeeded)
      {
        dump__dump_init_proc_statics_4_p_0(dump__Restriction_17, dump__PSs_13);
      }
    else
      {
      }
  }
}

static MR_bool MR_CALL 
dump__should_dump_2_p_0(
  MR_Word dump__DumpOptions_3,
  MR_Word dump__What_4)
{
  {
    MR_bool dump__succeeded;
    MR_Word dump__Arrays_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_3, (MR_Integer) 1)));
    MR_Word dump__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_3, (MR_Integer) 0)));
    MR_Word dump__Var_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_3, (MR_Integer) 2)))) & (MR_Integer) 1);
    MR_Word dump__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_3, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word dump__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word dump__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__DumpOptions_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

    {
      dump__succeeded = mercury__set__member_2_p_0((MR_Word) &dump__dump__type_ctor_info_dumpable_array_0, ((MR_Box) (dump__What_4)), dump__Arrays_5);
    }
    return dump__succeeded;
  }
}

static void MR_CALL 
dump__dump_init_proc_statics_4_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4)
{
  {
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__dump_proc_static_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
dump__dump_init_proc_statics_4_p_0(
  MR_Word dump__Restriction_5,
  MR_ArrayPtr dump__ProcStatics_6)
{
  {
    MR_bool dump__succeeded;
    MR_Word dump__Var_12;
    MR_Box dump__conv0_STATE_VARIABLE_IO_13_13;

    {
      mercury__io__write_string_3_p_0((MR_String) "SECTION PROC STATICS:\n\n");
    }
    {
      dump__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), dump__Var_12, 0) = ((MR_Box) (&dump_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), dump__Var_12, 1) = ((MR_Box) (dump__dump_init_proc_statics_4_p_0_1));
      MR_hl_field(MR_mktag(0), dump__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), dump__Var_12, 3) = ((MR_Box) (dump__Restriction_5));
    }
    {
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, dump__Var_12, (MR_ArrayPtr) dump__ProcStatics_6, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_13_13);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
dump__dump_init_call_site_statics_4_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4)
{
  {
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__dump_call_site_static_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
dump__dump_init_call_site_statics_4_p_0(
  MR_Word dump__Restriction_5,
  MR_ArrayPtr dump__CallStatics_6)
{
  {
    MR_bool dump__succeeded;
    MR_Word dump__Var_12;
    MR_Box dump__conv0_STATE_VARIABLE_IO_9;

    {
      mercury__io__write_string_3_p_0((MR_String) "SECTION CALL SITE STATICS:\n\n");
    }
    {
      dump__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), dump__Var_12, 0) = ((MR_Box) (&dump_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), dump__Var_12, 1) = ((MR_Box) (dump__dump_init_call_site_statics_4_p_0_1));
      MR_hl_field(MR_mktag(0), dump__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), dump__Var_12, 3) = ((MR_Box) (dump__Restriction_5));
    }
    {
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, dump__Var_12, (MR_ArrayPtr) dump__CallStatics_6, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_9);
    }
  }
}

static void MR_CALL 
dump__dump_init_proc_dynamics_4_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4)
{
  {
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__dump_proc_dynamic_5_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), dump__closure, (MR_Integer) 3))), ((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
dump__dump_init_proc_dynamics_4_p_0(
  MR_ArrayPtr dump__ProcDynamics_5,
  MR_ArrayPtr dump__ProcStatics_6)
{
  {
    MR_bool dump__succeeded;
    MR_Word dump__Var_12;
    MR_Box dump__conv0_STATE_VARIABLE_IO_9;

    {
      mercury__io__write_string_3_p_0((MR_String) "SECTION PROC DYNAMICS:\n\n");
    }
    {
      dump__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), dump__Var_12, 0) = ((MR_Box) (&dump_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), dump__Var_12, 1) = ((MR_Box) (dump__dump_init_proc_dynamics_4_p_0_1));
      MR_hl_field(MR_mktag(0), dump__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), dump__Var_12, 3) = ((MR_Box) (dump__ProcStatics_6));
    }
    {
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, dump__Var_12, (MR_ArrayPtr) dump__ProcDynamics_5, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_9);
    }
  }
}

static void MR_CALL 
dump__dump_init_call_site_dynamics_3_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3,
  MR_Box * dump__wrapper_arg_4)
{
  {
    MR_Box dump__closure = dump__closure_arg;

    {
      dump__dump_call_site_dynamic_4_p_0(((MR_Integer) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
dump__dump_init_call_site_dynamics_3_p_0(
  MR_ArrayPtr dump__CallSiteDynamics_4)
{
  {
    MR_bool dump__succeeded;
    MR_Box dump__conv0_STATE_VARIABLE_IO_7;

    {
      mercury__io__write_string_3_p_0((MR_String) "SECTION CALL SITE DYNAMICS:\n\n");
    }
    {
      array_util__array_foldl_from_1_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &dump_scalar_common_2[4], (MR_ArrayPtr) dump__CallSiteDynamics_4, ((MR_Box) ((MR_Integer) 0)), &dump__conv0_STATE_VARIABLE_IO_7);
    }
  }
}

static void MR_CALL 
dump__dump_init_profile_stats_3_p_0(
  MR_Word dump__Stats_4)
{
  {
    MR_bool dump__succeeded;
    MR_String dump__ProgramName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 0)));
    MR_Integer dump__MaxCSD_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 1)));
    MR_Integer dump__MaxCSS_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 2)));
    MR_Integer dump__MaxPD_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 3)));
    MR_Integer dump__MaxPS_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 4)));
    MR_Integer dump__TicksPerSec_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 5)));
    MR_Integer dump__InstrumentQuanta_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 6)));
    MR_Integer dump__UserQuanta_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 7)));
    MR_Integer dump__NumCallSeqs_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 8)));
    MR_Word dump__DeepFlags_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Stats_4, (MR_Integer) 9)));
    MR_Integer dump__WordSize_16;
    MR_Word dump__Canonical_17;
    MR_Word dump__CoverageDataType_19;
    MR_String dump__Var_24;
    MR_String dump__Var_27;
    MR_String dump__Var_88;
    MR_String dump__Var_95;
    MR_Word dump__Var_101;
    MR_String dump__Var_106;
    MR_String dump__Var_117;
    MR_String dump__Var_128;
    MR_String dump__Var_139;
    MR_String dump__Var_150;
    MR_String dump__Var_161;
    MR_String dump__Var_172;
    MR_String dump__Var_183;

    {
      mercury__io__write_string_3_p_0((MR_String) "SECTION PROFILING STATS:\n\n");
    }
    {
      dump__Var_27 = mercury__string__f_43_43_2_f_0(dump__ProgramName_6, (MR_String) "\n");
    }
    {
      dump__Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "\tprogram_name = ", dump__Var_27);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_24);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tmax_csd = ");
    }
    dump__Var_101 = (MR_Word) &dump_scalar_common_4[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_101, dump__MaxCSD_7, &dump__Var_95);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_95);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tmax_css = ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_101, dump__MaxCSS_8, &dump__Var_106);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_106);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tmax_pd  = ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_101, dump__MaxPD_9, &dump__Var_117);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_117);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tmax_ps  = ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_101, dump__MaxPS_10, &dump__Var_128);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_128);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tticks_per_sec = ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_101, dump__TicksPerSec_11, &dump__Var_139);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_139);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tinstrument_quanta = ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_101, dump__InstrumentQuanta_12, &dump__Var_150);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_150);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tuser_quanta = ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_101, dump__UserQuanta_13, &dump__Var_161);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_161);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tnum_callseqs = ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_101, dump__NumCallSeqs_14, &dump__Var_172);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_172);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    dump__WordSize_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), dump__DeepFlags_15, (MR_Integer) 0)));
    dump__Canonical_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DeepFlags_15, (MR_Integer) 1)));
    dump__CoverageDataType_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__DeepFlags_15, (MR_Integer) 3)));
    {
      mercury__io__write_string_3_p_0((MR_String) "\tword_size   = ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(dump__Var_101, dump__WordSize_16, &dump__Var_183);
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_183);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tcanonical = ");
    }
    switch (dump__Canonical_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "yes\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "no\n");
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tcompression = ");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "none\n");
    }
    {
      dump__Var_88 = mercury__string__string_1_f_0((MR_Word) &profile__profile__type_ctor_info_coverage_data_type_0, ((MR_Box) (dump__CoverageDataType_19)));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tcoverage_data_type = ");
    }
    {
      mercury__io__write_string_3_p_0(dump__Var_88);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

void MR_CALL 
dump__dump_array_options_to_dump_options_2_p_0(
  MR_Word dump__Strings_3,
  MR_Word * dump__DumpOptions_4)
{
  {
    MR_bool dump__succeeded;
    MR_Word dump__DumpArrayOptions_5;
    MR_Word dump__Var_6;
    MR_Word dump__Var_7;
    MR_Word dump__Var_9;
    MR_Word dump__Var_10;
    MR_Word dump__Var_11;
    MR_Word dump__Var_12;
    MR_Word dump__Var_8;

    {
      dump__det_dump_array_options_2_p_0(dump__Strings_3, &dump__DumpArrayOptions_5);
    }
    {
      dump__Var_6 = dump__default_dump_options_0_f_0();
    }
    dump__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Var_6, (MR_Integer) 0)));
    dump__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), dump__Var_6, (MR_Integer) 1)));
    dump__Var_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), dump__Var_6, (MR_Integer) 2)))) & (MR_Integer) 1);
    dump__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__Var_6, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    dump__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__Var_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    dump__Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), dump__Var_6, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *dump__DumpOptions_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (dump__Var_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (dump__DumpArrayOptions_5));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((dump__Var_9 | ((((dump__Var_10 << (MR_Integer) 1)) | ((((dump__Var_11 << (MR_Integer) 2)) | ((dump__Var_12 << (MR_Integer) 3)))))))));
    }
  }
}

static void MR_CALL 
dump__det_dump_array_options_2_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box * dump__wrapper_arg_2)
{
  {
    MR_Box dump__closure = dump__closure_arg;
    MR_Word dump__conv0_Array_4;

    {
      dump__det_string_to_dumpable_array_2_p_0(((MR_String) dump__wrapper_arg_1), &dump__conv0_Array_4);
    }
    *dump__wrapper_arg_2 = ((MR_Box) (dump__conv0_Array_4));
  }
}

void MR_CALL 
dump__det_dump_array_options_2_p_0(
  MR_Word dump__Strings_3,
  MR_Word * dump__DumpArrayOptions_4)
{
  {
    MR_bool dump__succeeded;
    MR_Word dump__DumpArrayOptionsSpecial_5;

    if ((dump__Strings_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          dump__DumpArrayOptionsSpecial_5 = mercury__set__list_to_set_1_f_0((MR_Word) &dump__dump__type_ctor_info_dumpable_array_0, (MR_Word) MR_mkword(MR_mktag(1), &dump_scalar_common_1[9]));
        }
        dump__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word dump__TypeCtorInfo_12_33;
        MR_String dump__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(1), dump__Strings_3, (MR_Integer) 0)));
        MR_Word dump__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__Strings_3, (MR_Integer) 1)));
        MR_Word dump__Var_24;

        dump__succeeded = (strcmp(dump__Var_10, (MR_String) "all") == 0);
        if (dump__succeeded)
          {
            dump__succeeded = (dump__Var_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (dump__succeeded)
              {
                dump__TypeCtorInfo_12_33 = (MR_Word) &dump__dump__type_ctor_info_dumpable_array_0;
                dump__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), &dump_scalar_common_1[9]);
                {
                  dump__DumpArrayOptionsSpecial_5 = mercury__set__list_to_set_1_f_0(dump__TypeCtorInfo_12_33, dump__Var_24);
                }
                dump__succeeded = MR_TRUE;
              }
          }
      }
    if (dump__succeeded)
      *dump__DumpArrayOptions_4 = dump__DumpArrayOptionsSpecial_5;
    else
      {
        MR_Word dump__TypeInfo_for_X_39 = (MR_Word) &dump__dump__type_ctor_info_dumpable_array_0;
        MR_Word dump__List_38;

        {
          mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, dump__TypeInfo_for_X_39, (MR_Word) &dump_scalar_common_2[3], dump__Strings_3, &dump__List_38);
        }
        {
          mercury__set__list_to_set_2_p_0(dump__TypeInfo_for_X_39, dump__List_38, dump__DumpArrayOptions_4);
        }
      }
  }
}

static MR_bool MR_CALL 
dump__dump_array_options_2_p_0_1(
  MR_Box dump__closure_arg,
  MR_Box dump__wrapper_arg_1,
  MR_Box * dump__wrapper_arg_2)
{
  {
    MR_bool dump__succeeded;
    MR_Box dump__closure = dump__closure_arg;
    MR_Word dump__conv0_HeadVar__2_2;

    {
      dump__succeeded = dump__string_to_dumpable_array_2_p_0(((MR_String) dump__wrapper_arg_1), &dump__conv0_HeadVar__2_2);
    }
    if (dump__succeeded)
      {
        *dump__wrapper_arg_2 = ((MR_Box) (dump__conv0_HeadVar__2_2));
        dump__succeeded = MR_TRUE;
      }
    return dump__succeeded;
  }
}

MR_bool MR_CALL 
dump__dump_array_options_2_p_0(
  MR_Word dump__Strings_3,
  MR_Word * dump__DumpArrayOptions_4)
{
  {
    MR_bool dump__succeeded;
    MR_Word dump__DumpArrayOptionsSpecial_5;

    if ((dump__Strings_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          dump__DumpArrayOptionsSpecial_5 = mercury__set__list_to_set_1_f_0((MR_Word) &dump__dump__type_ctor_info_dumpable_array_0, (MR_Word) MR_mkword(MR_mktag(1), &dump_scalar_common_1[9]));
        }
        dump__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word dump__TypeCtorInfo_12_33;
        MR_String dump__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(1), dump__Strings_3, (MR_Integer) 0)));
        MR_Word dump__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), dump__Strings_3, (MR_Integer) 1)));
        MR_Word dump__Var_24;

        dump__succeeded = (strcmp(dump__Var_10, (MR_String) "all") == 0);
        if (dump__succeeded)
          {
            dump__succeeded = (dump__Var_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (dump__succeeded)
              {
                dump__TypeCtorInfo_12_33 = (MR_Word) &dump__dump__type_ctor_info_dumpable_array_0;
                dump__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), &dump_scalar_common_1[9]);
                {
                  dump__DumpArrayOptionsSpecial_5 = mercury__set__list_to_set_1_f_0(dump__TypeCtorInfo_12_33, dump__Var_24);
                }
                dump__succeeded = MR_TRUE;
              }
          }
      }
    if (dump__succeeded)
      {
        *dump__DumpArrayOptions_4 = dump__DumpArrayOptionsSpecial_5;
        dump__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word dump__TypeInfo_for_X_39 = (MR_Word) &dump__dump__type_ctor_info_dumpable_array_0;
        MR_Word dump__List_38;

        {
          dump__succeeded = mercury__list__map_3_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, dump__TypeInfo_for_X_39, (MR_Word) &dump_scalar_common_2[2], dump__Strings_3, &dump__List_38);
        }
        if (dump__succeeded)
          {
            {
              mercury__set__list_to_set_2_p_0(dump__TypeInfo_for_X_39, dump__List_38, dump__DumpArrayOptions_4);
            }
            dump__succeeded = MR_TRUE;
          }
      }
    return dump__succeeded;
  }
}

MR_Word MR_CALL 
dump__default_dump_options_0_f_0(void)
{
  {
    MR_bool dump__succeeded;
    MR_Word dump__DumpOptions_2;
    MR_Word dump__Var_4;

    {
      dump__Var_4 = mercury__set__list_to_set_1_f_0((MR_Word) &dump__dump__type_ctor_info_dumpable_array_0, (MR_Word) MR_mkword(MR_mktag(1), &dump_scalar_common_1[9]));
    }
    {
      dump__DumpOptions_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), dump__DumpOptions_2, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), dump__DumpOptions_2, 1) = ((MR_Box) (dump__Var_4));
      MR_hl_field(MR_mktag(0), dump__DumpOptions_2, 2) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((MR_Integer) 0 << (MR_Integer) 3)))))))));
    }
    return dump__DumpOptions_2;
  }
}

static MR_bool MR_CALL 
dump____Unify____dump_cliques_0_0_10001(
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2)
{
  {
    MR_bool dump__succeeded;

    {
      dump__succeeded = dump____Unify____dump_cliques_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
    return dump__succeeded;
  }
}

static void MR_CALL 
dump____Compare____dump_cliques_0_0_10001(
  MR_Box * dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3)
{
  {
    MR_Word dump__conv0_HeadVar__1_1;

    {
      dump____Compare____dump_cliques_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
dump____Unify____dump_options_0_0_10001(
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2)
{
  {
    MR_bool dump__succeeded;

    {
      dump__succeeded = dump____Unify____dump_options_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
    return dump__succeeded;
  }
}

static void MR_CALL 
dump____Compare____dump_options_0_0_10001(
  MR_Box * dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3)
{
  {
    MR_Word dump__conv0_HeadVar__1_1;

    {
      dump____Compare____dump_options_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
dump____Unify____dump_prop_measurements_0_0_10001(
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2)
{
  {
    MR_bool dump__succeeded;

    {
      dump__succeeded = dump____Unify____dump_prop_measurements_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
    return dump__succeeded;
  }
}

static void MR_CALL 
dump____Compare____dump_prop_measurements_0_0_10001(
  MR_Box * dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3)
{
  {
    MR_Word dump__conv0_HeadVar__1_1;

    {
      dump____Compare____dump_prop_measurements_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
dump____Unify____dump_rev_links_0_0_10001(
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2)
{
  {
    MR_bool dump__succeeded;

    {
      dump__succeeded = dump____Unify____dump_rev_links_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
    return dump__succeeded;
  }
}

static void MR_CALL 
dump____Compare____dump_rev_links_0_0_10001(
  MR_Box * dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3)
{
  {
    MR_Word dump__conv0_HeadVar__1_1;

    {
      dump____Compare____dump_rev_links_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
dump____Unify____dumpable_array_0_0_10001(
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2)
{
  {
    MR_bool dump__succeeded;

    {
      dump__succeeded = dump____Unify____dumpable_array_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
    return dump__succeeded;
  }
}

static void MR_CALL 
dump____Compare____dumpable_array_0_0_10001(
  MR_Box * dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3)
{
  {
    MR_Word dump__conv0_HeadVar__1_1;

    {
      dump____Compare____dumpable_array_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
dump____Unify____restriction_0_0_10001(
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2)
{
  {
    MR_bool dump__succeeded;

    {
      dump__succeeded = dump____Unify____restriction_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
    return dump__succeeded;
  }
}

static void MR_CALL 
dump____Compare____restriction_0_0_10001(
  MR_Box * dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3)
{
  {
    MR_Word dump__conv0_HeadVar__1_1;

    {
      dump____Compare____restriction_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
dump____Unify____show_restricted_dump_0_0_10001(
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2)
{
  {
    MR_bool dump__succeeded;

    {
      dump__succeeded = dump____Unify____show_restricted_dump_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
    return dump__succeeded;
  }
}

static void MR_CALL 
dump____Compare____show_restricted_dump_0_0_10001(
  MR_Box * dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3)
{
  {
    MR_Word dump__conv0_HeadVar__1_1;

    {
      dump____Compare____show_restricted_dump_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
dump____Unify____show_stats_0_0_10001(
  MR_Box dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2)
{
  {
    MR_bool dump__succeeded;

    {
      dump__succeeded = dump____Unify____show_stats_0_0(((MR_Word) dump__wrapper_arg_1), ((MR_Word) dump__wrapper_arg_2));
    }
    return dump__succeeded;
  }
}

static void MR_CALL 
dump____Compare____show_stats_0_0_10001(
  MR_Box * dump__wrapper_arg_1,
  MR_Box dump__wrapper_arg_2,
  MR_Box dump__wrapper_arg_3)
{
  {
    MR_Word dump__conv0_HeadVar__1_1;

    {
      dump____Compare____show_stats_0_0(&dump__conv0_HeadVar__1_1, ((MR_Word) dump__wrapper_arg_2), ((MR_Word) dump__wrapper_arg_3));
    }
    *dump__wrapper_arg_1 = ((MR_Box) (dump__conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__dump__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module dump. */
