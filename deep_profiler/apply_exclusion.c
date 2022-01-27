/*
** Automatically generated from `apply_exclusion.m'
** by the Mercury compiler,
** version rotd-2016-10-04
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


/* :- module apply_exclusion. */
/* :- implementation. */

/*
INIT mercury__apply_exclusion__init
ENDINIT
*/

#include "apply_exclusion.mih"


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




static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 apply_exclusion__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_clique_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static void MR_CALL 
apply_exclusion__compensate_using_comp_table_5_p_0(
  MR_Word apply_exclusion__Deep_6,
  MR_Word apply_exclusion__CallerPSPtr_7,
  MR_Word apply_exclusion__PDPtr_8,
  MR_Word apply_exclusion__Desc0_9,
  MR_Word * apply_exclusion__Desc_10);

static void MR_CALL 
apply_exclusion__accumulate_parent_csd_prof_info_7_p_0_1(
  MR_Box apply_exclusion__closure_arg,
  MR_Box apply_exclusion__wrapper_arg_1,
  MR_Box apply_exclusion__wrapper_arg_2,
  MR_Box * apply_exclusion__wrapper_arg_3);

static void MR_CALL 
apply_exclusion__accumulate_parent_csd_prof_info_7_p_0(
  MR_Word apply_exclusion__Deep_8,
  MR_Word apply_exclusion__CallerPSPtr_9,
  MR_Word apply_exclusion__CSDPtr_10,
  MR_Word apply_exclusion__Own0_11,
  MR_Word * apply_exclusion__Own_12,
  MR_Word apply_exclusion__Desc0_13,
  MR_Word * apply_exclusion__Desc_14);

static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_clique_3_f_0(
  MR_Word apply_exclusion__Deep_5,
  MR_Word apply_exclusion__HeadVar__2_2,
  MR_Word apply_exclusion__Map0_8);

static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_module_3_f_0(
  MR_Word apply_exclusion__Deep_5,
  MR_Word apply_exclusion__HeadVar__2_2,
  MR_Word apply_exclusion__Map0_8);

static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_procedure_3_f_0(
  MR_Word apply_exclusion__Deep_5,
  MR_Word apply_exclusion__HeadVar__2_2,
  MR_Word apply_exclusion__Map0_8);

static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_call_site_3_f_0(
  MR_Word apply_exclusion__Deep_5,
  MR_Word apply_exclusion__HeadVar__2_2,
  MR_Word apply_exclusion__Map0_8);

static void MR_CALL 
apply_exclusion__compute_parent_csd_prof_info_5_p_0_1(
  MR_Box apply_exclusion__closure_arg,
  MR_Box apply_exclusion__wrapper_arg_1,
  MR_Box apply_exclusion__wrapper_arg_2,
  MR_Box * apply_exclusion__wrapper_arg_3,
  MR_Box apply_exclusion__wrapper_arg_4,
  MR_Box * apply_exclusion__wrapper_arg_5);

static MR_Box MR_CALL 
apply_exclusion__group_csds_by_clique_2_f_0_1(
  MR_Box apply_exclusion__closure_arg,
  MR_Box apply_exclusion__wrapper_arg_1,
  MR_Box apply_exclusion__wrapper_arg_2);

static MR_Box MR_CALL 
apply_exclusion__group_csds_by_module_2_f_0_1(
  MR_Box apply_exclusion__closure_arg,
  MR_Box apply_exclusion__wrapper_arg_1,
  MR_Box apply_exclusion__wrapper_arg_2);

static MR_Box MR_CALL 
apply_exclusion__group_csds_by_procedure_2_f_0_1(
  MR_Box apply_exclusion__closure_arg,
  MR_Box apply_exclusion__wrapper_arg_1,
  MR_Box apply_exclusion__wrapper_arg_2);

static MR_Box MR_CALL 
apply_exclusion__group_csds_by_call_site_2_f_0_1(
  MR_Box apply_exclusion__closure_arg,
  MR_Box apply_exclusion__wrapper_arg_1,
  MR_Box apply_exclusion__wrapper_arg_2);


static /* final */ const MR_Box apply_exclusion_scalar_common_1[5][3];

static /* final */ const MR_Box apply_exclusion_scalar_common_2[1][2];

static /* final */ const MR_Box apply_exclusion_scalar_common_3[4][7];

static /* final */ const MR_Box apply_exclusion_scalar_common_4[1][10];

static /* final */ const MR_Box apply_exclusion_scalar_common_5[1][8];




