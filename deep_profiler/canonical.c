/*
** Automatically generated from `canonical.m'
** by the Mercury compiler,
** version rotd-2026-03-14
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


// :- module canonical.
// :- implementation.

/*
INIT mercury__canonical__init
ENDINIT
*/

#include "canonical.mih"


#include "array.mih"
#include "array_util.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "callgraph.mih"
#include "char.mih"
#include "construct.mih"
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
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 canonical__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 canonical__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 canonical__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0;

static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_array_slot_0;

static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0;

static const MR_FA_PseudoTypeInfo_Struct1 canonical__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 canonical__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 canonical__array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 canonical__array__ti_array_1profile__type_ctor_info_clique_ptr_0;

static const MR_PseudoTypeInfo canonical__canonical__field_types_merge_info_0_0[2];

static const MR_ConstString canonical__canonical__field_names_merge_info_0_0[2];

static const MR_DuFunctorDesc canonical__canonical__du_functor_desc_merge_info_0_0;

static const MR_DuFunctorDescPtr canonical__canonical__du_stag_ordered_merge_info_0_0[1];

static const MR_DuPtagLayout canonical__canonical__du_ptag_ordered_merge_info_0[1];

static const MR_DuFunctorDescPtr canonical__canonical__du_name_ordered_merge_info_0[1];

static const MR_Integer canonical__canonical__functor_number_map_merge_info_0[1];

static const MR_FA_TypeInfo_Struct1 canonical__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 canonical__array__ti_array_1profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_PseudoTypeInfo canonical__canonical__field_types_redirect_0_0[2];

static const MR_ConstString canonical__canonical__field_names_redirect_0_0[2];

static const MR_DuFunctorDesc canonical__canonical__du_functor_desc_redirect_0_0;

static const MR_DuFunctorDescPtr canonical__canonical__du_stag_ordered_redirect_0_0[1];

static const MR_DuPtagLayout canonical__canonical__du_ptag_ordered_redirect_0[1];

static const MR_DuFunctorDescPtr canonical__canonical__du_name_ordered_redirect_0[1];

static const MR_Integer canonical__canonical__functor_number_map_redirect_0[1];

static MR_bool MR_CALL 
canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__421__1_2_p_0(
  MR_Word InClique_17,
  MR_Word HeadVar__2_43);

static MR_bool MR_CALL 
canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__416__1_2_p_0(
  MR_Word NotInClique_18,
  MR_Word HeadVar__2_38);

static MR_bool MR_CALL 
canonical__IntroducedFrom__pred__merge_proc_dynamics__242__1_2_p_0(
  MR_Word InvalidPDPtrs_17,
  MR_Word HeadVar__2_36);

static void MR_CALL 
canonical__IntroducedFrom__pred__complete_clique__131__1_3_p_0(
  MR_Word HeadVar__1_21,
  MR_Word HeadVar__2_22,
  MR_Word * HeadVar__3_23);

static void MR_CALL 
canonical____Compare____redirect_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
canonical____Unify____redirect_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
canonical____Compare____merge_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
canonical____Unify____merge_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
canonical__subst_in_slot_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
canonical__subst_in_slot_3_p_0(
  MR_Word Redirect_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
canonical__subst_in_proc_dynamic_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
canonical__subst_in_proc_dynamic_3_p_0(
  MR_Word Redirect_4,
  MR_Word STATE_VARIABLE_PD_0_10,
  MR_Word * STATE_VARIABLE_PD_11);

static void MR_CALL 
canonical__subst_in_call_site_dynamic_3_p_0(
  MR_Word Redirect_4,
  MR_Word STATE_VARIABLE_CSD_0_11,
  MR_Word * STATE_VARIABLE_CSD_12);

static void MR_CALL 
canonical__lookup_csd_redirect_3_p_0(
  MR_ArrayPtr CallSiteRedirect0_4,
  MR_Word CSDPtr_5,
  MR_Word * OldRedirect_6);

static void MR_CALL 
canonical__cluster_csds_by_ps_4_p_0(
  MR_Word InitDeep_5,
  MR_Word CSDPtr_6,
  MR_Word STATE_VARIABLE_ProcMap_0_15,
  MR_Word * STATE_VARIABLE_ProcMap_16);

static void MR_CALL 
canonical__cluster_pds_by_ps_4_p_0(
  MR_Word InitDeep_5,
  MR_Word PDPtr_6,
  MR_Word STATE_VARIABLE_ProcMap_0_12,
  MR_Word * STATE_VARIABLE_ProcMap_13);

static MR_bool MR_CALL 
canonical__two_or_more_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
canonical__union_cliques_4_p_0(
  MR_Word MergeInfo_5,
  MR_Word PDPtr_6,
  MR_Word STATE_VARIABLE_CliqueUnion_0_10,
  MR_Word * STATE_VARIABLE_CliqueUnion_11);

static MR_bool MR_CALL 
canonical__merge_multi_slot_cluster_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
canonical__merge_multi_slot_cluster_10_p_0(
  MR_Word MergeInfo_11,
  MR_Word ParentPDPtr_12,
  MR_Word Clique_13,
  MR_Word ClusterCSDPtrs_14,
  MR_Word PrimeCSDPtrs0_15,
  MR_Word * PrimeCSDPtrs_16,
  MR_Word InitDeep0_17,
  MR_Word * InitDeep_18,
  MR_Word Redirect0_19,
  MR_Word * Redirect_20);

static MR_bool MR_CALL 
canonical__callee_in_clique_3_p_0(
  MR_Word InitDeep_4,
  MR_Word Clique_5,
  MR_Word CSDPtr_6);

static void MR_CALL 
canonical__accumulate_csd_owns_3_p_0(
  MR_Word CSD_4,
  MR_Word Own0_5,
  MR_Word * Own_6);

static void MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0(
  MR_Word MergeInfo_8,
  MR_Word Clique_9,
  MR_Word CandidatePDPtrs_10,
  MR_Word STATE_VARIABLE_InitDeep_0_14,
  MR_Word * STATE_VARIABLE_InitDeep_15,
  MR_Word STATE_VARIABLE_Redirect_0_16,
  MR_Word * STATE_VARIABLE_Redirect_17);

static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0(
  MR_Word MergeInfo_9,
  MR_Word PrimeCSDPtr_10,
  MR_Word RestCSDPtrs_11,
  MR_Word * ChosenPDPtr_12,
  MR_Word STATE_VARIABLE_InitDeep_0_22,
  MR_Word * STATE_VARIABLE_InitDeep_23,
  MR_Word STATE_VARIABLE_Redirect_0_24,
  MR_Word * STATE_VARIABLE_Redirect_25);

static void MR_CALL 
canonical__merge_proc_dynamic_slots_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
canonical__merge_proc_dynamic_slots_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
canonical__merge_proc_dynamic_slots_11_p_0(
  MR_Word MergeInfo_12,
  MR_Integer SlotNum_13,
  MR_Word Clique_14,
  MR_Word PrimePDPtr_15,
  MR_ArrayPtr STATE_VARIABLE_PrimeSiteArray_0_28,
  MR_Word RestSiteArrays_17,
  MR_ArrayPtr * STATE_VARIABLE_PrimeSiteArray_29,
  MR_Word STATE_VARIABLE_InitDeep_0_30,
  MR_Word * STATE_VARIABLE_InitDeep_31,
  MR_Word STATE_VARIABLE_Redirect_0_32,
  MR_Word * STATE_VARIABLE_Redirect_33);

static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_5(
  MR_Box closure_arg);

static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_3(
  MR_Box closure_arg);

static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0(
  MR_Word MergeInfo_9,
  MR_Word Clique_10,
  MR_Word PrimeCSDPtr_11,
  MR_Word RestCSDPtrs_12,
  MR_Word InitDeep0_13,
  MR_Word * InitDeep_14,
  MR_Word Redirect0_15,
  MR_Word * Redirect_16);

static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
canonical__merge_call_site_dynamics_9_p_0(
  MR_Word MergeInfo_10,
  MR_Word Clique_11,
  MR_Word ParentPDPtr_12,
  MR_Word CandidateCSDPtrs_13,
  MR_Word * ChosenCSDPtr_14,
  MR_Word STATE_VARIABLE_InitDeep_0_26,
  MR_Word * STATE_VARIABLE_InitDeep_27,
  MR_Word STATE_VARIABLE_Redirect_0_28,
  MR_Word * STATE_VARIABLE_Redirect_29);

static void MR_CALL 
canonical__merge_proc_dynamics_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
canonical__merge_proc_dynamics_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
canonical__merge_proc_dynamics_8_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
canonical__merge_proc_dynamics_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
canonical__merge_proc_dynamics_8_p_0(
  MR_Word MergeInfo_9,
  MR_Word Clique_10,
  MR_Word CandidatePDPtrs_11,
  MR_Word * ChosenPDPtr_12,
  MR_Word STATE_VARIABLE_InitDeep_0_29,
  MR_Word * STATE_VARIABLE_InitDeep_30,
  MR_Word STATE_VARIABLE_Redirect_0_31,
  MR_Word * STATE_VARIABLE_Redirect_32);

static void MR_CALL 
canonical__record_csd_redirect_4_p_0(
  MR_Word RestCSDPtrs_5,
  MR_Word PrimeCSDPtr_6,
  MR_Word STATE_VARIABLE_Redirect_0_11,
  MR_Word * STATE_VARIABLE_Redirect_12);

static void MR_CALL 
canonical__record_csd_redirect_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PrimeCSDPtr_2,
  MR_Word STATE_VARIABLE_Redirect_0_3,
  MR_Word * STATE_VARIABLE_Redirect_4);

static void MR_CALL 
canonical__record_pd_redirect_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PrimePDPtr_2,
  MR_Word STATE_VARIABLE_Redirect_0_3,
  MR_Word * STATE_VARIABLE_Redirect_4);

static void MR_CALL 
canonical__lookup_pd_site_3_p_0(
  MR_Word InitDeep_4,
  MR_Word PDPtr_5,
  MR_ArrayPtr * Sites_6);

static void MR_CALL 
canonical__complete_clique_ps_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
canonical__complete_clique_ps_7_p_0(
  MR_Word InitDeep_8,
  MR_Word Clique_9,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ProcMap_0_19,
  MR_Word * STATE_VARIABLE_ProcMap_20,
  MR_Word STATE_VARIABLE_AddedPD_0_21,
  MR_Word * STATE_VARIABLE_AddedPD_22);

static void MR_CALL 
canonical__complete_clique_slots_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
canonical__complete_clique_slots_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
canonical__complete_clique_slots_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
canonical__complete_clique_slots_9_p_0(
  MR_Integer SlotNum_10,
  MR_Word InitDeep_11,
  MR_Word Clique_12,
  MR_ArrayPtr PSSites_13,
  MR_Word PDSites_14,
  MR_Word STATE_VARIABLE_ProcMap_0_29,
  MR_Word * STATE_VARIABLE_ProcMap_30,
  MR_Word STATE_VARIABLE_AddedPD_0_31,
  MR_Word * STATE_VARIABLE_AddedPD_32);

static void MR_CALL 
canonical__lookup_multi_sites_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer SlotNum_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
canonical__lookup_normal_sites_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer SlotNum_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
canonical__canonicalize_cliques_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
canonical__canonicalize_cliques_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
canonical__compact_pd_redirect_6_p_0(
  MR_Integer CurOld_7,
  MR_Integer CurNew_8,
  MR_Integer MaxOld_9,
  MR_Integer * NumNew_10,
  MR_ArrayPtr STATE_VARIABLE_PDredirect_0_13,
  MR_ArrayPtr * STATE_VARIABLE_PDredirect_14);

static void MR_CALL 
canonical__compact_csd_redirect_6_p_0(
  MR_Integer CurOld_7,
  MR_Integer CurNew_8,
  MR_Integer MaxOld_9,
  MR_Integer * NumNew_10,
  MR_ArrayPtr STATE_VARIABLE_CSDredirect_0_13,
  MR_ArrayPtr * STATE_VARIABLE_CSDredirect_14);

static void MR_CALL 
canonical__merge_cliques_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
canonical__merge_cliques_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
canonical__merge_cliques_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
canonical__merge_cliques_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
canonical__merge_cliques_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word MergeInfo_2,
  MR_Word STATE_VARIABLE_InitDeep_0_3,
  MR_Word * STATE_VARIABLE_InitDeep_4,
  MR_Word STATE_VARIABLE_Redirect_0_5,
  MR_Word * STATE_VARIABLE_Redirect_6);

static void MR_CALL 
canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0(
  MR_Word InitDeep_6,
  MR_Word STATE_VARIABLE_ProcMap_0_13,
  MR_Word * STATE_VARIABLE_ProcMap_14,
  MR_Word * Clique_9);

static MR_bool MR_CALL 
canonical____Unify____merge_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
canonical____Compare____merge_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
canonical____Unify____redirect_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
canonical____Compare____redirect_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box canonical_scalar_common_1[10][2];

static /* final */ const MR_Box canonical_scalar_common_2[10][3];

static /* final */ const MR_Box canonical_scalar_common_3[11][6];

static /* final */ const MR_Box canonical_scalar_common_4[2][10];

static /* final */ const MR_Box canonical_scalar_common_5[3][7];

static /* final */ const MR_Box canonical_scalar_common_6[1][4];

static /* final */ const MR_Box canonical_scalar_common_7[6][5];

static /* final */ const MR_Box canonical_scalar_common_8[1][13];




static /* final */ const MR_Box canonical_scalar_common_1[10][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&canonical_scalar_common_1[0]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0))
  },
};

static /* final */ const MR_Box canonical_scalar_common_2[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&canonical_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&canonical_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&canonical_scalar_common_1[4]))
  },
  /* row   3 */
  {
    ((MR_Box) (&canonical_scalar_common_3[0])),
    ((MR_Box) (canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&canonical_scalar_common_6[0])),
    ((MR_Box) (canonical__merge_cliques_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&canonical_scalar_common_6[0])),
    ((MR_Box) (canonical__merge_cliques_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&canonical_scalar_common_7[3])),
    ((MR_Box) (canonical__merge_proc_dynamics_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&canonical_scalar_common_3[7])),
    ((MR_Box) (canonical__merge_call_site_dynamics_2_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&canonical_scalar_common_7[5])),
    ((MR_Box) (canonical__merge_call_site_dynamics_descendants_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&canonical_scalar_common_7[3])),
    ((MR_Box) (canonical__merge_proc_dynamics_ignore_chosen_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box canonical_scalar_common_3[11][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&canonical__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&canonical__canonical__type_ctor_info_redirect_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&canonical__canonical__type_ctor_info_redirect_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&canonical__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&canonical__canonical__type_ctor_info_redirect_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box canonical_scalar_common_4[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&canonical__canonical__type_ctor_info_merge_info_0)),
    ((MR_Box) (&canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&canonical__canonical__type_ctor_info_redirect_0)),
    ((MR_Box) (&canonical__canonical__type_ctor_info_redirect_0))
  },
};

static /* final */ const MR_Box canonical_scalar_common_5[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&canonical__canonical__type_ctor_info_merge_info_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box canonical_scalar_common_6[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&canonical__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box canonical_scalar_common_7[6][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&canonical__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&canonical__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&canonical__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&canonical__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box canonical_scalar_common_8[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&canonical__canonical__type_ctor_info_merge_info_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&canonical__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&canonical__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&canonical__canonical__type_ctor_info_redirect_0)),
    ((MR_Box) (&canonical__canonical__type_ctor_info_redirect_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 canonical__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0) }
};

static const MR_FA_TypeInfo_Struct1 canonical__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 canonical__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0),
    (MR_PseudoTypeInfo) (&canonical__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0),
    (MR_PseudoTypeInfo) (&canonical__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_array_slot_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 canonical__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0) }
};

