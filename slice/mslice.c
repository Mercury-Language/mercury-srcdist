/*
** Automatically generated from `mslice.m'
** by the Mercury compiler,
** version rotd-2016-02-08
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


/* :- module mslice. */
/* :- implementation. */

/*
INIT mercury__mslice__init
ENDINIT
*/

#include "mslice.mih"


#include "mdbcomp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.shared_utilities.mih"
#include "mdbcomp.slice_and_dice.mih"
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
#include "getopt.mih"
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



struct mslice__main_2_p_0_4_env_0_s {
  MR_Box * mslice__main_2_p_0_4_env_0__wrapper_arg_1;
  MR_Box * mslice__main_2_p_0_4_env_0__wrapper_arg_2;
  MR_Cont mslice__main_2_p_0_4_env_0__cont;
  void * mslice__main_2_p_0_4_env_0__cont_env_ptr;
  MR_Word mslice__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word mslice__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
};


static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_0;

static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_1;

static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_2;

static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_3;

static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_4;

static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_5;

static const MR_EnumFunctorDescPtr mslice__mslice__enum_value_ordered_option_0[6];

static const MR_EnumFunctorDescPtr mslice__mslice__enum_name_ordered_option_0[6];

static const MR_Integer mslice__mslice__functor_number_map_option_0[6];

static const MR_FA_TypeInfo_Struct2 mslice__tree234__ti_tree234_2mslice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static MR_bool MR_CALL 
mslice____Unify____option_0_0_10001(
  MR_Box mslice__wrapper_arg_1,
  MR_Box mslice__wrapper_arg_2);

static void MR_CALL 
mslice____Compare____option_0_0_10001(
  MR_Box * mslice__wrapper_arg_1,
  MR_Box mslice__wrapper_arg_2,
  MR_Box mslice__wrapper_arg_3);

static MR_bool MR_CALL 
mslice____Unify____option_table_0_0_10001(
  MR_Box mslice__wrapper_arg_1,
  MR_Box mslice__wrapper_arg_2);

static void MR_CALL 
mslice____Compare____option_table_0_0_10001(
  MR_Box * mslice__wrapper_arg_1,
  MR_Box mslice__wrapper_arg_2,
  MR_Box mslice__wrapper_arg_3);

static void MR_CALL 
mslice____Compare____option_table_0_0(
  MR_Word * mslice__HeadVar__1_1,
  MR_Word mslice__HeadVar__2_2,
  MR_Word mslice__HeadVar__3_3);

static MR_bool MR_CALL 
mslice____Unify____option_table_0_0(
  MR_Word mslice__HeadVar__1_1,
  MR_Word mslice__HeadVar__2_2);

static void MR_CALL 
mslice____Compare____option_0_0(
  MR_Word * mslice__HeadVar__1_1,
  MR_Word mslice__HeadVar__2_2,
  MR_Word mslice__HeadVar__3_3);

static MR_bool MR_CALL 
mslice____Unify____option_0_0(
  MR_Word mslice__HeadVar__2_1,
  MR_Word mslice__HeadVar__2_2);

static void MR_CALL 
mslice__option_default_2_p_0(
  MR_Word * mslice__HeadVar__1_1,
  MR_Word * mslice__HeadVar__2_2,
  MR_Cont mslice__cont,
  void * mslice__cont_env_ptr);

static MR_bool MR_CALL 
mslice__long_option_2_p_0(
  MR_String mslice__HeadVar__1_1,
  MR_Word * mslice__HeadVar__2_2);

static MR_bool MR_CALL 
mslice__short_option_2_p_0(
  MR_Char mslice__HeadVar__1_1,
  MR_Word * mslice__HeadVar__2_2);

static void MR_CALL 
main_2_p_0_3(
  void * mslice__env_ptr_arg);

static void MR_CALL 
main_2_p_0_4(
  MR_Box mslice__closure_arg,
  MR_Box * mslice__wrapper_arg_1,
  MR_Box * mslice__wrapper_arg_2,
  MR_Cont mslice__cont,
  void * mslice__cont_env_ptr);

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box mslice__closure_arg,
  MR_Box mslice__wrapper_arg_1,
  MR_Box * mslice__wrapper_arg_2);

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box mslice__closure_arg,
  MR_Box mslice__wrapper_arg_1,
  MR_Box * mslice__wrapper_arg_2);


static /* final */ const MR_Box mslice_scalar_common_1[5][3];