static /* final */ const MR_Box apply_exclusion_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&apply_exclusion_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&apply_exclusion_scalar_common_2[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&apply_exclusion_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&apply_exclusion_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box apply_exclusion_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box apply_exclusion_scalar_common_3[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&apply_exclusion__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&apply_exclusion__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&apply_exclusion__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&apply_exclusion__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&apply_exclusion__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&apply_exclusion__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_clique_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_clique_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box apply_exclusion_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
};



#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0,
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_TypeInfo_Struct1 apply_exclusion__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
    (MR_PseudoTypeInfo) &apply_exclusion__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &apply_exclusion__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &apply_exclusion__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_clique_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
    (MR_PseudoTypeInfo) &apply_exclusion__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static void MR_CALL 
apply_exclusion__compensate_using_comp_table_5_p_0(
  MR_Word apply_exclusion__Deep_6,
  MR_Word apply_exclusion__CallerPSPtr_7,
  MR_Word apply_exclusion__PDPtr_8,
  MR_Word apply_exclusion__Desc0_9,
  MR_Word * apply_exclusion__Desc_10)
{
  {
    MR_bool apply_exclusion__succeeded;
    MR_Word apply_exclusion__CompTableArray_11;
    MR_Word apply_exclusion__InnerTotal_12;
    MR_Box apply_exclusion__conv0_InnerTotal_12;

    {
      profile__deep_lookup_pd_comp_table_3_p_0(apply_exclusion__Deep_6, apply_exclusion__PDPtr_8, &apply_exclusion__CompTableArray_11);
    }
    {
      apply_exclusion__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, apply_exclusion__CompTableArray_11, ((MR_Box) (apply_exclusion__CallerPSPtr_7)), &apply_exclusion__conv0_InnerTotal_12);
    }
    if (apply_exclusion__succeeded)
      {
        apply_exclusion__InnerTotal_12 = ((MR_Word) apply_exclusion__conv0_InnerTotal_12);
        apply_exclusion__succeeded = MR_TRUE;
      }
    if (apply_exclusion__succeeded)
      {
        *apply_exclusion__Desc_10 = measurements__subtract_inherit_from_inherit_2_f_0(apply_exclusion__InnerTotal_12, apply_exclusion__Desc0_9);
      }
    else
      *apply_exclusion__Desc_10 = apply_exclusion__Desc0_9;
  }
}

static void MR_CALL 
apply_exclusion__accumulate_parent_csd_prof_info_7_p_0_1(
  MR_Box apply_exclusion__closure_arg,
  MR_Box apply_exclusion__wrapper_arg_1,
  MR_Box apply_exclusion__wrapper_arg_2,
  MR_Box * apply_exclusion__wrapper_arg_3)
{
  {
    MR_Box apply_exclusion__closure = apply_exclusion__closure_arg;
    MR_Word apply_exclusion__conv0_Desc_10;

    {
      apply_exclusion__compensate_using_comp_table_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__closure, (MR_Integer) 4))), ((MR_Word) apply_exclusion__wrapper_arg_1), ((MR_Word) apply_exclusion__wrapper_arg_2), &apply_exclusion__conv0_Desc_10);
    }
    *apply_exclusion__wrapper_arg_3 = ((MR_Box) (apply_exclusion__conv0_Desc_10));
  }
}

static void MR_CALL 
apply_exclusion__accumulate_parent_csd_prof_info_7_p_0(
  MR_Word apply_exclusion__Deep_8,
  MR_Word apply_exclusion__CallerPSPtr_9,
  MR_Word apply_exclusion__CSDPtr_10,
  MR_Word apply_exclusion__Own0_11,
  MR_Word * apply_exclusion__Own_12,
  MR_Word apply_exclusion__Desc0_13,
  MR_Word * apply_exclusion__Desc_14)
{
  {
    MR_bool apply_exclusion__succeeded;
    MR_Word apply_exclusion__CSD_15;
    MR_Word apply_exclusion__V_21_21;
    MR_Word apply_exclusion__V_24_24;
    MR_Integer apply_exclusion__V_37_37;
    MR_Integer apply_exclusion__V_38_38;
    MR_Word apply_exclusion__V_25_25;

    {
      profile__deep_lookup_call_site_dynamics_3_p_0(apply_exclusion__Deep_8, apply_exclusion__CSDPtr_10, &apply_exclusion__CSD_15);
    }
    apply_exclusion__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__CSD_15, (MR_Integer) 0)));
    apply_exclusion__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__CSD_15, (MR_Integer) 1)));
    apply_exclusion__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__CSD_15, (MR_Integer) 2)));
    apply_exclusion__V_37_37 = (MR_Integer) apply_exclusion__V_21_21;
    apply_exclusion__V_38_38 = (MR_Integer) apply_exclusion__V_24_24;
    apply_exclusion__succeeded = (apply_exclusion__V_37_37 == apply_exclusion__V_38_38);
    if (apply_exclusion__succeeded)
      {
        *apply_exclusion__Own_12 = apply_exclusion__Own0_11;
        *apply_exclusion__Desc_14 = apply_exclusion__Desc0_13;
      }
    else
      {
        MR_Word apply_exclusion__CSDOwn_16;
        MR_Word apply_exclusion__CSDDesc_17;
        MR_Word apply_exclusion__Desc1_18;
        MR_Word apply_exclusion__CalleeCliquePtr_19;
        MR_Word apply_exclusion__CalleeCliquePDPtrs_20;
        MR_Word apply_exclusion__V_22_22;
        MR_Word apply_exclusion__V_23_23;
        MR_Word apply_exclusion__V_28_28;
        MR_Word apply_exclusion__V_29_29;
        MR_Box apply_exclusion__conv1_Desc_14;

        {
          profile__deep_lookup_csd_own_3_p_0(apply_exclusion__Deep_8, apply_exclusion__CSDPtr_10, &apply_exclusion__CSDOwn_16);
        }
        {
          profile__deep_lookup_csd_desc_3_p_0(apply_exclusion__Deep_8, apply_exclusion__CSDPtr_10, &apply_exclusion__CSDDesc_17);
        }
        {
          *apply_exclusion__Own_12 = measurements__add_own_to_own_2_f_0(apply_exclusion__Own0_11, apply_exclusion__CSDOwn_16);
        }
        {
          apply_exclusion__Desc1_18 = measurements__add_inherit_to_inherit_2_f_0(apply_exclusion__Desc0_13, apply_exclusion__CSDDesc_17);
        }
        apply_exclusion__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__CSD_15, (MR_Integer) 0)));
        apply_exclusion__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__CSD_15, (MR_Integer) 1)));
        apply_exclusion__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__CSD_15, (MR_Integer) 2)));
        {
          profile__deep_lookup_clique_index_3_p_0(apply_exclusion__Deep_8, apply_exclusion__V_22_22, &apply_exclusion__CalleeCliquePtr_19);
        }
        {
          profile__deep_lookup_clique_members_3_p_0(apply_exclusion__Deep_8, apply_exclusion__CalleeCliquePtr_19, &apply_exclusion__CalleeCliquePDPtrs_20);
        }
        {
          apply_exclusion__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), apply_exclusion__V_23_23, 0) = ((MR_Box) (&apply_exclusion_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), apply_exclusion__V_23_23, 1) = ((MR_Box) (apply_exclusion__accumulate_parent_csd_prof_info_7_p_0_1));
          MR_hl_field(MR_mktag(0), apply_exclusion__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), apply_exclusion__V_23_23, 3) = ((MR_Box) (apply_exclusion__Deep_8));
          MR_hl_field(MR_mktag(0), apply_exclusion__V_23_23, 4) = ((MR_Box) (apply_exclusion__CallerPSPtr_9));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, apply_exclusion__V_23_23, apply_exclusion__CalleeCliquePDPtrs_20, ((MR_Box) (apply_exclusion__Desc1_18)), &apply_exclusion__conv1_Desc_14);
        }
        *apply_exclusion__Desc_14 = ((MR_Word) apply_exclusion__conv1_Desc_14);
      }
  }
}

