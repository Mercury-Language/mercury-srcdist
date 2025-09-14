/*
** Automatically generated from `file_util.m'
** by the Mercury compiler,
** version rotd-2025-09-14
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


// :- module libs.file_util.
// :- implementation.

/*
INIT mercury__libs__file_util__init
ENDINIT
*/

#include "libs.file_util.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "io.file.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.shell_util.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_TypeInfo_Struct1 libs__file_util__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct4 libs__file_util____vpti_pred_4__plain_io__type_ctor_info_text_output_stream_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__file_util__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static void MR_CALL 
libs__file_util__IntroducedFrom__pred__output_to_file_stream__209__1_5_p_0(
  MR_Word Action0_11,
  MR_Word FileStream_18,
  MR_Word * LambdaHeadVar__1_41);

static void MR_CALL 
libs__file_util__copy_stream_5_p_0(
  MR_Word InputStream_6,
  MR_Word OutputStream_7,
  MR_Word * Res_8);

static MR_Box MR_CALL 
libs__file_util__make_install_file_command_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__file_util__write_include_file_contents_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__file_util__output_to_file_stream_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__file_util__output_to_file_stream_7_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
libs__file_util____Unify____dir_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__file_util____Compare____dir_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__file_util____Unify____file_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__file_util____Compare____file_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__file_util_scalar_common_1[1][2];

static /* final */ const MR_Box libs__file_util_scalar_common_2[2][8];

static /* final */ const MR_Box libs__file_util_scalar_common_3[1][7];

static /* final */ const MR_Box libs__file_util_scalar_common_4[1][5];

static /* final */ const MR_Box libs__file_util_scalar_common_5[1][3];




static /* final */ const MR_Box libs__file_util_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__file_util_scalar_common_2[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__file_util____vpti_pred_4__plain_io__type_ctor_info_text_output_stream_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__file_util__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_input_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_res_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box libs__file_util_scalar_common_3[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box libs__file_util_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__file_util_scalar_common_5[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&libs__file_util_scalar_common_4[0])),
    ((MR_Box) (libs__file_util__make_install_file_command_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 libs__file_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_VA_PseudoTypeInfo_Struct4 libs__file_util____vpti_pred_4__plain_io__type_ctor_info_text_output_stream_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
    (MR_PseudoTypeInfo) (&libs__file_util__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__file_util__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

const MR_TypeCtorInfo_Struct libs__file_util__libs__file_util__type_ctor_info_dir_name_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__file_util____Unify____dir_name_0_0_10001)),
  ((MR_Box) (libs__file_util____Compare____dir_name_0_0_10001)),
  (MR_String) "libs.file_util",
  (MR_String) "dir_name",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct libs__file_util__libs__file_util__type_ctor_info_file_name_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__file_util____Unify____file_name_0_0_10001)),
  ((MR_Box) (libs__file_util____Compare____file_name_0_0_10001)),
  (MR_String) "libs.file_util",
  (MR_String) "file_name",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
libs__file_util__IntroducedFrom__pred__output_to_file_stream__209__1_5_p_0(
  MR_Word Action0_11,
  MR_Word FileStream_18,
  MR_Word * LambdaHeadVar__1_41)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Action0_11, 1))));
  MR_Box conv2_LambdaHeadVar__1_41;
  MR_Box conv1_LambdaHeadVar__3_43;

  func_0(((MR_Box) (Action0_11)), ((MR_Box) (FileStream_18)), &conv2_LambdaHeadVar__1_41, ((MR_Box) ((MR_Integer) 0)), &conv1_LambdaHeadVar__3_43);
  *LambdaHeadVar__1_41 = ((MR_Word) (conv2_LambdaHeadVar__1_41));
}

void MR_CALL 
libs__file_util____Compare____file_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  MR_String Cast_HeadVar1_4 = HeadVar__2_2;
  MR_String Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
