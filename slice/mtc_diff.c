/*
** Automatically generated from `mtc_diff.m'
** by the Mercury compiler,
** version rotd-2023-02-25
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


// :- module mtc_diff.
// :- implementation.

/*
INIT mercury__mtc_diff__init
ENDINIT
*/

#include "mtc_diff.mih"


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
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.shared_utilities.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct mtc_diff__main_2_p_0_4_env_0_s {
  MR_Box * mtc_diff__main_2_p_0_4_env_0__wrapper_arg_2;
  MR_Cont mtc_diff__main_2_p_0_4_env_0__cont;
  void * mtc_diff__main_2_p_0_4_env_0__cont_env_ptr;
  MR_Word mtc_diff__main_2_p_0_4_env_0__conv0_HeadVar__2_2;
};


static const MR_EnumFunctorDesc mtc_diff__mtc_diff__enum_functor_desc_option_0_0;

static const MR_EnumFunctorDescPtr mtc_diff__mtc_diff__enum_ordinal_ordered_option_0[1];

static const MR_EnumFunctorDescPtr mtc_diff__mtc_diff__enum_name_ordered_option_0[1];

static const MR_Integer mtc_diff__mtc_diff__functor_number_map_option_0[1];

static const MR_FA_TypeInfo_Struct2 mtc_diff__tree234__ti_tree234_2mtc_diff__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static void MR_CALL 
mtc_diff____Compare____option_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mtc_diff____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mtc_diff____Compare____option_0_0(
  MR_Word * HeadVar__1_1);

static void MR_CALL 
mtc_diff__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_116_99_95_100_105_102_102_95_95_111_112_116_105_111_110_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1);

static MR_bool MR_CALL 
mtc_diff____Unify____option_0_0(void);

