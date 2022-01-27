/*
** Automatically generated from `frame.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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


/* :- module mdb.frame. */
/* :- implementation. */

/*
INIT mercury__mdb__frame__init
ENDINIT
*/

#include "mdb.frame.mih"


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
#include "mdb.util.mih"
#include "mdbcomp.prim_data.mih"




#line 68 "mdb.frame.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__frame__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

#line 71 "mdb.frame.c"
static const MR_FA_TypeInfo_Struct2 mdb__frame__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 74 "mdb.frame.c"
static const MR_FA_TypeInfo_Struct1 mdb__frame__list__ti_list_1builtin__type_ctor_info_string_0;

#line 77 "mdb.frame.c"
static MR_bool MR_CALL 
mdb__frame____Unify____clip_rect_0_0_10001(
#line 80 "mdb.frame.c"
  MR_Box mdb__frame__wrapper_arg_1,
#line 82 "mdb.frame.c"
  MR_Box mdb__frame__wrapper_arg_2);

#line 85 "mdb.frame.c"
static void MR_CALL 
mdb__frame____Compare____clip_rect_0_0_10001(
#line 88 "mdb.frame.c"
  MR_Box * mdb__frame__wrapper_arg_1,
#line 90 "mdb.frame.c"
  MR_Box mdb__frame__wrapper_arg_2,
#line 92 "mdb.frame.c"
  MR_Box mdb__frame__wrapper_arg_3);

#line 95 "mdb.frame.c"
static MR_bool MR_CALL 
mdb__frame____Unify____frame_0_0_10001(
#line 98 "mdb.frame.c"
  MR_Box mdb__frame__wrapper_arg_1,
#line 100 "mdb.frame.c"
  MR_Box mdb__frame__wrapper_arg_2);

#line 103 "mdb.frame.c"
static void MR_CALL 
mdb__frame____Compare____frame_0_0_10001(
#line 106 "mdb.frame.c"
  MR_Box * mdb__frame__wrapper_arg_1,
#line 108 "mdb.frame.c"
  MR_Box mdb__frame__wrapper_arg_2,
#line 110 "mdb.frame.c"
  MR_Box mdb__frame__wrapper_arg_3);

#line 149 "frame.m"
static void MR_CALL 
mdb__frame__left_3_p_0(
#line 149 "frame.m"
  MR_Integer mdb__frame__N_4,
#line 149 "frame.m"
  MR_String mdb__frame__Str_5,
#line 149 "frame.m"
  MR_String * mdb__frame__Left_6);

#line 124 "frame.m"
static void MR_CALL 
mdb__frame__subtract_3_p_0(
#line 124 "frame.m"
  MR_Integer mdb__frame__M_4,
#line 124 "frame.m"
  MR_Integer mdb__frame__X_5,
#line 124 "frame.m"
  MR_Integer * mdb__frame__Z_6);

#line 115 "frame.m"
static void MR_CALL 
mdb__frame__add_right_padding_2_p_0(
#line 115 "frame.m"
  MR_Word mdb__frame__HeadVar__1_1,
#line 115 "frame.m"
  MR_String * mdb__frame__PaddedFrameStr_5);

#line 147 "frame.m"
static void MR_CALL 
mdb__frame__clip_2_f_0_1(
#line 147 "frame.m"
  MR_Box mdb__frame__closure_arg,
#line 147 "frame.m"
  MR_Box mdb__frame__wrapper_arg_1,
#line 147 "frame.m"
  MR_Box * mdb__frame__wrapper_arg_2);

#line 99 "frame.m"
static void MR_CALL 
mdb__frame__hglue_2_f_0_5(
#line 99 "frame.m"
  MR_Box mdb__frame__closure_arg,
#line 99 "frame.m"
  MR_Box mdb__frame__wrapper_arg_1,
#line 99 "frame.m"
  MR_Box mdb__frame__wrapper_arg_2,
#line 99 "frame.m"
  MR_Box * mdb__frame__wrapper_arg_3);

#line 112 "frame.m"
static void MR_CALL 
mdb__frame__hglue_2_f_0_4(
#line 112 "frame.m"
  MR_Box mdb__frame__closure_arg,
#line 112 "frame.m"
  MR_Box mdb__frame__wrapper_arg_1,
#line 112 "frame.m"
  MR_Box * mdb__frame__wrapper_arg_2);

#line 111 "frame.m"
static void MR_CALL 
mdb__frame__hglue_2_f_0_3(
#line 111 "frame.m"
  MR_Box mdb__frame__closure_arg,
#line 111 "frame.m"
  MR_Box mdb__frame__wrapper_arg_1,
#line 111 "frame.m"
  MR_Box * mdb__frame__wrapper_arg_2);

#line 110 "frame.m"
static void MR_CALL 
mdb__frame__hglue_2_f_0_2(
#line 110 "frame.m"
  MR_Box mdb__frame__closure_arg,
#line 110 "frame.m"
  MR_Box mdb__frame__wrapper_arg_1,
#line 110 "frame.m"
  MR_Box mdb__frame__wrapper_arg_2,
#line 110 "frame.m"
  MR_Box * mdb__frame__wrapper_arg_3);

#line 109 "frame.m"
static MR_Box MR_CALL 
mdb__frame__hglue_2_f_0_1(
#line 109 "frame.m"
  MR_Box mdb__frame__closure_arg,
#line 109 "frame.m"
  MR_Box mdb__frame__wrapper_arg_1);

#line 139 "frame.m"
static void MR_CALL 
mdb__frame__hsize_1_f_0_2(
#line 139 "frame.m"
  MR_Box mdb__frame__closure_arg,
#line 139 "frame.m"
  MR_Box mdb__frame__wrapper_arg_1,
#line 139 "frame.m"
  MR_Box mdb__frame__wrapper_arg_2,
#line 139 "frame.m"
  MR_Box * mdb__frame__wrapper_arg_3);

