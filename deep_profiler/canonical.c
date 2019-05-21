/*
** Automatically generated from `canonical.m'
** by the Mercury compiler,
** version rotd-2017-07-15
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


/* :- module canonical. */
/* :- implementation. */

/*
INIT mercury__canonical__init
ENDINIT
*/

#include "canonical.mih"


#include "array_util.mih"
#include "callgraph.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 canonical__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 canonical__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 canonical__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0;

static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_array_slot_0;

static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0;

static const MR_FA_TypeInfo_Struct1 canonical__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 canonical__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0;

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
canonical____Unify____merge_info_0_0_10001(
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2);

static void MR_CALL 
canonical____Compare____merge_info_0_0_10001(
  MR_Box * canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box canonical__wrapper_arg_3);

static MR_bool MR_CALL 
canonical____Unify____redirect_0_0_10001(
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2);

static void MR_CALL 
canonical____Compare____redirect_0_0_10001(
  MR_Box * canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box canonical__wrapper_arg_3);

static MR_bool MR_CALL 
canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__418__1_2_p_0(
  MR_Word canonical__InClique_17,
  MR_Word canonical__HeadVar__2_43);

static MR_bool MR_CALL 
canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__413__1_2_p_0(
  MR_Word canonical__NotInClique_18,
  MR_Word canonical__HeadVar__2_38);

static MR_bool MR_CALL 
canonical__IntroducedFrom__pred__merge_proc_dynamics__239__1_2_p_0(
  MR_Word canonical__InvalidPDPtrs_17,
  MR_Word canonical__HeadVar__2_36);

static void MR_CALL 
canonical__IntroducedFrom__pred__complete_clique__130__1_3_p_0(
  MR_Word canonical__HeadVar__1_22,
  MR_Word canonical__HeadVar__2_23,
  MR_Word * canonical__HeadVar__3_24);

static void MR_CALL 
canonical____Compare____redirect_0_0(
  MR_Word * canonical__HeadVar__1_1,
  MR_Word canonical__HeadVar__2_2,
  MR_Word canonical__HeadVar__3_3);

static MR_bool MR_CALL 
canonical____Unify____redirect_0_0(
  MR_Word canonical__HeadVar__1_1,
  MR_Word canonical__HeadVar__2_2);

static void MR_CALL 
canonical____Compare____merge_info_0_0(
  MR_Word * canonical__HeadVar__1_1,
  MR_Word canonical__HeadVar__2_2,
  MR_Word canonical__HeadVar__3_3);

static MR_bool MR_CALL 
canonical____Unify____merge_info_0_0(
  MR_Word canonical__HeadVar__1_1,
  MR_Word canonical__HeadVar__2_2);

static void MR_CALL 
canonical__subst_in_slot_3_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2);

static void MR_CALL 
canonical__subst_in_slot_3_p_0(
  MR_Word canonical__Redirect_1,
  MR_Word canonical__HeadVar__2_2,
  MR_Word * canonical__HeadVar__3_3);

static void MR_CALL 
canonical__subst_in_proc_dynamic_3_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2);

static void MR_CALL 
canonical__subst_in_proc_dynamic_3_p_0(
  MR_Word canonical__Redirect_4,
  MR_Word canonical__STATE_VARIABLE_PD_0_10,
  MR_Word * canonical__STATE_VARIABLE_PD_11);

static void MR_CALL 
canonical__subst_in_call_site_dynamic_3_p_0(
  MR_Word canonical__Redirect_4,
  MR_Word canonical__STATE_VARIABLE_CSD_0_11,
  MR_Word * canonical__STATE_VARIABLE_CSD_12);

static void MR_CALL 
canonical__lookup_csd_redirect_3_p_0(
  MR_ArrayPtr canonical__CallSiteRedirect0_4,
  MR_Word canonical__CSDPtr_5,
  MR_Word * canonical__OldRedirect_6);

static void MR_CALL 
canonical__cluster_csds_by_ps_4_p_0(
  MR_Word canonical__InitDeep_5,
  MR_Word canonical__CSDPtr_6,
  MR_Word canonical__STATE_VARIABLE_ProcMap_0_15,
  MR_Word * canonical__STATE_VARIABLE_ProcMap_16);

static void MR_CALL 
canonical__cluster_pds_by_ps_4_p_0(
  MR_Word canonical__InitDeep_5,
  MR_Word canonical__PDPtr_6,
  MR_Word canonical__STATE_VARIABLE_ProcMap_0_12,
  MR_Word * canonical__STATE_VARIABLE_ProcMap_13);

static MR_bool MR_CALL 
canonical__two_or_more_1_p_0(
  MR_Word canonical__HeadVar__1_1);

static void MR_CALL 
canonical__union_cliques_4_p_0(
  MR_Word canonical__MergeInfo_5,
  MR_Word canonical__PDPtr_6,
  MR_Word canonical__STATE_VARIABLE_CliqueUnion_0_10,
  MR_Word * canonical__STATE_VARIABLE_CliqueUnion_11);

static MR_bool MR_CALL 
canonical__merge_multi_slot_cluster_10_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1);

static void MR_CALL 
canonical__merge_multi_slot_cluster_10_p_0(
  MR_Word canonical__MergeInfo_11,
  MR_Word canonical__ParentPDPtr_12,
  MR_Word canonical__Clique_13,
  MR_Word canonical__ClusterCSDPtrs_14,
  MR_Word canonical__PrimeCSDPtrs0_15,
  MR_Word * canonical__PrimeCSDPtrs_16,
  MR_Word canonical__InitDeep0_17,
  MR_Word * canonical__InitDeep_18,
  MR_Word canonical__Redirect0_19,
  MR_Word * canonical__Redirect_20);

static void MR_CALL 
canonical__accumulate_csd_owns_3_p_0(
  MR_Word canonical__CSD_4,
  MR_Word canonical__Own0_5,
  MR_Word * canonical__Own_6);

static void MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_4(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2);

static void MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_3(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2);

static MR_bool MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_2(
  MR_Box canonical__closure_arg);

static MR_bool MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1);

static void MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0(
  MR_Word canonical__MergeInfo_8,
  MR_Word canonical__Clique_9,
  MR_Word canonical__CandidatePDPtrs_10,
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_14,
  MR_Word * canonical__STATE_VARIABLE_InitDeep_15,
  MR_Word canonical__STATE_VARIABLE_Redirect_0_16,
  MR_Word * canonical__STATE_VARIABLE_Redirect_17);

static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0_3(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box * canonical__wrapper_arg_3);

static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0_2(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2);

static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2);

static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0(
  MR_Word canonical__MergeInfo_9,
  MR_Word canonical__PrimeCSDPtr_10,
  MR_Word canonical__RestCSDPtrs_11,
  MR_Word * canonical__ChosenPDPtr_12,
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_22,
  MR_Word * canonical__STATE_VARIABLE_InitDeep_23,
  MR_Word canonical__STATE_VARIABLE_Redirect_0_24,
  MR_Word * canonical__STATE_VARIABLE_Redirect_25);

static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_6(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2);

static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_5(
  MR_Box canonical__closure_arg);

static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_4(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2);

static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_3(
  MR_Box canonical__closure_arg);

static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_2(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box * canonical__wrapper_arg_3);

static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1);

static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0(
  MR_Word canonical__MergeInfo_9,
  MR_Word canonical__Clique_10,
  MR_Word canonical__PrimeCSDPtr_11,
  MR_Word canonical__RestCSDPtrs_12,
  MR_Word canonical__InitDeep0_13,
  MR_Word * canonical__InitDeep_14,
  MR_Word canonical__Redirect0_15,
  MR_Word * canonical__Redirect_16);

static MR_bool MR_CALL 
canonical__merge_proc_dynamic_normal_slot_11_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1);

static void MR_CALL 
canonical__merge_proc_dynamic_normal_slot_11_p_0(
  MR_Word canonical__MergeInfo_12,
  MR_Integer canonical__SlotNum_13,
  MR_Word canonical__Clique_14,
  MR_Word canonical__PrimePDPtr_15,
  MR_Word canonical__PrimeCSDPtr0_16,
  MR_Word canonical__RestSiteArrays_17,
  MR_Word * canonical__PrimeCSDPtr_18,
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_22,
  MR_Word * canonical__STATE_VARIABLE_InitDeep_23,
  MR_Word canonical__STATE_VARIABLE_Redirect_0_24,
  MR_Word * canonical__STATE_VARIABLE_Redirect_25);

static void MR_CALL 
canonical__merge_proc_dynamic_slots_11_p_0_2(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box * canonical__wrapper_arg_3,
  MR_Box canonical__wrapper_arg_4,
  MR_Box * canonical__wrapper_arg_5,
  MR_Box canonical__wrapper_arg_6,
  MR_Box * canonical__wrapper_arg_7);

static void MR_CALL 
canonical__merge_proc_dynamic_slots_11_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box * canonical__wrapper_arg_3);

static void MR_CALL 
canonical__merge_proc_dynamic_slots_11_p_0(
  MR_Word canonical__MergeInfo_12,
  MR_Integer canonical__SlotNum_13,
  MR_Word canonical__Clique_14,
  MR_Word canonical__PrimePDPtr_15,
  MR_ArrayPtr canonical__STATE_VARIABLE_PrimeSiteArray_0_28,
  MR_Word canonical__RestSiteArrays_17,
  MR_ArrayPtr * canonical__STATE_VARIABLE_PrimeSiteArray_29,
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_30,
  MR_Word * canonical__STATE_VARIABLE_InitDeep_31,
  MR_Word canonical__STATE_VARIABLE_Redirect_0_32,
  MR_Word * canonical__STATE_VARIABLE_Redirect_33);

static void MR_CALL 
canonical__merge_proc_dynamics_8_p_0_4(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2);

static void MR_CALL 
canonical__merge_proc_dynamics_8_p_0_3(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2);

static MR_bool MR_CALL 
canonical__merge_proc_dynamics_8_p_0_2(
  MR_Box canonical__closure_arg);

static MR_bool MR_CALL 
canonical__merge_proc_dynamics_8_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1);

static void MR_CALL 
canonical__merge_proc_dynamics_8_p_0(
  MR_Word canonical__MergeInfo_9,
  MR_Word canonical__Clique_10,
  MR_Word canonical__CandidatePDPtrs_11,
  MR_Word * canonical__ChosenPDPtr_12,
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_29,
  MR_Word * canonical__STATE_VARIABLE_InitDeep_30,
  MR_Word canonical__STATE_VARIABLE_Redirect_0_31,
  MR_Word * canonical__STATE_VARIABLE_Redirect_32);

static void MR_CALL 
canonical__record_csd_redirect_4_p_0(
  MR_Word canonical__RestCSDPtrs_5,
  MR_Word canonical__PrimeCSDPtr_6,
  MR_Word canonical__STATE_VARIABLE_Redirect_0_10,
  MR_Word * canonical__STATE_VARIABLE_Redirect_11);

static void MR_CALL 
canonical__record_csd_redirect_2_4_p_0(
  MR_Word canonical__HeadVar__1_1,
  MR_Word canonical__PrimeCSDPtr_2,
  MR_Word canonical__STATE_VARIABLE_Redirect_0_3,
  MR_Word * canonical__STATE_VARIABLE_Redirect_4);

static void MR_CALL 
canonical__record_pd_redirect_4_p_0(
  MR_Word canonical__RestPDPtrs_5,
  MR_Word canonical__PrimePDPtr_6,
  MR_Word canonical__STATE_VARIABLE_Redirect_0_10,
  MR_Word * canonical__STATE_VARIABLE_Redirect_11);

static void MR_CALL 
canonical__record_pd_redirect_2_4_p_0(
  MR_Word canonical__HeadVar__1_1,
  MR_Word canonical__PrimePDPtr_2,
  MR_Word canonical__STATE_VARIABLE_Redirect_0_3,
  MR_Word * canonical__STATE_VARIABLE_Redirect_4);

static MR_bool MR_CALL 
canonical__callee_in_clique_3_p_0(
  MR_Word canonical__InitDeep_4,
  MR_Word canonical__Clique_5,
  MR_Word canonical__CSDPtr_6);

static void MR_CALL 
canonical__lookup_pd_site_3_p_0(
  MR_Word canonical__InitDeep_4,
  MR_Word canonical__PDPtr_5,
  MR_ArrayPtr * canonical__Sites_6);

static void MR_CALL 
canonical__complete_clique_ps_7_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2);

static void MR_CALL 
canonical__complete_clique_ps_7_p_0(
  MR_Word canonical__InitDeep_8,
  MR_Word canonical__Clique_9,
  MR_Word canonical__HeadVar__3_3,
  MR_Word canonical__STATE_VARIABLE_ProcMap_0_19,
  MR_Word * canonical__STATE_VARIABLE_ProcMap_20,
  MR_Word canonical__STATE_VARIABLE_AddedPD_0_21,
  MR_Word * canonical__STATE_VARIABLE_AddedPD_22);

static void MR_CALL 
canonical__complete_clique_slots_9_p_0_3(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box * canonical__wrapper_arg_3);

static void MR_CALL 
canonical__complete_clique_slots_9_p_0_2(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2);

static MR_bool MR_CALL 
canonical__complete_clique_slots_9_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1);

static void MR_CALL 
canonical__complete_clique_slots_9_p_0(
  MR_Integer canonical__SlotNum_10,
  MR_Word canonical__InitDeep_11,
  MR_Word canonical__Clique_12,
  MR_ArrayPtr canonical__PSSites_13,
  MR_Word canonical__PDSites_14,
  MR_Word canonical__STATE_VARIABLE_ProcMap_0_29,
  MR_Word * canonical__STATE_VARIABLE_ProcMap_30,
  MR_Word canonical__STATE_VARIABLE_AddedPD_0_31,
  MR_Word * canonical__STATE_VARIABLE_AddedPD_32);

static void MR_CALL 
canonical__lookup_multi_sites_3_p_0(
  MR_Word canonical__HeadVar__1_1,
  MR_Integer canonical__SlotNum_2,
  MR_Word * canonical__HeadVar__3_3);

static void MR_CALL 
canonical__lookup_normal_sites_3_p_0(
  MR_Word canonical__HeadVar__1_1,
  MR_Integer canonical__SlotNum_2,
  MR_Word * canonical__HeadVar__3_3);

static void MR_CALL 
canonical__canonicalize_cliques_2_p_0_2(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2);

static void MR_CALL 
canonical__canonicalize_cliques_2_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2);

static void MR_CALL 
canonical__compact_pd_redirect_6_p_0(
  MR_Integer canonical__CurOld_7,
  MR_Integer canonical__CurNew_8,
  MR_Integer canonical__MaxOld_9,
  MR_Integer * canonical__NumNew_10,
  MR_ArrayPtr canonical__STATE_VARIABLE_PDredirect_0_13,
  MR_ArrayPtr * canonical__STATE_VARIABLE_PDredirect_14);

static void MR_CALL 
canonical__compact_csd_redirect_6_p_0(
  MR_Integer canonical__CurOld_7,
  MR_Integer canonical__CurNew_8,
  MR_Integer canonical__MaxOld_9,
  MR_Integer * canonical__NumNew_10,
  MR_ArrayPtr canonical__STATE_VARIABLE_CSDredirect_0_13,
  MR_ArrayPtr * canonical__STATE_VARIABLE_CSDredirect_14);

static void MR_CALL 
canonical__merge_cliques_6_p_0_4(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box * canonical__wrapper_arg_3,
  MR_Box canonical__wrapper_arg_4,
  MR_Box * canonical__wrapper_arg_5);

static MR_bool MR_CALL 
canonical__merge_cliques_6_p_0_3(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1);

static MR_bool MR_CALL 
canonical__merge_cliques_6_p_0_2(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1);

static void MR_CALL 
canonical__merge_cliques_6_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box * canonical__wrapper_arg_3);

static void MR_CALL 
canonical__merge_cliques_6_p_0(
  MR_Word canonical__HeadVar__1_1,
  MR_Word canonical__MergeInfo_2,
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_3,
  MR_Word * canonical__STATE_VARIABLE_InitDeep_4,
  MR_Word canonical__STATE_VARIABLE_Redirect_0_5,
  MR_Word * canonical__STATE_VARIABLE_Redirect_6);

static void MR_CALL 
canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0_2(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box * canonical__wrapper_arg_3,
  MR_Box canonical__wrapper_arg_4,
  MR_Box * canonical__wrapper_arg_5);

static void MR_CALL 
canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box * canonical__wrapper_arg_3);

static void MR_CALL 
canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0(
  MR_Word canonical__InitDeep_6,
  MR_Word canonical__STATE_VARIABLE_ProcMap_0_13,
  MR_Word * canonical__STATE_VARIABLE_ProcMap_14,
  MR_Word * canonical__Clique_9);


static /* final */ const MR_Box canonical_scalar_common_1[10][2];

static /* final */ const MR_Box canonical_scalar_common_2[10][3];

static /* final */ const MR_Box canonical_scalar_common_3[11][6];

static /* final */ const MR_Box canonical_scalar_common_4[2][10];

static /* final */ const MR_Box canonical_scalar_common_5[3][7];

static /* final */ const MR_Box canonical_scalar_common_6[1][4];

static /* final */ const MR_Box canonical_scalar_common_7[6][5];

static /* final */ const MR_Box canonical_scalar_common_8[1][13];




static /* final */ const MR_Box canonical_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&canonical_scalar_common_1[0]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0))
  },
};

