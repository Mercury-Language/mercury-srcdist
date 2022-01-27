/*
** Automatically generated from `mslice.m'
** by the Mercury compiler,
** version 14.01-beta-2014-01-02, configured for x86_64-apple-darwin12.5.0.
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


/* :- module mslice. */
/* :- implementation. */

/*
INIT mercury__mslice__init
ENDINIT
*/

#include "mslice.mih"


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
#include "getopt.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
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
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.shared_utilities.mih"
#include "mdbcomp.slice_and_dice.mih"
#include "mdbcomp.trace_counts.mih"



#line 38 "mslice.m"
struct mslice__main_2_p_0_4_env_0_s {
#line 38 "mslice.m"
  MR_Box * mslice__main_2_p_0_4_env_0__wrapper_arg_1;
#line 38 "mslice.m"
  MR_Box * mslice__main_2_p_0_4_env_0__wrapper_arg_2;
#line 38 "mslice.m"
  MR_Cont mslice__main_2_p_0_4_env_0__cont;
#line 38 "mslice.m"
  void * mslice__main_2_p_0_4_env_0__cont_env_ptr;
#line 38 "mslice.m"
  MR_Word mslice__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
#line 38 "mslice.m"
  MR_Word mslice__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
#line 38 "mslice.m"
};


#line 88 "mslice.c"
static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_0;

#line 91 "mslice.c"
static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_1;

#line 94 "mslice.c"
static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_2;

#line 97 "mslice.c"
static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_3;

#line 100 "mslice.c"
static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_4;

#line 103 "mslice.c"
static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_5;

#line 106 "mslice.c"
static const MR_EnumFunctorDescPtr mslice__mslice__enum_value_ordered_option_0[6];

#line 109 "mslice.c"
static const MR_EnumFunctorDescPtr mslice__mslice__enum_name_ordered_option_0[6];

#line 112 "mslice.c"
static const MR_Integer mslice__mslice__functor_number_map_option_0[6];

#line 115 "mslice.c"
static const MR_FA_TypeInfo_Struct2 mslice__tree234__ti_tree234_2mslice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

#line 118 "mslice.c"
static MR_bool MR_CALL 
mslice____Unify____option_0_0_10001(
#line 121 "mslice.c"
  MR_Box mslice__wrapper_arg_1,
#line 123 "mslice.c"
  MR_Box mslice__wrapper_arg_2);

#line 126 "mslice.c"
static void MR_CALL 
mslice____Compare____option_0_0_10001(
#line 129 "mslice.c"
  MR_Box * mslice__wrapper_arg_1,
#line 131 "mslice.c"
  MR_Box mslice__wrapper_arg_2,
#line 133 "mslice.c"
  MR_Box mslice__wrapper_arg_3);

#line 136 "mslice.c"
static MR_bool MR_CALL 
mslice____Unify____option_table_0_0_10001(
#line 139 "mslice.c"
  MR_Box mslice__wrapper_arg_1,
#line 141 "mslice.c"
  MR_Box mslice__wrapper_arg_2);

#line 144 "mslice.c"
static void MR_CALL 
mslice____Compare____option_table_0_0_10001(
#line 147 "mslice.c"
  MR_Box * mslice__wrapper_arg_1,
#line 149 "mslice.c"
  MR_Box mslice__wrapper_arg_2,
#line 151 "mslice.c"
  MR_Box mslice__wrapper_arg_3);

#line 106 "mslice.m"
static void MR_CALL 
mslice____Compare____option_table_0_0(
#line 106 "mslice.m"
  MR_Word * mslice__HeadVar__1_1,
#line 106 "mslice.m"
  MR_Word mslice__HeadVar__2_2,
#line 106 "mslice.m"
  MR_Word mslice__HeadVar__3_3);

#line 106 "mslice.m"
static MR_bool MR_CALL 
mslice____Unify____option_table_0_0(
#line 106 "mslice.m"
  MR_Word mslice__HeadVar__1_1,
#line 106 "mslice.m"
  MR_Word mslice__HeadVar__2_2);

#line 98 "mslice.m"
static void MR_CALL 
mslice____Compare____option_0_0(
#line 98 "mslice.m"
  MR_Word * mslice__HeadVar__1_1,
#line 98 "mslice.m"
  MR_Word mslice__HeadVar__2_2,
#line 98 "mslice.m"
  MR_Word mslice__HeadVar__3_3);

#line 98 "mslice.m"
static MR_bool MR_CALL 
mslice____Unify____option_0_0(
#line 98 "mslice.m"
  MR_Word mslice__HeadVar__2_1,
#line 98 "mslice.m"
  MR_Word mslice__HeadVar__2_2);

#line 110 "mslice.m"
static void MR_CALL 
mslice__option_default_2_p_0(
#line 110 "mslice.m"
  MR_Word * mslice__HeadVar__1_1,
#line 110 "mslice.m"
  MR_Word * mslice__HeadVar__2_2,
#line 110 "mslice.m"
  MR_Cont mslice__cont,
#line 110 "mslice.m"
  void * mslice__cont_env_ptr);

#line 109 "mslice.m"
static MR_bool MR_CALL 
mslice__long_option_2_p_0(
#line 109 "mslice.m"
  MR_String mslice__HeadVar__1_1,
#line 109 "mslice.m"
  MR_Word * mslice__HeadVar__2_2);

