/*
** Automatically generated from `canonical.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.4.0.
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
#include "mdbcomp.trace_counts.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 81 "canonical.c"
static const MR_FA_TypeInfo_Struct1 canonical__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

#line 84 "canonical.c"
static const MR_FA_PseudoTypeInfo_Struct2 canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

#line 87 "canonical.c"
static const MR_FA_PseudoTypeInfo_Struct1 canonical__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0;

#line 90 "canonical.c"
static const MR_FA_PseudoTypeInfo_Struct1 canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0;

#line 93 "canonical.c"
static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_array_slot_0;

#line 96 "canonical.c"
static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0;

#line 99 "canonical.c"
static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0;

#line 102 "canonical.c"
static const MR_FA_TypeInfo_Struct1 canonical__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 105 "canonical.c"
static const MR_FA_PseudoTypeInfo_Struct2 canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 108 "canonical.c"
static const MR_FA_PseudoTypeInfo_Struct1 canonical__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 111 "canonical.c"
static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 114 "canonical.c"
static const MR_FA_PseudoTypeInfo_Struct2 canonical__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

#line 117 "canonical.c"
static const MR_FA_TypeInfo_Struct1 canonical__array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

#line 120 "canonical.c"
static const MR_FA_TypeInfo_Struct1 canonical__array__ti_array_1profile__type_ctor_info_clique_ptr_0;

#line 123 "canonical.c"
static const MR_PseudoTypeInfo canonical__canonical__field_types_merge_info_0_0[2];

#line 126 "canonical.c"
static const MR_ConstString canonical__canonical__field_names_merge_info_0_0[2];

#line 129 "canonical.c"
static const MR_DuFunctorDesc canonical__canonical__du_functor_desc_merge_info_0_0;

#line 132 "canonical.c"
static const MR_DuFunctorDescPtr canonical__canonical__du_stag_ordered_merge_info_0_0[1];

#line 135 "canonical.c"
static const MR_DuPtagLayout canonical__canonical__du_ptag_ordered_merge_info_0[1];

#line 138 "canonical.c"
static const MR_DuFunctorDescPtr canonical__canonical__du_name_ordered_merge_info_0[1];

#line 141 "canonical.c"
static const MR_Integer canonical__canonical__functor_number_map_merge_info_0[1];

#line 144 "canonical.c"
static const MR_FA_TypeInfo_Struct1 canonical__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 147 "canonical.c"
static const MR_FA_TypeInfo_Struct1 canonical__array__ti_array_1profile__type_ctor_info_proc_dynamic_ptr_0;

#line 150 "canonical.c"
static const MR_PseudoTypeInfo canonical__canonical__field_types_redirect_0_0[2];

#line 153 "canonical.c"
static const MR_ConstString canonical__canonical__field_names_redirect_0_0[2];

#line 156 "canonical.c"
static const MR_DuFunctorDesc canonical__canonical__du_functor_desc_redirect_0_0;

#line 159 "canonical.c"
static const MR_DuFunctorDescPtr canonical__canonical__du_stag_ordered_redirect_0_0[1];

#line 162 "canonical.c"
static const MR_DuPtagLayout canonical__canonical__du_ptag_ordered_redirect_0[1];

#line 165 "canonical.c"
static const MR_DuFunctorDescPtr canonical__canonical__du_name_ordered_redirect_0[1];

#line 168 "canonical.c"
static const MR_Integer canonical__canonical__functor_number_map_redirect_0[1];

#line 171 "canonical.c"
static MR_bool MR_CALL 
canonical____Unify____merge_info_0_0_10001(
#line 174 "canonical.c"
  MR_Box canonical__wrapper_arg_1,
#line 176 "canonical.c"
  MR_Box canonical__wrapper_arg_2);

#line 179 "canonical.c"
static void MR_CALL 
canonical____Compare____merge_info_0_0_10001(
#line 182 "canonical.c"
  MR_Box * canonical__wrapper_arg_1,
#line 184 "canonical.c"
  MR_Box canonical__wrapper_arg_2,
#line 186 "canonical.c"
  MR_Box canonical__wrapper_arg_3);

#line 189 "canonical.c"
static MR_bool MR_CALL 
canonical____Unify____redirect_0_0_10001(
#line 192 "canonical.c"
  MR_Box canonical__wrapper_arg_1,
#line 194 "canonical.c"
  MR_Box canonical__wrapper_arg_2);

#line 197 "canonical.c"
static void MR_CALL 
canonical____Compare____redirect_0_0_10001(
#line 200 "canonical.c"
  MR_Box * canonical__wrapper_arg_1,
#line 202 "canonical.c"
  MR_Box canonical__wrapper_arg_2,
#line 204 "canonical.c"
  MR_Box canonical__wrapper_arg_3);

#line 148 "canonical.m"
static void MR_CALL 
canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0_2(
#line 148 "canonical.m"
  MR_Box canonical__closure_arg,
#line 148 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 148 "canonical.m"
  MR_Box canonical__wrapper_arg_2,
#line 148 "canonical.m"
  MR_Box * canonical__wrapper_arg_3,
#line 148 "canonical.m"
  MR_Box canonical__wrapper_arg_4,
#line 148 "canonical.m"
  MR_Box * canonical__wrapper_arg_5);

#line 130 "canonical.m"
static void MR_CALL 
canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0_1(
#line 130 "canonical.m"
  MR_Box canonical__closure_arg,
#line 130 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 130 "canonical.m"
  MR_Box canonical__wrapper_arg_2,
#line 130 "canonical.m"
  MR_Box * canonical__wrapper_arg_3);

#line 123 "canonical.m"
static void MR_CALL 
canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0(
#line 123 "canonical.m"
  MR_Word canonical__InitDeep_6,
#line 123 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_ProcMap_0_13,
#line 123 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_ProcMap_14,
#line 123 "canonical.m"
  MR_Word * canonical__Clique_9);

#line 418 "canonical.m"
static MR_bool MR_CALL 
canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__418__1_2_p_0(
#line 418 "canonical.m"
  MR_Word canonical__InClique_17,
#line 418 "canonical.m"
  MR_Word canonical__HeadVar__2_43);

#line 413 "canonical.m"
static MR_bool MR_CALL 
canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__413__1_2_p_0(
#line 413 "canonical.m"
  MR_Word canonical__NotInClique_18,
#line 413 "canonical.m"
  MR_Word canonical__HeadVar__2_38);

#line 239 "canonical.m"
static MR_bool MR_CALL 
canonical__IntroducedFrom__pred__merge_proc_dynamics__239__1_2_p_0(
#line 239 "canonical.m"
  MR_Word canonical__InvalidPDPtrs_17,
#line 239 "canonical.m"
  MR_Word canonical__HeadVar__2_36);

#line 130 "canonical.m"
static void MR_CALL 
canonical__IntroducedFrom__pred__complete_clique__130__1_3_p_0(
#line 130 "canonical.m"
  MR_Word canonical__HeadVar__1_22,
#line 130 "canonical.m"
  MR_Word canonical__HeadVar__2_23,
#line 130 "canonical.m"
  MR_Word * canonical__HeadVar__3_24);

#line 53 "canonical.m"
static void MR_CALL 
canonical____Compare____redirect_0_0(
#line 53 "canonical.m"
  MR_Word * canonical__HeadVar__1_1,
#line 53 "canonical.m"
  MR_Word canonical__HeadVar__2_2,
#line 53 "canonical.m"
  MR_Word canonical__HeadVar__3_3);

#line 53 "canonical.m"
static MR_bool MR_CALL 
canonical____Unify____redirect_0_0(
#line 53 "canonical.m"
  MR_Word canonical__HeadVar__1_1,
#line 53 "canonical.m"
  MR_Word canonical__HeadVar__2_2);

#line 47 "canonical.m"
static void MR_CALL 
canonical____Compare____merge_info_0_0(
#line 47 "canonical.m"
  MR_Word * canonical__HeadVar__1_1,
#line 47 "canonical.m"
  MR_Word canonical__HeadVar__2_2,
#line 47 "canonical.m"
  MR_Word canonical__HeadVar__3_3);

#line 47 "canonical.m"
static MR_bool MR_CALL 
canonical____Unify____merge_info_0_0(
#line 47 "canonical.m"
  MR_Word canonical__HeadVar__1_1,
#line 47 "canonical.m"
  MR_Word canonical__HeadVar__2_2);

#line 776 "canonical.m"
static void MR_CALL 
canonical__subst_in_slot_3_p_0_1(
#line 776 "canonical.m"
  MR_Box canonical__closure_arg,
#line 776 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 776 "canonical.m"
  MR_Box * canonical__wrapper_arg_2);

#line 769 "canonical.m"
static void MR_CALL 
canonical__subst_in_slot_3_p_0(
#line 769 "canonical.m"
  MR_Word canonical__Redirect_1,
#line 769 "canonical.m"
  MR_Word canonical__HeadVar__2_2,
#line 769 "canonical.m"
  MR_Word * canonical__HeadVar__3_3);

#line 766 "canonical.m"
static void MR_CALL 
canonical__subst_in_proc_dynamic_3_p_0_1(
#line 766 "canonical.m"
  MR_Box canonical__closure_arg,
#line 766 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 766 "canonical.m"
  MR_Box * canonical__wrapper_arg_2);

#line 761 "canonical.m"
static void MR_CALL 
canonical__subst_in_proc_dynamic_3_p_0(
#line 761 "canonical.m"
  MR_Word canonical__Redirect_4,
#line 761 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_PD_0_10,
#line 761 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_PD_11);

#line 752 "canonical.m"
static void MR_CALL 
canonical__subst_in_call_site_dynamic_3_p_0(
#line 752 "canonical.m"
  MR_Word canonical__Redirect_4,
#line 752 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_CSD_0_11,
#line 752 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_CSD_12);

#line 731 "canonical.m"
static void MR_CALL 
canonical__compact_pd_redirect_6_p_0(
#line 731 "canonical.m"
  MR_Integer canonical__CurOld_7,
#line 731 "canonical.m"
  MR_Integer canonical__CurNew_8,
#line 731 "canonical.m"
  MR_Integer canonical__MaxOld_9,
#line 731 "canonical.m"
  MR_Integer * canonical__NumNew_10,
#line 731 "canonical.m"
  MR_ArrayPtr canonical__STATE_VARIABLE_PDredirect_0_13,
#line 731 "canonical.m"
  MR_ArrayPtr * canonical__STATE_VARIABLE_PDredirect_14);

#line 710 "canonical.m"
static void MR_CALL 
canonical__compact_csd_redirect_6_p_0(
#line 710 "canonical.m"
  MR_Integer canonical__CurOld_7,
#line 710 "canonical.m"
  MR_Integer canonical__CurNew_8,
#line 710 "canonical.m"
  MR_Integer canonical__MaxOld_9,
#line 710 "canonical.m"
  MR_Integer * canonical__NumNew_10,
#line 710 "canonical.m"
  MR_ArrayPtr canonical__STATE_VARIABLE_CSDredirect_0_13,
#line 710 "canonical.m"
  MR_ArrayPtr * canonical__STATE_VARIABLE_CSDredirect_14);

#line 647 "canonical.m"
static void MR_CALL 
canonical__lookup_csd_redirect_3_p_0(
#line 647 "canonical.m"
  MR_ArrayPtr canonical__CallSiteRedirect0_4,
#line 647 "canonical.m"
  MR_Word canonical__CSDPtr_5,
#line 647 "canonical.m"
  MR_Word * canonical__OldRedirect_6);

#line 607 "canonical.m"
static void MR_CALL 
canonical__cluster_csds_by_ps_4_p_0(
#line 607 "canonical.m"
  MR_Word canonical__InitDeep_5,
#line 607 "canonical.m"
  MR_Word canonical__CSDPtr_6,
#line 607 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_ProcMap_0_15,
#line 607 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_ProcMap_16);

#line 589 "canonical.m"
static void MR_CALL 
canonical__cluster_pds_by_ps_4_p_0(
#line 589 "canonical.m"
  MR_Word canonical__InitDeep_5,
#line 589 "canonical.m"
  MR_Word canonical__PDPtr_6,
#line 589 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_ProcMap_0_12,
#line 589 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_ProcMap_13);

#line 585 "canonical.m"
static MR_bool MR_CALL 
canonical__two_or_more_1_p_0(
#line 585 "canonical.m"
  MR_Word canonical__HeadVar__1_1);

#line 569 "canonical.m"
static void MR_CALL 
canonical__record_csd_redirect_2_4_p_0(
#line 569 "canonical.m"
  MR_Word canonical__HeadVar__1_1,
#line 569 "canonical.m"
  MR_Word canonical__PrimeCSDPtr_2,
#line 569 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_3,
#line 569 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_4);

#line 550 "canonical.m"
static void MR_CALL 
canonical__record_csd_redirect_4_p_0(
#line 550 "canonical.m"
  MR_Word canonical__RestCSDPtrs_5,
#line 550 "canonical.m"
  MR_Word canonical__PrimeCSDPtr_6,
#line 550 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_10,
#line 550 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_11);

#line 534 "canonical.m"
static void MR_CALL 
canonical__record_pd_redirect_2_4_p_0(
#line 534 "canonical.m"
  MR_Word canonical__HeadVar__1_1,
#line 534 "canonical.m"
  MR_Word canonical__PrimePDPtr_2,
#line 534 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_3,
#line 534 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_4);

#line 515 "canonical.m"
static void MR_CALL 
canonical__record_pd_redirect_4_p_0(
#line 515 "canonical.m"
  MR_Word canonical__RestPDPtrs_5,
#line 515 "canonical.m"
  MR_Word canonical__PrimePDPtr_6,
#line 515 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_10,
#line 515 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_11);

#line 500 "canonical.m"
static void MR_CALL 
canonical__lookup_multi_sites_3_p_0(
#line 500 "canonical.m"
  MR_Word canonical__HeadVar__1_1,
#line 500 "canonical.m"
  MR_Integer canonical__SlotNum_2,
#line 500 "canonical.m"
  MR_Word * canonical__HeadVar__3_3);

#line 486 "canonical.m"
static void MR_CALL 
canonical__lookup_normal_sites_3_p_0(
#line 486 "canonical.m"
  MR_Word canonical__HeadVar__1_1,
#line 486 "canonical.m"
  MR_Integer canonical__SlotNum_2,
#line 486 "canonical.m"
  MR_Word * canonical__HeadVar__3_3);

#line 471 "canonical.m"
static void MR_CALL 
canonical__union_cliques_4_p_0(
#line 471 "canonical.m"
  MR_Word canonical__MergeInfo_5,
#line 471 "canonical.m"
  MR_Word canonical__PDPtr_6,
#line 471 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_CliqueUnion_0_10,
#line 471 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_CliqueUnion_11);

#line 467 "canonical.m"
static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0_3(
#line 467 "canonical.m"
  MR_Box canonical__closure_arg,
#line 467 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 467 "canonical.m"
  MR_Box canonical__wrapper_arg_2,
#line 467 "canonical.m"
  MR_Box * canonical__wrapper_arg_3);

#line 465 "canonical.m"
static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0_2(
#line 465 "canonical.m"
  MR_Box canonical__closure_arg,
#line 465 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 465 "canonical.m"
  MR_Box * canonical__wrapper_arg_2);

#line 463 "canonical.m"
static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0_1(
#line 463 "canonical.m"
  MR_Box canonical__closure_arg,
#line 463 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 463 "canonical.m"
  MR_Box * canonical__wrapper_arg_2);

#line 453 "canonical.m"
static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0(
#line 453 "canonical.m"
  MR_Word canonical__MergeInfo_9,
#line 453 "canonical.m"
  MR_Word canonical__PrimeCSDPtr_10,
#line 453 "canonical.m"
  MR_Word canonical__RestCSDPtrs_11,
#line 453 "canonical.m"
  MR_Word * canonical__ChosenPDPtr_12,
#line 453 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_22,
#line 453 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_InitDeep_23,
#line 453 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_24,
#line 453 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_25);

#line 426 "canonical.m"
static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_6(
#line 426 "canonical.m"
  MR_Box canonical__closure_arg,
#line 426 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 426 "canonical.m"
  MR_Box * canonical__wrapper_arg_2);

#line 418 "canonical.m"
static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_5(
#line 418 "canonical.m"
  MR_Box canonical__closure_arg);

#line 426 "canonical.m"
static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_4(
#line 426 "canonical.m"
  MR_Box canonical__closure_arg,
#line 426 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 426 "canonical.m"
  MR_Box * canonical__wrapper_arg_2);

#line 413 "canonical.m"
static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_3(
#line 413 "canonical.m"
  MR_Box canonical__closure_arg);

#line 429 "canonical.m"
static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_2(
#line 429 "canonical.m"
  MR_Box canonical__closure_arg,
#line 429 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 429 "canonical.m"
  MR_Box canonical__wrapper_arg_2,
#line 429 "canonical.m"
  MR_Box * canonical__wrapper_arg_3);

#line 407 "canonical.m"
static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_1(
#line 407 "canonical.m"
  MR_Box canonical__closure_arg,
#line 407 "canonical.m"
  MR_Box canonical__wrapper_arg_1);

#line 397 "canonical.m"
static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0(
#line 397 "canonical.m"
  MR_Word canonical__MergeInfo_9,
#line 397 "canonical.m"
  MR_Word canonical__Clique_10,
#line 397 "canonical.m"
  MR_Word canonical__PrimeCSDPtr_11,
#line 397 "canonical.m"
  MR_Word canonical__RestCSDPtrs_12,
#line 397 "canonical.m"
  MR_Word canonical__InitDeep0_13,
#line 397 "canonical.m"
  MR_Word * canonical__InitDeep_14,
#line 397 "canonical.m"
  MR_Word canonical__Redirect0_15,
#line 397 "canonical.m"
  MR_Word * canonical__Redirect_16);

#line 374 "canonical.m"
static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_9_p_0_1(
#line 374 "canonical.m"
  MR_Box canonical__closure_arg,
#line 374 "canonical.m"
  MR_Box canonical__wrapper_arg_1);

#line 366 "canonical.m"
static void MR_CALL 
canonical__merge_call_site_dynamics_9_p_0(
#line 366 "canonical.m"
  MR_Word canonical__MergeInfo_10,
#line 366 "canonical.m"
  MR_Word canonical__Clique_11,
#line 366 "canonical.m"
  MR_Word canonical__ParentPDPtr_12,
#line 366 "canonical.m"
  MR_Word canonical__CandidateCSDPtrs_13,
#line 366 "canonical.m"
  MR_Word * canonical__ChosenCSDPtr_14,
#line 366 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_26,
#line 366 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_InitDeep_27,
#line 366 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_28,
#line 366 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_29);

#line 352 "canonical.m"
static void MR_CALL 
canonical__merge_multi_slot_cluster_10_p_0(
#line 352 "canonical.m"
  MR_Word canonical__MergeInfo_11,
#line 352 "canonical.m"
  MR_Word canonical__ParentPDPtr_12,
#line 352 "canonical.m"
  MR_Word canonical__Clique_13,
#line 352 "canonical.m"
  MR_Word canonical__ClusterCSDPtrs_14,
#line 352 "canonical.m"
  MR_Word canonical__PrimeCSDPtrs0_15,
#line 352 "canonical.m"
  MR_Word * canonical__PrimeCSDPtrs_16,
#line 352 "canonical.m"
  MR_Word canonical__InitDeep0_17,
#line 352 "canonical.m"
  MR_Word * canonical__InitDeep_18,
#line 352 "canonical.m"
  MR_Word canonical__Redirect0_19,
#line 352 "canonical.m"
  MR_Word * canonical__Redirect_20);

#line 349 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamic_multi_slot_11_p_0_2(
#line 349 "canonical.m"
  MR_Box canonical__closure_arg,
#line 349 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 349 "canonical.m"
  MR_Box canonical__wrapper_arg_2,
#line 349 "canonical.m"
  MR_Box * canonical__wrapper_arg_3,
#line 349 "canonical.m"
  MR_Box canonical__wrapper_arg_4,
#line 349 "canonical.m"
  MR_Box * canonical__wrapper_arg_5,
#line 349 "canonical.m"
  MR_Box canonical__wrapper_arg_6,
#line 349 "canonical.m"
  MR_Box * canonical__wrapper_arg_7);

#line 346 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamic_multi_slot_11_p_0_1(
#line 346 "canonical.m"
  MR_Box canonical__closure_arg,
#line 346 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 346 "canonical.m"
  MR_Box canonical__wrapper_arg_2,
#line 346 "canonical.m"
  MR_Box * canonical__wrapper_arg_3);

#line 334 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamic_multi_slot_11_p_0(
#line 334 "canonical.m"
  MR_Word canonical__MergeInfo_12,
#line 334 "canonical.m"
  MR_Integer canonical__SlotNum_13,
#line 334 "canonical.m"
  MR_Word canonical__Clique_14,
#line 334 "canonical.m"
  MR_Word canonical__ParentPDPtr_15,
#line 334 "canonical.m"
  MR_Word canonical__PrimeCSDPtrs0_16,
#line 334 "canonical.m"
  MR_Word canonical__RestSiteArrays_17,
#line 334 "canonical.m"
  MR_Word * canonical__PrimeCSDPtrs_18,
#line 334 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_26,
#line 334 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_InitDeep_27,
#line 334 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_28,
#line 334 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_29);

#line 325 "canonical.m"
static MR_bool MR_CALL 
canonical__callee_in_clique_3_p_0(
#line 325 "canonical.m"
  MR_Word canonical__InitDeep_4,
#line 325 "canonical.m"
  MR_Word canonical__Clique_5,
#line 325 "canonical.m"
  MR_Word canonical__CSDPtr_6);

#line 319 "canonical.m"
static void MR_CALL 
canonical__accumulate_csd_owns_3_p_0(
#line 319 "canonical.m"
  MR_Word canonical__CSD_4,
#line 319 "canonical.m"
  MR_Word canonical__Own0_5,
#line 319 "canonical.m"
  MR_Word * canonical__Own_6);

#line 305 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamic_normal_slot_11_p_0(
#line 305 "canonical.m"
  MR_Word canonical__MergeInfo_12,
#line 305 "canonical.m"
  MR_Integer canonical__SlotNum_13,
#line 305 "canonical.m"
  MR_Word canonical__Clique_14,
#line 305 "canonical.m"
  MR_Word canonical__PrimePDPtr_15,
#line 305 "canonical.m"
  MR_Word canonical__PrimeCSDPtr0_16,
#line 305 "canonical.m"
  MR_Word canonical__RestSiteArrays_17,
#line 305 "canonical.m"
  MR_Word * canonical__PrimeCSDPtr_18,
#line 305 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_22,
#line 305 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_InitDeep_23,
#line 305 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_24,
#line 305 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_25);

#line 266 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamic_slots_11_p_0(
#line 266 "canonical.m"
  MR_Word canonical__MergeInfo_12,
#line 266 "canonical.m"
  MR_Integer canonical__SlotNum_13,
#line 266 "canonical.m"
  MR_Word canonical__Clique_14,
#line 266 "canonical.m"
  MR_Word canonical__PrimePDPtr_15,
#line 266 "canonical.m"
  MR_ArrayPtr canonical__STATE_VARIABLE_PrimeSiteArray_0_28,
#line 266 "canonical.m"
  MR_Word canonical__RestSiteArrays_17,
#line 266 "canonical.m"
  MR_ArrayPtr * canonical__STATE_VARIABLE_PrimeSiteArray_29,
#line 266 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_30,
#line 266 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_InitDeep_31,
#line 266 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_32,
#line 266 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_33);

#line 245 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamics_8_p_0_4(
#line 245 "canonical.m"
  MR_Box canonical__closure_arg,
#line 245 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 245 "canonical.m"
  MR_Box * canonical__wrapper_arg_2);

#line 244 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamics_8_p_0_3(
#line 244 "canonical.m"
  MR_Box canonical__closure_arg,
#line 244 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 244 "canonical.m"
  MR_Box * canonical__wrapper_arg_2);

#line 239 "canonical.m"
static MR_bool MR_CALL 
canonical__merge_proc_dynamics_8_p_0_2(
#line 239 "canonical.m"
  MR_Box canonical__closure_arg);

#line 237 "canonical.m"
static MR_bool MR_CALL 
canonical__merge_proc_dynamics_8_p_0_1(
#line 237 "canonical.m"
  MR_Box canonical__closure_arg,
#line 237 "canonical.m"
  MR_Box canonical__wrapper_arg_1);

#line 229 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamics_8_p_0(
#line 229 "canonical.m"
  MR_Word canonical__MergeInfo_9,
#line 229 "canonical.m"
  MR_Word canonical__Clique_10,
#line 229 "canonical.m"
  MR_Word canonical__CandidatePDPtrs_11,
#line 229 "canonical.m"
  MR_Word * canonical__ChosenPDPtr_12,
#line 229 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_29,
#line 229 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_InitDeep_30,
#line 229 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_31,
#line 229 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_32);

#line 245 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_4(
#line 245 "canonical.m"
  MR_Box canonical__closure_arg,
#line 245 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 245 "canonical.m"
  MR_Box * canonical__wrapper_arg_2);

#line 244 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_3(
#line 244 "canonical.m"
  MR_Box canonical__closure_arg,
#line 244 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 244 "canonical.m"
  MR_Box * canonical__wrapper_arg_2);

#line 239 "canonical.m"
static MR_bool MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_2(
#line 239 "canonical.m"
  MR_Box canonical__closure_arg);

#line 237 "canonical.m"
static MR_bool MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_1(
#line 237 "canonical.m"
  MR_Box canonical__closure_arg,
#line 237 "canonical.m"
  MR_Box canonical__wrapper_arg_1);

#line 219 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0(
#line 219 "canonical.m"
  MR_Word canonical__MergeInfo_8,
#line 219 "canonical.m"
  MR_Word canonical__Clique_9,
#line 219 "canonical.m"
  MR_Word canonical__CandidatePDPtrs_10,
#line 219 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_14,
#line 219 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_InitDeep_15,
#line 219 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_16,
#line 219 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_17);

#line 208 "canonical.m"
static void MR_CALL 
canonical__complete_clique_slots_9_p_0_3(
#line 208 "canonical.m"
  MR_Box canonical__closure_arg,
#line 208 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 208 "canonical.m"
  MR_Box canonical__wrapper_arg_2,
#line 208 "canonical.m"
  MR_Box * canonical__wrapper_arg_3);

#line 197 "canonical.m"
static void MR_CALL 
canonical__complete_clique_slots_9_p_0_2(
#line 197 "canonical.m"
  MR_Box canonical__closure_arg,
#line 197 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 197 "canonical.m"
  MR_Box * canonical__wrapper_arg_2);

#line 194 "canonical.m"
static MR_bool MR_CALL 
canonical__complete_clique_slots_9_p_0_1(
#line 194 "canonical.m"
  MR_Box canonical__closure_arg,
#line 194 "canonical.m"
  MR_Box canonical__wrapper_arg_1);

#line 175 "canonical.m"
static void MR_CALL 
canonical__complete_clique_slots_9_p_0(
#line 175 "canonical.m"
  MR_Integer canonical__SlotNum_10,
#line 175 "canonical.m"
  MR_Word canonical__InitDeep_11,
#line 175 "canonical.m"
  MR_Word canonical__Clique_12,
#line 175 "canonical.m"
  MR_ArrayPtr canonical__PSSites_13,
#line 175 "canonical.m"
  MR_Word canonical__PDSites_14,
#line 175 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_ProcMap_0_29,
#line 175 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_ProcMap_30,
#line 175 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_AddedPD_0_31,
#line 175 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_AddedPD_32);

#line 168 "canonical.m"
static void MR_CALL 
canonical__lookup_pd_site_3_p_0(
#line 168 "canonical.m"
  MR_Word canonical__InitDeep_4,
#line 168 "canonical.m"
  MR_Word canonical__PDPtr_5,
#line 168 "canonical.m"
  MR_ArrayPtr * canonical__Sites_6);

#line 161 "canonical.m"
static void MR_CALL 
canonical__complete_clique_ps_7_p_0_1(
#line 161 "canonical.m"
  MR_Box canonical__closure_arg,
#line 161 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 161 "canonical.m"
  MR_Box * canonical__wrapper_arg_2);

#line 151 "canonical.m"
static void MR_CALL 
canonical__complete_clique_ps_7_p_0(
#line 151 "canonical.m"
  MR_Word canonical__InitDeep_8,
#line 151 "canonical.m"
  MR_Word canonical__Clique_9,
#line 151 "canonical.m"
  MR_Word canonical__HeadVar__3_3,
#line 151 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_ProcMap_0_19,
#line 151 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_ProcMap_20,
#line 151 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_AddedPD_0_21,
#line 151 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_AddedPD_22);

#line 107 "canonical.m"
static void MR_CALL 
canonical__merge_cliques_6_p_0_4(
#line 107 "canonical.m"
  MR_Box canonical__closure_arg,
#line 107 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 107 "canonical.m"
  MR_Box canonical__wrapper_arg_2,
#line 107 "canonical.m"
  MR_Box * canonical__wrapper_arg_3,
#line 107 "canonical.m"
  MR_Box canonical__wrapper_arg_4,
#line 107 "canonical.m"
  MR_Box * canonical__wrapper_arg_5);

#line 106 "canonical.m"
static MR_bool MR_CALL 
canonical__merge_cliques_6_p_0_3(
#line 106 "canonical.m"
  MR_Box canonical__closure_arg,
#line 106 "canonical.m"
  MR_Box canonical__wrapper_arg_1);

#line 101 "canonical.m"
static MR_bool MR_CALL 
canonical__merge_cliques_6_p_0_2(
#line 101 "canonical.m"
  MR_Box canonical__closure_arg,
#line 101 "canonical.m"
  MR_Box canonical__wrapper_arg_1);

#line 98 "canonical.m"
static void MR_CALL 
canonical__merge_cliques_6_p_0_1(
#line 98 "canonical.m"
  MR_Box canonical__closure_arg,
#line 98 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 98 "canonical.m"
  MR_Box canonical__wrapper_arg_2,
#line 98 "canonical.m"
  MR_Box * canonical__wrapper_arg_3);

#line 77 "canonical.m"
static void MR_CALL 
canonical__merge_cliques_6_p_0(
#line 77 "canonical.m"
  MR_Word canonical__HeadVar__1_1,
#line 77 "canonical.m"
  MR_Word canonical__MergeInfo_2,
#line 77 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_3,
#line 77 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_InitDeep_4,
#line 77 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_5,
#line 77 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_6);

#line 703 "canonical.m"
static void MR_CALL 
canonical__canonicalize_cliques_2_p_0_2(
#line 703 "canonical.m"
  MR_Box canonical__closure_arg,
#line 703 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 703 "canonical.m"
  MR_Box * canonical__wrapper_arg_2);

#line 701 "canonical.m"
static void MR_CALL 
canonical__canonicalize_cliques_2_p_0_1(
#line 701 "canonical.m"
  MR_Box canonical__closure_arg,
#line 701 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 701 "canonical.m"
  MR_Box * canonical__wrapper_arg_2);


static /* final */ const MR_Box canonical_scalar_common_1[10][2];

static /* final */ const MR_Box canonical_scalar_common_2[10][3];

static /* final */ const MR_Box canonical_scalar_common_3[11][6];

static /* final */ const MR_Box canonical_scalar_common_4[3][7];

static /* final */ const MR_Box canonical_scalar_common_5[1][4];

static /* final */ const MR_Box canonical_scalar_common_6[2][10];

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
    ((MR_Box) (&canonical_scalar_common_5[0])),
    ((MR_Box) (canonical__merge_cliques_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&canonical_scalar_common_5[0])),
    ((MR_Box) (canonical__merge_cliques_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&canonical_scalar_common_7[3])),
    ((MR_Box) (canonical__merge_proc_dynamics_ignore_chosen_7_p_0_4)),
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
    ((MR_Box) (&canonical_scalar_common_3[6])),
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
    ((MR_Box) (&canonical_scalar_common_3[10])),
    ((MR_Box) (canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box canonical_scalar_common_3[11][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&canonical__canonical__type_ctor_info_redirect_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&canonical__canonical__type_ctor_info_redirect_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_array_slot_0))
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
    ((MR_Box) (&canonical__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&canonical__canonical__type_ctor_info_redirect_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&canonical__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box canonical_scalar_common_4[3][7] = {
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

static /* final */ const MR_Box canonical_scalar_common_5[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&canonical__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box canonical_scalar_common_6[2][10] = {
  /* row 0 */
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
  /* row 1 */
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



#include "profile.mh"
#include "profile.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1502 "canonical.c"
static const MR_FA_TypeInfo_Struct1 canonical__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 1510 "canonical.c"
static const MR_FA_PseudoTypeInfo_Struct2 canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &canonical__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 1519 "canonical.c"
static const MR_FA_PseudoTypeInfo_Struct1 canonical__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 1527 "canonical.c"
static const MR_FA_PseudoTypeInfo_Struct1 canonical__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 1535 "canonical.c"
static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

#line 1543 "canonical.c"
static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_0
  }
};

#line 1551 "canonical.c"
static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_0
  }
};

#line 1559 "canonical.c"
static const MR_FA_TypeInfo_Struct1 canonical__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1567 "canonical.c"
static const MR_FA_PseudoTypeInfo_Struct2 canonical__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &canonical__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1576 "canonical.c"
static const MR_FA_PseudoTypeInfo_Struct1 canonical__list__pti_list_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1584 "canonical.c"
static const MR_FA_PseudoTypeInfo_Struct1 canonical__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1592 "canonical.c"
static const MR_FA_PseudoTypeInfo_Struct2 canonical__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &canonical__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 1601 "canonical.c"
static const MR_FA_TypeInfo_Struct1 canonical__array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &canonical__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 1609 "canonical.c"
static const MR_FA_TypeInfo_Struct1 canonical__array__ti_array_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

#line 1617 "canonical.c"
static const MR_PseudoTypeInfo canonical__canonical__field_types_merge_info_0_0[2] = {
  (MR_PseudoTypeInfo) &canonical__array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &canonical__array__ti_array_1profile__type_ctor_info_clique_ptr_0
};

#line 1623 "canonical.c"
static const MR_ConstString canonical__canonical__field_names_merge_info_0_0[2] = {
  (MR_String) "merge_clique_members",
  (MR_String) "merge_clique_index"
};

#line 1629 "canonical.c"
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
  NULL
};

#line 1644 "canonical.c"
static const MR_DuFunctorDescPtr canonical__canonical__du_stag_ordered_merge_info_0_0[1] = {
  &canonical__canonical__du_functor_desc_merge_info_0_0
};

#line 1649 "canonical.c"
static const MR_DuPtagLayout canonical__canonical__du_ptag_ordered_merge_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    canonical__canonical__du_stag_ordered_merge_info_0_0
  }
};

#line 1658 "canonical.c"
static const MR_DuFunctorDescPtr canonical__canonical__du_name_ordered_merge_info_0[1] = {
  &canonical__canonical__du_functor_desc_merge_info_0_0
};

#line 1663 "canonical.c"
static const MR_Integer canonical__canonical__functor_number_map_merge_info_0[1] = {
  (MR_Integer) 0
};

#line 1668 "canonical.c"
const MR_TypeCtorInfo_Struct canonical__canonical__type_ctor_info_merge_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (canonical____Unify____merge_info_0_0_10001)),
  ((MR_Box) (canonical____Compare____merge_info_0_0_10001)),
  (MR_String) "canonical",
  (MR_String) "merge_info",
  {
    canonical__canonical__du_name_ordered_merge_info_0
  },
  {
    canonical__canonical__du_ptag_ordered_merge_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  canonical__canonical__functor_number_map_merge_info_0
};

#line 1689 "canonical.c"
static const MR_FA_TypeInfo_Struct1 canonical__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1697 "canonical.c"
static const MR_FA_TypeInfo_Struct1 canonical__array__ti_array_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 1705 "canonical.c"
static const MR_PseudoTypeInfo canonical__canonical__field_types_redirect_0_0[2] = {
  (MR_PseudoTypeInfo) &canonical__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &canonical__array__ti_array_1profile__type_ctor_info_proc_dynamic_ptr_0
};

#line 1711 "canonical.c"
static const MR_ConstString canonical__canonical__field_names_redirect_0_0[2] = {
  (MR_String) "csd_redirect",
  (MR_String) "pd_redirect"
};

#line 1717 "canonical.c"
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
  NULL
};

#line 1732 "canonical.c"
static const MR_DuFunctorDescPtr canonical__canonical__du_stag_ordered_redirect_0_0[1] = {
  &canonical__canonical__du_functor_desc_redirect_0_0
};

