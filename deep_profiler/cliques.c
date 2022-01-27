/*
** Automatically generated from `cliques.m'
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


/* :- module cliques. */
/* :- implementation. */

/*
INIT mercury__cliques__init
ENDINIT
*/

#include "cliques.mih"


#include "array_util.mih"
#include "dense_bitset.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 cliques__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 cliques__array__ti_array_1set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo cliques__cliques__field_types_graph_0_0[2];

static const MR_DuFunctorDesc cliques__cliques__du_functor_desc_graph_0_0;

static const MR_DuFunctorDescPtr cliques__cliques__du_stag_ordered_graph_0_0[1];

static const MR_DuPtagLayout cliques__cliques__du_ptag_ordered_graph_0[1];

static const MR_DuFunctorDescPtr cliques__cliques__du_name_ordered_graph_0[1];

static const MR_Integer cliques__cliques__functor_number_map_graph_0[1];

static const MR_FA_TypeInfo_Struct1 cliques__array__ti_array_1builtin__type_ctor_info_int_0;

static MR_bool MR_CALL 
cliques____Unify____graph_0_0_10001(
  MR_Box cliques__wrapper_arg_1,
  MR_Box cliques__wrapper_arg_2);

static void MR_CALL 
cliques____Compare____graph_0_0_10001(
  MR_Box * cliques__wrapper_arg_1,
  MR_Box cliques__wrapper_arg_2,
  MR_Box cliques__wrapper_arg_3);

static MR_bool MR_CALL 
cliques____Unify____visit_0_0_10001(
  MR_Box cliques__wrapper_arg_1,
  MR_Box cliques__wrapper_arg_2);

static void MR_CALL 
cliques____Compare____visit_0_0_10001(
  MR_Box * cliques__wrapper_arg_1,
  MR_Box cliques__wrapper_arg_2,
  MR_Box cliques__wrapper_arg_3);

static void MR_CALL 
cliques__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_3_p_0(
  MR_Word cliques__HeadVar__1_1,
  MR_Word cliques__HeadVar__2_2,
  MR_Word * cliques__L_3);

static void MR_CALL 
cliques____Compare____visit_0_0(
  MR_Word * cliques__HeadVar__1_1,
  MR_ArrayPtr cliques__HeadVar__2_2,
  MR_ArrayPtr cliques__HeadVar__3_3);

static MR_bool MR_CALL 
cliques____Unify____visit_0_0(
  MR_ArrayPtr cliques__HeadVar__1_1,
  MR_ArrayPtr cliques__HeadVar__2_2);

static void MR_CALL 
cliques__add_arcs_to_4_p_0(
  MR_Word cliques__HeadVar__1_1,
  MR_Integer cliques__To_2,
  MR_Word cliques__HeadVar__3_3,
  MR_Word * cliques__Graph_4);

static void MR_CALL 
cliques__inverse_2_4_p_0(
  MR_Integer cliques__To_5,
  MR_Word cliques__Graph_6,
  MR_Word cliques__InvGraph0_7,
  MR_Word * cliques__InvGraph_8);

static void MR_CALL 
cliques__dfs_6_p_0(
  MR_Word cliques__HeadVar__1_1,
  MR_Word cliques__HeadVar__2_2,
  MR_ArrayPtr cliques__HeadVar__3_3,
  MR_Word cliques__HeadVar__4_4,
  MR_ArrayPtr * cliques__Visit_5,
  MR_Word * cliques__Dfs_6);

static void MR_CALL 
cliques__dfs_graph_2_5_p_0(
  MR_Word cliques__HeadVar__1_1,
  MR_Word cliques__HeadVar__2_2,
  MR_ArrayPtr cliques__HeadVar__3_3,
  MR_Word cliques__HeadVar__4_4,
  MR_Word * cliques__Dfs_5);

static void MR_CALL 
cliques__tsort_5_p_0(
  MR_Word cliques__HeadVar__1_1,
  MR_Word cliques__HeadVar__2_2,
  MR_ArrayPtr cliques__HeadVar__3_3,
  MR_Word cliques__STATE_VARIABLE_Cliques_0_4,
  MR_Word * cliques__STATE_VARIABLE_Cliques_5);

static void MR_CALL 
cliques__mklist_3_p_0(
  MR_Integer cliques__N_4,
  MR_Word cliques__Acc0_5,
  MR_Word * cliques__Acc_6);


