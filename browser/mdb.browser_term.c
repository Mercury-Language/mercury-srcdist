/*
** Automatically generated from `browser_term.m'
** by the Mercury compiler,
** version DEV
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


/* :- module mdb.browser_term. */
/* :- implementation. */

/*
INIT mercury__mdb__browser_term__init
ENDINIT
*/

#include "mdb.browser_term.mih"
#include "mdb.browser_term.mh"


#include "mdb.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "univ.mih"




static const MR_PseudoTypeInfo mdb__browser_term__mdb__browser_term__field_types_browser_term_0_0[1];

static const MR_DuFunctorDesc mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_0;

static const MR_FA_TypeInfo_Struct1 mdb__browser_term__list__ti_list_1univ__type_ctor_info_univ_0;

static const MR_FA_TypeInfo_Struct1 mdb__browser_term__maybe__ti_maybe_1univ__type_ctor_info_univ_0;

static const MR_PseudoTypeInfo mdb__browser_term__mdb__browser_term__field_types_browser_term_0_1[3];

static const MR_DuFunctorDesc mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_1;

static const MR_DuFunctorDescPtr mdb__browser_term__mdb__browser_term__du_stag_ordered_browser_term_0_0[1];

static const MR_DuFunctorDescPtr mdb__browser_term__mdb__browser_term__du_stag_ordered_browser_term_0_1[1];

static const MR_DuPtagLayout mdb__browser_term__mdb__browser_term__du_ptag_ordered_browser_term_0[2];

static const MR_DuFunctorDescPtr mdb__browser_term__mdb__browser_term__du_name_ordered_browser_term_0[2];

static const MR_Integer mdb__browser_term__mdb__browser_term__functor_number_map_browser_term_0[2];

static MR_bool MR_CALL 
mdb__browser_term____Unify____browser_term_0_0_10001(
  MR_Box mdb__browser_term__wrapper_arg_1,
  MR_Box mdb__browser_term__wrapper_arg_2);

static void MR_CALL 
mdb__browser_term____Compare____browser_term_0_0_10001(
  MR_Box * mdb__browser_term__wrapper_arg_1,
  MR_Box mdb__browser_term__wrapper_arg_2,
  MR_Box mdb__browser_term__wrapper_arg_3);


static /* final */ const MR_Box mdb__browser_term_scalar_common_1[2][2];




static /* final */ const MR_Box mdb__browser_term_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};



#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.browser_term.mh"

#line 73 "browser_term.m"
MR_Word 
ML_BROWSE_plain_term_to_browser_term(
  MR_Word mdb__browser_term__TypeInfo_for_T_5,
  MR_Word mdb__browser_term__Term_3)
#line 73 "browser_term.m"
{
#line 73 "browser_term.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__browser_term__plain_term_to_browser_term_1_f_0((MR_Word) mdb__browser_term__TypeInfo_for_T_5, (MR_Box) mdb__browser_term__Term_3);
	return ret_value;
}

#line 75 "browser_term.m"
MR_Word 
ML_BROWSE_univ_to_browser_term(
  MR_Word mdb__browser_term__Univ_3)
#line 75 "browser_term.m"
{
#line 75 "browser_term.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__browser_term__univ_to_browser_term_1_f_0((MR_Word) mdb__browser_term__Univ_3);
	return ret_value;
}

#line 77 "browser_term.m"
MR_Word 
ML_BROWSE_synthetic_term_to_browser_term(
  MR_String mdb__browser_term__FunctorString_5,
  MR_Word mdb__browser_term__Args_6,
  MR_Word mdb__browser_term__IsFunc_7)
#line 77 "browser_term.m"
{
#line 77 "browser_term.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__browser_term__synthetic_term_to_browser_term_3_f_0((MR_String) mdb__browser_term__FunctorString_5, (MR_Word) mdb__browser_term__Args_6, (MR_Word) mdb__browser_term__IsFunc_7);
	return ret_value;
}


