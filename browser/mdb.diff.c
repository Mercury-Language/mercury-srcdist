/*
** Automatically generated from `diff.m'
** by the Mercury compiler,
** version 14.01.2-beta-2015-02-18, configured for x86_64-apple-darwin13.4.0.
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


/* :- module mdb.diff. */
/* :- implementation. */

/*
INIT mercury__mdb__diff__init
ENDINIT
*/

#include "mdb.diff.mih"
#include "mdb.diff.mh"


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
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "mdbcomp.mih"
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
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"




#line 75 "mdb.diff.c"
static const MR_FA_TypeInfo_Struct1 mdb__diff__list__ti_list_1builtin__type_ctor_info_int_0;

#line 78 "mdb.diff.c"
static const MR_PseudoTypeInfo mdb__diff__mdb__diff__field_types_term_path_diff_0_0[3];

#line 81 "mdb.diff.c"
static const MR_DuFunctorDesc mdb__diff__mdb__diff__du_functor_desc_term_path_diff_0_0;

#line 84 "mdb.diff.c"
static const MR_DuFunctorDescPtr mdb__diff__mdb__diff__du_stag_ordered_term_path_diff_0_0[1];

#line 87 "mdb.diff.c"
static const MR_DuPtagLayout mdb__diff__mdb__diff__du_ptag_ordered_term_path_diff_0[1];

#line 90 "mdb.diff.c"
static const MR_DuFunctorDescPtr mdb__diff__mdb__diff__du_name_ordered_term_path_diff_0[1];

#line 93 "mdb.diff.c"
static const MR_Integer mdb__diff__mdb__diff__functor_number_map_term_path_diff_0[1];

#line 96 "mdb.diff.c"
static MR_bool MR_CALL 
mdb__diff____Unify____term_path_diff_0_0_10001(
#line 99 "mdb.diff.c"
  MR_Box mdb__diff__wrapper_arg_1,
#line 101 "mdb.diff.c"
  MR_Box mdb__diff__wrapper_arg_2);

#line 104 "mdb.diff.c"
static void MR_CALL 
mdb__diff____Compare____term_path_diff_0_0_10001(
#line 107 "mdb.diff.c"
  MR_Box * mdb__diff__wrapper_arg_1,
#line 109 "mdb.diff.c"
  MR_Box mdb__diff__wrapper_arg_2,
#line 111 "mdb.diff.c"
  MR_Box mdb__diff__wrapper_arg_3);

#line 79 "diff.m"
static void MR_CALL 
mdb__diff____Compare____term_path_diff_0_0(
#line 79 "diff.m"
  MR_Word * mdb__diff__HeadVar__1_1,
#line 79 "diff.m"
  MR_Word mdb__diff__HeadVar__2_2,
#line 79 "diff.m"
  MR_Word mdb__diff__HeadVar__3_3);

#line 79 "diff.m"
static MR_bool MR_CALL 
mdb__diff____Unify____term_path_diff_0_0(
#line 79 "diff.m"
  MR_Word mdb__diff__HeadVar__1_1,
#line 79 "diff.m"
  MR_Word mdb__diff__HeadVar__2_2);

#line 129 "diff.m"
static void MR_CALL 
mdb__diff__show_path_rest_3_p_0(
#line 129 "diff.m"
  MR_Word mdb__diff__HeadVar__1_1);

#line 108 "diff.m"
static void MR_CALL 
mdb__diff__show_diff_5_p_0(
#line 108 "diff.m"
  MR_Word mdb__diff__Diff_6,
#line 108 "diff.m"
  MR_Integer mdb__diff__STATE_VARIABLE_DiffNum_0_18,
#line 108 "diff.m"
  MR_Integer * mdb__diff__STATE_VARIABLE_DiffNum_19);

#line 95 "diff.m"
static void MR_CALL 
mdb__diff__compute_arg_diffs_6_p_0(
#line 95 "diff.m"
  MR_Word mdb__diff__HeadVar__1_1,
#line 95 "diff.m"
  MR_Word mdb__diff__HeadVar__2_2,
#line 95 "diff.m"
  MR_Word mdb__diff__STATE_VARIABLE_RevPath_0_3,
#line 95 "diff.m"
  MR_Integer mdb__diff__ArgNum_4,
#line 95 "diff.m"
  MR_Word mdb__diff__STATE_VARIABLE_RevDiffs_0_5,
#line 95 "diff.m"
  MR_Word * mdb__diff__STATE_VARIABLE_RevDiffs_6);

#line 82 "diff.m"
static void MR_CALL 
mdb__diff__compute_diffs_5_p_0(
#line 82 "diff.m"
  MR_Word mdb__diff__Univ1_6,
#line 82 "diff.m"
  MR_Word mdb__diff__Univ2_7,
#line 82 "diff.m"
  MR_Word mdb__diff__STATE_VARIABLE_RevPath_0_17,
#line 82 "diff.m"
  MR_Word mdb__diff__STATE_VARIABLE_RevDiffs_0_18,
#line 82 "diff.m"
  MR_Word * mdb__diff__STATE_VARIABLE_RevDiffs_19);

#line 65 "diff.m"
static void MR_CALL 
mdb__diff__report_diffs_6_p_0_1(
#line 65 "diff.m"
  MR_Box mdb__diff__closure_arg,
#line 65 "diff.m"
  MR_Box mdb__diff__wrapper_arg_1,
#line 65 "diff.m"
  MR_Box mdb__diff__wrapper_arg_2,
#line 65 "diff.m"
  MR_Box * mdb__diff__wrapper_arg_3,
#line 65 "diff.m"
  MR_Box mdb__diff__wrapper_arg_4,
#line 65 "diff.m"
  MR_Box * mdb__diff__wrapper_arg_5);


static /* final */ const MR_Box mdb__diff_scalar_common_1[1][2];

static /* final */ const MR_Box mdb__diff_scalar_common_2[1][8];

static /* final */ const MR_Box mdb__diff_scalar_common_3[1][3];