static /* final */ const MR_Box cliques_scalar_common_1[3][2];




static /* final */ const MR_Box cliques_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&cliques_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 cliques__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 cliques__array__ti_array_1set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &cliques__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo cliques__cliques__field_types_graph_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &cliques__array__ti_array_1set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc cliques__cliques__du_functor_desc_graph_0_0 = {
  (MR_String) "graph",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  cliques__cliques__field_types_graph_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr cliques__cliques__du_stag_ordered_graph_0_0[1] = {
  &cliques__cliques__du_functor_desc_graph_0_0
};

static const MR_DuPtagLayout cliques__cliques__du_ptag_ordered_graph_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    cliques__cliques__du_stag_ordered_graph_0_0
  }
};

static const MR_DuFunctorDescPtr cliques__cliques__du_name_ordered_graph_0[1] = {
  &cliques__cliques__du_functor_desc_graph_0_0
};

static const MR_Integer cliques__cliques__functor_number_map_graph_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct cliques__cliques__type_ctor_info_graph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (cliques____Unify____graph_0_0_10001)),
  ((MR_Box) (cliques____Compare____graph_0_0_10001)),
  (MR_String) "cliques",
  (MR_String) "graph",
  {     cliques__cliques__du_name_ordered_graph_0 },
  {     cliques__cliques__du_ptag_ordered_graph_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  cliques__cliques__functor_number_map_graph_0
};

static const MR_FA_TypeInfo_Struct1 cliques__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

