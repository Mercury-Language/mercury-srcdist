/*
** Automatically generated from `mtc_union.m'
** by the Mercury compiler,
** version rotd-2019-08-05
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


// :- module mtc_union.
// :- implementation.

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

static void MR_CALL 
mtc_union____Compare____option_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mtc_union____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mtc_union____Compare____option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mtc_union____Unify____option_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mtc_union__option_default_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mtc_union__long_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mtc_union__short_option_2_p_0(
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
mtc_union____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mtc_union____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mtc_union____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mtc_union____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mtc_union_scalar_common_3[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mtc_union_scalar_common_3[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
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
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box mtc_union_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mtc_union__mtc_union__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mtc_union__mtc_union__type_ctor_info_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mtc_union__mtc_union__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box mtc_union_scalar_common_4[1][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};


static /* final */ const struct mtc_union__vector_common_type_5_0_s mtc_union_vector_common_5[2] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(MR_mktag(3), &mtc_union_scalar_common_2[4]))
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) (MR_mkword(MR_mktag(1), &mtc_union_scalar_common_4[0]))
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc mtc_union__mtc_union__enum_functor_desc_option_0_0 = {
  (MR_String) "output_filename",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mtc_union__mtc_union__enum_functor_desc_option_0_1 = {
  (MR_String) "verbose",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mtc_union____Unify____option_0_0_10001)),
  ((MR_Box) (mtc_union____Compare____option_0_0_10001)),
  (MR_String) "mtc_union",
  (MR_String) "option",
  {     mtc_union__mtc_union__enum_name_ordered_option_0 },
  {     mtc_union__mtc_union__enum_value_ordered_option_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  mtc_union__mtc_union__functor_number_map_option_0
};

static const MR_FA_TypeInfo_Struct2 mtc_union__tree234__ti_tree234_2mtc_union__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mtc_union__mtc_union__type_ctor_info_option_0),
    (MR_TypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

const MR_TypeCtorInfo_Struct mtc_union__mtc_union__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mtc_union____Unify____option_table_0_0_10001)),
  ((MR_Box) (mtc_union____Compare____option_table_0_0_10001)),
  (MR_String) "mtc_union",
  (MR_String) "option_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mtc_union__tree234__ti_tree234_2mtc_union__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static void MR_CALL 
mtc_union____Compare____option_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mtc_union_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
mtc_union____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mtc_union_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
mtc_union____Compare____option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
mtc_union____Unify____option_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
mtc_union__option_default_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer slot_0 = (MR_Integer) 0;

    do
    {
      *HeadVar__1_1 = ((&mtc_union_vector_common_5[0 + slot_0]))->mtc_union__vector_common_type_5_0__vct_5_f_0;
      *HeadVar__2_2 = ((&mtc_union_vector_common_5[0 + slot_0]))->mtc_union__vector_common_type_5_0__vct_5_f_1;
      cont(cont_env_ptr);
      slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
    }
    while ((slot_0 < (MR_Integer) 2));
  }
}