static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_clique_3_f_0(
  MR_Word apply_exclusion__Deep_5,
  MR_Word apply_exclusion__HeadVar__2_2,
  MR_Word apply_exclusion__Map0_8)
{
  {
    MR_bool apply_exclusion__succeeded;
    MR_Word apply_exclusion__Map_9;
    MR_Word apply_exclusion__GroupCSDPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word apply_exclusion__CostCSDPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word apply_exclusion__GroupCSD_10;
    MR_Word apply_exclusion__CallerPDPtr_11;
    MR_Word apply_exclusion__CliquePtr_12;
    MR_Word apply_exclusion__V_17_17;
    MR_Word apply_exclusion__V_18_18;
    MR_Word apply_exclusion__CostCSDPtrs0_13;
    MR_Box apply_exclusion__conv0_CostCSDPtrs0_13;

    {
      profile__deep_lookup_call_site_dynamics_3_p_0(apply_exclusion__Deep_5, apply_exclusion__GroupCSDPtr_6, &apply_exclusion__GroupCSD_10);
    }
    apply_exclusion__CallerPDPtr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSD_10, (MR_Integer) 0)));
    apply_exclusion__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSD_10, (MR_Integer) 1)));
    apply_exclusion__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSD_10, (MR_Integer) 2)));
    {
      profile__deep_lookup_clique_index_3_p_0(apply_exclusion__Deep_5, apply_exclusion__CallerPDPtr_11, &apply_exclusion__CliquePtr_12);
    }
    {
      apply_exclusion__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, (MR_Word) &apply_exclusion_scalar_common_2[0], apply_exclusion__Map0_8, ((MR_Box) (apply_exclusion__CliquePtr_12)), &apply_exclusion__conv0_CostCSDPtrs0_13);
    }
    if (apply_exclusion__succeeded)
      {
        apply_exclusion__CostCSDPtrs0_13 = ((MR_Word) apply_exclusion__conv0_CostCSDPtrs0_13);
        apply_exclusion__succeeded = MR_TRUE;
      }
    if (apply_exclusion__succeeded)
      {
        MR_Word apply_exclusion__V_14_14;

        {
          apply_exclusion__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), apply_exclusion__V_14_14, 0) = ((MR_Box) (apply_exclusion__CostCSDPtr_7));
          MR_hl_field(MR_mktag(1), apply_exclusion__V_14_14, 1) = ((MR_Box) (apply_exclusion__CostCSDPtrs0_13));
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, (MR_Word) &apply_exclusion_scalar_common_2[0], ((MR_Box) (apply_exclusion__CliquePtr_12)), ((MR_Box) (apply_exclusion__V_14_14)), apply_exclusion__Map0_8, &apply_exclusion__Map_9);
        }
      }
    else
      {
        MR_Word apply_exclusion__V_15_15;

        {
          apply_exclusion__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), apply_exclusion__V_15_15, 0) = ((MR_Box) (apply_exclusion__CostCSDPtr_7));
          MR_hl_field(MR_mktag(1), apply_exclusion__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, (MR_Word) &apply_exclusion_scalar_common_2[0], ((MR_Box) (apply_exclusion__CliquePtr_12)), ((MR_Box) (apply_exclusion__V_15_15)), apply_exclusion__Map0_8, &apply_exclusion__Map_9);
        }
      }
    return apply_exclusion__Map_9;
  }
}

