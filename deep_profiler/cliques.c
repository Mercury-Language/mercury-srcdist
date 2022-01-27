/*
** Automatically generated from `cliques.m'
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


/* :- module cliques. */
/* :- implementation. */

/*
INIT mercury__cliques__init
ENDINIT
*/

#include "cliques.mih"


#include "array.mih"
#include "array_util.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "dense_bitset.mih"
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




#line 66 "cliques.c"
static const MR_FA_TypeInfo_Struct1 cliques__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 69 "cliques.c"
static const MR_FA_TypeInfo_Struct1 cliques__array__ti_array_1set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 72 "cliques.c"
static const MR_PseudoTypeInfo cliques__cliques__field_types_graph_0_0[2];

#line 75 "cliques.c"
static const MR_DuFunctorDesc cliques__cliques__du_functor_desc_graph_0_0;

#line 78 "cliques.c"
static const MR_DuFunctorDescPtr cliques__cliques__du_stag_ordered_graph_0_0[1];

#line 81 "cliques.c"
static const MR_DuPtagLayout cliques__cliques__du_ptag_ordered_graph_0[1];

#line 84 "cliques.c"
static const MR_DuFunctorDescPtr cliques__cliques__du_name_ordered_graph_0[1];

#line 87 "cliques.c"
static const MR_Integer cliques__cliques__functor_number_map_graph_0[1];

#line 90 "cliques.c"
static const MR_FA_TypeInfo_Struct1 cliques__array__ti_array_1builtin__type_ctor_info_int_0;

#line 93 "cliques.c"
static MR_bool MR_CALL 
cliques____Unify____graph_0_0_10001(
#line 96 "cliques.c"
  MR_Box cliques__wrapper_arg_1,
#line 98 "cliques.c"
  MR_Box cliques__wrapper_arg_2);

#line 101 "cliques.c"
static void MR_CALL 
cliques____Compare____graph_0_0_10001(
#line 104 "cliques.c"
  MR_Box * cliques__wrapper_arg_1,
#line 106 "cliques.c"
  MR_Box cliques__wrapper_arg_2,
#line 108 "cliques.c"
  MR_Box cliques__wrapper_arg_3);

#line 111 "cliques.c"
static MR_bool MR_CALL 
cliques____Unify____visit_0_0_10001(
#line 114 "cliques.c"
  MR_Box cliques__wrapper_arg_1,
#line 116 "cliques.c"
  MR_Box cliques__wrapper_arg_2);

#line 119 "cliques.c"
static void MR_CALL 
cliques____Compare____visit_0_0_10001(
#line 122 "cliques.c"
  MR_Box * cliques__wrapper_arg_1,
#line 124 "cliques.c"
  MR_Box cliques__wrapper_arg_2,
#line 126 "cliques.c"
  MR_Box cliques__wrapper_arg_3);

#line 146 "cliques.m"
static void MR_CALL 
cliques__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_3_p_0(
#line 146 "cliques.m"
  MR_Word cliques__HeadVar__1_1,
#line 146 "cliques.m"
  MR_Word cliques__HeadVar__2_2,
#line 146 "cliques.m"
  MR_Word * cliques__L_3);

#line 64 "cliques.m"
static void MR_CALL 
cliques____Compare____visit_0_0(
#line 64 "cliques.m"
  MR_Word * cliques__HeadVar__1_1,
#line 64 "cliques.m"
  MR_ArrayPtr cliques__HeadVar__2_2,
#line 64 "cliques.m"
  MR_ArrayPtr cliques__HeadVar__3_3);

#line 64 "cliques.m"
static MR_bool MR_CALL 
cliques____Unify____visit_0_0(
#line 64 "cliques.m"
  MR_ArrayPtr cliques__HeadVar__1_1,
#line 64 "cliques.m"
  MR_ArrayPtr cliques__HeadVar__2_2);

#line 267 "cliques.m"
static void MR_CALL 
cliques__add_arcs_to_4_p_0(
#line 267 "cliques.m"
  MR_Word cliques__HeadVar__1_1,
#line 267 "cliques.m"
  MR_Integer cliques__To_2,
#line 267 "cliques.m"
  MR_Word cliques__HeadVar__3_3,
#line 267 "cliques.m"
  MR_Word * cliques__Graph_4);

#line 255 "cliques.m"
static void MR_CALL 
cliques__inverse_2_4_p_0(
#line 255 "cliques.m"
  MR_Integer cliques__To_5,
#line 255 "cliques.m"
  MR_Word cliques__Graph_6,
#line 255 "cliques.m"
  MR_Word cliques__InvGraph0_7,
#line 255 "cliques.m"
  MR_Word * cliques__InvGraph_8);

#line 220 "cliques.m"
static void MR_CALL 
cliques__dfs_6_p_0(
#line 220 "cliques.m"
  MR_Word cliques__HeadVar__1_1,
#line 220 "cliques.m"
  MR_Word cliques__HeadVar__2_2,
#line 220 "cliques.m"
  MR_ArrayPtr cliques__HeadVar__3_3,
#line 220 "cliques.m"
  MR_Word cliques__HeadVar__4_4,
#line 220 "cliques.m"
  MR_ArrayPtr * cliques__Visit_5,
#line 220 "cliques.m"
  MR_Word * cliques__Dfs_6);

#line 204 "cliques.m"
static void MR_CALL 
cliques__dfs_graph_2_5_p_0(
#line 204 "cliques.m"
  MR_Word cliques__HeadVar__1_1,
#line 204 "cliques.m"
  MR_Word cliques__HeadVar__2_2,
#line 204 "cliques.m"
  MR_ArrayPtr cliques__HeadVar__3_3,
#line 204 "cliques.m"
  MR_Word cliques__HeadVar__4_4,
#line 204 "cliques.m"
  MR_Word * cliques__Dfs_5);

#line 152 "cliques.m"
static void MR_CALL 
cliques__tsort_5_p_0(
#line 152 "cliques.m"
  MR_Word cliques__HeadVar__1_1,
#line 152 "cliques.m"
  MR_Word cliques__HeadVar__2_2,
#line 152 "cliques.m"
  MR_ArrayPtr cliques__HeadVar__3_3,
#line 152 "cliques.m"
  MR_Word cliques__STATE_VARIABLE_Cliques_0_4,
#line 152 "cliques.m"
  MR_Word * cliques__STATE_VARIABLE_Cliques_5);

#line 94 "cliques.m"
static void MR_CALL 
cliques__mklist_3_p_0(
#line 94 "cliques.m"
  MR_Integer cliques__N_4,
#line 94 "cliques.m"
  MR_Word cliques__Acc0_5,
#line 94 "cliques.m"
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
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 274 "cliques.c"
static const MR_FA_TypeInfo_Struct1 cliques__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 282 "cliques.c"
static const MR_FA_TypeInfo_Struct1 cliques__array__ti_array_1set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &cliques__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 290 "cliques.c"
static const MR_PseudoTypeInfo cliques__cliques__field_types_graph_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &cliques__array__ti_array_1set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

#line 296 "cliques.c"
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
  NULL
};

#line 311 "cliques.c"
static const MR_DuFunctorDescPtr cliques__cliques__du_stag_ordered_graph_0_0[1] = {
  &cliques__cliques__du_functor_desc_graph_0_0
};

#line 316 "cliques.c"
static const MR_DuPtagLayout cliques__cliques__du_ptag_ordered_graph_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    cliques__cliques__du_stag_ordered_graph_0_0
  }
};

#line 325 "cliques.c"
static const MR_DuFunctorDescPtr cliques__cliques__du_name_ordered_graph_0[1] = {
  &cliques__cliques__du_functor_desc_graph_0_0
};

