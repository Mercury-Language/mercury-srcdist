/*
** Automatically generated from `diff.m'
** by the Mercury compiler,
** version rotd-2016-02-26
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


/* :- module mdb.diff. */
/* :- implementation. */

/*
INIT mercury__mdb__diff__init
ENDINIT
*/

#include "mdb.diff.mih"
#include "mdb.diff.mh"


#include "mdb.mih"
#include "mdbcomp.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 mdb__diff__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mdb__diff__mdb__diff__field_types_term_path_diff_0_0[3];

static const MR_DuFunctorDesc mdb__diff__mdb__diff__du_functor_desc_term_path_diff_0_0;

static const MR_DuFunctorDescPtr mdb__diff__mdb__diff__du_stag_ordered_term_path_diff_0_0[1];

static const MR_DuPtagLayout mdb__diff__mdb__diff__du_ptag_ordered_term_path_diff_0[1];

static const MR_DuFunctorDescPtr mdb__diff__mdb__diff__du_name_ordered_term_path_diff_0[1];

static const MR_Integer mdb__diff__mdb__diff__functor_number_map_term_path_diff_0[1];

static MR_bool MR_CALL 
mdb__diff____Unify____term_path_diff_0_0_10001(
  MR_Box mdb__diff__wrapper_arg_1,
  MR_Box mdb__diff__wrapper_arg_2);

static void MR_CALL 
mdb__diff____Compare____term_path_diff_0_0_10001(
  MR_Box * mdb__diff__wrapper_arg_1,
  MR_Box mdb__diff__wrapper_arg_2,
  MR_Box mdb__diff__wrapper_arg_3);

static void MR_CALL 
mdb__diff____Compare____term_path_diff_0_0(
  MR_Word * mdb__diff__HeadVar__1_1,
  MR_Word mdb__diff__HeadVar__2_2,
  MR_Word mdb__diff__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__diff____Unify____term_path_diff_0_0(
  MR_Word mdb__diff__HeadVar__1_1,
  MR_Word mdb__diff__HeadVar__2_2);

static void MR_CALL 
mdb__diff__show_path_rest_3_p_0(
  MR_Word mdb__diff__HeadVar__1_1);

static void MR_CALL 
mdb__diff__show_diff_5_p_0(
  MR_Word mdb__diff__Diff_6,
  MR_Integer mdb__diff__STATE_VARIABLE_DiffNum_0_18,
  MR_Integer * mdb__diff__STATE_VARIABLE_DiffNum_19);

static void MR_CALL 
mdb__diff__compute_arg_diffs_6_p_0(
  MR_Word mdb__diff__HeadVar__1_1,
  MR_Word mdb__diff__HeadVar__2_2,
  MR_Word mdb__diff__STATE_VARIABLE_RevPath_0_3,
  MR_Integer mdb__diff__ArgNum_4,
  MR_Word mdb__diff__STATE_VARIABLE_RevDiffs_0_5,
  MR_Word * mdb__diff__STATE_VARIABLE_RevDiffs_6);

static void MR_CALL 
mdb__diff__compute_diffs_5_p_0(
  MR_Word mdb__diff__Univ1_6,
  MR_Word mdb__diff__Univ2_7,
  MR_Word mdb__diff__STATE_VARIABLE_RevPath_0_17,
  MR_Word mdb__diff__STATE_VARIABLE_RevDiffs_0_18,
  MR_Word * mdb__diff__STATE_VARIABLE_RevDiffs_19);

static void MR_CALL 
mdb__diff__report_diffs_6_p_0_1(
  MR_Box mdb__diff__closure_arg,
  MR_Box mdb__diff__wrapper_arg_1,
  MR_Box mdb__diff__wrapper_arg_2,
  MR_Box * mdb__diff__wrapper_arg_3,
  MR_Box mdb__diff__wrapper_arg_4,
  MR_Box * mdb__diff__wrapper_arg_5);


static /* final */ const MR_Box mdb__diff_scalar_common_1[1][2];

static /* final */ const MR_Box mdb__diff_scalar_common_2[1][1];

static /* final */ const MR_Box mdb__diff_scalar_common_3[1][8];

static /* final */ const MR_Box mdb__diff_scalar_common_4[1][3];




static /* final */ const MR_Box mdb__diff_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdb__diff_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box mdb__diff_scalar_common_3[1][8] = {
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

static /* final */ const MR_Box mdb__diff_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mdb__diff_scalar_common_3[0])),
    ((MR_Box) (mdb__diff__report_diffs_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.diff.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"

#line 40 "diff.m"
void 
ML_report_diffs(
  MR_Integer mdb__diff__Drop_7,
  MR_Integer mdb__diff__Max_8,
  MR_Word mdb__diff__Univ1_9,
  MR_Word mdb__diff__Univ2_10)
#line 40 "diff.m"
{
#line 40 "diff.m"
	mdb__diff__report_diffs_6_p_0((MR_Integer) mdb__diff__Drop_7, (MR_Integer) mdb__diff__Max_8, (MR_Word) mdb__diff__Univ1_9, (MR_Word) mdb__diff__Univ2_10);
}


static const MR_FA_TypeInfo_Struct1 mdb__diff__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo mdb__diff__mdb__diff__field_types_term_path_diff_0_0[3] = {
  (MR_PseudoTypeInfo) &mdb__diff__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__diff__mdb__diff__du_stag_ordered_term_path_diff_0_0[1] = {
  &mdb__diff__mdb__diff__du_functor_desc_term_path_diff_0_0
};

static const MR_DuPtagLayout mdb__diff__mdb__diff__du_ptag_ordered_term_path_diff_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__diff__mdb__diff__du_stag_ordered_term_path_diff_0_0
  }
};

static const MR_DuFunctorDescPtr mdb__diff__mdb__diff__du_name_ordered_term_path_diff_0[1] = {
  &mdb__diff__mdb__diff__du_functor_desc_term_path_diff_0_0
};

static const MR_Integer mdb__diff__mdb__diff__functor_number_map_term_path_diff_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__diff__mdb__diff__type_ctor_info_term_path_diff_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__diff____Unify____term_path_diff_0_0_10001)),
  ((MR_Box) (mdb__diff____Compare____term_path_diff_0_0_10001)),
  (MR_String) "mdb.diff",
  (MR_String) "term_path_diff",
  {     mdb__diff__mdb__diff__du_name_ordered_term_path_diff_0 },
  {     mdb__diff__mdb__diff__du_ptag_ordered_term_path_diff_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__diff__mdb__diff__functor_number_map_term_path_diff_0
};

