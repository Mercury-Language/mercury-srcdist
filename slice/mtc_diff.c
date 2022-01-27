/*
** Automatically generated from `mtc_diff.m'
** by the Mercury compiler,
** version rotd-2017-02-22
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


/* :- module mtc_diff. */
/* :- implementation. */

/*
INIT mercury__mtc_diff__init
ENDINIT
*/

#include "mtc_diff.mih"


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



struct mtc_diff__main_2_p_0_4_env_0_s {
  MR_Box * mtc_diff__main_2_p_0_4_env_0__wrapper_arg_2;
  MR_Cont mtc_diff__main_2_p_0_4_env_0__cont;
  void * mtc_diff__main_2_p_0_4_env_0__cont_env_ptr;
  MR_Word mtc_diff__main_2_p_0_4_env_0__conv0_HeadVar__2_2;
};


static const MR_EnumFunctorDesc mtc_diff__mtc_diff__enum_functor_desc_option_0_0;

static const MR_EnumFunctorDescPtr mtc_diff__mtc_diff__enum_value_ordered_option_0[1];

static const MR_EnumFunctorDescPtr mtc_diff__mtc_diff__enum_name_ordered_option_0[1];

static const MR_Integer mtc_diff__mtc_diff__functor_number_map_option_0[1];

static const MR_FA_TypeInfo_Struct2 mtc_diff__tree234__ti_tree234_2mtc_diff__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static MR_bool MR_CALL 
mtc_diff____Unify____option_0_0_10001(
  MR_Box mtc_diff__wrapper_arg_1,
  MR_Box mtc_diff__wrapper_arg_2);

static void MR_CALL 
mtc_diff____Compare____option_0_0_10001(
  MR_Box * mtc_diff__wrapper_arg_1,
  MR_Box mtc_diff__wrapper_arg_2,
  MR_Box mtc_diff__wrapper_arg_3);

static MR_bool MR_CALL 
mtc_diff____Unify____option_table_0_0_10001(
  MR_Box mtc_diff__wrapper_arg_1,
  MR_Box mtc_diff__wrapper_arg_2);

static void MR_CALL 
mtc_diff____Compare____option_table_0_0_10001(
  MR_Box * mtc_diff__wrapper_arg_1,
  MR_Box mtc_diff__wrapper_arg_2,
  MR_Box mtc_diff__wrapper_arg_3);

static void MR_CALL 
mtc_diff__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_116_99_95_100_105_102_102_95_95_111_112_116_105_111_110_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * mtc_diff__HeadVar__1_1);

static MR_bool MR_CALL 
mtc_diff__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_116_99_95_100_105_102_102_95_95_111_112_116_105_111_110_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void);

static void MR_CALL 
mtc_diff____Compare____option_table_0_0(
  MR_Word * mtc_diff__HeadVar__1_1,
  MR_Word mtc_diff__HeadVar__2_2,
  MR_Word mtc_diff__HeadVar__3_3);

static MR_bool MR_CALL 
mtc_diff____Unify____option_table_0_0(
  MR_Word mtc_diff__HeadVar__1_1,
  MR_Word mtc_diff__HeadVar__2_2);

static void MR_CALL 
mtc_diff____Compare____option_0_0(
  MR_Word * mtc_diff__HeadVar__1_1);

static MR_bool MR_CALL 
mtc_diff____Unify____option_0_0(void);

static void MR_CALL 
mtc_diff__option_default_2_p_0(
  MR_Word * mtc_diff__HeadVar__2_2,
  MR_Cont mtc_diff__cont,
  void * mtc_diff__cont_env_ptr);

static MR_bool MR_CALL 
mtc_diff__long_option_2_p_0(
  MR_String mtc_diff__HeadVar__1_1);

static MR_bool MR_CALL 
mtc_diff__short_option_2_p_0(
  MR_Char mtc_diff__HeadVar__1_1);

static void MR_CALL 
main_2_p_0_3(
  void * mtc_diff__env_ptr_arg);