libs__file_util____Unify____file_name_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  MR_bool succeeded;
  MR_String Cast_HeadVar1_3 = HeadVar__1_1;
  MR_String Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
  return succeeded;
}

void MR_CALL 
libs__file_util____Compare____dir_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  MR_String Cast_HeadVar1_4 = HeadVar__2_2;
  MR_String Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
libs__file_util____Unify____dir_name_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  MR_bool succeeded;
  MR_String Cast_HeadVar1_3 = HeadVar__1_1;
  MR_String Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
  return succeeded;
}

static void MR_CALL 
libs__file_util__copy_stream_5_p_0(
  MR_Word InputStream_6,
  MR_Word OutputStream_7,
  MR_Word * Res_8)
{
  MR_Word ReadRes_10;

  mercury__io__read_file_as_string_4_p_0(InputStream_6, &ReadRes_10);
  if (((MR_tag((MR_Word) ReadRes_10)) == (MR_Integer) 1))
  {
    MR_Word Error_13 = ((MR_Word) ((MR_hl_field(1, ReadRes_10, 1))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Res_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_13));
    }
  }
  else
  {
    MR_String InputContents_11 = ((MR_String) ((MR_hl_field(0, ReadRes_10, 0))));

    mercury__io__write_string_4_p_0(OutputStream_7, InputContents_11);
    *Res_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
libs__file_util__compare_file_timestamps_5_p_0(
  MR_String FileNameA_6,
  MR_String FileNameB_7,
  MR_Word * MaybeCompare_8)
{
  MR_bool succeeded;
  MR_Word TimeResultA_10;
  MR_Word TimeResultB_11;
  MR_Word TimeA_12;
  MR_Word TimeB_13;

  mercury__io__file__file_modification_time_4_p_0(FileNameA_6, &TimeResultA_10);
  mercury__io__file__file_modification_time_4_p_0(FileNameB_7, &TimeResultB_11);
  succeeded = ((MR_tag((MR_Word) TimeResultA_10)) == (MR_Integer) 0);
  if (succeeded)
  {
    TimeA_12 = ((MR_Word) ((MR_hl_field(0, TimeResultA_10, 0))));
    succeeded = ((MR_tag((MR_Word) TimeResultB_11)) == (MR_Integer) 0);
    if (succeeded)
      TimeB_13 = ((MR_Word) ((MR_hl_field(0, TimeResultB_11, 0))));
  }
  if (succeeded)
  {
    MR_Word Compare_14;

    mercury__time____Compare____time_t_0_0(&Compare_14, TimeA_12, TimeB_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeCompare_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Compare_14));
    }
  }
  else
    *MaybeCompare_8 = (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
libs__file_util__open_temp_output_3_p_0(
  MR_Word * Result_4)
{
  MR_Word TempFileResult_6;

  mercury__io__file__make_temp_file_3_p_0(&TempFileResult_6);
  if (((MR_tag((MR_Word) TempFileResult_6)) == (MR_Integer) 1))
  {
    MR_String Var_25;
    MR_String Var_29;
    MR_Word Error_31 = ((MR_Word) ((MR_hl_field(1, TempFileResult_6, 0))));

    Var_29 = mercury__io__error_message_1_f_0(Error_31);
    Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "could not create temporary file: ", Var_29);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_25));
    }
  }
  else
  {
    MR_String TempFileName_10 = ((MR_String) ((MR_hl_field(0, TempFileResult_6, 0))));
    MR_Word OpenResult_11;

    mercury__io__open_output_4_p_0(TempFileName_10, &OpenResult_11);
    if (((MR_tag((MR_Word) OpenResult_11)) == (MR_Integer) 1))
    {
      MR_Word Error_13 = ((MR_Word) ((MR_hl_field(1, OpenResult_11, 0))));
      MR_String Var_17;
      MR_String Var_23;
      MR_String Var_33;
      MR_String Var_34;
      MR_Word Var_14;

      mercury__io__file__remove_file_4_p_0(TempFileName_10, &Var_14);
      Var_23 = mercury__io__error_message_1_f_0(Error_13);
      Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", Var_23);
      Var_34 = mercury__string__f_43_43_2_f_0(TempFileName_10, Var_33);
      Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "could not open temporary file \140", Var_34);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_17));
      }
    }
    else
    {
      MR_Word Stream_12 = ((MR_Word) ((MR_hl_field(0, OpenResult_11, 0))));
      MR_Tuple Var_16;

      {
        Var_16 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_16, 0) = ((MR_Box) (TempFileName_10));
        MR_hl_field(0, Var_16, 1) = ((MR_Box) (Stream_12));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_4 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_16));
      }
    }
  }
}