#line 330 "cliques.c"
static const MR_Integer cliques__cliques__functor_number_map_graph_0[1] = {
  (MR_Integer) 0
};

#line 335 "cliques.c"
const MR_TypeCtorInfo_Struct cliques__cliques__type_ctor_info_graph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (cliques____Unify____graph_0_0_10001)),
  ((MR_Box) (cliques____Compare____graph_0_0_10001)),
  (MR_String) "cliques",
  (MR_String) "graph",
  {
    cliques__cliques__du_name_ordered_graph_0
  },
  {
    cliques__cliques__du_ptag_ordered_graph_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  cliques__cliques__functor_number_map_graph_0
};

#line 356 "cliques.c"
static const MR_FA_TypeInfo_Struct1 cliques__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 364 "cliques.c"
const MR_TypeCtorInfo_Struct cliques__cliques__type_ctor_info_visit_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (cliques____Unify____visit_0_0_10001)),
  ((MR_Box) (cliques____Compare____visit_0_0_10001)),
  (MR_String) "cliques",
  (MR_String) "visit",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &cliques__array__ti_array_1builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 385 "cliques.c"
static MR_bool MR_CALL 
cliques____Unify____graph_0_0_10001(
#line 388 "cliques.c"
  MR_Box cliques__wrapper_arg_1,
#line 390 "cliques.c"
  MR_Box cliques__wrapper_arg_2)
#line 392 "cliques.c"
{
#line 394 "cliques.c"
  {
#line 396 "cliques.c"
    MR_bool cliques__succeeded;

#line 399 "cliques.c"
    {
#line 401 "cliques.c"
      cliques__succeeded = cliques____Unify____graph_0_0(((MR_Word) cliques__wrapper_arg_1), ((MR_Word) cliques__wrapper_arg_2));
    }
#line 404 "cliques.c"
    return cliques__succeeded;
#line 406 "cliques.c"
  }
#line 408 "cliques.c"
}

#line 411 "cliques.c"
static void MR_CALL 
cliques____Compare____graph_0_0_10001(
#line 414 "cliques.c"
  MR_Box * cliques__wrapper_arg_1,
#line 416 "cliques.c"
  MR_Box cliques__wrapper_arg_2,
#line 418 "cliques.c"
  MR_Box cliques__wrapper_arg_3)
#line 420 "cliques.c"
{
#line 422 "cliques.c"
  {
#line 424 "cliques.c"
    MR_Word cliques__conv0_HeadVar__1_1;

#line 427 "cliques.c"
    {
#line 429 "cliques.c"
      cliques____Compare____graph_0_0(&cliques__conv0_HeadVar__1_1, ((MR_Word) cliques__wrapper_arg_2), ((MR_Word) cliques__wrapper_arg_3));
    }
#line 432 "cliques.c"
    *cliques__wrapper_arg_1 = ((MR_Box) (cliques__conv0_HeadVar__1_1));
#line 434 "cliques.c"
  }
#line 436 "cliques.c"
}

#line 439 "cliques.c"
static MR_bool MR_CALL 
cliques____Unify____visit_0_0_10001(
#line 442 "cliques.c"
  MR_Box cliques__wrapper_arg_1,
#line 444 "cliques.c"
  MR_Box cliques__wrapper_arg_2)
#line 446 "cliques.c"
{
#line 448 "cliques.c"
  {
#line 450 "cliques.c"
    MR_bool cliques__succeeded;

#line 453 "cliques.c"
    {
#line 455 "cliques.c"
      cliques__succeeded = cliques____Unify____visit_0_0(((MR_ArrayPtr) cliques__wrapper_arg_1), ((MR_ArrayPtr) cliques__wrapper_arg_2));
    }
#line 458 "cliques.c"
    return cliques__succeeded;
#line 460 "cliques.c"
  }
#line 462 "cliques.c"
}

#line 465 "cliques.c"
static void MR_CALL 
cliques____Compare____visit_0_0_10001(
#line 468 "cliques.c"
  MR_Box * cliques__wrapper_arg_1,
#line 470 "cliques.c"
  MR_Box cliques__wrapper_arg_2,
#line 472 "cliques.c"
  MR_Box cliques__wrapper_arg_3)
#line 474 "cliques.c"
{
#line 476 "cliques.c"
  {
#line 478 "cliques.c"
    MR_Word cliques__conv0_HeadVar__1_1;

#line 481 "cliques.c"
    {
#line 483 "cliques.c"
      cliques____Compare____visit_0_0(&cliques__conv0_HeadVar__1_1, ((MR_ArrayPtr) cliques__wrapper_arg_2), ((MR_ArrayPtr) cliques__wrapper_arg_3));
    }
#line 486 "cliques.c"
    *cliques__wrapper_arg_1 = ((MR_Box) (cliques__conv0_HeadVar__1_1));
#line 488 "cliques.c"
  }
#line 490 "cliques.c"
}

#line 146 "cliques.m"
static void MR_CALL 
cliques__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_3_p_0(
#line 146 "cliques.m"
  MR_Word cliques__HeadVar__1_1,
#line 146 "cliques.m"
  MR_Word cliques__HeadVar__2_2,
#line 146 "cliques.m"
  MR_Word * cliques__L_3)
#line 146 "cliques.m"
{
#line 148 "cliques.m"
  while (MR_TRUE)
#line 148 "cliques.m"
    {
#line 148 "cliques.m"
      /* tailcall optimized into a loop */
#line 148 "cliques.m"
      {
#line 148 "cliques.m"
        MR_bool cliques__succeeded;

#line 148 "cliques.m"
        if ((cliques__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 148 "cliques.m"
          *cliques__L_3 = cliques__HeadVar__2_2;
#line 148 "cliques.m"
        else
#line 149 "cliques.m"
          {
#line 149 "cliques.m"
            MR_Box cliques__X_5 = (MR_hl_field(MR_mktag(1), cliques__HeadVar__1_1, (MR_Integer) 0));
#line 149 "cliques.m"
            MR_Word cliques__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), cliques__HeadVar__1_1, (MR_Integer) 1)));
#line 149 "cliques.m"
            MR_Word cliques__V_9_9;

#line 150 "cliques.m"
            {
#line 150 "cliques.m"
              cliques__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "cliques.m"
              MR_hl_field(MR_mktag(1), cliques__V_9_9, 0) = cliques__X_5;
#line 150 "cliques.m"
              MR_hl_field(MR_mktag(1), cliques__V_9_9, 1) = ((MR_Box) (cliques__HeadVar__2_2));
#line 150 "cliques.m"
            }
#line 150 "cliques.m"
            /* direct tailcall eliminated */
#line 150 "cliques.m"
            {
#line 150 "cliques.m"
              MR_Word cliques__HeadVar__1__tmp_copy_1 = cliques__Xs_6;
#line 150 "cliques.m"
              MR_Word cliques__HeadVar__2__tmp_copy_2 = cliques__V_9_9;

#line 150 "cliques.m"
              cliques__HeadVar__2_2 = cliques__HeadVar__2__tmp_copy_2;
#line 150 "cliques.m"
              cliques__HeadVar__1_1 = cliques__HeadVar__1__tmp_copy_1;
#line 150 "cliques.m"
            }
#line 150 "cliques.m"
            continue;
#line 149 "cliques.m"
          }
#line 148 "cliques.m"
      }
#line 148 "cliques.m"
      break;
#line 148 "cliques.m"
    }
#line 146 "cliques.m"
}

#line 64 "cliques.m"
static void MR_CALL 
cliques____Compare____visit_0_0(
#line 64 "cliques.m"
  MR_Word * cliques__HeadVar__1_1,
#line 64 "cliques.m"
  MR_ArrayPtr cliques__HeadVar__2_2,
#line 64 "cliques.m"
  MR_ArrayPtr cliques__HeadVar__3_3)