static /* final */ const MR_Box mdb__diff_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdb__diff_scalar_common_2[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdb__diff__mdb__diff__type_ctor_info_term_path_diff_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdb__diff_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mdb__diff_scalar_common_2[0])),
    ((MR_Box) (mdb__diff__report_diffs_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "mdb.diff.mh"
#include "mdb.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"

#line 39 "diff.m"
void 
ML_report_diffs(
#line 39 "diff.m"
  MR_Integer mdb__diff__Drop_7,
#line 39 "diff.m"
  MR_Integer mdb__diff__Max_8,
#line 39 "diff.m"
  MR_Word mdb__diff__Univ1_9,
#line 39 "diff.m"
  MR_Word mdb__diff__Univ2_10)
#line 39 "diff.m"
{
#line 39 "diff.m"
	mdb__diff__report_diffs_6_p_0((MR_Integer) mdb__diff__Drop_7, (MR_Integer) mdb__diff__Max_8, (MR_Word) mdb__diff__Univ1_9, (MR_Word) mdb__diff__Univ2_10);
}


#line 272 "mdb.diff.c"
static const MR_FA_TypeInfo_Struct1 mdb__diff__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 280 "mdb.diff.c"
static const MR_PseudoTypeInfo mdb__diff__mdb__diff__field_types_term_path_diff_0_0[3] = {
  (MR_PseudoTypeInfo) &mdb__diff__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

#line 287 "mdb.diff.c"
static const MR_DuFunctorDesc mdb__diff__mdb__diff__du_functor_desc_term_path_diff_0_0 = {
  (MR_String) "term_path_diff",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__diff__mdb__diff__field_types_term_path_diff_0_0,
  NULL,
  NULL,
  NULL
};

#line 302 "mdb.diff.c"
static const MR_DuFunctorDescPtr mdb__diff__mdb__diff__du_stag_ordered_term_path_diff_0_0[1] = {
  &mdb__diff__mdb__diff__du_functor_desc_term_path_diff_0_0
};

#line 307 "mdb.diff.c"
static const MR_DuPtagLayout mdb__diff__mdb__diff__du_ptag_ordered_term_path_diff_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__diff__mdb__diff__du_stag_ordered_term_path_diff_0_0
  }
};

#line 316 "mdb.diff.c"
static const MR_DuFunctorDescPtr mdb__diff__mdb__diff__du_name_ordered_term_path_diff_0[1] = {
  &mdb__diff__mdb__diff__du_functor_desc_term_path_diff_0_0
};

#line 321 "mdb.diff.c"
static const MR_Integer mdb__diff__mdb__diff__functor_number_map_term_path_diff_0[1] = {
  (MR_Integer) 0
};

#line 326 "mdb.diff.c"
const MR_TypeCtorInfo_Struct mdb__diff__mdb__diff__type_ctor_info_term_path_diff_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__diff____Unify____term_path_diff_0_0_10001)),
  ((MR_Box) (mdb__diff____Compare____term_path_diff_0_0_10001)),
  (MR_String) "mdb.diff",
  (MR_String) "term_path_diff",
  {
    mdb__diff__mdb__diff__du_name_ordered_term_path_diff_0
  },
  {
    mdb__diff__mdb__diff__du_ptag_ordered_term_path_diff_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__diff__mdb__diff__functor_number_map_term_path_diff_0
};

#line 347 "mdb.diff.c"
static MR_bool MR_CALL 
mdb__diff____Unify____term_path_diff_0_0_10001(
#line 350 "mdb.diff.c"
  MR_Box mdb__diff__wrapper_arg_1,
#line 352 "mdb.diff.c"
  MR_Box mdb__diff__wrapper_arg_2)
#line 354 "mdb.diff.c"
{
#line 356 "mdb.diff.c"
  {
#line 358 "mdb.diff.c"
    MR_bool mdb__diff__succeeded;

#line 361 "mdb.diff.c"
    {
#line 363 "mdb.diff.c"
      mdb__diff__succeeded = mdb__diff____Unify____term_path_diff_0_0(((MR_Word) mdb__diff__wrapper_arg_1), ((MR_Word) mdb__diff__wrapper_arg_2));
    }
#line 366 "mdb.diff.c"
    return mdb__diff__succeeded;
#line 368 "mdb.diff.c"
  }
#line 370 "mdb.diff.c"
}

#line 373 "mdb.diff.c"
static void MR_CALL 
mdb__diff____Compare____term_path_diff_0_0_10001(
#line 376 "mdb.diff.c"
  MR_Box * mdb__diff__wrapper_arg_1,
#line 378 "mdb.diff.c"
  MR_Box mdb__diff__wrapper_arg_2,
#line 380 "mdb.diff.c"
  MR_Box mdb__diff__wrapper_arg_3)
#line 382 "mdb.diff.c"
{
#line 384 "mdb.diff.c"
  {
#line 386 "mdb.diff.c"
    MR_Word mdb__diff__conv0_HeadVar__1_1;

#line 389 "mdb.diff.c"
    {
#line 391 "mdb.diff.c"
      mdb__diff____Compare____term_path_diff_0_0(&mdb__diff__conv0_HeadVar__1_1, ((MR_Word) mdb__diff__wrapper_arg_2), ((MR_Word) mdb__diff__wrapper_arg_3));
    }
#line 394 "mdb.diff.c"
    *mdb__diff__wrapper_arg_1 = ((MR_Box) (mdb__diff__conv0_HeadVar__1_1));
#line 396 "mdb.diff.c"
  }
#line 398 "mdb.diff.c"
}

#line 79 "diff.m"
static void MR_CALL 
mdb__diff____Compare____term_path_diff_0_0(
#line 79 "diff.m"
  MR_Word * mdb__diff__HeadVar__1_1,
#line 79 "diff.m"
  MR_Word mdb__diff__HeadVar__2_2,
#line 79 "diff.m"
  MR_Word mdb__diff__HeadVar__3_3)
#line 79 "diff.m"
{
#line 79 "diff.m"
  {
#line 79 "diff.m"
    MR_bool mdb__diff__succeeded;
#line 79 "diff.m"
    MR_Integer mdb__diff__CastX_12 = (MR_Integer) mdb__diff__HeadVar__2_2;
#line 79 "diff.m"
    MR_Integer mdb__diff__CastY_13 = (MR_Integer) mdb__diff__HeadVar__3_3;

#line 79 "diff.m"
    mdb__diff__succeeded = (mdb__diff__CastX_12 == mdb__diff__CastY_13);
#line 79 "diff.m"
    if (mdb__diff__succeeded)
#line 425 "mdb.diff.c"
      *mdb__diff__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "diff.m"
    else
#line 79 "diff.m"
      {
#line 79 "diff.m"
        MR_Word mdb__diff__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__2_2, (MR_Integer) 0)));
#line 79 "diff.m"
        MR_Word mdb__diff__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__2_2, (MR_Integer) 1)));
#line 79 "diff.m"
        MR_Word mdb__diff__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__2_2, (MR_Integer) 2)));
#line 79 "diff.m"
        MR_Word mdb__diff__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__3_3, (MR_Integer) 0)));
#line 79 "diff.m"
        MR_Word mdb__diff__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__3_3, (MR_Integer) 1)));
#line 79 "diff.m"
        MR_Word mdb__diff__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__3_3, (MR_Integer) 2)));
#line 79 "diff.m"
        MR_Word mdb__diff__V_10_10;

#line 79 "diff.m"
        {
#line 79 "diff.m"
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__diff_scalar_common_1[0], &mdb__diff__V_10_10, ((MR_Box) (mdb__diff__V_4_4)), ((MR_Box) (mdb__diff__V_7_7)));
        }
#line 451 "mdb.diff.c"
        mdb__diff__succeeded = (mdb__diff__V_10_10 == (MR_Integer) 0);
#line 79 "diff.m"
        mdb__diff__succeeded = !(mdb__diff__succeeded);
#line 79 "diff.m"
        if (mdb__diff__succeeded)
#line 79 "diff.m"
          *mdb__diff__HeadVar__1_1 = mdb__diff__V_10_10;
#line 79 "diff.m"
        else
#line 79 "diff.m"
          {
#line 79 "diff.m"
            MR_Word mdb__diff__V_11_11;

#line 79 "diff.m"
            {
#line 79 "diff.m"
              mercury__univ____Compare____univ_0_0(&mdb__diff__V_11_11, mdb__diff__V_5_5, mdb__diff__V_8_8);
            }
#line 471 "mdb.diff.c"
            mdb__diff__succeeded = (mdb__diff__V_11_11 == (MR_Integer) 0);
#line 79 "diff.m"
            mdb__diff__succeeded = !(mdb__diff__succeeded);
#line 79 "diff.m"
            if (mdb__diff__succeeded)
#line 79 "diff.m"
              *mdb__diff__HeadVar__1_1 = mdb__diff__V_11_11;
#line 79 "diff.m"
            else
#line 79 "diff.m"
              {
#line 79 "diff.m"
                mercury__univ____Compare____univ_0_0(mdb__diff__HeadVar__1_1, mdb__diff__V_6_6, mdb__diff__V_9_9);
#line 79 "diff.m"
                return;
              }
#line 79 "diff.m"
          }
