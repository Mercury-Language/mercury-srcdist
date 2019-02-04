/*
** Automatically generated from `mtc_union.m'
** by the Mercury compiler,
** version rotd-2017-06-22
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


/* :- module mtc_union. */
/* :- implementation. */

/*
INIT mercury__mtc_union__init
ENDINIT
*/

#include "mtc_union.mih"


#include "mdbcomp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.shared_utilities.mih"
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



struct mtc_union__main_2_p_0_4_env_0_s {
  MR_Box * mtc_union__main_2_p_0_4_env_0__wrapper_arg_1;
  MR_Box * mtc_union__main_2_p_0_4_env_0__wrapper_arg_2;
  MR_Cont mtc_union__main_2_p_0_4_env_0__cont;
  void * mtc_union__main_2_p_0_4_env_0__cont_env_ptr;
  MR_Word mtc_union__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word mtc_union__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
};


static const MR_EnumFunctorDesc mtc_union__mtc_union__enum_functor_desc_option_0_0;

static const MR_EnumFunctorDesc mtc_union__mtc_union__enum_functor_desc_option_0_1;

static const MR_EnumFunctorDescPtr mtc_union__mtc_union__enum_value_ordered_option_0[2];

static const MR_EnumFunctorDescPtr mtc_union__mtc_union__enum_name_ordered_option_0[2];

static const MR_Integer mtc_union__mtc_union__functor_number_map_option_0[2];

static const MR_FA_TypeInfo_Struct2 mtc_union__tree234__ti_tree234_2mtc_union__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static MR_bool MR_CALL 
mtc_union____Unify____option_0_0_10001(
  MR_Box mtc_union__wrapper_arg_1,
  MR_Box mtc_union__wrapper_arg_2);

static void MR_CALL 
mtc_union____Compare____option_0_0_10001(
  MR_Box * mtc_union__wrapper_arg_1,
  MR_Box mtc_union__wrapper_arg_2,
  MR_Box mtc_union__wrapper_arg_3);

static MR_bool MR_CALL 
mtc_union____Unify____option_table_0_0_10001(
  MR_Box mtc_union__wrapper_arg_1,
  MR_Box mtc_union__wrapper_arg_2);

static void MR_CALL 
mtc_union____Compare____option_table_0_0_10001(
  MR_Box * mtc_union__wrapper_arg_1,
  MR_Box mtc_union__wrapper_arg_2,
  MR_Box mtc_union__wrapper_arg_3);

static void MR_CALL 
mtc_union____Compare____option_table_0_0(
  MR_Word * mtc_union__HeadVar__1_1,
  MR_Word mtc_union__HeadVar__2_2,
  MR_Word mtc_union__HeadVar__3_3);

static MR_bool MR_CALL 
mtc_union____Unify____option_table_0_0(
  MR_Word mtc_union__HeadVar__1_1,
  MR_Word mtc_union__HeadVar__2_2);

static void MR_CALL 
mtc_union____Compare____option_0_0(
  MR_Word * mtc_union__HeadVar__1_1,
  MR_Word mtc_union__HeadVar__2_2,
  MR_Word mtc_union__HeadVar__3_3);

static MR_bool MR_CALL 
mtc_union____Unify____option_0_0(
  MR_Word mtc_union__HeadVar__2_1,
  MR_Word mtc_union__HeadVar__2_2);

static void MR_CALL 
mtc_union__option_default_2_p_0(
  MR_Word * mtc_union__HeadVar__1_1,
  MR_Word * mtc_union__HeadVar__2_2,
  MR_Cont mtc_union__cont,
  void * mtc_union__cont_env_ptr);

static MR_bool MR_CALL 
mtc_union__long_option_2_p_0(
  MR_String mtc_union__HeadVar__1_1,
  MR_Word * mtc_union__HeadVar__2_2);

static MR_bool MR_CALL 
mtc_union__short_option_2_p_0(
  MR_Char mtc_union__HeadVar__1_1,
  MR_Word * mtc_union__HeadVar__2_2);

static void MR_CALL 
main_2_p_0_3(
  void * mtc_union__env_ptr_arg);