static MR_bool MR_CALL 
mtc_union__long_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((strcmp(HeadVar__1_1, (MR_String) "out") == 0))
    {
      *HeadVar__2_2 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(HeadVar__1_1, (MR_String) "verbose") == 0))
    {
      *HeadVar__2_2 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static MR_bool MR_CALL 
mtc_union__short_option_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    switch (HeadVar__1_1) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Char) 111:
        {
          *HeadVar__2_2 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 118:
        {
          *HeadVar__2_2 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
main_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct mtc_union__main_2_p_0_4_env_0_s * env_ptr = (struct mtc_union__main_2_p_0_4_env_0_s *) (env_ptr_arg);

    *((env_ptr)->mtc_union__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mtc_union__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
    *((env_ptr)->mtc_union__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mtc_union__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
    ((env_ptr)->mtc_union__main_2_p_0_4_env_0__cont)((env_ptr)->mtc_union__main_2_p_0_4_env_0__cont_env_ptr);
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
    struct mtc_union__main_2_p_0_4_env_0_s env;

    (env).mtc_union__main_2_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).mtc_union__main_2_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
    (env).mtc_union__main_2_p_0_4_env_0__cont = cont;
    (env).mtc_union__main_2_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      mtc_union__option_default_2_p_0(&(env).mtc_union__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(env).mtc_union__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &env);
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

    succeeded = mtc_union__long_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_HeadVar__2_2);
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

    succeeded = mtc_union__short_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
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
    MR_Word StdErrStream_5;
    MR_Word Args0_6;
    MR_Word Args_8;
    MR_Word GetoptResult_9;

    mercury__io__stdout_stream_3_p_0(&StdOutStream_4);
    mercury__io__stderr_stream_3_p_0(&StdErrStream_5);
    mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    mercury__io__command_line_arguments_3_p_0(&Args0_6);
    mercury__getopt__process_options_4_p_0((MR_Word) (&mtc_union__mtc_union__type_ctor_info_option_0), (MR_Word) (MR_mkword(MR_mktag(2), &mtc_union_scalar_common_1[4])), Args0_6, &Args_8, &GetoptResult_9);
    if (((MR_tag((MR_Word) GetoptResult_9)) == (MR_Integer) 1))
    {
      MR_String GetoptErrorMsg_23 = ((MR_String) ((MR_hl_field(MR_mktag(1), GetoptResult_9, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(StdOutStream_4, GetoptErrorMsg_23);
      mercury__io__nl_3_p_0(StdOutStream_4);
    }
    else
    {
      MR_Word OptionTable_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GetoptResult_9, (MR_Integer) 0))));
      MR_String OutputFile_11;

      mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&mtc_union__mtc_union__type_ctor_info_option_0), OptionTable_10, ((MR_Box) ((MR_Integer) 0)), &OutputFile_11);
      succeeded = (Args_8 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (strcmp(OutputFile_11, (MR_String) "") == 0);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word Verbose_14;
        MR_Integer NumTests_15;
        MR_Word Kinds_16;
        MR_Word TraceCounts_17;
        MR_Word MaybeReadError_18;

        mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mtc_union__mtc_union__type_ctor_info_option_0), OptionTable_10, ((MR_Box) ((MR_Integer) 1)), &Verbose_14);
        mdbcomp__trace_counts__read_and_union_trace_counts_8_p_0(Verbose_14, Args_8, &NumTests_15, &Kinds_16, &TraceCounts_17, &MaybeReadError_18);
        if ((MaybeReadError_18 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Type_20;
          MR_Word WriteResult_21;
          MR_Word Var_38;

          Var_38 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), Kinds_16);
          {
            Type_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Type_20, 0) = ((MR_Box) (NumTests_15));
            MR_hl_field(MR_mktag(1), Type_20, 1) = ((MR_Box) (Var_38));
          }
          mdbcomp__trace_counts__write_trace_counts_to_file_6_p_0(Type_20, TraceCounts_17, OutputFile_11, &WriteResult_21);
          if (!((WriteResult_21 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word WriteErrorMsg_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), WriteResult_21, (MR_Integer) 0))));
            MR_String Var_40;
            MR_String Var_43;
            MR_String Var_44;
            MR_String Var_46;
            MR_String Var_48;

            Var_48 = mercury__string__string_1_f_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (WriteErrorMsg_22)));
            Var_46 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_48);
            Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "\'", Var_46);
            Var_43 = mercury__string__f_43_43_2_f_0(OutputFile_11, Var_44);
            Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "Error writing to file \140", Var_43);
            mercury__io__write_string_4_p_0(StdErrStream_5, Var_40);
            mercury__io__nl_3_p_0(StdErrStream_5);
          }
        }
        else
        {
          MR_String ReadErrorMsg_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeReadError_18, (MR_Integer) 0))));

          mercury__io__write_string_4_p_0(StdErrStream_5, ReadErrorMsg_19);
          mercury__io__nl_3_p_0(StdErrStream_5);
        }
      }
      else
      {
        mercury__io__write_strings_4_p_0(StdOutStream_4, (MR_Word) (MR_mkword(MR_mktag(1), &mtc_union_scalar_common_2[3])));
      }
    }
  }
}

static MR_bool MR_CALL 
mtc_union____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mtc_union____Unify____option_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mtc_union____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mtc_union____Compare____option_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mtc_union____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mtc_union____Unify____option_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mtc_union____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mtc_union____Compare____option_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module mtc_union.