static /* final */ const MR_Box canonical_scalar_common_2[10][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&canonical_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&canonical_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&canonical_scalar_common_1[4]))
  },
  /* row 3 */
  {
    ((MR_Box) (&canonical_scalar_common_3[0])),
    ((MR_Box) (canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&canonical_scalar_common_6[0])),
    ((MR_Box) (canonical__merge_cliques_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&canonical_scalar_common_6[0])),
    ((MR_Box) (canonical__merge_cliques_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&canonical_scalar_common_7[3])),
    ((MR_Box) (canonical__merge_proc_dynamics_8_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&canonical_scalar_common_3[7])),
    ((MR_Box) (canonical__merge_call_site_dynamics_2_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&canonical_scalar_common_7[5])),
    ((MR_Box) (canonical__merge_call_site_dynamics_descendants_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&canonical_scalar_common_7[3])),
    ((MR_Box) (canonical__merge_proc_dynamics_ignore_chosen_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box canonical_scalar_common_3[11][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&canonical__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&canonical__canonical__type_ctor_info_redirect_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&canonical__canonical__type_ctor_info_redirect_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&canonical__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&canonical__canonical__type_ctor_info_redirect_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box canonical_scalar_common_4[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&canonical__canonical__type_ctor_info_merge_info_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box canonical_scalar_common_6[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&canonical__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box canonical_scalar_common_7[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&canonical__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&canonical__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&canonical__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&canonical__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box canonical_scalar_common_8[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
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
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 canonical__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

static const MR_FA_TypeInfo_Struct1 canonical__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 canonical__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &canonical__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &canonical__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_0
  }
};

static const MR_FA_TypeInfo_Struct1 canonical__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &canonical__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 canonical__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_TypeInfo_Struct1 canonical__array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &canonical__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

static const MR_FA_TypeInfo_Struct1 canonical__array__ti_array_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

static const MR_PseudoTypeInfo canonical__canonical__field_types_merge_info_0_0[2] = {
  (MR_PseudoTypeInfo) &canonical__array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &canonical__array__ti_array_1profile__type_ctor_info_clique_ptr_0
};

static const MR_ConstString canonical__canonical__field_names_merge_info_0_0[2] = {
  (MR_String) "merge_clique_members",
  (MR_String) "merge_clique_index"
};

static const MR_DuFunctorDesc canonical__canonical__du_functor_desc_merge_info_0_0 = {
  (MR_String) "merge_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  canonical__canonical__field_types_merge_info_0_0,
  canonical__canonical__field_names_merge_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr canonical__canonical__du_stag_ordered_merge_info_0_0[1] = {
  &canonical__canonical__du_functor_desc_merge_info_0_0
};

static const MR_DuPtagLayout canonical__canonical__du_ptag_ordered_merge_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    canonical__canonical__du_stag_ordered_merge_info_0_0
  }
};

static const MR_DuFunctorDescPtr canonical__canonical__du_name_ordered_merge_info_0[1] = {
  &canonical__canonical__du_functor_desc_merge_info_0_0
};

static const MR_Integer canonical__canonical__functor_number_map_merge_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct canonical__canonical__type_ctor_info_merge_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (canonical____Unify____merge_info_0_0_10001)),
  ((MR_Box) (canonical____Compare____merge_info_0_0_10001)),
  (MR_String) "canonical",
  (MR_String) "merge_info",
  {     canonical__canonical__du_name_ordered_merge_info_0 },
  {     canonical__canonical__du_ptag_ordered_merge_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  canonical__canonical__functor_number_map_merge_info_0
};

static const MR_FA_TypeInfo_Struct1 canonical__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_TypeInfo_Struct1 canonical__array__ti_array_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

static const MR_PseudoTypeInfo canonical__canonical__field_types_redirect_0_0[2] = {
  (MR_PseudoTypeInfo) &canonical__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &canonical__array__ti_array_1profile__type_ctor_info_proc_dynamic_ptr_0
};

static const MR_ConstString canonical__canonical__field_names_redirect_0_0[2] = {
  (MR_String) "csd_redirect",
  (MR_String) "pd_redirect"
};

static const MR_DuFunctorDesc canonical__canonical__du_functor_desc_redirect_0_0 = {
  (MR_String) "redirect",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  canonical__canonical__field_types_redirect_0_0,
  canonical__canonical__field_names_redirect_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr canonical__canonical__du_stag_ordered_redirect_0_0[1] = {
  &canonical__canonical__du_functor_desc_redirect_0_0
};

static const MR_DuPtagLayout canonical__canonical__du_ptag_ordered_redirect_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    canonical__canonical__du_stag_ordered_redirect_0_0
  }
};

static const MR_DuFunctorDescPtr canonical__canonical__du_name_ordered_redirect_0[1] = {
  &canonical__canonical__du_functor_desc_redirect_0_0
};

static const MR_Integer canonical__canonical__functor_number_map_redirect_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct canonical__canonical__type_ctor_info_redirect_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (canonical____Unify____redirect_0_0_10001)),
  ((MR_Box) (canonical____Compare____redirect_0_0_10001)),
  (MR_String) "canonical",
  (MR_String) "redirect",
  {     canonical__canonical__du_name_ordered_redirect_0 },
  {     canonical__canonical__du_ptag_ordered_redirect_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  canonical__canonical__functor_number_map_redirect_0
};

static MR_bool MR_CALL 
canonical____Unify____merge_info_0_0_10001(
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2)
{
  {
    MR_bool canonical__succeeded;

    {
      canonical__succeeded = canonical____Unify____merge_info_0_0(((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2));
    }
    return canonical__succeeded;
  }
}

static void MR_CALL 
canonical____Compare____merge_info_0_0_10001(
  MR_Box * canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box canonical__wrapper_arg_3)
{
  {
    MR_Word canonical__conv0_HeadVar__1_1;

    {
      canonical____Compare____merge_info_0_0(&canonical__conv0_HeadVar__1_1, ((MR_Word) canonical__wrapper_arg_2), ((MR_Word) canonical__wrapper_arg_3));
    }
    *canonical__wrapper_arg_1 = ((MR_Box) (canonical__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
canonical____Unify____redirect_0_0_10001(
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2)
{
  {
    MR_bool canonical__succeeded;

    {
      canonical__succeeded = canonical____Unify____redirect_0_0(((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2));
    }
    return canonical__succeeded;
  }
}

static void MR_CALL 
canonical____Compare____redirect_0_0_10001(
  MR_Box * canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box canonical__wrapper_arg_3)
{
  {
    MR_Word canonical__conv0_HeadVar__1_1;

    {
      canonical____Compare____redirect_0_0(&canonical__conv0_HeadVar__1_1, ((MR_Word) canonical__wrapper_arg_2), ((MR_Word) canonical__wrapper_arg_3));
    }
    *canonical__wrapper_arg_1 = ((MR_Box) (canonical__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__418__1_2_p_0(
  MR_Word canonical__InClique_17,
  MR_Word canonical__HeadVar__2_43)
{
  {
    MR_bool canonical__succeeded;

    {
      canonical__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &canonical_scalar_common_1[4], ((MR_Box) (canonical__InClique_17)), ((MR_Box) (canonical__HeadVar__2_43)));
    }
    return canonical__succeeded;
  }
}

static MR_bool MR_CALL 
canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__413__1_2_p_0(
  MR_Word canonical__NotInClique_18,
  MR_Word canonical__HeadVar__2_38)
{
  {
    MR_bool canonical__succeeded;

    {
      canonical__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &canonical_scalar_common_1[4], ((MR_Box) (canonical__NotInClique_18)), ((MR_Box) (canonical__HeadVar__2_38)));
    }
    return canonical__succeeded;
  }
}

static MR_bool MR_CALL 
canonical__IntroducedFrom__pred__merge_proc_dynamics__239__1_2_p_0(
  MR_Word canonical__InvalidPDPtrs_17,
  MR_Word canonical__HeadVar__2_36)
{
  {
    MR_bool canonical__succeeded;

    {
      canonical__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &canonical_scalar_common_1[0], ((MR_Box) (canonical__InvalidPDPtrs_17)), ((MR_Box) (canonical__HeadVar__2_36)));
    }
    return canonical__succeeded;
  }
}

static void MR_CALL 
canonical__IntroducedFrom__pred__complete_clique__130__1_3_p_0(
  MR_Word canonical__HeadVar__1_22,
  MR_Word canonical__HeadVar__2_23,
  MR_Word * canonical__HeadVar__3_24)
{
  {
    MR_bool canonical__succeeded;

    {
      mercury__set__insert_list_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, canonical__HeadVar__1_22, canonical__HeadVar__2_23, canonical__HeadVar__3_24);
    }
  }
}

static void MR_CALL 
canonical____Compare____redirect_0_0(
  MR_Word * canonical__HeadVar__1_1,
  MR_Word canonical__HeadVar__2_2,
  MR_Word canonical__HeadVar__3_3)
{
  {
    MR_bool canonical__succeeded;
    MR_Integer canonical__CastX_9 = (MR_Integer) canonical__HeadVar__2_2;
    MR_Integer canonical__CastY_10 = (MR_Integer) canonical__HeadVar__3_3;

    canonical__succeeded = (canonical__CastX_9 == canonical__CastY_10);
    if (canonical__succeeded)
      *canonical__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_ArrayPtr canonical__ArgX1_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__2_2, (MR_Integer) 0)));
        MR_ArrayPtr canonical__ArgY1_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__3_3, (MR_Integer) 0)));
        MR_ArrayPtr canonical__ArgX2_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__2_2, (MR_Integer) 1)));
        MR_ArrayPtr canonical__ArgY2_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word canonical__Var_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &canonical_scalar_common_1[7], &canonical__Var_8, ((MR_Box) (canonical__ArgX1_4)), ((MR_Box) (canonical__ArgY1_5)));
        }
        canonical__succeeded = (canonical__Var_8 == (MR_Integer) 0);
        canonical__succeeded = !(canonical__succeeded);
        if (canonical__succeeded)
          *canonical__HeadVar__1_1 = canonical__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &canonical_scalar_common_1[6], canonical__HeadVar__1_1, ((MR_Box) (canonical__ArgX2_6)), ((MR_Box) (canonical__ArgY2_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
canonical____Unify____redirect_0_0(
  MR_Word canonical__HeadVar__1_1,
  MR_Word canonical__HeadVar__2_2)
{
  {
    MR_bool canonical__succeeded;
    MR_Integer canonical__CastX_7 = (MR_Integer) canonical__HeadVar__1_1;
    MR_Integer canonical__CastY_8 = (MR_Integer) canonical__HeadVar__2_2;

    canonical__succeeded = (canonical__CastX_7 == canonical__CastY_8);
    if (canonical__succeeded)
      canonical__succeeded = MR_TRUE;
    else
      {
        MR_Word canonical__TypeCtorInfo_10_10;
        MR_ArrayPtr canonical__ArgX1_3 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__1_1, (MR_Integer) 0)));
        MR_ArrayPtr canonical__ArgY1_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__2_2, (MR_Integer) 0)));
        MR_ArrayPtr canonical__ArgX2_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__1_1, (MR_Integer) 1)));
        MR_ArrayPtr canonical__ArgY2_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__2_2, (MR_Integer) 1)));

        {
          canonical__succeeded = mercury__array____Unify____array_1_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) canonical__ArgX1_3, (MR_ArrayPtr) canonical__ArgY1_4);
        }
        if (canonical__succeeded)
          {
            canonical__TypeCtorInfo_10_10 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0;
            {
              canonical__succeeded = mercury__array____Unify____array_1_0(canonical__TypeCtorInfo_10_10, (MR_ArrayPtr) canonical__ArgX2_5, (MR_ArrayPtr) canonical__ArgY2_6);
            }
          }
      }
    return canonical__succeeded;
  }
}

static void MR_CALL 
canonical____Compare____merge_info_0_0(
  MR_Word * canonical__HeadVar__1_1,
  MR_Word canonical__HeadVar__2_2,
  MR_Word canonical__HeadVar__3_3)
{
  {
    MR_bool canonical__succeeded;
    MR_Integer canonical__CastX_9 = (MR_Integer) canonical__HeadVar__2_2;
    MR_Integer canonical__CastY_10 = (MR_Integer) canonical__HeadVar__3_3;

    canonical__succeeded = (canonical__CastX_9 == canonical__CastY_10);
    if (canonical__succeeded)
      *canonical__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_ArrayPtr canonical__ArgX1_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__2_2, (MR_Integer) 0)));
        MR_ArrayPtr canonical__ArgY1_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__3_3, (MR_Integer) 0)));
        MR_ArrayPtr canonical__ArgX2_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__2_2, (MR_Integer) 1)));
        MR_ArrayPtr canonical__ArgY2_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word canonical__Var_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &canonical_scalar_common_1[8], &canonical__Var_8, ((MR_Box) (canonical__ArgX1_4)), ((MR_Box) (canonical__ArgY1_5)));
        }
        canonical__succeeded = (canonical__Var_8 == (MR_Integer) 0);
        canonical__succeeded = !(canonical__succeeded);
        if (canonical__succeeded)
          *canonical__HeadVar__1_1 = canonical__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &canonical_scalar_common_1[9], canonical__HeadVar__1_1, ((MR_Box) (canonical__ArgX2_6)), ((MR_Box) (canonical__ArgY2_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
canonical____Unify____merge_info_0_0(
  MR_Word canonical__HeadVar__1_1,
  MR_Word canonical__HeadVar__2_2)
{
  {
    MR_bool canonical__succeeded;
    MR_Integer canonical__CastX_7 = (MR_Integer) canonical__HeadVar__1_1;
    MR_Integer canonical__CastY_8 = (MR_Integer) canonical__HeadVar__2_2;

    canonical__succeeded = (canonical__CastX_7 == canonical__CastY_8);
    if (canonical__succeeded)
      canonical__succeeded = MR_TRUE;
    else
      {
        MR_Word canonical__TypeCtorInfo_10_10;
        MR_ArrayPtr canonical__ArgX1_3 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__1_1, (MR_Integer) 0)));
        MR_ArrayPtr canonical__ArgY1_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__2_2, (MR_Integer) 0)));
        MR_ArrayPtr canonical__ArgX2_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__1_1, (MR_Integer) 1)));
        MR_ArrayPtr canonical__ArgY2_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__2_2, (MR_Integer) 1)));

        {
          canonical__succeeded = mercury__array____Unify____array_1_0((MR_Word) &canonical_scalar_common_1[0], (MR_ArrayPtr) canonical__ArgX1_3, (MR_ArrayPtr) canonical__ArgY1_4);
        }
        if (canonical__succeeded)
          {
            canonical__TypeCtorInfo_10_10 = (MR_Word) &profile__profile__type_ctor_info_clique_ptr_0;
            {
              canonical__succeeded = mercury__array____Unify____array_1_0(canonical__TypeCtorInfo_10_10, (MR_ArrayPtr) canonical__ArgX2_5, (MR_ArrayPtr) canonical__ArgY2_6);
            }
          }
      }
    return canonical__succeeded;
  }
}

static void MR_CALL 
canonical__subst_in_slot_3_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_Word canonical__conv0_OldRedirect_6;

    {
      canonical__lookup_csd_redirect_3_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv0_OldRedirect_6);
    }
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv0_OldRedirect_6));
  }
}

static void MR_CALL 
canonical__subst_in_slot_3_p_0(
  MR_Word canonical__Redirect_1,
  MR_Word canonical__HeadVar__2_2,
  MR_Word * canonical__HeadVar__3_3)
{
  {
    MR_bool canonical__succeeded;
    MR_ArrayPtr canonical__Var_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__Redirect_1, (MR_Integer) 0)));
    MR_ArrayPtr canonical__Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__Redirect_1, (MR_Integer) 1)));

    if (((MR_tag((MR_Word) canonical__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word canonical__TypeCtorInfo_20_20;
        MR_Word canonical__IsZeroed_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__2_2, (MR_Integer) 0)));
        MR_ArrayPtr canonical__CSDPtrs0_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), canonical__HeadVar__2_2, (MR_Integer) 1)));
        MR_ArrayPtr canonical__CSDPtrs_11;
        MR_Word canonical__Var_12;
        MR_ArrayPtr canonical__Var_13;
        MR_Box canonical__conv1_Var_13;
        MR_ArrayPtr canonical__conv2_CSDPtrs_11;

        {
          canonical__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), canonical__Var_12, 0) = ((MR_Box) (&canonical_scalar_common_3[10]));
          MR_hl_field(MR_mktag(0), canonical__Var_12, 1) = ((MR_Box) (canonical__subst_in_slot_3_p_0_1));
          MR_hl_field(MR_mktag(0), canonical__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), canonical__Var_12, 3) = ((MR_Box) (canonical__Var_22));
        }
        {
          canonical__conv1_Var_13 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[7], ((MR_Box) (canonical__CSDPtrs0_10)));
        }
        canonical__Var_13 = ((MR_ArrayPtr) canonical__conv1_Var_13);
        canonical__TypeCtorInfo_20_20 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
        {
          mercury__array__map_3_p_0(canonical__TypeCtorInfo_20_20, canonical__TypeCtorInfo_20_20, canonical__Var_12, (MR_ArrayPtr) canonical__Var_13, &canonical__conv2_CSDPtrs_11);
        }
        canonical__CSDPtrs_11 = (MR_ArrayPtr) canonical__conv2_CSDPtrs_11;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *canonical__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (canonical__IsZeroed_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (canonical__CSDPtrs_11));
        }
      }
    else
      {
        MR_Word canonical__CSDPtr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word canonical__CSDPtr_6;
        MR_Integer canonical__CSDI_26 = (MR_Integer) canonical__CSDPtr0_5;
        MR_Box canonical__conv3_CSDPtr_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) canonical__Var_22, canonical__CSDI_26, &canonical__conv3_CSDPtr_6);
        }
        canonical__CSDPtr_6 = ((MR_Word) canonical__conv3_CSDPtr_6);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *canonical__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (canonical__CSDPtr_6));
        }
      }
  }
}

static void MR_CALL 
canonical__subst_in_proc_dynamic_3_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_Word canonical__conv0_HeadVar__3_3;

    {
      canonical__subst_in_slot_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv0_HeadVar__3_3);
    }
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
canonical__subst_in_proc_dynamic_3_p_0(
  MR_Word canonical__Redirect_4,
  MR_Word canonical__STATE_VARIABLE_PD_0_10,
  MR_Word * canonical__STATE_VARIABLE_PD_11)
{
  {
    MR_bool canonical__succeeded;
    MR_Word canonical__TypeCtorInfo_18_18;
    MR_Word canonical__PDPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_PD_0_10, (MR_Integer) 0)));
    MR_ArrayPtr canonical__Slots0_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_PD_0_10, (MR_Integer) 1)));
    MR_Word canonical__MaybeCPs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_PD_0_10, (MR_Integer) 2)));
    MR_ArrayPtr canonical__Slots_9;
    MR_Word canonical__Var_12;
    MR_ArrayPtr canonical__Var_13;
    MR_Box canonical__conv1_Var_13;
    MR_ArrayPtr canonical__conv2_Slots_9;

    {
      canonical__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), canonical__Var_12, 0) = ((MR_Box) (&canonical_scalar_common_3[9]));
      MR_hl_field(MR_mktag(0), canonical__Var_12, 1) = ((MR_Box) (canonical__subst_in_proc_dynamic_3_p_0_1));
      MR_hl_field(MR_mktag(0), canonical__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), canonical__Var_12, 3) = ((MR_Box) (canonical__Redirect_4));
    }
    {
      canonical__conv1_Var_13 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[2], ((MR_Box) (canonical__Slots0_7)));
    }
    canonical__Var_13 = ((MR_ArrayPtr) canonical__conv1_Var_13);
    canonical__TypeCtorInfo_18_18 = (MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0;
    {
      mercury__array__map_3_p_0(canonical__TypeCtorInfo_18_18, canonical__TypeCtorInfo_18_18, canonical__Var_12, (MR_ArrayPtr) canonical__Var_13, &canonical__conv2_Slots_9);
    }
    canonical__Slots_9 = (MR_ArrayPtr) canonical__conv2_Slots_9;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *canonical__STATE_VARIABLE_PD_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (canonical__PDPtr_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (canonical__Slots_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (canonical__MaybeCPs_8));
    }
  }
}

static void MR_CALL 
canonical__subst_in_call_site_dynamic_3_p_0(
  MR_Word canonical__Redirect_4,
  MR_Word canonical__STATE_VARIABLE_CSD_0_11,
  MR_Word * canonical__STATE_VARIABLE_CSD_12)
{
  {
    MR_bool canonical__succeeded;
    MR_Word canonical__Caller0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_CSD_0_11, (MR_Integer) 0)));
    MR_Word canonical__Callee0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_CSD_0_11, (MR_Integer) 1)));
    MR_Word canonical__Own_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_CSD_0_11, (MR_Integer) 2)));
    MR_Word canonical__Caller_9;
    MR_Word canonical__Callee_10;
    MR_ArrayPtr canonical__Var_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__Redirect_4, (MR_Integer) 1)));
    MR_ArrayPtr canonical__Var_14;
    MR_Integer canonical__PDI_21 = (MR_Integer) canonical__Caller0_6;
    MR_Integer canonical__PDI_26;
    MR_ArrayPtr canonical__Var_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__Redirect_4, (MR_Integer) 0)));
    MR_Box canonical__conv0_Caller_9;
    MR_ArrayPtr canonical__Var_17;
    MR_Box canonical__conv1_Callee_10;

    {
      mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_ArrayPtr) canonical__Var_13, canonical__PDI_21, &canonical__conv0_Caller_9);
    }
    canonical__Caller_9 = ((MR_Word) canonical__conv0_Caller_9);
    canonical__Var_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__Redirect_4, (MR_Integer) 0)));
    canonical__Var_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__Redirect_4, (MR_Integer) 1)));
    canonical__PDI_26 = (MR_Integer) canonical__Callee0_7;
    {
      mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_ArrayPtr) canonical__Var_14, canonical__PDI_26, &canonical__conv1_Callee_10);
    }
    canonical__Callee_10 = ((MR_Word) canonical__conv1_Callee_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *canonical__STATE_VARIABLE_CSD_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (canonical__Caller_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (canonical__Callee_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (canonical__Own_8));
    }
  }
}

static void MR_CALL 
canonical__lookup_csd_redirect_3_p_0(
  MR_ArrayPtr canonical__CallSiteRedirect0_4,
  MR_Word canonical__CSDPtr_5,
  MR_Word * canonical__OldRedirect_6)
{
  {
    MR_bool canonical__succeeded;
    MR_Integer canonical__CSDI_7 = (MR_Integer) canonical__CSDPtr_5;
    MR_Box canonical__conv0_OldRedirect_6;

    {
      mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) canonical__CallSiteRedirect0_4, canonical__CSDI_7, &canonical__conv0_OldRedirect_6);
    }
    *canonical__OldRedirect_6 = ((MR_Word) canonical__conv0_OldRedirect_6);
  }
}

static void MR_CALL 
canonical__cluster_csds_by_ps_4_p_0(
  MR_Word canonical__InitDeep_5,
  MR_Word canonical__CSDPtr_6,
  MR_Word canonical__STATE_VARIABLE_ProcMap_0_15,
  MR_Word * canonical__STATE_VARIABLE_ProcMap_16)
{
  {
    MR_bool canonical__succeeded;
    MR_ArrayPtr canonical__CallSiteDynamics_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 2)));
    MR_Word canonical__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 0)));
    MR_Word canonical__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 1)));
    MR_ArrayPtr canonical__Var_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 3)));
    MR_ArrayPtr canonical__Var_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 4)));
    MR_ArrayPtr canonical__Var_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 5)));

    {
      canonical__succeeded = profile__valid_call_site_dynamic_ptr_raw_2_p_0(canonical__CallSiteDynamics_8, canonical__CSDPtr_6);
    }
    if (canonical__succeeded)
      {
        MR_Word canonical__CSD_9;
        MR_Word canonical__PDPtr_10;
        MR_ArrayPtr canonical__ProcDynamics_11;
        MR_Word canonical__PSPtr_13;
        MR_Word canonical__Var_28;
        MR_Word canonical__Var_29;
        MR_Word canonical__Var_30;
        MR_Word canonical__Var_31;
        MR_ArrayPtr canonical__Var_32;
        MR_ArrayPtr canonical__Var_33;
        MR_ArrayPtr canonical__Var_34;
        MR_Word canonical__CSDPtrs0_14;
        MR_Box canonical__conv0_CSDPtrs0_14;

        {
          profile__lookup_call_site_dynamics_3_p_0(canonical__CallSiteDynamics_8, canonical__CSDPtr_6, &canonical__CSD_9);
        }
        canonical__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSD_9, (MR_Integer) 0)));
        canonical__PDPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSD_9, (MR_Integer) 1)));
        canonical__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSD_9, (MR_Integer) 2)));
        canonical__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 0)));
        canonical__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 1)));
        canonical__Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 2)));
        canonical__ProcDynamics_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 3)));
        canonical__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 4)));
        canonical__Var_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 5)));
        {
          canonical__succeeded = profile__valid_proc_dynamic_ptr_raw_2_p_0(canonical__ProcDynamics_11, canonical__PDPtr_10);
        }
        if (canonical__succeeded)
          {
            MR_Word canonical__PD_12;
            MR_ArrayPtr canonical__Var_35;
            MR_Word canonical__Var_36;

            {
              profile__lookup_proc_dynamics_3_p_0(canonical__ProcDynamics_11, canonical__PDPtr_10, &canonical__PD_12);
            }
            canonical__PSPtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PD_12, (MR_Integer) 0)));
            canonical__Var_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PD_12, (MR_Integer) 1)));
            canonical__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PD_12, (MR_Integer) 2)));
          }
        else
          {
            canonical__PSPtr_13 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
          }
        {
          canonical__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &canonical_scalar_common_1[4], canonical__STATE_VARIABLE_ProcMap_0_15, ((MR_Box) (canonical__PSPtr_13)), &canonical__conv0_CSDPtrs0_14);
        }
        if (canonical__succeeded)
          {
            canonical__CSDPtrs0_14 = ((MR_Word) canonical__conv0_CSDPtrs0_14);
            canonical__succeeded = MR_TRUE;
          }
        if (canonical__succeeded)
          {
            MR_Word canonical__Var_18;

            {
              canonical__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), canonical__Var_18, 0) = ((MR_Box) (canonical__CSDPtr_6));
              MR_hl_field(MR_mktag(1), canonical__Var_18, 1) = ((MR_Box) (canonical__CSDPtrs0_14));
            }
            {
              mercury__map__det_update_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &canonical_scalar_common_1[4], ((MR_Box) (canonical__PSPtr_13)), ((MR_Box) (canonical__Var_18)), canonical__STATE_VARIABLE_ProcMap_0_15, canonical__STATE_VARIABLE_ProcMap_16);
            }
          }
        else
          {
            MR_Word canonical__Var_20;

            {
              canonical__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), canonical__Var_20, 0) = ((MR_Box) (canonical__CSDPtr_6));
              MR_hl_field(MR_mktag(1), canonical__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__map__det_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &canonical_scalar_common_1[4], ((MR_Box) (canonical__PSPtr_13)), ((MR_Box) (canonical__Var_20)), canonical__STATE_VARIABLE_ProcMap_0_15, canonical__STATE_VARIABLE_ProcMap_16);
            }
          }
      }
    else
      *canonical__STATE_VARIABLE_ProcMap_16 = canonical__STATE_VARIABLE_ProcMap_0_15;
  }
}

