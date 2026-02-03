/*
** Automatically generated from `dump.m'
** by the Mercury compiler,
** version rotd-2026-02-03
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




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

static const MR_EnumFunctorDescPtr dump__dump__enum_ordinal_ordered_dump_cliques_0[2];

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

static const MR_EnumFunctorDescPtr dump__dump__enum_ordinal_ordered_dump_prop_measurements_0[2];

static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dump_prop_measurements_0[2];

static const MR_Integer dump__dump__functor_number_map_dump_prop_measurements_0[2];

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_rev_links_0_0;

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_rev_links_0_1;

static const MR_EnumFunctorDescPtr dump__dump__enum_ordinal_ordered_dump_rev_links_0[2];

static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_dump_rev_links_0[2];

static const MR_Integer dump__dump__functor_number_map_dump_rev_links_0[2];

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_0;

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_1;

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_2;

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dumpable_array_0_3;

static const MR_EnumFunctorDescPtr dump__dump__enum_ordinal_ordered_dumpable_array_0[4];

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

static const MR_EnumFunctorDescPtr dump__dump__enum_ordinal_ordered_show_restricted_dump_0[2];

static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_show_restricted_dump_0[2];

static const MR_Integer dump__dump__functor_number_map_show_restricted_dump_0[2];

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_stats_0_0;

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_stats_0_1;

static const MR_EnumFunctorDescPtr dump__dump__enum_ordinal_ordered_show_stats_0[2];

static const MR_EnumFunctorDescPtr dump__dump__enum_name_ordered_show_stats_0[2];

static const MR_Integer dump__dump__functor_number_map_show_stats_0[2];

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__924__1_2_p_0(
  MR_Integer CSSOwnMax_22,
  MR_Integer CSSDescMax_23);

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__914__1_2_p_0(
  MR_Integer PSOwnMax_18,
  MR_Integer PSDescMax_19);

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__904__1_2_p_0(
  MR_Integer CSDMax_14,
  MR_Integer CSDDescMax_15);

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__894__1_2_p_0(
  MR_Integer PDOwnMax_10,
  MR_Integer PDDescMax_11);

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
dump__dump_call_site_calls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
dump__dump_call_site_calls_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Index_7,
  MR_Word CalleeMap_8);

static void MR_CALL 
dump__dump_call_site_calls_to_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
dump__dump_call_site_calls_to_proc_5_p_0(
  MR_Word OutputStream_6,
  MR_String Prefix_7,
  MR_Word HeadVar__3_3);

static void MR_CALL 
dump__dump_call_site_dynamic_to_static_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Index_7,
  MR_Word CSSPtr_8);

static void MR_CALL 
dump__dump_space_csdptr_4_p_0(
  MR_Word OutputStream_5,
  MR_Word CSDPtr_6);

static void MR_CALL 
dump__dump_proc_static_caller_csds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
dump__dump_proc_static_caller_csds_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Index_7,
  MR_Word CallerCSDs_8);

static void MR_CALL 
dump__dump_clique_maybe_child_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Index_7,
  MR_Word MaybeCliquePtr_8);

static void MR_CALL 
dump__dump_clique_parent_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Index_7,
  MR_Word CSDPtr_8);

static void MR_CALL 
dump__dump_pd_in_clique_4_p_0(
  MR_Word OutputStream_5,
  MR_Word PDPtr_6);

static void MR_CALL 
dump__dump_clique_members_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
dump__dump_clique_members_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Index_7,
  MR_Word CliqueMembers_8);

static void MR_CALL 
dump__dump_clique_index_entry_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Index_7,
  MR_Word CliquePtr_8);

static void MR_CALL 
dump__dump_coverage_point_info_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Num_7,
  MR_Word CoveragePointInfo_8);

static void MR_CALL 
dump__dump_coverage_point_6_p_0(
  MR_Word OutputStream_7,
  MR_Word CoveragePoint_8,
  MR_Integer STATE_VARIABLE_Num_0_16,
  MR_Integer * STATE_VARIABLE_Num_17);

static void MR_CALL 
dump__dump_proc_static_call_sites_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Slot_7,
  MR_Word CSSPtr_8);

static void MR_CALL 
dump__dump_proc_static_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
dump__dump_proc_static_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_proc_static_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_proc_static_6_p_0(
  MR_Word OutputStream_7,
  MR_Word Restriction_8,
  MR_Integer Index_9,
  MR_Word ProcStatic_10);

static MR_String MR_CALL 
dump__dump_proc_id_1_f_0(
  MR_Word Proc_3);

static void MR_CALL 
dump__dump_call_site_static_6_p_0(
  MR_Word OutputStream_7,
  MR_Word Restriction_8,
  MR_Integer Index_9,
  MR_Word CallSiteStatic_10);

static void MR_CALL 
dump__dump_call_site_kind_and_callee_4_p_0(
  MR_Word OutputStream_5,
  MR_Word KindAndCallee_6);

static void MR_CALL 
dump__dump_call_site_array_slot_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Index_7,
  MR_Word CSA_slot_8);

static void MR_CALL 
dump__dump_proc_dynamic_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
dump__dump_proc_dynamic_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_proc_dynamic_6_p_0(
  MR_Word OutputStream_7,
  MR_ArrayPtr ProcStatics_8,
  MR_Integer Index_9,
  MR_Word ProcDynamic_10);

static void MR_CALL 
dump__dump_call_site_dynamic_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Index_7,
  MR_Word CallSiteDynamic_8);

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
dump__dump_deep_prop_measurements_4_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_4_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
dump__dump_deep_prop_measurements_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Deep_6);

static void MR_CALL 
dump__dump_css_measurements_7_p_0(
  MR_Word OutputStream_8,
  MR_Integer Cur_9,
  MR_Integer Max_10,
  MR_ArrayPtr CSSOwn_11,
  MR_ArrayPtr CSSDesc_12);

static void MR_CALL 
dump__dump_ps_measurements_7_p_0(
  MR_Word OutputStream_8,
  MR_Integer Cur_9,
  MR_Integer Max_10,
  MR_ArrayPtr PSOwn_11,
  MR_ArrayPtr PSDesc_12);

static void MR_CALL 
dump__dump_csd_measurements_7_p_0(
  MR_Word OutputStream_8,
  MR_Integer Cur_9,
  MR_Integer Max_10,
  MR_ArrayPtr CSDs_11,
  MR_ArrayPtr CSDDesc_12);

static void MR_CALL 
dump__dump_pd_measurements_7_p_0(
  MR_Word OutputStream_8,
  MR_Integer Cur_9,
  MR_Integer Max_10,
  MR_ArrayPtr PDOwn_11,
  MR_ArrayPtr PDDesc_12);

static void MR_CALL 
dump__dump_own_and_desc_7_p_0(
  MR_Word OutputStream_8,
  MR_String Prefix_9,
  MR_Integer Cur_10,
  MR_Word Own_11,
  MR_Word Desc_12);

static void MR_CALL 
dump__dump_inherit_prof_info_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Inherit_6);

static void MR_CALL 
dump__dump_own_prof_info_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Own_6);

static void MR_CALL 
dump__dump_deep_rev_links_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_rev_links_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_rev_links_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_rev_links_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Deep_6);

static void MR_CALL 
dump__dump_deep_cliques_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_cliques_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_cliques_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_cliques_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_deep_cliques_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Deep_6);

static void MR_CALL 
dump__dump_initial_deep_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_initial_deep_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_initial_deep_5_p_0_1(
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
dump__dump_init_proc_statics_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_init_proc_statics_5_p_0(
  MR_Word OutputStream_6,
  MR_Word Restriction_7,
  MR_ArrayPtr ProcStatics_8);

static void MR_CALL 
dump__dump_init_call_site_statics_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
dump__dump_init_call_site_statics_5_p_0(
  MR_Word OutputStream_6,
  MR_Word Restriction_7,
  MR_ArrayPtr CallStatics_8);

static void MR_CALL 
dump__dump_init_profile_stats_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Stats_6);

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

static /* final */ const MR_Box dump_scalar_common_2[4][3];

static /* final */ const MR_Box dump_scalar_common_3[1][1];

static /* final */ const MR_Box dump_scalar_common_4[2][5];

static /* final */ const MR_Box dump_scalar_common_5[4][9];

static /* final */ const MR_Box dump_scalar_common_6[1][10];

static /* final */ const MR_Box dump_scalar_common_7[11][8];

static /* final */ const MR_Box dump_scalar_common_9[2][7];


struct dump__vector_common_type_8_0_s {
  const MR_String dump__vector_common_type_8_0__vct_8_f_0;
  const MR_Word dump__vector_common_type_8_0__vct_8_f_1;
};

static /* final */ const struct dump__vector_common_type_8_0_s dump_vector_common_8[8];



static /* final */ const MR_Box dump_scalar_common_1[10][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&dump__dump__type_ctor_info_dumpable_array_0))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(1, &dump_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &dump_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &dump_scalar_common_1[8])))
  },
};