#line 138 "frame.m"
static MR_Box MR_CALL 
mdb__frame__hsize_1_f_0_1(
#line 138 "frame.m"
  MR_Box mdb__frame__closure_arg,
#line 138 "frame.m"
  MR_Box mdb__frame__wrapper_arg_1);


static /* final */ const MR_Box mdb__frame_scalar_common_1[8][3];

static /* final */ const MR_Box mdb__frame_scalar_common_2[1][2];

static /* final */ const MR_Box mdb__frame_scalar_common_3[2][5];

static /* final */ const MR_Box mdb__frame_scalar_common_4[3][6];




static /* final */ const MR_Box mdb__frame_scalar_common_1[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__frame_scalar_common_3[0])),
    ((MR_Box) (mdb__frame__hsize_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__frame_scalar_common_4[0])),
    ((MR_Box) (mdb__frame__hsize_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__frame_scalar_common_3[0])),
    ((MR_Box) (mdb__frame__hglue_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdb__frame_scalar_common_4[0])),
    ((MR_Box) (mdb__frame__hglue_2_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdb__frame_scalar_common_3[1])),
    ((MR_Box) (mdb__frame__hglue_2_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdb__frame_scalar_common_4[1])),
    ((MR_Box) (mdb__frame__hglue_2_f_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__frame_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdb__frame_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__frame__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdb__frame_scalar_common_4[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "mdb.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"



#line 359 "mdb.frame.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__frame__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 368 "mdb.frame.c"
static const MR_FA_TypeInfo_Struct2 mdb__frame__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 377 "mdb.frame.c"
const MR_TypeCtorInfo_Struct mdb__frame__mdb__frame__type_ctor_info_clip_rect_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__frame____Unify____clip_rect_0_0_10001)),
  ((MR_Box) (mdb__frame____Compare____clip_rect_0_0_10001)),
  (MR_String) "mdb.frame",
  (MR_String) "clip_rect",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdb__frame__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 398 "mdb.frame.c"
static const MR_FA_TypeInfo_Struct1 mdb__frame__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 406 "mdb.frame.c"
const MR_TypeCtorInfo_Struct mdb__frame__mdb__frame__type_ctor_info_frame_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__frame____Unify____frame_0_0_10001)),
  ((MR_Box) (mdb__frame____Compare____frame_0_0_10001)),
  (MR_String) "mdb.frame",
  (MR_String) "frame",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdb__frame__list__ti_list_1builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 427 "mdb.frame.c"
static MR_bool MR_CALL 
mdb__frame____Unify____clip_rect_0_0_10001(
#line 430 "mdb.frame.c"
  MR_Box mdb__frame__wrapper_arg_1,
#line 432 "mdb.frame.c"
  MR_Box mdb__frame__wrapper_arg_2)
#line 434 "mdb.frame.c"
{
#line 436 "mdb.frame.c"
  {
#line 438 "mdb.frame.c"
    MR_bool mdb__frame__succeeded;

#line 441 "mdb.frame.c"
    {
#line 443 "mdb.frame.c"
      mdb__frame__succeeded = mdb__frame____Unify____clip_rect_0_0(((MR_Word) mdb__frame__wrapper_arg_1), ((MR_Word) mdb__frame__wrapper_arg_2));
    }
#line 446 "mdb.frame.c"
    return mdb__frame__succeeded;
#line 448 "mdb.frame.c"
  }
#line 450 "mdb.frame.c"
}

#line 453 "mdb.frame.c"
static void MR_CALL 
mdb__frame____Compare____clip_rect_0_0_10001(
#line 456 "mdb.frame.c"
  MR_Box * mdb__frame__wrapper_arg_1,
#line 458 "mdb.frame.c"
  MR_Box mdb__frame__wrapper_arg_2,
#line 460 "mdb.frame.c"
  MR_Box mdb__frame__wrapper_arg_3)
#line 462 "mdb.frame.c"
{
#line 464 "mdb.frame.c"
  {
#line 466 "mdb.frame.c"
    MR_Word mdb__frame__conv0_HeadVar__1_1;

#line 469 "mdb.frame.c"
    {
#line 471 "mdb.frame.c"
      mdb__frame____Compare____clip_rect_0_0(&mdb__frame__conv0_HeadVar__1_1, ((MR_Word) mdb__frame__wrapper_arg_2), ((MR_Word) mdb__frame__wrapper_arg_3));
    }
#line 474 "mdb.frame.c"
    *mdb__frame__wrapper_arg_1 = ((MR_Box) (mdb__frame__conv0_HeadVar__1_1));
#line 476 "mdb.frame.c"
  }
#line 478 "mdb.frame.c"
}

#line 481 "mdb.frame.c"
static MR_bool MR_CALL 
mdb__frame____Unify____frame_0_0_10001(
#line 484 "mdb.frame.c"
  MR_Box mdb__frame__wrapper_arg_1,
#line 486 "mdb.frame.c"
  MR_Box mdb__frame__wrapper_arg_2)
#line 488 "mdb.frame.c"
{
#line 490 "mdb.frame.c"
  {
#line 492 "mdb.frame.c"
    MR_bool mdb__frame__succeeded;

#line 495 "mdb.frame.c"
    {
#line 497 "mdb.frame.c"
      mdb__frame__succeeded = mdb__frame____Unify____frame_0_0(((MR_Word) mdb__frame__wrapper_arg_1), ((MR_Word) mdb__frame__wrapper_arg_2));
    }
#line 500 "mdb.frame.c"
    return mdb__frame__succeeded;
#line 502 "mdb.frame.c"
  }
#line 504 "mdb.frame.c"
}