void MR_CALL 
libs__file_util__open_temp_output_with_naming_scheme_6_p_0(
  MR_String Dir_7,
  MR_String Prefix_8,
  MR_String Suffix_9,
  MR_Word * Result_10)
{
  MR_Word TempFileResult_12;

  mercury__io__file__make_temp_file_6_p_0(Dir_7, Prefix_8, Suffix_9, &TempFileResult_12);
  if (((MR_tag((MR_Word) TempFileResult_12)) == (MR_Integer) 1))
  {
    MR_String Var_31;
    MR_String Var_35;
    MR_Word Error_37 = ((MR_Word) ((MR_hl_field(1, TempFileResult_12, 0))));

    Var_35 = mercury__io__error_message_1_f_0(Error_37);
    Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "could not create temporary file: ", Var_35);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_31));
    }
  }
  else
  {
    MR_String TempFileName_16 = ((MR_String) ((MR_hl_field(0, TempFileResult_12, 0))));
    MR_Word OpenResult_17;

    mercury__io__open_output_4_p_0(TempFileName_16, &OpenResult_17);
    if (((MR_tag((MR_Word) OpenResult_17)) == (MR_Integer) 1))
    {
      MR_Word Error_19 = ((MR_Word) ((MR_hl_field(1, OpenResult_17, 0))));
      MR_String Var_23;
      MR_String Var_29;
      MR_String Var_39;
      MR_String Var_40;
      MR_Word Var_20;

      mercury__io__file__remove_file_4_p_0(TempFileName_16, &Var_20);
      Var_29 = mercury__io__error_message_1_f_0(Error_19);
      Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", Var_29);
      Var_40 = mercury__string__f_43_43_2_f_0(TempFileName_16, Var_39);
      Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "could not open temporary file \140", Var_40);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_23));
      }
    }
    else
    {
      MR_Word Stream_18 = ((MR_Word) ((MR_hl_field(0, OpenResult_17, 0))));
      MR_Tuple Var_22;

      {
        Var_22 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_22, 0) = ((MR_Box) (TempFileName_16));
        MR_hl_field(0, Var_22, 1) = ((MR_Box) (Stream_18));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_22));
      }
    }
  }
}

static MR_Box MR_CALL 
libs__file_util__make_install_file_command_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = libs__shell_util__quote_shell_cmd_arg_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

MR_String MR_CALL 
libs__file_util__make_install_file_command_3_f_0(
  MR_Word Globals_5,
  MR_String FileName_6,
  MR_String InstallDir_7)
{
  MR_String Command_8;
  MR_Word FileInstallCmd_9;
  MR_String InstallCmd_10;
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;

  libs__globals__get_file_install_cmd_2_p_0(Globals_5, &FileInstallCmd_9);
  if ((FileInstallCmd_9 == (MR_Word) ((MR_Unsigned) 0U)))
    InstallCmd_10 = (MR_String) "cp";
  else
    InstallCmd_10 = ((MR_String) ((MR_hl_field(1, FileInstallCmd_9, 0))));
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (InstallDir_7));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (FileName_6));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_16));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (InstallCmd_10));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_15));
  }
  Var_12 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__file_util_scalar_common_5[0]), Var_14);
  Command_8 = mercury__string__join_list_2_f_0((MR_String) " ", Var_12);
  return Command_8;
}