static /* final */ const MR_Box dump_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&dump_scalar_common_1[4]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&dump_scalar_common_1[4]))
  },
  /* row   2 */
  {
    ((MR_Box) (&dump_scalar_common_4[0])),
    ((MR_Box) (dump__dump_array_options_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&dump_scalar_common_4[0])),
    ((MR_Box) (dump__det_dump_array_options_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box dump_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box dump_scalar_common_4[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&dump__dump__type_ctor_info_dumpable_array_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box dump_scalar_common_5[4][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&dump__dump__type_ctor_info_restriction_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&dump__dump__type_ctor_info_restriction_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&dump__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box dump_scalar_common_6[1][10] = {
  /* row   0 */
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

static /* final */ const MR_Box dump_scalar_common_7[11][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&dump__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&dump__maybe__pti_maybe_1__plain_profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&dump__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&dump__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&dump__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box dump_scalar_common_9[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct dump__vector_common_type_8_0_s dump_vector_common_8[8] = {
  /* row   0 */
  {
    (MR_String) "csd",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "css",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "pd",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "ps",
    (MR_Integer) 3
  },
  /* row   4 */
  {
    (MR_String) "csd",
    (MR_Integer) 0
  },
  /* row   5 */
  {
    (MR_String) "css",
    (MR_Integer) 1
  },
  /* row   6 */
  {
    (MR_String) "pd",
    (MR_Integer) 2
  },
  /* row   7 */
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
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_PseudoTypeInfo_Struct1 dump__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 dump__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 dump__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_call_site_static_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_static_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 dump__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 dump__maybe__pti_maybe_1__plain_profile__type_ctor_info_clique_ptr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 dump__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0) }
};

static const MR_FA_TypeInfo_Struct1 dump__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0) }
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

static const MR_EnumFunctorDescPtr dump__dump__enum_ordinal_ordered_dump_cliques_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____dump_cliques_0_0_10001)),
  ((MR_Box) (dump____Compare____dump_cliques_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "dump_cliques",
  { dump__dump__enum_name_ordered_dump_cliques_0 },
  { dump__dump__enum_ordinal_ordered_dump_cliques_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  dump__dump__functor_number_map_dump_cliques_0,

};

static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1dump__type_ctor_info_dumpable_array_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&dump__dump__type_ctor_info_dumpable_array_0) }
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

static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_dump_options_0_0[1] = { &dump__dump__du_functor_desc_dump_options_0_0 };

static const MR_DuPtagLayout dump__dump__du_ptag_ordered_dump_options_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    dump__dump__du_stag_ordered_dump_options_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr dump__dump__du_name_ordered_dump_options_0[1] = { &dump__dump__du_functor_desc_dump_options_0_0 };

static const MR_Integer dump__dump__functor_number_map_dump_options_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct dump__dump__type_ctor_info_dump_options_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (dump____Unify____dump_options_0_0_10001)),
  ((MR_Box) (dump____Compare____dump_options_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "dump_options",
  { dump__dump__du_name_ordered_dump_options_0 },
  { dump__dump__du_ptag_ordered_dump_options_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  dump__dump__functor_number_map_dump_options_0,

};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_prop_measurements_0_0 = {
  (MR_String) "dump_prop_measurements",
  INT32_C(0)
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_prop_measurements_0_1 = {
  (MR_String) "do_not_dump_prop_measurements",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr dump__dump__enum_ordinal_ordered_dump_prop_measurements_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____dump_prop_measurements_0_0_10001)),
  ((MR_Box) (dump____Compare____dump_prop_measurements_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "dump_prop_measurements",
  { dump__dump__enum_name_ordered_dump_prop_measurements_0 },
  { dump__dump__enum_ordinal_ordered_dump_prop_measurements_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  dump__dump__functor_number_map_dump_prop_measurements_0,

};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_rev_links_0_0 = {
  (MR_String) "dump_rev_links",
  INT32_C(0)
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_dump_rev_links_0_1 = {
  (MR_String) "do_not_dump_rev_links",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr dump__dump__enum_ordinal_ordered_dump_rev_links_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____dump_rev_links_0_0_10001)),
  ((MR_Box) (dump____Compare____dump_rev_links_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "dump_rev_links",
  { dump__dump__enum_name_ordered_dump_rev_links_0 },
  { dump__dump__enum_ordinal_ordered_dump_rev_links_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  dump__dump__functor_number_map_dump_rev_links_0,

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

static const MR_EnumFunctorDescPtr dump__dump__enum_ordinal_ordered_dumpable_array_0[4] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____dumpable_array_0_0_10001)),
  ((MR_Box) (dump____Compare____dumpable_array_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "dumpable_array",
  { dump__dump__enum_name_ordered_dumpable_array_0 },
  { dump__dump__enum_ordinal_ordered_dumpable_array_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  dump__dump__functor_number_map_dumpable_array_0,

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
  { (MR_TypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0) }
};

static const MR_FA_TypeInfo_Struct1 dump__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_call_site_static_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&profile__profile__type_ctor_info_call_site_static_ptr_0) }
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

static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_restriction_0_0[1] = { &dump__dump__du_functor_desc_restriction_0_0 };

static const MR_DuFunctorDescPtr dump__dump__du_stag_ordered_restriction_0_1[1] = { &dump__dump__du_functor_desc_restriction_0_1 };

static const MR_DuPtagLayout dump__dump__du_ptag_ordered_restriction_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    dump__dump__du_stag_ordered_restriction_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    dump__dump__du_stag_ordered_restriction_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (dump____Unify____restriction_0_0_10001)),
  ((MR_Box) (dump____Compare____restriction_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "restriction",
  { dump__dump__du_name_ordered_restriction_0 },
  { dump__dump__du_ptag_ordered_restriction_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  dump__dump__functor_number_map_restriction_0,

};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_restricted_dump_0_0 = {
  (MR_String) "show_restricted_dump",
  INT32_C(0)
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_restricted_dump_0_1 = {
  (MR_String) "show_complete_dump",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr dump__dump__enum_ordinal_ordered_show_restricted_dump_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____show_restricted_dump_0_0_10001)),
  ((MR_Box) (dump____Compare____show_restricted_dump_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "show_restricted_dump",
  { dump__dump__enum_name_ordered_show_restricted_dump_0 },
  { dump__dump__enum_ordinal_ordered_show_restricted_dump_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  dump__dump__functor_number_map_show_restricted_dump_0,

};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_stats_0_0 = {
  (MR_String) "show_stats",
  INT32_C(0)
};

static const MR_EnumFunctorDesc dump__dump__enum_functor_desc_show_stats_0_1 = {
  (MR_String) "do_not_show_stats",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr dump__dump__enum_ordinal_ordered_show_stats_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (dump____Unify____show_stats_0_0_10001)),
  ((MR_Box) (dump____Compare____show_stats_0_0_10001)),
  (MR_String) "dump",
  (MR_String) "show_stats",
  { dump__dump__enum_name_ordered_show_stats_0 },
  { dump__dump__enum_ordinal_ordered_show_stats_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  dump__dump__functor_number_map_show_stats_0,

};

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__924__1_2_p_0(
  MR_Integer CSSOwnMax_22,
  MR_Integer CSSDescMax_23)
{
  MR_bool succeeded = (CSSOwnMax_22 == CSSDescMax_23);

  return succeeded;
}

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__914__1_2_p_0(
  MR_Integer PSOwnMax_18,
  MR_Integer PSDescMax_19)
{
  MR_bool succeeded = (PSOwnMax_18 == PSDescMax_19);

  return succeeded;
}

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__904__1_2_p_0(
  MR_Integer CSDMax_14,
  MR_Integer CSDDescMax_15)
{
  MR_bool succeeded = (CSDMax_14 == CSDDescMax_15);

  return succeeded;
}

static MR_bool MR_CALL 
dump__IntroducedFrom__pred__dump_deep_prop_measurements__894__1_2_p_0(
  MR_Integer PDOwnMax_10,
  MR_Integer PDDescMax_11)
{
  MR_bool succeeded = (PDOwnMax_10 == PDDescMax_11);

  return succeeded;
}

void MR_CALL 
dump____Compare____show_stats_0_0(
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
dump____Unify____show_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
dump____Compare____show_restricted_dump_0_0(
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
dump____Unify____show_restricted_dump_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
dump____Compare____restriction_0_0(
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
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&dump_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&dump_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
dump____Unify____restriction_0_0(
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
    MR_Word TypeInfo_11_11;
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      TypeInfo_11_11 = (MR_Word) (&dump_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&dump_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
dump____Compare____dumpable_array_0_0(
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
dump____Unify____dumpable_array_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
dump____Compare____dump_rev_links_0_0(
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
dump____Unify____dump_rev_links_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
dump____Compare____dump_prop_measurements_0_0(
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
dump____Unify____dump_prop_measurements_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
dump____Compare____dump_options_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) & (MR_Integer) 1);
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

MR_bool MR_CALL 
dump____Unify____dump_options_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 1);

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

void MR_CALL 
dump____Compare____dump_cliques_0_0(
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
dump____Unify____dump_cliques_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
dump__dump_call_site_calls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  dump__dump_call_site_calls_to_proc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
dump__dump_call_site_calls_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Index_7,
  MR_Word CalleeMap_8)
{
  MR_Word CalleeList_10;

  CalleeList_10 = mercury__map__to_assoc_list_1_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&dump_scalar_common_1[4]), CalleeMap_8);
  if (!((CalleeList_10 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(1, CalleeList_10, 1))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(1, CalleeList_10, 0))));

    if ((Var_41 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_57;

      mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "css");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Index_7, &Var_57);
      mercury__io__write_string_4_p_0(OutputStream_6, Var_57);
      mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " calls one procedure: ");
      dump__dump_call_site_calls_to_proc_5_p_0(OutputStream_6, (MR_String) "", Var_42);
    }
    else
    {
      MR_Word Var_31;
      MR_String Var_46;
      MR_Box conv0_STATE_VARIABLE_IO_16;

      mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "css");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Index_7, &Var_46);
      mercury__io__write_string_4_p_0(OutputStream_6, Var_46);
      mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " calls several procedures:\n");
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_31, 0) = ((MR_Box) (&dump_scalar_common_7[10]));
        MR_hl_field(0, Var_31, 1) = ((MR_Box) (dump__dump_call_site_calls_5_p_0_1));
        MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_31, 3) = ((MR_Box) (OutputStream_6));
        MR_hl_field(0, Var_31, 4) = ((MR_Box) ((MR_String) "\t"));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&dump_scalar_common_2[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_31, CalleeList_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16);
    }
  }
}

static void MR_CALL 
dump__dump_call_site_calls_to_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  dump__dump_space_csdptr_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
dump__dump_call_site_calls_to_proc_5_p_0(
  MR_Word OutputStream_6,
  MR_String Prefix_7,
  MR_Word HeadVar__3_3)
{
  MR_Word PSPtr_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_Word CSDPtrs_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
  MR_Integer PSNum_11 = (MR_Integer) (PSPtr_8);
  MR_Word Var_21;
  MR_String Var_32;
  MR_Box conv0_STATE_VARIABLE_IO_2_22;

  mercury__io__write_string_4_p_0(OutputStream_6, Prefix_7);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "ps");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), PSNum_11, &Var_32);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_32);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) ":");
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&dump_scalar_common_9[1]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (dump__dump_call_site_calls_to_proc_5_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (OutputStream_6));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, CSDPtrs_9, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_2_22);
  mercury__io__nl_3_p_0(OutputStream_6);
}

static void MR_CALL 
dump__dump_call_site_dynamic_to_static_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Index_7,
  MR_Word CSSPtr_8)
{
  MR_Integer CSSNum_10 = (MR_Integer) (CSSPtr_8);
  MR_String Var_23;
  MR_String Var_33;

  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "csd");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Index_7, &Var_23);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_23);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " is at css");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), CSSNum_10, &Var_33);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_33);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
}

static void MR_CALL 
dump__dump_space_csdptr_4_p_0(
  MR_Word OutputStream_5,
  MR_Word CSDPtr_6)
{
  MR_Integer CSDNum_8 = (MR_Integer) (CSDPtr_6);
  MR_String Var_18;

  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) " csd");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), CSDNum_8, &Var_18);
  mercury__io__write_string_4_p_0(OutputStream_5, Var_18);
}