#line 1737 "canonical.c"
static const MR_DuPtagLayout canonical__canonical__du_ptag_ordered_redirect_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    canonical__canonical__du_stag_ordered_redirect_0_0
  }
};

#line 1746 "canonical.c"
static const MR_DuFunctorDescPtr canonical__canonical__du_name_ordered_redirect_0[1] = {
  &canonical__canonical__du_functor_desc_redirect_0_0
};

#line 1751 "canonical.c"
static const MR_Integer canonical__canonical__functor_number_map_redirect_0[1] = {
  (MR_Integer) 0
};

#line 1756 "canonical.c"
const MR_TypeCtorInfo_Struct canonical__canonical__type_ctor_info_redirect_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (canonical____Unify____redirect_0_0_10001)),
  ((MR_Box) (canonical____Compare____redirect_0_0_10001)),
  (MR_String) "canonical",
  (MR_String) "redirect",
  {
    canonical__canonical__du_name_ordered_redirect_0
  },
  {
    canonical__canonical__du_ptag_ordered_redirect_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  canonical__canonical__functor_number_map_redirect_0
};

#line 1777 "canonical.c"
static MR_bool MR_CALL 
canonical____Unify____merge_info_0_0_10001(
#line 1780 "canonical.c"
  MR_Box canonical__wrapper_arg_1,
#line 1782 "canonical.c"
  MR_Box canonical__wrapper_arg_2)
#line 1784 "canonical.c"
{
#line 1786 "canonical.c"
  {
#line 1788 "canonical.c"
    MR_bool canonical__succeeded;

#line 1791 "canonical.c"
    {
#line 1793 "canonical.c"
      canonical__succeeded = canonical____Unify____merge_info_0_0(((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2));
    }
#line 1796 "canonical.c"
    return canonical__succeeded;
#line 1798 "canonical.c"
  }
#line 1800 "canonical.c"
}

#line 1803 "canonical.c"
static void MR_CALL 
canonical____Compare____merge_info_0_0_10001(
#line 1806 "canonical.c"
  MR_Box * canonical__wrapper_arg_1,
#line 1808 "canonical.c"
  MR_Box canonical__wrapper_arg_2,
#line 1810 "canonical.c"
  MR_Box canonical__wrapper_arg_3)
#line 1812 "canonical.c"
{
#line 1814 "canonical.c"
  {
#line 1816 "canonical.c"
    MR_Word canonical__conv0_HeadVar__1_1;

#line 1819 "canonical.c"
    {
#line 1821 "canonical.c"
      canonical____Compare____merge_info_0_0(&canonical__conv0_HeadVar__1_1, ((MR_Word) canonical__wrapper_arg_2), ((MR_Word) canonical__wrapper_arg_3));
    }
#line 1824 "canonical.c"
    *canonical__wrapper_arg_1 = ((MR_Box) (canonical__conv0_HeadVar__1_1));
#line 1826 "canonical.c"
  }
#line 1828 "canonical.c"
}

#line 1831 "canonical.c"
static MR_bool MR_CALL 
canonical____Unify____redirect_0_0_10001(
#line 1834 "canonical.c"
  MR_Box canonical__wrapper_arg_1,
#line 1836 "canonical.c"
  MR_Box canonical__wrapper_arg_2)
#line 1838 "canonical.c"
{
#line 1840 "canonical.c"
  {
#line 1842 "canonical.c"
    MR_bool canonical__succeeded;

#line 1845 "canonical.c"
    {
#line 1847 "canonical.c"
      canonical__succeeded = canonical____Unify____redirect_0_0(((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2));
    }
#line 1850 "canonical.c"
    return canonical__succeeded;
#line 1852 "canonical.c"
  }
#line 1854 "canonical.c"
}

#line 1857 "canonical.c"
static void MR_CALL 
canonical____Compare____redirect_0_0_10001(
#line 1860 "canonical.c"
  MR_Box * canonical__wrapper_arg_1,
#line 1862 "canonical.c"
  MR_Box canonical__wrapper_arg_2,
#line 1864 "canonical.c"
  MR_Box canonical__wrapper_arg_3)
#line 1866 "canonical.c"
{
#line 1868 "canonical.c"
  {
#line 1870 "canonical.c"
    MR_Word canonical__conv0_HeadVar__1_1;

#line 1873 "canonical.c"
    {
#line 1875 "canonical.c"
      canonical____Compare____redirect_0_0(&canonical__conv0_HeadVar__1_1, ((MR_Word) canonical__wrapper_arg_2), ((MR_Word) canonical__wrapper_arg_3));
    }
#line 1878 "canonical.c"
    *canonical__wrapper_arg_1 = ((MR_Box) (canonical__conv0_HeadVar__1_1));
#line 1880 "canonical.c"
  }
#line 1882 "canonical.c"
}

#line 148 "canonical.m"
static void MR_CALL 
canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0_2(
#line 148 "canonical.m"
  MR_Box canonical__closure_arg,
#line 148 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 148 "canonical.m"
  MR_Box canonical__wrapper_arg_2,
#line 148 "canonical.m"
  MR_Box * canonical__wrapper_arg_3,
#line 148 "canonical.m"
  MR_Box canonical__wrapper_arg_4,
#line 148 "canonical.m"
  MR_Box * canonical__wrapper_arg_5)
#line 148 "canonical.m"
{
#line 148 "canonical.m"
  {
#line 148 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 148 "canonical.m"
    MR_Word canonical__conv3_STATE_VARIABLE_ProcMap_20;
#line 148 "canonical.m"
    MR_Word canonical__conv2_STATE_VARIABLE_AddedPD_22;

#line 148 "canonical.m"
    {
#line 148 "canonical.m"
      canonical__complete_clique_ps_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 4))), ((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2), &canonical__conv3_STATE_VARIABLE_ProcMap_20, ((MR_Word) canonical__wrapper_arg_4), &canonical__conv2_STATE_VARIABLE_AddedPD_22);
    }
#line 148 "canonical.m"
    *canonical__wrapper_arg_3 = ((MR_Box) (canonical__conv3_STATE_VARIABLE_ProcMap_20));
#line 148 "canonical.m"
    *canonical__wrapper_arg_5 = ((MR_Box) (canonical__conv2_STATE_VARIABLE_AddedPD_22));
#line 148 "canonical.m"
  }
#line 148 "canonical.m"
}

#line 130 "canonical.m"
static void MR_CALL 
canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0_1(
#line 130 "canonical.m"
  MR_Box canonical__closure_arg,
#line 130 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 130 "canonical.m"
  MR_Box canonical__wrapper_arg_2,
#line 130 "canonical.m"
  MR_Box * canonical__wrapper_arg_3)
#line 130 "canonical.m"
{
#line 130 "canonical.m"
  {
#line 130 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 130 "canonical.m"
    MR_Word canonical__conv0_HeadVar__3_24;

#line 130 "canonical.m"
    {
#line 130 "canonical.m"
      canonical__IntroducedFrom__pred__complete_clique__130__1_3_p_0(((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2), &canonical__conv0_HeadVar__3_24);
    }
#line 130 "canonical.m"
    *canonical__wrapper_arg_3 = ((MR_Box) (canonical__conv0_HeadVar__3_24));
#line 130 "canonical.m"
  }
#line 130 "canonical.m"
}

#line 123 "canonical.m"
static void MR_CALL 
canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0(
#line 123 "canonical.m"
  MR_Word canonical__InitDeep_6,
#line 123 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_ProcMap_0_13,
#line 123 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_ProcMap_14,
#line 123 "canonical.m"
  MR_Word * canonical__Clique_9)
#line 123 "canonical.m"
{
#line 128 "canonical.m"
  while (MR_TRUE)
#line 128 "canonical.m"
    {
#line 128 "canonical.m"
      /* tailcall optimized into a loop */
#line 128 "canonical.m"
      {
#line 128 "canonical.m"
        MR_bool canonical__succeeded;
#line 128 "canonical.m"
        MR_Word canonical__TypeInfo_21_21 = (MR_Word) &canonical_scalar_common_1[0];
#line 128 "canonical.m"
        MR_Word canonical__PDsList0_10;
#line 128 "canonical.m"
        MR_Word canonical__Clique0_11;
#line 128 "canonical.m"
        MR_Word canonical__AddedPD_12;
#line 128 "canonical.m"
        MR_Word canonical__V_16_16;
#line 128 "canonical.m"
        MR_Word canonical__STATE_VARIABLE_ProcMap_17_17;
#line 128 "canonical.m"
        MR_Word canonical__PSPDs0_37;
#line 128 "canonical.m"
        MR_Word canonical__V_38_38;
#line 130 "canonical.m"
        MR_Box canonical__conv1_Clique0_11;
#line 148 "canonical.m"
        MR_Box canonical__conv5_STATE_VARIABLE_ProcMap_17_17;
#line 148 "canonical.m"
        MR_Box canonical__conv4_AddedPD_12;

#line 129 "canonical.m"
        {
#line 129 "canonical.m"
          mercury__map__values_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, canonical__TypeInfo_21_21, canonical__STATE_VARIABLE_ProcMap_0_13, &canonical__PDsList0_10);
        }
#line 130 "canonical.m"
        {
#line 130 "canonical.m"
          canonical__V_16_16 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0);
        }
#line 130 "canonical.m"
        {
#line 130 "canonical.m"
          mercury__list__foldl_4_p_0(canonical__TypeInfo_21_21, (MR_Word) &canonical_scalar_common_1[1], (MR_Word) &canonical_scalar_common_2[9], canonical__PDsList0_10, ((MR_Box) (canonical__V_16_16)), &canonical__conv1_Clique0_11);
        }
#line 130 "canonical.m"
        canonical__Clique0_11 = ((MR_Word) canonical__conv1_Clique0_11);
#line 147 "canonical.m"
        {
#line 147 "canonical.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &canonical_scalar_common_1[0], canonical__STATE_VARIABLE_ProcMap_0_13, &canonical__PSPDs0_37);
        }
#line 148 "canonical.m"
        {
#line 148 "canonical.m"
          canonical__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 148 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_38_38, 0) = ((MR_Box) (&canonical_scalar_common_6[1]));
#line 148 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_38_38, 1) = ((MR_Box) (canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0_2));
#line 148 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 148 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_38_38, 3) = ((MR_Box) (canonical__InitDeep_6));
#line 148 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_38_38, 4) = ((MR_Box) (canonical__Clique0_11));
#line 148 "canonical.m"
        }
#line 148 "canonical.m"
        {
#line 148 "canonical.m"
          mercury__list__foldl2_6_p_0((MR_Word) &canonical_scalar_common_2[1], (MR_Word) &canonical_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, canonical__V_38_38, canonical__PSPDs0_37, ((MR_Box) (canonical__STATE_VARIABLE_ProcMap_0_13)), &canonical__conv5_STATE_VARIABLE_ProcMap_17_17, ((MR_Box) ((MR_Integer) 0)), &canonical__conv4_AddedPD_12);
        }
#line 148 "canonical.m"
        canonical__STATE_VARIABLE_ProcMap_17_17 = ((MR_Word) canonical__conv5_STATE_VARIABLE_ProcMap_17_17);
#line 148 "canonical.m"
        canonical__AddedPD_12 = ((MR_Word) canonical__conv4_AddedPD_12);
#line 135 "canonical.m"
        if ((canonical__AddedPD_12 == (MR_Integer) 0))
#line 136 "canonical.m"
          {
#line 137 "canonical.m"
            *canonical__Clique_9 = canonical__Clique0_11;
#line 137 "canonical.m"
            *canonical__STATE_VARIABLE_ProcMap_14 = canonical__STATE_VARIABLE_ProcMap_17_17;
#line 136 "canonical.m"
          }
#line 135 "canonical.m"
        else
#line 134 "canonical.m"
          {
#line 134 "canonical.m"
            /* direct tailcall eliminated */
#line 134 "canonical.m"
            {
#line 134 "canonical.m"
              MR_Word canonical__STATE_VARIABLE_ProcMap_0__tmp_copy_13 = canonical__STATE_VARIABLE_ProcMap_17_17;

#line 134 "canonical.m"
              canonical__STATE_VARIABLE_ProcMap_0_13 = canonical__STATE_VARIABLE_ProcMap_0__tmp_copy_13;
#line 134 "canonical.m"
            }
#line 134 "canonical.m"
            continue;
#line 134 "canonical.m"
          }
#line 128 "canonical.m"
      }
#line 128 "canonical.m"
      break;
#line 128 "canonical.m"
    }
#line 123 "canonical.m"
}

#line 418 "canonical.m"
static MR_bool MR_CALL 
canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__418__1_2_p_0(
#line 418 "canonical.m"
  MR_Word canonical__InClique_17,
#line 418 "canonical.m"
  MR_Word canonical__HeadVar__2_43)
#line 418 "canonical.m"
{
#line 418 "canonical.m"
  {
#line 418 "canonical.m"
    MR_bool canonical__succeeded;

#line 418 "canonical.m"
    {
#line 418 "canonical.m"
      return canonical__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &canonical_scalar_common_1[4], ((MR_Box) (canonical__InClique_17)), ((MR_Box) (canonical__HeadVar__2_43)));
    }
#line 418 "canonical.m"
    return canonical__succeeded;
#line 418 "canonical.m"
  }
#line 418 "canonical.m"
}

#line 413 "canonical.m"
static MR_bool MR_CALL 
canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__413__1_2_p_0(
#line 413 "canonical.m"
  MR_Word canonical__NotInClique_18,
#line 413 "canonical.m"
  MR_Word canonical__HeadVar__2_38)
#line 413 "canonical.m"
{
#line 413 "canonical.m"
  {
#line 413 "canonical.m"
    MR_bool canonical__succeeded;

#line 413 "canonical.m"
    {
#line 413 "canonical.m"
      return canonical__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &canonical_scalar_common_1[4], ((MR_Box) (canonical__NotInClique_18)), ((MR_Box) (canonical__HeadVar__2_38)));
    }
#line 413 "canonical.m"
    return canonical__succeeded;
#line 413 "canonical.m"
  }
#line 413 "canonical.m"
}

#line 239 "canonical.m"
static MR_bool MR_CALL 
canonical__IntroducedFrom__pred__merge_proc_dynamics__239__1_2_p_0(
#line 239 "canonical.m"
  MR_Word canonical__InvalidPDPtrs_17,
#line 239 "canonical.m"
  MR_Word canonical__HeadVar__2_36)
#line 239 "canonical.m"
{
#line 239 "canonical.m"
  {
#line 239 "canonical.m"
    MR_bool canonical__succeeded;

#line 239 "canonical.m"
    {
#line 239 "canonical.m"
      return canonical__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &canonical_scalar_common_1[0], ((MR_Box) (canonical__InvalidPDPtrs_17)), ((MR_Box) (canonical__HeadVar__2_36)));
    }
#line 239 "canonical.m"
    return canonical__succeeded;
#line 239 "canonical.m"
  }
#line 239 "canonical.m"
}

#line 130 "canonical.m"
static void MR_CALL 
canonical__IntroducedFrom__pred__complete_clique__130__1_3_p_0(
#line 130 "canonical.m"
  MR_Word canonical__HeadVar__1_22,
#line 130 "canonical.m"
  MR_Word canonical__HeadVar__2_23,
#line 130 "canonical.m"
  MR_Word * canonical__HeadVar__3_24)
#line 130 "canonical.m"
{
#line 130 "canonical.m"
  {
#line 130 "canonical.m"
    MR_bool canonical__succeeded;

#line 117 "canonical.m"
    {
#line 117 "canonical.m"
      mercury__set__insert_list_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, canonical__HeadVar__1_22, canonical__HeadVar__2_23, canonical__HeadVar__3_24);
#line 117 "canonical.m"
      return;
    }
#line 130 "canonical.m"
  }
#line 130 "canonical.m"
}

#line 53 "canonical.m"
static void MR_CALL 
canonical____Compare____redirect_0_0(
#line 53 "canonical.m"
  MR_Word * canonical__HeadVar__1_1,
#line 53 "canonical.m"
  MR_Word canonical__HeadVar__2_2,
#line 53 "canonical.m"
  MR_Word canonical__HeadVar__3_3)
#line 53 "canonical.m"
{
#line 53 "canonical.m"
  {
#line 53 "canonical.m"
    MR_bool canonical__succeeded;
#line 53 "canonical.m"
    MR_Integer canonical__CastX_9 = (MR_Integer) canonical__HeadVar__2_2;
#line 53 "canonical.m"
    MR_Integer canonical__CastY_10 = (MR_Integer) canonical__HeadVar__3_3;

#line 53 "canonical.m"
    canonical__succeeded = (canonical__CastX_9 == canonical__CastY_10);
#line 53 "canonical.m"
    if (canonical__succeeded)
#line 2218 "canonical.c"
      *canonical__HeadVar__1_1 = (MR_Integer) 0;
#line 53 "canonical.m"
    else
#line 53 "canonical.m"
      {
#line 53 "canonical.m"
        MR_ArrayPtr canonical__V_4_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__2_2, (MR_Integer) 0)));
#line 53 "canonical.m"
        MR_ArrayPtr canonical__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__2_2, (MR_Integer) 1)));
#line 53 "canonical.m"
        MR_ArrayPtr canonical__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__3_3, (MR_Integer) 0)));
#line 53 "canonical.m"
        MR_ArrayPtr canonical__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__3_3, (MR_Integer) 1)));
#line 53 "canonical.m"
        MR_Word canonical__V_8_8;

#line 53 "canonical.m"
        {
#line 53 "canonical.m"
          mercury__builtin__compare_3_p_0((MR_Word) &canonical_scalar_common_1[7], &canonical__V_8_8, ((MR_Box) (canonical__V_4_4)), ((MR_Box) (canonical__V_6_6)));
        }
#line 2240 "canonical.c"
        canonical__succeeded = (canonical__V_8_8 == (MR_Integer) 0);
#line 53 "canonical.m"
        canonical__succeeded = !(canonical__succeeded);
#line 53 "canonical.m"
        if (canonical__succeeded)
#line 53 "canonical.m"
          *canonical__HeadVar__1_1 = canonical__V_8_8;
#line 53 "canonical.m"
        else
#line 53 "canonical.m"
          {
#line 53 "canonical.m"
            {
#line 53 "canonical.m"
              mercury__builtin__compare_3_p_0((MR_Word) &canonical_scalar_common_1[6], canonical__HeadVar__1_1, ((MR_Box) (canonical__V_5_5)), ((MR_Box) (canonical__V_7_7)));
#line 53 "canonical.m"
              return;
            }
#line 53 "canonical.m"
          }
#line 53 "canonical.m"
      }
#line 53 "canonical.m"
  }
#line 53 "canonical.m"
}

#line 53 "canonical.m"
static MR_bool MR_CALL 
canonical____Unify____redirect_0_0(
#line 53 "canonical.m"
  MR_Word canonical__HeadVar__1_1,
#line 53 "canonical.m"
  MR_Word canonical__HeadVar__2_2)
#line 53 "canonical.m"
{
#line 53 "canonical.m"
  {
#line 53 "canonical.m"
    MR_bool canonical__succeeded;
#line 53 "canonical.m"
    MR_Integer canonical__CastX_7 = (MR_Integer) canonical__HeadVar__1_1;
#line 53 "canonical.m"
    MR_Integer canonical__CastY_8 = (MR_Integer) canonical__HeadVar__2_2;

#line 53 "canonical.m"
    canonical__succeeded = (canonical__CastX_7 == canonical__CastY_8);
#line 53 "canonical.m"
    if (canonical__succeeded)
#line 53 "canonical.m"
      canonical__succeeded = MR_TRUE;
#line 53 "canonical.m"
    else
#line 53 "canonical.m"
      {
#line 53 "canonical.m"
        MR_Word canonical__TypeCtorInfo_10_10;
#line 53 "canonical.m"
        MR_ArrayPtr canonical__V_3_3 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__1_1, (MR_Integer) 0)));
#line 53 "canonical.m"
        MR_ArrayPtr canonical__V_4_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__1_1, (MR_Integer) 1)));
#line 53 "canonical.m"
        MR_ArrayPtr canonical__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__2_2, (MR_Integer) 0)));
#line 53 "canonical.m"
        MR_ArrayPtr canonical__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__2_2, (MR_Integer) 1)));

#line 2307 "canonical.c"
        {
#line 2309 "canonical.c"
          canonical__succeeded = mercury__array____Unify____array_1_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) canonical__V_3_3, (MR_ArrayPtr) canonical__V_5_5);
        }
#line 53 "canonical.m"
        if (canonical__succeeded)
#line 53 "canonical.m"
          {
#line 2316 "canonical.c"
            canonical__TypeCtorInfo_10_10 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0;
#line 2318 "canonical.c"
            {
#line 2320 "canonical.c"
              return canonical__succeeded = mercury__array____Unify____array_1_0(canonical__TypeCtorInfo_10_10, (MR_ArrayPtr) canonical__V_4_4, (MR_ArrayPtr) canonical__V_6_6);
            }
#line 53 "canonical.m"
          }
#line 53 "canonical.m"
      }
#line 53 "canonical.m"
    return canonical__succeeded;
#line 53 "canonical.m"
  }
#line 53 "canonical.m"
}

#line 47 "canonical.m"
static void MR_CALL 
canonical____Compare____merge_info_0_0(
#line 47 "canonical.m"
  MR_Word * canonical__HeadVar__1_1,
#line 47 "canonical.m"
  MR_Word canonical__HeadVar__2_2,
#line 47 "canonical.m"
  MR_Word canonical__HeadVar__3_3)
#line 47 "canonical.m"
{
#line 47 "canonical.m"
  {
#line 47 "canonical.m"
    MR_bool canonical__succeeded;
#line 47 "canonical.m"
    MR_Integer canonical__CastX_9 = (MR_Integer) canonical__HeadVar__2_2;
#line 47 "canonical.m"
    MR_Integer canonical__CastY_10 = (MR_Integer) canonical__HeadVar__3_3;

#line 47 "canonical.m"
    canonical__succeeded = (canonical__CastX_9 == canonical__CastY_10);
#line 47 "canonical.m"
    if (canonical__succeeded)
#line 2358 "canonical.c"
      *canonical__HeadVar__1_1 = (MR_Integer) 0;
#line 47 "canonical.m"
    else
#line 47 "canonical.m"
      {
#line 47 "canonical.m"
        MR_ArrayPtr canonical__V_4_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__2_2, (MR_Integer) 0)));
#line 47 "canonical.m"
        MR_ArrayPtr canonical__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__2_2, (MR_Integer) 1)));
#line 47 "canonical.m"
        MR_ArrayPtr canonical__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__3_3, (MR_Integer) 0)));
#line 47 "canonical.m"
        MR_ArrayPtr canonical__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__3_3, (MR_Integer) 1)));
#line 47 "canonical.m"
        MR_Word canonical__V_8_8;

#line 47 "canonical.m"
        {
#line 47 "canonical.m"
          mercury__builtin__compare_3_p_0((MR_Word) &canonical_scalar_common_1[8], &canonical__V_8_8, ((MR_Box) (canonical__V_4_4)), ((MR_Box) (canonical__V_6_6)));
        }
#line 2380 "canonical.c"
        canonical__succeeded = (canonical__V_8_8 == (MR_Integer) 0);
#line 47 "canonical.m"
        canonical__succeeded = !(canonical__succeeded);
#line 47 "canonical.m"
        if (canonical__succeeded)
#line 47 "canonical.m"
          *canonical__HeadVar__1_1 = canonical__V_8_8;
#line 47 "canonical.m"
        else
#line 47 "canonical.m"
          {
#line 47 "canonical.m"
            {
#line 47 "canonical.m"
              mercury__builtin__compare_3_p_0((MR_Word) &canonical_scalar_common_1[9], canonical__HeadVar__1_1, ((MR_Box) (canonical__V_5_5)), ((MR_Box) (canonical__V_7_7)));
#line 47 "canonical.m"
              return;
            }
#line 47 "canonical.m"
          }
#line 47 "canonical.m"
      }
#line 47 "canonical.m"
  }
#line 47 "canonical.m"
}

#line 47 "canonical.m"
static MR_bool MR_CALL 
canonical____Unify____merge_info_0_0(
#line 47 "canonical.m"
  MR_Word canonical__HeadVar__1_1,
#line 47 "canonical.m"
  MR_Word canonical__HeadVar__2_2)
#line 47 "canonical.m"
{
#line 47 "canonical.m"
  {
#line 47 "canonical.m"
    MR_bool canonical__succeeded;
#line 47 "canonical.m"
    MR_Integer canonical__CastX_7 = (MR_Integer) canonical__HeadVar__1_1;
#line 47 "canonical.m"
    MR_Integer canonical__CastY_8 = (MR_Integer) canonical__HeadVar__2_2;

#line 47 "canonical.m"
    canonical__succeeded = (canonical__CastX_7 == canonical__CastY_8);
#line 47 "canonical.m"
    if (canonical__succeeded)
#line 47 "canonical.m"
      canonical__succeeded = MR_TRUE;
#line 47 "canonical.m"
    else
#line 47 "canonical.m"
      {
#line 47 "canonical.m"
        MR_Word canonical__TypeCtorInfo_10_10;
#line 47 "canonical.m"
        MR_ArrayPtr canonical__V_3_3 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__1_1, (MR_Integer) 0)));
#line 47 "canonical.m"
        MR_ArrayPtr canonical__V_4_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__1_1, (MR_Integer) 1)));
#line 47 "canonical.m"
        MR_ArrayPtr canonical__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__2_2, (MR_Integer) 0)));
#line 47 "canonical.m"
        MR_ArrayPtr canonical__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__HeadVar__2_2, (MR_Integer) 1)));

#line 2447 "canonical.c"
        {
#line 2449 "canonical.c"
          canonical__succeeded = mercury__array____Unify____array_1_0((MR_Word) &canonical_scalar_common_1[0], (MR_ArrayPtr) canonical__V_3_3, (MR_ArrayPtr) canonical__V_5_5);
        }
#line 47 "canonical.m"
        if (canonical__succeeded)
#line 47 "canonical.m"
          {
#line 2456 "canonical.c"
            canonical__TypeCtorInfo_10_10 = (MR_Word) &profile__profile__type_ctor_info_clique_ptr_0;
#line 2458 "canonical.c"
            {
#line 2460 "canonical.c"
              return canonical__succeeded = mercury__array____Unify____array_1_0(canonical__TypeCtorInfo_10_10, (MR_ArrayPtr) canonical__V_4_4, (MR_ArrayPtr) canonical__V_6_6);
            }
#line 47 "canonical.m"
          }
#line 47 "canonical.m"
      }
#line 47 "canonical.m"
    return canonical__succeeded;
#line 47 "canonical.m"
  }
#line 47 "canonical.m"
}

#line 776 "canonical.m"
static void MR_CALL 
canonical__subst_in_slot_3_p_0_1(
#line 776 "canonical.m"
  MR_Box canonical__closure_arg,
#line 776 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 776 "canonical.m"
  MR_Box * canonical__wrapper_arg_2)
#line 776 "canonical.m"
{
#line 776 "canonical.m"
  {
#line 776 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 776 "canonical.m"
    MR_Word canonical__conv0_OldRedirect_6;

#line 776 "canonical.m"
    {
#line 776 "canonical.m"
      canonical__lookup_csd_redirect_3_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv0_OldRedirect_6);
    }
#line 776 "canonical.m"
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv0_OldRedirect_6));
#line 776 "canonical.m"
  }
#line 776 "canonical.m"
}

#line 769 "canonical.m"
static void MR_CALL 
canonical__subst_in_slot_3_p_0(
#line 769 "canonical.m"
  MR_Word canonical__Redirect_1,
#line 769 "canonical.m"
  MR_Word canonical__HeadVar__2_2,
#line 769 "canonical.m"
  MR_Word * canonical__HeadVar__3_3)
#line 769 "canonical.m"
{
#line 772 "canonical.m"
  {
#line 772 "canonical.m"
    MR_bool canonical__succeeded;
#line 772 "canonical.m"
    MR_ArrayPtr canonical__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__Redirect_1, (MR_Integer) 0)));
#line 773 "canonical.m"
    MR_ArrayPtr canonical__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__Redirect_1, (MR_Integer) 1)));

#line 772 "canonical.m"
    if (((MR_tag((MR_Word) canonical__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 775 "canonical.m"
      {
#line 775 "canonical.m"
        MR_Word canonical__TypeCtorInfo_20_20;
#line 775 "canonical.m"
        MR_Word canonical__IsZeroed_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__2_2, (MR_Integer) 0)));
#line 775 "canonical.m"
        MR_ArrayPtr canonical__CSDPtrs0_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), canonical__HeadVar__2_2, (MR_Integer) 1)));
#line 775 "canonical.m"
        MR_ArrayPtr canonical__CSDPtrs_11;
#line 775 "canonical.m"
        MR_Word canonical__V_12_12;
#line 775 "canonical.m"
        MR_ArrayPtr canonical__V_13_13;
#line 776 "canonical.m"
        MR_Box canonical__conv1_V_13_13;
#line 776 "canonical.m"
        MR_ArrayPtr canonical__conv2_CSDPtrs_11;

#line 776 "canonical.m"
        {
#line 776 "canonical.m"
          canonical__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 776 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_12_12, 0) = ((MR_Box) (&canonical_scalar_common_3[9]));
#line 776 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_12_12, 1) = ((MR_Box) (canonical__subst_in_slot_3_p_0_1));
#line 776 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 776 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_12_12, 3) = ((MR_Box) (canonical__V_22_22));
#line 776 "canonical.m"
        }
#line 776 "canonical.m"
        {
#line 776 "canonical.m"
          canonical__conv1_V_13_13 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[7], ((MR_Box) (canonical__CSDPtrs0_10)));
        }
#line 776 "canonical.m"
        canonical__V_13_13 = ((MR_ArrayPtr) canonical__conv1_V_13_13);
#line 2566 "canonical.c"
        canonical__TypeCtorInfo_20_20 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 776 "canonical.m"
        {
#line 776 "canonical.m"
          mercury__array__map_3_p_0(canonical__TypeCtorInfo_20_20, canonical__TypeCtorInfo_20_20, canonical__V_12_12, (MR_ArrayPtr) canonical__V_13_13, &canonical__conv2_CSDPtrs_11);
        }
#line 776 "canonical.m"
        canonical__CSDPtrs_11 = (MR_ArrayPtr) canonical__conv2_CSDPtrs_11;
#line 775 "canonical.m"
        {
#line 775 "canonical.m"
          MR_Word base;
#line 775 "canonical.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "canonical.m"
          *canonical__HeadVar__3_3 = base;
#line 775 "canonical.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (canonical__IsZeroed_9));
#line 775 "canonical.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (canonical__CSDPtrs_11));
#line 775 "canonical.m"
        }
#line 775 "canonical.m"
      }
#line 772 "canonical.m"
    else
#line 772 "canonical.m"
      {
#line 772 "canonical.m"
        MR_Word canonical__CSDPtr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__HeadVar__2_2, (MR_Integer) 0)));
#line 772 "canonical.m"
        MR_Word canonical__CSDPtr_6;
#line 772 "canonical.m"
        MR_Integer canonical__CSDI_26 = (MR_Integer) canonical__CSDPtr0_5;
#line 652 "canonical.m"
        MR_Box canonical__conv3_CSDPtr_6;

#line 652 "canonical.m"
        {
#line 652 "canonical.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) canonical__V_22_22, canonical__CSDI_26, &canonical__conv3_CSDPtr_6);
        }
#line 652 "canonical.m"
        canonical__CSDPtr_6 = ((MR_Word) canonical__conv3_CSDPtr_6);
#line 772 "canonical.m"
        {
#line 772 "canonical.m"
          MR_Word base;
#line 772 "canonical.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 772 "canonical.m"
          *canonical__HeadVar__3_3 = base;
#line 772 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (canonical__CSDPtr_6));
#line 772 "canonical.m"
        }
#line 772 "canonical.m"
      }
#line 772 "canonical.m"
  }
#line 769 "canonical.m"
}

#line 766 "canonical.m"
static void MR_CALL 
canonical__subst_in_proc_dynamic_3_p_0_1(
#line 766 "canonical.m"
  MR_Box canonical__closure_arg,
#line 766 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 766 "canonical.m"
  MR_Box * canonical__wrapper_arg_2)
#line 766 "canonical.m"
{
#line 766 "canonical.m"
  {
#line 766 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 766 "canonical.m"
    MR_Word canonical__conv0_HeadVar__3_3;

#line 766 "canonical.m"
    {
#line 766 "canonical.m"
      canonical__subst_in_slot_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv0_HeadVar__3_3);
    }
#line 766 "canonical.m"
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv0_HeadVar__3_3));
#line 766 "canonical.m"
  }
#line 766 "canonical.m"
}

#line 761 "canonical.m"
static void MR_CALL 
canonical__subst_in_proc_dynamic_3_p_0(
#line 761 "canonical.m"
  MR_Word canonical__Redirect_4,
#line 761 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_PD_0_10,
#line 761 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_PD_11)
#line 761 "canonical.m"
{
#line 764 "canonical.m"
  {
#line 764 "canonical.m"
    MR_bool canonical__succeeded;
#line 764 "canonical.m"
    MR_Word canonical__TypeCtorInfo_18_18;
#line 764 "canonical.m"
    MR_Word canonical__PDPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_PD_0_10, (MR_Integer) 0)));
#line 764 "canonical.m"
    MR_ArrayPtr canonical__Slots0_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_PD_0_10, (MR_Integer) 1)));
#line 764 "canonical.m"
    MR_Word canonical__MaybeCPs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_PD_0_10, (MR_Integer) 2)));
#line 764 "canonical.m"
    MR_ArrayPtr canonical__Slots_9;
#line 764 "canonical.m"
    MR_Word canonical__V_12_12;
#line 764 "canonical.m"
    MR_ArrayPtr canonical__V_13_13;
#line 766 "canonical.m"
    MR_Box canonical__conv1_V_13_13;
#line 766 "canonical.m"
    MR_ArrayPtr canonical__conv2_Slots_9;

#line 766 "canonical.m"
    {
#line 766 "canonical.m"
      canonical__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 766 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_12_12, 0) = ((MR_Box) (&canonical_scalar_common_3[8]));
#line 766 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_12_12, 1) = ((MR_Box) (canonical__subst_in_proc_dynamic_3_p_0_1));
#line 766 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 766 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_12_12, 3) = ((MR_Box) (canonical__Redirect_4));
#line 766 "canonical.m"
    }
#line 766 "canonical.m"
    {
#line 766 "canonical.m"
      canonical__conv1_V_13_13 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[2], ((MR_Box) (canonical__Slots0_7)));
    }
#line 766 "canonical.m"
    canonical__V_13_13 = ((MR_ArrayPtr) canonical__conv1_V_13_13);
#line 2715 "canonical.c"
    canonical__TypeCtorInfo_18_18 = (MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0;
#line 766 "canonical.m"
    {
#line 766 "canonical.m"
      mercury__array__map_3_p_0(canonical__TypeCtorInfo_18_18, canonical__TypeCtorInfo_18_18, canonical__V_12_12, (MR_ArrayPtr) canonical__V_13_13, &canonical__conv2_Slots_9);
    }
#line 766 "canonical.m"
    canonical__Slots_9 = (MR_ArrayPtr) canonical__conv2_Slots_9;
#line 767 "canonical.m"
    {
#line 767 "canonical.m"
      MR_Word base;
#line 767 "canonical.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 767 "canonical.m"
      *canonical__STATE_VARIABLE_PD_11 = base;
#line 767 "canonical.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (canonical__PDPtr_6));
#line 767 "canonical.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (canonical__Slots_9));
#line 767 "canonical.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (canonical__MaybeCPs_8));
#line 767 "canonical.m"
    }
#line 764 "canonical.m"
  }
#line 761 "canonical.m"
}

#line 752 "canonical.m"
static void MR_CALL 
canonical__subst_in_call_site_dynamic_3_p_0(
#line 752 "canonical.m"
  MR_Word canonical__Redirect_4,
#line 752 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_CSD_0_11,
#line 752 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_CSD_12)
#line 752 "canonical.m"
{
#line 755 "canonical.m"
  {
#line 755 "canonical.m"
    MR_bool canonical__succeeded;
#line 755 "canonical.m"
    MR_Word canonical__Caller0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_CSD_0_11, (MR_Integer) 0)));
#line 755 "canonical.m"
    MR_Word canonical__Callee0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_CSD_0_11, (MR_Integer) 1)));