static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_module_3_f_0(
  MR_Word apply_exclusion__Deep_5,
  MR_Word apply_exclusion__HeadVar__2_2,
  MR_Word apply_exclusion__Map0_8)
{
  {
    MR_bool apply_exclusion__succeeded;
    MR_Word apply_exclusion__Map_9;
    MR_Word apply_exclusion__GroupCSDPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word apply_exclusion__CostCSDPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word apply_exclusion__GroupCSSPtr_10;
    MR_Word apply_exclusion__GroupCSS_11;
    MR_Word apply_exclusion__GroupPSPtr_12;
    MR_Word apply_exclusion__GroupPS_13;
    MR_String apply_exclusion__GroupModuleName_14;
    MR_Integer apply_exclusion__V_19_19;
    MR_Word apply_exclusion__V_20_20;
    MR_Integer apply_exclusion__V_21_21;
    MR_Word apply_exclusion__V_22_22;
    MR_Word apply_exclusion__V_23_23;
    MR_String apply_exclusion__V_24_24;
    MR_String apply_exclusion__V_25_25;
    MR_String apply_exclusion__V_26_26;
    MR_String apply_exclusion__V_27_27;
    MR_Integer apply_exclusion__V_28_28;
    MR_Word apply_exclusion__V_29_29;
    MR_ArrayPtr apply_exclusion__V_30_30;
    MR_ArrayPtr apply_exclusion__V_31_31;
    MR_Word apply_exclusion__V_32_32;
    MR_Word apply_exclusion__V_33_33;
    MR_Word apply_exclusion__CostCSDPtrs0_15;
    MR_Box apply_exclusion__conv0_CostCSDPtrs0_15;

    {
      profile__deep_lookup_call_site_static_map_3_p_0(apply_exclusion__Deep_5, apply_exclusion__GroupCSDPtr_6, &apply_exclusion__GroupCSSPtr_10);
    }
    {
      profile__deep_lookup_call_site_statics_3_p_0(apply_exclusion__Deep_5, apply_exclusion__GroupCSSPtr_10, &apply_exclusion__GroupCSS_11);
    }
    apply_exclusion__GroupPSPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSS_11, (MR_Integer) 0)));
    apply_exclusion__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSS_11, (MR_Integer) 1)));
    apply_exclusion__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSS_11, (MR_Integer) 2)));
    apply_exclusion__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSS_11, (MR_Integer) 3)));
    apply_exclusion__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSS_11, (MR_Integer) 4)));
    {
      profile__deep_lookup_proc_statics_3_p_0(apply_exclusion__Deep_5, apply_exclusion__GroupPSPtr_12, &apply_exclusion__GroupPS_13);
    }
    apply_exclusion__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 0)));
    apply_exclusion__GroupModuleName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 1)));
    apply_exclusion__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 2)));
    apply_exclusion__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 3)));
    apply_exclusion__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 4)));
    apply_exclusion__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 5)));
    apply_exclusion__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 6)));
    apply_exclusion__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 7)));
    apply_exclusion__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 8)));
    apply_exclusion__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 9)));
    apply_exclusion__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 10)));
    apply_exclusion__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 11)));
    {
      apply_exclusion__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &apply_exclusion_scalar_common_2[0], apply_exclusion__Map0_8, ((MR_Box) (apply_exclusion__GroupModuleName_14)), &apply_exclusion__conv0_CostCSDPtrs0_15);
    }
    if (apply_exclusion__succeeded)
      {
        apply_exclusion__CostCSDPtrs0_15 = ((MR_Word) apply_exclusion__conv0_CostCSDPtrs0_15);
        apply_exclusion__succeeded = MR_TRUE;
      }
    if (apply_exclusion__succeeded)
      {
        MR_Word apply_exclusion__V_16_16;

        {
          apply_exclusion__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), apply_exclusion__V_16_16, 0) = ((MR_Box) (apply_exclusion__CostCSDPtr_7));
          MR_hl_field(MR_mktag(1), apply_exclusion__V_16_16, 1) = ((MR_Box) (apply_exclusion__CostCSDPtrs0_15));
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &apply_exclusion_scalar_common_2[0], ((MR_Box) (apply_exclusion__GroupModuleName_14)), ((MR_Box) (apply_exclusion__V_16_16)), apply_exclusion__Map0_8, &apply_exclusion__Map_9);
        }
      }
    else
      {
        MR_Word apply_exclusion__V_17_17;

        {
          apply_exclusion__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), apply_exclusion__V_17_17, 0) = ((MR_Box) (apply_exclusion__CostCSDPtr_7));
          MR_hl_field(MR_mktag(1), apply_exclusion__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &apply_exclusion_scalar_common_2[0], ((MR_Box) (apply_exclusion__GroupModuleName_14)), ((MR_Box) (apply_exclusion__V_17_17)), apply_exclusion__Map0_8, &apply_exclusion__Map_9);
        }
      }
    return apply_exclusion__Map_9;
  }
}