void MR_CALL 
libs__file_util__report_unable_to_open_file_5_p_0(
  MR_Word ProgressStream_6,
  MR_String FileName_7,
  MR_Word IOErr_8)
{
  MR_String Var_18;

  Var_18 = mercury__io__error_message_1_f_0(IOErr_8);
  mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "Unable to open file \'");
  mercury__io__write_string_4_p_0(ProgressStream_6, FileName_7);
  mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "\': ");
  mercury__io__write_string_4_p_0(ProgressStream_6, Var_18);
  mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "\n");
  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
}

void MR_CALL 
libs__file_util__maybe_flush_output_to_stream_3_p_0(
  MR_Word HeadVar__1_1)
{
  if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Stream_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    mercury__io__flush_output_3_p_0(Stream_4);
  }
}

void MR_CALL 
libs__file_util__maybe_flush_output_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__flush_output_3_p_0(HeadVar__1_1);
      break;
  }
}

void MR_CALL 
libs__file_util__maybe_write_string_to_stream_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String String_2)
{
  if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Stream_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    mercury__io__write_string_4_p_0(Stream_5, String_2);
  }
}

void MR_CALL 
libs__file_util__maybe_write_string_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String String_3)
{
  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(HeadVar__1_1, String_3);
      break;
  }
}

void MR_CALL 
libs__file_util__maybe_report_stats_to_stream_3_p_0(
  MR_Word HeadVar__1_1)
{
  if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Stream_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    mercury__benchmarking__report_standard_stats_3_p_0(Stream_4);
  }
}

void MR_CALL 
libs__file_util__maybe_report_stats_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__benchmarking__report_standard_stats_3_p_0(HeadVar__1_1);
      break;
  }
}

void MR_CALL 
libs__file_util__get_install_name_option_3_p_0(
  MR_Word Globals_4,
  MR_String OutputFileName_5,
  MR_String * InstallNameOpt_6)
{
  MR_bool succeeded;
  MR_String InstallNameFlag_7;
  MR_String InstallNamePath0_8;
  MR_String InstallNamePath_10;
  MR_String Var_13;
  MR_String Var_14;

  libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 628, &InstallNameFlag_7);
  libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 547, &InstallNamePath0_8);
  succeeded = (strcmp(InstallNamePath0_8, (MR_String) "") == 0);
  if (succeeded)
  {
    MR_String GradeDir_9;

    libs__globals__get_grade_dir_2_p_0(Globals_4, &GradeDir_9);
    libs__file_util__get_std_grade_specific_install_lib_dir_3_p_0(Globals_4, GradeDir_9, &InstallNamePath_10);
  }
  else
    InstallNamePath_10 = InstallNamePath0_8;
  Var_14 = libs__shell_util__quote_shell_cmd_arg_1_f_0(InstallNamePath_10);
  Var_13 = mercury__dir__f_slash_2_f_0(Var_14, OutputFileName_5);
  *InstallNameOpt_6 = mercury__string__f_43_43_2_f_0(InstallNameFlag_7, Var_13);
}

void MR_CALL 
libs__file_util__get_std_grade_specific_install_lib_dir_3_p_0(
  MR_Word Globals_4,
  MR_String GradeDir_5,
  MR_String * InstallNamePath_6)
{
  MR_String InstallPrefix_7;
  MR_String Var_9;
  MR_String Var_10;
  MR_String Var_11;

  libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 573, &InstallPrefix_7);
  Var_11 = mercury__dir__f_slash_2_f_0(InstallPrefix_7, (MR_String) "lib");
  Var_10 = mercury__dir__f_slash_2_f_0(Var_11, (MR_String) "mercury");
  Var_9 = mercury__dir__f_slash_2_f_0(Var_10, (MR_String) "lib");
  *InstallNamePath_6 = mercury__dir__f_slash_2_f_0(Var_9, GradeDir_5);
}