static void MR_CALL 
dump__dump_proc_static_caller_csds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  dump__dump_space_csdptr_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
dump__dump_proc_static_caller_csds_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Index_7,
  MR_Word CallerCSDs_8)
{
  if (!((CallerCSDs_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_19;
    MR_String Var_29;
    MR_Box conv0_STATE_VARIABLE_IO_2_20;

    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "ps");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Index_7, &Var_29);
    mercury__io__write_string_4_p_0(OutputStream_6, Var_29);
    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " callers:");
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&dump_scalar_common_9[1]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (dump__dump_proc_static_caller_csds_5_p_0_1));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (OutputStream_6));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, CallerCSDs_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_2_20);
    mercury__io__nl_3_p_0(OutputStream_6);
  }
}

static void MR_CALL 
dump__dump_clique_maybe_child_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Index_7,
  MR_Word MaybeCliquePtr_8)
{
  if (!((MaybeCliquePtr_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word CliquePtr_10 = ((MR_Word) ((MR_hl_field(1, MaybeCliquePtr_8, 0))));
    MR_Integer CliqueNum_11 = (MR_Integer) (CliquePtr_10);
    MR_String Var_24;
    MR_String Var_34;

    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "csd");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Index_7, &Var_24);
    mercury__io__write_string_4_p_0(OutputStream_6, Var_24);
    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " child: clique");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), CliqueNum_11, &Var_34);
    mercury__io__write_string_4_p_0(OutputStream_6, Var_34);
    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
  }
}

static void MR_CALL 
dump__dump_clique_parent_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Index_7,
  MR_Word CSDPtr_8)
{
  MR_Integer CSDNum_10 = (MR_Integer) (CSDPtr_8);
  MR_String Var_23;
  MR_String Var_33;

  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "clique");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Index_7, &Var_23);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_23);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " parent: csd");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), CSDNum_10, &Var_33);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_33);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
}

static void MR_CALL 
dump__dump_pd_in_clique_4_p_0(
  MR_Word OutputStream_5,
  MR_Word PDPtr_6)
{
  MR_Integer PDNum_8 = (MR_Integer) (PDPtr_6);
  MR_String Var_18;

  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) " pd");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), PDNum_8, &Var_18);
  mercury__io__write_string_4_p_0(OutputStream_5, Var_18);
}

static void MR_CALL 
dump__dump_clique_members_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  dump__dump_pd_in_clique_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
dump__dump_clique_members_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Index_7,
  MR_Word CliqueMembers_8)
{
  MR_Word Var_17;
  MR_String Var_27;
  MR_Box conv0_STATE_VARIABLE_IO_2_18;

  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "clique");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Index_7, &Var_27);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_27);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " members:");
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&dump_scalar_common_9[0]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (dump__dump_clique_members_5_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (OutputStream_6));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, CliqueMembers_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_2_18);
  mercury__io__nl_3_p_0(OutputStream_6);
}

static void MR_CALL 
dump__dump_clique_index_entry_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Index_7,
  MR_Word CliquePtr_8)
{
  MR_Integer CliqueNum_10 = (MR_Integer) (CliquePtr_8);
  MR_String Var_23;
  MR_String Var_33;

  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "pd");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Index_7, &Var_23);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_23);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " is in clique");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), CliqueNum_10, &Var_33);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_33);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
}

static void MR_CALL 
dump__dump_coverage_point_info_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Num_7,
  MR_Word CoveragePointInfo_8)
{
  MR_String CPInfoStr_10;
  MR_Word RevPath_22 = ((MR_Word) ((MR_hl_field(0, CoveragePointInfo_8, 0))));
  MR_Word CPType_23 = ((MR_Word) ((MR_hl_field(0, CoveragePointInfo_8, 1))));
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
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Num_7, &Var_40);
  Var_47 = mercury__string__f_43_43_2_f_0(Var_40, Var_39);
  CPInfoStr_10 = mercury__string__f_43_43_2_f_0((MR_String) "coverage_point[", Var_47);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\t");
  mercury__io__write_string_4_p_0(OutputStream_6, CPInfoStr_10);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
}

static void MR_CALL 
dump__dump_coverage_point_6_p_0(
  MR_Word OutputStream_7,
  MR_Word CoveragePoint_8,
  MR_Integer STATE_VARIABLE_Num_0_16,
  MR_Integer * STATE_VARIABLE_Num_17)
{
  MR_Integer Count_11 = ((MR_Integer) ((MR_hl_field(0, CoveragePoint_8, 0))));
  MR_String CPInfoStr_15;
  MR_String Var_35;
  MR_Word RevPath_43 = ((MR_Word) ((MR_hl_field(0, CoveragePoint_8, 1))));
  MR_Word CPType_44 = ((MR_Word) ((MR_hl_field(0, CoveragePoint_8, 2))));
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
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), STATE_VARIABLE_Num_0_16, &Var_61);
  Var_68 = mercury__string__f_43_43_2_f_0(Var_61, Var_60);
  CPInfoStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "coverage_point[", Var_68);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\t");
  mercury__io__write_string_4_p_0(OutputStream_7, CPInfoStr_15);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) ": ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Count_11, &Var_35);
  mercury__io__write_string_4_p_0(OutputStream_7, Var_35);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\n");
  *STATE_VARIABLE_Num_17 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Num_0_16 + (MR_Unsigned) 1);
}

static void MR_CALL 
dump__dump_proc_static_call_sites_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Slot_7,
  MR_Word CSSPtr_8)
{
  MR_Integer CSSI_10 = (MR_Integer) (CSSPtr_8);
  MR_String Var_23;
  MR_String Var_33;

  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\tps_site[");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Slot_7, &Var_23);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_23);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "]: css");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), CSSI_10, &Var_33);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_33);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
}

static void MR_CALL 
dump__dump_proc_static_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv2_STATE_VARIABLE_Num_17;

  dump__dump_coverage_point_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Num_17);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Num_17));
}

static void MR_CALL 
dump__dump_proc_static_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  dump__dump_coverage_point_info_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
dump__dump_proc_static_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  dump__dump_proc_static_call_sites_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
dump__dump_proc_static_6_p_0(
  MR_Word OutputStream_7,
  MR_Word Restriction_8,
  MR_Integer Index_9,
  MR_Word ProcStatic_10)
{
  MR_bool succeeded;

  if ((Restriction_8 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  {
    MR_Word UsedProcStatics_12 = ((MR_Word) ((MR_hl_field(1, Restriction_8, 0))));
    MR_Word Var_33 = (MR_Word) (Index_9);

    succeeded = mercury__set__member_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), ((MR_Box) (Var_33)), UsedProcStatics_12);
  }
  if (succeeded)
  {
    MR_Word Id_14 = ((MR_Word) ((MR_hl_field(0, ProcStatic_10, 0))));
    MR_String DeclModule_15 = ((MR_String) ((MR_hl_field(0, ProcStatic_10, 1))));
    MR_String QualRefinedId_17 = ((MR_String) ((MR_hl_field(0, ProcStatic_10, 3))));
    MR_String RawId_18 = ((MR_String) ((MR_hl_field(0, ProcStatic_10, 4))));
    MR_String FileName_19 = ((MR_String) ((MR_hl_field(0, ProcStatic_10, 5))));
    MR_Integer LineNumber_20 = ((MR_Integer) ((MR_hl_field(0, ProcStatic_10, 6))));
    MR_Word InInterface_21 = ((MR_Unsigned) ((MR_hl_field(0, ProcStatic_10, 7))) & (MR_Integer) 1);
    MR_ArrayPtr Sites_22 = ((MR_ArrayPtr) ((MR_hl_field(0, ProcStatic_10, 8))));
    MR_ArrayPtr CoveragePointInfos_23 = ((MR_ArrayPtr) ((MR_hl_field(0, ProcStatic_10, 9))));
    MR_Word MaybeCoveragePoints_24 = ((MR_Word) ((MR_hl_field(0, ProcStatic_10, 10))));
    MR_Word IsZeroed_25 = ((MR_Unsigned) ((MR_hl_field(0, ProcStatic_10, 11))) & (MR_Integer) 1);
    MR_String IdStr_26;
    MR_String IsZeroStr_27;
    MR_Word Var_75;
    MR_String Var_107;
    MR_String Var_137;
    MR_String Var_49;
    MR_String Var_103;
    MR_Box conv0_STATE_VARIABLE_IO_9_76;

    IdStr_26 = dump__dump_proc_id_1_f_0(Id_14);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "ps");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Index_9, &Var_107);
    mercury__io__write_string_4_p_0(OutputStream_7, Var_107);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) ":\n");
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\tps_id\t\t= ");
    mercury__io__write_string_4_p_0(OutputStream_7, IdStr_26);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\n");
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\tps_decl_module\t= ");
    mercury__io__write_string_4_p_0(OutputStream_7, DeclModule_15);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\n");
    Var_49 = mercury__string__f_43_43_2_f_0((MR_String) ".", IdStr_26);
    Var_103 = mercury__string__f_43_43_2_f_0(DeclModule_15, Var_49);
    succeeded = (strcmp(QualRefinedId_17, Var_103) == 0);
    if (!(succeeded))
    {
      mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\tps_q_refined_id\t= ");
      mercury__io__write_string_4_p_0(OutputStream_7, QualRefinedId_17);
      mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\n");
    }
    succeeded = (strcmp(QualRefinedId_17, RawId_18) == 0);
    succeeded = !(succeeded);
    if (!(succeeded))
    {
      mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\tps_raw_id\t= ");
      mercury__io__write_string_4_p_0(OutputStream_7, RawId_18);
      mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\n");
    }
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\tlocation\t= ");
    mercury__io__write_string_4_p_0(OutputStream_7, FileName_19);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) ":");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), LineNumber_20, &Var_137);
    mercury__io__write_string_4_p_0(OutputStream_7, Var_137);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\n");
    switch (InInterface_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\tin_interface\n");
        break;
    }
    switch (IsZeroed_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        IsZeroStr_27 = (MR_String) "not_zeroed";
        break;
      case (MR_Integer) 0:
        IsZeroStr_27 = (MR_String) "zeroed";
        break;
    }
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\t");
    mercury__io__write_string_4_p_0(OutputStream_7, IsZeroStr_27);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\n");
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_75, 0) = ((MR_Box) (&dump_scalar_common_7[6]));
      MR_hl_field(0, Var_75, 1) = ((MR_Box) (dump__dump_proc_static_6_p_0_1));
      MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_75, 3) = ((MR_Box) (OutputStream_7));
    }
    array_util__array_foldl_from_0_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_75, (MR_ArrayPtr) (Sites_22), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9_76);
    if ((MaybeCoveragePoints_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_82;
      MR_Box conv1_STATE_VARIABLE_IO_10_79;

      mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\tCoverage counts not present in proc static\n");
      {
        Var_82 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_82, 0) = ((MR_Box) (&dump_scalar_common_7[9]));
        MR_hl_field(0, Var_82, 1) = ((MR_Box) (dump__dump_proc_static_6_p_0_2));
        MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_82, 3) = ((MR_Box) (OutputStream_7));
      }
      array_util__array_foldl_from_0_4_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_82, (MR_ArrayPtr) (CoveragePointInfos_23), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_10_79);
    }
    else
    {
      MR_ArrayPtr CoveragePointsArray_28 = ((MR_ArrayPtr) ((MR_hl_field(1, MaybeCoveragePoints_24, 0))));
      MR_Word CoveragePoints_29;
      MR_Word Var_77;
      MR_Box conv4_Var_30;
      MR_Box conv3_STATE_VARIABLE_IO_10_79;

      coverage__coverage_point_arrays_to_list_3_p_0(CoveragePointInfos_23, CoveragePointsArray_28, &CoveragePoints_29);
      {
        Var_77 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_77, 0) = ((MR_Box) (&dump_scalar_common_5[3]));
        MR_hl_field(0, Var_77, 1) = ((MR_Box) (dump__dump_proc_static_6_p_0_3));
        MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_77, 3) = ((MR_Box) (OutputStream_7));
      }
      mercury__list__foldl2_6_p_2((MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_77, CoveragePoints_29, ((MR_Box) ((MR_Integer) 0)), &conv4_Var_30, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_10_79);
    }
    mercury__io__nl_3_p_0(OutputStream_7);
  }
}