#line 64 "cliques.m"
{
#line 64 "cliques.m"
  {
#line 64 "cliques.m"
    MR_bool cliques__succeeded;
#line 64 "cliques.m"
    MR_ArrayPtr cliques__Cast_HeadVar1_4 = cliques__HeadVar__2_2;
#line 64 "cliques.m"
    MR_ArrayPtr cliques__Cast_HeadVar2_5 = cliques__HeadVar__3_3;

#line 64 "cliques.m"
    {
#line 64 "cliques.m"
      mercury__builtin__compare_3_p_0((MR_Word) &cliques_scalar_common_1[2], cliques__HeadVar__1_1, ((MR_Box) (cliques__Cast_HeadVar1_4)), ((MR_Box) (cliques__Cast_HeadVar2_5)));
#line 64 "cliques.m"
      return;
    }
#line 64 "cliques.m"
  }
#line 64 "cliques.m"
}

#line 64 "cliques.m"
static MR_bool MR_CALL 
cliques____Unify____visit_0_0(
#line 64 "cliques.m"
  MR_ArrayPtr cliques__HeadVar__1_1,
#line 64 "cliques.m"
  MR_ArrayPtr cliques__HeadVar__2_2)
#line 64 "cliques.m"
{
#line 64 "cliques.m"
  {
#line 64 "cliques.m"
    MR_bool cliques__succeeded;
#line 64 "cliques.m"
    MR_ArrayPtr cliques__Cast_HeadVar1_3 = cliques__HeadVar__1_1;
#line 64 "cliques.m"
    MR_ArrayPtr cliques__Cast_HeadVar2_4 = cliques__HeadVar__2_2;

#line 64 "cliques.m"
    {
#line 64 "cliques.m"
      return cliques__succeeded = mercury__array____Unify____array_1_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) cliques__Cast_HeadVar1_3, (MR_ArrayPtr) cliques__Cast_HeadVar2_4);
    }
#line 64 "cliques.m"
    return cliques__succeeded;
#line 64 "cliques.m"
  }
#line 64 "cliques.m"
}

#line 58 "cliques.m"
void MR_CALL 
cliques____Compare____graph_0_0(
#line 58 "cliques.m"
  MR_Word * cliques__HeadVar__1_1,
#line 58 "cliques.m"
  MR_Word cliques__HeadVar__2_2,
#line 58 "cliques.m"
  MR_Word cliques__HeadVar__3_3)
#line 58 "cliques.m"
{
#line 58 "cliques.m"
  {
#line 58 "cliques.m"
    MR_bool cliques__succeeded;
#line 58 "cliques.m"
    MR_Integer cliques__CastX_9 = (MR_Integer) cliques__HeadVar__2_2;
#line 58 "cliques.m"
    MR_Integer cliques__CastY_10 = (MR_Integer) cliques__HeadVar__3_3;

#line 58 "cliques.m"
    cliques__succeeded = (cliques__CastX_9 == cliques__CastY_10);
#line 58 "cliques.m"
    if (cliques__succeeded)
#line 654 "cliques.c"
      *cliques__HeadVar__1_1 = (MR_Integer) 0;
#line 58 "cliques.m"
    else
#line 58 "cliques.m"
      {
#line 58 "cliques.m"
        MR_Integer cliques__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), cliques__HeadVar__2_2, (MR_Integer) 0)));
#line 58 "cliques.m"
        MR_ArrayPtr cliques__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), cliques__HeadVar__2_2, (MR_Integer) 1)));
#line 58 "cliques.m"
        MR_Integer cliques__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), cliques__HeadVar__3_3, (MR_Integer) 0)));
#line 58 "cliques.m"
        MR_ArrayPtr cliques__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), cliques__HeadVar__3_3, (MR_Integer) 1)));
#line 58 "cliques.m"
        MR_Word cliques__V_8_8;

#line 58 "cliques.m"
        {
#line 58 "cliques.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&cliques__V_8_8, cliques__V_4_4, cliques__V_6_6);
        }
#line 676 "cliques.c"
        cliques__succeeded = (cliques__V_8_8 == (MR_Integer) 0);
#line 58 "cliques.m"
        cliques__succeeded = !(cliques__succeeded);
#line 58 "cliques.m"
        if (cliques__succeeded)
#line 58 "cliques.m"
          *cliques__HeadVar__1_1 = cliques__V_8_8;
#line 58 "cliques.m"
        else
#line 58 "cliques.m"
          {
#line 58 "cliques.m"
            {
#line 58 "cliques.m"
              mercury__builtin__compare_3_p_0((MR_Word) &cliques_scalar_common_1[1], cliques__HeadVar__1_1, ((MR_Box) (cliques__V_5_5)), ((MR_Box) (cliques__V_7_7)));
#line 58 "cliques.m"
              return;
            }
#line 58 "cliques.m"
          }
#line 58 "cliques.m"
      }
#line 58 "cliques.m"
  }
#line 58 "cliques.m"
}

#line 58 "cliques.m"
MR_bool MR_CALL 
cliques____Unify____graph_0_0(
#line 58 "cliques.m"
  MR_Word cliques__HeadVar__1_1,
#line 58 "cliques.m"
  MR_Word cliques__HeadVar__2_2)
#line 58 "cliques.m"
{
#line 58 "cliques.m"
  {
#line 58 "cliques.m"
    MR_bool cliques__succeeded;
#line 58 "cliques.m"
    MR_Integer cliques__CastX_7 = (MR_Integer) cliques__HeadVar__1_1;
#line 58 "cliques.m"
    MR_Integer cliques__CastY_8 = (MR_Integer) cliques__HeadVar__2_2;

#line 58 "cliques.m"
    cliques__succeeded = (cliques__CastX_7 == cliques__CastY_8);
#line 58 "cliques.m"
    if (cliques__succeeded)
#line 58 "cliques.m"
      cliques__succeeded = MR_TRUE;
#line 58 "cliques.m"
    else
#line 58 "cliques.m"
      {
#line 58 "cliques.m"
        MR_Word cliques__TypeInfo_9_9;
#line 58 "cliques.m"
        MR_Integer cliques__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), cliques__HeadVar__1_1, (MR_Integer) 0)));
#line 58 "cliques.m"
        MR_ArrayPtr cliques__V_4_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), cliques__HeadVar__1_1, (MR_Integer) 1)));
#line 58 "cliques.m"
        MR_Integer cliques__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), cliques__HeadVar__2_2, (MR_Integer) 0)));
#line 58 "cliques.m"
        MR_ArrayPtr cliques__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), cliques__HeadVar__2_2, (MR_Integer) 1)));

#line 743 "cliques.c"
        cliques__succeeded = (cliques__V_3_3 == cliques__V_5_5);
#line 58 "cliques.m"
        if (cliques__succeeded)
#line 58 "cliques.m"
          {
#line 749 "cliques.c"
            cliques__TypeInfo_9_9 = (MR_Word) &cliques_scalar_common_1[0];
#line 751 "cliques.c"
            {
#line 753 "cliques.c"
              return cliques__succeeded = mercury__array____Unify____array_1_0(cliques__TypeInfo_9_9, (MR_ArrayPtr) cliques__V_4_4, (MR_ArrayPtr) cliques__V_6_6);
            }
#line 58 "cliques.m"
          }
#line 58 "cliques.m"
      }
#line 58 "cliques.m"
    return cliques__succeeded;
#line 58 "cliques.m"
  }
#line 58 "cliques.m"
}

