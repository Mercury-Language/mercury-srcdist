/*
** Automatically generated from `apply_exclusion.m'
** by the Mercury compiler,
** version rotd-2023-08-13
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


// :- module apply_exclusion.
// :- implementation.

/*
INIT mercury__apply_exclusion__init
ENDINIT
*/

#include "apply_exclusion.mih"


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
#include "exclude.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 apply_exclusion__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_clique_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static void MR_CALL 
apply_exclusion__compensate_using_comp_table_5_p_0(
  MR_Word Deep_6,
  MR_Word CallerPSPtr_7,
  MR_Word PDPtr_8,
  MR_Word Desc0_9,
  MR_Word * Desc_10);

static void MR_CALL 
apply_exclusion__accumulate_parent_csd_prof_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
apply_exclusion__accumulate_parent_csd_prof_info_7_p_0(
  MR_Word Deep_8,
  MR_Word CallerPSPtr_9,
  MR_Word CSDPtr_10,
  MR_Word Own0_11,
  MR_Word * Own_12,
  MR_Word Desc0_13,
  MR_Word * Desc_14);

static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_clique_3_f_0(
  MR_Word Deep_5,
  MR_Word HeadVar__2_2,
  MR_Word Map0_8);

static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_module_3_f_0(
  MR_Word Deep_5,
  MR_Word HeadVar__2_2,
  MR_Word Map0_8);

static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_procedure_3_f_0(
  MR_Word Deep_5,
  MR_Word HeadVar__2_2,
  MR_Word Map0_8);

static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_call_site_3_f_0(
  MR_Word Deep_5,
  MR_Word HeadVar__2_2,
  MR_Word Map0_8);

static void MR_CALL 
apply_exclusion__compute_parent_csd_prof_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
apply_exclusion__group_csds_by_clique_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
apply_exclusion__group_csds_by_module_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
apply_exclusion__group_csds_by_procedure_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
apply_exclusion__group_csds_by_call_site_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);


static /* final */ const MR_Box apply_exclusion_scalar_common_1[5][3];

static /* final */ const MR_Box apply_exclusion_scalar_common_2[1][2];

static /* final */ const MR_Box apply_exclusion_scalar_common_3[4][7];

static /* final */ const MR_Box apply_exclusion_scalar_common_4[1][10];

static /* final */ const MR_Box apply_exclusion_scalar_common_5[1][8];