#line 507 "mdb.frame.c"
static void MR_CALL 
mdb__frame____Compare____frame_0_0_10001(
#line 510 "mdb.frame.c"
  MR_Box * mdb__frame__wrapper_arg_1,
#line 512 "mdb.frame.c"
  MR_Box mdb__frame__wrapper_arg_2,
#line 514 "mdb.frame.c"
  MR_Box mdb__frame__wrapper_arg_3)
#line 516 "mdb.frame.c"
{
#line 518 "mdb.frame.c"
  {
#line 520 "mdb.frame.c"
    MR_Word mdb__frame__conv0_HeadVar__1_1;

#line 523 "mdb.frame.c"
    {
#line 525 "mdb.frame.c"
      mdb__frame____Compare____frame_0_0(&mdb__frame__conv0_HeadVar__1_1, ((MR_Word) mdb__frame__wrapper_arg_2), ((MR_Word) mdb__frame__wrapper_arg_3));
    }
#line 528 "mdb.frame.c"
    *mdb__frame__wrapper_arg_1 = ((MR_Box) (mdb__frame__conv0_HeadVar__1_1));
#line 530 "mdb.frame.c"
  }
#line 532 "mdb.frame.c"
}

#line 31 "frame.m"
void MR_CALL 
mdb__frame____Compare____frame_0_0(
#line 31 "frame.m"
  MR_Word * mdb__frame__HeadVar__1_1,
#line 31 "frame.m"
  MR_Word mdb__frame__HeadVar__2_2,
#line 31 "frame.m"
  MR_Word mdb__frame__HeadVar__3_3)
#line 31 "frame.m"
{
#line 31 "frame.m"
  {
#line 31 "frame.m"
    MR_bool mdb__frame__succeeded;
#line 31 "frame.m"
    MR_Word mdb__frame__Cast_HeadVar1_4 = mdb__frame__HeadVar__2_2;
#line 31 "frame.m"
    MR_Word mdb__frame__Cast_HeadVar2_5 = mdb__frame__HeadVar__3_3;

#line 31 "frame.m"
    {
#line 31 "frame.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__frame_scalar_common_2[0], mdb__frame__HeadVar__1_1, ((MR_Box) (mdb__frame__Cast_HeadVar1_4)), ((MR_Box) (mdb__frame__Cast_HeadVar2_5)));
#line 31 "frame.m"
      return;
    }
#line 31 "frame.m"
  }
#line 31 "frame.m"
}

#line 31 "frame.m"
MR_bool MR_CALL 
mdb__frame____Unify____frame_0_0(
#line 31 "frame.m"
  MR_Word mdb__frame__HeadVar__1_1,
#line 31 "frame.m"
  MR_Word mdb__frame__HeadVar__2_2)
#line 31 "frame.m"
{
#line 31 "frame.m"
  {
#line 31 "frame.m"
    MR_bool mdb__frame__succeeded;
#line 31 "frame.m"
    MR_Word mdb__frame__Cast_HeadVar1_3 = mdb__frame__HeadVar__1_1;
#line 31 "frame.m"
    MR_Word mdb__frame__Cast_HeadVar2_4 = mdb__frame__HeadVar__2_2;

#line 31 "frame.m"
    {
#line 31 "frame.m"
      return mdb__frame__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__frame_scalar_common_2[0], ((MR_Box) (mdb__frame__Cast_HeadVar1_3)), ((MR_Box) (mdb__frame__Cast_HeadVar2_4)));
    }
#line 31 "frame.m"
    return mdb__frame__succeeded;
#line 31 "frame.m"
  }
#line 31 "frame.m"
}

#line 35 "frame.m"
void MR_CALL 
mdb__frame____Compare____clip_rect_0_0(
#line 35 "frame.m"
  MR_Word * mdb__frame__HeadVar__1_1,
#line 35 "frame.m"
  MR_Word mdb__frame__HeadVar__2_2,
#line 35 "frame.m"
  MR_Word mdb__frame__HeadVar__3_3)
#line 35 "frame.m"
{
#line 35 "frame.m"
  {
#line 35 "frame.m"
    MR_bool mdb__frame__succeeded;
#line 35 "frame.m"
    MR_Word mdb__frame__Cast_HeadVar1_4 = mdb__frame__HeadVar__2_2;
#line 35 "frame.m"
    MR_Word mdb__frame__Cast_HeadVar2_5 = mdb__frame__HeadVar__3_3;

#line 35 "frame.m"
    {
#line 35 "frame.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__frame_scalar_common_1[1], mdb__frame__HeadVar__1_1, ((MR_Box) (mdb__frame__Cast_HeadVar1_4)), ((MR_Box) (mdb__frame__Cast_HeadVar2_5)));
#line 35 "frame.m"
      return;
    }
#line 35 "frame.m"
  }
#line 35 "frame.m"
}

#line 35 "frame.m"
MR_bool MR_CALL 
mdb__frame____Unify____clip_rect_0_0(
#line 35 "frame.m"
  MR_Word mdb__frame__HeadVar__1_1,
#line 35 "frame.m"
  MR_Word mdb__frame__HeadVar__2_2)
#line 35 "frame.m"
{
#line 35 "frame.m"
  {
#line 35 "frame.m"
    MR_bool mdb__frame__succeeded;
#line 35 "frame.m"
    MR_Word mdb__frame__Cast_HeadVar1_3 = mdb__frame__HeadVar__1_1;
#line 35 "frame.m"
    MR_Word mdb__frame__Cast_HeadVar2_4 = mdb__frame__HeadVar__2_2;

#line 35 "frame.m"
    {
#line 35 "frame.m"
      return mdb__frame__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__frame_scalar_common_1[1], ((MR_Box) (mdb__frame__Cast_HeadVar1_3)), ((MR_Box) (mdb__frame__Cast_HeadVar2_4)));
    }
#line 35 "frame.m"
    return mdb__frame__succeeded;
#line 35 "frame.m"
  }