#line 108 "mslice.m"
static MR_bool MR_CALL 
mslice__short_option_2_p_0(
#line 108 "mslice.m"
  MR_Char mslice__HeadVar__1_1,
#line 108 "mslice.m"
  MR_Word * mslice__HeadVar__2_2);

#line 38 "mslice.m"
static void MR_CALL 
main_2_p_0_3(
#line 38 "mslice.m"
  void * mslice__env_ptr_arg);

#line 38 "mslice.m"
static void MR_CALL 
main_2_p_0_4(
#line 38 "mslice.m"
  MR_Box mslice__closure_arg,
#line 38 "mslice.m"
  MR_Box * mslice__wrapper_arg_1,
#line 38 "mslice.m"
  MR_Box * mslice__wrapper_arg_2,
#line 38 "mslice.m"
  MR_Cont mslice__cont,
#line 38 "mslice.m"
  void * mslice__cont_env_ptr);

#line 38 "mslice.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 38 "mslice.m"
  MR_Box mslice__closure_arg,
#line 38 "mslice.m"
  MR_Box mslice__wrapper_arg_1,
#line 38 "mslice.m"
  MR_Box * mslice__wrapper_arg_2);

#line 38 "mslice.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 38 "mslice.m"
  MR_Box mslice__closure_arg,
#line 38 "mslice.m"
  MR_Box mslice__wrapper_arg_1,
#line 38 "mslice.m"
  MR_Box * mslice__wrapper_arg_2);


static /* final */ const MR_Box mslice_scalar_common_1[5][3];

static /* final */ const MR_Box mslice_scalar_common_2[3][5];

static /* final */ const MR_Box mslice_scalar_common_3[2][2];

static /* final */ const MR_Box mslice_scalar_common_4[4][1];


#line 112 "mslice.m"
/* sealed */ struct mslice__vector_common_type_5_0_s {
#line 112 "mslice.m"
  const MR_Word mslice__vector_common_type_5_0__vct_5_f_0;
#line 112 "mslice.m"
  const MR_Word mslice__vector_common_type_5_0__vct_5_f_1;
#line 112 "mslice.m"
};

static /* final */ const struct mslice__vector_common_type_5_0_s mslice_vector_common_5[6];



static /* final */ const MR_Box mslice_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mslice__mslice__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mslice_scalar_common_2[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mslice_scalar_common_2[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mslice_scalar_common_2[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mslice_scalar_common_1[1])),
    ((MR_Box) (&mslice_scalar_common_1[2])),
    ((MR_Box) (&mslice_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box mslice_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mslice__mslice__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mslice__mslice__type_ctor_info_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mslice__mslice__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box mslice_scalar_common_3[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "C"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box mslice_scalar_common_4[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 100))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 35))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 12))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 20))
  },
};