#line 755 "canonical.m"
    MR_Word canonical__Own_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_CSD_0_11, (MR_Integer) 2)));
#line 755 "canonical.m"
    MR_Word canonical__Caller_9;
#line 755 "canonical.m"
    MR_Word canonical__Callee_10;
#line 755 "canonical.m"
    MR_ArrayPtr canonical__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__Redirect_4, (MR_Integer) 1)));
#line 755 "canonical.m"
    MR_ArrayPtr canonical__V_14_14;
#line 755 "canonical.m"
    MR_Integer canonical__PDI_21 = (MR_Integer) canonical__Caller0_6;
#line 755 "canonical.m"
    MR_Integer canonical__PDI_26;
#line 757 "canonical.m"
    MR_ArrayPtr canonical__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__Redirect_4, (MR_Integer) 0)));
#line 637 "canonical.m"
    MR_Box canonical__conv0_Caller_9;
#line 758 "canonical.m"
    MR_ArrayPtr canonical__V_17_17;
#line 637 "canonical.m"
    MR_Box canonical__conv1_Callee_10;

#line 637 "canonical.m"
    {
#line 637 "canonical.m"
      mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_ArrayPtr) canonical__V_13_13, canonical__PDI_21, &canonical__conv0_Caller_9);
    }
#line 637 "canonical.m"
    canonical__Caller_9 = ((MR_Word) canonical__conv0_Caller_9);
#line 758 "canonical.m"
    canonical__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__Redirect_4, (MR_Integer) 0)));
#line 758 "canonical.m"
    canonical__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__Redirect_4, (MR_Integer) 1)));
#line 636 "canonical.m"
    canonical__PDI_26 = (MR_Integer) canonical__Callee0_7;
#line 637 "canonical.m"
    {
#line 637 "canonical.m"
      mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_ArrayPtr) canonical__V_14_14, canonical__PDI_26, &canonical__conv1_Callee_10);
    }
#line 637 "canonical.m"
    canonical__Callee_10 = ((MR_Word) canonical__conv1_Callee_10);
#line 759 "canonical.m"
    {
#line 759 "canonical.m"
      MR_Word base;
#line 759 "canonical.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 759 "canonical.m"
      *canonical__STATE_VARIABLE_CSD_12 = base;
#line 759 "canonical.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (canonical__Caller_9));
#line 759 "canonical.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (canonical__Callee_10));
#line 759 "canonical.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (canonical__Own_8));
#line 759 "canonical.m"
    }
#line 755 "canonical.m"
  }
#line 752 "canonical.m"
}

#line 731 "canonical.m"
static void MR_CALL 
canonical__compact_pd_redirect_6_p_0(
#line 731 "canonical.m"
  MR_Integer canonical__CurOld_7,
#line 731 "canonical.m"
  MR_Integer canonical__CurNew_8,
#line 731 "canonical.m"
  MR_Integer canonical__MaxOld_9,
#line 731 "canonical.m"
  MR_Integer * canonical__NumNew_10,
#line 731 "canonical.m"
  MR_ArrayPtr canonical__STATE_VARIABLE_PDredirect_0_13,
#line 731 "canonical.m"
  MR_ArrayPtr * canonical__STATE_VARIABLE_PDredirect_14)
#line 731 "canonical.m"
{
#line 738 "canonical.m"
  while (MR_TRUE)
#line 738 "canonical.m"
    {
#line 738 "canonical.m"
      /* tailcall optimized into a loop */
#line 738 "canonical.m"
      {
#line 738 "canonical.m"
        MR_bool canonical__succeeded = (canonical__CurOld_7 > canonical__MaxOld_9);

#line 738 "canonical.m"
        if (canonical__succeeded)
#line 737 "canonical.m"
          {
#line 737 "canonical.m"
            *canonical__NumNew_10 = canonical__CurNew_8;
#line 737 "canonical.m"
            *canonical__STATE_VARIABLE_PDredirect_14 = canonical__STATE_VARIABLE_PDredirect_0_13;
#line 737 "canonical.m"
          }
#line 738 "canonical.m"
        else
#line 739 "canonical.m"
          {
#line 739 "canonical.m"
            MR_Word canonical__TypeCtorInfo_26_26 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0;
#line 739 "canonical.m"
            MR_Word canonical__Redirect0_12;
#line 739 "canonical.m"
            MR_Box canonical__conv0_Redirect0_12;
#line 740 "canonical.m"
            MR_Integer canonical__V_15_15;

#line 739 "canonical.m"
            {
#line 739 "canonical.m"
              mercury__array__lookup_3_p_0(canonical__TypeCtorInfo_26_26, (MR_ArrayPtr) canonical__STATE_VARIABLE_PDredirect_0_13, canonical__CurOld_7, &canonical__conv0_Redirect0_12);
            }
#line 739 "canonical.m"
            canonical__Redirect0_12 = ((MR_Word) canonical__conv0_Redirect0_12);
#line 740 "canonical.m"
            canonical__V_15_15 = (MR_Integer) canonical__Redirect0_12;
#line 740 "canonical.m"
            canonical__succeeded = (canonical__V_15_15 == (MR_Integer) 0);
#line 744 "canonical.m"
            if (canonical__succeeded)
#line 741 "canonical.m"
              {
#line 741 "canonical.m"
                MR_Word canonical__V_16_16 = (MR_Word) canonical__CurNew_8;
#line 741 "canonical.m"
                MR_ArrayPtr canonical__STATE_VARIABLE_PDredirect_17_17;
#line 741 "canonical.m"
                MR_Integer canonical__V_18_18;
#line 741 "canonical.m"
                MR_Integer canonical__V_19_19;
#line 741 "canonical.m"
                MR_ArrayPtr canonical__conv1_STATE_VARIABLE_PDredirect_17_17;

#line 741 "canonical.m"
                {
#line 741 "canonical.m"
                  mercury__array__set_4_p_0(canonical__TypeCtorInfo_26_26, canonical__CurOld_7, ((MR_Box) (canonical__V_16_16)), (MR_ArrayPtr) canonical__STATE_VARIABLE_PDredirect_0_13, &canonical__conv1_STATE_VARIABLE_PDredirect_17_17);
                }
#line 741 "canonical.m"
                canonical__STATE_VARIABLE_PDredirect_17_17 = (MR_ArrayPtr) canonical__conv1_STATE_VARIABLE_PDredirect_17_17;
#line 742 "canonical.m"
                canonical__V_18_18 = (canonical__CurOld_7 + (MR_Integer) 1);
#line 742 "canonical.m"
                canonical__V_19_19 = (canonical__CurNew_8 + (MR_Integer) 1);
#line 742 "canonical.m"
                /* direct tailcall eliminated */
#line 742 "canonical.m"
                {
#line 742 "canonical.m"
                  MR_Integer canonical__CurOld__tmp_copy_7 = canonical__V_18_18;
#line 742 "canonical.m"
                  MR_Integer canonical__CurNew__tmp_copy_8 = canonical__V_19_19;
#line 742 "canonical.m"
                  MR_ArrayPtr canonical__STATE_VARIABLE_PDredirect_0__tmp_copy_13 = canonical__STATE_VARIABLE_PDredirect_17_17;

#line 742 "canonical.m"
                  canonical__STATE_VARIABLE_PDredirect_0_13 = canonical__STATE_VARIABLE_PDredirect_0__tmp_copy_13;
#line 742 "canonical.m"
                  canonical__CurNew_8 = canonical__CurNew__tmp_copy_8;
#line 742 "canonical.m"
                  canonical__CurOld_7 = canonical__CurOld__tmp_copy_7;
#line 742 "canonical.m"
                }
#line 742 "canonical.m"
                continue;
#line 741 "canonical.m"
              }
#line 744 "canonical.m"
            else
#line 747 "canonical.m"
              {
#line 747 "canonical.m"
                MR_Integer canonical__V_23_23 = (canonical__CurOld_7 + (MR_Integer) 1);

#line 747 "canonical.m"
                /* direct tailcall eliminated */
#line 747 "canonical.m"
                {
#line 747 "canonical.m"
                  MR_Integer canonical__CurOld__tmp_copy_7 = canonical__V_23_23;

#line 747 "canonical.m"
                  canonical__CurOld_7 = canonical__CurOld__tmp_copy_7;
#line 747 "canonical.m"
                }
#line 747 "canonical.m"
                continue;
#line 747 "canonical.m"
              }
#line 739 "canonical.m"
          }
#line 738 "canonical.m"
      }
#line 738 "canonical.m"
      break;
#line 738 "canonical.m"
    }
#line 731 "canonical.m"
}

#line 710 "canonical.m"
static void MR_CALL 
canonical__compact_csd_redirect_6_p_0(
#line 710 "canonical.m"
  MR_Integer canonical__CurOld_7,
#line 710 "canonical.m"
  MR_Integer canonical__CurNew_8,
#line 710 "canonical.m"
  MR_Integer canonical__MaxOld_9,
#line 710 "canonical.m"
  MR_Integer * canonical__NumNew_10,
#line 710 "canonical.m"
  MR_ArrayPtr canonical__STATE_VARIABLE_CSDredirect_0_13,
#line 710 "canonical.m"
  MR_ArrayPtr * canonical__STATE_VARIABLE_CSDredirect_14)
#line 710 "canonical.m"
{
#line 717 "canonical.m"
  while (MR_TRUE)
#line 717 "canonical.m"
    {
#line 717 "canonical.m"
      /* tailcall optimized into a loop */
#line 717 "canonical.m"
      {
#line 717 "canonical.m"
        MR_bool canonical__succeeded = (canonical__CurOld_7 > canonical__MaxOld_9);

#line 717 "canonical.m"
        if (canonical__succeeded)
#line 716 "canonical.m"
          {
#line 716 "canonical.m"
            *canonical__NumNew_10 = canonical__CurNew_8;
#line 716 "canonical.m"
            *canonical__STATE_VARIABLE_CSDredirect_14 = canonical__STATE_VARIABLE_CSDredirect_0_13;
#line 716 "canonical.m"
          }
#line 717 "canonical.m"
        else
#line 718 "canonical.m"
          {
#line 718 "canonical.m"
            MR_Word canonical__TypeCtorInfo_26_26 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 718 "canonical.m"
            MR_Word canonical__Redirect0_12;
#line 718 "canonical.m"
            MR_Box canonical__conv0_Redirect0_12;
#line 719 "canonical.m"
            MR_Integer canonical__V_15_15;

#line 718 "canonical.m"
            {
#line 718 "canonical.m"
              mercury__array__lookup_3_p_0(canonical__TypeCtorInfo_26_26, (MR_ArrayPtr) canonical__STATE_VARIABLE_CSDredirect_0_13, canonical__CurOld_7, &canonical__conv0_Redirect0_12);
            }
#line 718 "canonical.m"
            canonical__Redirect0_12 = ((MR_Word) canonical__conv0_Redirect0_12);
#line 719 "canonical.m"
            canonical__V_15_15 = (MR_Integer) canonical__Redirect0_12;
#line 719 "canonical.m"
            canonical__succeeded = (canonical__V_15_15 == (MR_Integer) 0);
#line 723 "canonical.m"
            if (canonical__succeeded)
#line 720 "canonical.m"
              {
#line 720 "canonical.m"
                MR_Word canonical__V_16_16 = (MR_Word) canonical__CurNew_8;
#line 720 "canonical.m"
                MR_ArrayPtr canonical__STATE_VARIABLE_CSDredirect_17_17;
#line 720 "canonical.m"
                MR_Integer canonical__V_18_18;
#line 720 "canonical.m"
                MR_Integer canonical__V_19_19;
#line 720 "canonical.m"
                MR_ArrayPtr canonical__conv1_STATE_VARIABLE_CSDredirect_17_17;

#line 720 "canonical.m"
                {
#line 720 "canonical.m"
                  mercury__array__set_4_p_0(canonical__TypeCtorInfo_26_26, canonical__CurOld_7, ((MR_Box) (canonical__V_16_16)), (MR_ArrayPtr) canonical__STATE_VARIABLE_CSDredirect_0_13, &canonical__conv1_STATE_VARIABLE_CSDredirect_17_17);
                }
#line 720 "canonical.m"
                canonical__STATE_VARIABLE_CSDredirect_17_17 = (MR_ArrayPtr) canonical__conv1_STATE_VARIABLE_CSDredirect_17_17;
#line 721 "canonical.m"
                canonical__V_18_18 = (canonical__CurOld_7 + (MR_Integer) 1);
#line 721 "canonical.m"
                canonical__V_19_19 = (canonical__CurNew_8 + (MR_Integer) 1);
#line 721 "canonical.m"
                /* direct tailcall eliminated */
#line 721 "canonical.m"
                {
#line 721 "canonical.m"
                  MR_Integer canonical__CurOld__tmp_copy_7 = canonical__V_18_18;
#line 721 "canonical.m"
                  MR_Integer canonical__CurNew__tmp_copy_8 = canonical__V_19_19;
#line 721 "canonical.m"
                  MR_ArrayPtr canonical__STATE_VARIABLE_CSDredirect_0__tmp_copy_13 = canonical__STATE_VARIABLE_CSDredirect_17_17;

#line 721 "canonical.m"
                  canonical__STATE_VARIABLE_CSDredirect_0_13 = canonical__STATE_VARIABLE_CSDredirect_0__tmp_copy_13;
#line 721 "canonical.m"
                  canonical__CurNew_8 = canonical__CurNew__tmp_copy_8;
#line 721 "canonical.m"
                  canonical__CurOld_7 = canonical__CurOld__tmp_copy_7;
#line 721 "canonical.m"
                }
#line 721 "canonical.m"
                continue;
#line 720 "canonical.m"
              }
#line 723 "canonical.m"
            else
#line 726 "canonical.m"
              {
#line 726 "canonical.m"
                MR_Integer canonical__V_23_23 = (canonical__CurOld_7 + (MR_Integer) 1);

#line 726 "canonical.m"
                /* direct tailcall eliminated */
#line 726 "canonical.m"
                {
#line 726 "canonical.m"
                  MR_Integer canonical__CurOld__tmp_copy_7 = canonical__V_23_23;

#line 726 "canonical.m"
                  canonical__CurOld_7 = canonical__CurOld__tmp_copy_7;
#line 726 "canonical.m"
                }
#line 726 "canonical.m"
                continue;
#line 726 "canonical.m"
              }
#line 718 "canonical.m"
          }
#line 717 "canonical.m"
      }
#line 717 "canonical.m"
      break;
#line 717 "canonical.m"
    }
#line 710 "canonical.m"
}

#line 647 "canonical.m"
static void MR_CALL 
canonical__lookup_csd_redirect_3_p_0(
#line 647 "canonical.m"
  MR_ArrayPtr canonical__CallSiteRedirect0_4,
#line 647 "canonical.m"
  MR_Word canonical__CSDPtr_5,
#line 647 "canonical.m"
  MR_Word * canonical__OldRedirect_6)
#line 647 "canonical.m"
{
#line 650 "canonical.m"
  {
#line 650 "canonical.m"
    MR_bool canonical__succeeded;
#line 650 "canonical.m"
    MR_Integer canonical__CSDI_7 = (MR_Integer) canonical__CSDPtr_5;
#line 652 "canonical.m"
    MR_Box canonical__conv0_OldRedirect_6;

#line 652 "canonical.m"
    {
#line 652 "canonical.m"
      mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) canonical__CallSiteRedirect0_4, canonical__CSDI_7, &canonical__conv0_OldRedirect_6);
    }
#line 652 "canonical.m"
    *canonical__OldRedirect_6 = ((MR_Word) canonical__conv0_OldRedirect_6);
#line 650 "canonical.m"
  }
#line 647 "canonical.m"
}

#line 607 "canonical.m"
static void MR_CALL 
canonical__cluster_csds_by_ps_4_p_0(
#line 607 "canonical.m"
  MR_Word canonical__InitDeep_5,
#line 607 "canonical.m"
  MR_Word canonical__CSDPtr_6,
#line 607 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_ProcMap_0_15,
#line 607 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_ProcMap_16)
#line 607 "canonical.m"
{
#line 611 "canonical.m"
  {
#line 611 "canonical.m"
    MR_bool canonical__succeeded;
#line 611 "canonical.m"
    MR_ArrayPtr canonical__CallSiteDynamics_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 2)));
#line 612 "canonical.m"
    MR_Word canonical__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 0)));
#line 612 "canonical.m"
    MR_Word canonical__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 1)));
#line 612 "canonical.m"
    MR_ArrayPtr canonical__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 3)));
#line 612 "canonical.m"
    MR_ArrayPtr canonical__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 4)));
#line 612 "canonical.m"
    MR_ArrayPtr canonical__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 5)));

#line 613 "canonical.m"
    {
#line 613 "canonical.m"
      canonical__succeeded = profile__valid_call_site_dynamic_ptr_raw_2_p_0(canonical__CallSiteDynamics_8, canonical__CSDPtr_6);
    }
#line 628 "canonical.m"
    if (canonical__succeeded)
#line 614 "canonical.m"
      {
#line 614 "canonical.m"
        MR_Word canonical__CSD_9;
#line 614 "canonical.m"
        MR_Word canonical__PDPtr_10;
#line 614 "canonical.m"
        MR_ArrayPtr canonical__ProcDynamics_11;
#line 614 "canonical.m"
        MR_Word canonical__PSPtr_13;
#line 615 "canonical.m"
        MR_Word canonical__V_28_28;
#line 615 "canonical.m"
        MR_Word canonical__V_29_29;
#line 616 "canonical.m"
        MR_Word canonical__V_30_30;
#line 616 "canonical.m"
        MR_Word canonical__V_31_31;
#line 616 "canonical.m"
        MR_ArrayPtr canonical__V_32_32;
#line 616 "canonical.m"
        MR_ArrayPtr canonical__V_33_33;
#line 616 "canonical.m"
        MR_ArrayPtr canonical__V_34_34;
#line 625 "canonical.m"
        MR_Word canonical__CSDPtrs0_14;
#line 623 "canonical.m"
        MR_Box canonical__conv0_CSDPtrs0_14;

#line 614 "canonical.m"
        {
#line 614 "canonical.m"
          profile__lookup_call_site_dynamics_3_p_0(canonical__CallSiteDynamics_8, canonical__CSDPtr_6, &canonical__CSD_9);
        }
#line 615 "canonical.m"
        canonical__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSD_9, (MR_Integer) 0)));
#line 615 "canonical.m"
        canonical__PDPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSD_9, (MR_Integer) 1)));
#line 615 "canonical.m"
        canonical__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSD_9, (MR_Integer) 2)));
#line 616 "canonical.m"
        canonical__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 0)));
#line 616 "canonical.m"
        canonical__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 1)));
#line 616 "canonical.m"
        canonical__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 2)));
#line 616 "canonical.m"
        canonical__ProcDynamics_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 3)));
#line 616 "canonical.m"
        canonical__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 4)));
#line 616 "canonical.m"
        canonical__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 5)));
#line 617 "canonical.m"
        {
#line 617 "canonical.m"
          canonical__succeeded = profile__valid_proc_dynamic_ptr_raw_2_p_0(canonical__ProcDynamics_11, canonical__PDPtr_10);
        }
#line 620 "canonical.m"
        if (canonical__succeeded)
#line 618 "canonical.m"
          {
#line 618 "canonical.m"
            MR_Word canonical__PD_12;
#line 619 "canonical.m"
            MR_ArrayPtr canonical__V_35_35;
#line 619 "canonical.m"
            MR_Word canonical__V_36_36;

#line 618 "canonical.m"
            {
#line 618 "canonical.m"
              profile__lookup_proc_dynamics_3_p_0(canonical__ProcDynamics_11, canonical__PDPtr_10, &canonical__PD_12);
            }
#line 619 "canonical.m"
            canonical__PSPtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PD_12, (MR_Integer) 0)));
#line 619 "canonical.m"
            canonical__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PD_12, (MR_Integer) 1)));
#line 619 "canonical.m"
            canonical__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PD_12, (MR_Integer) 2)));
#line 618 "canonical.m"
          }
#line 620 "canonical.m"
        else
#line 621 "canonical.m"
          {
#line 621 "canonical.m"
            canonical__PSPtr_13 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 621 "canonical.m"
          }
#line 623 "canonical.m"
        {
#line 623 "canonical.m"
          canonical__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &canonical_scalar_common_1[4], canonical__STATE_VARIABLE_ProcMap_0_15, ((MR_Box) (canonical__PSPtr_13)), &canonical__conv0_CSDPtrs0_14);
        }
#line 623 "canonical.m"
        if (canonical__succeeded)
#line 623 "canonical.m"
          {
#line 623 "canonical.m"
            canonical__CSDPtrs0_14 = ((MR_Word) canonical__conv0_CSDPtrs0_14);
#line 623 "canonical.m"
            canonical__succeeded = MR_TRUE;
#line 623 "canonical.m"
          }
#line 625 "canonical.m"
        if (canonical__succeeded)
#line 624 "canonical.m"
          {
#line 624 "canonical.m"
            MR_Word canonical__V_18_18;

#line 624 "canonical.m"
            {
#line 624 "canonical.m"
              canonical__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "canonical.m"
              MR_hl_field(MR_mktag(1), canonical__V_18_18, 0) = ((MR_Box) (canonical__CSDPtr_6));
#line 624 "canonical.m"
              MR_hl_field(MR_mktag(1), canonical__V_18_18, 1) = ((MR_Box) (canonical__CSDPtrs0_14));
#line 624 "canonical.m"
            }
#line 624 "canonical.m"
            {
#line 624 "canonical.m"
              mercury__map__det_update_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &canonical_scalar_common_1[4], ((MR_Box) (canonical__PSPtr_13)), ((MR_Box) (canonical__V_18_18)), canonical__STATE_VARIABLE_ProcMap_0_15, canonical__STATE_VARIABLE_ProcMap_16);
#line 624 "canonical.m"
              return;
            }
#line 624 "canonical.m"
          }
#line 625 "canonical.m"
        else
#line 626 "canonical.m"
          {
#line 626 "canonical.m"
            MR_Word canonical__V_20_20;

#line 626 "canonical.m"
            {
#line 626 "canonical.m"
              canonical__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "canonical.m"
              MR_hl_field(MR_mktag(1), canonical__V_20_20, 0) = ((MR_Box) (canonical__CSDPtr_6));
#line 626 "canonical.m"
              MR_hl_field(MR_mktag(1), canonical__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 626 "canonical.m"
            }
#line 626 "canonical.m"
            {
#line 626 "canonical.m"
              mercury__map__det_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &canonical_scalar_common_1[4], ((MR_Box) (canonical__PSPtr_13)), ((MR_Box) (canonical__V_20_20)), canonical__STATE_VARIABLE_ProcMap_0_15, canonical__STATE_VARIABLE_ProcMap_16);
#line 626 "canonical.m"
              return;
            }
#line 626 "canonical.m"
          }
#line 614 "canonical.m"
      }
#line 628 "canonical.m"
    else
#line 626 "canonical.m"
      *canonical__STATE_VARIABLE_ProcMap_16 = canonical__STATE_VARIABLE_ProcMap_0_15;
#line 611 "canonical.m"
  }
#line 607 "canonical.m"
}

#line 589 "canonical.m"
static void MR_CALL 
canonical__cluster_pds_by_ps_4_p_0(
#line 589 "canonical.m"
  MR_Word canonical__InitDeep_5,
#line 589 "canonical.m"
  MR_Word canonical__PDPtr_6,
#line 589 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_ProcMap_0_12,
#line 589 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_ProcMap_13)
#line 589 "canonical.m"
{
#line 593 "canonical.m"
  {
#line 593 "canonical.m"
    MR_bool canonical__succeeded;
#line 593 "canonical.m"
    MR_ArrayPtr canonical__ProcDynamics_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 3)));
#line 594 "canonical.m"
    MR_Word canonical__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 0)));
#line 594 "canonical.m"
    MR_Word canonical__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 1)));
#line 594 "canonical.m"
    MR_ArrayPtr canonical__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 2)));
#line 594 "canonical.m"
    MR_ArrayPtr canonical__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 4)));
#line 594 "canonical.m"
    MR_ArrayPtr canonical__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_5, (MR_Integer) 5)));

#line 595 "canonical.m"
    {
#line 595 "canonical.m"
      canonical__succeeded = profile__valid_proc_dynamic_ptr_raw_2_p_0(canonical__ProcDynamics_8, canonical__PDPtr_6);
    }
#line 603 "canonical.m"
    if (canonical__succeeded)
#line 596 "canonical.m"
      {
#line 596 "canonical.m"
        MR_Word canonical__PD_9;
#line 596 "canonical.m"
        MR_Word canonical__PSPtr_10;
#line 597 "canonical.m"
        MR_ArrayPtr canonical__V_24_24;
#line 597 "canonical.m"
        MR_Word canonical__V_25_25;
#line 600 "canonical.m"
        MR_Word canonical__PDPtrs0_11;
#line 598 "canonical.m"
        MR_Box canonical__conv0_PDPtrs0_11;

#line 596 "canonical.m"
        {
#line 596 "canonical.m"
          profile__lookup_proc_dynamics_3_p_0(canonical__ProcDynamics_8, canonical__PDPtr_6, &canonical__PD_9);
        }
#line 597 "canonical.m"
        canonical__PSPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PD_9, (MR_Integer) 0)));
#line 597 "canonical.m"
        canonical__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PD_9, (MR_Integer) 1)));
#line 597 "canonical.m"
        canonical__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PD_9, (MR_Integer) 2)));
#line 598 "canonical.m"
        {
#line 598 "canonical.m"
          canonical__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &canonical_scalar_common_1[0], canonical__STATE_VARIABLE_ProcMap_0_12, ((MR_Box) (canonical__PSPtr_10)), &canonical__conv0_PDPtrs0_11);
        }
#line 598 "canonical.m"
        if (canonical__succeeded)
#line 598 "canonical.m"
          {
#line 598 "canonical.m"
            canonical__PDPtrs0_11 = ((MR_Word) canonical__conv0_PDPtrs0_11);
#line 598 "canonical.m"
            canonical__succeeded = MR_TRUE;
#line 598 "canonical.m"
          }
#line 600 "canonical.m"
        if (canonical__succeeded)
#line 599 "canonical.m"
          {
#line 599 "canonical.m"
            MR_Word canonical__V_14_14;

#line 599 "canonical.m"
            {
#line 599 "canonical.m"
              canonical__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "canonical.m"
              MR_hl_field(MR_mktag(1), canonical__V_14_14, 0) = ((MR_Box) (canonical__PDPtr_6));
#line 599 "canonical.m"
              MR_hl_field(MR_mktag(1), canonical__V_14_14, 1) = ((MR_Box) (canonical__PDPtrs0_11));
#line 599 "canonical.m"
            }
#line 599 "canonical.m"
            {
#line 599 "canonical.m"
              mercury__map__det_update_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &canonical_scalar_common_1[0], ((MR_Box) (canonical__PSPtr_10)), ((MR_Box) (canonical__V_14_14)), canonical__STATE_VARIABLE_ProcMap_0_12, canonical__STATE_VARIABLE_ProcMap_13);
#line 599 "canonical.m"
              return;
            }
#line 599 "canonical.m"
          }
#line 600 "canonical.m"
        else
#line 601 "canonical.m"
          {
#line 601 "canonical.m"
            MR_Word canonical__V_16_16;

#line 601 "canonical.m"
            {
#line 601 "canonical.m"
              canonical__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 601 "canonical.m"
              MR_hl_field(MR_mktag(1), canonical__V_16_16, 0) = ((MR_Box) (canonical__PDPtr_6));
#line 601 "canonical.m"
              MR_hl_field(MR_mktag(1), canonical__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 601 "canonical.m"
            }
#line 601 "canonical.m"
            {
#line 601 "canonical.m"
              mercury__map__det_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &canonical_scalar_common_1[0], ((MR_Box) (canonical__PSPtr_10)), ((MR_Box) (canonical__V_16_16)), canonical__STATE_VARIABLE_ProcMap_0_12, canonical__STATE_VARIABLE_ProcMap_13);
#line 601 "canonical.m"
              return;
            }
#line 601 "canonical.m"
          }
#line 596 "canonical.m"
      }
#line 603 "canonical.m"
    else
#line 601 "canonical.m"
      *canonical__STATE_VARIABLE_ProcMap_13 = canonical__STATE_VARIABLE_ProcMap_0_12;
#line 593 "canonical.m"
  }
#line 589 "canonical.m"
}

#line 585 "canonical.m"
static MR_bool MR_CALL 
canonical__two_or_more_1_p_0(
#line 585 "canonical.m"
  MR_Word canonical__HeadVar__1_1)
#line 585 "canonical.m"
{
#line 587 "canonical.m"
  {
#line 587 "canonical.m"
    MR_bool canonical__succeeded = ((MR_tag((MR_Word) canonical__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 587 "canonical.m"
    MR_Word canonical__V_5_5;
#line 587 "canonical.m"
    MR_Word canonical__V_2_2;
#line 587 "canonical.m"
    MR_Word canonical__V_3_3;
#line 587 "canonical.m"
    MR_Word canonical__V_4_4;

#line 587 "canonical.m"
    if (canonical__succeeded)
#line 587 "canonical.m"
      {
#line 587 "canonical.m"
        canonical__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 0)));
#line 587 "canonical.m"
        canonical__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 1)));
#line 587 "canonical.m"
        canonical__succeeded = ((MR_tag((MR_Word) canonical__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 587 "canonical.m"
        if (canonical__succeeded)
#line 587 "canonical.m"
          {
#line 587 "canonical.m"
            canonical__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__V_5_5, (MR_Integer) 0)));
#line 587 "canonical.m"
            canonical__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__V_5_5, (MR_Integer) 1)));
#line 587 "canonical.m"
          }
#line 587 "canonical.m"
      }
#line 587 "canonical.m"
    return canonical__succeeded;
#line 587 "canonical.m"
  }
#line 585 "canonical.m"
}

#line 569 "canonical.m"
static void MR_CALL 
canonical__record_csd_redirect_2_4_p_0(
#line 569 "canonical.m"
  MR_Word canonical__HeadVar__1_1,
#line 569 "canonical.m"
  MR_Word canonical__PrimeCSDPtr_2,
#line 569 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_3,
#line 569 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_4)
#line 569 "canonical.m"
{
#line 572 "canonical.m"
  while (MR_TRUE)
#line 572 "canonical.m"
    {
#line 572 "canonical.m"
      /* tailcall optimized into a loop */
#line 572 "canonical.m"
      {
#line 572 "canonical.m"
        MR_bool canonical__succeeded;

#line 572 "canonical.m"
        if ((canonical__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 572 "canonical.m"
          *canonical__STATE_VARIABLE_Redirect_4 = canonical__STATE_VARIABLE_Redirect_0_3;
#line 572 "canonical.m"
        else
#line 573 "canonical.m"
          {
#line 573 "canonical.m"
            MR_Word canonical__RestCSDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 0)));
#line 573 "canonical.m"
            MR_Word canonical__RestCSDPtrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 1)));
#line 573 "canonical.m"
            MR_ArrayPtr canonical__CallSiteRedirect0_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_3, (MR_Integer) 0)));
#line 573 "canonical.m"
            MR_Word canonical__OldRedirect_14;
#line 573 "canonical.m"
            MR_ArrayPtr canonical__CallSiteRedirect_15;
#line 573 "canonical.m"
            MR_Word canonical__STATE_VARIABLE_Redirect_23_23;
#line 573 "canonical.m"
            MR_Integer canonical__CSDI_32 = (MR_Integer) canonical__RestCSDPtr_9;
#line 574 "canonical.m"
            MR_ArrayPtr canonical__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_3, (MR_Integer) 1)));
#line 652 "canonical.m"
            MR_Box canonical__conv0_OldRedirect_14;
#line 576 "canonical.m"
            MR_Integer canonical__V_18_18;
#line 582 "canonical.m"
            MR_ArrayPtr canonical__V_27_27;
#line 582 "canonical.m"
            MR_ArrayPtr canonical__V_26_26;

#line 652 "canonical.m"
            {
#line 652 "canonical.m"
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) canonical__CallSiteRedirect0_13, canonical__CSDI_32, &canonical__conv0_OldRedirect_14);
            }
#line 652 "canonical.m"
            canonical__OldRedirect_14 = ((MR_Word) canonical__conv0_OldRedirect_14);
#line 576 "canonical.m"
            canonical__V_18_18 = (MR_Integer) canonical__OldRedirect_14;
#line 576 "canonical.m"
            canonical__succeeded = (canonical__V_18_18 == (MR_Integer) 0);
#line 579 "canonical.m"
            if (canonical__succeeded)
#line 577 "canonical.m"
              {
#line 577 "canonical.m"
                MR_ArrayPtr canonical__V_19_19;
#line 577 "canonical.m"
                MR_Integer canonical__CSDI_38;
#line 577 "canonical.m"
                MR_Box canonical__conv1_V_19_19;
#line 660 "canonical.m"
                MR_ArrayPtr canonical__conv2_CallSiteRedirect_15;

#line 577 "canonical.m"
                {
#line 577 "canonical.m"
                  canonical__conv1_V_19_19 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[7], ((MR_Box) (canonical__CallSiteRedirect0_13)));
                }
#line 577 "canonical.m"
                canonical__V_19_19 = ((MR_ArrayPtr) canonical__conv1_V_19_19);
#line 659 "canonical.m"
                canonical__CSDI_38 = (MR_Integer) canonical__RestCSDPtr_9;
#line 660 "canonical.m"
                {
#line 660 "canonical.m"
                  mercury__array__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, canonical__CSDI_38, ((MR_Box) (canonical__PrimeCSDPtr_2)), (MR_ArrayPtr) canonical__V_19_19, &canonical__conv2_CallSiteRedirect_15);
                }
#line 660 "canonical.m"
                canonical__CallSiteRedirect_15 = (MR_ArrayPtr) canonical__conv2_CallSiteRedirect_15;
#line 577 "canonical.m"
              }
#line 579 "canonical.m"
            else
#line 580 "canonical.m"
              {
#line 580 "canonical.m"
                {
#line 580 "canonical.m"
                  mercury__require__unexpected_3_p_0((MR_String) "canonical", (MR_String) "predicate \140canonical.record_csd_redirect_2\'/4", (MR_String) "already redirected");
#line 580 "canonical.m"
                  return;
                }
#line 580 "canonical.m"
              }
#line 582 "canonical.m"
            canonical__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_3, (MR_Integer) 0)));
#line 582 "canonical.m"
            canonical__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_3, (MR_Integer) 1)));
#line 582 "canonical.m"
            {
#line 582 "canonical.m"
              canonical__STATE_VARIABLE_Redirect_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 582 "canonical.m"
              MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_23_23, 0) = ((MR_Box) (canonical__CallSiteRedirect_15));
#line 582 "canonical.m"
              MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_23_23, 1) = ((MR_Box) (canonical__V_27_27));
#line 582 "canonical.m"
            }
#line 583 "canonical.m"
            /* direct tailcall eliminated */
#line 583 "canonical.m"
            {
#line 583 "canonical.m"
              MR_Word canonical__HeadVar__1__tmp_copy_1 = canonical__RestCSDPtrs_10;
#line 583 "canonical.m"
              MR_Word canonical__STATE_VARIABLE_Redirect_0__tmp_copy_3 = canonical__STATE_VARIABLE_Redirect_23_23;

#line 583 "canonical.m"
              canonical__STATE_VARIABLE_Redirect_0_3 = canonical__STATE_VARIABLE_Redirect_0__tmp_copy_3;
#line 583 "canonical.m"
              canonical__HeadVar__1_1 = canonical__HeadVar__1__tmp_copy_1;
#line 583 "canonical.m"
            }
#line 583 "canonical.m"
            continue;
#line 573 "canonical.m"
          }
#line 572 "canonical.m"
      }
#line 572 "canonical.m"
      break;
#line 572 "canonical.m"
    }
#line 569 "canonical.m"
}

#line 550 "canonical.m"
static void MR_CALL 
canonical__record_csd_redirect_4_p_0(
#line 550 "canonical.m"
  MR_Word canonical__RestCSDPtrs_5,
#line 550 "canonical.m"
  MR_Word canonical__PrimeCSDPtr_6,
#line 550 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_10,
#line 550 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_11)
#line 550 "canonical.m"
{
#line 553 "canonical.m"
  {
#line 553 "canonical.m"
    MR_bool canonical__succeeded;
#line 553 "canonical.m"
    MR_Word canonical__OldRedirect_9;
#line 553 "canonical.m"
    MR_ArrayPtr canonical__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_10, (MR_Integer) 0)));