static void MR_CALL 
main_2_p_0_4(
  MR_Box mtc_diff__closure_arg,
  MR_Box * mtc_diff__wrapper_arg_1,
  MR_Box * mtc_diff__wrapper_arg_2,
  MR_Cont mtc_diff__cont,
  void * mtc_diff__cont_env_ptr);

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box mtc_diff__closure_arg,
  MR_Box mtc_diff__wrapper_arg_1,
  MR_Box * mtc_diff__wrapper_arg_2);

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box mtc_diff__closure_arg,
  MR_Box mtc_diff__wrapper_arg_1,
  MR_Box * mtc_diff__wrapper_arg_2);


static /* final */ const MR_Box mtc_diff_scalar_common_1[5][3];

static /* final */ const MR_Box mtc_diff_scalar_common_2[3][5];

static /* final */ const MR_Box mtc_diff_scalar_common_3[1][2];




static /* final */ const MR_Box mtc_diff_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mtc_diff__mtc_diff__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mtc_diff_scalar_common_2[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mtc_diff_scalar_common_2[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mtc_diff_scalar_common_2[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mtc_diff_scalar_common_1[1])),
    ((MR_Box) (&mtc_diff_scalar_common_1[2])),
    ((MR_Box) (&mtc_diff_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box mtc_diff_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mtc_diff__mtc_diff__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mtc_diff__mtc_diff__type_ctor_info_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mtc_diff__mtc_diff__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box mtc_diff_scalar_common_3[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ""))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc mtc_diff__mtc_diff__enum_functor_desc_option_0_0 = {
  (MR_String) "output_filename",
  (MR_Integer) 0
};

static const MR_EnumFunctorDescPtr mtc_diff__mtc_diff__enum_value_ordered_option_0[1] = {
  &mtc_diff__mtc_diff__enum_functor_desc_option_0_0
};

static const MR_EnumFunctorDescPtr mtc_diff__mtc_diff__enum_name_ordered_option_0[1] = {
  &mtc_diff__mtc_diff__enum_functor_desc_option_0_0
};

static const MR_Integer mtc_diff__mtc_diff__functor_number_map_option_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mtc_diff__mtc_diff__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mtc_diff____Unify____option_0_0_10001)),
  ((MR_Box) (mtc_diff____Compare____option_0_0_10001)),
  (MR_String) "mtc_diff",
  (MR_String) "option",
  {     mtc_diff__mtc_diff__enum_name_ordered_option_0 },
  {     mtc_diff__mtc_diff__enum_value_ordered_option_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mtc_diff__mtc_diff__functor_number_map_option_0
};

static const MR_FA_TypeInfo_Struct2 mtc_diff__tree234__ti_tree234_2mtc_diff__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mtc_diff__mtc_diff__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

const MR_TypeCtorInfo_Struct mtc_diff__mtc_diff__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mtc_diff____Unify____option_table_0_0_10001)),
  ((MR_Box) (mtc_diff____Compare____option_table_0_0_10001)),
  (MR_String) "mtc_diff",
  (MR_String) "option_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mtc_diff__tree234__ti_tree234_2mtc_diff__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mtc_diff____Unify____option_0_0_10001(
  MR_Box mtc_diff__wrapper_arg_1,
  MR_Box mtc_diff__wrapper_arg_2)
{
  {
    MR_bool mtc_diff__succeeded;

    {
      mtc_diff__succeeded = mtc_diff____Unify____option_0_0();
    }
    return mtc_diff__succeeded;
  }
}