#line 79 "diff.m"
      }
#line 79 "diff.m"
  }
#line 79 "diff.m"
}

#line 79 "diff.m"
static MR_bool MR_CALL 
mdb__diff____Unify____term_path_diff_0_0(
#line 79 "diff.m"
  MR_Word mdb__diff__HeadVar__1_1,
#line 79 "diff.m"
  MR_Word mdb__diff__HeadVar__2_2)
#line 79 "diff.m"
{
#line 79 "diff.m"
  {
#line 79 "diff.m"
    MR_bool mdb__diff__succeeded;
#line 79 "diff.m"
    MR_Integer mdb__diff__CastX_9 = (MR_Integer) mdb__diff__HeadVar__1_1;
#line 79 "diff.m"
    MR_Integer mdb__diff__CastY_10 = (MR_Integer) mdb__diff__HeadVar__2_2;

#line 79 "diff.m"
    mdb__diff__succeeded = (mdb__diff__CastX_9 == mdb__diff__CastY_10);
#line 79 "diff.m"
    if (mdb__diff__succeeded)
#line 79 "diff.m"
      mdb__diff__succeeded = MR_TRUE;
#line 79 "diff.m"
    else
#line 79 "diff.m"
      {
#line 79 "diff.m"
        MR_Word mdb__diff__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__1_1, (MR_Integer) 0)));
#line 79 "diff.m"
        MR_Word mdb__diff__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__1_1, (MR_Integer) 1)));
#line 79 "diff.m"
        MR_Word mdb__diff__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__1_1, (MR_Integer) 2)));
#line 79 "diff.m"
        MR_Word mdb__diff__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__2_2, (MR_Integer) 0)));
#line 79 "diff.m"
        MR_Word mdb__diff__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__2_2, (MR_Integer) 1)));
#line 79 "diff.m"
        MR_Word mdb__diff__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__2_2, (MR_Integer) 2)));

#line 538 "mdb.diff.c"
        {
#line 540 "mdb.diff.c"
          mdb__diff__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__diff_scalar_common_1[0], ((MR_Box) (mdb__diff__V_3_3)), ((MR_Box) (mdb__diff__V_6_6)));
        }
#line 79 "diff.m"
        if (mdb__diff__succeeded)
#line 79 "diff.m"
          {
#line 547 "mdb.diff.c"
            {
#line 549 "mdb.diff.c"
              mdb__diff__succeeded = mercury__univ____Unify____univ_0_0(mdb__diff__V_4_4, mdb__diff__V_7_7);
            }
#line 79 "diff.m"
            if (mdb__diff__succeeded)
#line 554 "mdb.diff.c"
              {
#line 556 "mdb.diff.c"
                return mdb__diff__succeeded = mercury__univ____Unify____univ_0_0(mdb__diff__V_5_5, mdb__diff__V_8_8);
              }
#line 79 "diff.m"
          }
#line 79 "diff.m"
      }
#line 79 "diff.m"
    return mdb__diff__succeeded;
#line 79 "diff.m"
  }
#line 79 "diff.m"
}

#line 129 "diff.m"
static void MR_CALL 
mdb__diff__show_path_rest_3_p_0(
#line 129 "diff.m"
  MR_Word mdb__diff__HeadVar__1_1)
#line 129 "diff.m"
{
#line 131 "diff.m"
  while (MR_TRUE)
#line 131 "diff.m"
    {
#line 131 "diff.m"
      /* tailcall optimized into a loop */
#line 131 "diff.m"
      {
#line 131 "diff.m"
        MR_bool mdb__diff__succeeded;

#line 131 "diff.m"
        if ((mdb__diff__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 131 "diff.m"
          {
#line 131 "diff.m"
          }
#line 131 "diff.m"
        else
#line 132 "diff.m"
          {
#line 132 "diff.m"
            MR_Integer mdb__diff__Posn_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__diff__HeadVar__1_1, (MR_Integer) 0)));
#line 132 "diff.m"
            MR_Word mdb__diff__Posns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__diff__HeadVar__1_1, (MR_Integer) 1)));

#line 133 "diff.m"
            {
#line 133 "diff.m"
              mercury__io__write_string_3_p_0((MR_String) "/");
            }
#line 134 "diff.m"
            {
#line 134 "diff.m"
              mercury__io__write_int_3_p_0(mdb__diff__Posn_7);
            }
#line 135 "diff.m"
            /* direct tailcall eliminated */
#line 135 "diff.m"
            {
#line 135 "diff.m"
              MR_Word mdb__diff__HeadVar__1__tmp_copy_1 = mdb__diff__Posns_8;

#line 135 "diff.m"
              mdb__diff__HeadVar__1_1 = mdb__diff__HeadVar__1__tmp_copy_1;
#line 135 "diff.m"
            }
#line 135 "diff.m"
            continue;
#line 132 "diff.m"
          }
#line 131 "diff.m"
      }
#line 131 "diff.m"
      break;
#line 131 "diff.m"
    }
#line 129 "diff.m"
}

#line 108 "diff.m"
static void MR_CALL 
mdb__diff__show_diff_5_p_0(
#line 108 "diff.m"
  MR_Word mdb__diff__Diff_6,
#line 108 "diff.m"
  MR_Integer mdb__diff__STATE_VARIABLE_DiffNum_0_18,
#line 108 "diff.m"
  MR_Integer * mdb__diff__STATE_VARIABLE_DiffNum_19)
#line 108 "diff.m"
{
#line 111 "diff.m"
  {
#line 111 "diff.m"
    MR_bool mdb__diff__succeeded;
#line 111 "diff.m"
    MR_Word mdb__diff__TypeInfo_50_50;
#line 111 "diff.m"
    MR_Word mdb__diff__TypeInfo_51_51;
#line 111 "diff.m"
    MR_Word mdb__diff__Path_9;
#line 111 "diff.m"
    MR_Word mdb__diff__Univ1_10;
#line 111 "diff.m"
    MR_Word mdb__diff__Univ2_11;
#line 111 "diff.m"
    MR_String mdb__diff__Functor1_14;
#line 111 "diff.m"
    MR_Integer mdb__diff__Arity1_15;
#line 111 "diff.m"
    MR_String mdb__diff__Functor2_16;
#line 111 "diff.m"
    MR_Integer mdb__diff__Arity2_17;
#line 111 "diff.m"
    MR_Box mdb__diff__V_35_35;
#line 111 "diff.m"
    MR_Box mdb__diff__V_37_37;
#line 111 "diff.m"
    MR_String mdb__diff__V_53_53;
#line 111 "diff.m"
    MR_String mdb__diff__V_54_54;
#line 111 "diff.m"
    MR_String mdb__diff__V_56_56;
#line 111 "diff.m"
    MR_String mdb__diff__V_57_57;
#line 111 "diff.m"
    MR_String mdb__diff__V_59_59;
#line 111 "diff.m"
    MR_String mdb__diff__V_60_60;
#line 111 "diff.m"
    MR_String mdb__diff__V_62_62;
#line 111 "diff.m"
    MR_String mdb__diff__V_63_63;
#line 111 "diff.m"
    MR_String mdb__diff__V_64_64;
#line 111 "diff.m"
    MR_String mdb__diff__V_66_66;
#line 111 "diff.m"
    MR_String mdb__diff__V_67_67;

#line 112 "diff.m"
    *mdb__diff__STATE_VARIABLE_DiffNum_19 = (mdb__diff__STATE_VARIABLE_DiffNum_0_18 + (MR_Integer) 1);
#line 699 "mdb.diff.c"
    {
#line 701 "mdb.diff.c"
      mdb__diff__V_53_53 = mercury__string__int_to_string_1_f_0(*mdb__diff__STATE_VARIABLE_DiffNum_19);
    }
#line 704 "mdb.diff.c"
    {
#line 706 "mdb.diff.c"
      mdb__diff__V_54_54 = mercury__string__f_43_43_2_f_0(mdb__diff__V_53_53, (MR_String) ": ");
    }
#line 709 "mdb.diff.c"
    {
#line 711 "mdb.diff.c"
      mercury__io__write_string_3_p_0(mdb__diff__V_54_54);
    }
#line 114 "diff.m"
    mdb__diff__Path_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__Diff_6, (MR_Integer) 0)));