#line 267 "cliques.m"
static void MR_CALL 
cliques__add_arcs_to_4_p_0(
#line 267 "cliques.m"
  MR_Word cliques__HeadVar__1_1,
#line 267 "cliques.m"
  MR_Integer cliques__To_2,
#line 267 "cliques.m"
  MR_Word cliques__HeadVar__3_3,
#line 267 "cliques.m"
  MR_Word * cliques__Graph_4)
#line 267 "cliques.m"
{
#line 269 "cliques.m"
  while (MR_TRUE)
#line 269 "cliques.m"
    {
#line 269 "cliques.m"
      /* tailcall optimized into a loop */
#line 269 "cliques.m"
      {
#line 269 "cliques.m"
        MR_bool cliques__succeeded;

#line 269 "cliques.m"
        if ((cliques__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 269 "cliques.m"
          *cliques__Graph_4 = cliques__HeadVar__3_3;
#line 269 "cliques.m"
        else
#line 270 "cliques.m"
          {
#line 270 "cliques.m"
            MR_Integer cliques__From_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), cliques__HeadVar__1_1, (MR_Integer) 0)));
#line 270 "cliques.m"
            MR_Word cliques__FromList_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), cliques__HeadVar__1_1, (MR_Integer) 1)));
#line 270 "cliques.m"
            MR_Word cliques__Graph1_12;

#line 271 "cliques.m"
            {
#line 271 "cliques.m"
              cliques__add_arc_4_p_0(cliques__HeadVar__3_3, cliques__From_7, cliques__To_2, &cliques__Graph1_12);
            }
#line 272 "cliques.m"
            /* direct tailcall eliminated */
#line 272 "cliques.m"
            {
#line 272 "cliques.m"
              MR_Word cliques__HeadVar__1__tmp_copy_1 = cliques__FromList_8;
#line 272 "cliques.m"
              MR_Word cliques__HeadVar__3__tmp_copy_3 = cliques__Graph1_12;

#line 272 "cliques.m"
              cliques__HeadVar__3_3 = cliques__HeadVar__3__tmp_copy_3;
#line 272 "cliques.m"
              cliques__HeadVar__1_1 = cliques__HeadVar__1__tmp_copy_1;
#line 272 "cliques.m"
            }
#line 272 "cliques.m"
            continue;
#line 270 "cliques.m"
          }
#line 269 "cliques.m"
      }
#line 269 "cliques.m"
      break;
#line 269 "cliques.m"
    }
#line 267 "cliques.m"
}

#line 255 "cliques.m"
static void MR_CALL 
cliques__inverse_2_4_p_0(
#line 255 "cliques.m"
  MR_Integer cliques__To_5,
#line 255 "cliques.m"
  MR_Word cliques__Graph_6,
#line 255 "cliques.m"
  MR_Word cliques__InvGraph0_7,
#line 255 "cliques.m"
  MR_Word * cliques__InvGraph_8)
#line 255 "cliques.m"
{
#line 263 "cliques.m"
  while (MR_TRUE)
#line 263 "cliques.m"
    {
#line 263 "cliques.m"
      /* tailcall optimized into a loop */
#line 263 "cliques.m"
      {
#line 263 "cliques.m"
        MR_bool cliques__succeeded = (cliques__To_5 >= (MR_Integer) 0);

#line 263 "cliques.m"
        if (cliques__succeeded)
#line 259 "cliques.m"
          {
#line 259 "cliques.m"
            MR_Word cliques__Froms_9;
#line 259 "cliques.m"
            MR_Word cliques__FromList_10;
#line 259 "cliques.m"
            MR_Word cliques__InvGraph1_11;
#line 259 "cliques.m"
            MR_Integer cliques__V_13_13;
#line 259 "cliques.m"
            MR_ArrayPtr cliques__Array_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), cliques__Graph_6, (MR_Integer) 1)));
#line 87 "cliques.m"
            MR_Integer cliques___Size_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), cliques__Graph_6, (MR_Integer) 0)));

#line 88 "cliques.m"
            {
#line 88 "cliques.m"
              cliques__succeeded = mercury__array__in_bounds_2_p_0((MR_Word) &cliques_scalar_common_1[0], (MR_ArrayPtr) cliques__Array_19, cliques__To_5);
            }
#line 90 "cliques.m"
            if (cliques__succeeded)
#line 89 "cliques.m"
              {
#line 89 "cliques.m"
                MR_Box cliques__conv0_Froms_9;

#line 89 "cliques.m"
                {
#line 89 "cliques.m"
                  mercury__array__lookup_3_p_0((MR_Word) &cliques_scalar_common_1[0], (MR_ArrayPtr) cliques__Array_19, cliques__To_5, &cliques__conv0_Froms_9);
                }
#line 89 "cliques.m"
                cliques__Froms_9 = ((MR_Word) cliques__conv0_Froms_9);
#line 89 "cliques.m"
              }
#line 90 "cliques.m"
            else
#line 91 "cliques.m"
              {
#line 91 "cliques.m"
                {
#line 91 "cliques.m"
                  cliques__Froms_9 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
                }
#line 91 "cliques.m"
              }
#line 260 "cliques.m"
            {
#line 260 "cliques.m"
              mercury__set__to_sorted_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, cliques__Froms_9, &cliques__FromList_10);
            }
#line 261 "cliques.m"
            {
#line 261 "cliques.m"
              cliques__add_arcs_to_4_p_0(cliques__FromList_10, cliques__To_5, cliques__InvGraph0_7, &cliques__InvGraph1_11);
            }
#line 262 "cliques.m"
            cliques__V_13_13 = (cliques__To_5 - (MR_Integer) 1);
#line 262 "cliques.m"
            /* direct tailcall eliminated */
#line 262 "cliques.m"
            {
#line 262 "cliques.m"
              MR_Integer cliques__To__tmp_copy_5 = cliques__V_13_13;
#line 262 "cliques.m"
              MR_Word cliques__InvGraph0__tmp_copy_7 = cliques__InvGraph1_11;

#line 262 "cliques.m"
              cliques__InvGraph0_7 = cliques__InvGraph0__tmp_copy_7;
#line 262 "cliques.m"
              cliques__To_5 = cliques__To__tmp_copy_5;
#line 262 "cliques.m"
            }
#line 262 "cliques.m"
            continue;
#line 259 "cliques.m"
          }
#line 263 "cliques.m"
        else
#line 264 "cliques.m"
          *cliques__InvGraph_8 = cliques__InvGraph0_7;
#line 263 "cliques.m"
      }
#line 263 "cliques.m"
      break;
#line 263 "cliques.m"
    }
#line 255 "cliques.m"
}

#line 220 "cliques.m"
static void MR_CALL 
cliques__dfs_6_p_0(
#line 220 "cliques.m"
  MR_Word cliques__HeadVar__1_1,
#line 220 "cliques.m"
  MR_Word cliques__HeadVar__2_2,
#line 220 "cliques.m"
  MR_ArrayPtr cliques__HeadVar__3_3,
#line 220 "cliques.m"
  MR_Word cliques__HeadVar__4_4,
#line 220 "cliques.m"
  MR_ArrayPtr * cliques__Visit_5,
#line 220 "cliques.m"
  MR_Word * cliques__Dfs_6)
#line 220 "cliques.m"
{
#line 223 "cliques.m"
  while (MR_TRUE)
#line 223 "cliques.m"
    {
#line 223 "cliques.m"
      /* tailcall optimized into a loop */
#line 223 "cliques.m"
      {
#line 223 "cliques.m"
        MR_bool cliques__succeeded;

#line 223 "cliques.m"
        if ((cliques__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 223 "cliques.m"
          {
#line 223 "cliques.m"
            *cliques__Visit_5 = cliques__HeadVar__3_3;
#line 223 "cliques.m"
            *cliques__Dfs_6 = cliques__HeadVar__4_4;
#line 223 "cliques.m"
          }
#line 223 "cliques.m"
        else
#line 224 "cliques.m"
          {
#line 224 "cliques.m"
            MR_Integer cliques__Node_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), cliques__HeadVar__1_1, (MR_Integer) 0)));
#line 224 "cliques.m"
            MR_Word cliques__Nodes_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), cliques__HeadVar__1_1, (MR_Integer) 1)));