static void MR_CALL 
libs__file_util__write_include_file_contents_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Res_8;

  libs__file_util__copy_stream_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &conv0_Res_8);
  *wrapper_arg_1 = ((MR_Box) (conv0_Res_8));
}

void MR_CALL 
libs__file_util__write_include_file_contents_5_p_0(
  MR_Word OutputStream_6,
  MR_String FileName_7,
  MR_Word * Res_8)
{
  MR_bool succeeded;
  MR_Word MaybeFileType_11;

  mercury__io__file__file_type_5_p_0((MR_Integer) 1, FileName_7, &MaybeFileType_11);
  if (((MR_tag((MR_Word) MaybeFileType_11)) == (MR_Integer) 1))
  {
    MR_Word FileTypeError_16 = ((MR_Word) ((MR_hl_field(1, MaybeFileType_11, 0))));
    MR_String Var_24;
    MR_String Var_25;
    MR_String Message_27;
    MR_String Var_35;
    MR_String Var_36;

    Var_24 = mercury__io__error_message_1_f_0(FileTypeError_16);
    Message_27 = mercury__string__remove_prefix_if_present_2_f_0((MR_String) "can\'t find file type: ", Var_24);
    Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "\' for input: ", Message_27);
    Var_36 = mercury__string__f_43_43_2_f_0(FileName_7, Var_35);
    Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open \140", Var_36);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Res_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_25));
    }
  }
  else
  {
    MR_Word FileType_12 = ((MR_Word) ((MR_hl_field(0, MaybeFileType_11, 0))));

    switch (FileType_12) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 10:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      MR_Word CopyRes_13;
      MR_Word OpenRes_38;

      mercury__io__open_input_4_p_0(FileName_7, &OpenRes_38);
      if (((MR_tag((MR_Word) OpenRes_38)) == (MR_Integer) 1))
      {
        MR_Word Error_44 = ((MR_Word) ((MR_hl_field(1, OpenRes_38, 0))));

        {
          CopyRes_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, CopyRes_13, 0) = ((MR_Box) (Error_44));
        }
      }
      else
      {
        MR_Word InputStream_39 = ((MR_Word) ((MR_hl_field(0, OpenRes_38, 0))));
        MR_Word TryResult_40;
        MR_Word Var_42;

        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_42, 0) = ((MR_Box) (&libs__file_util_scalar_common_2[1]));
          MR_hl_field(0, Var_42, 1) = ((MR_Box) (libs__file_util__write_include_file_contents_5_p_0_1));
          MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_42, 3) = ((MR_Box) (InputStream_39));
          MR_hl_field(0, Var_42, 4) = ((MR_Box) (OutputStream_6));
        }
        mercury__exception__try_io_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_res_0), Var_42, &TryResult_40);
        mercury__io__close_input_3_p_0(InputStream_39);
        if (((MR_tag((MR_Word) TryResult_40)) == (MR_Integer) 2))
          {
            mercury__exception__rethrow_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_res_0), TryResult_40);
            return;
          }
        else
        {
          MR_Word Var_47 = ((MR_Word) ((MR_hl_field(1, TryResult_40, 0))));

          if ((Var_47 == (MR_Word) ((MR_Unsigned) 0U)))
            CopyRes_13 = (MR_Word) ((MR_Unsigned) 0U);
          else
            CopyRes_13 = Var_47;
        }
      }
      if ((CopyRes_13 == (MR_Word) ((MR_Unsigned) 0U)))
        *Res_8 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Error_14 = ((MR_Word) ((MR_hl_field(1, CopyRes_13, 0))));
        MR_String Message_15;
        MR_String Var_21;
        MR_String Var_55;
        MR_String Var_56;

        Message_15 = mercury__io__error_message_1_f_0(Error_14);
        Var_55 = mercury__string__f_43_43_2_f_0((MR_String) "\' for input: ", Message_15);
        Var_56 = mercury__string__f_43_43_2_f_0(FileName_7, Var_55);
        Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open \140", Var_56);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Res_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_21));
        }
      }
    }
    else
    {
      MR_String Var_22;
      MR_String Var_66;

      Var_66 = mercury__string__f_43_43_2_f_0(FileName_7, (MR_String) "\' for input: Not a regular file");
      Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open \140", Var_66);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Res_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_22));
      }
    }
  }
}

