/*
** Automatically generated from `dump.m'
** by the Mercury compiler,
** version rotd-2019-12-03
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


// :- module dump.
// :- implementation.

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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
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
dump__IntroducedFrom__pred__dump_deep_prop_measurements__872__1_2_p_0(
  MR_Integer CSSOwnMax_20,
  MR_Integer CSSDescMax_21);

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__863__1_2_p_0(
  MR_Integer PSOwnMax_16,
  MR_Integer PSDescMax_17);

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__854__1_2_p_0(
  MR_Integer CSDMax_12,
  MR_Integer CSDDescMax_13);

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__845__1_2_p_0(
  MR_Integer PDOwnMax_8,
  MR_Integer PDDescMax_9);

static void MR_CALL 
dump____Compare____restriction_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
dump____Unify____restriction_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
dump__dump_call_site_calls_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
dump__dump_call_site_calls_4_p_0(
  MR_Integer Index_5,
  MR_Word CalleeMap_6);

static void MR_CALL 
dump__dump_call_site_calls_to_proc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
dump__dump_call_site_calls_to_proc_4_p_0(
  MR_String Prefix_5,
  MR_Word HeadVar__2_2);

static void MR_CALL 
dump__dump_call_site_dynamic_to_static_4_p_0(
  MR_Integer Index_5,
  MR_Word CSSPtr_6);

static void MR_CALL 
dump__dump_space_csdptr_3_p_0(
  MR_Word CSDPtr_4);

static void MR_CALL 
dump__dump_proc_static_caller_csds_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
dump__dump_proc_static_caller_csds_4_p_0(
  MR_Integer Index_5,
  MR_Word CallerCSDs_6);

static void MR_CALL 
dump__dump_clique_maybe_child_4_p_0(
  MR_Integer Index_5,
  MR_Word MaybeCliquePtr_6);

static void MR_CALL 
dump__dump_clique_parent_4_p_0(
  MR_Integer Index_5,
  MR_Word CSDPtr_6);

static void MR_CALL 
dump__dump_pd_in_clique_3_p_0(
  MR_Word PDPtr_4);

static void MR_CALL 
dump__dump_clique_members_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
dump__dump_clique_members_4_p_0(
  MR_Integer Index_5,
  MR_Word CliqueMembers_6);

static void MR_CALL 
dump__dump_clique_index_entry_4_p_0(
  MR_Integer Index_5,
  MR_Word CliquePtr_6);

static void MR_CALL 
dump__dump_coverage_point_info_4_p_0(
  MR_Integer Num_5,
  MR_Word CoveragePointInfo_6);

static void MR_CALL 
dump__dump_coverage_point_5_p_0(
  MR_Word CoveragePoint_6,
  MR_Integer STATE_VARIABLE_Num_0_14,
  MR_Integer * STATE_VARIABLE_Num_15);

static void MR_CALL 
dump__dump_proc_static_call_sites_4_p_0(
  MR_Integer Slot_5,
  MR_Word CSSPtr_6);

static void MR_CALL 
dump__dump_proc_static_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
dump__dump_proc_static_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_proc_static_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_proc_static_5_p_0(
  MR_Word Restriction_6,
  MR_Integer Index_7,
  MR_Word ProcStatic_8);

static MR_String MR_CALL 
dump__dump_proc_id_1_f_0(
  MR_Word Proc_1);

static void MR_CALL 
dump__dump_call_site_static_5_p_0(
  MR_Word Restriction_6,
  MR_Integer Index_7,
  MR_Word CallSiteStatic_8);

static void MR_CALL 
dump__dump_call_site_kind_and_callee_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
dump__dump_call_site_array_slot_4_p_0(
  MR_Integer Index_5,
  MR_Word CSA_slot_6);

static void MR_CALL 
dump__dump_proc_dynamic_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
dump__dump_proc_dynamic_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_proc_dynamic_5_p_0(
  MR_ArrayPtr ProcStatics_6,
  MR_Integer Index_7,
  MR_Word ProcDynamic_8);

static void MR_CALL 
dump__dump_call_site_dynamic_4_p_0(
  MR_Integer Index_5,
  MR_Word CallSiteDynamic_6);

static void MR_CALL 
dump__get_static_ptrs_from_dynamic_proc_7_p_0(
  MR_ArrayPtr ProcStatics_8,
  MR_Integer HeadVar__2_9,
  MR_Word ProcDynamic_10,
  MR_Word STATE_VARIABLE_PS_Ptrs_0_16,
  MR_Word * STATE_VARIABLE_PS_Ptrs_17,
  MR_Word STATE_VARIABLE_CSS_Ptrs_0_18,
  MR_Word * STATE_VARIABLE_CSS_Ptrs_19);

static void MR_CALL 
dump__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
  MR_ArrayPtr ProcStatics_8,
  MR_Word ProcDynamic_10,
  MR_Word STATE_VARIABLE_PS_Ptrs_0_16,
  MR_Word * STATE_VARIABLE_PS_Ptrs_17,
  MR_Word STATE_VARIABLE_CSS_Ptrs_0_18,
  MR_Word * STATE_VARIABLE_CSS_Ptrs_19);

static MR_bool MR_CALL 
dump__string_to_dumpable_array_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
dump__det_string_to_dumpable_array_2_p_0(
  MR_String String_3,
  MR_Word * Array_4);

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
dump__dump_deep_prop_measurements_3_p_0(
  MR_Word Deep_4);

static void MR_CALL 
dump__dump_css_measurements_6_p_0(
  MR_Integer Cur_7,
  MR_Integer Max_8,
  MR_ArrayPtr CSSOwn_9,
  MR_ArrayPtr CSSDesc_10);

static void MR_CALL 
dump__dump_ps_measurements_6_p_0(
  MR_Integer Cur_7,
  MR_Integer Max_8,
  MR_ArrayPtr PSOwn_9,
  MR_ArrayPtr PSDesc_10);

static void MR_CALL 
dump__dump_csd_measurements_6_p_0(
  MR_Integer Cur_7,
  MR_Integer Max_8,
  MR_ArrayPtr CSDs_9,
  MR_ArrayPtr CSDDesc_10);

static void MR_CALL 
dump__dump_pd_measurements_6_p_0(
  MR_Integer Cur_7,
  MR_Integer Max_8,
  MR_ArrayPtr PDOwn_9,
  MR_ArrayPtr PDDesc_10);

static void MR_CALL 
dump__dump_own_and_desc_6_p_0(
  MR_String Prefix_7,
  MR_Integer Cur_8,
  MR_Word Own_9,
  MR_Word Desc_10);

static void MR_CALL 
dump__dump_inherit_prof_info_3_p_0(
  MR_Word Inherit_4);

static void MR_CALL 
dump__dump_own_prof_info_3_p_0(
  MR_Word Own_4);

static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_rev_links_3_p_0(
  MR_Word Deep_4);

static void MR_CALL 
dump__dump_deep_cliques_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_cliques_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_cliques_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_cliques_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_cliques_3_p_0(
  MR_Word Deep_4);

static void MR_CALL 
dump__dump_initial_deep_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
dump__should_dump_2_p_0(
  MR_Word DumpOptions_3,
  MR_Word What_4);

static void MR_CALL 
dump__dump_init_proc_statics_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_init_proc_statics_4_p_0(
  MR_Word Restriction_5,
  MR_ArrayPtr ProcStatics_6);

static void MR_CALL 
dump__dump_init_call_site_statics_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_init_call_site_statics_4_p_0(
  MR_Word Restriction_5,
  MR_ArrayPtr CallStatics_6);

static void MR_CALL 
dump__dump_init_proc_dynamics_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_init_proc_dynamics_4_p_0(
  MR_ArrayPtr ProcDynamics_5,
  MR_ArrayPtr ProcStatics_6);

static void MR_CALL 
dump__dump_init_call_site_dynamics_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_init_call_site_dynamics_3_p_0(
  MR_ArrayPtr CallSiteDynamics_4);

static void MR_CALL 
dump__dump_init_profile_stats_3_p_0(
  MR_Word Stats_4);

static void MR_CALL 
dump__det_dump_array_options_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
dump__dump_array_options_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
dump____Unify____dump_cliques_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
dump____Compare____dump_cliques_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
dump____Unify____dump_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
dump____Compare____dump_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
dump____Unify____dump_prop_measurements_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
dump____Compare____dump_prop_measurements_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
dump____Unify____dump_rev_links_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
dump____Compare____dump_rev_links_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
dump____Unify____dumpable_array_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
dump____Compare____dumpable_array_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
dump____Unify____restriction_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
dump____Compare____restriction_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
dump____Unify____show_restricted_dump_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
dump____Compare____show_restricted_dump_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
dump____Unify____show_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
dump____Compare____show_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&dump_scalar_common_3[0])),
    ((MR_Box) (dump__det_dump_array_options_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&dump_scalar_common_5[0])),
    ((MR_Box) (dump__dump_init_call_site_dynamics_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&dump_scalar_common_5[1])),
    ((MR_Box) (dump__dump_deep_cliques_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&dump_scalar_common_5[2])),
    ((MR_Box) (dump__dump_deep_cliques_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&dump_scalar_common_5[3])),
    ((MR_Box) (dump__dump_deep_cliques_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&dump_scalar_common_5[4])),
    ((MR_Box) (dump__dump_deep_cliques_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&dump_scalar_common_5[5])),
    ((MR_Box) (dump__dump_deep_rev_links_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&dump_scalar_common_5[6])),
    ((MR_Box) (dump__dump_deep_rev_links_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&dump_scalar_common_5[7])),
    ((MR_Box) (dump__dump_deep_rev_links_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&dump_scalar_common_5[8])),
    ((MR_Box) (dump__dump_proc_dynamic_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&dump_scalar_common_6[3])),
    ((MR_Box) (dump__dump_proc_dynamic_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&dump_scalar_common_5[6])),
    ((MR_Box) (dump__dump_proc_static_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&dump_scalar_common_5[9])),
    ((MR_Box) (dump__dump_proc_static_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&dump_scalar_common_6[3])),
    ((MR_Box) (dump__dump_proc_static_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&dump_scalar_common_9[0])),
    ((MR_Box) (dump__dump_clique_members_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&dump_scalar_common_9[1])),
    ((MR_Box) (dump__dump_proc_static_caller_csds_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&dump_scalar_common_9[1])),
    ((MR_Box) (dump__dump_call_site_calls_to_proc_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box dump_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&dump__dump__type_ctor_info_dumpable_array_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box dump_scalar_common_4[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box dump_scalar_common_5[11][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&dump__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&dump__maybe__pti_maybe_1__plain_profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&dump__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&dump__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
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
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 7)),
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
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
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
    ((MR_Box) ((MR_Integer) 1)),
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
#include "bitmap.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 dump__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 dump__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 dump__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_call_site_static_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_static_ptr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 dump__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 dump__maybe__pti_maybe_1__plain_profile__type_ctor_info_clique_ptr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 dump__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static const MR_FA_TypeInfo_Struct1 dump__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 dump__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0),
    (MR_PseudoTypeInfo) (&dump__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 dump__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0),
    (MR_PseudoTypeInfo) (&dump__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_cliques_0_0 = {
  (MR_String) "dump_cliques",
  INT32_C(0)
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_cliques_0_1 = {
  (MR_String) "do_not_dump_cliques",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____dump_cliques_0_0_10001)),
  ((MR_Box) (dump____Compare____dump_cliques_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "dump_cliques",
  {     dump__dump__enum_name_ordered_dump_cliques_0 },
  {     dump__dump__enum_value_ordered_dump_cliques_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  dump__dump__functor_number_map_dump_cliques_0
};

static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1dump__type_ctor_info_dumpable_array_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&dump__dump__type_ctor_info_dumpable_array_0)
  }
};

static const MR_PseudoTypeInfo dump__dump__field_types_dump_options_0_0[6] = {
  (MR_PseudoTypeInfo) (&dump__dump__type_ctor_info_show_restricted_dump_0),
  (MR_PseudoTypeInfo) (&dump__set_ordlist__ti_set_ordlist_1dump__type_ctor_info_dumpable_array_0),
  (MR_PseudoTypeInfo) (&dump__dump__type_ctor_info_show_stats_0),
  (MR_PseudoTypeInfo) (&dump__dump__type_ctor_info_dump_cliques_0),
  (MR_PseudoTypeInfo) (&dump__dump__type_ctor_info_dump_rev_links_0),
  (MR_PseudoTypeInfo) (&dump__dump__type_ctor_info_dump_prop_measurements_0)
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc dump__dump__du_functor_desc_dump_options_0_0 = {
  (MR_String) "dump_options",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  dump__dump__field_types_dump_options_0_0,
  dump__dump__field_names_dump_options_0_0,
  dump__dump__field_locns_dump_options_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_dump_options_0_0[1] = {
  &dump__dump__du_functor_desc_dump_options_0_0
};

static const MR_DuPtagLayout dump__dump__du_ptag_ordered_dump_options_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    dump__dump__du_stag_ordered_dump_options_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (dump____Unify____dump_options_0_0_10001)),
  ((MR_Box) (dump____Compare____dump_options_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "dump_options",
  {     dump__dump__du_name_ordered_dump_options_0 },
  {     dump__dump__du_ptag_ordered_dump_options_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  dump__dump__functor_number_map_dump_options_0
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_prop_measurements_0_0 = {
  (MR_String) "dump_prop_measurements",
  INT32_C(0)
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_prop_measurements_0_1 = {
  (MR_String) "do_not_dump_prop_measurements",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____dump_prop_measurements_0_0_10001)),
  ((MR_Box) (dump____Compare____dump_prop_measurements_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "dump_prop_measurements",
  {     dump__dump__enum_name_ordered_dump_prop_measurements_0 },
  {     dump__dump__enum_value_ordered_dump_prop_measurements_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  dump__dump__functor_number_map_dump_prop_measurements_0
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_rev_links_0_0 = {
  (MR_String) "dump_rev_links",
  INT32_C(0)
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_rev_links_0_1 = {
  (MR_String) "do_not_dump_rev_links",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____dump_rev_links_0_0_10001)),
  ((MR_Box) (dump____Compare____dump_rev_links_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "dump_rev_links",
  {     dump__dump__enum_name_ordered_dump_rev_links_0 },
  {     dump__dump__enum_value_ordered_dump_rev_links_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  dump__dump__functor_number_map_dump_rev_links_0
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_0 = {
  (MR_String) "csd",
  INT32_C(0)
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_1 = {
  (MR_String) "css",
  INT32_C(1)
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_2 = {
  (MR_String) "pd",
  INT32_C(2)
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_3 = {
  (MR_String) "ps",
  INT32_C(3)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____dumpable_array_0_0_10001)),
  ((MR_Box) (dump____Compare____dumpable_array_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "dumpable_array",
  {     dump__dump__enum_name_ordered_dumpable_array_0 },
  {     dump__dump__enum_value_ordered_dumpable_array_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  dump__dump__functor_number_map_dumpable_array_0
};

static const MR_DuFunctorDesc dump__dump__du_functor_desc_restriction_0_0 = {
  (MR_String) "none",
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

static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0)
  }
};

static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_call_site_static_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_call_site_static_ptr_0)
  }
};

static const MR_PseudoTypeInfo dump__dump__field_types_restriction_0_1[2] = {
  (MR_PseudoTypeInfo) (&dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_static_ptr_0),
  (MR_PseudoTypeInfo) (&dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_call_site_static_ptr_0)
};

static const MR_DuFunctorDesc dump__dump__du_functor_desc_restriction_0_1 = {
  (MR_String) "these",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  dump__dump__field_types_restriction_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_restriction_0_0[1] = {
  &dump__dump__du_functor_desc_restriction_0_0
};

static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_restriction_0_1[1] = {
  &dump__dump__du_functor_desc_restriction_0_1
};

static const MR_DuPtagLayout dump__dump__du_ptag_ordered_restriction_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    dump__dump__du_stag_ordered_restriction_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    dump__dump__du_stag_ordered_restriction_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (dump____Unify____restriction_0_0_10001)),
  ((MR_Box) (dump____Compare____restriction_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "restriction",
  {     dump__dump__du_name_ordered_restriction_0 },
  {     dump__dump__du_ptag_ordered_restriction_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  dump__dump__functor_number_map_restriction_0
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_restricted_dump_0_0 = {
  (MR_String) "show_restricted_dump",
  INT32_C(0)
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_restricted_dump_0_1 = {
  (MR_String) "show_complete_dump",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____show_restricted_dump_0_0_10001)),
  ((MR_Box) (dump____Compare____show_restricted_dump_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "show_restricted_dump",
  {     dump__dump__enum_name_ordered_show_restricted_dump_0 },
  {     dump__dump__enum_value_ordered_show_restricted_dump_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  dump__dump__functor_number_map_show_restricted_dump_0
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_stats_0_0 = {
  (MR_String) "show_stats",
  INT32_C(0)
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_stats_0_1 = {
  (MR_String) "do_not_show_stats",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____show_stats_0_0_10001)),
  ((MR_Box) (dump____Compare____show_stats_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "show_stats",
  {     dump__dump__enum_name_ordered_show_stats_0 },
  {     dump__dump__enum_value_ordered_show_stats_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  dump__dump__functor_number_map_show_stats_0
};

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__872__1_2_p_0(
  MR_Integer CSSOwnMax_20,
  MR_Integer CSSDescMax_21)
{
  {
    MR_bool succeeded = (CSSOwnMax_20 == CSSDescMax_21);

    return succeeded;
  }
}

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__863__1_2_p_0(
  MR_Integer PSOwnMax_16,
  MR_Integer PSDescMax_17)
{
  {
    MR_bool succeeded = (PSOwnMax_16 == PSDescMax_17);

    return succeeded;
  }
}

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__854__1_2_p_0(
  MR_Integer CSDMax_12,
  MR_Integer CSDDescMax_13)
{
  {
    MR_bool succeeded = (CSDMax_12 == CSDDescMax_13);

    return succeeded;
  }
}

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__845__1_2_p_0(
  MR_Integer PDOwnMax_8,
  MR_Integer PDDescMax_9)
{
  {
    MR_bool succeeded = (PDOwnMax_8 == PDDescMax_9);

    return succeeded;
  }
}

void MR_CALL 
dump____Compare____show_stats_0_0(
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
dump____Unify____show_stats_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
dump____Compare____show_restricted_dump_0_0(
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
dump____Unify____show_restricted_dump_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
dump____Compare____restriction_0_0(
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
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_10;

        mercury__builtin__compare_3_p_0((MR_Word) (&dump_scalar_common_1[0]), &SubResult1_10, ((MR_Box) (Var_18)), ((MR_Box) (ArgY1_9)));
        succeeded = (SubResult1_10 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&dump_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY2_12)));
      }
    }
  }
}

static MR_bool MR_CALL 
dump____Unify____restriction_0_0(
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
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word TypeInfo_11_11;
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        TypeInfo_11_11 = (MR_Word) (&dump_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) (&dump_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
dump____Compare____dumpable_array_0_0(
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
dump____Unify____dumpable_array_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
dump____Compare____dump_rev_links_0_0(
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
dump____Unify____dump_rev_links_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
dump____Compare____dump_prop_measurements_0_0(
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
dump____Unify____dump_prop_measurements_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
dump____Compare____dump_options_0_0(
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
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
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

        mercury__builtin__compare_3_p_0((MR_Word) (&dump_scalar_common_1[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_31 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_32 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_31 < Var_32);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_31 > Var_32);
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
            MR_Integer Var_33 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_34 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_33 < Var_34);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_33 > Var_34);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;
              MR_Integer Var_35 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_36 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_35 < Var_36);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_35 > Var_36);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult5_18 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Integer Var_37 = (MR_Integer) (ArgX6_19);
                MR_Integer Var_38 = (MR_Integer) (ArgY6_20);

                succeeded = (Var_37 < Var_38);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_37 > Var_38);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
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
      MR_Word TypeInfo_17_17;
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_17_17 = (MR_Word) (&dump_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
                succeeded = (ArgX6_13 == ArgY6_14);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
dump____Compare____dump_cliques_0_0(
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
dump____Unify____dump_cliques_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
dump__dump_call_site_calls_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    dump__dump_call_site_calls_to_proc_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
dump__dump_call_site_calls_4_p_0(
  MR_Integer Index_5,
  MR_Word CalleeMap_6)
{
  {
    MR_Word CalleeList_8;

    CalleeList_8 = mercury__map__to_assoc_list_1_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&dump_scalar_common_1[4]), CalleeMap_6);
    if (!((CalleeList_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CalleeList_8, (MR_Integer) 1))));
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CalleeList_8, (MR_Integer) 0))));

      if ((Var_39 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Var_55;

        mercury__io__write_string_3_p_0((MR_String) "css");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Index_5, &Var_55);
        mercury__io__write_string_3_p_0(Var_55);
        mercury__io__write_string_3_p_0((MR_String) " calls one procedure: ");
        dump__dump_call_site_calls_to_proc_4_p_0((MR_String) "", Var_40);
      }
      else
      {
        MR_String Var_44;
        MR_Box conv0_STATE_VARIABLE_IO_14;

        mercury__io__write_string_3_p_0((MR_String) "css");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Index_5, &Var_44);
        mercury__io__write_string_3_p_0(Var_44);
        mercury__io__write_string_3_p_0((MR_String) " calls several procedures:\n");
        mercury__list__foldl_4_p_2((MR_Word) (&dump_scalar_common_2[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&dump_scalar_common_10[0]), CalleeList_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14);
      }
    }
  }
}

static void MR_CALL 
dump__dump_call_site_calls_to_proc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    dump__dump_space_csdptr_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
dump__dump_call_site_calls_to_proc_4_p_0(
  MR_String Prefix_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word PSPtr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word CSDPtrs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer PSNum_9 = (MR_Integer) (PSPtr_6);
    MR_String Var_31;
    MR_Box conv0_STATE_VARIABLE_IO_20_20;

    mercury__io__write_string_3_p_0(Prefix_5);
    mercury__io__write_string_3_p_0((MR_String) "ps");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), PSNum_9, &Var_31);
    mercury__io__write_string_3_p_0(Var_31);
    mercury__io__write_string_3_p_0((MR_String) ":");
    mercury__list__foldl_4_p_2((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&dump_scalar_common_2[19]), CSDPtrs_7, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_20_20);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
dump__dump_call_site_dynamic_to_static_4_p_0(
  MR_Integer Index_5,
  MR_Word CSSPtr_6)
{
  {
    MR_Integer CSSNum_8 = (MR_Integer) (CSSPtr_6);
    MR_String Var_21;
    MR_String Var_31;

    mercury__io__write_string_3_p_0((MR_String) "csd");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Index_5, &Var_21);
    mercury__io__write_string_3_p_0(Var_21);
    mercury__io__write_string_3_p_0((MR_String) " is at css");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), CSSNum_8, &Var_31);
    mercury__io__write_string_3_p_0(Var_31);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
dump__dump_space_csdptr_3_p_0(
  MR_Word CSDPtr_4)
{
  {
    MR_Integer CSDNum_6 = (MR_Integer) (CSDPtr_4);

    mercury__io__write_string_3_p_0((MR_String) " csd");
    mercury__io__write_int_3_p_0(CSDNum_6);
  }
}

static void MR_CALL 
dump__dump_proc_static_caller_csds_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    dump__dump_space_csdptr_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
dump__dump_proc_static_caller_csds_4_p_0(
  MR_Integer Index_5,
  MR_Word CallerCSDs_6)
{
  if (!((CallerCSDs_6 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String Var_28;
    MR_Box conv0_STATE_VARIABLE_IO_18_18;

    mercury__io__write_string_3_p_0((MR_String) "ps");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Index_5, &Var_28);
    mercury__io__write_string_3_p_0(Var_28);
    mercury__io__write_string_3_p_0((MR_String) " callers:");
    mercury__list__foldl_4_p_2((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&dump_scalar_common_2[18]), CallerCSDs_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_18_18);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
dump__dump_clique_maybe_child_4_p_0(
  MR_Integer Index_5,
  MR_Word MaybeCliquePtr_6)
{
  if (!((MaybeCliquePtr_6 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word CliquePtr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCliquePtr_6, (MR_Integer) 0))));
    MR_Integer CliqueNum_9 = (MR_Integer) (CliquePtr_8);
    MR_String Var_22;
    MR_String Var_32;

    mercury__io__write_string_3_p_0((MR_String) "csd");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Index_5, &Var_22);
    mercury__io__write_string_3_p_0(Var_22);
    mercury__io__write_string_3_p_0((MR_String) " child: clique");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), CliqueNum_9, &Var_32);
    mercury__io__write_string_3_p_0(Var_32);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
dump__dump_clique_parent_4_p_0(
  MR_Integer Index_5,
  MR_Word CSDPtr_6)
{
  {
    MR_Integer CSDNum_8 = (MR_Integer) (CSDPtr_6);
    MR_String Var_21;
    MR_String Var_31;

    mercury__io__write_string_3_p_0((MR_String) "clique");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Index_5, &Var_21);
    mercury__io__write_string_3_p_0(Var_21);
    mercury__io__write_string_3_p_0((MR_String) " parent: csd");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), CSDNum_8, &Var_31);
    mercury__io__write_string_3_p_0(Var_31);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
dump__dump_pd_in_clique_3_p_0(
  MR_Word PDPtr_4)
{
  {
    MR_Integer PDNum_6 = (MR_Integer) (PDPtr_4);

    mercury__io__write_string_3_p_0((MR_String) " pd");
    mercury__io__write_int_3_p_0(PDNum_6);
  }
}

static void MR_CALL 
dump__dump_clique_members_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    dump__dump_pd_in_clique_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
dump__dump_clique_members_4_p_0(
  MR_Integer Index_5,
  MR_Word CliqueMembers_6)
{
  {
    MR_String Var_26;
    MR_Box conv0_STATE_VARIABLE_IO_16_16;

    mercury__io__write_string_3_p_0((MR_String) "clique");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Index_5, &Var_26);
    mercury__io__write_string_3_p_0(Var_26);
    mercury__io__write_string_3_p_0((MR_String) " members:");
    mercury__list__foldl_4_p_2((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&dump_scalar_common_2[17]), CliqueMembers_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16_16);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
dump__dump_clique_index_entry_4_p_0(
  MR_Integer Index_5,
  MR_Word CliquePtr_6)
{
  {
    MR_Integer CliqueNum_8 = (MR_Integer) (CliquePtr_6);
    MR_String Var_21;
    MR_String Var_31;

    mercury__io__write_string_3_p_0((MR_String) "pd");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Index_5, &Var_21);
    mercury__io__write_string_3_p_0(Var_21);
    mercury__io__write_string_3_p_0((MR_String) " is in clique");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), CliqueNum_8, &Var_31);
    mercury__io__write_string_3_p_0(Var_31);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
dump__dump_coverage_point_info_4_p_0(
  MR_Integer Num_5,
  MR_Word CoveragePointInfo_6)
{
  {
    MR_String CPInfoStr_8;
    MR_Word RevPath_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CoveragePointInfo_6, (MR_Integer) 0))));
    MR_Word CPType_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CoveragePointInfo_6, (MR_Integer) 1))));
    MR_String PathString_24;
    MR_String Var_30;
    MR_String Var_36;
    MR_String Var_37;
    MR_String Var_39;
    MR_String Var_40;
    MR_String Var_47;

    PathString_24 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(RevPath_22);
    Var_30 = mercury__string__string_1_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0), ((MR_Box) (CPType_23)));
    Var_36 = mercury__string__f_43_43_2_f_0((MR_String) ", ", PathString_24);
    Var_37 = mercury__string__f_43_43_2_f_0(Var_30, Var_36);
    Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "]: ", Var_37);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Num_5, &Var_40);
    Var_47 = mercury__string__f_43_43_2_f_0(Var_40, Var_39);
    CPInfoStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "coverage_point[", Var_47);
    mercury__io__write_string_3_p_0((MR_String) "\t");
    mercury__io__write_string_3_p_0(CPInfoStr_8);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
dump__dump_coverage_point_5_p_0(
  MR_Word CoveragePoint_6,
  MR_Integer STATE_VARIABLE_Num_0_14,
  MR_Integer * STATE_VARIABLE_Num_15)
{
  {
    MR_Integer Count_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CoveragePoint_6, (MR_Integer) 0))));
    MR_String CPInfoStr_13;
    MR_String Var_33;
    MR_Word RevPath_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CoveragePoint_6, (MR_Integer) 1))));
    MR_Word CPType_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CoveragePoint_6, (MR_Integer) 2))));
    MR_String PathString_45;
    MR_String Var_51;
    MR_String Var_57;
    MR_String Var_58;
    MR_String Var_60;
    MR_String Var_61;
    MR_String Var_68;

    PathString_45 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(RevPath_43);
    Var_51 = mercury__string__string_1_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0), ((MR_Box) (CPType_44)));
    Var_57 = mercury__string__f_43_43_2_f_0((MR_String) ", ", PathString_45);
    Var_58 = mercury__string__f_43_43_2_f_0(Var_51, Var_57);
    Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "]: ", Var_58);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), STATE_VARIABLE_Num_0_14, &Var_61);
    Var_68 = mercury__string__f_43_43_2_f_0(Var_61, Var_60);
    CPInfoStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "coverage_point[", Var_68);
    mercury__io__write_string_3_p_0((MR_String) "\t");
    mercury__io__write_string_3_p_0(CPInfoStr_13);
    mercury__io__write_string_3_p_0((MR_String) ": ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Count_9, &Var_33);
    mercury__io__write_string_3_p_0(Var_33);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    *STATE_VARIABLE_Num_15 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Num_0_14 + (MR_Unsigned) 1);
  }
}

static void MR_CALL 
dump__dump_proc_static_call_sites_4_p_0(
  MR_Integer Slot_5,
  MR_Word CSSPtr_6)
{
  {
    MR_Integer CSSI_8 = (MR_Integer) (CSSPtr_6);
    MR_String Var_21;
    MR_String Var_31;

    mercury__io__write_string_3_p_0((MR_String) "\tps_site[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Slot_5, &Var_21);
    mercury__io__write_string_3_p_0(Var_21);
    mercury__io__write_string_3_p_0((MR_String) "]: css");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), CSSI_8, &Var_31);
    mercury__io__write_string_3_p_0(Var_31);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
dump__dump_proc_static_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv2_STATE_VARIABLE_Num_15;

    dump__dump_coverage_point_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Num_15);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Num_15));
  }
}

static void MR_CALL 
dump__dump_proc_static_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    dump__dump_coverage_point_info_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
dump__dump_proc_static_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    dump__dump_proc_static_call_sites_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
dump__dump_proc_static_5_p_0(
  MR_Word Restriction_6,
  MR_Integer Index_7,
  MR_Word ProcStatic_8)
{
  {
    MR_bool succeeded;

    if ((Restriction_6 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word UsedProcStatics_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Restriction_6, (MR_Integer) 0))));
      MR_Word Var_31 = (MR_Word) (Index_7);

      succeeded = mercury__set__member_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), ((MR_Box) (Var_31)), UsedProcStatics_10);
    }
    if (succeeded)
    {
      MR_Word Id_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcStatic_8, (MR_Integer) 0))));
      MR_String DeclModule_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcStatic_8, (MR_Integer) 1))));
      MR_String QualRefinedId_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcStatic_8, (MR_Integer) 3))));
      MR_String RawId_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcStatic_8, (MR_Integer) 4))));
      MR_String FileName_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcStatic_8, (MR_Integer) 5))));
      MR_Integer LineNumber_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcStatic_8, (MR_Integer) 6))));
      MR_Word InInterface_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcStatic_8, (MR_Integer) 7))) & (MR_Integer) 1);
      MR_ArrayPtr Sites_20 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), ProcStatic_8, (MR_Integer) 8))));
      MR_ArrayPtr CoveragePointInfos_21 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), ProcStatic_8, (MR_Integer) 9))));
      MR_Word MaybeCoveragePoints_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcStatic_8, (MR_Integer) 10))));
      MR_Word IsZeroed_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcStatic_8, (MR_Integer) 11))) & (MR_Integer) 1);
      MR_String IdStr_24;
      MR_String IsZeroStr_25;
      MR_String Var_108;
      MR_String Var_136;
      MR_String Var_48;
      MR_String Var_104;
      MR_Box conv0_STATE_VARIABLE_IO_75_75;

      IdStr_24 = dump__dump_proc_id_1_f_0(Id_12);
      mercury__io__write_string_3_p_0((MR_String) "ps");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Index_7, &Var_108);
      mercury__io__write_string_3_p_0(Var_108);
      mercury__io__write_string_3_p_0((MR_String) ":\n");
      mercury__io__write_string_3_p_0((MR_String) "\tps_id\t\t= ");
      mercury__io__write_string_3_p_0(IdStr_24);
      mercury__io__nl_2_p_0();
      mercury__io__write_string_3_p_0((MR_String) "\tps_decl_module\t= ");
      mercury__io__write_string_3_p_0(DeclModule_13);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      Var_48 = mercury__string__f_43_43_2_f_0((MR_String) ".", IdStr_24);
      Var_104 = mercury__string__f_43_43_2_f_0(DeclModule_13, Var_48);
      succeeded = (strcmp(QualRefinedId_15, Var_104) == 0);
      if (!(succeeded))
      {
        mercury__io__write_string_3_p_0((MR_String) "\tps_q_refined_id\t= ");
        mercury__io__write_string_3_p_0(QualRefinedId_15);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      succeeded = (strcmp(QualRefinedId_15, RawId_16) == 0);
      succeeded = !(succeeded);
      if (!(succeeded))
      {
        mercury__io__write_string_3_p_0((MR_String) "\tps_raw_id\t= ");
        mercury__io__write_string_3_p_0(RawId_16);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      mercury__io__write_string_3_p_0((MR_String) "\tlocation\t= ");
      mercury__io__write_string_3_p_0(FileName_17);
      mercury__io__write_string_3_p_0((MR_String) ":");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), LineNumber_18, &Var_136);
      mercury__io__write_string_3_p_0(Var_136);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      switch (InInterface_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_3_p_0((MR_String) "\tin_interface\n");
          break;
      }
      switch (IsZeroed_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          IsZeroStr_25 = (MR_String) "not_zeroed";
          break;
        case (MR_Integer) 0:
          IsZeroStr_25 = (MR_String) "zeroed";
          break;
      }
      mercury__io__write_string_3_p_0((MR_String) "\t");
      mercury__io__write_string_3_p_0(IsZeroStr_25);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      array_util__array_foldl_from_0_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&dump_scalar_common_2[14]), (MR_ArrayPtr) (Sites_20), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_75_75);
      if ((MaybeCoveragePoints_22 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Box conv1_STATE_VARIABLE_IO_82_82;

        mercury__io__write_string_3_p_0((MR_String) "\tCoverage counts not present in proc static\n");
        array_util__array_foldl_from_0_4_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&dump_scalar_common_2[15]), (MR_ArrayPtr) (CoveragePointInfos_21), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_82_82);
      }
      else
      {
        MR_ArrayPtr CoveragePointsArray_26 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(1), MaybeCoveragePoints_22, (MR_Integer) 0))));
        MR_Word CoveragePoints_27;
        MR_Box conv4_Var_28;
        MR_Box conv3_STATE_VARIABLE_IO_82_82;

        coverage__coverage_point_arrays_to_list_3_p_0(CoveragePointInfos_21, CoveragePointsArray_26, &CoveragePoints_27);
        mercury__list__foldl2_6_p_2((MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&dump_scalar_common_2[16]), CoveragePoints_27, ((MR_Box) ((MR_Integer) 0)), &conv4_Var_28, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_82_82);
      }
      mercury__io__nl_2_p_0();
    }
  }
}

static MR_String MR_CALL 
dump__dump_proc_id_1_f_0(
  MR_Word Proc_1)
{
  {
    MR_String Str_2;

    if (((MR_tag((MR_Word) Proc_1)) == (MR_Integer) 0))
    {
      MR_Word PredOrFunc_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Proc_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_String Name_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Proc_1, (MR_Integer) 3))));
      MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Proc_1, (MR_Integer) 4))));
      MR_Integer Mode_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Proc_1, (MR_Integer) 5))));
      MR_String Suffix_11;
      MR_String Var_40;
      MR_String Var_47;
      MR_String Var_49;
      MR_String Var_50;
      MR_String Var_57;
      MR_String Var_59;

      switch (PredOrFunc_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Suffix_11 = (MR_String) "+1";
          break;
        case (MR_Integer) 0:
          Suffix_11 = (MR_String) "";
          break;
      }
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Mode_10, &Var_40);
      Var_47 = mercury__string__f_43_43_2_f_0(Var_40, Suffix_11);
      Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_47);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Arity_9, &Var_50);
      Var_57 = mercury__string__f_43_43_2_f_0(Var_50, Var_49);
      Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_57);
      Str_2 = mercury__string__f_43_43_2_f_0(Name_8, Var_59);
    }
    else
    {
      MR_String Type_24 = ((MR_String) ((MR_hl_field(MR_mktag(1), Proc_1, (MR_Integer) 0))));
      MR_String Name_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), Proc_1, (MR_Integer) 3))));
      MR_String Var_37;
      MR_String Var_39;

      Var_37 = mercury__string__f_43_43_2_f_0(Type_24, (MR_String) "\'");
      Var_39 = mercury__string__f_43_43_2_f_0((MR_String) " predicate for type \140", Var_37);
      Str_2 = mercury__string__f_43_43_2_f_0(Name_27, Var_39);
    }
    return Str_2;
  }
}

static void MR_CALL 
dump__dump_call_site_static_5_p_0(
  MR_Word Restriction_6,
  MR_Integer Index_7,
  MR_Word CallSiteStatic_8)
{
  {
    MR_bool succeeded;

    if ((Restriction_6 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word UsedCallSiteStatics_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Restriction_6, (MR_Integer) 1))));
      MR_Word Var_21 = (MR_Word) (Index_7);

      succeeded = mercury__set__member_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), ((MR_Box) (Var_21)), UsedCallSiteStatics_11);
    }
    if (succeeded)
    {
      MR_Word ContainerPSPtr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallSiteStatic_8, (MR_Integer) 0))));
      MR_Integer SlotNum_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CallSiteStatic_8, (MR_Integer) 1))));
      MR_Word Kind_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallSiteStatic_8, (MR_Integer) 2))));
      MR_Integer LineNum_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CallSiteStatic_8, (MR_Integer) 3))));
      MR_Word GoalPath_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallSiteStatic_8, (MR_Integer) 4))));
      MR_Integer ContainerPSI_17 = (MR_Integer) (ContainerPSPtr_12);
      MR_String GoalPathString_18;
      MR_String Var_56;
      MR_String Var_67;
      MR_String Var_78;
      MR_String Var_89;

      GoalPathString_18 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(GoalPath_16);
      mercury__io__write_string_3_p_0((MR_String) "css");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Index_7, &Var_56);
      mercury__io__write_string_3_p_0(Var_56);
      mercury__io__write_string_3_p_0((MR_String) ":\n");
      mercury__io__write_string_3_p_0((MR_String) "\tcss_container\t= ps");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), ContainerPSI_17, &Var_67);
      mercury__io__write_string_3_p_0(Var_67);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      mercury__io__write_string_3_p_0((MR_String) "\tcss_slot_num\t= <");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), SlotNum_13, &Var_78);
      mercury__io__write_string_3_p_0(Var_78);
      mercury__io__write_string_3_p_0((MR_String) ">\n");
      mercury__io__write_string_3_p_0((MR_String) "\tcss_line_num\t= <");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), LineNum_15, &Var_89);
      mercury__io__write_string_3_p_0(Var_89);
      mercury__io__write_string_3_p_0((MR_String) ">\n");
      mercury__io__write_string_3_p_0((MR_String) "\tcss_goal_path\t= <");
      mercury__io__write_string_3_p_0(GoalPathString_18);
      mercury__io__write_string_3_p_0((MR_String) ">\n");
      mercury__io__write_string_3_p_0((MR_String) "\tcss_kind\t= ");
      dump__dump_call_site_kind_and_callee_3_p_0(Kind_14);
      mercury__io__nl_2_p_0();
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
dump__dump_call_site_kind_and_callee_3_p_0(
  MR_Word HeadVar__1_1)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_3_p_0((MR_String) "special_call");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_3_p_0((MR_String) "higher_order_call");
          break;
        case (MR_Integer) 2:
          mercury__io__write_string_3_p_0((MR_String) "method_call");
          break;
        case (MR_Integer) 3:
          mercury__io__write_string_3_p_0((MR_String) "callback");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Ptr_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_String String_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Integer Val_7 = (MR_Integer) (Ptr_4);
        MR_String Var_40;

        mercury__io__write_string_3_p_0((MR_String) "normal_call(");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Val_7, &Var_40);
        mercury__io__write_string_3_p_0(Var_40);
        mercury__io__write_string_3_p_0((MR_String) ", \"");
        mercury__io__write_string_3_p_0(String_5);
        mercury__io__write_string_3_p_0((MR_String) "\")");
      }
      break;
  }
}

static void MR_CALL 
dump__dump_call_site_array_slot_4_p_0(
  MR_Integer Index_5,
  MR_Word CSA_slot_6)
{
  {
    MR_String Var_16;
    MR_String Var_21;

    if (((MR_tag((MR_Word) CSA_slot_6)) == (MR_Integer) 1))
      Var_16 = (MR_String) "multi";
    else
    {
      MR_Integer CSDI_32;
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSA_slot_6, (MR_Integer) 0))));
      MR_String Var_41;
      MR_String Var_48;

      CSDI_32 = (MR_Integer) (Var_33);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), CSDI_32, &Var_41);
      Var_48 = mercury__string__f_43_43_2_f_0(Var_41, (MR_String) ")");
      Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "normal(csd", Var_48);
    }
    mercury__io__write_string_3_p_0((MR_String) "\tpd_site[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Index_5, &Var_21);
    mercury__io__write_string_3_p_0(Var_21);
    mercury__io__write_string_3_p_0((MR_String) "] = ");
    mercury__io__write_string_3_p_0(Var_16);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
dump__dump_proc_dynamic_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_STATE_VARIABLE_Num_15;

    dump__dump_coverage_point_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Num_15);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Num_15));
  }
}

static void MR_CALL 
dump__dump_proc_dynamic_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    dump__dump_call_site_array_slot_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
dump__dump_proc_dynamic_5_p_0(
  MR_ArrayPtr ProcStatics_6,
  MR_Integer Index_7,
  MR_Word ProcDynamic_8)
{
  {
    MR_bool succeeded;
    MR_Word PSPtr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDynamic_8, (MR_Integer) 0))));
    MR_ArrayPtr Sites_11 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), ProcDynamic_8, (MR_Integer) 1))));
    MR_Word MaybeCPs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDynamic_8, (MR_Integer) 2))));
    MR_Integer PSI_13 = (MR_Integer) (PSPtr_10);
    MR_Word PS_14;
    MR_String QualRefinedPSId_15;
    MR_String Var_92;
    MR_String Var_103;
    MR_String Var_22;
    MR_Box conv0_STATE_VARIABLE_IO_36_36;

    profile__lookup_proc_statics_3_p_0(ProcStatics_6, PSPtr_10, &PS_14);
    Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), PS_14, (MR_Integer) 3))));
    succeeded = (strcmp(Var_22, (MR_String) "") == 0);
    if (succeeded)
      QualRefinedPSId_15 = (MR_String) "UNKNOWN_PS";
    else
      QualRefinedPSId_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), PS_14, (MR_Integer) 3))));
    mercury__io__write_string_3_p_0((MR_String) "pd");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Index_7, &Var_92);
    mercury__io__write_string_3_p_0(Var_92);
    mercury__io__write_string_3_p_0((MR_String) ":\n");
    mercury__io__write_string_3_p_0((MR_String) "\tpd_proc_static = ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), PSI_13, &Var_103);
    mercury__io__write_string_3_p_0(Var_103);
    mercury__io__write_string_3_p_0((MR_String) " (");
    mercury__io__write_string_3_p_0(QualRefinedPSId_15);
    mercury__io__write_string_3_p_0((MR_String) ")\n");
    array_util__array_foldl_from_0_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&dump_scalar_common_2[12]), (MR_ArrayPtr) (Sites_11), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_36_36);
    if (!((MaybeCPs_12 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_ArrayPtr CPCounts_16 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(1), MaybeCPs_12, (MR_Integer) 0))));
      MR_ArrayPtr CPInfos_17 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), PS_14, (MR_Integer) 9))));
      MR_Word CPs_18;
      MR_Box conv3_Var_19;
      MR_Box conv2_STATE_VARIABLE_IO_41_41;

      coverage__coverage_point_arrays_to_list_3_p_0(CPInfos_17, CPCounts_16, &CPs_18);
      mercury__io__write_string_3_p_0((MR_String) "Coverage points:\n");
      mercury__list__foldl2_6_p_2((MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&dump_scalar_common_2[13]), CPs_18, ((MR_Box) ((MR_Integer) 0)), &conv3_Var_19, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_41_41);
    }
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
dump__dump_call_site_dynamic_4_p_0(
  MR_Integer Index_5,
  MR_Word CallSiteDynamic_6)
{
  {
    MR_Word CallerPDPtr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallSiteDynamic_6, (MR_Integer) 0))));
    MR_Word CalleePDPtr_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallSiteDynamic_6, (MR_Integer) 1))));
    MR_Word Own_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallSiteDynamic_6, (MR_Integer) 2))));
    MR_Integer CallerPDI_11 = (MR_Integer) (CallerPDPtr_8);
    MR_Integer CalleePDI_12 = (MR_Integer) (CalleePDPtr_9);
    MR_String Var_35;
    MR_String Var_46;
    MR_String Var_57;

    mercury__io__write_string_3_p_0((MR_String) "csd");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Index_5, &Var_35);
    mercury__io__write_string_3_p_0(Var_35);
    mercury__io__write_string_3_p_0((MR_String) ":\n");
    mercury__io__write_string_3_p_0((MR_String) "\tcsd_caller = pd");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), CallerPDI_11, &Var_46);
    mercury__io__write_string_3_p_0(Var_46);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "\tcsd_callee = pd");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), CalleePDI_12, &Var_57);
    mercury__io__write_string_3_p_0(Var_57);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    dump__dump_own_prof_info_3_p_0(Own_10);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
dump__get_static_ptrs_from_dynamic_proc_7_p_0(
  MR_ArrayPtr ProcStatics_8,
  MR_Integer HeadVar__2_9,
  MR_Word ProcDynamic_10,
  MR_Word STATE_VARIABLE_PS_Ptrs_0_16,
  MR_Word * STATE_VARIABLE_PS_Ptrs_17,
  MR_Word STATE_VARIABLE_CSS_Ptrs_0_18,
  MR_Word * STATE_VARIABLE_CSS_Ptrs_19)
{
  dump__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(ProcStatics_8, ProcDynamic_10, STATE_VARIABLE_PS_Ptrs_0_16, STATE_VARIABLE_PS_Ptrs_17, STATE_VARIABLE_CSS_Ptrs_0_18, STATE_VARIABLE_CSS_Ptrs_19);
}

static void MR_CALL 
dump__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_116_97_116_105_99_95_112_116_114_115_95_102_114_111_109_95_100_121_110_97_109_105_99_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
  MR_ArrayPtr ProcStatics_8,
  MR_Word ProcDynamic_10,
  MR_Word STATE_VARIABLE_PS_Ptrs_0_16,
  MR_Word * STATE_VARIABLE_PS_Ptrs_17,
  MR_Word STATE_VARIABLE_CSS_Ptrs_0_18,
  MR_Word * STATE_VARIABLE_CSS_Ptrs_19)
{
  {
    MR_Word ProcStaticPtr_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDynamic_10, (MR_Integer) 0))));
    MR_Word ProcStatic_14;
    MR_Word CSSs_15;
    MR_ArrayPtr Var_21;

    mercury__set__insert_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), ((MR_Box) (ProcStaticPtr_13)), STATE_VARIABLE_PS_Ptrs_0_16, STATE_VARIABLE_PS_Ptrs_17);
    profile__lookup_proc_statics_3_p_0(ProcStatics_8, ProcStaticPtr_13, &ProcStatic_14);
    Var_21 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), ProcStatic_14, (MR_Integer) 8))));
    CSSs_15 = mercury__array__to_list_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_ArrayPtr) (Var_21));
    mercury__set__insert_list_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), CSSs_15, STATE_VARIABLE_CSS_Ptrs_0_18, STATE_VARIABLE_CSS_Ptrs_19);
  }
}

static MR_bool MR_CALL 
dump__string_to_dumpable_array_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer lo_0 = (MR_Integer) 0;
    MR_Integer hi_1 = (MR_Integer) 3;
    MR_Integer mid_2;
    MR_Integer result_3;

    // binary string simple lookup switch
    ;
    do
    {
      mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
      result_3 = MR_strcmp(HeadVar__1_1, ((&dump_vector_common_8[4 + mid_2]))->dump__vector_common_type_8_0__vct_8_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        *HeadVar__2_2 = ((&dump_vector_common_8[4 + mid_2]))->dump__vector_common_type_8_0__vct_8_f_1;
        succeeded = MR_TRUE;
        // jump out of search loop
        ;
        goto label_0;
      }
      else
      if ((result_3 < (MR_Integer) 0))
        hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
      else
        lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
    }
    while ((lo_0 <= hi_1));
    succeeded = MR_FALSE;
  label_0:;
    return succeeded;
  }
}

static void MR_CALL 
dump__det_string_to_dumpable_array_2_p_0(
  MR_String String_3,
  MR_Word * Array_4)
{
  {
    MR_bool succeeded;
    MR_Word ArrayP_5;
    MR_Integer lo_0 = (MR_Integer) 0;
    MR_Integer hi_1 = (MR_Integer) 3;
    MR_Integer mid_2;
    MR_Integer result_3;

    // binary string simple lookup switch
    ;
    do
    {
      mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
      result_3 = MR_strcmp(String_3, ((&dump_vector_common_8[0 + mid_2]))->dump__vector_common_type_8_0__vct_8_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        ArrayP_5 = ((&dump_vector_common_8[0 + mid_2]))->dump__vector_common_type_8_0__vct_8_f_1;
        succeeded = MR_TRUE;
        // jump out of search loop
        ;
        goto label_0;
      }
      else
      if ((result_3 < (MR_Integer) 0))
        hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
      else
        lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
    }
    while ((lo_0 <= hi_1));
    succeeded = MR_FALSE;
  label_0:;
    if (succeeded)
      *Array_4 = ArrayP_5;
    else
    {
      MR_String Var_7;

      Var_7 = mercury__string__f_43_43_2_f_0((MR_String) "Invalid array name in dump options: ", String_3);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140dump.det_string_to_dumpable_array\'/2", Var_7);
        return;
      }
    }
  }
}

void MR_CALL 
dump__dump_deep_4_p_0(
  MR_Word Deep_5,
  MR_Word DumpOptions_6)
{
  {
    MR_Word DumpCliques_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DumpOptions_6, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    MR_Word DumpRevLinks_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DumpOptions_6, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    MR_Word DumpPropMeasurements_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DumpOptions_6, (MR_Integer) 2))) & (MR_Integer) 1);

    switch (DumpCliques_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 0:
        dump__dump_deep_cliques_3_p_0(Deep_5);
        break;
    }
    switch (DumpRevLinks_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 0:
        dump__dump_deep_rev_links_3_p_0(Deep_5);
        break;
    }
    switch (DumpPropMeasurements_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 0:
        dump__dump_deep_prop_measurements_3_p_0(Deep_5);
        break;
    }
  }
}

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = dump__IntroducedFrom__pred__dump_deep_prop_measurements__872__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = dump__IntroducedFrom__pred__dump_deep_prop_measurements__863__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = dump__IntroducedFrom__pred__dump_deep_prop_measurements__854__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_3_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = dump__IntroducedFrom__pred__dump_deep_prop_measurements__845__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
dump__dump_deep_prop_measurements_3_p_0(
  MR_Word Deep_4)
{
  {
    MR_bool succeeded;
    MR_ArrayPtr PDOwn_6 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 16))));
    MR_ArrayPtr PDDesc_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 17))));
    MR_Integer PDOwnMax_8;
    MR_Integer PDDescMax_9;
    MR_ArrayPtr CSDs_10;
    MR_ArrayPtr CSDDesc_11;
    MR_Integer CSDMax_12;
    MR_Integer CSDDescMax_13;
    MR_ArrayPtr PSOwn_14;
    MR_ArrayPtr PSDesc_15;
    MR_Integer PSOwnMax_16;
    MR_Integer PSDescMax_17;
    MR_ArrayPtr CSSOwn_18;
    MR_ArrayPtr CSSDesc_19;
    MR_Integer CSSOwnMax_20;
    MR_Integer CSSDescMax_21;
    MR_Word Var_24;
    MR_Word Var_30;
    MR_Word Var_36;
    MR_Word Var_42;

    PDOwnMax_8 = mercury__array__max_1_f_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (PDOwn_6));
    PDDescMax_9 = mercury__array__max_1_f_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (PDDesc_7));
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&dump_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (dump__dump_deep_prop_measurements_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (PDOwnMax_8));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (PDDescMax_9));
    }
    mercury__require__require_2_p_0(Var_24, (MR_String) "dump_deep: PDOwnMax != PDDescMax");
    mercury__io__write_string_3_p_0((MR_String) "SECTION PROC DYNAMIC MEASUREMENTS:\n\n");
    dump__dump_pd_measurements_6_p_0((MR_Integer) 1, PDOwnMax_8, PDOwn_6, PDDesc_7);
    CSDs_10 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 5))));
    CSDDesc_11 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 18))));
    CSDMax_12 = mercury__array__max_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_ArrayPtr) (CSDs_10));
    CSDDescMax_13 = mercury__array__max_1_f_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (CSDDesc_11));
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&dump_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (dump__dump_deep_prop_measurements_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (CSDMax_12));
      MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) (CSDDescMax_13));
    }
    mercury__require__require_2_p_0(Var_30, (MR_String) "dump_deep: CSDMax != CSDDescMax");
    mercury__io__write_string_3_p_0((MR_String) "SECTION CALL SITE DYNAMIC MEASUREMENTS:\n\n");
    dump__dump_csd_measurements_6_p_0((MR_Integer) 1, CSDMax_12, CSDs_10, CSDDesc_11);
    PSOwn_14 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 19))));
    PSDesc_15 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 20))));
    PSOwnMax_16 = mercury__array__max_1_f_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (PSOwn_14));
    PSDescMax_17 = mercury__array__max_1_f_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (PSDesc_15));
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&dump_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (dump__dump_deep_prop_measurements_3_p_0_3));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (PSOwnMax_16));
      MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (PSDescMax_17));
    }
    mercury__require__require_2_p_0(Var_36, (MR_String) "dump_deep: PSOwnMax != PSDescMax");
    mercury__io__write_string_3_p_0((MR_String) "SECTION PROC STATIC MEASUREMENTS:\n\n");
    dump__dump_ps_measurements_6_p_0((MR_Integer) 1, PSOwnMax_16, PSOwn_14, PSDesc_15);
    CSSOwn_18 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 21))));
    CSSDesc_19 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 22))));
    CSSOwnMax_20 = mercury__array__max_1_f_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (CSSOwn_18));
    CSSDescMax_21 = mercury__array__max_1_f_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (CSSDesc_19));
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&dump_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (dump__dump_deep_prop_measurements_3_p_0_4));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (CSSOwnMax_20));
      MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (CSSDescMax_21));
    }
    mercury__require__require_2_p_0(Var_42, (MR_String) "dump_deep: CSSOwnMax != CSSDescMax");
    mercury__io__write_string_3_p_0((MR_String) "SECTION CALL SITE STATIC MEASUREMENTS:\n\n");
    dump__dump_css_measurements_6_p_0((MR_Integer) 1, CSSOwnMax_20, CSSOwn_18, CSSDesc_19);
  }
}

static void MR_CALL 
dump__dump_css_measurements_6_p_0(
  MR_Integer Cur_7,
  MR_Integer Max_8,
  MR_ArrayPtr CSSOwn_9,
  MR_ArrayPtr CSSDesc_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Cur_7 <= Max_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Own_12;
      MR_Word Desc_13;
      MR_Integer Var_18;
      MR_Box conv0_Own_12;
      MR_Box conv1_Desc_13;
      MR_Integer next_value_of_Cur_7;

      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (CSSOwn_9), Cur_7, &conv0_Own_12);
      Own_12 = ((MR_Word) (conv0_Own_12));
      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (CSSDesc_10), Cur_7, &conv1_Desc_13);
      Desc_13 = ((MR_Word) (conv1_Desc_13));
      dump__dump_own_and_desc_6_p_0((MR_String) "css", Cur_7, Own_12, Desc_13);
      Var_18 = (MR_Integer) ((MR_Unsigned) Cur_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Cur_7 = Var_18;
      Cur_7 = next_value_of_Cur_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
dump__dump_ps_measurements_6_p_0(
  MR_Integer Cur_7,
  MR_Integer Max_8,
  MR_ArrayPtr PSOwn_9,
  MR_ArrayPtr PSDesc_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Cur_7 <= Max_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Own_12;
      MR_Word Desc_13;
      MR_Integer Var_18;
      MR_Box conv0_Own_12;
      MR_Box conv1_Desc_13;
      MR_Integer next_value_of_Cur_7;

      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (PSOwn_9), Cur_7, &conv0_Own_12);
      Own_12 = ((MR_Word) (conv0_Own_12));
      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (PSDesc_10), Cur_7, &conv1_Desc_13);
      Desc_13 = ((MR_Word) (conv1_Desc_13));
      dump__dump_own_and_desc_6_p_0((MR_String) "ps", Cur_7, Own_12, Desc_13);
      Var_18 = (MR_Integer) ((MR_Unsigned) Cur_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Cur_7 = Var_18;
      Cur_7 = next_value_of_Cur_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
dump__dump_csd_measurements_6_p_0(
  MR_Integer Cur_7,
  MR_Integer Max_8,
  MR_ArrayPtr CSDs_9,
  MR_ArrayPtr CSDDesc_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Cur_7 <= Max_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word CSD_12;
      MR_Word Own_13;
      MR_Word Desc_14;
      MR_Integer Var_19;
      MR_Box conv0_CSD_12;
      MR_Box conv1_Desc_14;
      MR_Integer next_value_of_Cur_7;

      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_ArrayPtr) (CSDs_9), Cur_7, &conv0_CSD_12);
      CSD_12 = ((MR_Word) (conv0_CSD_12));
      Own_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSD_12, (MR_Integer) 2))));
      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (CSDDesc_10), Cur_7, &conv1_Desc_14);
      Desc_14 = ((MR_Word) (conv1_Desc_14));
      dump__dump_own_and_desc_6_p_0((MR_String) "csd", Cur_7, Own_13, Desc_14);
      Var_19 = (MR_Integer) ((MR_Unsigned) Cur_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Cur_7 = Var_19;
      Cur_7 = next_value_of_Cur_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
dump__dump_pd_measurements_6_p_0(
  MR_Integer Cur_7,
  MR_Integer Max_8,
  MR_ArrayPtr PDOwn_9,
  MR_ArrayPtr PDDesc_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Cur_7 <= Max_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Own_12;
      MR_Word Desc_13;
      MR_Integer Var_18;
      MR_Box conv0_Own_12;
      MR_Box conv1_Desc_13;
      MR_Integer next_value_of_Cur_7;

      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (PDOwn_9), Cur_7, &conv0_Own_12);
      Own_12 = ((MR_Word) (conv0_Own_12));
      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (PDDesc_10), Cur_7, &conv1_Desc_13);
      Desc_13 = ((MR_Word) (conv1_Desc_13));
      dump__dump_own_and_desc_6_p_0((MR_String) "pd", Cur_7, Own_12, Desc_13);
      Var_18 = (MR_Integer) ((MR_Unsigned) Cur_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Cur_7 = Var_18;
      Cur_7 = next_value_of_Cur_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
dump__dump_own_and_desc_6_p_0(
  MR_String Prefix_7,
  MR_Integer Cur_8,
  MR_Word Own_9,
  MR_Word Desc_10)
{
  {
    MR_bool succeeded;
    MR_Word PrintedOwn_12;
    MR_Word PrintedDesc_13;

    succeeded = measurements__is_zero_own_prof_info_1_p_0(Own_9);
    if (succeeded)
      PrintedOwn_12 = (MR_Integer) 0;
    else
    {
      MR_String Var_35;

      mercury__io__write_string_3_p_0(Prefix_7);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Cur_8, &Var_35);
      mercury__io__write_string_3_p_0(Var_35);
      mercury__io__write_string_3_p_0((MR_String) " own:\n");
      dump__dump_own_prof_info_3_p_0(Own_9);
      PrintedOwn_12 = (MR_Integer) 1;
    }
    succeeded = measurements__is_zero_inherit_prof_info_1_p_0(Desc_10);
    if (succeeded)
      PrintedDesc_13 = (MR_Integer) 0;
    else
    {
      MR_String Var_45;

      mercury__io__write_string_3_p_0(Prefix_7);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Cur_8, &Var_45);
      mercury__io__write_string_3_p_0(Var_45);
      mercury__io__write_string_3_p_0((MR_String) " inherit:\n");
      dump__dump_inherit_prof_info_3_p_0(Desc_10);
      PrintedDesc_13 = (MR_Integer) 1;
    }
    succeeded = (PrintedOwn_12 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (PrintedDesc_13 == (MR_Integer) 1);
    if (succeeded)
      mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
dump__dump_inherit_prof_info_3_p_0(
  MR_Word Inherit_4)
{
  {
    MR_bool succeeded;
    MR_Integer Quanta_6;
    MR_Integer CallSeqs_7;
    MR_Integer Allocs_8;
    MR_Integer Words_9;

    Quanta_6 = measurements__inherit_quanta_1_f_0(Inherit_4);
    CallSeqs_7 = measurements__inherit_callseqs_1_f_0(Inherit_4);
    Allocs_8 = measurements__inherit_allocs_1_f_0(Inherit_4);
    Words_9 = measurements__inherit_words_1_f_0(Inherit_4);
    succeeded = (Quanta_6 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_String Var_35;

      mercury__io__write_string_3_p_0((MR_String) "\tquanta:\t\t");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Quanta_6, &Var_35);
      mercury__io__write_string_3_p_0(Var_35);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    succeeded = (CallSeqs_7 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_String Var_46;

      mercury__io__write_string_3_p_0((MR_String) "\tcallseqs:\t");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), CallSeqs_7, &Var_46);
      mercury__io__write_string_3_p_0(Var_46);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    succeeded = (Allocs_8 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_String Var_57;

      mercury__io__write_string_3_p_0((MR_String) "\tallocs:\t\t");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Allocs_8, &Var_57);
      mercury__io__write_string_3_p_0(Var_57);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    succeeded = (Words_9 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_String Var_68;

      mercury__io__write_string_3_p_0((MR_String) "\twords:\t\t");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Words_9, &Var_68);
      mercury__io__write_string_3_p_0(Var_68);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
dump__dump_own_prof_info_3_p_0(
  MR_Word Own_4)
{
  {
    MR_bool succeeded;
    MR_Integer Calls_6;
    MR_Integer Exits_7;
    MR_Integer Fails_8;
    MR_Integer Redos_9;
    MR_Integer Excps_10;
    MR_Integer Quanta_11;
    MR_Integer CallSeqs_12;
    MR_Integer Allocs_13;
    MR_Integer Words_14;

    measurements__decompress_profile_10_p_0(Own_4, &Calls_6, &Exits_7, &Fails_8, &Redos_9, &Excps_10, &Quanta_11, &CallSeqs_12, &Allocs_13, &Words_14);
    succeeded = (Calls_6 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_String Var_65;

      mercury__io__write_string_3_p_0((MR_String) "\tcalls:\t\t");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Calls_6, &Var_65);
      mercury__io__write_string_3_p_0(Var_65);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    succeeded = (Exits_7 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_String Var_76;

      mercury__io__write_string_3_p_0((MR_String) "\texits:\t\t");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Exits_7, &Var_76);
      mercury__io__write_string_3_p_0(Var_76);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    succeeded = (Fails_8 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_String Var_87;

      mercury__io__write_string_3_p_0((MR_String) "\tfails:\t\t");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Fails_8, &Var_87);
      mercury__io__write_string_3_p_0(Var_87);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    succeeded = (Redos_9 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_String Var_98;

      mercury__io__write_string_3_p_0((MR_String) "\tredos:\t\t");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Redos_9, &Var_98);
      mercury__io__write_string_3_p_0(Var_98);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    succeeded = (Excps_10 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_String Var_109;

      mercury__io__write_string_3_p_0((MR_String) "\texcps:\t\t");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Excps_10, &Var_109);
      mercury__io__write_string_3_p_0(Var_109);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    succeeded = (Quanta_11 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_String Var_120;

      mercury__io__write_string_3_p_0((MR_String) "\tquanta:\t\t");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Quanta_11, &Var_120);
      mercury__io__write_string_3_p_0(Var_120);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    succeeded = (CallSeqs_12 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_String Var_131;

      mercury__io__write_string_3_p_0((MR_String) "\tcallseqs:\t");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), CallSeqs_12, &Var_131);
      mercury__io__write_string_3_p_0(Var_131);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    succeeded = (Allocs_13 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_String Var_142;

      mercury__io__write_string_3_p_0((MR_String) "\tallocs:\t\t");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Allocs_13, &Var_142);
      mercury__io__write_string_3_p_0(Var_142);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    succeeded = (Words_14 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_String Var_153;

      mercury__io__write_string_3_p_0((MR_String) "\twords:\t\t");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Words_14, &Var_153);
      mercury__io__write_string_3_p_0(Var_153);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    dump__dump_call_site_calls_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    dump__dump_call_site_dynamic_to_static_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
dump__dump_deep_rev_links_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    dump__dump_proc_static_caller_csds_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
dump__dump_deep_rev_links_3_p_0(
  MR_Word Deep_4)
{
  {
    MR_ArrayPtr ProcCallers_6 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 13))));
    MR_ArrayPtr CallSiteStaticMap_7;
    MR_ArrayPtr CallSiteCalls_8;
    MR_Box conv0_STATE_VARIABLE_IO_14_14;
    MR_Box conv1_STATE_VARIABLE_IO_19_19;
    MR_Box conv2_STATE_VARIABLE_IO_24_24;

    mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM PROC STATIC TO CALLER CSDs:\n\n");
    array_util__array_foldl_from_1_4_p_0((MR_Word) (&dump_scalar_common_1[4]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&dump_scalar_common_2[9]), (MR_ArrayPtr) (ProcCallers_6), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14_14);
    mercury__io__nl_2_p_0();
    CallSiteStaticMap_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 14))));
    mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM CALL SITE DYNAMICS TO STATICS:\n\n");
    array_util__array_foldl_from_1_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&dump_scalar_common_2[10]), (MR_ArrayPtr) (CallSiteStaticMap_7), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19_19);
    mercury__io__nl_2_p_0();
    CallSiteCalls_8 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 15))));
    mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM CALL SITE STATICS TO CALLS:\n\n");
    array_util__array_foldl_from_1_4_p_0((MR_Word) (&dump_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&dump_scalar_common_2[11]), (MR_ArrayPtr) (CallSiteCalls_8), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_24_24);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
dump__dump_deep_cliques_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    dump__dump_clique_maybe_child_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
dump__dump_deep_cliques_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    dump__dump_clique_parent_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
dump__dump_deep_cliques_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    dump__dump_clique_members_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
dump__dump_deep_cliques_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    dump__dump_clique_index_entry_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
dump__dump_deep_cliques_3_p_0(
  MR_Word Deep_4)
{
  {
    MR_ArrayPtr CliqueIndex_6 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 9))));
    MR_ArrayPtr CliqueMembers_7;
    MR_ArrayPtr CliqueParents_8;
    MR_ArrayPtr CliqueMaybeChild_9;
    MR_Box conv0_STATE_VARIABLE_IO_15_15;
    MR_Box conv1_STATE_VARIABLE_IO_20_20;
    MR_Box conv2_STATE_VARIABLE_IO_25_25;
    MR_Box conv3_STATE_VARIABLE_IO_30_30;

    mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM PROC DYNAMIC TO CLIQUE:\n\n");
    array_util__array_foldl_from_1_4_p_0((MR_Word) (&profile__profile__type_ctor_info_clique_ptr_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&dump_scalar_common_2[5]), (MR_ArrayPtr) (CliqueIndex_6), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_15_15);
    mercury__io__nl_2_p_0();
    CliqueMembers_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 10))));
    mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM CLIQUE TO PROC DYNAMICS:\n\n");
    array_util__array_foldl_from_1_4_p_0((MR_Word) (&dump_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&dump_scalar_common_2[6]), (MR_ArrayPtr) (CliqueMembers_7), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
    mercury__io__nl_2_p_0();
    CliqueParents_8 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 11))));
    mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM CLIQUE TO PARENT CSD:\n\n");
    array_util__array_foldl_from_1_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&dump_scalar_common_2[7]), (MR_ArrayPtr) (CliqueParents_8), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_25_25);
    mercury__io__nl_2_p_0();
    CliqueMaybeChild_9 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 12))));
    mercury__io__write_string_3_p_0((MR_String) "SECTION MAP FROM CSD TO MAYBE CHILD CLIQUE:\n\n");
    array_util__array_foldl_from_1_4_p_0((MR_Word) (&dump_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&dump_scalar_common_2[8]), (MR_ArrayPtr) (CliqueMaybeChild_9), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_30_30);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
dump__dump_initial_deep_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_PS_Ptrs_17;
    MR_Word conv0_STATE_VARIABLE_CSS_Ptrs_19;

    dump__get_static_ptrs_from_dynamic_proc_7_p_0(((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_PS_Ptrs_17, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_CSS_Ptrs_19);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_PS_Ptrs_17));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_CSS_Ptrs_19));
  }
}

void MR_CALL 
dump__dump_initial_deep_4_p_0(
  MR_Word InitialDeep_5,
  MR_Word DumpOptions_6)
{
  {
    MR_bool succeeded;
    MR_Word Stats_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InitialDeep_5, (MR_Integer) 0))));
    MR_Word InitRoot_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InitialDeep_5, (MR_Integer) 1))));
    MR_ArrayPtr CSDs_10 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), InitialDeep_5, (MR_Integer) 2))));
    MR_ArrayPtr PDs_11 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), InitialDeep_5, (MR_Integer) 3))));
    MR_ArrayPtr CSSs_12 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), InitialDeep_5, (MR_Integer) 4))));
    MR_ArrayPtr PSs_13 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), InitialDeep_5, (MR_Integer) 5))));
    MR_Word Restrict_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DumpOptions_6, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Restriction_17;
    MR_Word ShowStats_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DumpOptions_6, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
    MR_Word Arrays_84;

    switch (Restrict_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Restriction_17 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 0:
        {
          MR_Word UsedPSs_15;
          MR_Word UsedCSSs_16;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Box conv3_UsedPSs_15;
          MR_Box conv2_UsedCSSs_16;

          {
            Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&dump_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (dump__dump_initial_deep_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (PSs_13));
          }
          Var_46 = mercury__set__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0));
          Var_47 = mercury__set__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0));
          array_util__array_foldl2_from_1_6_p_1((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_Word) (&dump_scalar_common_1[0]), (MR_Word) (&dump_scalar_common_1[1]), Var_45, (MR_ArrayPtr) (PDs_11), ((MR_Box) (Var_46)), &conv3_UsedPSs_15, ((MR_Box) (Var_47)), &conv2_UsedCSSs_16);
          UsedPSs_15 = ((MR_Word) (conv3_UsedPSs_15));
          UsedCSSs_16 = ((MR_Word) (conv2_UsedCSSs_16));
          {
            Restriction_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Restriction_17, 0) = ((MR_Box) (UsedPSs_15));
            MR_hl_field(MR_mktag(1), Restriction_17, 1) = ((MR_Box) (UsedCSSs_16));
          }
        }
        break;
    }
    switch (ShowStats_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Integer Root_61;
          MR_String Var_74;

          dump__dump_init_profile_stats_3_p_0(Stats_8);
          Root_61 = (MR_Integer) (InitRoot_9);
          mercury__io__write_string_3_p_0((MR_String) "INITIAL ROOT:\n");
          mercury__io__write_string_3_p_0((MR_String) "\tinitial root = ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), Root_61, &Var_74);
          mercury__io__write_string_3_p_0(Var_74);
          mercury__io__write_string_3_p_0((MR_String) "\n");
          mercury__io__nl_2_p_0();
        }
        break;
    }
    Arrays_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DumpOptions_6, (MR_Integer) 1))));
    succeeded = mercury__set__member_2_p_0((MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0), ((MR_Box) ((MR_Integer) 0)), Arrays_84);
    if (succeeded)
      dump__dump_init_call_site_dynamics_3_p_0(CSDs_10);
    succeeded = dump__should_dump_2_p_0(DumpOptions_6, (MR_Integer) 2);
    if (succeeded)
      dump__dump_init_proc_dynamics_4_p_0(PDs_11, PSs_13);
    succeeded = dump__should_dump_2_p_0(DumpOptions_6, (MR_Integer) 1);
    if (succeeded)
      dump__dump_init_call_site_statics_4_p_0(Restriction_17, CSSs_12);
    succeeded = dump__should_dump_2_p_0(DumpOptions_6, (MR_Integer) 3);
    if (succeeded)
      dump__dump_init_proc_statics_4_p_0(Restriction_17, PSs_13);
  }
}

static MR_bool MR_CALL 
dump__should_dump_2_p_0(
  MR_Word DumpOptions_3,
  MR_Word What_4)
{
  {
    MR_bool succeeded;
    MR_Word Arrays_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DumpOptions_3, (MR_Integer) 1))));

    succeeded = mercury__set__member_2_p_0((MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0), ((MR_Box) (What_4)), Arrays_5);
    return succeeded;
  }
}

static void MR_CALL 
dump__dump_init_proc_statics_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    dump__dump_proc_static_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
dump__dump_init_proc_statics_4_p_0(
  MR_Word Restriction_5,
  MR_ArrayPtr ProcStatics_6)
{
  {
    MR_Word Var_12;
    MR_Box conv0_STATE_VARIABLE_IO_13_13;

    mercury__io__write_string_3_p_0((MR_String) "SECTION PROC STATICS:\n\n");
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&dump_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (dump__dump_init_proc_statics_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Restriction_5));
    }
    array_util__array_foldl_from_1_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, (MR_ArrayPtr) (ProcStatics_6), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13_13);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
dump__dump_init_call_site_statics_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    dump__dump_call_site_static_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
dump__dump_init_call_site_statics_4_p_0(
  MR_Word Restriction_5,
  MR_ArrayPtr CallStatics_6)
{
  {
    MR_Word Var_12;
    MR_Box conv0_STATE_VARIABLE_IO_9;

    mercury__io__write_string_3_p_0((MR_String) "SECTION CALL SITE STATICS:\n\n");
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&dump_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (dump__dump_init_call_site_statics_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Restriction_5));
    }
    array_util__array_foldl_from_1_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, (MR_ArrayPtr) (CallStatics_6), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
  }
}

static void MR_CALL 
dump__dump_init_proc_dynamics_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    dump__dump_proc_dynamic_5_p_0(((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
dump__dump_init_proc_dynamics_4_p_0(
  MR_ArrayPtr ProcDynamics_5,
  MR_ArrayPtr ProcStatics_6)
{
  {
    MR_Word Var_12;
    MR_Box conv0_STATE_VARIABLE_IO_9;

    mercury__io__write_string_3_p_0((MR_String) "SECTION PROC DYNAMICS:\n\n");
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&dump_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (dump__dump_init_proc_dynamics_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ProcStatics_6));
    }
    array_util__array_foldl_from_1_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, (MR_ArrayPtr) (ProcDynamics_5), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
  }
}

static void MR_CALL 
dump__dump_init_call_site_dynamics_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    dump__dump_call_site_dynamic_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
dump__dump_init_call_site_dynamics_3_p_0(
  MR_ArrayPtr CallSiteDynamics_4)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_7;

    mercury__io__write_string_3_p_0((MR_String) "SECTION CALL SITE DYNAMICS:\n\n");
    array_util__array_foldl_from_1_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&dump_scalar_common_2[4]), (MR_ArrayPtr) (CallSiteDynamics_4), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_7);
  }
}

static void MR_CALL 
dump__dump_init_profile_stats_3_p_0(
  MR_Word Stats_4)
{
  {
    MR_String ProgramName_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), Stats_4, (MR_Integer) 0))));
    MR_Integer MaxCSD_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_4, (MR_Integer) 1))));
    MR_Integer MaxCSS_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_4, (MR_Integer) 2))));
    MR_Integer MaxPD_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_4, (MR_Integer) 3))));
    MR_Integer MaxPS_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_4, (MR_Integer) 4))));
    MR_Integer TicksPerSec_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_4, (MR_Integer) 5))));
    MR_Integer InstrumentQuanta_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_4, (MR_Integer) 6))));
    MR_Integer UserQuanta_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_4, (MR_Integer) 7))));
    MR_Integer NumCallSeqs_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_4, (MR_Integer) 8))));
    MR_Word DeepFlags_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stats_4, (MR_Integer) 9))));
    MR_Integer WordSize_16;
    MR_Word Canonical_17;
    MR_Word CoverageDataType_19;
    MR_String Var_24;
    MR_String Var_27;
    MR_String Var_88;
    MR_String Var_95;
    MR_String Var_106;
    MR_String Var_117;
    MR_String Var_128;
    MR_String Var_139;
    MR_String Var_150;
    MR_String Var_161;
    MR_String Var_172;
    MR_String Var_183;

    mercury__io__write_string_3_p_0((MR_String) "SECTION PROFILING STATS:\n\n");
    Var_27 = mercury__string__f_43_43_2_f_0(ProgramName_6, (MR_String) "\n");
    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "\tprogram_name = ", Var_27);
    mercury__io__write_string_3_p_0(Var_24);
    mercury__io__write_string_3_p_0((MR_String) "\tmax_csd = ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), MaxCSD_7, &Var_95);
    mercury__io__write_string_3_p_0(Var_95);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "\tmax_css = ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), MaxCSS_8, &Var_106);
    mercury__io__write_string_3_p_0(Var_106);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "\tmax_pd  = ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), MaxPD_9, &Var_117);
    mercury__io__write_string_3_p_0(Var_117);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "\tmax_ps  = ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), MaxPS_10, &Var_128);
    mercury__io__write_string_3_p_0(Var_128);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "\tticks_per_sec = ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), TicksPerSec_11, &Var_139);
    mercury__io__write_string_3_p_0(Var_139);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "\tinstrument_quanta = ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), InstrumentQuanta_12, &Var_150);
    mercury__io__write_string_3_p_0(Var_150);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "\tuser_quanta = ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), UserQuanta_13, &Var_161);
    mercury__io__write_string_3_p_0(Var_161);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "\tnum_callseqs = ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), NumCallSeqs_14, &Var_172);
    mercury__io__write_string_3_p_0(Var_172);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    WordSize_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DeepFlags_15, (MR_Integer) 0))));
    Canonical_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DeepFlags_15, (MR_Integer) 1))) & (MR_Integer) 1);
    CoverageDataType_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DeepFlags_15, (MR_Integer) 3))) & (MR_Integer) 3);
    mercury__io__write_string_3_p_0((MR_String) "\tword_size   = ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_4[0]), WordSize_16, &Var_183);
    mercury__io__write_string_3_p_0(Var_183);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "\tcanonical = ");
    switch (Canonical_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__write_string_3_p_0((MR_String) "yes\n");
        break;
      case (MR_Integer) 1:
        mercury__io__write_string_3_p_0((MR_String) "no\n");
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "\tcompression = ");
    mercury__io__write_string_3_p_0((MR_String) "none\n");
    Var_88 = mercury__string__string_1_f_0((MR_Word) (&profile__profile__type_ctor_info_coverage_data_type_0), ((MR_Box) (CoverageDataType_19)));
    mercury__io__write_string_3_p_0((MR_String) "\tcoverage_data_type = ");
    mercury__io__write_string_3_p_0(Var_88);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__nl_2_p_0();
  }
}

void MR_CALL 
dump__dump_array_options_to_dump_options_2_p_0(
  MR_Word Strings_3,
  MR_Word * DumpOptions_4)
{
  {
    MR_Word DumpArrayOptions_5;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Unsigned packed_word_1;

    dump__det_dump_array_options_2_p_0(Strings_3, &DumpArrayOptions_5);
    Var_6 = dump__default_dump_options_0_f_0();
    Var_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 0))) & (MR_Integer) 1);
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 2)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *DumpOptions_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (Var_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (DumpArrayOptions_5));
      MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) (packed_word_1);
    }
  }
}

static void MR_CALL 
dump__det_dump_array_options_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Array_4;

    dump__det_string_to_dumpable_array_2_p_0(((MR_String) (wrapper_arg_1)), &conv0_Array_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Array_4));
  }
}

void MR_CALL 
dump__det_dump_array_options_2_p_0(
  MR_Word Strings_3,
  MR_Word * DumpArrayOptions_4)
{
  {
    MR_bool succeeded;
    MR_Word DumpArrayOptionsSpecial_5;

    if ((Strings_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      DumpArrayOptionsSpecial_5 = mercury__set__list_to_set_1_f_0((MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0), (MR_Word) (MR_mkword(MR_mktag(1), &dump_scalar_common_1[9])));
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeCtorInfo_12_33;
      MR_String Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), Strings_3, (MR_Integer) 0))));
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Strings_3, (MR_Integer) 1))));
      MR_Word Var_24;

      succeeded = (strcmp(Var_10, (MR_String) "all") == 0);
      if (succeeded)
      {
        succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TypeCtorInfo_12_33 = (MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0);
          Var_24 = (MR_Word) (MR_mkword(MR_mktag(1), &dump_scalar_common_1[9]));
          DumpArrayOptionsSpecial_5 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_12_33, Var_24);
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *DumpArrayOptions_4 = DumpArrayOptionsSpecial_5;
    else
    {
      MR_Word List_38;

      mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0), (MR_Word) (&dump_scalar_common_2[3]), Strings_3, &List_38);
      mercury__set__list_to_set_2_p_0((MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0), List_38, DumpArrayOptions_4);
    }
  }
}

static MR_bool MR_CALL 
dump__dump_array_options_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    succeeded = dump__string_to_dumpable_array_2_p_0(((MR_String) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
dump__dump_array_options_2_p_0(
  MR_Word Strings_3,
  MR_Word * DumpArrayOptions_4)
{
  {
    MR_bool succeeded;
    MR_Word DumpArrayOptionsSpecial_5;

    if ((Strings_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      DumpArrayOptionsSpecial_5 = mercury__set__list_to_set_1_f_0((MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0), (MR_Word) (MR_mkword(MR_mktag(1), &dump_scalar_common_1[9])));
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeCtorInfo_12_33;
      MR_String Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), Strings_3, (MR_Integer) 0))));
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Strings_3, (MR_Integer) 1))));
      MR_Word Var_24;

      succeeded = (strcmp(Var_10, (MR_String) "all") == 0);
      if (succeeded)
      {
        succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TypeCtorInfo_12_33 = (MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0);
          Var_24 = (MR_Word) (MR_mkword(MR_mktag(1), &dump_scalar_common_1[9]));
          DumpArrayOptionsSpecial_5 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_12_33, Var_24);
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      *DumpArrayOptions_4 = DumpArrayOptionsSpecial_5;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word List_38;

      succeeded = mercury__list__map_3_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0), (MR_Word) (&dump_scalar_common_2[2]), Strings_3, &List_38);
      if (succeeded)
      {
        mercury__set__list_to_set_2_p_0((MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0), List_38, DumpArrayOptions_4);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
dump__default_dump_options_0_f_0(void)
{
  {
    MR_Word DumpOptions_2;
    MR_Word Var_4;

    Var_4 = mercury__set__list_to_set_1_f_0((MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0), (MR_Word) (MR_mkword(MR_mktag(1), &dump_scalar_common_1[9])));
    {
      DumpOptions_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DumpOptions_2, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), DumpOptions_2, 1) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), DumpOptions_2, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
    }
    return DumpOptions_2;
  }
}

static MR_bool MR_CALL 
dump____Unify____dump_cliques_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = dump____Unify____dump_cliques_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
dump____Compare____dump_cliques_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    dump____Compare____dump_cliques_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
dump____Unify____dump_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = dump____Unify____dump_options_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
dump____Compare____dump_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    dump____Compare____dump_options_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
dump____Unify____dump_prop_measurements_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = dump____Unify____dump_prop_measurements_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
dump____Compare____dump_prop_measurements_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    dump____Compare____dump_prop_measurements_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
dump____Unify____dump_rev_links_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = dump____Unify____dump_rev_links_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
dump____Compare____dump_rev_links_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    dump____Compare____dump_rev_links_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
dump____Unify____dumpable_array_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = dump____Unify____dumpable_array_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
dump____Compare____dumpable_array_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    dump____Compare____dumpable_array_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
dump____Unify____restriction_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = dump____Unify____restriction_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
dump____Compare____restriction_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    dump____Compare____restriction_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
dump____Unify____show_restricted_dump_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = dump____Unify____show_restricted_dump_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
dump____Compare____show_restricted_dump_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    dump____Compare____show_restricted_dump_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
dump____Unify____show_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = dump____Unify____show_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
dump____Compare____show_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    dump____Compare____show_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module dump.