static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_procedure_3_f_0(
  MR_Word apply_exclusion__Deep_5,
  MR_Word apply_exclusion__HeadVar__2_2,
  MR_Word apply_exclusion__Map0_8)
{
  {
    MR_bool apply_exclusion__succeeded;
    MR_Word apply_exclusion__Map_9;
    MR_Word apply_exclusion__GroupCSDPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word apply_exclusion__CostCSDPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word apply_exclusion__GroupCSSPtr_10;
    MR_Word apply_exclusion__GroupCSS_11;
    MR_Word apply_exclusion__GroupPSPtr_12;
    MR_Integer apply_exclusion__V_17_17;
    MR_Word apply_exclusion__V_18_18;
    MR_Integer apply_exclusion__V_19_19;
    MR_Word apply_exclusion__V_20_20;
    MR_Word apply_exclusion__CostCSDPtrs0_13;
    MR_Box apply_exclusion__conv0_CostCSDPtrs0_13;

    {
      profile__deep_lookup_call_site_static_map_3_p_0(apply_exclusion__Deep_5, apply_exclusion__GroupCSDPtr_6, &apply_exclusion__GroupCSSPtr_10);
    }
    {
      profile__deep_lookup_call_site_statics_3_p_0(apply_exclusion__Deep_5, apply_exclusion__GroupCSSPtr_10, &apply_exclusion__GroupCSS_11);
    }
    apply_exclusion__GroupPSPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSS_11, (MR_Integer) 0)));
    apply_exclusion__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSS_11, (MR_Integer) 1)));
    apply_exclusion__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSS_11, (MR_Integer) 2)));
    apply_exclusion__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSS_11, (MR_Integer) 3)));
    apply_exclusion__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSS_11, (MR_Integer) 4)));
    {
      apply_exclusion__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &apply_exclusion_scalar_common_2[0], apply_exclusion__Map0_8, ((MR_Box) (apply_exclusion__GroupPSPtr_12)), &apply_exclusion__conv0_CostCSDPtrs0_13);
    }
    if (apply_exclusion__succeeded)
      {
        apply_exclusion__CostCSDPtrs0_13 = ((MR_Word) apply_exclusion__conv0_CostCSDPtrs0_13);
        apply_exclusion__succeeded = MR_TRUE;
      }
    if (apply_exclusion__succeeded)
      {
        MR_Word apply_exclusion__V_14_14;

        {
          apply_exclusion__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), apply_exclusion__V_14_14, 0) = ((MR_Box) (apply_exclusion__CostCSDPtr_7));
          MR_hl_field(MR_mktag(1), apply_exclusion__V_14_14, 1) = ((MR_Box) (apply_exclusion__CostCSDPtrs0_13));
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &apply_exclusion_scalar_common_2[0], ((MR_Box) (apply_exclusion__GroupPSPtr_12)), ((MR_Box) (apply_exclusion__V_14_14)), apply_exclusion__Map0_8, &apply_exclusion__Map_9);
        }
      }
    else
      {
        MR_Word apply_exclusion__V_15_15;

        {
          apply_exclusion__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), apply_exclusion__V_15_15, 0) = ((MR_Box) (apply_exclusion__CostCSDPtr_7));
          MR_hl_field(MR_mktag(1), apply_exclusion__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &apply_exclusion_scalar_common_2[0], ((MR_Box) (apply_exclusion__GroupPSPtr_12)), ((MR_Box) (apply_exclusion__V_15_15)), apply_exclusion__Map0_8, &apply_exclusion__Map_9);
        }
      }
    return apply_exclusion__Map_9;
  }
}

static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_call_site_3_f_0(
  MR_Word apply_exclusion__Deep_5,
  MR_Word apply_exclusion__HeadVar__2_2,
  MR_Word apply_exclusion__Map0_8)
{
  {
    MR_bool apply_exclusion__succeeded;
    MR_Word apply_exclusion__Map_9;
    MR_Word apply_exclusion__GroupCSDPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word apply_exclusion__CostCSDPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word apply_exclusion__GroupCSSPtr_10;
    MR_Word apply_exclusion__CostCSDPtrs0_11;
    MR_Box apply_exclusion__conv0_CostCSDPtrs0_11;

    {
      profile__deep_lookup_call_site_static_map_3_p_0(apply_exclusion__Deep_5, apply_exclusion__GroupCSDPtr_6, &apply_exclusion__GroupCSSPtr_10);
    }
    {
      apply_exclusion__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_Word) &apply_exclusion_scalar_common_2[0], apply_exclusion__Map0_8, ((MR_Box) (apply_exclusion__GroupCSSPtr_10)), &apply_exclusion__conv0_CostCSDPtrs0_11);
    }
    if (apply_exclusion__succeeded)
      {
        apply_exclusion__CostCSDPtrs0_11 = ((MR_Word) apply_exclusion__conv0_CostCSDPtrs0_11);
        apply_exclusion__succeeded = MR_TRUE;
      }
    if (apply_exclusion__succeeded)
      {
        MR_Word apply_exclusion__V_12_12;

        {
          apply_exclusion__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), apply_exclusion__V_12_12, 0) = ((MR_Box) (apply_exclusion__CostCSDPtr_7));
          MR_hl_field(MR_mktag(1), apply_exclusion__V_12_12, 1) = ((MR_Box) (apply_exclusion__CostCSDPtrs0_11));
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_Word) &apply_exclusion_scalar_common_2[0], ((MR_Box) (apply_exclusion__GroupCSSPtr_10)), ((MR_Box) (apply_exclusion__V_12_12)), apply_exclusion__Map0_8, &apply_exclusion__Map_9);
        }
      }
    else
      {
        MR_Word apply_exclusion__V_13_13;

        {
          apply_exclusion__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), apply_exclusion__V_13_13, 0) = ((MR_Box) (apply_exclusion__CostCSDPtr_7));
          MR_hl_field(MR_mktag(1), apply_exclusion__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_Word) &apply_exclusion_scalar_common_2[0], ((MR_Box) (apply_exclusion__GroupCSSPtr_10)), ((MR_Box) (apply_exclusion__V_13_13)), apply_exclusion__Map0_8, &apply_exclusion__Map_9);
        }
      }
    return apply_exclusion__Map_9;
  }
}

MR_Word MR_CALL 
apply_exclusion__pair_contour_3_f_0(
  MR_Word apply_exclusion__Deep_5,
  MR_Word apply_exclusion__ExcludeSpec_6,
  MR_Word apply_exclusion__CSDPtr_7)
{
  {
    MR_bool apply_exclusion__succeeded;
    MR_Word apply_exclusion__HeadVar__4_4;
    MR_Word apply_exclusion__V_8_8;

    {
      apply_exclusion__V_8_8 = exclude__apply_contour_exclusion_3_f_0(apply_exclusion__Deep_5, apply_exclusion__ExcludeSpec_6, apply_exclusion__CSDPtr_7);
    }
    {
      apply_exclusion__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__4_4, 0) = ((MR_Box) (apply_exclusion__V_8_8));
      MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__4_4, 1) = ((MR_Box) (apply_exclusion__CSDPtr_7));
    }
    return apply_exclusion__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