static /* final */ const MR_Box apply_exclusion_scalar_common_1[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&apply_exclusion_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&apply_exclusion_scalar_common_2[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&apply_exclusion_scalar_common_2[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&apply_exclusion_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box apply_exclusion_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box apply_exclusion_scalar_common_3[4][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&apply_exclusion__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&apply_exclusion__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&apply_exclusion__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&apply_exclusion__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&apply_exclusion__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&apply_exclusion__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_clique_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_clique_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box apply_exclusion_scalar_common_4[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
};

static /* final */ const MR_Box apply_exclusion_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0),
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static const MR_FA_TypeInfo_Struct1 apply_exclusion__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_static_ptr_0),
    (MR_PseudoTypeInfo) (&apply_exclusion__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0),
    (MR_PseudoTypeInfo) (&apply_exclusion__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&apply_exclusion__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_clique_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0),
    (MR_PseudoTypeInfo) (&apply_exclusion__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static void MR_CALL 
apply_exclusion__compensate_using_comp_table_5_p_0(
  MR_Word Deep_6,
  MR_Word CallerPSPtr_7,
  MR_Word PDPtr_8,
  MR_Word Desc0_9,
  MR_Word * Desc_10)
{
  MR_bool succeeded;
  MR_Word CompTableArray_11;
  MR_Word InnerTotal_12;
  MR_Box conv0_InnerTotal_12;

  profile__deep_lookup_pd_comp_table_3_p_0(Deep_6, PDPtr_8, &CompTableArray_11);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), CompTableArray_11, ((MR_Box) (CallerPSPtr_7)), &conv0_InnerTotal_12);
  if (succeeded)
  {
    InnerTotal_12 = ((MR_Word) (conv0_InnerTotal_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *Desc_10 = measurements__subtract_inherit_from_inherit_2_f_0(InnerTotal_12, Desc0_9);
  else
    *Desc_10 = Desc0_9;
}

static void MR_CALL 
apply_exclusion__accumulate_parent_csd_prof_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Desc_10;

  apply_exclusion__compensate_using_comp_table_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Desc_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_Desc_10));
}

static void MR_CALL 
apply_exclusion__accumulate_parent_csd_prof_info_7_p_0(
  MR_Word Deep_8,
  MR_Word CallerPSPtr_9,
  MR_Word CSDPtr_10,
  MR_Word Own0_11,
  MR_Word * Own_12,
  MR_Word Desc0_13,
  MR_Word * Desc_14)
{
  MR_bool succeeded;
  MR_Word CSD_15;
  MR_Word Var_21;
  MR_Word Var_24;
  MR_Integer Var_37;
  MR_Integer Var_38;

  profile__deep_lookup_call_site_dynamics_3_p_0(Deep_8, CSDPtr_10, &CSD_15);
  Var_24 = ((MR_Word) ((MR_hl_field(0, CSD_15, (MR_Integer) 0))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, CSD_15, (MR_Integer) 1))));
  Var_37 = (MR_Integer) (Var_21);
  Var_38 = (MR_Integer) (Var_24);
  succeeded = (Var_37 == Var_38);
  if (succeeded)
  {
    *Own_12 = Own0_11;
    *Desc_14 = Desc0_13;
  }
  else
  {
    MR_Word CSDOwn_16;
    MR_Word CSDDesc_17;
    MR_Word Desc1_18;
    MR_Word CalleeCliquePtr_19;
    MR_Word CalleeCliquePDPtrs_20;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Box conv1_Desc_14;

    profile__deep_lookup_csd_own_3_p_0(Deep_8, CSDPtr_10, &CSDOwn_16);
    profile__deep_lookup_csd_desc_3_p_0(Deep_8, CSDPtr_10, &CSDDesc_17);
    *Own_12 = measurements__add_own_to_own_2_f_0(Own0_11, CSDOwn_16);
    Desc1_18 = measurements__add_inherit_to_inherit_2_f_0(Desc0_13, CSDDesc_17);
    Var_22 = ((MR_Word) ((MR_hl_field(0, CSD_15, (MR_Integer) 1))));
    profile__deep_lookup_clique_index_3_p_0(Deep_8, Var_22, &CalleeCliquePtr_19);
    profile__deep_lookup_clique_members_3_p_0(Deep_8, CalleeCliquePtr_19, &CalleeCliquePDPtrs_20);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (&apply_exclusion_scalar_common_5[0]));
      MR_hl_field(0, Var_23, 1) = ((MR_Box) (apply_exclusion__accumulate_parent_csd_prof_info_7_p_0_1));
      MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_23, 3) = ((MR_Box) (Deep_8));
      MR_hl_field(0, Var_23, 4) = ((MR_Box) (CallerPSPtr_9));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), Var_23, CalleeCliquePDPtrs_20, ((MR_Box) (Desc1_18)), &conv1_Desc_14);
    *Desc_14 = ((MR_Word) (conv1_Desc_14));
  }
}

static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_clique_3_f_0(
  MR_Word Deep_5,
  MR_Word HeadVar__2_2,
  MR_Word Map0_8)
{
  MR_bool succeeded;
  MR_Word Map_9;
  MR_Word GroupCSDPtr_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word CostCSDPtr_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word GroupCSD_10;
  MR_Word CallerPDPtr_11;
  MR_Word CliquePtr_12;
  MR_Word CostCSDPtrs0_13;
  MR_Box conv0_CostCSDPtrs0_13;

  profile__deep_lookup_call_site_dynamics_3_p_0(Deep_5, GroupCSDPtr_6, &GroupCSD_10);
  CallerPDPtr_11 = ((MR_Word) ((MR_hl_field(0, GroupCSD_10, (MR_Integer) 0))));
  profile__deep_lookup_clique_index_3_p_0(Deep_5, CallerPDPtr_11, &CliquePtr_12);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&profile__profile__type_ctor_info_clique_ptr_0), (MR_Word) (&apply_exclusion_scalar_common_2[0]), Map0_8, ((MR_Box) (CliquePtr_12)), &conv0_CostCSDPtrs0_13);
  if (succeeded)
  {
    CostCSDPtrs0_13 = ((MR_Word) (conv0_CostCSDPtrs0_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_14, 0) = ((MR_Box) (CostCSDPtr_7));
      MR_hl_field(1, Var_14, 1) = ((MR_Box) (CostCSDPtrs0_13));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&profile__profile__type_ctor_info_clique_ptr_0), (MR_Word) (&apply_exclusion_scalar_common_2[0]), ((MR_Box) (CliquePtr_12)), ((MR_Box) (Var_14)), Map0_8, &Map_9);
  }
  else
  {
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_15, 0) = ((MR_Box) (CostCSDPtr_7));
      MR_hl_field(1, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&profile__profile__type_ctor_info_clique_ptr_0), (MR_Word) (&apply_exclusion_scalar_common_2[0]), ((MR_Box) (CliquePtr_12)), ((MR_Box) (Var_15)), Map0_8, &Map_9);
  }
  return Map_9;
}