static MR_String MR_CALL 
dump__dump_proc_id_1_f_0(
  MR_Word Proc_3)
{
  MR_String Str_4;

  if (((MR_tag((MR_Word) Proc_3)) == (MR_Integer) 0))
  {
    MR_Word PredOrFunc_5 = ((MR_Unsigned) ((MR_hl_field(0, Proc_3, 0))) & (MR_Integer) 1);
    MR_String Name_8 = ((MR_String) ((MR_hl_field(0, Proc_3, 3))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(0, Proc_3, 4))));
    MR_Integer Mode_10 = ((MR_Integer) ((MR_hl_field(0, Proc_3, 5))));
    MR_String Suffix_11;
    MR_String Var_38;
    MR_String Var_45;
    MR_String Var_47;
    MR_String Var_48;
    MR_String Var_55;
    MR_String Var_57;

    switch (PredOrFunc_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Suffix_11 = (MR_String) "+1";
        break;
      case (MR_Integer) 0:
        Suffix_11 = (MR_String) "";
        break;
    }
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Mode_10, &Var_38);
    Var_45 = mercury__string__f_43_43_2_f_0(Var_38, Suffix_11);
    Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_45);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Arity_9, &Var_48);
    Var_55 = mercury__string__f_43_43_2_f_0(Var_48, Var_47);
    Var_57 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_55);
    Str_4 = mercury__string__f_43_43_2_f_0(Name_8, Var_57);
  }
  else
  {
    MR_String Type_12 = ((MR_String) ((MR_hl_field(1, Proc_3, 0))));
    MR_String Name_33 = ((MR_String) ((MR_hl_field(1, Proc_3, 3))));
    MR_String Var_35;
    MR_String Var_37;

    Var_35 = mercury__string__f_43_43_2_f_0(Type_12, (MR_String) "\'");
    Var_37 = mercury__string__f_43_43_2_f_0((MR_String) " predicate for type \140", Var_35);
    Str_4 = mercury__string__f_43_43_2_f_0(Name_33, Var_37);
  }
  return Str_4;
}

static void MR_CALL 
dump__dump_call_site_static_6_p_0(
  MR_Word OutputStream_7,
  MR_Word Restriction_8,
  MR_Integer Index_9,
  MR_Word CallSiteStatic_10)
{
  MR_bool succeeded;

  if ((Restriction_8 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  {
    MR_Word UsedCallSiteStatics_13 = ((MR_Word) ((MR_hl_field(1, Restriction_8, 1))));
    MR_Word Var_24 = (MR_Word) (Index_9);

    succeeded = mercury__set__member_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), ((MR_Box) (Var_24)), UsedCallSiteStatics_13);
  }
  if (succeeded)
  {
    MR_Word ContainerPSPtr_14 = ((MR_Word) ((MR_hl_field(0, CallSiteStatic_10, 0))));
    MR_Integer SlotNum_15 = ((MR_Integer) ((MR_hl_field(0, CallSiteStatic_10, 1))));
    MR_Word Kind_16 = ((MR_Word) ((MR_hl_field(0, CallSiteStatic_10, 2))));
    MR_String File_17 = ((MR_String) ((MR_hl_field(0, CallSiteStatic_10, 3))));
    MR_Integer LineNum_18 = ((MR_Integer) ((MR_hl_field(0, CallSiteStatic_10, 4))));
    MR_Word GoalPath_19 = ((MR_Word) ((MR_hl_field(0, CallSiteStatic_10, 5))));
    MR_Integer ContainerPSI_20 = (MR_Integer) (ContainerPSPtr_14);
    MR_String GoalPathString_21;
    MR_String Var_63;
    MR_String Var_74;
    MR_String Var_85;
    MR_String Var_100;

    GoalPathString_21 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(GoalPath_19);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "css");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Index_9, &Var_63);
    mercury__io__write_string_4_p_0(OutputStream_7, Var_63);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) ":\n");
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\tcss_container\t= ps");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), ContainerPSI_20, &Var_74);
    mercury__io__write_string_4_p_0(OutputStream_7, Var_74);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\n");
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\tcss_slot_num\t= <");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), SlotNum_15, &Var_85);
    mercury__io__write_string_4_p_0(OutputStream_7, Var_85);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) ">\n");
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\tcss_file_name\t= <");
    mercury__io__write_string_4_p_0(OutputStream_7, File_17);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) ">\n");
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\tcss_line_num\t= <");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), LineNum_18, &Var_100);
    mercury__io__write_string_4_p_0(OutputStream_7, Var_100);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) ">\n");
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\tcss_goal_path\t= <");
    mercury__io__write_string_4_p_0(OutputStream_7, GoalPathString_21);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) ">\n");
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\tcss_kind\t= ");
    dump__dump_call_site_kind_and_callee_4_p_0(OutputStream_7, Kind_16);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\n\n");
  }
}

static void MR_CALL 
dump__dump_call_site_kind_and_callee_4_p_0(
  MR_Word OutputStream_5,
  MR_Word KindAndCallee_6)
{
  switch (MR_tag((MR_Word) KindAndCallee_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(KindAndCallee_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "special_call");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "higher_order_call");
          break;
        case (MR_Integer) 2:
          mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "method_call");
          break;
        case (MR_Integer) 3:
          mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "callback");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Ptr_8 = ((MR_Word) ((MR_hl_field(1, KindAndCallee_6, 0))));
        MR_String String_9 = ((MR_String) ((MR_hl_field(1, KindAndCallee_6, 1))));
        MR_Integer Val_10 = (MR_Integer) (Ptr_8);
        MR_String Var_24;

        mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "normal_call(");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Val_10, &Var_24);
        mercury__io__write_string_4_p_0(OutputStream_5, Var_24);
        mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) ", \"");
        mercury__io__write_string_4_p_0(OutputStream_5, String_9);
        mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\")");
      }
      break;
  }
}

static void MR_CALL 
dump__dump_call_site_array_slot_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Index_7,
  MR_Word CSA_slot_8)
{
  MR_String Var_18;
  MR_String Var_23;

  if (((MR_tag((MR_Word) CSA_slot_8)) == (MR_Integer) 1))
    Var_18 = (MR_String) "multi";
  else
  {
    MR_Integer CSDI_34;
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, CSA_slot_8, 0))));
    MR_String Var_43;
    MR_String Var_50;

    CSDI_34 = (MR_Integer) (Var_35);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), CSDI_34, &Var_43);
    Var_50 = mercury__string__f_43_43_2_f_0(Var_43, (MR_String) ")");
    Var_18 = mercury__string__f_43_43_2_f_0((MR_String) "normal(csd", Var_50);
  }
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\tpd_site[");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Index_7, &Var_23);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_23);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "] = ");
  mercury__io__write_string_4_p_0(OutputStream_6, Var_18);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
}

static void MR_CALL 
dump__dump_proc_dynamic_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_STATE_VARIABLE_Num_17;

  dump__dump_coverage_point_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Num_17);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Num_17));
}

static void MR_CALL 
dump__dump_proc_dynamic_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  dump__dump_call_site_array_slot_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
dump__dump_proc_dynamic_6_p_0(
  MR_Word OutputStream_7,
  MR_ArrayPtr ProcStatics_8,
  MR_Integer Index_9,
  MR_Word ProcDynamic_10)
{
  MR_bool succeeded;
  MR_Word PSPtr_12 = ((MR_Word) ((MR_hl_field(0, ProcDynamic_10, 0))));
  MR_ArrayPtr Sites_13 = ((MR_ArrayPtr) ((MR_hl_field(0, ProcDynamic_10, 1))));
  MR_Word MaybeCPs_14 = ((MR_Word) ((MR_hl_field(0, ProcDynamic_10, 2))));
  MR_Integer PSI_15 = (MR_Integer) (PSPtr_12);
  MR_Word PS_16;
  MR_String QualRefinedPSId_17;
  MR_Word Var_37;
  MR_String Var_93;
  MR_String Var_104;
  MR_String Var_24;
  MR_Box conv0_STATE_VARIABLE_IO_3_38;

  profile__lookup_proc_statics_3_p_0(ProcStatics_8, PSPtr_12, &PS_16);
  Var_24 = ((MR_String) ((MR_hl_field(0, PS_16, 3))));
  succeeded = (strcmp(Var_24, (MR_String) "") == 0);
  if (succeeded)
    QualRefinedPSId_17 = (MR_String) "UNKNOWN_PS";
  else
    QualRefinedPSId_17 = ((MR_String) ((MR_hl_field(0, PS_16, 3))));
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "pd");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Index_9, &Var_93);
  mercury__io__write_string_4_p_0(OutputStream_7, Var_93);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) ":\n");
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\tpd_proc_static = ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), PSI_15, &Var_104);
  mercury__io__write_string_4_p_0(OutputStream_7, Var_104);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) " (");
  mercury__io__write_string_4_p_0(OutputStream_7, QualRefinedPSId_17);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) ")\n");
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (&dump_scalar_common_7[8]));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) (dump__dump_proc_dynamic_6_p_0_1));
    MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_37, 3) = ((MR_Box) (OutputStream_7));
  }
  array_util__array_foldl_from_0_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_37, (MR_ArrayPtr) (Sites_13), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_3_38);
  if (!((MaybeCPs_14 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_ArrayPtr CPCounts_18 = ((MR_ArrayPtr) ((MR_hl_field(1, MaybeCPs_14, 0))));
    MR_ArrayPtr CPInfos_19 = ((MR_ArrayPtr) ((MR_hl_field(0, PS_16, 9))));
    MR_Word CPs_20;
    MR_Word Var_41;
    MR_Box conv3_Var_21;
    MR_Box conv2_STATE_VARIABLE_IO_5_43;

    coverage__coverage_point_arrays_to_list_3_p_0(CPInfos_19, CPCounts_18, &CPs_20);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "Coverage points:\n");
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (&dump_scalar_common_5[3]));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) (dump__dump_proc_dynamic_6_p_0_2));
      MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_41, 3) = ((MR_Box) (OutputStream_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_41, CPs_20, ((MR_Box) ((MR_Integer) 0)), &conv3_Var_21, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_5_43);
  }
  mercury__io__nl_3_p_0(OutputStream_7);
}