static const MR_PseudoTypeInfo mdb__browser_term__mdb__browser_term__field_types_browser_term_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_0 = {
  (MR_String) "plain_term",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__browser_term__mdb__browser_term__field_types_browser_term_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mdb__browser_term__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__browser_term__maybe__ti_maybe_1univ__type_ctor_info_univ_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

static const MR_PseudoTypeInfo mdb__browser_term__mdb__browser_term__field_types_browser_term_0_1[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__browser_term__list__ti_list_1univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mdb__browser_term__maybe__ti_maybe_1univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_1 = {
  (MR_String) "synthetic_term",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__browser_term__mdb__browser_term__field_types_browser_term_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__browser_term__mdb__browser_term__du_stag_ordered_browser_term_0_0[1] = {
  &mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_0
};

static const MR_DuFunctorDescPtr mdb__browser_term__mdb__browser_term__du_stag_ordered_browser_term_0_1[1] = {
  &mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_1
};

static const MR_DuPtagLayout mdb__browser_term__mdb__browser_term__du_ptag_ordered_browser_term_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_term__mdb__browser_term__du_stag_ordered_browser_term_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_term__mdb__browser_term__du_stag_ordered_browser_term_0_1
  }
};

static const MR_DuFunctorDescPtr mdb__browser_term__mdb__browser_term__du_name_ordered_browser_term_0[2] = {
  &mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_0,
  &mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_1
};

static const MR_Integer mdb__browser_term__mdb__browser_term__functor_number_map_browser_term_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__browser_term__mdb__browser_term__type_ctor_info_browser_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_term____Unify____browser_term_0_0_10001)),
  ((MR_Box) (mdb__browser_term____Compare____browser_term_0_0_10001)),
  (MR_String) "mdb.browser_term",
  (MR_String) "browser_term",
  {     mdb__browser_term__mdb__browser_term__du_name_ordered_browser_term_0 },
  {     mdb__browser_term__mdb__browser_term__du_ptag_ordered_browser_term_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__browser_term__mdb__browser_term__functor_number_map_browser_term_0
};

static MR_bool MR_CALL 
mdb__browser_term____Unify____browser_term_0_0_10001(
  MR_Box mdb__browser_term__wrapper_arg_1,
  MR_Box mdb__browser_term__wrapper_arg_2)
{
  {
    MR_bool mdb__browser_term__succeeded;

    {
      mdb__browser_term__succeeded = mdb__browser_term____Unify____browser_term_0_0(((MR_Word) mdb__browser_term__wrapper_arg_1), ((MR_Word) mdb__browser_term__wrapper_arg_2));
    }
    return mdb__browser_term__succeeded;
  }
}