#line 35 "frame.m"
}

#line 149 "frame.m"
static void MR_CALL 
mdb__frame__left_3_p_0(
#line 149 "frame.m"
  MR_Integer mdb__frame__N_4,
#line 149 "frame.m"
  MR_String mdb__frame__Str_5,
#line 149 "frame.m"
  MR_String * mdb__frame__Left_6)
#line 149 "frame.m"
{
#line 152 "frame.m"
  {
#line 152 "frame.m"
    MR_bool mdb__frame__succeeded;

#line 152 "frame.m"
    {
#line 152 "frame.m"
      mercury__string__left_3_p_0(mdb__frame__Str_5, mdb__frame__N_4, mdb__frame__Left_6);
#line 152 "frame.m"
      return;
    }
#line 152 "frame.m"
  }
#line 149 "frame.m"
}

#line 124 "frame.m"
static void MR_CALL 
mdb__frame__subtract_3_p_0(
#line 124 "frame.m"
  MR_Integer mdb__frame__M_4,
#line 124 "frame.m"
  MR_Integer mdb__frame__X_5,
#line 124 "frame.m"
  MR_Integer * mdb__frame__Z_6)
#line 124 "frame.m"
{
#line 127 "frame.m"
  {
#line 127 "frame.m"
    MR_bool mdb__frame__succeeded;

#line 127 "frame.m"
    *mdb__frame__Z_6 = (mdb__frame__M_4 - mdb__frame__X_5);
#line 127 "frame.m"
  }
#line 124 "frame.m"
}

#line 115 "frame.m"
static void MR_CALL 
mdb__frame__add_right_padding_2_p_0(
#line 115 "frame.m"
  MR_Word mdb__frame__HeadVar__1_1,
#line 115 "frame.m"
  MR_String * mdb__frame__PaddedFrameStr_5)
#line 115 "frame.m"
{
#line 117 "frame.m"
  {
#line 117 "frame.m"
    MR_bool mdb__frame__succeeded;
#line 117 "frame.m"
    MR_String mdb__frame__Str_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__frame__HeadVar__1_1, (MR_Integer) 0)));
#line 117 "frame.m"
    MR_Integer mdb__frame__Len_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__frame__HeadVar__1_1, (MR_Integer) 1)));
#line 117 "frame.m"
    MR_Word mdb__frame__PadChars_6;
#line 117 "frame.m"
    MR_String mdb__frame__Padding_7;

#line 118 "frame.m"
    {
#line 118 "frame.m"
      mercury__list__duplicate_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, mdb__frame__Len_4, ((MR_Box) (MR_Word) ((MR_Char) 32)), &mdb__frame__PadChars_6);
    }
#line 119 "frame.m"
    {
#line 119 "frame.m"
      mercury__string__from_char_list_2_p_0(mdb__frame__PadChars_6, &mdb__frame__Padding_7);
    }
#line 120 "frame.m"
    {
#line 120 "frame.m"
      mercury__string__append_3_p_2(mdb__frame__Str_3, mdb__frame__Padding_7, mdb__frame__PaddedFrameStr_5);
#line 120 "frame.m"
      return;
    }
#line 117 "frame.m"
  }
#line 115 "frame.m"
}

#line 147 "frame.m"
static void MR_CALL 
mdb__frame__clip_2_f_0_1(
#line 147 "frame.m"
  MR_Box mdb__frame__closure_arg,
#line 147 "frame.m"
  MR_Box mdb__frame__wrapper_arg_1,
#line 147 "frame.m"
  MR_Box * mdb__frame__wrapper_arg_2)
#line 147 "frame.m"
{
#line 147 "frame.m"
  {
#line 147 "frame.m"
    MR_Box mdb__frame__closure = mdb__frame__closure_arg;
#line 147 "frame.m"
    MR_String mdb__frame__conv0_Left_6;

#line 147 "frame.m"
    {
#line 147 "frame.m"
      mdb__frame__left_3_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__frame__closure, (MR_Integer) 3))), ((MR_String) mdb__frame__wrapper_arg_1), &mdb__frame__conv0_Left_6);
    }
#line 147 "frame.m"
    *mdb__frame__wrapper_arg_2 = ((MR_Box) (mdb__frame__conv0_Left_6));
#line 147 "frame.m"
  }
#line 147 "frame.m"
}

#line 60 "frame.m"
MR_Word MR_CALL 
mdb__frame__clip_2_f_0(
#line 60 "frame.m"
  MR_Word mdb__frame__HeadVar__1_1,
#line 60 "frame.m"
  MR_Word mdb__frame__Frame_6)
#line 60 "frame.m"
{
#line 145 "frame.m"
  {
#line 145 "frame.m"
    MR_bool mdb__frame__succeeded;
#line 145 "frame.m"
    MR_Word mdb__frame__ClippedFrame_7;
#line 145 "frame.m"
    MR_Word mdb__frame__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 145 "frame.m"
    MR_Integer mdb__frame__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__frame__HeadVar__1_1, (MR_Integer) 0)));
#line 145 "frame.m"
    MR_Integer mdb__frame__Y_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__frame__HeadVar__1_1, (MR_Integer) 1)));
#line 145 "frame.m"
    MR_Word mdb__frame__YClippedFrame_8;
#line 145 "frame.m"
    MR_Word mdb__frame__V_9_9;

#line 146 "frame.m"
    {
#line 146 "frame.m"
      mercury__list__take_upto_3_p_0(mdb__frame__TypeCtorInfo_10_10, mdb__frame__Y_5, mdb__frame__Frame_6, &mdb__frame__YClippedFrame_8);
    }