apply_exclusion__pair_self_1_f_0(
  MR_Word apply_exclusion__CSDPtr_3)
{
  {
    MR_bool apply_exclusion__succeeded;
    MR_Word apply_exclusion__HeadVar__2_2;

    {
      apply_exclusion__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__2_2, 0) = ((MR_Box) (apply_exclusion__CSDPtr_3));
      MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__2_2, 1) = ((MR_Box) (apply_exclusion__CSDPtr_3));
    }
    return apply_exclusion__HeadVar__2_2;
  }
}

static void MR_CALL 
apply_exclusion__compute_parent_csd_prof_info_5_p_0_1(
  MR_Box apply_exclusion__closure_arg,
  MR_Box apply_exclusion__wrapper_arg_1,
  MR_Box apply_exclusion__wrapper_arg_2,
  MR_Box * apply_exclusion__wrapper_arg_3,
  MR_Box apply_exclusion__wrapper_arg_4,
  MR_Box * apply_exclusion__wrapper_arg_5)
{
  {
    MR_Box apply_exclusion__closure = apply_exclusion__closure_arg;
    MR_Word apply_exclusion__conv1_Own_12;
    MR_Word apply_exclusion__conv0_Desc_14;

    {
      apply_exclusion__accumulate_parent_csd_prof_info_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__closure, (MR_Integer) 4))), ((MR_Word) apply_exclusion__wrapper_arg_1), ((MR_Word) apply_exclusion__wrapper_arg_2), &apply_exclusion__conv1_Own_12, ((MR_Word) apply_exclusion__wrapper_arg_4), &apply_exclusion__conv0_Desc_14);
    }
    *apply_exclusion__wrapper_arg_3 = ((MR_Box) (apply_exclusion__conv1_Own_12));
    *apply_exclusion__wrapper_arg_5 = ((MR_Box) (apply_exclusion__conv0_Desc_14));
  }
}

void MR_CALL 
apply_exclusion__compute_parent_csd_prof_info_5_p_0(
  MR_Word apply_exclusion__Deep_6,
  MR_Word apply_exclusion__CalleePSPtr_7,
  MR_Word apply_exclusion__CSDPtrs_8,
  MR_Word * apply_exclusion__Own_9,
  MR_Word * apply_exclusion__Desc_10)
{
  {
    MR_bool apply_exclusion__succeeded;
    MR_Word apply_exclusion__V_11_11;
    MR_Word apply_exclusion__V_12_12;
    MR_Word apply_exclusion__V_13_13;
    MR_Box apply_exclusion__conv3_Own_9;
    MR_Box apply_exclusion__conv2_Desc_10;

    {
      apply_exclusion__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), apply_exclusion__V_11_11, 0) = ((MR_Box) (&apply_exclusion_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), apply_exclusion__V_11_11, 1) = ((MR_Box) (apply_exclusion__compute_parent_csd_prof_info_5_p_0_1));
      MR_hl_field(MR_mktag(0), apply_exclusion__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), apply_exclusion__V_11_11, 3) = ((MR_Box) (apply_exclusion__Deep_6));
      MR_hl_field(MR_mktag(0), apply_exclusion__V_11_11, 4) = ((MR_Box) (apply_exclusion__CalleePSPtr_7));
    }
    {
      apply_exclusion__V_12_12 = measurements__zero_own_prof_info_0_f_0();
    }
    {
      apply_exclusion__V_13_13 = measurements__zero_inherit_prof_info_0_f_0();
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, apply_exclusion__V_11_11, apply_exclusion__CSDPtrs_8, ((MR_Box) (apply_exclusion__V_12_12)), &apply_exclusion__conv3_Own_9, ((MR_Box) (apply_exclusion__V_13_13)), &apply_exclusion__conv2_Desc_10);
    }
    *apply_exclusion__Own_9 = ((MR_Word) apply_exclusion__conv3_Own_9);
    *apply_exclusion__Desc_10 = ((MR_Word) apply_exclusion__conv2_Desc_10);
  }
}

static MR_Box MR_CALL 
apply_exclusion__group_csds_by_clique_2_f_0_1(
  MR_Box apply_exclusion__closure_arg,
  MR_Box apply_exclusion__wrapper_arg_1,
  MR_Box apply_exclusion__wrapper_arg_2)
{
  {
    MR_Box apply_exclusion__wrapper_arg_3;
    MR_Box apply_exclusion__closure = apply_exclusion__closure_arg;
    MR_Word apply_exclusion__conv0_Map_9;

    {
      apply_exclusion__conv0_Map_9 = apply_exclusion__accumulate_csds_by_clique_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__closure, (MR_Integer) 3))), ((MR_Word) apply_exclusion__wrapper_arg_1), ((MR_Word) apply_exclusion__wrapper_arg_2));
    }
    apply_exclusion__wrapper_arg_3 = ((MR_Box) (apply_exclusion__conv0_Map_9));
    return apply_exclusion__wrapper_arg_3;
  }
}