#line 553 "canonical.m"
    MR_Integer canonical__CSDI_32 = (MR_Integer) canonical__PrimeCSDPtr_6;
#line 562 "canonical.m"
    MR_ArrayPtr canonical__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_10, (MR_Integer) 1)));
#line 652 "canonical.m"
    MR_Box canonical__conv0_OldRedirect_9;
#line 563 "canonical.m"
    MR_Integer canonical__V_21_21;

#line 652 "canonical.m"
    {
#line 652 "canonical.m"
      mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) canonical__V_20_20, canonical__CSDI_32, &canonical__conv0_OldRedirect_9);
    }
#line 652 "canonical.m"
    canonical__OldRedirect_9 = ((MR_Word) canonical__conv0_OldRedirect_9);
#line 563 "canonical.m"
    canonical__V_21_21 = (MR_Integer) canonical__OldRedirect_9;
#line 563 "canonical.m"
    canonical__succeeded = (canonical__V_21_21 == (MR_Integer) 0);
#line 565 "canonical.m"
    if (canonical__succeeded)
#line 564 "canonical.m"
      {
#line 564 "canonical.m"
        canonical__record_csd_redirect_2_4_p_0(canonical__RestCSDPtrs_5, canonical__PrimeCSDPtr_6, canonical__STATE_VARIABLE_Redirect_0_10, canonical__STATE_VARIABLE_Redirect_11);
#line 564 "canonical.m"
        return;
      }
#line 565 "canonical.m"
    else
#line 566 "canonical.m"
      {
#line 566 "canonical.m"
        {
#line 566 "canonical.m"
          mercury__require__unexpected_3_p_0((MR_String) "canonical", (MR_String) "predicate \140canonical.record_csd_redirect\'/4", (MR_String) "prime is redirected");
#line 566 "canonical.m"
          return;
        }
#line 566 "canonical.m"
      }
#line 553 "canonical.m"
  }
#line 550 "canonical.m"
}

#line 534 "canonical.m"
static void MR_CALL 
canonical__record_pd_redirect_2_4_p_0(
#line 534 "canonical.m"
  MR_Word canonical__HeadVar__1_1,
#line 534 "canonical.m"
  MR_Word canonical__PrimePDPtr_2,
#line 534 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_3,
#line 534 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_4)
#line 534 "canonical.m"
{
#line 537 "canonical.m"
  while (MR_TRUE)
#line 537 "canonical.m"
    {
#line 537 "canonical.m"
      /* tailcall optimized into a loop */
#line 537 "canonical.m"
      {
#line 537 "canonical.m"
        MR_bool canonical__succeeded;

#line 537 "canonical.m"
        if ((canonical__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 537 "canonical.m"
          *canonical__STATE_VARIABLE_Redirect_4 = canonical__STATE_VARIABLE_Redirect_0_3;
#line 537 "canonical.m"
        else
#line 538 "canonical.m"
          {
#line 538 "canonical.m"
            MR_Word canonical__RestPDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 0)));
#line 538 "canonical.m"
            MR_Word canonical__RestPDPtrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 1)));
#line 538 "canonical.m"
            MR_ArrayPtr canonical__ProcRedirect0_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_3, (MR_Integer) 1)));
#line 538 "canonical.m"
            MR_Word canonical__OldRedirect_14;
#line 538 "canonical.m"
            MR_ArrayPtr canonical__ProcRedirect_15;
#line 538 "canonical.m"
            MR_Word canonical__STATE_VARIABLE_Redirect_23_23;
#line 538 "canonical.m"
            MR_Integer canonical__PDI_32 = (MR_Integer) canonical__RestPDPtr_9;
#line 539 "canonical.m"
            MR_ArrayPtr canonical__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_3, (MR_Integer) 0)));
#line 637 "canonical.m"
            MR_Box canonical__conv0_OldRedirect_14;
#line 541 "canonical.m"
            MR_Integer canonical__V_18_18;
#line 547 "canonical.m"
            MR_ArrayPtr canonical__V_26_26;
#line 547 "canonical.m"
            MR_ArrayPtr canonical__V_27_27;

#line 637 "canonical.m"
            {
#line 637 "canonical.m"
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_ArrayPtr) canonical__ProcRedirect0_13, canonical__PDI_32, &canonical__conv0_OldRedirect_14);
            }
#line 637 "canonical.m"
            canonical__OldRedirect_14 = ((MR_Word) canonical__conv0_OldRedirect_14);
#line 541 "canonical.m"
            canonical__V_18_18 = (MR_Integer) canonical__OldRedirect_14;
#line 541 "canonical.m"
            canonical__succeeded = (canonical__V_18_18 == (MR_Integer) 0);
#line 544 "canonical.m"
            if (canonical__succeeded)
#line 542 "canonical.m"
              {
#line 542 "canonical.m"
                MR_ArrayPtr canonical__V_19_19;
#line 542 "canonical.m"
                MR_Integer canonical__PDI_38;
#line 542 "canonical.m"
                MR_Box canonical__conv1_V_19_19;
#line 645 "canonical.m"
                MR_ArrayPtr canonical__conv2_ProcRedirect_15;

#line 542 "canonical.m"
                {
#line 542 "canonical.m"
                  canonical__conv1_V_19_19 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[6], ((MR_Box) (canonical__ProcRedirect0_13)));
                }
#line 542 "canonical.m"
                canonical__V_19_19 = ((MR_ArrayPtr) canonical__conv1_V_19_19);
#line 644 "canonical.m"
                canonical__PDI_38 = (MR_Integer) canonical__RestPDPtr_9;
#line 645 "canonical.m"
                {
#line 645 "canonical.m"
                  mercury__array__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, canonical__PDI_38, ((MR_Box) (canonical__PrimePDPtr_2)), (MR_ArrayPtr) canonical__V_19_19, &canonical__conv2_ProcRedirect_15);
                }
#line 645 "canonical.m"
                canonical__ProcRedirect_15 = (MR_ArrayPtr) canonical__conv2_ProcRedirect_15;
#line 542 "canonical.m"
              }
#line 544 "canonical.m"
            else
#line 545 "canonical.m"
              {
#line 545 "canonical.m"
                {
#line 545 "canonical.m"
                  mercury__require__unexpected_3_p_0((MR_String) "canonical", (MR_String) "predicate \140canonical.record_pd_redirect_2\'/4", (MR_String) "already redirected");
#line 545 "canonical.m"
                  return;
                }
#line 545 "canonical.m"
              }
#line 547 "canonical.m"
            canonical__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_3, (MR_Integer) 0)));
#line 547 "canonical.m"
            canonical__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_3, (MR_Integer) 1)));
#line 547 "canonical.m"
            {
#line 547 "canonical.m"
              canonical__STATE_VARIABLE_Redirect_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 547 "canonical.m"
              MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_23_23, 0) = ((MR_Box) (canonical__V_26_26));
#line 547 "canonical.m"
              MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_23_23, 1) = ((MR_Box) (canonical__ProcRedirect_15));
#line 547 "canonical.m"
            }
#line 548 "canonical.m"
            /* direct tailcall eliminated */
#line 548 "canonical.m"
            {
#line 548 "canonical.m"
              MR_Word canonical__HeadVar__1__tmp_copy_1 = canonical__RestPDPtrs_10;
#line 548 "canonical.m"
              MR_Word canonical__STATE_VARIABLE_Redirect_0__tmp_copy_3 = canonical__STATE_VARIABLE_Redirect_23_23;

#line 548 "canonical.m"
              canonical__STATE_VARIABLE_Redirect_0_3 = canonical__STATE_VARIABLE_Redirect_0__tmp_copy_3;
#line 548 "canonical.m"
              canonical__HeadVar__1_1 = canonical__HeadVar__1__tmp_copy_1;
#line 548 "canonical.m"
            }
#line 548 "canonical.m"
            continue;
#line 538 "canonical.m"
          }
#line 537 "canonical.m"
      }
#line 537 "canonical.m"
      break;
#line 537 "canonical.m"
    }
#line 534 "canonical.m"
}

#line 515 "canonical.m"
static void MR_CALL 
canonical__record_pd_redirect_4_p_0(
#line 515 "canonical.m"
  MR_Word canonical__RestPDPtrs_5,
#line 515 "canonical.m"
  MR_Word canonical__PrimePDPtr_6,
#line 515 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_10,
#line 515 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_11)
#line 515 "canonical.m"
{
#line 518 "canonical.m"
  {
#line 518 "canonical.m"
    MR_bool canonical__succeeded;
#line 518 "canonical.m"
    MR_Word canonical__OldRedirect_9;
#line 518 "canonical.m"
    MR_ArrayPtr canonical__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_10, (MR_Integer) 1)));
#line 518 "canonical.m"
    MR_Integer canonical__PDI_32 = (MR_Integer) canonical__PrimePDPtr_6;
#line 527 "canonical.m"
    MR_ArrayPtr canonical__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_Redirect_0_10, (MR_Integer) 0)));
#line 637 "canonical.m"
    MR_Box canonical__conv0_OldRedirect_9;
#line 528 "canonical.m"
    MR_Integer canonical__V_21_21;

#line 637 "canonical.m"
    {
#line 637 "canonical.m"
      mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_ArrayPtr) canonical__V_20_20, canonical__PDI_32, &canonical__conv0_OldRedirect_9);
    }
#line 637 "canonical.m"
    canonical__OldRedirect_9 = ((MR_Word) canonical__conv0_OldRedirect_9);
#line 528 "canonical.m"
    canonical__V_21_21 = (MR_Integer) canonical__OldRedirect_9;
#line 528 "canonical.m"
    canonical__succeeded = (canonical__V_21_21 == (MR_Integer) 0);
#line 530 "canonical.m"
    if (canonical__succeeded)
#line 529 "canonical.m"
      {
#line 529 "canonical.m"
        canonical__record_pd_redirect_2_4_p_0(canonical__RestPDPtrs_5, canonical__PrimePDPtr_6, canonical__STATE_VARIABLE_Redirect_0_10, canonical__STATE_VARIABLE_Redirect_11);
#line 529 "canonical.m"
        return;
      }
#line 530 "canonical.m"
    else
#line 531 "canonical.m"
      {
#line 531 "canonical.m"
        {
#line 531 "canonical.m"
          mercury__require__unexpected_3_p_0((MR_String) "canonical", (MR_String) "predicate \140canonical.record_pd_redirect\'/4", (MR_String) "prime is redirected");
#line 531 "canonical.m"
          return;
        }
#line 531 "canonical.m"
      }
#line 518 "canonical.m"
  }
#line 515 "canonical.m"
}

#line 500 "canonical.m"
static void MR_CALL 
canonical__lookup_multi_sites_3_p_0(
#line 500 "canonical.m"
  MR_Word canonical__HeadVar__1_1,
#line 500 "canonical.m"
  MR_Integer canonical__SlotNum_2,
#line 500 "canonical.m"
  MR_Word * canonical__HeadVar__3_3)
#line 500 "canonical.m"
{
#line 503 "canonical.m"
  {
#line 503 "canonical.m"
    MR_bool canonical__succeeded;

#line 503 "canonical.m"
    if ((canonical__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 503 "canonical.m"
      *canonical__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 503 "canonical.m"
    else
#line 504 "canonical.m"
      {
#line 504 "canonical.m"
        MR_ArrayPtr canonical__RestArray_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 0)));
#line 504 "canonical.m"
        MR_Word canonical__RestArrays_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 1)));
#line 504 "canonical.m"
        MR_Word canonical__CSDList_8;
#line 504 "canonical.m"
        MR_Word canonical__CSDLists_9;
#line 504 "canonical.m"
        MR_Word canonical__Slot_10;
#line 505 "canonical.m"
        MR_Box canonical__conv0_Slot_10;

#line 505 "canonical.m"
        {
#line 505 "canonical.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) canonical__RestArray_5, canonical__SlotNum_2, &canonical__conv0_Slot_10);
        }
#line 505 "canonical.m"
        canonical__Slot_10 = ((MR_Word) canonical__conv0_Slot_10);
#line 509 "canonical.m"
        if (((MR_tag((MR_Word) canonical__Slot_10)) == (MR_mktag((MR_Integer) 1))))
#line 510 "canonical.m"
          {
#line 510 "canonical.m"
            MR_ArrayPtr canonical__CSDArray_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), canonical__Slot_10, (MR_Integer) 1)));
#line 510 "canonical.m"
            MR_Word canonical__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__Slot_10, (MR_Integer) 0)));

#line 511 "canonical.m"
            {
#line 511 "canonical.m"
              mercury__array__to_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) canonical__CSDArray_13, &canonical__CSDList_8);
            }
#line 510 "canonical.m"
          }
#line 509 "canonical.m"
        else
#line 507 "canonical.m"
          {
#line 508 "canonical.m"
            {
#line 508 "canonical.m"
              mercury__require__unexpected_3_p_0((MR_String) "canonical", (MR_String) "predicate \140canonical.lookup_multi_sites\'/3", (MR_String) "found normal");
#line 508 "canonical.m"
              return;
            }
#line 507 "canonical.m"
          }
#line 513 "canonical.m"
        {
#line 513 "canonical.m"
          canonical__lookup_multi_sites_3_p_0(canonical__RestArrays_6, canonical__SlotNum_2, &canonical__CSDLists_9);
        }
#line 504 "canonical.m"
        {
#line 504 "canonical.m"
          MR_Word base;
#line 504 "canonical.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "canonical.m"
          *canonical__HeadVar__3_3 = base;
#line 504 "canonical.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (canonical__CSDList_8));
#line 504 "canonical.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (canonical__CSDLists_9));
#line 504 "canonical.m"
        }
#line 504 "canonical.m"
      }
#line 503 "canonical.m"
  }
#line 500 "canonical.m"
}

#line 486 "canonical.m"
static void MR_CALL 
canonical__lookup_normal_sites_3_p_0(
#line 486 "canonical.m"
  MR_Word canonical__HeadVar__1_1,
#line 486 "canonical.m"
  MR_Integer canonical__SlotNum_2,
#line 486 "canonical.m"
  MR_Word * canonical__HeadVar__3_3)
#line 486 "canonical.m"
{
#line 489 "canonical.m"
  {
#line 489 "canonical.m"
    MR_bool canonical__succeeded;

#line 489 "canonical.m"
    if ((canonical__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 489 "canonical.m"
      *canonical__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 489 "canonical.m"
    else
#line 490 "canonical.m"
      {
#line 490 "canonical.m"
        MR_ArrayPtr canonical__RestArray_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 0)));
#line 490 "canonical.m"
        MR_Word canonical__RestArrays_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 1)));
#line 490 "canonical.m"
        MR_Word canonical__CSDPtr_8;
#line 490 "canonical.m"
        MR_Word canonical__CSDPtrs_9;
#line 490 "canonical.m"
        MR_Word canonical__Slot_10;
#line 491 "canonical.m"
        MR_Box canonical__conv0_Slot_10;

#line 491 "canonical.m"
        {
#line 491 "canonical.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) canonical__RestArray_5, canonical__SlotNum_2, &canonical__conv0_Slot_10);
        }
#line 491 "canonical.m"
        canonical__Slot_10 = ((MR_Word) canonical__conv0_Slot_10);
#line 494 "canonical.m"
        if (((MR_tag((MR_Word) canonical__Slot_10)) == (MR_mktag((MR_Integer) 1))))
#line 495 "canonical.m"
          {
#line 496 "canonical.m"
            {
#line 496 "canonical.m"
              mercury__require__unexpected_3_p_0((MR_String) "canonical", (MR_String) "predicate \140canonical.lookup_normal_sites\'/3", (MR_String) "found slot_multi");
#line 496 "canonical.m"
              return;
            }
#line 495 "canonical.m"
          }
#line 494 "canonical.m"
        else
#line 493 "canonical.m"
          canonical__CSDPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__Slot_10, (MR_Integer) 0)));
#line 498 "canonical.m"
        {
#line 498 "canonical.m"
          canonical__lookup_normal_sites_3_p_0(canonical__RestArrays_6, canonical__SlotNum_2, &canonical__CSDPtrs_9);
        }
#line 490 "canonical.m"
        {
#line 490 "canonical.m"
          MR_Word base;
#line 490 "canonical.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "canonical.m"
          *canonical__HeadVar__3_3 = base;
#line 490 "canonical.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (canonical__CSDPtr_8));
#line 490 "canonical.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (canonical__CSDPtrs_9));
#line 490 "canonical.m"
        }
#line 490 "canonical.m"
      }
#line 489 "canonical.m"
  }
#line 486 "canonical.m"
}

#line 471 "canonical.m"
static void MR_CALL 
canonical__union_cliques_4_p_0(
#line 471 "canonical.m"
  MR_Word canonical__MergeInfo_5,
#line 471 "canonical.m"
  MR_Word canonical__PDPtr_6,
#line 471 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_CliqueUnion_0_10,
#line 471 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_CliqueUnion_11)
#line 471 "canonical.m"
{
#line 479 "canonical.m"
  {
#line 479 "canonical.m"
    MR_bool canonical__succeeded;
#line 475 "canonical.m"
    MR_Integer canonical__V_12_12 = (MR_Integer) canonical__PDPtr_6;

#line 475 "canonical.m"
    canonical__succeeded = (canonical__V_12_12 == (MR_Integer) 0);
#line 479 "canonical.m"
    if (canonical__succeeded)
#line 475 "canonical.m"
      *canonical__STATE_VARIABLE_CliqueUnion_11 = canonical__STATE_VARIABLE_CliqueUnion_0_10;
#line 479 "canonical.m"
    else
#line 480 "canonical.m"
      {
#line 480 "canonical.m"
        MR_Word canonical__CliquePtr_8;
#line 480 "canonical.m"
        MR_Word canonical__Members_9;
#line 480 "canonical.m"
        MR_ArrayPtr canonical__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__MergeInfo_5, (MR_Integer) 1)));
#line 480 "canonical.m"
        MR_ArrayPtr canonical__V_14_14;
#line 480 "canonical.m"
        MR_ArrayPtr canonical__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__MergeInfo_5, (MR_Integer) 0)));
#line 481 "canonical.m"
        MR_ArrayPtr canonical__V_17_17;

#line 480 "canonical.m"
        {
#line 480 "canonical.m"
          profile__lookup_clique_index_3_p_0(canonical__V_13_13, canonical__PDPtr_6, &canonical__CliquePtr_8);
        }
#line 481 "canonical.m"
        canonical__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__MergeInfo_5, (MR_Integer) 0)));
#line 481 "canonical.m"
        canonical__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__MergeInfo_5, (MR_Integer) 1)));
#line 481 "canonical.m"
        {
#line 481 "canonical.m"
          profile__lookup_clique_members_3_p_0(canonical__V_14_14, canonical__CliquePtr_8, &canonical__Members_9);
        }
#line 483 "canonical.m"
        {
#line 483 "canonical.m"
          mercury__set__insert_list_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, canonical__Members_9, canonical__STATE_VARIABLE_CliqueUnion_0_10, canonical__STATE_VARIABLE_CliqueUnion_11);
#line 483 "canonical.m"
          return;
        }
#line 480 "canonical.m"
      }
#line 479 "canonical.m"
  }
#line 471 "canonical.m"
}

#line 467 "canonical.m"
static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0_3(
#line 467 "canonical.m"
  MR_Box canonical__closure_arg,
#line 467 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 467 "canonical.m"
  MR_Box canonical__wrapper_arg_2,
#line 467 "canonical.m"
  MR_Box * canonical__wrapper_arg_3)
#line 467 "canonical.m"
{
#line 467 "canonical.m"
  {
#line 467 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 467 "canonical.m"
    MR_Word canonical__conv2_STATE_VARIABLE_CliqueUnion_11;

#line 467 "canonical.m"
    {
#line 467 "canonical.m"
      canonical__union_cliques_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2), &canonical__conv2_STATE_VARIABLE_CliqueUnion_11);
    }
#line 467 "canonical.m"
    *canonical__wrapper_arg_3 = ((MR_Box) (canonical__conv2_STATE_VARIABLE_CliqueUnion_11));
#line 467 "canonical.m"
  }
#line 467 "canonical.m"
}

#line 465 "canonical.m"
static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0_2(
#line 465 "canonical.m"
  MR_Box canonical__closure_arg,
#line 465 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 465 "canonical.m"
  MR_Box * canonical__wrapper_arg_2)
#line 465 "canonical.m"
{
#line 465 "canonical.m"
  {
#line 465 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 465 "canonical.m"
    MR_Word canonical__conv1_HeadVar__2_2;

#line 465 "canonical.m"
    {
#line 465 "canonical.m"
      profile__extract_csd_callee_2_p_0(((MR_Word) canonical__wrapper_arg_1), &canonical__conv1_HeadVar__2_2);
    }
#line 465 "canonical.m"
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv1_HeadVar__2_2));
#line 465 "canonical.m"
  }
#line 465 "canonical.m"
}

#line 463 "canonical.m"
static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0_1(
#line 463 "canonical.m"
  MR_Box canonical__closure_arg,
#line 463 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 463 "canonical.m"
  MR_Box * canonical__wrapper_arg_2)
#line 463 "canonical.m"
{
#line 463 "canonical.m"
  {
#line 463 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 463 "canonical.m"
    MR_Word canonical__conv0_HeadVar__3_3;

#line 463 "canonical.m"
    {
#line 463 "canonical.m"
      profile__lookup_call_site_dynamics_3_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv0_HeadVar__3_3);
    }
#line 463 "canonical.m"
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv0_HeadVar__3_3));
#line 463 "canonical.m"
  }
#line 463 "canonical.m"
}

#line 453 "canonical.m"
static void MR_CALL 
canonical__merge_call_site_dynamics_descendants_8_p_0(
#line 453 "canonical.m"
  MR_Word canonical__MergeInfo_9,
#line 453 "canonical.m"
  MR_Word canonical__PrimeCSDPtr_10,
#line 453 "canonical.m"
  MR_Word canonical__RestCSDPtrs_11,
#line 453 "canonical.m"
  MR_Word * canonical__ChosenPDPtr_12,
#line 453 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_22,
#line 453 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_InitDeep_23,
#line 453 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_24,
#line 453 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_25)
#line 453 "canonical.m"
{
#line 459 "canonical.m"
  {
#line 459 "canonical.m"
    MR_bool canonical__succeeded;
#line 459 "canonical.m"
    MR_Word canonical__TypeCtorInfo_40_40;
#line 459 "canonical.m"
    MR_Word canonical__TypeCtorInfo_43_43;
#line 459 "canonical.m"
    MR_ArrayPtr canonical__CallSiteDynamics_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 2)));
#line 459 "canonical.m"
    MR_Word canonical__PrimeCSD_16;
#line 459 "canonical.m"
    MR_Word canonical__PrimeCSDCallee_17;
#line 459 "canonical.m"
    MR_Word canonical__RestCSDs_18;
#line 459 "canonical.m"
    MR_Word canonical__RestCSDCallees_19;
#line 459 "canonical.m"
    MR_Word canonical__PDPtrs_20;
#line 459 "canonical.m"
    MR_Word canonical__CliqueUnion_21;
#line 459 "canonical.m"
    MR_Word canonical__V_26_26;
#line 459 "canonical.m"
    MR_Word canonical__V_28_28;
#line 459 "canonical.m"
    MR_Word canonical__V_29_29;
#line 460 "canonical.m"
    MR_Word canonical__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 0)));
#line 460 "canonical.m"
    MR_Word canonical__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 1)));
#line 460 "canonical.m"
    MR_ArrayPtr canonical__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 3)));
#line 460 "canonical.m"
    MR_ArrayPtr canonical__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 4)));
#line 460 "canonical.m"
    MR_ArrayPtr canonical__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_22, (MR_Integer) 5)));
#line 467 "canonical.m"
    MR_Box canonical__conv3_CliqueUnion_21;

#line 461 "canonical.m"
    {
#line 461 "canonical.m"
      profile__lookup_call_site_dynamics_3_p_0(canonical__CallSiteDynamics_15, canonical__PrimeCSDPtr_10, &canonical__PrimeCSD_16);
    }
#line 462 "canonical.m"
    {
#line 462 "canonical.m"
      profile__extract_csd_callee_2_p_0(canonical__PrimeCSD_16, &canonical__PrimeCSDCallee_17);
    }
#line 463 "canonical.m"
    {
#line 463 "canonical.m"
      canonical__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 463 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_26_26, 0) = ((MR_Box) (&canonical_scalar_common_3[7]));
#line 463 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_26_26, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_descendants_8_p_0_1));
#line 463 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 463 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_26_26, 3) = ((MR_Box) (canonical__CallSiteDynamics_15));
#line 463 "canonical.m"
    }
#line 4421 "canonical.c"
    canonical__TypeCtorInfo_40_40 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
#line 463 "canonical.m"
    {
#line 463 "canonical.m"
      mercury__list__map_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, canonical__TypeCtorInfo_40_40, canonical__V_26_26, canonical__RestCSDPtrs_11, &canonical__RestCSDs_18);
    }
#line 4428 "canonical.c"
    canonical__TypeCtorInfo_43_43 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0;
#line 465 "canonical.m"
    {
#line 465 "canonical.m"
      mercury__list__map_3_p_0(canonical__TypeCtorInfo_40_40, canonical__TypeCtorInfo_43_43, (MR_Word) &canonical_scalar_common_2[8], canonical__RestCSDs_18, &canonical__RestCSDCallees_19);
    }
#line 466 "canonical.m"
    {
#line 466 "canonical.m"
      canonical__PDPtrs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "canonical.m"
      MR_hl_field(MR_mktag(1), canonical__PDPtrs_20, 0) = ((MR_Box) (canonical__PrimeCSDCallee_17));
#line 466 "canonical.m"
      MR_hl_field(MR_mktag(1), canonical__PDPtrs_20, 1) = ((MR_Box) (canonical__RestCSDCallees_19));
#line 466 "canonical.m"
    }
#line 467 "canonical.m"
    {
#line 467 "canonical.m"
      canonical__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 467 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_28_28, 0) = ((MR_Box) (&canonical_scalar_common_4[2]));
#line 467 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_28_28, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_descendants_8_p_0_3));
#line 467 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 467 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_28_28, 3) = ((MR_Box) (canonical__MergeInfo_9));
#line 467 "canonical.m"
    }
#line 467 "canonical.m"
    {
#line 467 "canonical.m"
      canonical__V_29_29 = mercury__set__init_0_f_0(canonical__TypeCtorInfo_43_43);
    }
#line 467 "canonical.m"
    {
#line 467 "canonical.m"
      mercury__list__foldl_4_p_0(canonical__TypeCtorInfo_43_43, (MR_Word) &canonical_scalar_common_1[1], canonical__V_28_28, canonical__PDPtrs_20, ((MR_Box) (canonical__V_29_29)), &canonical__conv3_CliqueUnion_21);
    }
#line 467 "canonical.m"
    canonical__CliqueUnion_21 = ((MR_Word) canonical__conv3_CliqueUnion_21);
#line 468 "canonical.m"
    {
#line 468 "canonical.m"
      canonical__merge_proc_dynamics_8_p_0(canonical__MergeInfo_9, canonical__CliqueUnion_21, canonical__PDPtrs_20, canonical__ChosenPDPtr_12, canonical__STATE_VARIABLE_InitDeep_0_22, canonical__STATE_VARIABLE_InitDeep_23, canonical__STATE_VARIABLE_Redirect_0_24, canonical__STATE_VARIABLE_Redirect_25);
#line 468 "canonical.m"
      return;
    }
#line 459 "canonical.m"
  }
#line 453 "canonical.m"
}

#line 426 "canonical.m"
static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_6(
#line 426 "canonical.m"
  MR_Box canonical__closure_arg,
#line 426 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 426 "canonical.m"
  MR_Box * canonical__wrapper_arg_2)
#line 426 "canonical.m"
{
#line 426 "canonical.m"
  {
#line 426 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 426 "canonical.m"
    MR_Word canonical__conv4_HeadVar__3_3;

#line 426 "canonical.m"
    {
#line 426 "canonical.m"
      profile__lookup_call_site_dynamics_3_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv4_HeadVar__3_3);
    }
#line 426 "canonical.m"
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv4_HeadVar__3_3));
#line 426 "canonical.m"
  }
#line 426 "canonical.m"
}

#line 418 "canonical.m"
static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_5(
#line 418 "canonical.m"
  MR_Box canonical__closure_arg)
#line 418 "canonical.m"
{
#line 418 "canonical.m"
  {
#line 418 "canonical.m"
    MR_bool canonical__succeeded;
#line 418 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;

#line 418 "canonical.m"
    {
#line 418 "canonical.m"
      return canonical__succeeded = canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__418__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 4))));
    }
#line 418 "canonical.m"
    return canonical__succeeded;
#line 418 "canonical.m"
  }
#line 418 "canonical.m"
}

#line 426 "canonical.m"
static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_4(
#line 426 "canonical.m"
  MR_Box canonical__closure_arg,
#line 426 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 426 "canonical.m"
  MR_Box * canonical__wrapper_arg_2)
#line 426 "canonical.m"
{
#line 426 "canonical.m"
  {
#line 426 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 426 "canonical.m"
    MR_Word canonical__conv1_HeadVar__3_3;

#line 426 "canonical.m"
    {
#line 426 "canonical.m"
      profile__lookup_call_site_dynamics_3_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv1_HeadVar__3_3);
    }
#line 426 "canonical.m"
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv1_HeadVar__3_3));
#line 426 "canonical.m"
  }
#line 426 "canonical.m"
}

#line 413 "canonical.m"
static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_3(
#line 413 "canonical.m"
  MR_Box canonical__closure_arg)
#line 413 "canonical.m"
{
#line 413 "canonical.m"
  {
#line 413 "canonical.m"
    MR_bool canonical__succeeded;
#line 413 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;

#line 413 "canonical.m"
    {
#line 413 "canonical.m"
      return canonical__succeeded = canonical__IntroducedFrom__pred__merge_call_site_dynamics_2__413__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 4))));
    }
#line 413 "canonical.m"
    return canonical__succeeded;
#line 413 "canonical.m"
  }
#line 413 "canonical.m"
}

#line 429 "canonical.m"
static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_2(
#line 429 "canonical.m"
  MR_Box canonical__closure_arg,
#line 429 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 429 "canonical.m"
  MR_Box canonical__wrapper_arg_2,
#line 429 "canonical.m"
  MR_Box * canonical__wrapper_arg_3)
#line 429 "canonical.m"
{
#line 429 "canonical.m"
  {
#line 429 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 429 "canonical.m"
    MR_Word canonical__conv0_Own_6;

#line 429 "canonical.m"
    {
#line 429 "canonical.m"
      canonical__accumulate_csd_owns_3_p_0(((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2), &canonical__conv0_Own_6);
    }
#line 429 "canonical.m"
    *canonical__wrapper_arg_3 = ((MR_Box) (canonical__conv0_Own_6));
#line 429 "canonical.m"
  }
#line 429 "canonical.m"
}

#line 407 "canonical.m"
static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0_1(
#line 407 "canonical.m"
  MR_Box canonical__closure_arg,
#line 407 "canonical.m"
  MR_Box canonical__wrapper_arg_1)
#line 407 "canonical.m"
{
#line 407 "canonical.m"
  {
#line 407 "canonical.m"
    MR_bool canonical__succeeded;
#line 407 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;

#line 407 "canonical.m"
    {
#line 407 "canonical.m"
      return canonical__succeeded = canonical__callee_in_clique_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 4))), ((MR_Word) canonical__wrapper_arg_1));
    }
#line 407 "canonical.m"
    return canonical__succeeded;
#line 407 "canonical.m"
  }
#line 407 "canonical.m"
}

#line 397 "canonical.m"
static void MR_CALL 
canonical__merge_call_site_dynamics_2_8_p_0(
#line 397 "canonical.m"
  MR_Word canonical__MergeInfo_9,
#line 397 "canonical.m"
  MR_Word canonical__Clique_10,
#line 397 "canonical.m"
  MR_Word canonical__PrimeCSDPtr_11,
#line 397 "canonical.m"
  MR_Word canonical__RestCSDPtrs_12,
#line 397 "canonical.m"
  MR_Word canonical__InitDeep0_13,
#line 397 "canonical.m"
  MR_Word * canonical__InitDeep_14,
#line 397 "canonical.m"
  MR_Word canonical__Redirect0_15,
#line 397 "canonical.m"
  MR_Word * canonical__Redirect_16)
#line 397 "canonical.m"
{
#line 403 "canonical.m"
  {
#line 403 "canonical.m"
    MR_bool canonical__succeeded;
#line 403 "canonical.m"
    MR_Word canonical__TypeCtorInfo_81_81;
#line 403 "canonical.m"
    MR_Word canonical__TypeCtorInfo_86_86;
#line 403 "canonical.m"
    MR_Word canonical__TypeCtorInfo_90_90;
#line 403 "canonical.m"
    MR_Word canonical__TypeInfo_91_91;
#line 403 "canonical.m"
    MR_Word canonical__InClique_17;
#line 403 "canonical.m"
    MR_Word canonical__NotInClique_18;
#line 403 "canonical.m"
    MR_Word canonical__Redirect1_20;
#line 403 "canonical.m"
    MR_Word canonical__V_35_35;
#line 403 "canonical.m"
    MR_Word canonical__V_47_47;

#line 407 "canonical.m"
    {
#line 407 "canonical.m"
      canonical__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 407 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_35_35, 0) = ((MR_Box) (&canonical_scalar_common_3[5]));
#line 407 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_35_35, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_2_8_p_0_1));
#line 407 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 407 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_35_35, 3) = ((MR_Box) (canonical__InitDeep0_13));
#line 407 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_35_35, 4) = ((MR_Box) (canonical__Clique_10));
#line 407 "canonical.m"
    }
#line 4715 "canonical.c"
    canonical__TypeCtorInfo_81_81 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 407 "canonical.m"
    {
#line 407 "canonical.m"
      mercury__list__filter_4_p_0(canonical__TypeCtorInfo_81_81, canonical__V_35_35, canonical__RestCSDPtrs_12, &canonical__InClique_17, &canonical__NotInClique_18);
    }
#line 423 "canonical.m"
    {
#line 423 "canonical.m"
      canonical__record_csd_redirect_4_p_0(canonical__RestCSDPtrs_12, canonical__PrimeCSDPtr_11, canonical__Redirect0_15, &canonical__Redirect1_20);
    }
#line 4727 "canonical.c"
    canonical__TypeCtorInfo_86_86 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
#line 429 "canonical.m"
    canonical__V_47_47 = (MR_Word) &canonical_scalar_common_2[7];
#line 4731 "canonical.c"
    canonical__TypeCtorInfo_90_90 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
#line 4733 "canonical.c"
    canonical__TypeInfo_91_91 = (MR_Word) &canonical_scalar_common_1[5];
#line 412 "canonical.m"
    {
#line 412 "canonical.m"
      canonical__succeeded = canonical__callee_in_clique_3_p_0(canonical__InitDeep0_13, canonical__Clique_10, canonical__PrimeCSDPtr_11);
    }
#line 4740 "canonical.c"
    if (canonical__succeeded)
#line 4742 "canonical.c"
      {
#line 4744 "canonical.c"
        MR_ArrayPtr canonical__CallSiteDynamics0_21;
#line 4746 "canonical.c"
        MR_Word canonical__PrimeCSD0_22;
#line 4748 "canonical.c"
        MR_Word canonical__RestCSDs_23;
#line 4750 "canonical.c"
        MR_Word canonical__PrimeOwn0_24;
#line 4752 "canonical.c"
        MR_Word canonical__PrimeOwn1_25;
#line 4754 "canonical.c"
        MR_Word canonical__PrimeCSD1_26;
#line 4756 "canonical.c"
        MR_ArrayPtr canonical__CallSiteDynamics1_27;
#line 4758 "canonical.c"
        MR_Word canonical__V_36_36;
#line 4760 "canonical.c"
        MR_Word canonical__V_46_46;
#line 4762 "canonical.c"
        MR_ArrayPtr canonical__V_48_48;
#line 4764 "canonical.c"
        MR_Word canonical__V_50_50;
#line 4766 "canonical.c"
        MR_Word canonical__V_51_51;
#line 4768 "canonical.c"
        MR_ArrayPtr canonical__V_52_52;
#line 4770 "canonical.c"
        MR_ArrayPtr canonical__V_53_53;
#line 4772 "canonical.c"
        MR_ArrayPtr canonical__V_54_54;
#line 4774 "canonical.c"
        MR_Word canonical__V_55_55;
#line 4776 "canonical.c"
        MR_Word canonical__V_56_56;
#line 429 "canonical.m"
        MR_Box canonical__conv2_PrimeOwn1_25;
#line 431 "canonical.m"
        MR_Box canonical__conv3_V_48_48;

#line 413 "canonical.m"
        {
#line 413 "canonical.m"
          canonical__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 413 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_36_36, 0) = ((MR_Box) (&canonical_scalar_common_7[4]));
#line 413 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_36_36, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_2_8_p_0_3));
#line 413 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 413 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_36_36, 3) = ((MR_Box) (canonical__NotInClique_18));
#line 413 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_36_36, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 413 "canonical.m"
        }
#line 413 "canonical.m"
        {
#line 413 "canonical.m"
          mercury__require__require_2_p_0(canonical__V_36_36, (MR_String) "merge_proc_dynamic_normal_slot: prime in clique, others not in clique");
        }
#line 424 "canonical.m"
        canonical__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 0)));
