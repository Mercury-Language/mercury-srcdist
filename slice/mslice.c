/*
** Automatically generated from `mslice.m'
** by the Mercury compiler,
** version rotd-2022-04-26
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module mslice.
// :- implementation.

/*
INIT mercury__mslice__init
ENDINIT
*/

#include "mslice.mih"


#include "array.mih"
#include "assoc_list.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.shared_utilities.mih"
#include "mdbcomp.slice_and_dice.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



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

static const MR_EnumFunctorDescPtr mslice__mslice__enum_ordinal_ordered_option_0[6];

static const MR_EnumFunctorDescPtr mslice__mslice__enum_name_ordered_option_0[6];

static const MR_Integer mslice__mslice__functor_number_map_option_0[6];

static const MR_FA_TypeInfo_Struct2 mslice__tree234__ti_tree234_2mslice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static void MR_CALL 
mslice____Compare____option_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mslice____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mslice____Compare____option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mslice____Unify____option_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mslice__option_default_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mslice__long_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mslice__short_option_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
main_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
main_2_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mslice____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mslice____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mslice____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mslice____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mslice_scalar_common_1[5][3];

static /* final */ const MR_Box mslice_scalar_common_2[2][2];

static /* final */ const MR_Box mslice_scalar_common_3[4][1];

static /* final */ const MR_Box mslice_scalar_common_4[3][5];


struct mslice__vector_common_type_5_0_s {
  const MR_Word mslice__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct mslice__vector_common_type_5_0_s mslice_vector_common_5[14];

struct mslice__vector_common_type_6_0_s {
  const MR_String mslice__vector_common_type_6_0__vct_6_f_0;
  const MR_Word mslice__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct mslice__vector_common_type_6_0_s mslice_vector_common_6[6];

struct mslice__vector_common_type_7_0_s {
  const MR_Word mslice__vector_common_type_7_0__vct_7_f_0;
  const MR_Word mslice__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct mslice__vector_common_type_7_0_s mslice_vector_common_7[6];



static /* final */ const MR_Box mslice_scalar_common_1[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mslice__mslice__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mslice_scalar_common_4[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mslice_scalar_common_4[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mslice_scalar_common_4[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mslice_scalar_common_1[1])),
    ((MR_Box) (&mslice_scalar_common_1[2])),
    ((MR_Box) (&mslice_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box mslice_scalar_common_2[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "C"))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box mslice_scalar_common_3[4][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 100))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 35))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 12))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Integer) 20))
  },
};

static /* final */ const MR_Box mslice_scalar_common_4[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mslice__mslice__type_ctor_info_option_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mslice__mslice__type_ctor_info_option_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mslice__mslice__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};


static /* final */ const struct mslice__vector_common_type_5_0_s mslice_vector_common_5[14] = {
  /* row   0 */   { (MR_Integer) 4 },
  /* row   1 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   2 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   3 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   4 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   5 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   6 */   { (MR_Integer) 1 },
  /* row   7 */   { (MR_Integer) 5 },
  /* row   8 */   { (MR_Integer) 2 },
  /* row   9 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  10 */   { (MR_Integer) 3 },
  /* row  11 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  12 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  13 */   { (MR_Integer) 0 },
};

static /* final */ const struct mslice__vector_common_type_6_0_s mslice_vector_common_6[6] = {
  /* row   0 */
  {
    (MR_String) "limit",
    (MR_Integer) 1
  },
  /* row   1 */
  {
    (MR_String) "max-file-column",
    (MR_Integer) 4
  },
  /* row   2 */
  {
    (MR_String) "max-name-column",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "max-path-column",
    (MR_Integer) 3
  },
  /* row   4 */
  {
    (MR_String) "module",
    (MR_Integer) 5
  },
  /* row   5 */
  {
    (MR_String) "sort",
    (MR_Integer) 0
  },
};