#line 147 "frame.m"
    {
#line 147 "frame.m"
      mdb__frame__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 147 "frame.m"
      MR_hl_field(MR_mktag(0), mdb__frame__V_9_9, 0) = ((MR_Box) (&mdb__frame_scalar_common_4[2]));
#line 147 "frame.m"
      MR_hl_field(MR_mktag(0), mdb__frame__V_9_9, 1) = ((MR_Box) (mdb__frame__clip_2_f_0_1));
#line 147 "frame.m"
      MR_hl_field(MR_mktag(0), mdb__frame__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 147 "frame.m"
      MR_hl_field(MR_mktag(0), mdb__frame__V_9_9, 3) = ((MR_Box) (mdb__frame__X_4));
#line 147 "frame.m"
    }
#line 147 "frame.m"
    {
#line 147 "frame.m"
      mercury__list__map_3_p_0(mdb__frame__TypeCtorInfo_10_10, mdb__frame__TypeCtorInfo_10_10, mdb__frame__V_9_9, mdb__frame__YClippedFrame_8, &mdb__frame__ClippedFrame_7);
    }
#line 145 "frame.m"
    return mdb__frame__ClippedFrame_7;
#line 145 "frame.m"
  }
#line 60 "frame.m"
}

#line 99 "frame.m"
static void MR_CALL 
mdb__frame__hglue_2_f_0_5(
#line 99 "frame.m"
  MR_Box mdb__frame__closure_arg,
#line 99 "frame.m"
  MR_Box mdb__frame__wrapper_arg_1,
#line 99 "frame.m"
  MR_Box mdb__frame__wrapper_arg_2,
#line 99 "frame.m"
  MR_Box * mdb__frame__wrapper_arg_3)
#line 99 "frame.m"
{
#line 99 "frame.m"
  {
#line 99 "frame.m"
    MR_Box mdb__frame__closure = mdb__frame__closure_arg;
#line 99 "frame.m"
    MR_String mdb__frame__conv5_HeadVar__3_3;

#line 99 "frame.m"
    {
#line 99 "frame.m"
      mercury__string__append_3_p_2(((MR_String) mdb__frame__wrapper_arg_1), ((MR_String) mdb__frame__wrapper_arg_2), &mdb__frame__conv5_HeadVar__3_3);
    }
#line 99 "frame.m"
    *mdb__frame__wrapper_arg_3 = ((MR_Box) (mdb__frame__conv5_HeadVar__3_3));
#line 99 "frame.m"
  }
#line 99 "frame.m"
}

#line 112 "frame.m"
static void MR_CALL 
mdb__frame__hglue_2_f_0_4(
#line 112 "frame.m"
  MR_Box mdb__frame__closure_arg,
#line 112 "frame.m"
  MR_Box mdb__frame__wrapper_arg_1,
#line 112 "frame.m"
  MR_Box * mdb__frame__wrapper_arg_2)
#line 112 "frame.m"
{
#line 112 "frame.m"
  {
#line 112 "frame.m"
    MR_Box mdb__frame__closure = mdb__frame__closure_arg;
#line 112 "frame.m"
    MR_String mdb__frame__conv4_PaddedFrameStr_5;

#line 112 "frame.m"
    {
#line 112 "frame.m"
      mdb__frame__add_right_padding_2_p_0(((MR_Word) mdb__frame__wrapper_arg_1), &mdb__frame__conv4_PaddedFrameStr_5);
    }
#line 112 "frame.m"
    *mdb__frame__wrapper_arg_2 = ((MR_Box) (mdb__frame__conv4_PaddedFrameStr_5));
#line 112 "frame.m"
  }
#line 112 "frame.m"
}

#line 111 "frame.m"
static void MR_CALL 
mdb__frame__hglue_2_f_0_3(
#line 111 "frame.m"
  MR_Box mdb__frame__closure_arg,
#line 111 "frame.m"
  MR_Box mdb__frame__wrapper_arg_1,
#line 111 "frame.m"
  MR_Box * mdb__frame__wrapper_arg_2)
#line 111 "frame.m"
{
#line 111 "frame.m"
  {
#line 111 "frame.m"
    MR_Box mdb__frame__closure = mdb__frame__closure_arg;
#line 111 "frame.m"
    MR_Integer mdb__frame__conv3_Z_6;

#line 111 "frame.m"
    {
#line 111 "frame.m"
      mdb__frame__subtract_3_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__frame__closure, (MR_Integer) 3))), ((MR_Integer) mdb__frame__wrapper_arg_1), &mdb__frame__conv3_Z_6);
    }
#line 111 "frame.m"
    *mdb__frame__wrapper_arg_2 = ((MR_Box) (mdb__frame__conv3_Z_6));
#line 111 "frame.m"
  }
#line 111 "frame.m"
}

#line 110 "frame.m"
static void MR_CALL 
mdb__frame__hglue_2_f_0_2(
#line 110 "frame.m"
  MR_Box mdb__frame__closure_arg,
#line 110 "frame.m"
  MR_Box mdb__frame__wrapper_arg_1,
#line 110 "frame.m"
  MR_Box mdb__frame__wrapper_arg_2,
#line 110 "frame.m"
  MR_Box * mdb__frame__wrapper_arg_3)
#line 110 "frame.m"
{
#line 110 "frame.m"
  {
#line 110 "frame.m"
    MR_Box mdb__frame__closure = mdb__frame__closure_arg;
#line 110 "frame.m"
    MR_Integer mdb__frame__conv1_HeadVar__3_3;

#line 110 "frame.m"
    {
#line 110 "frame.m"
      mercury__int__max_3_p_0(((MR_Integer) mdb__frame__wrapper_arg_1), ((MR_Integer) mdb__frame__wrapper_arg_2), &mdb__frame__conv1_HeadVar__3_3);
    }
#line 110 "frame.m"
    *mdb__frame__wrapper_arg_3 = ((MR_Box) (mdb__frame__conv1_HeadVar__3_3));
#line 110 "frame.m"
  }
#line 110 "frame.m"
}

