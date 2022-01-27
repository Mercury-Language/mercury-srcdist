/*
** Automatically generated from `dependency_graph.m'
** by the Mercury compiler,
** version rotd-2017-02-22
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


/* :- module libs.dependency_graph. */
/* :- implementation. */

/*
INIT mercury__libs__dependency_graph__init
ENDINIT
*/

#include "libs.dependency_graph.mih"


#include "libs.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
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
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__list__pti_list_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__digraph__pti_digraph_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__digraph__pti_digraph_key_1__pseudo_1;

static const MR_PseudoTypeInfo libs__dependency_graph__libs__dependency_graph__field_types_dependency_info_1_0[2];

static const MR_ConstString libs__dependency_graph__libs__dependency_graph__field_names_dependency_info_1_0[2];

static const MR_DuFunctorDesc libs__dependency_graph__libs__dependency_graph__du_functor_desc_dependency_info_1_0;

static const MR_DuFunctorDescPtr libs__dependency_graph__libs__dependency_graph__du_stag_ordered_dependency_info_1_0[1];

static const MR_DuPtagLayout libs__dependency_graph__libs__dependency_graph__du_ptag_ordered_dependency_info_1[1];

static const MR_DuFunctorDescPtr libs__dependency_graph__libs__dependency_graph__du_name_ordered_dependency_info_1[1];

static const MR_Integer libs__dependency_graph__libs__dependency_graph__functor_number_map_dependency_info_1[1];

static MR_bool MR_CALL 
libs__dependency_graph____Unify____bottom_up_dependency_sccs_1_0_10001(
  MR_Box libs__dependency_graph__wrapper_arg_1,
  MR_Box libs__dependency_graph__wrapper_arg_2,
  MR_Box libs__dependency_graph__wrapper_arg_3);

static void MR_CALL 
libs__dependency_graph____Compare____bottom_up_dependency_sccs_1_0_10001(
  MR_Box libs__dependency_graph__wrapper_arg_1,
  MR_Box * libs__dependency_graph__wrapper_arg_2,
  MR_Box libs__dependency_graph__wrapper_arg_3,
  MR_Box libs__dependency_graph__wrapper_arg_4);

static MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_graph_1_0_10001(
  MR_Box libs__dependency_graph__wrapper_arg_1,
  MR_Box libs__dependency_graph__wrapper_arg_2,
  MR_Box libs__dependency_graph__wrapper_arg_3);

static void MR_CALL 
libs__dependency_graph____Compare____dependency_graph_1_0_10001(
  MR_Box libs__dependency_graph__wrapper_arg_1,
  MR_Box * libs__dependency_graph__wrapper_arg_2,
  MR_Box libs__dependency_graph__wrapper_arg_3,
  MR_Box libs__dependency_graph__wrapper_arg_4);

static MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_graph_key_1_0_10001(
  MR_Box libs__dependency_graph__wrapper_arg_1,
  MR_Box libs__dependency_graph__wrapper_arg_2,
  MR_Box libs__dependency_graph__wrapper_arg_3);

static void MR_CALL 
libs__dependency_graph____Compare____dependency_graph_key_1_0_10001(
  MR_Box libs__dependency_graph__wrapper_arg_1,
  MR_Box * libs__dependency_graph__wrapper_arg_2,
  MR_Box libs__dependency_graph__wrapper_arg_3,
  MR_Box libs__dependency_graph__wrapper_arg_4);

static MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_info_1_0_10001(
  MR_Box libs__dependency_graph__wrapper_arg_1,
  MR_Box libs__dependency_graph__wrapper_arg_2,
  MR_Box libs__dependency_graph__wrapper_arg_3);

static void MR_CALL 
libs__dependency_graph____Compare____dependency_info_1_0_10001(
  MR_Box libs__dependency_graph__wrapper_arg_1,
  MR_Box * libs__dependency_graph__wrapper_arg_2,
  MR_Box libs__dependency_graph__wrapper_arg_3,
  MR_Box libs__dependency_graph__wrapper_arg_4);