static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_module_3_f_0(
  MR_Word Deep_5,
  MR_Word HeadVar__2_2,
  MR_Word Map0_8)
{
  MR_bool succeeded;
  MR_Word Map_9;
  MR_Word GroupCSDPtr_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word CostCSDPtr_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word GroupCSSPtr_10;
  MR_Word GroupCSS_11;
  MR_Word GroupPSPtr_12;
  MR_Word GroupPS_13;
  MR_String GroupModuleName_14;
  MR_Word CostCSDPtrs0_15;
  MR_Box conv0_CostCSDPtrs0_15;

  profile__deep_lookup_call_site_static_map_3_p_0(Deep_5, GroupCSDPtr_6, &GroupCSSPtr_10);
  profile__deep_lookup_call_site_statics_3_p_0(Deep_5, GroupCSSPtr_10, &GroupCSS_11);
  GroupPSPtr_12 = ((MR_Word) ((MR_hl_field(0, GroupCSS_11, (MR_Integer) 0))));
  profile__deep_lookup_proc_statics_3_p_0(Deep_5, GroupPSPtr_12, &GroupPS_13);
  GroupModuleName_14 = ((MR_String) ((MR_hl_field(0, GroupPS_13, (MR_Integer) 1))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&apply_exclusion_scalar_common_2[0]), Map0_8, ((MR_Box) (GroupModuleName_14)), &conv0_CostCSDPtrs0_15);
  if (succeeded)
  {
    CostCSDPtrs0_15 = ((MR_Word) (conv0_CostCSDPtrs0_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) (CostCSDPtr_7));
      MR_hl_field(1, Var_16, 1) = ((MR_Box) (CostCSDPtrs0_15));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&apply_exclusion_scalar_common_2[0]), ((MR_Box) (GroupModuleName_14)), ((MR_Box) (Var_16)), Map0_8, &Map_9);
  }
  else
  {
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (CostCSDPtr_7));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&apply_exclusion_scalar_common_2[0]), ((MR_Box) (GroupModuleName_14)), ((MR_Box) (Var_17)), Map0_8, &Map_9);
  }
  return Map_9;
}

static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_procedure_3_f_0(
  MR_Word Deep_5,
  MR_Word HeadVar__2_2,
  MR_Word Map0_8)
{
  MR_bool succeeded;
  MR_Word Map_9;
  MR_Word GroupCSDPtr_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word CostCSDPtr_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word GroupCSSPtr_10;
  MR_Word GroupCSS_11;
  MR_Word GroupPSPtr_12;
  MR_Word CostCSDPtrs0_13;
  MR_Box conv0_CostCSDPtrs0_13;

  profile__deep_lookup_call_site_static_map_3_p_0(Deep_5, GroupCSDPtr_6, &GroupCSSPtr_10);
  profile__deep_lookup_call_site_statics_3_p_0(Deep_5, GroupCSSPtr_10, &GroupCSS_11);
  GroupPSPtr_12 = ((MR_Word) ((MR_hl_field(0, GroupCSS_11, (MR_Integer) 0))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&apply_exclusion_scalar_common_2[0]), Map0_8, ((MR_Box) (GroupPSPtr_12)), &conv0_CostCSDPtrs0_13);
  if (succeeded)
  {
    CostCSDPtrs0_13 = ((MR_Word) (conv0_CostCSDPtrs0_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_14, 0) = ((MR_Box) (CostCSDPtr_7));
      MR_hl_field(1, Var_14, 1) = ((MR_Box) (CostCSDPtrs0_13));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&apply_exclusion_scalar_common_2[0]), ((MR_Box) (GroupPSPtr_12)), ((MR_Box) (Var_14)), Map0_8, &Map_9);
  }
  else
  {
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_15, 0) = ((MR_Box) (CostCSDPtr_7));
      MR_hl_field(1, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&apply_exclusion_scalar_common_2[0]), ((MR_Box) (GroupPSPtr_12)), ((MR_Box) (Var_15)), Map0_8, &Map_9);
  }
  return Map_9;
}