static void MR_CALL 
mtc_diff__option_default_2_p_0(
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mtc_diff__long_option_2_p_0(
  MR_String HeadVar__1_1);

static MR_bool MR_CALL 
mtc_diff__short_option_2_p_0(
  MR_Char HeadVar__1_1);

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
mtc_diff____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mtc_diff____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mtc_diff____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mtc_diff____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mtc_diff_scalar_common_1[5][3];

static /* final */ const MR_Box mtc_diff_scalar_common_2[1][2];

static /* final */ const MR_Box mtc_diff_scalar_common_3[3][5];




static /* final */ const MR_Box mtc_diff_scalar_common_1[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mtc_diff__mtc_diff__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mtc_diff_scalar_common_3[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mtc_diff_scalar_common_3[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mtc_diff_scalar_common_3[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mtc_diff_scalar_common_1[1])),
    ((MR_Box) (&mtc_diff_scalar_common_1[2])),
    ((MR_Box) (&mtc_diff_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box mtc_diff_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box mtc_diff_scalar_common_3[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mtc_diff__mtc_diff__type_ctor_info_option_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mtc_diff__mtc_diff__type_ctor_info_option_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mtc_diff__mtc_diff__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_EnumFunctorDesc mtc_diff__mtc_diff__enum_functor_desc_option_0_0 = {
  (MR_String) "output_filename",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mtc_diff__mtc_diff__enum_ordinal_ordered_option_0[1] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mtc_diff____Unify____option_0_0_10001)),
  ((MR_Box) (mtc_diff____Compare____option_0_0_10001)),
  (MR_String) "mtc_diff",
  (MR_String) "option",
  { mtc_diff__mtc_diff__enum_name_ordered_option_0 },
  { mtc_diff__mtc_diff__enum_ordinal_ordered_option_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mtc_diff__mtc_diff__functor_number_map_option_0,

};

static const MR_FA_TypeInfo_Struct2 mtc_diff__tree234__ti_tree234_2mtc_diff__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mtc_diff__mtc_diff__type_ctor_info_option_0),
    (MR_TypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

const MR_TypeCtorInfo_Struct mtc_diff__mtc_diff__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mtc_diff____Unify____option_table_0_0_10001)),
  ((MR_Box) (mtc_diff____Compare____option_table_0_0_10001)),
  (MR_String) "mtc_diff",
  (MR_String) "option_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&mtc_diff__tree234__ti_tree234_2mtc_diff__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
mtc_diff____Compare____option_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mtc_diff_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
mtc_diff____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mtc_diff_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
mtc_diff____Compare____option_0_0(
  MR_Word * HeadVar__1_1)
{
  mtc_diff__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_116_99_95_100_105_102_102_95_95_111_112_116_105_111_110_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

static void MR_CALL 
mtc_diff__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_116_99_95_100_105_102_102_95_95_111_112_116_105_111_110_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

static MR_bool MR_CALL 
mtc_diff____Unify____option_0_0(void)
{
  return MR_TRUE;
}

static void MR_CALL 
mtc_diff__option_default_2_p_0(
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  *HeadVar__2_2 = (MR_Word) (MR_mkword(3, &mtc_diff_scalar_common_2[0]));
  cont(cont_env_ptr);
}

static MR_bool MR_CALL 
mtc_diff__long_option_2_p_0(
  MR_String HeadVar__1_1)
{
  MR_bool succeeded = (strcmp(HeadVar__1_1, (MR_String) "out") == 0);

  if (succeeded)
    succeeded = MR_TRUE;
  return succeeded;
}

static MR_bool MR_CALL 
mtc_diff__short_option_2_p_0(
  MR_Char HeadVar__1_1)
{
  MR_bool succeeded = (HeadVar__1_1 == (MR_Char) 111);

  if (succeeded)
    succeeded = MR_TRUE;
  return succeeded;
}

static void MR_CALL 
main_2_p_0_3(
  void * env_ptr_arg)
{
  struct mtc_diff__main_2_p_0_4_env_0_s * env_ptr = (struct mtc_diff__main_2_p_0_4_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mtc_diff__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mtc_diff__main_2_p_0_4_env_0__conv0_HeadVar__2_2));
  ((env_ptr)->mtc_diff__main_2_p_0_4_env_0__cont)((env_ptr)->mtc_diff__main_2_p_0_4_env_0__cont_env_ptr);
}

static void MR_CALL 
main_2_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mtc_diff__main_2_p_0_4_env_0_s env;

  (env).mtc_diff__main_2_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mtc_diff__main_2_p_0_4_env_0__cont = cont;
  (env).mtc_diff__main_2_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mtc_diff__option_default_2_p_0(&(env).mtc_diff__main_2_p_0_4_env_0__conv0_HeadVar__2_2, main_2_p_0_3, &env);
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

  succeeded = mtc_diff__long_option_2_p_0(((MR_String) (wrapper_arg_1)));
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

  succeeded = mtc_diff__short_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

void MR_CALL 
main_2_p_0(void)
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
  mercury__getopt__process_options_4_p_0((MR_Word) (&mtc_diff__mtc_diff__type_ctor_info_option_0), (MR_Word) (MR_mkword(2, &mtc_diff_scalar_common_1[4])), Args0_6, &Args_8, &GetoptResult_9);
  if (((MR_tag((MR_Word) GetoptResult_9)) == (MR_Integer) 1))
  {
    MR_Word GetoptError_29 = ((MR_Word) ((MR_hl_field(1, GetoptResult_9, (MR_Integer) 0))));
    MR_String GetoptErrorMsg_30;

    GetoptErrorMsg_30 = mercury__getopt__option_error_to_string_1_f_0((MR_Word) (&mtc_diff__mtc_diff__type_ctor_info_option_0), GetoptError_29);
    mercury__io__write_string_4_p_0(StdOutStream_4, GetoptErrorMsg_30);
    mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) "\n");
  }
  else
  {
    MR_Word OptionTable_10 = ((MR_Word) ((MR_hl_field(0, GetoptResult_9, (MR_Integer) 0))));
    MR_String OutputFile_11;
    MR_String Arg1_12;
    MR_String Arg2_13;
    MR_Word Var_41;
    MR_Word Var_42;

    mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&mtc_diff__mtc_diff__type_ctor_info_option_0), OptionTable_10, ((MR_Box) ((MR_Integer) 0)), &OutputFile_11);
    succeeded = (strcmp(OutputFile_11, (MR_String) "") == 0);
    succeeded = !(succeeded);
    if (succeeded)
    {
      succeeded = (Args_8 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Arg1_12 = ((MR_String) ((MR_hl_field(1, Args_8, (MR_Integer) 0))));
        Var_41 = ((MR_Word) ((MR_hl_field(1, Args_8, (MR_Integer) 1))));
        succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Arg2_13 = ((MR_String) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));
          Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 1))));
          succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeTraceCounts1_14;
      MR_Word MaybeTraceCounts2_18;
      MR_Word Type1_22;
      MR_Word TraceCounts1_23;
      MR_Word Type2_24;
      MR_Word TraceCounts2_25;

      mdbcomp__trace_counts__read_trace_counts_source_4_p_0(Arg1_12, &MaybeTraceCounts1_14);
      if (((MR_tag((MR_Word) MaybeTraceCounts1_14)) == (MR_Integer) 1))
      {
        MR_String Msg1_17 = ((MR_String) ((MR_hl_field(1, MaybeTraceCounts1_14, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(StdErrStream_5, Msg1_17);
        mercury__io__nl_3_p_0(StdErrStream_5);
      }
      mdbcomp__trace_counts__read_trace_counts_source_4_p_0(Arg2_13, &MaybeTraceCounts2_18);
      if (((MR_tag((MR_Word) MaybeTraceCounts2_18)) == (MR_Integer) 1))
      {
        MR_String Msg2_21 = ((MR_String) ((MR_hl_field(1, MaybeTraceCounts2_18, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(StdErrStream_5, Msg2_21);
        mercury__io__nl_3_p_0(StdErrStream_5);
      }
      succeeded = ((MR_tag((MR_Word) MaybeTraceCounts1_14)) == (MR_Integer) 0);
      if (succeeded)
      {
        Type1_22 = ((MR_Word) ((MR_hl_field(0, MaybeTraceCounts1_14, (MR_Integer) 0))));
        TraceCounts1_23 = ((MR_Word) ((MR_hl_field(0, MaybeTraceCounts1_14, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) MaybeTraceCounts2_18)) == (MR_Integer) 0);
        if (succeeded)
        {
          Type2_24 = ((MR_Word) ((MR_hl_field(0, MaybeTraceCounts2_18, (MR_Integer) 0))));
          TraceCounts2_25 = ((MR_Word) ((MR_hl_field(0, MaybeTraceCounts2_18, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word TraceCounts_26;
        MR_Word WriteResult_27;
        MR_Word Var_49;

        mdbcomp__trace_counts__diff_trace_counts_3_p_0(TraceCounts1_23, TraceCounts2_25, &TraceCounts_26);
        {
          Var_49 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_49, 0) = ((MR_Box) (Type1_22));
          MR_hl_field(2, Var_49, 1) = ((MR_Box) (Type2_24));
        }
        mdbcomp__trace_counts__write_trace_counts_to_file_6_p_0(Var_49, TraceCounts_26, OutputFile_11, &WriteResult_27);
        if (!((WriteResult_27 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word WriteErrorMsg_28 = ((MR_Word) ((MR_hl_field(1, WriteResult_27, (MR_Integer) 0))));
          MR_String Var_51;
          MR_String Var_54;
          MR_String Var_56;
          MR_String Var_57;
          MR_String Var_59;
          MR_String Var_61;

          Var_61 = mercury__string__string_1_f_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (WriteErrorMsg_28)));
          Var_59 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_61);
          Var_57 = mercury__string__f_43_43_2_f_0((MR_String) "\'", Var_59);
          Var_56 = mercury__string__f_43_43_2_f_0(OutputFile_11, Var_57);
          Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "file \140", Var_56);
          Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "Error writing to ", Var_54);
          mercury__io__write_string_4_p_0(StdErrStream_5, Var_51);
          mercury__io__nl_3_p_0(StdErrStream_5);
        }
      }
    }
    else
      mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) "Usage: mtc_diff -o outputfile tracecountfile1 tracecountfile2\n");
  }
}

static MR_bool MR_CALL 
mtc_diff____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mtc_diff____Unify____option_0_0();
  return succeeded;
}

static void MR_CALL 
mtc_diff____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mtc_diff____Compare____option_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mtc_diff____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mtc_diff____Unify____option_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mtc_diff____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mtc_diff____Compare____option_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module mtc_diff.