static void MR_CALL 
mdb__browser_term____Compare____browser_term_0_0_10001(
  MR_Box * mdb__browser_term__wrapper_arg_1,
  MR_Box mdb__browser_term__wrapper_arg_2,
  MR_Box mdb__browser_term__wrapper_arg_3)
{
  {
    MR_Word mdb__browser_term__conv0_HeadVar__1_1;

    {
      mdb__browser_term____Compare____browser_term_0_0(&mdb__browser_term__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_term__wrapper_arg_2), ((MR_Word) mdb__browser_term__wrapper_arg_3));
    }
    *mdb__browser_term__wrapper_arg_1 = ((MR_Box) (mdb__browser_term__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
mdb__browser_term____Compare____browser_term_0_0(
  MR_Word * mdb__browser_term__HeadVar__1_1,
  MR_Word mdb__browser_term__HeadVar__2_2,
  MR_Word mdb__browser_term__HeadVar__3_3)
{
  {
    MR_bool mdb__browser_term__succeeded;
    MR_Integer mdb__browser_term__CastX_22 = (MR_Integer) mdb__browser_term__HeadVar__2_2;
    MR_Integer mdb__browser_term__CastY_23 = (MR_Integer) mdb__browser_term__HeadVar__3_3;

    mdb__browser_term__succeeded = (mdb__browser_term__CastX_22 == mdb__browser_term__CastY_23);
    if (mdb__browser_term__succeeded)
      *mdb__browser_term__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mdb__browser_term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdb__browser_term__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_term__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mdb__browser_term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word mdb__browser_term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_term__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__univ____Compare____univ_0_0(mdb__browser_term__HeadVar__1_1, mdb__browser_term__V_28_28, mdb__browser_term__V_5_5);
            }
          }
        else
          *mdb__browser_term__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word mdb__browser_term__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__browser_term__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__2_2, (MR_Integer) 1)));
        MR_String mdb__browser_term__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mdb__browser_term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *mdb__browser_term__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_String mdb__browser_term__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mdb__browser_term__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mdb__browser_term__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__3_3, (MR_Integer) 2)));
            MR_Word mdb__browser_term__V_20_20;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__browser_term__V_20_20, mdb__browser_term__V_31_31, mdb__browser_term__V_17_17);
            }
            mdb__browser_term__succeeded = (mdb__browser_term__V_20_20 == (MR_Integer) 0);
            mdb__browser_term__succeeded = !(mdb__browser_term__succeeded);
            if (mdb__browser_term__succeeded)
              *mdb__browser_term__HeadVar__1_1 = mdb__browser_term__V_20_20;
            else
              {
                MR_Word mdb__browser_term__V_21_21;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_term_scalar_common_1[0], &mdb__browser_term__V_21_21, ((MR_Box) (mdb__browser_term__V_30_30)), ((MR_Box) (mdb__browser_term__V_18_18)));
                }
                mdb__browser_term__succeeded = (mdb__browser_term__V_21_21 == (MR_Integer) 0);
                mdb__browser_term__succeeded = !(mdb__browser_term__succeeded);
                if (mdb__browser_term__succeeded)
                  *mdb__browser_term__HeadVar__1_1 = mdb__browser_term__V_21_21;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_term_scalar_common_1[1], mdb__browser_term__HeadVar__1_1, ((MR_Box) (mdb__browser_term__V_29_29)), ((MR_Box) (mdb__browser_term__V_19_19)));
                    }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mdb__browser_term____Unify____browser_term_0_0(
  MR_Word mdb__browser_term__HeadVar__1_1,
  MR_Word mdb__browser_term__HeadVar__2_2)
{
  {
    MR_bool mdb__browser_term__succeeded;
    MR_Integer mdb__browser_term__CastX_11 = (MR_Integer) mdb__browser_term__HeadVar__1_1;
    MR_Integer mdb__browser_term__CastY_12 = (MR_Integer) mdb__browser_term__HeadVar__2_2;

    mdb__browser_term__succeeded = (mdb__browser_term__CastX_11 == mdb__browser_term__CastY_12);
    if (mdb__browser_term__succeeded)
      mdb__browser_term__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mdb__browser_term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdb__browser_term__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_term__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__browser_term__V_4_4;

        mdb__browser_term__succeeded = ((MR_tag((MR_Word) mdb__browser_term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mdb__browser_term__succeeded)
          {
            mdb__browser_term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_term__HeadVar__2_2, (MR_Integer) 0)));
            {
              mdb__browser_term__succeeded = mercury__univ____Unify____univ_0_0(mdb__browser_term__V_3_3, mdb__browser_term__V_4_4);
            }
          }
      }
    else
      {
        MR_Word mdb__browser_term__TypeInfo_14_14;
        MR_Word mdb__browser_term__TypeInfo_15_15;
        MR_String mdb__browser_term__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__browser_term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__browser_term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__1_1, (MR_Integer) 2)));
        MR_String mdb__browser_term__V_8_8;
        MR_Word mdb__browser_term__V_9_9;
        MR_Word mdb__browser_term__V_10_10;

        mdb__browser_term__succeeded = ((MR_tag((MR_Word) mdb__browser_term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__browser_term__succeeded)
          {
            mdb__browser_term__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__2_2, (MR_Integer) 0)));
            mdb__browser_term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__2_2, (MR_Integer) 1)));
            mdb__browser_term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__2_2, (MR_Integer) 2)));
            mdb__browser_term__succeeded = (strcmp(mdb__browser_term__V_5_5, mdb__browser_term__V_8_8) == 0);
            if (mdb__browser_term__succeeded)
              {
                mdb__browser_term__TypeInfo_14_14 = (MR_Word) &mdb__browser_term_scalar_common_1[0];
                {
                  mdb__browser_term__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_term__TypeInfo_14_14, ((MR_Box) (mdb__browser_term__V_6_6)), ((MR_Box) (mdb__browser_term__V_9_9)));
                }
                if (mdb__browser_term__succeeded)
                  {
                    mdb__browser_term__TypeInfo_15_15 = (MR_Word) &mdb__browser_term_scalar_common_1[1];
                    {
                      mdb__browser_term__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_term__TypeInfo_15_15, ((MR_Box) (mdb__browser_term__V_7_7)), ((MR_Box) (mdb__browser_term__V_10_10)));
                    }
                  }
              }
          }
      }
    return mdb__browser_term__succeeded;
  }
}