const MR_TypeCtorInfo_Struct cliques__cliques__type_ctor_info_visit_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (cliques____Unify____visit_0_0_10001)),
  ((MR_Box) (cliques____Compare____visit_0_0_10001)),
  (MR_String) "cliques",
  (MR_String) "visit",
  {     NULL },
  {     (MR_PseudoTypeInfo) &cliques__array__ti_array_1builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
cliques____Unify____graph_0_0_10001(
  MR_Box cliques__wrapper_arg_1,
  MR_Box cliques__wrapper_arg_2)
{
  {
    MR_bool cliques__succeeded;

    {
      cliques__succeeded = cliques____Unify____graph_0_0(((MR_Word) cliques__wrapper_arg_1), ((MR_Word) cliques__wrapper_arg_2));
    }
    return cliques__succeeded;
  }
}

static void MR_CALL 
cliques____Compare____graph_0_0_10001(
  MR_Box * cliques__wrapper_arg_1,
  MR_Box cliques__wrapper_arg_2,
  MR_Box cliques__wrapper_arg_3)
{
  {
    MR_Word cliques__conv0_HeadVar__1_1;

    {
      cliques____Compare____graph_0_0(&cliques__conv0_HeadVar__1_1, ((MR_Word) cliques__wrapper_arg_2), ((MR_Word) cliques__wrapper_arg_3));
    }
    *cliques__wrapper_arg_1 = ((MR_Box) (cliques__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
cliques____Unify____visit_0_0_10001(
  MR_Box cliques__wrapper_arg_1,
  MR_Box cliques__wrapper_arg_2)
{
  {
    MR_bool cliques__succeeded;

    {
      cliques__succeeded = cliques____Unify____visit_0_0(((MR_ArrayPtr) cliques__wrapper_arg_1), ((MR_ArrayPtr) cliques__wrapper_arg_2));
    }
    return cliques__succeeded;
  }
}

static void MR_CALL 
cliques____Compare____visit_0_0_10001(
  MR_Box * cliques__wrapper_arg_1,
  MR_Box cliques__wrapper_arg_2,
  MR_Box cliques__wrapper_arg_3)
{
  {
    MR_Word cliques__conv0_HeadVar__1_1;

    {
      cliques____Compare____visit_0_0(&cliques__conv0_HeadVar__1_1, ((MR_ArrayPtr) cliques__wrapper_arg_2), ((MR_ArrayPtr) cliques__wrapper_arg_3));
    }
    *cliques__wrapper_arg_1 = ((MR_Box) (cliques__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
cliques__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_3_p_0(
  MR_Word cliques__HeadVar__1_1,
  MR_Word cliques__HeadVar__2_2,
  MR_Word * cliques__L_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool cliques__succeeded;

        if ((cliques__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *cliques__L_3 = cliques__HeadVar__2_2;
        else
          {
            MR_Box cliques__X_5 = (MR_hl_field(MR_mktag(1), cliques__HeadVar__1_1, (MR_Integer) 0));
            MR_Word cliques__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), cliques__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word cliques__V_9_9;

            {
              cliques__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), cliques__V_9_9, 0) = cliques__X_5;
              MR_hl_field(MR_mktag(1), cliques__V_9_9, 1) = ((MR_Box) (cliques__HeadVar__2_2));
            }
            /* direct tailcall eliminated */
            {
              MR_Word cliques__HeadVar__1__tmp_copy_1 = cliques__Xs_6;
              MR_Word cliques__HeadVar__2__tmp_copy_2 = cliques__V_9_9;

              cliques__HeadVar__2_2 = cliques__HeadVar__2__tmp_copy_2;
              cliques__HeadVar__1_1 = cliques__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
cliques____Compare____visit_0_0(
  MR_Word * cliques__HeadVar__1_1,
  MR_ArrayPtr cliques__HeadVar__2_2,
  MR_ArrayPtr cliques__HeadVar__3_3)
{
  {
    MR_bool cliques__succeeded;
    MR_ArrayPtr cliques__Cast_HeadVar1_4 = cliques__HeadVar__2_2;
    MR_ArrayPtr cliques__Cast_HeadVar2_5 = cliques__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &cliques_scalar_common_1[2], cliques__HeadVar__1_1, ((MR_Box) (cliques__Cast_HeadVar1_4)), ((MR_Box) (cliques__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
cliques____Unify____visit_0_0(
  MR_ArrayPtr cliques__HeadVar__1_1,
  MR_ArrayPtr cliques__HeadVar__2_2)
{
  {
    MR_bool cliques__succeeded;
    MR_ArrayPtr cliques__Cast_HeadVar1_3 = cliques__HeadVar__1_1;
    MR_ArrayPtr cliques__Cast_HeadVar2_4 = cliques__HeadVar__2_2;

    {
      cliques__succeeded = mercury__array____Unify____array_1_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) cliques__Cast_HeadVar1_3, (MR_ArrayPtr) cliques__Cast_HeadVar2_4);
    }
    return cliques__succeeded;
  }
}

void MR_CALL 
cliques____Compare____graph_0_0(
  MR_Word * cliques__HeadVar__1_1,
  MR_Word cliques__HeadVar__2_2,
  MR_Word cliques__HeadVar__3_3)
{
  {
    MR_bool cliques__succeeded;
    MR_Integer cliques__CastX_9 = (MR_Integer) cliques__HeadVar__2_2;
    MR_Integer cliques__CastY_10 = (MR_Integer) cliques__HeadVar__3_3;

    cliques__succeeded = (cliques__CastX_9 == cliques__CastY_10);
    if (cliques__succeeded)
      *cliques__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer cliques__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), cliques__HeadVar__2_2, (MR_Integer) 0)));
        MR_ArrayPtr cliques__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), cliques__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer cliques__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), cliques__HeadVar__3_3, (MR_Integer) 0)));
        MR_ArrayPtr cliques__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), cliques__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word cliques__V_8_8;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&cliques__V_8_8, cliques__V_4_4, cliques__V_6_6);
        }
        cliques__succeeded = (cliques__V_8_8 == (MR_Integer) 0);
        cliques__succeeded = !(cliques__succeeded);
        if (cliques__succeeded)
          *cliques__HeadVar__1_1 = cliques__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &cliques_scalar_common_1[1], cliques__HeadVar__1_1, ((MR_Box) (cliques__V_5_5)), ((MR_Box) (cliques__V_7_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
cliques____Unify____graph_0_0(
  MR_Word cliques__HeadVar__1_1,
  MR_Word cliques__HeadVar__2_2)
{
  {
    MR_bool cliques__succeeded;
    MR_Integer cliques__CastX_7 = (MR_Integer) cliques__HeadVar__1_1;
    MR_Integer cliques__CastY_8 = (MR_Integer) cliques__HeadVar__2_2;

    cliques__succeeded = (cliques__CastX_7 == cliques__CastY_8);
    if (cliques__succeeded)
      cliques__succeeded = MR_TRUE;
    else
      {
        MR_Word cliques__TypeInfo_9_9;
        MR_Integer cliques__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), cliques__HeadVar__1_1, (MR_Integer) 0)));
        MR_ArrayPtr cliques__V_4_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), cliques__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer cliques__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), cliques__HeadVar__2_2, (MR_Integer) 0)));
        MR_ArrayPtr cliques__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), cliques__HeadVar__2_2, (MR_Integer) 1)));

        cliques__succeeded = (cliques__V_3_3 == cliques__V_5_5);
        if (cliques__succeeded)
          {
            cliques__TypeInfo_9_9 = (MR_Word) &cliques_scalar_common_1[0];
            {
              cliques__succeeded = mercury__array____Unify____array_1_0(cliques__TypeInfo_9_9, (MR_ArrayPtr) cliques__V_4_4, (MR_ArrayPtr) cliques__V_6_6);
            }
          }
      }
    return cliques__succeeded;
  }
}