static /* final */ const struct mslice__vector_common_type_7_0_s mslice_vector_common_7[6] = {
  /* row   0 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(MR_mktag(3), &mslice_scalar_common_2[0]))
  },
  /* row   1 */
  {
    (MR_Integer) 1,
    (MR_Word) (MR_mkword(MR_mktag(2), &mslice_scalar_common_3[0]))
  },
  /* row   2 */
  {
    (MR_Integer) 2,
    (MR_Word) (MR_mkword(MR_mktag(2), &mslice_scalar_common_3[1]))
  },
  /* row   3 */
  {
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(MR_mktag(2), &mslice_scalar_common_3[2]))
  },
  /* row   4 */
  {
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(MR_mktag(2), &mslice_scalar_common_3[3]))
  },
  /* row   5 */
  {
    (MR_Integer) 5,
    (MR_Word) (MR_mkword(MR_mktag(3), &mslice_scalar_common_2[1]))
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_0 = {
  (MR_String) "sort",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_1 = {
  (MR_String) "max_row",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_2 = {
  (MR_String) "max_pred_column",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_3 = {
  (MR_String) "max_path_column",
  INT32_C(3)
};

static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_4 = {
  (MR_String) "max_file_column",
  INT32_C(4)
};

static const MR_EnumFunctorDesc mslice__mslice__enum_functor_desc_option_0_5 = {
  (MR_String) "modulename",
  INT32_C(5)
};

static const MR_EnumFunctorDescPtr mslice__mslice__enum_ordinal_ordered_option_0[6] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mslice____Unify____option_0_0_10001)),
  ((MR_Box) (mslice____Compare____option_0_0_10001)),
  (MR_String) "mslice",
  (MR_String) "option",
  { mslice__mslice__enum_name_ordered_option_0 },
  { mslice__mslice__enum_ordinal_ordered_option_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  mslice__mslice__functor_number_map_option_0,

};

static const MR_FA_TypeInfo_Struct2 mslice__tree234__ti_tree234_2mslice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mslice__mslice__type_ctor_info_option_0),
    (MR_TypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

const MR_TypeCtorInfo_Struct mslice__mslice__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mslice____Unify____option_table_0_0_10001)),
  ((MR_Box) (mslice____Compare____option_table_0_0_10001)),
  (MR_String) "mslice",
  (MR_String) "option_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&mslice__tree234__ti_tree234_2mslice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
mslice____Compare____option_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mslice_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
mslice____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mslice_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
mslice____Compare____option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
mslice____Unify____option_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
mslice__option_default_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer slot_0 = (MR_Integer) 0;

  do
  {
    *HeadVar__1_1 = ((&mslice_vector_common_7[0 + slot_0]))->mslice__vector_common_type_7_0__vct_7_f_0;
    *HeadVar__2_2 = ((&mslice_vector_common_7[0 + slot_0]))->mslice__vector_common_type_7_0__vct_7_f_1;
    cont(cont_env_ptr);
    slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
  }
  while ((slot_0 < (MR_Integer) 6));
}