static MR_bool MR_CALL 
mdb__diff____Unify____term_path_diff_0_0_10001(
  MR_Box mdb__diff__wrapper_arg_1,
  MR_Box mdb__diff__wrapper_arg_2)
{
  {
    MR_bool mdb__diff__succeeded;

    {
      mdb__diff__succeeded = mdb__diff____Unify____term_path_diff_0_0(((MR_Word) mdb__diff__wrapper_arg_1), ((MR_Word) mdb__diff__wrapper_arg_2));
    }
    return mdb__diff__succeeded;
  }
}

static void MR_CALL 
mdb__diff____Compare____term_path_diff_0_0_10001(
  MR_Box * mdb__diff__wrapper_arg_1,
  MR_Box mdb__diff__wrapper_arg_2,
  MR_Box mdb__diff__wrapper_arg_3)
{
  {
    MR_Word mdb__diff__conv0_HeadVar__1_1;

    {
      mdb__diff____Compare____term_path_diff_0_0(&mdb__diff__conv0_HeadVar__1_1, ((MR_Word) mdb__diff__wrapper_arg_2), ((MR_Word) mdb__diff__wrapper_arg_3));
    }
    *mdb__diff__wrapper_arg_1 = ((MR_Box) (mdb__diff__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mdb__diff____Compare____term_path_diff_0_0(
  MR_Word * mdb__diff__HeadVar__1_1,
  MR_Word mdb__diff__HeadVar__2_2,
  MR_Word mdb__diff__HeadVar__3_3)
{
  {
    MR_bool mdb__diff__succeeded;
    MR_Integer mdb__diff__CastX_12 = (MR_Integer) mdb__diff__HeadVar__2_2;
    MR_Integer mdb__diff__CastY_13 = (MR_Integer) mdb__diff__HeadVar__3_3;

    mdb__diff__succeeded = (mdb__diff__CastX_12 == mdb__diff__CastY_13);
    if (mdb__diff__succeeded)
      *mdb__diff__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdb__diff__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__diff__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__diff__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__diff__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__diff__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__diff__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mdb__diff__V_10_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__diff_scalar_common_1[0], &mdb__diff__V_10_10, ((MR_Box) (mdb__diff__V_4_4)), ((MR_Box) (mdb__diff__V_7_7)));
        }
        mdb__diff__succeeded = (mdb__diff__V_10_10 == (MR_Integer) 0);
        mdb__diff__succeeded = !(mdb__diff__succeeded);
        if (mdb__diff__succeeded)
          *mdb__diff__HeadVar__1_1 = mdb__diff__V_10_10;
        else
          {
            MR_Word mdb__diff__V_11_11;

            {
              mercury__univ____Compare____univ_0_0(&mdb__diff__V_11_11, mdb__diff__V_5_5, mdb__diff__V_8_8);
            }
            mdb__diff__succeeded = (mdb__diff__V_11_11 == (MR_Integer) 0);
            mdb__diff__succeeded = !(mdb__diff__succeeded);
            if (mdb__diff__succeeded)
              *mdb__diff__HeadVar__1_1 = mdb__diff__V_11_11;
            else
              {
                mercury__univ____Compare____univ_0_0(mdb__diff__HeadVar__1_1, mdb__diff__V_6_6, mdb__diff__V_9_9);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
mdb__diff____Unify____term_path_diff_0_0(
  MR_Word mdb__diff__HeadVar__1_1,
  MR_Word mdb__diff__HeadVar__2_2)
{
  {
    MR_bool mdb__diff__succeeded;
    MR_Integer mdb__diff__CastX_9 = (MR_Integer) mdb__diff__HeadVar__1_1;
    MR_Integer mdb__diff__CastY_10 = (MR_Integer) mdb__diff__HeadVar__2_2;

    mdb__diff__succeeded = (mdb__diff__CastX_9 == mdb__diff__CastY_10);
    if (mdb__diff__succeeded)
      mdb__diff__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__diff__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__diff__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__diff__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mdb__diff__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__diff__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__diff__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__HeadVar__2_2, (MR_Integer) 2)));

        {
          mdb__diff__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__diff_scalar_common_1[0], ((MR_Box) (mdb__diff__V_3_3)), ((MR_Box) (mdb__diff__V_6_6)));
        }
        if (mdb__diff__succeeded)
          {
            {
              mdb__diff__succeeded = mercury__univ____Unify____univ_0_0(mdb__diff__V_4_4, mdb__diff__V_7_7);
            }
            if (mdb__diff__succeeded)
              {
                mdb__diff__succeeded = mercury__univ____Unify____univ_0_0(mdb__diff__V_5_5, mdb__diff__V_8_8);
              }
          }
      }
    return mdb__diff__succeeded;
  }
}

static void MR_CALL 
mdb__diff__show_path_rest_3_p_0(
  MR_Word mdb__diff__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__diff__succeeded;

        if ((mdb__diff__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Integer mdb__diff__Posn_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__diff__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__diff__Posns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__diff__HeadVar__1_1, (MR_Integer) 1)));

            {
              mercury__io__write_string_3_p_0((MR_String) "/");
            }
            {
              mercury__io__write_int_3_p_0(mdb__diff__Posn_7);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mdb__diff__HeadVar__1__tmp_copy_1 = mdb__diff__Posns_8;

              mdb__diff__HeadVar__1_1 = mdb__diff__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mdb__diff__show_diff_5_p_0(
  MR_Word mdb__diff__Diff_6,
  MR_Integer mdb__diff__STATE_VARIABLE_DiffNum_0_18,
  MR_Integer * mdb__diff__STATE_VARIABLE_DiffNum_19)
{
  {
    MR_bool mdb__diff__succeeded;
    MR_Word mdb__diff__TypeInfo_50_50;
    MR_Word mdb__diff__TypeInfo_51_51;
    MR_Word mdb__diff__Path_9;
    MR_Word mdb__diff__Univ1_10;
    MR_Word mdb__diff__Univ2_11;
    MR_String mdb__diff__Functor1_14;
    MR_Integer mdb__diff__Arity1_15;
    MR_String mdb__diff__Functor2_16;
    MR_Integer mdb__diff__Arity2_17;
    MR_Box mdb__diff__V_35_35;
    MR_Box mdb__diff__V_37_37;
    MR_String mdb__diff__V_53_53;
    MR_Word mdb__diff__V_59_59;
    MR_String mdb__diff__V_65_65;
    MR_String mdb__diff__V_78_78;

    *mdb__diff__STATE_VARIABLE_DiffNum_19 = (mdb__diff__STATE_VARIABLE_DiffNum_0_18 + (MR_Integer) 1);
    mdb__diff__V_59_59 = (MR_Word) &mdb__diff_scalar_common_2[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdb__diff__V_59_59, *mdb__diff__STATE_VARIABLE_DiffNum_19, &mdb__diff__V_53_53);
    }
    {
      mercury__io__write_string_3_p_0(mdb__diff__V_53_53);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
    mdb__diff__Path_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__Diff_6, (MR_Integer) 0)));
    mdb__diff__Univ1_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__Diff_6, (MR_Integer) 1)));
    mdb__diff__Univ2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__diff__Diff_6, (MR_Integer) 2)));
    if ((mdb__diff__Path_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "mismatch at root");
        }
      }
    else
      {
        MR_Integer mdb__diff__Posn_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__diff__Path_9, (MR_Integer) 0)));
        MR_Word mdb__diff__Posns_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__diff__Path_9, (MR_Integer) 1)));

        {
          mercury__io__write_int_3_p_0(mdb__diff__Posn_12);
        }
        {
          mdb__diff__show_path_rest_3_p_0(mdb__diff__Posns_13);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
    {
      mdb__diff__V_35_35 = mercury__univ__univ_value_1_f_0(&mdb__diff__TypeInfo_50_50, mdb__diff__Univ1_10);
    }
    {
      mercury__deconstruct__functor_4_p_2(mdb__diff__TypeInfo_50_50, mdb__diff__V_35_35, (MR_Integer) 2, &mdb__diff__Functor1_14, &mdb__diff__Arity1_15);
    }
    {
      mdb__diff__V_37_37 = mercury__univ__univ_value_1_f_0(&mdb__diff__TypeInfo_51_51, mdb__diff__Univ2_11);
    }
    {
      mercury__deconstruct__functor_4_p_2(mdb__diff__TypeInfo_51_51, mdb__diff__V_37_37, (MR_Integer) 2, &mdb__diff__Functor2_16, &mdb__diff__Arity2_17);
    }
    {
      mercury__io__write_string_3_p_0(mdb__diff__Functor1_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdb__diff__V_59_59, mdb__diff__Arity1_15, &mdb__diff__V_65_65);
    }
    {
      mercury__io__write_string_3_p_0(mdb__diff__V_65_65);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " vs ");
    }
    {
      mercury__io__write_string_3_p_0(mdb__diff__Functor2_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdb__diff__V_59_59, mdb__diff__Arity2_17, &mdb__diff__V_78_78);
    }
    {
      mercury__io__write_string_3_p_0(mdb__diff__V_78_78);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
mdb__diff__compute_arg_diffs_6_p_0(
  MR_Word mdb__diff__HeadVar__1_1,
  MR_Word mdb__diff__HeadVar__2_2,
  MR_Word mdb__diff__STATE_VARIABLE_RevPath_0_3,
  MR_Integer mdb__diff__ArgNum_4,
  MR_Word mdb__diff__STATE_VARIABLE_RevDiffs_0_5,
  MR_Word * mdb__diff__STATE_VARIABLE_RevDiffs_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__diff__succeeded;

        if ((mdb__diff__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((mdb__diff__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mdb__diff__STATE_VARIABLE_RevDiffs_6 = mdb__diff__STATE_VARIABLE_RevDiffs_0_5;
          else
            {
              {
                mercury__require__error_1_p_0((MR_String) "compute_arg_diffs: argument list mismatch");
                return;
              }
            }
        else
          {
            MR_Word mdb__diff__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__diff__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__diff__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__diff__HeadVar__1_1, (MR_Integer) 0)));

            if ((mdb__diff__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "compute_arg_diffs: argument list mismatch");
                  return;
                }
              }
            else
              {
                MR_Word mdb__diff__TypeInfo_28_67;
                MR_Word mdb__diff__TypeInfo_29_68;
                MR_Word mdb__diff__Arg2_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__diff__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word mdb__diff__Args2_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__diff__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word mdb__diff__V_38_38;
                MR_Word mdb__diff__STATE_VARIABLE_RevDiffs_39_39;
                MR_Integer mdb__diff__V_40_40;
                MR_String mdb__diff__Functor1_52;
                MR_Word mdb__diff__Args1_54;
                MR_String mdb__diff__Functor2_55;
                MR_Word mdb__diff__Args2_57;
                MR_Box mdb__diff__V_59_59;
                MR_Box mdb__diff__V_61_61;
                MR_Integer mdb__diff__V_53_53;
                MR_Integer mdb__diff__V_56_56;

                {
                  mdb__diff__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__diff__V_38_38, 0) = ((MR_Box) (mdb__diff__ArgNum_4));
                  MR_hl_field(MR_mktag(1), mdb__diff__V_38_38, 1) = ((MR_Box) (mdb__diff__STATE_VARIABLE_RevPath_0_3));
                }
                {
                  mdb__diff__V_59_59 = mercury__univ__univ_value_1_f_0(&mdb__diff__TypeInfo_28_67, mdb__diff__V_44_44);
                }
                {
                  mercury__deconstruct__deconstruct_5_p_2(mdb__diff__TypeInfo_28_67, mdb__diff__V_59_59, (MR_Integer) 2, &mdb__diff__Functor1_52, &mdb__diff__V_53_53, &mdb__diff__Args1_54);
                }
                {
                  mdb__diff__V_61_61 = mercury__univ__univ_value_1_f_0(&mdb__diff__TypeInfo_29_68, mdb__diff__Arg2_30);
                }
                {
                  mercury__deconstruct__deconstruct_5_p_2(mdb__diff__TypeInfo_29_68, mdb__diff__V_61_61, (MR_Integer) 2, &mdb__diff__Functor2_55, &mdb__diff__V_56_56, &mdb__diff__Args2_57);
                }
                mdb__diff__succeeded = (strcmp(mdb__diff__Functor1_52, mdb__diff__Functor2_55) == 0);
                if (mdb__diff__succeeded)
                  {
                    {
                      mdb__diff__compute_arg_diffs_6_p_0(mdb__diff__Args1_54, mdb__diff__Args2_57, mdb__diff__V_38_38, (MR_Integer) 1, mdb__diff__STATE_VARIABLE_RevDiffs_0_5, &mdb__diff__STATE_VARIABLE_RevDiffs_39_39);
                    }
                  }
                else
                  {
                    MR_Word mdb__diff__Path_58;
                    MR_Word mdb__diff__V_66_66;

                    {
                      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__diff__V_38_38, &mdb__diff__Path_58);
                    }
                    {
                      mdb__diff__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mdb__diff__V_66_66, 0) = ((MR_Box) (mdb__diff__Path_58));
                      MR_hl_field(MR_mktag(0), mdb__diff__V_66_66, 1) = ((MR_Box) (mdb__diff__V_44_44));
                      MR_hl_field(MR_mktag(0), mdb__diff__V_66_66, 2) = ((MR_Box) (mdb__diff__Arg2_30));
                    }
                    {
                      mdb__diff__STATE_VARIABLE_RevDiffs_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mdb__diff__STATE_VARIABLE_RevDiffs_39_39, 0) = ((MR_Box) (mdb__diff__V_66_66));
                      MR_hl_field(MR_mktag(1), mdb__diff__STATE_VARIABLE_RevDiffs_39_39, 1) = ((MR_Box) (mdb__diff__STATE_VARIABLE_RevDiffs_0_5));
                    }
                  }
                mdb__diff__V_40_40 = (mdb__diff__ArgNum_4 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Word mdb__diff__HeadVar__1__tmp_copy_1 = mdb__diff__V_43_43;
                  MR_Word mdb__diff__HeadVar__2__tmp_copy_2 = mdb__diff__Args2_31;
                  MR_Integer mdb__diff__ArgNum__tmp_copy_4 = mdb__diff__V_40_40;
                  MR_Word mdb__diff__STATE_VARIABLE_RevDiffs_0__tmp_copy_5 = mdb__diff__STATE_VARIABLE_RevDiffs_39_39;

                  mdb__diff__STATE_VARIABLE_RevDiffs_0_5 = mdb__diff__STATE_VARIABLE_RevDiffs_0__tmp_copy_5;
                  mdb__diff__ArgNum_4 = mdb__diff__ArgNum__tmp_copy_4;
                  mdb__diff__HeadVar__2_2 = mdb__diff__HeadVar__2__tmp_copy_2;
                  mdb__diff__HeadVar__1_1 = mdb__diff__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mdb__diff__compute_diffs_5_p_0(
  MR_Word mdb__diff__Univ1_6,
  MR_Word mdb__diff__Univ2_7,
  MR_Word mdb__diff__STATE_VARIABLE_RevPath_0_17,
  MR_Word mdb__diff__STATE_VARIABLE_RevDiffs_0_18,
  MR_Word * mdb__diff__STATE_VARIABLE_RevDiffs_19)
{
  {
    MR_bool mdb__diff__succeeded;
    MR_Word mdb__diff__TypeInfo_28_28;
    MR_Word mdb__diff__TypeInfo_29_29;
    MR_String mdb__diff__Functor1_10;
    MR_Word mdb__diff__Args1_12;
    MR_String mdb__diff__Functor2_13;
    MR_Word mdb__diff__Args2_15;
    MR_Box mdb__diff__V_20_20;
    MR_Box mdb__diff__V_22_22;
    MR_Integer mdb__diff__V_11_11;
    MR_Integer mdb__diff__V_14_14;

    {
      mdb__diff__V_20_20 = mercury__univ__univ_value_1_f_0(&mdb__diff__TypeInfo_28_28, mdb__diff__Univ1_6);
    }
    {
      mercury__deconstruct__deconstruct_5_p_2(mdb__diff__TypeInfo_28_28, mdb__diff__V_20_20, (MR_Integer) 2, &mdb__diff__Functor1_10, &mdb__diff__V_11_11, &mdb__diff__Args1_12);
    }
    {
      mdb__diff__V_22_22 = mercury__univ__univ_value_1_f_0(&mdb__diff__TypeInfo_29_29, mdb__diff__Univ2_7);
    }
    {
      mercury__deconstruct__deconstruct_5_p_2(mdb__diff__TypeInfo_29_29, mdb__diff__V_22_22, (MR_Integer) 2, &mdb__diff__Functor2_13, &mdb__diff__V_14_14, &mdb__diff__Args2_15);
    }
    mdb__diff__succeeded = (strcmp(mdb__diff__Functor1_10, mdb__diff__Functor2_13) == 0);
    if (mdb__diff__succeeded)
      {
        {
          mdb__diff__compute_arg_diffs_6_p_0(mdb__diff__Args1_12, mdb__diff__Args2_15, mdb__diff__STATE_VARIABLE_RevPath_0_17, (MR_Integer) 1, mdb__diff__STATE_VARIABLE_RevDiffs_0_18, mdb__diff__STATE_VARIABLE_RevDiffs_19);
        }
      }
    else
      {
        MR_Word mdb__diff__Path_16;
        MR_Word mdb__diff__V_27_27;

        {
          mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__diff__STATE_VARIABLE_RevPath_0_17, &mdb__diff__Path_16);
        }
        {
          mdb__diff__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__diff__V_27_27, 0) = ((MR_Box) (mdb__diff__Path_16));
          MR_hl_field(MR_mktag(0), mdb__diff__V_27_27, 1) = ((MR_Box) (mdb__diff__Univ1_6));
          MR_hl_field(MR_mktag(0), mdb__diff__V_27_27, 2) = ((MR_Box) (mdb__diff__Univ2_7));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mdb__diff__STATE_VARIABLE_RevDiffs_19 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__diff__V_27_27));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__diff__STATE_VARIABLE_RevDiffs_0_18));
        }
      }
  }
}