static /* final */ const MR_Box mslice_scalar_common_2[3][5];

static /* final */ const MR_Box mslice_scalar_common_5[2][2];

static /* final */ const MR_Box mslice_scalar_common_6[4][1];


/* sealed */ struct mslice__vector_common_type_3_0_s {
  const MR_Word mslice__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct mslice__vector_common_type_3_0_s mslice_vector_common_3[14];

/* sealed */ struct mslice__vector_common_type_4_0_s {
  const MR_String mslice__vector_common_type_4_0__vct_4_f_0;
  const MR_Word mslice__vector_common_type_4_0__vct_4_f_1;
};

static /* final */ const struct mslice__vector_common_type_4_0_s mslice_vector_common_4[6];

/* sealed */ struct mslice__vector_common_type_7_0_s {
  const MR_Word mslice__vector_common_type_7_0__vct_7_f_0;
  const MR_Word mslice__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct mslice__vector_common_type_7_0_s mslice_vector_common_7[6];



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

static /* final */ const MR_Box mslice_scalar_common_5[2][2] = {
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

static /* final */ const MR_Box mslice_scalar_common_6[4][1] = {
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


static /* final */ const struct mslice__vector_common_type_3_0_s mslice_vector_common_3[14] = {
  /* row 0 */   {     (MR_Integer) 4 },
  /* row 1 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 2 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 3 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 4 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 5 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 6 */   {     (MR_Integer) 1 },
  /* row 7 */   {     (MR_Integer) 5 },
  /* row 8 */   {     (MR_Integer) 2 },
  /* row 9 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 10 */   {     (MR_Integer) 3 },
  /* row 11 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 12 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 13 */   {     (MR_Integer) 0 },
};

static /* final */ const struct mslice__vector_common_type_4_0_s mslice_vector_common_4[6] = {
  /* row 0 */
  {
    (MR_String) "limit",
    (MR_Integer) 1
  },
  /* row 1 */
  {
    (MR_String) "max-file-column",
    (MR_Integer) 4
  },
  /* row 2 */
  {
    (MR_String) "max-name-column",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "max-path-column",
    (MR_Integer) 3
  },
  /* row 4 */
  {
    (MR_String) "module",
    (MR_Integer) 5
  },
  /* row 5 */
  {
    (MR_String) "sort",
    (MR_Integer) 0
  },
};

static /* final */ const struct mslice__vector_common_type_7_0_s mslice_vector_common_7[6] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(3), &mslice_scalar_common_5[0])
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(2), &mslice_scalar_common_6[0])
  },
  /* row 2 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(2), &mslice_scalar_common_6[1])
  },
  /* row 3 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(2), &mslice_scalar_common_6[2])
  },
  /* row 4 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(2), &mslice_scalar_common_6[3])
  },
  /* row 5 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(3), &mslice_scalar_common_5[1])
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_0 = {
  (MR_String) "sort",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_1 = {
  (MR_String) "max_row",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_2 = {
  (MR_String) "max_pred_column",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_3 = {
  (MR_String) "max_path_column",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_4 = {
  (MR_String) "max_file_column",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_5 = {
  (MR_String) "modulename",
  (MR_Integer) 5
};

static const MR_EnumFunctorDescPtr mslice__mslice__enum_value_ordered_option_0[6] = {
  &mslice__mslice__enum_functor_desc_option_0_0,
  &mslice__mslice__enum_functor_desc_option_0_1,
  &mslice__mslice__enum_functor_desc_option_0_2,
  &mslice__mslice__enum_functor_desc_option_0_3,
  &mslice__mslice__enum_functor_desc_option_0_4,
  &mslice__mslice__enum_functor_desc_option_0_5
};

static const MR_EnumFunctorDescPtr mslice__mslice__enum_name_ordered_option_0[6] = {
  &mslice__mslice__enum_functor_desc_option_0_4,
  &mslice__mslice__enum_functor_desc_option_0_3,
  &mslice__mslice__enum_functor_desc_option_0_2,
  &mslice__mslice__enum_functor_desc_option_0_1,
  &mslice__mslice__enum_functor_desc_option_0_5,
  &mslice__mslice__enum_functor_desc_option_0_0
};

static const MR_Integer mslice__mslice__functor_number_map_option_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct mslice__mslice__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mslice____Unify____option_0_0_10001)),
  ((MR_Box) (mslice____Compare____option_0_0_10001)),
  (MR_String) "mslice",
  (MR_String) "option",
  {     mslice__mslice__enum_name_ordered_option_0 },
  {     mslice__mslice__enum_value_ordered_option_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mslice__mslice__functor_number_map_option_0
};

static const MR_FA_TypeInfo_Struct2 mslice__tree234__ti_tree234_2mslice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mslice__mslice__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

const MR_TypeCtorInfo_Struct mslice__mslice__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mslice____Unify____option_table_0_0_10001)),
  ((MR_Box) (mslice____Compare____option_table_0_0_10001)),
  (MR_String) "mslice",
  (MR_String) "option_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mslice__tree234__ti_tree234_2mslice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mslice____Unify____option_0_0_10001(
  MR_Box mslice__wrapper_arg_1,
  MR_Box mslice__wrapper_arg_2)
{
  {
    MR_bool mslice__succeeded;

    {
      mslice__succeeded = mslice____Unify____option_0_0(((MR_Word) mslice__wrapper_arg_1), ((MR_Word) mslice__wrapper_arg_2));
    }
    return mslice__succeeded;
  }
}

static void MR_CALL 
mslice____Compare____option_0_0_10001(
  MR_Box * mslice__wrapper_arg_1,
  MR_Box mslice__wrapper_arg_2,
  MR_Box mslice__wrapper_arg_3)
{
  {
    MR_Word mslice__conv0_HeadVar__1_1;

    {
      mslice____Compare____option_0_0(&mslice__conv0_HeadVar__1_1, ((MR_Word) mslice__wrapper_arg_2), ((MR_Word) mslice__wrapper_arg_3));
    }
    *mslice__wrapper_arg_1 = ((MR_Box) (mslice__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mslice____Unify____option_table_0_0_10001(
  MR_Box mslice__wrapper_arg_1,
  MR_Box mslice__wrapper_arg_2)
{
  {
    MR_bool mslice__succeeded;

    {
      mslice__succeeded = mslice____Unify____option_table_0_0(((MR_Word) mslice__wrapper_arg_1), ((MR_Word) mslice__wrapper_arg_2));
    }
    return mslice__succeeded;
  }
}

static void MR_CALL 
mslice____Compare____option_table_0_0_10001(
  MR_Box * mslice__wrapper_arg_1,
  MR_Box mslice__wrapper_arg_2,
  MR_Box mslice__wrapper_arg_3)
{
  {
    MR_Word mslice__conv0_HeadVar__1_1;

    {
      mslice____Compare____option_table_0_0(&mslice__conv0_HeadVar__1_1, ((MR_Word) mslice__wrapper_arg_2), ((MR_Word) mslice__wrapper_arg_3));
    }
    *mslice__wrapper_arg_1 = ((MR_Box) (mslice__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mslice____Compare____option_table_0_0(
  MR_Word * mslice__HeadVar__1_1,
  MR_Word mslice__HeadVar__2_2,
  MR_Word mslice__HeadVar__3_3)
{
  {
    MR_bool mslice__succeeded;
    MR_Word mslice__Cast_HeadVar1_4 = mslice__HeadVar__2_2;
    MR_Word mslice__Cast_HeadVar2_5 = mslice__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mslice_scalar_common_1[0], mslice__HeadVar__1_1, ((MR_Box) (mslice__Cast_HeadVar1_4)), ((MR_Box) (mslice__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
mslice____Unify____option_table_0_0(
  MR_Word mslice__HeadVar__1_1,
  MR_Word mslice__HeadVar__2_2)
{
  {
    MR_bool mslice__succeeded;
    MR_Word mslice__Cast_HeadVar1_3 = mslice__HeadVar__1_1;
    MR_Word mslice__Cast_HeadVar2_4 = mslice__HeadVar__2_2;

    {
      mslice__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mslice_scalar_common_1[0], ((MR_Box) (mslice__Cast_HeadVar1_3)), ((MR_Box) (mslice__Cast_HeadVar2_4)));
    }
    return mslice__succeeded;
  }
}

static void MR_CALL 
mslice____Compare____option_0_0(
  MR_Word * mslice__HeadVar__1_1,
  MR_Word mslice__HeadVar__2_2,
  MR_Word mslice__HeadVar__3_3)
{
  {
    MR_bool mslice__succeeded;
    MR_Integer mslice__Cast_HeadVar1_4 = (MR_Integer) mslice__HeadVar__2_2;
    MR_Integer mslice__Cast_HeadVar2_5 = (MR_Integer) mslice__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mslice__HeadVar__1_1, mslice__Cast_HeadVar1_4, mslice__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
mslice____Unify____option_0_0(
  MR_Word mslice__HeadVar__2_1,
  MR_Word mslice__HeadVar__2_2)
{
  {
    MR_bool mslice__succeeded = (mslice__HeadVar__2_1 == mslice__HeadVar__2_2);

    return mslice__succeeded;
  }
}

static void MR_CALL 
mslice__option_default_2_p_0(
  MR_Word * mslice__HeadVar__1_1,
  MR_Word * mslice__HeadVar__2_2,
  MR_Cont mslice__cont,
  void * mslice__cont_env_ptr)
{
  {
    MR_bool mslice__succeeded;

    {
      MR_Integer mslice__slot_0 = (MR_Integer) 0;

      do
        {
          *mslice__HeadVar__1_1 = ((&mslice_vector_common_7[0 + mslice__slot_0]))->mslice__vector_common_type_7_0__vct_7_f_0;
          *mslice__HeadVar__2_2 = ((&mslice_vector_common_7[0 + mslice__slot_0]))->mslice__vector_common_type_7_0__vct_7_f_1;
          {
            mslice__cont(mslice__cont_env_ptr);
          }
          mslice__slot_0 = (mslice__slot_0 + (MR_Integer) 1);
        }
      while ((mslice__slot_0 < (MR_Integer) 6));
    }
  }
}

static MR_bool MR_CALL 
mslice__long_option_2_p_0(
  MR_String mslice__HeadVar__1_1,
  MR_Word * mslice__HeadVar__2_2)
{
  {
    MR_bool mslice__succeeded;
    MR_Integer mslice__lo_0;
    MR_Integer mslice__hi_1;
    MR_Integer mslice__mid_2;
    MR_Integer mslice__result_3;

    /* binary string simple lookup switch */
    mslice__lo_0 = (MR_Integer) 0;
    mslice__hi_1 = (MR_Integer) 5;
    do
      {
        mslice__mid_2 = (((mslice__lo_0 + mslice__hi_1)) / (MR_Integer) 2);
        mslice__result_3 = MR_strcmp(mslice__HeadVar__1_1, ((&mslice_vector_common_4[0 + mslice__mid_2]))->mslice__vector_common_type_4_0__vct_4_f_0);
        if ((mslice__result_3 == (MR_Integer) 0))
          {
            *mslice__HeadVar__2_2 = ((&mslice_vector_common_4[0 + mslice__mid_2]))->mslice__vector_common_type_4_0__vct_4_f_1;
            mslice__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((mslice__result_3 < (MR_Integer) 0))
          mslice__hi_1 = (mslice__mid_2 - (MR_Integer) 1);
        else
          mslice__lo_0 = (mslice__mid_2 + (MR_Integer) 1);
      }
    while ((mslice__lo_0 <= mslice__hi_1));
    mslice__succeeded = MR_FALSE;
  label_0:;
    return mslice__succeeded;
  }
}