static void MR_CALL 
dump__dump_call_site_dynamic_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Index_7,
  MR_Word CallSiteDynamic_8)
{
  MR_Word CallerPDPtr_10 = ((MR_Word) ((MR_hl_field(0, CallSiteDynamic_8, 0))));
  MR_Word CalleePDPtr_11 = ((MR_Word) ((MR_hl_field(0, CallSiteDynamic_8, 1))));
  MR_Word Own_12 = ((MR_Word) ((MR_hl_field(0, CallSiteDynamic_8, 2))));
  MR_Integer CallerPDI_13 = (MR_Integer) (CallerPDPtr_10);
  MR_Integer CalleePDI_14 = (MR_Integer) (CalleePDPtr_11);
  MR_String Var_36;
  MR_String Var_47;
  MR_String Var_58;

  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "csd");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Index_7, &Var_36);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_36);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) ":\n");
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\tcsd_caller = pd");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), CallerPDI_13, &Var_47);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_47);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\tcsd_callee = pd");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), CalleePDI_14, &Var_58);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_58);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
  dump__dump_own_prof_info_4_p_0(OutputStream_6, Own_12);
  mercury__io__nl_3_p_0(OutputStream_6);
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
  MR_Word ProcStaticPtr_13 = ((MR_Word) ((MR_hl_field(0, ProcDynamic_10, 0))));
  MR_Word ProcStatic_14;
  MR_Word CSSs_15;
  MR_ArrayPtr Var_21;

  mercury__set__insert_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), ((MR_Box) (ProcStaticPtr_13)), STATE_VARIABLE_PS_Ptrs_0_16, STATE_VARIABLE_PS_Ptrs_17);
  profile__lookup_proc_statics_3_p_0(ProcStatics_8, ProcStaticPtr_13, &ProcStatic_14);
  Var_21 = ((MR_ArrayPtr) ((MR_hl_field(0, ProcStatic_14, 8))));
  CSSs_15 = mercury__array__to_list_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_ArrayPtr) (Var_21));
  mercury__set__insert_list_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), CSSs_15, STATE_VARIABLE_CSS_Ptrs_0_18, STATE_VARIABLE_CSS_Ptrs_19);
}

static MR_bool MR_CALL 
dump__string_to_dumpable_array_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
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

static void MR_CALL 
dump__det_string_to_dumpable_array_2_p_0(
  MR_String String_3,
  MR_Word * Array_4)
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

void MR_CALL 
dump__dump_deep_5_p_0(
  MR_Word Deep_6,
  MR_Word DumpOptions_7,
  MR_Word OutputStream_8)
{
  MR_Word DumpCliques_10 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_7, 2))) >> 2)) & (MR_Integer) 1);
  MR_Word DumpRevLinks_11 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_7, 2))) >> 1)) & (MR_Integer) 1);
  MR_Word DumpPropMeasurements_12 = ((MR_Unsigned) ((MR_hl_field(0, DumpOptions_7, 2))) & (MR_Integer) 1);

  switch (DumpCliques_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
      }
      break;
    case (MR_Integer) 0:
      dump__dump_deep_cliques_4_p_0(OutputStream_8, Deep_6);
      break;
  }
  switch (DumpRevLinks_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
      }
      break;
    case (MR_Integer) 0:
      dump__dump_deep_rev_links_4_p_0(OutputStream_8, Deep_6);
      break;
  }
  switch (DumpPropMeasurements_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
      }
      break;
    case (MR_Integer) 0:
      dump__dump_deep_prop_measurements_4_p_0(OutputStream_8, Deep_6);
      break;
  }
}

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_4_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = dump__IntroducedFrom__pred__dump_deep_prop_measurements__924__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_4_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = dump__IntroducedFrom__pred__dump_deep_prop_measurements__914__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_4_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = dump__IntroducedFrom__pred__dump_deep_prop_measurements__904__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
dump__dump_deep_prop_measurements_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = dump__IntroducedFrom__pred__dump_deep_prop_measurements__894__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
dump__dump_deep_prop_measurements_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Deep_6)
{
  MR_bool succeeded;
  MR_ArrayPtr PDOwn_8 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_6, 16))));
  MR_ArrayPtr PDDesc_9 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_6, 17))));
  MR_Integer PDOwnMax_10;
  MR_Integer PDDescMax_11;
  MR_ArrayPtr CSDs_12;
  MR_ArrayPtr CSDDesc_13;
  MR_Integer CSDMax_14;
  MR_Integer CSDDescMax_15;
  MR_ArrayPtr PSOwn_16;
  MR_ArrayPtr PSDesc_17;
  MR_Integer PSOwnMax_18;
  MR_Integer PSDescMax_19;
  MR_ArrayPtr CSSOwn_20;
  MR_ArrayPtr CSSDesc_21;
  MR_Integer CSSOwnMax_22;
  MR_Integer CSSDescMax_23;
  MR_Word Var_26;
  MR_Word Var_32;
  MR_Word Var_38;
  MR_Word Var_44;

  PDOwnMax_10 = mercury__array__max_1_f_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (PDOwn_8));
  PDDescMax_11 = mercury__array__max_1_f_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (PDDesc_9));
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&dump_scalar_common_4[1]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (dump__dump_deep_prop_measurements_4_p_0_1));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (PDOwnMax_10));
    MR_hl_field(0, Var_26, 4) = ((MR_Box) (PDDescMax_11));
  }
  mercury__require__require_2_p_0(Var_26, (MR_String) "dump_deep: PDOwnMax != PDDescMax");
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "SECTION PROC DYNAMIC MEASUREMENTS:\n\n");
  dump__dump_pd_measurements_7_p_0(OutputStream_5, (MR_Integer) 1, PDOwnMax_10, PDOwn_8, PDDesc_9);
  CSDs_12 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_6, 5))));
  CSDDesc_13 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_6, 18))));
  CSDMax_14 = mercury__array__max_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_ArrayPtr) (CSDs_12));
  CSDDescMax_15 = mercury__array__max_1_f_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (CSDDesc_13));
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&dump_scalar_common_4[1]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (dump__dump_deep_prop_measurements_4_p_0_2));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (CSDMax_14));
    MR_hl_field(0, Var_32, 4) = ((MR_Box) (CSDDescMax_15));
  }
  mercury__require__require_2_p_0(Var_32, (MR_String) "dump_deep: CSDMax != CSDDescMax");
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "SECTION CALL SITE DYNAMIC MEASUREMENTS:\n\n");
  dump__dump_csd_measurements_7_p_0(OutputStream_5, (MR_Integer) 1, CSDMax_14, CSDs_12, CSDDesc_13);
  PSOwn_16 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_6, 19))));
  PSDesc_17 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_6, 20))));
  PSOwnMax_18 = mercury__array__max_1_f_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (PSOwn_16));
  PSDescMax_19 = mercury__array__max_1_f_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (PSDesc_17));
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&dump_scalar_common_4[1]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (dump__dump_deep_prop_measurements_4_p_0_3));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (PSOwnMax_18));
    MR_hl_field(0, Var_38, 4) = ((MR_Box) (PSDescMax_19));
  }
  mercury__require__require_2_p_0(Var_38, (MR_String) "dump_deep: PSOwnMax != PSDescMax");
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "SECTION PROC STATIC MEASUREMENTS:\n\n");
  dump__dump_ps_measurements_7_p_0(OutputStream_5, (MR_Integer) 1, PSOwnMax_18, PSOwn_16, PSDesc_17);
  CSSOwn_20 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_6, 21))));
  CSSDesc_21 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_6, 22))));
  CSSOwnMax_22 = mercury__array__max_1_f_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (CSSOwn_20));
  CSSDescMax_23 = mercury__array__max_1_f_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (CSSDesc_21));
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&dump_scalar_common_4[1]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (dump__dump_deep_prop_measurements_4_p_0_4));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (CSSOwnMax_22));
    MR_hl_field(0, Var_44, 4) = ((MR_Box) (CSSDescMax_23));
  }
  mercury__require__require_2_p_0(Var_44, (MR_String) "dump_deep: CSSOwnMax != CSSDescMax");
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "SECTION CALL SITE STATIC MEASUREMENTS:\n\n");
  dump__dump_css_measurements_7_p_0(OutputStream_5, (MR_Integer) 1, CSSOwnMax_22, CSSOwn_20, CSSDesc_21);
}