#line 225 "cliques.m"
            {
#line 225 "cliques.m"
              cliques__succeeded = dense_bitset__member_2_p_0(cliques__Node_10, cliques__HeadVar__3_3);
            }
#line 233 "cliques.m"
            if (cliques__succeeded)
#line 232 "cliques.m"
              {
#line 232 "cliques.m"
                /* direct tailcall eliminated */
#line 232 "cliques.m"
                {
#line 232 "cliques.m"
                  MR_Word cliques__HeadVar__1__tmp_copy_1 = cliques__Nodes_11;

#line 232 "cliques.m"
                  cliques__HeadVar__1_1 = cliques__HeadVar__1__tmp_copy_1;
#line 232 "cliques.m"
                }
#line 232 "cliques.m"
                continue;
#line 232 "cliques.m"
              }
#line 233 "cliques.m"
            else
#line 238 "cliques.m"
              {
#line 238 "cliques.m"
                MR_ArrayPtr cliques__Visit1_18;
#line 238 "cliques.m"
                MR_Word cliques__Succ_19;
#line 238 "cliques.m"
                MR_Word cliques__SuccList_20;
#line 238 "cliques.m"
                MR_ArrayPtr cliques__Visit2_21;
#line 238 "cliques.m"
                MR_Word cliques__Dfs1_22;
#line 238 "cliques.m"
                MR_Word cliques__Dfs2_23;
#line 238 "cliques.m"
                MR_ArrayPtr cliques__Array_38;
#line 87 "cliques.m"
                MR_Integer cliques___Size_37;

#line 240 "cliques.m"
                {
#line 240 "cliques.m"
                  cliques__Visit1_18 = dense_bitset__insert_2_f_0(cliques__HeadVar__3_3, cliques__Node_10);
                }
#line 87 "cliques.m"
                cliques___Size_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), cliques__HeadVar__2_2, (MR_Integer) 0)));
#line 87 "cliques.m"
                cliques__Array_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), cliques__HeadVar__2_2, (MR_Integer) 1)));
#line 88 "cliques.m"
                {
#line 88 "cliques.m"
                  cliques__succeeded = mercury__array__in_bounds_2_p_0((MR_Word) &cliques_scalar_common_1[0], (MR_ArrayPtr) cliques__Array_38, cliques__Node_10);
                }
#line 90 "cliques.m"
                if (cliques__succeeded)
#line 89 "cliques.m"
                  {
#line 89 "cliques.m"
                    MR_Box cliques__conv0_Succ_19;

#line 89 "cliques.m"
                    {
#line 89 "cliques.m"
                      mercury__array__lookup_3_p_0((MR_Word) &cliques_scalar_common_1[0], (MR_ArrayPtr) cliques__Array_38, cliques__Node_10, &cliques__conv0_Succ_19);
                    }
#line 89 "cliques.m"
                    cliques__Succ_19 = ((MR_Word) cliques__conv0_Succ_19);
#line 89 "cliques.m"
                  }
#line 90 "cliques.m"
                else
#line 91 "cliques.m"
                  {
#line 91 "cliques.m"
                    {
#line 91 "cliques.m"
                      cliques__Succ_19 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
                    }
#line 91 "cliques.m"
                  }
#line 242 "cliques.m"
                {
#line 242 "cliques.m"
                  mercury__set__to_sorted_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, cliques__Succ_19, &cliques__SuccList_20);
                }
#line 243 "cliques.m"
                {
#line 243 "cliques.m"
                  cliques__dfs_6_p_0(cliques__SuccList_20, cliques__HeadVar__2_2, cliques__Visit1_18, cliques__HeadVar__4_4, &cliques__Visit2_21, &cliques__Dfs1_22);
                }
#line 244 "cliques.m"
                {
#line 244 "cliques.m"
                  cliques__Dfs2_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "cliques.m"
                  MR_hl_field(MR_mktag(1), cliques__Dfs2_23, 0) = ((MR_Box) (cliques__Node_10));
#line 244 "cliques.m"
                  MR_hl_field(MR_mktag(1), cliques__Dfs2_23, 1) = ((MR_Box) (cliques__Dfs1_22));
#line 244 "cliques.m"
                }
#line 245 "cliques.m"
                /* direct tailcall eliminated */
#line 245 "cliques.m"
                {
#line 245 "cliques.m"
                  MR_Word cliques__HeadVar__1__tmp_copy_1 = cliques__Nodes_11;
#line 245 "cliques.m"
                  MR_ArrayPtr cliques__HeadVar__3__tmp_copy_3 = cliques__Visit2_21;
#line 245 "cliques.m"
                  MR_Word cliques__HeadVar__4__tmp_copy_4 = cliques__Dfs2_23;

#line 245 "cliques.m"
                  cliques__HeadVar__4_4 = cliques__HeadVar__4__tmp_copy_4;
#line 245 "cliques.m"
                  cliques__HeadVar__3_3 = cliques__HeadVar__3__tmp_copy_3;
#line 245 "cliques.m"
                  cliques__HeadVar__1_1 = cliques__HeadVar__1__tmp_copy_1;
#line 245 "cliques.m"
                }
#line 245 "cliques.m"
                continue;
#line 238 "cliques.m"
              }
#line 224 "cliques.m"
          }
#line 223 "cliques.m"
      }
#line 223 "cliques.m"
      break;
#line 223 "cliques.m"
    }
#line 220 "cliques.m"
}

#line 204 "cliques.m"
static void MR_CALL 
cliques__dfs_graph_2_5_p_0(
#line 204 "cliques.m"
  MR_Word cliques__HeadVar__1_1,
#line 204 "cliques.m"
  MR_Word cliques__HeadVar__2_2,
#line 204 "cliques.m"
  MR_ArrayPtr cliques__HeadVar__3_3,
#line 204 "cliques.m"
  MR_Word cliques__HeadVar__4_4,
#line 204 "cliques.m"
  MR_Word * cliques__Dfs_5)
#line 204 "cliques.m"
{
#line 207 "cliques.m"
  while (MR_TRUE)
#line 207 "cliques.m"
    {
#line 207 "cliques.m"
      /* tailcall optimized into a loop */
#line 207 "cliques.m"
      {
#line 207 "cliques.m"
        MR_bool cliques__succeeded;

#line 207 "cliques.m"
        if ((cliques__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 207 "cliques.m"
          *cliques__Dfs_5 = cliques__HeadVar__4_4;
#line 207 "cliques.m"
        else
#line 208 "cliques.m"
          {
#line 208 "cliques.m"
            MR_Integer cliques__Node_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), cliques__HeadVar__1_1, (MR_Integer) 0)));
#line 208 "cliques.m"
            MR_Word cliques__Nodes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), cliques__HeadVar__1_1, (MR_Integer) 1)));
#line 208 "cliques.m"
            MR_ArrayPtr cliques__Visit_15;
#line 208 "cliques.m"
            MR_Word cliques__Dfs1_16;
#line 208 "cliques.m"
            MR_Word cliques__V_17_17;