static MR_bool MR_CALL 
mslice__short_option_2_p_0(
  MR_Char mslice__HeadVar__1_1,
  MR_Word * mslice__HeadVar__2_2)
{
  {
    MR_bool mslice__succeeded;

    if ((((MR_Unsigned) (mslice__HeadVar__1_1 - (MR_Integer) 102)) <= ((MR_Unsigned) (MR_Integer) 13)))
      if (((MR_Integer) 9665 & (((MR_Integer) 1 << ((mslice__HeadVar__1_1 - (MR_Integer) 102))))))
        {
          *mslice__HeadVar__2_2 = ((&mslice_vector_common_3[0 + (mslice__HeadVar__1_1 - (MR_Integer) 102)]))->mslice__vector_common_type_3_0__vct_3_f_0;
          mslice__succeeded = MR_TRUE;
        }
      else
        mslice__succeeded = MR_FALSE;
    else
      mslice__succeeded = MR_FALSE;
    return mslice__succeeded;
  }
}

static void MR_CALL 
main_2_p_0_3(
  void * mslice__env_ptr_arg)
{
  {
    struct mslice__main_2_p_0_4_env_0_s * mslice__env_ptr = (struct mslice__main_2_p_0_4_env_0_s *) mslice__env_ptr_arg;

    *((mslice__env_ptr)->mslice__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mslice__env_ptr)->mslice__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
    *((mslice__env_ptr)->mslice__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mslice__env_ptr)->mslice__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
    {
      ((mslice__env_ptr)->mslice__main_2_p_0_4_env_0__cont)((mslice__env_ptr)->mslice__main_2_p_0_4_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
main_2_p_0_4(
  MR_Box mslice__closure_arg,
  MR_Box * mslice__wrapper_arg_1,
  MR_Box * mslice__wrapper_arg_2,
  MR_Cont mslice__cont,
  void * mslice__cont_env_ptr)
{
  {
    struct mslice__main_2_p_0_4_env_0_s mslice__env;

    (mslice__env).mslice__main_2_p_0_4_env_0__wrapper_arg_1 = mslice__wrapper_arg_1;
    (mslice__env).mslice__main_2_p_0_4_env_0__wrapper_arg_2 = mslice__wrapper_arg_2;
    (mslice__env).mslice__main_2_p_0_4_env_0__cont = mslice__cont;
    (mslice__env).mslice__main_2_p_0_4_env_0__cont_env_ptr = mslice__cont_env_ptr;
    {
      MR_Box mslice__closure = mslice__closure_arg;

      {
        mslice__option_default_2_p_0(&(mslice__env).mslice__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mslice__env).mslice__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &mslice__env);
      }
    }
  }
}

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box mslice__closure_arg,
  MR_Box mslice__wrapper_arg_1,
  MR_Box * mslice__wrapper_arg_2)
{
  {
    MR_bool mslice__succeeded;
    MR_Box mslice__closure = mslice__closure_arg;
    MR_Word mslice__conv1_HeadVar__2_2;

    {
      mslice__succeeded = mslice__long_option_2_p_0(((MR_String) mslice__wrapper_arg_1), &mslice__conv1_HeadVar__2_2);
    }
    if (mslice__succeeded)
      {
        *mslice__wrapper_arg_2 = ((MR_Box) (mslice__conv1_HeadVar__2_2));
        mslice__succeeded = MR_TRUE;
      }
    return mslice__succeeded;
  }
}

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box mslice__closure_arg,
  MR_Box mslice__wrapper_arg_1,
  MR_Box * mslice__wrapper_arg_2)
{
  {
    MR_bool mslice__succeeded;
    MR_Box mslice__closure = mslice__closure_arg;
    MR_Word mslice__conv0_HeadVar__2_2;

    {
      mslice__succeeded = mslice__short_option_2_p_0(((MR_Char) (MR_Word) mslice__wrapper_arg_1), &mslice__conv0_HeadVar__2_2);
    }
    if (mslice__succeeded)
      {
        *mslice__wrapper_arg_2 = ((MR_Box) (mslice__conv0_HeadVar__2_2));
        mslice__succeeded = MR_TRUE;
      }
    return mslice__succeeded;
  }
}

void MR_CALL 
main_2_p_0(void)
{
  {
    MR_bool mslice__succeeded;
    MR_Word mslice__TypeCtorInfo_56_56;
    MR_Word mslice__Args0_4;
    MR_Word mslice__Args_6;
    MR_Word mslice__GetoptResult_7;

    {
      mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    }
    {
      mercury__io__command_line_arguments_3_p_0(&mslice__Args0_4);
    }
    mslice__TypeCtorInfo_56_56 = (MR_Word) &mslice__mslice__type_ctor_info_option_0;
    {
      mercury__getopt__process_options_4_p_0(mslice__TypeCtorInfo_56_56, (MR_Word) MR_mkword(MR_mktag(2), &mslice_scalar_common_1[4]), mslice__Args0_4, &mslice__Args_6, &mslice__GetoptResult_7);
    }
    if (((MR_tag((MR_Word) mslice__GetoptResult_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mslice__GetoptErrorMsg_24 = ((MR_String) (MR_hl_field(MR_mktag(1), mslice__GetoptResult_7, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0(mslice__GetoptErrorMsg_24);
        }
        {
          mercury__io__nl_2_p_0();
        }
      }
    else
      {
        MR_Word mslice__OptionTable_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mslice__GetoptResult_7, (MR_Integer) 0)));

        if ((mslice__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "Usage: mslice [-s sortspec] [-m module] [-l N] [-n N] [-p N] [-f N] filename\n");
            }
          }
        else
          {
            MR_Word mslice__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mslice__Args_6, (MR_Integer) 1)));
            MR_String mslice__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(1), mslice__Args_6, (MR_Integer) 0)));

            if ((mslice__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_String mslice__SortStr_10;
                MR_Integer mslice__MaxRow_11;
                MR_Integer mslice__MaxPredColumn_12;
                MR_Integer mslice__MaxPathColumn_13;
                MR_Integer mslice__MaxFileColumn_14;
                MR_String mslice__Module_15;
                MR_Word mslice__MaybeMaxPredColumn_16;
                MR_Word mslice__MaybeMaxPathColumn_17;
                MR_Word mslice__MaybeMaxFileColumn_18;
                MR_String mslice__SliceStr_19;
                MR_String mslice__Problem_20;

                {
                  mercury__getopt__lookup_string_option_3_p_0(mslice__TypeCtorInfo_56_56, mslice__OptionTable_8, ((MR_Box) ((MR_Integer) 0)), &mslice__SortStr_10);
                }
                {
                  mercury__getopt__lookup_int_option_3_p_0(mslice__TypeCtorInfo_56_56, mslice__OptionTable_8, ((MR_Box) ((MR_Integer) 1)), &mslice__MaxRow_11);
                }
                {
                  mercury__getopt__lookup_int_option_3_p_0(mslice__TypeCtorInfo_56_56, mslice__OptionTable_8, ((MR_Box) ((MR_Integer) 2)), &mslice__MaxPredColumn_12);
                }
                {
                  mercury__getopt__lookup_int_option_3_p_0(mslice__TypeCtorInfo_56_56, mslice__OptionTable_8, ((MR_Box) ((MR_Integer) 3)), &mslice__MaxPathColumn_13);
                }
                {
                  mercury__getopt__lookup_int_option_3_p_0(mslice__TypeCtorInfo_56_56, mslice__OptionTable_8, ((MR_Box) ((MR_Integer) 4)), &mslice__MaxFileColumn_14);
                }
                {
                  mercury__getopt__lookup_string_option_3_p_0(mslice__TypeCtorInfo_56_56, mslice__OptionTable_8, ((MR_Box) ((MR_Integer) 5)), &mslice__Module_15);
                }
                mslice__succeeded = (mslice__MaxPredColumn_12 == (MR_Integer) 0);
                if (mslice__succeeded)
                  mslice__MaybeMaxPredColumn_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  {
                    mslice__MaybeMaxPredColumn_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mslice__MaybeMaxPredColumn_16, 0) = ((MR_Box) (mslice__MaxPredColumn_12));
                  }
                mslice__succeeded = (mslice__MaxPathColumn_13 == (MR_Integer) 0);
                if (mslice__succeeded)
                  mslice__MaybeMaxPathColumn_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  {
                    mslice__MaybeMaxPathColumn_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mslice__MaybeMaxPathColumn_17, 0) = ((MR_Box) (mslice__MaxPathColumn_13));
                  }
                mslice__succeeded = (mslice__MaxFileColumn_14 == (MR_Integer) 0);
                if (mslice__succeeded)
                  mslice__MaybeMaxFileColumn_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  {
                    mslice__MaybeMaxFileColumn_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mslice__MaybeMaxFileColumn_18, 0) = ((MR_Box) (mslice__MaxFileColumn_14));
                  }
                {
                  mdbcomp__slice_and_dice__read_slice_to_string_11_p_0(mslice__V_58_58, mslice__SortStr_10, mslice__MaxRow_11, mslice__MaybeMaxPredColumn_16, mslice__MaybeMaxPathColumn_17, mslice__MaybeMaxFileColumn_18, mslice__Module_15, &mslice__SliceStr_19, &mslice__Problem_20);
                }
                mslice__succeeded = (strcmp(mslice__Problem_20, (MR_String) "") == 0);
                if (mslice__succeeded)
                  {
                    mercury__io__write_string_3_p_0(mslice__SliceStr_19);
                  }
                else
                  {
                    {
                      mercury__io__write_string_3_p_0(mslice__Problem_20);
                    }
                    {
                      mercury__io__nl_2_p_0();
                    }
                    {
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                    }
                  }
              }
            else
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "Usage: mslice [-s sortspec] [-m module] [-l N] [-n N] [-p N] [-f N] filename\n");
                }
              }
          }
      }
  }
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