MR_Word MR_CALL 
mdb__browser_term__synthetic_term_to_browser_term_3_f_0(
  MR_String mdb__browser_term__FunctorString_5,
  MR_Word mdb__browser_term__Args_6,
  MR_Word mdb__browser_term__IsFunc_7)
{
  {
    MR_bool mdb__browser_term__succeeded;
    MR_Word mdb__browser_term__BrowserTerm_8;

    switch (mdb__browser_term__IsFunc_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mdb__browser_term__BrowserTerm_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdb__browser_term__BrowserTerm_8, 0) = ((MR_Box) (mdb__browser_term__FunctorString_5));
            MR_hl_field(MR_mktag(1), mdb__browser_term__BrowserTerm_8, 1) = ((MR_Box) (mdb__browser_term__Args_6));
            MR_hl_field(MR_mktag(1), mdb__browser_term__BrowserTerm_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__browser_term__FuncArgs_9;
          MR_Word mdb__browser_term__Return_10;
          MR_Word mdb__browser_term__V_11_11;
          MR_Box mdb__browser_term__conv0_Return_10;

          {
            mercury__list__det_split_last_3_p_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__browser_term__Args_6, &mdb__browser_term__FuncArgs_9, &mdb__browser_term__conv0_Return_10);
          }
          mdb__browser_term__Return_10 = ((MR_Word) mdb__browser_term__conv0_Return_10);
          {
            mdb__browser_term__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdb__browser_term__V_11_11, 0) = ((MR_Box) (mdb__browser_term__Return_10));
          }
          {
            mdb__browser_term__BrowserTerm_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdb__browser_term__BrowserTerm_8, 0) = ((MR_Box) (mdb__browser_term__FunctorString_5));
            MR_hl_field(MR_mktag(1), mdb__browser_term__BrowserTerm_8, 1) = ((MR_Box) (mdb__browser_term__FuncArgs_9));
            MR_hl_field(MR_mktag(1), mdb__browser_term__BrowserTerm_8, 2) = ((MR_Box) (mdb__browser_term__V_11_11));
          }
        }
        break;
    }
    return mdb__browser_term__BrowserTerm_8;
  }
}

MR_Word MR_CALL 
mdb__browser_term__plain_term_to_browser_term_1_f_0(
  MR_Word mdb__browser_term__TypeInfo_for_T_5,
  MR_Box mdb__browser_term__Term_3)
{
  {
    MR_bool mdb__browser_term__succeeded;
    MR_Word mdb__browser_term__HeadVar__2_2;
    MR_Word mdb__browser_term__V_4_4;

    {
      mdb__browser_term__V_4_4 = mercury__univ__univ_1_f_0(mdb__browser_term__TypeInfo_for_T_5, mdb__browser_term__Term_3);
    }
    {
      mdb__browser_term__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__browser_term__HeadVar__2_2, 0) = ((MR_Box) (mdb__browser_term__V_4_4));
    }
    return mdb__browser_term__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mdb__browser_term__univ_to_browser_term_1_f_0(
  MR_Word mdb__browser_term__Univ_3)
{
  {
    MR_bool mdb__browser_term__succeeded;
    MR_Word mdb__browser_term__HeadVar__2_2;

    {
      mdb__browser_term__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__browser_term__HeadVar__2_2, 0) = ((MR_Box) (mdb__browser_term__Univ_3));
    }
    return mdb__browser_term__HeadVar__2_2;
  }
}

void mercury__mdb__browser_term__init(void)
{
}

void mercury__mdb__browser_term__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__browser_term__mdb__browser_term__type_ctor_info_browser_term_0);
}

void mercury__mdb__browser_term__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__browser_term__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module mdb.browser_term. */
