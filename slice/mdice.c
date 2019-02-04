/*
** Automatically generated from `mdice.m'
** by the Mercury compiler,
** version rotd-2018-06-19
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


// :- module mdice.
// :- implementation.

/*
INIT mercury__mdice__init
ENDINIT
*/

#include "mdice.mih"


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



struct mdice__main_2_p_0_4_env_0_s {
  MR_Box * mdice__main_2_p_0_4_env_0__wrapper_arg_1;
  MR_Box * mdice__main_2_p_0_4_env_0__wrapper_arg_2;
  MR_Cont mdice__main_2_p_0_4_env_0__cont;
  void * mdice__main_2_p_0_4_env_0__cont_env_ptr;
  MR_Word mdice__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word mdice__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
};


static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_0;

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_1;

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_2;

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_3;

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_4;

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_5;

static const MR_EnumFunctorDescPtr mdice__mdice__enum_value_ordered_option_0[6];

static const MR_EnumFunctorDescPtr mdice__mdice__enum_name_ordered_option_0[6];

static const MR_Integer mdice__mdice__functor_number_map_option_0[6];

static const MR_FA_TypeInfo_Struct2 mdice__tree234__ti_tree234_2mdice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static void MR_CALL 
mdice____Compare____option_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdice____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdice____Compare____option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdice____Unify____option_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdice__option_default_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdice__long_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdice__short_option_2_p_0(
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
mdice____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdice____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdice____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdice____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdice_scalar_common_1[5][3];

static /* final */ const MR_Box mdice_scalar_common_2[3][5];

static /* final */ const MR_Box mdice_scalar_common_5[2][2];

static /* final */ const MR_Box mdice_scalar_common_6[4][1];


/* sealed */ struct mdice__vector_common_type_3_0_s {
  const MR_Word mdice__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct mdice__vector_common_type_3_0_s mdice_vector_common_3[14];

/* sealed */ struct mdice__vector_common_type_4_0_s {
  const MR_String mdice__vector_common_type_4_0__vct_4_f_0;
  const MR_Word mdice__vector_common_type_4_0__vct_4_f_1;
};

static /* final */ const struct mdice__vector_common_type_4_0_s mdice_vector_common_4[6];

/* sealed */ struct mdice__vector_common_type_7_0_s {
  const MR_Word mdice__vector_common_type_7_0__vct_7_f_0;
  const MR_Word mdice__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct mdice__vector_common_type_7_0_s mdice_vector_common_7[6];



static /* final */ const MR_Box mdice_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdice__mdice__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdice_scalar_common_2[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdice_scalar_common_2[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdice_scalar_common_2[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdice_scalar_common_1[1])),
    ((MR_Box) (&mdice_scalar_common_1[2])),
    ((MR_Box) (&mdice_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box mdice_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdice__mdice__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdice__mdice__type_ctor_info_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdice__mdice__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box mdice_scalar_common_5[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "S"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box mdice_scalar_common_6[4][1] = {
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


static /* final */ const struct mdice__vector_common_type_3_0_s mdice_vector_common_3[14] = {
  /* row 0 */   {     (MR_Integer) 4 },
  /* row 1 */   {     (MR_Word) ((MR_Integer) 0) },
  /* row 2 */   {     (MR_Word) ((MR_Integer) 0) },
  /* row 3 */   {     (MR_Word) ((MR_Integer) 0) },
  /* row 4 */   {     (MR_Word) ((MR_Integer) 0) },
  /* row 5 */   {     (MR_Word) ((MR_Integer) 0) },
  /* row 6 */   {     (MR_Integer) 1 },
  /* row 7 */   {     (MR_Integer) 5 },
  /* row 8 */   {     (MR_Integer) 2 },
  /* row 9 */   {     (MR_Word) ((MR_Integer) 0) },
  /* row 10 */   {     (MR_Integer) 3 },
  /* row 11 */   {     (MR_Word) ((MR_Integer) 0) },
  /* row 12 */   {     (MR_Word) ((MR_Integer) 0) },
  /* row 13 */   {     (MR_Integer) 0 },
};

static /* final */ const struct mdice__vector_common_type_4_0_s mdice_vector_common_4[6] = {
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

static /* final */ const struct mdice__vector_common_type_7_0_s mdice_vector_common_7[6] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(MR_mktag(3), &mdice_scalar_common_5[0]))
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) (MR_mkword(MR_mktag(2), &mdice_scalar_common_6[0]))
  },
  /* row 2 */
  {
    (MR_Integer) 2,
    (MR_Word) (MR_mkword(MR_mktag(2), &mdice_scalar_common_6[1]))
  },
  /* row 3 */
  {
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(MR_mktag(2), &mdice_scalar_common_6[2]))
  },
  /* row 4 */
  {
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(MR_mktag(2), &mdice_scalar_common_6[3]))
  },
  /* row 5 */
  {
    (MR_Integer) 5,
    (MR_Word) (MR_mkword(MR_mktag(3), &mdice_scalar_common_5[1]))
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_0 = {
  (MR_String) "sort",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_1 = {
  (MR_String) "max_row",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_2 = {
  (MR_String) "max_pred_column",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_3 = {
  (MR_String) "max_path_column",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_4 = {
  (MR_String) "max_file_column",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_5 = {
  (MR_String) "modulename",
  (MR_Integer) 5
};

static const MR_EnumFunctorDescPtr mdice__mdice__enum_value_ordered_option_0[6] = {
  &mdice__mdice__enum_functor_desc_option_0_0,
  &mdice__mdice__enum_functor_desc_option_0_1,
  &mdice__mdice__enum_functor_desc_option_0_2,
  &mdice__mdice__enum_functor_desc_option_0_3,
  &mdice__mdice__enum_functor_desc_option_0_4,
  &mdice__mdice__enum_functor_desc_option_0_5
};

static const MR_EnumFunctorDescPtr mdice__mdice__enum_name_ordered_option_0[6] = {
  &mdice__mdice__enum_functor_desc_option_0_4,
  &mdice__mdice__enum_functor_desc_option_0_3,
  &mdice__mdice__enum_functor_desc_option_0_2,
  &mdice__mdice__enum_functor_desc_option_0_1,
  &mdice__mdice__enum_functor_desc_option_0_5,
  &mdice__mdice__enum_functor_desc_option_0_0
};

static const MR_Integer mdice__mdice__functor_number_map_option_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct mdice__mdice__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdice____Unify____option_0_0_10001)),
  ((MR_Box) (mdice____Compare____option_0_0_10001)),
  (MR_String) "mdice",
  (MR_String) "option",
  {     mdice__mdice__enum_name_ordered_option_0 },
  {     mdice__mdice__enum_value_ordered_option_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mdice__mdice__functor_number_map_option_0
};

static const MR_FA_TypeInfo_Struct2 mdice__tree234__ti_tree234_2mdice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdice__mdice__type_ctor_info_option_0),
    (MR_TypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

const MR_TypeCtorInfo_Struct mdice__mdice__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdice____Unify____option_table_0_0_10001)),
  ((MR_Box) (mdice____Compare____option_table_0_0_10001)),
  (MR_String) "mdice",
  (MR_String) "option_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mdice__tree234__ti_tree234_2mdice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
mdice____Compare____option_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdice_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
mdice____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdice_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
mdice____Compare____option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
mdice____Unify____option_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
mdice__option_default_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer slot_0 = (MR_Integer) 0;

    do
    {
      *HeadVar__1_1 = ((&mdice_vector_common_7[0 + slot_0]))->mdice__vector_common_type_7_0__vct_7_f_0;
      *HeadVar__2_2 = ((&mdice_vector_common_7[0 + slot_0]))->mdice__vector_common_type_7_0__vct_7_f_1;
      cont(cont_env_ptr);
      slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) (MR_Integer) 1);
    }
    while ((slot_0 < (MR_Integer) 6));
  }
}

static MR_bool MR_CALL 
mdice__long_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
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
      result_3 = MR_strcmp(HeadVar__1_1, ((&mdice_vector_common_4[0 + mid_2]))->mdice__vector_common_type_4_0__vct_4_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        *HeadVar__2_2 = ((&mdice_vector_common_4[0 + mid_2]))->mdice__vector_common_type_4_0__vct_4_f_1;
        succeeded = MR_TRUE;
        // jump out of search loop
        ;
        goto label_0;
      }
      else
      if ((result_3 < (MR_Integer) 0))
        hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) (MR_Integer) 1);
      else
        lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) (MR_Integer) 1);
    }
    while ((lo_0 <= hi_1));
    succeeded = MR_FALSE;
  label_0:;
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdice__short_option_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((((MR_Unsigned) (MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) (MR_Integer) 102)) <= ((MR_Unsigned) (MR_Integer) 13)))
      if (((MR_Integer) 9665 & (((MR_Integer) 1 << ((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) (MR_Integer) 102))))))
      {
        *HeadVar__2_2 = ((&mdice_vector_common_3[0 + (MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) (MR_Integer) 102)]))->mdice__vector_common_type_3_0__vct_3_f_0;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static void MR_CALL 