#line 424 "canonical.m"
        canonical__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 1)));
#line 424 "canonical.m"
        canonical__CallSiteDynamics0_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 2)));
#line 424 "canonical.m"
        canonical__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 3)));
#line 424 "canonical.m"
        canonical__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 4)));
#line 424 "canonical.m"
        canonical__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 5)));
#line 425 "canonical.m"
        {
#line 425 "canonical.m"
          profile__lookup_call_site_dynamics_3_p_0(canonical__CallSiteDynamics0_21, canonical__PrimeCSDPtr_11, &canonical__PrimeCSD0_22);
        }
#line 426 "canonical.m"
        {
#line 426 "canonical.m"
          canonical__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 426 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_46_46, 0) = ((MR_Box) (&canonical_scalar_common_3[7]));
#line 426 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_46_46, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_2_8_p_0_4));
#line 426 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 426 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_46_46, 3) = ((MR_Box) (canonical__CallSiteDynamics0_21));
#line 426 "canonical.m"
        }
#line 426 "canonical.m"
        {
#line 426 "canonical.m"
          mercury__list__map_3_p_0(canonical__TypeCtorInfo_81_81, canonical__TypeCtorInfo_86_86, canonical__V_46_46, canonical__RestCSDPtrs_12, &canonical__RestCSDs_23);
        }
#line 428 "canonical.m"
        canonical__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimeCSD0_22, (MR_Integer) 0)));
#line 428 "canonical.m"
        canonical__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimeCSD0_22, (MR_Integer) 1)));
#line 428 "canonical.m"
        canonical__PrimeOwn0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimeCSD0_22, (MR_Integer) 2)));
#line 429 "canonical.m"
        {
#line 429 "canonical.m"
          mercury__list__foldl_4_p_0(canonical__TypeCtorInfo_86_86, canonical__TypeCtorInfo_90_90, canonical__V_47_47, canonical__RestCSDs_23, ((MR_Box) (canonical__PrimeOwn0_24)), &canonical__conv2_PrimeOwn1_25);
        }
#line 429 "canonical.m"
        canonical__PrimeOwn1_25 = ((MR_Word) canonical__conv2_PrimeOwn1_25);
#line 430 "canonical.m"
        {
#line 430 "canonical.m"
          canonical__PrimeCSD1_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 430 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__PrimeCSD1_26, 0) = ((MR_Box) (canonical__V_55_55));
#line 430 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__PrimeCSD1_26, 1) = ((MR_Box) (canonical__V_56_56));
#line 430 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__PrimeCSD1_26, 2) = ((MR_Box) (canonical__PrimeOwn1_25));
#line 430 "canonical.m"
        }
#line 431 "canonical.m"
        {
#line 431 "canonical.m"
          canonical__conv3_V_48_48 = array_util__u_1_f_0(canonical__TypeInfo_91_91, ((MR_Box) (canonical__CallSiteDynamics0_21)));
        }
#line 431 "canonical.m"
        canonical__V_48_48 = ((MR_ArrayPtr) canonical__conv3_V_48_48);
#line 431 "canonical.m"
        {
#line 431 "canonical.m"
          profile__update_call_site_dynamics_4_p_0(canonical__PrimeCSDPtr_11, canonical__PrimeCSD1_26, canonical__V_48_48, &canonical__CallSiteDynamics1_27);
        }
#line 433 "canonical.m"
        {
#line 433 "canonical.m"
          MR_Word base;
#line 433 "canonical.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 433 "canonical.m"
          *canonical__InitDeep_14 = base;
#line 433 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (canonical__V_50_50));
#line 433 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (canonical__V_51_51));
#line 433 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (canonical__CallSiteDynamics1_27));
#line 433 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (canonical__V_52_52));
#line 433 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (canonical__V_53_53));
#line 433 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (canonical__V_54_54));
#line 433 "canonical.m"
        }
#line 437 "canonical.m"
        *canonical__Redirect_16 = canonical__Redirect1_20;
#line 4901 "canonical.c"
      }
#line 4903 "canonical.c"
    else
#line 4905 "canonical.c"
      {
#line 4907 "canonical.c"
        MR_Word canonical__ChosenPDPtr_29;
#line 4909 "canonical.c"
        MR_Word canonical__InitDeep2_30;
#line 4911 "canonical.c"
        MR_ArrayPtr canonical__CallSiteDynamics2_31;
#line 4913 "canonical.c"
        MR_Word canonical__PrimeCSD2_32;
#line 4915 "canonical.c"
        MR_Word canonical__PrimeCSD_33;
#line 4917 "canonical.c"
        MR_ArrayPtr canonical__CallSiteDynamics_34;
#line 4919 "canonical.c"
        MR_Word canonical__V_41_41;
#line 4921 "canonical.c"
        MR_ArrayPtr canonical__V_49_49;
#line 4923 "canonical.c"
        MR_Word canonical__V_66_66;
#line 4925 "canonical.c"
        MR_Word canonical__V_67_67;
#line 4927 "canonical.c"
        MR_ArrayPtr canonical__V_68_68;
#line 4929 "canonical.c"
        MR_ArrayPtr canonical__V_69_69;
#line 4931 "canonical.c"
        MR_ArrayPtr canonical__V_70_70;
#line 4933 "canonical.c"
        MR_ArrayPtr canonical__CallSiteDynamics0_114;
#line 4935 "canonical.c"
        MR_Word canonical__PrimeCSD0_115;
#line 4937 "canonical.c"
        MR_Word canonical__RestCSDs_116;
#line 4939 "canonical.c"
        MR_Word canonical__PrimeOwn0_117;
#line 4941 "canonical.c"
        MR_Word canonical__PrimeOwn1_118;
#line 4943 "canonical.c"
        MR_Word canonical__PrimeCSD1_119;
#line 4945 "canonical.c"
        MR_ArrayPtr canonical__CallSiteDynamics1_120;
#line 4947 "canonical.c"
        MR_Word canonical__InitDeep1_121;
#line 4949 "canonical.c"
        MR_Word canonical__V_122_122;
#line 4951 "canonical.c"
        MR_ArrayPtr canonical__V_123_123;
#line 4953 "canonical.c"
        MR_Word canonical__V_124_124;
#line 4955 "canonical.c"
        MR_Word canonical__V_125_125;
#line 4957 "canonical.c"
        MR_ArrayPtr canonical__V_126_126;
#line 4959 "canonical.c"
        MR_ArrayPtr canonical__V_127_127;
#line 4961 "canonical.c"
        MR_ArrayPtr canonical__V_128_128;
#line 4963 "canonical.c"
        MR_Word canonical__V_129_129;
#line 4965 "canonical.c"
        MR_Word canonical__V_130_130;
#line 429 "canonical.m"
        MR_Box canonical__conv5_PrimeOwn1_118;
#line 431 "canonical.m"
        MR_Box canonical__conv6_V_123_123;
#line 447 "canonical.m"
        MR_Word canonical__V_71_71;
#line 447 "canonical.m"
        MR_Word canonical__V_73_73;
#line 447 "canonical.m"
        MR_Word canonical__V_72_72;
#line 448 "canonical.m"
        MR_Box canonical__conv7_V_49_49;

#line 418 "canonical.m"
        {
#line 418 "canonical.m"
          canonical__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 418 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_41_41, 0) = ((MR_Box) (&canonical_scalar_common_7[4]));
#line 418 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_41_41, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_2_8_p_0_5));
#line 418 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 418 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_41_41, 3) = ((MR_Box) (canonical__InClique_17));
#line 418 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_41_41, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "canonical.m"
        }
#line 418 "canonical.m"
        {
#line 418 "canonical.m"
          mercury__require__require_2_p_0(canonical__V_41_41, (MR_String) "merge_proc_dynamic_normal_slot: prime not in clique, others in clique");
        }
#line 424 "canonical.m"
        canonical__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 0)));
#line 424 "canonical.m"
        canonical__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 1)));
#line 424 "canonical.m"
        canonical__CallSiteDynamics0_114 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 2)));
#line 424 "canonical.m"
        canonical__V_126_126 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 3)));
#line 424 "canonical.m"
        canonical__V_127_127 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 4)));
#line 424 "canonical.m"
        canonical__V_128_128 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep0_13, (MR_Integer) 5)));
#line 425 "canonical.m"
        {
#line 425 "canonical.m"
          profile__lookup_call_site_dynamics_3_p_0(canonical__CallSiteDynamics0_114, canonical__PrimeCSDPtr_11, &canonical__PrimeCSD0_115);
        }
#line 426 "canonical.m"
        {
#line 426 "canonical.m"
          canonical__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 426 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_122_122, 0) = ((MR_Box) (&canonical_scalar_common_3[7]));
#line 426 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_122_122, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_2_8_p_0_6));
#line 426 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_122_122, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 426 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_122_122, 3) = ((MR_Box) (canonical__CallSiteDynamics0_114));
#line 426 "canonical.m"
        }
#line 426 "canonical.m"
        {
#line 426 "canonical.m"
          mercury__list__map_3_p_0(canonical__TypeCtorInfo_81_81, canonical__TypeCtorInfo_86_86, canonical__V_122_122, canonical__RestCSDPtrs_12, &canonical__RestCSDs_116);
        }
#line 428 "canonical.m"
        canonical__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimeCSD0_115, (MR_Integer) 0)));
#line 428 "canonical.m"
        canonical__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimeCSD0_115, (MR_Integer) 1)));
#line 428 "canonical.m"
        canonical__PrimeOwn0_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimeCSD0_115, (MR_Integer) 2)));
#line 429 "canonical.m"
        {
#line 429 "canonical.m"
          mercury__list__foldl_4_p_0(canonical__TypeCtorInfo_86_86, canonical__TypeCtorInfo_90_90, canonical__V_47_47, canonical__RestCSDs_116, ((MR_Box) (canonical__PrimeOwn0_117)), &canonical__conv5_PrimeOwn1_118);
        }
#line 429 "canonical.m"
        canonical__PrimeOwn1_118 = ((MR_Word) canonical__conv5_PrimeOwn1_118);
#line 430 "canonical.m"
        {
#line 430 "canonical.m"
          canonical__PrimeCSD1_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 430 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__PrimeCSD1_119, 0) = ((MR_Box) (canonical__V_129_129));
#line 430 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__PrimeCSD1_119, 1) = ((MR_Box) (canonical__V_130_130));
#line 430 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__PrimeCSD1_119, 2) = ((MR_Box) (canonical__PrimeOwn1_118));
#line 430 "canonical.m"
        }
#line 431 "canonical.m"
        {
#line 431 "canonical.m"
          canonical__conv6_V_123_123 = array_util__u_1_f_0(canonical__TypeInfo_91_91, ((MR_Box) (canonical__CallSiteDynamics0_114)));
        }
#line 431 "canonical.m"
        canonical__V_123_123 = ((MR_ArrayPtr) canonical__conv6_V_123_123);
#line 431 "canonical.m"
        {
#line 431 "canonical.m"
          profile__update_call_site_dynamics_4_p_0(canonical__PrimeCSDPtr_11, canonical__PrimeCSD1_119, canonical__V_123_123, &canonical__CallSiteDynamics1_120);
        }
#line 433 "canonical.m"
        {
#line 433 "canonical.m"
          canonical__InitDeep1_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 433 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__InitDeep1_121, 0) = ((MR_Box) (canonical__V_124_124));
#line 433 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__InitDeep1_121, 1) = ((MR_Box) (canonical__V_125_125));
#line 433 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__InitDeep1_121, 2) = ((MR_Box) (canonical__CallSiteDynamics1_120));
#line 433 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__InitDeep1_121, 3) = ((MR_Box) (canonical__V_126_126));
#line 433 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__InitDeep1_121, 4) = ((MR_Box) (canonical__V_127_127));
#line 433 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__InitDeep1_121, 5) = ((MR_Box) (canonical__V_128_128));
#line 433 "canonical.m"
        }
#line 440 "canonical.m"
        {
#line 440 "canonical.m"
          canonical__merge_call_site_dynamics_descendants_8_p_0(canonical__MergeInfo_9, canonical__PrimeCSDPtr_11, canonical__RestCSDPtrs_12, &canonical__ChosenPDPtr_29, canonical__InitDeep1_121, &canonical__InitDeep2_30, canonical__Redirect1_20, canonical__Redirect_16);
        }
#line 445 "canonical.m"
        canonical__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep2_30, (MR_Integer) 0)));
#line 445 "canonical.m"
        canonical__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep2_30, (MR_Integer) 1)));
#line 445 "canonical.m"
        canonical__CallSiteDynamics2_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep2_30, (MR_Integer) 2)));
#line 445 "canonical.m"
        canonical__V_68_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep2_30, (MR_Integer) 3)));
#line 445 "canonical.m"
        canonical__V_69_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep2_30, (MR_Integer) 4)));
#line 445 "canonical.m"
        canonical__V_70_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep2_30, (MR_Integer) 5)));
#line 446 "canonical.m"
        {
#line 446 "canonical.m"
          profile__lookup_call_site_dynamics_3_p_0(canonical__CallSiteDynamics2_31, canonical__PrimeCSDPtr_11, &canonical__PrimeCSD2_32);
        }
#line 447 "canonical.m"
        canonical__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimeCSD2_32, (MR_Integer) 0)));
#line 447 "canonical.m"
        canonical__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimeCSD2_32, (MR_Integer) 1)));
#line 447 "canonical.m"
        canonical__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimeCSD2_32, (MR_Integer) 2)));
#line 447 "canonical.m"
        {
#line 447 "canonical.m"
          canonical__PrimeCSD_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 447 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__PrimeCSD_33, 0) = ((MR_Box) (canonical__V_71_71));
#line 447 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__PrimeCSD_33, 1) = ((MR_Box) (canonical__ChosenPDPtr_29));
#line 447 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__PrimeCSD_33, 2) = ((MR_Box) (canonical__V_73_73));
#line 447 "canonical.m"
        }
#line 448 "canonical.m"
        {
#line 448 "canonical.m"
          canonical__conv7_V_49_49 = array_util__u_1_f_0(canonical__TypeInfo_91_91, ((MR_Box) (canonical__CallSiteDynamics2_31)));
        }
#line 448 "canonical.m"
        canonical__V_49_49 = ((MR_ArrayPtr) canonical__conv7_V_49_49);
#line 448 "canonical.m"
        {
#line 448 "canonical.m"
          profile__update_call_site_dynamics_4_p_0(canonical__PrimeCSDPtr_11, canonical__PrimeCSD_33, canonical__V_49_49, &canonical__CallSiteDynamics_34);
        }
#line 450 "canonical.m"
        {
#line 450 "canonical.m"
          MR_Word base;
#line 450 "canonical.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 450 "canonical.m"
          *canonical__InitDeep_14 = base;
#line 450 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (canonical__V_66_66));
#line 450 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (canonical__V_67_67));
#line 450 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (canonical__CallSiteDynamics_34));
#line 450 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (canonical__V_68_68));
#line 450 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (canonical__V_69_69));
#line 450 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (canonical__V_70_70));
#line 450 "canonical.m"
        }
#line 5166 "canonical.c"
      }
#line 403 "canonical.m"
  }
#line 397 "canonical.m"
}

#line 374 "canonical.m"
static MR_bool MR_CALL 
canonical__merge_call_site_dynamics_9_p_0_1(
#line 374 "canonical.m"
  MR_Box canonical__closure_arg,
#line 374 "canonical.m"
  MR_Box canonical__wrapper_arg_1)
#line 374 "canonical.m"
{
#line 374 "canonical.m"
  {
#line 374 "canonical.m"
    MR_bool canonical__succeeded;
#line 374 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;

#line 374 "canonical.m"
    {
#line 374 "canonical.m"
      return canonical__succeeded = profile__valid_call_site_dynamic_ptr_raw_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1));
    }
#line 374 "canonical.m"
    return canonical__succeeded;
#line 374 "canonical.m"
  }
#line 374 "canonical.m"
}

#line 366 "canonical.m"
static void MR_CALL 
canonical__merge_call_site_dynamics_9_p_0(
#line 366 "canonical.m"
  MR_Word canonical__MergeInfo_10,
#line 366 "canonical.m"
  MR_Word canonical__Clique_11,
#line 366 "canonical.m"
  MR_Word canonical__ParentPDPtr_12,
#line 366 "canonical.m"
  MR_Word canonical__CandidateCSDPtrs_13,
#line 366 "canonical.m"
  MR_Word * canonical__ChosenCSDPtr_14,
#line 366 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_26,
#line 366 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_InitDeep_27,
#line 366 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_28,
#line 366 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_29)
#line 366 "canonical.m"
{
#line 372 "canonical.m"
  {
#line 372 "canonical.m"
    MR_bool canonical__succeeded;
#line 372 "canonical.m"
    MR_ArrayPtr canonical__CallSiteDynamics0_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_26, (MR_Integer) 2)));
#line 372 "canonical.m"
    MR_Word canonical__ValidCSDPtrs_18;
#line 372 "canonical.m"
    MR_Word canonical__V_30_30;
#line 373 "canonical.m"
    MR_Word canonical__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_26, (MR_Integer) 0)));
#line 373 "canonical.m"
    MR_Word canonical__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_26, (MR_Integer) 1)));
#line 373 "canonical.m"
    MR_ArrayPtr canonical__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_26, (MR_Integer) 3)));
#line 373 "canonical.m"
    MR_ArrayPtr canonical__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_26, (MR_Integer) 4)));
#line 373 "canonical.m"
    MR_ArrayPtr canonical__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_26, (MR_Integer) 5)));

#line 374 "canonical.m"
    {
#line 374 "canonical.m"
      canonical__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 374 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_30_30, 0) = ((MR_Box) (&canonical_scalar_common_7[0]));
#line 374 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_30_30, 1) = ((MR_Box) (canonical__merge_call_site_dynamics_9_p_0_1));
#line 374 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 374 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_30_30, 3) = ((MR_Box) (canonical__CallSiteDynamics0_17));
#line 374 "canonical.m"
    }
#line 374 "canonical.m"
    {
#line 374 "canonical.m"
      mercury__list__filter_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, canonical__V_30_30, canonical__CandidateCSDPtrs_13, &canonical__ValidCSDPtrs_18);
    }
#line 380 "canonical.m"
    if ((canonical__ValidCSDPtrs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "canonical.m"
      {
#line 379 "canonical.m"
        *canonical__ChosenCSDPtr_14 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 379 "canonical.m"
        *canonical__STATE_VARIABLE_InitDeep_27 = canonical__STATE_VARIABLE_InitDeep_0_26;
#line 379 "canonical.m"
        *canonical__STATE_VARIABLE_Redirect_29 = canonical__STATE_VARIABLE_Redirect_0_28;
#line 377 "canonical.m"
      }
#line 380 "canonical.m"
    else
#line 381 "canonical.m"
      {
#line 381 "canonical.m"
        MR_Word canonical__LaterCSDPtrs_20;
#line 381 "canonical.m"
        MR_Word canonical__FirstCSD0_21;
#line 381 "canonical.m"
        MR_Word canonical__FirstCSD_22;
#line 381 "canonical.m"
        MR_ArrayPtr canonical__CallSiteDynamics_23;
#line 381 "canonical.m"
        MR_ArrayPtr canonical__V_31_31;
#line 381 "canonical.m"
        MR_Word canonical__STATE_VARIABLE_InitDeep_32_32;
#line 383 "canonical.m"
        MR_Word canonical__V_42_42;
#line 383 "canonical.m"
        MR_Word canonical__V_43_43;
#line 383 "canonical.m"
        MR_Word canonical__V_41_41;
#line 384 "canonical.m"
        MR_Box canonical__conv0_V_31_31;
#line 386 "canonical.m"
        MR_Word canonical__V_44_44;
#line 386 "canonical.m"
        MR_Word canonical__V_45_45;
#line 386 "canonical.m"
        MR_ArrayPtr canonical__V_47_47;
#line 386 "canonical.m"
        MR_ArrayPtr canonical__V_48_48;
#line 386 "canonical.m"
        MR_ArrayPtr canonical__V_49_49;
#line 386 "canonical.m"
        MR_ArrayPtr canonical__V_46_46;

#line 381 "canonical.m"
        *canonical__ChosenCSDPtr_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__ValidCSDPtrs_18, (MR_Integer) 0)));
#line 381 "canonical.m"
        canonical__LaterCSDPtrs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__ValidCSDPtrs_18, (MR_Integer) 1)));
#line 382 "canonical.m"
        {
#line 382 "canonical.m"
          profile__lookup_call_site_dynamics_3_p_0(canonical__CallSiteDynamics0_17, *canonical__ChosenCSDPtr_14, &canonical__FirstCSD0_21);
        }
#line 383 "canonical.m"
        canonical__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__FirstCSD0_21, (MR_Integer) 0)));
#line 383 "canonical.m"
        canonical__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__FirstCSD0_21, (MR_Integer) 1)));
#line 383 "canonical.m"
        canonical__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__FirstCSD0_21, (MR_Integer) 2)));
#line 383 "canonical.m"
        {
#line 383 "canonical.m"
          canonical__FirstCSD_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 383 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__FirstCSD_22, 0) = ((MR_Box) (canonical__ParentPDPtr_12));
#line 383 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__FirstCSD_22, 1) = ((MR_Box) (canonical__V_42_42));
#line 383 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__FirstCSD_22, 2) = ((MR_Box) (canonical__V_43_43));
#line 383 "canonical.m"
        }
#line 384 "canonical.m"
        {
#line 384 "canonical.m"
          canonical__conv0_V_31_31 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[5], ((MR_Box) (canonical__CallSiteDynamics0_17)));
        }
#line 384 "canonical.m"
        canonical__V_31_31 = ((MR_ArrayPtr) canonical__conv0_V_31_31);
#line 384 "canonical.m"
        {
#line 384 "canonical.m"
          profile__update_call_site_dynamics_4_p_0(*canonical__ChosenCSDPtr_14, canonical__FirstCSD_22, canonical__V_31_31, &canonical__CallSiteDynamics_23);
        }
#line 386 "canonical.m"
        canonical__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_26, (MR_Integer) 0)));
#line 386 "canonical.m"
        canonical__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_26, (MR_Integer) 1)));
#line 386 "canonical.m"
        canonical__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_26, (MR_Integer) 2)));
#line 386 "canonical.m"
        canonical__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_26, (MR_Integer) 3)));
#line 386 "canonical.m"
        canonical__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_26, (MR_Integer) 4)));
#line 386 "canonical.m"
        canonical__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_26, (MR_Integer) 5)));
#line 386 "canonical.m"
        {
#line 386 "canonical.m"
          canonical__STATE_VARIABLE_InitDeep_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 386 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_32_32, 0) = ((MR_Box) (canonical__V_44_44));
#line 386 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_32_32, 1) = ((MR_Box) (canonical__V_45_45));
#line 386 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_32_32, 2) = ((MR_Box) (canonical__CallSiteDynamics_23));
#line 386 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_32_32, 3) = ((MR_Box) (canonical__V_47_47));
#line 386 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_32_32, 4) = ((MR_Box) (canonical__V_48_48));
#line 386 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_32_32, 5) = ((MR_Box) (canonical__V_49_49));
#line 386 "canonical.m"
        }
#line 389 "canonical.m"
        if ((canonical__LaterCSDPtrs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 388 "canonical.m"
          {
#line 388 "canonical.m"
            *canonical__STATE_VARIABLE_InitDeep_27 = canonical__STATE_VARIABLE_InitDeep_32_32;
#line 388 "canonical.m"
            *canonical__STATE_VARIABLE_Redirect_29 = canonical__STATE_VARIABLE_Redirect_0_28;
#line 388 "canonical.m"
          }
#line 389 "canonical.m"
        else
#line 391 "canonical.m"
          {
#line 391 "canonical.m"
            canonical__merge_call_site_dynamics_2_8_p_0(canonical__MergeInfo_10, canonical__Clique_11, *canonical__ChosenCSDPtr_14, canonical__LaterCSDPtrs_20, canonical__STATE_VARIABLE_InitDeep_32_32, canonical__STATE_VARIABLE_InitDeep_27, canonical__STATE_VARIABLE_Redirect_0_28, canonical__STATE_VARIABLE_Redirect_29);
#line 391 "canonical.m"
            return;
          }
#line 381 "canonical.m"
      }
#line 372 "canonical.m"
  }
#line 366 "canonical.m"
}

#line 352 "canonical.m"
static void MR_CALL 
canonical__merge_multi_slot_cluster_10_p_0(
#line 352 "canonical.m"
  MR_Word canonical__MergeInfo_11,
#line 352 "canonical.m"
  MR_Word canonical__ParentPDPtr_12,
#line 352 "canonical.m"
  MR_Word canonical__Clique_13,
#line 352 "canonical.m"
  MR_Word canonical__ClusterCSDPtrs_14,
#line 352 "canonical.m"
  MR_Word canonical__PrimeCSDPtrs0_15,
#line 352 "canonical.m"
  MR_Word * canonical__PrimeCSDPtrs_16,
#line 352 "canonical.m"
  MR_Word canonical__InitDeep0_17,
#line 352 "canonical.m"
  MR_Word * canonical__InitDeep_18,
#line 352 "canonical.m"
  MR_Word canonical__Redirect0_19,
#line 352 "canonical.m"
  MR_Word * canonical__Redirect_20)
#line 352 "canonical.m"
{
#line 360 "canonical.m"
  {
#line 360 "canonical.m"
    MR_bool canonical__succeeded;
#line 360 "canonical.m"
    MR_Word canonical__PrimeCSDPtr_21;

#line 361 "canonical.m"
    {
#line 361 "canonical.m"
      canonical__merge_call_site_dynamics_9_p_0(canonical__MergeInfo_11, canonical__Clique_13, canonical__ParentPDPtr_12, canonical__ClusterCSDPtrs_14, &canonical__PrimeCSDPtr_21, canonical__InitDeep0_17, canonical__InitDeep_18, canonical__Redirect0_19, canonical__Redirect_20);
    }
#line 364 "canonical.m"
    {
#line 364 "canonical.m"
      MR_Word base;
#line 364 "canonical.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "canonical.m"
      *canonical__PrimeCSDPtrs_16 = base;
#line 364 "canonical.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (canonical__PrimeCSDPtr_21));
#line 364 "canonical.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (canonical__PrimeCSDPtrs0_15));
#line 364 "canonical.m"
    }
#line 360 "canonical.m"
  }
#line 352 "canonical.m"
}

#line 349 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamic_multi_slot_11_p_0_2(
#line 349 "canonical.m"
  MR_Box canonical__closure_arg,
#line 349 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 349 "canonical.m"
  MR_Box canonical__wrapper_arg_2,
#line 349 "canonical.m"
  MR_Box * canonical__wrapper_arg_3,
#line 349 "canonical.m"
  MR_Box canonical__wrapper_arg_4,
#line 349 "canonical.m"
  MR_Box * canonical__wrapper_arg_5,
#line 349 "canonical.m"
  MR_Box canonical__wrapper_arg_6,
#line 349 "canonical.m"
  MR_Box * canonical__wrapper_arg_7)
#line 349 "canonical.m"
{
#line 349 "canonical.m"
  {
#line 349 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 349 "canonical.m"
    MR_Word canonical__conv4_PrimeCSDPtrs_16;
#line 349 "canonical.m"
    MR_Word canonical__conv3_InitDeep_18;
#line 349 "canonical.m"
    MR_Word canonical__conv2_Redirect_20;

#line 349 "canonical.m"
    {
#line 349 "canonical.m"
      canonical__merge_multi_slot_cluster_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 5))), ((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2), &canonical__conv4_PrimeCSDPtrs_16, ((MR_Word) canonical__wrapper_arg_4), &canonical__conv3_InitDeep_18, ((MR_Word) canonical__wrapper_arg_6), &canonical__conv2_Redirect_20);
    }
#line 349 "canonical.m"
    *canonical__wrapper_arg_3 = ((MR_Box) (canonical__conv4_PrimeCSDPtrs_16));
#line 349 "canonical.m"
    *canonical__wrapper_arg_5 = ((MR_Box) (canonical__conv3_InitDeep_18));
#line 349 "canonical.m"
    *canonical__wrapper_arg_7 = ((MR_Box) (canonical__conv2_Redirect_20));
#line 349 "canonical.m"
  }
#line 349 "canonical.m"
}

#line 346 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamic_multi_slot_11_p_0_1(
#line 346 "canonical.m"
  MR_Box canonical__closure_arg,
#line 346 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 346 "canonical.m"
  MR_Box canonical__wrapper_arg_2,
#line 346 "canonical.m"
  MR_Box * canonical__wrapper_arg_3)
#line 346 "canonical.m"
{
#line 346 "canonical.m"
  {
#line 346 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 346 "canonical.m"
    MR_Word canonical__conv0_STATE_VARIABLE_ProcMap_16;

#line 346 "canonical.m"
    {
#line 346 "canonical.m"
      canonical__cluster_csds_by_ps_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2), &canonical__conv0_STATE_VARIABLE_ProcMap_16);
    }
#line 346 "canonical.m"
    *canonical__wrapper_arg_3 = ((MR_Box) (canonical__conv0_STATE_VARIABLE_ProcMap_16));
#line 346 "canonical.m"
  }
#line 346 "canonical.m"
}

#line 334 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamic_multi_slot_11_p_0(
#line 334 "canonical.m"
  MR_Word canonical__MergeInfo_12,
#line 334 "canonical.m"
  MR_Integer canonical__SlotNum_13,
#line 334 "canonical.m"
  MR_Word canonical__Clique_14,
#line 334 "canonical.m"
  MR_Word canonical__ParentPDPtr_15,
#line 334 "canonical.m"
  MR_Word canonical__PrimeCSDPtrs0_16,
#line 334 "canonical.m"
  MR_Word canonical__RestSiteArrays_17,
#line 334 "canonical.m"
  MR_Word * canonical__PrimeCSDPtrs_18,
#line 334 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_26,
#line 334 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_InitDeep_27,
#line 334 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_28,
#line 334 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_29)
#line 334 "canonical.m"
{
#line 342 "canonical.m"
  {
#line 342 "canonical.m"
    MR_bool canonical__succeeded;
#line 342 "canonical.m"
    MR_Word canonical__TypeCtorInfo_36_36;
#line 342 "canonical.m"
    MR_Word canonical__TypeCtorInfo_37_37;
#line 342 "canonical.m"
    MR_Word canonical__TypeInfo_38_38;
#line 342 "canonical.m"
    MR_Word canonical__RestCSDPtrLists_21;
#line 342 "canonical.m"
    MR_Word canonical__AllCSDPtrs_22;
#line 342 "canonical.m"
    MR_Word canonical__ProcMap0_23;
#line 342 "canonical.m"
    MR_Word canonical__ProcMap_24;
#line 342 "canonical.m"
    MR_Word canonical__CSDPtrsClusters_25;
#line 342 "canonical.m"
    MR_Word canonical__V_30_30;
#line 342 "canonical.m"
    MR_Word canonical__V_31_31;
#line 342 "canonical.m"
    MR_Word canonical__V_32_32;
#line 346 "canonical.m"
    MR_Box canonical__conv1_ProcMap_24;
#line 349 "canonical.m"
    MR_Box canonical__conv7_PrimeCSDPtrs_18;
#line 349 "canonical.m"
    MR_Box canonical__conv6_STATE_VARIABLE_InitDeep_27;
#line 349 "canonical.m"
    MR_Box canonical__conv5_STATE_VARIABLE_Redirect_29;

#line 343 "canonical.m"
    {
#line 343 "canonical.m"
      canonical__lookup_multi_sites_3_p_0(canonical__RestSiteArrays_17, canonical__SlotNum_13, &canonical__RestCSDPtrLists_21);
    }
#line 344 "canonical.m"
    {
#line 344 "canonical.m"
      canonical__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "canonical.m"
      MR_hl_field(MR_mktag(1), canonical__V_30_30, 0) = ((MR_Box) (canonical__PrimeCSDPtrs0_16));
#line 344 "canonical.m"
      MR_hl_field(MR_mktag(1), canonical__V_30_30, 1) = ((MR_Box) (canonical__RestCSDPtrLists_21));
#line 344 "canonical.m"
    }
#line 5621 "canonical.c"
    canonical__TypeCtorInfo_36_36 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 344 "canonical.m"
    {
#line 344 "canonical.m"
      mercury__list__condense_2_p_0(canonical__TypeCtorInfo_36_36, canonical__V_30_30, &canonical__AllCSDPtrs_22);
    }
#line 5628 "canonical.c"
    canonical__TypeCtorInfo_37_37 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
#line 5630 "canonical.c"
    canonical__TypeInfo_38_38 = (MR_Word) &canonical_scalar_common_1[4];
#line 345 "canonical.m"
    {
#line 345 "canonical.m"
      mercury__map__init_1_p_0(canonical__TypeCtorInfo_37_37, canonical__TypeInfo_38_38, &canonical__ProcMap0_23);
    }
#line 346 "canonical.m"
    {
#line 346 "canonical.m"
      canonical__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 346 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_31_31, 0) = ((MR_Box) (&canonical_scalar_common_4[1]));
#line 346 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_31_31, 1) = ((MR_Box) (canonical__merge_proc_dynamic_multi_slot_11_p_0_1));
#line 346 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 346 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_31_31, 3) = ((MR_Box) (canonical__STATE_VARIABLE_InitDeep_0_26));
#line 346 "canonical.m"
    }
#line 346 "canonical.m"
    {
#line 346 "canonical.m"
      mercury__list__foldl_4_p_0(canonical__TypeCtorInfo_36_36, (MR_Word) &canonical_scalar_common_2[2], canonical__V_31_31, canonical__AllCSDPtrs_22, ((MR_Box) (canonical__ProcMap0_23)), &canonical__conv1_ProcMap_24);
    }
#line 346 "canonical.m"
    canonical__ProcMap_24 = ((MR_Word) canonical__conv1_ProcMap_24);
#line 348 "canonical.m"
    {
#line 348 "canonical.m"
      mercury__map__values_2_p_0(canonical__TypeCtorInfo_37_37, canonical__TypeInfo_38_38, canonical__ProcMap_24, &canonical__CSDPtrsClusters_25);
    }
#line 349 "canonical.m"
    {
#line 349 "canonical.m"
      canonical__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 349 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_32_32, 0) = ((MR_Box) (&canonical_scalar_common_8[0]));
#line 349 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_32_32, 1) = ((MR_Box) (canonical__merge_proc_dynamic_multi_slot_11_p_0_2));
#line 349 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 349 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_32_32, 3) = ((MR_Box) (canonical__MergeInfo_12));
#line 349 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_32_32, 4) = ((MR_Box) (canonical__ParentPDPtr_15));
#line 349 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_32_32, 5) = ((MR_Box) (canonical__Clique_14));
#line 349 "canonical.m"
    }
#line 349 "canonical.m"
    {
#line 349 "canonical.m"
      mercury__list__foldl3_8_p_0(canonical__TypeInfo_38_38, canonical__TypeInfo_38_38, (MR_Word) &profile__profile__type_ctor_info_initial_deep_0, (MR_Word) &canonical__canonical__type_ctor_info_redirect_0, canonical__V_32_32, canonical__CSDPtrsClusters_25, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &canonical__conv7_PrimeCSDPtrs_18, ((MR_Box) (canonical__STATE_VARIABLE_InitDeep_0_26)), &canonical__conv6_STATE_VARIABLE_InitDeep_27, ((MR_Box) (canonical__STATE_VARIABLE_Redirect_0_28)), &canonical__conv5_STATE_VARIABLE_Redirect_29);
    }
#line 349 "canonical.m"
    *canonical__PrimeCSDPtrs_18 = ((MR_Word) canonical__conv7_PrimeCSDPtrs_18);