static /* final */ const struct mslice__vector_common_type_5_0_s mslice_vector_common_5[6] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(3), &mslice_scalar_common_3[0])
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(2), &mslice_scalar_common_4[0])
  },
  /* row 2 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(2), &mslice_scalar_common_4[1])
  },
  /* row 3 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(2), &mslice_scalar_common_4[2])
  },
  /* row 4 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(2), &mslice_scalar_common_4[3])
  },
  /* row 5 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(3), &mslice_scalar_common_3[1])
  },
};


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



#line 421 "mslice.c"
static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_0 = {
  (MR_String) "sort",
  (MR_Integer) 0
};

#line 427 "mslice.c"
static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_1 = {
  (MR_String) "max_row",
  (MR_Integer) 1
};

#line 433 "mslice.c"
static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_2 = {
  (MR_String) "max_pred_column",
  (MR_Integer) 2
};

#line 439 "mslice.c"
static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_3 = {
  (MR_String) "max_path_column",
  (MR_Integer) 3
};

#line 445 "mslice.c"
static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_4 = {
  (MR_String) "max_file_column",
  (MR_Integer) 4
};

#line 451 "mslice.c"
static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_5 = {
  (MR_String) "modulename",
  (MR_Integer) 5
};

#line 457 "mslice.c"
static const MR_EnumFunctorDescPtr mslice__mslice__enum_value_ordered_option_0[6] = {
  &mslice__mslice__enum_functor_desc_option_0_0,
  &mslice__mslice__enum_functor_desc_option_0_1,
  &mslice__mslice__enum_functor_desc_option_0_2,
  &mslice__mslice__enum_functor_desc_option_0_3,
  &mslice__mslice__enum_functor_desc_option_0_4,
  &mslice__mslice__enum_functor_desc_option_0_5
};

#line 467 "mslice.c"
static const MR_EnumFunctorDescPtr mslice__mslice__enum_name_ordered_option_0[6] = {
  &mslice__mslice__enum_functor_desc_option_0_4,
  &mslice__mslice__enum_functor_desc_option_0_3,
  &mslice__mslice__enum_functor_desc_option_0_2,
  &mslice__mslice__enum_functor_desc_option_0_1,
  &mslice__mslice__enum_functor_desc_option_0_5,
  &mslice__mslice__enum_functor_desc_option_0_0
};

#line 477 "mslice.c"
static const MR_Integer mslice__mslice__functor_number_map_option_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4
};

#line 487 "mslice.c"
const MR_TypeCtorInfo_Struct mslice__mslice__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mslice____Unify____option_0_0_10001)),
  ((MR_Box) (mslice____Compare____option_0_0_10001)),
  (MR_String) "mslice",
  (MR_String) "option",
  {
    mslice__mslice__enum_name_ordered_option_0
  },
  {
    mslice__mslice__enum_value_ordered_option_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mslice__mslice__functor_number_map_option_0
};

#line 508 "mslice.c"
static const MR_FA_TypeInfo_Struct2 mslice__tree234__ti_tree234_2mslice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mslice__mslice__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 517 "mslice.c"
const MR_TypeCtorInfo_Struct mslice__mslice__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mslice____Unify____option_table_0_0_10001)),
  ((MR_Box) (mslice____Compare____option_table_0_0_10001)),
  (MR_String) "mslice",
  (MR_String) "option_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mslice__tree234__ti_tree234_2mslice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 538 "mslice.c"
static MR_bool MR_CALL 
mslice____Unify____option_0_0_10001(
#line 541 "mslice.c"
  MR_Box mslice__wrapper_arg_1,
#line 543 "mslice.c"
  MR_Box mslice__wrapper_arg_2)
#line 545 "mslice.c"
{
#line 547 "mslice.c"
  {
#line 549 "mslice.c"
    MR_bool mslice__succeeded;

#line 552 "mslice.c"
    {
#line 554 "mslice.c"
      mslice__succeeded = mslice____Unify____option_0_0(((MR_Word) mslice__wrapper_arg_1), ((MR_Word) mslice__wrapper_arg_2));
    }
#line 557 "mslice.c"
    return mslice__succeeded;
#line 559 "mslice.c"
  }
#line 561 "mslice.c"
}

#line 564 "mslice.c"
static void MR_CALL 
mslice____Compare____option_0_0_10001(
#line 567 "mslice.c"
  MR_Box * mslice__wrapper_arg_1,
#line 569 "mslice.c"
  MR_Box mslice__wrapper_arg_2,
#line 571 "mslice.c"
  MR_Box mslice__wrapper_arg_3)
#line 573 "mslice.c"
{
#line 575 "mslice.c"
  {
#line 577 "mslice.c"
    MR_Word mslice__conv0_HeadVar__1_1;

#line 580 "mslice.c"
    {
#line 582 "mslice.c"
      mslice____Compare____option_0_0(&mslice__conv0_HeadVar__1_1, ((MR_Word) mslice__wrapper_arg_2), ((MR_Word) mslice__wrapper_arg_3));
    }
#line 585 "mslice.c"
    *mslice__wrapper_arg_1 = ((MR_Box) (mslice__conv0_HeadVar__1_1));
#line 587 "mslice.c"
  }
#line 589 "mslice.c"
}

#line 592 "mslice.c"
static MR_bool MR_CALL 
mslice____Unify____option_table_0_0_10001(
#line 595 "mslice.c"
  MR_Box mslice__wrapper_arg_1,
#line 597 "mslice.c"
  MR_Box mslice__wrapper_arg_2)
#line 599 "mslice.c"
{
#line 601 "mslice.c"
  {
#line 603 "mslice.c"
    MR_bool mslice__succeeded;

#line 606 "mslice.c"
    {
#line 608 "mslice.c"
      mslice__succeeded = mslice____Unify____option_table_0_0(((MR_Word) mslice__wrapper_arg_1), ((MR_Word) mslice__wrapper_arg_2));
    }
#line 611 "mslice.c"
    return mslice__succeeded;
#line 613 "mslice.c"
  }
#line 615 "mslice.c"
}

#line 618 "mslice.c"
static void MR_CALL 
mslice____Compare____option_table_0_0_10001(
#line 621 "mslice.c"
  MR_Box * mslice__wrapper_arg_1,
#line 623 "mslice.c"
  MR_Box mslice__wrapper_arg_2,
#line 625 "mslice.c"
  MR_Box mslice__wrapper_arg_3)
#line 627 "mslice.c"
{
#line 629 "mslice.c"
  {
#line 631 "mslice.c"
    MR_Word mslice__conv0_HeadVar__1_1;

#line 634 "mslice.c"
    {
#line 636 "mslice.c"
      mslice____Compare____option_table_0_0(&mslice__conv0_HeadVar__1_1, ((MR_Word) mslice__wrapper_arg_2), ((MR_Word) mslice__wrapper_arg_3));
    }
#line 639 "mslice.c"
    *mslice__wrapper_arg_1 = ((MR_Box) (mslice__conv0_HeadVar__1_1));
#line 641 "mslice.c"
  }
#line 643 "mslice.c"
}

#line 106 "mslice.m"
static void MR_CALL 
mslice____Compare____option_table_0_0(
#line 106 "mslice.m"
  MR_Word * mslice__HeadVar__1_1,
#line 106 "mslice.m"
  MR_Word mslice__HeadVar__2_2,
#line 106 "mslice.m"
  MR_Word mslice__HeadVar__3_3)
#line 106 "mslice.m"
{
#line 106 "mslice.m"
  {
#line 106 "mslice.m"
    MR_bool mslice__succeeded;
#line 106 "mslice.m"
    MR_Word mslice__Cast_HeadVar1_4 = mslice__HeadVar__2_2;
#line 106 "mslice.m"
    MR_Word mslice__Cast_HeadVar2_5 = mslice__HeadVar__3_3;

#line 106 "mslice.m"
    {
#line 106 "mslice.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mslice_scalar_common_1[0], mslice__HeadVar__1_1, ((MR_Box) (mslice__Cast_HeadVar1_4)), ((MR_Box) (mslice__Cast_HeadVar2_5)));
#line 106 "mslice.m"
      return;
    }
#line 106 "mslice.m"
  }
#line 106 "mslice.m"
}

#line 106 "mslice.m"
static MR_bool MR_CALL 
mslice____Unify____option_table_0_0(
#line 106 "mslice.m"
  MR_Word mslice__HeadVar__1_1,
#line 106 "mslice.m"
  MR_Word mslice__HeadVar__2_2)
#line 106 "mslice.m"
{
#line 106 "mslice.m"
  {
#line 106 "mslice.m"
    MR_bool mslice__succeeded;
#line 106 "mslice.m"
    MR_Word mslice__Cast_HeadVar1_3 = mslice__HeadVar__1_1;
#line 106 "mslice.m"
    MR_Word mslice__Cast_HeadVar2_4 = mslice__HeadVar__2_2;

#line 106 "mslice.m"
    {
#line 106 "mslice.m"
      return mslice__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mslice_scalar_common_1[0], ((MR_Box) (mslice__Cast_HeadVar1_3)), ((MR_Box) (mslice__Cast_HeadVar2_4)));
    }
#line 106 "mslice.m"
    return mslice__succeeded;
#line 106 "mslice.m"
  }
#line 106 "mslice.m"
}

#line 98 "mslice.m"
static void MR_CALL 
mslice____Compare____option_0_0(
#line 98 "mslice.m"
  MR_Word * mslice__HeadVar__1_1,
#line 98 "mslice.m"
  MR_Word mslice__HeadVar__2_2,
#line 98 "mslice.m"
  MR_Word mslice__HeadVar__3_3)
#line 98 "mslice.m"
{
#line 98 "mslice.m"
  {
#line 98 "mslice.m"
    MR_bool mslice__succeeded;
#line 98 "mslice.m"
    MR_Integer mslice__Cast_HeadVar1_4 = (MR_Integer) mslice__HeadVar__2_2;
#line 98 "mslice.m"
    MR_Integer mslice__Cast_HeadVar2_5 = (MR_Integer) mslice__HeadVar__3_3;

#line 98 "mslice.m"
    {
#line 98 "mslice.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mslice__HeadVar__1_1, mslice__Cast_HeadVar1_4, mslice__Cast_HeadVar2_5);
#line 98 "mslice.m"
      return;
    }
#line 98 "mslice.m"
  }
#line 98 "mslice.m"
}

#line 98 "mslice.m"
static MR_bool MR_CALL 
mslice____Unify____option_0_0(
#line 98 "mslice.m"
  MR_Word mslice__HeadVar__2_1,
#line 98 "mslice.m"
  MR_Word mslice__HeadVar__2_2)
#line 98 "mslice.m"
{
#line 749 "mslice.c"
  {
#line 751 "mslice.c"
    MR_bool mslice__succeeded = (mslice__HeadVar__2_1 == mslice__HeadVar__2_2);

#line 754 "mslice.c"
    return mslice__succeeded;
#line 756 "mslice.c"
  }
#line 98 "mslice.m"
}

#line 110 "mslice.m"
static void MR_CALL 
mslice__option_default_2_p_0(
#line 110 "mslice.m"
  MR_Word * mslice__HeadVar__1_1,
#line 110 "mslice.m"
  MR_Word * mslice__HeadVar__2_2,
#line 110 "mslice.m"
  MR_Cont mslice__cont,
#line 110 "mslice.m"
  void * mslice__cont_env_ptr)
#line 110 "mslice.m"
{
#line 112 "mslice.m"
  {
#line 112 "mslice.m"
    MR_bool mslice__succeeded;

#line 112 "mslice.m"
    {
#line 112 "mslice.m"
      MR_Integer mslice__slot_0 = (MR_Integer) 0;

#line 112 "mslice.m"
      do
#line 112 "mslice.m"
        {
#line 112 "mslice.m"
          *mslice__HeadVar__1_1 = ((&mslice_vector_common_5[0 + mslice__slot_0]))->mslice__vector_common_type_5_0__vct_5_f_0;
#line 112 "mslice.m"
          *mslice__HeadVar__2_2 = ((&mslice_vector_common_5[0 + mslice__slot_0]))->mslice__vector_common_type_5_0__vct_5_f_1;
#line 112 "mslice.m"
          {
#line 112 "mslice.m"
            mslice__cont(mslice__cont_env_ptr);
          }
#line 112 "mslice.m"
          mslice__slot_0 = (mslice__slot_0 + (MR_Integer) 1);
#line 112 "mslice.m"
        }
#line 112 "mslice.m"
      while ((mslice__slot_0 < (MR_Integer) 6));
#line 112 "mslice.m"
    }
#line 112 "mslice.m"
  }
#line 110 "mslice.m"
}

#line 109 "mslice.m"
static MR_bool MR_CALL 
mslice__long_option_2_p_0(
#line 109 "mslice.m"
  MR_String mslice__HeadVar__1_1,
#line 109 "mslice.m"
  MR_Word * mslice__HeadVar__2_2)
#line 109 "mslice.m"
{
#line 126 "mslice.m"
  {
#line 126 "mslice.m"
    MR_bool mslice__succeeded;

#line 126 "mslice.m"
    if ((strcmp(mslice__HeadVar__1_1, (MR_String) "sort") == 0))
#line 126 "mslice.m"
      {
#line 126 "mslice.m"
        *mslice__HeadVar__2_2 = (MR_Integer) 0;
#line 126 "mslice.m"
        mslice__succeeded = MR_TRUE;
#line 126 "mslice.m"
      }
#line 126 "mslice.m"
    else
#line 126 "mslice.m"
      if ((strcmp(mslice__HeadVar__1_1, (MR_String) "limit") == 0))
#line 127 "mslice.m"
        {
#line 127 "mslice.m"
          *mslice__HeadVar__2_2 = (MR_Integer) 1;
#line 127 "mslice.m"
          mslice__succeeded = MR_TRUE;
#line 127 "mslice.m"
        }
#line 126 "mslice.m"
      else
#line 126 "mslice.m"
        if ((strcmp(mslice__HeadVar__1_1, (MR_String) "module") == 0))
#line 131 "mslice.m"
          {
#line 131 "mslice.m"
            *mslice__HeadVar__2_2 = (MR_Integer) 5;
#line 131 "mslice.m"
            mslice__succeeded = MR_TRUE;
#line 131 "mslice.m"
          }
#line 126 "mslice.m"
        else
#line 126 "mslice.m"
          if ((strcmp(mslice__HeadVar__1_1, (MR_String) "max-file-column") == 0))
#line 130 "mslice.m"
            {
#line 130 "mslice.m"
              *mslice__HeadVar__2_2 = (MR_Integer) 4;
#line 130 "mslice.m"
              mslice__succeeded = MR_TRUE;
#line 130 "mslice.m"
            }
#line 126 "mslice.m"
          else
#line 126 "mslice.m"
            if ((strcmp(mslice__HeadVar__1_1, (MR_String) "max-name-column") == 0))
#line 128 "mslice.m"
              {
#line 128 "mslice.m"
                *mslice__HeadVar__2_2 = (MR_Integer) 2;
#line 128 "mslice.m"
                mslice__succeeded = MR_TRUE;
#line 128 "mslice.m"
              }
#line 126 "mslice.m"
            else
#line 126 "mslice.m"
              if ((strcmp(mslice__HeadVar__1_1, (MR_String) "max-path-column") == 0))
#line 129 "mslice.m"
                {
#line 129 "mslice.m"
                  *mslice__HeadVar__2_2 = (MR_Integer) 3;
#line 129 "mslice.m"
                  mslice__succeeded = MR_TRUE;
#line 129 "mslice.m"
                }
#line 126 "mslice.m"
              else
#line 126 "mslice.m"
                mslice__succeeded = MR_FALSE;
#line 126 "mslice.m"
    return mslice__succeeded;
#line 126 "mslice.m"
  }
#line 109 "mslice.m"
}

#line 108 "mslice.m"
static MR_bool MR_CALL 
mslice__short_option_2_p_0(
#line 108 "mslice.m"
  MR_Char mslice__HeadVar__1_1,
#line 108 "mslice.m"
  MR_Word * mslice__HeadVar__2_2)
#line 108 "mslice.m"
{
#line 119 "mslice.m"
  {
#line 119 "mslice.m"
    MR_bool mslice__succeeded;

#line 119 "mslice.m"
    if ((mslice__HeadVar__1_1 == (MR_Char) 102))
#line 123 "mslice.m"
      {
#line 123 "mslice.m"
        *mslice__HeadVar__2_2 = (MR_Integer) 4;
#line 123 "mslice.m"
        mslice__succeeded = MR_TRUE;
#line 123 "mslice.m"
      }
#line 119 "mslice.m"
    else
#line 119 "mslice.m"
      if ((mslice__HeadVar__1_1 == (MR_Char) 108))
#line 120 "mslice.m"
        {
#line 120 "mslice.m"
          *mslice__HeadVar__2_2 = (MR_Integer) 1;
#line 120 "mslice.m"
          mslice__succeeded = MR_TRUE;
#line 120 "mslice.m"
        }
#line 119 "mslice.m"
      else
#line 119 "mslice.m"
        if ((mslice__HeadVar__1_1 == (MR_Char) 109))
#line 124 "mslice.m"
          {
#line 124 "mslice.m"
            *mslice__HeadVar__2_2 = (MR_Integer) 5;
#line 124 "mslice.m"
            mslice__succeeded = MR_TRUE;
#line 124 "mslice.m"
          }
#line 119 "mslice.m"
        else
#line 119 "mslice.m"
          if ((mslice__HeadVar__1_1 == (MR_Char) 110))
#line 121 "mslice.m"
            {
#line 121 "mslice.m"
              *mslice__HeadVar__2_2 = (MR_Integer) 2;
#line 121 "mslice.m"
              mslice__succeeded = MR_TRUE;
#line 121 "mslice.m"
            }
#line 119 "mslice.m"
          else
#line 119 "mslice.m"
            if ((mslice__HeadVar__1_1 == (MR_Char) 112))
#line 122 "mslice.m"
              {
#line 122 "mslice.m"
                *mslice__HeadVar__2_2 = (MR_Integer) 3;
#line 122 "mslice.m"
                mslice__succeeded = MR_TRUE;
#line 122 "mslice.m"
              }
#line 119 "mslice.m"
            else
#line 119 "mslice.m"
              if ((mslice__HeadVar__1_1 == (MR_Char) 115))
#line 119 "mslice.m"
                {
#line 119 "mslice.m"
                  *mslice__HeadVar__2_2 = (MR_Integer) 0;
#line 119 "mslice.m"
                  mslice__succeeded = MR_TRUE;
#line 119 "mslice.m"
                }
#line 119 "mslice.m"
              else
#line 119 "mslice.m"
                mslice__succeeded = MR_FALSE;
#line 119 "mslice.m"
    return mslice__succeeded;
#line 119 "mslice.m"
  }
#line 108 "mslice.m"
}

#line 38 "mslice.m"
static void MR_CALL 
main_2_p_0_3(
#line 38 "mslice.m"
  void * mslice__env_ptr_arg)
#line 38 "mslice.m"
{
#line 38 "mslice.m"
  {
#line 38 "mslice.m"
    struct mslice__main_2_p_0_4_env_0_s * mslice__env_ptr = (struct mslice__main_2_p_0_4_env_0_s *) mslice__env_ptr_arg;

#line 38 "mslice.m"
    *((mslice__env_ptr)->mslice__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mslice__env_ptr)->mslice__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
#line 38 "mslice.m"
    *((mslice__env_ptr)->mslice__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mslice__env_ptr)->mslice__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
#line 38 "mslice.m"
    {
#line 38 "mslice.m"
      ((mslice__env_ptr)->mslice__main_2_p_0_4_env_0__cont)((mslice__env_ptr)->mslice__main_2_p_0_4_env_0__cont_env_ptr);
#line 38 "mslice.m"
      return;
    }
#line 38 "mslice.m"
  }
#line 38 "mslice.m"
}

#line 38 "mslice.m"
static void MR_CALL 
main_2_p_0_4(
#line 38 "mslice.m"
  MR_Box mslice__closure_arg,
#line 38 "mslice.m"
  MR_Box * mslice__wrapper_arg_1,
#line 38 "mslice.m"
  MR_Box * mslice__wrapper_arg_2,
#line 38 "mslice.m"
  MR_Cont mslice__cont,
#line 38 "mslice.m"
  void * mslice__cont_env_ptr)
#line 38 "mslice.m"
{
#line 38 "mslice.m"
  {
#line 38 "mslice.m"
    struct mslice__main_2_p_0_4_env_0_s mslice__env;

#line 38 "mslice.m"
    (mslice__env).mslice__main_2_p_0_4_env_0__wrapper_arg_1 = mslice__wrapper_arg_1;
#line 38 "mslice.m"
    (mslice__env).mslice__main_2_p_0_4_env_0__wrapper_arg_2 = mslice__wrapper_arg_2;
#line 38 "mslice.m"
    (mslice__env).mslice__main_2_p_0_4_env_0__cont = mslice__cont;
#line 38 "mslice.m"
    (mslice__env).mslice__main_2_p_0_4_env_0__cont_env_ptr = mslice__cont_env_ptr;
#line 38 "mslice.m"
    {
#line 38 "mslice.m"
      MR_Box mslice__closure = mslice__closure_arg;

#line 38 "mslice.m"
      {
#line 38 "mslice.m"
        mslice__option_default_2_p_0(&(mslice__env).mslice__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mslice__env).mslice__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &mslice__env);
      }
#line 38 "mslice.m"
    }
#line 38 "mslice.m"
  }
#line 38 "mslice.m"
}

#line 38 "mslice.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 38 "mslice.m"
  MR_Box mslice__closure_arg,
#line 38 "mslice.m"
  MR_Box mslice__wrapper_arg_1,
#line 38 "mslice.m"
  MR_Box * mslice__wrapper_arg_2)
#line 38 "mslice.m"
{
#line 38 "mslice.m"
  {
#line 38 "mslice.m"
    MR_bool mslice__succeeded;
#line 38 "mslice.m"
    MR_Box mslice__closure = mslice__closure_arg;
#line 38 "mslice.m"
    MR_Word mslice__conv1_HeadVar__2_2;

#line 38 "mslice.m"
    {
#line 38 "mslice.m"
      mslice__succeeded = mslice__long_option_2_p_0(((MR_String) mslice__wrapper_arg_1), &mslice__conv1_HeadVar__2_2);
    }
#line 38 "mslice.m"
    if (mslice__succeeded)
#line 38 "mslice.m"
      {
#line 38 "mslice.m"
        *mslice__wrapper_arg_2 = ((MR_Box) (mslice__conv1_HeadVar__2_2));
#line 38 "mslice.m"
        mslice__succeeded = MR_TRUE;
#line 38 "mslice.m"
      }
#line 38 "mslice.m"
    return mslice__succeeded;
#line 38 "mslice.m"
  }
#line 38 "mslice.m"
}

#line 38 "mslice.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 38 "mslice.m"
  MR_Box mslice__closure_arg,
#line 38 "mslice.m"
  MR_Box mslice__wrapper_arg_1,
#line 38 "mslice.m"
  MR_Box * mslice__wrapper_arg_2)
#line 38 "mslice.m"
{
#line 38 "mslice.m"
  {
#line 38 "mslice.m"
    MR_bool mslice__succeeded;
#line 38 "mslice.m"
    MR_Box mslice__closure = mslice__closure_arg;
#line 38 "mslice.m"
    MR_Word mslice__conv0_HeadVar__2_2;

#line 38 "mslice.m"
    {
#line 38 "mslice.m"
      mslice__succeeded = mslice__short_option_2_p_0(((MR_Char) (MR_Word) mslice__wrapper_arg_1), &mslice__conv0_HeadVar__2_2);
    }
#line 38 "mslice.m"
    if (mslice__succeeded)
#line 38 "mslice.m"
      {
#line 38 "mslice.m"
        *mslice__wrapper_arg_2 = ((MR_Box) (mslice__conv0_HeadVar__2_2));
#line 38 "mslice.m"
        mslice__succeeded = MR_TRUE;
#line 38 "mslice.m"
      }
#line 38 "mslice.m"
    return mslice__succeeded;
#line 38 "mslice.m"
  }
#line 38 "mslice.m"
}

#line 19 "mslice.m"
void MR_CALL 
main_2_p_0(void)
#line 19 "mslice.m"
{
#line 35 "mslice.m"
  {
#line 35 "mslice.m"
    MR_bool mslice__succeeded;
#line 35 "mslice.m"
    MR_Word mslice__TypeCtorInfo_56_56;
#line 35 "mslice.m"
    MR_Word mslice__Args0_4;
#line 35 "mslice.m"
    MR_Word mslice__Args_6;
#line 35 "mslice.m"
    MR_Word mslice__GetoptResult_7;

#line 36 "mslice.m"
    {
#line 36 "mslice.m"
      mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    }
#line 37 "mslice.m"
    {
#line 37 "mslice.m"
      mercury__io__command_line_arguments_3_p_0(&mslice__Args0_4);
    }
#line 1185 "mslice.c"
    mslice__TypeCtorInfo_56_56 = (MR_Word) &mslice__mslice__type_ctor_info_option_0;
#line 39 "mslice.m"
    {
#line 39 "mslice.m"
      mercury__getopt__process_options_4_p_0(mslice__TypeCtorInfo_56_56, (MR_Word) MR_mkword(MR_mktag(2), &mslice_scalar_common_1[4]), mslice__Args0_4, &mslice__Args_6, &mslice__GetoptResult_7);
    }
#line 82 "mslice.m"
    if (((MR_tag((MR_Word) mslice__GetoptResult_7)) == (MR_mktag((MR_Integer) 1))))
#line 83 "mslice.m"
      {
#line 83 "mslice.m"
        MR_String mslice__GetoptErrorMsg_24 = ((MR_String) (MR_hl_field(MR_mktag(1), mslice__GetoptResult_7, (MR_Integer) 0)));

#line 84 "mslice.m"
        {
#line 84 "mslice.m"
          mercury__io__write_string_3_p_0(mslice__GetoptErrorMsg_24);
        }
#line 85 "mslice.m"
        {
#line 85 "mslice.m"
          mercury__io__nl_2_p_0();
#line 85 "mslice.m"
          return;
        }
#line 83 "mslice.m"
      }
#line 82 "mslice.m"
    else
#line 41 "mslice.m"
      {
#line 41 "mslice.m"
        MR_Word mslice__OptionTable_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mslice__GetoptResult_7, (MR_Integer) 0)));

#line 45 "mslice.m"
        if ((mslice__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 90 "mslice.m"
          {
#line 91 "mslice.m"
            {
#line 91 "mslice.m"
              mercury__io__write_string_3_p_0((MR_String) "Usage: mslice [-s sortspec] [-m module] [-l N] [-n N] [-p N] [-f N] filename\n");
#line 91 "mslice.m"
              return;
            }
#line 90 "mslice.m"
          }
#line 45 "mslice.m"
        else
#line 45 "mslice.m"
          {
#line 45 "mslice.m"
            MR_Word mslice__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mslice__Args_6, (MR_Integer) 1)));
#line 45 "mslice.m"
            MR_String mslice__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(1), mslice__Args_6, (MR_Integer) 0)));

#line 45 "mslice.m"
            if ((mslice__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 46 "mslice.m"
              {
#line 46 "mslice.m"
                MR_String mslice__SortStr_10;
#line 46 "mslice.m"
                MR_Integer mslice__MaxRow_11;
#line 46 "mslice.m"
                MR_Integer mslice__MaxPredColumn_12;
#line 46 "mslice.m"
                MR_Integer mslice__MaxPathColumn_13;
#line 46 "mslice.m"
                MR_Integer mslice__MaxFileColumn_14;
#line 46 "mslice.m"
                MR_String mslice__Module_15;
#line 46 "mslice.m"
                MR_Word mslice__MaybeMaxPredColumn_16;
#line 46 "mslice.m"
                MR_Word mslice__MaybeMaxPathColumn_17;
#line 46 "mslice.m"
                MR_Word mslice__MaybeMaxFileColumn_18;
#line 46 "mslice.m"
                MR_String mslice__SliceStr_19;
#line 46 "mslice.m"
                MR_String mslice__Problem_20;

#line 47 "mslice.m"
                {
#line 47 "mslice.m"
                  mercury__getopt__lookup_string_option_3_p_0(mslice__TypeCtorInfo_56_56, mslice__OptionTable_8, ((MR_Box) ((MR_Integer) 0)), &mslice__SortStr_10);
                }
#line 48 "mslice.m"
                {
#line 48 "mslice.m"
                  mercury__getopt__lookup_int_option_3_p_0(mslice__TypeCtorInfo_56_56, mslice__OptionTable_8, ((MR_Box) ((MR_Integer) 1)), &mslice__MaxRow_11);
                }
#line 49 "mslice.m"
                {
#line 49 "mslice.m"
                  mercury__getopt__lookup_int_option_3_p_0(mslice__TypeCtorInfo_56_56, mslice__OptionTable_8, ((MR_Box) ((MR_Integer) 2)), &mslice__MaxPredColumn_12);
                }
#line 50 "mslice.m"
                {
#line 50 "mslice.m"
                  mercury__getopt__lookup_int_option_3_p_0(mslice__TypeCtorInfo_56_56, mslice__OptionTable_8, ((MR_Box) ((MR_Integer) 3)), &mslice__MaxPathColumn_13);
                }
#line 51 "mslice.m"
                {
#line 51 "mslice.m"
                  mercury__getopt__lookup_int_option_3_p_0(mslice__TypeCtorInfo_56_56, mslice__OptionTable_8, ((MR_Box) ((MR_Integer) 4)), &mslice__MaxFileColumn_14);
                }
#line 52 "mslice.m"
                {
#line 52 "mslice.m"
                  mercury__getopt__lookup_string_option_3_p_0(mslice__TypeCtorInfo_56_56, mslice__OptionTable_8, ((MR_Box) ((MR_Integer) 5)), &mslice__Module_15);
                }
#line 53 "mslice.m"
                mslice__succeeded = (mslice__MaxPredColumn_12 == (MR_Integer) 0);
#line 55 "mslice.m"
                if (mslice__succeeded)
#line 54 "mslice.m"
                  mslice__MaybeMaxPredColumn_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 55 "mslice.m"
                else
#line 56 "mslice.m"
                  {
#line 56 "mslice.m"
                    mslice__MaybeMaxPredColumn_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 56 "mslice.m"
                    MR_hl_field(MR_mktag(1), mslice__MaybeMaxPredColumn_16, 0) = ((MR_Box) (mslice__MaxPredColumn_12));
#line 56 "mslice.m"
                  }
#line 58 "mslice.m"
                mslice__succeeded = (mslice__MaxPathColumn_13 == (MR_Integer) 0);
#line 60 "mslice.m"
                if (mslice__succeeded)
#line 59 "mslice.m"
                  mslice__MaybeMaxPathColumn_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 60 "mslice.m"
                else
#line 61 "mslice.m"
                  {
#line 61 "mslice.m"
                    mslice__MaybeMaxPathColumn_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 61 "mslice.m"
                    MR_hl_field(MR_mktag(1), mslice__MaybeMaxPathColumn_17, 0) = ((MR_Box) (mslice__MaxPathColumn_13));
#line 61 "mslice.m"
                  }
#line 63 "mslice.m"
                mslice__succeeded = (mslice__MaxFileColumn_14 == (MR_Integer) 0);
#line 65 "mslice.m"
                if (mslice__succeeded)
#line 64 "mslice.m"
                  mslice__MaybeMaxFileColumn_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 65 "mslice.m"
                else
#line 66 "mslice.m"
                  {
#line 66 "mslice.m"
                    mslice__MaybeMaxFileColumn_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 66 "mslice.m"
                    MR_hl_field(MR_mktag(1), mslice__MaybeMaxFileColumn_18, 0) = ((MR_Box) (mslice__MaxFileColumn_14));
#line 66 "mslice.m"
                  }
#line 68 "mslice.m"
                {
#line 68 "mslice.m"
                  mdbcomp__slice_and_dice__read_slice_to_string_11_p_0(mslice__V_58_58, mslice__SortStr_10, mslice__MaxRow_11, mslice__MaybeMaxPredColumn_16, mslice__MaybeMaxPathColumn_17, mslice__MaybeMaxFileColumn_18, mslice__Module_15, &mslice__SliceStr_19, &mslice__Problem_20);
                }
#line 71 "mslice.m"
                mslice__succeeded = (strcmp(mslice__Problem_20, (MR_String) "") == 0);
#line 73 "mslice.m"
                if (mslice__succeeded)
#line 72 "mslice.m"
                  {
#line 72 "mslice.m"
                    mercury__io__write_string_3_p_0(mslice__SliceStr_19);
#line 72 "mslice.m"
                    return;
                  }
#line 73 "mslice.m"
                else
#line 74 "mslice.m"
                  {
#line 74 "mslice.m"
                    {
#line 74 "mslice.m"
                      mercury__io__write_string_3_p_0(mslice__Problem_20);
                    }
#line 75 "mslice.m"
                    {
#line 75 "mslice.m"
                      mercury__io__nl_2_p_0();
                    }
#line 76 "mslice.m"
                    {
#line 76 "mslice.m"
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 76 "mslice.m"
                      return;
                    }
#line 74 "mslice.m"
                  }
#line 46 "mslice.m"
              }
#line 45 "mslice.m"
            else
#line 90 "mslice.m"
              {
#line 91 "mslice.m"
                {
#line 91 "mslice.m"
                  mercury__io__write_string_3_p_0((MR_String) "Usage: mslice [-s sortspec] [-m module] [-l N] [-n N] [-p N] [-f N] filename\n");
#line 91 "mslice.m"
                  return;
                }
#line 90 "mslice.m"
              }
#line 45 "mslice.m"
          }
#line 41 "mslice.m"
      }
#line 35 "mslice.m"
  }
#line 19 "mslice.m"
}

void mercury__mslice__init(void)
{
}

void mercury__mslice__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mslice__mslice__type_ctor_info_option_0);
	MR_register_type_ctor_info(&mslice__mslice__type_ctor_info_option_table_0);
}

void mercury__mslice__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mslice. */
