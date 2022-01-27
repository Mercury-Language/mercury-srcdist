/*
** Automatically generated from `mdice.m'
** by the Mercury compiler,
** version rotd-2017-01-16
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


/* :- module mdice. */
/* :- implementation. */

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

static MR_bool MR_CALL 
mdice____Unify____option_0_0_10001(
  MR_Box mdice__wrapper_arg_1,
  MR_Box mdice__wrapper_arg_2);

static void MR_CALL 
mdice____Compare____option_0_0_10001(
  MR_Box * mdice__wrapper_arg_1,
  MR_Box mdice__wrapper_arg_2,
  MR_Box mdice__wrapper_arg_3);

static MR_bool MR_CALL 
mdice____Unify____option_table_0_0_10001(
  MR_Box mdice__wrapper_arg_1,
  MR_Box mdice__wrapper_arg_2);

static void MR_CALL 
mdice____Compare____option_table_0_0_10001(
  MR_Box * mdice__wrapper_arg_1,
  MR_Box mdice__wrapper_arg_2,
  MR_Box mdice__wrapper_arg_3);

static void MR_CALL 
mdice____Compare____option_table_0_0(
  MR_Word * mdice__HeadVar__1_1,
  MR_Word mdice__HeadVar__2_2,
  MR_Word mdice__HeadVar__3_3);

static MR_bool MR_CALL 
mdice____Unify____option_table_0_0(
  MR_Word mdice__HeadVar__1_1,
  MR_Word mdice__HeadVar__2_2);

static void MR_CALL 
mdice____Compare____option_0_0(
  MR_Word * mdice__HeadVar__1_1,
  MR_Word mdice__HeadVar__2_2,
  MR_Word mdice__HeadVar__3_3);

static MR_bool MR_CALL 
mdice____Unify____option_0_0(
  MR_Word mdice__HeadVar__2_1,
  MR_Word mdice__HeadVar__2_2);

static void MR_CALL 
mdice__option_default_2_p_0(
  MR_Word * mdice__HeadVar__1_1,
  MR_Word * mdice__HeadVar__2_2,
  MR_Cont mdice__cont,
  void * mdice__cont_env_ptr);

static MR_bool MR_CALL 
mdice__long_option_2_p_0(
  MR_String mdice__HeadVar__1_1,
  MR_Word * mdice__HeadVar__2_2);

static MR_bool MR_CALL 
mdice__short_option_2_p_0(
  MR_Char mdice__HeadVar__1_1,
  MR_Word * mdice__HeadVar__2_2);

static void MR_CALL 
main_2_p_0_3(
  void * mdice__env_ptr_arg);