#line 349 "canonical.m"
    *canonical__STATE_VARIABLE_InitDeep_27 = ((MR_Word) canonical__conv6_STATE_VARIABLE_InitDeep_27);
#line 349 "canonical.m"
    *canonical__STATE_VARIABLE_Redirect_29 = ((MR_Word) canonical__conv5_STATE_VARIABLE_Redirect_29);
#line 342 "canonical.m"
  }
#line 334 "canonical.m"
}

#line 325 "canonical.m"
static MR_bool MR_CALL 
canonical__callee_in_clique_3_p_0(
#line 325 "canonical.m"
  MR_Word canonical__InitDeep_4,
#line 325 "canonical.m"
  MR_Word canonical__Clique_5,
#line 325 "canonical.m"
  MR_Word canonical__CSDPtr_6)
#line 325 "canonical.m"
{
#line 328 "canonical.m"
  {
#line 328 "canonical.m"
    MR_bool canonical__succeeded;
#line 328 "canonical.m"
    MR_Word canonical__CSD_7;
#line 328 "canonical.m"
    MR_Word canonical__CalleePDPtr_8;
#line 328 "canonical.m"
    MR_ArrayPtr canonical__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 2)));
#line 329 "canonical.m"
    MR_Word canonical__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 0)));
#line 329 "canonical.m"
    MR_Word canonical__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 1)));
#line 329 "canonical.m"
    MR_ArrayPtr canonical__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 3)));
#line 329 "canonical.m"
    MR_ArrayPtr canonical__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 4)));
#line 329 "canonical.m"
    MR_ArrayPtr canonical__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 5)));
#line 331 "canonical.m"
    MR_Word canonical__V_15_15;
#line 331 "canonical.m"
    MR_Word canonical__V_16_16;

#line 329 "canonical.m"
    {
#line 329 "canonical.m"
      profile__lookup_call_site_dynamics_3_p_0(canonical__V_9_9, canonical__CSDPtr_6, &canonical__CSD_7);
    }
#line 331 "canonical.m"
    canonical__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSD_7, (MR_Integer) 0)));
#line 331 "canonical.m"
    canonical__CalleePDPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSD_7, (MR_Integer) 1)));
#line 331 "canonical.m"
    canonical__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSD_7, (MR_Integer) 2)));
#line 332 "canonical.m"
    {
#line 332 "canonical.m"
      return canonical__succeeded = mercury__set__member_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, ((MR_Box) (canonical__CalleePDPtr_8)), canonical__Clique_5);
    }
#line 328 "canonical.m"
    return canonical__succeeded;
#line 328 "canonical.m"
  }
#line 325 "canonical.m"
}

#line 319 "canonical.m"
static void MR_CALL 
canonical__accumulate_csd_owns_3_p_0(
#line 319 "canonical.m"
  MR_Word canonical__CSD_4,
#line 319 "canonical.m"
  MR_Word canonical__Own0_5,
#line 319 "canonical.m"
  MR_Word * canonical__Own_6)
#line 319 "canonical.m"
{
#line 322 "canonical.m"
  {
#line 322 "canonical.m"
    MR_bool canonical__succeeded;
#line 322 "canonical.m"
    MR_Word canonical__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSD_4, (MR_Integer) 2)));
#line 323 "canonical.m"
    MR_Word canonical__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSD_4, (MR_Integer) 0)));
#line 323 "canonical.m"
    MR_Word canonical__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSD_4, (MR_Integer) 1)));

#line 323 "canonical.m"
    {
#line 323 "canonical.m"
      *canonical__Own_6 = measurements__add_own_to_own_2_f_0(canonical__Own0_5, canonical__V_7_7);
    }
#line 322 "canonical.m"
  }
#line 319 "canonical.m"
}

#line 305 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamic_normal_slot_11_p_0(
#line 305 "canonical.m"
  MR_Word canonical__MergeInfo_12,
#line 305 "canonical.m"
  MR_Integer canonical__SlotNum_13,
#line 305 "canonical.m"
  MR_Word canonical__Clique_14,
#line 305 "canonical.m"
  MR_Word canonical__PrimePDPtr_15,
#line 305 "canonical.m"
  MR_Word canonical__PrimeCSDPtr0_16,
#line 305 "canonical.m"
  MR_Word canonical__RestSiteArrays_17,
#line 305 "canonical.m"
  MR_Word * canonical__PrimeCSDPtr_18,
#line 305 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_22,
#line 305 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_InitDeep_23,
#line 305 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_24,
#line 305 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_25)
#line 305 "canonical.m"
{
#line 313 "canonical.m"
  {
#line 313 "canonical.m"
    MR_bool canonical__succeeded;
#line 313 "canonical.m"
    MR_Word canonical__RestCSDPtrs_21;
#line 313 "canonical.m"
    MR_Word canonical__V_26_26;

#line 314 "canonical.m"
    {
#line 314 "canonical.m"
      canonical__lookup_normal_sites_3_p_0(canonical__RestSiteArrays_17, canonical__SlotNum_13, &canonical__RestCSDPtrs_21);
    }
#line 315 "canonical.m"
    {
#line 315 "canonical.m"
      canonical__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "canonical.m"
      MR_hl_field(MR_mktag(1), canonical__V_26_26, 0) = ((MR_Box) (canonical__PrimeCSDPtr0_16));
#line 315 "canonical.m"
      MR_hl_field(MR_mktag(1), canonical__V_26_26, 1) = ((MR_Box) (canonical__RestCSDPtrs_21));
#line 315 "canonical.m"
    }
#line 315 "canonical.m"
    {
#line 315 "canonical.m"
      canonical__merge_call_site_dynamics_9_p_0(canonical__MergeInfo_12, canonical__Clique_14, canonical__PrimePDPtr_15, canonical__V_26_26, canonical__PrimeCSDPtr_18, canonical__STATE_VARIABLE_InitDeep_0_22, canonical__STATE_VARIABLE_InitDeep_23, canonical__STATE_VARIABLE_Redirect_0_24, canonical__STATE_VARIABLE_Redirect_25);
#line 315 "canonical.m"
      return;
    }
#line 313 "canonical.m"
  }
#line 305 "canonical.m"
}

#line 266 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamic_slots_11_p_0(
#line 266 "canonical.m"
  MR_Word canonical__MergeInfo_12,
#line 266 "canonical.m"
  MR_Integer canonical__SlotNum_13,
#line 266 "canonical.m"
  MR_Word canonical__Clique_14,
#line 266 "canonical.m"
  MR_Word canonical__PrimePDPtr_15,
#line 266 "canonical.m"
  MR_ArrayPtr canonical__STATE_VARIABLE_PrimeSiteArray_0_28,
#line 266 "canonical.m"
  MR_Word canonical__RestSiteArrays_17,
#line 266 "canonical.m"
  MR_ArrayPtr * canonical__STATE_VARIABLE_PrimeSiteArray_29,
#line 266 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_30,
#line 266 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_InitDeep_31,
#line 266 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_32,
#line 266 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_33)
#line 266 "canonical.m"
{
#line 301 "canonical.m"
  while (MR_TRUE)
#line 301 "canonical.m"
    {
#line 301 "canonical.m"
      /* tailcall optimized into a loop */
#line 301 "canonical.m"
      {
#line 301 "canonical.m"
        MR_bool canonical__succeeded = (canonical__SlotNum_13 >= (MR_Integer) 0);

#line 301 "canonical.m"
        if (canonical__succeeded)
#line 278 "canonical.m"
          {
#line 278 "canonical.m"
            MR_Word canonical__TypeCtorInfo_48_48 = (MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0;
#line 278 "canonical.m"
            MR_Word canonical__PrimeSite0_20;
#line 278 "canonical.m"
            MR_Word canonical__STATE_VARIABLE_InitDeep_39_39;
#line 278 "canonical.m"
            MR_Word canonical__STATE_VARIABLE_Redirect_40_40;
#line 278 "canonical.m"
            MR_ArrayPtr canonical__STATE_VARIABLE_PrimeSiteArray_42_42;
#line 278 "canonical.m"
            MR_Integer canonical__V_43_43;
#line 278 "canonical.m"
            MR_Box canonical__conv0_PrimeSite0_20;

#line 278 "canonical.m"
            {
#line 278 "canonical.m"
              mercury__array__lookup_3_p_0(canonical__TypeCtorInfo_48_48, (MR_ArrayPtr) canonical__STATE_VARIABLE_PrimeSiteArray_0_28, canonical__SlotNum_13, &canonical__conv0_PrimeSite0_20);
            }
#line 278 "canonical.m"
            canonical__PrimeSite0_20 = ((MR_Word) canonical__conv0_PrimeSite0_20);
#line 286 "canonical.m"
            if (((MR_tag((MR_Word) canonical__PrimeSite0_20)) == (MR_mktag((MR_Integer) 1))))
#line 287 "canonical.m"
              {
#line 287 "canonical.m"
                MR_Word canonical__TypeCtorInfo_49_49 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 287 "canonical.m"
                MR_Word canonical__IsZeroed_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__PrimeSite0_20, (MR_Integer) 0)));
#line 287 "canonical.m"
                MR_ArrayPtr canonical__PrimeCSDPtrArray0_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), canonical__PrimeSite0_20, (MR_Integer) 1)));
#line 287 "canonical.m"
                MR_Word canonical__PrimeCSDPtrList0_25;
#line 287 "canonical.m"
                MR_Word canonical__PrimeCSDPtrList_26;
#line 287 "canonical.m"
                MR_ArrayPtr canonical__PrimeCSDPtrArray_27;
#line 287 "canonical.m"
                MR_Word canonical__V_37_37;
#line 293 "canonical.m"
                MR_ArrayPtr canonical__conv1_PrimeCSDPtrArray_27;
#line 294 "canonical.m"
                MR_ArrayPtr canonical__conv2_STATE_VARIABLE_PrimeSiteArray_42_42;

#line 288 "canonical.m"
                {
#line 288 "canonical.m"
                  mercury__array__to_list_2_p_0(canonical__TypeCtorInfo_49_49, (MR_ArrayPtr) canonical__PrimeCSDPtrArray0_24, &canonical__PrimeCSDPtrList0_25);
                }
#line 289 "canonical.m"
                {
#line 289 "canonical.m"
                  canonical__merge_proc_dynamic_multi_slot_11_p_0(canonical__MergeInfo_12, canonical__SlotNum_13, canonical__Clique_14, canonical__PrimePDPtr_15, canonical__PrimeCSDPtrList0_25, canonical__RestSiteArrays_17, &canonical__PrimeCSDPtrList_26, canonical__STATE_VARIABLE_InitDeep_0_30, &canonical__STATE_VARIABLE_InitDeep_39_39, canonical__STATE_VARIABLE_Redirect_0_32, &canonical__STATE_VARIABLE_Redirect_40_40);
                }
#line 293 "canonical.m"
                {
#line 293 "canonical.m"
                  canonical__conv1_PrimeCSDPtrArray_27 = mercury__array__array_1_f_0(canonical__TypeCtorInfo_49_49, canonical__PrimeCSDPtrList_26);
                }
#line 293 "canonical.m"
                canonical__PrimeCSDPtrArray_27 = (MR_ArrayPtr) canonical__conv1_PrimeCSDPtrArray_27;
#line 294 "canonical.m"
                {
#line 294 "canonical.m"
                  canonical__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "canonical.m"
                  MR_hl_field(MR_mktag(1), canonical__V_37_37, 0) = ((MR_Box) (canonical__IsZeroed_23));
#line 294 "canonical.m"
                  MR_hl_field(MR_mktag(1), canonical__V_37_37, 1) = ((MR_Box) (canonical__PrimeCSDPtrArray_27));
#line 294 "canonical.m"
                }
#line 294 "canonical.m"
                {
#line 294 "canonical.m"
                  mercury__array__set_4_p_0(canonical__TypeCtorInfo_48_48, canonical__SlotNum_13, ((MR_Box) (canonical__V_37_37)), (MR_ArrayPtr) canonical__STATE_VARIABLE_PrimeSiteArray_0_28, &canonical__conv2_STATE_VARIABLE_PrimeSiteArray_42_42);
                }
#line 294 "canonical.m"
                canonical__STATE_VARIABLE_PrimeSiteArray_42_42 = (MR_ArrayPtr) canonical__conv2_STATE_VARIABLE_PrimeSiteArray_42_42;
#line 287 "canonical.m"
              }
#line 286 "canonical.m"
            else
#line 280 "canonical.m"
              {
#line 280 "canonical.m"
                MR_Word canonical__PrimeCSDPtr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimeSite0_20, (MR_Integer) 0)));
#line 280 "canonical.m"
                MR_Word canonical__PrimeCSDPtr_22;
#line 280 "canonical.m"
                MR_Word canonical__V_41_41;
#line 285 "canonical.m"
                MR_ArrayPtr canonical__conv3_STATE_VARIABLE_PrimeSiteArray_42_42;

#line 281 "canonical.m"
                {
#line 281 "canonical.m"
                  canonical__merge_proc_dynamic_normal_slot_11_p_0(canonical__MergeInfo_12, canonical__SlotNum_13, canonical__Clique_14, canonical__PrimePDPtr_15, canonical__PrimeCSDPtr0_21, canonical__RestSiteArrays_17, &canonical__PrimeCSDPtr_22, canonical__STATE_VARIABLE_InitDeep_0_30, &canonical__STATE_VARIABLE_InitDeep_39_39, canonical__STATE_VARIABLE_Redirect_0_32, &canonical__STATE_VARIABLE_Redirect_40_40);
                }
#line 285 "canonical.m"
                {
#line 285 "canonical.m"
                  canonical__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 285 "canonical.m"
                  MR_hl_field(MR_mktag(0), canonical__V_41_41, 0) = ((MR_Box) (canonical__PrimeCSDPtr_22));
#line 285 "canonical.m"
                }
#line 285 "canonical.m"
                {
#line 285 "canonical.m"
                  mercury__array__set_4_p_0(canonical__TypeCtorInfo_48_48, canonical__SlotNum_13, ((MR_Box) (canonical__V_41_41)), (MR_ArrayPtr) canonical__STATE_VARIABLE_PrimeSiteArray_0_28, &canonical__conv3_STATE_VARIABLE_PrimeSiteArray_42_42);
                }
#line 285 "canonical.m"
                canonical__STATE_VARIABLE_PrimeSiteArray_42_42 = (MR_ArrayPtr) canonical__conv3_STATE_VARIABLE_PrimeSiteArray_42_42;
#line 280 "canonical.m"
              }
#line 298 "canonical.m"
            canonical__V_43_43 = (canonical__SlotNum_13 - (MR_Integer) 1);
#line 298 "canonical.m"
            /* direct tailcall eliminated */
#line 298 "canonical.m"
            {
#line 298 "canonical.m"
              MR_Integer canonical__SlotNum__tmp_copy_13 = canonical__V_43_43;
#line 298 "canonical.m"
              MR_ArrayPtr canonical__STATE_VARIABLE_PrimeSiteArray_0__tmp_copy_28 = canonical__STATE_VARIABLE_PrimeSiteArray_42_42;
#line 298 "canonical.m"
              MR_Word canonical__STATE_VARIABLE_InitDeep_0__tmp_copy_30 = canonical__STATE_VARIABLE_InitDeep_39_39;
#line 298 "canonical.m"
              MR_Word canonical__STATE_VARIABLE_Redirect_0__tmp_copy_32 = canonical__STATE_VARIABLE_Redirect_40_40;

#line 298 "canonical.m"
              canonical__STATE_VARIABLE_Redirect_0_32 = canonical__STATE_VARIABLE_Redirect_0__tmp_copy_32;
#line 298 "canonical.m"
              canonical__STATE_VARIABLE_InitDeep_0_30 = canonical__STATE_VARIABLE_InitDeep_0__tmp_copy_30;
#line 298 "canonical.m"
              canonical__STATE_VARIABLE_PrimeSiteArray_0_28 = canonical__STATE_VARIABLE_PrimeSiteArray_0__tmp_copy_28;
#line 298 "canonical.m"
              canonical__SlotNum_13 = canonical__SlotNum__tmp_copy_13;
#line 298 "canonical.m"
            }
#line 298 "canonical.m"
            continue;
#line 278 "canonical.m"
          }
#line 301 "canonical.m"
        else
#line 302 "canonical.m"
          {
#line 302 "canonical.m"
            *canonical__STATE_VARIABLE_Redirect_33 = canonical__STATE_VARIABLE_Redirect_0_32;
#line 302 "canonical.m"
            *canonical__STATE_VARIABLE_InitDeep_31 = canonical__STATE_VARIABLE_InitDeep_0_30;
#line 302 "canonical.m"
            *canonical__STATE_VARIABLE_PrimeSiteArray_29 = canonical__STATE_VARIABLE_PrimeSiteArray_0_28;
#line 302 "canonical.m"
          }
#line 301 "canonical.m"
      }
#line 301 "canonical.m"
      break;
#line 301 "canonical.m"
    }
#line 266 "canonical.m"
}

#line 245 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamics_8_p_0_4(
#line 245 "canonical.m"
  MR_Box canonical__closure_arg,
#line 245 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 245 "canonical.m"
  MR_Box * canonical__wrapper_arg_2)
#line 245 "canonical.m"
{
#line 245 "canonical.m"
  {
#line 245 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 245 "canonical.m"
    MR_ArrayPtr canonical__conv1_HeadVar__2_2;

#line 245 "canonical.m"
    {
#line 245 "canonical.m"
      profile__extract_pd_sites_2_p_0(((MR_Word) canonical__wrapper_arg_1), &canonical__conv1_HeadVar__2_2);
    }
#line 245 "canonical.m"
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv1_HeadVar__2_2));
#line 245 "canonical.m"
  }
#line 245 "canonical.m"
}

#line 244 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamics_8_p_0_3(
#line 244 "canonical.m"
  MR_Box canonical__closure_arg,
#line 244 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 244 "canonical.m"
  MR_Box * canonical__wrapper_arg_2)
#line 244 "canonical.m"
{
#line 244 "canonical.m"
  {
#line 244 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 244 "canonical.m"
    MR_Word canonical__conv0_HeadVar__3_3;

#line 244 "canonical.m"
    {
#line 244 "canonical.m"
      profile__lookup_proc_dynamics_3_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv0_HeadVar__3_3);
    }
#line 244 "canonical.m"
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv0_HeadVar__3_3));
#line 244 "canonical.m"
  }
#line 244 "canonical.m"
}

#line 239 "canonical.m"
static MR_bool MR_CALL 
canonical__merge_proc_dynamics_8_p_0_2(
#line 239 "canonical.m"
  MR_Box canonical__closure_arg)
#line 239 "canonical.m"
{
#line 239 "canonical.m"
  {
#line 239 "canonical.m"
    MR_bool canonical__succeeded;
#line 239 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;

#line 239 "canonical.m"
    {
#line 239 "canonical.m"
      return canonical__succeeded = canonical__IntroducedFrom__pred__merge_proc_dynamics__239__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 4))));
    }
#line 239 "canonical.m"
    return canonical__succeeded;
#line 239 "canonical.m"
  }
#line 239 "canonical.m"
}

#line 237 "canonical.m"
static MR_bool MR_CALL 
canonical__merge_proc_dynamics_8_p_0_1(
#line 237 "canonical.m"
  MR_Box canonical__closure_arg,
#line 237 "canonical.m"
  MR_Box canonical__wrapper_arg_1)
#line 237 "canonical.m"
{
#line 237 "canonical.m"
  {
#line 237 "canonical.m"
    MR_bool canonical__succeeded;
#line 237 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;

#line 237 "canonical.m"
    {
#line 237 "canonical.m"
      return canonical__succeeded = profile__valid_proc_dynamic_ptr_raw_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1));
    }
#line 237 "canonical.m"
    return canonical__succeeded;
#line 237 "canonical.m"
  }
#line 237 "canonical.m"
}

#line 229 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamics_8_p_0(
#line 229 "canonical.m"
  MR_Word canonical__MergeInfo_9,
#line 229 "canonical.m"
  MR_Word canonical__Clique_10,
#line 229 "canonical.m"
  MR_Word canonical__CandidatePDPtrs_11,
#line 229 "canonical.m"
  MR_Word * canonical__ChosenPDPtr_12,
#line 229 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_29,
#line 229 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_InitDeep_30,
#line 229 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_31,
#line 229 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_32)
#line 229 "canonical.m"
{
#line 235 "canonical.m"
  {
#line 235 "canonical.m"
    MR_bool canonical__succeeded;
#line 235 "canonical.m"
    MR_Word canonical__TypeCtorInfo_70_70;
#line 235 "canonical.m"
    MR_ArrayPtr canonical__ProcDynamics0_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_29, (MR_Integer) 3)));
#line 235 "canonical.m"
    MR_Word canonical__ValidPDPtrs_16;
#line 235 "canonical.m"
    MR_Word canonical__InvalidPDPtrs_17;
#line 235 "canonical.m"
    MR_Word canonical__V_33_33;
#line 235 "canonical.m"
    MR_Word canonical__V_34_34;
#line 236 "canonical.m"
    MR_Word canonical__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_29, (MR_Integer) 0)));
#line 236 "canonical.m"
    MR_Word canonical__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_29, (MR_Integer) 1)));
#line 236 "canonical.m"
    MR_ArrayPtr canonical__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_29, (MR_Integer) 2)));
#line 236 "canonical.m"
    MR_ArrayPtr canonical__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_29, (MR_Integer) 4)));
#line 236 "canonical.m"
    MR_ArrayPtr canonical__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_29, (MR_Integer) 5)));

#line 237 "canonical.m"
    {
#line 237 "canonical.m"
      canonical__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 237 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_33_33, 0) = ((MR_Box) (&canonical_scalar_common_7[1]));
#line 237 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_33_33, 1) = ((MR_Box) (canonical__merge_proc_dynamics_8_p_0_1));
#line 237 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 237 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_33_33, 3) = ((MR_Box) (canonical__ProcDynamics0_15));
#line 237 "canonical.m"
    }
#line 6235 "canonical.c"
    canonical__TypeCtorInfo_70_70 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0;
#line 237 "canonical.m"
    {
#line 237 "canonical.m"
      mercury__list__filter_4_p_0(canonical__TypeCtorInfo_70_70, canonical__V_33_33, canonical__CandidatePDPtrs_11, &canonical__ValidPDPtrs_16, &canonical__InvalidPDPtrs_17);
    }
#line 239 "canonical.m"
    {
#line 239 "canonical.m"
      canonical__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 239 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_34_34, 0) = ((MR_Box) (&canonical_scalar_common_7[2]));
#line 239 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_34_34, 1) = ((MR_Box) (canonical__merge_proc_dynamics_8_p_0_2));
#line 239 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 239 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_34_34, 3) = ((MR_Box) (canonical__InvalidPDPtrs_17));
#line 239 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_34_34, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "canonical.m"
    }
#line 239 "canonical.m"
    {
#line 239 "canonical.m"
      mercury__require__require_2_p_0(canonical__V_34_34, (MR_String) "merge_proc_dynamics: invalid pdptrs");
    }
#line 257 "canonical.m"
    if ((canonical__ValidPDPtrs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 258 "canonical.m"
      {
#line 263 "canonical.m"
        {
#line 263 "canonical.m"
          mercury__require__unexpected_3_p_0((MR_String) "canonical", (MR_String) "predicate \140canonical.merge_proc_dynamics\'/8", (MR_String) "no valid pdptrs");
#line 263 "canonical.m"
          return;
        }
#line 258 "canonical.m"
      }
#line 257 "canonical.m"
    else
#line 241 "canonical.m"
      {
#line 241 "canonical.m"
        MR_Word canonical__TypeCtorInfo_74_74;
#line 241 "canonical.m"
        MR_Word canonical__TypeInfo_77_77;
#line 241 "canonical.m"
        MR_Word canonical__RestPDPtrs_19;
#line 241 "canonical.m"
        MR_Word canonical__PrimePD0_20;
#line 241 "canonical.m"
        MR_Word canonical__RestPDs_21;
#line 241 "canonical.m"
        MR_Word canonical__RestSites_22;
#line 241 "canonical.m"
        MR_ArrayPtr canonical__PrimeSites0_23;
#line 241 "canonical.m"
        MR_Integer canonical__MaxSiteNum_24;
#line 241 "canonical.m"
        MR_ArrayPtr canonical__PrimeSites_25;
#line 241 "canonical.m"
        MR_Word canonical__PrimePD_26;
#line 241 "canonical.m"
        MR_ArrayPtr canonical__ProcDynamics1_27;
#line 241 "canonical.m"
        MR_ArrayPtr canonical__ProcDynamics_28;
#line 241 "canonical.m"
        MR_Word canonical__STATE_VARIABLE_Redirect_40_40;
#line 241 "canonical.m"
        MR_Word canonical__V_41_41;
#line 241 "canonical.m"
        MR_ArrayPtr canonical__V_43_43;
#line 241 "canonical.m"
        MR_Word canonical__STATE_VARIABLE_InitDeep_44_44;
#line 241 "canonical.m"
        MR_ArrayPtr canonical__V_46_46;
#line 246 "canonical.m"
        MR_Word canonical__V_53_53;
#line 246 "canonical.m"
        MR_Word canonical__V_54_54;
#line 248 "canonical.m"
        MR_Box canonical__conv2_V_43_43;
#line 251 "canonical.m"
        MR_Word canonical__V_55_55;
#line 251 "canonical.m"
        MR_Word canonical__V_57_57;
#line 251 "canonical.m"
        MR_ArrayPtr canonical__V_56_56;
#line 252 "canonical.m"
        MR_Word canonical__V_58_58;
#line 252 "canonical.m"
        MR_Word canonical__V_59_59;
#line 252 "canonical.m"
        MR_ArrayPtr canonical__V_60_60;
#line 252 "canonical.m"
        MR_ArrayPtr canonical__V_61_61;
#line 252 "canonical.m"
        MR_ArrayPtr canonical__V_62_62;
#line 253 "canonical.m"
        MR_Box canonical__conv3_V_46_46;
#line 255 "canonical.m"
        MR_Word canonical__V_63_63;
#line 255 "canonical.m"
        MR_Word canonical__V_64_64;
#line 255 "canonical.m"
        MR_ArrayPtr canonical__V_65_65;
#line 255 "canonical.m"
        MR_ArrayPtr canonical__V_67_67;
#line 255 "canonical.m"
        MR_ArrayPtr canonical__V_68_68;
#line 255 "canonical.m"
        MR_ArrayPtr canonical__V_66_66;

#line 241 "canonical.m"
        *canonical__ChosenPDPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__ValidPDPtrs_16, (MR_Integer) 0)));
#line 241 "canonical.m"
        canonical__RestPDPtrs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__ValidPDPtrs_16, (MR_Integer) 1)));
#line 242 "canonical.m"
        {
#line 242 "canonical.m"
          canonical__record_pd_redirect_4_p_0(canonical__RestPDPtrs_19, *canonical__ChosenPDPtr_12, canonical__STATE_VARIABLE_Redirect_0_31, &canonical__STATE_VARIABLE_Redirect_40_40);
        }
#line 243 "canonical.m"
        {
#line 243 "canonical.m"
          profile__lookup_proc_dynamics_3_p_0(canonical__ProcDynamics0_15, *canonical__ChosenPDPtr_12, &canonical__PrimePD0_20);
        }
#line 244 "canonical.m"
        {
#line 244 "canonical.m"
          canonical__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 244 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_41_41, 0) = ((MR_Box) (&canonical_scalar_common_3[4]));
#line 244 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_41_41, 1) = ((MR_Box) (canonical__merge_proc_dynamics_8_p_0_3));
#line 244 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 244 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_41_41, 3) = ((MR_Box) (canonical__ProcDynamics0_15));
#line 244 "canonical.m"
        }
#line 6379 "canonical.c"
        canonical__TypeCtorInfo_74_74 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
#line 244 "canonical.m"
        {
#line 244 "canonical.m"
          mercury__list__map_3_p_0(canonical__TypeCtorInfo_70_70, canonical__TypeCtorInfo_74_74, canonical__V_41_41, canonical__RestPDPtrs_19, &canonical__RestPDs_21);
        }
#line 6386 "canonical.c"
        canonical__TypeInfo_77_77 = (MR_Word) &canonical_scalar_common_1[2];
#line 245 "canonical.m"
        {
#line 245 "canonical.m"
          mercury__list__map_3_p_0(canonical__TypeCtorInfo_74_74, canonical__TypeInfo_77_77, (MR_Word) &canonical_scalar_common_2[6], canonical__RestPDs_21, &canonical__RestSites_22);
        }
#line 246 "canonical.m"
        canonical__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_20, (MR_Integer) 0)));
#line 246 "canonical.m"
        canonical__PrimeSites0_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_20, (MR_Integer) 1)));
#line 246 "canonical.m"
        canonical__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_20, (MR_Integer) 2)));
#line 247 "canonical.m"
        {
#line 247 "canonical.m"
          mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) canonical__PrimeSites0_23, &canonical__MaxSiteNum_24);
        }
#line 248 "canonical.m"
        {
#line 248 "canonical.m"
          canonical__conv2_V_43_43 = array_util__u_1_f_0(canonical__TypeInfo_77_77, ((MR_Box) (canonical__PrimeSites0_23)));
        }
#line 248 "canonical.m"
        canonical__V_43_43 = ((MR_ArrayPtr) canonical__conv2_V_43_43);
#line 248 "canonical.m"
        {
#line 248 "canonical.m"
          canonical__merge_proc_dynamic_slots_11_p_0(canonical__MergeInfo_9, canonical__MaxSiteNum_24, canonical__Clique_10, *canonical__ChosenPDPtr_12, canonical__V_43_43, canonical__RestSites_22, &canonical__PrimeSites_25, canonical__STATE_VARIABLE_InitDeep_0_29, &canonical__STATE_VARIABLE_InitDeep_44_44, canonical__STATE_VARIABLE_Redirect_40_40, canonical__STATE_VARIABLE_Redirect_32);
        }
#line 251 "canonical.m"
        canonical__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_20, (MR_Integer) 0)));
#line 251 "canonical.m"
        canonical__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_20, (MR_Integer) 1)));
#line 251 "canonical.m"
        canonical__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_20, (MR_Integer) 2)));
#line 251 "canonical.m"
        {
#line 251 "canonical.m"
          canonical__PrimePD_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 251 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__PrimePD_26, 0) = ((MR_Box) (canonical__V_55_55));
#line 251 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__PrimePD_26, 1) = ((MR_Box) (canonical__PrimeSites_25));
#line 251 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__PrimePD_26, 2) = ((MR_Box) (canonical__V_57_57));
#line 251 "canonical.m"
        }
#line 252 "canonical.m"
        canonical__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 0)));
#line 252 "canonical.m"
        canonical__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 1)));
#line 252 "canonical.m"
        canonical__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 2)));
#line 252 "canonical.m"
        canonical__ProcDynamics1_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 3)));
#line 252 "canonical.m"
        canonical__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 4)));
#line 252 "canonical.m"
        canonical__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 5)));
#line 253 "canonical.m"
        {
#line 253 "canonical.m"
          canonical__conv3_V_46_46 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[3], ((MR_Box) (canonical__ProcDynamics1_27)));
        }
#line 253 "canonical.m"
        canonical__V_46_46 = ((MR_ArrayPtr) canonical__conv3_V_46_46);
#line 253 "canonical.m"
        {
#line 253 "canonical.m"
          profile__update_proc_dynamics_4_p_0(*canonical__ChosenPDPtr_12, canonical__PrimePD_26, canonical__V_46_46, &canonical__ProcDynamics_28);
        }
#line 255 "canonical.m"
        canonical__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 0)));
#line 255 "canonical.m"
        canonical__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 1)));
#line 255 "canonical.m"
        canonical__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 2)));
#line 255 "canonical.m"
        canonical__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 3)));
#line 255 "canonical.m"
        canonical__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 4)));
#line 255 "canonical.m"
        canonical__V_68_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_44, (MR_Integer) 5)));
#line 255 "canonical.m"
        {
#line 255 "canonical.m"
          MR_Word base;
#line 255 "canonical.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 255 "canonical.m"
          *canonical__STATE_VARIABLE_InitDeep_30 = base;
#line 255 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (canonical__V_63_63));
#line 255 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (canonical__V_64_64));
#line 255 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (canonical__V_65_65));
#line 255 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (canonical__ProcDynamics_28));
#line 255 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (canonical__V_67_67));
#line 255 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (canonical__V_68_68));
#line 255 "canonical.m"
        }
#line 241 "canonical.m"
      }
#line 235 "canonical.m"
  }
#line 229 "canonical.m"
}

#line 245 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_4(
#line 245 "canonical.m"
  MR_Box canonical__closure_arg,
#line 245 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 245 "canonical.m"
  MR_Box * canonical__wrapper_arg_2)
#line 245 "canonical.m"
{
#line 245 "canonical.m"
  {
#line 245 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 245 "canonical.m"
    MR_ArrayPtr canonical__conv1_HeadVar__2_2;

#line 245 "canonical.m"
    {
#line 245 "canonical.m"
      profile__extract_pd_sites_2_p_0(((MR_Word) canonical__wrapper_arg_1), &canonical__conv1_HeadVar__2_2);
    }
#line 245 "canonical.m"
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv1_HeadVar__2_2));
#line 245 "canonical.m"
  }
#line 245 "canonical.m"
}

#line 244 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_3(
#line 244 "canonical.m"
  MR_Box canonical__closure_arg,
#line 244 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 244 "canonical.m"
  MR_Box * canonical__wrapper_arg_2)
#line 244 "canonical.m"
{
#line 244 "canonical.m"
  {
#line 244 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 244 "canonical.m"
    MR_Word canonical__conv0_HeadVar__3_3;

#line 244 "canonical.m"
    {
#line 244 "canonical.m"
      profile__lookup_proc_dynamics_3_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv0_HeadVar__3_3);
    }
#line 244 "canonical.m"
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv0_HeadVar__3_3));
#line 244 "canonical.m"
  }
#line 244 "canonical.m"
}

#line 239 "canonical.m"
static MR_bool MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_2(
#line 239 "canonical.m"
  MR_Box canonical__closure_arg)
#line 239 "canonical.m"
{
#line 239 "canonical.m"
  {
#line 239 "canonical.m"
    MR_bool canonical__succeeded;
#line 239 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;

#line 239 "canonical.m"
    {
#line 239 "canonical.m"
      return canonical__succeeded = canonical__IntroducedFrom__pred__merge_proc_dynamics__239__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 4))));
    }
#line 239 "canonical.m"
    return canonical__succeeded;
#line 239 "canonical.m"
  }
#line 239 "canonical.m"
}

#line 237 "canonical.m"
static MR_bool MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0_1(
#line 237 "canonical.m"
  MR_Box canonical__closure_arg,
#line 237 "canonical.m"
  MR_Box canonical__wrapper_arg_1)
#line 237 "canonical.m"
{
#line 237 "canonical.m"
  {
#line 237 "canonical.m"
    MR_bool canonical__succeeded;
#line 237 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;

#line 237 "canonical.m"
    {
#line 237 "canonical.m"
      return canonical__succeeded = profile__valid_proc_dynamic_ptr_raw_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1));
    }
#line 237 "canonical.m"
    return canonical__succeeded;
#line 237 "canonical.m"
  }
#line 237 "canonical.m"
}

#line 219 "canonical.m"
static void MR_CALL 
canonical__merge_proc_dynamics_ignore_chosen_7_p_0(
#line 219 "canonical.m"
  MR_Word canonical__MergeInfo_8,
#line 219 "canonical.m"
  MR_Word canonical__Clique_9,
#line 219 "canonical.m"
  MR_Word canonical__CandidatePDPtrs_10,
#line 219 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_14,
#line 219 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_InitDeep_15,
#line 219 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_16,
#line 219 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_17)
#line 219 "canonical.m"
{
#line 235 "canonical.m"
  {
#line 235 "canonical.m"
    MR_bool canonical__succeeded;
#line 235 "canonical.m"
    MR_Word canonical__TypeCtorInfo_70_81;
#line 235 "canonical.m"
    MR_ArrayPtr canonical__ProcDynamics0_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_14, (MR_Integer) 3)));
#line 235 "canonical.m"
    MR_Word canonical__ValidPDPtrs_31;
#line 235 "canonical.m"
    MR_Word canonical__InvalidPDPtrs_32;
#line 235 "canonical.m"
    MR_Word canonical__V_44_44;
#line 235 "canonical.m"
    MR_Word canonical__V_45_45;