#line 209 "cliques.m"
            {
#line 209 "cliques.m"
              cliques__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "cliques.m"
              MR_hl_field(MR_mktag(1), cliques__V_17_17, 0) = ((MR_Box) (cliques__Node_9));
#line 209 "cliques.m"
              MR_hl_field(MR_mktag(1), cliques__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 209 "cliques.m"
            }
#line 209 "cliques.m"
            {
#line 209 "cliques.m"
              cliques__dfs_6_p_0(cliques__V_17_17, cliques__HeadVar__2_2, cliques__HeadVar__3_3, cliques__HeadVar__4_4, &cliques__Visit_15, &cliques__Dfs1_16);
            }
#line 210 "cliques.m"
            /* direct tailcall eliminated */
#line 210 "cliques.m"
            {
#line 210 "cliques.m"
              MR_Word cliques__HeadVar__1__tmp_copy_1 = cliques__Nodes_10;
#line 210 "cliques.m"
              MR_ArrayPtr cliques__HeadVar__3__tmp_copy_3 = cliques__Visit_15;
#line 210 "cliques.m"
              MR_Word cliques__HeadVar__4__tmp_copy_4 = cliques__Dfs1_16;

#line 210 "cliques.m"
              cliques__HeadVar__4_4 = cliques__HeadVar__4__tmp_copy_4;
#line 210 "cliques.m"
              cliques__HeadVar__3_3 = cliques__HeadVar__3__tmp_copy_3;
#line 210 "cliques.m"
              cliques__HeadVar__1_1 = cliques__HeadVar__1__tmp_copy_1;
#line 210 "cliques.m"
            }
#line 210 "cliques.m"
            continue;
#line 208 "cliques.m"
          }
#line 207 "cliques.m"
      }
#line 207 "cliques.m"
      break;
#line 207 "cliques.m"
    }
#line 204 "cliques.m"
}

#line 152 "cliques.m"
static void MR_CALL 
cliques__tsort_5_p_0(
#line 152 "cliques.m"
  MR_Word cliques__HeadVar__1_1,
#line 152 "cliques.m"
  MR_Word cliques__HeadVar__2_2,
#line 152 "cliques.m"
  MR_ArrayPtr cliques__HeadVar__3_3,
#line 152 "cliques.m"
  MR_Word cliques__STATE_VARIABLE_Cliques_0_4,
#line 152 "cliques.m"
  MR_Word * cliques__STATE_VARIABLE_Cliques_5)
#line 152 "cliques.m"
{
#line 155 "cliques.m"
  while (MR_TRUE)
#line 155 "cliques.m"
    {
#line 155 "cliques.m"
      /* tailcall optimized into a loop */
#line 155 "cliques.m"
      {
#line 155 "cliques.m"
        MR_bool cliques__succeeded;

#line 155 "cliques.m"
        if ((cliques__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 155 "cliques.m"
          *cliques__STATE_VARIABLE_Cliques_5 = cliques__STATE_VARIABLE_Cliques_0_4;
#line 155 "cliques.m"
        else
#line 156 "cliques.m"
          {
#line 156 "cliques.m"
            MR_Integer cliques__Node_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), cliques__HeadVar__1_1, (MR_Integer) 0)));
#line 156 "cliques.m"
            MR_Word cliques__Nodes_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), cliques__HeadVar__1_1, (MR_Integer) 1)));
#line 156 "cliques.m"
            MR_ArrayPtr cliques__STATE_VARIABLE_Visited_39_39;
#line 156 "cliques.m"
            MR_Word cliques__STATE_VARIABLE_Cliques_49_49;

#line 163 "cliques.m"
            {
#line 163 "cliques.m"
              cliques__succeeded = dense_bitset__member_2_p_0(cliques__Node_11, cliques__HeadVar__3_3);
            }
#line 169 "cliques.m"
            if (cliques__succeeded)
#line 164 "cliques.m"
              {
#line 164 "cliques.m"
                cliques__STATE_VARIABLE_Cliques_49_49 = cliques__STATE_VARIABLE_Cliques_0_4;
#line 164 "cliques.m"
                cliques__STATE_VARIABLE_Visited_39_39 = cliques__HeadVar__3_3;
#line 164 "cliques.m"
              }
#line 169 "cliques.m"
            else
#line 174 "cliques.m"
              {
#line 174 "cliques.m"
                MR_Word cliques__CliqueList_17;
#line 174 "cliques.m"
                MR_Word cliques__Clique_18;
#line 174 "cliques.m"
                MR_Word cliques__V_37_37;

#line 176 "cliques.m"
                {
#line 176 "cliques.m"
                  cliques__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "cliques.m"
                  MR_hl_field(MR_mktag(1), cliques__V_37_37, 0) = ((MR_Box) (cliques__Node_11));
#line 176 "cliques.m"
                  MR_hl_field(MR_mktag(1), cliques__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 176 "cliques.m"
                }
#line 176 "cliques.m"
                {
#line 176 "cliques.m"
                  cliques__dfs_6_p_0(cliques__V_37_37, cliques__HeadVar__2_2, cliques__HeadVar__3_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &cliques__STATE_VARIABLE_Visited_39_39, &cliques__CliqueList_17);
                }
#line 186 "cliques.m"
                {
#line 186 "cliques.m"
                  mercury__set__list_to_set_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, cliques__CliqueList_17, &cliques__Clique_18);
                }
#line 187 "cliques.m"
                {
#line 187 "cliques.m"
                  cliques__STATE_VARIABLE_Cliques_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "cliques.m"
                  MR_hl_field(MR_mktag(1), cliques__STATE_VARIABLE_Cliques_49_49, 0) = ((MR_Box) (cliques__Clique_18));
#line 187 "cliques.m"
                  MR_hl_field(MR_mktag(1), cliques__STATE_VARIABLE_Cliques_49_49, 1) = ((MR_Box) (cliques__STATE_VARIABLE_Cliques_0_4));
#line 187 "cliques.m"
                }
#line 174 "cliques.m"
              }
#line 189 "cliques.m"
            /* direct tailcall eliminated */
#line 189 "cliques.m"
            {
#line 189 "cliques.m"
              MR_Word cliques__HeadVar__1__tmp_copy_1 = cliques__Nodes_12;
#line 189 "cliques.m"
              MR_ArrayPtr cliques__HeadVar__3__tmp_copy_3 = cliques__STATE_VARIABLE_Visited_39_39;
#line 189 "cliques.m"
              MR_Word cliques__STATE_VARIABLE_Cliques_0__tmp_copy_4 = cliques__STATE_VARIABLE_Cliques_49_49;

#line 189 "cliques.m"
              cliques__STATE_VARIABLE_Cliques_0_4 = cliques__STATE_VARIABLE_Cliques_0__tmp_copy_4;
#line 189 "cliques.m"
              cliques__HeadVar__3_3 = cliques__HeadVar__3__tmp_copy_3;
#line 189 "cliques.m"
              cliques__HeadVar__1_1 = cliques__HeadVar__1__tmp_copy_1;
#line 189 "cliques.m"
            }
#line 189 "cliques.m"
            continue;
#line 156 "cliques.m"
          }
#line 155 "cliques.m"
      }
#line 155 "cliques.m"
      break;
#line 155 "cliques.m"
    }
#line 152 "cliques.m"
}

#line 94 "cliques.m"
static void MR_CALL 
cliques__mklist_3_p_0(
#line 94 "cliques.m"
  MR_Integer cliques__N_4,
#line 94 "cliques.m"
  MR_Word cliques__Acc0_5,
#line 94 "cliques.m"
  MR_Word * cliques__Acc_6)