static const MR_FA_TypeInfo_Struct1 canonical__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0),
    (MR_PseudoTypeInfo) (&canonical__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0) }
};

static const MR_FA_TypeInfo_Struct1 canonical__array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_TypeInfo) (&canonical__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0) }
};

static const MR_FA_TypeInfo_Struct1 canonical__array__ti_array_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_TypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0) }
};

static const MR_PseudoTypeInfo canonical__canonical__field_types_merge_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&canonical__array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0),
  (MR_PseudoTypeInfo) (&canonical__array__ti_array_1profile__type_ctor_info_clique_ptr_0)
};

static const MR_ConstString canonical__canonical__field_names_merge_info_0_0[2] = {
  (MR_String) "merge_clique_members",
  (MR_String) "merge_clique_index"
};

static const MR_DuFunctorDesc canonical__canonical__du_functor_desc_merge_info_0_0 = {
  (MR_String) "merge_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  canonical__canonical__field_types_merge_info_0_0,
  canonical__canonical__field_names_merge_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr canonical__canonical__du_stag_ordered_merge_info_0_0[1] = { &canonical__canonical__du_functor_desc_merge_info_0_0 };

static const MR_DuPtagLayout canonical__canonical__du_ptag_ordered_merge_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    canonical__canonical__du_stag_ordered_merge_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr canonical__canonical__du_name_ordered_merge_info_0[1] = { &canonical__canonical__du_functor_desc_merge_info_0_0 };

static const MR_Integer canonical__canonical__functor_number_map_merge_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct canonical__canonical__type_ctor_info_merge_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (canonical____Unify____merge_info_0_0_10001)),
  ((MR_Box) (canonical____Compare____merge_info_0_0_10001)),
  (MR_String) "canonical",
  (MR_String) "merge_info",
  { canonical__canonical__du_name_ordered_merge_info_0 },
  { canonical__canonical__du_ptag_ordered_merge_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  canonical__canonical__functor_number_map_merge_info_0,

};

static const MR_FA_TypeInfo_Struct1 canonical__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_TypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0) }
};

static const MR_FA_TypeInfo_Struct1 canonical__array__ti_array_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_TypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0) }
};

static const MR_PseudoTypeInfo canonical__canonical__field_types_redirect_0_0[2] = {
  (MR_PseudoTypeInfo) (&canonical__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0),
  (MR_PseudoTypeInfo) (&canonical__array__ti_array_1profile__type_ctor_info_proc_dynamic_ptr_0)
};

static const MR_ConstString canonical__canonical__field_names_redirect_0_0[2] = {
  (MR_String) "csd_redirect",
  (MR_String) "pd_redirect"
};

static const MR_DuFunctorDesc canonical__canonical__du_functor_desc_redirect_0_0 = {
  (MR_String) "redirect",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  canonical__canonical__field_types_redirect_0_0,
  canonical__canonical__field_names_redirect_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr canonical__canonical__du_stag_ordered_redirect_0_0[1] = { &canonical__canonical__du_functor_desc_redirect_0_0 };

static const MR_DuPtagLayout canonical__canonical__du_ptag_ordered_redirect_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    canonical__canonical__du_stag_ordered_redirect_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr canonical__canonical__du_name_ordered_redirect_0[1] = { &canonical__canonical__du_functor_desc_redirect_0_0 };

static const MR_Integer canonical__canonical__functor_number_map_redirect_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct canonical__canonical__type_ctor_info_redirect_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (canonical____Unify____redirect_0_0_10001)),
  ((MR_Box) (canonical____Compare____redirect_0_0_10001)),
  (MR_String) "canonical",
  (MR_String) "redirect",
  { canonical__canonical__du_name_ordered_redirect_0 },
  { canonical__canonical__du_ptag_ordered_redirect_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  canonical__canonical__functor_number_map_redirect_0,

};

static MR_bool MR_CALL 
canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__421__1_2_p_0(
  MR_Word InClique_17,
  MR_Word HeadVar__2_43)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&canonical_scalar_common_1[4]), ((MR_Box) (InClique_17)), ((MR_Box) (HeadVar__2_43)));
  return succeeded;
}

static MR_bool MR_CALL 
canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__416__1_2_p_0(
  MR_Word NotInClique_18,
  MR_Word HeadVar__2_38)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&canonical_scalar_common_1[4]), ((MR_Box) (NotInClique_18)), ((MR_Box) (HeadVar__2_38)));
  return succeeded;
}

static MR_bool MR_CALL 
canonical__IntroducedFrom__pred__merge_proc_dynamics__242__1_2_p_0(
  MR_Word InvalidPDPtrs_17,
  MR_Word HeadVar__2_36)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&canonical_scalar_common_1[0]), ((MR_Box) (InvalidPDPtrs_17)), ((MR_Box) (HeadVar__2_36)));
  return succeeded;
}

static void MR_CALL 
canonical__IntroducedFrom__pred__complete_clique__131__1_3_p_0(
  MR_Word HeadVar__1_21,
  MR_Word HeadVar__2_22,
  MR_Word * HeadVar__3_23)
{
  mercury__set__insert_list_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), HeadVar__1_21, HeadVar__2_22, HeadVar__3_23);
}

static void MR_CALL 
canonical____Compare____redirect_0_0(
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
    MR_ArrayPtr ArgX1_4 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_ArrayPtr ArgY1_5 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_ArrayPtr ArgX2_7 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_ArrayPtr ArgY2_8 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&canonical_scalar_common_1[7]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&canonical_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
canonical____Unify____redirect_0_0(
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
    MR_Word TypeCtorInfo_10_10;
    MR_ArrayPtr ArgX1_3 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_ArrayPtr ArgY1_4 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_ArrayPtr ArgX2_5 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_ArrayPtr ArgY2_6 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__array____Unify____array_1_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_ArrayPtr) (ArgX1_3), (MR_ArrayPtr) (ArgY1_4));
    if (succeeded)
    {
      TypeCtorInfo_10_10 = (MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0);
      succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_10_10, (MR_ArrayPtr) (ArgX2_5), (MR_ArrayPtr) (ArgY2_6));
    }
  }
  return succeeded;
}

static void MR_CALL 
canonical____Compare____merge_info_0_0(
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
    MR_ArrayPtr ArgX1_4 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_ArrayPtr ArgY1_5 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_ArrayPtr ArgX2_7 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_ArrayPtr ArgY2_8 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&canonical_scalar_common_1[8]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&canonical_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
canonical____Unify____merge_info_0_0(
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
    MR_Word TypeCtorInfo_10_10;
    MR_ArrayPtr ArgX1_3 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_ArrayPtr ArgY1_4 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_ArrayPtr ArgX2_5 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_ArrayPtr ArgY2_6 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__array____Unify____array_1_0((MR_Word) (&canonical_scalar_common_1[0]), (MR_ArrayPtr) (ArgX1_3), (MR_ArrayPtr) (ArgY1_4));
    if (succeeded)
    {
      TypeCtorInfo_10_10 = (MR_Word) (&profile__profile__type_ctor_info_clique_ptr_0);
      succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_10_10, (MR_ArrayPtr) (ArgX2_5), (MR_ArrayPtr) (ArgY2_6));
    }
  }
  return succeeded;
}

static void MR_CALL 
canonical__subst_in_slot_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_OldRedirect_6;

  canonical__lookup_csd_redirect_3_p_0(((MR_ArrayPtr) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_OldRedirect_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_OldRedirect_6));
}

static void MR_CALL 
canonical__subst_in_slot_3_p_0(
  MR_Word Redirect_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_ArrayPtr Var_22 = ((MR_ArrayPtr) ((MR_hl_field(0, Redirect_1, 0))));

  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word IsZeroed_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_ArrayPtr CSDPtrs0_10 = ((MR_ArrayPtr) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_ArrayPtr CSDPtrs_11;
    MR_Word Var_12;
    MR_ArrayPtr Var_13;
    MR_Box conv1_Var_13;
    MR_ArrayPtr conv2_CSDPtrs_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (&canonical_scalar_common_3[10]));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (canonical__subst_in_slot_3_p_0_1));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (Var_22));
    }
    conv1_Var_13 = array_util__u_1_f_0((MR_Word) (&canonical_scalar_common_1[7]), ((MR_Box) (CSDPtrs0_10)));
    Var_13 = ((MR_ArrayPtr) (conv1_Var_13));
    mercury__array__map_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), Var_12, (MR_ArrayPtr) (Var_13), &conv2_CSDPtrs_11);
    CSDPtrs_11 = (MR_ArrayPtr) (conv2_CSDPtrs_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (IsZeroed_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (CSDPtrs_11));
    }
  }
  else
  {
    MR_Word CSDPtr0_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word CSDPtr_6;
    MR_Integer CSDI_23 = (MR_Integer) (CSDPtr0_5);
    MR_Box conv3_CSDPtr_6;

    mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_ArrayPtr) (Var_22), CSDI_23, &conv3_CSDPtr_6);
    CSDPtr_6 = ((MR_Word) (conv3_CSDPtr_6));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (CSDPtr_6));
    }
  }
}

static void MR_CALL 
canonical__subst_in_proc_dynamic_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  canonical__subst_in_slot_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
canonical__subst_in_proc_dynamic_3_p_0(
  MR_Word Redirect_4,
  MR_Word STATE_VARIABLE_PD_0_10,
  MR_Word * STATE_VARIABLE_PD_11)
{
  MR_Word PDPtr_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PD_0_10, 0))));
  MR_ArrayPtr Slots0_7 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_PD_0_10, 1))));
  MR_Word MaybeCPs_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PD_0_10, 2))));
  MR_ArrayPtr Slots_9;
  MR_Word Var_12;
  MR_ArrayPtr Var_13;
  MR_Box conv1_Var_13;
  MR_ArrayPtr conv2_Slots_9;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&canonical_scalar_common_3[9]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (canonical__subst_in_proc_dynamic_3_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (Redirect_4));
  }
  conv1_Var_13 = array_util__u_1_f_0((MR_Word) (&canonical_scalar_common_1[2]), ((MR_Box) (Slots0_7)));
  Var_13 = ((MR_ArrayPtr) (conv1_Var_13));
  mercury__array__map_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), Var_12, (MR_ArrayPtr) (Var_13), &conv2_Slots_9);
  Slots_9 = (MR_ArrayPtr) (conv2_Slots_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PD_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PDPtr_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (Slots_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeCPs_8));
  }
}

static void MR_CALL 
canonical__subst_in_call_site_dynamic_3_p_0(
  MR_Word Redirect_4,
  MR_Word STATE_VARIABLE_CSD_0_11,
  MR_Word * STATE_VARIABLE_CSD_12)
{
  MR_Word Caller0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CSD_0_11, 0))));
  MR_Word Callee0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CSD_0_11, 1))));
  MR_Word Own_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CSD_0_11, 2))));
  MR_Word Caller_9;
  MR_Word Callee_10;
  MR_ArrayPtr Var_13 = ((MR_ArrayPtr) ((MR_hl_field(0, Redirect_4, 1))));
  MR_ArrayPtr Var_14;
  MR_Integer PDI_17 = (MR_Integer) (Caller0_6);
  MR_Integer PDI_19;
  MR_Box conv0_Caller_9;
  MR_Box conv1_Callee_10;

  mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_ArrayPtr) (Var_13), PDI_17, &conv0_Caller_9);
  Caller_9 = ((MR_Word) (conv0_Caller_9));
  Var_14 = ((MR_ArrayPtr) ((MR_hl_field(0, Redirect_4, 1))));
  PDI_19 = (MR_Integer) (Callee0_7);
  mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_ArrayPtr) (Var_14), PDI_19, &conv1_Callee_10);
  Callee_10 = ((MR_Word) (conv1_Callee_10));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CSD_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Caller_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (Callee_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Own_8));
  }
}

static void MR_CALL 
canonical__lookup_csd_redirect_3_p_0(
  MR_ArrayPtr CallSiteRedirect0_4,
  MR_Word CSDPtr_5,
  MR_Word * OldRedirect_6)
{
  MR_Integer CSDI_7 = (MR_Integer) (CSDPtr_5);
  MR_Box conv0_OldRedirect_6;

  mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_ArrayPtr) (CallSiteRedirect0_4), CSDI_7, &conv0_OldRedirect_6);
  *OldRedirect_6 = ((MR_Word) (conv0_OldRedirect_6));
}

static void MR_CALL 
canonical__cluster_csds_by_ps_4_p_0(
  MR_Word InitDeep_5,
  MR_Word CSDPtr_6,
  MR_Word STATE_VARIABLE_ProcMap_0_15,
  MR_Word * STATE_VARIABLE_ProcMap_16)
{
  MR_bool succeeded;
  MR_ArrayPtr CallSiteDynamics_8 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_5, 2))));

  succeeded = profile__valid_call_site_dynamic_ptr_raw_2_p_0(CallSiteDynamics_8, CSDPtr_6);
  if (succeeded)
  {
    MR_Word CSD_9;
    MR_Word PDPtr_10;
    MR_ArrayPtr ProcDynamics_11;
    MR_Word PSPtr_13;
    MR_Word CSDPtrs0_14;
    MR_Box conv0_CSDPtrs0_14;

    profile__lookup_call_site_dynamics_3_p_0(CallSiteDynamics_8, CSDPtr_6, &CSD_9);
    PDPtr_10 = ((MR_Word) ((MR_hl_field(0, CSD_9, 1))));
    ProcDynamics_11 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_5, 3))));
    succeeded = profile__valid_proc_dynamic_ptr_raw_2_p_0(ProcDynamics_11, PDPtr_10);
    if (succeeded)
    {
      MR_Word PD_12;

      profile__lookup_proc_dynamics_3_p_0(ProcDynamics_11, PDPtr_10, &PD_12);
      PSPtr_13 = ((MR_Word) ((MR_hl_field(0, PD_12, 0))));
    }
    else
      PSPtr_13 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&canonical_scalar_common_1[4]), STATE_VARIABLE_ProcMap_0_15, ((MR_Box) (PSPtr_13)), &conv0_CSDPtrs0_14);
    if (succeeded)
    {
      CSDPtrs0_14 = ((MR_Word) (conv0_CSDPtrs0_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_18;

      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = ((MR_Box) (CSDPtr_6));
        MR_hl_field(1, Var_18, 1) = ((MR_Box) (CSDPtrs0_14));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&canonical_scalar_common_1[4]), ((MR_Box) (PSPtr_13)), ((MR_Box) (Var_18)), STATE_VARIABLE_ProcMap_0_15, STATE_VARIABLE_ProcMap_16);
    }
    else
    {
      MR_Word Var_20;

      {
        Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_20, 0) = ((MR_Box) (CSDPtr_6));
        MR_hl_field(1, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&canonical_scalar_common_1[4]), ((MR_Box) (PSPtr_13)), ((MR_Box) (Var_20)), STATE_VARIABLE_ProcMap_0_15, STATE_VARIABLE_ProcMap_16);
    }
  }
  else
    *STATE_VARIABLE_ProcMap_16 = STATE_VARIABLE_ProcMap_0_15;
}