static void MR_CALL 
libs__dependency_graph__dependency_info_get_condensed_bottom_up_sccs_1_f_0_1(
  MR_Box libs__dependency_graph__closure_arg,
  MR_Box libs__dependency_graph__wrapper_arg_1,
  MR_Box * libs__dependency_graph__wrapper_arg_2);


static /* final */ const MR_Integer libs__dependency_graph_scalar_common_1[1][2];

static /* final */ const MR_Box libs__dependency_graph_scalar_common_2[1][6];




static /* final */ const MR_Integer libs__dependency_graph_scalar_common_1[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box libs__dependency_graph_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&libs__dependency_graph_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&libs__dependency_graph__set_ordlist__pti_set_ordlist_1__pseudo_1)),
    ((MR_Box) (&libs__dependency_graph__list__pti_list_1__pseudo_1))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__list__pti_list_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &libs__dependency_graph__set_ordlist__pti_set_ordlist_1__pseudo_1
  }
};

const MR_TypeCtorInfo_Struct libs__dependency_graph__libs__dependency_graph__type_ctor_info_bottom_up_dependency_sccs_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (libs__dependency_graph____Unify____bottom_up_dependency_sccs_1_0_10001)),
  ((MR_Box) (libs__dependency_graph____Compare____bottom_up_dependency_sccs_1_0_10001)),
  (MR_String) "libs.dependency_graph",
  (MR_String) "bottom_up_dependency_sccs",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__dependency_graph__list__pti_list_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__digraph__pti_digraph_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

const MR_TypeCtorInfo_Struct libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_graph_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (libs__dependency_graph____Unify____dependency_graph_1_0_10001)),
  ((MR_Box) (libs__dependency_graph____Compare____dependency_graph_1_0_10001)),
  (MR_String) "libs.dependency_graph",
  (MR_String) "dependency_graph",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__dependency_graph__digraph__pti_digraph_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

const MR_TypeCtorInfo_Struct libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_graph_key_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (libs__dependency_graph____Unify____dependency_graph_key_1_0_10001)),
  ((MR_Box) (libs__dependency_graph____Compare____dependency_graph_key_1_0_10001)),
  (MR_String) "libs.dependency_graph",
  (MR_String) "dependency_graph_key",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__dependency_graph__digraph__pti_digraph_key_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo libs__dependency_graph__libs__dependency_graph__field_types_dependency_info_1_0[2] = {
  (MR_PseudoTypeInfo) &libs__dependency_graph__digraph__pti_digraph_1__pseudo_1,
  (MR_PseudoTypeInfo) &libs__dependency_graph__list__pti_list_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

static const MR_ConstString libs__dependency_graph__libs__dependency_graph__field_names_dependency_info_1_0[2] = {
  (MR_String) "dep_graph",
  (MR_String) "dep_bottom_up_sccs"
};

static const MR_DuFunctorDesc libs__dependency_graph__libs__dependency_graph__du_functor_desc_dependency_info_1_0 = {
  (MR_String) "dependency_info",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__dependency_graph__libs__dependency_graph__field_types_dependency_info_1_0,
  libs__dependency_graph__libs__dependency_graph__field_names_dependency_info_1_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__dependency_graph__libs__dependency_graph__du_stag_ordered_dependency_info_1_0[1] = {
  &libs__dependency_graph__libs__dependency_graph__du_functor_desc_dependency_info_1_0
};

static const MR_DuPtagLayout libs__dependency_graph__libs__dependency_graph__du_ptag_ordered_dependency_info_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__dependency_graph__libs__dependency_graph__du_stag_ordered_dependency_info_1_0
  }
};

static const MR_DuFunctorDescPtr libs__dependency_graph__libs__dependency_graph__du_name_ordered_dependency_info_1[1] = {
  &libs__dependency_graph__libs__dependency_graph__du_functor_desc_dependency_info_1_0
};