static void MR_CALL 
mdb__diff__report_diffs_6_p_0_1(
  MR_Box mdb__diff__closure_arg,
  MR_Box mdb__diff__wrapper_arg_1,
  MR_Box mdb__diff__wrapper_arg_2,
  MR_Box * mdb__diff__wrapper_arg_3,
  MR_Box mdb__diff__wrapper_arg_4,
  MR_Box * mdb__diff__wrapper_arg_5)
{
  {
    MR_Box mdb__diff__closure = mdb__diff__closure_arg;
    MR_Integer mdb__diff__conv0_STATE_VARIABLE_DiffNum_19;

    {
      mdb__diff__show_diff_5_p_0(((MR_Word) mdb__diff__wrapper_arg_1), ((MR_Integer) mdb__diff__wrapper_arg_2), &mdb__diff__conv0_STATE_VARIABLE_DiffNum_19);
    }
    *mdb__diff__wrapper_arg_3 = ((MR_Box) (mdb__diff__conv0_STATE_VARIABLE_DiffNum_19));
  }
}

void MR_CALL 
mdb__diff__report_diffs_6_p_0(
  MR_Integer mdb__diff__Drop_7,
  MR_Integer mdb__diff__Max_8,
  MR_Word mdb__diff__Univ1_9,
  MR_Word mdb__diff__Univ2_10)
{
  {
    MR_bool mdb__diff__succeeded;
    MR_Word mdb__diff__Type1_12;
    MR_Word mdb__diff__Type2_13;

    {
      mdb__diff__Type1_12 = mercury__univ__univ_type_1_f_0(mdb__diff__Univ1_9);
    }
    {
      mdb__diff__Type2_13 = mercury__univ__univ_type_1_f_0(mdb__diff__Univ2_10);
    }
    {
      mdb__diff__succeeded = mercury__type_desc____Unify____type_desc_0_0(mdb__diff__Type1_12, mdb__diff__Type2_13);
    }
    if (mdb__diff__succeeded)
      {
        MR_Word mdb__diff__TypeCtorInfo_59_59;
        MR_Word mdb__diff__RevDiffs_14;
        MR_Word mdb__diff__AllDiffs_15;
        MR_Integer mdb__diff__NumAllDiffs_16;
        MR_Word mdb__diff__Diffs_17;
        MR_Word mdb__diff__V_18_18;
        MR_Word mdb__diff__V_19_19;

        {
          mdb__diff__compute_diffs_5_p_0(mdb__diff__Univ1_9, mdb__diff__Univ2_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__diff__RevDiffs_14);
        }
        mdb__diff__TypeCtorInfo_59_59 = (MR_Word) &mdb__diff__mdb__diff__type_ctor_info_term_path_diff_0;
        {
          mercury__list__reverse_2_p_0(mdb__diff__TypeCtorInfo_59_59, mdb__diff__RevDiffs_14, &mdb__diff__AllDiffs_15);
        }
        {
          mercury__list__length_2_p_0(mdb__diff__TypeCtorInfo_59_59, mdb__diff__AllDiffs_15, &mdb__diff__NumAllDiffs_16);
        }
        {
          mdb__diff__succeeded = mercury__list__drop_3_p_0(mdb__diff__TypeCtorInfo_59_59, mdb__diff__Drop_7, mdb__diff__AllDiffs_15, &mdb__diff__Diffs_17);
        }
        if (mdb__diff__succeeded)
          {
            mdb__diff__succeeded = ((MR_tag((MR_Word) mdb__diff__Diffs_17)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__diff__succeeded)
              {
                mdb__diff__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__diff__Diffs_17, (MR_Integer) 0)));
                mdb__diff__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__diff__Diffs_17, (MR_Integer) 1)));
              }
          }
        if (mdb__diff__succeeded)
          {
            MR_Integer mdb__diff__FirstShown_20 = (mdb__diff__Drop_7 + (MR_Integer) 1);
            MR_Integer mdb__diff__LastShown_21;
            MR_Word mdb__diff__ShowDiffs_22;
            MR_Integer mdb__diff__V_29_29 = (mdb__diff__Drop_7 + mdb__diff__Max_8);
            MR_Integer mdb__diff__V_23_23;
            MR_Box mdb__diff__conv2_V_23_23;
            MR_Box mdb__diff__conv1_STATE_VARIABLE_IO_25;

            {
              mdb__diff__LastShown_21 = mercury__int__min_2_f_0(mdb__diff__V_29_29, mdb__diff__NumAllDiffs_16);
            }
            mdb__diff__succeeded = (mdb__diff__FirstShown_20 == mdb__diff__LastShown_21);
            if (mdb__diff__succeeded)
              {
                MR_String mdb__diff__V_70_70;
                MR_Word mdb__diff__V_76_76;
                MR_String mdb__diff__V_80_80;

                {
                  mercury__io__write_string_3_p_0((MR_String) "There are ");
                }
                mdb__diff__V_76_76 = (MR_Word) &mdb__diff_scalar_common_2[0];
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdb__diff__V_76_76, mdb__diff__NumAllDiffs_16, &mdb__diff__V_70_70);
                }
                {
                  mercury__io__write_string_3_p_0(mdb__diff__V_70_70);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) " diffs, showing diff ");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdb__diff__V_76_76, mdb__diff__FirstShown_20, &mdb__diff__V_80_80);
                }
                {
                  mercury__io__write_string_3_p_0(mdb__diff__V_80_80);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ":\n");
                }
              }
            else
              {
                MR_String mdb__diff__V_91_91;
                MR_Word mdb__diff__V_97_97;
                MR_String mdb__diff__V_101_101;
                MR_String mdb__diff__V_111_111;

                {
                  mercury__io__write_string_3_p_0((MR_String) "There are ");
                }
                mdb__diff__V_97_97 = (MR_Word) &mdb__diff_scalar_common_2[0];
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdb__diff__V_97_97, mdb__diff__NumAllDiffs_16, &mdb__diff__V_91_91);
                }
                {
                  mercury__io__write_string_3_p_0(mdb__diff__V_91_91);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) " diffs, showing diffs ");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdb__diff__V_97_97, mdb__diff__FirstShown_20, &mdb__diff__V_101_101);
                }
                {
                  mercury__io__write_string_3_p_0(mdb__diff__V_101_101);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "-");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdb__diff__V_97_97, mdb__diff__LastShown_21, &mdb__diff__V_111_111);
                }
                {
                  mercury__io__write_string_3_p_0(mdb__diff__V_111_111);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ":\n");
                }
              }
            {
              mercury__list__take_upto_3_p_0(mdb__diff__TypeCtorInfo_59_59, mdb__diff__Max_8, mdb__diff__Diffs_17, &mdb__diff__ShowDiffs_22);
            }
            {
              mercury__list__foldl2_6_p_11(mdb__diff__TypeCtorInfo_59_59, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &mdb__diff_scalar_common_4[0], mdb__diff__ShowDiffs_22, ((MR_Box) (mdb__diff__Drop_7)), &mdb__diff__conv2_V_23_23, ((MR_Box) ((MR_Integer) 0)), &mdb__diff__conv1_STATE_VARIABLE_IO_25);
            }
            mdb__diff__V_23_23 = ((MR_Integer) mdb__diff__conv2_V_23_23);
          }
        else
          {
            mdb__diff__succeeded = (mdb__diff__NumAllDiffs_16 == (MR_Integer) 0);
            if (mdb__diff__succeeded)
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "There are no diffs.\n");
                }
              }
            else
              {
                mdb__diff__succeeded = (mdb__diff__NumAllDiffs_16 == (MR_Integer) 1);
                if (mdb__diff__succeeded)
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "There is only one diff.\n");
                    }
                  }
                else
                  {
                    MR_String mdb__diff__V_122_122;

                    {
                      mercury__io__write_string_3_p_0((MR_String) "There are only ");
                    }
                    {
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &mdb__diff_scalar_common_2[0], mdb__diff__NumAllDiffs_16, &mdb__diff__V_122_122);
                    }
                    {
                      mercury__io__write_string_3_p_0(mdb__diff__V_122_122);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) " diffs.\n");
                    }
                  }
              }
          }
      }
    else
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "The two values are of different types.\n");
        }
      }
  }
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