static MR_bool MR_CALL 
mslice__long_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer lo_0 = (MR_Integer) 0;
  MR_Integer hi_1 = (MR_Integer) 5;
  MR_Integer mid_2;
  MR_Integer result_3;

  // binary string simple lookup switch
  ;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(HeadVar__1_1, ((&mslice_vector_common_6[0 + mid_2]))->mslice__vector_common_type_6_0__vct_6_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      *HeadVar__2_2 = ((&mslice_vector_common_6[0 + mid_2]))->mslice__vector_common_type_6_0__vct_6_f_1;
      succeeded = MR_TRUE;
      // jump out of search loop
      ;
      goto label_0;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

static MR_bool MR_CALL 
mslice__short_option_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 102))) <= ((MR_Unsigned) 13)))
    if (((MR_Unsigned) 9665U & (((MR_Integer) 1 << ((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 102))))))
    {
      *HeadVar__2_2 = ((&mslice_vector_common_5[0 + (MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 102)]))->mslice__vector_common_type_5_0__vct_5_f_0;
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static void MR_CALL 
main_2_p_0_3(
  void * env_ptr_arg)
{
  struct mslice__main_2_p_0_4_env_0_s * env_ptr = (struct mslice__main_2_p_0_4_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mslice__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mslice__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
  *((env_ptr)->mslice__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mslice__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
  ((env_ptr)->mslice__main_2_p_0_4_env_0__cont)((env_ptr)->mslice__main_2_p_0_4_env_0__cont_env_ptr);
}

static void MR_CALL 
main_2_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mslice__main_2_p_0_4_env_0_s env;

  (env).mslice__main_2_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mslice__main_2_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mslice__main_2_p_0_4_env_0__cont = cont;
  (env).mslice__main_2_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mslice__option_default_2_p_0(&(env).mslice__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(env).mslice__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &env);
  }
}

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  succeeded = mslice__long_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = mslice__short_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
main_2_p_0(void)
{
  MR_bool succeeded;
  MR_Word StdOutStream_4;
  MR_Word Args0_5;
  MR_Word Args_7;
  MR_Word GetoptResult_8;

  mercury__io__stdout_stream_3_p_0(&StdOutStream_4);
  mdbcomp__shared_utilities__unlimit_stack_2_p_0();
  mercury__io__command_line_arguments_3_p_0(&Args0_5);
  mercury__getopt__process_options_4_p_0((MR_Word) (&mslice__mslice__type_ctor_info_option_0), (MR_Word) (MR_mkword(MR_mktag(2), &mslice_scalar_common_1[4])), Args0_5, &Args_7, &GetoptResult_8);
  if (((MR_tag((MR_Word) GetoptResult_8)) == (MR_Integer) 1))
  {
    MR_Word GetoptError_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GetoptResult_8, (MR_Integer) 0))));
    MR_String GetoptErrorMsg_26;

    GetoptErrorMsg_26 = mercury__getopt__option_error_to_string_1_f_0((MR_Word) (&mslice__mslice__type_ctor_info_option_0), GetoptError_25);
    mercury__io__write_string_4_p_0(StdOutStream_4, GetoptErrorMsg_26);
    mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) "\n");
  }
  else
  {
    MR_Word OptionTable_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GetoptResult_8, (MR_Integer) 0))));

    if ((Args_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_67;

      Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "Usage: mslice [-s sortspec] [-m module] [-l N] [-n N] [-p N] [-f N] ", (MR_String) "filename\n");
      mercury__io__write_string_4_p_0(StdOutStream_4, Var_67);
    }
    else
    {
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_7, (MR_Integer) 1))));
      MR_String Var_64 = ((MR_String) ((MR_hl_field(MR_mktag(1), Args_7, (MR_Integer) 0))));

      if ((Var_63 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String SortStr_11;
        MR_Integer MaxRow_12;
        MR_Integer MaxPredColumn_13;
        MR_Integer MaxPathColumn_14;
        MR_Integer MaxFileColumn_15;
        MR_String Module_16;
        MR_Word MaybeMaxPredColumn_17;
        MR_Word MaybeMaxPathColumn_18;
        MR_Word MaybeMaxFileColumn_19;
        MR_String SliceStr_20;
        MR_String Problem_21;

        mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&mslice__mslice__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 0)), &SortStr_11);
        mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mslice__mslice__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 1)), &MaxRow_12);
        mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mslice__mslice__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 2)), &MaxPredColumn_13);
        mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mslice__mslice__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 3)), &MaxPathColumn_14);
        mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mslice__mslice__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 4)), &MaxFileColumn_15);
        mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&mslice__mslice__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 5)), &Module_16);
        succeeded = (MaxPredColumn_13 == (MR_Integer) 0);
        if (succeeded)
          MaybeMaxPredColumn_17 = (MR_Word) ((MR_Unsigned) 0U);
        else
          {
            MaybeMaxPredColumn_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeMaxPredColumn_17, 0) = ((MR_Box) (MaxPredColumn_13));
          }
        succeeded = (MaxPathColumn_14 == (MR_Integer) 0);
        if (succeeded)
          MaybeMaxPathColumn_18 = (MR_Word) ((MR_Unsigned) 0U);
        else
          {
            MaybeMaxPathColumn_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeMaxPathColumn_18, 0) = ((MR_Box) (MaxPathColumn_14));
          }
        succeeded = (MaxFileColumn_15 == (MR_Integer) 0);
        if (succeeded)
          MaybeMaxFileColumn_19 = (MR_Word) ((MR_Unsigned) 0U);
        else
          {
            MaybeMaxFileColumn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeMaxFileColumn_19, 0) = ((MR_Box) (MaxFileColumn_15));
          }
        mdbcomp__slice_and_dice__read_slice_to_string_11_p_0(Var_64, SortStr_11, MaxRow_12, MaybeMaxPredColumn_17, MaybeMaxPathColumn_18, MaybeMaxFileColumn_19, Module_16, &SliceStr_20, &Problem_21);
        succeeded = (strcmp(Problem_21, (MR_String) "") == 0);
        if (succeeded)
          mercury__io__write_string_4_p_0(StdOutStream_4, SliceStr_20);
        else
        {
          mercury__io__write_string_4_p_0(StdOutStream_4, Problem_21);
          mercury__io__nl_3_p_0(StdOutStream_4);
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
      }
      else
      {
        MR_String Var_70;

        Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "Usage: mslice [-s sortspec] [-m module] [-l N] [-n N] [-p N] [-f N] ", (MR_String) "filename\n");
        mercury__io__write_string_4_p_0(StdOutStream_4, Var_70);
      }
    }
  }
}

static MR_bool MR_CALL 
mslice____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mslice____Unify____option_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mslice____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mslice____Compare____option_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mslice____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mslice____Unify____option_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mslice____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mslice____Compare____option_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__mslice__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mslice.