main_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct mdice__main_2_p_0_4_env_0_s * env_ptr = (struct mdice__main_2_p_0_4_env_0_s *) (env_ptr_arg);

    *((env_ptr)->mdice__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdice__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
    *((env_ptr)->mdice__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdice__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
    ((env_ptr)->mdice__main_2_p_0_4_env_0__cont)((env_ptr)->mdice__main_2_p_0_4_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
main_2_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mdice__main_2_p_0_4_env_0_s env;

    (env).mdice__main_2_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).mdice__main_2_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
    (env).mdice__main_2_p_0_4_env_0__cont = cont;
    (env).mdice__main_2_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      mdice__option_default_2_p_0(&(env).mdice__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(env).mdice__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &env);
    }
  }
}

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    succeeded = mdice__long_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    succeeded = mdice__short_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
main_2_p_0(void)
{
  {
    MR_bool succeeded;
    MR_Word StdOutStream_4;
    MR_Word Args0_5;
    MR_Word Args_7;
    MR_Word GetoptResult_8;

    mercury__io__stdout_stream_3_p_0(&StdOutStream_4);
    mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    mercury__io__command_line_arguments_3_p_0(&Args0_5);
    mercury__getopt__process_options_4_p_0((MR_Word) (&mdice__mdice__type_ctor_info_option_0), (MR_Word) (MR_mkword(MR_mktag(2), &mdice_scalar_common_1[4])), Args0_5, &Args_7, &GetoptResult_8);
    if (((MR_tag((MR_Word) GetoptResult_8)) == (MR_Integer) 1))
    {
      MR_String GetoptErrorMsg_28 = ((MR_String) ((MR_hl_field(MR_mktag(1), GetoptResult_8, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(StdOutStream_4, GetoptErrorMsg_28);
      mercury__io__nl_3_p_0(StdOutStream_4);
    }
    else
    {
      MR_Word OptionTable_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GetoptResult_8, (MR_Integer) 0))));

      if ((Args_7 == (MR_Word) ((MR_Integer) 0)))
      {
        mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) "Usage: mdice [-s sortspec] [-m module] [-l N] [-n N] [-p N] [-f N] passfile failfile\n");
      }
      else
      {
        MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_7, (MR_Integer) 1))));
        MR_String Var_67 = ((MR_String) ((MR_hl_field(MR_mktag(1), Args_7, (MR_Integer) 0))));

        if ((Var_66 == (MR_Word) ((MR_Integer) 0)))
        {
          mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) "Usage: mdice [-s sortspec] [-m module] [-l N] [-n N] [-p N] [-f N] passfile failfile\n");
        }
        else
        {
          MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 1))));
          MR_String Var_69 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 0))));

          if ((Var_68 == (MR_Word) ((MR_Integer) 0)))
          {
            MR_String SortStr_13;
            MR_String Module_14;
            MR_Integer MaxRow_15;
            MR_Integer MaxPredColumn_16;
            MR_Integer MaxPathColumn_17;
            MR_Integer MaxFileColumn_18;
            MR_Word MaybeMaxPredColumn_19;
            MR_Word MaybeMaxPathColumn_20;
            MR_Word MaybeMaxFileColumn_21;
            MR_String DiceStr_22;
            MR_String Problem_23;

            mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&mdice__mdice__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 0)), &SortStr_13);
            mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&mdice__mdice__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 5)), &Module_14);
            mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdice__mdice__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 1)), &MaxRow_15);
            mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdice__mdice__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 2)), &MaxPredColumn_16);
            mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdice__mdice__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 3)), &MaxPathColumn_17);
            mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdice__mdice__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 4)), &MaxFileColumn_18);
            succeeded = (MaxPredColumn_16 == (MR_Integer) 0);
            if (succeeded)
              MaybeMaxPredColumn_19 = (MR_Word) ((MR_Integer) 0);
            else
              {
                MaybeMaxPredColumn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeMaxPredColumn_19, 0) = ((MR_Box) (MaxPredColumn_16));
              }
            succeeded = (MaxPathColumn_17 == (MR_Integer) 0);
            if (succeeded)
              MaybeMaxPathColumn_20 = (MR_Word) ((MR_Integer) 0);
            else
              {
                MaybeMaxPathColumn_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeMaxPathColumn_20, 0) = ((MR_Box) (MaxPathColumn_17));
              }
            succeeded = (MaxFileColumn_18 == (MR_Integer) 0);
            if (succeeded)
              MaybeMaxFileColumn_21 = (MR_Word) ((MR_Integer) 0);
            else
              {
                MaybeMaxFileColumn_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeMaxFileColumn_21, 0) = ((MR_Box) (MaxFileColumn_18));
              }
            mdbcomp__slice_and_dice__read_dice_to_string_12_p_0(Var_67, Var_69, SortStr_13, MaxRow_15, MaybeMaxPredColumn_19, MaybeMaxPathColumn_20, MaybeMaxFileColumn_21, Module_14, &DiceStr_22, &Problem_23);
            succeeded = (strcmp(Problem_23, (MR_String) "") == 0);
            if (succeeded)
              mercury__io__write_string_4_p_0(StdOutStream_4, DiceStr_22);
            else
            {
              mercury__io__write_string_4_p_0(StdOutStream_4, Problem_23);
              mercury__io__nl_3_p_0(StdOutStream_4);
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
          }
          else
          {
            mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) "Usage: mdice [-s sortspec] [-m module] [-l N] [-n N] [-p N] [-f N] passfile failfile\n");
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mdice____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdice____Unify____option_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdice____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdice____Compare____option_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdice____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdice____Unify____option_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdice____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdice____Compare____option_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__mdice__init(void)
{
}

void mercury__mdice__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdice__mdice__type_ctor_info_option_0);
	MR_register_type_ctor_info(&mdice__mdice__type_ctor_info_option_table_0);
}

void mercury__mdice__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdice__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdice.