#line 114 "diff.m"
    mdb__diff__Univ1_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__Diff_6, (MR_Integer) 1)));
#line 114 "diff.m"
    mdb__diff__Univ2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__Diff_6, (MR_Integer) 2)));
#line 118 "diff.m"
    if ((mdb__diff__Path_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 116 "diff.m"
      {
#line 117 "diff.m"
        {
#line 117 "diff.m"
          mercury__io__write_string_3_p_0((MR_String) "mismatch at root");
        }
#line 116 "diff.m"
      }
#line 118 "diff.m"
    else
#line 119 "diff.m"
      {
#line 119 "diff.m"
        MR_Integer mdb__diff__Posn_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__diff__Path_9, (MR_Integer) 0)));
#line 119 "diff.m"
        MR_Word mdb__diff__Posns_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__diff__Path_9, (MR_Integer) 1)));

#line 120 "diff.m"
        {
#line 120 "diff.m"
          mercury__io__write_int_3_p_0(mdb__diff__Posn_12);
        }
#line 121 "diff.m"
        {
#line 121 "diff.m"
          mdb__diff__show_path_rest_3_p_0(mdb__diff__Posns_13);
        }
#line 119 "diff.m"
      }
#line 123 "diff.m"
    {
#line 123 "diff.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 124 "diff.m"
    {
#line 124 "diff.m"
      mdb__diff__V_35_35 = mercury__univ__univ_value_1_f_0(&mdb__diff__TypeInfo_50_50, mdb__diff__Univ1_10);
    }
#line 124 "diff.m"
    {
#line 124 "diff.m"
      mercury__deconstruct__functor_4_p_2(mdb__diff__TypeInfo_50_50, mdb__diff__V_35_35, (MR_Integer) 2, &mdb__diff__Functor1_14, &mdb__diff__Arity1_15);
    }
#line 125 "diff.m"
    {
#line 125 "diff.m"
      mdb__diff__V_37_37 = mercury__univ__univ_value_1_f_0(&mdb__diff__TypeInfo_51_51, mdb__diff__Univ2_11);
    }
#line 125 "diff.m"
    {
#line 125 "diff.m"
      mercury__deconstruct__functor_4_p_2(mdb__diff__TypeInfo_51_51, mdb__diff__V_37_37, (MR_Integer) 2, &mdb__diff__Functor2_16, &mdb__diff__Arity2_17);
    }
#line 777 "mdb.diff.c"
    {
#line 779 "mdb.diff.c"
      mdb__diff__V_56_56 = mercury__string__int_to_string_1_f_0(mdb__diff__Arity2_17);
    }
#line 782 "mdb.diff.c"
    {
#line 784 "mdb.diff.c"
      mdb__diff__V_57_57 = mercury__string__f_43_43_2_f_0(mdb__diff__V_56_56, (MR_String) "\n");
    }
#line 787 "mdb.diff.c"
    {
#line 789 "mdb.diff.c"
      mdb__diff__V_59_59 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdb__diff__V_57_57);
    }
#line 792 "mdb.diff.c"
    {
#line 794 "mdb.diff.c"
      mdb__diff__V_60_60 = mercury__string__f_43_43_2_f_0(mdb__diff__Functor2_16, mdb__diff__V_59_59);
    }
#line 797 "mdb.diff.c"
    {
#line 799 "mdb.diff.c"
      mdb__diff__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) " vs ", mdb__diff__V_60_60);
    }
#line 802 "mdb.diff.c"
    {
#line 804 "mdb.diff.c"
      mdb__diff__V_63_63 = mercury__string__int_to_string_1_f_0(mdb__diff__Arity1_15);
    }
#line 807 "mdb.diff.c"
    {
#line 809 "mdb.diff.c"
      mdb__diff__V_64_64 = mercury__string__f_43_43_2_f_0(mdb__diff__V_63_63, mdb__diff__V_62_62);
    }
#line 812 "mdb.diff.c"
    {
#line 814 "mdb.diff.c"
      mdb__diff__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdb__diff__V_64_64);
    }
#line 817 "mdb.diff.c"
    {
#line 819 "mdb.diff.c"
      mdb__diff__V_67_67 = mercury__string__f_43_43_2_f_0(mdb__diff__Functor1_14, mdb__diff__V_66_66);
    }
#line 822 "mdb.diff.c"
    {
#line 824 "mdb.diff.c"
      mercury__io__write_string_3_p_0(mdb__diff__V_67_67);
#line 826 "mdb.diff.c"
      return;
    }
#line 111 "diff.m"
  }
#line 108 "diff.m"
}

#line 95 "diff.m"
static void MR_CALL 
mdb__diff__compute_arg_diffs_6_p_0(
#line 95 "diff.m"
  MR_Word mdb__diff__HeadVar__1_1,
#line 95 "diff.m"
  MR_Word mdb__diff__HeadVar__2_2,
#line 95 "diff.m"
  MR_Word mdb__diff__STATE_VARIABLE_RevPath_0_3,
#line 95 "diff.m"
  MR_Integer mdb__diff__ArgNum_4,
#line 95 "diff.m"
  MR_Word mdb__diff__STATE_VARIABLE_RevDiffs_0_5,
#line 95 "diff.m"
  MR_Word * mdb__diff__STATE_VARIABLE_RevDiffs_6)