static void MR_CALL 
cliques__add_arcs_to_4_p_0(
  MR_Word cliques__HeadVar__1_1,
  MR_Integer cliques__To_2,
  MR_Word cliques__HeadVar__3_3,
  MR_Word * cliques__Graph_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool cliques__succeeded;

        if ((cliques__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *cliques__Graph_4 = cliques__HeadVar__3_3;
        else
          {
            MR_Integer cliques__From_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), cliques__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word cliques__FromList_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), cliques__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word cliques__Graph1_12;

            {
              cliques__add_arc_4_p_0(cliques__HeadVar__3_3, cliques__From_7, cliques__To_2, &cliques__Graph1_12);
            }
            /* direct tailcall eliminated */
            {
              MR_Word cliques__HeadVar__1__tmp_copy_1 = cliques__FromList_8;
              MR_Word cliques__HeadVar__3__tmp_copy_3 = cliques__Graph1_12;

              cliques__HeadVar__3_3 = cliques__HeadVar__3__tmp_copy_3;
              cliques__HeadVar__1_1 = cliques__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
cliques__inverse_2_4_p_0(
  MR_Integer cliques__To_5,
  MR_Word cliques__Graph_6,
  MR_Word cliques__InvGraph0_7,
  MR_Word * cliques__InvGraph_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool cliques__succeeded = (cliques__To_5 >= (MR_Integer) 0);

        if (cliques__succeeded)
          {
            MR_Word cliques__Froms_9;
            MR_Word cliques__FromList_10;
            MR_Word cliques__InvGraph1_11;
            MR_Integer cliques__V_13_13;
            MR_ArrayPtr cliques__Array_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), cliques__Graph_6, (MR_Integer) 1)));
            MR_Integer cliques___Size_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), cliques__Graph_6, (MR_Integer) 0)));

            {
              cliques__succeeded = mercury__array__in_bounds_2_p_0((MR_Word) &cliques_scalar_common_1[0], (MR_ArrayPtr) cliques__Array_19, cliques__To_5);
            }
            if (cliques__succeeded)
              {
                MR_Box cliques__conv0_Froms_9;

                {
                  mercury__array__lookup_3_p_0((MR_Word) &cliques_scalar_common_1[0], (MR_ArrayPtr) cliques__Array_19, cliques__To_5, &cliques__conv0_Froms_9);
                }
                cliques__Froms_9 = ((MR_Word) cliques__conv0_Froms_9);
              }
            else
              {
                {
                  cliques__Froms_9 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
                }
              }
            {
              mercury__set__to_sorted_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, cliques__Froms_9, &cliques__FromList_10);
            }
            {
              cliques__add_arcs_to_4_p_0(cliques__FromList_10, cliques__To_5, cliques__InvGraph0_7, &cliques__InvGraph1_11);
            }
            cliques__V_13_13 = (cliques__To_5 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer cliques__To__tmp_copy_5 = cliques__V_13_13;
              MR_Word cliques__InvGraph0__tmp_copy_7 = cliques__InvGraph1_11;

              cliques__InvGraph0_7 = cliques__InvGraph0__tmp_copy_7;
              cliques__To_5 = cliques__To__tmp_copy_5;
            }
            continue;
          }
        else
          *cliques__InvGraph_8 = cliques__InvGraph0_7;
      }
      break;
    }
}