static void MR_CALL 
canonical__cluster_pds_by_ps_4_p_0(
  MR_Word InitDeep_5,
  MR_Word PDPtr_6,
  MR_Word STATE_VARIABLE_ProcMap_0_12,
  MR_Word * STATE_VARIABLE_ProcMap_13)
{
  MR_bool succeeded;
  MR_ArrayPtr ProcDynamics_8 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_5, 3))));

  succeeded = profile__valid_proc_dynamic_ptr_raw_2_p_0(ProcDynamics_8, PDPtr_6);
  if (succeeded)
  {
    MR_Word PD_9;
    MR_Word PSPtr_10;
    MR_Word PDPtrs0_11;
    MR_Box conv0_PDPtrs0_11;

    profile__lookup_proc_dynamics_3_p_0(ProcDynamics_8, PDPtr_6, &PD_9);
    PSPtr_10 = ((MR_Word) ((MR_hl_field(0, PD_9, 0))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&canonical_scalar_common_1[0]), STATE_VARIABLE_ProcMap_0_12, ((MR_Box) (PSPtr_10)), &conv0_PDPtrs0_11);
    if (succeeded)
    {
      PDPtrs0_11 = ((MR_Word) (conv0_PDPtrs0_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_14;

      {
        Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_14, 0) = ((MR_Box) (PDPtr_6));
        MR_hl_field(1, Var_14, 1) = ((MR_Box) (PDPtrs0_11));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&canonical_scalar_common_1[0]), ((MR_Box) (PSPtr_10)), ((MR_Box) (Var_14)), STATE_VARIABLE_ProcMap_0_12, STATE_VARIABLE_ProcMap_13);
    }
    else
    {
      MR_Word Var_16;

      {
        Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_16, 0) = ((MR_Box) (PDPtr_6));
        MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&canonical_scalar_common_1[0]), ((MR_Box) (PSPtr_10)), ((MR_Box) (Var_16)), STATE_VARIABLE_ProcMap_0_12, STATE_VARIABLE_ProcMap_13);
    }
  }
  else
    *STATE_VARIABLE_ProcMap_13 = STATE_VARIABLE_ProcMap_0_12;
}

static MR_bool MR_CALL 
canonical__two_or_more_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Var_5;

  if (succeeded)
  {
    Var_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    succeeded = (Var_5 != (MR_Word) ((MR_Unsigned) 0U));
  }
  return succeeded;
}

static void MR_CALL 
canonical__union_cliques_4_p_0(
  MR_Word MergeInfo_5,
  MR_Word PDPtr_6,
  MR_Word STATE_VARIABLE_CliqueUnion_0_10,
  MR_Word * STATE_VARIABLE_CliqueUnion_11)
{
  MR_bool succeeded;
  MR_Integer Var_12 = (MR_Integer) (PDPtr_6);

  succeeded = (Var_12 == (MR_Integer) 0);
  if (succeeded)
    *STATE_VARIABLE_CliqueUnion_11 = STATE_VARIABLE_CliqueUnion_0_10;
  else
  {
    MR_Word CliquePtr_8;
    MR_Word Members_9;
    MR_ArrayPtr Var_13 = ((MR_ArrayPtr) ((MR_hl_field(0, MergeInfo_5, 1))));
    MR_ArrayPtr Var_14;

    profile__lookup_clique_index_3_p_0(Var_13, PDPtr_6, &CliquePtr_8);
    Var_14 = ((MR_ArrayPtr) ((MR_hl_field(0, MergeInfo_5, 0))));
    profile__lookup_clique_members_3_p_0(Var_14, CliquePtr_8, &Members_9);
    mercury__set__insert_list_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), Members_9, STATE_VARIABLE_CliqueUnion_0_10, STATE_VARIABLE_CliqueUnion_11);
  }
}

static MR_bool MR_CALL 
canonical__merge_multi_slot_cluster_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = profile__valid_call_site_dynamic_ptr_raw_2_p_0(((MR_ArrayPtr) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
canonical__merge_multi_slot_cluster_10_p_0(
  MR_Word MergeInfo_11,
  MR_Word ParentPDPtr_12,
  MR_Word Clique_13,
  MR_Word ClusterCSDPtrs_14,
  MR_Word PrimeCSDPtrs0_15,
  MR_Word * PrimeCSDPtrs_16,
  MR_Word InitDeep0_17,
  MR_Word * InitDeep_18,
  MR_Word Redirect0_19,
  MR_Word * Redirect_20)
{
  MR_bool succeeded;
  MR_Word PrimeCSDPtr_21;
  MR_ArrayPtr CallSiteDynamics0_22 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep0_17, 2))));
  MR_Word ValidCSDPtrs_23;
  MR_Word Var_28;

  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&canonical_scalar_common_7[0]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (canonical__merge_multi_slot_cluster_10_p_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (CallSiteDynamics0_22));
  }
  mercury__list__filter_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), Var_28, ClusterCSDPtrs_14, &ValidCSDPtrs_23);
  if ((ValidCSDPtrs_23 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    PrimeCSDPtr_21 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
    *InitDeep_18 = InitDeep0_17;
    *Redirect_20 = Redirect0_19;
  }
  else
  {
    MR_Word LaterCSDPtrs_24;
    MR_Word FirstCSD0_25;
    MR_Word FirstCSD_26;
    MR_ArrayPtr CallSiteDynamics_27;
    MR_ArrayPtr Var_29;
    MR_Word STATE_VARIABLE_InitDeep_1_30;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Box conv0_Var_29;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_ArrayPtr Var_42;
    MR_ArrayPtr Var_43;
    MR_ArrayPtr Var_44;

    PrimeCSDPtr_21 = ((MR_Word) ((MR_hl_field(1, ValidCSDPtrs_23, 0))));
    LaterCSDPtrs_24 = ((MR_Word) ((MR_hl_field(1, ValidCSDPtrs_23, 1))));
    profile__lookup_call_site_dynamics_3_p_0(CallSiteDynamics0_22, PrimeCSDPtr_21, &FirstCSD0_25);
    Var_37 = ((MR_Word) ((MR_hl_field(0, FirstCSD0_25, 1))));
    Var_38 = ((MR_Word) ((MR_hl_field(0, FirstCSD0_25, 2))));
    {
      FirstCSD_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FirstCSD_26, 0) = ((MR_Box) (ParentPDPtr_12));
      MR_hl_field(0, FirstCSD_26, 1) = ((MR_Box) (Var_37));
      MR_hl_field(0, FirstCSD_26, 2) = ((MR_Box) (Var_38));
    }
    conv0_Var_29 = array_util__u_1_f_0((MR_Word) (&canonical_scalar_common_1[5]), ((MR_Box) (CallSiteDynamics0_22)));
    Var_29 = ((MR_ArrayPtr) (conv0_Var_29));
    profile__update_call_site_dynamics_4_p_0(PrimeCSDPtr_21, FirstCSD_26, Var_29, &CallSiteDynamics_27);
    Var_39 = ((MR_Word) ((MR_hl_field(0, InitDeep0_17, 0))));
    Var_40 = ((MR_Word) ((MR_hl_field(0, InitDeep0_17, 1))));
    Var_42 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep0_17, 3))));
    Var_43 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep0_17, 4))));
    Var_44 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep0_17, 5))));
    {
      STATE_VARIABLE_InitDeep_1_30 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_InitDeep_1_30, 0) = ((MR_Box) (Var_39));
      MR_hl_field(0, STATE_VARIABLE_InitDeep_1_30, 1) = ((MR_Box) (Var_40));
      MR_hl_field(0, STATE_VARIABLE_InitDeep_1_30, 2) = ((MR_Box) (CallSiteDynamics_27));
      MR_hl_field(0, STATE_VARIABLE_InitDeep_1_30, 3) = ((MR_Box) (Var_42));
      MR_hl_field(0, STATE_VARIABLE_InitDeep_1_30, 4) = ((MR_Box) (Var_43));
      MR_hl_field(0, STATE_VARIABLE_InitDeep_1_30, 5) = ((MR_Box) (Var_44));
    }
    if ((LaterCSDPtrs_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *InitDeep_18 = STATE_VARIABLE_InitDeep_1_30;
      *Redirect_20 = Redirect0_19;
    }
    else
      canonical__merge_call_site_dynamics_2_8_p_0(MergeInfo_11, Clique_13, PrimeCSDPtr_21, LaterCSDPtrs_24, STATE_VARIABLE_InitDeep_1_30, InitDeep_18, Redirect0_19, Redirect_20);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *PrimeCSDPtrs_16 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (PrimeCSDPtr_21));
    MR_hl_field(1, base, 1) = ((MR_Box) (PrimeCSDPtrs0_15));
  }
}

static MR_bool MR_CALL 
canonical__callee_in_clique_3_p_0(
  MR_Word InitDeep_4,
  MR_Word Clique_5,
  MR_Word CSDPtr_6)
{
  MR_bool succeeded;
  MR_Word CSD_7;
  MR_Word CalleePDPtr_8;
  MR_ArrayPtr Var_9 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_4, 2))));

  profile__lookup_call_site_dynamics_3_p_0(Var_9, CSDPtr_6, &CSD_7);
  CalleePDPtr_8 = ((MR_Word) ((MR_hl_field(0, CSD_7, 1))));
  succeeded = mercury__set__member_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), ((MR_Box) (CalleePDPtr_8)), Clique_5);
  return succeeded;
}

static void MR_CALL 
canonical__accumulate_csd_owns_3_p_0(
  MR_Word CSD_4,
  MR_Word Own0_5,
  MR_Word * Own_6)
{
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, CSD_4, 2))));

  *Own_6 = measurements__add_own_to_own_2_f_0(Own0_5, Var_7);
}

static void MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv2_HeadVar__2_2;

  profile__extract_pd_sites_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
}

static void MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  profile__lookup_proc_dynamics_3_p_0(((MR_ArrayPtr) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
}

static MR_bool MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = canonical__IntroducedFrom__pred__merge_proc_dynamics__242__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = profile__valid_proc_dynamic_ptr_raw_2_p_0(((MR_ArrayPtr) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0(
  MR_Word MergeInfo_8,
  MR_Word Clique_9,
  MR_Word CandidatePDPtrs_10,
  MR_Word STATE_VARIABLE_InitDeep_0_14,
  MR_Word * STATE_VARIABLE_InitDeep_15,
  MR_Word STATE_VARIABLE_Redirect_0_16,
  MR_Word * STATE_VARIABLE_Redirect_17)
{
  MR_bool succeeded;
  MR_ArrayPtr ProcDynamics0_18 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_14, 3))));
  MR_Word ValidPDPtrs_19;
  MR_Word InvalidPDPtrs_20;
  MR_Word Var_31;
  MR_Word Var_32;

  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&canonical_scalar_common_7[1]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (canonical__merge_proc_dynamics_ignore_chosen_7_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (ProcDynamics0_18));
  }
  mercury__list__filter_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), Var_31, CandidatePDPtrs_10, &ValidPDPtrs_19, &InvalidPDPtrs_20);
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&canonical_scalar_common_7[2]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (canonical__merge_proc_dynamics_ignore_chosen_7_p_0_2));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (InvalidPDPtrs_20));
    MR_hl_field(0, Var_32, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__require_2_p_0(Var_32, (MR_String) "merge_proc_dynamics: invalid pdptrs");
  if ((ValidPDPtrs_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140canonical.merge_proc_dynamics\'/8", (MR_String) "no valid pdptrs");
      return;
    }
  else
  {
    MR_Word _ChosenPDPtr_13 = ((MR_Word) ((MR_hl_field(1, ValidPDPtrs_19, 0))));
    MR_Word RestPDPtrs_21 = ((MR_Word) ((MR_hl_field(1, ValidPDPtrs_19, 1))));
    MR_Word PrimePD0_22;
    MR_Word RestPDs_23;
    MR_Word RestSites_24;
    MR_ArrayPtr PrimeSites0_25;
    MR_Integer MaxSiteNum_26;
    MR_ArrayPtr PrimeSites_27;
    MR_Word PrimePD_28;
    MR_ArrayPtr ProcDynamics1_29;
    MR_ArrayPtr ProcDynamics_30;
    MR_Word STATE_VARIABLE_Redirect_1_35;
    MR_Word Var_36;
    MR_ArrayPtr Var_38;
    MR_Word STATE_VARIABLE_InitDeep_1_39;
    MR_ArrayPtr Var_40;
    MR_Word OldRedirect_70;
    MR_ArrayPtr Var_80 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Redirect_0_16, 1))));
    MR_Integer PDI_87 = (MR_Integer) (_ChosenPDPtr_13);
    MR_Box conv0_OldRedirect_70;
    MR_Integer Var_81;
    MR_Box conv3_Var_38;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Box conv4_Var_40;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_ArrayPtr Var_60;
    MR_ArrayPtr Var_62;
    MR_ArrayPtr Var_63;

    mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_ArrayPtr) (Var_80), PDI_87, &conv0_OldRedirect_70);
    OldRedirect_70 = ((MR_Word) (conv0_OldRedirect_70));
    Var_81 = (MR_Integer) (OldRedirect_70);
    succeeded = (Var_81 == (MR_Integer) 0);
    if (succeeded)
      canonical__record_pd_redirect_2_4_p_0(RestPDPtrs_21, _ChosenPDPtr_13, STATE_VARIABLE_Redirect_0_16, &STATE_VARIABLE_Redirect_1_35);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140canonical.record_pd_redirect\'/4", (MR_String) "prime is redirected");
        return;
      }
    profile__lookup_proc_dynamics_3_p_0(ProcDynamics0_18, _ChosenPDPtr_13, &PrimePD0_22);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (&canonical_scalar_common_3[5]));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (canonical__merge_proc_dynamics_ignore_chosen_7_p_0_3));
      MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_36, 3) = ((MR_Box) (ProcDynamics0_18));
    }
    mercury__list__map_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), Var_36, RestPDPtrs_21, &RestPDs_23);
    mercury__list__map_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_Word) (&canonical_scalar_common_1[2]), (MR_Word) (&canonical_scalar_common_2[9]), RestPDs_23, &RestSites_24);
    PrimeSites0_25 = ((MR_ArrayPtr) ((MR_hl_field(0, PrimePD0_22, 1))));
    mercury__array__max_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_ArrayPtr) (PrimeSites0_25), &MaxSiteNum_26);
    conv3_Var_38 = array_util__u_1_f_0((MR_Word) (&canonical_scalar_common_1[2]), ((MR_Box) (PrimeSites0_25)));
    Var_38 = ((MR_ArrayPtr) (conv3_Var_38));
    canonical__merge_proc_dynamic_slots_11_p_0(MergeInfo_8, MaxSiteNum_26, Clique_9, _ChosenPDPtr_13, Var_38, RestSites_24, &PrimeSites_27, STATE_VARIABLE_InitDeep_0_14, &STATE_VARIABLE_InitDeep_1_39, STATE_VARIABLE_Redirect_1_35, STATE_VARIABLE_Redirect_17);
    Var_50 = ((MR_Word) ((MR_hl_field(0, PrimePD0_22, 0))));
    Var_52 = ((MR_Word) ((MR_hl_field(0, PrimePD0_22, 2))));
    {
      PrimePD_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PrimePD_28, 0) = ((MR_Box) (Var_50));
      MR_hl_field(0, PrimePD_28, 1) = ((MR_Box) (PrimeSites_27));
      MR_hl_field(0, PrimePD_28, 2) = ((MR_Box) (Var_52));
    }
    ProcDynamics1_29 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_1_39, 3))));
    conv4_Var_40 = array_util__u_1_f_0((MR_Word) (&canonical_scalar_common_1[3]), ((MR_Box) (ProcDynamics1_29)));
    Var_40 = ((MR_ArrayPtr) (conv4_Var_40));
    profile__update_proc_dynamics_4_p_0(_ChosenPDPtr_13, PrimePD_28, Var_40, &ProcDynamics_30);
    Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_1_39, 0))));
    Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_1_39, 1))));
    Var_60 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_1_39, 2))));
    Var_62 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_1_39, 4))));
    Var_63 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_1_39, 5))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_InitDeep_15 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_59));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_60));
      MR_hl_field(0, base, 3) = ((MR_Box) (ProcDynamics_30));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_62));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_63));
    }
  }
}