static void MR_CALL 
canonical__cluster_pds_by_ps_4_p_0(
  MR_Word canonical__InitDeep_5,
  MR_Word canonical__PDPtr_6,
  MR_Word canonical__STATE_VARIABLE_ProcMap_0_12,
  MR_Word * canonical__STATE_VARIABLE_ProcMap_13)
{
  {
    MR_bool canonical__succeeded;
    MR_ArrayPtr canonical__ProcDynamics_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 3)));
    MR_Word canonical__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 0)));
    MR_Word canonical__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 1)));
    MR_ArrayPtr canonical__Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 2)));
    MR_ArrayPtr canonical__Var_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 4)));
    MR_ArrayPtr canonical__Var_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 5)));

    {
      canonical__succeeded = profile__valid_proc_dynamic_ptr_raw_2_p_0(canonical__ProcDynamics_8, canonical__PDPtr_6);
    }
    if (canonical__succeeded)
      {
        MR_Word canonical__PD_9;
        MR_Word canonical__PSPtr_10;
        MR_ArrayPtr canonical__Var_24;
        MR_Word canonical__Var_25;
        MR_Word canonical__PDPtrs0_11;
        MR_Box canonical__conv0_PDPtrs0_11;

        {
          profile__lookup_proc_dynamics_3_p_0(canonical__ProcDynamics_8, canonical__PDPtr_6, &canonical__PD_9);
        }
        canonical__PSPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PD_9, (MR_Integer) 0)));
        canonical__Var_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PD_9, (MR_Integer) 1)));
        canonical__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PD_9, (MR_Integer) 2)));
        {
          canonical__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &canonical_scalar_common_1[0], canonical__STATE_VARIABLE_ProcMap_0_12, ((MR_Box) (canonical__PSPtr_10)), &canonical__conv0_PDPtrs0_11);
        }
        if (canonical__succeeded)
          {
            canonical__PDPtrs0_11 = ((MR_Word) canonical__conv0_PDPtrs0_11);
            canonical__succeeded = MR_TRUE;
          }
        if (canonical__succeeded)
          {
            MR_Word canonical__Var_14;

            {
              canonical__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), canonical__Var_14, 0) = ((MR_Box) (canonical__PDPtr_6));
              MR_hl_field(MR_mktag(1), canonical__Var_14, 1) = ((MR_Box) (canonical__PDPtrs0_11));
            }
            {
              mercury__map__det_update_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &canonical_scalar_common_1[0], ((MR_Box) (canonical__PSPtr_10)), ((MR_Box) (canonical__Var_14)), canonical__STATE_VARIABLE_ProcMap_0_12, canonical__STATE_VARIABLE_ProcMap_13);
            }
          }
        else
          {
            MR_Word canonical__Var_16;

            {
              canonical__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), canonical__Var_16, 0) = ((MR_Box) (canonical__PDPtr_6));
              MR_hl_field(MR_mktag(1), canonical__Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__map__det_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &canonical_scalar_common_1[0], ((MR_Box) (canonical__PSPtr_10)), ((MR_Box) (canonical__Var_16)), canonical__STATE_VARIABLE_ProcMap_0_12, canonical__STATE_VARIABLE_ProcMap_13);
            }
          }
      }
    else
      *canonical__STATE_VARIABLE_ProcMap_13 = canonical__STATE_VARIABLE_ProcMap_0_12;
  }
}

static MR_bool MR_CALL 
canonical__two_or_more_1_p_0(
  MR_Word canonical__HeadVar__1_1)
{
  {
    MR_bool canonical__succeeded = ((MR_tag((MR_Word) canonical__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word canonical__Var_5;
    MR_Word canonical__Var_2;
    MR_Word canonical__Var_3;
    MR_Word canonical__Var_4;

    if (canonical__succeeded)
      {
        canonical__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 0)));
        canonical__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 1)));
        canonical__succeeded = ((MR_tag((MR_Word) canonical__Var_5)) == (MR_mktag((MR_Integer) 1)));
        if (canonical__succeeded)
          {
            canonical__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__Var_5, (MR_Integer) 0)));
            canonical__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__Var_5, (MR_Integer) 1)));
          }
      }
    return canonical__succeeded;
  }
}

static void MR_CALL 
canonical__union_cliques_4_p_0(
  MR_Word canonical__MergeInfo_5,
  MR_Word canonical__PDPtr_6,
  MR_Word canonical__STATE_VARIABLE_CliqueUnion_0_10,
  MR_Word * canonical__STATE_VARIABLE_CliqueUnion_11)
{
  {
    MR_bool canonical__succeeded;
    MR_Integer canonical__Var_12 = (MR_Integer) canonical__PDPtr_6;

    canonical__succeeded = (canonical__Var_12 == (MR_Integer) 0);
    if (canonical__succeeded)
      *canonical__STATE_VARIABLE_CliqueUnion_11 = canonical__STATE_VARIABLE_CliqueUnion_0_10;
    else
      {
        MR_Word canonical__CliquePtr_8;
        MR_Word canonical__Members_9;
        MR_ArrayPtr canonical__Var_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__MergeInfo_5, (MR_Integer) 1)));
        MR_ArrayPtr canonical__Var_14;
        MR_ArrayPtr canonical__Var_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__MergeInfo_5, (MR_Integer) 0)));
        MR_ArrayPtr canonical__Var_17;

        {
          profile__lookup_clique_index_3_p_0(canonical__Var_13, canonical__PDPtr_6, &canonical__CliquePtr_8);
        }
        canonical__Var_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__MergeInfo_5, (MR_Integer) 0)));
        canonical__Var_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__MergeInfo_5, (MR_Integer) 1)));
        {
          profile__lookup_clique_members_3_p_0(canonical__Var_14, canonical__CliquePtr_8, &canonical__Members_9);
        }
        {
          mercury__set__insert_list_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, canonical__Members_9, canonical__STATE_VARIABLE_CliqueUnion_0_10, canonical__STATE_VARIABLE_CliqueUnion_11);
        }
      }
  }
}

static MR_bool MR_CALL 
canonical__merge_multi_slot_cluster_10_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1)
{
  {
    MR_bool canonical__succeeded;
    MR_Box canonical__closure = canonical__closure_arg;

    {
      canonical__succeeded = profile__valid_call_site_dynamic_ptr_raw_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1));
    }
    return canonical__succeeded;
  }
}

static void MR_CALL 
canonical__merge_multi_slot_cluster_10_p_0(
  MR_Word canonical__MergeInfo_11,
  MR_Word canonical__ParentPDPtr_12,
  MR_Word canonical__Clique_13,
  MR_Word canonical__ClusterCSDPtrs_14,
  MR_Word canonical__PrimeCSDPtrs0_15,
  MR_Word * canonical__PrimeCSDPtrs_16,
  MR_Word canonical__InitDeep0_17,
  MR_Word * canonical__InitDeep_18,
  MR_Word canonical__Redirect0_19,
  MR_Word * canonical__Redirect_20)
{
  {
    MR_bool canonical__succeeded;
    MR_Word canonical__PrimeCSDPtr_21;
    MR_ArrayPtr canonical__CallSiteDynamics0_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_17, (MR_Integer) 2)));
    MR_Word canonical__ValidCSDPtrs_34;
    MR_Word canonical__Var_42;
    MR_Word canonical__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_17, (MR_Integer) 0)));
    MR_Word canonical__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_17, (MR_Integer) 1)));
    MR_ArrayPtr canonical__Var_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_17, (MR_Integer) 3)));
    MR_ArrayPtr canonical__Var_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_17, (MR_Integer) 4)));
    MR_ArrayPtr canonical__Var_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_17, (MR_Integer) 5)));

    {
      canonical__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), canonical__Var_42, 0) = ((MR_Box) (&canonical_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), canonical__Var_42, 1) = ((MR_Box) (canonical__merge_multi_slot_cluster_10_p_0_1));
      MR_hl_field(MR_mktag(0), canonical__Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), canonical__Var_42, 3) = ((MR_Box) (canonical__CallSiteDynamics0_33));
    }
    {
      mercury__list__filter_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, canonical__Var_42, canonical__ClusterCSDPtrs_14, &canonical__ValidCSDPtrs_34);
    }
    if ((canonical__ValidCSDPtrs_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        canonical__PrimeCSDPtr_21 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
        *canonical__InitDeep_18 = canonical__InitDeep0_17;
        *canonical__Redirect_20 = canonical__Redirect0_19;
      }
    else
      {
        MR_Word canonical__LaterCSDPtrs_36;
        MR_Word canonical__FirstCSD0_37;
        MR_Word canonical__FirstCSD_38;
        MR_ArrayPtr canonical__CallSiteDynamics_39;
        MR_ArrayPtr canonical__Var_43;
        MR_Word canonical__STATE_VARIABLE_InitDeep_32_44;
        MR_Word canonical__Var_54;
        MR_Word canonical__Var_55;
        MR_Word canonical__Var_53;
        MR_Box canonical__conv0_Var_43;
        MR_Word canonical__Var_56;
        MR_Word canonical__Var_57;
        MR_ArrayPtr canonical__Var_59;
        MR_ArrayPtr canonical__Var_60;
        MR_ArrayPtr canonical__Var_61;
        MR_ArrayPtr canonical__Var_58;

        canonical__PrimeCSDPtr_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__ValidCSDPtrs_34, (MR_Integer) 0)));
        canonical__LaterCSDPtrs_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__ValidCSDPtrs_34, (MR_Integer) 1)));
        {
          profile__lookup_call_site_dynamics_3_p_0(canonical__CallSiteDynamics0_33, canonical__PrimeCSDPtr_21, &canonical__FirstCSD0_37);
        }
        canonical__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__FirstCSD0_37, (MR_Integer) 0)));
        canonical__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__FirstCSD0_37, (MR_Integer) 1)));
        canonical__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__FirstCSD0_37, (MR_Integer) 2)));
        {
          canonical__FirstCSD_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), canonical__FirstCSD_38, 0) = ((MR_Box) (canonical__ParentPDPtr_12));
          MR_hl_field(MR_mktag(0), canonical__FirstCSD_38, 1) = ((MR_Box) (canonical__Var_54));
          MR_hl_field(MR_mktag(0), canonical__FirstCSD_38, 2) = ((MR_Box) (canonical__Var_55));
        }
        {
          canonical__conv0_Var_43 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[5], ((MR_Box) (canonical__CallSiteDynamics0_33)));
        }
        canonical__Var_43 = ((MR_ArrayPtr) canonical__conv0_Var_43);
        {
          profile__update_call_site_dynamics_4_p_0(canonical__PrimeCSDPtr_21, canonical__FirstCSD_38, canonical__Var_43, &canonical__CallSiteDynamics_39);
        }
        canonical__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_17, (MR_Integer) 0)));
        canonical__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_17, (MR_Integer) 1)));
        canonical__Var_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_17, (MR_Integer) 2)));
        canonical__Var_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_17, (MR_Integer) 3)));
        canonical__Var_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_17, (MR_Integer) 4)));
        canonical__Var_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_17, (MR_Integer) 5)));
        {
          canonical__STATE_VARIABLE_InitDeep_32_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_32_44, 0) = ((MR_Box) (canonical__Var_56));
          MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_32_44, 1) = ((MR_Box) (canonical__Var_57));
          MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_32_44, 2) = ((MR_Box) (canonical__CallSiteDynamics_39));
          MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_32_44, 3) = ((MR_Box) (canonical__Var_59));
          MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_32_44, 4) = ((MR_Box) (canonical__Var_60));
          MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_32_44, 5) = ((MR_Box) (canonical__Var_61));
        }
        if ((canonical__LaterCSDPtrs_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *canonical__InitDeep_18 = canonical__STATE_VARIABLE_InitDeep_32_44;
            *canonical__Redirect_20 = canonical__Redirect0_19;
          }
        else
          {
            canonical__merge_call_site_dynamics_2_8_p_0(canonical__MergeInfo_11, canonical__Clique_13, canonical__PrimeCSDPtr_21, canonical__LaterCSDPtrs_36, canonical__STATE_VARIABLE_InitDeep_32_44, canonical__InitDeep_18, canonical__Redirect0_19, canonical__Redirect_20);
          }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *canonical__PrimeCSDPtrs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (canonical__PrimeCSDPtr_21));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (canonical__PrimeCSDPtrs0_15));
    }
  }
}

static void MR_CALL 
canonical__accumulate_csd_owns_3_p_0(
  MR_Word canonical__CSD_4,
  MR_Word canonical__Own0_5,
  MR_Word * canonical__Own_6)
{
  {
    MR_bool canonical__succeeded;
    MR_Word canonical__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSD_4, (MR_Integer) 2)));
    MR_Word canonical__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSD_4, (MR_Integer) 0)));
    MR_Word canonical__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSD_4, (MR_Integer) 1)));

    {
      *canonical__Own_6 = measurements__add_own_to_own_2_f_0(canonical__Own0_5, canonical__Var_7);
    }
  }
}

static void MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_4(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_ArrayPtr canonical__conv1_HeadVar__2_2;

    {
      profile__extract_pd_sites_2_p_0(((MR_Word) canonical__wrapper_arg_1), &canonical__conv1_HeadVar__2_2);
    }
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv1_HeadVar__2_2));
  }
}

static void MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_3(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_Word canonical__conv0_HeadVar__3_3;

    {
      profile__lookup_proc_dynamics_3_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv0_HeadVar__3_3);
    }
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv0_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_2(
  MR_Box canonical__closure_arg)
{
  {
    MR_bool canonical__succeeded;
    MR_Box canonical__closure = canonical__closure_arg;

    {
      canonical__succeeded = canonical__IntroducedFrom__pred__merge_proc_dynamics__239__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 4))));
    }
    return canonical__succeeded;
  }
}

static MR_bool MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1)
{
  {
    MR_bool canonical__succeeded;
    MR_Box canonical__closure = canonical__closure_arg;

    {
      canonical__succeeded = profile__valid_proc_dynamic_ptr_raw_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1));
    }
    return canonical__succeeded;
  }
}

static void MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0(
  MR_Word canonical__MergeInfo_8,
  MR_Word canonical__Clique_9,
  MR_Word canonical__CandidatePDPtrs_10,
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_14,
  MR_Word * canonical__STATE_VARIABLE_InitDeep_15,
  MR_Word canonical__STATE_VARIABLE_Redirect_0_16,
  MR_Word * canonical__STATE_VARIABLE_Redirect_17)
{
  {
    MR_bool canonical__succeeded;
    MR_Word canonical__TypeCtorInfo_70_81;
    MR_ArrayPtr canonical__ProcDynamics0_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_14, (MR_Integer) 3)));
    MR_Word canonical__ValidPDPtrs_31;
    MR_Word canonical__InvalidPDPtrs_32;
    MR_Word canonical__Var_44;
    MR_Word canonical__Var_45;
    MR_Word canonical__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_14, (MR_Integer) 0)));
    MR_Word canonical__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_14, (MR_Integer) 1)));
    MR_ArrayPtr canonical__Var_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_14, (MR_Integer) 2)));
    MR_ArrayPtr canonical__Var_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_14, (MR_Integer) 4)));
    MR_ArrayPtr canonical__Var_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_14, (MR_Integer) 5)));

    {
      canonical__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), canonical__Var_44, 0) = ((MR_Box) (&canonical_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), canonical__Var_44, 1) = ((MR_Box) (canonical__merge_proc_dynamics_ignore_chosen_7_p_0_1));
      MR_hl_field(MR_mktag(0), canonical__Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), canonical__Var_44, 3) = ((MR_Box) (canonical__ProcDynamics0_30));
    }
    canonical__TypeCtorInfo_70_81 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0;
    {
      mercury__list__filter_4_p_0(canonical__TypeCtorInfo_70_81, canonical__Var_44, canonical__CandidatePDPtrs_10, &canonical__ValidPDPtrs_31, &canonical__InvalidPDPtrs_32);
    }
    {
      canonical__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), canonical__Var_45, 0) = ((MR_Box) (&canonical_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), canonical__Var_45, 1) = ((MR_Box) (canonical__merge_proc_dynamics_ignore_chosen_7_p_0_2));
      MR_hl_field(MR_mktag(0), canonical__Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), canonical__Var_45, 3) = ((MR_Box) (canonical__InvalidPDPtrs_32));
      MR_hl_field(MR_mktag(0), canonical__Var_45, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__require_2_p_0(canonical__Var_45, (MR_String) "merge_proc_dynamics: invalid pdptrs");
    }
    if ((canonical__ValidPDPtrs_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "canonical", (MR_String) "predicate \140canonical.merge_proc_dynamics\'/8", (MR_String) "no valid pdptrs");
          return;
        }
      }
    else
      {
        MR_Word canonical__TypeCtorInfo_74_85;
        MR_Word canonical__TypeInfo_77_88;
        MR_Word canonical___ChosenPDPtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__ValidPDPtrs_31, (MR_Integer) 0)));
        MR_Word canonical__RestPDPtrs_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__ValidPDPtrs_31, (MR_Integer) 1)));
        MR_Word canonical__PrimePD0_35;
        MR_Word canonical__RestPDs_36;
        MR_Word canonical__RestSites_37;
        MR_ArrayPtr canonical__PrimeSites0_38;
        MR_Integer canonical__MaxSiteNum_39;
        MR_ArrayPtr canonical__PrimeSites_40;
        MR_Word canonical__PrimePD_41;
        MR_ArrayPtr canonical__ProcDynamics1_42;
        MR_ArrayPtr canonical__ProcDynamics_43;
        MR_Word canonical__STATE_VARIABLE_Redirect_40_51;
        MR_Word canonical__Var_52;
        MR_ArrayPtr canonical__Var_54;
        MR_Word canonical__STATE_VARIABLE_InitDeep_44_55;
        MR_ArrayPtr canonical__Var_57;
        MR_Word canonical__Var_64;
        MR_Word canonical__Var_65;
        MR_Box canonical__conv2_Var_54;
        MR_Word canonical__Var_66;
        MR_Word canonical__Var_68;
        MR_ArrayPtr canonical__Var_67;
        MR_Word canonical__Var_69;
        MR_Word canonical__Var_70;
        MR_ArrayPtr canonical__Var_71;
        MR_ArrayPtr canonical__Var_72;
        MR_ArrayPtr canonical__Var_73;
        MR_Box canonical__conv3_Var_57;
        MR_Word canonical__Var_74;
        MR_Word canonical__Var_75;
        MR_ArrayPtr canonical__Var_76;
        MR_ArrayPtr canonical__Var_78;
        MR_ArrayPtr canonical__Var_79;
        MR_ArrayPtr canonical__Var_77;

        {
          canonical__record_pd_redirect_4_p_0(canonical__RestPDPtrs_34, canonical___ChosenPDPtr_13, canonical__STATE_VARIABLE_Redirect_0_16, &canonical__STATE_VARIABLE_Redirect_40_51);
        }
        {
          profile__lookup_proc_dynamics_3_p_0(canonical__ProcDynamics0_30, canonical___ChosenPDPtr_13, &canonical__PrimePD0_35);
        }
        {
          canonical__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), canonical__Var_52, 0) = ((MR_Box) (&canonical_scalar_common_3[5]));
          MR_hl_field(MR_mktag(0), canonical__Var_52, 1) = ((MR_Box) (canonical__merge_proc_dynamics_ignore_chosen_7_p_0_3));
          MR_hl_field(MR_mktag(0), canonical__Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), canonical__Var_52, 3) = ((MR_Box) (canonical__ProcDynamics0_30));
        }
        canonical__TypeCtorInfo_74_85 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
        {
          mercury__list__map_3_p_0(canonical__TypeCtorInfo_70_81, canonical__TypeCtorInfo_74_85, canonical__Var_52, canonical__RestPDPtrs_34, &canonical__RestPDs_36);
        }
        canonical__TypeInfo_77_88 = (MR_Word) &canonical_scalar_common_1[2];
        {
          mercury__list__map_3_p_0(canonical__TypeCtorInfo_74_85, canonical__TypeInfo_77_88, (MR_Word) &canonical_scalar_common_2[9], canonical__RestPDs_36, &canonical__RestSites_37);
        }
        canonical__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_35, (MR_Integer) 0)));
        canonical__PrimeSites0_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_35, (MR_Integer) 1)));
        canonical__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_35, (MR_Integer) 2)));
        {
          mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) canonical__PrimeSites0_38, &canonical__MaxSiteNum_39);
        }
        {
          canonical__conv2_Var_54 = array_util__u_1_f_0(canonical__TypeInfo_77_88, ((MR_Box) (canonical__PrimeSites0_38)));
        }
        canonical__Var_54 = ((MR_ArrayPtr) canonical__conv2_Var_54);
        {
          canonical__merge_proc_dynamic_slots_11_p_0(canonical__MergeInfo_8, canonical__MaxSiteNum_39, canonical__Clique_9, canonical___ChosenPDPtr_13, canonical__Var_54, canonical__RestSites_37, &canonical__PrimeSites_40, canonical__STATE_VARIABLE_InitDeep_0_14, &canonical__STATE_VARIABLE_InitDeep_44_55, canonical__STATE_VARIABLE_Redirect_40_51, canonical__STATE_VARIABLE_Redirect_17);
        }
        canonical__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_35, (MR_Integer) 0)));
        canonical__Var_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_35, (MR_Integer) 1)));
        canonical__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_35, (MR_Integer) 2)));
        {
          canonical__PrimePD_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), canonical__PrimePD_41, 0) = ((MR_Box) (canonical__Var_66));
          MR_hl_field(MR_mktag(0), canonical__PrimePD_41, 1) = ((MR_Box) (canonical__PrimeSites_40));
          MR_hl_field(MR_mktag(0), canonical__PrimePD_41, 2) = ((MR_Box) (canonical__Var_68));
        }
        canonical__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 0)));
        canonical__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 1)));
        canonical__Var_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 2)));
        canonical__ProcDynamics1_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 3)));
        canonical__Var_72 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 4)));
        canonical__Var_73 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 5)));
        {
          canonical__conv3_Var_57 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[3], ((MR_Box) (canonical__ProcDynamics1_42)));
        }
        canonical__Var_57 = ((MR_ArrayPtr) canonical__conv3_Var_57);
        {
          profile__update_proc_dynamics_4_p_0(canonical___ChosenPDPtr_13, canonical__PrimePD_41, canonical__Var_57, &canonical__ProcDynamics_43);
        }
        canonical__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 0)));
        canonical__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 1)));
        canonical__Var_76 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 2)));
        canonical__Var_77 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 3)));
        canonical__Var_78 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 4)));
        canonical__Var_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 5)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          *canonical__STATE_VARIABLE_InitDeep_15 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (canonical__Var_74));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (canonical__Var_75));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (canonical__Var_76));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (canonical__ProcDynamics_43));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (canonical__Var_78));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (canonical__Var_79));
        }
      }
  }
}

static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0_3(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box * canonical__wrapper_arg_3)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_Word canonical__conv2_STATE_VARIABLE_CliqueUnion_11;

    {
      canonical__union_cliques_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2), &canonical__conv2_STATE_VARIABLE_CliqueUnion_11);
    }
    *canonical__wrapper_arg_3 = ((MR_Box) (canonical__conv2_STATE_VARIABLE_CliqueUnion_11));
  }
}

static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0_2(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_Word canonical__conv1_HeadVar__2_2;

    {
      profile__extract_csd_callee_2_p_0(((MR_Word) canonical__wrapper_arg_1), &canonical__conv1_HeadVar__2_2);
    }
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv1_HeadVar__2_2));
  }
}