static void MR_CALL 
cliques__dfs_6_p_0(
  MR_Word cliques__HeadVar__1_1,
  MR_Word cliques__HeadVar__2_2,
  MR_ArrayPtr cliques__HeadVar__3_3,
  MR_Word cliques__HeadVar__4_4,
  MR_ArrayPtr * cliques__Visit_5,
  MR_Word * cliques__Dfs_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool cliques__succeeded;

        if ((cliques__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *cliques__Visit_5 = cliques__HeadVar__3_3;
            *cliques__Dfs_6 = cliques__HeadVar__4_4;
          }
        else
          {
            MR_Integer cliques__Node_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), cliques__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word cliques__Nodes_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), cliques__HeadVar__1_1, (MR_Integer) 1)));

            {
              cliques__succeeded = dense_bitset__member_2_p_0(cliques__Node_10, cliques__HeadVar__3_3);
            }
            if (cliques__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word cliques__HeadVar__1__tmp_copy_1 = cliques__Nodes_11;

                  cliques__HeadVar__1_1 = cliques__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
            else
              {
                MR_ArrayPtr cliques__Visit1_18;
                MR_Word cliques__Succ_19;
                MR_Word cliques__SuccList_20;
                MR_ArrayPtr cliques__Visit2_21;
                MR_Word cliques__Dfs1_22;
                MR_Word cliques__Dfs2_23;
                MR_ArrayPtr cliques__Array_38;
                MR_Integer cliques___Size_37;

                {
                  cliques__Visit1_18 = dense_bitset__insert_2_f_0(cliques__HeadVar__3_3, cliques__Node_10);
                }
                cliques___Size_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), cliques__HeadVar__2_2, (MR_Integer) 0)));
                cliques__Array_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), cliques__HeadVar__2_2, (MR_Integer) 1)));
                {
                  cliques__succeeded = mercury__array__in_bounds_2_p_0((MR_Word) &cliques_scalar_common_1[0], (MR_ArrayPtr) cliques__Array_38, cliques__Node_10);
                }
                if (cliques__succeeded)
                  {
                    MR_Box cliques__conv0_Succ_19;

                    {
                      mercury__array__lookup_3_p_0((MR_Word) &cliques_scalar_common_1[0], (MR_ArrayPtr) cliques__Array_38, cliques__Node_10, &cliques__conv0_Succ_19);
                    }
                    cliques__Succ_19 = ((MR_Word) cliques__conv0_Succ_19);
                  }
                else
                  {
                    {
                      cliques__Succ_19 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
                    }
                  }
                {
                  mercury__set__to_sorted_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, cliques__Succ_19, &cliques__SuccList_20);
                }
                {
                  cliques__dfs_6_p_0(cliques__SuccList_20, cliques__HeadVar__2_2, cliques__Visit1_18, cliques__HeadVar__4_4, &cliques__Visit2_21, &cliques__Dfs1_22);
                }
                {
                  cliques__Dfs2_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), cliques__Dfs2_23, 0) = ((MR_Box) (cliques__Node_10));
                  MR_hl_field(MR_mktag(1), cliques__Dfs2_23, 1) = ((MR_Box) (cliques__Dfs1_22));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word cliques__HeadVar__1__tmp_copy_1 = cliques__Nodes_11;
                  MR_ArrayPtr cliques__HeadVar__3__tmp_copy_3 = cliques__Visit2_21;
                  MR_Word cliques__HeadVar__4__tmp_copy_4 = cliques__Dfs2_23;

                  cliques__HeadVar__4_4 = cliques__HeadVar__4__tmp_copy_4;
                  cliques__HeadVar__3_3 = cliques__HeadVar__3__tmp_copy_3;
                  cliques__HeadVar__1_1 = cliques__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