#line 109 "frame.m"
static MR_Box MR_CALL 
mdb__frame__hglue_2_f_0_1(
#line 109 "frame.m"
  MR_Box mdb__frame__closure_arg,
#line 109 "frame.m"
  MR_Box mdb__frame__wrapper_arg_1)
#line 109 "frame.m"
{
#line 109 "frame.m"
  {
#line 109 "frame.m"
    MR_Box mdb__frame__wrapper_arg_2;
#line 109 "frame.m"
    MR_Box mdb__frame__closure = mdb__frame__closure_arg;
#line 109 "frame.m"
    MR_Integer mdb__frame__conv0_HeadVar__2_2;

#line 109 "frame.m"
    {
#line 109 "frame.m"
      mdb__frame__conv0_HeadVar__2_2 = mercury__string__length_1_f_0(((MR_String) mdb__frame__wrapper_arg_1));
    }
#line 109 "frame.m"
    mdb__frame__wrapper_arg_2 = ((MR_Box) (mdb__frame__conv0_HeadVar__2_2));
#line 109 "frame.m"
    return mdb__frame__wrapper_arg_2;
#line 109 "frame.m"
  }
#line 109 "frame.m"
}

#line 55 "frame.m"
MR_Word MR_CALL 
mdb__frame__hglue_2_f_0(
#line 55 "frame.m"
  MR_Word mdb__frame__LeftFrame_4,
#line 55 "frame.m"
  MR_Word mdb__frame__RightFrame_5)
#line 55 "frame.m"
{
#line 82 "frame.m"
  {
#line 82 "frame.m"
    MR_bool mdb__frame__succeeded;
#line 82 "frame.m"
    MR_Word mdb__frame__GluedFrame_6;
#line 82 "frame.m"
    MR_Word mdb__frame__TypeCtorInfo_25_25;
#line 82 "frame.m"
    MR_Word mdb__frame__TypeCtorInfo_18_59;
#line 82 "frame.m"
    MR_Word mdb__frame__TypeCtorInfo_19_60;
#line 82 "frame.m"
    MR_Integer mdb__frame__RVSize_7;
#line 82 "frame.m"
    MR_Integer mdb__frame__LVSize_8;
#line 82 "frame.m"
    MR_Word mdb__frame__RightFrameNew_10;
#line 82 "frame.m"
    MR_Word mdb__frame__LeftFrameNew_11;
#line 82 "frame.m"
    MR_Word mdb__frame__PaddedLeftFrameNew_12;
#line 82 "frame.m"
    MR_Word mdb__frame__Lengths_46;
#line 82 "frame.m"
    MR_Integer mdb__frame__MaxLen_48;
#line 82 "frame.m"
    MR_Word mdb__frame__Paddings_49;
#line 82 "frame.m"
    MR_Word mdb__frame__V_55_55;
#line 82 "frame.m"
    MR_Word mdb__frame__V_57_57;
#line 110 "frame.m"
    MR_Box mdb__frame__conv2_MaxLen_48;

#line 143 "frame.m"
    {
#line 143 "frame.m"
      mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__frame__RightFrame_5, &mdb__frame__RVSize_7);
    }
#line 143 "frame.m"
    {
#line 143 "frame.m"
      mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__frame__LeftFrame_4, &mdb__frame__LVSize_8);
    }
#line 86 "frame.m"
    mdb__frame__succeeded = (mdb__frame__RVSize_7 < mdb__frame__LVSize_8);
#line 90 "frame.m"
    if (mdb__frame__succeeded)
#line 87 "frame.m"
      {
#line 87 "frame.m"
        MR_Word mdb__frame__TypeCtorInfo_9_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 87 "frame.m"
        MR_Integer mdb__frame__PadLines_9 = (mdb__frame__LVSize_8 - mdb__frame__RVSize_7);
#line 87 "frame.m"
        MR_Word mdb__frame__Padding_35;

#line 134 "frame.m"
        {
#line 134 "frame.m"
          mercury__list__duplicate_3_p_0(mdb__frame__TypeCtorInfo_9_37, mdb__frame__PadLines_9, ((MR_Box) ((MR_String) "")), &mdb__frame__Padding_35);
        }
#line 135 "frame.m"
        {
#line 135 "frame.m"
          mercury__list__append_3_p_1(mdb__frame__TypeCtorInfo_9_37, mdb__frame__RightFrame_5, mdb__frame__Padding_35, &mdb__frame__RightFrameNew_10);
        }
#line 89 "frame.m"
        mdb__frame__LeftFrameNew_11 = mdb__frame__LeftFrame_4;
#line 87 "frame.m"
      }
#line 90 "frame.m"
    else