static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_Word canonical__conv0_HeadVar__3_3;

    {
      profile__lookup_call_site_dynamics_3_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv0_HeadVar__3_3);
    }
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0(
  MR_Word canonical__MergeInfo_9,
  MR_Word canonical__PrimeCSDPtr_10,
  MR_Word canonical__RestCSDPtrs_11,
  MR_Word * canonical__ChosenPDPtr_12,
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_22,
  MR_Word * canonical__STATE_VARIABLE_InitDeep_23,
  MR_Word canonical__STATE_VARIABLE_Redirect_0_24,
  MR_Word * canonical__STATE_VARIABLE_Redirect_25)
{
  {
    MR_bool canonical__succeeded;
    MR_Word canonical__TypeCtorInfo_40_40;
    MR_Word canonical__TypeCtorInfo_43_43;
    MR_ArrayPtr canonical__CallSiteDynamics_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 2)));
    MR_Word canonical__PrimeCSD_16;
    MR_Word canonical__PrimeCSDCallee_17;
    MR_Word canonical__RestCSDs_18;
    MR_Word canonical__RestCSDCallees_19;
    MR_Word canonical__PDPtrs_20;
    MR_Word canonical__CliqueUnion_21;
    MR_Word canonical__Var_26;
    MR_Word canonical__Var_28;
    MR_Word canonical__Var_29;
    MR_Word canonical__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 0)));
    MR_Word canonical__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 1)));
    MR_ArrayPtr canonical__Var_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 3)));
    MR_ArrayPtr canonical__Var_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 4)));
    MR_ArrayPtr canonical__Var_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 5)));
    MR_Box canonical__conv3_CliqueUnion_21;

    {
      profile__lookup_call_site_dynamics_3_p_0(canonical__CallSiteDynamics_15, canonical__PrimeCSDPtr_10, &canonical__PrimeCSD_16);
    }
    {
      profile__extract_csd_callee_2_p_0(canonical__PrimeCSD_16, &canonical__PrimeCSDCallee_17);
    }
    {
      canonical__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), canonical__Var_26, 0) = ((MR_Box) (&canonical_scalar_common_3[8]));
      MR_hl_field(MR_mktag(0), canonical__Var_26, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_descendants_8_p_0_1));
      MR_hl_field(MR_mktag(0), canonical__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), canonical__Var_26, 3) = ((MR_Box) (canonical__CallSiteDynamics_15));
    }
    canonical__TypeCtorInfo_40_40 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
    {
      mercury__list__map_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, canonical__TypeCtorInfo_40_40, canonical__Var_26, canonical__RestCSDPtrs_11, &canonical__RestCSDs_18);
    }
    canonical__TypeCtorInfo_43_43 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0;
    {
      mercury__list__map_3_p_0(canonical__TypeCtorInfo_40_40, canonical__TypeCtorInfo_43_43, (MR_Word) &canonical_scalar_common_2[8], canonical__RestCSDs_18, &canonical__RestCSDCallees_19);
    }
    {
      canonical__PDPtrs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), canonical__PDPtrs_20, 0) = ((MR_Box) (canonical__PrimeCSDCallee_17));
      MR_hl_field(MR_mktag(1), canonical__PDPtrs_20, 1) = ((MR_Box) (canonical__RestCSDCallees_19));
    }
    {
      canonical__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), canonical__Var_28, 0) = ((MR_Box) (&canonical_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), canonical__Var_28, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_descendants_8_p_0_3));
      MR_hl_field(MR_mktag(0), canonical__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), canonical__Var_28, 3) = ((MR_Box) (canonical__MergeInfo_9));
    }
    {
      canonical__Var_29 = mercury__set__init_0_f_0(canonical__TypeCtorInfo_43_43);
    }
    {
      mercury__list__foldl_4_p_0(canonical__TypeCtorInfo_43_43, (MR_Word) &canonical_scalar_common_1[1], canonical__Var_28, canonical__PDPtrs_20, ((MR_Box) (canonical__Var_29)), &canonical__conv3_CliqueUnion_21);
    }
    canonical__CliqueUnion_21 = ((MR_Word) canonical__conv3_CliqueUnion_21);
    {
      canonical__merge_proc_dynamics_8_p_0(canonical__MergeInfo_9, canonical__CliqueUnion_21, canonical__PDPtrs_20, canonical__ChosenPDPtr_12, canonical__STATE_VARIABLE_InitDeep_0_22, canonical__STATE_VARIABLE_InitDeep_23, canonical__STATE_VARIABLE_Redirect_0_24, canonical__STATE_VARIABLE_Redirect_25);
    }
  }
}

static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_6(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_Word canonical__conv4_HeadVar__3_3;

    {
      profile__lookup_call_site_dynamics_3_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv4_HeadVar__3_3);
    }
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv4_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_5(
  MR_Box canonical__closure_arg)
{
  {
    MR_bool canonical__succeeded;
    MR_Box canonical__closure = canonical__closure_arg;

    {
      canonical__succeeded = canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__418__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 4))));
    }
    return canonical__succeeded;
  }
}

static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_4(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_Word canonical__conv1_HeadVar__3_3;

    {
      profile__lookup_call_site_dynamics_3_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv1_HeadVar__3_3);
    }
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv1_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_3(
  MR_Box canonical__closure_arg)
{
  {
    MR_bool canonical__succeeded;
    MR_Box canonical__closure = canonical__closure_arg;

    {
      canonical__succeeded = canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__413__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 4))));
    }
    return canonical__succeeded;
  }
}

static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_2(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box * canonical__wrapper_arg_3)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_Word canonical__conv0_Own_6;

    {
      canonical__accumulate_csd_owns_3_p_0(((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2), &canonical__conv0_Own_6);
    }
    *canonical__wrapper_arg_3 = ((MR_Box) (canonical__conv0_Own_6));
  }
}

static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1)
{
  {
    MR_bool canonical__succeeded;
    MR_Box canonical__closure = canonical__closure_arg;

    {
      canonical__succeeded = canonical__callee_in_clique_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 4))), ((MR_Word) canonical__wrapper_arg_1));
    }
    return canonical__succeeded;
  }
}

static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0(
  MR_Word canonical__MergeInfo_9,
  MR_Word canonical__Clique_10,
  MR_Word canonical__PrimeCSDPtr_11,
  MR_Word canonical__RestCSDPtrs_12,
  MR_Word canonical__InitDeep0_13,
  MR_Word * canonical__InitDeep_14,
  MR_Word canonical__Redirect0_15,
  MR_Word * canonical__Redirect_16)
{
  {
    MR_bool canonical__succeeded;
    MR_Word canonical__TypeCtorInfo_81_81;
    MR_Word canonical__TypeCtorInfo_86_86;
    MR_Word canonical__TypeCtorInfo_90_90;
    MR_Word canonical__TypeInfo_91_91;
    MR_Word canonical__InClique_17;
    MR_Word canonical__NotInClique_18;
    MR_Word canonical__Redirect1_20;
    MR_Word canonical__Var_35;
    MR_Word canonical__Var_47;

    {
      canonical__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), canonical__Var_35, 0) = ((MR_Box) (&canonical_scalar_common_3[6]));
      MR_hl_field(MR_mktag(0), canonical__Var_35, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_2_8_p_0_1));
      MR_hl_field(MR_mktag(0), canonical__Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), canonical__Var_35, 3) = ((MR_Box) (canonical__InitDeep0_13));
      MR_hl_field(MR_mktag(0), canonical__Var_35, 4) = ((MR_Box) (canonical__Clique_10));
    }
    canonical__TypeCtorInfo_81_81 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
    {
      mercury__list__filter_4_p_0(canonical__TypeCtorInfo_81_81, canonical__Var_35, canonical__RestCSDPtrs_12, &canonical__InClique_17, &canonical__NotInClique_18);
    }
    {
      canonical__record_csd_redirect_4_p_0(canonical__RestCSDPtrs_12, canonical__PrimeCSDPtr_11, canonical__Redirect0_15, &canonical__Redirect1_20);
    }
    canonical__TypeCtorInfo_86_86 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
    canonical__Var_47 = (MR_Word) &canonical_scalar_common_2[7];
    canonical__TypeCtorInfo_90_90 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
    canonical__TypeInfo_91_91 = (MR_Word) &canonical_scalar_common_1[5];
    {
      canonical__succeeded = canonical__callee_in_clique_3_p_0(canonical__InitDeep0_13, canonical__Clique_10, canonical__PrimeCSDPtr_11);
    }
    if (canonical__succeeded)
      {
        MR_ArrayPtr canonical__CallSiteDynamics0_21;
        MR_Word canonical__PrimeCSD0_22;
        MR_Word canonical__RestCSDs_23;
        MR_Word canonical__PrimeOwn0_24;
        MR_Word canonical__PrimeOwn1_25;
        MR_Word canonical__PrimeCSD1_26;
        MR_ArrayPtr canonical__CallSiteDynamics1_27;
        MR_Word canonical__Var_36;
        MR_Word canonical__Var_46;
        MR_ArrayPtr canonical__Var_48;
        MR_Word canonical__Var_50;
        MR_Word canonical__Var_51;
        MR_ArrayPtr canonical__Var_52;
        MR_ArrayPtr canonical__Var_53;
        MR_ArrayPtr canonical__Var_54;
        MR_Word canonical__Var_55;
        MR_Word canonical__Var_56;
        MR_Box canonical__conv2_PrimeOwn1_25;
        MR_Box canonical__conv3_Var_48;

        {
          canonical__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), canonical__Var_36, 0) = ((MR_Box) (&canonical_scalar_common_7[4]));
          MR_hl_field(MR_mktag(0), canonical__Var_36, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_2_8_p_0_3));
          MR_hl_field(MR_mktag(0), canonical__Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), canonical__Var_36, 3) = ((MR_Box) (canonical__NotInClique_18));
          MR_hl_field(MR_mktag(0), canonical__Var_36, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__require__require_2_p_0(canonical__Var_36, (MR_String) "merge_proc_dynamic_normal_slot: prime in clique, others not in clique");
        }
        canonical__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 0)));
        canonical__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 1)));
        canonical__CallSiteDynamics0_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 2)));
        canonical__Var_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 3)));
        canonical__Var_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 4)));
        canonical__Var_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 5)));
        {
          profile__lookup_call_site_dynamics_3_p_0(canonical__CallSiteDynamics0_21, canonical__PrimeCSDPtr_11, &canonical__PrimeCSD0_22);
        }
        {
          canonical__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), canonical__Var_46, 0) = ((MR_Box) (&canonical_scalar_common_3[8]));
          MR_hl_field(MR_mktag(0), canonical__Var_46, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_2_8_p_0_4));
          MR_hl_field(MR_mktag(0), canonical__Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), canonical__Var_46, 3) = ((MR_Box) (canonical__CallSiteDynamics0_21));
        }
        {
          mercury__list__map_3_p_0(canonical__TypeCtorInfo_81_81, canonical__TypeCtorInfo_86_86, canonical__Var_46, canonical__RestCSDPtrs_12, &canonical__RestCSDs_23);
        }
        canonical__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimeCSD0_22, (MR_Integer) 0)));
        canonical__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimeCSD0_22, (MR_Integer) 1)));
        canonical__PrimeOwn0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimeCSD0_22, (MR_Integer) 2)));
        {
          mercury__list__foldl_4_p_0(canonical__TypeCtorInfo_86_86, canonical__TypeCtorInfo_90_90, canonical__Var_47, canonical__RestCSDs_23, ((MR_Box) (canonical__PrimeOwn0_24)), &canonical__conv2_PrimeOwn1_25);
        }
        canonical__PrimeOwn1_25 = ((MR_Word) canonical__conv2_PrimeOwn1_25);
        {
          canonical__PrimeCSD1_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), canonical__PrimeCSD1_26, 0) = ((MR_Box) (canonical__Var_55));
          MR_hl_field(MR_mktag(0), canonical__PrimeCSD1_26, 1) = ((MR_Box) (canonical__Var_56));
          MR_hl_field(MR_mktag(0), canonical__PrimeCSD1_26, 2) = ((MR_Box) (canonical__PrimeOwn1_25));
        }
        {
          canonical__conv3_Var_48 = array_util__u_1_f_0(canonical__TypeInfo_91_91, ((MR_Box) (canonical__CallSiteDynamics0_21)));
        }
        canonical__Var_48 = ((MR_ArrayPtr) canonical__conv3_Var_48);
        {
          profile__update_call_site_dynamics_4_p_0(canonical__PrimeCSDPtr_11, canonical__PrimeCSD1_26, canonical__Var_48, &canonical__CallSiteDynamics1_27);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          *canonical__InitDeep_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (canonical__Var_50));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (canonical__Var_51));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (canonical__CallSiteDynamics1_27));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (canonical__Var_52));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (canonical__Var_53));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (canonical__Var_54));
        }
        *canonical__Redirect_16 = canonical__Redirect1_20;
      }
    else
      {
        MR_Word canonical__ChosenPDPtr_29;
        MR_Word canonical__InitDeep2_30;
        MR_ArrayPtr canonical__CallSiteDynamics2_31;
        MR_Word canonical__PrimeCSD2_32;
        MR_Word canonical__PrimeCSD_33;
        MR_ArrayPtr canonical__CallSiteDynamics_34;
        MR_Word canonical__Var_41;
        MR_ArrayPtr canonical__Var_49;
        MR_Word canonical__Var_66;
        MR_Word canonical__Var_67;
        MR_ArrayPtr canonical__Var_68;
        MR_ArrayPtr canonical__Var_69;
        MR_ArrayPtr canonical__Var_70;
        MR_ArrayPtr canonical__CallSiteDynamics0_114;
        MR_Word canonical__PrimeCSD0_115;
        MR_Word canonical__RestCSDs_116;
        MR_Word canonical__PrimeOwn0_117;
        MR_Word canonical__PrimeOwn1_118;
        MR_Word canonical__PrimeCSD1_119;
        MR_ArrayPtr canonical__CallSiteDynamics1_120;
        MR_Word canonical__InitDeep1_121;
        MR_Word canonical__Var_122;
        MR_ArrayPtr canonical__Var_123;
        MR_Word canonical__Var_124;
        MR_Word canonical__Var_125;
        MR_ArrayPtr canonical__Var_126;
        MR_ArrayPtr canonical__Var_127;
        MR_ArrayPtr canonical__Var_128;
        MR_Word canonical__Var_129;
        MR_Word canonical__Var_130;
        MR_Box canonical__conv5_PrimeOwn1_118;
        MR_Box canonical__conv6_Var_123;
        MR_Word canonical__Var_71;
        MR_Word canonical__Var_73;
        MR_Word canonical__Var_72;
        MR_Box canonical__conv7_Var_49;

        {
          canonical__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), canonical__Var_41, 0) = ((MR_Box) (&canonical_scalar_common_7[4]));
          MR_hl_field(MR_mktag(0), canonical__Var_41, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_2_8_p_0_5));
          MR_hl_field(MR_mktag(0), canonical__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), canonical__Var_41, 3) = ((MR_Box) (canonical__InClique_17));
          MR_hl_field(MR_mktag(0), canonical__Var_41, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__require__require_2_p_0(canonical__Var_41, (MR_String) "merge_proc_dynamic_normal_slot: prime not in clique, others in clique");
        }
        canonical__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 0)));
        canonical__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 1)));
        canonical__CallSiteDynamics0_114 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 2)));
        canonical__Var_126 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 3)));
        canonical__Var_127 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 4)));
        canonical__Var_128 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 5)));
        {
          profile__lookup_call_site_dynamics_3_p_0(canonical__CallSiteDynamics0_114, canonical__PrimeCSDPtr_11, &canonical__PrimeCSD0_115);
        }
        {
          canonical__Var_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), canonical__Var_122, 0) = ((MR_Box) (&canonical_scalar_common_3[8]));
          MR_hl_field(MR_mktag(0), canonical__Var_122, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_2_8_p_0_6));
          MR_hl_field(MR_mktag(0), canonical__Var_122, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), canonical__Var_122, 3) = ((MR_Box) (canonical__CallSiteDynamics0_114));
        }
        {
          mercury__list__map_3_p_0(canonical__TypeCtorInfo_81_81, canonical__TypeCtorInfo_86_86, canonical__Var_122, canonical__RestCSDPtrs_12, &canonical__RestCSDs_116);
        }
        canonical__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimeCSD0_115, (MR_Integer) 0)));
        canonical__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimeCSD0_115, (MR_Integer) 1)));
        canonical__PrimeOwn0_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimeCSD0_115, (MR_Integer) 2)));
        {
          mercury__list__foldl_4_p_0(canonical__TypeCtorInfo_86_86, canonical__TypeCtorInfo_90_90, canonical__Var_47, canonical__RestCSDs_116, ((MR_Box) (canonical__PrimeOwn0_117)), &canonical__conv5_PrimeOwn1_118);
        }
        canonical__PrimeOwn1_118 = ((MR_Word) canonical__conv5_PrimeOwn1_118);
        {
          canonical__PrimeCSD1_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), canonical__PrimeCSD1_119, 0) = ((MR_Box) (canonical__Var_129));
          MR_hl_field(MR_mktag(0), canonical__PrimeCSD1_119, 1) = ((MR_Box) (canonical__Var_130));
          MR_hl_field(MR_mktag(0), canonical__PrimeCSD1_119, 2) = ((MR_Box) (canonical__PrimeOwn1_118));
        }
        {
          canonical__conv6_Var_123 = array_util__u_1_f_0(canonical__TypeInfo_91_91, ((MR_Box) (canonical__CallSiteDynamics0_114)));
        }
        canonical__Var_123 = ((MR_ArrayPtr) canonical__conv6_Var_123);
        {
          profile__update_call_site_dynamics_4_p_0(canonical__PrimeCSDPtr_11, canonical__PrimeCSD1_119, canonical__Var_123, &canonical__CallSiteDynamics1_120);
        }
        {
          canonical__InitDeep1_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), canonical__InitDeep1_121, 0) = ((MR_Box) (canonical__Var_124));
          MR_hl_field(MR_mktag(0), canonical__InitDeep1_121, 1) = ((MR_Box) (canonical__Var_125));
          MR_hl_field(MR_mktag(0), canonical__InitDeep1_121, 2) = ((MR_Box) (canonical__CallSiteDynamics1_120));
          MR_hl_field(MR_mktag(0), canonical__InitDeep1_121, 3) = ((MR_Box) (canonical__Var_126));
          MR_hl_field(MR_mktag(0), canonical__InitDeep1_121, 4) = ((MR_Box) (canonical__Var_127));
          MR_hl_field(MR_mktag(0), canonical__InitDeep1_121, 5) = ((MR_Box) (canonical__Var_128));
        }
        {
          canonical__merge_call_site_dynamics_descendants_8_p_0(canonical__MergeInfo_9, canonical__PrimeCSDPtr_11, canonical__RestCSDPtrs_12, &canonical__ChosenPDPtr_29, canonical__InitDeep1_121, &canonical__InitDeep2_30, canonical__Redirect1_20, canonical__Redirect_16);
        }
        canonical__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep2_30, (MR_Integer) 0)));
        canonical__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep2_30, (MR_Integer) 1)));
        canonical__CallSiteDynamics2_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep2_30, (MR_Integer) 2)));
        canonical__Var_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep2_30, (MR_Integer) 3)));
        canonical__Var_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep2_30, (MR_Integer) 4)));
        canonical__Var_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep2_30, (MR_Integer) 5)));
        {
          profile__lookup_call_site_dynamics_3_p_0(canonical__CallSiteDynamics2_31, canonical__PrimeCSDPtr_11, &canonical__PrimeCSD2_32);
        }
        canonical__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimeCSD2_32, (MR_Integer) 0)));
        canonical__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimeCSD2_32, (MR_Integer) 1)));
        canonical__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimeCSD2_32, (MR_Integer) 2)));
        {
          canonical__PrimeCSD_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), canonical__PrimeCSD_33, 0) = ((MR_Box) (canonical__Var_71));
          MR_hl_field(MR_mktag(0), canonical__PrimeCSD_33, 1) = ((MR_Box) (canonical__ChosenPDPtr_29));
          MR_hl_field(MR_mktag(0), canonical__PrimeCSD_33, 2) = ((MR_Box) (canonical__Var_73));
        }
        {
          canonical__conv7_Var_49 = array_util__u_1_f_0(canonical__TypeInfo_91_91, ((MR_Box) (canonical__CallSiteDynamics2_31)));
        }
        canonical__Var_49 = ((MR_ArrayPtr) canonical__conv7_Var_49);
        {
          profile__update_call_site_dynamics_4_p_0(canonical__PrimeCSDPtr_11, canonical__PrimeCSD_33, canonical__Var_49, &canonical__CallSiteDynamics_34);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          *canonical__InitDeep_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (canonical__Var_66));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (canonical__Var_67));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (canonical__CallSiteDynamics_34));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (canonical__Var_68));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (canonical__Var_69));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (canonical__Var_70));
        }
      }
  }
}

static MR_bool MR_CALL 
canonical__merge_proc_dynamic_normal_slot_11_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1)
{
  {
    MR_bool canonical__succeeded;
    MR_Box canonical__closure = canonical__closure_arg;

    {
      canonical__succeeded = profile__valid_call_site_dynamic_ptr_raw_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1));
    }
    return canonical__succeeded;
  }
}