static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_CliqueUnion_11;

  canonical__union_cliques_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_CliqueUnion_11);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_CliqueUnion_11));
}

static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  profile__extract_csd_callee_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
}

static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  profile__lookup_call_site_dynamics_3_p_0(((MR_ArrayPtr) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0(
  MR_Word MergeInfo_9,
  MR_Word PrimeCSDPtr_10,
  MR_Word RestCSDPtrs_11,
  MR_Word * ChosenPDPtr_12,
  MR_Word STATE_VARIABLE_InitDeep_0_22,
  MR_Word * STATE_VARIABLE_InitDeep_23,
  MR_Word STATE_VARIABLE_Redirect_0_24,
  MR_Word * STATE_VARIABLE_Redirect_25)
{
  MR_ArrayPtr CallSiteDynamics_15 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_22, 2))));
  MR_Word PrimeCSD_16;
  MR_Word PrimeCSDCallee_17;
  MR_Word RestCSDs_18;
  MR_Word RestCSDCallees_19;
  MR_Word PDPtrs_20;
  MR_Word CliqueUnion_21;
  MR_Word Var_26;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Box conv3_CliqueUnion_21;

  profile__lookup_call_site_dynamics_3_p_0(CallSiteDynamics_15, PrimeCSDPtr_10, &PrimeCSD_16);
  profile__extract_csd_callee_2_p_0(PrimeCSD_16, &PrimeCSDCallee_17);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&canonical_scalar_common_3[8]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_descendants_8_p_0_1));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (CallSiteDynamics_15));
  }
  mercury__list__map_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), Var_26, RestCSDPtrs_11, &RestCSDs_18);
  mercury__list__map_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_Word) (&canonical_scalar_common_2[8]), RestCSDs_18, &RestCSDCallees_19);
  {
    PDPtrs_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PDPtrs_20, 0) = ((MR_Box) (PrimeCSDCallee_17));
    MR_hl_field(1, PDPtrs_20, 1) = ((MR_Box) (RestCSDCallees_19));
  }
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&canonical_scalar_common_5[2]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_descendants_8_p_0_3));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (MergeInfo_9));
  }
  Var_29 = mercury__set__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0));
  mercury__list__foldl_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_Word) (&canonical_scalar_common_1[1]), Var_28, PDPtrs_20, ((MR_Box) (Var_29)), &conv3_CliqueUnion_21);
  CliqueUnion_21 = ((MR_Word) (conv3_CliqueUnion_21));
  canonical__merge_proc_dynamics_8_p_0(MergeInfo_9, CliqueUnion_21, PDPtrs_20, ChosenPDPtr_12, STATE_VARIABLE_InitDeep_0_22, STATE_VARIABLE_InitDeep_23, STATE_VARIABLE_Redirect_0_24, STATE_VARIABLE_Redirect_25);
}

static void MR_CALL 
canonical__merge_proc_dynamic_slots_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_PrimeCSDPtrs_16;
  MR_Word conv4_InitDeep_18;
  MR_Word conv3_Redirect_20;

  canonical__merge_multi_slot_cluster_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_PrimeCSDPtrs_16, ((MR_Word) (wrapper_arg_4)), &conv4_InitDeep_18, ((MR_Word) (wrapper_arg_6)), &conv3_Redirect_20);
  *wrapper_arg_3 = ((MR_Box) (conv5_PrimeCSDPtrs_16));
  *wrapper_arg_5 = ((MR_Box) (conv4_InitDeep_18));
  *wrapper_arg_7 = ((MR_Box) (conv3_Redirect_20));
}

static void MR_CALL 
canonical__merge_proc_dynamic_slots_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ProcMap_16;

  canonical__cluster_csds_by_ps_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ProcMap_16);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ProcMap_16));
}

static void MR_CALL 
canonical__merge_proc_dynamic_slots_11_p_0(
  MR_Word MergeInfo_12,
  MR_Integer SlotNum_13,
  MR_Word Clique_14,
  MR_Word PrimePDPtr_15,
  MR_ArrayPtr STATE_VARIABLE_PrimeSiteArray_0_28,
  MR_Word RestSiteArrays_17,
  MR_ArrayPtr * STATE_VARIABLE_PrimeSiteArray_29,
  MR_Word STATE_VARIABLE_InitDeep_0_30,
  MR_Word * STATE_VARIABLE_InitDeep_31,
  MR_Word STATE_VARIABLE_Redirect_0_32,
  MR_Word * STATE_VARIABLE_Redirect_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (SlotNum_13 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word PrimeSite0_20;
      MR_Word STATE_VARIABLE_InitDeep_1_35;
      MR_Word STATE_VARIABLE_Redirect_1_36;
      MR_ArrayPtr STATE_VARIABLE_PrimeSiteArray_1_38;
      MR_Integer Var_43;
      MR_Box conv0_PrimeSite0_20;
      MR_Integer next_value_of_SlotNum_13;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_PrimeSiteArray_0_28;
      MR_Word next_value_of_STATE_VARIABLE_InitDeep_0_30;
      MR_Word next_value_of_STATE_VARIABLE_Redirect_0_32;

      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_ArrayPtr) (STATE_VARIABLE_PrimeSiteArray_0_28), SlotNum_13, &conv0_PrimeSite0_20);
      PrimeSite0_20 = ((MR_Word) (conv0_PrimeSite0_20));
      if (((MR_tag((MR_Word) PrimeSite0_20)) == (MR_Integer) 1))
      {
        MR_Word IsZeroed_23 = ((MR_Unsigned) ((MR_hl_field(1, PrimeSite0_20, 0))) & (MR_Integer) 1);
        MR_ArrayPtr PrimeCSDPtrArray0_24 = ((MR_ArrayPtr) ((MR_hl_field(1, PrimeSite0_20, 1))));
        MR_Word PrimeCSDPtrList0_25;
        MR_Word PrimeCSDPtrList_26;
        MR_ArrayPtr PrimeCSDPtrArray_27;
        MR_Word Var_41;
        MR_Word RestCSDPtrLists_50;
        MR_Word AllCSDPtrs_51;
        MR_Word ProcMap0_52;
        MR_Word ProcMap_53;
        MR_Word CSDPtrsClusters_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Box conv2_ProcMap_53;
        MR_Box conv8_PrimeCSDPtrList_26;
        MR_Box conv7_STATE_VARIABLE_InitDeep_1_35;
        MR_Box conv6_STATE_VARIABLE_Redirect_1_36;
        MR_ArrayPtr conv9_PrimeCSDPtrArray_27;
        MR_ArrayPtr conv10_STATE_VARIABLE_PrimeSiteArray_1_38;

        mercury__array__to_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_ArrayPtr) (PrimeCSDPtrArray0_24), &PrimeCSDPtrList0_25);
        canonical__lookup_multi_sites_3_p_0(RestSiteArrays_17, SlotNum_13, &RestCSDPtrLists_50);
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (PrimeCSDPtrList0_25));
          MR_hl_field(1, Var_55, 1) = ((MR_Box) (RestCSDPtrLists_50));
        }
        mercury__list__condense_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), Var_55, &AllCSDPtrs_51);
        mercury__map__init_1_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&canonical_scalar_common_1[4]), &ProcMap0_52);
        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_56, 0) = ((MR_Box) (&canonical_scalar_common_5[1]));
          MR_hl_field(0, Var_56, 1) = ((MR_Box) (canonical__merge_proc_dynamic_slots_11_p_0_1));
          MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_56, 3) = ((MR_Box) (STATE_VARIABLE_InitDeep_0_30));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&canonical_scalar_common_2[2]), Var_56, AllCSDPtrs_51, ((MR_Box) (ProcMap0_52)), &conv2_ProcMap_53);
        ProcMap_53 = ((MR_Word) (conv2_ProcMap_53));
        mercury__map__values_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&canonical_scalar_common_1[4]), ProcMap_53, &CSDPtrsClusters_54);
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_57, 0) = ((MR_Box) (&canonical_scalar_common_8[0]));
          MR_hl_field(0, Var_57, 1) = ((MR_Box) (canonical__merge_proc_dynamic_slots_11_p_0_2));
          MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_57, 3) = ((MR_Box) (MergeInfo_12));
          MR_hl_field(0, Var_57, 4) = ((MR_Box) (PrimePDPtr_15));
          MR_hl_field(0, Var_57, 5) = ((MR_Box) (Clique_14));
        }
        mercury__list__foldl3_8_p_0((MR_Word) (&canonical_scalar_common_1[4]), (MR_Word) (&canonical_scalar_common_1[4]), (MR_Word) (&profile__profile__type_ctor_info_initial_deep_0), (MR_Word) (&canonical__canonical__type_ctor_info_redirect_0), Var_57, CSDPtrsClusters_54, ((MR_Box) ((MR_Unsigned) 0U)), &conv8_PrimeCSDPtrList_26, ((MR_Box) (STATE_VARIABLE_InitDeep_0_30)), &conv7_STATE_VARIABLE_InitDeep_1_35, ((MR_Box) (STATE_VARIABLE_Redirect_0_32)), &conv6_STATE_VARIABLE_Redirect_1_36);
        PrimeCSDPtrList_26 = ((MR_Word) (conv8_PrimeCSDPtrList_26));
        STATE_VARIABLE_InitDeep_1_35 = ((MR_Word) (conv7_STATE_VARIABLE_InitDeep_1_35));
        STATE_VARIABLE_Redirect_1_36 = ((MR_Word) (conv6_STATE_VARIABLE_Redirect_1_36));
        conv9_PrimeCSDPtrArray_27 = mercury__array__array_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), PrimeCSDPtrList_26);
        PrimeCSDPtrArray_27 = (MR_ArrayPtr) (conv9_PrimeCSDPtrArray_27);
        {
          Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_41, 0) = (MR_Box) ((MR_Unsigned) (IsZeroed_23));
          MR_hl_field(1, Var_41, 1) = ((MR_Box) (PrimeCSDPtrArray_27));
        }
        mercury__array__set_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), SlotNum_13, ((MR_Box) (Var_41)), (MR_ArrayPtr) (STATE_VARIABLE_PrimeSiteArray_0_28), &conv10_STATE_VARIABLE_PrimeSiteArray_1_38);
        STATE_VARIABLE_PrimeSiteArray_1_38 = (MR_ArrayPtr) (conv10_STATE_VARIABLE_PrimeSiteArray_1_38);
      }
      else
      {
        MR_Word PrimeCSDPtr0_21 = ((MR_Word) ((MR_hl_field(0, PrimeSite0_20, 0))));
        MR_Word PrimeCSDPtr_22;
        MR_Word Var_37;
        MR_Word RestCSDPtrs_65;
        MR_Word Var_66;
        MR_ArrayPtr conv11_STATE_VARIABLE_PrimeSiteArray_1_38;

        canonical__lookup_normal_sites_3_p_0(RestSiteArrays_17, SlotNum_13, &RestCSDPtrs_65);
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (PrimeCSDPtr0_21));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) (RestCSDPtrs_65));
        }
        canonical__merge_call_site_dynamics_9_p_0(MergeInfo_12, Clique_14, PrimePDPtr_15, Var_66, &PrimeCSDPtr_22, STATE_VARIABLE_InitDeep_0_30, &STATE_VARIABLE_InitDeep_1_35, STATE_VARIABLE_Redirect_0_32, &STATE_VARIABLE_Redirect_1_36);
        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_37, 0) = ((MR_Box) (PrimeCSDPtr_22));
        }
        mercury__array__set_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), SlotNum_13, ((MR_Box) (Var_37)), (MR_ArrayPtr) (STATE_VARIABLE_PrimeSiteArray_0_28), &conv11_STATE_VARIABLE_PrimeSiteArray_1_38);
        STATE_VARIABLE_PrimeSiteArray_1_38 = (MR_ArrayPtr) (conv11_STATE_VARIABLE_PrimeSiteArray_1_38);
      }
      Var_43 = (MR_Integer) ((MR_Unsigned) SlotNum_13 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_SlotNum_13 = Var_43;
      next_value_of_STATE_VARIABLE_PrimeSiteArray_0_28 = STATE_VARIABLE_PrimeSiteArray_1_38;
      next_value_of_STATE_VARIABLE_InitDeep_0_30 = STATE_VARIABLE_InitDeep_1_35;
      next_value_of_STATE_VARIABLE_Redirect_0_32 = STATE_VARIABLE_Redirect_1_36;
      SlotNum_13 = next_value_of_SlotNum_13;
      STATE_VARIABLE_PrimeSiteArray_0_28 = next_value_of_STATE_VARIABLE_PrimeSiteArray_0_28;
      STATE_VARIABLE_InitDeep_0_30 = next_value_of_STATE_VARIABLE_InitDeep_0_30;
      STATE_VARIABLE_Redirect_0_32 = next_value_of_STATE_VARIABLE_Redirect_0_32;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Redirect_33 = STATE_VARIABLE_Redirect_0_32;
      *STATE_VARIABLE_InitDeep_31 = STATE_VARIABLE_InitDeep_0_30;
      *STATE_VARIABLE_PrimeSiteArray_29 = STATE_VARIABLE_PrimeSiteArray_0_28;
    }
    break;
  }
}

static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_3;

  profile__lookup_call_site_dynamics_3_p_0(((MR_ArrayPtr) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_3));
}

static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_5(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__421__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  profile__lookup_call_site_dynamics_3_p_0(((MR_ArrayPtr) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
}

static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__416__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Own_6;

  canonical__accumulate_csd_owns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Own_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_Own_6));
}