#line 236 "canonical.m"
    MR_Word canonical__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_14, (MR_Integer) 0)));
#line 236 "canonical.m"
    MR_Word canonical__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_14, (MR_Integer) 1)));
#line 236 "canonical.m"
    MR_ArrayPtr canonical__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_14, (MR_Integer) 2)));
#line 236 "canonical.m"
    MR_ArrayPtr canonical__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_14, (MR_Integer) 4)));
#line 236 "canonical.m"
    MR_ArrayPtr canonical__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_14, (MR_Integer) 5)));

#line 237 "canonical.m"
    {
#line 237 "canonical.m"
      canonical__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 237 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_44_44, 0) = ((MR_Box) (&canonical_scalar_common_7[1]));
#line 237 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_44_44, 1) = ((MR_Box) (canonical__merge_proc_dynamics_ignore_chosen_7_p_0_1));
#line 237 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 237 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_44_44, 3) = ((MR_Box) (canonical__ProcDynamics0_30));
#line 237 "canonical.m"
    }
#line 6673 "canonical.c"
    canonical__TypeCtorInfo_70_81 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0;
#line 237 "canonical.m"
    {
#line 237 "canonical.m"
      mercury__list__filter_4_p_0(canonical__TypeCtorInfo_70_81, canonical__V_44_44, canonical__CandidatePDPtrs_10, &canonical__ValidPDPtrs_31, &canonical__InvalidPDPtrs_32);
    }
#line 239 "canonical.m"
    {
#line 239 "canonical.m"
      canonical__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 239 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_45_45, 0) = ((MR_Box) (&canonical_scalar_common_7[2]));
#line 239 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_45_45, 1) = ((MR_Box) (canonical__merge_proc_dynamics_ignore_chosen_7_p_0_2));
#line 239 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 239 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_45_45, 3) = ((MR_Box) (canonical__InvalidPDPtrs_32));
#line 239 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_45_45, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "canonical.m"
    }
#line 239 "canonical.m"
    {
#line 239 "canonical.m"
      mercury__require__require_2_p_0(canonical__V_45_45, (MR_String) "merge_proc_dynamics: invalid pdptrs");
    }
#line 257 "canonical.m"
    if ((canonical__ValidPDPtrs_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 258 "canonical.m"
      {
#line 263 "canonical.m"
        {
#line 263 "canonical.m"
          mercury__require__unexpected_3_p_0((MR_String) "canonical", (MR_String) "predicate \140canonical.merge_proc_dynamics\'/8", (MR_String) "no valid pdptrs");
#line 263 "canonical.m"
          return;
        }
#line 258 "canonical.m"
      }
#line 257 "canonical.m"
    else
#line 241 "canonical.m"
      {
#line 241 "canonical.m"
        MR_Word canonical__TypeCtorInfo_74_85;
#line 241 "canonical.m"
        MR_Word canonical__TypeInfo_77_88;
#line 241 "canonical.m"
        MR_Word canonical___ChosenPDPtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__ValidPDPtrs_31, (MR_Integer) 0)));
#line 241 "canonical.m"
        MR_Word canonical__RestPDPtrs_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__ValidPDPtrs_31, (MR_Integer) 1)));
#line 241 "canonical.m"
        MR_Word canonical__PrimePD0_35;
#line 241 "canonical.m"
        MR_Word canonical__RestPDs_36;
#line 241 "canonical.m"
        MR_Word canonical__RestSites_37;
#line 241 "canonical.m"
        MR_ArrayPtr canonical__PrimeSites0_38;
#line 241 "canonical.m"
        MR_Integer canonical__MaxSiteNum_39;
#line 241 "canonical.m"
        MR_ArrayPtr canonical__PrimeSites_40;
#line 241 "canonical.m"
        MR_Word canonical__PrimePD_41;
#line 241 "canonical.m"
        MR_ArrayPtr canonical__ProcDynamics1_42;
#line 241 "canonical.m"
        MR_ArrayPtr canonical__ProcDynamics_43;
#line 241 "canonical.m"
        MR_Word canonical__STATE_VARIABLE_Redirect_40_51;
#line 241 "canonical.m"
        MR_Word canonical__V_52_52;
#line 241 "canonical.m"
        MR_ArrayPtr canonical__V_54_54;
#line 241 "canonical.m"
        MR_Word canonical__STATE_VARIABLE_InitDeep_44_55;
#line 241 "canonical.m"
        MR_ArrayPtr canonical__V_57_57;
#line 246 "canonical.m"
        MR_Word canonical__V_64_64;
#line 246 "canonical.m"
        MR_Word canonical__V_65_65;
#line 248 "canonical.m"
        MR_Box canonical__conv2_V_54_54;
#line 251 "canonical.m"
        MR_Word canonical__V_66_66;
#line 251 "canonical.m"
        MR_Word canonical__V_68_68;
#line 251 "canonical.m"
        MR_ArrayPtr canonical__V_67_67;
#line 252 "canonical.m"
        MR_Word canonical__V_69_69;
#line 252 "canonical.m"
        MR_Word canonical__V_70_70;
#line 252 "canonical.m"
        MR_ArrayPtr canonical__V_71_71;
#line 252 "canonical.m"
        MR_ArrayPtr canonical__V_72_72;
#line 252 "canonical.m"
        MR_ArrayPtr canonical__V_73_73;
#line 253 "canonical.m"
        MR_Box canonical__conv3_V_57_57;
#line 255 "canonical.m"
        MR_Word canonical__V_74_74;
#line 255 "canonical.m"
        MR_Word canonical__V_75_75;
#line 255 "canonical.m"
        MR_ArrayPtr canonical__V_76_76;
#line 255 "canonical.m"
        MR_ArrayPtr canonical__V_78_78;
#line 255 "canonical.m"
        MR_ArrayPtr canonical__V_79_79;
#line 255 "canonical.m"
        MR_ArrayPtr canonical__V_77_77;

#line 242 "canonical.m"
        {
#line 242 "canonical.m"
          canonical__record_pd_redirect_4_p_0(canonical__RestPDPtrs_34, canonical___ChosenPDPtr_13, canonical__STATE_VARIABLE_Redirect_0_16, &canonical__STATE_VARIABLE_Redirect_40_51);
        }
#line 243 "canonical.m"
        {
#line 243 "canonical.m"
          profile__lookup_proc_dynamics_3_p_0(canonical__ProcDynamics0_30, canonical___ChosenPDPtr_13, &canonical__PrimePD0_35);
        }
#line 244 "canonical.m"
        {
#line 244 "canonical.m"
          canonical__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 244 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_52_52, 0) = ((MR_Box) (&canonical_scalar_common_3[4]));
#line 244 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_52_52, 1) = ((MR_Box) (canonical__merge_proc_dynamics_ignore_chosen_7_p_0_3));
#line 244 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 244 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_52_52, 3) = ((MR_Box) (canonical__ProcDynamics0_30));
#line 244 "canonical.m"
        }
#line 6815 "canonical.c"
        canonical__TypeCtorInfo_74_85 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
#line 244 "canonical.m"
        {
#line 244 "canonical.m"
          mercury__list__map_3_p_0(canonical__TypeCtorInfo_70_81, canonical__TypeCtorInfo_74_85, canonical__V_52_52, canonical__RestPDPtrs_34, &canonical__RestPDs_36);
        }
#line 6822 "canonical.c"
        canonical__TypeInfo_77_88 = (MR_Word) &canonical_scalar_common_1[2];
#line 245 "canonical.m"
        {
#line 245 "canonical.m"
          mercury__list__map_3_p_0(canonical__TypeCtorInfo_74_85, canonical__TypeInfo_77_88, (MR_Word) &canonical_scalar_common_2[5], canonical__RestPDs_36, &canonical__RestSites_37);
        }
#line 246 "canonical.m"
        canonical__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_35, (MR_Integer) 0)));
#line 246 "canonical.m"
        canonical__PrimeSites0_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_35, (MR_Integer) 1)));
#line 246 "canonical.m"
        canonical__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_35, (MR_Integer) 2)));
#line 247 "canonical.m"
        {
#line 247 "canonical.m"
          mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) canonical__PrimeSites0_38, &canonical__MaxSiteNum_39);
        }
#line 248 "canonical.m"
        {
#line 248 "canonical.m"
          canonical__conv2_V_54_54 = array_util__u_1_f_0(canonical__TypeInfo_77_88, ((MR_Box) (canonical__PrimeSites0_38)));
        }
#line 248 "canonical.m"
        canonical__V_54_54 = ((MR_ArrayPtr) canonical__conv2_V_54_54);
#line 248 "canonical.m"
        {
#line 248 "canonical.m"
          canonical__merge_proc_dynamic_slots_11_p_0(canonical__MergeInfo_8, canonical__MaxSiteNum_39, canonical__Clique_9, canonical___ChosenPDPtr_13, canonical__V_54_54, canonical__RestSites_37, &canonical__PrimeSites_40, canonical__STATE_VARIABLE_InitDeep_0_14, &canonical__STATE_VARIABLE_InitDeep_44_55, canonical__STATE_VARIABLE_Redirect_40_51, canonical__STATE_VARIABLE_Redirect_17);
        }
#line 251 "canonical.m"
        canonical__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_35, (MR_Integer) 0)));
#line 251 "canonical.m"
        canonical__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_35, (MR_Integer) 1)));
#line 251 "canonical.m"
        canonical__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PrimePD0_35, (MR_Integer) 2)));
#line 251 "canonical.m"
        {
#line 251 "canonical.m"
          canonical__PrimePD_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 251 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__PrimePD_41, 0) = ((MR_Box) (canonical__V_66_66));
#line 251 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__PrimePD_41, 1) = ((MR_Box) (canonical__PrimeSites_40));
#line 251 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__PrimePD_41, 2) = ((MR_Box) (canonical__V_68_68));
#line 251 "canonical.m"
        }
#line 252 "canonical.m"
        canonical__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 0)));
#line 252 "canonical.m"
        canonical__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 1)));
#line 252 "canonical.m"
        canonical__V_71_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 2)));
#line 252 "canonical.m"
        canonical__ProcDynamics1_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 3)));
#line 252 "canonical.m"
        canonical__V_72_72 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 4)));
#line 252 "canonical.m"
        canonical__V_73_73 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 5)));
#line 253 "canonical.m"
        {
#line 253 "canonical.m"
          canonical__conv3_V_57_57 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[3], ((MR_Box) (canonical__ProcDynamics1_42)));
        }
#line 253 "canonical.m"
        canonical__V_57_57 = ((MR_ArrayPtr) canonical__conv3_V_57_57);
#line 253 "canonical.m"
        {
#line 253 "canonical.m"
          profile__update_proc_dynamics_4_p_0(canonical___ChosenPDPtr_13, canonical__PrimePD_41, canonical__V_57_57, &canonical__ProcDynamics_43);
        }
#line 255 "canonical.m"
        canonical__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 0)));
#line 255 "canonical.m"
        canonical__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 1)));
#line 255 "canonical.m"
        canonical__V_76_76 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 2)));
#line 255 "canonical.m"
        canonical__V_77_77 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 3)));
#line 255 "canonical.m"
        canonical__V_78_78 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 4)));
#line 255 "canonical.m"
        canonical__V_79_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_44_55, (MR_Integer) 5)));
#line 255 "canonical.m"
        {
#line 255 "canonical.m"
          MR_Word base;
#line 255 "canonical.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 255 "canonical.m"
          *canonical__STATE_VARIABLE_InitDeep_15 = base;
#line 255 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (canonical__V_74_74));
#line 255 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (canonical__V_75_75));
#line 255 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (canonical__V_76_76));
#line 255 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (canonical__ProcDynamics_43));
#line 255 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (canonical__V_78_78));
#line 255 "canonical.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (canonical__V_79_79));
#line 255 "canonical.m"
        }
#line 241 "canonical.m"
      }
#line 235 "canonical.m"
  }
#line 219 "canonical.m"
}

#line 208 "canonical.m"
static void MR_CALL 
canonical__complete_clique_slots_9_p_0_3(
#line 208 "canonical.m"
  MR_Box canonical__closure_arg,
#line 208 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 208 "canonical.m"
  MR_Box canonical__wrapper_arg_2,
#line 208 "canonical.m"
  MR_Box * canonical__wrapper_arg_3)
#line 208 "canonical.m"
{
#line 208 "canonical.m"
  {
#line 208 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 208 "canonical.m"
    MR_Word canonical__conv2_STATE_VARIABLE_ProcMap_13;

#line 208 "canonical.m"
    {
#line 208 "canonical.m"
      canonical__cluster_pds_by_ps_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2), &canonical__conv2_STATE_VARIABLE_ProcMap_13);
    }
#line 208 "canonical.m"
    *canonical__wrapper_arg_3 = ((MR_Box) (canonical__conv2_STATE_VARIABLE_ProcMap_13));
#line 208 "canonical.m"
  }
#line 208 "canonical.m"
}

#line 197 "canonical.m"
static void MR_CALL 
canonical__complete_clique_slots_9_p_0_2(
#line 197 "canonical.m"
  MR_Box canonical__closure_arg,
#line 197 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 197 "canonical.m"
  MR_Box * canonical__wrapper_arg_2)
#line 197 "canonical.m"
{
#line 197 "canonical.m"
  {
#line 197 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 197 "canonical.m"
    MR_Word canonical__conv1_HeadVar__3_3;

#line 197 "canonical.m"
    {
#line 197 "canonical.m"
      profile__extract_csdptr_callee_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv1_HeadVar__3_3);
    }
#line 197 "canonical.m"
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv1_HeadVar__3_3));
#line 197 "canonical.m"
  }
#line 197 "canonical.m"
}

#line 194 "canonical.m"
static MR_bool MR_CALL 
canonical__complete_clique_slots_9_p_0_1(
#line 194 "canonical.m"
  MR_Box canonical__closure_arg,
#line 194 "canonical.m"
  MR_Box canonical__wrapper_arg_1)
#line 194 "canonical.m"
{
#line 194 "canonical.m"
  {
#line 194 "canonical.m"
    MR_bool canonical__succeeded;
#line 194 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;

#line 194 "canonical.m"
    {
#line 194 "canonical.m"
      return canonical__succeeded = profile__valid_call_site_dynamic_ptr_raw_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1));
    }
#line 194 "canonical.m"
    return canonical__succeeded;
#line 194 "canonical.m"
  }
#line 194 "canonical.m"
}

#line 175 "canonical.m"
static void MR_CALL 
canonical__complete_clique_slots_9_p_0(
#line 175 "canonical.m"
  MR_Integer canonical__SlotNum_10,
#line 175 "canonical.m"
  MR_Word canonical__InitDeep_11,
#line 175 "canonical.m"
  MR_Word canonical__Clique_12,
#line 175 "canonical.m"
  MR_ArrayPtr canonical__PSSites_13,
#line 175 "canonical.m"
  MR_Word canonical__PDSites_14,
#line 175 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_ProcMap_0_29,
#line 175 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_ProcMap_30,
#line 175 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_AddedPD_0_31,
#line 175 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_AddedPD_32)
#line 175 "canonical.m"
{
#line 215 "canonical.m"
  while (MR_TRUE)
#line 215 "canonical.m"
    {
#line 215 "canonical.m"
      /* tailcall optimized into a loop */
#line 215 "canonical.m"
      {
#line 215 "canonical.m"
        MR_bool canonical__succeeded = (canonical__SlotNum_10 >= (MR_Integer) 0);

#line 215 "canonical.m"
        if (canonical__succeeded)
#line 185 "canonical.m"
          {
#line 185 "canonical.m"
            MR_Word canonical__TypeCtorInfo_64_64;
#line 185 "canonical.m"
            MR_Word canonical__TypeCtorInfo_67_67;
#line 185 "canonical.m"
            MR_Word canonical__CSSPtr_17;
#line 185 "canonical.m"
            MR_Word canonical__CSS_18;
#line 185 "canonical.m"
            MR_Word canonical__CSDPtrs_21;
#line 185 "canonical.m"
            MR_Word canonical__ValidCSDPtrs_23;
#line 185 "canonical.m"
            MR_Word canonical__CalleePDPtrs_24;
#line 185 "canonical.m"
            MR_Word canonical__CalleePDPtrSet_25;
#line 185 "canonical.m"
            MR_Word canonical__Common_26;
#line 185 "canonical.m"
            MR_ArrayPtr canonical__V_34_34;
#line 185 "canonical.m"
            MR_Word canonical__V_36_36;
#line 185 "canonical.m"
            MR_ArrayPtr canonical__V_37_37;
#line 185 "canonical.m"
            MR_Word canonical__V_38_38;
#line 185 "canonical.m"
            MR_Word canonical__STATE_VARIABLE_AddedPD_39_39;
#line 185 "canonical.m"
            MR_Word canonical__STATE_VARIABLE_ProcMap_41_41;
#line 185 "canonical.m"
            MR_Integer canonical__V_43_43;
#line 185 "canonical.m"
            MR_Box canonical__conv0_CSSPtr_17;
#line 186 "canonical.m"
            MR_Word canonical__V_47_47;
#line 186 "canonical.m"
            MR_Word canonical__V_48_48;
#line 186 "canonical.m"
            MR_ArrayPtr canonical__V_49_49;
#line 186 "canonical.m"
            MR_ArrayPtr canonical__V_50_50;
#line 186 "canonical.m"
            MR_ArrayPtr canonical__V_51_51;
#line 188 "canonical.m"
            MR_Word canonical__V_35_35;
#line 188 "canonical.m"
            MR_Word canonical__V_52_52;
#line 188 "canonical.m"
            MR_Integer canonical__V_53_53;
#line 188 "canonical.m"
            MR_Integer canonical__V_54_54;
#line 188 "canonical.m"
            MR_Word canonical__V_55_55;
#line 188 "canonical.m"
            MR_Word canonical__V_19_19;
#line 188 "canonical.m"
            MR_String canonical__V_20_20;
#line 194 "canonical.m"
            MR_Word canonical__V_56_56;
#line 194 "canonical.m"
            MR_Word canonical__V_57_57;
#line 194 "canonical.m"
            MR_ArrayPtr canonical__V_58_58;
#line 194 "canonical.m"
            MR_ArrayPtr canonical__V_59_59;
#line 194 "canonical.m"
            MR_ArrayPtr canonical__V_60_60;

#line 185 "canonical.m"
            {
#line 185 "canonical.m"
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) canonical__PSSites_13, canonical__SlotNum_10, &canonical__conv0_CSSPtr_17);
            }
#line 185 "canonical.m"
            canonical__CSSPtr_17 = ((MR_Word) canonical__conv0_CSSPtr_17);
#line 186 "canonical.m"
            canonical__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 0)));
#line 186 "canonical.m"
            canonical__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 1)));
#line 186 "canonical.m"
            canonical__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 2)));
#line 186 "canonical.m"
            canonical__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 3)));
#line 186 "canonical.m"
            canonical__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 4)));
#line 186 "canonical.m"
            canonical__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 5)));
#line 186 "canonical.m"
            {
#line 186 "canonical.m"
              profile__lookup_call_site_statics_3_p_0(canonical__V_34_34, canonical__CSSPtr_17, &canonical__CSS_18);
            }
#line 188 "canonical.m"
            canonical__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSS_18, (MR_Integer) 0)));
#line 188 "canonical.m"
            canonical__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), canonical__CSS_18, (MR_Integer) 1)));
#line 188 "canonical.m"
            canonical__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSS_18, (MR_Integer) 2)));
#line 188 "canonical.m"
            canonical__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), canonical__CSS_18, (MR_Integer) 3)));
#line 188 "canonical.m"
            canonical__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__CSS_18, (MR_Integer) 4)));
#line 188 "canonical.m"
            canonical__succeeded = ((MR_tag((MR_Word) canonical__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 188 "canonical.m"
            if (canonical__succeeded)
#line 188 "canonical.m"
              {
#line 188 "canonical.m"
                canonical__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__V_35_35, (MR_Integer) 0)));
#line 188 "canonical.m"
                canonical__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(1), canonical__V_35_35, (MR_Integer) 1)));
#line 189 "canonical.m"
                {
#line 189 "canonical.m"
                  canonical__lookup_normal_sites_3_p_0(canonical__PDSites_14, canonical__SlotNum_10, &canonical__CSDPtrs_21);
                }
#line 188 "canonical.m"
              }
#line 188 "canonical.m"
            else
#line 191 "canonical.m"
              {
#line 191 "canonical.m"
                MR_Word canonical__CSDPtrLists_22;

#line 191 "canonical.m"
                {
#line 191 "canonical.m"
                  canonical__lookup_multi_sites_3_p_0(canonical__PDSites_14, canonical__SlotNum_10, &canonical__CSDPtrLists_22);
                }
#line 192 "canonical.m"
                {
#line 192 "canonical.m"
                  mercury__list__condense_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, canonical__CSDPtrLists_22, &canonical__CSDPtrs_21);
                }
#line 191 "canonical.m"
              }
#line 194 "canonical.m"
            canonical__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 0)));
#line 194 "canonical.m"
            canonical__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 1)));
#line 194 "canonical.m"
            canonical__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 2)));
#line 194 "canonical.m"
            canonical__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 3)));
#line 194 "canonical.m"
            canonical__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 4)));
#line 194 "canonical.m"
            canonical__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_11, (MR_Integer) 5)));
#line 194 "canonical.m"
            {
#line 194 "canonical.m"
              canonical__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 194 "canonical.m"
              MR_hl_field(MR_mktag(0), canonical__V_36_36, 0) = ((MR_Box) (&canonical_scalar_common_7[0]));
#line 194 "canonical.m"
              MR_hl_field(MR_mktag(0), canonical__V_36_36, 1) = ((MR_Box) (canonical__complete_clique_slots_9_p_0_1));
#line 194 "canonical.m"
              MR_hl_field(MR_mktag(0), canonical__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 194 "canonical.m"
              MR_hl_field(MR_mktag(0), canonical__V_36_36, 3) = ((MR_Box) (canonical__V_37_37));
#line 194 "canonical.m"
            }
#line 7228 "canonical.c"
            canonical__TypeCtorInfo_64_64 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 194 "canonical.m"
            {
#line 194 "canonical.m"
              mercury__list__filter_3_p_0(canonical__TypeCtorInfo_64_64, canonical__V_36_36, canonical__CSDPtrs_21, &canonical__ValidCSDPtrs_23);
            }
#line 197 "canonical.m"
            {
#line 197 "canonical.m"
              canonical__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 197 "canonical.m"
              MR_hl_field(MR_mktag(0), canonical__V_38_38, 0) = ((MR_Box) (&canonical_scalar_common_3[3]));
#line 197 "canonical.m"
              MR_hl_field(MR_mktag(0), canonical__V_38_38, 1) = ((MR_Box) (canonical__complete_clique_slots_9_p_0_2));
#line 197 "canonical.m"
              MR_hl_field(MR_mktag(0), canonical__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 197 "canonical.m"
              MR_hl_field(MR_mktag(0), canonical__V_38_38, 3) = ((MR_Box) (canonical__InitDeep_11));
#line 197 "canonical.m"
            }
#line 7249 "canonical.c"
            canonical__TypeCtorInfo_67_67 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0;
#line 197 "canonical.m"
            {
#line 197 "canonical.m"
              mercury__list__map_3_p_0(canonical__TypeCtorInfo_64_64, canonical__TypeCtorInfo_67_67, canonical__V_38_38, canonical__ValidCSDPtrs_23, &canonical__CalleePDPtrs_24);
            }
#line 198 "canonical.m"
            {
#line 198 "canonical.m"
              canonical__CalleePDPtrSet_25 = mercury__set__list_to_set_1_f_0(canonical__TypeCtorInfo_67_67, canonical__CalleePDPtrs_24);
            }
#line 199 "canonical.m"
            {
#line 199 "canonical.m"
              mercury__set__intersect_3_p_0(canonical__TypeCtorInfo_67_67, canonical__CalleePDPtrSet_25, canonical__Clique_12, &canonical__Common_26);
            }
#line 200 "canonical.m"
            {
#line 200 "canonical.m"
              canonical__succeeded = mercury__set__empty_1_p_0(canonical__TypeCtorInfo_67_67, canonical__Common_26);
            }
#line 202 "canonical.m"
            if (canonical__succeeded)
#line 201 "canonical.m"
              {
#line 201 "canonical.m"
                canonical__STATE_VARIABLE_AddedPD_39_39 = canonical__STATE_VARIABLE_AddedPD_0_31;
#line 201 "canonical.m"
                canonical__STATE_VARIABLE_ProcMap_41_41 = canonical__STATE_VARIABLE_ProcMap_0_29;
#line 201 "canonical.m"
              }
#line 202 "canonical.m"
            else
#line 203 "canonical.m"
              {
#line 203 "canonical.m"
                MR_Word canonical__NewMembers_27;

#line 203 "canonical.m"
                {
#line 203 "canonical.m"
                  mercury__set__difference_3_p_0(canonical__TypeCtorInfo_67_67, canonical__CalleePDPtrSet_25, canonical__Clique_12, &canonical__NewMembers_27);
                }
#line 204 "canonical.m"
                {
#line 204 "canonical.m"
                  canonical__succeeded = mercury__set__empty_1_p_0(canonical__TypeCtorInfo_67_67, canonical__NewMembers_27);
                }
#line 206 "canonical.m"
                if (canonical__succeeded)
#line 205 "canonical.m"
                  {
#line 205 "canonical.m"
                    canonical__STATE_VARIABLE_AddedPD_39_39 = (MR_Integer) 0;
#line 205 "canonical.m"
                    canonical__STATE_VARIABLE_ProcMap_41_41 = canonical__STATE_VARIABLE_ProcMap_0_29;
#line 205 "canonical.m"
                  }
#line 206 "canonical.m"
                else
#line 207 "canonical.m"
                  {
#line 207 "canonical.m"
                    MR_Word canonical__NewMemberList_28;
#line 207 "canonical.m"
                    MR_Word canonical__V_40_40;
#line 208 "canonical.m"
                    MR_Box canonical__conv3_STATE_VARIABLE_ProcMap_41_41;

#line 207 "canonical.m"
                    {
#line 207 "canonical.m"
                      mercury__set__to_sorted_list_2_p_0(canonical__TypeCtorInfo_67_67, canonical__NewMembers_27, &canonical__NewMemberList_28);
                    }
#line 208 "canonical.m"
                    {
#line 208 "canonical.m"
                      canonical__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 208 "canonical.m"
                      MR_hl_field(MR_mktag(0), canonical__V_40_40, 0) = ((MR_Box) (&canonical_scalar_common_4[0]));
#line 208 "canonical.m"
                      MR_hl_field(MR_mktag(0), canonical__V_40_40, 1) = ((MR_Box) (canonical__complete_clique_slots_9_p_0_3));
#line 208 "canonical.m"
                      MR_hl_field(MR_mktag(0), canonical__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 208 "canonical.m"
                      MR_hl_field(MR_mktag(0), canonical__V_40_40, 3) = ((MR_Box) (canonical__InitDeep_11));
#line 208 "canonical.m"
                    }
#line 208 "canonical.m"
                    {
#line 208 "canonical.m"
                      mercury__list__foldl_4_p_0(canonical__TypeCtorInfo_67_67, (MR_Word) &canonical_scalar_common_2[0], canonical__V_40_40, canonical__NewMemberList_28, ((MR_Box) (canonical__STATE_VARIABLE_ProcMap_0_29)), &canonical__conv3_STATE_VARIABLE_ProcMap_41_41);
                    }
#line 208 "canonical.m"
                    canonical__STATE_VARIABLE_ProcMap_41_41 = ((MR_Word) canonical__conv3_STATE_VARIABLE_ProcMap_41_41);
#line 210 "canonical.m"
                    canonical__STATE_VARIABLE_AddedPD_39_39 = (MR_Integer) 1;
#line 207 "canonical.m"
                  }
#line 203 "canonical.m"
              }
#line 213 "canonical.m"
            canonical__V_43_43 = (canonical__SlotNum_10 - (MR_Integer) 1);
#line 213 "canonical.m"
            /* direct tailcall eliminated */
#line 213 "canonical.m"
            {
#line 213 "canonical.m"
              MR_Integer canonical__SlotNum__tmp_copy_10 = canonical__V_43_43;
#line 213 "canonical.m"
              MR_Word canonical__STATE_VARIABLE_ProcMap_0__tmp_copy_29 = canonical__STATE_VARIABLE_ProcMap_41_41;
#line 213 "canonical.m"
              MR_Word canonical__STATE_VARIABLE_AddedPD_0__tmp_copy_31 = canonical__STATE_VARIABLE_AddedPD_39_39;

#line 213 "canonical.m"
              canonical__STATE_VARIABLE_AddedPD_0_31 = canonical__STATE_VARIABLE_AddedPD_0__tmp_copy_31;
#line 213 "canonical.m"
              canonical__STATE_VARIABLE_ProcMap_0_29 = canonical__STATE_VARIABLE_ProcMap_0__tmp_copy_29;
#line 213 "canonical.m"
              canonical__SlotNum_10 = canonical__SlotNum__tmp_copy_10;
#line 213 "canonical.m"
            }
#line 213 "canonical.m"
            continue;
#line 185 "canonical.m"
          }
#line 215 "canonical.m"
        else
#line 216 "canonical.m"
          {
#line 216 "canonical.m"
            *canonical__STATE_VARIABLE_AddedPD_32 = canonical__STATE_VARIABLE_AddedPD_0_31;
#line 216 "canonical.m"
            *canonical__STATE_VARIABLE_ProcMap_30 = canonical__STATE_VARIABLE_ProcMap_0_29;
#line 216 "canonical.m"
          }
#line 215 "canonical.m"
      }
#line 215 "canonical.m"
      break;
#line 215 "canonical.m"
    }
#line 175 "canonical.m"
}

#line 168 "canonical.m"
static void MR_CALL 
canonical__lookup_pd_site_3_p_0(
#line 168 "canonical.m"
  MR_Word canonical__InitDeep_4,
#line 168 "canonical.m"
  MR_Word canonical__PDPtr_5,
#line 168 "canonical.m"
  MR_ArrayPtr * canonical__Sites_6)
#line 168 "canonical.m"
{
#line 171 "canonical.m"
  {
#line 171 "canonical.m"
    MR_bool canonical__succeeded;
#line 171 "canonical.m"
    MR_Word canonical__PD_7;
#line 171 "canonical.m"
    MR_ArrayPtr canonical__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 3)));
#line 172 "canonical.m"
    MR_Word canonical__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 0)));
#line 172 "canonical.m"
    MR_Word canonical__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 1)));
#line 172 "canonical.m"
    MR_ArrayPtr canonical__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 2)));
#line 172 "canonical.m"
    MR_ArrayPtr canonical__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 4)));
#line 172 "canonical.m"
    MR_ArrayPtr canonical__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_4, (MR_Integer) 5)));
#line 173 "canonical.m"
    MR_Word canonical__V_14_14;
#line 173 "canonical.m"
    MR_Word canonical__V_15_15;

#line 172 "canonical.m"
    {
#line 172 "canonical.m"
      profile__lookup_proc_dynamics_3_p_0(canonical__V_8_8, canonical__PDPtr_5, &canonical__PD_7);
    }
#line 173 "canonical.m"
    canonical__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PD_7, (MR_Integer) 0)));
#line 173 "canonical.m"
    *canonical__Sites_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PD_7, (MR_Integer) 1)));
#line 173 "canonical.m"
    canonical__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PD_7, (MR_Integer) 2)));
#line 171 "canonical.m"
  }
#line 168 "canonical.m"
}

#line 161 "canonical.m"
static void MR_CALL 
canonical__complete_clique_ps_7_p_0_1(
#line 161 "canonical.m"
  MR_Box canonical__closure_arg,
#line 161 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 161 "canonical.m"
  MR_Box * canonical__wrapper_arg_2)
#line 161 "canonical.m"
{
#line 161 "canonical.m"
  {
#line 161 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 161 "canonical.m"
    MR_ArrayPtr canonical__conv0_Sites_6;

#line 161 "canonical.m"
    {
#line 161 "canonical.m"
      canonical__lookup_pd_site_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv0_Sites_6);
    }
#line 161 "canonical.m"
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv0_Sites_6));
#line 161 "canonical.m"
  }
#line 161 "canonical.m"
}

#line 151 "canonical.m"
static void MR_CALL 
canonical__complete_clique_ps_7_p_0(
#line 151 "canonical.m"
  MR_Word canonical__InitDeep_8,
#line 151 "canonical.m"
  MR_Word canonical__Clique_9,
#line 151 "canonical.m"
  MR_Word canonical__HeadVar__3_3,
#line 151 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_ProcMap_0_19,
#line 151 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_ProcMap_20,
#line 151 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_AddedPD_0_21,
#line 151 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_AddedPD_22)
#line 151 "canonical.m"
{
#line 158 "canonical.m"
  {
#line 158 "canonical.m"
    MR_bool canonical__succeeded;
#line 158 "canonical.m"
    MR_Word canonical__PSPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__HeadVar__3_3, (MR_Integer) 0)));
#line 158 "canonical.m"
    MR_Word canonical__PDPtrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__HeadVar__3_3, (MR_Integer) 1)));
#line 159 "canonical.m"
    MR_Word canonical__V_23_23;
#line 159 "canonical.m"
    MR_Word canonical__V_14_14;
#line 159 "canonical.m"
    MR_Word canonical__V_15_15;
#line 159 "canonical.m"
    MR_Word canonical__V_16_16;

#line 159 "canonical.m"
    canonical__succeeded = ((MR_tag((MR_Word) canonical__PDPtrs_11)) == (MR_mktag((MR_Integer) 1)));
#line 159 "canonical.m"
    if (canonical__succeeded)
#line 159 "canonical.m"
      {
#line 159 "canonical.m"
        canonical__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__PDPtrs_11, (MR_Integer) 0)));
#line 159 "canonical.m"
        canonical__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__PDPtrs_11, (MR_Integer) 1)));
#line 159 "canonical.m"
        canonical__succeeded = ((MR_tag((MR_Word) canonical__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 159 "canonical.m"
        if (canonical__succeeded)
#line 159 "canonical.m"
          {
#line 159 "canonical.m"
            canonical__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__V_23_23, (MR_Integer) 0)));
#line 159 "canonical.m"
            canonical__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__V_23_23, (MR_Integer) 1)));
#line 159 "canonical.m"
          }
#line 159 "canonical.m"
      }
#line 164 "canonical.m"
    if (canonical__succeeded)
#line 160 "canonical.m"
      {
#line 160 "canonical.m"
        MR_Word canonical__PS_17;
#line 160 "canonical.m"
        MR_Word canonical__PDSites_18;
#line 160 "canonical.m"
        MR_ArrayPtr canonical__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_8, (MR_Integer) 5)));
#line 160 "canonical.m"
        MR_Word canonical__V_25_25;
#line 160 "canonical.m"
        MR_Integer canonical__V_26_26;
#line 160 "canonical.m"
        MR_ArrayPtr canonical__V_27_27;
#line 160 "canonical.m"
        MR_ArrayPtr canonical__V_30_30;
#line 160 "canonical.m"
        MR_Word canonical__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_8, (MR_Integer) 0)));
#line 160 "canonical.m"
        MR_Word canonical__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__InitDeep_8, (MR_Integer) 1)));
#line 160 "canonical.m"
        MR_ArrayPtr canonical__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_8, (MR_Integer) 2)));
#line 160 "canonical.m"
        MR_ArrayPtr canonical__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_8, (MR_Integer) 3)));
#line 160 "canonical.m"
        MR_ArrayPtr canonical__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__InitDeep_8, (MR_Integer) 4)));
#line 162 "canonical.m"
        MR_Word canonical__V_36_36;
#line 162 "canonical.m"
        MR_String canonical__V_37_37;
#line 162 "canonical.m"
        MR_String canonical__V_38_38;
#line 162 "canonical.m"
        MR_String canonical__V_39_39;
#line 162 "canonical.m"
        MR_String canonical__V_40_40;
#line 162 "canonical.m"
        MR_String canonical__V_41_41;
#line 162 "canonical.m"
        MR_Integer canonical__V_42_42;
#line 162 "canonical.m"
        MR_Word canonical__V_43_43;
#line 162 "canonical.m"
        MR_ArrayPtr canonical__V_44_44;
#line 162 "canonical.m"
        MR_Word canonical__V_45_45;
#line 162 "canonical.m"
        MR_Word canonical__V_46_46;
#line 162 "canonical.m"
        MR_Word canonical__V_47_47;