static void MR_CALL 
canonical__merge_proc_dynamic_normal_slot_11_p_0(
  MR_Word canonical__MergeInfo_12,
  MR_Integer canonical__SlotNum_13,
  MR_Word canonical__Clique_14,
  MR_Word canonical__PrimePDPtr_15,
  MR_Word canonical__PrimeCSDPtr0_16,
  MR_Word canonical__RestSiteArrays_17,
  MR_Word * canonical__PrimeCSDPtr_18,
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_22,
  MR_Word * canonical__STATE_VARIABLE_InitDeep_23,
  MR_Word canonical__STATE_VARIABLE_Redirect_0_24,
  MR_Word * canonical__STATE_VARIABLE_Redirect_25)
{
  {
    MR_bool canonical__succeeded;
    MR_Word canonical__RestCSDPtrs_21;
    MR_Word canonical__Var_26;
    MR_ArrayPtr canonical__CallSiteDynamics0_40;
    MR_Word canonical__ValidCSDPtrs_41;
    MR_Word canonical__Var_49;
    MR_Word canonical__Var_55;
    MR_Word canonical__Var_56;
    MR_ArrayPtr canonical__Var_57;
    MR_ArrayPtr canonical__Var_58;
    MR_ArrayPtr canonical__Var_59;

    {
      canonical__lookup_normal_sites_3_p_0(canonical__RestSiteArrays_17, canonical__SlotNum_13, &canonical__RestCSDPtrs_21);
    }
    {
      canonical__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), canonical__Var_26, 0) = ((MR_Box) (canonical__PrimeCSDPtr0_16));
      MR_hl_field(MR_mktag(1), canonical__Var_26, 1) = ((MR_Box) (canonical__RestCSDPtrs_21));
    }
    canonical__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 0)));
    canonical__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 1)));
    canonical__CallSiteDynamics0_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 2)));
    canonical__Var_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 3)));
    canonical__Var_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 4)));
    canonical__Var_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 5)));
    {
      canonical__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), canonical__Var_49, 0) = ((MR_Box) (&canonical_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), canonical__Var_49, 1) = ((MR_Box) (canonical__merge_proc_dynamic_normal_slot_11_p_0_1));
      MR_hl_field(MR_mktag(0), canonical__Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), canonical__Var_49, 3) = ((MR_Box) (canonical__CallSiteDynamics0_40));
    }
    {
      mercury__list__filter_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, canonical__Var_49, canonical__Var_26, &canonical__ValidCSDPtrs_41);
    }
    if ((canonical__ValidCSDPtrs_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *canonical__PrimeCSDPtr_18 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
        *canonical__STATE_VARIABLE_InitDeep_23 = canonical__STATE_VARIABLE_InitDeep_0_22;
        *canonical__STATE_VARIABLE_Redirect_25 = canonical__STATE_VARIABLE_Redirect_0_24;
      }
    else
      {
        MR_Word canonical__LaterCSDPtrs_43;
        MR_Word canonical__FirstCSD0_44;
        MR_Word canonical__FirstCSD_45;
        MR_ArrayPtr canonical__CallSiteDynamics_46;
        MR_ArrayPtr canonical__Var_50;
        MR_Word canonical__STATE_VARIABLE_InitDeep_32_51;
        MR_Word canonical__Var_61;
        MR_Word canonical__Var_62;
        MR_Word canonical__Var_60;
        MR_Box canonical__conv0_Var_50;
        MR_Word canonical__Var_63;
        MR_Word canonical__Var_64;
        MR_ArrayPtr canonical__Var_66;
        MR_ArrayPtr canonical__Var_67;
        MR_ArrayPtr canonical__Var_68;
        MR_ArrayPtr canonical__Var_65;

        *canonical__PrimeCSDPtr_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__ValidCSDPtrs_41, (MR_Integer) 0)));
        canonical__LaterCSDPtrs_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__ValidCSDPtrs_41, (MR_Integer) 1)));
        {
          profile__lookup_call_site_dynamics_3_p_0(canonical__CallSiteDynamics0_40, *canonical__PrimeCSDPtr_18, &canonical__FirstCSD0_44);
        }
        canonical__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__FirstCSD0_44, (MR_Integer) 0)));
        canonical__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__FirstCSD0_44, (MR_Integer) 1)));
        canonical__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__FirstCSD0_44, (MR_Integer) 2)));
        {
          canonical__FirstCSD_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), canonical__FirstCSD_45, 0) = ((MR_Box) (canonical__PrimePDPtr_15));
          MR_hl_field(MR_mktag(0), canonical__FirstCSD_45, 1) = ((MR_Box) (canonical__Var_61));
          MR_hl_field(MR_mktag(0), canonical__FirstCSD_45, 2) = ((MR_Box) (canonical__Var_62));
        }
        {
          canonical__conv0_Var_50 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[5], ((MR_Box) (canonical__CallSiteDynamics0_40)));
        }
        canonical__Var_50 = ((MR_ArrayPtr) canonical__conv0_Var_50);
        {
          profile__update_call_site_dynamics_4_p_0(*canonical__PrimeCSDPtr_18, canonical__FirstCSD_45, canonical__Var_50, &canonical__CallSiteDynamics_46);
        }
        canonical__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 0)));
        canonical__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 1)));
        canonical__Var_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 2)));
        canonical__Var_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 3)));
        canonical__Var_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 4)));
        canonical__Var_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 5)));
        {
          canonical__STATE_VARIABLE_InitDeep_32_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_32_51, 0) = ((MR_Box) (canonical__Var_63));
          MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_32_51, 1) = ((MR_Box) (canonical__Var_64));
          MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_32_51, 2) = ((MR_Box) (canonical__CallSiteDynamics_46));
          MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_32_51, 3) = ((MR_Box) (canonical__Var_66));
          MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_32_51, 4) = ((MR_Box) (canonical__Var_67));
          MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_32_51, 5) = ((MR_Box) (canonical__Var_68));
        }
        if ((canonical__LaterCSDPtrs_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *canonical__STATE_VARIABLE_InitDeep_23 = canonical__STATE_VARIABLE_InitDeep_32_51;
            *canonical__STATE_VARIABLE_Redirect_25 = canonical__STATE_VARIABLE_Redirect_0_24;
          }
        else
          {
            canonical__merge_call_site_dynamics_2_8_p_0(canonical__MergeInfo_12, canonical__Clique_14, *canonical__PrimeCSDPtr_18, canonical__LaterCSDPtrs_43, canonical__STATE_VARIABLE_InitDeep_32_51, canonical__STATE_VARIABLE_InitDeep_23, canonical__STATE_VARIABLE_Redirect_0_24, canonical__STATE_VARIABLE_Redirect_25);
          }
      }
  }
}

static void MR_CALL 
canonical__merge_proc_dynamic_slots_11_p_0_2(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box * canonical__wrapper_arg_3,
  MR_Box canonical__wrapper_arg_4,
  MR_Box * canonical__wrapper_arg_5,
  MR_Box canonical__wrapper_arg_6,
  MR_Box * canonical__wrapper_arg_7)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_Word canonical__conv5_PrimeCSDPtrs_16;
    MR_Word canonical__conv4_InitDeep_18;
    MR_Word canonical__conv3_Redirect_20;

    {
      canonical__merge_multi_slot_cluster_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 5))), ((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2), &canonical__conv5_PrimeCSDPtrs_16, ((MR_Word) canonical__wrapper_arg_4), &canonical__conv4_InitDeep_18, ((MR_Word) canonical__wrapper_arg_6), &canonical__conv3_Redirect_20);
    }
    *canonical__wrapper_arg_3 = ((MR_Box) (canonical__conv5_PrimeCSDPtrs_16));
    *canonical__wrapper_arg_5 = ((MR_Box) (canonical__conv4_InitDeep_18));
    *canonical__wrapper_arg_7 = ((MR_Box) (canonical__conv3_Redirect_20));
  }
}

static void MR_CALL 
canonical__merge_proc_dynamic_slots_11_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box * canonical__wrapper_arg_3)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_Word canonical__conv1_STATE_VARIABLE_ProcMap_16;

    {
      canonical__cluster_csds_by_ps_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2), &canonical__conv1_STATE_VARIABLE_ProcMap_16);
    }
    *canonical__wrapper_arg_3 = ((MR_Box) (canonical__conv1_STATE_VARIABLE_ProcMap_16));
  }
}

static void MR_CALL 
canonical__merge_proc_dynamic_slots_11_p_0(
  MR_Word canonical__MergeInfo_12,
  MR_Integer canonical__SlotNum_13,
  MR_Word canonical__Clique_14,
  MR_Word canonical__PrimePDPtr_15,
  MR_ArrayPtr canonical__STATE_VARIABLE_PrimeSiteArray_0_28,
  MR_Word canonical__RestSiteArrays_17,
  MR_ArrayPtr * canonical__STATE_VARIABLE_PrimeSiteArray_29,
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_30,
  MR_Word * canonical__STATE_VARIABLE_InitDeep_31,
  MR_Word canonical__STATE_VARIABLE_Redirect_0_32,
  MR_Word * canonical__STATE_VARIABLE_Redirect_33)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool canonical__succeeded = (canonical__SlotNum_13 >= (MR_Integer) 0);

        if (canonical__succeeded)
          {
            MR_Word canonical__TypeCtorInfo_48_48 = (MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0;
            MR_Word canonical__PrimeSite0_20;
            MR_Word canonical__STATE_VARIABLE_InitDeep_39_39;
            MR_Word canonical__STATE_VARIABLE_Redirect_40_40;
            MR_ArrayPtr canonical__STATE_VARIABLE_PrimeSiteArray_42_42;
            MR_Integer canonical__Var_43;
            MR_Box canonical__conv0_PrimeSite0_20;

            {
              mercury__array__lookup_3_p_0(canonical__TypeCtorInfo_48_48, (MR_ArrayPtr) canonical__STATE_VARIABLE_PrimeSiteArray_0_28, canonical__SlotNum_13, &canonical__conv0_PrimeSite0_20);
            }
            canonical__PrimeSite0_20 = ((MR_Word) canonical__conv0_PrimeSite0_20);
            if (((MR_tag((MR_Word) canonical__PrimeSite0_20)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word canonical__TypeCtorInfo_49_49 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
                MR_Word canonical__TypeCtorInfo_36_74;
                MR_Word canonical__TypeCtorInfo_37_75;
                MR_Word canonical__TypeInfo_38_76;
                MR_Word canonical__IsZeroed_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__PrimeSite0_20, (MR_Integer) 0)));
                MR_ArrayPtr canonical__PrimeCSDPtrArray0_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), canonical__PrimeSite0_20, (MR_Integer) 1)));
                MR_Word canonical__PrimeCSDPtrList0_25;
                MR_Word canonical__PrimeCSDPtrList_26;
                MR_ArrayPtr canonical__PrimeCSDPtrArray_27;
                MR_Word canonical__Var_37;
                MR_Word canonical__RestCSDPtrLists_63;
                MR_Word canonical__AllCSDPtrs_64;
                MR_Word canonical__ProcMap0_65;
                MR_Word canonical__ProcMap_66;
                MR_Word canonical__CSDPtrsClusters_67;
                MR_Word canonical__Var_68;
                MR_Word canonical__Var_69;
                MR_Word canonical__Var_70;
                MR_Box canonical__conv2_ProcMap_66;
                MR_Box canonical__conv8_PrimeCSDPtrList_26;
                MR_Box canonical__conv7_STATE_VARIABLE_InitDeep_39_39;
                MR_Box canonical__conv6_STATE_VARIABLE_Redirect_40_40;
                MR_ArrayPtr canonical__conv9_PrimeCSDPtrArray_27;
                MR_ArrayPtr canonical__conv10_STATE_VARIABLE_PrimeSiteArray_42_42;

                {
                  mercury__array__to_list_2_p_0(canonical__TypeCtorInfo_49_49, (MR_ArrayPtr) canonical__PrimeCSDPtrArray0_24, &canonical__PrimeCSDPtrList0_25);
                }
                {
                  canonical__lookup_multi_sites_3_p_0(canonical__RestSiteArrays_17, canonical__SlotNum_13, &canonical__RestCSDPtrLists_63);
                }
                {
                  canonical__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), canonical__Var_68, 0) = ((MR_Box) (canonical__PrimeCSDPtrList0_25));
                  MR_hl_field(MR_mktag(1), canonical__Var_68, 1) = ((MR_Box) (canonical__RestCSDPtrLists_63));
                }
                canonical__TypeCtorInfo_36_74 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
                {
                  mercury__list__condense_2_p_0(canonical__TypeCtorInfo_36_74, canonical__Var_68, &canonical__AllCSDPtrs_64);
                }
                canonical__TypeCtorInfo_37_75 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
                canonical__TypeInfo_38_76 = (MR_Word) &canonical_scalar_common_1[4];
                {
                  mercury__map__init_1_p_0(canonical__TypeCtorInfo_37_75, canonical__TypeInfo_38_76, &canonical__ProcMap0_65);
                }
                {
                  canonical__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), canonical__Var_69, 0) = ((MR_Box) (&canonical_scalar_common_5[1]));
                  MR_hl_field(MR_mktag(0), canonical__Var_69, 1) = ((MR_Box) (canonical__merge_proc_dynamic_slots_11_p_0_1));
                  MR_hl_field(MR_mktag(0), canonical__Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), canonical__Var_69, 3) = ((MR_Box) (canonical__STATE_VARIABLE_InitDeep_0_30));
                }
                {
                  mercury__list__foldl_4_p_0(canonical__TypeCtorInfo_36_74, (MR_Word) &canonical_scalar_common_2[2], canonical__Var_69, canonical__AllCSDPtrs_64, ((MR_Box) (canonical__ProcMap0_65)), &canonical__conv2_ProcMap_66);
                }
                canonical__ProcMap_66 = ((MR_Word) canonical__conv2_ProcMap_66);
                {
                  mercury__map__values_2_p_0(canonical__TypeCtorInfo_37_75, canonical__TypeInfo_38_76, canonical__ProcMap_66, &canonical__CSDPtrsClusters_67);
                }
                {
                  canonical__Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), canonical__Var_70, 0) = ((MR_Box) (&canonical_scalar_common_8[0]));
                  MR_hl_field(MR_mktag(0), canonical__Var_70, 1) = ((MR_Box) (canonical__merge_proc_dynamic_slots_11_p_0_2));
                  MR_hl_field(MR_mktag(0), canonical__Var_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), canonical__Var_70, 3) = ((MR_Box) (canonical__MergeInfo_12));
                  MR_hl_field(MR_mktag(0), canonical__Var_70, 4) = ((MR_Box) (canonical__PrimePDPtr_15));
                  MR_hl_field(MR_mktag(0), canonical__Var_70, 5) = ((MR_Box) (canonical__Clique_14));
                }
                {
                  mercury__list__foldl3_8_p_0(canonical__TypeInfo_38_76, canonical__TypeInfo_38_76, (MR_Word) &profile__profile__type_ctor_info_initial_deep_0, (MR_Word) &canonical__canonical__type_ctor_info_redirect_0, canonical__Var_70, canonical__CSDPtrsClusters_67, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &canonical__conv8_PrimeCSDPtrList_26, ((MR_Box) (canonical__STATE_VARIABLE_InitDeep_0_30)), &canonical__conv7_STATE_VARIABLE_InitDeep_39_39, ((MR_Box) (canonical__STATE_VARIABLE_Redirect_0_32)), &canonical__conv6_STATE_VARIABLE_Redirect_40_40);
                }
                canonical__PrimeCSDPtrList_26 = ((MR_Word) canonical__conv8_PrimeCSDPtrList_26);
                canonical__STATE_VARIABLE_InitDeep_39_39 = ((MR_Word) canonical__conv7_STATE_VARIABLE_InitDeep_39_39);
                canonical__STATE_VARIABLE_Redirect_40_40 = ((MR_Word) canonical__conv6_STATE_VARIABLE_Redirect_40_40);
                {
                  canonical__conv9_PrimeCSDPtrArray_27 = mercury__array__array_1_f_0(canonical__TypeCtorInfo_49_49, canonical__PrimeCSDPtrList_26);
                }
                canonical__PrimeCSDPtrArray_27 = (MR_ArrayPtr) canonical__conv9_PrimeCSDPtrArray_27;
                {
                  canonical__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), canonical__Var_37, 0) = ((MR_Box) (canonical__IsZeroed_23));
                  MR_hl_field(MR_mktag(1), canonical__Var_37, 1) = ((MR_Box) (canonical__PrimeCSDPtrArray_27));
                }
                {
                  mercury__array__set_4_p_0(canonical__TypeCtorInfo_48_48, canonical__SlotNum_13, ((MR_Box) (canonical__Var_37)), (MR_ArrayPtr) canonical__STATE_VARIABLE_PrimeSiteArray_0_28, &canonical__conv10_STATE_VARIABLE_PrimeSiteArray_42_42);
                }
                canonical__STATE_VARIABLE_PrimeSiteArray_42_42 = (MR_ArrayPtr) canonical__conv10_STATE_VARIABLE_PrimeSiteArray_42_42;
              }
            else
              {
                MR_Word canonical__PrimeCSDPtr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimeSite0_20, (MR_Integer) 0)));
                MR_Word canonical__PrimeCSDPtr_22;
                MR_Word canonical__Var_41;
                MR_ArrayPtr canonical__conv11_STATE_VARIABLE_PrimeSiteArray_42_42;

                {
                  canonical__merge_proc_dynamic_normal_slot_11_p_0(canonical__MergeInfo_12, canonical__SlotNum_13, canonical__Clique_14, canonical__PrimePDPtr_15, canonical__PrimeCSDPtr0_21, canonical__RestSiteArrays_17, &canonical__PrimeCSDPtr_22, canonical__STATE_VARIABLE_InitDeep_0_30, &canonical__STATE_VARIABLE_InitDeep_39_39, canonical__STATE_VARIABLE_Redirect_0_32, &canonical__STATE_VARIABLE_Redirect_40_40);
                }
                {
                  canonical__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), canonical__Var_41, 0) = ((MR_Box) (canonical__PrimeCSDPtr_22));
                }
                {
                  mercury__array__set_4_p_0(canonical__TypeCtorInfo_48_48, canonical__SlotNum_13, ((MR_Box) (canonical__Var_41)), (MR_ArrayPtr) canonical__STATE_VARIABLE_PrimeSiteArray_0_28, &canonical__conv11_STATE_VARIABLE_PrimeSiteArray_42_42);
                }
                canonical__STATE_VARIABLE_PrimeSiteArray_42_42 = (MR_ArrayPtr) canonical__conv11_STATE_VARIABLE_PrimeSiteArray_42_42;
              }
            canonical__Var_43 = (canonical__SlotNum_13 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer canonical__next_value_of_SlotNum_13 = canonical__Var_43;
              MR_ArrayPtr canonical__next_value_of_STATE_VARIABLE_PrimeSiteArray_0_28 = canonical__STATE_VARIABLE_PrimeSiteArray_42_42;
              MR_Word canonical__next_value_of_STATE_VARIABLE_InitDeep_0_30 = canonical__STATE_VARIABLE_InitDeep_39_39;
              MR_Word canonical__next_value_of_STATE_VARIABLE_Redirect_0_32 = canonical__STATE_VARIABLE_Redirect_40_40;

              canonical__STATE_VARIABLE_Redirect_0_32 = canonical__next_value_of_STATE_VARIABLE_Redirect_0_32;
              canonical__STATE_VARIABLE_InitDeep_0_30 = canonical__next_value_of_STATE_VARIABLE_InitDeep_0_30;
              canonical__STATE_VARIABLE_PrimeSiteArray_0_28 = canonical__next_value_of_STATE_VARIABLE_PrimeSiteArray_0_28;
              canonical__SlotNum_13 = canonical__next_value_of_SlotNum_13;
            }
            continue;
          }
        else
          {
            *canonical__STATE_VARIABLE_Redirect_33 = canonical__STATE_VARIABLE_Redirect_0_32;
            *canonical__STATE_VARIABLE_InitDeep_31 = canonical__STATE_VARIABLE_InitDeep_0_30;
            *canonical__STATE_VARIABLE_PrimeSiteArray_29 = canonical__STATE_VARIABLE_PrimeSiteArray_0_28;
          }
      }
      break;
    }
}

static void MR_CALL 
canonical__merge_proc_dynamics_8_p_0_4(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_ArrayPtr canonical__conv1_HeadVar__2_2;

    {
      profile__extract_pd_sites_2_p_0(((MR_Word) canonical__wrapper_arg_1), &canonical__conv1_HeadVar__2_2);
    }
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv1_HeadVar__2_2));
  }
}

static void MR_CALL 
canonical__merge_proc_dynamics_8_p_0_3(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_Word canonical__conv0_HeadVar__3_3;

    {
      profile__lookup_proc_dynamics_3_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv0_HeadVar__3_3);
    }
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv0_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
canonical__merge_proc_dynamics_8_p_0_2(
  MR_Box canonical__closure_arg)
{
  {
    MR_bool canonical__succeeded;
    MR_Box canonical__closure = canonical__closure_arg;

    {
      canonical__succeeded = canonical__IntroducedFrom__pred__merge_proc_dynamics__239__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 4))));
    }
    return canonical__succeeded;
  }
}

static MR_bool MR_CALL 
canonical__merge_proc_dynamics_8_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1)
{
  {
    MR_bool canonical__succeeded;
    MR_Box canonical__closure = canonical__closure_arg;

    {
      canonical__succeeded = profile__valid_proc_dynamic_ptr_raw_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1));
    }
    return canonical__succeeded;
  }
}

static void MR_CALL 
canonical__merge_proc_dynamics_8_p_0(
  MR_Word canonical__MergeInfo_9,
  MR_Word canonical__Clique_10,
  MR_Word canonical__CandidatePDPtrs_11,
  MR_Word * canonical__ChosenPDPtr_12,
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_29,
  MR_Word * canonical__STATE_VARIABLE_InitDeep_30,
  MR_Word canonical__STATE_VARIABLE_Redirect_0_31,
  MR_Word * canonical__STATE_VARIABLE_Redirect_32)
{
  {
    MR_bool canonical__succeeded;
    MR_Word canonical__TypeCtorInfo_70_70;
    MR_ArrayPtr canonical__ProcDynamics0_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_29, (MR_Integer) 3)));
    MR_Word canonical__ValidPDPtrs_16;
    MR_Word canonical__InvalidPDPtrs_17;
    MR_Word canonical__Var_33;
    MR_Word canonical__Var_34;
    MR_Word canonical__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_29, (MR_Integer) 0)));
    MR_Word canonical__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_29, (MR_Integer) 1)));
    MR_ArrayPtr canonical__Var_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_29, (MR_Integer) 2)));
    MR_ArrayPtr canonical__Var_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_29, (MR_Integer) 4)));
    MR_ArrayPtr canonical__Var_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_29, (MR_Integer) 5)));

    {
      canonical__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), canonical__Var_33, 0) = ((MR_Box) (&canonical_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), canonical__Var_33, 1) = ((MR_Box) (canonical__merge_proc_dynamics_8_p_0_1));
      MR_hl_field(MR_mktag(0), canonical__Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), canonical__Var_33, 3) = ((MR_Box) (canonical__ProcDynamics0_15));
    }
    canonical__TypeCtorInfo_70_70 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0;
    {
      mercury__list__filter_4_p_0(canonical__TypeCtorInfo_70_70, canonical__Var_33, canonical__CandidatePDPtrs_11, &canonical__ValidPDPtrs_16, &canonical__InvalidPDPtrs_17);
    }
    {
      canonical__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), canonical__Var_34, 0) = ((MR_Box) (&canonical_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), canonical__Var_34, 1) = ((MR_Box) (canonical__merge_proc_dynamics_8_p_0_2));
      MR_hl_field(MR_mktag(0), canonical__Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), canonical__Var_34, 3) = ((MR_Box) (canonical__InvalidPDPtrs_17));
      MR_hl_field(MR_mktag(0), canonical__Var_34, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__require_2_p_0(canonical__Var_34, (MR_String) "merge_proc_dynamics: invalid pdptrs");
    }
    if ((canonical__ValidPDPtrs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "canonical", (MR_String) "predicate \140canonical.merge_proc_dynamics\'/8", (MR_String) "no valid pdptrs");
          return;
        }
      }
    else
      {
        MR_Word canonical__TypeCtorInfo_74_74;
        MR_Word canonical__TypeInfo_77_77;
        MR_Word canonical__RestPDPtrs_19;
        MR_Word canonical__PrimePD0_20;
        MR_Word canonical__RestPDs_21;
        MR_Word canonical__RestSites_22;
        MR_ArrayPtr canonical__PrimeSites0_23;
        MR_Integer canonical__MaxSiteNum_24;
        MR_ArrayPtr canonical__PrimeSites_25;
        MR_Word canonical__PrimePD_26;
        MR_ArrayPtr canonical__ProcDynamics1_27;
        MR_ArrayPtr canonical__ProcDynamics_28;
        MR_Word canonical__STATE_VARIABLE_Redirect_40_40;
        MR_Word canonical__Var_41;
        MR_ArrayPtr canonical__Var_43;
        MR_Word canonical__STATE_VARIABLE_InitDeep_44_44;
        MR_ArrayPtr canonical__Var_46;
        MR_Word canonical__Var_53;
        MR_Word canonical__Var_54;
        MR_Box canonical__conv2_Var_43;
        MR_Word canonical__Var_55;
        MR_Word canonical__Var_57;
        MR_ArrayPtr canonical__Var_56;
        MR_Word canonical__Var_58;
        MR_Word canonical__Var_59;
        MR_ArrayPtr canonical__Var_60;
        MR_ArrayPtr canonical__Var_61;
        MR_ArrayPtr canonical__Var_62;
        MR_Box canonical__conv3_Var_46;
        MR_Word canonical__Var_63;
        MR_Word canonical__Var_64;
        MR_ArrayPtr canonical__Var_65;
        MR_ArrayPtr canonical__Var_67;
        MR_ArrayPtr canonical__Var_68;
        MR_ArrayPtr canonical__Var_66;

        *canonical__ChosenPDPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__ValidPDPtrs_16, (MR_Integer) 0)));
        canonical__RestPDPtrs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__ValidPDPtrs_16, (MR_Integer) 1)));
        {
          canonical__record_pd_redirect_4_p_0(canonical__RestPDPtrs_19, *canonical__ChosenPDPtr_12, canonical__STATE_VARIABLE_Redirect_0_31, &canonical__STATE_VARIABLE_Redirect_40_40);
        }
        {
          profile__lookup_proc_dynamics_3_p_0(canonical__ProcDynamics0_15, *canonical__ChosenPDPtr_12, &canonical__PrimePD0_20);
        }
        {
          canonical__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), canonical__Var_41, 0) = ((MR_Box) (&canonical_scalar_common_3[5]));
          MR_hl_field(MR_mktag(0), canonical__Var_41, 1) = ((MR_Box) (canonical__merge_proc_dynamics_8_p_0_3));
          MR_hl_field(MR_mktag(0), canonical__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), canonical__Var_41, 3) = ((MR_Box) (canonical__ProcDynamics0_15));
        }
        canonical__TypeCtorInfo_74_74 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
        {
          mercury__list__map_3_p_0(canonical__TypeCtorInfo_70_70, canonical__TypeCtorInfo_74_74, canonical__Var_41, canonical__RestPDPtrs_19, &canonical__RestPDs_21);
        }
        canonical__TypeInfo_77_77 = (MR_Word) &canonical_scalar_common_1[2];
        {
          mercury__list__map_3_p_0(canonical__TypeCtorInfo_74_74, canonical__TypeInfo_77_77, (MR_Word) &canonical_scalar_common_2[6], canonical__RestPDs_21, &canonical__RestSites_22);
        }
        canonical__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_20, (MR_Integer) 0)));
        canonical__PrimeSites0_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_20, (MR_Integer) 1)));
        canonical__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_20, (MR_Integer) 2)));
        {
          mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) canonical__PrimeSites0_23, &canonical__MaxSiteNum_24);
        }
        {
          canonical__conv2_Var_43 = array_util__u_1_f_0(canonical__TypeInfo_77_77, ((MR_Box) (canonical__PrimeSites0_23)));
        }
        canonical__Var_43 = ((MR_ArrayPtr) canonical__conv2_Var_43);
        {
          canonical__merge_proc_dynamic_slots_11_p_0(canonical__MergeInfo_9, canonical__MaxSiteNum_24, canonical__Clique_10, *canonical__ChosenPDPtr_12, canonical__Var_43, canonical__RestSites_22, &canonical__PrimeSites_25, canonical__STATE_VARIABLE_InitDeep_0_29, &canonical__STATE_VARIABLE_InitDeep_44_44, canonical__STATE_VARIABLE_Redirect_40_40, canonical__STATE_VARIABLE_Redirect_32);
        }
        canonical__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_20, (MR_Integer) 0)));
        canonical__Var_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_20, (MR_Integer) 1)));
        canonical__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_20, (MR_Integer) 2)));
        {
          canonical__PrimePD_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), canonical__PrimePD_26, 0) = ((MR_Box) (canonical__Var_55));
          MR_hl_field(MR_mktag(0), canonical__PrimePD_26, 1) = ((MR_Box) (canonical__PrimeSites_25));
          MR_hl_field(MR_mktag(0), canonical__PrimePD_26, 2) = ((MR_Box) (canonical__Var_57));
        }
        canonical__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 0)));
        canonical__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 1)));
        canonical__Var_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 2)));
        canonical__ProcDynamics1_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 3)));
        canonical__Var_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 4)));
        canonical__Var_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 5)));
        {
          canonical__conv3_Var_46 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[3], ((MR_Box) (canonical__ProcDynamics1_27)));
        }
        canonical__Var_46 = ((MR_ArrayPtr) canonical__conv3_Var_46);
        {
          profile__update_proc_dynamics_4_p_0(*canonical__ChosenPDPtr_12, canonical__PrimePD_26, canonical__Var_46, &canonical__ProcDynamics_28);
        }
        canonical__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 0)));
        canonical__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 1)));
        canonical__Var_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 2)));
        canonical__Var_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 3)));
        canonical__Var_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 4)));
        canonical__Var_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 5)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          *canonical__STATE_VARIABLE_InitDeep_30 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (canonical__Var_63));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (canonical__Var_64));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (canonical__Var_65));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (canonical__ProcDynamics_28));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (canonical__Var_67));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (canonical__Var_68));
        }
      }
  }
}