cliques__dfs_graph_2_5_p_0(
  MR_Word cliques__HeadVar__1_1,
  MR_Word cliques__HeadVar__2_2,
  MR_ArrayPtr cliques__HeadVar__3_3,
  MR_Word cliques__HeadVar__4_4,
  MR_Word * cliques__Dfs_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool cliques__succeeded;

        if ((cliques__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *cliques__Dfs_5 = cliques__HeadVar__4_4;
        else
          {
            MR_Integer cliques__Node_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), cliques__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word cliques__Nodes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), cliques__HeadVar__1_1, (MR_Integer) 1)));
            MR_ArrayPtr cliques__Visit_15;
            MR_Word cliques__Dfs1_16;
            MR_Word cliques__V_17_17;

            {
              cliques__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), cliques__V_17_17, 0) = ((MR_Box) (cliques__Node_9));
              MR_hl_field(MR_mktag(1), cliques__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              cliques__dfs_6_p_0(cliques__V_17_17, cliques__HeadVar__2_2, cliques__HeadVar__3_3, cliques__HeadVar__4_4, &cliques__Visit_15, &cliques__Dfs1_16);
            }
            /* direct tailcall eliminated */
            {
              MR_Word cliques__HeadVar__1__tmp_copy_1 = cliques__Nodes_10;
              MR_ArrayPtr cliques__HeadVar__3__tmp_copy_3 = cliques__Visit_15;
              MR_Word cliques__HeadVar__4__tmp_copy_4 = cliques__Dfs1_16;

              cliques__HeadVar__4_4 = cliques__HeadVar__4__tmp_copy_4;
              cliques__HeadVar__3_3 = cliques__HeadVar__3__tmp_copy_3;
              cliques__HeadVar__1_1 = cliques__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
cliques__tsort_5_p_0(
  MR_Word cliques__HeadVar__1_1,
  MR_Word cliques__HeadVar__2_2,
  MR_ArrayPtr cliques__HeadVar__3_3,
  MR_Word cliques__STATE_VARIABLE_Cliques_0_4,
  MR_Word * cliques__STATE_VARIABLE_Cliques_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool cliques__succeeded;

        if ((cliques__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *cliques__STATE_VARIABLE_Cliques_5 = cliques__STATE_VARIABLE_Cliques_0_4;
        else
          {
            MR_Integer cliques__Node_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), cliques__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word cliques__Nodes_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), cliques__HeadVar__1_1, (MR_Integer) 1)));
            MR_ArrayPtr cliques__STATE_VARIABLE_Visited_39_39;
            MR_Word cliques__STATE_VARIABLE_Cliques_49_49;

            {
              cliques__succeeded = dense_bitset__member_2_p_0(cliques__Node_11, cliques__HeadVar__3_3);
            }
            if (cliques__succeeded)
              {
                cliques__STATE_VARIABLE_Cliques_49_49 = cliques__STATE_VARIABLE_Cliques_0_4;
                cliques__STATE_VARIABLE_Visited_39_39 = cliques__HeadVar__3_3;
              }
            else
              {
                MR_Word cliques__CliqueList_17;
                MR_Word cliques__Clique_18;
                MR_Word cliques__V_37_37;

                {
                  cliques__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), cliques__V_37_37, 0) = ((MR_Box) (cliques__Node_11));
                  MR_hl_field(MR_mktag(1), cliques__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  cliques__dfs_6_p_0(cliques__V_37_37, cliques__HeadVar__2_2, cliques__HeadVar__3_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &cliques__STATE_VARIABLE_Visited_39_39, &cliques__CliqueList_17);
                }
                {
                  mercury__set__list_to_set_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, cliques__CliqueList_17, &cliques__Clique_18);
                }
                {
                  cliques__STATE_VARIABLE_Cliques_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), cliques__STATE_VARIABLE_Cliques_49_49, 0) = ((MR_Box) (cliques__Clique_18));
                  MR_hl_field(MR_mktag(1), cliques__STATE_VARIABLE_Cliques_49_49, 1) = ((MR_Box) (cliques__STATE_VARIABLE_Cliques_0_4));
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word cliques__HeadVar__1__tmp_copy_1 = cliques__Nodes_12;
              MR_ArrayPtr cliques__HeadVar__3__tmp_copy_3 = cliques__STATE_VARIABLE_Visited_39_39;
              MR_Word cliques__STATE_VARIABLE_Cliques_0__tmp_copy_4 = cliques__STATE_VARIABLE_Cliques_49_49;

              cliques__STATE_VARIABLE_Cliques_0_4 = cliques__STATE_VARIABLE_Cliques_0__tmp_copy_4;
              cliques__HeadVar__3_3 = cliques__HeadVar__3__tmp_copy_3;
              cliques__HeadVar__1_1 = cliques__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