static void MR_CALL 
main_2_p_0_4(
  MR_Box mtc_union__closure_arg,
  MR_Box * mtc_union__wrapper_arg_1,
  MR_Box * mtc_union__wrapper_arg_2,
  MR_Cont mtc_union__cont,
  void * mtc_union__cont_env_ptr);

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box mtc_union__closure_arg,
  MR_Box mtc_union__wrapper_arg_1,
  MR_Box * mtc_union__wrapper_arg_2);

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box mtc_union__closure_arg,
  MR_Box mtc_union__wrapper_arg_1,
  MR_Box * mtc_union__wrapper_arg_2);


static /* final */ const MR_Box mtc_union_scalar_common_1[5][3];

static /* final */ const MR_Box mtc_union_scalar_common_2[5][2];

static /* final */ const MR_Box mtc_union_scalar_common_3[3][5];

static /* final */ const MR_Box mtc_union_scalar_common_4[1][1];


/* sealed */ struct mtc_union__vector_common_type_5_0_s {
  const MR_Word mtc_union__vector_common_type_5_0__vct_5_f_0;
  const MR_Word mtc_union__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct mtc_union__vector_common_type_5_0_s mtc_union_vector_common_5[2];



static /* final */ const MR_Box mtc_union_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mtc_union__mtc_union__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mtc_union_scalar_common_3[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mtc_union_scalar_common_3[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mtc_union_scalar_common_3[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mtc_union_scalar_common_1[1])),
    ((MR_Box) (&mtc_union_scalar_common_1[2])),
    ((MR_Box) (&mtc_union_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box mtc_union_scalar_common_2[5][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "file1, file2, etc should be trace count files.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "to be printed as it is added to the union.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mtc_union_scalar_common_2[0])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "The -v or --verbose option causes each trace count file name\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mtc_union_scalar_common_2[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "Usage: mtc_union [-v] -o output_file file1 file2 ...\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mtc_union_scalar_common_2[2])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box mtc_union_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mtc_union__mtc_union__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mtc_union__mtc_union__type_ctor_info_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mtc_union__mtc_union__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box mtc_union_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct mtc_union__vector_common_type_5_0_s mtc_union_vector_common_5[2] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(3), &mtc_union_scalar_common_2[4])
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(1), &mtc_union_scalar_common_4[0])
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc mtc_union__mtc_union__enum_functor_desc_option_0_0 = {
  (MR_String) "output_filename",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mtc_union__mtc_union__enum_functor_desc_option_0_1 = {
  (MR_String) "verbose",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mtc_union__mtc_union__enum_value_ordered_option_0[2] = {
  &mtc_union__mtc_union__enum_functor_desc_option_0_0,
  &mtc_union__mtc_union__enum_functor_desc_option_0_1
};

static const MR_EnumFunctorDescPtr mtc_union__mtc_union__enum_name_ordered_option_0[2] = {
  &mtc_union__mtc_union__enum_functor_desc_option_0_0,
  &mtc_union__mtc_union__enum_functor_desc_option_0_1
};

static const MR_Integer mtc_union__mtc_union__functor_number_map_option_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mtc_union__mtc_union__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mtc_union____Unify____option_0_0_10001)),
  ((MR_Box) (mtc_union____Compare____option_0_0_10001)),
  (MR_String) "mtc_union",
  (MR_String) "option",
  {     mtc_union__mtc_union__enum_name_ordered_option_0 },
  {     mtc_union__mtc_union__enum_value_ordered_option_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mtc_union__mtc_union__functor_number_map_option_0
};

static const MR_FA_TypeInfo_Struct2 mtc_union__tree234__ti_tree234_2mtc_union__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mtc_union__mtc_union__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

const MR_TypeCtorInfo_Struct mtc_union__mtc_union__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mtc_union____Unify____option_table_0_0_10001)),
  ((MR_Box) (mtc_union____Compare____option_table_0_0_10001)),
  (MR_String) "mtc_union",
  (MR_String) "option_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mtc_union__tree234__ti_tree234_2mtc_union__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mtc_union____Unify____option_0_0_10001(
  MR_Box mtc_union__wrapper_arg_1,
  MR_Box mtc_union__wrapper_arg_2)
{
  {
    MR_bool mtc_union__succeeded;

    {
      mtc_union__succeeded = mtc_union____Unify____option_0_0(((MR_Word) mtc_union__wrapper_arg_1), ((MR_Word) mtc_union__wrapper_arg_2));
    }
    return mtc_union__succeeded;
  }
}