static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_call_site_3_f_0(
  MR_Word Deep_5,
  MR_Word HeadVar__2_2,
  MR_Word Map0_8)
{
  MR_bool succeeded;
  MR_Word Map_9;
  MR_Word GroupCSDPtr_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word CostCSDPtr_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word GroupCSSPtr_10;
  MR_Word CostCSDPtrs0_11;
  MR_Box conv0_CostCSDPtrs0_11;

  profile__deep_lookup_call_site_static_map_3_p_0(Deep_5, GroupCSDPtr_6, &GroupCSSPtr_10);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_Word) (&apply_exclusion_scalar_common_2[0]), Map0_8, ((MR_Box) (GroupCSSPtr_10)), &conv0_CostCSDPtrs0_11);
  if (succeeded)
  {
    CostCSDPtrs0_11 = ((MR_Word) (conv0_CostCSDPtrs0_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_12, 0) = ((MR_Box) (CostCSDPtr_7));
      MR_hl_field(1, Var_12, 1) = ((MR_Box) (CostCSDPtrs0_11));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_Word) (&apply_exclusion_scalar_common_2[0]), ((MR_Box) (GroupCSSPtr_10)), ((MR_Box) (Var_12)), Map0_8, &Map_9);
  }
  else
  {
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_13, 0) = ((MR_Box) (CostCSDPtr_7));
      MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_Word) (&apply_exclusion_scalar_common_2[0]), ((MR_Box) (GroupCSSPtr_10)), ((MR_Box) (Var_13)), Map0_8, &Map_9);
  }
  return Map_9;
}

MR_Word MR_CALL 
apply_exclusion__pair_contour_3_f_0(
  MR_Word Deep_5,
  MR_Word ExcludeSpec_6,
  MR_Word CSDPtr_7)
{
  MR_Word HeadVar__4_4;
  MR_Word Var_8;

  Var_8 = exclude__apply_contour_exclusion_3_f_0(Deep_5, ExcludeSpec_6, CSDPtr_7);
  {
    HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, HeadVar__4_4, 1) = ((MR_Box) (CSDPtr_7));
  }
  return HeadVar__4_4;
}

MR_Word MR_CALL 
apply_exclusion__pair_self_1_f_0(
  MR_Word CSDPtr_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (CSDPtr_3));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (CSDPtr_3));
  }
  return HeadVar__2_2;
}

static void MR_CALL 
apply_exclusion__compute_parent_csd_prof_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Own_12;
  MR_Word conv0_Desc_14;

  apply_exclusion__accumulate_parent_csd_prof_info_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Own_12, ((MR_Word) (wrapper_arg_4)), &conv0_Desc_14);
  *wrapper_arg_3 = ((MR_Box) (conv1_Own_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_Desc_14));
}

void MR_CALL 
apply_exclusion__compute_parent_csd_prof_info_5_p_0(
  MR_Word Deep_6,
  MR_Word CalleePSPtr_7,
  MR_Word CSDPtrs_8,
  MR_Word * Own_9,
  MR_Word * Desc_10)
{
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Box conv3_Own_9;
  MR_Box conv2_Desc_10;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&apply_exclusion_scalar_common_4[0]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (apply_exclusion__compute_parent_csd_prof_info_5_p_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (Deep_6));
    MR_hl_field(0, Var_11, 4) = ((MR_Box) (CalleePSPtr_7));
  }
  Var_12 = measurements__zero_own_prof_info_0_f_0();
  Var_13 = measurements__zero_inherit_prof_info_0_f_0();
  mercury__list__foldl2_6_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), Var_11, CSDPtrs_8, ((MR_Box) (Var_12)), &conv3_Own_9, ((MR_Box) (Var_13)), &conv2_Desc_10);
  *Own_9 = ((MR_Word) (conv3_Own_9));
  *Desc_10 = ((MR_Word) (conv2_Desc_10));
}

static MR_Box MR_CALL 
apply_exclusion__group_csds_by_clique_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_Map_9;

  conv0_Map_9 = apply_exclusion__accumulate_csds_by_clique_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_Map_9));
  return wrapper_arg_3;
}

MR_Word MR_CALL 
apply_exclusion__group_csds_by_clique_2_f_0(
  MR_Word Deep_4,
  MR_Word GroupCostCSDPtrs_5)
{
  MR_Word Groups_6;
  MR_Word GroupMap_7;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Box conv1_GroupMap_7;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&apply_exclusion_scalar_common_3[3]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (apply_exclusion__group_csds_by_clique_2_f_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Deep_4));
  }
  Var_9 = mercury__map__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_clique_ptr_0), (MR_Word) (&apply_exclusion_scalar_common_2[0]));
  conv1_GroupMap_7 = mercury__list__foldl_3_f_0((MR_Word) (&apply_exclusion_scalar_common_1[0]), (MR_Word) (&apply_exclusion_scalar_common_1[4]), Var_8, GroupCostCSDPtrs_5, ((MR_Box) (Var_9)));
  GroupMap_7 = ((MR_Word) (conv1_GroupMap_7));
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_clique_ptr_0), (MR_Word) (&apply_exclusion_scalar_common_2[0]), GroupMap_7, &Groups_6);
  return Groups_6;
}