#line 95 "diff.m"
{
#line 98 "diff.m"
  while (MR_TRUE)
#line 98 "diff.m"
    {
#line 98 "diff.m"
      /* tailcall optimized into a loop */
#line 98 "diff.m"
      {
#line 98 "diff.m"
        MR_bool mdb__diff__succeeded;

#line 98 "diff.m"
        if ((mdb__diff__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 98 "diff.m"
          if ((mdb__diff__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 98 "diff.m"
            *mdb__diff__STATE_VARIABLE_RevDiffs_6 = mdb__diff__STATE_VARIABLE_RevDiffs_0_5;
#line 98 "diff.m"
          else
#line 99 "diff.m"
            {
#line 100 "diff.m"
              {
#line 100 "diff.m"
                mercury__require__error_1_p_0((MR_String) "compute_arg_diffs: argument list mismatch");
#line 100 "diff.m"
                return;
              }
#line 99 "diff.m"
            }
#line 98 "diff.m"
        else
#line 98 "diff.m"
          {
#line 98 "diff.m"
            MR_Word mdb__diff__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__diff__HeadVar__1_1, (MR_Integer) 1)));
#line 98 "diff.m"
            MR_Word mdb__diff__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__diff__HeadVar__1_1, (MR_Integer) 0)));

#line 98 "diff.m"
            if ((mdb__diff__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 101 "diff.m"
              {
#line 102 "diff.m"
                {
#line 102 "diff.m"
                  mercury__require__error_1_p_0((MR_String) "compute_arg_diffs: argument list mismatch");
#line 102 "diff.m"
                  return;
                }
#line 101 "diff.m"
              }
#line 98 "diff.m"
            else
#line 104 "diff.m"
              {
#line 104 "diff.m"
                MR_Word mdb__diff__TypeInfo_28_67;
#line 104 "diff.m"
                MR_Word mdb__diff__TypeInfo_29_68;
#line 104 "diff.m"
                MR_Word mdb__diff__Arg2_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__diff__HeadVar__2_2, (MR_Integer) 0)));
#line 104 "diff.m"
                MR_Word mdb__diff__Args2_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__diff__HeadVar__2_2, (MR_Integer) 1)));
#line 104 "diff.m"
                MR_Word mdb__diff__V_38_38;
#line 104 "diff.m"
                MR_Word mdb__diff__STATE_VARIABLE_RevDiffs_39_39;
#line 104 "diff.m"
                MR_Integer mdb__diff__V_40_40;
#line 104 "diff.m"
                MR_String mdb__diff__Functor1_52;
#line 104 "diff.m"
                MR_Word mdb__diff__Args1_54;
#line 104 "diff.m"
                MR_String mdb__diff__Functor2_55;
#line 104 "diff.m"
                MR_Word mdb__diff__Args2_57;
#line 104 "diff.m"
                MR_Box mdb__diff__V_59_59;
#line 104 "diff.m"
                MR_Box mdb__diff__V_61_61;
#line 86 "diff.m"
                MR_Integer mdb__diff__V_53_53;
#line 87 "diff.m"
                MR_Integer mdb__diff__V_56_56;

#line 105 "diff.m"
                {
#line 105 "diff.m"
                  mdb__diff__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 105 "diff.m"
                  MR_hl_field(MR_mktag(1), mdb__diff__V_38_38, 0) = ((MR_Box) (mdb__diff__ArgNum_4));
#line 105 "diff.m"
                  MR_hl_field(MR_mktag(1), mdb__diff__V_38_38, 1) = ((MR_Box) (mdb__diff__STATE_VARIABLE_RevPath_0_3));
#line 105 "diff.m"
                }
#line 86 "diff.m"
                {
#line 86 "diff.m"
                  mdb__diff__V_59_59 = mercury__univ__univ_value_1_f_0(&mdb__diff__TypeInfo_28_67, mdb__diff__V_44_44);
                }
#line 86 "diff.m"
                {
#line 86 "diff.m"
                  mercury__deconstruct__deconstruct_5_p_2(mdb__diff__TypeInfo_28_67, mdb__diff__V_59_59, (MR_Integer) 2, &mdb__diff__Functor1_52, &mdb__diff__V_53_53, &mdb__diff__Args1_54);
                }
#line 87 "diff.m"
                {
#line 87 "diff.m"
                  mdb__diff__V_61_61 = mercury__univ__univ_value_1_f_0(&mdb__diff__TypeInfo_29_68, mdb__diff__Arg2_30);
                }
#line 87 "diff.m"
                {
#line 87 "diff.m"
                  mercury__deconstruct__deconstruct_5_p_2(mdb__diff__TypeInfo_29_68, mdb__diff__V_61_61, (MR_Integer) 2, &mdb__diff__Functor2_55, &mdb__diff__V_56_56, &mdb__diff__Args2_57);
                }
#line 88 "diff.m"
                mdb__diff__succeeded = (strcmp(mdb__diff__Functor1_52, mdb__diff__Functor2_55) == 0);
#line 90 "diff.m"
                if (mdb__diff__succeeded)
#line 89 "diff.m"
                  {
#line 89 "diff.m"
                    {
#line 89 "diff.m"
                      mdb__diff__compute_arg_diffs_6_p_0(mdb__diff__Args1_54, mdb__diff__Args2_57, mdb__diff__V_38_38, (MR_Integer) 1, mdb__diff__STATE_VARIABLE_RevDiffs_0_5, &mdb__diff__STATE_VARIABLE_RevDiffs_39_39);
                    }
#line 89 "diff.m"
                  }
#line 90 "diff.m"
                else
#line 91 "diff.m"
                  {
#line 91 "diff.m"
                    MR_Word mdb__diff__Path_58;
#line 91 "diff.m"
                    MR_Word mdb__diff__V_66_66;

#line 91 "diff.m"
                    {
#line 91 "diff.m"
                      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__diff__V_38_38, &mdb__diff__Path_58);
                    }
#line 92 "diff.m"
                    {
#line 92 "diff.m"
                      mdb__diff__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 92 "diff.m"
                      MR_hl_field(MR_mktag(0), mdb__diff__V_66_66, 0) = ((MR_Box) (mdb__diff__Path_58));
#line 92 "diff.m"
                      MR_hl_field(MR_mktag(0), mdb__diff__V_66_66, 1) = ((MR_Box) (mdb__diff__V_44_44));
#line 92 "diff.m"
                      MR_hl_field(MR_mktag(0), mdb__diff__V_66_66, 2) = ((MR_Box) (mdb__diff__Arg2_30));
#line 92 "diff.m"
                    }
#line 92 "diff.m"
                    {
#line 92 "diff.m"
                      mdb__diff__STATE_VARIABLE_RevDiffs_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 92 "diff.m"
                      MR_hl_field(MR_mktag(1), mdb__diff__STATE_VARIABLE_RevDiffs_39_39, 0) = ((MR_Box) (mdb__diff__V_66_66));
#line 92 "diff.m"
                      MR_hl_field(MR_mktag(1), mdb__diff__STATE_VARIABLE_RevDiffs_39_39, 1) = ((MR_Box) (mdb__diff__STATE_VARIABLE_RevDiffs_0_5));
#line 92 "diff.m"
                    }
#line 91 "diff.m"
                  }
#line 106 "diff.m"
                mdb__diff__V_40_40 = (mdb__diff__ArgNum_4 + (MR_Integer) 1);
#line 106 "diff.m"
                /* direct tailcall eliminated */
#line 106 "diff.m"
                {
#line 106 "diff.m"
                  MR_Word mdb__diff__HeadVar__1__tmp_copy_1 = mdb__diff__V_43_43;
#line 106 "diff.m"
                  MR_Word mdb__diff__HeadVar__2__tmp_copy_2 = mdb__diff__Args2_31;
#line 106 "diff.m"
                  MR_Integer mdb__diff__ArgNum__tmp_copy_4 = mdb__diff__V_40_40;
#line 106 "diff.m"
                  MR_Word mdb__diff__STATE_VARIABLE_RevDiffs_0__tmp_copy_5 = mdb__diff__STATE_VARIABLE_RevDiffs_39_39;

#line 106 "diff.m"
                  mdb__diff__STATE_VARIABLE_RevDiffs_0_5 = mdb__diff__STATE_VARIABLE_RevDiffs_0__tmp_copy_5;
#line 106 "diff.m"
                  mdb__diff__ArgNum_4 = mdb__diff__ArgNum__tmp_copy_4;
#line 106 "diff.m"
                  mdb__diff__HeadVar__2_2 = mdb__diff__HeadVar__2__tmp_copy_2;
#line 106 "diff.m"
                  mdb__diff__HeadVar__1_1 = mdb__diff__HeadVar__1__tmp_copy_1;
#line 106 "diff.m"
                }