MR_Word MR_CALL 
apply_exclusion__group_csds_by_clique_2_f_0(
  MR_Word apply_exclusion__Deep_4,
  MR_Word apply_exclusion__GroupCostCSDPtrs_5)
{
  {
    MR_bool apply_exclusion__succeeded;
    MR_Word apply_exclusion__Groups_6;
    MR_Word apply_exclusion__TypeCtorInfo_15_15;
    MR_Word apply_exclusion__TypeInfo_16_16;
    MR_Word apply_exclusion__GroupMap_7;
    MR_Word apply_exclusion__V_8_8;
    MR_Word apply_exclusion__V_9_9;
    MR_Box apply_exclusion__conv1_GroupMap_7;

    {
      apply_exclusion__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 0) = ((MR_Box) (&apply_exclusion_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 1) = ((MR_Box) (apply_exclusion__group_csds_by_clique_2_f_0_1));
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 3) = ((MR_Box) (apply_exclusion__Deep_4));
    }
    apply_exclusion__TypeCtorInfo_15_15 = (MR_Word) &profile__profile__type_ctor_info_clique_ptr_0;
    apply_exclusion__TypeInfo_16_16 = (MR_Word) &apply_exclusion_scalar_common_2[0];
    {
      apply_exclusion__V_9_9 = mercury__map__init_0_f_0(apply_exclusion__TypeCtorInfo_15_15, apply_exclusion__TypeInfo_16_16);
    }
    {
      apply_exclusion__conv1_GroupMap_7 = mercury__list__foldl_3_f_0((MR_Word) &apply_exclusion_scalar_common_1[0], (MR_Word) &apply_exclusion_scalar_common_1[4], apply_exclusion__V_8_8, apply_exclusion__GroupCostCSDPtrs_5, ((MR_Box) (apply_exclusion__V_9_9)));
    }
    apply_exclusion__GroupMap_7 = ((MR_Word) apply_exclusion__conv1_GroupMap_7);
    {
      mercury__map__to_assoc_list_2_p_0(apply_exclusion__TypeCtorInfo_15_15, apply_exclusion__TypeInfo_16_16, apply_exclusion__GroupMap_7, &apply_exclusion__Groups_6);
    }
    return apply_exclusion__Groups_6;
  }
}

static MR_Box MR_CALL 
apply_exclusion__group_csds_by_module_2_f_0_1(
  MR_Box apply_exclusion__closure_arg,
  MR_Box apply_exclusion__wrapper_arg_1,
  MR_Box apply_exclusion__wrapper_arg_2)
{
  {
    MR_Box apply_exclusion__wrapper_arg_3;
    MR_Box apply_exclusion__closure = apply_exclusion__closure_arg;
    MR_Word apply_exclusion__conv0_Map_9;

    {
      apply_exclusion__conv0_Map_9 = apply_exclusion__accumulate_csds_by_module_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__closure, (MR_Integer) 3))), ((MR_Word) apply_exclusion__wrapper_arg_1), ((MR_Word) apply_exclusion__wrapper_arg_2));
    }
    apply_exclusion__wrapper_arg_3 = ((MR_Box) (apply_exclusion__conv0_Map_9));
    return apply_exclusion__wrapper_arg_3;
  }
}

MR_Word MR_CALL 
apply_exclusion__group_csds_by_module_2_f_0(
  MR_Word apply_exclusion__Deep_4,
  MR_Word apply_exclusion__GroupCostCSDPtrs_5)
{
  {
    MR_bool apply_exclusion__succeeded;
    MR_Word apply_exclusion__Groups_6;
    MR_Word apply_exclusion__TypeCtorInfo_15_15;
    MR_Word apply_exclusion__TypeInfo_16_16;
    MR_Word apply_exclusion__GroupMap_7;
    MR_Word apply_exclusion__V_8_8;
    MR_Word apply_exclusion__V_9_9;
    MR_Box apply_exclusion__conv1_GroupMap_7;

    {
      apply_exclusion__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 0) = ((MR_Box) (&apply_exclusion_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 1) = ((MR_Box) (apply_exclusion__group_csds_by_module_2_f_0_1));
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 3) = ((MR_Box) (apply_exclusion__Deep_4));
    }
    apply_exclusion__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    apply_exclusion__TypeInfo_16_16 = (MR_Word) &apply_exclusion_scalar_common_2[0];
    {
      apply_exclusion__V_9_9 = mercury__map__init_0_f_0(apply_exclusion__TypeCtorInfo_15_15, apply_exclusion__TypeInfo_16_16);
    }
    {
      apply_exclusion__conv1_GroupMap_7 = mercury__list__foldl_3_f_0((MR_Word) &apply_exclusion_scalar_common_1[0], (MR_Word) &apply_exclusion_scalar_common_1[3], apply_exclusion__V_8_8, apply_exclusion__GroupCostCSDPtrs_5, ((MR_Box) (apply_exclusion__V_9_9)));
    }
    apply_exclusion__GroupMap_7 = ((MR_Word) apply_exclusion__conv1_GroupMap_7);
    {
      mercury__map__to_assoc_list_2_p_0(apply_exclusion__TypeCtorInfo_15_15, apply_exclusion__TypeInfo_16_16, apply_exclusion__GroupMap_7, &apply_exclusion__Groups_6);
    }
    return apply_exclusion__Groups_6;
  }
}

static MR_Box MR_CALL 
apply_exclusion__group_csds_by_procedure_2_f_0_1(
  MR_Box apply_exclusion__closure_arg,
  MR_Box apply_exclusion__wrapper_arg_1,
  MR_Box apply_exclusion__wrapper_arg_2)
{
  {
    MR_Box apply_exclusion__wrapper_arg_3;
    MR_Box apply_exclusion__closure = apply_exclusion__closure_arg;
    MR_Word apply_exclusion__conv0_Map_9;

    {
      apply_exclusion__conv0_Map_9 = apply_exclusion__accumulate_csds_by_procedure_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__closure, (MR_Integer) 3))), ((MR_Word) apply_exclusion__wrapper_arg_1), ((MR_Word) apply_exclusion__wrapper_arg_2));
    }
    apply_exclusion__wrapper_arg_3 = ((MR_Box) (apply_exclusion__conv0_Map_9));
    return apply_exclusion__wrapper_arg_3;
  }
}