static void MR_CALL 
main_2_p_0_4(
  MR_Box mdice__closure_arg,
  MR_Box * mdice__wrapper_arg_1,
  MR_Box * mdice__wrapper_arg_2,
  MR_Cont mdice__cont,
  void * mdice__cont_env_ptr);

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box mdice__closure_arg,
  MR_Box mdice__wrapper_arg_1,
  MR_Box * mdice__wrapper_arg_2);

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box mdice__closure_arg,
  MR_Box mdice__wrapper_arg_1,
  MR_Box * mdice__wrapper_arg_2);


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
    (MR_Word) MR_mkword(MR_mktag(3), &mdice_scalar_common_5[0])
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(2), &mdice_scalar_common_6[0])
  },
  /* row 2 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(2), &mdice_scalar_common_6[1])
  },
  /* row 3 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(2), &mdice_scalar_common_6[2])
  },
  /* row 4 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(2), &mdice_scalar_common_6[3])
  },
  /* row 5 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(3), &mdice_scalar_common_5[1])
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
    (MR_TypeInfo) &mdice__mdice__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

const MR_TypeCtorInfo_Struct mdice__mdice__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdice____Unify____option_table_0_0_10001)),
  ((MR_Box) (mdice____Compare____option_table_0_0_10001)),
  (MR_String) "mdice",
  (MR_String) "option_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdice__tree234__ti_tree234_2mdice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mdice____Unify____option_0_0_10001(
  MR_Box mdice__wrapper_arg_1,
  MR_Box mdice__wrapper_arg_2)
{
  {
    MR_bool mdice__succeeded;

    {
      mdice__succeeded = mdice____Unify____option_0_0(((MR_Word) mdice__wrapper_arg_1), ((MR_Word) mdice__wrapper_arg_2));
    }
    return mdice__succeeded;
  }
}

static void MR_CALL 
mdice____Compare____option_0_0_10001(
  MR_Box * mdice__wrapper_arg_1,
  MR_Box mdice__wrapper_arg_2,
  MR_Box mdice__wrapper_arg_3)
{
  {
    MR_Word mdice__conv0_HeadVar__1_1;

    {
      mdice____Compare____option_0_0(&mdice__conv0_HeadVar__1_1, ((MR_Word) mdice__wrapper_arg_2), ((MR_Word) mdice__wrapper_arg_3));
    }
    *mdice__wrapper_arg_1 = ((MR_Box) (mdice__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdice____Unify____option_table_0_0_10001(
  MR_Box mdice__wrapper_arg_1,
  MR_Box mdice__wrapper_arg_2)
{
  {
    MR_bool mdice__succeeded;

    {
      mdice__succeeded = mdice____Unify____option_table_0_0(((MR_Word) mdice__wrapper_arg_1), ((MR_Word) mdice__wrapper_arg_2));
    }
    return mdice__succeeded;
  }
}

static void MR_CALL 
mdice____Compare____option_table_0_0_10001(
  MR_Box * mdice__wrapper_arg_1,
  MR_Box mdice__wrapper_arg_2,
  MR_Box mdice__wrapper_arg_3)
{
  {
    MR_Word mdice__conv0_HeadVar__1_1;

    {
      mdice____Compare____option_table_0_0(&mdice__conv0_HeadVar__1_1, ((MR_Word) mdice__wrapper_arg_2), ((MR_Word) mdice__wrapper_arg_3));
    }
    *mdice__wrapper_arg_1 = ((MR_Box) (mdice__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mdice____Compare____option_table_0_0(
  MR_Word * mdice__HeadVar__1_1,
  MR_Word mdice__HeadVar__2_2,
  MR_Word mdice__HeadVar__3_3)
{
  {
    MR_bool mdice__succeeded;
    MR_Word mdice__Cast_HeadVar1_4 = mdice__HeadVar__2_2;
    MR_Word mdice__Cast_HeadVar2_5 = mdice__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mdice_scalar_common_1[0], mdice__HeadVar__1_1, ((MR_Box) (mdice__Cast_HeadVar1_4)), ((MR_Box) (mdice__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
mdice____Unify____option_table_0_0(
  MR_Word mdice__HeadVar__1_1,
  MR_Word mdice__HeadVar__2_2)
{
  {
    MR_bool mdice__succeeded;
    MR_Word mdice__Cast_HeadVar1_3 = mdice__HeadVar__1_1;
    MR_Word mdice__Cast_HeadVar2_4 = mdice__HeadVar__2_2;

    {
      mdice__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdice_scalar_common_1[0], ((MR_Box) (mdice__Cast_HeadVar1_3)), ((MR_Box) (mdice__Cast_HeadVar2_4)));
    }
    return mdice__succeeded;
  }
}

static void MR_CALL 
mdice____Compare____option_0_0(
  MR_Word * mdice__HeadVar__1_1,
  MR_Word mdice__HeadVar__2_2,
  MR_Word mdice__HeadVar__3_3)
{
  {
    MR_bool mdice__succeeded;
    MR_Integer mdice__Cast_HeadVar1_4 = (MR_Integer) mdice__HeadVar__2_2;
    MR_Integer mdice__Cast_HeadVar2_5 = (MR_Integer) mdice__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdice__HeadVar__1_1, mdice__Cast_HeadVar1_4, mdice__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
mdice____Unify____option_0_0(
  MR_Word mdice__HeadVar__2_1,
  MR_Word mdice__HeadVar__2_2)
{
  {
    MR_bool mdice__succeeded = (mdice__HeadVar__2_1 == mdice__HeadVar__2_2);

    return mdice__succeeded;
  }
}

static void MR_CALL 
mdice__option_default_2_p_0(
  MR_Word * mdice__HeadVar__1_1,
  MR_Word * mdice__HeadVar__2_2,
  MR_Cont mdice__cont,
  void * mdice__cont_env_ptr)
{
  {
    MR_bool mdice__succeeded;

    {
      MR_Integer mdice__slot_0 = (MR_Integer) 0;

      do
        {
          *mdice__HeadVar__1_1 = ((&mdice_vector_common_7[0 + mdice__slot_0]))->mdice__vector_common_type_7_0__vct_7_f_0;
          *mdice__HeadVar__2_2 = ((&mdice_vector_common_7[0 + mdice__slot_0]))->mdice__vector_common_type_7_0__vct_7_f_1;
          {
            mdice__cont(mdice__cont_env_ptr);
          }
          mdice__slot_0 = (mdice__slot_0 + (MR_Integer) 1);
        }
      while ((mdice__slot_0 < (MR_Integer) 6));
    }
  }
}

static MR_bool MR_CALL 
mdice__long_option_2_p_0(
  MR_String mdice__HeadVar__1_1,
  MR_Word * mdice__HeadVar__2_2)
{
  {
    MR_bool mdice__succeeded;
    MR_Integer mdice__lo_0;
    MR_Integer mdice__hi_1;
    MR_Integer mdice__mid_2;
    MR_Integer mdice__result_3;

    /* binary string simple lookup switch */
    mdice__lo_0 = (MR_Integer) 0;
    mdice__hi_1 = (MR_Integer) 5;
    do
      {
        mdice__mid_2 = (((mdice__lo_0 + mdice__hi_1)) / (MR_Integer) 2);
        mdice__result_3 = MR_strcmp(mdice__HeadVar__1_1, ((&mdice_vector_common_4[0 + mdice__mid_2]))->mdice__vector_common_type_4_0__vct_4_f_0);
        if ((mdice__result_3 == (MR_Integer) 0))
          {
            *mdice__HeadVar__2_2 = ((&mdice_vector_common_4[0 + mdice__mid_2]))->mdice__vector_common_type_4_0__vct_4_f_1;
            mdice__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((mdice__result_3 < (MR_Integer) 0))
          mdice__hi_1 = (mdice__mid_2 - (MR_Integer) 1);
        else
          mdice__lo_0 = (mdice__mid_2 + (MR_Integer) 1);
      }
    while ((mdice__lo_0 <= mdice__hi_1));
    mdice__succeeded = MR_FALSE;
  label_0:;
    return mdice__succeeded;
  }
}