cliques__mklist_3_p_0(
  MR_Integer cliques__N_4,
  MR_Word cliques__Acc0_5,
  MR_Word * cliques__Acc_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool cliques__succeeded = (cliques__N_4 < (MR_Integer) 0);

        if (cliques__succeeded)
          *cliques__Acc_6 = cliques__Acc0_5;
        else
          {
            MR_Word cliques__Acc1_7;
            MR_Integer cliques__V_9_9;

            {
              cliques__Acc1_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), cliques__Acc1_7, 0) = ((MR_Box) (cliques__N_4));
              MR_hl_field(MR_mktag(1), cliques__Acc1_7, 1) = ((MR_Box) (cliques__Acc0_5));
            }
            cliques__V_9_9 = (cliques__N_4 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer cliques__N__tmp_copy_4 = cliques__V_9_9;
              MR_Word cliques__Acc0__tmp_copy_5 = cliques__Acc1_7;

              cliques__Acc0_5 = cliques__Acc0__tmp_copy_5;
              cliques__N_4 = cliques__N__tmp_copy_4;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
cliques__topological_sort_2_p_0(
  MR_Word cliques__Graph_3,
  MR_Word * cliques__Cliques_4)
{
  {
    MR_bool cliques__succeeded;
    MR_Word cliques__Dfs_6;
    MR_Word cliques__InvGraph_7;
    MR_ArrayPtr cliques__Visit_8;
    MR_Word cliques__Cliques0_9;
    MR_Integer cliques__Size_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), cliques__Graph_3, (MR_Integer) 0)));
    MR_Word cliques__NodeList_42;
    MR_ArrayPtr cliques__Visit_43;
    MR_Word cliques__InvGraph0_48;
    MR_Integer cliques__Size_49;
    MR_ArrayPtr cliques__Array_51;
    MR_Word cliques__V_54_54;
    MR_ArrayPtr cliques___Array_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), cliques__Graph_3, (MR_Integer) 1)));
    MR_ArrayPtr cliques__conv0_Array_51;
    MR_ArrayPtr cliques___Array_50;

    {
      cliques__mklist_3_p_0(cliques__Size_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &cliques__NodeList_42);
    }
    {
      cliques__Visit_43 = dense_bitset__init_0_f_0();
    }
    {
      cliques__dfs_graph_2_5_p_0(cliques__NodeList_42, cliques__Graph_3, cliques__Visit_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &cliques__Dfs_6);
    }
    {
      cliques__V_54_54 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
    {
      mercury__array__init_3_p_0((MR_Word) &cliques_scalar_common_1[0], (MR_Integer) 16, ((MR_Box) (cliques__V_54_54)), &cliques__conv0_Array_51);
    }
    cliques__Array_51 = (MR_ArrayPtr) cliques__conv0_Array_51;
    {
      cliques__InvGraph0_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), cliques__InvGraph0_48, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), cliques__InvGraph0_48, 1) = ((MR_Box) (cliques__Array_51));
    }
    cliques__Size_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), cliques__Graph_3, (MR_Integer) 0)));
    cliques___Array_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), cliques__Graph_3, (MR_Integer) 1)));
    {
      cliques__inverse_2_4_p_0(cliques__Size_49, cliques__Graph_3, cliques__InvGraph0_48, &cliques__InvGraph_7);
    }
    {
      cliques__Visit_8 = dense_bitset__init_0_f_0();
    }
    {
      cliques__tsort_5_p_0(cliques__Dfs_6, cliques__InvGraph_7, cliques__Visit_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &cliques__Cliques0_9);
    }
    {
      cliques__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_3_p_0(cliques__Cliques0_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), cliques__Cliques_4);
    }
  }
}