static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = canonical__callee_in_clique_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0(
  MR_Word MergeInfo_9,
  MR_Word Clique_10,
  MR_Word PrimeCSDPtr_11,
  MR_Word RestCSDPtrs_12,
  MR_Word InitDeep0_13,
  MR_Word * InitDeep_14,
  MR_Word Redirect0_15,
  MR_Word * Redirect_16)
{
  MR_bool succeeded;
  MR_Word InClique_17;
  MR_Word NotInClique_18;
  MR_Word Redirect1_20;
  MR_Word Var_35;
  MR_ArrayPtr Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_ArrayPtr Var_97;
  MR_ArrayPtr Var_98;
  MR_ArrayPtr Var_99;
  MR_Word CSD_92;
  MR_Word CalleePDPtr_93;

  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&canonical_scalar_common_3[6]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_2_8_p_0_1));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (InitDeep0_13));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) (Clique_10));
  }
  mercury__list__filter_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), Var_35, RestCSDPtrs_12, &InClique_17, &NotInClique_18);
  canonical__record_csd_redirect_4_p_0(RestCSDPtrs_12, PrimeCSDPtr_11, Redirect0_15, &Redirect1_20);
  Var_95 = ((MR_Word) ((MR_hl_field(0, InitDeep0_13, 0))));
  Var_96 = ((MR_Word) ((MR_hl_field(0, InitDeep0_13, 1))));
  Var_94 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep0_13, 2))));
  Var_97 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep0_13, 3))));
  Var_98 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep0_13, 4))));
  Var_99 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep0_13, 5))));
  profile__lookup_call_site_dynamics_3_p_0(Var_94, PrimeCSDPtr_11, &CSD_92);
  CalleePDPtr_93 = ((MR_Word) ((MR_hl_field(0, CSD_92, 1))));
  succeeded = mercury__set__member_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), ((MR_Box) (CalleePDPtr_93)), Clique_10);
  if (succeeded)
  {
    MR_Word PrimeCSD0_22;
    MR_Word RestCSDs_23;
    MR_Word PrimeOwn0_24;
    MR_Word PrimeOwn1_25;
    MR_Word PrimeCSD1_26;
    MR_ArrayPtr CallSiteDynamics1_27;
    MR_Word Var_36;
    MR_Word Var_46;
    MR_ArrayPtr Var_48;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Box conv2_PrimeOwn1_25;
    MR_Box conv3_Var_48;

    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (&canonical_scalar_common_7[4]));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_2_8_p_0_3));
      MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_36, 3) = ((MR_Box) (NotInClique_18));
      MR_hl_field(0, Var_36, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__require_2_p_0(Var_36, (MR_String) "merge_proc_dynamic_normal_slot: prime in clique, others not in clique");
    profile__lookup_call_site_dynamics_3_p_0(Var_94, PrimeCSDPtr_11, &PrimeCSD0_22);
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_46, 0) = ((MR_Box) (&canonical_scalar_common_3[8]));
      MR_hl_field(0, Var_46, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_2_8_p_0_4));
      MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_46, 3) = ((MR_Box) (Var_94));
    }
    mercury__list__map_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), Var_46, RestCSDPtrs_12, &RestCSDs_23);
    Var_55 = ((MR_Word) ((MR_hl_field(0, PrimeCSD0_22, 0))));
    Var_56 = ((MR_Word) ((MR_hl_field(0, PrimeCSD0_22, 1))));
    PrimeOwn0_24 = ((MR_Word) ((MR_hl_field(0, PrimeCSD0_22, 2))));
    mercury__list__foldl_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_Word) (&canonical_scalar_common_2[7]), RestCSDs_23, ((MR_Box) (PrimeOwn0_24)), &conv2_PrimeOwn1_25);
    PrimeOwn1_25 = ((MR_Word) (conv2_PrimeOwn1_25));
    {
      PrimeCSD1_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PrimeCSD1_26, 0) = ((MR_Box) (Var_55));
      MR_hl_field(0, PrimeCSD1_26, 1) = ((MR_Box) (Var_56));
      MR_hl_field(0, PrimeCSD1_26, 2) = ((MR_Box) (PrimeOwn1_25));
    }
    conv3_Var_48 = array_util__u_1_f_0((MR_Word) (&canonical_scalar_common_1[5]), ((MR_Box) (Var_94)));
    Var_48 = ((MR_ArrayPtr) (conv3_Var_48));
    profile__update_call_site_dynamics_4_p_0(PrimeCSDPtr_11, PrimeCSD1_26, Var_48, &CallSiteDynamics1_27);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *InitDeep_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_95));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_96));
      MR_hl_field(0, base, 2) = ((MR_Box) (CallSiteDynamics1_27));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_97));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_98));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_99));
    }
    *Redirect_16 = Redirect1_20;
  }
  else
  {
    MR_Word ChosenPDPtr_29;
    MR_Word InitDeep2_30;
    MR_ArrayPtr CallSiteDynamics2_31;
    MR_Word PrimeCSD2_32;
    MR_Word PrimeCSD_33;
    MR_ArrayPtr CallSiteDynamics_34;
    MR_Word Var_41;
    MR_ArrayPtr Var_49;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_ArrayPtr Var_68;
    MR_ArrayPtr Var_69;
    MR_ArrayPtr Var_70;
    MR_ArrayPtr CallSiteDynamics0_132;
    MR_Word PrimeCSD0_133;
    MR_Word RestCSDs_134;
    MR_Word PrimeOwn0_135;
    MR_Word PrimeOwn1_136;
    MR_Word PrimeCSD1_137;
    MR_ArrayPtr CallSiteDynamics1_138;
    MR_Word InitDeep1_139;
    MR_Word Var_140;
    MR_ArrayPtr Var_141;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_ArrayPtr Var_144;
    MR_ArrayPtr Var_145;
    MR_ArrayPtr Var_146;
    MR_Word Var_147;
    MR_Word Var_148;
    MR_Box conv5_PrimeOwn1_136;
    MR_Box conv6_Var_141;
    MR_Word Var_71;
    MR_Word Var_73;
    MR_Box conv7_Var_49;

    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (&canonical_scalar_common_7[4]));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_2_8_p_0_5));
      MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_41, 3) = ((MR_Box) (InClique_17));
      MR_hl_field(0, Var_41, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__require_2_p_0(Var_41, (MR_String) "merge_proc_dynamic_normal_slot: prime not in clique, others in clique");
    Var_142 = ((MR_Word) ((MR_hl_field(0, InitDeep0_13, 0))));
    Var_143 = ((MR_Word) ((MR_hl_field(0, InitDeep0_13, 1))));
    CallSiteDynamics0_132 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep0_13, 2))));
    Var_144 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep0_13, 3))));
    Var_145 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep0_13, 4))));
    Var_146 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep0_13, 5))));
    profile__lookup_call_site_dynamics_3_p_0(CallSiteDynamics0_132, PrimeCSDPtr_11, &PrimeCSD0_133);
    {
      Var_140 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_140, 0) = ((MR_Box) (&canonical_scalar_common_3[8]));
      MR_hl_field(0, Var_140, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_2_8_p_0_6));
      MR_hl_field(0, Var_140, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_140, 3) = ((MR_Box) (CallSiteDynamics0_132));
    }
    mercury__list__map_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), Var_140, RestCSDPtrs_12, &RestCSDs_134);
    Var_147 = ((MR_Word) ((MR_hl_field(0, PrimeCSD0_133, 0))));
    Var_148 = ((MR_Word) ((MR_hl_field(0, PrimeCSD0_133, 1))));
    PrimeOwn0_135 = ((MR_Word) ((MR_hl_field(0, PrimeCSD0_133, 2))));
    mercury__list__foldl_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_Word) (&canonical_scalar_common_2[7]), RestCSDs_134, ((MR_Box) (PrimeOwn0_135)), &conv5_PrimeOwn1_136);
    PrimeOwn1_136 = ((MR_Word) (conv5_PrimeOwn1_136));
    {
      PrimeCSD1_137 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PrimeCSD1_137, 0) = ((MR_Box) (Var_147));
      MR_hl_field(0, PrimeCSD1_137, 1) = ((MR_Box) (Var_148));
      MR_hl_field(0, PrimeCSD1_137, 2) = ((MR_Box) (PrimeOwn1_136));
    }
    conv6_Var_141 = array_util__u_1_f_0((MR_Word) (&canonical_scalar_common_1[5]), ((MR_Box) (CallSiteDynamics0_132)));
    Var_141 = ((MR_ArrayPtr) (conv6_Var_141));
    profile__update_call_site_dynamics_4_p_0(PrimeCSDPtr_11, PrimeCSD1_137, Var_141, &CallSiteDynamics1_138);
    {
      InitDeep1_139 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InitDeep1_139, 0) = ((MR_Box) (Var_142));
      MR_hl_field(0, InitDeep1_139, 1) = ((MR_Box) (Var_143));
      MR_hl_field(0, InitDeep1_139, 2) = ((MR_Box) (CallSiteDynamics1_138));
      MR_hl_field(0, InitDeep1_139, 3) = ((MR_Box) (Var_144));
      MR_hl_field(0, InitDeep1_139, 4) = ((MR_Box) (Var_145));
      MR_hl_field(0, InitDeep1_139, 5) = ((MR_Box) (Var_146));
    }
    canonical__merge_call_site_dynamics_descendants_8_p_0(MergeInfo_9, PrimeCSDPtr_11, RestCSDPtrs_12, &ChosenPDPtr_29, InitDeep1_139, &InitDeep2_30, Redirect1_20, Redirect_16);
    Var_66 = ((MR_Word) ((MR_hl_field(0, InitDeep2_30, 0))));
    Var_67 = ((MR_Word) ((MR_hl_field(0, InitDeep2_30, 1))));
    CallSiteDynamics2_31 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep2_30, 2))));
    Var_68 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep2_30, 3))));
    Var_69 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep2_30, 4))));
    Var_70 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep2_30, 5))));
    profile__lookup_call_site_dynamics_3_p_0(CallSiteDynamics2_31, PrimeCSDPtr_11, &PrimeCSD2_32);
    Var_71 = ((MR_Word) ((MR_hl_field(0, PrimeCSD2_32, 0))));
    Var_73 = ((MR_Word) ((MR_hl_field(0, PrimeCSD2_32, 2))));
    {
      PrimeCSD_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PrimeCSD_33, 0) = ((MR_Box) (Var_71));
      MR_hl_field(0, PrimeCSD_33, 1) = ((MR_Box) (ChosenPDPtr_29));
      MR_hl_field(0, PrimeCSD_33, 2) = ((MR_Box) (Var_73));
    }
    conv7_Var_49 = array_util__u_1_f_0((MR_Word) (&canonical_scalar_common_1[5]), ((MR_Box) (CallSiteDynamics2_31)));
    Var_49 = ((MR_ArrayPtr) (conv7_Var_49));
    profile__update_call_site_dynamics_4_p_0(PrimeCSDPtr_11, PrimeCSD_33, Var_49, &CallSiteDynamics_34);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *InitDeep_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_66));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_67));
      MR_hl_field(0, base, 2) = ((MR_Box) (CallSiteDynamics_34));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_68));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_69));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_70));
    }
  }
}

static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = profile__valid_call_site_dynamic_ptr_raw_2_p_0(((MR_ArrayPtr) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
canonical__merge_call_site_dynamics_9_p_0(
  MR_Word MergeInfo_10,
  MR_Word Clique_11,
  MR_Word ParentPDPtr_12,
  MR_Word CandidateCSDPtrs_13,
  MR_Word * ChosenCSDPtr_14,
  MR_Word STATE_VARIABLE_InitDeep_0_26,
  MR_Word * STATE_VARIABLE_InitDeep_27,
  MR_Word STATE_VARIABLE_Redirect_0_28,
  MR_Word * STATE_VARIABLE_Redirect_29)
{
  MR_bool succeeded;
  MR_ArrayPtr CallSiteDynamics0_17 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_26, 2))));
  MR_Word ValidCSDPtrs_18;
  MR_Word Var_30;

  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&canonical_scalar_common_7[0]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_9_p_0_1));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (CallSiteDynamics0_17));
  }
  mercury__list__filter_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), Var_30, CandidateCSDPtrs_13, &ValidCSDPtrs_18);
  if ((ValidCSDPtrs_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *ChosenCSDPtr_14 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
    *STATE_VARIABLE_InitDeep_27 = STATE_VARIABLE_InitDeep_0_26;
    *STATE_VARIABLE_Redirect_29 = STATE_VARIABLE_Redirect_0_28;
  }
  else
  {
    MR_Word LaterCSDPtrs_20;
    MR_Word FirstCSD0_21;
    MR_Word FirstCSD_22;
    MR_ArrayPtr CallSiteDynamics_23;
    MR_ArrayPtr Var_32;
    MR_Word STATE_VARIABLE_InitDeep_1_33;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Box conv0_Var_32;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_ArrayPtr Var_45;
    MR_ArrayPtr Var_46;
    MR_ArrayPtr Var_47;

    *ChosenCSDPtr_14 = ((MR_Word) ((MR_hl_field(1, ValidCSDPtrs_18, 0))));
    LaterCSDPtrs_20 = ((MR_Word) ((MR_hl_field(1, ValidCSDPtrs_18, 1))));
    profile__lookup_call_site_dynamics_3_p_0(CallSiteDynamics0_17, *ChosenCSDPtr_14, &FirstCSD0_21);
    Var_40 = ((MR_Word) ((MR_hl_field(0, FirstCSD0_21, 1))));
    Var_41 = ((MR_Word) ((MR_hl_field(0, FirstCSD0_21, 2))));
    {
      FirstCSD_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FirstCSD_22, 0) = ((MR_Box) (ParentPDPtr_12));
      MR_hl_field(0, FirstCSD_22, 1) = ((MR_Box) (Var_40));
      MR_hl_field(0, FirstCSD_22, 2) = ((MR_Box) (Var_41));
    }
    conv0_Var_32 = array_util__u_1_f_0((MR_Word) (&canonical_scalar_common_1[5]), ((MR_Box) (CallSiteDynamics0_17)));
    Var_32 = ((MR_ArrayPtr) (conv0_Var_32));
    profile__update_call_site_dynamics_4_p_0(*ChosenCSDPtr_14, FirstCSD_22, Var_32, &CallSiteDynamics_23);
    Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_26, 0))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_26, 1))));
    Var_45 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_26, 3))));
    Var_46 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_26, 4))));
    Var_47 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_26, 5))));
    {
      STATE_VARIABLE_InitDeep_1_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_InitDeep_1_33, 0) = ((MR_Box) (Var_42));
      MR_hl_field(0, STATE_VARIABLE_InitDeep_1_33, 1) = ((MR_Box) (Var_43));
      MR_hl_field(0, STATE_VARIABLE_InitDeep_1_33, 2) = ((MR_Box) (CallSiteDynamics_23));
      MR_hl_field(0, STATE_VARIABLE_InitDeep_1_33, 3) = ((MR_Box) (Var_45));
      MR_hl_field(0, STATE_VARIABLE_InitDeep_1_33, 4) = ((MR_Box) (Var_46));
      MR_hl_field(0, STATE_VARIABLE_InitDeep_1_33, 5) = ((MR_Box) (Var_47));
    }
    if ((LaterCSDPtrs_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_InitDeep_27 = STATE_VARIABLE_InitDeep_1_33;
      *STATE_VARIABLE_Redirect_29 = STATE_VARIABLE_Redirect_0_28;
    }
    else
      canonical__merge_call_site_dynamics_2_8_p_0(MergeInfo_10, Clique_11, *ChosenCSDPtr_14, LaterCSDPtrs_20, STATE_VARIABLE_InitDeep_1_33, STATE_VARIABLE_InitDeep_27, STATE_VARIABLE_Redirect_0_28, STATE_VARIABLE_Redirect_29);
  }
}

static void MR_CALL 
canonical__merge_proc_dynamics_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv2_HeadVar__2_2;

  profile__extract_pd_sites_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
}