MR_Word MR_CALL 
apply_exclusion__group_csds_by_procedure_2_f_0(
  MR_Word apply_exclusion__Deep_4,
  MR_Word apply_exclusion__GroupCostCSDPtrs_5)
{
  {
    MR_bool apply_exclusion__succeeded;
    MR_Word apply_exclusion__Groups_6;
    MR_Word apply_exclusion__TypeCtorInfo_15_15;
    MR_Word apply_exclusion__TypeInfo_16_16;
    MR_Word apply_exclusion__GroupMap_7;
    MR_Word apply_exclusion__V_8_8;
    MR_Word apply_exclusion__V_9_9;
    MR_Box apply_exclusion__conv1_GroupMap_7;

    {
      apply_exclusion__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 0) = ((MR_Box) (&apply_exclusion_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 1) = ((MR_Box) (apply_exclusion__group_csds_by_procedure_2_f_0_1));
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 3) = ((MR_Box) (apply_exclusion__Deep_4));
    }
    apply_exclusion__TypeCtorInfo_15_15 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
    apply_exclusion__TypeInfo_16_16 = (MR_Word) &apply_exclusion_scalar_common_2[0];
    {
      apply_exclusion__V_9_9 = mercury__map__init_0_f_0(apply_exclusion__TypeCtorInfo_15_15, apply_exclusion__TypeInfo_16_16);
    }
    {
      apply_exclusion__conv1_GroupMap_7 = mercury__list__foldl_3_f_0((MR_Word) &apply_exclusion_scalar_common_1[0], (MR_Word) &apply_exclusion_scalar_common_1[2], apply_exclusion__V_8_8, apply_exclusion__GroupCostCSDPtrs_5, ((MR_Box) (apply_exclusion__V_9_9)));
    }
    apply_exclusion__GroupMap_7 = ((MR_Word) apply_exclusion__conv1_GroupMap_7);
    {
      mercury__map__to_assoc_list_2_p_0(apply_exclusion__TypeCtorInfo_15_15, apply_exclusion__TypeInfo_16_16, apply_exclusion__GroupMap_7, &apply_exclusion__Groups_6);
    }
    return apply_exclusion__Groups_6;
  }
}

static MR_Box MR_CALL 
apply_exclusion__group_csds_by_call_site_2_f_0_1(
  MR_Box apply_exclusion__closure_arg,
  MR_Box apply_exclusion__wrapper_arg_1,
  MR_Box apply_exclusion__wrapper_arg_2)
{
  {
    MR_Box apply_exclusion__wrapper_arg_3;
    MR_Box apply_exclusion__closure = apply_exclusion__closure_arg;
    MR_Word apply_exclusion__conv0_Map_9;

    {
      apply_exclusion__conv0_Map_9 = apply_exclusion__accumulate_csds_by_call_site_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__closure, (MR_Integer) 3))), ((MR_Word) apply_exclusion__wrapper_arg_1), ((MR_Word) apply_exclusion__wrapper_arg_2));
    }
    apply_exclusion__wrapper_arg_3 = ((MR_Box) (apply_exclusion__conv0_Map_9));
    return apply_exclusion__wrapper_arg_3;
  }
}

MR_Word MR_CALL 
apply_exclusion__group_csds_by_call_site_2_f_0(
  MR_Word apply_exclusion__Deep_4,
  MR_Word apply_exclusion__GroupCostCSDPtrs_5)
{
  {
    MR_bool apply_exclusion__succeeded;
    MR_Word apply_exclusion__Groups_6;
    MR_Word apply_exclusion__TypeCtorInfo_15_15;
    MR_Word apply_exclusion__TypeInfo_16_16;
    MR_Word apply_exclusion__GroupMap_7;
    MR_Word apply_exclusion__V_8_8;
    MR_Word apply_exclusion__V_9_9;
    MR_Box apply_exclusion__conv1_GroupMap_7;

    {
      apply_exclusion__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 0) = ((MR_Box) (&apply_exclusion_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 1) = ((MR_Box) (apply_exclusion__group_csds_by_call_site_2_f_0_1));
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 3) = ((MR_Box) (apply_exclusion__Deep_4));
    }
    apply_exclusion__TypeCtorInfo_15_15 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
    apply_exclusion__TypeInfo_16_16 = (MR_Word) &apply_exclusion_scalar_common_2[0];
    {
      apply_exclusion__V_9_9 = mercury__map__init_0_f_0(apply_exclusion__TypeCtorInfo_15_15, apply_exclusion__TypeInfo_16_16);
    }
    {
      apply_exclusion__conv1_GroupMap_7 = mercury__list__foldl_3_f_0((MR_Word) &apply_exclusion_scalar_common_1[0], (MR_Word) &apply_exclusion_scalar_common_1[1], apply_exclusion__V_8_8, apply_exclusion__GroupCostCSDPtrs_5, ((MR_Box) (apply_exclusion__V_9_9)));
    }
    apply_exclusion__GroupMap_7 = ((MR_Word) apply_exclusion__conv1_GroupMap_7);
    {
      mercury__map__to_assoc_list_2_p_0(apply_exclusion__TypeCtorInfo_15_15, apply_exclusion__TypeInfo_16_16, apply_exclusion__GroupMap_7, &apply_exclusion__Groups_6);
    }
    return apply_exclusion__Groups_6;
  }
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

/* :- end_module apply_exclusion. */