static void MR_CALL 
mtc_diff____Compare____option_0_0_10001(
  MR_Box * mtc_diff__wrapper_arg_1,
  MR_Box mtc_diff__wrapper_arg_2,
  MR_Box mtc_diff__wrapper_arg_3)
{
  {
    MR_Word mtc_diff__conv0_HeadVar__1_1;

    {
      mtc_diff____Compare____option_0_0(&mtc_diff__conv0_HeadVar__1_1);
    }
    *mtc_diff__wrapper_arg_1 = ((MR_Box) (mtc_diff__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mtc_diff____Unify____option_table_0_0_10001(
  MR_Box mtc_diff__wrapper_arg_1,
  MR_Box mtc_diff__wrapper_arg_2)
{
  {
    MR_bool mtc_diff__succeeded;

    {
      mtc_diff__succeeded = mtc_diff____Unify____option_table_0_0(((MR_Word) mtc_diff__wrapper_arg_1), ((MR_Word) mtc_diff__wrapper_arg_2));
    }
    return mtc_diff__succeeded;
  }
}

static void MR_CALL 
mtc_diff____Compare____option_table_0_0_10001(
  MR_Box * mtc_diff__wrapper_arg_1,
  MR_Box mtc_diff__wrapper_arg_2,
  MR_Box mtc_diff__wrapper_arg_3)
{
  {
    MR_Word mtc_diff__conv0_HeadVar__1_1;

    {
      mtc_diff____Compare____option_table_0_0(&mtc_diff__conv0_HeadVar__1_1, ((MR_Word) mtc_diff__wrapper_arg_2), ((MR_Word) mtc_diff__wrapper_arg_3));
    }
    *mtc_diff__wrapper_arg_1 = ((MR_Box) (mtc_diff__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mtc_diff__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_116_99_95_100_105_102_102_95_95_111_112_116_105_111_110_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * mtc_diff__HeadVar__1_1)
{
  {
    MR_bool mtc_diff__succeeded;

    *mtc_diff__HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
mtc_diff__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_116_99_95_100_105_102_102_95_95_111_112_116_105_111_110_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

static void MR_CALL 
mtc_diff____Compare____option_table_0_0(
  MR_Word * mtc_diff__HeadVar__1_1,
  MR_Word mtc_diff__HeadVar__2_2,
  MR_Word mtc_diff__HeadVar__3_3)
{
  {
    MR_bool mtc_diff__succeeded;
    MR_Word mtc_diff__Cast_HeadVar1_4 = mtc_diff__HeadVar__2_2;
    MR_Word mtc_diff__Cast_HeadVar2_5 = mtc_diff__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mtc_diff_scalar_common_1[0], mtc_diff__HeadVar__1_1, ((MR_Box) (mtc_diff__Cast_HeadVar1_4)), ((MR_Box) (mtc_diff__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
mtc_diff____Unify____option_table_0_0(
  MR_Word mtc_diff__HeadVar__1_1,
  MR_Word mtc_diff__HeadVar__2_2)
{
  {
    MR_bool mtc_diff__succeeded;
    MR_Word mtc_diff__Cast_HeadVar1_3 = mtc_diff__HeadVar__1_1;
    MR_Word mtc_diff__Cast_HeadVar2_4 = mtc_diff__HeadVar__2_2;

    {
      mtc_diff__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mtc_diff_scalar_common_1[0], ((MR_Box) (mtc_diff__Cast_HeadVar1_3)), ((MR_Box) (mtc_diff__Cast_HeadVar2_4)));
    }
    return mtc_diff__succeeded;
  }
}

static void MR_CALL 
mtc_diff____Compare____option_0_0(
  MR_Word * mtc_diff__HeadVar__1_1)
{
  {
    MR_bool mtc_diff__succeeded;

    {
      mtc_diff__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_116_99_95_100_105_102_102_95_95_111_112_116_105_111_110_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mtc_diff__HeadVar__1_1);
    }
  }
}

static MR_bool MR_CALL 
mtc_diff____Unify____option_0_0(void)
{
  {
    MR_bool mtc_diff__succeeded;

    {
      mtc_diff__succeeded = mtc_diff__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_116_99_95_100_105_102_102_95_95_111_112_116_105_111_110_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
    return mtc_diff__succeeded;
  }
}

static void MR_CALL 
mtc_diff__option_default_2_p_0(
  MR_Word * mtc_diff__HeadVar__2_2,
  MR_Cont mtc_diff__cont,
  void * mtc_diff__cont_env_ptr)
{
  {
    MR_bool mtc_diff__succeeded;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    *mtc_diff__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &mtc_diff_scalar_common_3[0]);
    {
      mtc_diff__cont(mtc_diff__cont_env_ptr);
    }
  }
}

static MR_bool MR_CALL 
mtc_diff__long_option_2_p_0(
  MR_String mtc_diff__HeadVar__1_1)
{
  {
    MR_bool mtc_diff__succeeded = (strcmp(mtc_diff__HeadVar__1_1, (MR_String) "out") == 0);

    if (mtc_diff__succeeded)
      {
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
        mtc_diff__succeeded = MR_TRUE;
      }
    return mtc_diff__succeeded;
  }
}

static MR_bool MR_CALL 
mtc_diff__short_option_2_p_0(
  MR_Char mtc_diff__HeadVar__1_1)
{
  {
    MR_bool mtc_diff__succeeded = (mtc_diff__HeadVar__1_1 == (MR_Char) 111);

    if (mtc_diff__succeeded)
      {
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
        mtc_diff__succeeded = MR_TRUE;
      }
    return mtc_diff__succeeded;
  }
}

static void MR_CALL 
main_2_p_0_3(
  void * mtc_diff__env_ptr_arg)
{
  {
    struct mtc_diff__main_2_p_0_4_env_0_s * mtc_diff__env_ptr = (struct mtc_diff__main_2_p_0_4_env_0_s *) mtc_diff__env_ptr_arg;

    *((mtc_diff__env_ptr)->mtc_diff__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mtc_diff__env_ptr)->mtc_diff__main_2_p_0_4_env_0__conv0_HeadVar__2_2));
    {
      ((mtc_diff__env_ptr)->mtc_diff__main_2_p_0_4_env_0__cont)((mtc_diff__env_ptr)->mtc_diff__main_2_p_0_4_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
main_2_p_0_4(
  MR_Box mtc_diff__closure_arg,
  MR_Box * mtc_diff__wrapper_arg_1,
  MR_Box * mtc_diff__wrapper_arg_2,
  MR_Cont mtc_diff__cont,
  void * mtc_diff__cont_env_ptr)
{
  {
    struct mtc_diff__main_2_p_0_4_env_0_s mtc_diff__env;

    (mtc_diff__env).mtc_diff__main_2_p_0_4_env_0__wrapper_arg_2 = mtc_diff__wrapper_arg_2;
    (mtc_diff__env).mtc_diff__main_2_p_0_4_env_0__cont = mtc_diff__cont;
    (mtc_diff__env).mtc_diff__main_2_p_0_4_env_0__cont_env_ptr = mtc_diff__cont_env_ptr;
    {
      MR_Box mtc_diff__closure = mtc_diff__closure_arg;

      {
        mtc_diff__option_default_2_p_0(&(mtc_diff__env).mtc_diff__main_2_p_0_4_env_0__conv0_HeadVar__2_2, main_2_p_0_3, &mtc_diff__env);
      }
    }
  }
}

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box mtc_diff__closure_arg,
  MR_Box mtc_diff__wrapper_arg_1,
  MR_Box * mtc_diff__wrapper_arg_2)
{
  {
    MR_bool mtc_diff__succeeded;
    MR_Box mtc_diff__closure = mtc_diff__closure_arg;

    {
      mtc_diff__succeeded = mtc_diff__long_option_2_p_0(((MR_String) mtc_diff__wrapper_arg_1));
    }
    return mtc_diff__succeeded;
  }
}

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box mtc_diff__closure_arg,
  MR_Box mtc_diff__wrapper_arg_1,
  MR_Box * mtc_diff__wrapper_arg_2)
{
  {
    MR_bool mtc_diff__succeeded;
    MR_Box mtc_diff__closure = mtc_diff__closure_arg;

    {
      mtc_diff__succeeded = mtc_diff__short_option_2_p_0(((MR_Char) (MR_Word) mtc_diff__wrapper_arg_1));
    }
    return mtc_diff__succeeded;
  }
}

void MR_CALL 
main_2_p_0(void)
{
  {
    MR_bool mtc_diff__succeeded;
    MR_Word mtc_diff__TypeCtorInfo_71_71;
    MR_Word mtc_diff__StdOutStream_4;
    MR_Word mtc_diff__StdErrStream_5;
    MR_Word mtc_diff__Args0_6;
    MR_Word mtc_diff__Args_8;
    MR_Word mtc_diff__GetoptResult_9;

    {
      mercury__io__stdout_stream_3_p_0(&mtc_diff__StdOutStream_4);
    }
    {
      mercury__io__stderr_stream_3_p_0(&mtc_diff__StdErrStream_5);
    }
    {
      mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    }
    {
      mercury__io__command_line_arguments_3_p_0(&mtc_diff__Args0_6);
    }
    mtc_diff__TypeCtorInfo_71_71 = (MR_Word) &mtc_diff__mtc_diff__type_ctor_info_option_0;
    {
      mercury__getopt__process_options_4_p_0(mtc_diff__TypeCtorInfo_71_71, (MR_Word) MR_mkword(MR_mktag(2), &mtc_diff_scalar_common_1[4]), mtc_diff__Args0_6, &mtc_diff__Args_8, &mtc_diff__GetoptResult_9);
    }
    if (((MR_tag((MR_Word) mtc_diff__GetoptResult_9)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mtc_diff__GetoptErrorMsg_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mtc_diff__GetoptResult_9, (MR_Integer) 0)));

        {
          mercury__io__write_string_4_p_0(mtc_diff__StdOutStream_4, mtc_diff__GetoptErrorMsg_29);
        }
        {
          mercury__io__nl_3_p_0(mtc_diff__StdOutStream_4);
        }
      }
    else
      {
        MR_Word mtc_diff__OptionTable_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mtc_diff__GetoptResult_9, (MR_Integer) 0)));
        MR_String mtc_diff__OutputFile_11;
        MR_String mtc_diff__Arg1_12;
        MR_String mtc_diff__Arg2_13;
        MR_Word mtc_diff__V_42_42;
        MR_Word mtc_diff__V_43_43;

        mercury__private_builtin__dummy_var = (MR_Integer) 0;
        {
          mercury__getopt__lookup_string_option_3_p_0(mtc_diff__TypeCtorInfo_71_71, mtc_diff__OptionTable_10, ((MR_Box) ((MR_Integer) 0)), &mtc_diff__OutputFile_11);
        }
        mtc_diff__succeeded = (strcmp(mtc_diff__OutputFile_11, (MR_String) "") == 0);
        mtc_diff__succeeded = !(mtc_diff__succeeded);
        if (mtc_diff__succeeded)
          {
            mtc_diff__succeeded = ((MR_tag((MR_Word) mtc_diff__Args_8)) == (MR_mktag((MR_Integer) 1)));
            if (mtc_diff__succeeded)
              {
                mtc_diff__Arg1_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mtc_diff__Args_8, (MR_Integer) 0)));
                mtc_diff__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mtc_diff__Args_8, (MR_Integer) 1)));
                mtc_diff__succeeded = ((MR_tag((MR_Word) mtc_diff__V_42_42)) == (MR_mktag((MR_Integer) 1)));
                if (mtc_diff__succeeded)
                  {
                    mtc_diff__Arg2_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mtc_diff__V_42_42, (MR_Integer) 0)));
                    mtc_diff__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mtc_diff__V_42_42, (MR_Integer) 1)));
                    mtc_diff__succeeded = (mtc_diff__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
          }
        if (mtc_diff__succeeded)
          {
            MR_Word mtc_diff__MaybeTraceCounts1_14;
            MR_Word mtc_diff__MaybeTraceCounts2_18;
            MR_Word mtc_diff__Type1_22;
            MR_Word mtc_diff__TraceCounts1_23;
            MR_Word mtc_diff__Type2_24;
            MR_Word mtc_diff__TraceCounts2_25;

            {
              mdbcomp__trace_counts__read_trace_counts_source_4_p_0(mtc_diff__Arg1_12, &mtc_diff__MaybeTraceCounts1_14);
            }
            if (((MR_tag((MR_Word) mtc_diff__MaybeTraceCounts1_14)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_String mtc_diff__Msg1_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mtc_diff__MaybeTraceCounts1_14, (MR_Integer) 0)));

                {
                  mercury__io__write_string_4_p_0(mtc_diff__StdErrStream_5, mtc_diff__Msg1_17);
                }
                {
                  mercury__io__nl_3_p_0(mtc_diff__StdErrStream_5);
                }
              }
            else
              {
              }
            {
              mdbcomp__trace_counts__read_trace_counts_source_4_p_0(mtc_diff__Arg2_13, &mtc_diff__MaybeTraceCounts2_18);
            }
            if (((MR_tag((MR_Word) mtc_diff__MaybeTraceCounts2_18)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_String mtc_diff__Msg2_21 = ((MR_String) (MR_hl_field(MR_mktag(1), mtc_diff__MaybeTraceCounts2_18, (MR_Integer) 0)));

                {
                  mercury__io__write_string_4_p_0(mtc_diff__StdErrStream_5, mtc_diff__Msg2_21);
                }
                {
                  mercury__io__nl_3_p_0(mtc_diff__StdErrStream_5);
                }
              }
            else
              {
              }
            mtc_diff__succeeded = ((MR_tag((MR_Word) mtc_diff__MaybeTraceCounts1_14)) == (MR_mktag((MR_Integer) 0)));
            if (mtc_diff__succeeded)
              {
                mtc_diff__Type1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mtc_diff__MaybeTraceCounts1_14, (MR_Integer) 0)));
                mtc_diff__TraceCounts1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mtc_diff__MaybeTraceCounts1_14, (MR_Integer) 1)));
                mtc_diff__succeeded = ((MR_tag((MR_Word) mtc_diff__MaybeTraceCounts2_18)) == (MR_mktag((MR_Integer) 0)));
                if (mtc_diff__succeeded)
                  {
                    mtc_diff__Type2_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mtc_diff__MaybeTraceCounts2_18, (MR_Integer) 0)));
                    mtc_diff__TraceCounts2_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mtc_diff__MaybeTraceCounts2_18, (MR_Integer) 1)));
                  }
              }
            if (mtc_diff__succeeded)
              {
                MR_Word mtc_diff__TraceCounts_26;
                MR_Word mtc_diff__WriteResult_27;
                MR_Word mtc_diff__V_50_50;

                {
                  mdbcomp__trace_counts__diff_trace_counts_3_p_0(mtc_diff__TraceCounts1_23, mtc_diff__TraceCounts2_25, &mtc_diff__TraceCounts_26);
                }
                {
                  mtc_diff__V_50_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mtc_diff__V_50_50, 0) = ((MR_Box) (mtc_diff__Type1_22));
                  MR_hl_field(MR_mktag(2), mtc_diff__V_50_50, 1) = ((MR_Box) (mtc_diff__Type2_24));
                }
                {
                  mdbcomp__trace_counts__write_trace_counts_to_file_6_p_0(mtc_diff__V_50_50, mtc_diff__TraceCounts_26, mtc_diff__OutputFile_11, &mtc_diff__WriteResult_27);
                }
                if ((mtc_diff__WriteResult_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                  }
                else
                  {
                    MR_Word mtc_diff__WriteErrorMsg_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mtc_diff__WriteResult_27, (MR_Integer) 0)));
                    MR_String mtc_diff__V_52_52;
                    MR_String mtc_diff__V_55_55;
                    MR_String mtc_diff__V_57_57;
                    MR_String mtc_diff__V_58_58;
                    MR_String mtc_diff__V_60_60;
                    MR_String mtc_diff__V_62_62;

                    {
                      mtc_diff__V_62_62 = mercury__string__string_1_f_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mtc_diff__WriteErrorMsg_28)));
                    }
                    {
                      mtc_diff__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mtc_diff__V_62_62);
                    }
                    {
                      mtc_diff__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) "\'", mtc_diff__V_60_60);
                    }
                    {
                      mtc_diff__V_57_57 = mercury__string__f_43_43_2_f_0(mtc_diff__OutputFile_11, mtc_diff__V_58_58);
                    }
                    {
                      mtc_diff__V_55_55 = mercury__string__f_43_43_2_f_0((MR_String) "file \140", mtc_diff__V_57_57);
                    }
                    {
                      mtc_diff__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) "Error writing to ", mtc_diff__V_55_55);
                    }
                    {
                      mercury__io__write_string_4_p_0(mtc_diff__StdErrStream_5, mtc_diff__V_52_52);
                    }
                    {
                      mercury__io__nl_3_p_0(mtc_diff__StdErrStream_5);
                    }
                  }
              }
            else
              {
              }
          }
        else
          {
            {
              mercury__io__write_string_4_p_0(mtc_diff__StdOutStream_4, (MR_String) "Usage: mtc_diff -o outputfile tracecountfile1 tracecountfile2\n");
            }
          }
      }
  }
}

void mercury__mtc_diff__init(void)
{
}

void mercury__mtc_diff__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mtc_diff__mtc_diff__type_ctor_info_option_0);
	MR_register_type_ctor_info(&mtc_diff__mtc_diff__type_ctor_info_option_table_0);
}

void mercury__mtc_diff__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mtc_diff__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module mtc_diff. */