static void MR_CALL 
canonical__merge_proc_dynamics_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  profile__lookup_proc_dynamics_3_p_0(((MR_ArrayPtr) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
}

static MR_bool MR_CALL 
canonical__merge_proc_dynamics_8_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = canonical__IntroducedFrom__pred__merge_proc_dynamics__242__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
canonical__merge_proc_dynamics_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = profile__valid_proc_dynamic_ptr_raw_2_p_0(((MR_ArrayPtr) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
canonical__merge_proc_dynamics_8_p_0(
  MR_Word MergeInfo_9,
  MR_Word Clique_10,
  MR_Word CandidatePDPtrs_11,
  MR_Word * ChosenPDPtr_12,
  MR_Word STATE_VARIABLE_InitDeep_0_29,
  MR_Word * STATE_VARIABLE_InitDeep_30,
  MR_Word STATE_VARIABLE_Redirect_0_31,
  MR_Word * STATE_VARIABLE_Redirect_32)
{
  MR_bool succeeded;
  MR_ArrayPtr ProcDynamics0_15 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_29, 3))));
  MR_Word ValidPDPtrs_16;
  MR_Word InvalidPDPtrs_17;
  MR_Word Var_33;
  MR_Word Var_34;

  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&canonical_scalar_common_7[1]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (canonical__merge_proc_dynamics_8_p_0_1));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (ProcDynamics0_15));
  }
  mercury__list__filter_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), Var_33, CandidatePDPtrs_11, &ValidPDPtrs_16, &InvalidPDPtrs_17);
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (&canonical_scalar_common_7[2]));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (canonical__merge_proc_dynamics_8_p_0_2));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_34, 3) = ((MR_Box) (InvalidPDPtrs_17));
    MR_hl_field(0, Var_34, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__require_2_p_0(Var_34, (MR_String) "merge_proc_dynamics: invalid pdptrs");
  if ((ValidPDPtrs_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140canonical.merge_proc_dynamics\'/8", (MR_String) "no valid pdptrs");
      return;
    }
  else
  {
    MR_Word RestPDPtrs_19;
    MR_Word PrimePD0_20;
    MR_Word RestPDs_21;
    MR_Word RestSites_22;
    MR_ArrayPtr PrimeSites0_23;
    MR_Integer MaxSiteNum_24;
    MR_ArrayPtr PrimeSites_25;
    MR_Word PrimePD_26;
    MR_ArrayPtr ProcDynamics1_27;
    MR_ArrayPtr ProcDynamics_28;
    MR_Word STATE_VARIABLE_Redirect_1_37;
    MR_Word Var_38;
    MR_ArrayPtr Var_40;
    MR_Word STATE_VARIABLE_InitDeep_1_41;
    MR_ArrayPtr Var_43;
    MR_Word OldRedirect_80;
    MR_ArrayPtr Var_90;
    MR_Integer PDI_97;
    MR_Box conv0_OldRedirect_80;
    MR_Integer Var_91;
    MR_Box conv3_Var_40;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Box conv4_Var_43;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_ArrayPtr Var_64;
    MR_ArrayPtr Var_66;
    MR_ArrayPtr Var_67;

    *ChosenPDPtr_12 = ((MR_Word) ((MR_hl_field(1, ValidPDPtrs_16, 0))));
    RestPDPtrs_19 = ((MR_Word) ((MR_hl_field(1, ValidPDPtrs_16, 1))));
    Var_90 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Redirect_0_31, 1))));
    PDI_97 = (MR_Integer) (*ChosenPDPtr_12);
    mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_ArrayPtr) (Var_90), PDI_97, &conv0_OldRedirect_80);
    OldRedirect_80 = ((MR_Word) (conv0_OldRedirect_80));
    Var_91 = (MR_Integer) (OldRedirect_80);
    succeeded = (Var_91 == (MR_Integer) 0);
    if (succeeded)
      canonical__record_pd_redirect_2_4_p_0(RestPDPtrs_19, *ChosenPDPtr_12, STATE_VARIABLE_Redirect_0_31, &STATE_VARIABLE_Redirect_1_37);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140canonical.record_pd_redirect\'/4", (MR_String) "prime is redirected");
        return;
      }
    profile__lookup_proc_dynamics_3_p_0(ProcDynamics0_15, *ChosenPDPtr_12, &PrimePD0_20);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_38, 0) = ((MR_Box) (&canonical_scalar_common_3[5]));
      MR_hl_field(0, Var_38, 1) = ((MR_Box) (canonical__merge_proc_dynamics_8_p_0_3));
      MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_38, 3) = ((MR_Box) (ProcDynamics0_15));
    }
    mercury__list__map_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), Var_38, RestPDPtrs_19, &RestPDs_21);
    mercury__list__map_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_Word) (&canonical_scalar_common_1[2]), (MR_Word) (&canonical_scalar_common_2[6]), RestPDs_21, &RestSites_22);
    PrimeSites0_23 = ((MR_ArrayPtr) ((MR_hl_field(0, PrimePD0_20, 1))));
    mercury__array__max_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_ArrayPtr) (PrimeSites0_23), &MaxSiteNum_24);
    conv3_Var_40 = array_util__u_1_f_0((MR_Word) (&canonical_scalar_common_1[2]), ((MR_Box) (PrimeSites0_23)));
    Var_40 = ((MR_ArrayPtr) (conv3_Var_40));
    canonical__merge_proc_dynamic_slots_11_p_0(MergeInfo_9, MaxSiteNum_24, Clique_10, *ChosenPDPtr_12, Var_40, RestSites_22, &PrimeSites_25, STATE_VARIABLE_InitDeep_0_29, &STATE_VARIABLE_InitDeep_1_41, STATE_VARIABLE_Redirect_1_37, STATE_VARIABLE_Redirect_32);
    Var_54 = ((MR_Word) ((MR_hl_field(0, PrimePD0_20, 0))));
    Var_56 = ((MR_Word) ((MR_hl_field(0, PrimePD0_20, 2))));
    {
      PrimePD_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PrimePD_26, 0) = ((MR_Box) (Var_54));
      MR_hl_field(0, PrimePD_26, 1) = ((MR_Box) (PrimeSites_25));
      MR_hl_field(0, PrimePD_26, 2) = ((MR_Box) (Var_56));
    }
    ProcDynamics1_27 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_1_41, 3))));
    conv4_Var_43 = array_util__u_1_f_0((MR_Word) (&canonical_scalar_common_1[3]), ((MR_Box) (ProcDynamics1_27)));
    Var_43 = ((MR_ArrayPtr) (conv4_Var_43));
    profile__update_proc_dynamics_4_p_0(*ChosenPDPtr_12, PrimePD_26, Var_43, &ProcDynamics_28);
    Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_1_41, 0))));
    Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_1_41, 1))));
    Var_64 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_1_41, 2))));
    Var_66 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_1_41, 4))));
    Var_67 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_1_41, 5))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_InitDeep_30 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_62));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_63));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_64));
      MR_hl_field(0, base, 3) = ((MR_Box) (ProcDynamics_28));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_66));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_67));
    }
  }
}

static void MR_CALL 
canonical__record_csd_redirect_4_p_0(
  MR_Word RestCSDPtrs_5,
  MR_Word PrimeCSDPtr_6,
  MR_Word STATE_VARIABLE_Redirect_0_11,
  MR_Word * STATE_VARIABLE_Redirect_12)
{
  MR_bool succeeded;
  MR_Word OldRedirect_10;
  MR_ArrayPtr Var_22 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Redirect_0_11, 0))));
  MR_Integer CSDI_30 = (MR_Integer) (PrimeCSDPtr_6);
  MR_Box conv0_OldRedirect_10;
  MR_Integer Var_23;

  mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_ArrayPtr) (Var_22), CSDI_30, &conv0_OldRedirect_10);
  OldRedirect_10 = ((MR_Word) (conv0_OldRedirect_10));
  Var_23 = (MR_Integer) (OldRedirect_10);
  succeeded = (Var_23 == (MR_Integer) 0);
  if (succeeded)
    canonical__record_csd_redirect_2_4_p_0(RestCSDPtrs_5, PrimeCSDPtr_6, STATE_VARIABLE_Redirect_0_11, STATE_VARIABLE_Redirect_12);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140canonical.record_csd_redirect\'/4", (MR_String) "prime is redirected");
      return;
    }
}

static void MR_CALL 
canonical__record_csd_redirect_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PrimeCSDPtr_2,
  MR_Word STATE_VARIABLE_Redirect_0_3,
  MR_Word * STATE_VARIABLE_Redirect_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Redirect_4 = STATE_VARIABLE_Redirect_0_3;
    else
    {
      MR_Word RestCSDPtr_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word RestCSDPtrs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_ArrayPtr CallSiteRedirect0_13 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Redirect_0_3, 0))));
      MR_Word OldRedirect_14;
      MR_ArrayPtr CallSiteRedirect_15;
      MR_Word STATE_VARIABLE_Redirect_1_22;
      MR_Integer CSDI_27 = (MR_Integer) (RestCSDPtr_9);
      MR_Box conv0_OldRedirect_14;
      MR_Integer Var_18;
      MR_ArrayPtr Var_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Redirect_0_3;

      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_ArrayPtr) (CallSiteRedirect0_13), CSDI_27, &conv0_OldRedirect_14);
      OldRedirect_14 = ((MR_Word) (conv0_OldRedirect_14));
      Var_18 = (MR_Integer) (OldRedirect_14);
      succeeded = (Var_18 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_ArrayPtr Var_19;
        MR_Integer CSDI_29;
        MR_Box conv1_Var_19;
        MR_ArrayPtr conv2_CallSiteRedirect_15;

        conv1_Var_19 = array_util__u_1_f_0((MR_Word) (&canonical_scalar_common_1[7]), ((MR_Box) (CallSiteRedirect0_13)));
        Var_19 = ((MR_ArrayPtr) (conv1_Var_19));
        CSDI_29 = (MR_Integer) (RestCSDPtr_9);
        mercury__array__set_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), CSDI_29, ((MR_Box) (PrimeCSDPtr_2)), (MR_ArrayPtr) (Var_19), &conv2_CallSiteRedirect_15);
        CallSiteRedirect_15 = (MR_ArrayPtr) (conv2_CallSiteRedirect_15);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140canonical.record_csd_redirect_2\'/4", (MR_String) "already redirected");
          return;
        }
      Var_25 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Redirect_0_3, 1))));
      {
        STATE_VARIABLE_Redirect_1_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Redirect_1_22, 0) = ((MR_Box) (CallSiteRedirect_15));
        MR_hl_field(0, STATE_VARIABLE_Redirect_1_22, 1) = ((MR_Box) (Var_25));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RestCSDPtrs_10;
      next_value_of_STATE_VARIABLE_Redirect_0_3 = STATE_VARIABLE_Redirect_1_22;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Redirect_0_3 = next_value_of_STATE_VARIABLE_Redirect_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
canonical__record_pd_redirect_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PrimePDPtr_2,
  MR_Word STATE_VARIABLE_Redirect_0_3,
  MR_Word * STATE_VARIABLE_Redirect_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Redirect_4 = STATE_VARIABLE_Redirect_0_3;
    else
    {
      MR_Word RestPDPtr_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word RestPDPtrs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_ArrayPtr ProcRedirect0_13 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Redirect_0_3, 1))));
      MR_Word OldRedirect_14;
      MR_ArrayPtr ProcRedirect_15;
      MR_Word STATE_VARIABLE_Redirect_1_22;
      MR_Integer PDI_27 = (MR_Integer) (RestPDPtr_9);
      MR_Box conv0_OldRedirect_14;
      MR_Integer Var_18;
      MR_ArrayPtr Var_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Redirect_0_3;

      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_ArrayPtr) (ProcRedirect0_13), PDI_27, &conv0_OldRedirect_14);
      OldRedirect_14 = ((MR_Word) (conv0_OldRedirect_14));
      Var_18 = (MR_Integer) (OldRedirect_14);
      succeeded = (Var_18 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_ArrayPtr Var_19;
        MR_Integer PDI_29;
        MR_Box conv1_Var_19;
        MR_ArrayPtr conv2_ProcRedirect_15;

        conv1_Var_19 = array_util__u_1_f_0((MR_Word) (&canonical_scalar_common_1[6]), ((MR_Box) (ProcRedirect0_13)));
        Var_19 = ((MR_ArrayPtr) (conv1_Var_19));
        PDI_29 = (MR_Integer) (RestPDPtr_9);
        mercury__array__set_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), PDI_29, ((MR_Box) (PrimePDPtr_2)), (MR_ArrayPtr) (Var_19), &conv2_ProcRedirect_15);
        ProcRedirect_15 = (MR_ArrayPtr) (conv2_ProcRedirect_15);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140canonical.record_pd_redirect_2\'/4", (MR_String) "already redirected");
          return;
        }
      Var_24 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Redirect_0_3, 0))));
      {
        STATE_VARIABLE_Redirect_1_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Redirect_1_22, 0) = ((MR_Box) (Var_24));
        MR_hl_field(0, STATE_VARIABLE_Redirect_1_22, 1) = ((MR_Box) (ProcRedirect_15));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RestPDPtrs_10;
      next_value_of_STATE_VARIABLE_Redirect_0_3 = STATE_VARIABLE_Redirect_1_22;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Redirect_0_3 = next_value_of_STATE_VARIABLE_Redirect_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
canonical__lookup_pd_site_3_p_0(
  MR_Word InitDeep_4,
  MR_Word PDPtr_5,
  MR_ArrayPtr * Sites_6)
{
  MR_Word PD_7;
  MR_ArrayPtr Var_8 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_4, 3))));

  profile__lookup_proc_dynamics_3_p_0(Var_8, PDPtr_5, &PD_7);
  *Sites_6 = ((MR_ArrayPtr) ((MR_hl_field(0, PD_7, 1))));
}

static void MR_CALL 
canonical__complete_clique_ps_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv0_Sites_6;

  canonical__lookup_pd_site_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Sites_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Sites_6));
}

static void MR_CALL 
canonical__complete_clique_ps_7_p_0(
  MR_Word InitDeep_8,
  MR_Word Clique_9,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ProcMap_0_19,
  MR_Word * STATE_VARIABLE_ProcMap_20,
  MR_Word STATE_VARIABLE_AddedPD_0_21,
  MR_Word * STATE_VARIABLE_AddedPD_22)
{
  MR_bool succeeded;
  MR_Word PSPtr_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_Word PDPtrs_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
  MR_Word Var_23;

  succeeded = (PDPtrs_11 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_23 = ((MR_Word) ((MR_hl_field(1, PDPtrs_11, 1))));
    succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word PS_17;
    MR_Word PDSites_18;
    MR_ArrayPtr Var_24 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_8, 5))));
    MR_Word Var_25;
    MR_Integer Var_26;
    MR_ArrayPtr Var_27;
    MR_ArrayPtr Var_30;

    profile__lookup_proc_statics_3_p_0(Var_24, PSPtr_10, &PS_17);
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_25, 0) = ((MR_Box) (&canonical_scalar_common_3[4]));
      MR_hl_field(0, Var_25, 1) = ((MR_Box) (canonical__complete_clique_ps_7_p_0_1));
      MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_25, 3) = ((MR_Box) (InitDeep_8));
    }
    mercury__list__map_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_Word) (&canonical_scalar_common_1[2]), Var_25, PDPtrs_11, &PDSites_18);
    Var_30 = ((MR_ArrayPtr) ((MR_hl_field(0, PS_17, 8))));
    Var_26 = mercury__array__max_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_ArrayPtr) (Var_30));
    Var_27 = ((MR_ArrayPtr) ((MR_hl_field(0, PS_17, 8))));
    canonical__complete_clique_slots_9_p_0(Var_26, InitDeep_8, Clique_9, Var_27, PDSites_18, STATE_VARIABLE_ProcMap_0_19, STATE_VARIABLE_ProcMap_20, STATE_VARIABLE_AddedPD_0_21, STATE_VARIABLE_AddedPD_22);
  }
  else
  {
    *STATE_VARIABLE_AddedPD_22 = STATE_VARIABLE_AddedPD_0_21;
    *STATE_VARIABLE_ProcMap_20 = STATE_VARIABLE_ProcMap_0_19;
  }
}

static void MR_CALL 
canonical__complete_clique_slots_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ProcMap_13;

  canonical__cluster_pds_by_ps_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ProcMap_13);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ProcMap_13));
}

static void MR_CALL 
canonical__complete_clique_slots_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  profile__extract_csdptr_callee_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
}