static void MR_CALL 
dump__dump_css_measurements_7_p_0(
  MR_Word OutputStream_8,
  MR_Integer Cur_9,
  MR_Integer Max_10,
  MR_ArrayPtr CSSOwn_11,
  MR_ArrayPtr CSSDesc_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Cur_9 <= Max_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Own_14;
      MR_Word Desc_15;
      MR_Integer Var_20;
      MR_Box conv0_Own_14;
      MR_Box conv1_Desc_15;
      MR_Integer next_value_of_Cur_9;

      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (CSSOwn_11), Cur_9, &conv0_Own_14);
      Own_14 = ((MR_Word) (conv0_Own_14));
      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (CSSDesc_12), Cur_9, &conv1_Desc_15);
      Desc_15 = ((MR_Word) (conv1_Desc_15));
      dump__dump_own_and_desc_7_p_0(OutputStream_8, (MR_String) "css", Cur_9, Own_14, Desc_15);
      Var_20 = (MR_Integer) ((MR_Unsigned) Cur_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Cur_9 = Var_20;
      Cur_9 = next_value_of_Cur_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
dump__dump_ps_measurements_7_p_0(
  MR_Word OutputStream_8,
  MR_Integer Cur_9,
  MR_Integer Max_10,
  MR_ArrayPtr PSOwn_11,
  MR_ArrayPtr PSDesc_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Cur_9 <= Max_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Own_14;
      MR_Word Desc_15;
      MR_Integer Var_20;
      MR_Box conv0_Own_14;
      MR_Box conv1_Desc_15;
      MR_Integer next_value_of_Cur_9;

      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (PSOwn_11), Cur_9, &conv0_Own_14);
      Own_14 = ((MR_Word) (conv0_Own_14));
      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (PSDesc_12), Cur_9, &conv1_Desc_15);
      Desc_15 = ((MR_Word) (conv1_Desc_15));
      dump__dump_own_and_desc_7_p_0(OutputStream_8, (MR_String) "ps", Cur_9, Own_14, Desc_15);
      Var_20 = (MR_Integer) ((MR_Unsigned) Cur_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Cur_9 = Var_20;
      Cur_9 = next_value_of_Cur_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
dump__dump_csd_measurements_7_p_0(
  MR_Word OutputStream_8,
  MR_Integer Cur_9,
  MR_Integer Max_10,
  MR_ArrayPtr CSDs_11,
  MR_ArrayPtr CSDDesc_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Cur_9 <= Max_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word CSD_14;
      MR_Word Own_15;
      MR_Word Desc_16;
      MR_Integer Var_21;
      MR_Box conv0_CSD_14;
      MR_Box conv1_Desc_16;
      MR_Integer next_value_of_Cur_9;

      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_ArrayPtr) (CSDs_11), Cur_9, &conv0_CSD_14);
      CSD_14 = ((MR_Word) (conv0_CSD_14));
      Own_15 = ((MR_Word) ((MR_hl_field(0, CSD_14, 2))));
      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (CSDDesc_12), Cur_9, &conv1_Desc_16);
      Desc_16 = ((MR_Word) (conv1_Desc_16));
      dump__dump_own_and_desc_7_p_0(OutputStream_8, (MR_String) "OutputStream, csd", Cur_9, Own_15, Desc_16);
      Var_21 = (MR_Integer) ((MR_Unsigned) Cur_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Cur_9 = Var_21;
      Cur_9 = next_value_of_Cur_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
dump__dump_pd_measurements_7_p_0(
  MR_Word OutputStream_8,
  MR_Integer Cur_9,
  MR_Integer Max_10,
  MR_ArrayPtr PDOwn_11,
  MR_ArrayPtr PDDesc_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Cur_9 <= Max_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Own_14;
      MR_Word Desc_15;
      MR_Integer Var_20;
      MR_Box conv0_Own_14;
      MR_Box conv1_Desc_15;
      MR_Integer next_value_of_Cur_9;

      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (PDOwn_11), Cur_9, &conv0_Own_14);
      Own_14 = ((MR_Word) (conv0_Own_14));
      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (PDDesc_12), Cur_9, &conv1_Desc_15);
      Desc_15 = ((MR_Word) (conv1_Desc_15));
      dump__dump_own_and_desc_7_p_0(OutputStream_8, (MR_String) "pd", Cur_9, Own_14, Desc_15);
      Var_20 = (MR_Integer) ((MR_Unsigned) Cur_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Cur_9 = Var_20;
      Cur_9 = next_value_of_Cur_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
dump__dump_own_and_desc_7_p_0(
  MR_Word OutputStream_8,
  MR_String Prefix_9,
  MR_Integer Cur_10,
  MR_Word Own_11,
  MR_Word Desc_12)
{
  MR_bool succeeded;
  MR_Word PrintedOwn_14;
  MR_Word PrintedDesc_15;

  succeeded = measurements__is_zero_own_prof_info_1_p_0(Own_11);
  if (succeeded)
    PrintedOwn_14 = (MR_Integer) 0;
  else
  {
    MR_String Var_36;

    mercury__io__write_string_4_p_0(OutputStream_8, Prefix_9);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Cur_10, &Var_36);
    mercury__io__write_string_4_p_0(OutputStream_8, Var_36);
    mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) " own:\n");
    dump__dump_own_prof_info_4_p_0(OutputStream_8, Own_11);
    PrintedOwn_14 = (MR_Integer) 1;
  }
  succeeded = measurements__is_zero_inherit_prof_info_1_p_0(Desc_12);
  if (succeeded)
    PrintedDesc_15 = (MR_Integer) 0;
  else
  {
    MR_String Var_46;

    mercury__io__write_string_4_p_0(OutputStream_8, Prefix_9);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Cur_10, &Var_46);
    mercury__io__write_string_4_p_0(OutputStream_8, Var_46);
    mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) " inherit:\n");
    dump__dump_inherit_prof_info_4_p_0(OutputStream_8, Desc_12);
    PrintedDesc_15 = (MR_Integer) 1;
  }
  succeeded = (PrintedOwn_14 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (PrintedDesc_15 == (MR_Integer) 1);
  if (succeeded)
    mercury__io__nl_3_p_0(OutputStream_8);
}

static void MR_CALL 
dump__dump_inherit_prof_info_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Inherit_6)
{
  MR_bool succeeded;
  MR_Integer Quanta_8;
  MR_Integer CallSeqs_9;
  MR_Integer Allocs_10;
  MR_Integer Words_11;

  Quanta_8 = measurements__inherit_quanta_1_f_0(Inherit_6);
  CallSeqs_9 = measurements__inherit_callseqs_1_f_0(Inherit_6);
  Allocs_10 = measurements__inherit_allocs_1_f_0(Inherit_6);
  Words_11 = measurements__inherit_words_1_f_0(Inherit_6);
  succeeded = (Quanta_8 == (MR_Integer) 0);
  if (!(succeeded))
  {
    MR_String Var_37;

    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tquanta:\t\t");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Quanta_8, &Var_37);
    mercury__io__write_string_4_p_0(OutputStream_5, Var_37);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  }
  succeeded = (CallSeqs_9 == (MR_Integer) 0);
  if (!(succeeded))
  {
    MR_String Var_48;

    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tcallseqs:\t");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), CallSeqs_9, &Var_48);
    mercury__io__write_string_4_p_0(OutputStream_5, Var_48);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  }
  succeeded = (Allocs_10 == (MR_Integer) 0);
  if (!(succeeded))
  {
    MR_String Var_59;

    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tallocs:\t\t");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Allocs_10, &Var_59);
    mercury__io__write_string_4_p_0(OutputStream_5, Var_59);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  }
  succeeded = (Words_11 == (MR_Integer) 0);
  if (!(succeeded))
  {
    MR_String Var_70;

    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\twords:\t\t");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Words_11, &Var_70);
    mercury__io__write_string_4_p_0(OutputStream_5, Var_70);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  }
}

static void MR_CALL 
dump__dump_own_prof_info_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Own_6)
{
  MR_bool succeeded;
  MR_Integer Calls_8;
  MR_Integer Exits_9;
  MR_Integer Fails_10;
  MR_Integer Redos_11;
  MR_Integer Excps_12;
  MR_Integer Quanta_13;
  MR_Integer CallSeqs_14;
  MR_Integer Allocs_15;
  MR_Integer Words_16;

  measurements__decompress_profile_10_p_0(Own_6, &Calls_8, &Exits_9, &Fails_10, &Redos_11, &Excps_12, &Quanta_13, &CallSeqs_14, &Allocs_15, &Words_16);
  succeeded = (Calls_8 == (MR_Integer) 0);
  if (!(succeeded))
  {
    MR_String Var_67;

    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tcalls:\t\t");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Calls_8, &Var_67);
    mercury__io__write_string_4_p_0(OutputStream_5, Var_67);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  }
  succeeded = (Exits_9 == (MR_Integer) 0);
  if (!(succeeded))
  {
    MR_String Var_78;

    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\texits:\t\t");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Exits_9, &Var_78);
    mercury__io__write_string_4_p_0(OutputStream_5, Var_78);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  }
  succeeded = (Fails_10 == (MR_Integer) 0);
  if (!(succeeded))
  {
    MR_String Var_89;

    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tfails:\t\t");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Fails_10, &Var_89);
    mercury__io__write_string_4_p_0(OutputStream_5, Var_89);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  }
  succeeded = (Redos_11 == (MR_Integer) 0);
  if (!(succeeded))
  {
    MR_String Var_100;

    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tredos:\t\t");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Redos_11, &Var_100);
    mercury__io__write_string_4_p_0(OutputStream_5, Var_100);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  }
  succeeded = (Excps_12 == (MR_Integer) 0);
  if (!(succeeded))
  {
    MR_String Var_111;

    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\texcps:\t\t");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Excps_12, &Var_111);
    mercury__io__write_string_4_p_0(OutputStream_5, Var_111);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  }
  succeeded = (Quanta_13 == (MR_Integer) 0);
  if (!(succeeded))
  {
    MR_String Var_122;

    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tquanta:\t\t");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Quanta_13, &Var_122);
    mercury__io__write_string_4_p_0(OutputStream_5, Var_122);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  }
  succeeded = (CallSeqs_14 == (MR_Integer) 0);
  if (!(succeeded))
  {
    MR_String Var_133;

    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tcallseqs:\t");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), CallSeqs_14, &Var_133);
    mercury__io__write_string_4_p_0(OutputStream_5, Var_133);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  }
  succeeded = (Allocs_15 == (MR_Integer) 0);
  if (!(succeeded))
  {
    MR_String Var_144;

    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tallocs:\t\t");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Allocs_15, &Var_144);
    mercury__io__write_string_4_p_0(OutputStream_5, Var_144);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  }
  succeeded = (Words_16 == (MR_Integer) 0);
  if (!(succeeded))
  {
    MR_String Var_155;

    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\twords:\t\t");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Words_16, &Var_155);
    mercury__io__write_string_4_p_0(OutputStream_5, Var_155);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  }
}

static void MR_CALL 
dump__dump_deep_rev_links_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  dump__dump_call_site_calls_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
dump__dump_deep_rev_links_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  dump__dump_call_site_dynamic_to_static_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
dump__dump_deep_rev_links_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  dump__dump_proc_static_caller_csds_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
dump__dump_deep_rev_links_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Deep_6)
{
  MR_ArrayPtr ProcCallers_8 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_6, 13))));
  MR_ArrayPtr CallSiteStaticMap_9;
  MR_ArrayPtr CallSiteCalls_10;
  MR_Word Var_15;
  MR_Word Var_20;
  MR_Word Var_25;
  MR_Box conv0_STATE_VARIABLE_IO_2_16;
  MR_Box conv1_STATE_VARIABLE_IO_5_21;
  MR_Box conv2_STATE_VARIABLE_IO_8_26;

  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "SECTION MAP FROM PROC STATIC TO CALLER CSDs:\n\n");
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&dump_scalar_common_7[5]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (dump__dump_deep_rev_links_4_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (OutputStream_5));
  }
  array_util__array_foldl_from_1_4_p_0((MR_Word) (&dump_scalar_common_1[4]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, (MR_ArrayPtr) (ProcCallers_8), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_2_16);
  mercury__io__nl_3_p_0(OutputStream_5);
  CallSiteStaticMap_9 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_6, 14))));
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "SECTION MAP FROM CALL SITE DYNAMICS TO STATICS:\n\n");
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&dump_scalar_common_7[6]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (dump__dump_deep_rev_links_4_p_0_2));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (OutputStream_5));
  }
  array_util__array_foldl_from_1_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_20, (MR_ArrayPtr) (CallSiteStaticMap_9), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_5_21);
  mercury__io__nl_3_p_0(OutputStream_5);
  CallSiteCalls_10 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_6, 15))));
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "SECTION MAP FROM CALL SITE STATICS TO CALLS:\n\n");
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&dump_scalar_common_7[7]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (dump__dump_deep_rev_links_4_p_0_3));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (OutputStream_5));
  }
  array_util__array_foldl_from_1_4_p_0((MR_Word) (&dump_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_25, (MR_ArrayPtr) (CallSiteCalls_10), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_8_26);
  mercury__io__nl_3_p_0(OutputStream_5);
}