void MR_CALL 
cliques__add_arc_4_p_0(
  MR_Word cliques__HeadVar__1_1,
  MR_Integer cliques__From_7,
  MR_Integer cliques__To_8,
  MR_Word * cliques__Graph_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool cliques__succeeded;
        MR_Integer cliques__Size0_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), cliques__HeadVar__1_1, (MR_Integer) 0)));
        MR_ArrayPtr cliques__Array0_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), cliques__HeadVar__1_1, (MR_Integer) 1)));

        {
          cliques__succeeded = mercury__array__in_bounds_2_p_0((MR_Word) &cliques_scalar_common_1[0], (MR_ArrayPtr) cliques__Array0_6, cliques__From_7);
        }
        if (cliques__succeeded)
          {
            MR_Word cliques__TypeInfo_24_24 = (MR_Word) &cliques_scalar_common_1[0];
            MR_Word cliques__Tos0_10;
            MR_Word cliques__Tos_11;
            MR_ArrayPtr cliques__Array_12;
            MR_Integer cliques__Size_13;
            MR_ArrayPtr cliques__V_15_15;
            MR_Integer cliques__V_16_16;
            MR_Box cliques__conv0_Tos0_10;
            MR_Box cliques__conv1_V_15_15;
            MR_ArrayPtr cliques__conv2_Array_12;

            {
              mercury__array__lookup_3_p_0(cliques__TypeInfo_24_24, (MR_ArrayPtr) cliques__Array0_6, cliques__From_7, &cliques__conv0_Tos0_10);
            }
            cliques__Tos0_10 = ((MR_Word) cliques__conv0_Tos0_10);
            {
              mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (cliques__To_8)), cliques__Tos0_10, &cliques__Tos_11);
            }
            {
              cliques__conv1_V_15_15 = array_util__u_1_f_0((MR_Word) &cliques_scalar_common_1[1], ((MR_Box) (cliques__Array0_6)));
            }
            cliques__V_15_15 = ((MR_ArrayPtr) cliques__conv1_V_15_15);
            {
              mercury__array__set_4_p_0(cliques__TypeInfo_24_24, cliques__From_7, ((MR_Box) (cliques__Tos_11)), (MR_ArrayPtr) cliques__V_15_15, &cliques__conv2_Array_12);
            }
            cliques__Array_12 = (MR_ArrayPtr) cliques__conv2_Array_12;
            {
              cliques__V_16_16 = mercury__int__max_2_f_0(cliques__From_7, cliques__To_8);
            }
            {
              cliques__Size_13 = mercury__int__max_2_f_0(cliques__V_16_16, cliques__Size0_5);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *cliques__Graph_9 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (cliques__Size_13));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (cliques__Array_12));
            }
          }
        else
          {
            MR_Word cliques__TypeInfo_27_27 = (MR_Word) &cliques_scalar_common_1[0];
            MR_ArrayPtr cliques__Array1_14;
            MR_Integer cliques__V_17_17;
            MR_Word cliques__V_18_18;
            MR_ArrayPtr cliques__V_19_19;
            MR_Word cliques__V_21_21;
            MR_Integer cliques__Size_22;
            MR_Box cliques__conv3_V_19_19;
            MR_ArrayPtr cliques__conv4_Array1_14;

            {
              mercury__array__size_2_p_0(cliques__TypeInfo_27_27, (MR_ArrayPtr) cliques__Array0_6, &cliques__Size_22);
            }
            cliques__V_17_17 = (cliques__Size_22 * (MR_Integer) 2);
            {
              cliques__V_18_18 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
            }
            {
              cliques__conv3_V_19_19 = array_util__u_1_f_0((MR_Word) &cliques_scalar_common_1[1], ((MR_Box) (cliques__Array0_6)));
            }
            cliques__V_19_19 = ((MR_ArrayPtr) cliques__conv3_V_19_19);
            {
              mercury__array__resize_4_p_0(cliques__TypeInfo_27_27, cliques__V_17_17, ((MR_Box) (cliques__V_18_18)), (MR_ArrayPtr) cliques__V_19_19, &cliques__conv4_Array1_14);
            }
            cliques__Array1_14 = (MR_ArrayPtr) cliques__conv4_Array1_14;
            {
              cliques__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), cliques__V_21_21, 0) = ((MR_Box) (cliques__Size0_5));
              MR_hl_field(MR_mktag(0), cliques__V_21_21, 1) = ((MR_Box) (cliques__Array1_14));
            }
            /* direct tailcall eliminated */
            {
              MR_Word cliques__HeadVar__1__tmp_copy_1 = cliques__V_21_21;

              cliques__HeadVar__1_1 = cliques__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
cliques__init_1_p_0(
  MR_Word * cliques__HeadVar__1_1)
{
  {
    MR_bool cliques__succeeded;
    MR_ArrayPtr cliques__Array_2;
    MR_Word cliques__V_5_5;
    MR_ArrayPtr cliques__conv0_Array_2;

    {
      cliques__V_5_5 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
    {
      mercury__array__init_3_p_0((MR_Word) &cliques_scalar_common_1[0], (MR_Integer) 16, ((MR_Box) (cliques__V_5_5)), &cliques__conv0_Array_2);
    }
    cliques__Array_2 = (MR_ArrayPtr) cliques__conv0_Array_2;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *cliques__HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (cliques__Array_2));
    }
  }
}

void mercury__cliques__init(void)
{
}

void mercury__cliques__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&cliques__cliques__type_ctor_info_graph_0);
	MR_register_type_ctor_info(&cliques__cliques__type_ctor_info_visit_0);
}

void mercury__cliques__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__cliques__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module cliques. */