static MR_bool MR_CALL 
canonical__complete_clique_slots_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = profile__valid_call_site_dynamic_ptr_raw_2_p_0(((MR_ArrayPtr) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
canonical__complete_clique_slots_9_p_0(
  MR_Integer SlotNum_10,
  MR_Word InitDeep_11,
  MR_Word Clique_12,
  MR_ArrayPtr PSSites_13,
  MR_Word PDSites_14,
  MR_Word STATE_VARIABLE_ProcMap_0_29,
  MR_Word * STATE_VARIABLE_ProcMap_30,
  MR_Word STATE_VARIABLE_AddedPD_0_31,
  MR_Word * STATE_VARIABLE_AddedPD_32)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (SlotNum_10 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word CSSPtr_17;
      MR_Word CSS_18;
      MR_Word CSDPtrs_21;
      MR_Word ValidCSDPtrs_23;
      MR_Word CalleePDPtrs_24;
      MR_Word CalleePDPtrSet_25;
      MR_Word Common_26;
      MR_ArrayPtr Var_34;
      MR_Word Var_36;
      MR_ArrayPtr Var_37;
      MR_Word Var_38;
      MR_Word STATE_VARIABLE_AddedPD_1_39;
      MR_Word STATE_VARIABLE_ProcMap_1_41;
      MR_Integer Var_43;
      MR_Box conv0_CSSPtr_17;
      MR_Word Var_35;
      MR_Integer next_value_of_SlotNum_10;
      MR_Word next_value_of_STATE_VARIABLE_ProcMap_0_29;
      MR_Word next_value_of_STATE_VARIABLE_AddedPD_0_31;

      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_ArrayPtr) (PSSites_13), SlotNum_10, &conv0_CSSPtr_17);
      CSSPtr_17 = ((MR_Word) (conv0_CSSPtr_17));
      Var_34 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_11, 4))));
      profile__lookup_call_site_statics_3_p_0(Var_34, CSSPtr_17, &CSS_18);
      Var_35 = ((MR_Word) ((MR_hl_field(0, CSS_18, 2))));
      succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 1);
      if (succeeded)
        canonical__lookup_normal_sites_3_p_0(PDSites_14, SlotNum_10, &CSDPtrs_21);
      else
      {
        MR_Word CSDPtrLists_22;

        canonical__lookup_multi_sites_3_p_0(PDSites_14, SlotNum_10, &CSDPtrLists_22);
        mercury__list__condense_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), CSDPtrLists_22, &CSDPtrs_21);
      }
      Var_37 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_11, 2))));
      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_36, 0) = ((MR_Box) (&canonical_scalar_common_7[0]));
        MR_hl_field(0, Var_36, 1) = ((MR_Box) (canonical__complete_clique_slots_9_p_0_1));
        MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_36, 3) = ((MR_Box) (Var_37));
      }
      mercury__list__filter_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), Var_36, CSDPtrs_21, &ValidCSDPtrs_23);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_38, 0) = ((MR_Box) (&canonical_scalar_common_3[3]));
        MR_hl_field(0, Var_38, 1) = ((MR_Box) (canonical__complete_clique_slots_9_p_0_2));
        MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_38, 3) = ((MR_Box) (InitDeep_11));
      }
      mercury__list__map_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), Var_38, ValidCSDPtrs_23, &CalleePDPtrs_24);
      CalleePDPtrSet_25 = mercury__set__list_to_set_1_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), CalleePDPtrs_24);
      mercury__set__intersect_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), CalleePDPtrSet_25, Clique_12, &Common_26);
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), Common_26);
      if (succeeded)
      {
        STATE_VARIABLE_AddedPD_1_39 = STATE_VARIABLE_AddedPD_0_31;
        STATE_VARIABLE_ProcMap_1_41 = STATE_VARIABLE_ProcMap_0_29;
      }
      else
      {
        MR_Word NewMembers_27;

        mercury__set__difference_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), CalleePDPtrSet_25, Clique_12, &NewMembers_27);
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), NewMembers_27);
        if (succeeded)
        {
          STATE_VARIABLE_AddedPD_1_39 = (MR_Integer) 0;
          STATE_VARIABLE_ProcMap_1_41 = STATE_VARIABLE_ProcMap_0_29;
        }
        else
        {
          MR_Word NewMemberList_28;
          MR_Word Var_40;
          MR_Box conv3_STATE_VARIABLE_ProcMap_1_41;

          mercury__set__to_sorted_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), NewMembers_27, &NewMemberList_28);
          {
            Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_40, 0) = ((MR_Box) (&canonical_scalar_common_5[0]));
            MR_hl_field(0, Var_40, 1) = ((MR_Box) (canonical__complete_clique_slots_9_p_0_3));
            MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_40, 3) = ((MR_Box) (InitDeep_11));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_Word) (&canonical_scalar_common_2[0]), Var_40, NewMemberList_28, ((MR_Box) (STATE_VARIABLE_ProcMap_0_29)), &conv3_STATE_VARIABLE_ProcMap_1_41);
          STATE_VARIABLE_ProcMap_1_41 = ((MR_Word) (conv3_STATE_VARIABLE_ProcMap_1_41));
          STATE_VARIABLE_AddedPD_1_39 = (MR_Integer) 1;
        }
      }
      Var_43 = (MR_Integer) ((MR_Unsigned) SlotNum_10 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_SlotNum_10 = Var_43;
      next_value_of_STATE_VARIABLE_ProcMap_0_29 = STATE_VARIABLE_ProcMap_1_41;
      next_value_of_STATE_VARIABLE_AddedPD_0_31 = STATE_VARIABLE_AddedPD_1_39;
      SlotNum_10 = next_value_of_SlotNum_10;
      STATE_VARIABLE_ProcMap_0_29 = next_value_of_STATE_VARIABLE_ProcMap_0_29;
      STATE_VARIABLE_AddedPD_0_31 = next_value_of_STATE_VARIABLE_AddedPD_0_31;
      continue;
    }
    else
    {
      *STATE_VARIABLE_AddedPD_32 = STATE_VARIABLE_AddedPD_0_31;
      *STATE_VARIABLE_ProcMap_30 = STATE_VARIABLE_ProcMap_0_29;
    }
    break;
  }
}

static void MR_CALL 
canonical__lookup_multi_sites_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer SlotNum_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_ArrayPtr RestArray_5 = ((MR_ArrayPtr) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word RestArrays_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word CSDList_8;
    MR_Word CSDLists_9;
    MR_Word Slot_10;
    MR_Box conv0_Slot_10;

    mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_ArrayPtr) (RestArray_5), SlotNum_2, &conv0_Slot_10);
    Slot_10 = ((MR_Word) (conv0_Slot_10));
    if (((MR_tag((MR_Word) Slot_10)) == (MR_Integer) 1))
    {
      MR_ArrayPtr CSDArray_13 = ((MR_ArrayPtr) ((MR_hl_field(1, Slot_10, 1))));

      mercury__array__to_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_ArrayPtr) (CSDArray_13), &CSDList_8);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140canonical.lookup_multi_sites\'/3", (MR_String) "found normal");
        return;
      }
    canonical__lookup_multi_sites_3_p_0(RestArrays_6, SlotNum_2, &CSDLists_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (CSDList_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (CSDLists_9));
    }
  }
}

static void MR_CALL 
canonical__lookup_normal_sites_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer SlotNum_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_ArrayPtr RestArray_5 = ((MR_ArrayPtr) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word RestArrays_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word CSDPtr_8;
    MR_Word CSDPtrs_9;
    MR_Word Slot_10;
    MR_Box conv0_Slot_10;

    mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_ArrayPtr) (RestArray_5), SlotNum_2, &conv0_Slot_10);
    Slot_10 = ((MR_Word) (conv0_Slot_10));
    if (((MR_tag((MR_Word) Slot_10)) == (MR_Integer) 1))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140canonical.lookup_normal_sites\'/3", (MR_String) "found slot_multi");
        return;
      }
    else
      CSDPtr_8 = ((MR_Word) ((MR_hl_field(0, Slot_10, 0))));
    canonical__lookup_normal_sites_3_p_0(RestArrays_6, SlotNum_2, &CSDPtrs_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (CSDPtr_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (CSDPtrs_9));
    }
  }
}

static void MR_CALL 
canonical__canonicalize_cliques_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_PD_11;

  canonical__subst_in_proc_dynamic_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv7_STATE_VARIABLE_PD_11);
  *wrapper_arg_2 = ((MR_Box) (conv7_STATE_VARIABLE_PD_11));
}

static void MR_CALL 
canonical__canonicalize_cliques_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_CSD_12;

  canonical__subst_in_call_site_dynamic_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_STATE_VARIABLE_CSD_12);
  *wrapper_arg_2 = ((MR_Box) (conv4_STATE_VARIABLE_CSD_12));
}

void MR_CALL 
canonical__canonicalize_cliques_2_p_0(
  MR_Word STATE_VARIABLE_InitDeep_0_16,
  MR_Word * STATE_VARIABLE_InitDeep_17)
{
  MR_Integer MaxCSDs_4;
  MR_Integer MaxPDs_5;
  MR_Integer NumCSDs_6;
  MR_Integer NumPDs_7;
  MR_Word CliqueList_8;
  MR_ArrayPtr Cliques_9;
  MR_ArrayPtr CliqueIndex_10;
  MR_Word MergeInfo_11;
  MR_ArrayPtr CSDRedirect0_12;
  MR_ArrayPtr PDRedirect0_13;
  MR_Word Redirect0_14;
  MR_Word Redirect1_15;
  MR_ArrayPtr Var_18 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_16, 2))));
  MR_ArrayPtr Var_19;
  MR_Word STATE_VARIABLE_InitDeep_1_26;
  MR_ArrayPtr CSDredirect0_41;
  MR_ArrayPtr PDredirect0_42;
  MR_Word Stats_43;
  MR_Word Root0_44;
  MR_ArrayPtr CSDs0_45;
  MR_ArrayPtr PDs0_46;
  MR_ArrayPtr CSSs_47;
  MR_ArrayPtr PSs_48;
  MR_Integer NumCSD_49;
  MR_ArrayPtr CSDredirect_50;
  MR_Integer NumPD_51;
  MR_ArrayPtr PDredirect_52;
  MR_Word Redirect_53;
  MR_ArrayPtr CSDs1_54;
  MR_ArrayPtr PDs1_55;
  MR_ArrayPtr CSDs_56;
  MR_ArrayPtr PDs_57;
  MR_Word Root_58;
  MR_ArrayPtr Var_61;
  MR_ArrayPtr Var_64;
  MR_Word Var_65;
  MR_ArrayPtr Var_66;
  MR_Word Var_67;
  MR_ArrayPtr Var_68;
  MR_Integer PDI_75;
  MR_ArrayPtr conv0_CSDRedirect0_12;
  MR_ArrayPtr conv1_PDRedirect0_13;
  MR_Box conv2_Var_61;
  MR_Box conv3_Var_64;
  MR_Box conv5_Var_66;
  MR_ArrayPtr conv6_CSDs1_54;
  MR_Box conv8_Var_68;
  MR_ArrayPtr conv9_PDs1_55;
  MR_ArrayPtr conv10_CSDs_56;
  MR_ArrayPtr conv11_PDs_57;
  MR_Box conv12_Root_58;

  MaxCSDs_4 = mercury__array__max_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_ArrayPtr) (Var_18));
  Var_19 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_16, 3))));
  MaxPDs_5 = mercury__array__max_1_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_ArrayPtr) (Var_19));
  NumCSDs_6 = (MR_Integer) ((MR_Unsigned) MaxCSDs_4 + (MR_Unsigned) 1);
  NumPDs_7 = (MR_Integer) ((MR_Unsigned) MaxPDs_5 + (MR_Unsigned) 1);
  callgraph__find_cliques_2_p_0(STATE_VARIABLE_InitDeep_0_16, &CliqueList_8);
  callgraph__make_clique_indexes_4_p_0(NumPDs_7, CliqueList_8, &Cliques_9, &CliqueIndex_10);
  {
    MergeInfo_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MergeInfo_11, 0) = ((MR_Box) (Cliques_9));
    MR_hl_field(0, MergeInfo_11, 1) = ((MR_Box) (CliqueIndex_10));
  }
  conv0_CSDRedirect0_12 = mercury__array__init_2_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), NumCSDs_6, ((MR_Box) (((MR_Box) ((MR_Integer) 0)))));
  CSDRedirect0_12 = (MR_ArrayPtr) (conv0_CSDRedirect0_12);
  conv1_PDRedirect0_13 = mercury__array__init_2_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), NumPDs_7, ((MR_Box) (((MR_Box) ((MR_Integer) 0)))));
  PDRedirect0_13 = (MR_ArrayPtr) (conv1_PDRedirect0_13);
  {
    Redirect0_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Redirect0_14, 0) = ((MR_Box) (CSDRedirect0_12));
    MR_hl_field(0, Redirect0_14, 1) = ((MR_Box) (PDRedirect0_13));
  }
  canonical__merge_cliques_6_p_0(CliqueList_8, MergeInfo_11, STATE_VARIABLE_InitDeep_0_16, &STATE_VARIABLE_InitDeep_1_26, Redirect0_14, &Redirect1_15);
  CSDredirect0_41 = ((MR_ArrayPtr) ((MR_hl_field(0, Redirect1_15, 0))));
  PDredirect0_42 = ((MR_ArrayPtr) ((MR_hl_field(0, Redirect1_15, 1))));
  Stats_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_1_26, 0))));
  Root0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_1_26, 1))));
  CSDs0_45 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_1_26, 2))));
  PDs0_46 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_1_26, 3))));
  CSSs_47 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_1_26, 4))));
  PSs_48 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_1_26, 5))));
  conv2_Var_61 = array_util__u_1_f_0((MR_Word) (&canonical_scalar_common_1[7]), ((MR_Box) (CSDredirect0_41)));
  Var_61 = ((MR_ArrayPtr) (conv2_Var_61));
  canonical__compact_csd_redirect_6_p_0((MR_Integer) 1, (MR_Integer) 1, NumCSDs_6, &NumCSD_49, Var_61, &CSDredirect_50);
  conv3_Var_64 = array_util__u_1_f_0((MR_Word) (&canonical_scalar_common_1[6]), ((MR_Box) (PDredirect0_42)));
  Var_64 = ((MR_ArrayPtr) (conv3_Var_64));
  canonical__compact_pd_redirect_6_p_0((MR_Integer) 1, (MR_Integer) 1, NumPDs_7, &NumPD_51, Var_64, &PDredirect_52);
  {
    Redirect_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Redirect_53, 0) = ((MR_Box) (CSDredirect_50));
    MR_hl_field(0, Redirect_53, 1) = ((MR_Box) (PDredirect_52));
  }
  {
    Var_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_65, 0) = ((MR_Box) (&canonical_scalar_common_3[1]));
    MR_hl_field(0, Var_65, 1) = ((MR_Box) (canonical__canonicalize_cliques_2_p_0_1));
    MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_65, 3) = ((MR_Box) (Redirect_53));
  }
  conv5_Var_66 = array_util__u_1_f_0((MR_Word) (&canonical_scalar_common_1[5]), ((MR_Box) (CSDs0_45)));
  Var_66 = ((MR_ArrayPtr) (conv5_Var_66));
  array_util__array_map_from_1_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), Var_65, (MR_ArrayPtr) (Var_66), &conv6_CSDs1_54);
  CSDs1_54 = (MR_ArrayPtr) (conv6_CSDs1_54);
  {
    Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_67, 0) = ((MR_Box) (&canonical_scalar_common_3[2]));
    MR_hl_field(0, Var_67, 1) = ((MR_Box) (canonical__canonicalize_cliques_2_p_0_2));
    MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_67, 3) = ((MR_Box) (Redirect_53));
  }
  conv8_Var_68 = array_util__u_1_f_0((MR_Word) (&canonical_scalar_common_1[3]), ((MR_Box) (PDs0_46)));
  Var_68 = ((MR_ArrayPtr) (conv8_Var_68));
  array_util__array_map_from_1_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), Var_67, (MR_ArrayPtr) (Var_68), &conv9_PDs1_55);
  PDs1_55 = (MR_ArrayPtr) (conv9_PDs1_55);
  mercury__array__shrink_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), NumCSD_49, (MR_ArrayPtr) (CSDs1_54), &conv10_CSDs_56);
  CSDs_56 = (MR_ArrayPtr) (conv10_CSDs_56);
  mercury__array__shrink_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), NumPD_51, (MR_ArrayPtr) (PDs1_55), &conv11_PDs_57);
  PDs_57 = (MR_ArrayPtr) (conv11_PDs_57);
  PDI_75 = (MR_Integer) (Root0_44);
  mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_ArrayPtr) (PDredirect_52), PDI_75, &conv12_Root_58);
  Root_58 = ((MR_Word) (conv12_Root_58));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_InitDeep_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Stats_43));
    MR_hl_field(0, base, 1) = ((MR_Box) (Root_58));
    MR_hl_field(0, base, 2) = ((MR_Box) (CSDs_56));
    MR_hl_field(0, base, 3) = ((MR_Box) (PDs_57));
    MR_hl_field(0, base, 4) = ((MR_Box) (CSSs_47));
    MR_hl_field(0, base, 5) = ((MR_Box) (PSs_48));
  }
}