#line 106 "diff.m"
                continue;
#line 104 "diff.m"
              }
#line 98 "diff.m"
          }
#line 98 "diff.m"
      }
#line 98 "diff.m"
      break;
#line 98 "diff.m"
    }
#line 95 "diff.m"
}

#line 82 "diff.m"
static void MR_CALL 
mdb__diff__compute_diffs_5_p_0(
#line 82 "diff.m"
  MR_Word mdb__diff__Univ1_6,
#line 82 "diff.m"
  MR_Word mdb__diff__Univ2_7,
#line 82 "diff.m"
  MR_Word mdb__diff__STATE_VARIABLE_RevPath_0_17,
#line 82 "diff.m"
  MR_Word mdb__diff__STATE_VARIABLE_RevDiffs_0_18,
#line 82 "diff.m"
  MR_Word * mdb__diff__STATE_VARIABLE_RevDiffs_19)
#line 82 "diff.m"
{
#line 85 "diff.m"
  {
#line 85 "diff.m"
    MR_bool mdb__diff__succeeded;
#line 85 "diff.m"
    MR_Word mdb__diff__TypeInfo_28_28;
#line 85 "diff.m"
    MR_Word mdb__diff__TypeInfo_29_29;
#line 85 "diff.m"
    MR_String mdb__diff__Functor1_10;
#line 85 "diff.m"
    MR_Word mdb__diff__Args1_12;
#line 85 "diff.m"
    MR_String mdb__diff__Functor2_13;
#line 85 "diff.m"
    MR_Word mdb__diff__Args2_15;
#line 85 "diff.m"
    MR_Box mdb__diff__V_20_20;
#line 85 "diff.m"
    MR_Box mdb__diff__V_22_22;
#line 86 "diff.m"
    MR_Integer mdb__diff__V_11_11;
#line 87 "diff.m"
    MR_Integer mdb__diff__V_14_14;

#line 86 "diff.m"
    {
#line 86 "diff.m"
      mdb__diff__V_20_20 = mercury__univ__univ_value_1_f_0(&mdb__diff__TypeInfo_28_28, mdb__diff__Univ1_6);
    }
#line 86 "diff.m"
    {
#line 86 "diff.m"
      mercury__deconstruct__deconstruct_5_p_2(mdb__diff__TypeInfo_28_28, mdb__diff__V_20_20, (MR_Integer) 2, &mdb__diff__Functor1_10, &mdb__diff__V_11_11, &mdb__diff__Args1_12);
    }
#line 87 "diff.m"
    {
#line 87 "diff.m"
      mdb__diff__V_22_22 = mercury__univ__univ_value_1_f_0(&mdb__diff__TypeInfo_29_29, mdb__diff__Univ2_7);
    }
#line 87 "diff.m"
    {
#line 87 "diff.m"
      mercury__deconstruct__deconstruct_5_p_2(mdb__diff__TypeInfo_29_29, mdb__diff__V_22_22, (MR_Integer) 2, &mdb__diff__Functor2_13, &mdb__diff__V_14_14, &mdb__diff__Args2_15);
    }
#line 88 "diff.m"
    mdb__diff__succeeded = (strcmp(mdb__diff__Functor1_10, mdb__diff__Functor2_13) == 0);
#line 90 "diff.m"
    if (mdb__diff__succeeded)
#line 89 "diff.m"
      {
#line 89 "diff.m"
        {
#line 89 "diff.m"
          mdb__diff__compute_arg_diffs_6_p_0(mdb__diff__Args1_12, mdb__diff__Args2_15, mdb__diff__STATE_VARIABLE_RevPath_0_17, (MR_Integer) 1, mdb__diff__STATE_VARIABLE_RevDiffs_0_18, mdb__diff__STATE_VARIABLE_RevDiffs_19);
#line 89 "diff.m"
          return;
        }
#line 89 "diff.m"
      }
#line 90 "diff.m"
    else
#line 91 "diff.m"
      {
#line 91 "diff.m"
        MR_Word mdb__diff__Path_16;
#line 91 "diff.m"
        MR_Word mdb__diff__V_27_27;

#line 91 "diff.m"
        {
#line 91 "diff.m"
          mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__diff__STATE_VARIABLE_RevPath_0_17, &mdb__diff__Path_16);
        }
#line 92 "diff.m"
        {
#line 92 "diff.m"
          mdb__diff__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 92 "diff.m"
          MR_hl_field(MR_mktag(0), mdb__diff__V_27_27, 0) = ((MR_Box) (mdb__diff__Path_16));
#line 92 "diff.m"
          MR_hl_field(MR_mktag(0), mdb__diff__V_27_27, 1) = ((MR_Box) (mdb__diff__Univ1_6));
#line 92 "diff.m"
          MR_hl_field(MR_mktag(0), mdb__diff__V_27_27, 2) = ((MR_Box) (mdb__diff__Univ2_7));
#line 92 "diff.m"
        }
#line 92 "diff.m"
        {
#line 92 "diff.m"
          MR_Word base;
#line 92 "diff.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 92 "diff.m"
          *mdb__diff__STATE_VARIABLE_RevDiffs_19 = base;
#line 92 "diff.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__diff__V_27_27));
#line 92 "diff.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__diff__STATE_VARIABLE_RevDiffs_0_18));
#line 92 "diff.m"
        }
#line 91 "diff.m"
      }
#line 85 "diff.m"
  }
#line 82 "diff.m"
}

#line 65 "diff.m"
static void MR_CALL 
mdb__diff__report_diffs_6_p_0_1(
#line 65 "diff.m"
  MR_Box mdb__diff__closure_arg,
#line 65 "diff.m"
  MR_Box mdb__diff__wrapper_arg_1,
#line 65 "diff.m"
  MR_Box mdb__diff__wrapper_arg_2,
#line 65 "diff.m"
  MR_Box * mdb__diff__wrapper_arg_3,
#line 65 "diff.m"
  MR_Box mdb__diff__wrapper_arg_4,
#line 65 "diff.m"
  MR_Box * mdb__diff__wrapper_arg_5)
#line 65 "diff.m"
{
#line 65 "diff.m"
  {
#line 65 "diff.m"
    MR_Box mdb__diff__closure = mdb__diff__closure_arg;
#line 65 "diff.m"
    MR_Integer mdb__diff__conv0_STATE_VARIABLE_DiffNum_19;

#line 65 "diff.m"
    {
#line 65 "diff.m"
      mdb__diff__show_diff_5_p_0(((MR_Word) mdb__diff__wrapper_arg_1), ((MR_Integer) mdb__diff__wrapper_arg_2), &mdb__diff__conv0_STATE_VARIABLE_DiffNum_19);
    }
#line 65 "diff.m"
    *mdb__diff__wrapper_arg_3 = ((MR_Box) (mdb__diff__conv0_STATE_VARIABLE_DiffNum_19));
#line 65 "diff.m"
  }
#line 65 "diff.m"
}