static void MR_CALL 
canonical__record_csd_redirect_4_p_0(
  MR_Word canonical__RestCSDPtrs_5,
  MR_Word canonical__PrimeCSDPtr_6,
  MR_Word canonical__STATE_VARIABLE_Redirect_0_10,
  MR_Word * canonical__STATE_VARIABLE_Redirect_11)
{
  {
    MR_bool canonical__succeeded;
    MR_Word canonical__OldRedirect_9;
    MR_ArrayPtr canonical__Var_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_10, (MR_Integer) 0)));
    MR_Integer canonical__CSDI_32 = (MR_Integer) canonical__PrimeCSDPtr_6;
    MR_ArrayPtr canonical__Var_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_10, (MR_Integer) 1)));
    MR_Box canonical__conv0_OldRedirect_9;
    MR_Integer canonical__Var_21;

    {
      mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) canonical__Var_20, canonical__CSDI_32, &canonical__conv0_OldRedirect_9);
    }
    canonical__OldRedirect_9 = ((MR_Word) canonical__conv0_OldRedirect_9);
    canonical__Var_21 = (MR_Integer) canonical__OldRedirect_9;
    canonical__succeeded = (canonical__Var_21 == (MR_Integer) 0);
    if (canonical__succeeded)
      {
        canonical__record_csd_redirect_2_4_p_0(canonical__RestCSDPtrs_5, canonical__PrimeCSDPtr_6, canonical__STATE_VARIABLE_Redirect_0_10, canonical__STATE_VARIABLE_Redirect_11);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "canonical", (MR_String) "predicate \140canonical.record_csd_redirect\'/4", (MR_String) "prime is redirected");
          return;
        }
      }
  }
}

static void MR_CALL 
canonical__record_csd_redirect_2_4_p_0(
  MR_Word canonical__HeadVar__1_1,
  MR_Word canonical__PrimeCSDPtr_2,
  MR_Word canonical__STATE_VARIABLE_Redirect_0_3,
  MR_Word * canonical__STATE_VARIABLE_Redirect_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool canonical__succeeded;

        if ((canonical__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *canonical__STATE_VARIABLE_Redirect_4 = canonical__STATE_VARIABLE_Redirect_0_3;
        else
          {
            MR_Word canonical__RestCSDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word canonical__RestCSDPtrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 1)));
            MR_ArrayPtr canonical__CallSiteRedirect0_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_3, (MR_Integer) 0)));
            MR_Word canonical__OldRedirect_14;
            MR_ArrayPtr canonical__CallSiteRedirect_15;
            MR_Word canonical__STATE_VARIABLE_Redirect_23_23;
            MR_Integer canonical__CSDI_32 = (MR_Integer) canonical__RestCSDPtr_9;
            MR_ArrayPtr canonical__Var_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_3, (MR_Integer) 1)));
            MR_Box canonical__conv0_OldRedirect_14;
            MR_Integer canonical__Var_18;
            MR_ArrayPtr canonical__Var_27;
            MR_ArrayPtr canonical__Var_26;

            {
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) canonical__CallSiteRedirect0_13, canonical__CSDI_32, &canonical__conv0_OldRedirect_14);
            }
            canonical__OldRedirect_14 = ((MR_Word) canonical__conv0_OldRedirect_14);
            canonical__Var_18 = (MR_Integer) canonical__OldRedirect_14;
            canonical__succeeded = (canonical__Var_18 == (MR_Integer) 0);
            if (canonical__succeeded)
              {
                MR_ArrayPtr canonical__Var_19;
                MR_Integer canonical__CSDI_38;
                MR_Box canonical__conv1_Var_19;
                MR_ArrayPtr canonical__conv2_CallSiteRedirect_15;

                {
                  canonical__conv1_Var_19 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[7], ((MR_Box) (canonical__CallSiteRedirect0_13)));
                }
                canonical__Var_19 = ((MR_ArrayPtr) canonical__conv1_Var_19);
                canonical__CSDI_38 = (MR_Integer) canonical__RestCSDPtr_9;
                {
                  mercury__array__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, canonical__CSDI_38, ((MR_Box) (canonical__PrimeCSDPtr_2)), (MR_ArrayPtr) canonical__Var_19, &canonical__conv2_CallSiteRedirect_15);
                }
                canonical__CallSiteRedirect_15 = (MR_ArrayPtr) canonical__conv2_CallSiteRedirect_15;
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "canonical", (MR_String) "predicate \140canonical.record_csd_redirect_2\'/4", (MR_String) "already redirected");
                  return;
                }
              }
            canonical__Var_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_3, (MR_Integer) 0)));
            canonical__Var_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_3, (MR_Integer) 1)));
            {
              canonical__STATE_VARIABLE_Redirect_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_23_23, 0) = ((MR_Box) (canonical__CallSiteRedirect_15));
              MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_23_23, 1) = ((MR_Box) (canonical__Var_27));
            }
            /* direct tailcall eliminated */
            {
              MR_Word canonical__next_value_of_HeadVar__1_1 = canonical__RestCSDPtrs_10;
              MR_Word canonical__next_value_of_STATE_VARIABLE_Redirect_0_3 = canonical__STATE_VARIABLE_Redirect_23_23;

              canonical__STATE_VARIABLE_Redirect_0_3 = canonical__next_value_of_STATE_VARIABLE_Redirect_0_3;
              canonical__HeadVar__1_1 = canonical__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
canonical__record_pd_redirect_4_p_0(
  MR_Word canonical__RestPDPtrs_5,
  MR_Word canonical__PrimePDPtr_6,
  MR_Word canonical__STATE_VARIABLE_Redirect_0_10,
  MR_Word * canonical__STATE_VARIABLE_Redirect_11)
{
  {
    MR_bool canonical__succeeded;
    MR_Word canonical__OldRedirect_9;
    MR_ArrayPtr canonical__Var_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_10, (MR_Integer) 1)));
    MR_Integer canonical__PDI_32 = (MR_Integer) canonical__PrimePDPtr_6;
    MR_ArrayPtr canonical__Var_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_10, (MR_Integer) 0)));
    MR_Box canonical__conv0_OldRedirect_9;
    MR_Integer canonical__Var_21;

    {
      mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_ArrayPtr) canonical__Var_20, canonical__PDI_32, &canonical__conv0_OldRedirect_9);
    }
    canonical__OldRedirect_9 = ((MR_Word) canonical__conv0_OldRedirect_9);
    canonical__Var_21 = (MR_Integer) canonical__OldRedirect_9;
    canonical__succeeded = (canonical__Var_21 == (MR_Integer) 0);
    if (canonical__succeeded)
      {
        canonical__record_pd_redirect_2_4_p_0(canonical__RestPDPtrs_5, canonical__PrimePDPtr_6, canonical__STATE_VARIABLE_Redirect_0_10, canonical__STATE_VARIABLE_Redirect_11);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "canonical", (MR_String) "predicate \140canonical.record_pd_redirect\'/4", (MR_String) "prime is redirected");
          return;
        }
      }
  }
}

static void MR_CALL 
canonical__record_pd_redirect_2_4_p_0(
  MR_Word canonical__HeadVar__1_1,
  MR_Word canonical__PrimePDPtr_2,
  MR_Word canonical__STATE_VARIABLE_Redirect_0_3,
  MR_Word * canonical__STATE_VARIABLE_Redirect_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool canonical__succeeded;

        if ((canonical__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *canonical__STATE_VARIABLE_Redirect_4 = canonical__STATE_VARIABLE_Redirect_0_3;
        else
          {
            MR_Word canonical__RestPDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word canonical__RestPDPtrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 1)));
            MR_ArrayPtr canonical__ProcRedirect0_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_3, (MR_Integer) 1)));
            MR_Word canonical__OldRedirect_14;
            MR_ArrayPtr canonical__ProcRedirect_15;
            MR_Word canonical__STATE_VARIABLE_Redirect_23_23;
            MR_Integer canonical__PDI_32 = (MR_Integer) canonical__RestPDPtr_9;
            MR_ArrayPtr canonical__Var_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_3, (MR_Integer) 0)));
            MR_Box canonical__conv0_OldRedirect_14;
            MR_Integer canonical__Var_18;
            MR_ArrayPtr canonical__Var_26;
            MR_ArrayPtr canonical__Var_27;

            {
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_ArrayPtr) canonical__ProcRedirect0_13, canonical__PDI_32, &canonical__conv0_OldRedirect_14);
            }
            canonical__OldRedirect_14 = ((MR_Word) canonical__conv0_OldRedirect_14);
            canonical__Var_18 = (MR_Integer) canonical__OldRedirect_14;
            canonical__succeeded = (canonical__Var_18 == (MR_Integer) 0);
            if (canonical__succeeded)
              {
                MR_ArrayPtr canonical__Var_19;
                MR_Integer canonical__PDI_38;
                MR_Box canonical__conv1_Var_19;
                MR_ArrayPtr canonical__conv2_ProcRedirect_15;

                {
                  canonical__conv1_Var_19 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[6], ((MR_Box) (canonical__ProcRedirect0_13)));
                }
                canonical__Var_19 = ((MR_ArrayPtr) canonical__conv1_Var_19);
                canonical__PDI_38 = (MR_Integer) canonical__RestPDPtr_9;
                {
                  mercury__array__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, canonical__PDI_38, ((MR_Box) (canonical__PrimePDPtr_2)), (MR_ArrayPtr) canonical__Var_19, &canonical__conv2_ProcRedirect_15);
                }
                canonical__ProcRedirect_15 = (MR_ArrayPtr) canonical__conv2_ProcRedirect_15;
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "canonical", (MR_String) "predicate \140canonical.record_pd_redirect_2\'/4", (MR_String) "already redirected");
                  return;
                }
              }
            canonical__Var_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_3, (MR_Integer) 0)));
            canonical__Var_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_3, (MR_Integer) 1)));
            {
              canonical__STATE_VARIABLE_Redirect_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_23_23, 0) = ((MR_Box) (canonical__Var_26));
              MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_23_23, 1) = ((MR_Box) (canonical__ProcRedirect_15));
            }
            /* direct tailcall eliminated */
            {
              MR_Word canonical__next_value_of_HeadVar__1_1 = canonical__RestPDPtrs_10;
              MR_Word canonical__next_value_of_STATE_VARIABLE_Redirect_0_3 = canonical__STATE_VARIABLE_Redirect_23_23;

              canonical__STATE_VARIABLE_Redirect_0_3 = canonical__next_value_of_STATE_VARIABLE_Redirect_0_3;
              canonical__HeadVar__1_1 = canonical__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
canonical__callee_in_clique_3_p_0(
  MR_Word canonical__InitDeep_4,
  MR_Word canonical__Clique_5,
  MR_Word canonical__CSDPtr_6)
{
  {
    MR_bool canonical__succeeded;
    MR_Word canonical__CSD_7;
    MR_Word canonical__CalleePDPtr_8;
    MR_ArrayPtr canonical__Var_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 2)));
    MR_Word canonical__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 0)));
    MR_Word canonical__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 1)));
    MR_ArrayPtr canonical__Var_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 3)));
    MR_ArrayPtr canonical__Var_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 4)));
    MR_ArrayPtr canonical__Var_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 5)));
    MR_Word canonical__Var_15;
    MR_Word canonical__Var_16;

    {
      profile__lookup_call_site_dynamics_3_p_0(canonical__Var_9, canonical__CSDPtr_6, &canonical__CSD_7);
    }
    canonical__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSD_7, (MR_Integer) 0)));
    canonical__CalleePDPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSD_7, (MR_Integer) 1)));
    canonical__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSD_7, (MR_Integer) 2)));
    {
      canonical__succeeded = mercury__set__member_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, ((MR_Box) (canonical__CalleePDPtr_8)), canonical__Clique_5);
    }
    return canonical__succeeded;
  }
}

static void MR_CALL 
canonical__lookup_pd_site_3_p_0(
  MR_Word canonical__InitDeep_4,
  MR_Word canonical__PDPtr_5,
  MR_ArrayPtr * canonical__Sites_6)
{
  {
    MR_bool canonical__succeeded;
    MR_Word canonical__PD_7;
    MR_ArrayPtr canonical__Var_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 3)));
    MR_Word canonical__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 0)));
    MR_Word canonical__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 1)));
    MR_ArrayPtr canonical__Var_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 2)));
    MR_ArrayPtr canonical__Var_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 4)));
    MR_ArrayPtr canonical__Var_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 5)));
    MR_Word canonical__Var_14;
    MR_Word canonical__Var_15;

    {
      profile__lookup_proc_dynamics_3_p_0(canonical__Var_8, canonical__PDPtr_5, &canonical__PD_7);
    }
    canonical__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PD_7, (MR_Integer) 0)));
    *canonical__Sites_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PD_7, (MR_Integer) 1)));
    canonical__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PD_7, (MR_Integer) 2)));
  }
}

static void MR_CALL 
canonical__complete_clique_ps_7_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_ArrayPtr canonical__conv0_Sites_6;

    {
      canonical__lookup_pd_site_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv0_Sites_6);
    }
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv0_Sites_6));
  }
}

static void MR_CALL 
canonical__complete_clique_ps_7_p_0(
  MR_Word canonical__InitDeep_8,
  MR_Word canonical__Clique_9,
  MR_Word canonical__HeadVar__3_3,
  MR_Word canonical__STATE_VARIABLE_ProcMap_0_19,
  MR_Word * canonical__STATE_VARIABLE_ProcMap_20,
  MR_Word canonical__STATE_VARIABLE_AddedPD_0_21,
  MR_Word * canonical__STATE_VARIABLE_AddedPD_22)
{
  {
    MR_bool canonical__succeeded;
    MR_Word canonical__PSPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word canonical__PDPtrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word canonical__Var_23;
    MR_Word canonical__Var_14;
    MR_Word canonical__Var_15;
    MR_Word canonical__Var_16;

    canonical__succeeded = ((MR_tag((MR_Word) canonical__PDPtrs_11)) == (MR_mktag((MR_Integer) 1)));
    if (canonical__succeeded)
      {
        canonical__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__PDPtrs_11, (MR_Integer) 0)));
        canonical__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__PDPtrs_11, (MR_Integer) 1)));
        canonical__succeeded = ((MR_tag((MR_Word) canonical__Var_23)) == (MR_mktag((MR_Integer) 1)));
        if (canonical__succeeded)
          {
            canonical__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__Var_23, (MR_Integer) 0)));
            canonical__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__Var_23, (MR_Integer) 1)));
          }
      }
    if (canonical__succeeded)
      {
        MR_Word canonical__PS_17;
        MR_Word canonical__PDSites_18;
        MR_ArrayPtr canonical__Var_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_8, (MR_Integer) 5)));
        MR_Word canonical__Var_25;
        MR_Integer canonical__Var_26;
        MR_ArrayPtr canonical__Var_27;
        MR_ArrayPtr canonical__Var_30;
        MR_Word canonical__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_8, (MR_Integer) 0)));
        MR_Word canonical__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_8, (MR_Integer) 1)));
        MR_ArrayPtr canonical__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_8, (MR_Integer) 2)));
        MR_ArrayPtr canonical__Var_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_8, (MR_Integer) 3)));
        MR_ArrayPtr canonical__Var_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_8, (MR_Integer) 4)));
        MR_Word canonical__Var_36;
        MR_String canonical__Var_37;
        MR_String canonical__Var_38;
        MR_String canonical__Var_39;
        MR_String canonical__Var_40;
        MR_String canonical__Var_41;
        MR_Integer canonical__Var_42;
        MR_Word canonical__Var_43;
        MR_ArrayPtr canonical__Var_44;
        MR_Word canonical__Var_45;
        MR_Word canonical__Var_46;
        MR_Word canonical__Var_47;
        MR_String canonical__Var_48;
        MR_String canonical__Var_49;
        MR_String canonical__Var_50;
        MR_String canonical__Var_51;
        MR_String canonical__Var_52;
        MR_Integer canonical__Var_53;
        MR_Word canonical__Var_54;
        MR_ArrayPtr canonical__Var_55;
        MR_Word canonical__Var_56;
        MR_Word canonical__Var_57;

        {
          profile__lookup_proc_statics_3_p_0(canonical__Var_24, canonical__PSPtr_10, &canonical__PS_17);
        }
        {
          canonical__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), canonical__Var_25, 0) = ((MR_Box) (&canonical_scalar_common_3[4]));
          MR_hl_field(MR_mktag(0), canonical__Var_25, 1) = ((MR_Box) (canonical__complete_clique_ps_7_p_0_1));
          MR_hl_field(MR_mktag(0), canonical__Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), canonical__Var_25, 3) = ((MR_Box) (canonical__InitDeep_8));
        }
        {
          mercury__list__map_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &canonical_scalar_common_1[2], canonical__Var_25, canonical__PDPtrs_11, &canonical__PDSites_18);
        }
        canonical__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 0)));
        canonical__Var_37 = ((MR_String) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 1)));
        canonical__Var_38 = ((MR_String) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 2)));
        canonical__Var_39 = ((MR_String) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 3)));
        canonical__Var_40 = ((MR_String) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 4)));
        canonical__Var_41 = ((MR_String) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 5)));
        canonical__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 6)));
        canonical__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 7)));
        canonical__Var_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 8)));
        canonical__Var_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 9)));
        canonical__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 10)));
        canonical__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 11)));
        {
          canonical__Var_26 = mercury__array__max_1_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) canonical__Var_30);
        }
        canonical__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 0)));
        canonical__Var_48 = ((MR_String) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 1)));
        canonical__Var_49 = ((MR_String) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 2)));
        canonical__Var_50 = ((MR_String) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 3)));
        canonical__Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 4)));
        canonical__Var_52 = ((MR_String) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 5)));
        canonical__Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 6)));
        canonical__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 7)));
        canonical__Var_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 8)));
        canonical__Var_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 9)));
        canonical__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 10)));
        canonical__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 11)));
        {
          canonical__complete_clique_slots_9_p_0(canonical__Var_26, canonical__InitDeep_8, canonical__Clique_9, canonical__Var_27, canonical__PDSites_18, canonical__STATE_VARIABLE_ProcMap_0_19, canonical__STATE_VARIABLE_ProcMap_20, canonical__STATE_VARIABLE_AddedPD_0_21, canonical__STATE_VARIABLE_AddedPD_22);
        }
      }
    else
      {
        *canonical__STATE_VARIABLE_AddedPD_22 = canonical__STATE_VARIABLE_AddedPD_0_21;
        *canonical__STATE_VARIABLE_ProcMap_20 = canonical__STATE_VARIABLE_ProcMap_0_19;
      }
  }
}

static void MR_CALL 
canonical__complete_clique_slots_9_p_0_3(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box * canonical__wrapper_arg_3)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_Word canonical__conv2_STATE_VARIABLE_ProcMap_13;

    {
      canonical__cluster_pds_by_ps_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2), &canonical__conv2_STATE_VARIABLE_ProcMap_13);
    }
    *canonical__wrapper_arg_3 = ((MR_Box) (canonical__conv2_STATE_VARIABLE_ProcMap_13));
  }
}