#line 162 "canonical.m"
        MR_String canonical__V_48_48;
#line 162 "canonical.m"
        MR_String canonical__V_49_49;
#line 162 "canonical.m"
        MR_String canonical__V_50_50;
#line 162 "canonical.m"
        MR_String canonical__V_51_51;
#line 162 "canonical.m"
        MR_String canonical__V_52_52;
#line 162 "canonical.m"
        MR_Integer canonical__V_53_53;
#line 162 "canonical.m"
        MR_Word canonical__V_54_54;
#line 162 "canonical.m"
        MR_ArrayPtr canonical__V_55_55;
#line 162 "canonical.m"
        MR_Word canonical__V_56_56;
#line 162 "canonical.m"
        MR_Word canonical__V_57_57;

#line 160 "canonical.m"
        {
#line 160 "canonical.m"
          profile__lookup_proc_statics_3_p_0(canonical__V_24_24, canonical__PSPtr_10, &canonical__PS_17);
        }
#line 161 "canonical.m"
        {
#line 161 "canonical.m"
          canonical__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 161 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_25_25, 0) = ((MR_Box) (&canonical_scalar_common_3[2]));
#line 161 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_25_25, 1) = ((MR_Box) (canonical__complete_clique_ps_7_p_0_1));
#line 161 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 161 "canonical.m"
          MR_hl_field(MR_mktag(0), canonical__V_25_25, 3) = ((MR_Box) (canonical__InitDeep_8));
#line 161 "canonical.m"
        }
#line 161 "canonical.m"
        {
#line 161 "canonical.m"
          mercury__list__map_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &canonical_scalar_common_1[2], canonical__V_25_25, canonical__PDPtrs_11, &canonical__PDSites_18);
        }
#line 162 "canonical.m"
        canonical__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 0)));
#line 162 "canonical.m"
        canonical__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 1)));
#line 162 "canonical.m"
        canonical__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 2)));
#line 162 "canonical.m"
        canonical__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 3)));
#line 162 "canonical.m"
        canonical__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 4)));
#line 162 "canonical.m"
        canonical__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 5)));
#line 162 "canonical.m"
        canonical__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 6)));
#line 162 "canonical.m"
        canonical__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 7)));
#line 162 "canonical.m"
        canonical__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 8)));
#line 162 "canonical.m"
        canonical__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 9)));
#line 162 "canonical.m"
        canonical__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 10)));
#line 162 "canonical.m"
        canonical__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 11)));
#line 162 "canonical.m"
        {
#line 162 "canonical.m"
          canonical__V_26_26 = mercury__array__max_1_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) canonical__V_30_30);
        }
#line 162 "canonical.m"
        canonical__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 0)));
#line 162 "canonical.m"
        canonical__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 1)));
#line 162 "canonical.m"
        canonical__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 2)));
#line 162 "canonical.m"
        canonical__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 3)));
#line 162 "canonical.m"
        canonical__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 4)));
#line 162 "canonical.m"
        canonical__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 5)));
#line 162 "canonical.m"
        canonical__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 6)));
#line 162 "canonical.m"
        canonical__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 7)));
#line 162 "canonical.m"
        canonical__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 8)));
#line 162 "canonical.m"
        canonical__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 9)));
#line 162 "canonical.m"
        canonical__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 10)));
#line 162 "canonical.m"
        canonical__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__PS_17, (MR_Integer) 11)));
#line 162 "canonical.m"
        {
#line 162 "canonical.m"
          canonical__complete_clique_slots_9_p_0(canonical__V_26_26, canonical__InitDeep_8, canonical__Clique_9, canonical__V_27_27, canonical__PDSites_18, canonical__STATE_VARIABLE_ProcMap_0_19, canonical__STATE_VARIABLE_ProcMap_20, canonical__STATE_VARIABLE_AddedPD_0_21, canonical__STATE_VARIABLE_AddedPD_22);
#line 162 "canonical.m"
          return;
        }
#line 160 "canonical.m"
      }
#line 164 "canonical.m"
    else
#line 165 "canonical.m"
      {
#line 165 "canonical.m"
        *canonical__STATE_VARIABLE_AddedPD_22 = canonical__STATE_VARIABLE_AddedPD_0_21;
#line 165 "canonical.m"
        *canonical__STATE_VARIABLE_ProcMap_20 = canonical__STATE_VARIABLE_ProcMap_0_19;
#line 165 "canonical.m"
      }
#line 158 "canonical.m"
  }
#line 151 "canonical.m"
}

#line 107 "canonical.m"
static void MR_CALL 
canonical__merge_cliques_6_p_0_4(
#line 107 "canonical.m"
  MR_Box canonical__closure_arg,
#line 107 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 107 "canonical.m"
  MR_Box canonical__wrapper_arg_2,
#line 107 "canonical.m"
  MR_Box * canonical__wrapper_arg_3,
#line 107 "canonical.m"
  MR_Box canonical__wrapper_arg_4,
#line 107 "canonical.m"
  MR_Box * canonical__wrapper_arg_5)
#line 107 "canonical.m"
{
#line 107 "canonical.m"
  {
#line 107 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 107 "canonical.m"
    MR_Word canonical__conv3_STATE_VARIABLE_InitDeep_15;
#line 107 "canonical.m"
    MR_Word canonical__conv2_STATE_VARIABLE_Redirect_17;

#line 107 "canonical.m"
    {
#line 107 "canonical.m"
      canonical__merge_proc_dynamics_ignore_chosen_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 4))), ((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2), &canonical__conv3_STATE_VARIABLE_InitDeep_15, ((MR_Word) canonical__wrapper_arg_4), &canonical__conv2_STATE_VARIABLE_Redirect_17);
    }
#line 107 "canonical.m"
    *canonical__wrapper_arg_3 = ((MR_Box) (canonical__conv3_STATE_VARIABLE_InitDeep_15));
#line 107 "canonical.m"
    *canonical__wrapper_arg_5 = ((MR_Box) (canonical__conv2_STATE_VARIABLE_Redirect_17));
#line 107 "canonical.m"
  }
#line 107 "canonical.m"
}

#line 106 "canonical.m"
static MR_bool MR_CALL 
canonical__merge_cliques_6_p_0_3(
#line 106 "canonical.m"
  MR_Box canonical__closure_arg,
#line 106 "canonical.m"
  MR_Box canonical__wrapper_arg_1)
#line 106 "canonical.m"
{
#line 106 "canonical.m"
  {
#line 106 "canonical.m"
    MR_bool canonical__succeeded;
#line 106 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;

#line 106 "canonical.m"
    {
#line 106 "canonical.m"
      return canonical__succeeded = canonical__two_or_more_1_p_0(((MR_Word) canonical__wrapper_arg_1));
    }
#line 106 "canonical.m"
    return canonical__succeeded;
#line 106 "canonical.m"
  }
#line 106 "canonical.m"
}

#line 101 "canonical.m"
static MR_bool MR_CALL 
canonical__merge_cliques_6_p_0_2(
#line 101 "canonical.m"
  MR_Box canonical__closure_arg,
#line 101 "canonical.m"
  MR_Box canonical__wrapper_arg_1)
#line 101 "canonical.m"
{
#line 101 "canonical.m"
  {
#line 101 "canonical.m"
    MR_bool canonical__succeeded;
#line 101 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;

#line 101 "canonical.m"
    {
#line 101 "canonical.m"
      return canonical__succeeded = canonical__two_or_more_1_p_0(((MR_Word) canonical__wrapper_arg_1));
    }
#line 101 "canonical.m"
    return canonical__succeeded;
#line 101 "canonical.m"
  }
#line 101 "canonical.m"
}

#line 98 "canonical.m"
static void MR_CALL 
canonical__merge_cliques_6_p_0_1(
#line 98 "canonical.m"
  MR_Box canonical__closure_arg,
#line 98 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 98 "canonical.m"
  MR_Box canonical__wrapper_arg_2,
#line 98 "canonical.m"
  MR_Box * canonical__wrapper_arg_3)
#line 98 "canonical.m"
{
#line 98 "canonical.m"
  {
#line 98 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 98 "canonical.m"
    MR_Word canonical__conv0_STATE_VARIABLE_ProcMap_13;

#line 98 "canonical.m"
    {
#line 98 "canonical.m"
      canonical__cluster_pds_by_ps_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), ((MR_Word) canonical__wrapper_arg_2), &canonical__conv0_STATE_VARIABLE_ProcMap_13);
    }
#line 98 "canonical.m"
    *canonical__wrapper_arg_3 = ((MR_Box) (canonical__conv0_STATE_VARIABLE_ProcMap_13));
#line 98 "canonical.m"
  }
#line 98 "canonical.m"
}

#line 77 "canonical.m"
static void MR_CALL 
canonical__merge_cliques_6_p_0(
#line 77 "canonical.m"
  MR_Word canonical__HeadVar__1_1,
#line 77 "canonical.m"
  MR_Word canonical__MergeInfo_2,
#line 77 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_3,
#line 77 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_InitDeep_4,
#line 77 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_Redirect_0_5,
#line 77 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_Redirect_6)
#line 77 "canonical.m"
{
#line 81 "canonical.m"
  while (MR_TRUE)
#line 81 "canonical.m"
    {
#line 81 "canonical.m"
      /* tailcall optimized into a loop */
#line 81 "canonical.m"
      {
#line 81 "canonical.m"
        MR_bool canonical__succeeded;

#line 81 "canonical.m"
        if ((canonical__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 81 "canonical.m"
          {
#line 81 "canonical.m"
            *canonical__STATE_VARIABLE_Redirect_6 = canonical__STATE_VARIABLE_Redirect_0_5;
#line 81 "canonical.m"
            *canonical__STATE_VARIABLE_InitDeep_4 = canonical__STATE_VARIABLE_InitDeep_0_3;
#line 81 "canonical.m"
          }
#line 81 "canonical.m"
        else
#line 82 "canonical.m"
          {
#line 82 "canonical.m"
            MR_Word canonical__Clique_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 0)));
#line 82 "canonical.m"
            MR_Word canonical__Cliques_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__HeadVar__1_1, (MR_Integer) 1)));
#line 82 "canonical.m"
            MR_Word canonical__STATE_VARIABLE_InitDeep_23_23;
#line 82 "canonical.m"
            MR_Word canonical__STATE_VARIABLE_Redirect_24_24;

#line 92 "canonical.m"
            if ((canonical__Clique_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 92 "canonical.m"
              {
#line 92 "canonical.m"
                canonical__STATE_VARIABLE_InitDeep_23_23 = canonical__STATE_VARIABLE_InitDeep_0_3;
#line 92 "canonical.m"
                canonical__STATE_VARIABLE_Redirect_24_24 = canonical__STATE_VARIABLE_Redirect_0_5;
#line 92 "canonical.m"
              }
#line 92 "canonical.m"
            else
#line 92 "canonical.m"
              {
#line 92 "canonical.m"
                MR_Word canonical__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__Clique_14, (MR_Integer) 1)));
#line 94 "canonical.m"
                MR_Word canonical__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), canonical__Clique_14, (MR_Integer) 0)));

#line 92 "canonical.m"
                if ((canonical__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 94 "canonical.m"
                  {
#line 94 "canonical.m"
                    canonical__STATE_VARIABLE_InitDeep_23_23 = canonical__STATE_VARIABLE_InitDeep_0_3;
#line 94 "canonical.m"
                    canonical__STATE_VARIABLE_Redirect_24_24 = canonical__STATE_VARIABLE_Redirect_0_5;
#line 94 "canonical.m"
                  }
#line 92 "canonical.m"
                else
#line 96 "canonical.m"
                  {
#line 96 "canonical.m"
                    MR_Word canonical__TypeCtorInfo_37_57 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
#line 96 "canonical.m"
                    MR_Word canonical__TypeInfo_38_58 = (MR_Word) &canonical_scalar_common_1[0];
#line 96 "canonical.m"
                    MR_Word canonical__ProcMap0_39;
#line 96 "canonical.m"
                    MR_Word canonical__ProcMap1_40;
#line 96 "canonical.m"
                    MR_Word canonical__PDsList1_41;
#line 96 "canonical.m"
                    MR_Word canonical__ToMergePDsList1_42;
#line 96 "canonical.m"
                    MR_Word canonical__V_50_50;
#line 98 "canonical.m"
                    MR_Box canonical__conv1_ProcMap1_40;

#line 97 "canonical.m"
                    {
#line 97 "canonical.m"
                      mercury__map__init_1_p_0(canonical__TypeCtorInfo_37_57, canonical__TypeInfo_38_58, &canonical__ProcMap0_39);
                    }
#line 98 "canonical.m"
                    {
#line 98 "canonical.m"
                      canonical__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 98 "canonical.m"
                      MR_hl_field(MR_mktag(0), canonical__V_50_50, 0) = ((MR_Box) (&canonical_scalar_common_4[0]));
#line 98 "canonical.m"
                      MR_hl_field(MR_mktag(0), canonical__V_50_50, 1) = ((MR_Box) (canonical__merge_cliques_6_p_0_1));
#line 98 "canonical.m"
                      MR_hl_field(MR_mktag(0), canonical__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 98 "canonical.m"
                      MR_hl_field(MR_mktag(0), canonical__V_50_50, 3) = ((MR_Box) (canonical__STATE_VARIABLE_InitDeep_0_3));
#line 98 "canonical.m"
                    }
#line 98 "canonical.m"
                    {
#line 98 "canonical.m"
                      mercury__list__foldl_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &canonical_scalar_common_2[0], canonical__V_50_50, canonical__Clique_14, ((MR_Box) (canonical__ProcMap0_39)), &canonical__conv1_ProcMap1_40);
                    }
#line 98 "canonical.m"
                    canonical__ProcMap1_40 = ((MR_Word) canonical__conv1_ProcMap1_40);
#line 100 "canonical.m"
                    {
#line 100 "canonical.m"
                      mercury__map__values_2_p_0(canonical__TypeCtorInfo_37_57, canonical__TypeInfo_38_58, canonical__ProcMap1_40, &canonical__PDsList1_41);
                    }
#line 101 "canonical.m"
                    {
#line 101 "canonical.m"
                      mercury__list__filter_3_p_0(canonical__TypeInfo_38_58, (MR_Word) &canonical_scalar_common_2[3], canonical__PDsList1_41, &canonical__ToMergePDsList1_42);
                    }
#line 109 "canonical.m"
                    if ((canonical__ToMergePDsList1_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 110 "canonical.m"
                      {
#line 110 "canonical.m"
                        canonical__STATE_VARIABLE_InitDeep_23_23 = canonical__STATE_VARIABLE_InitDeep_0_3;
#line 110 "canonical.m"
                        canonical__STATE_VARIABLE_Redirect_24_24 = canonical__STATE_VARIABLE_Redirect_0_5;
#line 110 "canonical.m"
                      }
#line 109 "canonical.m"
                    else
#line 103 "canonical.m"
                      {
#line 103 "canonical.m"
                        MR_Word canonical__ProcMap_45;
#line 103 "canonical.m"
                        MR_Word canonical__Clique_46;
#line 103 "canonical.m"
                        MR_Word canonical__PDsList_47;
#line 103 "canonical.m"
                        MR_Word canonical__ToMergePDsList_48;
#line 103 "canonical.m"
                        MR_Word canonical__V_53_53;
#line 107 "canonical.m"
                        MR_Box canonical__conv5_STATE_VARIABLE_InitDeep_23_23;
#line 107 "canonical.m"
                        MR_Box canonical__conv4_STATE_VARIABLE_Redirect_24_24;

#line 104 "canonical.m"
                        {
#line 104 "canonical.m"
                          canonical__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_108_101_116_101_95_99_108_105_113_117_101_95_95_91_50_93_95_48_5_p_0(canonical__STATE_VARIABLE_InitDeep_0_3, canonical__ProcMap1_40, &canonical__ProcMap_45, &canonical__Clique_46);
                        }
#line 105 "canonical.m"
                        {
#line 105 "canonical.m"
                          mercury__map__values_2_p_0(canonical__TypeCtorInfo_37_57, canonical__TypeInfo_38_58, canonical__ProcMap_45, &canonical__PDsList_47);
                        }
#line 106 "canonical.m"
                        {
#line 106 "canonical.m"
                          mercury__list__filter_3_p_0(canonical__TypeInfo_38_58, (MR_Word) &canonical_scalar_common_2[4], canonical__PDsList_47, &canonical__ToMergePDsList_48);
                        }
#line 107 "canonical.m"
                        {
#line 107 "canonical.m"
                          canonical__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 107 "canonical.m"
                          MR_hl_field(MR_mktag(0), canonical__V_53_53, 0) = ((MR_Box) (&canonical_scalar_common_6[0]));
#line 107 "canonical.m"
                          MR_hl_field(MR_mktag(0), canonical__V_53_53, 1) = ((MR_Box) (canonical__merge_cliques_6_p_0_4));
#line 107 "canonical.m"
                          MR_hl_field(MR_mktag(0), canonical__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 107 "canonical.m"
                          MR_hl_field(MR_mktag(0), canonical__V_53_53, 3) = ((MR_Box) (canonical__MergeInfo_2));
#line 107 "canonical.m"
                          MR_hl_field(MR_mktag(0), canonical__V_53_53, 4) = ((MR_Box) (canonical__Clique_46));
#line 107 "canonical.m"
                        }
#line 107 "canonical.m"
                        {
#line 107 "canonical.m"
                          mercury__list__foldl2_6_p_0(canonical__TypeInfo_38_58, (MR_Word) &profile__profile__type_ctor_info_initial_deep_0, (MR_Word) &canonical__canonical__type_ctor_info_redirect_0, canonical__V_53_53, canonical__ToMergePDsList_48, ((MR_Box) (canonical__STATE_VARIABLE_InitDeep_0_3)), &canonical__conv5_STATE_VARIABLE_InitDeep_23_23, ((MR_Box) (canonical__STATE_VARIABLE_Redirect_0_5)), &canonical__conv4_STATE_VARIABLE_Redirect_24_24);
                        }
#line 107 "canonical.m"
                        canonical__STATE_VARIABLE_InitDeep_23_23 = ((MR_Word) canonical__conv5_STATE_VARIABLE_InitDeep_23_23);
#line 107 "canonical.m"
                        canonical__STATE_VARIABLE_Redirect_24_24 = ((MR_Word) canonical__conv4_STATE_VARIABLE_Redirect_24_24);
#line 103 "canonical.m"
                      }
#line 96 "canonical.m"
                  }
#line 92 "canonical.m"
              }
#line 84 "canonical.m"
            /* direct tailcall eliminated */
#line 84 "canonical.m"
            {
#line 84 "canonical.m"
              MR_Word canonical__HeadVar__1__tmp_copy_1 = canonical__Cliques_15;
#line 84 "canonical.m"
              MR_Word canonical__STATE_VARIABLE_InitDeep_0__tmp_copy_3 = canonical__STATE_VARIABLE_InitDeep_23_23;
#line 84 "canonical.m"
              MR_Word canonical__STATE_VARIABLE_Redirect_0__tmp_copy_5 = canonical__STATE_VARIABLE_Redirect_24_24;

#line 84 "canonical.m"
              canonical__STATE_VARIABLE_Redirect_0_5 = canonical__STATE_VARIABLE_Redirect_0__tmp_copy_5;
#line 84 "canonical.m"
              canonical__STATE_VARIABLE_InitDeep_0_3 = canonical__STATE_VARIABLE_InitDeep_0__tmp_copy_3;
#line 84 "canonical.m"
              canonical__HeadVar__1_1 = canonical__HeadVar__1__tmp_copy_1;
#line 84 "canonical.m"
            }
#line 84 "canonical.m"
            continue;
#line 82 "canonical.m"
          }
#line 81 "canonical.m"
      }
#line 81 "canonical.m"
      break;
#line 81 "canonical.m"
    }
#line 77 "canonical.m"
}

#line 703 "canonical.m"
static void MR_CALL 
canonical__canonicalize_cliques_2_p_0_2(
#line 703 "canonical.m"
  MR_Box canonical__closure_arg,
#line 703 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 703 "canonical.m"
  MR_Box * canonical__wrapper_arg_2)
#line 703 "canonical.m"
{
#line 703 "canonical.m"
  {
#line 703 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 703 "canonical.m"
    MR_Word canonical__conv7_STATE_VARIABLE_PD_11;

#line 703 "canonical.m"
    {
#line 703 "canonical.m"
      canonical__subst_in_proc_dynamic_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv7_STATE_VARIABLE_PD_11);
    }
#line 703 "canonical.m"
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv7_STATE_VARIABLE_PD_11));
#line 703 "canonical.m"
  }
#line 703 "canonical.m"
}

#line 701 "canonical.m"
static void MR_CALL 
canonical__canonicalize_cliques_2_p_0_1(
#line 701 "canonical.m"
  MR_Box canonical__closure_arg,
#line 701 "canonical.m"
  MR_Box canonical__wrapper_arg_1,
#line 701 "canonical.m"
  MR_Box * canonical__wrapper_arg_2)
#line 701 "canonical.m"
{
#line 701 "canonical.m"
  {
#line 701 "canonical.m"
    MR_Box canonical__closure = canonical__closure_arg;
#line 701 "canonical.m"
    MR_Word canonical__conv4_STATE_VARIABLE_CSD_12;

#line 701 "canonical.m"
    {
#line 701 "canonical.m"
      canonical__subst_in_call_site_dynamic_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), canonical__closure, (MR_Integer) 3))), ((MR_Word) canonical__wrapper_arg_1), &canonical__conv4_STATE_VARIABLE_CSD_12);
    }
#line 701 "canonical.m"
    *canonical__wrapper_arg_2 = ((MR_Box) (canonical__conv4_STATE_VARIABLE_CSD_12));
#line 701 "canonical.m"
  }
#line 701 "canonical.m"
}

#line 22 "canonical.m"
void MR_CALL 
canonical__canonicalize_cliques_2_p_0(
#line 22 "canonical.m"
  MR_Word canonical__STATE_VARIABLE_InitDeep_0_16,
#line 22 "canonical.m"
  MR_Word * canonical__STATE_VARIABLE_InitDeep_17)
#line 22 "canonical.m"
{
#line 61 "canonical.m"
  {
#line 61 "canonical.m"
    MR_bool canonical__succeeded;
#line 61 "canonical.m"
    MR_Word canonical__TypeCtorInfo_46_82;
#line 61 "canonical.m"
    MR_Word canonical__TypeCtorInfo_50_86;
#line 61 "canonical.m"
    MR_Integer canonical__MaxCSDs_4;
#line 61 "canonical.m"
    MR_Integer canonical__MaxPDs_5;
#line 61 "canonical.m"
    MR_Integer canonical__NumCSDs_6;
#line 61 "canonical.m"
    MR_Integer canonical__NumPDs_7;
#line 61 "canonical.m"
    MR_Word canonical__CliqueList_8;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__Cliques_9;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__CliqueIndex_10;
#line 61 "canonical.m"
    MR_Word canonical__MergeInfo_11;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__CSDRedirect0_12;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__PDRedirect0_13;
#line 61 "canonical.m"
    MR_Word canonical__Redirect0_14;
#line 61 "canonical.m"
    MR_Word canonical__Redirect1_15;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 2)));
#line 61 "canonical.m"
    MR_ArrayPtr canonical__V_19_19;
#line 61 "canonical.m"
    MR_Word canonical__STATE_VARIABLE_InitDeep_26_26;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__CSDredirect0_48;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__PDredirect0_49;
#line 61 "canonical.m"
    MR_Word canonical__Stats_50;
#line 61 "canonical.m"
    MR_Word canonical__Root0_51;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__CSDs0_52;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__PDs0_53;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__CSSs_54;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__PSs_55;
#line 61 "canonical.m"
    MR_Integer canonical__NumCSD_56;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__CSDredirect_57;
#line 61 "canonical.m"
    MR_Integer canonical__NumPD_58;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__PDredirect_59;
#line 61 "canonical.m"
    MR_Word canonical__Redirect_60;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__CSDs1_61;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__PDs1_62;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__CSDs_63;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__PDs_64;
#line 61 "canonical.m"
    MR_Word canonical__Root_65;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__V_68_68;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__V_71_71;
#line 61 "canonical.m"
    MR_Word canonical__V_72_72;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__V_73_73;
#line 61 "canonical.m"
    MR_Word canonical__V_74_74;
#line 61 "canonical.m"
    MR_ArrayPtr canonical__V_75_75;
#line 61 "canonical.m"
    MR_Integer canonical__PDI_90;
#line 62 "canonical.m"
    MR_Word canonical__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 0)));
#line 62 "canonical.m"
    MR_Word canonical__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 1)));
#line 62 "canonical.m"
    MR_ArrayPtr canonical__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 3)));
#line 62 "canonical.m"
    MR_ArrayPtr canonical__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 4)));
#line 62 "canonical.m"
    MR_ArrayPtr canonical__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 5)));
#line 63 "canonical.m"
    MR_Word canonical__V_33_33;
#line 63 "canonical.m"
    MR_Word canonical__V_34_34;
#line 63 "canonical.m"
    MR_ArrayPtr canonical__V_35_35;
#line 63 "canonical.m"
    MR_ArrayPtr canonical__V_36_36;
#line 63 "canonical.m"
    MR_ArrayPtr canonical__V_37_37;
#line 71 "canonical.m"
    MR_ArrayPtr canonical__conv0_CSDRedirect0_12;
#line 72 "canonical.m"
    MR_ArrayPtr canonical__conv1_PDRedirect0_13;
#line 696 "canonical.m"
    MR_Box canonical__conv2_V_68_68;
#line 698 "canonical.m"
    MR_Box canonical__conv3_V_71_71;
#line 701 "canonical.m"
    MR_Box canonical__conv5_V_73_73;
#line 701 "canonical.m"
    MR_ArrayPtr canonical__conv6_CSDs1_61;
#line 703 "canonical.m"
    MR_Box canonical__conv8_V_75_75;
#line 703 "canonical.m"
    MR_ArrayPtr canonical__conv9_PDs1_62;
#line 705 "canonical.m"
    MR_ArrayPtr canonical__conv10_CSDs_63;
#line 706 "canonical.m"
    MR_ArrayPtr canonical__conv11_PDs_64;
#line 637 "canonical.m"
    MR_Box canonical__conv12_Root_65;

#line 62 "canonical.m"
    {
#line 62 "canonical.m"
      canonical__MaxCSDs_4 = mercury__array__max_1_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) canonical__V_18_18);
    }
#line 63 "canonical.m"
    canonical__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 0)));
#line 63 "canonical.m"
    canonical__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 1)));
#line 63 "canonical.m"
    canonical__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 2)));
#line 63 "canonical.m"
    canonical__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 3)));
#line 63 "canonical.m"
    canonical__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 4)));
#line 63 "canonical.m"
    canonical__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_0_16, (MR_Integer) 5)));
#line 63 "canonical.m"
    {
#line 63 "canonical.m"
      canonical__MaxPDs_5 = mercury__array__max_1_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_ArrayPtr) canonical__V_19_19);
    }
#line 64 "canonical.m"
    canonical__NumCSDs_6 = (canonical__MaxCSDs_4 + (MR_Integer) 1);
#line 65 "canonical.m"
    canonical__NumPDs_7 = (canonical__MaxPDs_5 + (MR_Integer) 1);
#line 67 "canonical.m"
    {
#line 67 "canonical.m"
      callgraph__find_cliques_2_p_0(canonical__STATE_VARIABLE_InitDeep_0_16, &canonical__CliqueList_8);
    }
#line 68 "canonical.m"
    {
#line 68 "canonical.m"
      callgraph__make_clique_indexes_4_p_0(canonical__NumPDs_7, canonical__CliqueList_8, &canonical__Cliques_9, &canonical__CliqueIndex_10);
    }
#line 69 "canonical.m"
    {
#line 69 "canonical.m"
      canonical__MergeInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 69 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__MergeInfo_11, 0) = ((MR_Box) (canonical__Cliques_9));
#line 69 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__MergeInfo_11, 1) = ((MR_Box) (canonical__CliqueIndex_10));
#line 69 "canonical.m"
    }
#line 71 "canonical.m"
    {
#line 71 "canonical.m"
      canonical__conv0_CSDRedirect0_12 = mercury__array__init_2_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, canonical__NumCSDs_6, ((MR_Box) (((MR_Box) ((MR_Integer) 0)))));
    }
#line 71 "canonical.m"
    canonical__CSDRedirect0_12 = (MR_ArrayPtr) canonical__conv0_CSDRedirect0_12;
#line 72 "canonical.m"
    {
#line 72 "canonical.m"
      canonical__conv1_PDRedirect0_13 = mercury__array__init_2_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, canonical__NumPDs_7, ((MR_Box) (((MR_Box) ((MR_Integer) 0)))));
    }
#line 72 "canonical.m"
    canonical__PDRedirect0_13 = (MR_ArrayPtr) canonical__conv1_PDRedirect0_13;
#line 73 "canonical.m"
    {
#line 73 "canonical.m"
      canonical__Redirect0_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 73 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__Redirect0_14, 0) = ((MR_Box) (canonical__CSDRedirect0_12));
#line 73 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__Redirect0_14, 1) = ((MR_Box) (canonical__PDRedirect0_13));
#line 73 "canonical.m"
    }
#line 74 "canonical.m"
    {
#line 74 "canonical.m"
      canonical__merge_cliques_6_p_0(canonical__CliqueList_8, canonical__MergeInfo_11, canonical__STATE_VARIABLE_InitDeep_0_16, &canonical__STATE_VARIABLE_InitDeep_26_26, canonical__Redirect0_14, &canonical__Redirect1_15);
    }
#line 694 "canonical.m"
    canonical__CSDredirect0_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__Redirect1_15, (MR_Integer) 0)));
#line 694 "canonical.m"
    canonical__PDredirect0_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__Redirect1_15, (MR_Integer) 1)));
#line 695 "canonical.m"
    canonical__Stats_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_26_26, (MR_Integer) 0)));
#line 695 "canonical.m"
    canonical__Root0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_26_26, (MR_Integer) 1)));
#line 695 "canonical.m"
    canonical__CSDs0_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_26_26, (MR_Integer) 2)));
#line 695 "canonical.m"
    canonical__PDs0_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_26_26, (MR_Integer) 3)));
#line 695 "canonical.m"
    canonical__CSSs_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_26_26, (MR_Integer) 4)));
#line 695 "canonical.m"
    canonical__PSs_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), canonical__STATE_VARIABLE_InitDeep_26_26, (MR_Integer) 5)));
#line 696 "canonical.m"
    {
#line 696 "canonical.m"
      canonical__conv2_V_68_68 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[7], ((MR_Box) (canonical__CSDredirect0_48)));
    }
#line 696 "canonical.m"
    canonical__V_68_68 = ((MR_ArrayPtr) canonical__conv2_V_68_68);
#line 696 "canonical.m"
    {
#line 696 "canonical.m"
      canonical__compact_csd_redirect_6_p_0((MR_Integer) 1, (MR_Integer) 1, canonical__NumCSDs_6, &canonical__NumCSD_56, canonical__V_68_68, &canonical__CSDredirect_57);
    }
#line 698 "canonical.m"
    {
#line 698 "canonical.m"
      canonical__conv3_V_71_71 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[6], ((MR_Box) (canonical__PDredirect0_49)));
    }
#line 698 "canonical.m"
    canonical__V_71_71 = ((MR_ArrayPtr) canonical__conv3_V_71_71);
#line 698 "canonical.m"
    {
#line 698 "canonical.m"
      canonical__compact_pd_redirect_6_p_0((MR_Integer) 1, (MR_Integer) 1, canonical__NumPDs_7, &canonical__NumPD_58, canonical__V_71_71, &canonical__PDredirect_59);
    }
#line 700 "canonical.m"
    {
#line 700 "canonical.m"
      canonical__Redirect_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 700 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__Redirect_60, 0) = ((MR_Box) (canonical__CSDredirect_57));
#line 700 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__Redirect_60, 1) = ((MR_Box) (canonical__PDredirect_59));
#line 700 "canonical.m"
    }
#line 701 "canonical.m"
    {
#line 701 "canonical.m"
      canonical__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 701 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_72_72, 0) = ((MR_Box) (&canonical_scalar_common_3[0]));
#line 701 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_72_72, 1) = ((MR_Box) (canonical__canonicalize_cliques_2_p_0_1));
#line 701 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 701 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_72_72, 3) = ((MR_Box) (canonical__Redirect_60));
#line 701 "canonical.m"
    }
#line 701 "canonical.m"
    {
#line 701 "canonical.m"
      canonical__conv5_V_73_73 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[5], ((MR_Box) (canonical__CSDs0_52)));
    }
#line 701 "canonical.m"
    canonical__V_73_73 = ((MR_ArrayPtr) canonical__conv5_V_73_73);
#line 8427 "canonical.c"
    canonical__TypeCtorInfo_46_82 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
#line 701 "canonical.m"
    {
#line 701 "canonical.m"
      array_util__array_map_from_1_3_p_0(canonical__TypeCtorInfo_46_82, canonical__V_72_72, (MR_ArrayPtr) canonical__V_73_73, &canonical__conv6_CSDs1_61);
    }
#line 701 "canonical.m"
    canonical__CSDs1_61 = (MR_ArrayPtr) canonical__conv6_CSDs1_61;
#line 703 "canonical.m"
    {
#line 703 "canonical.m"
      canonical__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 703 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_74_74, 0) = ((MR_Box) (&canonical_scalar_common_3[1]));
#line 703 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_74_74, 1) = ((MR_Box) (canonical__canonicalize_cliques_2_p_0_2));
#line 703 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 703 "canonical.m"
      MR_hl_field(MR_mktag(0), canonical__V_74_74, 3) = ((MR_Box) (canonical__Redirect_60));
#line 703 "canonical.m"
    }
#line 703 "canonical.m"
    {
#line 703 "canonical.m"
      canonical__conv8_V_75_75 = array_util__u_1_f_0((MR_Word) &canonical_scalar_common_1[3], ((MR_Box) (canonical__PDs0_53)));
    }
#line 703 "canonical.m"
    canonical__V_75_75 = ((MR_ArrayPtr) canonical__conv8_V_75_75);
#line 8457 "canonical.c"
    canonical__TypeCtorInfo_50_86 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
#line 703 "canonical.m"
    {
#line 703 "canonical.m"
      array_util__array_map_from_1_3_p_0(canonical__TypeCtorInfo_50_86, canonical__V_74_74, (MR_ArrayPtr) canonical__V_75_75, &canonical__conv9_PDs1_62);
    }
#line 703 "canonical.m"
    canonical__PDs1_62 = (MR_ArrayPtr) canonical__conv9_PDs1_62;
#line 705 "canonical.m"
    {
#line 705 "canonical.m"
      mercury__array__shrink_3_p_0(canonical__TypeCtorInfo_46_82, canonical__NumCSD_56, (MR_ArrayPtr) canonical__CSDs1_61, &canonical__conv10_CSDs_63);
    }
#line 705 "canonical.m"
    canonical__CSDs_63 = (MR_ArrayPtr) canonical__conv10_CSDs_63;
#line 706 "canonical.m"
    {
#line 706 "canonical.m"
      mercury__array__shrink_3_p_0(canonical__TypeCtorInfo_50_86, canonical__NumPD_58, (MR_ArrayPtr) canonical__PDs1_62, &canonical__conv11_PDs_64);
    }
#line 706 "canonical.m"
    canonical__PDs_64 = (MR_ArrayPtr) canonical__conv11_PDs_64;
#line 636 "canonical.m"
    canonical__PDI_90 = (MR_Integer) canonical__Root0_51;
#line 637 "canonical.m"
    {
#line 637 "canonical.m"
      mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_ArrayPtr) canonical__PDredirect_59, canonical__PDI_90, &canonical__conv12_Root_65);
    }
#line 637 "canonical.m"
    canonical__Root_65 = ((MR_Word) canonical__conv12_Root_65);
#line 708 "canonical.m"
    {
#line 708 "canonical.m"
      MR_Word base;
#line 708 "canonical.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 708 "canonical.m"
      *canonical__STATE_VARIABLE_InitDeep_17 = base;
#line 708 "canonical.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (canonical__Stats_50));
#line 708 "canonical.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (canonical__Root_65));
#line 708 "canonical.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (canonical__CSDs_63));
#line 708 "canonical.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (canonical__PDs_64));
#line 708 "canonical.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (canonical__CSSs_54));
#line 708 "canonical.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (canonical__PSs_55));
#line 708 "canonical.m"
    }
#line 61 "canonical.m"
  }
#line 22 "canonical.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module canonical. */