#line 94 "frame.m"
      {
#line 90 "frame.m"
        mdb__frame__succeeded = (mdb__frame__LVSize_8 < mdb__frame__RVSize_7);
#line 94 "frame.m"
        if (mdb__frame__succeeded)
#line 91 "frame.m"
          {
#line 91 "frame.m"
            MR_Word mdb__frame__TypeCtorInfo_9_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 91 "frame.m"
            MR_Integer mdb__frame__PadLines_20 = (mdb__frame__RVSize_7 - mdb__frame__LVSize_8);
#line 91 "frame.m"
            MR_Word mdb__frame__Padding_41;

#line 134 "frame.m"
            {
#line 134 "frame.m"
              mercury__list__duplicate_3_p_0(mdb__frame__TypeCtorInfo_9_43, mdb__frame__PadLines_20, ((MR_Box) ((MR_String) "")), &mdb__frame__Padding_41);
            }
#line 135 "frame.m"
            {
#line 135 "frame.m"
              mercury__list__append_3_p_1(mdb__frame__TypeCtorInfo_9_43, mdb__frame__LeftFrame_4, mdb__frame__Padding_41, &mdb__frame__LeftFrameNew_11);
            }
#line 93 "frame.m"
            mdb__frame__RightFrameNew_10 = mdb__frame__RightFrame_5;
#line 91 "frame.m"
          }
#line 94 "frame.m"
        else
#line 95 "frame.m"
          {
#line 95 "frame.m"
            mdb__frame__LeftFrameNew_11 = mdb__frame__LeftFrame_4;
#line 96 "frame.m"
            mdb__frame__RightFrameNew_10 = mdb__frame__RightFrame_5;
#line 95 "frame.m"
          }
#line 94 "frame.m"
      }
#line 1121 "mdb.frame.c"
    mdb__frame__TypeCtorInfo_18_59 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1123 "mdb.frame.c"
    mdb__frame__TypeCtorInfo_19_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 109 "frame.m"
    {
#line 109 "frame.m"
      mdb__frame__Lengths_46 = mercury__list__map_2_f_0(mdb__frame__TypeCtorInfo_18_59, mdb__frame__TypeCtorInfo_19_60, (MR_Word) &mdb__frame_scalar_common_1[4], mdb__frame__LeftFrameNew_11);
    }
#line 110 "frame.m"
    {
#line 110 "frame.m"
      mercury__list__foldl_4_p_0(mdb__frame__TypeCtorInfo_19_60, mdb__frame__TypeCtorInfo_19_60, (MR_Word) &mdb__frame_scalar_common_1[5], mdb__frame__Lengths_46, ((MR_Box) ((MR_Integer) 0)), &mdb__frame__conv2_MaxLen_48);
    }
#line 110 "frame.m"
    mdb__frame__MaxLen_48 = ((MR_Integer) mdb__frame__conv2_MaxLen_48);
#line 111 "frame.m"
    {
#line 111 "frame.m"
      mdb__frame__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 111 "frame.m"
      MR_hl_field(MR_mktag(0), mdb__frame__V_55_55, 0) = ((MR_Box) (&mdb__frame_scalar_common_4[0]));
#line 111 "frame.m"
      MR_hl_field(MR_mktag(0), mdb__frame__V_55_55, 1) = ((MR_Box) (mdb__frame__hglue_2_f_0_3));
#line 111 "frame.m"
      MR_hl_field(MR_mktag(0), mdb__frame__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 111 "frame.m"
      MR_hl_field(MR_mktag(0), mdb__frame__V_55_55, 3) = ((MR_Box) (mdb__frame__MaxLen_48));
#line 111 "frame.m"
    }
#line 111 "frame.m"
    {
#line 111 "frame.m"
      mercury__list__map_3_p_0(mdb__frame__TypeCtorInfo_19_60, mdb__frame__TypeCtorInfo_19_60, mdb__frame__V_55_55, mdb__frame__Lengths_46, &mdb__frame__Paddings_49);
    }
#line 112 "frame.m"
    {
#line 112 "frame.m"
      mdb__frame__V_57_57 = mercury__assoc_list__from_corresponding_lists_2_f_0(mdb__frame__TypeCtorInfo_18_59, mdb__frame__TypeCtorInfo_19_60, mdb__frame__LeftFrameNew_11, mdb__frame__Paddings_49);
    }
#line 112 "frame.m"
    {
#line 112 "frame.m"
      mercury__list__map_3_p_0((MR_Word) &mdb__frame_scalar_common_1[0], mdb__frame__TypeCtorInfo_18_59, (MR_Word) &mdb__frame_scalar_common_1[6], mdb__frame__V_57_57, &mdb__frame__PaddedLeftFrameNew_12);
    }
#line 1166 "mdb.frame.c"
    mdb__frame__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 99 "frame.m"
    {
#line 99 "frame.m"
      mdb__util__zip_with_4_p_0(mdb__frame__TypeCtorInfo_25_25, mdb__frame__TypeCtorInfo_25_25, mdb__frame__TypeCtorInfo_25_25, (MR_Word) &mdb__frame_scalar_common_1[7], mdb__frame__PaddedLeftFrameNew_12, mdb__frame__RightFrameNew_10, &mdb__frame__GluedFrame_6);
    }
#line 82 "frame.m"
    return mdb__frame__GluedFrame_6;
#line 82 "frame.m"
  }
#line 55 "frame.m"
}

#line 51 "frame.m"
MR_Word MR_CALL 
mdb__frame__vglue_2_f_0(
#line 51 "frame.m"
  MR_Word mdb__frame__TopFrame_4,
#line 51 "frame.m"
  MR_Word mdb__frame__BottomFrame_5)
#line 51 "frame.m"
{
#line 80 "frame.m"
  {
#line 80 "frame.m"
    MR_bool mdb__frame__succeeded;
#line 80 "frame.m"
    MR_Word mdb__frame__StackedFrame_6;

#line 80 "frame.m"
    {
#line 80 "frame.m"
      mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__frame__TopFrame_4, mdb__frame__BottomFrame_5, &mdb__frame__StackedFrame_6);
    }
#line 80 "frame.m"
    return mdb__frame__StackedFrame_6;
#line 80 "frame.m"
  }
#line 51 "frame.m"
}

#line 47 "frame.m"
MR_Word MR_CALL 
mdb__frame__from_string_1_f_0(
#line 47 "frame.m"
  MR_String mdb__frame__Str_3)