static const MR_Integer libs__dependency_graph__libs__dependency_graph__functor_number_map_dependency_info_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_info_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__dependency_graph____Unify____dependency_info_1_0_10001)),
  ((MR_Box) (libs__dependency_graph____Compare____dependency_info_1_0_10001)),
  (MR_String) "libs.dependency_graph",
  (MR_String) "dependency_info",
  {     libs__dependency_graph__libs__dependency_graph__du_name_ordered_dependency_info_1 },
  {     libs__dependency_graph__libs__dependency_graph__du_ptag_ordered_dependency_info_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__dependency_graph__libs__dependency_graph__functor_number_map_dependency_info_1
};

static MR_bool MR_CALL 
libs__dependency_graph____Unify____bottom_up_dependency_sccs_1_0_10001(
  MR_Box libs__dependency_graph__wrapper_arg_1,
  MR_Box libs__dependency_graph__wrapper_arg_2,
  MR_Box libs__dependency_graph__wrapper_arg_3)
{
  {
    MR_bool libs__dependency_graph__succeeded;

    {
      libs__dependency_graph__succeeded = libs__dependency_graph____Unify____bottom_up_dependency_sccs_1_0(((MR_Word) libs__dependency_graph__wrapper_arg_1), ((MR_Word) libs__dependency_graph__wrapper_arg_2), ((MR_Word) libs__dependency_graph__wrapper_arg_3));
    }
    return libs__dependency_graph__succeeded;
  }
}