static MR_bool MR_CALL 
mdice__short_option_2_p_0(
  MR_Char mdice__HeadVar__1_1,
  MR_Word * mdice__HeadVar__2_2)
{
  {
    MR_bool mdice__succeeded;

    if ((((MR_Unsigned) (mdice__HeadVar__1_1 - (MR_Integer) 102)) <= ((MR_Unsigned) (MR_Integer) 13)))
      if (((MR_Integer) 9665 & (((MR_Integer) 1 << ((mdice__HeadVar__1_1 - (MR_Integer) 102))))))
        {
          *mdice__HeadVar__2_2 = ((&mdice_vector_common_3[0 + (mdice__HeadVar__1_1 - (MR_Integer) 102)]))->mdice__vector_common_type_3_0__vct_3_f_0;
          mdice__succeeded = MR_TRUE;
        }
      else
        mdice__succeeded = MR_FALSE;
    else
      mdice__succeeded = MR_FALSE;
    return mdice__succeeded;
  }
}

static void MR_CALL 
main_2_p_0_3(
  void * mdice__env_ptr_arg)
{
  {
    struct mdice__main_2_p_0_4_env_0_s * mdice__env_ptr = (struct mdice__main_2_p_0_4_env_0_s *) mdice__env_ptr_arg;

    *((mdice__env_ptr)->mdice__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mdice__env_ptr)->mdice__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
    *((mdice__env_ptr)->mdice__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mdice__env_ptr)->mdice__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
    {
      ((mdice__env_ptr)->mdice__main_2_p_0_4_env_0__cont)((mdice__env_ptr)->mdice__main_2_p_0_4_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
main_2_p_0_4(
  MR_Box mdice__closure_arg,
  MR_Box * mdice__wrapper_arg_1,
  MR_Box * mdice__wrapper_arg_2,
  MR_Cont mdice__cont,
  void * mdice__cont_env_ptr)
{
  {
    struct mdice__main_2_p_0_4_env_0_s mdice__env;

    (mdice__env).mdice__main_2_p_0_4_env_0__wrapper_arg_1 = mdice__wrapper_arg_1;
    (mdice__env).mdice__main_2_p_0_4_env_0__wrapper_arg_2 = mdice__wrapper_arg_2;
    (mdice__env).mdice__main_2_p_0_4_env_0__cont = mdice__cont;
    (mdice__env).mdice__main_2_p_0_4_env_0__cont_env_ptr = mdice__cont_env_ptr;
    {
      MR_Box mdice__closure = mdice__closure_arg;

      {
        mdice__option_default_2_p_0(&(mdice__env).mdice__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mdice__env).mdice__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &mdice__env);
      }
    }
  }
}

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box mdice__closure_arg,
  MR_Box mdice__wrapper_arg_1,
  MR_Box * mdice__wrapper_arg_2)
{
  {
    MR_bool mdice__succeeded;
    MR_Box mdice__closure = mdice__closure_arg;
    MR_Word mdice__conv1_HeadVar__2_2;

    {
      mdice__succeeded = mdice__long_option_2_p_0(((MR_String) mdice__wrapper_arg_1), &mdice__conv1_HeadVar__2_2);
    }
    if (mdice__succeeded)
      {
        *mdice__wrapper_arg_2 = ((MR_Box) (mdice__conv1_HeadVar__2_2));
        mdice__succeeded = MR_TRUE;
      }
    return mdice__succeeded;
  }
}

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box mdice__closure_arg,
  MR_Box mdice__wrapper_arg_1,
  MR_Box * mdice__wrapper_arg_2)
{
  {
    MR_bool mdice__succeeded;
    MR_Box mdice__closure = mdice__closure_arg;
    MR_Word mdice__conv0_HeadVar__2_2;

    {
      mdice__succeeded = mdice__short_option_2_p_0(((MR_Char) (MR_Word) mdice__wrapper_arg_1), &mdice__conv0_HeadVar__2_2);
    }
    if (mdice__succeeded)
      {
        *mdice__wrapper_arg_2 = ((MR_Box) (mdice__conv0_HeadVar__2_2));
        mdice__succeeded = MR_TRUE;
      }
    return mdice__succeeded;
  }
}

void MR_CALL 
main_2_p_0(void)
{
  {
    MR_bool mdice__succeeded;
    MR_Word mdice__TypeCtorInfo_65_65;
    MR_Word mdice__StdOutStream_4;
    MR_Word mdice__Args0_5;
    MR_Word mdice__Args_7;
    MR_Word mdice__GetoptResult_8;

    {
      mercury__io__stdout_stream_3_p_0(&mdice__StdOutStream_4);
    }
    {
      mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    }
    {
      mercury__io__command_line_arguments_3_p_0(&mdice__Args0_5);
    }
    mdice__TypeCtorInfo_65_65 = (MR_Word) &mdice__mdice__type_ctor_info_option_0;
    {
      mercury__getopt__process_options_4_p_0(mdice__TypeCtorInfo_65_65, (MR_Word) MR_mkword(MR_mktag(2), &mdice_scalar_common_1[4]), mdice__Args0_5, &mdice__Args_7, &mdice__GetoptResult_8);
    }
    if (((MR_tag((MR_Word) mdice__GetoptResult_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mdice__GetoptErrorMsg_28 = ((MR_String) (MR_hl_field(MR_mktag(1), mdice__GetoptResult_8, (MR_Integer) 0)));

        {
          mercury__io__write_string_4_p_0(mdice__StdOutStream_4, mdice__GetoptErrorMsg_28);
        }
        {
          mercury__io__nl_3_p_0(mdice__StdOutStream_4);
        }
      }
    else
      {
        MR_Word mdice__OptionTable_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdice__GetoptResult_8, (MR_Integer) 0)));

        if ((mdice__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_4_p_0(mdice__StdOutStream_4, (MR_String) "Usage: mdice [-s sortspec] [-m module] [-l N] [-n N] [-p N] [-f N] passfile failfile\n");
            }
          }
        else
          {
            MR_Word mdice__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdice__Args_7, (MR_Integer) 1)));
            MR_String mdice__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(1), mdice__Args_7, (MR_Integer) 0)));

            if ((mdice__V_66_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__io__write_string_4_p_0(mdice__StdOutStream_4, (MR_String) "Usage: mdice [-s sortspec] [-m module] [-l N] [-n N] [-p N] [-f N] passfile failfile\n");
                }
              }
            else
              {
                MR_Word mdice__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdice__V_66_66, (MR_Integer) 1)));
                MR_String mdice__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(1), mdice__V_66_66, (MR_Integer) 0)));

                if ((mdice__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_String mdice__SortStr_13;
                    MR_String mdice__Module_14;
                    MR_Integer mdice__MaxRow_15;
                    MR_Integer mdice__MaxPredColumn_16;
                    MR_Integer mdice__MaxPathColumn_17;
                    MR_Integer mdice__MaxFileColumn_18;
                    MR_Word mdice__MaybeMaxPredColumn_19;
                    MR_Word mdice__MaybeMaxPathColumn_20;
                    MR_Word mdice__MaybeMaxFileColumn_21;
                    MR_String mdice__DiceStr_22;
                    MR_String mdice__Problem_23;

                    {
                      mercury__getopt__lookup_string_option_3_p_0(mdice__TypeCtorInfo_65_65, mdice__OptionTable_9, ((MR_Box) ((MR_Integer) 0)), &mdice__SortStr_13);
                    }
                    {
                      mercury__getopt__lookup_string_option_3_p_0(mdice__TypeCtorInfo_65_65, mdice__OptionTable_9, ((MR_Box) ((MR_Integer) 5)), &mdice__Module_14);
                    }
                    {
                      mercury__getopt__lookup_int_option_3_p_0(mdice__TypeCtorInfo_65_65, mdice__OptionTable_9, ((MR_Box) ((MR_Integer) 1)), &mdice__MaxRow_15);
                    }
                    {
                      mercury__getopt__lookup_int_option_3_p_0(mdice__TypeCtorInfo_65_65, mdice__OptionTable_9, ((MR_Box) ((MR_Integer) 2)), &mdice__MaxPredColumn_16);
                    }
                    {
                      mercury__getopt__lookup_int_option_3_p_0(mdice__TypeCtorInfo_65_65, mdice__OptionTable_9, ((MR_Box) ((MR_Integer) 3)), &mdice__MaxPathColumn_17);
                    }
                    {
                      mercury__getopt__lookup_int_option_3_p_0(mdice__TypeCtorInfo_65_65, mdice__OptionTable_9, ((MR_Box) ((MR_Integer) 4)), &mdice__MaxFileColumn_18);
                    }
                    mdice__succeeded = (mdice__MaxPredColumn_16 == (MR_Integer) 0);
                    if (mdice__succeeded)
                      mdice__MaybeMaxPredColumn_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    else
                      {
                        mdice__MaybeMaxPredColumn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mdice__MaybeMaxPredColumn_19, 0) = ((MR_Box) (mdice__MaxPredColumn_16));
                      }
                    mdice__succeeded = (mdice__MaxPathColumn_17 == (MR_Integer) 0);
                    if (mdice__succeeded)
                      mdice__MaybeMaxPathColumn_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    else
                      {
                        mdice__MaybeMaxPathColumn_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mdice__MaybeMaxPathColumn_20, 0) = ((MR_Box) (mdice__MaxPathColumn_17));
                      }
                    mdice__succeeded = (mdice__MaxFileColumn_18 == (MR_Integer) 0);
                    if (mdice__succeeded)
                      mdice__MaybeMaxFileColumn_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    else
                      {
                        mdice__MaybeMaxFileColumn_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mdice__MaybeMaxFileColumn_21, 0) = ((MR_Box) (mdice__MaxFileColumn_18));
                      }
                    {
                      mdbcomp__slice_and_dice__read_dice_to_string_12_p_0(mdice__V_67_67, mdice__V_69_69, mdice__SortStr_13, mdice__MaxRow_15, mdice__MaybeMaxPredColumn_19, mdice__MaybeMaxPathColumn_20, mdice__MaybeMaxFileColumn_21, mdice__Module_14, &mdice__DiceStr_22, &mdice__Problem_23);
                    }
                    mdice__succeeded = (strcmp(mdice__Problem_23, (MR_String) "") == 0);
                    if (mdice__succeeded)
                      {
                        mercury__io__write_string_4_p_0(mdice__StdOutStream_4, mdice__DiceStr_22);
                      }
                    else
                      {
                        {
                          mercury__io__write_string_4_p_0(mdice__StdOutStream_4, mdice__Problem_23);
                        }
                        {
                          mercury__io__nl_3_p_0(mdice__StdOutStream_4);
                        }
                        {
                          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                        }
                      }
                  }
                else
                  {
                    {
                      mercury__io__write_string_4_p_0(mdice__StdOutStream_4, (MR_String) "Usage: mdice [-s sortspec] [-m module] [-l N] [-n N] [-p N] [-f N] passfile failfile\n");
                    }
                  }
              }
          }
      }
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

/* :- end_module mdice. */