#line 94 "cliques.m"
{
#line 99 "cliques.m"
  while (MR_TRUE)
#line 99 "cliques.m"
    {
#line 99 "cliques.m"
      /* tailcall optimized into a loop */
#line 99 "cliques.m"
      {
#line 99 "cliques.m"
        MR_bool cliques__succeeded = (cliques__N_4 < (MR_Integer) 0);

#line 99 "cliques.m"
        if (cliques__succeeded)
#line 98 "cliques.m"
          *cliques__Acc_6 = cliques__Acc0_5;
#line 99 "cliques.m"
        else
#line 100 "cliques.m"
          {
#line 100 "cliques.m"
            MR_Word cliques__Acc1_7;
#line 100 "cliques.m"
            MR_Integer cliques__V_9_9;

#line 100 "cliques.m"
            {
#line 100 "cliques.m"
              cliques__Acc1_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 100 "cliques.m"
              MR_hl_field(MR_mktag(1), cliques__Acc1_7, 0) = ((MR_Box) (cliques__N_4));
#line 100 "cliques.m"
              MR_hl_field(MR_mktag(1), cliques__Acc1_7, 1) = ((MR_Box) (cliques__Acc0_5));
#line 100 "cliques.m"
            }
#line 101 "cliques.m"
            cliques__V_9_9 = (cliques__N_4 - (MR_Integer) 1);
#line 101 "cliques.m"
            /* direct tailcall eliminated */
#line 101 "cliques.m"
            {
#line 101 "cliques.m"
              MR_Integer cliques__N__tmp_copy_4 = cliques__V_9_9;
#line 101 "cliques.m"
              MR_Word cliques__Acc0__tmp_copy_5 = cliques__Acc1_7;

#line 101 "cliques.m"
              cliques__Acc0_5 = cliques__Acc0__tmp_copy_5;
#line 101 "cliques.m"
              cliques__N_4 = cliques__N__tmp_copy_4;
#line 101 "cliques.m"
            }
#line 101 "cliques.m"
            continue;
#line 100 "cliques.m"
          }
#line 99 "cliques.m"
      }
#line 99 "cliques.m"
      break;
#line 99 "cliques.m"
    }
#line 94 "cliques.m"
}

#line 41 "cliques.m"
void MR_CALL 
cliques__topological_sort_2_p_0(
#line 41 "cliques.m"
  MR_Word cliques__Graph_3,
#line 41 "cliques.m"
  MR_Word * cliques__Cliques_4)
#line 41 "cliques.m"
{
#line 104 "cliques.m"
  {
#line 104 "cliques.m"
    MR_bool cliques__succeeded;
#line 104 "cliques.m"
    MR_Word cliques__Dfs_6;
#line 104 "cliques.m"
    MR_Word cliques__InvGraph_7;
#line 104 "cliques.m"
    MR_ArrayPtr cliques__Visit_8;
#line 104 "cliques.m"
    MR_Word cliques__Cliques0_9;
#line 104 "cliques.m"
    MR_Integer cliques__Size_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), cliques__Graph_3, (MR_Integer) 0)));
#line 104 "cliques.m"
    MR_Word cliques__NodeList_42;
#line 104 "cliques.m"
    MR_ArrayPtr cliques__Visit_43;
#line 104 "cliques.m"
    MR_Word cliques__InvGraph0_48;
#line 104 "cliques.m"
    MR_Integer cliques__Size_49;
#line 104 "cliques.m"
    MR_ArrayPtr cliques__Array_51;
#line 104 "cliques.m"
    MR_Word cliques__V_54_54;
#line 199 "cliques.m"
    MR_ArrayPtr cliques___Array_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), cliques__Graph_3, (MR_Integer) 1)));
#line 70 "cliques.m"
    MR_ArrayPtr cliques__conv0_Array_51;
#line 252 "cliques.m"
    MR_ArrayPtr cliques___Array_50;

#line 200 "cliques.m"
    {
#line 200 "cliques.m"
      cliques__mklist_3_p_0(cliques__Size_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &cliques__NodeList_42);
    }
#line 201 "cliques.m"
    {
#line 201 "cliques.m"
      cliques__Visit_43 = dense_bitset__init_0_f_0();
    }
#line 202 "cliques.m"
    {
#line 202 "cliques.m"
      cliques__dfs_graph_2_5_p_0(cliques__NodeList_42, cliques__Graph_3, cliques__Visit_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &cliques__Dfs_6);
    }
#line 70 "cliques.m"
    {
#line 70 "cliques.m"
      cliques__V_54_54 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
#line 70 "cliques.m"
    {
#line 70 "cliques.m"
      mercury__array__init_3_p_0((MR_Word) &cliques_scalar_common_1[0], (MR_Integer) 16, ((MR_Box) (cliques__V_54_54)), &cliques__conv0_Array_51);
    }
#line 70 "cliques.m"
    cliques__Array_51 = (MR_ArrayPtr) cliques__conv0_Array_51;
#line 68 "cliques.m"
    {
#line 68 "cliques.m"
      cliques__InvGraph0_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 68 "cliques.m"
      MR_hl_field(MR_mktag(0), cliques__InvGraph0_48, 0) = ((MR_Box) ((MR_Integer) 1));
#line 68 "cliques.m"
      MR_hl_field(MR_mktag(0), cliques__InvGraph0_48, 1) = ((MR_Box) (cliques__Array_51));
#line 68 "cliques.m"
    }
#line 252 "cliques.m"
    cliques__Size_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), cliques__Graph_3, (MR_Integer) 0)));
#line 252 "cliques.m"
    cliques___Array_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), cliques__Graph_3, (MR_Integer) 1)));
#line 253 "cliques.m"
    {
#line 253 "cliques.m"
      cliques__inverse_2_4_p_0(cliques__Size_49, cliques__Graph_3, cliques__InvGraph0_48, &cliques__InvGraph_7);
    }
#line 130 "cliques.m"
    {
#line 130 "cliques.m"
      cliques__Visit_8 = dense_bitset__init_0_f_0();
    }
#line 131 "cliques.m"
    {
#line 131 "cliques.m"
      cliques__tsort_5_p_0(cliques__Dfs_6, cliques__InvGraph_7, cliques__Visit_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &cliques__Cliques0_9);
    }
#line 132 "cliques.m"
    {
#line 132 "cliques.m"
      cliques__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_3_p_0(cliques__Cliques0_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), cliques__Cliques_4);
#line 132 "cliques.m"
      return;
    }
#line 104 "cliques.m"
  }
#line 41 "cliques.m"
}

#line 33 "cliques.m"
void MR_CALL 
cliques__add_arc_4_p_0(
#line 33 "cliques.m"
  MR_Word cliques__HeadVar__1_1,
#line 33 "cliques.m"
  MR_Integer cliques__From_7,
#line 33 "cliques.m"
  MR_Integer cliques__To_8,
#line 33 "cliques.m"
  MR_Word * cliques__Graph_9)
#line 33 "cliques.m"
{
#line 72 "cliques.m"
  while (MR_TRUE)
#line 72 "cliques.m"
    {
#line 72 "cliques.m"
      /* tailcall optimized into a loop */
#line 72 "cliques.m"
      {
#line 72 "cliques.m"
        MR_bool cliques__succeeded;
#line 72 "cliques.m"
        MR_Integer cliques__Size0_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), cliques__HeadVar__1_1, (MR_Integer) 0)));
#line 72 "cliques.m"
        MR_ArrayPtr cliques__Array0_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), cliques__HeadVar__1_1, (MR_Integer) 1)));

#line 73 "cliques.m"
        {
#line 73 "cliques.m"
          cliques__succeeded = mercury__array__in_bounds_2_p_0((MR_Word) &cliques_scalar_common_1[0], (MR_ArrayPtr) cliques__Array0_6, cliques__From_7);
        }
#line 79 "cliques.m"
        if (cliques__succeeded)