static void MR_CALL 
libs__dependency_graph____Compare____bottom_up_dependency_sccs_1_0_10001(
  MR_Box libs__dependency_graph__wrapper_arg_1,
  MR_Box * libs__dependency_graph__wrapper_arg_2,
  MR_Box libs__dependency_graph__wrapper_arg_3,
  MR_Box libs__dependency_graph__wrapper_arg_4)
{
  {
    MR_Word libs__dependency_graph__conv0_HeadVar__1_1;

    {
      libs__dependency_graph____Compare____bottom_up_dependency_sccs_1_0(((MR_Word) libs__dependency_graph__wrapper_arg_1), &libs__dependency_graph__conv0_HeadVar__1_1, ((MR_Word) libs__dependency_graph__wrapper_arg_3), ((MR_Word) libs__dependency_graph__wrapper_arg_4));
    }
    *libs__dependency_graph__wrapper_arg_2 = ((MR_Box) (libs__dependency_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_graph_1_0_10001(
  MR_Box libs__dependency_graph__wrapper_arg_1,
  MR_Box libs__dependency_graph__wrapper_arg_2,
  MR_Box libs__dependency_graph__wrapper_arg_3)
{
  {
    MR_bool libs__dependency_graph__succeeded;

    {
      libs__dependency_graph__succeeded = libs__dependency_graph____Unify____dependency_graph_1_0(((MR_Word) libs__dependency_graph__wrapper_arg_1), ((MR_Word) libs__dependency_graph__wrapper_arg_2), ((MR_Word) libs__dependency_graph__wrapper_arg_3));
    }
    return libs__dependency_graph__succeeded;
  }
}

static void MR_CALL 
libs__dependency_graph____Compare____dependency_graph_1_0_10001(
  MR_Box libs__dependency_graph__wrapper_arg_1,
  MR_Box * libs__dependency_graph__wrapper_arg_2,
  MR_Box libs__dependency_graph__wrapper_arg_3,
  MR_Box libs__dependency_graph__wrapper_arg_4)
{
  {
    MR_Word libs__dependency_graph__conv0_HeadVar__1_1;

    {
      libs__dependency_graph____Compare____dependency_graph_1_0(((MR_Word) libs__dependency_graph__wrapper_arg_1), &libs__dependency_graph__conv0_HeadVar__1_1, ((MR_Word) libs__dependency_graph__wrapper_arg_3), ((MR_Word) libs__dependency_graph__wrapper_arg_4));
    }
    *libs__dependency_graph__wrapper_arg_2 = ((MR_Box) (libs__dependency_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_graph_key_1_0_10001(
  MR_Box libs__dependency_graph__wrapper_arg_1,
  MR_Box libs__dependency_graph__wrapper_arg_2,
  MR_Box libs__dependency_graph__wrapper_arg_3)
{
  {
    MR_bool libs__dependency_graph__succeeded;

    {
      libs__dependency_graph__succeeded = libs__dependency_graph____Unify____dependency_graph_key_1_0(((MR_Word) libs__dependency_graph__wrapper_arg_1), ((MR_Word) libs__dependency_graph__wrapper_arg_2), ((MR_Word) libs__dependency_graph__wrapper_arg_3));
    }
    return libs__dependency_graph__succeeded;
  }
}

static void MR_CALL 
libs__dependency_graph____Compare____dependency_graph_key_1_0_10001(
  MR_Box libs__dependency_graph__wrapper_arg_1,
  MR_Box * libs__dependency_graph__wrapper_arg_2,
  MR_Box libs__dependency_graph__wrapper_arg_3,
  MR_Box libs__dependency_graph__wrapper_arg_4)
{
  {
    MR_Word libs__dependency_graph__conv0_HeadVar__1_1;

    {
      libs__dependency_graph____Compare____dependency_graph_key_1_0(((MR_Word) libs__dependency_graph__wrapper_arg_1), &libs__dependency_graph__conv0_HeadVar__1_1, ((MR_Word) libs__dependency_graph__wrapper_arg_3), ((MR_Word) libs__dependency_graph__wrapper_arg_4));
    }
    *libs__dependency_graph__wrapper_arg_2 = ((MR_Box) (libs__dependency_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_info_1_0_10001(
  MR_Box libs__dependency_graph__wrapper_arg_1,
  MR_Box libs__dependency_graph__wrapper_arg_2,
  MR_Box libs__dependency_graph__wrapper_arg_3)
{
  {
    MR_bool libs__dependency_graph__succeeded;

    {
      libs__dependency_graph__succeeded = libs__dependency_graph____Unify____dependency_info_1_0(((MR_Word) libs__dependency_graph__wrapper_arg_1), ((MR_Word) libs__dependency_graph__wrapper_arg_2), ((MR_Word) libs__dependency_graph__wrapper_arg_3));
    }
    return libs__dependency_graph__succeeded;
  }
}

static void MR_CALL 
libs__dependency_graph____Compare____dependency_info_1_0_10001(
  MR_Box libs__dependency_graph__wrapper_arg_1,
  MR_Box * libs__dependency_graph__wrapper_arg_2,
  MR_Box libs__dependency_graph__wrapper_arg_3,
  MR_Box libs__dependency_graph__wrapper_arg_4)
{
  {
    MR_Word libs__dependency_graph__conv0_HeadVar__1_1;

    {
      libs__dependency_graph____Compare____dependency_info_1_0(((MR_Word) libs__dependency_graph__wrapper_arg_1), &libs__dependency_graph__conv0_HeadVar__1_1, ((MR_Word) libs__dependency_graph__wrapper_arg_3), ((MR_Word) libs__dependency_graph__wrapper_arg_4));
    }
    *libs__dependency_graph__wrapper_arg_2 = ((MR_Box) (libs__dependency_graph__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
libs__dependency_graph____Compare____dependency_info_1_0(
  MR_Word libs__dependency_graph__TypeInfo_for_T_11,
  MR_Word * libs__dependency_graph__HeadVar__1_1,
  MR_Word libs__dependency_graph__HeadVar__2_2,
  MR_Word libs__dependency_graph__HeadVar__3_3)
{
  {
    MR_bool libs__dependency_graph__succeeded;
    MR_Integer libs__dependency_graph__CastX_9 = (MR_Integer) libs__dependency_graph__HeadVar__2_2;
    MR_Integer libs__dependency_graph__CastY_10 = (MR_Integer) libs__dependency_graph__HeadVar__3_3;

    libs__dependency_graph__succeeded = (libs__dependency_graph__CastX_9 == libs__dependency_graph__CastY_10);
    if (libs__dependency_graph__succeeded)
      *libs__dependency_graph__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word libs__dependency_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__dependency_graph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word libs__dependency_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__dependency_graph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word libs__dependency_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__dependency_graph__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word libs__dependency_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__dependency_graph__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word libs__dependency_graph__V_8_8;

        {
          mercury__digraph____Compare____digraph_1_0(libs__dependency_graph__TypeInfo_for_T_11, &libs__dependency_graph__V_8_8, libs__dependency_graph__V_4_4, libs__dependency_graph__V_6_6);
        }
        libs__dependency_graph__succeeded = (libs__dependency_graph__V_8_8 == (MR_Integer) 0);
        libs__dependency_graph__succeeded = !(libs__dependency_graph__succeeded);
        if (libs__dependency_graph__succeeded)
          *libs__dependency_graph__HeadVar__1_1 = libs__dependency_graph__V_8_8;
        else
          {
            MR_Word libs__dependency_graph__TypeInfo_15_15;

            {
              libs__dependency_graph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), libs__dependency_graph__TypeInfo_15_15, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
              MR_hl_field(MR_mktag(0), libs__dependency_graph__TypeInfo_15_15, 1) = ((MR_Box) (libs__dependency_graph__TypeInfo_for_T_11));
            }
            {
              mercury__list____Compare____list_1_0(libs__dependency_graph__TypeInfo_15_15, libs__dependency_graph__HeadVar__1_1, (MR_Word) libs__dependency_graph__V_5_5, (MR_Word) libs__dependency_graph__V_7_7);
            }
          }
      }
  }
}

MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_info_1_0(
  MR_Word libs__dependency_graph__TypeInfo_for_T_9,
  MR_Word libs__dependency_graph__HeadVar__1_1,
  MR_Word libs__dependency_graph__HeadVar__2_2)
{
  {
    MR_bool libs__dependency_graph__succeeded;
    MR_Integer libs__dependency_graph__CastX_7 = (MR_Integer) libs__dependency_graph__HeadVar__1_1;
    MR_Integer libs__dependency_graph__CastY_8 = (MR_Integer) libs__dependency_graph__HeadVar__2_2;

    libs__dependency_graph__succeeded = (libs__dependency_graph__CastX_7 == libs__dependency_graph__CastY_8);
    if (libs__dependency_graph__succeeded)
      libs__dependency_graph__succeeded = MR_TRUE;
    else
      {
        MR_Word libs__dependency_graph__TypeCtorInfo_12_12;
        MR_Word libs__dependency_graph__TypeInfo_13_13;
        MR_Word libs__dependency_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word libs__dependency_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word libs__dependency_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__dependency_graph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word libs__dependency_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__dependency_graph__HeadVar__2_2, (MR_Integer) 1)));

        {
          libs__dependency_graph__succeeded = mercury__digraph____Unify____digraph_1_0(libs__dependency_graph__TypeInfo_for_T_9, libs__dependency_graph__V_3_3, libs__dependency_graph__V_5_5);
        }
        if (libs__dependency_graph__succeeded)
          {
            libs__dependency_graph__TypeCtorInfo_12_12 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
            {
              libs__dependency_graph__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), libs__dependency_graph__TypeInfo_13_13, 0) = ((MR_Box) (libs__dependency_graph__TypeCtorInfo_12_12));
              MR_hl_field(MR_mktag(0), libs__dependency_graph__TypeInfo_13_13, 1) = ((MR_Box) (libs__dependency_graph__TypeInfo_for_T_9));
            }
            {
              libs__dependency_graph__succeeded = mercury__list____Unify____list_1_0(libs__dependency_graph__TypeInfo_13_13, (MR_Word) libs__dependency_graph__V_4_4, (MR_Word) libs__dependency_graph__V_6_6);
            }
          }
      }
    return libs__dependency_graph__succeeded;
  }
}

void MR_CALL 
libs__dependency_graph____Compare____dependency_graph_key_1_0(
  MR_Word libs__dependency_graph__TypeInfo_for_T_6,
  MR_Word * libs__dependency_graph__HeadVar__1_1,
  MR_Word libs__dependency_graph__HeadVar__2_2,
  MR_Word libs__dependency_graph__HeadVar__3_3)
{
  {
    MR_bool libs__dependency_graph__succeeded;
    MR_Word libs__dependency_graph__Cast_HeadVar1_4 = libs__dependency_graph__HeadVar__2_2;
    MR_Word libs__dependency_graph__Cast_HeadVar2_5 = libs__dependency_graph__HeadVar__3_3;

    {
      mercury__digraph____Compare____digraph_key_1_0(libs__dependency_graph__TypeInfo_for_T_6, libs__dependency_graph__HeadVar__1_1, libs__dependency_graph__Cast_HeadVar1_4, libs__dependency_graph__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_graph_key_1_0(
  MR_Word libs__dependency_graph__TypeInfo_for_T_5,
  MR_Word libs__dependency_graph__HeadVar__1_1,
  MR_Word libs__dependency_graph__HeadVar__2_2)
{
  {
    MR_bool libs__dependency_graph__succeeded;
    MR_Word libs__dependency_graph__Cast_HeadVar1_3 = libs__dependency_graph__HeadVar__1_1;
    MR_Word libs__dependency_graph__Cast_HeadVar2_4 = libs__dependency_graph__HeadVar__2_2;

    {
      libs__dependency_graph__succeeded = mercury__digraph____Unify____digraph_key_1_0(libs__dependency_graph__TypeInfo_for_T_5, libs__dependency_graph__Cast_HeadVar1_3, libs__dependency_graph__Cast_HeadVar2_4);
    }
    return libs__dependency_graph__succeeded;
  }
}

void MR_CALL 
libs__dependency_graph____Compare____dependency_graph_1_0(
  MR_Word libs__dependency_graph__TypeInfo_for_T_6,
  MR_Word * libs__dependency_graph__HeadVar__1_1,
  MR_Word libs__dependency_graph__HeadVar__2_2,
  MR_Word libs__dependency_graph__HeadVar__3_3)
{
  {
    MR_bool libs__dependency_graph__succeeded;
    MR_Word libs__dependency_graph__Cast_HeadVar1_4 = libs__dependency_graph__HeadVar__2_2;
    MR_Word libs__dependency_graph__Cast_HeadVar2_5 = libs__dependency_graph__HeadVar__3_3;

    {
      mercury__digraph____Compare____digraph_1_0(libs__dependency_graph__TypeInfo_for_T_6, libs__dependency_graph__HeadVar__1_1, libs__dependency_graph__Cast_HeadVar1_4, libs__dependency_graph__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_graph_1_0(
  MR_Word libs__dependency_graph__TypeInfo_for_T_5,
  MR_Word libs__dependency_graph__HeadVar__1_1,
  MR_Word libs__dependency_graph__HeadVar__2_2)
{
  {
    MR_bool libs__dependency_graph__succeeded;
    MR_Word libs__dependency_graph__Cast_HeadVar1_3 = libs__dependency_graph__HeadVar__1_1;
    MR_Word libs__dependency_graph__Cast_HeadVar2_4 = libs__dependency_graph__HeadVar__2_2;

    {
      libs__dependency_graph__succeeded = mercury__digraph____Unify____digraph_1_0(libs__dependency_graph__TypeInfo_for_T_5, libs__dependency_graph__Cast_HeadVar1_3, libs__dependency_graph__Cast_HeadVar2_4);
    }
    return libs__dependency_graph__succeeded;
  }
}

void MR_CALL 
libs__dependency_graph____Compare____bottom_up_dependency_sccs_1_0(
  MR_Word libs__dependency_graph__TypeInfo_for_T_6,
  MR_Word * libs__dependency_graph__HeadVar__1_1,
  MR_Word libs__dependency_graph__HeadVar__2_2,
  MR_Word libs__dependency_graph__HeadVar__3_3)
{
  {
    MR_bool libs__dependency_graph__succeeded;
    MR_Word libs__dependency_graph__TypeInfo_8_8;
    MR_Word libs__dependency_graph__Cast_HeadVar1_4 = libs__dependency_graph__HeadVar__2_2;
    MR_Word libs__dependency_graph__Cast_HeadVar2_5 = libs__dependency_graph__HeadVar__3_3;

    {
      libs__dependency_graph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__dependency_graph__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), libs__dependency_graph__TypeInfo_8_8, 1) = ((MR_Box) (libs__dependency_graph__TypeInfo_for_T_6));
    }
    {
      mercury__list____Compare____list_1_0(libs__dependency_graph__TypeInfo_8_8, libs__dependency_graph__HeadVar__1_1, (MR_Word) libs__dependency_graph__Cast_HeadVar1_4, (MR_Word) libs__dependency_graph__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__dependency_graph____Unify____bottom_up_dependency_sccs_1_0(
  MR_Word libs__dependency_graph__TypeInfo_for_T_5,
  MR_Word libs__dependency_graph__HeadVar__1_1,
  MR_Word libs__dependency_graph__HeadVar__2_2)
{
  {
    MR_bool libs__dependency_graph__succeeded;
    MR_Word libs__dependency_graph__TypeInfo_7_7;
    MR_Word libs__dependency_graph__Cast_HeadVar1_3 = libs__dependency_graph__HeadVar__1_1;
    MR_Word libs__dependency_graph__Cast_HeadVar2_4 = libs__dependency_graph__HeadVar__2_2;

    {
      libs__dependency_graph__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__dependency_graph__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), libs__dependency_graph__TypeInfo_7_7, 1) = ((MR_Box) (libs__dependency_graph__TypeInfo_for_T_5));
    }
    {
      libs__dependency_graph__succeeded = mercury__list____Unify____list_1_0(libs__dependency_graph__TypeInfo_7_7, (MR_Word) libs__dependency_graph__Cast_HeadVar1_3, (MR_Word) libs__dependency_graph__Cast_HeadVar2_4);
    }
    return libs__dependency_graph__succeeded;
  }
}

static void MR_CALL 
libs__dependency_graph__dependency_info_get_condensed_bottom_up_sccs_1_f_0_1(
  MR_Box libs__dependency_graph__closure_arg,
  MR_Box libs__dependency_graph__wrapper_arg_1,
  MR_Box * libs__dependency_graph__wrapper_arg_2)
{
  {
    MR_Box libs__dependency_graph__closure = libs__dependency_graph__closure_arg;
    MR_Word libs__dependency_graph__conv0_HeadVar__2_2;

    {
      mercury__set__to_sorted_list_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) libs__dependency_graph__wrapper_arg_1), &libs__dependency_graph__conv0_HeadVar__2_2);
    }
    *libs__dependency_graph__wrapper_arg_2 = ((MR_Box) (libs__dependency_graph__conv0_HeadVar__2_2));
  }
}

MR_Word MR_CALL 
libs__dependency_graph__dependency_info_get_condensed_bottom_up_sccs_1_f_0(
  MR_Word libs__dependency_graph__TypeInfo_for_T_8,
  MR_Word libs__dependency_graph__DepInfo_3)
{
  {
    MR_bool libs__dependency_graph__succeeded;
    MR_Word libs__dependency_graph__CondensedOrder_4;
    MR_Word libs__dependency_graph__TypeInfo_12_12;
    MR_Word libs__dependency_graph__TypeInfo_14_14;
    MR_Word libs__dependency_graph__ListOfSets_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__dependency_graph__DepInfo_3, (MR_Integer) 1)));
    MR_Word libs__dependency_graph__ListOfLists_6;
    MR_Word libs__dependency_graph__V_7_7;
    MR_Word libs__dependency_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__dependency_graph__DepInfo_3, (MR_Integer) 0)));

    {
      libs__dependency_graph__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__dependency_graph__V_7_7, 0) = ((MR_Box) (&libs__dependency_graph_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), libs__dependency_graph__V_7_7, 1) = ((MR_Box) (libs__dependency_graph__dependency_info_get_condensed_bottom_up_sccs_1_f_0_1));
      MR_hl_field(MR_mktag(0), libs__dependency_graph__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), libs__dependency_graph__V_7_7, 3) = ((MR_Box) (libs__dependency_graph__TypeInfo_for_T_8));
    }
    {
      libs__dependency_graph__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__dependency_graph__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), libs__dependency_graph__TypeInfo_12_12, 1) = ((MR_Box) (libs__dependency_graph__TypeInfo_for_T_8));
    }
    {
      libs__dependency_graph__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__dependency_graph__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), libs__dependency_graph__TypeInfo_14_14, 1) = ((MR_Box) (libs__dependency_graph__TypeInfo_for_T_8));
    }
    {
      mercury__list__map_3_p_0(libs__dependency_graph__TypeInfo_12_12, libs__dependency_graph__TypeInfo_14_14, (MR_Word) libs__dependency_graph__V_7_7, (MR_Word) libs__dependency_graph__ListOfSets_5, &libs__dependency_graph__ListOfLists_6);
    }
    {
      mercury__list__condense_2_p_0(libs__dependency_graph__TypeInfo_for_T_8, libs__dependency_graph__ListOfLists_6, &libs__dependency_graph__CondensedOrder_4);
    }
    return libs__dependency_graph__CondensedOrder_4;
  }
}

MR_Word MR_CALL 
libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0(
  MR_Word libs__dependency_graph__TypeInfo_for_T_5,
  MR_Word libs__dependency_graph__DepInfo_3)
{
  {
    MR_bool libs__dependency_graph__succeeded;
    MR_Word libs__dependency_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__dependency_graph__DepInfo_3, (MR_Integer) 1)));
    MR_Word libs__dependency_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__dependency_graph__DepInfo_3, (MR_Integer) 0)));

    return libs__dependency_graph__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__dependency_graph__dependency_info_get_graph_1_f_0(
  MR_Word libs__dependency_graph__TypeInfo_for_T_5,
  MR_Word libs__dependency_graph__DepInfo_3)
{
  {
    MR_bool libs__dependency_graph__succeeded;
    MR_Word libs__dependency_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__dependency_graph__DepInfo_3, (MR_Integer) 0)));
    MR_Word libs__dependency_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__dependency_graph__DepInfo_3, (MR_Integer) 1)));

    return libs__dependency_graph__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__dependency_graph__make_dependency_info_1_f_0(
  MR_Word libs__dependency_graph__TypeInfo_for_T_6,
  MR_Word libs__dependency_graph__Graph_3)
{
  {
    MR_bool libs__dependency_graph__succeeded;
    MR_Word libs__dependency_graph__HeadVar__2_2;
    MR_Word libs__dependency_graph__TypeInfo_8_8;
    MR_Word libs__dependency_graph__BottomUpOrdering_4;
    MR_Word libs__dependency_graph__TopDownOrdering_5;
    MR_Word libs__dependency_graph__conv0_BottomUpOrdering_4;

    {
      mercury__digraph__atsort_2_p_0(libs__dependency_graph__TypeInfo_for_T_6, libs__dependency_graph__Graph_3, &libs__dependency_graph__TopDownOrdering_5);
    }
    {
      libs__dependency_graph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__dependency_graph__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), libs__dependency_graph__TypeInfo_8_8, 1) = ((MR_Box) (libs__dependency_graph__TypeInfo_for_T_6));
    }
    {
      mercury__list__reverse_2_p_0(libs__dependency_graph__TypeInfo_8_8, (MR_Word) libs__dependency_graph__TopDownOrdering_5, &libs__dependency_graph__conv0_BottomUpOrdering_4);
    }
    libs__dependency_graph__BottomUpOrdering_4 = (MR_Word) libs__dependency_graph__conv0_BottomUpOrdering_4;
    {
      libs__dependency_graph__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__dependency_graph__HeadVar__2_2, 0) = ((MR_Box) (libs__dependency_graph__Graph_3));
      MR_hl_field(MR_mktag(0), libs__dependency_graph__HeadVar__2_2, 1) = ((MR_Box) (libs__dependency_graph__BottomUpOrdering_4));
    }
    return libs__dependency_graph__HeadVar__2_2;
  }
}

void mercury__libs__dependency_graph__init(void)
{
}

void mercury__libs__dependency_graph__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__dependency_graph__libs__dependency_graph__type_ctor_info_bottom_up_dependency_sccs_1);
	MR_register_type_ctor_info(&libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_graph_1);
	MR_register_type_ctor_info(&libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_graph_key_1);
	MR_register_type_ctor_info(&libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_info_1);
}

void mercury__libs__dependency_graph__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__dependency_graph__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module libs.dependency_graph. */