static void MR_CALL 
canonical__complete_clique_slots_9_p_0_2(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_Word canonical__conv1_HeadVar__3_3;

    {
      profile__extract_csdptr_callee_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv1_HeadVar__3_3);
    }
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv1_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
canonical__complete_clique_slots_9_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1)
{
  {
    MR_bool canonical__succeeded;
    MR_Box canonical__closure = canonical__closure_arg;

    {
      canonical__succeeded = profile__valid_call_site_dynamic_ptr_raw_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1));
    }
    return canonical__succeeded;
  }
}

static void MR_CALL 
canonical__complete_clique_slots_9_p_0(
  MR_Integer canonical__SlotNum_10,
  MR_Word canonical__InitDeep_11,
  MR_Word canonical__Clique_12,
  MR_ArrayPtr canonical__PSSites_13,
  MR_Word canonical__PDSites_14,
  MR_Word canonical__STATE_VARIABLE_ProcMap_0_29,
  MR_Word * canonical__STATE_VARIABLE_ProcMap_30,
  MR_Word canonical__STATE_VARIABLE_AddedPD_0_31,
  MR_Word * canonical__STATE_VARIABLE_AddedPD_32)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool canonical__succeeded = (canonical__SlotNum_10 >= (MR_Integer) 0);

        if (canonical__succeeded)
          {
            MR_Word canonical__TypeCtorInfo_64_64;
            MR_Word canonical__TypeCtorInfo_67_67;
            MR_Word canonical__CSSPtr_17;
            MR_Word canonical__CSS_18;
            MR_Word canonical__CSDPtrs_21;
            MR_Word canonical__ValidCSDPtrs_23;
            MR_Word canonical__CalleePDPtrs_24;
            MR_Word canonical__CalleePDPtrSet_25;
            MR_Word canonical__Common_26;
            MR_ArrayPtr canonical__Var_34;
            MR_Word canonical__Var_36;
            MR_ArrayPtr canonical__Var_37;
            MR_Word canonical__Var_38;
            MR_Word canonical__STATE_VARIABLE_AddedPD_39_39;
            MR_Word canonical__STATE_VARIABLE_ProcMap_41_41;
            MR_Integer canonical__Var_43;
            MR_Box canonical__conv0_CSSPtr_17;
            MR_Word canonical__Var_47;
            MR_Word canonical__Var_48;
            MR_ArrayPtr canonical__Var_49;
            MR_ArrayPtr canonical__Var_50;
            MR_ArrayPtr canonical__Var_51;
            MR_Word canonical__Var_35;
            MR_Word canonical__Var_52;
            MR_Integer canonical__Var_53;
            MR_Integer canonical__Var_54;
            MR_Word canonical__Var_55;
            MR_Word canonical__Var_19;
            MR_String canonical__Var_20;
            MR_Word canonical__Var_56;
            MR_Word canonical__Var_57;
            MR_ArrayPtr canonical__Var_58;
            MR_ArrayPtr canonical__Var_59;
            MR_ArrayPtr canonical__Var_60;

            {
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) canonical__PSSites_13, canonical__SlotNum_10, &canonical__conv0_CSSPtr_17);
            }
            canonical__CSSPtr_17 = ((MR_Word) canonical__conv0_CSSPtr_17);
            canonical__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 0)));
            canonical__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 1)));
            canonical__Var_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 2)));
            canonical__Var_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 3)));
            canonical__Var_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 4)));
            canonical__Var_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 5)));
            {
              profile__lookup_call_site_statics_3_p_0(canonical__Var_34, canonical__CSSPtr_17, &canonical__CSS_18);
            }
            canonical__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSS_18, (MR_Integer) 0)));
            canonical__Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), canonical__CSS_18, (MR_Integer) 1)));
            canonical__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSS_18, (MR_Integer) 2)));
            canonical__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), canonical__CSS_18, (MR_Integer) 3)));
            canonical__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSS_18, (MR_Integer) 4)));
            canonical__succeeded = ((MR_tag((MR_Word) canonical__Var_35)) == (MR_mktag((MR_Integer) 1)));
            if (canonical__succeeded)
              {
                canonical__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__Var_35, (MR_Integer) 0)));
                canonical__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(1), canonical__Var_35, (MR_Integer) 1)));
                {
                  canonical__lookup_normal_sites_3_p_0(canonical__PDSites_14, canonical__SlotNum_10, &canonical__CSDPtrs_21);
                }
              }
            else
              {
                MR_Word canonical__CSDPtrLists_22;

                {
                  canonical__lookup_multi_sites_3_p_0(canonical__PDSites_14, canonical__SlotNum_10, &canonical__CSDPtrLists_22);
                }
                {
                  mercury__list__condense_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, canonical__CSDPtrLists_22, &canonical__CSDPtrs_21);
                }
              }
            canonical__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 0)));
            canonical__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 1)));
            canonical__Var_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 2)));
            canonical__Var_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 3)));
            canonical__Var_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 4)));
            canonical__Var_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 5)));
            {
              canonical__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), canonical__Var_36, 0) = ((MR_Box) (&canonical_scalar_common_7[0]));
              MR_hl_field(MR_mktag(0), canonical__Var_36, 1) = ((MR_Box) (canonical__complete_clique_slots_9_p_0_1));
              MR_hl_field(MR_mktag(0), canonical__Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), canonical__Var_36, 3) = ((MR_Box) (canonical__Var_37));
            }
            canonical__TypeCtorInfo_64_64 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
            {
              mercury__list__filter_3_p_0(canonical__TypeCtorInfo_64_64, canonical__Var_36, canonical__CSDPtrs_21, &canonical__ValidCSDPtrs_23);
            }
            {
              canonical__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), canonical__Var_38, 0) = ((MR_Box) (&canonical_scalar_common_3[3]));
              MR_hl_field(MR_mktag(0), canonical__Var_38, 1) = ((MR_Box) (canonical__complete_clique_slots_9_p_0_2));
              MR_hl_field(MR_mktag(0), canonical__Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), canonical__Var_38, 3) = ((MR_Box) (canonical__InitDeep_11));
            }
            canonical__TypeCtorInfo_67_67 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0;
            {
              mercury__list__map_3_p_0(canonical__TypeCtorInfo_64_64, canonical__TypeCtorInfo_67_67, canonical__Var_38, canonical__ValidCSDPtrs_23, &canonical__CalleePDPtrs_24);
            }
            {
              canonical__CalleePDPtrSet_25 = mercury__set__list_to_set_1_f_0(canonical__TypeCtorInfo_67_67, canonical__CalleePDPtrs_24);
            }
            {
              mercury__set__intersect_3_p_0(canonical__TypeCtorInfo_67_67, canonical__CalleePDPtrSet_25, canonical__Clique_12, &canonical__Common_26);
            }
            {
              canonical__succeeded = mercury__set__is_empty_1_p_0(canonical__TypeCtorInfo_67_67, canonical__Common_26);
            }
            if (canonical__succeeded)
              {
                canonical__STATE_VARIABLE_AddedPD_39_39 = canonical__STATE_VARIABLE_AddedPD_0_31;
                canonical__STATE_VARIABLE_ProcMap_41_41 = canonical__STATE_VARIABLE_ProcMap_0_29;
              }
            else
              {
                MR_Word canonical__NewMembers_27;

                {
                  mercury__set__difference_3_p_0(canonical__TypeCtorInfo_67_67, canonical__CalleePDPtrSet_25, canonical__Clique_12, &canonical__NewMembers_27);
                }
                {
                  canonical__succeeded = mercury__set__is_empty_1_p_0(canonical__TypeCtorInfo_67_67, canonical__NewMembers_27);
                }
                if (canonical__succeeded)
                  {
                    canonical__STATE_VARIABLE_AddedPD_39_39 = (MR_Integer) 0;
                    canonical__STATE_VARIABLE_ProcMap_41_41 = canonical__STATE_VARIABLE_ProcMap_0_29;
                  }
                else
                  {
                    MR_Word canonical__NewMemberList_28;
                    MR_Word canonical__Var_40;
                    MR_Box canonical__conv3_STATE_VARIABLE_ProcMap_41_41;

                    {
                      mercury__set__to_sorted_list_2_p_0(canonical__TypeCtorInfo_67_67, canonical__NewMembers_27, &canonical__NewMemberList_28);
                    }
                    {
                      canonical__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), canonical__Var_40, 0) = ((MR_Box) (&canonical_scalar_common_5[0]));
                      MR_hl_field(MR_mktag(0), canonical__Var_40, 1) = ((MR_Box) (canonical__complete_clique_slots_9_p_0_3));
                      MR_hl_field(MR_mktag(0), canonical__Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), canonical__Var_40, 3) = ((MR_Box) (canonical__InitDeep_11));
                    }
                    {
                      mercury__list__foldl_4_p_0(canonical__TypeCtorInfo_67_67, (MR_Word) &canonical_scalar_common_2[0], canonical__Var_40, canonical__NewMemberList_28, ((MR_Box) (canonical__STATE_VARIABLE_ProcMap_0_29)), &canonical__conv3_STATE_VARIABLE_ProcMap_41_41);
                    }
                    canonical__STATE_VARIABLE_ProcMap_41_41 = ((MR_Word) canonical__conv3_STATE_VARIABLE_ProcMap_41_41);
                    canonical__STATE_VARIABLE_AddedPD_39_39 = (MR_Integer) 1;
                  }
              }
            canonical__Var_43 = (canonical__SlotNum_10 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer canonical__next_value_of_SlotNum_10 = canonical__Var_43;
              MR_Word canonical__next_value_of_STATE_VARIABLE_ProcMap_0_29 = canonical__STATE_VARIABLE_ProcMap_41_41;
              MR_Word canonical__next_value_of_STATE_VARIABLE_AddedPD_0_31 = canonical__STATE_VARIABLE_AddedPD_39_39;

              canonical__STATE_VARIABLE_AddedPD_0_31 = canonical__next_value_of_STATE_VARIABLE_AddedPD_0_31;
              canonical__STATE_VARIABLE_ProcMap_0_29 = canonical__next_value_of_STATE_VARIABLE_ProcMap_0_29;
              canonical__SlotNum_10 = canonical__next_value_of_SlotNum_10;
            }
            continue;
          }
        else
          {
            *canonical__STATE_VARIABLE_AddedPD_32 = canonical__STATE_VARIABLE_AddedPD_0_31;
            *canonical__STATE_VARIABLE_ProcMap_30 = canonical__STATE_VARIABLE_ProcMap_0_29;
          }
      }
      break;
    }
}

static void MR_CALL 
canonical__lookup_multi_sites_3_p_0(
  MR_Word canonical__HeadVar__1_1,
  MR_Integer canonical__SlotNum_2,
  MR_Word * canonical__HeadVar__3_3)
{
  {
    MR_bool canonical__succeeded;

    if ((canonical__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *canonical__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_ArrayPtr canonical__RestArray_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word canonical__RestArrays_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word canonical__CSDList_8;
        MR_Word canonical__CSDLists_9;
        MR_Word canonical__Slot_10;
        MR_Box canonical__conv0_Slot_10;

        {
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) canonical__RestArray_5, canonical__SlotNum_2, &canonical__conv0_Slot_10);
        }
        canonical__Slot_10 = ((MR_Word) canonical__conv0_Slot_10);
        if (((MR_tag((MR_Word) canonical__Slot_10)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_ArrayPtr canonical__CSDArray_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), canonical__Slot_10, (MR_Integer) 1)));
            MR_Word canonical__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__Slot_10, (MR_Integer) 0)));

            {
              mercury__array__to_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) canonical__CSDArray_13, &canonical__CSDList_8);
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "canonical", (MR_String) "predicate \140canonical.lookup_multi_sites\'/3", (MR_String) "found normal");
              return;
            }
          }
        {
          canonical__lookup_multi_sites_3_p_0(canonical__RestArrays_6, canonical__SlotNum_2, &canonical__CSDLists_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *canonical__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (canonical__CSDList_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (canonical__CSDLists_9));
        }
      }
  }
}

static void MR_CALL 
canonical__lookup_normal_sites_3_p_0(
  MR_Word canonical__HeadVar__1_1,
  MR_Integer canonical__SlotNum_2,
  MR_Word * canonical__HeadVar__3_3)
{
  {
    MR_bool canonical__succeeded;

    if ((canonical__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *canonical__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_ArrayPtr canonical__RestArray_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word canonical__RestArrays_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word canonical__CSDPtr_8;
        MR_Word canonical__CSDPtrs_9;
        MR_Word canonical__Slot_10;
        MR_Box canonical__conv0_Slot_10;

        {
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) canonical__RestArray_5, canonical__SlotNum_2, &canonical__conv0_Slot_10);
        }
        canonical__Slot_10 = ((MR_Word) canonical__conv0_Slot_10);
        if (((MR_tag((MR_Word) canonical__Slot_10)) == (MR_mktag((MR_Integer) 1))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "canonical", (MR_String) "predicate \140canonical.lookup_normal_sites\'/3", (MR_String) "found slot_multi");
              return;
            }
          }
        else
          canonical__CSDPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__Slot_10, (MR_Integer) 0)));
        {
          canonical__lookup_normal_sites_3_p_0(canonical__RestArrays_6, canonical__SlotNum_2, &canonical__CSDPtrs_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *canonical__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (canonical__CSDPtr_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (canonical__CSDPtrs_9));
        }
      }
  }
}

static void MR_CALL 
canonical__canonicalize_cliques_2_p_0_2(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_Word canonical__conv7_STATE_VARIABLE_PD_11;

    {
      canonical__subst_in_proc_dynamic_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv7_STATE_VARIABLE_PD_11);
    }
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv7_STATE_VARIABLE_PD_11));
  }
}

static void MR_CALL 
canonical__canonicalize_cliques_2_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box * canonical__wrapper_arg_2)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_Word canonical__conv4_STATE_VARIABLE_CSD_12;

    {
      canonical__subst_in_call_site_dynamic_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv4_STATE_VARIABLE_CSD_12);
    }
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv4_STATE_VARIABLE_CSD_12));
  }
}

void MR_CALL 
canonical__canonicalize_cliques_2_p_0(
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_16,
  MR_Word * canonical__STATE_VARIABLE_InitDeep_17)
{
  {
    MR_bool canonical__succeeded;
    MR_Word canonical__TypeCtorInfo_46_82;
    MR_Word canonical__TypeCtorInfo_50_86;
    MR_Integer canonical__MaxCSDs_4;
    MR_Integer canonical__MaxPDs_5;
    MR_Integer canonical__NumCSDs_6;
    MR_Integer canonical__NumPDs_7;
    MR_Word canonical__CliqueList_8;
    MR_ArrayPtr canonical__Cliques_9;
    MR_ArrayPtr canonical__CliqueIndex_10;
    MR_Word canonical__MergeInfo_11;
    MR_ArrayPtr canonical__CSDRedirect0_12;
    MR_ArrayPtr canonical__PDRedirect0_13;
    MR_Word canonical__Redirect0_14;
    MR_Word canonical__Redirect1_15;
    MR_ArrayPtr canonical__Var_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 2)));
    MR_ArrayPtr canonical__Var_19;
    MR_Word canonical__STATE_VARIABLE_InitDeep_26_26;
    MR_ArrayPtr canonical__CSDredirect0_48;
    MR_ArrayPtr canonical__PDredirect0_49;
    MR_Word canonical__Stats_50;
    MR_Word canonical__Root0_51;
    MR_ArrayPtr canonical__CSDs0_52;
    MR_ArrayPtr canonical__PDs0_53;
    MR_ArrayPtr canonical__CSSs_54;
    MR_ArrayPtr canonical__PSs_55;
    MR_Integer canonical__NumCSD_56;
    MR_ArrayPtr canonical__CSDredirect_57;
    MR_Integer canonical__NumPD_58;
    MR_ArrayPtr canonical__PDredirect_59;
    MR_Word canonical__Redirect_60;
    MR_ArrayPtr canonical__CSDs1_61;
    MR_ArrayPtr canonical__PDs1_62;
    MR_ArrayPtr canonical__CSDs_63;
    MR_ArrayPtr canonical__PDs_64;
    MR_Word canonical__Root_65;
    MR_ArrayPtr canonical__Var_68;
    MR_ArrayPtr canonical__Var_71;
    MR_Word canonical__Var_72;
    MR_ArrayPtr canonical__Var_73;
    MR_Word canonical__Var_74;
    MR_ArrayPtr canonical__Var_75;
    MR_Integer canonical__PDI_90;
    MR_Word canonical__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 0)));
    MR_Word canonical__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 1)));
    MR_ArrayPtr canonical__Var_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 3)));
    MR_ArrayPtr canonical__Var_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 4)));
    MR_ArrayPtr canonical__Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 5)));
    MR_Word canonical__Var_33;
    MR_Word canonical__Var_34;
    MR_ArrayPtr canonical__Var_35;
    MR_ArrayPtr canonical__Var_36;
    MR_ArrayPtr canonical__Var_37;
    MR_ArrayPtr canonical__conv0_CSDRedirect0_12;
    MR_ArrayPtr canonical__conv1_PDRedirect0_13;
    MR_Box canonical__conv2_Var_68;
    MR_Box canonical__conv3_Var_71;
    MR_Box canonical__conv5_Var_73;
    MR_ArrayPtr canonical__conv6_CSDs1_61;
    MR_Box canonical__conv8_Var_75;
    MR_ArrayPtr canonical__conv9_PDs1_62;
    MR_ArrayPtr canonical__conv10_CSDs_63;
    MR_ArrayPtr canonical__conv11_PDs_64;
    MR_Box canonical__conv12_Root_65;

    {
      canonical__MaxCSDs_4 = mercury__array__max_1_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) canonical__Var_18);
    }
    canonical__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 0)));
    canonical__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 1)));
    canonical__Var_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 2)));
    canonical__Var_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 3)));
    canonical__Var_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 4)));
    canonical__Var_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 5)));
    {
      canonical__MaxPDs_5 = mercury__array__max_1_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_ArrayPtr) canonical__Var_19);
    }
    canonical__NumCSDs_6 = (canonical__MaxCSDs_4 + (MR_Integer) 1);
    canonical__NumPDs_7 = (canonical__MaxPDs_5 + (MR_Integer) 1);
    {
      callgraph__find_cliques_2_p_0(canonical__STATE_VARIABLE_InitDeep_0_16, &canonical__CliqueList_8);
    }
    {
      callgraph__make_clique_indexes_4_p_0(canonical__NumPDs_7, canonical__CliqueList_8, &canonical__Cliques_9, &canonical__CliqueIndex_10);
    }
    {
      canonical__MergeInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), canonical__MergeInfo_11, 0) = ((MR_Box) (canonical__Cliques_9));
      MR_hl_field(MR_mktag(0), canonical__MergeInfo_11, 1) = ((MR_Box) (canonical__CliqueIndex_10));
    }
    {
      canonical__conv0_CSDRedirect0_12 = mercury__array__init_2_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, canonical__NumCSDs_6, ((MR_Box) (((MR_Box) ((MR_Integer) 0)))));
    }
    canonical__CSDRedirect0_12 = (MR_ArrayPtr) canonical__conv0_CSDRedirect0_12;
    {
      canonical__conv1_PDRedirect0_13 = mercury__array__init_2_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, canonical__NumPDs_7, ((MR_Box) (((MR_Box) ((MR_Integer) 0)))));
    }
    canonical__PDRedirect0_13 = (MR_ArrayPtr) canonical__conv1_PDRedirect0_13;
    {
      canonical__Redirect0_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), canonical__Redirect0_14, 0) = ((MR_Box) (canonical__CSDRedirect0_12));
      MR_hl_field(MR_mktag(0), canonical__Redirect0_14, 1) = ((MR_Box) (canonical__PDRedirect0_13));
    }
    {
      canonical__merge_cliques_6_p_0(canonical__CliqueList_8, canonical__MergeInfo_11, canonical__STATE_VARIABLE_InitDeep_0_16, &canonical__STATE_VARIABLE_InitDeep_26_26, canonical__Redirect0_14, &canonical__Redirect1_15);
    }
    canonical__CSDredirect0_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__Redirect1_15, (MR_Integer) 0)));
    canonical__PDredirect0_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__Redirect1_15, (MR_Integer) 1)));
    canonical__Stats_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_26_26, (MR_Integer) 0)));
    canonical__Root0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_26_26, (MR_Integer) 1)));
    canonical__CSDs0_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_26_26, (MR_Integer) 2)));
    canonical__PDs0_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_26_26, (MR_Integer) 3)));
    canonical__CSSs_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_26_26, (MR_Integer) 4)));
    canonical__PSs_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_26_26, (MR_Integer) 5)));
    {
      canonical__conv2_Var_68 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[7], ((MR_Box) (canonical__CSDredirect0_48)));
    }
    canonical__Var_68 = ((MR_ArrayPtr) canonical__conv2_Var_68);
    {
      canonical__compact_csd_redirect_6_p_0((MR_Integer) 1, (MR_Integer) 1, canonical__NumCSDs_6, &canonical__NumCSD_56, canonical__Var_68, &canonical__CSDredirect_57);
    }
    {
      canonical__conv3_Var_71 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[6], ((MR_Box) (canonical__PDredirect0_49)));
    }
    canonical__Var_71 = ((MR_ArrayPtr) canonical__conv3_Var_71);
    {
      canonical__compact_pd_redirect_6_p_0((MR_Integer) 1, (MR_Integer) 1, canonical__NumPDs_7, &canonical__NumPD_58, canonical__Var_71, &canonical__PDredirect_59);
    }
    {
      canonical__Redirect_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), canonical__Redirect_60, 0) = ((MR_Box) (canonical__CSDredirect_57));
      MR_hl_field(MR_mktag(0), canonical__Redirect_60, 1) = ((MR_Box) (canonical__PDredirect_59));
    }
    {
      canonical__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), canonical__Var_72, 0) = ((MR_Box) (&canonical_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), canonical__Var_72, 1) = ((MR_Box) (canonical__canonicalize_cliques_2_p_0_1));
      MR_hl_field(MR_mktag(0), canonical__Var_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), canonical__Var_72, 3) = ((MR_Box) (canonical__Redirect_60));
    }
    {
      canonical__conv5_Var_73 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[5], ((MR_Box) (canonical__CSDs0_52)));
    }
    canonical__Var_73 = ((MR_ArrayPtr) canonical__conv5_Var_73);
    canonical__TypeCtorInfo_46_82 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
    {
      array_util__array_map_from_1_3_p_0(canonical__TypeCtorInfo_46_82, canonical__Var_72, (MR_ArrayPtr) canonical__Var_73, &canonical__conv6_CSDs1_61);
    }
    canonical__CSDs1_61 = (MR_ArrayPtr) canonical__conv6_CSDs1_61;
    {
      canonical__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), canonical__Var_74, 0) = ((MR_Box) (&canonical_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), canonical__Var_74, 1) = ((MR_Box) (canonical__canonicalize_cliques_2_p_0_2));
      MR_hl_field(MR_mktag(0), canonical__Var_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), canonical__Var_74, 3) = ((MR_Box) (canonical__Redirect_60));
    }
    {
      canonical__conv8_Var_75 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[3], ((MR_Box) (canonical__PDs0_53)));
    }
    canonical__Var_75 = ((MR_ArrayPtr) canonical__conv8_Var_75);
    canonical__TypeCtorInfo_50_86 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
    {
      array_util__array_map_from_1_3_p_0(canonical__TypeCtorInfo_50_86, canonical__Var_74, (MR_ArrayPtr) canonical__Var_75, &canonical__conv9_PDs1_62);
    }
    canonical__PDs1_62 = (MR_ArrayPtr) canonical__conv9_PDs1_62;
    {
      mercury__array__shrink_3_p_0(canonical__TypeCtorInfo_46_82, canonical__NumCSD_56, (MR_ArrayPtr) canonical__CSDs1_61, &canonical__conv10_CSDs_63);
    }
    canonical__CSDs_63 = (MR_ArrayPtr) canonical__conv10_CSDs_63;
    {
      mercury__array__shrink_3_p_0(canonical__TypeCtorInfo_50_86, canonical__NumPD_58, (MR_ArrayPtr) canonical__PDs1_62, &canonical__conv11_PDs_64);
    }
    canonical__PDs_64 = (MR_ArrayPtr) canonical__conv11_PDs_64;
    canonical__PDI_90 = (MR_Integer) canonical__Root0_51;
    {
      mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_ArrayPtr) canonical__PDredirect_59, canonical__PDI_90, &canonical__conv12_Root_65);
    }
    canonical__Root_65 = ((MR_Word) canonical__conv12_Root_65);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *canonical__STATE_VARIABLE_InitDeep_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (canonical__Stats_50));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (canonical__Root_65));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (canonical__CSDs_63));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (canonical__PDs_64));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (canonical__CSSs_54));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (canonical__PSs_55));
    }
  }
}