#line 21 "diff.m"
void MR_CALL 
mdb__diff__report_diffs_6_p_0(
#line 21 "diff.m"
  MR_Integer mdb__diff__Drop_7,
#line 21 "diff.m"
  MR_Integer mdb__diff__Max_8,
#line 21 "diff.m"
  MR_Word mdb__diff__Univ1_9,
#line 21 "diff.m"
  MR_Word mdb__diff__Univ2_10)
#line 21 "diff.m"
{
#line 75 "diff.m"
  {
#line 75 "diff.m"
    MR_bool mdb__diff__succeeded;
#line 44 "diff.m"
    MR_Word mdb__diff__Type1_12;
#line 44 "diff.m"
    MR_Word mdb__diff__Type2_13;

#line 44 "diff.m"
    {
#line 44 "diff.m"
      mdb__diff__Type1_12 = mercury__univ__univ_type_1_f_0(mdb__diff__Univ1_9);
    }
#line 45 "diff.m"
    {
#line 45 "diff.m"
      mdb__diff__Type2_13 = mercury__univ__univ_type_1_f_0(mdb__diff__Univ2_10);
    }
#line 46 "diff.m"
    {
#line 46 "diff.m"
      mdb__diff__succeeded = mercury__type_desc____Unify____type_desc_0_0(mdb__diff__Type1_12, mdb__diff__Type2_13);
    }
#line 75 "diff.m"
    if (mdb__diff__succeeded)
#line 48 "diff.m"
      {
#line 48 "diff.m"
        MR_Word mdb__diff__TypeCtorInfo_59_59;
#line 48 "diff.m"
        MR_Word mdb__diff__RevDiffs_14;
#line 48 "diff.m"
        MR_Word mdb__diff__AllDiffs_15;
#line 48 "diff.m"
        MR_Integer mdb__diff__NumAllDiffs_16;
#line 66 "diff.m"
        MR_Word mdb__diff__Diffs_17;
#line 53 "diff.m"
        MR_Word mdb__diff__V_18_18;
#line 53 "diff.m"
        MR_Word mdb__diff__V_19_19;

#line 48 "diff.m"
        {
#line 48 "diff.m"
          mdb__diff__compute_diffs_5_p_0(mdb__diff__Univ1_9, mdb__diff__Univ2_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__diff__RevDiffs_14);
        }
#line 1278 "mdb.diff.c"
        mdb__diff__TypeCtorInfo_59_59 = (MR_Word) &mdb__diff__mdb__diff__type_ctor_info_term_path_diff_0;
#line 49 "diff.m"
        {
#line 49 "diff.m"
          mercury__list__reverse_2_p_0(mdb__diff__TypeCtorInfo_59_59, mdb__diff__RevDiffs_14, &mdb__diff__AllDiffs_15);
        }
#line 50 "diff.m"
        {
#line 50 "diff.m"
          mercury__list__length_2_p_0(mdb__diff__TypeCtorInfo_59_59, mdb__diff__AllDiffs_15, &mdb__diff__NumAllDiffs_16);
        }
#line 52 "diff.m"
        {
#line 52 "diff.m"
          mdb__diff__succeeded = mercury__list__drop_3_p_0(mdb__diff__TypeCtorInfo_59_59, mdb__diff__Drop_7, mdb__diff__AllDiffs_15, &mdb__diff__Diffs_17);
        }
#line 52 "diff.m"
        if (mdb__diff__succeeded)
#line 52 "diff.m"
          {
#line 53 "diff.m"
            mdb__diff__succeeded = ((MR_tag((MR_Word) mdb__diff__Diffs_17)) == (MR_mktag((MR_Integer) 1)));
#line 53 "diff.m"
            if (mdb__diff__succeeded)
#line 53 "diff.m"
              {
#line 53 "diff.m"
                mdb__diff__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__diff__Diffs_17, (MR_Integer) 0)));
#line 53 "diff.m"
                mdb__diff__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__diff__Diffs_17, (MR_Integer) 1)));
#line 53 "diff.m"
              }
#line 52 "diff.m"
          }
#line 66 "diff.m"
        if (mdb__diff__succeeded)
#line 55 "diff.m"
          {
#line 55 "diff.m"
            MR_Integer mdb__diff__FirstShown_20 = (mdb__diff__Drop_7 + (MR_Integer) 1);
#line 55 "diff.m"
            MR_Integer mdb__diff__LastShown_21;
#line 55 "diff.m"
            MR_Word mdb__diff__ShowDiffs_22;
#line 55 "diff.m"
            MR_Integer mdb__diff__V_29_29 = (mdb__diff__Drop_7 + mdb__diff__Max_8);
#line 65 "diff.m"
            MR_Integer mdb__diff__V_23_23;
#line 65 "diff.m"
            MR_Box mdb__diff__conv2_V_23_23;
#line 65 "diff.m"
            MR_Box mdb__diff__conv1_STATE_VARIABLE_IO_25;

#line 56 "diff.m"
            {
#line 56 "diff.m"
              mdb__diff__LastShown_21 = mercury__int__min_2_f_0(mdb__diff__V_29_29, mdb__diff__NumAllDiffs_16);
            }
#line 57 "diff.m"
            mdb__diff__succeeded = (mdb__diff__FirstShown_20 == mdb__diff__LastShown_21);
#line 60 "diff.m"
            if (mdb__diff__succeeded)
#line 58 "diff.m"
              {
#line 58 "diff.m"
                MR_String mdb__diff__V_68_68;
#line 58 "diff.m"
                MR_String mdb__diff__V_69_69;
#line 58 "diff.m"
                MR_String mdb__diff__V_71_71;
#line 58 "diff.m"
                MR_String mdb__diff__V_72_72;
#line 58 "diff.m"
                MR_String mdb__diff__V_73_73;
#line 58 "diff.m"
                MR_String mdb__diff__V_75_75;

#line 1356 "mdb.diff.c"
                {
#line 1358 "mdb.diff.c"
                  mdb__diff__V_68_68 = mercury__string__int_to_string_1_f_0(mdb__diff__FirstShown_20);
                }
#line 1361 "mdb.diff.c"
                {
#line 1363 "mdb.diff.c"
                  mdb__diff__V_69_69 = mercury__string__f_43_43_2_f_0(mdb__diff__V_68_68, (MR_String) ":\n");
                }
#line 1366 "mdb.diff.c"
                {
#line 1368 "mdb.diff.c"
                  mdb__diff__V_71_71 = mercury__string__f_43_43_2_f_0((MR_String) " diffs, showing diff ", mdb__diff__V_69_69);
                }
#line 1371 "mdb.diff.c"
                {
#line 1373 "mdb.diff.c"
                  mdb__diff__V_72_72 = mercury__string__int_to_string_1_f_0(mdb__diff__NumAllDiffs_16);
                }
#line 1376 "mdb.diff.c"
                {
#line 1378 "mdb.diff.c"
                  mdb__diff__V_73_73 = mercury__string__f_43_43_2_f_0(mdb__diff__V_72_72, mdb__diff__V_71_71);
                }
#line 1381 "mdb.diff.c"
                {
#line 1383 "mdb.diff.c"
                  mdb__diff__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "There are ", mdb__diff__V_73_73);
                }
#line 1386 "mdb.diff.c"
                {
#line 1388 "mdb.diff.c"
                  mercury__io__write_string_3_p_0(mdb__diff__V_75_75);
                }
#line 58 "diff.m"
              }