#line 74 "cliques.m"
          {
#line 74 "cliques.m"
            MR_Word cliques__TypeInfo_24_24 = (MR_Word) &cliques_scalar_common_1[0];
#line 74 "cliques.m"
            MR_Word cliques__Tos0_10;
#line 74 "cliques.m"
            MR_Word cliques__Tos_11;
#line 74 "cliques.m"
            MR_ArrayPtr cliques__Array_12;
#line 74 "cliques.m"
            MR_Integer cliques__Size_13;
#line 74 "cliques.m"
            MR_ArrayPtr cliques__V_15_15;
#line 74 "cliques.m"
            MR_Integer cliques__V_16_16;
#line 74 "cliques.m"
            MR_Box cliques__conv0_Tos0_10;
#line 76 "cliques.m"
            MR_Box cliques__conv1_V_15_15;
#line 76 "cliques.m"
            MR_ArrayPtr cliques__conv2_Array_12;

#line 74 "cliques.m"
            {
#line 74 "cliques.m"
              mercury__array__lookup_3_p_0(cliques__TypeInfo_24_24, (MR_ArrayPtr) cliques__Array0_6, cliques__From_7, &cliques__conv0_Tos0_10);
            }
#line 74 "cliques.m"
            cliques__Tos0_10 = ((MR_Word) cliques__conv0_Tos0_10);
#line 75 "cliques.m"
            {
#line 75 "cliques.m"
              mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (cliques__To_8)), cliques__Tos0_10, &cliques__Tos_11);
            }
#line 76 "cliques.m"
            {
#line 76 "cliques.m"
              cliques__conv1_V_15_15 = array_util__u_1_f_0((MR_Word) &cliques_scalar_common_1[1], ((MR_Box) (cliques__Array0_6)));
            }
#line 76 "cliques.m"
            cliques__V_15_15 = ((MR_ArrayPtr) cliques__conv1_V_15_15);
#line 76 "cliques.m"
            {
#line 76 "cliques.m"
              mercury__array__set_4_p_0(cliques__TypeInfo_24_24, cliques__From_7, ((MR_Box) (cliques__Tos_11)), (MR_ArrayPtr) cliques__V_15_15, &cliques__conv2_Array_12);
            }
#line 76 "cliques.m"
            cliques__Array_12 = (MR_ArrayPtr) cliques__conv2_Array_12;
#line 77 "cliques.m"
            {
#line 77 "cliques.m"
              cliques__V_16_16 = mercury__int__max_2_f_0(cliques__From_7, cliques__To_8);
            }
#line 77 "cliques.m"
            {
#line 77 "cliques.m"
              cliques__Size_13 = mercury__int__max_2_f_0(cliques__V_16_16, cliques__Size0_5);
            }
#line 78 "cliques.m"
            {
#line 78 "cliques.m"
              MR_Word base;
#line 78 "cliques.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 78 "cliques.m"
              *cliques__Graph_9 = base;
#line 78 "cliques.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (cliques__Size_13));
#line 78 "cliques.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (cliques__Array_12));
#line 78 "cliques.m"
            }
#line 74 "cliques.m"
          }
#line 79 "cliques.m"
        else
#line 80 "cliques.m"
          {
#line 80 "cliques.m"
            MR_Word cliques__TypeInfo_27_27 = (MR_Word) &cliques_scalar_common_1[0];
#line 80 "cliques.m"
            MR_ArrayPtr cliques__Array1_14;
#line 80 "cliques.m"
            MR_Integer cliques__V_17_17;
#line 80 "cliques.m"
            MR_Word cliques__V_18_18;
#line 80 "cliques.m"
            MR_ArrayPtr cliques__V_19_19;
#line 80 "cliques.m"
            MR_Word cliques__V_21_21;
#line 80 "cliques.m"
            MR_Integer cliques__Size_22;
#line 81 "cliques.m"
            MR_Box cliques__conv3_V_19_19;
#line 81 "cliques.m"
            MR_ArrayPtr cliques__conv4_Array1_14;

#line 80 "cliques.m"
            {
#line 80 "cliques.m"
              mercury__array__size_2_p_0(cliques__TypeInfo_27_27, (MR_ArrayPtr) cliques__Array0_6, &cliques__Size_22);
            }
#line 81 "cliques.m"
            cliques__V_17_17 = (cliques__Size_22 * (MR_Integer) 2);
#line 81 "cliques.m"
            {
#line 81 "cliques.m"
              cliques__V_18_18 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
            }
#line 81 "cliques.m"
            {
#line 81 "cliques.m"
              cliques__conv3_V_19_19 = array_util__u_1_f_0((MR_Word) &cliques_scalar_common_1[1], ((MR_Box) (cliques__Array0_6)));
            }
#line 81 "cliques.m"
            cliques__V_19_19 = ((MR_ArrayPtr) cliques__conv3_V_19_19);
#line 81 "cliques.m"
            {
#line 81 "cliques.m"
              mercury__array__resize_4_p_0(cliques__TypeInfo_27_27, cliques__V_17_17, ((MR_Box) (cliques__V_18_18)), (MR_ArrayPtr) cliques__V_19_19, &cliques__conv4_Array1_14);
            }
#line 81 "cliques.m"
            cliques__Array1_14 = (MR_ArrayPtr) cliques__conv4_Array1_14;
#line 82 "cliques.m"
            {
#line 82 "cliques.m"
              cliques__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 82 "cliques.m"
              MR_hl_field(MR_mktag(0), cliques__V_21_21, 0) = ((MR_Box) (cliques__Size0_5));
#line 82 "cliques.m"
              MR_hl_field(MR_mktag(0), cliques__V_21_21, 1) = ((MR_Box) (cliques__Array1_14));
#line 82 "cliques.m"
            }
#line 82 "cliques.m"
            /* direct tailcall eliminated */
#line 82 "cliques.m"
            {
#line 82 "cliques.m"
              MR_Word cliques__HeadVar__1__tmp_copy_1 = cliques__V_21_21;

#line 82 "cliques.m"
              cliques__HeadVar__1_1 = cliques__HeadVar__1__tmp_copy_1;
#line 82 "cliques.m"
            }
#line 82 "cliques.m"
            continue;
#line 80 "cliques.m"
          }
#line 72 "cliques.m"
      }
#line 72 "cliques.m"
      break;
#line 72 "cliques.m"
    }
#line 33 "cliques.m"
}

#line 29 "cliques.m"
void MR_CALL 
cliques__init_1_p_0(
#line 29 "cliques.m"
  MR_Word * cliques__HeadVar__1_1)
#line 29 "cliques.m"
{
#line 68 "cliques.m"
  {
#line 68 "cliques.m"
    MR_bool cliques__succeeded;
#line 68 "cliques.m"
    MR_ArrayPtr cliques__Array_2;
#line 68 "cliques.m"
    MR_Word cliques__V_5_5;
#line 70 "cliques.m"
    MR_ArrayPtr cliques__conv0_Array_2;

#line 70 "cliques.m"
    {
#line 70 "cliques.m"
      cliques__V_5_5 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
#line 70 "cliques.m"
    {
#line 70 "cliques.m"
      mercury__array__init_3_p_0((MR_Word) &cliques_scalar_common_1[0], (MR_Integer) 16, ((MR_Box) (cliques__V_5_5)), &cliques__conv0_Array_2);
    }
#line 70 "cliques.m"
    cliques__Array_2 = (MR_ArrayPtr) cliques__conv0_Array_2;
#line 68 "cliques.m"
    {
#line 68 "cliques.m"
      MR_Word base;
#line 68 "cliques.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 68 "cliques.m"
      *cliques__HeadVar__1_1 = base;
#line 68 "cliques.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 68 "cliques.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (cliques__Array_2));
#line 68 "cliques.m"
    }
#line 68 "cliques.m"
  }
#line 29 "cliques.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module cliques. */
