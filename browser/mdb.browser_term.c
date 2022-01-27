/*
** Automatically generated from `browser_term.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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


#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
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




#line 65 "mdb.browser_term.c"
static const MR_PseudoTypeInfo mdb__browser_term__mdb__browser_term__field_types_browser_term_0_0[1];

#line 68 "mdb.browser_term.c"
static const MR_DuFunctorDesc mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_0;

#line 71 "mdb.browser_term.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_term__list__ti_list_1univ__type_ctor_info_univ_0;

#line 74 "mdb.browser_term.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_term__maybe__ti_maybe_1univ__type_ctor_info_univ_0;

#line 77 "mdb.browser_term.c"
static const MR_PseudoTypeInfo mdb__browser_term__mdb__browser_term__field_types_browser_term_0_1[3];

#line 80 "mdb.browser_term.c"
static const MR_DuFunctorDesc mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_1;

#line 83 "mdb.browser_term.c"
static const MR_DuFunctorDescPtr mdb__browser_term__mdb__browser_term__du_stag_ordered_browser_term_0_0[1];

#line 86 "mdb.browser_term.c"
static const MR_DuFunctorDescPtr mdb__browser_term__mdb__browser_term__du_stag_ordered_browser_term_0_1[1];

#line 89 "mdb.browser_term.c"
static const MR_DuPtagLayout mdb__browser_term__mdb__browser_term__du_ptag_ordered_browser_term_0[2];

#line 92 "mdb.browser_term.c"
static const MR_DuFunctorDescPtr mdb__browser_term__mdb__browser_term__du_name_ordered_browser_term_0[2];

#line 95 "mdb.browser_term.c"
static const MR_Integer mdb__browser_term__mdb__browser_term__functor_number_map_browser_term_0[2];

#line 98 "mdb.browser_term.c"
static MR_bool MR_CALL 
mdb__browser_term____Unify____browser_term_0_0_10001(
#line 101 "mdb.browser_term.c"
  MR_Box mdb__browser_term__wrapper_arg_1,
#line 103 "mdb.browser_term.c"
  MR_Box mdb__browser_term__wrapper_arg_2);

#line 106 "mdb.browser_term.c"
static void MR_CALL 
mdb__browser_term____Compare____browser_term_0_0_10001(
#line 109 "mdb.browser_term.c"
  MR_Box * mdb__browser_term__wrapper_arg_1,
#line 111 "mdb.browser_term.c"
  MR_Box mdb__browser_term__wrapper_arg_2,
#line 113 "mdb.browser_term.c"
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



#include "mdb.browser_term.mh"
#include "mdb.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"

#line 72 "browser_term.m"
MR_Word 
ML_BROWSE_synthetic_term_to_browser_term(
#line 72 "browser_term.m"
  MR_String mdb__browser_term__FunctorString_5,
#line 72 "browser_term.m"
  MR_Word mdb__browser_term__Args_6,
#line 72 "browser_term.m"
  MR_Word mdb__browser_term__IsFunc_7)
#line 72 "browser_term.m"
{
#line 72 "browser_term.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__browser_term__synthetic_term_to_browser_term_3_f_0((MR_String) mdb__browser_term__FunctorString_5, (MR_Word) mdb__browser_term__Args_6, (MR_Word) mdb__browser_term__IsFunc_7);
	return ret_value;
}

#line 70 "browser_term.m"
MR_Word 
ML_BROWSE_univ_to_browser_term(
#line 70 "browser_term.m"
  MR_Word mdb__browser_term__Univ_3)
#line 70 "browser_term.m"
{
#line 70 "browser_term.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__browser_term__univ_to_browser_term_1_f_0((MR_Word) mdb__browser_term__Univ_3);
	return ret_value;
}

#line 68 "browser_term.m"
MR_Word 
ML_BROWSE_plain_term_to_browser_term(
#line 68 "browser_term.m"
  MR_Word mdb__browser_term__TypeInfo_for_T_5,
#line 68 "browser_term.m"
  MR_Word mdb__browser_term__Term_3)
#line 68 "browser_term.m"
{
#line 68 "browser_term.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__browser_term__plain_term_to_browser_term_1_f_0((MR_Word) mdb__browser_term__TypeInfo_for_T_5, (MR_Box) mdb__browser_term__Term_3);
	return ret_value;
}


#line 194 "mdb.browser_term.c"
static const MR_PseudoTypeInfo mdb__browser_term__mdb__browser_term__field_types_browser_term_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

#line 199 "mdb.browser_term.c"
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
  NULL
};

#line 214 "mdb.browser_term.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_term__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

#line 222 "mdb.browser_term.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_term__maybe__ti_maybe_1univ__type_ctor_info_univ_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

#line 230 "mdb.browser_term.c"
static const MR_PseudoTypeInfo mdb__browser_term__mdb__browser_term__field_types_browser_term_0_1[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__browser_term__list__ti_list_1univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mdb__browser_term__maybe__ti_maybe_1univ__type_ctor_info_univ_0
};

#line 237 "mdb.browser_term.c"
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
  NULL
};

#line 252 "mdb.browser_term.c"
static const MR_DuFunctorDescPtr mdb__browser_term__mdb__browser_term__du_stag_ordered_browser_term_0_0[1] = {
  &mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_0
};

#line 257 "mdb.browser_term.c"
static const MR_DuFunctorDescPtr mdb__browser_term__mdb__browser_term__du_stag_ordered_browser_term_0_1[1] = {
  &mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_1
};

#line 262 "mdb.browser_term.c"
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

#line 276 "mdb.browser_term.c"
static const MR_DuFunctorDescPtr mdb__browser_term__mdb__browser_term__du_name_ordered_browser_term_0[2] = {
  &mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_0,
  &mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_1
};

#line 282 "mdb.browser_term.c"
static const MR_Integer mdb__browser_term__mdb__browser_term__functor_number_map_browser_term_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 288 "mdb.browser_term.c"
const MR_TypeCtorInfo_Struct mdb__browser_term__mdb__browser_term__type_ctor_info_browser_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_term____Unify____browser_term_0_0_10001)),
  ((MR_Box) (mdb__browser_term____Compare____browser_term_0_0_10001)),
  (MR_String) "mdb.browser_term",
  (MR_String) "browser_term",
  {
    mdb__browser_term__mdb__browser_term__du_name_ordered_browser_term_0
  },
  {
    mdb__browser_term__mdb__browser_term__du_ptag_ordered_browser_term_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__browser_term__mdb__browser_term__functor_number_map_browser_term_0
};

#line 309 "mdb.browser_term.c"
static MR_bool MR_CALL 
mdb__browser_term____Unify____browser_term_0_0_10001(
#line 312 "mdb.browser_term.c"
  MR_Box mdb__browser_term__wrapper_arg_1,
#line 314 "mdb.browser_term.c"
  MR_Box mdb__browser_term__wrapper_arg_2)
#line 316 "mdb.browser_term.c"
{
#line 318 "mdb.browser_term.c"
  {
#line 320 "mdb.browser_term.c"
    MR_bool mdb__browser_term__succeeded;

#line 323 "mdb.browser_term.c"
    {
#line 325 "mdb.browser_term.c"
      mdb__browser_term__succeeded = mdb__browser_term____Unify____browser_term_0_0(((MR_Word) mdb__browser_term__wrapper_arg_1), ((MR_Word) mdb__browser_term__wrapper_arg_2));
    }
#line 328 "mdb.browser_term.c"
    return mdb__browser_term__succeeded;
#line 330 "mdb.browser_term.c"
  }
#line 332 "mdb.browser_term.c"
}

#line 335 "mdb.browser_term.c"
static void MR_CALL 
mdb__browser_term____Compare____browser_term_0_0_10001(
#line 338 "mdb.browser_term.c"
  MR_Box * mdb__browser_term__wrapper_arg_1,
#line 340 "mdb.browser_term.c"
  MR_Box mdb__browser_term__wrapper_arg_2,
#line 342 "mdb.browser_term.c"
  MR_Box mdb__browser_term__wrapper_arg_3)
#line 344 "mdb.browser_term.c"
{
#line 346 "mdb.browser_term.c"
  {
#line 348 "mdb.browser_term.c"
    MR_Word mdb__browser_term__conv0_HeadVar__1_1;

#line 351 "mdb.browser_term.c"
    {
#line 353 "mdb.browser_term.c"
      mdb__browser_term____Compare____browser_term_0_0(&mdb__browser_term__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_term__wrapper_arg_2), ((MR_Word) mdb__browser_term__wrapper_arg_3));
    }
#line 356 "mdb.browser_term.c"
    *mdb__browser_term__wrapper_arg_1 = ((MR_Box) (mdb__browser_term__conv0_HeadVar__1_1));
#line 358 "mdb.browser_term.c"
  }
#line 360 "mdb.browser_term.c"
}

#line 27 "browser_term.m"
void MR_CALL 
mdb__browser_term____Compare____browser_term_0_0(
#line 27 "browser_term.m"
  MR_Word * mdb__browser_term__HeadVar__1_1,
#line 27 "browser_term.m"
  MR_Word mdb__browser_term__HeadVar__2_2,
#line 27 "browser_term.m"
  MR_Word mdb__browser_term__HeadVar__3_3)
#line 27 "browser_term.m"
{
#line 27 "browser_term.m"
  {
#line 27 "browser_term.m"
    MR_bool mdb__browser_term__succeeded;
#line 27 "browser_term.m"
    MR_Integer mdb__browser_term__CastX_22 = (MR_Integer) mdb__browser_term__HeadVar__2_2;
#line 27 "browser_term.m"
    MR_Integer mdb__browser_term__CastY_23 = (MR_Integer) mdb__browser_term__HeadVar__3_3;

#line 27 "browser_term.m"
    mdb__browser_term__succeeded = (mdb__browser_term__CastX_22 == mdb__browser_term__CastY_23);
#line 27 "browser_term.m"
    if (mdb__browser_term__succeeded)
#line 387 "mdb.browser_term.c"
      *mdb__browser_term__HeadVar__1_1 = (MR_Integer) 0;
#line 27 "browser_term.m"
    else
#line 27 "browser_term.m"
      if (((MR_tag((MR_Word) mdb__browser_term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 27 "browser_term.m"
        {
#line 27 "browser_term.m"
          MR_Word mdb__browser_term__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_term__HeadVar__2_2, (MR_Integer) 0)));

#line 27 "browser_term.m"
          if (((MR_tag((MR_Word) mdb__browser_term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 27 "browser_term.m"
            {
#line 27 "browser_term.m"
              MR_Word mdb__browser_term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_term__HeadVar__3_3, (MR_Integer) 0)));

#line 27 "browser_term.m"
              {
#line 27 "browser_term.m"
                mercury__univ____Compare____univ_0_0(mdb__browser_term__HeadVar__1_1, mdb__browser_term__V_28_28, mdb__browser_term__V_5_5);
#line 27 "browser_term.m"
                return;
              }
#line 27 "browser_term.m"
            }
#line 27 "browser_term.m"
          else
#line 416 "mdb.browser_term.c"
            *mdb__browser_term__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "browser_term.m"
        }
#line 27 "browser_term.m"
      else
#line 27 "browser_term.m"
        {
#line 27 "browser_term.m"
          MR_Word mdb__browser_term__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__2_2, (MR_Integer) 2)));
#line 27 "browser_term.m"
          MR_Word mdb__browser_term__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__2_2, (MR_Integer) 1)));
#line 27 "browser_term.m"
          MR_String mdb__browser_term__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__2_2, (MR_Integer) 0)));

#line 27 "browser_term.m"
          if (((MR_tag((MR_Word) mdb__browser_term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 433 "mdb.browser_term.c"
            *mdb__browser_term__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "browser_term.m"
          else
#line 27 "browser_term.m"
            {
#line 27 "browser_term.m"
              MR_String mdb__browser_term__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__3_3, (MR_Integer) 0)));
#line 27 "browser_term.m"
              MR_Word mdb__browser_term__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__3_3, (MR_Integer) 1)));
#line 27 "browser_term.m"
              MR_Word mdb__browser_term__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__3_3, (MR_Integer) 2)));
#line 27 "browser_term.m"
              MR_Word mdb__browser_term__V_20_20;

#line 27 "browser_term.m"
              {
#line 27 "browser_term.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__browser_term__V_20_20, mdb__browser_term__V_31_31, mdb__browser_term__V_17_17);
              }
#line 453 "mdb.browser_term.c"
              mdb__browser_term__succeeded = (mdb__browser_term__V_20_20 == (MR_Integer) 0);
#line 27 "browser_term.m"
              mdb__browser_term__succeeded = !(mdb__browser_term__succeeded);
#line 27 "browser_term.m"
              if (mdb__browser_term__succeeded)
#line 27 "browser_term.m"
                *mdb__browser_term__HeadVar__1_1 = mdb__browser_term__V_20_20;
#line 27 "browser_term.m"
              else
#line 27 "browser_term.m"
                {
#line 27 "browser_term.m"
                  MR_Word mdb__browser_term__V_21_21;

#line 27 "browser_term.m"
                  {
#line 27 "browser_term.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_term_scalar_common_1[0], &mdb__browser_term__V_21_21, ((MR_Box) (mdb__browser_term__V_30_30)), ((MR_Box) (mdb__browser_term__V_18_18)));
                  }
#line 473 "mdb.browser_term.c"
                  mdb__browser_term__succeeded = (mdb__browser_term__V_21_21 == (MR_Integer) 0);
#line 27 "browser_term.m"
                  mdb__browser_term__succeeded = !(mdb__browser_term__succeeded);
#line 27 "browser_term.m"
                  if (mdb__browser_term__succeeded)
#line 27 "browser_term.m"
                    *mdb__browser_term__HeadVar__1_1 = mdb__browser_term__V_21_21;
#line 27 "browser_term.m"
                  else
#line 27 "browser_term.m"
                    {
#line 27 "browser_term.m"
                      {
#line 27 "browser_term.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_term_scalar_common_1[1], mdb__browser_term__HeadVar__1_1, ((MR_Box) (mdb__browser_term__V_29_29)), ((MR_Box) (mdb__browser_term__V_19_19)));
#line 27 "browser_term.m"
                        return;
                      }
#line 27 "browser_term.m"
                    }
#line 27 "browser_term.m"
                }
#line 27 "browser_term.m"
            }
#line 27 "browser_term.m"
        }
#line 27 "browser_term.m"
  }
#line 27 "browser_term.m"
}

#line 27 "browser_term.m"
MR_bool MR_CALL 
mdb__browser_term____Unify____browser_term_0_0(
#line 27 "browser_term.m"
  MR_Word mdb__browser_term__HeadVar__1_1,
#line 27 "browser_term.m"
  MR_Word mdb__browser_term__HeadVar__2_2)
#line 27 "browser_term.m"
{
#line 27 "browser_term.m"
  {
#line 27 "browser_term.m"
    MR_bool mdb__browser_term__succeeded;
#line 27 "browser_term.m"
    MR_Integer mdb__browser_term__CastX_11 = (MR_Integer) mdb__browser_term__HeadVar__1_1;
#line 27 "browser_term.m"
    MR_Integer mdb__browser_term__CastY_12 = (MR_Integer) mdb__browser_term__HeadVar__2_2;

#line 27 "browser_term.m"
    mdb__browser_term__succeeded = (mdb__browser_term__CastX_11 == mdb__browser_term__CastY_12);
#line 27 "browser_term.m"
    if (mdb__browser_term__succeeded)
#line 27 "browser_term.m"
      mdb__browser_term__succeeded = MR_TRUE;
#line 27 "browser_term.m"
    else
#line 27 "browser_term.m"
      if (((MR_tag((MR_Word) mdb__browser_term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 27 "browser_term.m"
        {
#line 27 "browser_term.m"
          MR_Word mdb__browser_term__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_term__HeadVar__1_1, (MR_Integer) 0)));
#line 27 "browser_term.m"
          MR_Word mdb__browser_term__V_4_4;

#line 27 "browser_term.m"
          mdb__browser_term__succeeded = ((MR_tag((MR_Word) mdb__browser_term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 27 "browser_term.m"
          if (mdb__browser_term__succeeded)
#line 27 "browser_term.m"
            {
#line 27 "browser_term.m"
              mdb__browser_term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_term__HeadVar__2_2, (MR_Integer) 0)));
#line 548 "mdb.browser_term.c"
              {
#line 550 "mdb.browser_term.c"
                return mdb__browser_term__succeeded = mercury__univ____Unify____univ_0_0(mdb__browser_term__V_3_3, mdb__browser_term__V_4_4);
              }
#line 27 "browser_term.m"
            }
#line 27 "browser_term.m"
        }
#line 27 "browser_term.m"
      else
#line 27 "browser_term.m"
        {
#line 27 "browser_term.m"
          MR_Word mdb__browser_term__TypeInfo_14_14;
#line 27 "browser_term.m"
          MR_Word mdb__browser_term__TypeInfo_15_15;
#line 27 "browser_term.m"
          MR_String mdb__browser_term__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__1_1, (MR_Integer) 0)));
#line 27 "browser_term.m"
          MR_Word mdb__browser_term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__1_1, (MR_Integer) 1)));
#line 27 "browser_term.m"
          MR_Word mdb__browser_term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__1_1, (MR_Integer) 2)));
#line 27 "browser_term.m"
          MR_String mdb__browser_term__V_8_8;
#line 27 "browser_term.m"
          MR_Word mdb__browser_term__V_9_9;
#line 27 "browser_term.m"
          MR_Word mdb__browser_term__V_10_10;

#line 27 "browser_term.m"
          mdb__browser_term__succeeded = ((MR_tag((MR_Word) mdb__browser_term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 27 "browser_term.m"
          if (mdb__browser_term__succeeded)
#line 27 "browser_term.m"
            {
#line 27 "browser_term.m"
              mdb__browser_term__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__2_2, (MR_Integer) 0)));
#line 27 "browser_term.m"
              mdb__browser_term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__2_2, (MR_Integer) 1)));
#line 27 "browser_term.m"
              mdb__browser_term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_term__HeadVar__2_2, (MR_Integer) 2)));
#line 590 "mdb.browser_term.c"
              mdb__browser_term__succeeded = (strcmp(mdb__browser_term__V_5_5, mdb__browser_term__V_8_8) == 0);
#line 27 "browser_term.m"
              if (mdb__browser_term__succeeded)
#line 27 "browser_term.m"
                {
#line 596 "mdb.browser_term.c"
                  mdb__browser_term__TypeInfo_14_14 = (MR_Word) &mdb__browser_term_scalar_common_1[0];
#line 598 "mdb.browser_term.c"
                  {
#line 600 "mdb.browser_term.c"
                    mdb__browser_term__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_term__TypeInfo_14_14, ((MR_Box) (mdb__browser_term__V_6_6)), ((MR_Box) (mdb__browser_term__V_9_9)));
                  }
#line 27 "browser_term.m"
                  if (mdb__browser_term__succeeded)
#line 27 "browser_term.m"
                    {
#line 607 "mdb.browser_term.c"
                      mdb__browser_term__TypeInfo_15_15 = (MR_Word) &mdb__browser_term_scalar_common_1[1];
#line 609 "mdb.browser_term.c"
                      {
#line 611 "mdb.browser_term.c"
                        return mdb__browser_term__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_term__TypeInfo_15_15, ((MR_Box) (mdb__browser_term__V_7_7)), ((MR_Box) (mdb__browser_term__V_10_10)));
                      }
#line 27 "browser_term.m"
                    }
#line 27 "browser_term.m"
                }
#line 27 "browser_term.m"
            }
#line 27 "browser_term.m"
        }
#line 27 "browser_term.m"
    return mdb__browser_term__succeeded;
#line 27 "browser_term.m"
  }
#line 27 "browser_term.m"
}

#line 60 "browser_term.m"
MR_Word MR_CALL 
mdb__browser_term__synthetic_term_to_browser_term_3_f_0(
#line 60 "browser_term.m"
  MR_String mdb__browser_term__FunctorString_5,
#line 60 "browser_term.m"
  MR_Word mdb__browser_term__Args_6,
#line 60 "browser_term.m"
  MR_Word mdb__browser_term__IsFunc_7)
#line 60 "browser_term.m"
{
#line 81 "browser_term.m"
  {
#line 81 "browser_term.m"
    MR_bool mdb__browser_term__succeeded;
#line 81 "browser_term.m"
    MR_Word mdb__browser_term__BrowserTerm_8;

#line 81 "browser_term.m"
    if ((mdb__browser_term__IsFunc_7 == (MR_Integer) 0))
#line 81 "browser_term.m"
      {
#line 82 "browser_term.m"
        {
#line 82 "browser_term.m"
          mdb__browser_term__BrowserTerm_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 82 "browser_term.m"
          MR_hl_field(MR_mktag(1), mdb__browser_term__BrowserTerm_8, 0) = ((MR_Box) (mdb__browser_term__FunctorString_5));
#line 82 "browser_term.m"
          MR_hl_field(MR_mktag(1), mdb__browser_term__BrowserTerm_8, 1) = ((MR_Box) (mdb__browser_term__Args_6));
#line 82 "browser_term.m"
          MR_hl_field(MR_mktag(1), mdb__browser_term__BrowserTerm_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 82 "browser_term.m"
        }
#line 81 "browser_term.m"
      }
#line 81 "browser_term.m"
    else
#line 84 "browser_term.m"
      {
#line 84 "browser_term.m"
        MR_Word mdb__browser_term__FuncArgs_9;
#line 84 "browser_term.m"
        MR_Word mdb__browser_term__Return_10;
#line 84 "browser_term.m"
        MR_Word mdb__browser_term__V_11_11;
#line 85 "browser_term.m"
        MR_Box mdb__browser_term__conv0_Return_10;

#line 85 "browser_term.m"
        {
#line 85 "browser_term.m"
          mercury__list__det_split_last_3_p_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__browser_term__Args_6, &mdb__browser_term__FuncArgs_9, &mdb__browser_term__conv0_Return_10);
        }
#line 85 "browser_term.m"
        mdb__browser_term__Return_10 = ((MR_Word) mdb__browser_term__conv0_Return_10);
#line 86 "browser_term.m"
        {
#line 86 "browser_term.m"
          mdb__browser_term__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 86 "browser_term.m"
          MR_hl_field(MR_mktag(1), mdb__browser_term__V_11_11, 0) = ((MR_Box) (mdb__browser_term__Return_10));
#line 86 "browser_term.m"
        }
#line 86 "browser_term.m"
        {
#line 86 "browser_term.m"
          mdb__browser_term__BrowserTerm_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 86 "browser_term.m"
          MR_hl_field(MR_mktag(1), mdb__browser_term__BrowserTerm_8, 0) = ((MR_Box) (mdb__browser_term__FunctorString_5));
#line 86 "browser_term.m"
          MR_hl_field(MR_mktag(1), mdb__browser_term__BrowserTerm_8, 1) = ((MR_Box) (mdb__browser_term__FuncArgs_9));
#line 86 "browser_term.m"
          MR_hl_field(MR_mktag(1), mdb__browser_term__BrowserTerm_8, 2) = ((MR_Box) (mdb__browser_term__V_11_11));
#line 86 "browser_term.m"
        }
#line 84 "browser_term.m"
      }
#line 81 "browser_term.m"
    return mdb__browser_term__BrowserTerm_8;
#line 81 "browser_term.m"
  }
#line 60 "browser_term.m"
}

#line 49 "browser_term.m"
MR_Word MR_CALL 
mdb__browser_term__plain_term_to_browser_term_1_f_0(
#line 49 "browser_term.m"
  MR_Word mdb__browser_term__TypeInfo_for_T_5,
#line 49 "browser_term.m"
  MR_Box mdb__browser_term__Term_3)
#line 49 "browser_term.m"
{
#line 77 "browser_term.m"
  {
#line 77 "browser_term.m"
    MR_bool mdb__browser_term__succeeded;
#line 77 "browser_term.m"
    MR_Word mdb__browser_term__HeadVar__2_2;
#line 77 "browser_term.m"
    MR_Word mdb__browser_term__V_4_4;

#line 77 "browser_term.m"
    {
#line 77 "browser_term.m"
      mdb__browser_term__V_4_4 = mercury__univ__univ_1_f_0(mdb__browser_term__TypeInfo_for_T_5, mdb__browser_term__Term_3);
    }
#line 77 "browser_term.m"
    {
#line 77 "browser_term.m"
      mdb__browser_term__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 77 "browser_term.m"
      MR_hl_field(MR_mktag(0), mdb__browser_term__HeadVar__2_2, 0) = ((MR_Box) (mdb__browser_term__V_4_4));
#line 77 "browser_term.m"
    }
#line 77 "browser_term.m"
    return mdb__browser_term__HeadVar__2_2;
#line 77 "browser_term.m"
  }
#line 49 "browser_term.m"
}

#line 44 "browser_term.m"
MR_Word MR_CALL 
mdb__browser_term__univ_to_browser_term_1_f_0(
#line 44 "browser_term.m"
  MR_Word mdb__browser_term__Univ_3)
#line 44 "browser_term.m"
{
#line 75 "browser_term.m"
  {
#line 75 "browser_term.m"
    MR_bool mdb__browser_term__succeeded;
#line 75 "browser_term.m"
    MR_Word mdb__browser_term__HeadVar__2_2;

#line 75 "browser_term.m"
    {
#line 75 "browser_term.m"
      mdb__browser_term__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 75 "browser_term.m"
      MR_hl_field(MR_mktag(0), mdb__browser_term__HeadVar__2_2, 0) = ((MR_Box) (mdb__browser_term__Univ_3));
#line 75 "browser_term.m"
    }
#line 75 "browser_term.m"
    return mdb__browser_term__HeadVar__2_2;
#line 75 "browser_term.m"
  }
#line 44 "browser_term.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.browser_term. */