#line 60 "diff.m"
            else
#line 61 "diff.m"
              {
#line 61 "diff.m"
                MR_String mdb__diff__V_77_77;
#line 61 "diff.m"
                MR_String mdb__diff__V_78_78;
#line 61 "diff.m"
                MR_String mdb__diff__V_80_80;
#line 61 "diff.m"
                MR_String mdb__diff__V_81_81;
#line 61 "diff.m"
                MR_String mdb__diff__V_82_82;
#line 61 "diff.m"
                MR_String mdb__diff__V_84_84;
#line 61 "diff.m"
                MR_String mdb__diff__V_85_85;
#line 61 "diff.m"
                MR_String mdb__diff__V_86_86;
#line 61 "diff.m"
                MR_String mdb__diff__V_88_88;

#line 1416 "mdb.diff.c"
                {
#line 1418 "mdb.diff.c"
                  mdb__diff__V_77_77 = mercury__string__int_to_string_1_f_0(mdb__diff__LastShown_21);
                }
#line 1421 "mdb.diff.c"
                {
#line 1423 "mdb.diff.c"
                  mdb__diff__V_78_78 = mercury__string__f_43_43_2_f_0(mdb__diff__V_77_77, (MR_String) ":\n");
                }
#line 1426 "mdb.diff.c"
                {
#line 1428 "mdb.diff.c"
                  mdb__diff__V_80_80 = mercury__string__f_43_43_2_f_0((MR_String) "-", mdb__diff__V_78_78);
                }
#line 1431 "mdb.diff.c"
                {
#line 1433 "mdb.diff.c"
                  mdb__diff__V_81_81 = mercury__string__int_to_string_1_f_0(mdb__diff__FirstShown_20);
                }
#line 1436 "mdb.diff.c"
                {
#line 1438 "mdb.diff.c"
                  mdb__diff__V_82_82 = mercury__string__f_43_43_2_f_0(mdb__diff__V_81_81, mdb__diff__V_80_80);
                }
#line 1441 "mdb.diff.c"
                {
#line 1443 "mdb.diff.c"
                  mdb__diff__V_84_84 = mercury__string__f_43_43_2_f_0((MR_String) " diffs, showing diffs ", mdb__diff__V_82_82);
                }
#line 1446 "mdb.diff.c"
                {
#line 1448 "mdb.diff.c"
                  mdb__diff__V_85_85 = mercury__string__int_to_string_1_f_0(mdb__diff__NumAllDiffs_16);
                }
#line 1451 "mdb.diff.c"
                {
#line 1453 "mdb.diff.c"
                  mdb__diff__V_86_86 = mercury__string__f_43_43_2_f_0(mdb__diff__V_85_85, mdb__diff__V_84_84);
                }
#line 1456 "mdb.diff.c"
                {
#line 1458 "mdb.diff.c"
                  mdb__diff__V_88_88 = mercury__string__f_43_43_2_f_0((MR_String) "There are ", mdb__diff__V_86_86);
                }
#line 1461 "mdb.diff.c"
                {
#line 1463 "mdb.diff.c"
                  mercury__io__write_string_3_p_0(mdb__diff__V_88_88);
                }
#line 61 "diff.m"
              }
#line 64 "diff.m"
            {
#line 64 "diff.m"
              mercury__list__take_upto_3_p_0(mdb__diff__TypeCtorInfo_59_59, mdb__diff__Max_8, mdb__diff__Diffs_17, &mdb__diff__ShowDiffs_22);
            }
#line 65 "diff.m"
            {
#line 65 "diff.m"
              mercury__list__foldl2_6_p_11(mdb__diff__TypeCtorInfo_59_59, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &mdb__diff_scalar_common_3[0], mdb__diff__ShowDiffs_22, ((MR_Box) (mdb__diff__Drop_7)), &mdb__diff__conv2_V_23_23, ((MR_Box) ((MR_Integer) 0)), &mdb__diff__conv1_STATE_VARIABLE_IO_25);
            }
#line 65 "diff.m"
            mdb__diff__V_23_23 = ((MR_Integer) mdb__diff__conv2_V_23_23);
#line 55 "diff.m"
          }
#line 66 "diff.m"
        else
#line 69 "diff.m"
          {
#line 67 "diff.m"
            mdb__diff__succeeded = (mdb__diff__NumAllDiffs_16 == (MR_Integer) 0);
#line 69 "diff.m"
            if (mdb__diff__succeeded)
#line 68 "diff.m"
              {
#line 68 "diff.m"
                {
#line 68 "diff.m"
                  mercury__io__write_string_3_p_0((MR_String) "There are no diffs.\n");
#line 68 "diff.m"
                  return;
                }
#line 68 "diff.m"
              }
#line 69 "diff.m"
            else
#line 71 "diff.m"
              {
#line 69 "diff.m"
                mdb__diff__succeeded = (mdb__diff__NumAllDiffs_16 == (MR_Integer) 1);
#line 71 "diff.m"
                if (mdb__diff__succeeded)
#line 70 "diff.m"
                  {
#line 70 "diff.m"
                    {
#line 70 "diff.m"
                      mercury__io__write_string_3_p_0((MR_String) "There is only one diff.\n");
#line 70 "diff.m"
                      return;
                    }
#line 70 "diff.m"
                  }
#line 71 "diff.m"
                else
#line 72 "diff.m"
                  {
#line 72 "diff.m"
                    MR_String mdb__diff__V_90_90;
#line 72 "diff.m"
                    MR_String mdb__diff__V_91_91;
#line 72 "diff.m"
                    MR_String mdb__diff__V_93_93;

#line 1531 "mdb.diff.c"
                    {
#line 1533 "mdb.diff.c"
                      mdb__diff__V_90_90 = mercury__string__int_to_string_1_f_0(mdb__diff__NumAllDiffs_16);
                    }
#line 1536 "mdb.diff.c"
                    {
#line 1538 "mdb.diff.c"
                      mdb__diff__V_91_91 = mercury__string__f_43_43_2_f_0(mdb__diff__V_90_90, (MR_String) " diffs.\n");
                    }
#line 1541 "mdb.diff.c"
                    {
#line 1543 "mdb.diff.c"
                      mdb__diff__V_93_93 = mercury__string__f_43_43_2_f_0((MR_String) "There are only ", mdb__diff__V_91_91);
                    }
#line 1546 "mdb.diff.c"
                    {
#line 1548 "mdb.diff.c"
                      mercury__io__write_string_3_p_0(mdb__diff__V_93_93);
#line 1550 "mdb.diff.c"
                      return;
                    }
#line 72 "diff.m"
                  }
#line 71 "diff.m"
              }
#line 69 "diff.m"
          }
#line 48 "diff.m"
      }
#line 75 "diff.m"
    else
#line 76 "diff.m"
      {
#line 76 "diff.m"
        {
#line 76 "diff.m"
          mercury__io__write_string_3_p_0((MR_String) "The two values are of different types.\n");
#line 76 "diff.m"
          return;
        }
#line 76 "diff.m"
      }
#line 75 "diff.m"
  }
#line 21 "diff.m"
}

void mercury__mdb__diff__init(void)
{
}

void mercury__mdb__diff__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__diff__mdb__diff__type_ctor_info_term_path_diff_0);
}

void mercury__mdb__diff__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.diff. */