static void MR_CALL 
mtc_union____Compare____option_0_0_10001(
  MR_Box * mtc_union__wrapper_arg_1,
  MR_Box mtc_union__wrapper_arg_2,
  MR_Box mtc_union__wrapper_arg_3)
{
  {
    MR_Word mtc_union__conv0_HeadVar__1_1;

    {
      mtc_union____Compare____option_0_0(&mtc_union__conv0_HeadVar__1_1, ((MR_Word) mtc_union__wrapper_arg_2), ((MR_Word) mtc_union__wrapper_arg_3));
    }
    *mtc_union__wrapper_arg_1 = ((MR_Box) (mtc_union__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mtc_union____Unify____option_table_0_0_10001(
  MR_Box mtc_union__wrapper_arg_1,
  MR_Box mtc_union__wrapper_arg_2)
{
  {
    MR_bool mtc_union__succeeded;

    {
      mtc_union__succeeded = mtc_union____Unify____option_table_0_0(((MR_Word) mtc_union__wrapper_arg_1), ((MR_Word) mtc_union__wrapper_arg_2));
    }
    return mtc_union__succeeded;
  }
}

static void MR_CALL 
mtc_union____Compare____option_table_0_0_10001(
  MR_Box * mtc_union__wrapper_arg_1,
  MR_Box mtc_union__wrapper_arg_2,
  MR_Box mtc_union__wrapper_arg_3)
{
  {
    MR_Word mtc_union__conv0_HeadVar__1_1;

    {
      mtc_union____Compare____option_table_0_0(&mtc_union__conv0_HeadVar__1_1, ((MR_Word) mtc_union__wrapper_arg_2), ((MR_Word) mtc_union__wrapper_arg_3));
    }
    *mtc_union__wrapper_arg_1 = ((MR_Box) (mtc_union__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mtc_union____Compare____option_table_0_0(
  MR_Word * mtc_union__HeadVar__1_1,
  MR_Word mtc_union__HeadVar__2_2,
  MR_Word mtc_union__HeadVar__3_3)
{
  {
    MR_bool mtc_union__succeeded;
    MR_Word mtc_union__Cast_HeadVar1_4 = mtc_union__HeadVar__2_2;
    MR_Word mtc_union__Cast_HeadVar2_5 = mtc_union__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mtc_union_scalar_common_1[0], mtc_union__HeadVar__1_1, ((MR_Box) (mtc_union__Cast_HeadVar1_4)), ((MR_Box) (mtc_union__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
mtc_union____Unify____option_table_0_0(
  MR_Word mtc_union__HeadVar__1_1,
  MR_Word mtc_union__HeadVar__2_2)
{
  {
    MR_bool mtc_union__succeeded;
    MR_Word mtc_union__Cast_HeadVar1_3 = mtc_union__HeadVar__1_1;
    MR_Word mtc_union__Cast_HeadVar2_4 = mtc_union__HeadVar__2_2;

    {
      mtc_union__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mtc_union_scalar_common_1[0], ((MR_Box) (mtc_union__Cast_HeadVar1_3)), ((MR_Box) (mtc_union__Cast_HeadVar2_4)));
    }
    return mtc_union__succeeded;
  }
}

static void MR_CALL 
mtc_union____Compare____option_0_0(
  MR_Word * mtc_union__HeadVar__1_1,
  MR_Word mtc_union__HeadVar__2_2,
  MR_Word mtc_union__HeadVar__3_3)
{
  {
    MR_bool mtc_union__succeeded;
    MR_Integer mtc_union__Cast_HeadVar1_4 = (MR_Integer) mtc_union__HeadVar__2_2;
    MR_Integer mtc_union__Cast_HeadVar2_5 = (MR_Integer) mtc_union__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mtc_union__HeadVar__1_1, mtc_union__Cast_HeadVar1_4, mtc_union__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
mtc_union____Unify____option_0_0(
  MR_Word mtc_union__HeadVar__2_1,
  MR_Word mtc_union__HeadVar__2_2)
{
  {
    MR_bool mtc_union__succeeded = (mtc_union__HeadVar__2_1 == mtc_union__HeadVar__2_2);

    return mtc_union__succeeded;
  }
}

static void MR_CALL 
mtc_union__option_default_2_p_0(
  MR_Word * mtc_union__HeadVar__1_1,
  MR_Word * mtc_union__HeadVar__2_2,
  MR_Cont mtc_union__cont,
  void * mtc_union__cont_env_ptr)
{
  {
    MR_bool mtc_union__succeeded;

    {
      MR_Integer mtc_union__slot_0 = (MR_Integer) 0;

      do
        {
          *mtc_union__HeadVar__1_1 = ((&mtc_union_vector_common_5[0 + mtc_union__slot_0]))->mtc_union__vector_common_type_5_0__vct_5_f_0;
          *mtc_union__HeadVar__2_2 = ((&mtc_union_vector_common_5[0 + mtc_union__slot_0]))->mtc_union__vector_common_type_5_0__vct_5_f_1;
          {
            mtc_union__cont(mtc_union__cont_env_ptr);
          }
          mtc_union__slot_0 = (mtc_union__slot_0 + (MR_Integer) 1);
        }
      while ((mtc_union__slot_0 < (MR_Integer) 2));
    }
  }
}

static MR_bool MR_CALL 
mtc_union__long_option_2_p_0(
  MR_String mtc_union__HeadVar__1_1,
  MR_Word * mtc_union__HeadVar__2_2)
{
  {
    MR_bool mtc_union__succeeded;

    if ((strcmp(mtc_union__HeadVar__1_1, (MR_String) "out") == 0))
      {
        *mtc_union__HeadVar__2_2 = (MR_Integer) 0;
        mtc_union__succeeded = MR_TRUE;
      }
    else
    if ((strcmp(mtc_union__HeadVar__1_1, (MR_String) "verbose") == 0))
      {
        *mtc_union__HeadVar__2_2 = (MR_Integer) 1;
        mtc_union__succeeded = MR_TRUE;
      }
    else
      mtc_union__succeeded = MR_FALSE;
    return mtc_union__succeeded;
  }
}

static MR_bool MR_CALL 
mtc_union__short_option_2_p_0(
  MR_Char mtc_union__HeadVar__1_1,
  MR_Word * mtc_union__HeadVar__2_2)
{
  {
    MR_bool mtc_union__succeeded;

    switch (mtc_union__HeadVar__1_1) {
      default:
        mtc_union__succeeded = MR_FALSE;
        break;
      case (MR_Char) 111:
        {
          *mtc_union__HeadVar__2_2 = (MR_Integer) 0;
          mtc_union__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 118:
        {
          *mtc_union__HeadVar__2_2 = (MR_Integer) 1;
          mtc_union__succeeded = MR_TRUE;
        }
        break;
    }
    return mtc_union__succeeded;
  }
}

static void MR_CALL 
main_2_p_0_3(
  void * mtc_union__env_ptr_arg)
{
  {
    struct mtc_union__main_2_p_0_4_env_0_s * mtc_union__env_ptr = (struct mtc_union__main_2_p_0_4_env_0_s *) mtc_union__env_ptr_arg;

    *((mtc_union__env_ptr)->mtc_union__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mtc_union__env_ptr)->mtc_union__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
    *((mtc_union__env_ptr)->mtc_union__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mtc_union__env_ptr)->mtc_union__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
    {
      ((mtc_union__env_ptr)->mtc_union__main_2_p_0_4_env_0__cont)((mtc_union__env_ptr)->mtc_union__main_2_p_0_4_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
main_2_p_0_4(
  MR_Box mtc_union__closure_arg,
  MR_Box * mtc_union__wrapper_arg_1,
  MR_Box * mtc_union__wrapper_arg_2,
  MR_Cont mtc_union__cont,
  void * mtc_union__cont_env_ptr)
{
  {
    struct mtc_union__main_2_p_0_4_env_0_s mtc_union__env;

    (mtc_union__env).mtc_union__main_2_p_0_4_env_0__wrapper_arg_1 = mtc_union__wrapper_arg_1;
    (mtc_union__env).mtc_union__main_2_p_0_4_env_0__wrapper_arg_2 = mtc_union__wrapper_arg_2;
    (mtc_union__env).mtc_union__main_2_p_0_4_env_0__cont = mtc_union__cont;
    (mtc_union__env).mtc_union__main_2_p_0_4_env_0__cont_env_ptr = mtc_union__cont_env_ptr;
    {
      MR_Box mtc_union__closure = mtc_union__closure_arg;

      {
        mtc_union__option_default_2_p_0(&(mtc_union__env).mtc_union__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mtc_union__env).mtc_union__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &mtc_union__env);
      }
    }
  }
}

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box mtc_union__closure_arg,
  MR_Box mtc_union__wrapper_arg_1,
  MR_Box * mtc_union__wrapper_arg_2)
{
  {
    MR_bool mtc_union__succeeded;
    MR_Box mtc_union__closure = mtc_union__closure_arg;
    MR_Word mtc_union__conv1_HeadVar__2_2;

    {
      mtc_union__succeeded = mtc_union__long_option_2_p_0(((MR_String) mtc_union__wrapper_arg_1), &mtc_union__conv1_HeadVar__2_2);
    }
    if (mtc_union__succeeded)
      {
        *mtc_union__wrapper_arg_2 = ((MR_Box) (mtc_union__conv1_HeadVar__2_2));
        mtc_union__succeeded = MR_TRUE;
      }
    return mtc_union__succeeded;
  }
}

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box mtc_union__closure_arg,
  MR_Box mtc_union__wrapper_arg_1,
  MR_Box * mtc_union__wrapper_arg_2)
{
  {
    MR_bool mtc_union__succeeded;
    MR_Box mtc_union__closure = mtc_union__closure_arg;
    MR_Word mtc_union__conv0_HeadVar__2_2;

    {
      mtc_union__succeeded = mtc_union__short_option_2_p_0(((MR_Char) (MR_Word) mtc_union__wrapper_arg_1), &mtc_union__conv0_HeadVar__2_2);
    }
    if (mtc_union__succeeded)
      {
        *mtc_union__wrapper_arg_2 = ((MR_Box) (mtc_union__conv0_HeadVar__2_2));
        mtc_union__succeeded = MR_TRUE;
      }
    return mtc_union__succeeded;
  }
}

void MR_CALL 
main_2_p_0(void)
{
  {
    MR_bool mtc_union__succeeded;
    MR_Word mtc_union__TypeCtorInfo_59_59;
    MR_Word mtc_union__StdOutStream_4;
    MR_Word mtc_union__StdErrStream_5;
    MR_Word mtc_union__Args0_6;
    MR_Word mtc_union__Args_8;
    MR_Word mtc_union__GetoptResult_9;

    {
      mercury__io__stdout_stream_3_p_0(&mtc_union__StdOutStream_4);
    }
    {
      mercury__io__stderr_stream_3_p_0(&mtc_union__StdErrStream_5);
    }
    {
      mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    }
    {
      mercury__io__command_line_arguments_3_p_0(&mtc_union__Args0_6);
    }
    mtc_union__TypeCtorInfo_59_59 = (MR_Word) &mtc_union__mtc_union__type_ctor_info_option_0;
    {
      mercury__getopt__process_options_4_p_0(mtc_union__TypeCtorInfo_59_59, (MR_Word) MR_mkword(MR_mktag(2), &mtc_union_scalar_common_1[4]), mtc_union__Args0_6, &mtc_union__Args_8, &mtc_union__GetoptResult_9);
    }
    if (((MR_tag((MR_Word) mtc_union__GetoptResult_9)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mtc_union__GetoptErrorMsg_23 = ((MR_String) (MR_hl_field(MR_mktag(1), mtc_union__GetoptResult_9, (MR_Integer) 0)));

        {
          mercury__io__write_string_4_p_0(mtc_union__StdOutStream_4, mtc_union__GetoptErrorMsg_23);
        }
        {
          mercury__io__nl_3_p_0(mtc_union__StdOutStream_4);
        }
      }
    else
      {
        MR_Word mtc_union__OptionTable_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mtc_union__GetoptResult_9, (MR_Integer) 0)));
        MR_String mtc_union__OutputFile_11;
        MR_String mtc_union__Var_12;
        MR_Word mtc_union__Var_13;

        {
          mercury__getopt__lookup_string_option_3_p_0(mtc_union__TypeCtorInfo_59_59, mtc_union__OptionTable_10, ((MR_Box) ((MR_Integer) 0)), &mtc_union__OutputFile_11);
        }
        mtc_union__succeeded = ((MR_tag((MR_Word) mtc_union__Args_8)) == (MR_mktag((MR_Integer) 1)));
        if (mtc_union__succeeded)
          {
            mtc_union__Var_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mtc_union__Args_8, (MR_Integer) 0)));
            mtc_union__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mtc_union__Args_8, (MR_Integer) 1)));
            mtc_union__succeeded = (strcmp(mtc_union__OutputFile_11, (MR_String) "") == 0);
            mtc_union__succeeded = !(mtc_union__succeeded);
          }
        if (mtc_union__succeeded)
          {
            MR_Word mtc_union__Verbose_14;
            MR_Integer mtc_union__NumTests_15;
            MR_Word mtc_union__Kinds_16;
            MR_Word mtc_union__TraceCounts_17;
            MR_Word mtc_union__MaybeReadError_18;

            {
              mercury__getopt__lookup_bool_option_3_p_0(mtc_union__TypeCtorInfo_59_59, mtc_union__OptionTable_10, ((MR_Box) ((MR_Integer) 1)), &mtc_union__Verbose_14);
            }
            {
              mdbcomp__trace_counts__read_and_union_trace_counts_8_p_0(mtc_union__Verbose_14, mtc_union__Args_8, &mtc_union__NumTests_15, &mtc_union__Kinds_16, &mtc_union__TraceCounts_17, &mtc_union__MaybeReadError_18);
            }
            if ((mtc_union__MaybeReadError_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word mtc_union__Type_20;
                MR_Word mtc_union__WriteResult_21;
                MR_Word mtc_union__Var_38;

                {
                  mtc_union__Var_38 = mercury__set__to_sorted_list_1_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mtc_union__Kinds_16);
                }
                {
                  mtc_union__Type_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mtc_union__Type_20, 0) = ((MR_Box) (mtc_union__NumTests_15));
                  MR_hl_field(MR_mktag(1), mtc_union__Type_20, 1) = ((MR_Box) (mtc_union__Var_38));
                }
                {
                  mdbcomp__trace_counts__write_trace_counts_to_file_6_p_0(mtc_union__Type_20, mtc_union__TraceCounts_17, mtc_union__OutputFile_11, &mtc_union__WriteResult_21);
                }
                if ((mtc_union__WriteResult_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                  }
                else
                  {
                    MR_Word mtc_union__WriteErrorMsg_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mtc_union__WriteResult_21, (MR_Integer) 0)));
                    MR_String mtc_union__Var_40;
                    MR_String mtc_union__Var_43;
                    MR_String mtc_union__Var_44;
                    MR_String mtc_union__Var_46;
                    MR_String mtc_union__Var_48;

                    {
                      mtc_union__Var_48 = mercury__string__string_1_f_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mtc_union__WriteErrorMsg_22)));
                    }
                    {
                      mtc_union__Var_46 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mtc_union__Var_48);
                    }
                    {
                      mtc_union__Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "\'", mtc_union__Var_46);
                    }
                    {
                      mtc_union__Var_43 = mercury__string__f_43_43_2_f_0(mtc_union__OutputFile_11, mtc_union__Var_44);
                    }
                    {
                      mtc_union__Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "Error writing to file \140", mtc_union__Var_43);
                    }
                    {
                      mercury__io__write_string_4_p_0(mtc_union__StdErrStream_5, mtc_union__Var_40);
                    }
                    {
                      mercury__io__nl_3_p_0(mtc_union__StdErrStream_5);
                    }
                  }
              }
            else
              {
                MR_String mtc_union__ReadErrorMsg_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mtc_union__MaybeReadError_18, (MR_Integer) 0)));

                {
                  mercury__io__write_string_4_p_0(mtc_union__StdErrStream_5, mtc_union__ReadErrorMsg_19);
                }
                {
                  mercury__io__nl_3_p_0(mtc_union__StdErrStream_5);
                }
              }
          }
        else
          {
            {
              mercury__io__write_strings_4_p_0(mtc_union__StdOutStream_4, (MR_Word) MR_mkword(MR_mktag(1), &mtc_union_scalar_common_2[3]));
            }
          }
      }
  }
}

void mercury__mtc_union__init(void)
{
}

void mercury__mtc_union__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mtc_union__mtc_union__type_ctor_info_option_0);
	MR_register_type_ctor_info(&mtc_union__mtc_union__type_ctor_info_option_table_0);
}

void mercury__mtc_union__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mtc_union__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module mtc_union. */