static void MR_CALL 
libs__file_util__output_to_file_stream_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  libs__file_util__report_error_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
libs__file_util__output_to_file_stream_7_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__1_41;

  libs__file_util__IntroducedFrom__pred__output_to_file_stream__209__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &conv0_LambdaHeadVar__1_41);
  *wrapper_arg_1 = ((MR_Box) (conv0_LambdaHeadVar__1_41));
}

void MR_CALL 
libs__file_util__output_to_file_stream_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String FileName_10,
  MR_Word Action0_11,
  MR_Word * Succeeded_12)
{
  MR_Word Verbose_14;
  MR_Word Stats_15;
  MR_String WritingMsg_16;
  MR_Word Res_17;
  MR_String Var_72;

  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 131, &Verbose_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 133, &Stats_15);
  Var_72 = mercury__string__f_43_43_2_f_0(FileName_10, (MR_String) "\'...\n");
  WritingMsg_16 = mercury__string__f_43_43_2_f_0((MR_String) "% Writing to file \140", Var_72);
  switch (Verbose_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_4_p_0(ProgressStream_8, WritingMsg_16);
        mercury__io__flush_output_3_p_0(ProgressStream_8);
      }
      break;
  }
  mercury__io__open_output_4_p_0(FileName_10, &Res_17);
  if (((MR_tag((MR_Word) Res_17)) == (MR_Integer) 1))
  {
    MR_String ErrorMessage_29;
    MR_String Var_75;

    switch (Verbose_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\n");
        break;
    }
    Var_75 = mercury__string__f_43_43_2_f_0(FileName_10, (MR_String) "\' for output.");
    ErrorMessage_29 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open file \140", Var_75);
    libs__file_util__report_error_4_p_0(ProgressStream_8, ErrorMessage_29);
    *Succeeded_12 = (MR_Integer) 0;
  }
  else
  {
    MR_Word FileStream_18 = ((MR_Word) ((MR_hl_field(0, Res_17, 0))));
    MR_Word Action_19;
    MR_Word TryResult_23;

    {
      Action_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Action_19, 0) = ((MR_Box) (&libs__file_util_scalar_common_2[0]));
      MR_hl_field(0, Action_19, 1) = ((MR_Box) (libs__file_util__output_to_file_stream_7_p_0_1));
      MR_hl_field(0, Action_19, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Action_19, 3) = ((MR_Box) (Action0_11));
      MR_hl_field(0, Action_19, 4) = ((MR_Box) (FileStream_18));
    }
    mercury__exception__try_io_4_p_0((MR_Word) (&libs__file_util_scalar_common_1[0]), Action_19, &TryResult_23);
    mercury__io__close_output_3_p_0(FileStream_18);
    switch (Verbose_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (Stats_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            mercury__benchmarking__report_standard_stats_3_p_0(ProgressStream_8);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "% done.\n");
          switch (Stats_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              mercury__benchmarking__report_standard_stats_3_p_0(ProgressStream_8);
              break;
          }
          mercury__io__flush_output_3_p_0(ProgressStream_8);
        }
        break;
    }
    if (((MR_tag((MR_Word) TryResult_23)) == (MR_Integer) 2))
      {
        mercury__exception__rethrow_1_p_0((MR_Word) (&libs__file_util_scalar_common_1[0]), TryResult_23);
        return;
      }
    else
    {
      MR_Word Errors_24 = ((MR_Word) ((MR_hl_field(1, TryResult_23, 0))));

      if ((Errors_24 == (MR_Word) ((MR_Unsigned) 0U)))
        *Succeeded_12 = (MR_Integer) 1;
      else
      {
        MR_Word Var_52;
        MR_Box conv1_STATE_VARIABLE_IO_31;

        switch (Verbose_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\n");
            break;
        }
        {
          Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_52, 0) = ((MR_Box) (&libs__file_util_scalar_common_3[0]));
          MR_hl_field(0, Var_52, 1) = ((MR_Box) (libs__file_util__output_to_file_stream_7_p_0_2));
          MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_52, 3) = ((MR_Box) (ProgressStream_8));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_52, Errors_24, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_31);
        *Succeeded_12 = (MR_Integer) 0;
      }
    }
  }
}