static void MR_CALL 
canonical__compact_pd_redirect_6_p_0(
  MR_Integer CurOld_7,
  MR_Integer CurNew_8,
  MR_Integer MaxOld_9,
  MR_Integer * NumNew_10,
  MR_ArrayPtr STATE_VARIABLE_PDredirect_0_13,
  MR_ArrayPtr * STATE_VARIABLE_PDredirect_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurOld_7 > MaxOld_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *NumNew_10 = CurNew_8;
      *STATE_VARIABLE_PDredirect_14 = STATE_VARIABLE_PDredirect_0_13;
    }
    else
    {
      MR_Word Redirect0_12;
      MR_Box conv0_Redirect0_12;
      MR_Integer Var_15;

      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_ArrayPtr) (STATE_VARIABLE_PDredirect_0_13), CurOld_7, &conv0_Redirect0_12);
      Redirect0_12 = ((MR_Word) (conv0_Redirect0_12));
      Var_15 = (MR_Integer) (Redirect0_12);
      succeeded = (Var_15 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_16 = (MR_Word) (CurNew_8);
        MR_ArrayPtr STATE_VARIABLE_PDredirect_1_17;
        MR_Integer Var_18;
        MR_Integer Var_19;
        MR_ArrayPtr conv1_STATE_VARIABLE_PDredirect_1_17;
        MR_Integer next_value_of_CurOld_7;
        MR_Integer next_value_of_CurNew_8;
        MR_ArrayPtr next_value_of_STATE_VARIABLE_PDredirect_0_13;

        mercury__array__set_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), CurOld_7, ((MR_Box) (Var_16)), (MR_ArrayPtr) (STATE_VARIABLE_PDredirect_0_13), &conv1_STATE_VARIABLE_PDredirect_1_17);
        STATE_VARIABLE_PDredirect_1_17 = (MR_ArrayPtr) (conv1_STATE_VARIABLE_PDredirect_1_17);
        Var_18 = (MR_Integer) ((MR_Unsigned) CurOld_7 + (MR_Unsigned) 1);
        Var_19 = (MR_Integer) ((MR_Unsigned) CurNew_8 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_CurOld_7 = Var_18;
        next_value_of_CurNew_8 = Var_19;
        next_value_of_STATE_VARIABLE_PDredirect_0_13 = STATE_VARIABLE_PDredirect_1_17;
        CurOld_7 = next_value_of_CurOld_7;
        CurNew_8 = next_value_of_CurNew_8;
        STATE_VARIABLE_PDredirect_0_13 = next_value_of_STATE_VARIABLE_PDredirect_0_13;
        continue;
      }
      else
      {
        MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) CurOld_7 + (MR_Unsigned) 1);
        MR_Integer next_value_of_CurOld_7 = Var_23;

        // direct tailcall eliminated
        ;
        CurOld_7 = next_value_of_CurOld_7;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
canonical__compact_csd_redirect_6_p_0(
  MR_Integer CurOld_7,
  MR_Integer CurNew_8,
  MR_Integer MaxOld_9,
  MR_Integer * NumNew_10,
  MR_ArrayPtr STATE_VARIABLE_CSDredirect_0_13,
  MR_ArrayPtr * STATE_VARIABLE_CSDredirect_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurOld_7 > MaxOld_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *NumNew_10 = CurNew_8;
      *STATE_VARIABLE_CSDredirect_14 = STATE_VARIABLE_CSDredirect_0_13;
    }
    else
    {
      MR_Word Redirect0_12;
      MR_Box conv0_Redirect0_12;
      MR_Integer Var_15;

      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_ArrayPtr) (STATE_VARIABLE_CSDredirect_0_13), CurOld_7, &conv0_Redirect0_12);
      Redirect0_12 = ((MR_Word) (conv0_Redirect0_12));
      Var_15 = (MR_Integer) (Redirect0_12);
      succeeded = (Var_15 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_16 = (MR_Word) (CurNew_8);
        MR_ArrayPtr STATE_VARIABLE_CSDredirect_1_17;
        MR_Integer Var_18;
        MR_Integer Var_19;
        MR_ArrayPtr conv1_STATE_VARIABLE_CSDredirect_1_17;
        MR_Integer next_value_of_CurOld_7;
        MR_Integer next_value_of_CurNew_8;
        MR_ArrayPtr next_value_of_STATE_VARIABLE_CSDredirect_0_13;

        mercury__array__set_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), CurOld_7, ((MR_Box) (Var_16)), (MR_ArrayPtr) (STATE_VARIABLE_CSDredirect_0_13), &conv1_STATE_VARIABLE_CSDredirect_1_17);
        STATE_VARIABLE_CSDredirect_1_17 = (MR_ArrayPtr) (conv1_STATE_VARIABLE_CSDredirect_1_17);
        Var_18 = (MR_Integer) ((MR_Unsigned) CurOld_7 + (MR_Unsigned) 1);
        Var_19 = (MR_Integer) ((MR_Unsigned) CurNew_8 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_CurOld_7 = Var_18;
        next_value_of_CurNew_8 = Var_19;
        next_value_of_STATE_VARIABLE_CSDredirect_0_13 = STATE_VARIABLE_CSDredirect_1_17;
        CurOld_7 = next_value_of_CurOld_7;
        CurNew_8 = next_value_of_CurNew_8;
        STATE_VARIABLE_CSDredirect_0_13 = next_value_of_STATE_VARIABLE_CSDredirect_0_13;
        continue;
      }
      else
      {
        MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) CurOld_7 + (MR_Unsigned) 1);
        MR_Integer next_value_of_CurOld_7 = Var_23;

        // direct tailcall eliminated
        ;
        CurOld_7 = next_value_of_CurOld_7;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
canonical__merge_cliques_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_InitDeep_15;
  MR_Word conv2_STATE_VARIABLE_Redirect_17;

  canonical__merge_proc_dynamics_ignore_chosen_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_InitDeep_15, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_Redirect_17);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_InitDeep_15));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_Redirect_17));
}

static MR_bool MR_CALL 
canonical__merge_cliques_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = canonical__two_or_more_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
canonical__merge_cliques_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = canonical__two_or_more_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
canonical__merge_cliques_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProcMap_13;

  canonical__cluster_pds_by_ps_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ProcMap_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ProcMap_13));
}

static void MR_CALL 
canonical__merge_cliques_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word MergeInfo_2,
  MR_Word STATE_VARIABLE_InitDeep_0_3,
  MR_Word * STATE_VARIABLE_InitDeep_4,
  MR_Word STATE_VARIABLE_Redirect_0_5,
  MR_Word * STATE_VARIABLE_Redirect_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Redirect_6 = STATE_VARIABLE_Redirect_0_5;
      *STATE_VARIABLE_InitDeep_4 = STATE_VARIABLE_InitDeep_0_3;
    }
    else
    {
      MR_Word Clique_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Cliques_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_InitDeep_1_23;
      MR_Word STATE_VARIABLE_Redirect_1_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_InitDeep_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Redirect_0_5;

      if ((Clique_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_InitDeep_1_23 = STATE_VARIABLE_InitDeep_0_3;
        STATE_VARIABLE_Redirect_1_24 = STATE_VARIABLE_Redirect_0_5;
      }
      else
      {
        MR_Word Var_43 = ((MR_Word) ((MR_hl_field(1, Clique_14, 1))));

        if ((Var_43 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          STATE_VARIABLE_InitDeep_1_23 = STATE_VARIABLE_InitDeep_0_3;
          STATE_VARIABLE_Redirect_1_24 = STATE_VARIABLE_Redirect_0_5;
        }
        else
        {
          MR_Word ProcMap0_25;
          MR_Word ProcMap1_26;
          MR_Word PDsList1_27;
          MR_Word ToMergePDsList1_28;
          MR_Word Var_33;
          MR_Box conv1_ProcMap1_26;

          mercury__map__init_1_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&canonical_scalar_common_1[0]), &ProcMap0_25);
          {
            Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_33, 0) = ((MR_Box) (&canonical_scalar_common_5[0]));
            MR_hl_field(0, Var_33, 1) = ((MR_Box) (canonical__merge_cliques_6_p_0_1));
            MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_33, 3) = ((MR_Box) (STATE_VARIABLE_InitDeep_0_3));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_Word) (&canonical_scalar_common_2[0]), Var_33, Clique_14, ((MR_Box) (ProcMap0_25)), &conv1_ProcMap1_26);
          ProcMap1_26 = ((MR_Word) (conv1_ProcMap1_26));
          mercury__map__values_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&canonical_scalar_common_1[0]), ProcMap1_26, &PDsList1_27);
          mercury__list__filter_3_p_0((MR_Word) (&canonical_scalar_common_1[0]), (MR_Word) (&canonical_scalar_common_2[4]), PDsList1_27, &ToMergePDsList1_28);
          if ((ToMergePDsList1_28 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_InitDeep_1_23 = STATE_VARIABLE_InitDeep_0_3;
            STATE_VARIABLE_Redirect_1_24 = STATE_VARIABLE_Redirect_0_5;
          }
          else
          {
            MR_Word ProcMap_29;
            MR_Word Clique_30;
            MR_Word PDsList_31;
            MR_Word ToMergePDsList_32;
            MR_Word Var_36;
            MR_Box conv5_STATE_VARIABLE_InitDeep_1_23;
            MR_Box conv4_STATE_VARIABLE_Redirect_1_24;

            canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0(STATE_VARIABLE_InitDeep_0_3, ProcMap1_26, &ProcMap_29, &Clique_30);
            mercury__map__values_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&canonical_scalar_common_1[0]), ProcMap_29, &PDsList_31);
            mercury__list__filter_3_p_0((MR_Word) (&canonical_scalar_common_1[0]), (MR_Word) (&canonical_scalar_common_2[5]), PDsList_31, &ToMergePDsList_32);
            {
              Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_36, 0) = ((MR_Box) (&canonical_scalar_common_4[1]));
              MR_hl_field(0, Var_36, 1) = ((MR_Box) (canonical__merge_cliques_6_p_0_4));
              MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_36, 3) = ((MR_Box) (MergeInfo_2));
              MR_hl_field(0, Var_36, 4) = ((MR_Box) (Clique_30));
            }
            mercury__list__foldl2_6_p_0((MR_Word) (&canonical_scalar_common_1[0]), (MR_Word) (&profile__profile__type_ctor_info_initial_deep_0), (MR_Word) (&canonical__canonical__type_ctor_info_redirect_0), Var_36, ToMergePDsList_32, ((MR_Box) (STATE_VARIABLE_InitDeep_0_3)), &conv5_STATE_VARIABLE_InitDeep_1_23, ((MR_Box) (STATE_VARIABLE_Redirect_0_5)), &conv4_STATE_VARIABLE_Redirect_1_24);
            STATE_VARIABLE_InitDeep_1_23 = ((MR_Word) (conv5_STATE_VARIABLE_InitDeep_1_23));
            STATE_VARIABLE_Redirect_1_24 = ((MR_Word) (conv4_STATE_VARIABLE_Redirect_1_24));
          }
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cliques_15;
      next_value_of_STATE_VARIABLE_InitDeep_0_3 = STATE_VARIABLE_InitDeep_1_23;
      next_value_of_STATE_VARIABLE_Redirect_0_5 = STATE_VARIABLE_Redirect_1_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_InitDeep_0_3 = next_value_of_STATE_VARIABLE_InitDeep_0_3;
      STATE_VARIABLE_Redirect_0_5 = next_value_of_STATE_VARIABLE_Redirect_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_ProcMap_20;
  MR_Word conv2_STATE_VARIABLE_AddedPD_22;

  canonical__complete_clique_ps_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ProcMap_20, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_AddedPD_22);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ProcMap_20));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_AddedPD_22));
}

static void MR_CALL 
canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_23;

  canonical__IntroducedFrom__pred__complete_clique__131__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_23);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_23));
}

static void MR_CALL 
canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0(
  MR_Word InitDeep_6,
  MR_Word STATE_VARIABLE_ProcMap_0_13,
  MR_Word * STATE_VARIABLE_ProcMap_14,
  MR_Word * Clique_9)
{
  while (MR_TRUE)
  {
    MR_Word PDsList0_10;
    MR_Word Clique0_11;
    MR_Word AddedPD_12;
    MR_Word Var_16;
    MR_Word STATE_VARIABLE_ProcMap_1_17;
    MR_Word PSPDs0_27;
    MR_Word Var_28;
    MR_Box conv1_Clique0_11;
    MR_Box conv5_STATE_VARIABLE_ProcMap_1_17;
    MR_Box conv4_AddedPD_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__map__values_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&canonical_scalar_common_1[0]), STATE_VARIABLE_ProcMap_0_13, &PDsList0_10);
    Var_16 = mercury__set__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0));
    mercury__list__foldl_4_p_0((MR_Word) (&canonical_scalar_common_1[0]), (MR_Word) (&canonical_scalar_common_1[1]), (MR_Word) (&canonical_scalar_common_2[3]), PDsList0_10, ((MR_Box) (Var_16)), &conv1_Clique0_11);
    Clique0_11 = ((MR_Word) (conv1_Clique0_11));
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&canonical_scalar_common_1[0]), STATE_VARIABLE_ProcMap_0_13, &PSPDs0_27);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (&canonical_scalar_common_4[0]));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0_2));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_28, 3) = ((MR_Box) (InitDeep_6));
      MR_hl_field(0, Var_28, 4) = ((MR_Box) (Clique0_11));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&canonical_scalar_common_2[1]), (MR_Word) (&canonical_scalar_common_2[0]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_28, PSPDs0_27, ((MR_Box) (STATE_VARIABLE_ProcMap_0_13)), &conv5_STATE_VARIABLE_ProcMap_1_17, ((MR_Box) ((MR_Integer) 0)), &conv4_AddedPD_12);
    STATE_VARIABLE_ProcMap_1_17 = ((MR_Word) (conv5_STATE_VARIABLE_ProcMap_1_17));
    AddedPD_12 = ((MR_Word) (conv4_AddedPD_12));
    switch (AddedPD_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Clique_9 = Clique0_11;
          *STATE_VARIABLE_ProcMap_14 = STATE_VARIABLE_ProcMap_1_17;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word next_value_of_STATE_VARIABLE_ProcMap_0_13 = STATE_VARIABLE_ProcMap_1_17;

          // direct tailcall eliminated
          ;
          STATE_VARIABLE_ProcMap_0_13 = next_value_of_STATE_VARIABLE_ProcMap_0_13;
          continue;
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
canonical____Unify____merge_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = canonical____Unify____merge_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
canonical____Compare____merge_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  canonical____Compare____merge_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
canonical____Unify____redirect_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = canonical____Unify____redirect_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
canonical____Compare____redirect_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  canonical____Compare____redirect_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__canonical__init(void)
{
}

void mercury__canonical__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&canonical__canonical__type_ctor_info_merge_info_0);
  MR_register_type_ctor_info(&canonical__canonical__type_ctor_info_redirect_0);
}

void mercury__canonical__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__canonical__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module canonical.
