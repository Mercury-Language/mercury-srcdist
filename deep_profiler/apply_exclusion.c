/*
** Automatically generated from `apply_exclusion.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 77 "apply_exclusion.c"
static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 80 "apply_exclusion.c"
static const MR_FA_TypeInfo_Struct1 apply_exclusion__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 83 "apply_exclusion.c"
static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 86 "apply_exclusion.c"
static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 89 "apply_exclusion.c"
static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 92 "apply_exclusion.c"
static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_clique_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 161 "apply_exclusion.m"
static void MR_CALL 
apply_exclusion__compensate_using_comp_table_5_p_0(
#line 161 "apply_exclusion.m"
  MR_Word apply_exclusion__Deep_6,
#line 161 "apply_exclusion.m"
  MR_Word apply_exclusion__CallerPSPtr_7,
#line 161 "apply_exclusion.m"
  MR_Word apply_exclusion__PDPtr_8,
#line 161 "apply_exclusion.m"
  MR_Word apply_exclusion__Desc0_9,
#line 161 "apply_exclusion.m"
  MR_Word * apply_exclusion__Desc_10);

#line 157 "apply_exclusion.m"
static void MR_CALL 
apply_exclusion__accumulate_parent_csd_prof_info_7_p_0_1(
#line 157 "apply_exclusion.m"
  MR_Box apply_exclusion__closure_arg,
#line 157 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_1,
#line 157 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_2,
#line 157 "apply_exclusion.m"
  MR_Box * apply_exclusion__wrapper_arg_3);

#line 137 "apply_exclusion.m"
static void MR_CALL 
apply_exclusion__accumulate_parent_csd_prof_info_7_p_0(
#line 137 "apply_exclusion.m"
  MR_Word apply_exclusion__Deep_8,
#line 137 "apply_exclusion.m"
  MR_Word apply_exclusion__CallerPSPtr_9,
#line 137 "apply_exclusion.m"
  MR_Word apply_exclusion__CSDPtr_10,
#line 137 "apply_exclusion.m"
  MR_Word apply_exclusion__Own0_11,
#line 137 "apply_exclusion.m"
  MR_Word * apply_exclusion__Own_12,
#line 137 "apply_exclusion.m"
  MR_Word apply_exclusion__Desc0_13,
#line 137 "apply_exclusion.m"
  MR_Word * apply_exclusion__Desc_14);

#line 117 "apply_exclusion.m"
static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_clique_3_f_0(
#line 117 "apply_exclusion.m"
  MR_Word apply_exclusion__Deep_5,
#line 117 "apply_exclusion.m"
  MR_Word apply_exclusion__HeadVar__2_2,
#line 117 "apply_exclusion.m"
  MR_Word apply_exclusion__Map0_8);

#line 101 "apply_exclusion.m"
static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_module_3_f_0(
#line 101 "apply_exclusion.m"
  MR_Word apply_exclusion__Deep_5,
#line 101 "apply_exclusion.m"
  MR_Word apply_exclusion__HeadVar__2_2,
#line 101 "apply_exclusion.m"
  MR_Word apply_exclusion__Map0_8);

#line 87 "apply_exclusion.m"
static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_procedure_3_f_0(
#line 87 "apply_exclusion.m"
  MR_Word apply_exclusion__Deep_5,
#line 87 "apply_exclusion.m"
  MR_Word apply_exclusion__HeadVar__2_2,
#line 87 "apply_exclusion.m"
  MR_Word apply_exclusion__Map0_8);

#line 75 "apply_exclusion.m"
static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_call_site_3_f_0(
#line 75 "apply_exclusion.m"
  MR_Word apply_exclusion__Deep_5,
#line 75 "apply_exclusion.m"
  MR_Word apply_exclusion__HeadVar__2_2,
#line 75 "apply_exclusion.m"
  MR_Word apply_exclusion__Map0_8);

#line 134 "apply_exclusion.m"
static void MR_CALL 
apply_exclusion__compute_parent_csd_prof_info_5_p_0_1(
#line 134 "apply_exclusion.m"
  MR_Box apply_exclusion__closure_arg,
#line 134 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_1,
#line 134 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_2,
#line 134 "apply_exclusion.m"
  MR_Box * apply_exclusion__wrapper_arg_3,
#line 134 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_4,
#line 134 "apply_exclusion.m"
  MR_Box * apply_exclusion__wrapper_arg_5);

#line 69 "apply_exclusion.m"
static MR_Box MR_CALL 
apply_exclusion__group_csds_by_clique_2_f_0_1(
#line 69 "apply_exclusion.m"
  MR_Box apply_exclusion__closure_arg,
#line 69 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_1,
#line 69 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_2);

#line 64 "apply_exclusion.m"
static MR_Box MR_CALL 
apply_exclusion__group_csds_by_module_2_f_0_1(
#line 64 "apply_exclusion.m"
  MR_Box apply_exclusion__closure_arg,
#line 64 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_1,
#line 64 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_2);

#line 59 "apply_exclusion.m"
static MR_Box MR_CALL 
apply_exclusion__group_csds_by_procedure_2_f_0_1(
#line 59 "apply_exclusion.m"
  MR_Box apply_exclusion__closure_arg,
#line 59 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_1,
#line 59 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_2);

#line 54 "apply_exclusion.m"
static MR_Box MR_CALL 
apply_exclusion__group_csds_by_call_site_2_f_0_1(
#line 54 "apply_exclusion.m"
  MR_Box apply_exclusion__closure_arg,
#line 54 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_1,
#line 54 "apply_exclusion.m"
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



#include "profile.mh"
#include "profile.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 382 "apply_exclusion.c"
static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0,
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 391 "apply_exclusion.c"
static const MR_FA_TypeInfo_Struct1 apply_exclusion__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 399 "apply_exclusion.c"
static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
    (MR_PseudoTypeInfo) &apply_exclusion__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 408 "apply_exclusion.c"
static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &apply_exclusion__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 417 "apply_exclusion.c"
static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &apply_exclusion__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 426 "apply_exclusion.c"
static const MR_FA_PseudoTypeInfo_Struct2 apply_exclusion__tree234__pti_tree234_2__plain_profile__type_ctor_info_clique_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
    (MR_PseudoTypeInfo) &apply_exclusion__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 161 "apply_exclusion.m"
static void MR_CALL 
apply_exclusion__compensate_using_comp_table_5_p_0(
#line 161 "apply_exclusion.m"
  MR_Word apply_exclusion__Deep_6,
#line 161 "apply_exclusion.m"
  MR_Word apply_exclusion__CallerPSPtr_7,
#line 161 "apply_exclusion.m"
  MR_Word apply_exclusion__PDPtr_8,
#line 161 "apply_exclusion.m"
  MR_Word apply_exclusion__Desc0_9,
#line 161 "apply_exclusion.m"
  MR_Word * apply_exclusion__Desc_10)
#line 161 "apply_exclusion.m"
{
#line 165 "apply_exclusion.m"
  {
#line 165 "apply_exclusion.m"
    MR_bool apply_exclusion__succeeded;
#line 165 "apply_exclusion.m"
    MR_Word apply_exclusion__CompTableArray_11;
#line 169 "apply_exclusion.m"
    MR_Word apply_exclusion__InnerTotal_12;
#line 167 "apply_exclusion.m"
    MR_Box apply_exclusion__conv0_InnerTotal_12;

#line 166 "apply_exclusion.m"
    {
#line 166 "apply_exclusion.m"
      profile__deep_lookup_pd_comp_table_3_p_0(apply_exclusion__Deep_6, apply_exclusion__PDPtr_8, &apply_exclusion__CompTableArray_11);
    }
#line 167 "apply_exclusion.m"
    {
#line 167 "apply_exclusion.m"
      apply_exclusion__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, apply_exclusion__CompTableArray_11, ((MR_Box) (apply_exclusion__CallerPSPtr_7)), &apply_exclusion__conv0_InnerTotal_12);
    }
#line 167 "apply_exclusion.m"
    if (apply_exclusion__succeeded)
#line 167 "apply_exclusion.m"
      {
#line 167 "apply_exclusion.m"
        apply_exclusion__InnerTotal_12 = ((MR_Word) apply_exclusion__conv0_InnerTotal_12);
#line 167 "apply_exclusion.m"
        apply_exclusion__succeeded = MR_TRUE;
#line 167 "apply_exclusion.m"
      }
#line 169 "apply_exclusion.m"
    if (apply_exclusion__succeeded)
#line 168 "apply_exclusion.m"
      {
#line 168 "apply_exclusion.m"
        *apply_exclusion__Desc_10 = measurements__subtract_inherit_from_inherit_2_f_0(apply_exclusion__InnerTotal_12, apply_exclusion__Desc0_9);
      }
#line 169 "apply_exclusion.m"
    else
#line 170 "apply_exclusion.m"
      *apply_exclusion__Desc_10 = apply_exclusion__Desc0_9;
#line 165 "apply_exclusion.m"
  }
#line 161 "apply_exclusion.m"
}

#line 157 "apply_exclusion.m"
static void MR_CALL 
apply_exclusion__accumulate_parent_csd_prof_info_7_p_0_1(
#line 157 "apply_exclusion.m"
  MR_Box apply_exclusion__closure_arg,
#line 157 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_1,
#line 157 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_2,
#line 157 "apply_exclusion.m"
  MR_Box * apply_exclusion__wrapper_arg_3)
#line 157 "apply_exclusion.m"
{
#line 157 "apply_exclusion.m"
  {
#line 157 "apply_exclusion.m"
    MR_Box apply_exclusion__closure = apply_exclusion__closure_arg;
#line 157 "apply_exclusion.m"
    MR_Word apply_exclusion__conv0_Desc_10;

#line 157 "apply_exclusion.m"
    {
#line 157 "apply_exclusion.m"
      apply_exclusion__compensate_using_comp_table_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__closure, (MR_Integer) 4))), ((MR_Word) apply_exclusion__wrapper_arg_1), ((MR_Word) apply_exclusion__wrapper_arg_2), &apply_exclusion__conv0_Desc_10);
    }
#line 157 "apply_exclusion.m"
    *apply_exclusion__wrapper_arg_3 = ((MR_Box) (apply_exclusion__conv0_Desc_10));
#line 157 "apply_exclusion.m"
  }
#line 157 "apply_exclusion.m"
}

#line 137 "apply_exclusion.m"
static void MR_CALL 
apply_exclusion__accumulate_parent_csd_prof_info_7_p_0(
#line 137 "apply_exclusion.m"
  MR_Word apply_exclusion__Deep_8,
#line 137 "apply_exclusion.m"
  MR_Word apply_exclusion__CallerPSPtr_9,
#line 137 "apply_exclusion.m"
  MR_Word apply_exclusion__CSDPtr_10,
#line 137 "apply_exclusion.m"
  MR_Word apply_exclusion__Own0_11,
#line 137 "apply_exclusion.m"
  MR_Word * apply_exclusion__Own_12,
#line 137 "apply_exclusion.m"
  MR_Word apply_exclusion__Desc0_13,
#line 137 "apply_exclusion.m"
  MR_Word * apply_exclusion__Desc_14)
#line 137 "apply_exclusion.m"
{
#line 143 "apply_exclusion.m"
  {
#line 143 "apply_exclusion.m"
    MR_bool apply_exclusion__succeeded;
#line 143 "apply_exclusion.m"
    MR_Word apply_exclusion__CSD_15;
#line 145 "apply_exclusion.m"
    MR_Word apply_exclusion__V_21_21;
#line 145 "apply_exclusion.m"
    MR_Word apply_exclusion__V_24_24;
#line 145 "apply_exclusion.m"
    MR_Integer apply_exclusion__V_37_37;
#line 145 "apply_exclusion.m"
    MR_Integer apply_exclusion__V_38_38;
#line 145 "apply_exclusion.m"
    MR_Word apply_exclusion__V_25_25;

#line 144 "apply_exclusion.m"
    {
#line 144 "apply_exclusion.m"
      profile__deep_lookup_call_site_dynamics_3_p_0(apply_exclusion__Deep_8, apply_exclusion__CSDPtr_10, &apply_exclusion__CSD_15);
    }
#line 145 "apply_exclusion.m"
    apply_exclusion__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__CSD_15, (MR_Integer) 0)));
#line 145 "apply_exclusion.m"
    apply_exclusion__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__CSD_15, (MR_Integer) 1)));
#line 145 "apply_exclusion.m"
    apply_exclusion__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__CSD_15, (MR_Integer) 2)));
#line 145 "apply_exclusion.m"
    apply_exclusion__V_37_37 = (MR_Integer) apply_exclusion__V_21_21;
#line 145 "apply_exclusion.m"
    apply_exclusion__V_38_38 = (MR_Integer) apply_exclusion__V_24_24;
#line 145 "apply_exclusion.m"
    apply_exclusion__succeeded = (apply_exclusion__V_37_37 == apply_exclusion__V_38_38);
#line 149 "apply_exclusion.m"
    if (apply_exclusion__succeeded)
#line 147 "apply_exclusion.m"
      {
#line 147 "apply_exclusion.m"
        *apply_exclusion__Own_12 = apply_exclusion__Own0_11;
#line 148 "apply_exclusion.m"
        *apply_exclusion__Desc_14 = apply_exclusion__Desc0_13;
#line 147 "apply_exclusion.m"
      }
#line 149 "apply_exclusion.m"
    else
#line 150 "apply_exclusion.m"
      {
#line 150 "apply_exclusion.m"
        MR_Word apply_exclusion__CSDOwn_16;
#line 150 "apply_exclusion.m"
        MR_Word apply_exclusion__CSDDesc_17;
#line 150 "apply_exclusion.m"
        MR_Word apply_exclusion__Desc1_18;
#line 150 "apply_exclusion.m"
        MR_Word apply_exclusion__CalleeCliquePtr_19;
#line 150 "apply_exclusion.m"
        MR_Word apply_exclusion__CalleeCliquePDPtrs_20;
#line 150 "apply_exclusion.m"
        MR_Word apply_exclusion__V_22_22;
#line 150 "apply_exclusion.m"
        MR_Word apply_exclusion__V_23_23;
#line 155 "apply_exclusion.m"
        MR_Word apply_exclusion__V_28_28;
#line 155 "apply_exclusion.m"
        MR_Word apply_exclusion__V_29_29;
#line 157 "apply_exclusion.m"
        MR_Box apply_exclusion__conv1_Desc_14;

#line 150 "apply_exclusion.m"
        {
#line 150 "apply_exclusion.m"
          profile__deep_lookup_csd_own_3_p_0(apply_exclusion__Deep_8, apply_exclusion__CSDPtr_10, &apply_exclusion__CSDOwn_16);
        }
#line 151 "apply_exclusion.m"
        {
#line 151 "apply_exclusion.m"
          profile__deep_lookup_csd_desc_3_p_0(apply_exclusion__Deep_8, apply_exclusion__CSDPtr_10, &apply_exclusion__CSDDesc_17);
        }
#line 152 "apply_exclusion.m"
        {
#line 152 "apply_exclusion.m"
          *apply_exclusion__Own_12 = measurements__add_own_to_own_2_f_0(apply_exclusion__Own0_11, apply_exclusion__CSDOwn_16);
        }
#line 153 "apply_exclusion.m"
        {
#line 153 "apply_exclusion.m"
          apply_exclusion__Desc1_18 = measurements__add_inherit_to_inherit_2_f_0(apply_exclusion__Desc0_13, apply_exclusion__CSDDesc_17);
        }
#line 155 "apply_exclusion.m"
        apply_exclusion__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__CSD_15, (MR_Integer) 0)));
#line 155 "apply_exclusion.m"
        apply_exclusion__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__CSD_15, (MR_Integer) 1)));
#line 155 "apply_exclusion.m"
        apply_exclusion__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__CSD_15, (MR_Integer) 2)));
#line 155 "apply_exclusion.m"
        {
#line 155 "apply_exclusion.m"
          profile__deep_lookup_clique_index_3_p_0(apply_exclusion__Deep_8, apply_exclusion__V_22_22, &apply_exclusion__CalleeCliquePtr_19);
        }
#line 156 "apply_exclusion.m"
        {
#line 156 "apply_exclusion.m"
          profile__deep_lookup_clique_members_3_p_0(apply_exclusion__Deep_8, apply_exclusion__CalleeCliquePtr_19, &apply_exclusion__CalleeCliquePDPtrs_20);
        }
#line 157 "apply_exclusion.m"
        {
#line 157 "apply_exclusion.m"
          apply_exclusion__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 157 "apply_exclusion.m"
          MR_hl_field(MR_mktag(0), apply_exclusion__V_23_23, 0) = ((MR_Box) (&apply_exclusion_scalar_common_5[0]));
#line 157 "apply_exclusion.m"
          MR_hl_field(MR_mktag(0), apply_exclusion__V_23_23, 1) = ((MR_Box) (apply_exclusion__accumulate_parent_csd_prof_info_7_p_0_1));
#line 157 "apply_exclusion.m"
          MR_hl_field(MR_mktag(0), apply_exclusion__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 157 "apply_exclusion.m"
          MR_hl_field(MR_mktag(0), apply_exclusion__V_23_23, 3) = ((MR_Box) (apply_exclusion__Deep_8));
#line 157 "apply_exclusion.m"
          MR_hl_field(MR_mktag(0), apply_exclusion__V_23_23, 4) = ((MR_Box) (apply_exclusion__CallerPSPtr_9));
#line 157 "apply_exclusion.m"
        }
#line 157 "apply_exclusion.m"
        {
#line 157 "apply_exclusion.m"
          mercury__list__foldl_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, apply_exclusion__V_23_23, apply_exclusion__CalleeCliquePDPtrs_20, ((MR_Box) (apply_exclusion__Desc1_18)), &apply_exclusion__conv1_Desc_14);
        }
#line 157 "apply_exclusion.m"
        *apply_exclusion__Desc_14 = ((MR_Word) apply_exclusion__conv1_Desc_14);
#line 150 "apply_exclusion.m"
      }
#line 143 "apply_exclusion.m"
  }
#line 137 "apply_exclusion.m"
}

#line 117 "apply_exclusion.m"
static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_clique_3_f_0(
#line 117 "apply_exclusion.m"
  MR_Word apply_exclusion__Deep_5,
#line 117 "apply_exclusion.m"
  MR_Word apply_exclusion__HeadVar__2_2,
#line 117 "apply_exclusion.m"
  MR_Word apply_exclusion__Map0_8)
#line 117 "apply_exclusion.m"
{
#line 121 "apply_exclusion.m"
  {
#line 121 "apply_exclusion.m"
    MR_bool apply_exclusion__succeeded;
#line 121 "apply_exclusion.m"
    MR_Word apply_exclusion__Map_9;
#line 121 "apply_exclusion.m"
    MR_Word apply_exclusion__GroupCSDPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__2_2, (MR_Integer) 0)));
#line 121 "apply_exclusion.m"
    MR_Word apply_exclusion__CostCSDPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__2_2, (MR_Integer) 1)));
#line 121 "apply_exclusion.m"
    MR_Word apply_exclusion__GroupCSD_10;
#line 121 "apply_exclusion.m"
    MR_Word apply_exclusion__CallerPDPtr_11;
#line 121 "apply_exclusion.m"
    MR_Word apply_exclusion__CliquePtr_12;
#line 123 "apply_exclusion.m"
    MR_Word apply_exclusion__V_17_17;
#line 123 "apply_exclusion.m"
    MR_Word apply_exclusion__V_18_18;
#line 127 "apply_exclusion.m"
    MR_Word apply_exclusion__CostCSDPtrs0_13;
#line 125 "apply_exclusion.m"
    MR_Box apply_exclusion__conv0_CostCSDPtrs0_13;

#line 122 "apply_exclusion.m"
    {
#line 122 "apply_exclusion.m"
      profile__deep_lookup_call_site_dynamics_3_p_0(apply_exclusion__Deep_5, apply_exclusion__GroupCSDPtr_6, &apply_exclusion__GroupCSD_10);
    }
#line 123 "apply_exclusion.m"
    apply_exclusion__CallerPDPtr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSD_10, (MR_Integer) 0)));
#line 123 "apply_exclusion.m"
    apply_exclusion__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSD_10, (MR_Integer) 1)));
#line 123 "apply_exclusion.m"
    apply_exclusion__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSD_10, (MR_Integer) 2)));
#line 124 "apply_exclusion.m"
    {
#line 124 "apply_exclusion.m"
      profile__deep_lookup_clique_index_3_p_0(apply_exclusion__Deep_5, apply_exclusion__CallerPDPtr_11, &apply_exclusion__CliquePtr_12);
    }
#line 125 "apply_exclusion.m"
    {
#line 125 "apply_exclusion.m"
      apply_exclusion__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, (MR_Word) &apply_exclusion_scalar_common_2[0], apply_exclusion__Map0_8, ((MR_Box) (apply_exclusion__CliquePtr_12)), &apply_exclusion__conv0_CostCSDPtrs0_13);
    }
#line 125 "apply_exclusion.m"
    if (apply_exclusion__succeeded)
#line 125 "apply_exclusion.m"
      {
#line 125 "apply_exclusion.m"
        apply_exclusion__CostCSDPtrs0_13 = ((MR_Word) apply_exclusion__conv0_CostCSDPtrs0_13);
#line 125 "apply_exclusion.m"
        apply_exclusion__succeeded = MR_TRUE;
#line 125 "apply_exclusion.m"
      }
#line 127 "apply_exclusion.m"
    if (apply_exclusion__succeeded)
#line 126 "apply_exclusion.m"
      {
#line 126 "apply_exclusion.m"
        MR_Word apply_exclusion__V_14_14;

#line 126 "apply_exclusion.m"
        {
#line 126 "apply_exclusion.m"
          apply_exclusion__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 126 "apply_exclusion.m"
          MR_hl_field(MR_mktag(1), apply_exclusion__V_14_14, 0) = ((MR_Box) (apply_exclusion__CostCSDPtr_7));
#line 126 "apply_exclusion.m"
          MR_hl_field(MR_mktag(1), apply_exclusion__V_14_14, 1) = ((MR_Box) (apply_exclusion__CostCSDPtrs0_13));
#line 126 "apply_exclusion.m"
        }
#line 126 "apply_exclusion.m"
        {
#line 126 "apply_exclusion.m"
          mercury__map__det_update_4_p_0((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, (MR_Word) &apply_exclusion_scalar_common_2[0], ((MR_Box) (apply_exclusion__CliquePtr_12)), ((MR_Box) (apply_exclusion__V_14_14)), apply_exclusion__Map0_8, &apply_exclusion__Map_9);
        }
#line 126 "apply_exclusion.m"
      }
#line 127 "apply_exclusion.m"
    else
#line 128 "apply_exclusion.m"
      {
#line 128 "apply_exclusion.m"
        MR_Word apply_exclusion__V_15_15;

#line 128 "apply_exclusion.m"
        {
#line 128 "apply_exclusion.m"
          apply_exclusion__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 128 "apply_exclusion.m"
          MR_hl_field(MR_mktag(1), apply_exclusion__V_15_15, 0) = ((MR_Box) (apply_exclusion__CostCSDPtr_7));
#line 128 "apply_exclusion.m"
          MR_hl_field(MR_mktag(1), apply_exclusion__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 128 "apply_exclusion.m"
        }
#line 128 "apply_exclusion.m"
        {
#line 128 "apply_exclusion.m"
          mercury__map__det_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, (MR_Word) &apply_exclusion_scalar_common_2[0], ((MR_Box) (apply_exclusion__CliquePtr_12)), ((MR_Box) (apply_exclusion__V_15_15)), apply_exclusion__Map0_8, &apply_exclusion__Map_9);
        }
#line 128 "apply_exclusion.m"
      }
#line 121 "apply_exclusion.m"
    return apply_exclusion__Map_9;
#line 121 "apply_exclusion.m"
  }
#line 117 "apply_exclusion.m"
}

#line 101 "apply_exclusion.m"
static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_module_3_f_0(
#line 101 "apply_exclusion.m"
  MR_Word apply_exclusion__Deep_5,
#line 101 "apply_exclusion.m"
  MR_Word apply_exclusion__HeadVar__2_2,
#line 101 "apply_exclusion.m"
  MR_Word apply_exclusion__Map0_8)
#line 101 "apply_exclusion.m"
{
#line 105 "apply_exclusion.m"
  {
#line 105 "apply_exclusion.m"
    MR_bool apply_exclusion__succeeded;
#line 105 "apply_exclusion.m"
    MR_Word apply_exclusion__Map_9;
#line 105 "apply_exclusion.m"
    MR_Word apply_exclusion__GroupCSDPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__2_2, (MR_Integer) 0)));
#line 105 "apply_exclusion.m"
    MR_Word apply_exclusion__CostCSDPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__2_2, (MR_Integer) 1)));
#line 105 "apply_exclusion.m"
    MR_Word apply_exclusion__GroupCSSPtr_10;
#line 105 "apply_exclusion.m"
    MR_Word apply_exclusion__GroupCSS_11;
#line 105 "apply_exclusion.m"
    MR_Word apply_exclusion__GroupPSPtr_12;
#line 105 "apply_exclusion.m"
    MR_Word apply_exclusion__GroupPS_13;
#line 105 "apply_exclusion.m"
    MR_String apply_exclusion__GroupModuleName_14;
#line 108 "apply_exclusion.m"
    MR_Integer apply_exclusion__V_19_19;
#line 108 "apply_exclusion.m"
    MR_Word apply_exclusion__V_20_20;
#line 108 "apply_exclusion.m"
    MR_Integer apply_exclusion__V_21_21;
#line 108 "apply_exclusion.m"
    MR_Word apply_exclusion__V_22_22;
#line 110 "apply_exclusion.m"
    MR_Word apply_exclusion__V_23_23;
#line 110 "apply_exclusion.m"
    MR_String apply_exclusion__V_24_24;
#line 110 "apply_exclusion.m"
    MR_String apply_exclusion__V_25_25;
#line 110 "apply_exclusion.m"
    MR_String apply_exclusion__V_26_26;
#line 110 "apply_exclusion.m"
    MR_String apply_exclusion__V_27_27;
#line 110 "apply_exclusion.m"
    MR_Integer apply_exclusion__V_28_28;
#line 110 "apply_exclusion.m"
    MR_Word apply_exclusion__V_29_29;
#line 110 "apply_exclusion.m"
    MR_ArrayPtr apply_exclusion__V_30_30;
#line 110 "apply_exclusion.m"
    MR_ArrayPtr apply_exclusion__V_31_31;
#line 110 "apply_exclusion.m"
    MR_Word apply_exclusion__V_32_32;
#line 110 "apply_exclusion.m"
    MR_Word apply_exclusion__V_33_33;
#line 113 "apply_exclusion.m"
    MR_Word apply_exclusion__CostCSDPtrs0_15;
#line 111 "apply_exclusion.m"
    MR_Box apply_exclusion__conv0_CostCSDPtrs0_15;

#line 106 "apply_exclusion.m"
    {
#line 106 "apply_exclusion.m"
      profile__deep_lookup_call_site_static_map_3_p_0(apply_exclusion__Deep_5, apply_exclusion__GroupCSDPtr_6, &apply_exclusion__GroupCSSPtr_10);
    }
#line 107 "apply_exclusion.m"
    {
#line 107 "apply_exclusion.m"
      profile__deep_lookup_call_site_statics_3_p_0(apply_exclusion__Deep_5, apply_exclusion__GroupCSSPtr_10, &apply_exclusion__GroupCSS_11);
    }
#line 108 "apply_exclusion.m"
    apply_exclusion__GroupPSPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSS_11, (MR_Integer) 0)));
#line 108 "apply_exclusion.m"
    apply_exclusion__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSS_11, (MR_Integer) 1)));
#line 108 "apply_exclusion.m"
    apply_exclusion__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSS_11, (MR_Integer) 2)));
#line 108 "apply_exclusion.m"
    apply_exclusion__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSS_11, (MR_Integer) 3)));
#line 108 "apply_exclusion.m"
    apply_exclusion__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSS_11, (MR_Integer) 4)));
#line 109 "apply_exclusion.m"
    {
#line 109 "apply_exclusion.m"
      profile__deep_lookup_proc_statics_3_p_0(apply_exclusion__Deep_5, apply_exclusion__GroupPSPtr_12, &apply_exclusion__GroupPS_13);
    }
#line 110 "apply_exclusion.m"
    apply_exclusion__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 0)));
#line 110 "apply_exclusion.m"
    apply_exclusion__GroupModuleName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 1)));
#line 110 "apply_exclusion.m"
    apply_exclusion__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 2)));
#line 110 "apply_exclusion.m"
    apply_exclusion__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 3)));
#line 110 "apply_exclusion.m"
    apply_exclusion__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 4)));
#line 110 "apply_exclusion.m"
    apply_exclusion__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 5)));
#line 110 "apply_exclusion.m"
    apply_exclusion__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 6)));
#line 110 "apply_exclusion.m"
    apply_exclusion__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 7)));
#line 110 "apply_exclusion.m"
    apply_exclusion__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 8)));
#line 110 "apply_exclusion.m"
    apply_exclusion__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 9)));
#line 110 "apply_exclusion.m"
    apply_exclusion__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 10)));
#line 110 "apply_exclusion.m"
    apply_exclusion__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupPS_13, (MR_Integer) 11)));
#line 111 "apply_exclusion.m"
    {
#line 111 "apply_exclusion.m"
      apply_exclusion__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &apply_exclusion_scalar_common_2[0], apply_exclusion__Map0_8, ((MR_Box) (apply_exclusion__GroupModuleName_14)), &apply_exclusion__conv0_CostCSDPtrs0_15);
    }
#line 111 "apply_exclusion.m"
    if (apply_exclusion__succeeded)
#line 111 "apply_exclusion.m"
      {
#line 111 "apply_exclusion.m"
        apply_exclusion__CostCSDPtrs0_15 = ((MR_Word) apply_exclusion__conv0_CostCSDPtrs0_15);
#line 111 "apply_exclusion.m"
        apply_exclusion__succeeded = MR_TRUE;
#line 111 "apply_exclusion.m"
      }
#line 113 "apply_exclusion.m"
    if (apply_exclusion__succeeded)
#line 112 "apply_exclusion.m"
      {
#line 112 "apply_exclusion.m"
        MR_Word apply_exclusion__V_16_16;

#line 112 "apply_exclusion.m"
        {
#line 112 "apply_exclusion.m"
          apply_exclusion__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "apply_exclusion.m"
          MR_hl_field(MR_mktag(1), apply_exclusion__V_16_16, 0) = ((MR_Box) (apply_exclusion__CostCSDPtr_7));
#line 112 "apply_exclusion.m"
          MR_hl_field(MR_mktag(1), apply_exclusion__V_16_16, 1) = ((MR_Box) (apply_exclusion__CostCSDPtrs0_15));
#line 112 "apply_exclusion.m"
        }
#line 112 "apply_exclusion.m"
        {
#line 112 "apply_exclusion.m"
          mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &apply_exclusion_scalar_common_2[0], ((MR_Box) (apply_exclusion__GroupModuleName_14)), ((MR_Box) (apply_exclusion__V_16_16)), apply_exclusion__Map0_8, &apply_exclusion__Map_9);
        }
#line 112 "apply_exclusion.m"
      }
#line 113 "apply_exclusion.m"
    else
#line 114 "apply_exclusion.m"
      {
#line 114 "apply_exclusion.m"
        MR_Word apply_exclusion__V_17_17;

#line 114 "apply_exclusion.m"
        {
#line 114 "apply_exclusion.m"
          apply_exclusion__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 114 "apply_exclusion.m"
          MR_hl_field(MR_mktag(1), apply_exclusion__V_17_17, 0) = ((MR_Box) (apply_exclusion__CostCSDPtr_7));
#line 114 "apply_exclusion.m"
          MR_hl_field(MR_mktag(1), apply_exclusion__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 114 "apply_exclusion.m"
        }
#line 114 "apply_exclusion.m"
        {
#line 114 "apply_exclusion.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &apply_exclusion_scalar_common_2[0], ((MR_Box) (apply_exclusion__GroupModuleName_14)), ((MR_Box) (apply_exclusion__V_17_17)), apply_exclusion__Map0_8, &apply_exclusion__Map_9);
        }
#line 114 "apply_exclusion.m"
      }
#line 105 "apply_exclusion.m"
    return apply_exclusion__Map_9;
#line 105 "apply_exclusion.m"
  }
#line 101 "apply_exclusion.m"
}

#line 87 "apply_exclusion.m"
static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_procedure_3_f_0(
#line 87 "apply_exclusion.m"
  MR_Word apply_exclusion__Deep_5,
#line 87 "apply_exclusion.m"
  MR_Word apply_exclusion__HeadVar__2_2,
#line 87 "apply_exclusion.m"
  MR_Word apply_exclusion__Map0_8)
#line 87 "apply_exclusion.m"
{
#line 91 "apply_exclusion.m"
  {
#line 91 "apply_exclusion.m"
    MR_bool apply_exclusion__succeeded;
#line 91 "apply_exclusion.m"
    MR_Word apply_exclusion__Map_9;
#line 91 "apply_exclusion.m"
    MR_Word apply_exclusion__GroupCSDPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__2_2, (MR_Integer) 0)));
#line 91 "apply_exclusion.m"
    MR_Word apply_exclusion__CostCSDPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__2_2, (MR_Integer) 1)));
#line 91 "apply_exclusion.m"
    MR_Word apply_exclusion__GroupCSSPtr_10;
#line 91 "apply_exclusion.m"
    MR_Word apply_exclusion__GroupCSS_11;
#line 91 "apply_exclusion.m"
    MR_Word apply_exclusion__GroupPSPtr_12;
#line 94 "apply_exclusion.m"
    MR_Integer apply_exclusion__V_17_17;
#line 94 "apply_exclusion.m"
    MR_Word apply_exclusion__V_18_18;
#line 94 "apply_exclusion.m"
    MR_Integer apply_exclusion__V_19_19;
#line 94 "apply_exclusion.m"
    MR_Word apply_exclusion__V_20_20;
#line 97 "apply_exclusion.m"
    MR_Word apply_exclusion__CostCSDPtrs0_13;
#line 95 "apply_exclusion.m"
    MR_Box apply_exclusion__conv0_CostCSDPtrs0_13;

#line 92 "apply_exclusion.m"
    {
#line 92 "apply_exclusion.m"
      profile__deep_lookup_call_site_static_map_3_p_0(apply_exclusion__Deep_5, apply_exclusion__GroupCSDPtr_6, &apply_exclusion__GroupCSSPtr_10);
    }
#line 93 "apply_exclusion.m"
    {
#line 93 "apply_exclusion.m"
      profile__deep_lookup_call_site_statics_3_p_0(apply_exclusion__Deep_5, apply_exclusion__GroupCSSPtr_10, &apply_exclusion__GroupCSS_11);
    }
#line 94 "apply_exclusion.m"
    apply_exclusion__GroupPSPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSS_11, (MR_Integer) 0)));
#line 94 "apply_exclusion.m"
    apply_exclusion__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSS_11, (MR_Integer) 1)));
#line 94 "apply_exclusion.m"
    apply_exclusion__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSS_11, (MR_Integer) 2)));
#line 94 "apply_exclusion.m"
    apply_exclusion__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSS_11, (MR_Integer) 3)));
#line 94 "apply_exclusion.m"
    apply_exclusion__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__GroupCSS_11, (MR_Integer) 4)));
#line 95 "apply_exclusion.m"
    {
#line 95 "apply_exclusion.m"
      apply_exclusion__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &apply_exclusion_scalar_common_2[0], apply_exclusion__Map0_8, ((MR_Box) (apply_exclusion__GroupPSPtr_12)), &apply_exclusion__conv0_CostCSDPtrs0_13);
    }
#line 95 "apply_exclusion.m"
    if (apply_exclusion__succeeded)
#line 95 "apply_exclusion.m"
      {
#line 95 "apply_exclusion.m"
        apply_exclusion__CostCSDPtrs0_13 = ((MR_Word) apply_exclusion__conv0_CostCSDPtrs0_13);
#line 95 "apply_exclusion.m"
        apply_exclusion__succeeded = MR_TRUE;
#line 95 "apply_exclusion.m"
      }
#line 97 "apply_exclusion.m"
    if (apply_exclusion__succeeded)
#line 96 "apply_exclusion.m"
      {
#line 96 "apply_exclusion.m"
        MR_Word apply_exclusion__V_14_14;

#line 96 "apply_exclusion.m"
        {
#line 96 "apply_exclusion.m"
          apply_exclusion__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 96 "apply_exclusion.m"
          MR_hl_field(MR_mktag(1), apply_exclusion__V_14_14, 0) = ((MR_Box) (apply_exclusion__CostCSDPtr_7));
#line 96 "apply_exclusion.m"
          MR_hl_field(MR_mktag(1), apply_exclusion__V_14_14, 1) = ((MR_Box) (apply_exclusion__CostCSDPtrs0_13));
#line 96 "apply_exclusion.m"
        }
#line 96 "apply_exclusion.m"
        {
#line 96 "apply_exclusion.m"
          mercury__map__det_update_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &apply_exclusion_scalar_common_2[0], ((MR_Box) (apply_exclusion__GroupPSPtr_12)), ((MR_Box) (apply_exclusion__V_14_14)), apply_exclusion__Map0_8, &apply_exclusion__Map_9);
        }
#line 96 "apply_exclusion.m"
      }
#line 97 "apply_exclusion.m"
    else
#line 98 "apply_exclusion.m"
      {
#line 98 "apply_exclusion.m"
        MR_Word apply_exclusion__V_15_15;

#line 98 "apply_exclusion.m"
        {
#line 98 "apply_exclusion.m"
          apply_exclusion__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 98 "apply_exclusion.m"
          MR_hl_field(MR_mktag(1), apply_exclusion__V_15_15, 0) = ((MR_Box) (apply_exclusion__CostCSDPtr_7));
#line 98 "apply_exclusion.m"
          MR_hl_field(MR_mktag(1), apply_exclusion__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 98 "apply_exclusion.m"
        }
#line 98 "apply_exclusion.m"
        {
#line 98 "apply_exclusion.m"
          mercury__map__det_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &apply_exclusion_scalar_common_2[0], ((MR_Box) (apply_exclusion__GroupPSPtr_12)), ((MR_Box) (apply_exclusion__V_15_15)), apply_exclusion__Map0_8, &apply_exclusion__Map_9);
        }
#line 98 "apply_exclusion.m"
      }
#line 91 "apply_exclusion.m"
    return apply_exclusion__Map_9;
#line 91 "apply_exclusion.m"
  }
#line 87 "apply_exclusion.m"
}

#line 75 "apply_exclusion.m"
static MR_Word MR_CALL 
apply_exclusion__accumulate_csds_by_call_site_3_f_0(
#line 75 "apply_exclusion.m"
  MR_Word apply_exclusion__Deep_5,
#line 75 "apply_exclusion.m"
  MR_Word apply_exclusion__HeadVar__2_2,
#line 75 "apply_exclusion.m"
  MR_Word apply_exclusion__Map0_8)
#line 75 "apply_exclusion.m"
{
#line 79 "apply_exclusion.m"
  {
#line 79 "apply_exclusion.m"
    MR_bool apply_exclusion__succeeded;
#line 79 "apply_exclusion.m"
    MR_Word apply_exclusion__Map_9;
#line 79 "apply_exclusion.m"
    MR_Word apply_exclusion__GroupCSDPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__2_2, (MR_Integer) 0)));
#line 79 "apply_exclusion.m"
    MR_Word apply_exclusion__CostCSDPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__2_2, (MR_Integer) 1)));
#line 79 "apply_exclusion.m"
    MR_Word apply_exclusion__GroupCSSPtr_10;
#line 83 "apply_exclusion.m"
    MR_Word apply_exclusion__CostCSDPtrs0_11;
#line 81 "apply_exclusion.m"
    MR_Box apply_exclusion__conv0_CostCSDPtrs0_11;

#line 80 "apply_exclusion.m"
    {
#line 80 "apply_exclusion.m"
      profile__deep_lookup_call_site_static_map_3_p_0(apply_exclusion__Deep_5, apply_exclusion__GroupCSDPtr_6, &apply_exclusion__GroupCSSPtr_10);
    }
#line 81 "apply_exclusion.m"
    {
#line 81 "apply_exclusion.m"
      apply_exclusion__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_Word) &apply_exclusion_scalar_common_2[0], apply_exclusion__Map0_8, ((MR_Box) (apply_exclusion__GroupCSSPtr_10)), &apply_exclusion__conv0_CostCSDPtrs0_11);
    }
#line 81 "apply_exclusion.m"
    if (apply_exclusion__succeeded)
#line 81 "apply_exclusion.m"
      {
#line 81 "apply_exclusion.m"
        apply_exclusion__CostCSDPtrs0_11 = ((MR_Word) apply_exclusion__conv0_CostCSDPtrs0_11);
#line 81 "apply_exclusion.m"
        apply_exclusion__succeeded = MR_TRUE;
#line 81 "apply_exclusion.m"
      }
#line 83 "apply_exclusion.m"
    if (apply_exclusion__succeeded)
#line 82 "apply_exclusion.m"
      {
#line 82 "apply_exclusion.m"
        MR_Word apply_exclusion__V_12_12;

#line 82 "apply_exclusion.m"
        {
#line 82 "apply_exclusion.m"
          apply_exclusion__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "apply_exclusion.m"
          MR_hl_field(MR_mktag(1), apply_exclusion__V_12_12, 0) = ((MR_Box) (apply_exclusion__CostCSDPtr_7));
#line 82 "apply_exclusion.m"
          MR_hl_field(MR_mktag(1), apply_exclusion__V_12_12, 1) = ((MR_Box) (apply_exclusion__CostCSDPtrs0_11));
#line 82 "apply_exclusion.m"
        }
#line 82 "apply_exclusion.m"
        {
#line 82 "apply_exclusion.m"
          mercury__map__det_update_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_Word) &apply_exclusion_scalar_common_2[0], ((MR_Box) (apply_exclusion__GroupCSSPtr_10)), ((MR_Box) (apply_exclusion__V_12_12)), apply_exclusion__Map0_8, &apply_exclusion__Map_9);
        }
#line 82 "apply_exclusion.m"
      }
#line 83 "apply_exclusion.m"
    else
#line 84 "apply_exclusion.m"
      {
#line 84 "apply_exclusion.m"
        MR_Word apply_exclusion__V_13_13;

#line 84 "apply_exclusion.m"
        {
#line 84 "apply_exclusion.m"
          apply_exclusion__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 84 "apply_exclusion.m"
          MR_hl_field(MR_mktag(1), apply_exclusion__V_13_13, 0) = ((MR_Box) (apply_exclusion__CostCSDPtr_7));
#line 84 "apply_exclusion.m"
          MR_hl_field(MR_mktag(1), apply_exclusion__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 84 "apply_exclusion.m"
        }
#line 84 "apply_exclusion.m"
        {
#line 84 "apply_exclusion.m"
          mercury__map__det_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_Word) &apply_exclusion_scalar_common_2[0], ((MR_Box) (apply_exclusion__GroupCSSPtr_10)), ((MR_Box) (apply_exclusion__V_13_13)), apply_exclusion__Map0_8, &apply_exclusion__Map_9);
        }
#line 84 "apply_exclusion.m"
      }
#line 79 "apply_exclusion.m"
    return apply_exclusion__Map_9;
#line 79 "apply_exclusion.m"
  }
#line 75 "apply_exclusion.m"
}

#line 44 "apply_exclusion.m"
MR_Word MR_CALL 
apply_exclusion__pair_contour_3_f_0(
#line 44 "apply_exclusion.m"
  MR_Word apply_exclusion__Deep_5,
#line 44 "apply_exclusion.m"
  MR_Word apply_exclusion__ExcludeSpec_6,
#line 44 "apply_exclusion.m"
  MR_Word apply_exclusion__CSDPtr_7)
#line 44 "apply_exclusion.m"
{
#line 177 "apply_exclusion.m"
  {
#line 177 "apply_exclusion.m"
    MR_bool apply_exclusion__succeeded;
#line 177 "apply_exclusion.m"
    MR_Word apply_exclusion__HeadVar__4_4;
#line 177 "apply_exclusion.m"
    MR_Word apply_exclusion__V_8_8;

#line 178 "apply_exclusion.m"
    {
#line 178 "apply_exclusion.m"
      apply_exclusion__V_8_8 = exclude__apply_contour_exclusion_3_f_0(apply_exclusion__Deep_5, apply_exclusion__ExcludeSpec_6, apply_exclusion__CSDPtr_7);
    }
#line 177 "apply_exclusion.m"
    {
#line 177 "apply_exclusion.m"
      apply_exclusion__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 177 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__4_4, 0) = ((MR_Box) (apply_exclusion__V_8_8));
#line 177 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__4_4, 1) = ((MR_Box) (apply_exclusion__CSDPtr_7));
#line 177 "apply_exclusion.m"
    }
#line 177 "apply_exclusion.m"
    return apply_exclusion__HeadVar__4_4;
#line 177 "apply_exclusion.m"
  }
#line 44 "apply_exclusion.m"
}

#line 42 "apply_exclusion.m"
MR_Word MR_CALL 
apply_exclusion__pair_self_1_f_0(
#line 42 "apply_exclusion.m"
  MR_Word apply_exclusion__CSDPtr_3)
#line 42 "apply_exclusion.m"
{
#line 175 "apply_exclusion.m"
  {
#line 175 "apply_exclusion.m"
    MR_bool apply_exclusion__succeeded;
#line 175 "apply_exclusion.m"
    MR_Word apply_exclusion__HeadVar__2_2;

#line 175 "apply_exclusion.m"
    {
#line 175 "apply_exclusion.m"
      apply_exclusion__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 175 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__2_2, 0) = ((MR_Box) (apply_exclusion__CSDPtr_3));
#line 175 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__HeadVar__2_2, 1) = ((MR_Box) (apply_exclusion__CSDPtr_3));
#line 175 "apply_exclusion.m"
    }
#line 175 "apply_exclusion.m"
    return apply_exclusion__HeadVar__2_2;
#line 175 "apply_exclusion.m"
  }
#line 42 "apply_exclusion.m"
}

#line 134 "apply_exclusion.m"
static void MR_CALL 
apply_exclusion__compute_parent_csd_prof_info_5_p_0_1(
#line 134 "apply_exclusion.m"
  MR_Box apply_exclusion__closure_arg,
#line 134 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_1,
#line 134 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_2,
#line 134 "apply_exclusion.m"
  MR_Box * apply_exclusion__wrapper_arg_3,
#line 134 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_4,
#line 134 "apply_exclusion.m"
  MR_Box * apply_exclusion__wrapper_arg_5)
#line 134 "apply_exclusion.m"
{
#line 134 "apply_exclusion.m"
  {
#line 134 "apply_exclusion.m"
    MR_Box apply_exclusion__closure = apply_exclusion__closure_arg;
#line 134 "apply_exclusion.m"
    MR_Word apply_exclusion__conv1_Own_12;
#line 134 "apply_exclusion.m"
    MR_Word apply_exclusion__conv0_Desc_14;

#line 134 "apply_exclusion.m"
    {
#line 134 "apply_exclusion.m"
      apply_exclusion__accumulate_parent_csd_prof_info_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__closure, (MR_Integer) 4))), ((MR_Word) apply_exclusion__wrapper_arg_1), ((MR_Word) apply_exclusion__wrapper_arg_2), &apply_exclusion__conv1_Own_12, ((MR_Word) apply_exclusion__wrapper_arg_4), &apply_exclusion__conv0_Desc_14);
    }
#line 134 "apply_exclusion.m"
    *apply_exclusion__wrapper_arg_3 = ((MR_Box) (apply_exclusion__conv1_Own_12));
#line 134 "apply_exclusion.m"
    *apply_exclusion__wrapper_arg_5 = ((MR_Box) (apply_exclusion__conv0_Desc_14));
#line 134 "apply_exclusion.m"
  }
#line 134 "apply_exclusion.m"
}

#line 38 "apply_exclusion.m"
void MR_CALL 
apply_exclusion__compute_parent_csd_prof_info_5_p_0(
#line 38 "apply_exclusion.m"
  MR_Word apply_exclusion__Deep_6,
#line 38 "apply_exclusion.m"
  MR_Word apply_exclusion__CalleePSPtr_7,
#line 38 "apply_exclusion.m"
  MR_Word apply_exclusion__CSDPtrs_8,
#line 38 "apply_exclusion.m"
  MR_Word * apply_exclusion__Own_9,
#line 38 "apply_exclusion.m"
  MR_Word * apply_exclusion__Desc_10)
#line 38 "apply_exclusion.m"
{
#line 133 "apply_exclusion.m"
  {
#line 133 "apply_exclusion.m"
    MR_bool apply_exclusion__succeeded;
#line 133 "apply_exclusion.m"
    MR_Word apply_exclusion__V_11_11;
#line 133 "apply_exclusion.m"
    MR_Word apply_exclusion__V_12_12;
#line 133 "apply_exclusion.m"
    MR_Word apply_exclusion__V_13_13;
#line 134 "apply_exclusion.m"
    MR_Box apply_exclusion__conv3_Own_9;
#line 134 "apply_exclusion.m"
    MR_Box apply_exclusion__conv2_Desc_10;

#line 134 "apply_exclusion.m"
    {
#line 134 "apply_exclusion.m"
      apply_exclusion__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 134 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_11_11, 0) = ((MR_Box) (&apply_exclusion_scalar_common_4[0]));
#line 134 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_11_11, 1) = ((MR_Box) (apply_exclusion__compute_parent_csd_prof_info_5_p_0_1));
#line 134 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 134 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_11_11, 3) = ((MR_Box) (apply_exclusion__Deep_6));
#line 134 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_11_11, 4) = ((MR_Box) (apply_exclusion__CalleePSPtr_7));
#line 134 "apply_exclusion.m"
    }
#line 134 "apply_exclusion.m"
    {
#line 134 "apply_exclusion.m"
      apply_exclusion__V_12_12 = measurements__zero_own_prof_info_0_f_0();
    }
#line 134 "apply_exclusion.m"
    {
#line 134 "apply_exclusion.m"
      apply_exclusion__V_13_13 = measurements__zero_inherit_prof_info_0_f_0();
    }
#line 134 "apply_exclusion.m"
    {
#line 134 "apply_exclusion.m"
      mercury__list__foldl2_6_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, apply_exclusion__V_11_11, apply_exclusion__CSDPtrs_8, ((MR_Box) (apply_exclusion__V_12_12)), &apply_exclusion__conv3_Own_9, ((MR_Box) (apply_exclusion__V_13_13)), &apply_exclusion__conv2_Desc_10);
    }
#line 134 "apply_exclusion.m"
    *apply_exclusion__Own_9 = ((MR_Word) apply_exclusion__conv3_Own_9);
#line 134 "apply_exclusion.m"
    *apply_exclusion__Desc_10 = ((MR_Word) apply_exclusion__conv2_Desc_10);
#line 133 "apply_exclusion.m"
  }
#line 38 "apply_exclusion.m"
}

#line 69 "apply_exclusion.m"
static MR_Box MR_CALL 
apply_exclusion__group_csds_by_clique_2_f_0_1(
#line 69 "apply_exclusion.m"
  MR_Box apply_exclusion__closure_arg,
#line 69 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_1,
#line 69 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_2)
#line 69 "apply_exclusion.m"
{
#line 69 "apply_exclusion.m"
  {
#line 69 "apply_exclusion.m"
    MR_Box apply_exclusion__wrapper_arg_3;
#line 69 "apply_exclusion.m"
    MR_Box apply_exclusion__closure = apply_exclusion__closure_arg;
#line 69 "apply_exclusion.m"
    MR_Word apply_exclusion__conv0_Map_9;

#line 69 "apply_exclusion.m"
    {
#line 69 "apply_exclusion.m"
      apply_exclusion__conv0_Map_9 = apply_exclusion__accumulate_csds_by_clique_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__closure, (MR_Integer) 3))), ((MR_Word) apply_exclusion__wrapper_arg_1), ((MR_Word) apply_exclusion__wrapper_arg_2));
    }
#line 69 "apply_exclusion.m"
    apply_exclusion__wrapper_arg_3 = ((MR_Box) (apply_exclusion__conv0_Map_9));
#line 69 "apply_exclusion.m"
    return apply_exclusion__wrapper_arg_3;
#line 69 "apply_exclusion.m"
  }
#line 69 "apply_exclusion.m"
}

#line 35 "apply_exclusion.m"
MR_Word MR_CALL 
apply_exclusion__group_csds_by_clique_2_f_0(
#line 35 "apply_exclusion.m"
  MR_Word apply_exclusion__Deep_4,
#line 35 "apply_exclusion.m"
  MR_Word apply_exclusion__GroupCostCSDPtrs_5)
#line 35 "apply_exclusion.m"
{
#line 68 "apply_exclusion.m"
  {
#line 68 "apply_exclusion.m"
    MR_bool apply_exclusion__succeeded;
#line 68 "apply_exclusion.m"
    MR_Word apply_exclusion__Groups_6;
#line 68 "apply_exclusion.m"
    MR_Word apply_exclusion__TypeCtorInfo_15_15;
#line 68 "apply_exclusion.m"
    MR_Word apply_exclusion__TypeInfo_16_16;
#line 68 "apply_exclusion.m"
    MR_Word apply_exclusion__GroupMap_7;
#line 68 "apply_exclusion.m"
    MR_Word apply_exclusion__V_8_8;
#line 68 "apply_exclusion.m"
    MR_Word apply_exclusion__V_9_9;
#line 69 "apply_exclusion.m"
    MR_Box apply_exclusion__conv1_GroupMap_7;

#line 69 "apply_exclusion.m"
    {
#line 69 "apply_exclusion.m"
      apply_exclusion__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 69 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 0) = ((MR_Box) (&apply_exclusion_scalar_common_3[3]));
#line 69 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 1) = ((MR_Box) (apply_exclusion__group_csds_by_clique_2_f_0_1));
#line 69 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 69 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 3) = ((MR_Box) (apply_exclusion__Deep_4));
#line 69 "apply_exclusion.m"
    }
#line 1482 "apply_exclusion.c"
    apply_exclusion__TypeCtorInfo_15_15 = (MR_Word) &profile__profile__type_ctor_info_clique_ptr_0;
#line 1484 "apply_exclusion.c"
    apply_exclusion__TypeInfo_16_16 = (MR_Word) &apply_exclusion_scalar_common_2[0];
#line 69 "apply_exclusion.m"
    {
#line 69 "apply_exclusion.m"
      apply_exclusion__V_9_9 = mercury__map__init_0_f_0(apply_exclusion__TypeCtorInfo_15_15, apply_exclusion__TypeInfo_16_16);
    }
#line 69 "apply_exclusion.m"
    {
#line 69 "apply_exclusion.m"
      apply_exclusion__conv1_GroupMap_7 = mercury__list__foldl_3_f_0((MR_Word) &apply_exclusion_scalar_common_1[0], (MR_Word) &apply_exclusion_scalar_common_1[4], apply_exclusion__V_8_8, apply_exclusion__GroupCostCSDPtrs_5, ((MR_Box) (apply_exclusion__V_9_9)));
    }
#line 69 "apply_exclusion.m"
    apply_exclusion__GroupMap_7 = ((MR_Word) apply_exclusion__conv1_GroupMap_7);
#line 71 "apply_exclusion.m"
    {
#line 71 "apply_exclusion.m"
      mercury__map__to_assoc_list_2_p_0(apply_exclusion__TypeCtorInfo_15_15, apply_exclusion__TypeInfo_16_16, apply_exclusion__GroupMap_7, &apply_exclusion__Groups_6);
    }
#line 68 "apply_exclusion.m"
    return apply_exclusion__Groups_6;
#line 68 "apply_exclusion.m"
  }
#line 35 "apply_exclusion.m"
}

#line 64 "apply_exclusion.m"
static MR_Box MR_CALL 
apply_exclusion__group_csds_by_module_2_f_0_1(
#line 64 "apply_exclusion.m"
  MR_Box apply_exclusion__closure_arg,
#line 64 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_1,
#line 64 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_2)
#line 64 "apply_exclusion.m"
{
#line 64 "apply_exclusion.m"
  {
#line 64 "apply_exclusion.m"
    MR_Box apply_exclusion__wrapper_arg_3;
#line 64 "apply_exclusion.m"
    MR_Box apply_exclusion__closure = apply_exclusion__closure_arg;
#line 64 "apply_exclusion.m"
    MR_Word apply_exclusion__conv0_Map_9;

#line 64 "apply_exclusion.m"
    {
#line 64 "apply_exclusion.m"
      apply_exclusion__conv0_Map_9 = apply_exclusion__accumulate_csds_by_module_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__closure, (MR_Integer) 3))), ((MR_Word) apply_exclusion__wrapper_arg_1), ((MR_Word) apply_exclusion__wrapper_arg_2));
    }
#line 64 "apply_exclusion.m"
    apply_exclusion__wrapper_arg_3 = ((MR_Box) (apply_exclusion__conv0_Map_9));
#line 64 "apply_exclusion.m"
    return apply_exclusion__wrapper_arg_3;
#line 64 "apply_exclusion.m"
  }
#line 64 "apply_exclusion.m"
}

#line 32 "apply_exclusion.m"
MR_Word MR_CALL 
apply_exclusion__group_csds_by_module_2_f_0(
#line 32 "apply_exclusion.m"
  MR_Word apply_exclusion__Deep_4,
#line 32 "apply_exclusion.m"
  MR_Word apply_exclusion__GroupCostCSDPtrs_5)
#line 32 "apply_exclusion.m"
{
#line 63 "apply_exclusion.m"
  {
#line 63 "apply_exclusion.m"
    MR_bool apply_exclusion__succeeded;
#line 63 "apply_exclusion.m"
    MR_Word apply_exclusion__Groups_6;
#line 63 "apply_exclusion.m"
    MR_Word apply_exclusion__TypeCtorInfo_15_15;
#line 63 "apply_exclusion.m"
    MR_Word apply_exclusion__TypeInfo_16_16;
#line 63 "apply_exclusion.m"
    MR_Word apply_exclusion__GroupMap_7;
#line 63 "apply_exclusion.m"
    MR_Word apply_exclusion__V_8_8;
#line 63 "apply_exclusion.m"
    MR_Word apply_exclusion__V_9_9;
#line 64 "apply_exclusion.m"
    MR_Box apply_exclusion__conv1_GroupMap_7;

#line 64 "apply_exclusion.m"
    {
#line 64 "apply_exclusion.m"
      apply_exclusion__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 64 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 0) = ((MR_Box) (&apply_exclusion_scalar_common_3[2]));
#line 64 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 1) = ((MR_Box) (apply_exclusion__group_csds_by_module_2_f_0_1));
#line 64 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 64 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 3) = ((MR_Box) (apply_exclusion__Deep_4));
#line 64 "apply_exclusion.m"
    }
#line 1586 "apply_exclusion.c"
    apply_exclusion__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1588 "apply_exclusion.c"
    apply_exclusion__TypeInfo_16_16 = (MR_Word) &apply_exclusion_scalar_common_2[0];
#line 64 "apply_exclusion.m"
    {
#line 64 "apply_exclusion.m"
      apply_exclusion__V_9_9 = mercury__map__init_0_f_0(apply_exclusion__TypeCtorInfo_15_15, apply_exclusion__TypeInfo_16_16);
    }
#line 64 "apply_exclusion.m"
    {
#line 64 "apply_exclusion.m"
      apply_exclusion__conv1_GroupMap_7 = mercury__list__foldl_3_f_0((MR_Word) &apply_exclusion_scalar_common_1[0], (MR_Word) &apply_exclusion_scalar_common_1[3], apply_exclusion__V_8_8, apply_exclusion__GroupCostCSDPtrs_5, ((MR_Box) (apply_exclusion__V_9_9)));
    }
#line 64 "apply_exclusion.m"
    apply_exclusion__GroupMap_7 = ((MR_Word) apply_exclusion__conv1_GroupMap_7);
#line 66 "apply_exclusion.m"
    {
#line 66 "apply_exclusion.m"
      mercury__map__to_assoc_list_2_p_0(apply_exclusion__TypeCtorInfo_15_15, apply_exclusion__TypeInfo_16_16, apply_exclusion__GroupMap_7, &apply_exclusion__Groups_6);
    }
#line 63 "apply_exclusion.m"
    return apply_exclusion__Groups_6;
#line 63 "apply_exclusion.m"
  }
#line 32 "apply_exclusion.m"
}

#line 59 "apply_exclusion.m"
static MR_Box MR_CALL 
apply_exclusion__group_csds_by_procedure_2_f_0_1(
#line 59 "apply_exclusion.m"
  MR_Box apply_exclusion__closure_arg,
#line 59 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_1,
#line 59 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_2)
#line 59 "apply_exclusion.m"
{
#line 59 "apply_exclusion.m"
  {
#line 59 "apply_exclusion.m"
    MR_Box apply_exclusion__wrapper_arg_3;
#line 59 "apply_exclusion.m"
    MR_Box apply_exclusion__closure = apply_exclusion__closure_arg;
#line 59 "apply_exclusion.m"
    MR_Word apply_exclusion__conv0_Map_9;

#line 59 "apply_exclusion.m"
    {
#line 59 "apply_exclusion.m"
      apply_exclusion__conv0_Map_9 = apply_exclusion__accumulate_csds_by_procedure_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__closure, (MR_Integer) 3))), ((MR_Word) apply_exclusion__wrapper_arg_1), ((MR_Word) apply_exclusion__wrapper_arg_2));
    }
#line 59 "apply_exclusion.m"
    apply_exclusion__wrapper_arg_3 = ((MR_Box) (apply_exclusion__conv0_Map_9));
#line 59 "apply_exclusion.m"
    return apply_exclusion__wrapper_arg_3;
#line 59 "apply_exclusion.m"
  }
#line 59 "apply_exclusion.m"
}

#line 29 "apply_exclusion.m"
MR_Word MR_CALL 
apply_exclusion__group_csds_by_procedure_2_f_0(
#line 29 "apply_exclusion.m"
  MR_Word apply_exclusion__Deep_4,
#line 29 "apply_exclusion.m"
  MR_Word apply_exclusion__GroupCostCSDPtrs_5)
#line 29 "apply_exclusion.m"
{
#line 58 "apply_exclusion.m"
  {
#line 58 "apply_exclusion.m"
    MR_bool apply_exclusion__succeeded;
#line 58 "apply_exclusion.m"
    MR_Word apply_exclusion__Groups_6;
#line 58 "apply_exclusion.m"
    MR_Word apply_exclusion__TypeCtorInfo_15_15;
#line 58 "apply_exclusion.m"
    MR_Word apply_exclusion__TypeInfo_16_16;
#line 58 "apply_exclusion.m"
    MR_Word apply_exclusion__GroupMap_7;
#line 58 "apply_exclusion.m"
    MR_Word apply_exclusion__V_8_8;
#line 58 "apply_exclusion.m"
    MR_Word apply_exclusion__V_9_9;
#line 59 "apply_exclusion.m"
    MR_Box apply_exclusion__conv1_GroupMap_7;

#line 59 "apply_exclusion.m"
    {
#line 59 "apply_exclusion.m"
      apply_exclusion__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 59 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 0) = ((MR_Box) (&apply_exclusion_scalar_common_3[1]));
#line 59 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 1) = ((MR_Box) (apply_exclusion__group_csds_by_procedure_2_f_0_1));
#line 59 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 59 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 3) = ((MR_Box) (apply_exclusion__Deep_4));
#line 59 "apply_exclusion.m"
    }
#line 1690 "apply_exclusion.c"
    apply_exclusion__TypeCtorInfo_15_15 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
#line 1692 "apply_exclusion.c"
    apply_exclusion__TypeInfo_16_16 = (MR_Word) &apply_exclusion_scalar_common_2[0];
#line 59 "apply_exclusion.m"
    {
#line 59 "apply_exclusion.m"
      apply_exclusion__V_9_9 = mercury__map__init_0_f_0(apply_exclusion__TypeCtorInfo_15_15, apply_exclusion__TypeInfo_16_16);
    }
#line 59 "apply_exclusion.m"
    {
#line 59 "apply_exclusion.m"
      apply_exclusion__conv1_GroupMap_7 = mercury__list__foldl_3_f_0((MR_Word) &apply_exclusion_scalar_common_1[0], (MR_Word) &apply_exclusion_scalar_common_1[2], apply_exclusion__V_8_8, apply_exclusion__GroupCostCSDPtrs_5, ((MR_Box) (apply_exclusion__V_9_9)));
    }
#line 59 "apply_exclusion.m"
    apply_exclusion__GroupMap_7 = ((MR_Word) apply_exclusion__conv1_GroupMap_7);
#line 61 "apply_exclusion.m"
    {
#line 61 "apply_exclusion.m"
      mercury__map__to_assoc_list_2_p_0(apply_exclusion__TypeCtorInfo_15_15, apply_exclusion__TypeInfo_16_16, apply_exclusion__GroupMap_7, &apply_exclusion__Groups_6);
    }
#line 58 "apply_exclusion.m"
    return apply_exclusion__Groups_6;
#line 58 "apply_exclusion.m"
  }
#line 29 "apply_exclusion.m"
}

#line 54 "apply_exclusion.m"
static MR_Box MR_CALL 
apply_exclusion__group_csds_by_call_site_2_f_0_1(
#line 54 "apply_exclusion.m"
  MR_Box apply_exclusion__closure_arg,
#line 54 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_1,
#line 54 "apply_exclusion.m"
  MR_Box apply_exclusion__wrapper_arg_2)
#line 54 "apply_exclusion.m"
{
#line 54 "apply_exclusion.m"
  {
#line 54 "apply_exclusion.m"
    MR_Box apply_exclusion__wrapper_arg_3;
#line 54 "apply_exclusion.m"
    MR_Box apply_exclusion__closure = apply_exclusion__closure_arg;
#line 54 "apply_exclusion.m"
    MR_Word apply_exclusion__conv0_Map_9;

#line 54 "apply_exclusion.m"
    {
#line 54 "apply_exclusion.m"
      apply_exclusion__conv0_Map_9 = apply_exclusion__accumulate_csds_by_call_site_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), apply_exclusion__closure, (MR_Integer) 3))), ((MR_Word) apply_exclusion__wrapper_arg_1), ((MR_Word) apply_exclusion__wrapper_arg_2));
    }
#line 54 "apply_exclusion.m"
    apply_exclusion__wrapper_arg_3 = ((MR_Box) (apply_exclusion__conv0_Map_9));
#line 54 "apply_exclusion.m"
    return apply_exclusion__wrapper_arg_3;
#line 54 "apply_exclusion.m"
  }
#line 54 "apply_exclusion.m"
}

#line 26 "apply_exclusion.m"
MR_Word MR_CALL 
apply_exclusion__group_csds_by_call_site_2_f_0(
#line 26 "apply_exclusion.m"
  MR_Word apply_exclusion__Deep_4,
#line 26 "apply_exclusion.m"
  MR_Word apply_exclusion__GroupCostCSDPtrs_5)
#line 26 "apply_exclusion.m"
{
#line 53 "apply_exclusion.m"
  {
#line 53 "apply_exclusion.m"
    MR_bool apply_exclusion__succeeded;
#line 53 "apply_exclusion.m"
    MR_Word apply_exclusion__Groups_6;
#line 53 "apply_exclusion.m"
    MR_Word apply_exclusion__TypeCtorInfo_15_15;
#line 53 "apply_exclusion.m"
    MR_Word apply_exclusion__TypeInfo_16_16;
#line 53 "apply_exclusion.m"
    MR_Word apply_exclusion__GroupMap_7;
#line 53 "apply_exclusion.m"
    MR_Word apply_exclusion__V_8_8;
#line 53 "apply_exclusion.m"
    MR_Word apply_exclusion__V_9_9;
#line 54 "apply_exclusion.m"
    MR_Box apply_exclusion__conv1_GroupMap_7;

#line 54 "apply_exclusion.m"
    {
#line 54 "apply_exclusion.m"
      apply_exclusion__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 54 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 0) = ((MR_Box) (&apply_exclusion_scalar_common_3[0]));
#line 54 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 1) = ((MR_Box) (apply_exclusion__group_csds_by_call_site_2_f_0_1));
#line 54 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 54 "apply_exclusion.m"
      MR_hl_field(MR_mktag(0), apply_exclusion__V_8_8, 3) = ((MR_Box) (apply_exclusion__Deep_4));
#line 54 "apply_exclusion.m"
    }
#line 1794 "apply_exclusion.c"
    apply_exclusion__TypeCtorInfo_15_15 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
#line 1796 "apply_exclusion.c"
    apply_exclusion__TypeInfo_16_16 = (MR_Word) &apply_exclusion_scalar_common_2[0];
#line 54 "apply_exclusion.m"
    {
#line 54 "apply_exclusion.m"
      apply_exclusion__V_9_9 = mercury__map__init_0_f_0(apply_exclusion__TypeCtorInfo_15_15, apply_exclusion__TypeInfo_16_16);
    }
#line 54 "apply_exclusion.m"
    {
#line 54 "apply_exclusion.m"
      apply_exclusion__conv1_GroupMap_7 = mercury__list__foldl_3_f_0((MR_Word) &apply_exclusion_scalar_common_1[0], (MR_Word) &apply_exclusion_scalar_common_1[1], apply_exclusion__V_8_8, apply_exclusion__GroupCostCSDPtrs_5, ((MR_Box) (apply_exclusion__V_9_9)));
    }
#line 54 "apply_exclusion.m"
    apply_exclusion__GroupMap_7 = ((MR_Word) apply_exclusion__conv1_GroupMap_7);
#line 56 "apply_exclusion.m"
    {
#line 56 "apply_exclusion.m"
      mercury__map__to_assoc_list_2_p_0(apply_exclusion__TypeCtorInfo_15_15, apply_exclusion__TypeInfo_16_16, apply_exclusion__GroupMap_7, &apply_exclusion__Groups_6);
    }
#line 53 "apply_exclusion.m"
    return apply_exclusion__Groups_6;
#line 53 "apply_exclusion.m"
  }
#line 26 "apply_exclusion.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module apply_exclusion. */