#line 47 "frame.m"
{
#line 76 "frame.m"
  {
#line 76 "frame.m"
    MR_bool mdb__frame__succeeded;
#line 76 "frame.m"
    MR_Word mdb__frame__HeadVar__2_2;

#line 76 "frame.m"
    {
#line 76 "frame.m"
      mdb__frame__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 76 "frame.m"
      MR_hl_field(MR_mktag(1), mdb__frame__HeadVar__2_2, 0) = ((MR_Box) (mdb__frame__Str_3));
#line 76 "frame.m"
      MR_hl_field(MR_mktag(1), mdb__frame__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 76 "frame.m"
    }
#line 76 "frame.m"
    return mdb__frame__HeadVar__2_2;
#line 76 "frame.m"
  }
#line 47 "frame.m"
}

#line 43 "frame.m"
MR_Integer MR_CALL 
mdb__frame__vsize_1_f_0(
#line 43 "frame.m"
  MR_Word mdb__frame__Frame_3)
#line 43 "frame.m"
{
#line 143 "frame.m"
  {
#line 143 "frame.m"
    MR_bool mdb__frame__succeeded;
#line 143 "frame.m"
    MR_Integer mdb__frame__VSize_4;

#line 143 "frame.m"
    {
#line 143 "frame.m"
      mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__frame__Frame_3, &mdb__frame__VSize_4);
    }
#line 143 "frame.m"
    return mdb__frame__VSize_4;
#line 143 "frame.m"
  }
#line 43 "frame.m"
}

#line 139 "frame.m"
static void MR_CALL 
mdb__frame__hsize_1_f_0_2(
#line 139 "frame.m"
  MR_Box mdb__frame__closure_arg,
#line 139 "frame.m"
  MR_Box mdb__frame__wrapper_arg_1,
#line 139 "frame.m"
  MR_Box mdb__frame__wrapper_arg_2,
#line 139 "frame.m"
  MR_Box * mdb__frame__wrapper_arg_3)
#line 139 "frame.m"
{
#line 139 "frame.m"
  {
#line 139 "frame.m"
    MR_Box mdb__frame__closure = mdb__frame__closure_arg;
#line 139 "frame.m"
    MR_Integer mdb__frame__conv1_HeadVar__3_3;

#line 139 "frame.m"
    {
#line 139 "frame.m"
      mercury__int__max_3_p_0(((MR_Integer) mdb__frame__wrapper_arg_1), ((MR_Integer) mdb__frame__wrapper_arg_2), &mdb__frame__conv1_HeadVar__3_3);
    }
#line 139 "frame.m"
    *mdb__frame__wrapper_arg_3 = ((MR_Box) (mdb__frame__conv1_HeadVar__3_3));
#line 139 "frame.m"
  }
#line 139 "frame.m"
}

#line 138 "frame.m"
static MR_Box MR_CALL 
mdb__frame__hsize_1_f_0_1(
#line 138 "frame.m"
  MR_Box mdb__frame__closure_arg,
#line 138 "frame.m"
  MR_Box mdb__frame__wrapper_arg_1)
#line 138 "frame.m"
{
#line 138 "frame.m"
  {
#line 138 "frame.m"
    MR_Box mdb__frame__wrapper_arg_2;
#line 138 "frame.m"
    MR_Box mdb__frame__closure = mdb__frame__closure_arg;
#line 138 "frame.m"
    MR_Integer mdb__frame__conv0_HeadVar__2_2;

#line 138 "frame.m"
    {
#line 138 "frame.m"
      mdb__frame__conv0_HeadVar__2_2 = mercury__string__length_1_f_0(((MR_String) mdb__frame__wrapper_arg_1));
    }
#line 138 "frame.m"
    mdb__frame__wrapper_arg_2 = ((MR_Box) (mdb__frame__conv0_HeadVar__2_2));
#line 138 "frame.m"
    return mdb__frame__wrapper_arg_2;
#line 138 "frame.m"
  }
#line 138 "frame.m"
}

#line 39 "frame.m"
MR_Integer MR_CALL 
mdb__frame__hsize_1_f_0(
#line 39 "frame.m"
  MR_Word mdb__frame__Frame_3)
#line 39 "frame.m"
{
#line 137 "frame.m"
  {
#line 137 "frame.m"
    MR_bool mdb__frame__succeeded;
#line 137 "frame.m"
    MR_Integer mdb__frame__HSize_4;
#line 137 "frame.m"
    MR_Word mdb__frame__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 137 "frame.m"
    MR_Word mdb__frame__Lengths_5;
#line 139 "frame.m"
    MR_Box mdb__frame__conv2_HSize_4;

#line 138 "frame.m"
    {
#line 138 "frame.m"
      mdb__frame__Lengths_5 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__frame__TypeCtorInfo_15_15, (MR_Word) &mdb__frame_scalar_common_1[2], mdb__frame__Frame_3);
    }
#line 139 "frame.m"
    {
#line 139 "frame.m"
      mercury__list__foldl_4_p_0(mdb__frame__TypeCtorInfo_15_15, mdb__frame__TypeCtorInfo_15_15, (MR_Word) &mdb__frame_scalar_common_1[3], mdb__frame__Lengths_5, ((MR_Box) ((MR_Integer) 0)), &mdb__frame__conv2_HSize_4);
    }
#line 139 "frame.m"
    mdb__frame__HSize_4 = ((MR_Integer) mdb__frame__conv2_HSize_4);
#line 137 "frame.m"
    return mdb__frame__HSize_4;
#line 137 "frame.m"
  }
#line 39 "frame.m"
}

void mercury__mdb__frame__init(void)
{
}

void mercury__mdb__frame__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__frame__mdb__frame__type_ctor_info_clip_rect_0);
	MR_register_type_ctor_info(&mdb__frame__mdb__frame__type_ctor_info_frame_0);
}

void mercury__mdb__frame__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.frame. */