static MR_Box MR_CALL 
apply_exclusion__group_csds_by_module_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_Map_9;

  conv0_Map_9 = apply_exclusion__accumulate_csds_by_module_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_Map_9));
  return wrapper_arg_3;
}

MR_Word MR_CALL 
apply_exclusion__group_csds_by_module_2_f_0(
  MR_Word Deep_4,
  MR_Word GroupCostCSDPtrs_5)
{
  MR_Word Groups_6;
  MR_Word GroupMap_7;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Box conv1_GroupMap_7;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&apply_exclusion_scalar_common_3[2]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (apply_exclusion__group_csds_by_module_2_f_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Deep_4));
  }
  Var_9 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&apply_exclusion_scalar_common_2[0]));
  conv1_GroupMap_7 = mercury__list__foldl_3_f_0((MR_Word) (&apply_exclusion_scalar_common_1[0]), (MR_Word) (&apply_exclusion_scalar_common_1[3]), Var_8, GroupCostCSDPtrs_5, ((MR_Box) (Var_9)));
  GroupMap_7 = ((MR_Word) (conv1_GroupMap_7));
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&apply_exclusion_scalar_common_2[0]), GroupMap_7, &Groups_6);
  return Groups_6;
}

static MR_Box MR_CALL 
apply_exclusion__group_csds_by_procedure_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_Map_9;

  conv0_Map_9 = apply_exclusion__accumulate_csds_by_procedure_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_Map_9));
  return wrapper_arg_3;
}

MR_Word MR_CALL 
apply_exclusion__group_csds_by_procedure_2_f_0(
  MR_Word Deep_4,
  MR_Word GroupCostCSDPtrs_5)
{
  MR_Word Groups_6;
  MR_Word GroupMap_7;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Box conv1_GroupMap_7;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&apply_exclusion_scalar_common_3[1]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (apply_exclusion__group_csds_by_procedure_2_f_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Deep_4));
  }
  Var_9 = mercury__map__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&apply_exclusion_scalar_common_2[0]));
  conv1_GroupMap_7 = mercury__list__foldl_3_f_0((MR_Word) (&apply_exclusion_scalar_common_1[0]), (MR_Word) (&apply_exclusion_scalar_common_1[2]), Var_8, GroupCostCSDPtrs_5, ((MR_Box) (Var_9)));
  GroupMap_7 = ((MR_Word) (conv1_GroupMap_7));
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&apply_exclusion_scalar_common_2[0]), GroupMap_7, &Groups_6);
  return Groups_6;
}

static MR_Box MR_CALL 
apply_exclusion__group_csds_by_call_site_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_Map_9;

  conv0_Map_9 = apply_exclusion__accumulate_csds_by_call_site_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_Map_9));
  return wrapper_arg_3;
}

MR_Word MR_CALL 
apply_exclusion__group_csds_by_call_site_2_f_0(
  MR_Word Deep_4,
  MR_Word GroupCostCSDPtrs_5)
{
  MR_Word Groups_6;
  MR_Word GroupMap_7;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Box conv1_GroupMap_7;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&apply_exclusion_scalar_common_3[0]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (apply_exclusion__group_csds_by_call_site_2_f_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Deep_4));
  }
  Var_9 = mercury__map__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_Word) (&apply_exclusion_scalar_common_2[0]));
  conv1_GroupMap_7 = mercury__list__foldl_3_f_0((MR_Word) (&apply_exclusion_scalar_common_1[0]), (MR_Word) (&apply_exclusion_scalar_common_1[1]), Var_8, GroupCostCSDPtrs_5, ((MR_Box) (Var_9)));
  GroupMap_7 = ((MR_Word) (conv1_GroupMap_7));
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_Word) (&apply_exclusion_scalar_common_2[0]), GroupMap_7, &Groups_6);
  return Groups_6;
}

void mercury__apply_exclusion__init(void)
{
}

void mercury__apply_exclusion__init_type_tables(void)
{
}

void mercury__apply_exclusion__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__apply_exclusion__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module apply_exclusion.