static void MR_CALL 
canonical__compact_pd_redirect_6_p_0(
  MR_Integer canonical__CurOld_7,
  MR_Integer canonical__CurNew_8,
  MR_Integer canonical__MaxOld_9,
  MR_Integer * canonical__NumNew_10,
  MR_ArrayPtr canonical__STATE_VARIABLE_PDredirect_0_13,
  MR_ArrayPtr * canonical__STATE_VARIABLE_PDredirect_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool canonical__succeeded = (canonical__CurOld_7 > canonical__MaxOld_9);

        if (canonical__succeeded)
          {
            *canonical__NumNew_10 = canonical__CurNew_8;
            *canonical__STATE_VARIABLE_PDredirect_14 = canonical__STATE_VARIABLE_PDredirect_0_13;
          }
        else
          {
            MR_Word canonical__TypeCtorInfo_26_26 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0;
            MR_Word canonical__Redirect0_12;
            MR_Box canonical__conv0_Redirect0_12;
            MR_Integer canonical__Var_15;

            {
              mercury__array__lookup_3_p_0(canonical__TypeCtorInfo_26_26, (MR_ArrayPtr) canonical__STATE_VARIABLE_PDredirect_0_13, canonical__CurOld_7, &canonical__conv0_Redirect0_12);
            }
            canonical__Redirect0_12 = ((MR_Word) canonical__conv0_Redirect0_12);
            canonical__Var_15 = (MR_Integer) canonical__Redirect0_12;
            canonical__succeeded = (canonical__Var_15 == (MR_Integer) 0);
            if (canonical__succeeded)
              {
                MR_Word canonical__Var_16 = (MR_Word) canonical__CurNew_8;
                MR_ArrayPtr canonical__STATE_VARIABLE_PDredirect_17_17;
                MR_Integer canonical__Var_18;
                MR_Integer canonical__Var_19;
                MR_ArrayPtr canonical__conv1_STATE_VARIABLE_PDredirect_17_17;

                {
                  mercury__array__set_4_p_0(canonical__TypeCtorInfo_26_26, canonical__CurOld_7, ((MR_Box) (canonical__Var_16)), (MR_ArrayPtr) canonical__STATE_VARIABLE_PDredirect_0_13, &canonical__conv1_STATE_VARIABLE_PDredirect_17_17);
                }
                canonical__STATE_VARIABLE_PDredirect_17_17 = (MR_ArrayPtr) canonical__conv1_STATE_VARIABLE_PDredirect_17_17;
                canonical__Var_18 = (canonical__CurOld_7 + (MR_Integer) 1);
                canonical__Var_19 = (canonical__CurNew_8 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Integer canonical__next_value_of_CurOld_7 = canonical__Var_18;
                  MR_Integer canonical__next_value_of_CurNew_8 = canonical__Var_19;
                  MR_ArrayPtr canonical__next_value_of_STATE_VARIABLE_PDredirect_0_13 = canonical__STATE_VARIABLE_PDredirect_17_17;

                  canonical__STATE_VARIABLE_PDredirect_0_13 = canonical__next_value_of_STATE_VARIABLE_PDredirect_0_13;
                  canonical__CurNew_8 = canonical__next_value_of_CurNew_8;
                  canonical__CurOld_7 = canonical__next_value_of_CurOld_7;
                }
                continue;
              }
            else
              {
                MR_Integer canonical__Var_23 = (canonical__CurOld_7 + (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Integer canonical__next_value_of_CurOld_7 = canonical__Var_23;

                  canonical__CurOld_7 = canonical__next_value_of_CurOld_7;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
canonical__compact_csd_redirect_6_p_0(
  MR_Integer canonical__CurOld_7,
  MR_Integer canonical__CurNew_8,
  MR_Integer canonical__MaxOld_9,
  MR_Integer * canonical__NumNew_10,
  MR_ArrayPtr canonical__STATE_VARIABLE_CSDredirect_0_13,
  MR_ArrayPtr * canonical__STATE_VARIABLE_CSDredirect_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool canonical__succeeded = (canonical__CurOld_7 > canonical__MaxOld_9);

        if (canonical__succeeded)
          {
            *canonical__NumNew_10 = canonical__CurNew_8;
            *canonical__STATE_VARIABLE_CSDredirect_14 = canonical__STATE_VARIABLE_CSDredirect_0_13;
          }
        else
          {
            MR_Word canonical__TypeCtorInfo_26_26 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
            MR_Word canonical__Redirect0_12;
            MR_Box canonical__conv0_Redirect0_12;
            MR_Integer canonical__Var_15;

            {
              mercury__array__lookup_3_p_0(canonical__TypeCtorInfo_26_26, (MR_ArrayPtr) canonical__STATE_VARIABLE_CSDredirect_0_13, canonical__CurOld_7, &canonical__conv0_Redirect0_12);
            }
            canonical__Redirect0_12 = ((MR_Word) canonical__conv0_Redirect0_12);
            canonical__Var_15 = (MR_Integer) canonical__Redirect0_12;
            canonical__succeeded = (canonical__Var_15 == (MR_Integer) 0);
            if (canonical__succeeded)
              {
                MR_Word canonical__Var_16 = (MR_Word) canonical__CurNew_8;
                MR_ArrayPtr canonical__STATE_VARIABLE_CSDredirect_17_17;
                MR_Integer canonical__Var_18;
                MR_Integer canonical__Var_19;
                MR_ArrayPtr canonical__conv1_STATE_VARIABLE_CSDredirect_17_17;

                {
                  mercury__array__set_4_p_0(canonical__TypeCtorInfo_26_26, canonical__CurOld_7, ((MR_Box) (canonical__Var_16)), (MR_ArrayPtr) canonical__STATE_VARIABLE_CSDredirect_0_13, &canonical__conv1_STATE_VARIABLE_CSDredirect_17_17);
                }
                canonical__STATE_VARIABLE_CSDredirect_17_17 = (MR_ArrayPtr) canonical__conv1_STATE_VARIABLE_CSDredirect_17_17;
                canonical__Var_18 = (canonical__CurOld_7 + (MR_Integer) 1);
                canonical__Var_19 = (canonical__CurNew_8 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Integer canonical__next_value_of_CurOld_7 = canonical__Var_18;
                  MR_Integer canonical__next_value_of_CurNew_8 = canonical__Var_19;
                  MR_ArrayPtr canonical__next_value_of_STATE_VARIABLE_CSDredirect_0_13 = canonical__STATE_VARIABLE_CSDredirect_17_17;

                  canonical__STATE_VARIABLE_CSDredirect_0_13 = canonical__next_value_of_STATE_VARIABLE_CSDredirect_0_13;
                  canonical__CurNew_8 = canonical__next_value_of_CurNew_8;
                  canonical__CurOld_7 = canonical__next_value_of_CurOld_7;
                }
                continue;
              }
            else
              {
                MR_Integer canonical__Var_23 = (canonical__CurOld_7 + (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Integer canonical__next_value_of_CurOld_7 = canonical__Var_23;

                  canonical__CurOld_7 = canonical__next_value_of_CurOld_7;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
canonical__merge_cliques_6_p_0_4(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box * canonical__wrapper_arg_3,
  MR_Box canonical__wrapper_arg_4,
  MR_Box * canonical__wrapper_arg_5)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_Word canonical__conv3_STATE_VARIABLE_InitDeep_15;
    MR_Word canonical__conv2_STATE_VARIABLE_Redirect_17;

    {
      canonical__merge_proc_dynamics_ignore_chosen_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 4))), ((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2), &canonical__conv3_STATE_VARIABLE_InitDeep_15, ((MR_Word) canonical__wrapper_arg_4), &canonical__conv2_STATE_VARIABLE_Redirect_17);
    }
    *canonical__wrapper_arg_3 = ((MR_Box) (canonical__conv3_STATE_VARIABLE_InitDeep_15));
    *canonical__wrapper_arg_5 = ((MR_Box) (canonical__conv2_STATE_VARIABLE_Redirect_17));
  }
}

static MR_bool MR_CALL 
canonical__merge_cliques_6_p_0_3(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1)
{
  {
    MR_bool canonical__succeeded;
    MR_Box canonical__closure = canonical__closure_arg;

    {
      canonical__succeeded = canonical__two_or_more_1_p_0(((MR_Word) canonical__wrapper_arg_1));
    }
    return canonical__succeeded;
  }
}

static MR_bool MR_CALL 
canonical__merge_cliques_6_p_0_2(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1)
{
  {
    MR_bool canonical__succeeded;
    MR_Box canonical__closure = canonical__closure_arg;

    {
      canonical__succeeded = canonical__two_or_more_1_p_0(((MR_Word) canonical__wrapper_arg_1));
    }
    return canonical__succeeded;
  }
}

static void MR_CALL 
canonical__merge_cliques_6_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box * canonical__wrapper_arg_3)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_Word canonical__conv0_STATE_VARIABLE_ProcMap_13;

    {
      canonical__cluster_pds_by_ps_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2), &canonical__conv0_STATE_VARIABLE_ProcMap_13);
    }
    *canonical__wrapper_arg_3 = ((MR_Box) (canonical__conv0_STATE_VARIABLE_ProcMap_13));
  }
}

static void MR_CALL 
canonical__merge_cliques_6_p_0(
  MR_Word canonical__HeadVar__1_1,
  MR_Word canonical__MergeInfo_2,
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_3,
  MR_Word * canonical__STATE_VARIABLE_InitDeep_4,
  MR_Word canonical__STATE_VARIABLE_Redirect_0_5,
  MR_Word * canonical__STATE_VARIABLE_Redirect_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool canonical__succeeded;

        if ((canonical__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *canonical__STATE_VARIABLE_Redirect_6 = canonical__STATE_VARIABLE_Redirect_0_5;
            *canonical__STATE_VARIABLE_InitDeep_4 = canonical__STATE_VARIABLE_InitDeep_0_3;
          }
        else
          {
            MR_Word canonical__Clique_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word canonical__Cliques_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word canonical__STATE_VARIABLE_InitDeep_23_23;
            MR_Word canonical__STATE_VARIABLE_Redirect_24_24;

            if ((canonical__Clique_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                canonical__STATE_VARIABLE_InitDeep_23_23 = canonical__STATE_VARIABLE_InitDeep_0_3;
                canonical__STATE_VARIABLE_Redirect_24_24 = canonical__STATE_VARIABLE_Redirect_0_5;
              }
            else
              {
                MR_Word canonical__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__Clique_14, (MR_Integer) 1)));
                MR_Word canonical__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__Clique_14, (MR_Integer) 0)));

                if ((canonical__Var_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    canonical__STATE_VARIABLE_InitDeep_23_23 = canonical__STATE_VARIABLE_InitDeep_0_3;
                    canonical__STATE_VARIABLE_Redirect_24_24 = canonical__STATE_VARIABLE_Redirect_0_5;
                  }
                else
                  {
                    MR_Word canonical__TypeCtorInfo_37_57 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
                    MR_Word canonical__TypeInfo_38_58 = (MR_Word) &canonical_scalar_common_1[0];
                    MR_Word canonical__ProcMap0_39;
                    MR_Word canonical__ProcMap1_40;
                    MR_Word canonical__PDsList1_41;
                    MR_Word canonical__ToMergePDsList1_42;
                    MR_Word canonical__Var_50;
                    MR_Box canonical__conv1_ProcMap1_40;

                    {
                      mercury__map__init_1_p_0(canonical__TypeCtorInfo_37_57, canonical__TypeInfo_38_58, &canonical__ProcMap0_39);
                    }
                    {
                      canonical__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), canonical__Var_50, 0) = ((MR_Box) (&canonical_scalar_common_5[0]));
                      MR_hl_field(MR_mktag(0), canonical__Var_50, 1) = ((MR_Box) (canonical__merge_cliques_6_p_0_1));
                      MR_hl_field(MR_mktag(0), canonical__Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), canonical__Var_50, 3) = ((MR_Box) (canonical__STATE_VARIABLE_InitDeep_0_3));
                    }
                    {
                      mercury__list__foldl_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &canonical_scalar_common_2[0], canonical__Var_50, canonical__Clique_14, ((MR_Box) (canonical__ProcMap0_39)), &canonical__conv1_ProcMap1_40);
                    }
                    canonical__ProcMap1_40 = ((MR_Word) canonical__conv1_ProcMap1_40);
                    {
                      mercury__map__values_2_p_0(canonical__TypeCtorInfo_37_57, canonical__TypeInfo_38_58, canonical__ProcMap1_40, &canonical__PDsList1_41);
                    }
                    {
                      mercury__list__filter_3_p_0(canonical__TypeInfo_38_58, (MR_Word) &canonical_scalar_common_2[4], canonical__PDsList1_41, &canonical__ToMergePDsList1_42);
                    }
                    if ((canonical__ToMergePDsList1_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        canonical__STATE_VARIABLE_InitDeep_23_23 = canonical__STATE_VARIABLE_InitDeep_0_3;
                        canonical__STATE_VARIABLE_Redirect_24_24 = canonical__STATE_VARIABLE_Redirect_0_5;
                      }
                    else
                      {
                        MR_Word canonical__ProcMap_45;
                        MR_Word canonical__Clique_46;
                        MR_Word canonical__PDsList_47;
                        MR_Word canonical__ToMergePDsList_48;
                        MR_Word canonical__Var_53;
                        MR_Box canonical__conv5_STATE_VARIABLE_InitDeep_23_23;
                        MR_Box canonical__conv4_STATE_VARIABLE_Redirect_24_24;

                        {
                          canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0(canonical__STATE_VARIABLE_InitDeep_0_3, canonical__ProcMap1_40, &canonical__ProcMap_45, &canonical__Clique_46);
                        }
                        {
                          mercury__map__values_2_p_0(canonical__TypeCtorInfo_37_57, canonical__TypeInfo_38_58, canonical__ProcMap_45, &canonical__PDsList_47);
                        }
                        {
                          mercury__list__filter_3_p_0(canonical__TypeInfo_38_58, (MR_Word) &canonical_scalar_common_2[5], canonical__PDsList_47, &canonical__ToMergePDsList_48);
                        }
                        {
                          canonical__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), canonical__Var_53, 0) = ((MR_Box) (&canonical_scalar_common_4[1]));
                          MR_hl_field(MR_mktag(0), canonical__Var_53, 1) = ((MR_Box) (canonical__merge_cliques_6_p_0_4));
                          MR_hl_field(MR_mktag(0), canonical__Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), canonical__Var_53, 3) = ((MR_Box) (canonical__MergeInfo_2));
                          MR_hl_field(MR_mktag(0), canonical__Var_53, 4) = ((MR_Box) (canonical__Clique_46));
                        }
                        {
                          mercury__list__foldl2_6_p_0(canonical__TypeInfo_38_58, (MR_Word) &profile__profile__type_ctor_info_initial_deep_0, (MR_Word) &canonical__canonical__type_ctor_info_redirect_0, canonical__Var_53, canonical__ToMergePDsList_48, ((MR_Box) (canonical__STATE_VARIABLE_InitDeep_0_3)), &canonical__conv5_STATE_VARIABLE_InitDeep_23_23, ((MR_Box) (canonical__STATE_VARIABLE_Redirect_0_5)), &canonical__conv4_STATE_VARIABLE_Redirect_24_24);
                        }
                        canonical__STATE_VARIABLE_InitDeep_23_23 = ((MR_Word) canonical__conv5_STATE_VARIABLE_InitDeep_23_23);
                        canonical__STATE_VARIABLE_Redirect_24_24 = ((MR_Word) canonical__conv4_STATE_VARIABLE_Redirect_24_24);
                      }
                  }
              }
            /* direct tailcall eliminated */
            {
              MR_Word canonical__next_value_of_HeadVar__1_1 = canonical__Cliques_15;
              MR_Word canonical__next_value_of_STATE_VARIABLE_InitDeep_0_3 = canonical__STATE_VARIABLE_InitDeep_23_23;
              MR_Word canonical__next_value_of_STATE_VARIABLE_Redirect_0_5 = canonical__STATE_VARIABLE_Redirect_24_24;

              canonical__STATE_VARIABLE_Redirect_0_5 = canonical__next_value_of_STATE_VARIABLE_Redirect_0_5;
              canonical__STATE_VARIABLE_InitDeep_0_3 = canonical__next_value_of_STATE_VARIABLE_InitDeep_0_3;
              canonical__HeadVar__1_1 = canonical__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0_2(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box * canonical__wrapper_arg_3,
  MR_Box canonical__wrapper_arg_4,
  MR_Box * canonical__wrapper_arg_5)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_Word canonical__conv3_STATE_VARIABLE_ProcMap_20;
    MR_Word canonical__conv2_STATE_VARIABLE_AddedPD_22;

    {
      canonical__complete_clique_ps_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 4))), ((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2), &canonical__conv3_STATE_VARIABLE_ProcMap_20, ((MR_Word) canonical__wrapper_arg_4), &canonical__conv2_STATE_VARIABLE_AddedPD_22);
    }
    *canonical__wrapper_arg_3 = ((MR_Box) (canonical__conv3_STATE_VARIABLE_ProcMap_20));
    *canonical__wrapper_arg_5 = ((MR_Box) (canonical__conv2_STATE_VARIABLE_AddedPD_22));
  }
}

static void MR_CALL 
canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box canonical__closure_arg,
  MR_Box canonical__wrapper_arg_1,
  MR_Box canonical__wrapper_arg_2,
  MR_Box * canonical__wrapper_arg_3)
{
  {
    MR_Box canonical__closure = canonical__closure_arg;
    MR_Word canonical__conv0_HeadVar__3_24;

    {
      canonical__IntroducedFrom__pred__complete_clique__130__1_3_p_0(((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2), &canonical__conv0_HeadVar__3_24);
    }
    *canonical__wrapper_arg_3 = ((MR_Box) (canonical__conv0_HeadVar__3_24));
  }
}

static void MR_CALL 
canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0(
  MR_Word canonical__InitDeep_6,
  MR_Word canonical__STATE_VARIABLE_ProcMap_0_13,
  MR_Word * canonical__STATE_VARIABLE_ProcMap_14,
  MR_Word * canonical__Clique_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool canonical__succeeded;
        MR_Word canonical__TypeInfo_21_21 = (MR_Word) &canonical_scalar_common_1[0];
        MR_Word canonical__PDsList0_10;
        MR_Word canonical__Clique0_11;
        MR_Word canonical__AddedPD_12;
        MR_Word canonical__Var_16;
        MR_Word canonical__STATE_VARIABLE_ProcMap_17_17;
        MR_Word canonical__PSPDs0_37;
        MR_Word canonical__Var_38;
        MR_Box canonical__conv1_Clique0_11;
        MR_Box canonical__conv5_STATE_VARIABLE_ProcMap_17_17;
        MR_Box canonical__conv4_AddedPD_12;

        {
          mercury__map__values_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, canonical__TypeInfo_21_21, canonical__STATE_VARIABLE_ProcMap_0_13, &canonical__PDsList0_10);
        }
        {
          canonical__Var_16 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0);
        }
        {
          mercury__list__foldl_4_p_0(canonical__TypeInfo_21_21, (MR_Word) &canonical_scalar_common_1[1], (MR_Word) &canonical_scalar_common_2[3], canonical__PDsList0_10, ((MR_Box) (canonical__Var_16)), &canonical__conv1_Clique0_11);
        }
        canonical__Clique0_11 = ((MR_Word) canonical__conv1_Clique0_11);
        {
          mercury__map__to_assoc_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &canonical_scalar_common_1[0], canonical__STATE_VARIABLE_ProcMap_0_13, &canonical__PSPDs0_37);
        }
        {
          canonical__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), canonical__Var_38, 0) = ((MR_Box) (&canonical_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), canonical__Var_38, 1) = ((MR_Box) (canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0_2));
          MR_hl_field(MR_mktag(0), canonical__Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), canonical__Var_38, 3) = ((MR_Box) (canonical__InitDeep_6));
          MR_hl_field(MR_mktag(0), canonical__Var_38, 4) = ((MR_Box) (canonical__Clique0_11));
        }
        {
          mercury__list__foldl2_6_p_0((MR_Word) &canonical_scalar_common_2[1], (MR_Word) &canonical_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, canonical__Var_38, canonical__PSPDs0_37, ((MR_Box) (canonical__STATE_VARIABLE_ProcMap_0_13)), &canonical__conv5_STATE_VARIABLE_ProcMap_17_17, ((MR_Box) ((MR_Integer) 0)), &canonical__conv4_AddedPD_12);
        }
        canonical__STATE_VARIABLE_ProcMap_17_17 = ((MR_Word) canonical__conv5_STATE_VARIABLE_ProcMap_17_17);
        canonical__AddedPD_12 = ((MR_Word) canonical__conv4_AddedPD_12);
        switch (canonical__AddedPD_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *canonical__Clique_9 = canonical__Clique0_11;
              *canonical__STATE_VARIABLE_ProcMap_14 = canonical__STATE_VARIABLE_ProcMap_17_17;
            }
            break;
          case (MR_Integer) 1:
            {
              /* direct tailcall eliminated */
              {
                MR_Word canonical__next_value_of_STATE_VARIABLE_ProcMap_0_13 = canonical__STATE_VARIABLE_ProcMap_17_17;

                canonical__STATE_VARIABLE_ProcMap_0_13 = canonical__next_value_of_STATE_VARIABLE_ProcMap_0_13;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
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

/* :- end_module canonical. */