static void MR_CALL 
dump__dump_deep_cliques_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  dump__dump_clique_maybe_child_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
dump__dump_deep_cliques_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  dump__dump_clique_parent_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
dump__dump_deep_cliques_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  dump__dump_clique_members_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
dump__dump_deep_cliques_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  dump__dump_clique_index_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
dump__dump_deep_cliques_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Deep_6)
{
  MR_ArrayPtr CliqueIndex_8 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_6, 9))));
  MR_ArrayPtr CliqueMembers_9;
  MR_ArrayPtr CliqueParents_10;
  MR_ArrayPtr CliqueMaybeChild_11;
  MR_Word Var_16;
  MR_Word Var_21;
  MR_Word Var_26;
  MR_Word Var_31;
  MR_Box conv0_STATE_VARIABLE_IO_2_17;
  MR_Box conv1_STATE_VARIABLE_IO_5_22;
  MR_Box conv2_STATE_VARIABLE_IO_8_27;
  MR_Box conv3_STATE_VARIABLE_IO_11_32;

  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "SECTION MAP FROM PROC DYNAMIC TO CLIQUE:\n\n");
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&dump_scalar_common_7[1]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (dump__dump_deep_cliques_4_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (OutputStream_5));
  }
  array_util__array_foldl_from_1_4_p_0((MR_Word) (&profile__profile__type_ctor_info_clique_ptr_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_16, (MR_ArrayPtr) (CliqueIndex_8), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_2_17);
  mercury__io__nl_3_p_0(OutputStream_5);
  CliqueMembers_9 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_6, 10))));
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "SECTION MAP FROM CLIQUE TO PROC DYNAMICS:\n\n");
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&dump_scalar_common_7[2]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (dump__dump_deep_cliques_4_p_0_2));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (OutputStream_5));
  }
  array_util__array_foldl_from_1_4_p_0((MR_Word) (&dump_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, (MR_ArrayPtr) (CliqueMembers_9), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_5_22);
  mercury__io__nl_3_p_0(OutputStream_5);
  CliqueParents_10 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_6, 11))));
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "SECTION MAP FROM CLIQUE TO PARENT CSD:\n\n");
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&dump_scalar_common_7[3]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (dump__dump_deep_cliques_4_p_0_3));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (OutputStream_5));
  }
  array_util__array_foldl_from_1_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_26, (MR_ArrayPtr) (CliqueParents_10), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_8_27);
  mercury__io__nl_3_p_0(OutputStream_5);
  CliqueMaybeChild_11 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_6, 12))));
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "SECTION MAP FROM CSD TO MAYBE CHILD CLIQUE:\n\n");
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&dump_scalar_common_7[4]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (dump__dump_deep_cliques_4_p_0_4));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (OutputStream_5));
  }
  array_util__array_foldl_from_1_4_p_0((MR_Word) (&dump_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_31, (MR_ArrayPtr) (CliqueMaybeChild_11), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_11_32);
  mercury__io__nl_3_p_0(OutputStream_5);
}

static void MR_CALL 
dump__dump_initial_deep_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  dump__dump_proc_dynamic_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_ArrayPtr) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
dump__dump_initial_deep_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  dump__dump_call_site_dynamic_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
dump__dump_initial_deep_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_PS_Ptrs_17;
  MR_Word conv0_STATE_VARIABLE_CSS_Ptrs_19;

  dump__get_static_ptrs_from_dynamic_proc_7_p_0(((MR_ArrayPtr) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_PS_Ptrs_17, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_CSS_Ptrs_19);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_PS_Ptrs_17));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_CSS_Ptrs_19));
}

void MR_CALL 
dump__dump_initial_deep_5_p_0(
  MR_Word InitialDeep_6,
  MR_Word DumpOptions_7,
  MR_Word OutputStream_8)
{
  MR_bool succeeded;
  MR_Word Stats_10 = ((MR_Word) ((MR_hl_field(0, InitialDeep_6, 0))));
  MR_Word InitRoot_11 = ((MR_Word) ((MR_hl_field(0, InitialDeep_6, 1))));
  MR_ArrayPtr CSDs_12 = ((MR_ArrayPtr) ((MR_hl_field(0, InitialDeep_6, 2))));
  MR_ArrayPtr PDs_13 = ((MR_ArrayPtr) ((MR_hl_field(0, InitialDeep_6, 3))));
  MR_ArrayPtr CSSs_14 = ((MR_ArrayPtr) ((MR_hl_field(0, InitialDeep_6, 4))));
  MR_ArrayPtr PSs_15 = ((MR_ArrayPtr) ((MR_hl_field(0, InitialDeep_6, 5))));
  MR_Word Restrict_16 = ((MR_Unsigned) ((MR_hl_field(0, DumpOptions_7, 0))) & (MR_Integer) 1);
  MR_Word Restriction_19;
  MR_Word ShowStats_20 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_7, 2))) >> 3)) & (MR_Integer) 1);
  MR_Word Arrays_68;
  MR_Word Arrays_80;
  MR_Word Arrays_92;

  switch (Restrict_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Restriction_19 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 0:
      {
        MR_Word UsedPSs_17;
        MR_Word UsedCSSs_18;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Box conv3_UsedPSs_17;
        MR_Box conv2_UsedCSSs_18;

        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_42, 0) = ((MR_Box) (&dump_scalar_common_6[0]));
          MR_hl_field(0, Var_42, 1) = ((MR_Box) (dump__dump_initial_deep_5_p_0_1));
          MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_42, 3) = ((MR_Box) (PSs_15));
        }
        Var_43 = mercury__set__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0));
        Var_44 = mercury__set__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0));
        array_util__array_foldl2_from_1_6_p_1((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_Word) (&dump_scalar_common_1[0]), (MR_Word) (&dump_scalar_common_1[1]), Var_42, (MR_ArrayPtr) (PDs_13), ((MR_Box) (Var_43)), &conv3_UsedPSs_17, ((MR_Box) (Var_44)), &conv2_UsedCSSs_18);
        UsedPSs_17 = ((MR_Word) (conv3_UsedPSs_17));
        UsedCSSs_18 = ((MR_Word) (conv2_UsedCSSs_18));
        {
          Restriction_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Restriction_19, 0) = ((MR_Box) (UsedPSs_17));
          MR_hl_field(1, Restriction_19, 1) = ((MR_Box) (UsedCSSs_18));
        }
      }
      break;
  }
  switch (ShowStats_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Integer Root_50;
        MR_String Var_60;

        dump__dump_init_profile_stats_4_p_0(OutputStream_8, Stats_10);
        Root_50 = (MR_Integer) (InitRoot_11);
        mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) "INITIAL ROOT:\n");
        mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) "\tinitial root = ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), Root_50, &Var_60);
        mercury__io__write_string_4_p_0(OutputStream_8, Var_60);
        mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) "\n\n");
      }
      break;
  }
  Arrays_68 = ((MR_Word) ((MR_hl_field(0, DumpOptions_7, 1))));
  succeeded = mercury__set__member_2_p_0((MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0), ((MR_Box) ((MR_Integer) 0)), Arrays_68);
  if (succeeded)
  {
    MR_Word Var_77;
    MR_Box conv4_STATE_VARIABLE_IO_3_26;

    mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) "SECTION CALL SITE DYNAMICS:\n\n");
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_77, 0) = ((MR_Box) (&dump_scalar_common_7[0]));
      MR_hl_field(0, Var_77, 1) = ((MR_Box) (dump__dump_initial_deep_5_p_0_2));
      MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_77, 3) = ((MR_Box) (OutputStream_8));
    }
    array_util__array_foldl_from_1_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_77, (MR_ArrayPtr) (CSDs_12), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_3_26);
  }
  Arrays_80 = ((MR_Word) ((MR_hl_field(0, DumpOptions_7, 1))));
  succeeded = mercury__set__member_2_p_0((MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0), ((MR_Box) ((MR_Integer) 2)), Arrays_80);
  if (succeeded)
  {
    MR_Word Var_89;
    MR_Box conv5_STATE_VARIABLE_IO_4_28;

    mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) "SECTION PROC DYNAMICS:\n\n");
    {
      Var_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_89, 0) = ((MR_Box) (&dump_scalar_common_5[2]));
      MR_hl_field(0, Var_89, 1) = ((MR_Box) (dump__dump_initial_deep_5_p_0_3));
      MR_hl_field(0, Var_89, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_89, 3) = ((MR_Box) (OutputStream_8));
      MR_hl_field(0, Var_89, 4) = ((MR_Box) (PSs_15));
    }
    array_util__array_foldl_from_1_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_89, (MR_ArrayPtr) (PDs_13), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_4_28);
  }
  Arrays_92 = ((MR_Word) ((MR_hl_field(0, DumpOptions_7, 1))));
  succeeded = mercury__set__member_2_p_0((MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0), ((MR_Box) ((MR_Integer) 1)), Arrays_92);
  if (succeeded)
    dump__dump_init_call_site_statics_5_p_0(OutputStream_8, Restriction_19, CSSs_14);
  succeeded = dump__should_dump_2_p_0(DumpOptions_7, (MR_Integer) 3);
  if (succeeded)
    dump__dump_init_proc_statics_5_p_0(OutputStream_8, Restriction_19, PSs_15);
}

static MR_bool MR_CALL 
dump__should_dump_2_p_0(
  MR_Word DumpOptions_3,
  MR_Word What_4)
{
  MR_bool succeeded;
  MR_Word Arrays_5 = ((MR_Word) ((MR_hl_field(0, DumpOptions_3, 1))));

  succeeded = mercury__set__member_2_p_0((MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0), ((MR_Box) (What_4)), Arrays_5);
  return succeeded;
}