void MR_CALL 
libs__file_util__write_string_to_file_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_String FileNameMsg_11,
  MR_String FileName_12,
  MR_String FileContentsStr_13,
  MR_Word * Succeeded_14)
{
  MR_Word Verbose_16;
  MR_String CreatingMsg_17;
  MR_Word OpenFileResult_18;
  MR_String Var_48;
  MR_String Var_50;
  MR_String Var_51;

  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 131, &Verbose_16);
  Var_48 = mercury__string__f_43_43_2_f_0(FileName_12, (MR_String) "\'...\n");
  Var_50 = mercury__string__f_43_43_2_f_0((MR_String) " \140", Var_48);
  Var_51 = mercury__string__f_43_43_2_f_0(FileNameMsg_11, Var_50);
  CreatingMsg_17 = mercury__string__f_43_43_2_f_0((MR_String) "% ", Var_51);
  switch (Verbose_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(ProgressStream_9, CreatingMsg_17);
      break;
  }
  mercury__io__open_output_4_p_0(FileName_12, &OpenFileResult_18);
  if (((MR_tag((MR_Word) OpenFileResult_18)) == (MR_Integer) 1))
  {
    MR_Word IOError_20 = ((MR_Word) ((MR_hl_field(1, OpenFileResult_18, 0))));
    MR_String IOErrorMessage_21;
    MR_String ErrorMessage_22;
    MR_String Var_54;
    MR_String Var_55;

    switch (Verbose_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) " failed.\n");
          mercury__io__flush_output_3_p_0(ProgressStream_9);
        }
        break;
    }
    mercury__io__error_message_2_p_0(IOError_20, &IOErrorMessage_21);
    Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", IOErrorMessage_21);
    Var_55 = mercury__string__f_43_43_2_f_0(FileName_12, Var_54);
    ErrorMessage_22 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", Var_55);
    libs__file_util__report_error_4_p_0(ProgressStream_9, ErrorMessage_22);
    *Succeeded_14 = (MR_Integer) 0;
  }
  else
  {
    MR_Word FileStream_19 = ((MR_Word) ((MR_hl_field(0, OpenFileResult_18, 0))));

    mercury__io__write_string_4_p_0(FileStream_19, FileContentsStr_13);
    mercury__io__close_output_3_p_0(FileStream_19);
    switch (Verbose_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% done.\n");
        break;
    }
    *Succeeded_14 = (MR_Integer) 1;
  }
}

void MR_CALL 
libs__file_util__report_error_4_p_0(
  MR_Word Stream_5,
  MR_String ErrorMessage_6)
{
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "Error: ");
  mercury__io__write_string_4_p_0(Stream_5, ErrorMessage_6);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
  mercury__io__flush_output_3_p_0(Stream_5);
  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
}

static MR_bool MR_CALL 
libs__file_util____Unify____dir_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__file_util____Unify____dir_name_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__file_util____Compare____dir_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__file_util____Compare____dir_name_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__file_util____Unify____file_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__file_util____Unify____file_name_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__file_util____Compare____file_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__file_util____Compare____file_name_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__libs__file_util__init(void)
{
}

void mercury__libs__file_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&libs__file_util__libs__file_util__type_ctor_info_dir_name_0);
  MR_register_type_ctor_info(&libs__file_util__libs__file_util__type_ctor_info_file_name_0);
}

void mercury__libs__file_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__file_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module libs.file_util.