static void MR_CALL 
dump__dump_init_proc_statics_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  dump__dump_proc_static_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
dump__dump_init_proc_statics_5_p_0(
  MR_Word OutputStream_6,
  MR_Word Restriction_7,
  MR_ArrayPtr ProcStatics_8)
{
  MR_Word Var_14;
  MR_Box conv0_STATE_VARIABLE_IO_2_15;

  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "SECTION PROC STATICS:\n\n");
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&dump_scalar_common_5[1]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (dump__dump_init_proc_statics_5_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (OutputStream_6));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (Restriction_7));
  }
  array_util__array_foldl_from_1_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, (MR_ArrayPtr) (ProcStatics_8), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_2_15);
  mercury__io__nl_3_p_0(OutputStream_6);
}

static void MR_CALL 
dump__dump_init_call_site_statics_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  dump__dump_call_site_static_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
dump__dump_init_call_site_statics_5_p_0(
  MR_Word OutputStream_6,
  MR_Word Restriction_7,
  MR_ArrayPtr CallStatics_8)
{
  MR_Word Var_14;
  MR_Box conv0_STATE_VARIABLE_IO_11;

  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "SECTION CALL SITE STATICS:\n\n");
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&dump_scalar_common_5[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (dump__dump_init_call_site_statics_5_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (OutputStream_6));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (Restriction_7));
  }
  array_util__array_foldl_from_1_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, (MR_ArrayPtr) (CallStatics_8), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
}

static void MR_CALL 
dump__dump_init_profile_stats_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Stats_6)
{
  MR_String ProgramName_8 = ((MR_String) ((MR_hl_field(0, Stats_6, 0))));
  MR_Integer MaxCSD_9 = ((MR_Integer) ((MR_hl_field(0, Stats_6, 1))));
  MR_Integer MaxCSS_10 = ((MR_Integer) ((MR_hl_field(0, Stats_6, 2))));
  MR_Integer MaxPD_11 = ((MR_Integer) ((MR_hl_field(0, Stats_6, 3))));
  MR_Integer MaxPS_12 = ((MR_Integer) ((MR_hl_field(0, Stats_6, 4))));
  MR_Integer TicksPerSec_13 = ((MR_Integer) ((MR_hl_field(0, Stats_6, 5))));
  MR_Integer InstrumentQuanta_14 = ((MR_Integer) ((MR_hl_field(0, Stats_6, 6))));
  MR_Integer UserQuanta_15 = ((MR_Integer) ((MR_hl_field(0, Stats_6, 7))));
  MR_Integer NumCallSeqs_16 = ((MR_Integer) ((MR_hl_field(0, Stats_6, 8))));
  MR_Word DeepFlags_17 = ((MR_Word) ((MR_hl_field(0, Stats_6, 9))));
  MR_Integer WordSize_18;
  MR_Word Canonical_19;
  MR_Word CoverageDataType_21;
  MR_String Var_26;
  MR_String Var_29;
  MR_String Var_90;
  MR_String Var_96;
  MR_String Var_107;
  MR_String Var_118;
  MR_String Var_129;
  MR_String Var_140;
  MR_String Var_151;
  MR_String Var_162;
  MR_String Var_173;
  MR_String Var_184;

  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "SECTION PROFILING STATS:\n\n");
  Var_29 = mercury__string__f_43_43_2_f_0(ProgramName_8, (MR_String) "\n");
  Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "\tprogram_name = ", Var_29);
  mercury__io__write_string_4_p_0(OutputStream_5, Var_26);
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tmax_csd = ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), MaxCSD_9, &Var_96);
  mercury__io__write_string_4_p_0(OutputStream_5, Var_96);
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tmax_css = ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), MaxCSS_10, &Var_107);
  mercury__io__write_string_4_p_0(OutputStream_5, Var_107);
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tmax_pd  = ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), MaxPD_11, &Var_118);
  mercury__io__write_string_4_p_0(OutputStream_5, Var_118);
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tmax_ps  = ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), MaxPS_12, &Var_129);
  mercury__io__write_string_4_p_0(OutputStream_5, Var_129);
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tticks_per_sec = ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), TicksPerSec_13, &Var_140);
  mercury__io__write_string_4_p_0(OutputStream_5, Var_140);
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tinstrument_quanta = ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), InstrumentQuanta_14, &Var_151);
  mercury__io__write_string_4_p_0(OutputStream_5, Var_151);
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tuser_quanta = ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), UserQuanta_15, &Var_162);
  mercury__io__write_string_4_p_0(OutputStream_5, Var_162);
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tnum_callseqs = ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), NumCallSeqs_16, &Var_173);
  mercury__io__write_string_4_p_0(OutputStream_5, Var_173);
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  WordSize_18 = ((MR_Integer) ((MR_hl_field(0, DeepFlags_17, 0))));
  Canonical_19 = ((MR_Unsigned) ((MR_hl_field(0, DeepFlags_17, 1))) & (MR_Integer) 1);
  CoverageDataType_21 = ((MR_Unsigned) ((MR_hl_field(0, DeepFlags_17, 3))) & (MR_Integer) 3);
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tword_size   = ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&dump_scalar_common_3[0]), WordSize_18, &Var_184);
  mercury__io__write_string_4_p_0(OutputStream_5, Var_184);
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tcanonical = ");
  switch (Canonical_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "yes\n");
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "no\n");
      break;
  }
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tcompression = ");
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "none\n");
  Var_90 = mercury__string__string_1_f_0((MR_Word) (&profile__profile__type_ctor_info_coverage_data_type_0), ((MR_Box) (CoverageDataType_21)));
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\tcoverage_data_type = ");
  mercury__io__write_string_4_p_0(OutputStream_5, Var_90);
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n\n");
}

void MR_CALL 
dump__dump_array_options_to_dump_options_2_p_0(
  MR_Word Strings_3,
  MR_Word * DumpOptions_4)
{
  MR_Word DumpArrayOptions_5;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Unsigned packed_word_1;

  dump__det_dump_array_options_2_p_0(Strings_3, &DumpArrayOptions_5);
  Var_6 = dump__default_dump_options_0_f_0();
  Var_7 = ((MR_Unsigned) ((MR_hl_field(0, Var_6, 0))) & (MR_Integer) 1);
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_6, 2)));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *DumpOptions_4 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Var_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (DumpArrayOptions_5));
    MR_hl_field(0, base, 2) = (MR_Box) (packed_word_1);
  }
}

static void MR_CALL 
dump__det_dump_array_options_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Array_4;

  dump__det_string_to_dumpable_array_2_p_0(((MR_String) (wrapper_arg_1)), &conv0_Array_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Array_4));
}

void MR_CALL 
dump__det_dump_array_options_2_p_0(
  MR_Word Strings_3,
  MR_Word * DumpArrayOptions_4)
{
  MR_bool succeeded;
  MR_Word DumpArrayOptionsSpecial_5;

  if ((Strings_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    DumpArrayOptionsSpecial_5 = mercury__set__list_to_set_1_f_0((MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0), (MR_Word) (MR_mkword(1, &dump_scalar_common_1[9])));
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word TypeCtorInfo_12_15;
    MR_String Var_10 = ((MR_String) ((MR_hl_field(1, Strings_3, 0))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, Strings_3, 1))));
    MR_Word Var_14;

    succeeded = (strcmp(Var_10, (MR_String) "all") == 0);
    if (succeeded)
    {
      succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeCtorInfo_12_15 = (MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0);
        Var_14 = (MR_Word) (MR_mkword(1, &dump_scalar_common_1[9]));
        DumpArrayOptionsSpecial_5 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_12_15, Var_14);
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
    *DumpArrayOptions_4 = DumpArrayOptionsSpecial_5;
  else
  {
    MR_Word List_17;

    mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0), (MR_Word) (&dump_scalar_common_2[3]), Strings_3, &List_17);
    mercury__set__list_to_set_2_p_0((MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0), List_17, DumpArrayOptions_4);
  }
}

static MR_bool MR_CALL 
dump__dump_array_options_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
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

MR_bool MR_CALL 
dump__dump_array_options_2_p_0(
  MR_Word Strings_3,
  MR_Word * DumpArrayOptions_4)
{
  MR_bool succeeded;
  MR_Word DumpArrayOptionsSpecial_5;

  if ((Strings_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    DumpArrayOptionsSpecial_5 = mercury__set__list_to_set_1_f_0((MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0), (MR_Word) (MR_mkword(1, &dump_scalar_common_1[9])));
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word TypeCtorInfo_12_15;
    MR_String Var_10 = ((MR_String) ((MR_hl_field(1, Strings_3, 0))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, Strings_3, 1))));
    MR_Word Var_14;

    succeeded = (strcmp(Var_10, (MR_String) "all") == 0);
    if (succeeded)
    {
      succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeCtorInfo_12_15 = (MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0);
        Var_14 = (MR_Word) (MR_mkword(1, &dump_scalar_common_1[9]));
        DumpArrayOptionsSpecial_5 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_12_15, Var_14);
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
    MR_Word List_17;

    succeeded = mercury__list__map_3_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0), (MR_Word) (&dump_scalar_common_2[2]), Strings_3, &List_17);
    if (succeeded)
    {
      mercury__set__list_to_set_2_p_0((MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0), List_17, DumpArrayOptions_4);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
dump__default_dump_options_0_f_0(void)
{
  MR_Word DumpOptions_2;
  MR_Word Var_4;

  Var_4 = mercury__set__list_to_set_1_f_0((MR_Word) (&dump__dump__type_ctor_info_dumpable_array_0), (MR_Word) (MR_mkword(1, &dump_scalar_common_1[9])));
  {
    DumpOptions_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DumpOptions_2, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, DumpOptions_2, 1) = ((MR_Box) (Var_4));
    MR_hl_field(0, DumpOptions_2, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
  }
  return DumpOptions_2;
}

static MR_bool MR_CALL 
dump____Unify____dump_cliques_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = dump____Unify____dump_cliques_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
dump____Compare____dump_cliques_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  dump____Compare____dump_cliques_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
dump____Unify____dump_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = dump____Unify____dump_options_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
dump____Compare____dump_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  dump____Compare____dump_options_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
dump____Unify____dump_prop_measurements_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = dump____Unify____dump_prop_measurements_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
dump____Compare____dump_prop_measurements_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  dump____Compare____dump_prop_measurements_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
dump____Unify____dump_rev_links_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = dump____Unify____dump_rev_links_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
dump____Compare____dump_rev_links_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  dump____Compare____dump_rev_links_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
dump____Unify____dumpable_array_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = dump____Unify____dumpable_array_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
dump____Compare____dumpable_array_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  dump____Compare____dumpable_array_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
dump____Unify____restriction_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = dump____Unify____restriction_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
dump____Compare____restriction_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  dump____Compare____restriction_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
dump____Unify____show_restricted_dump_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = dump____Unify____show_restricted_dump_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
dump____Compare____show_restricted_dump_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  dump____Compare____show_restricted_dump_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
dump____Unify____show_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = dump____Unify____show_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
dump____Compare____show_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  dump____Compare____show_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
