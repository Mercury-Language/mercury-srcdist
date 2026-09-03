/*
** Automatically generated from `module_cmds.m'
** by the Mercury compiler,
** version rotd-2026-09-03
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


// :- module parse_tree.module_cmds.
// :- implementation.

/*
INIT mercury__parse_tree__module_cmds__init
ENDINIT
*/

#include "parse_tree.module_cmds.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
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
#include "libs.copy_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_dot_tmp_copy_result_0_0;

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_dot_tmp_copy_result_0_1;

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_dot_tmp_copy_result_0_2;

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_ordinal_ordered_dot_tmp_copy_result_0[3];

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_dot_tmp_copy_result_0[3];

static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_dot_tmp_copy_result_0[3];

static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____dot_tmp_copy_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_cmds____Compare____dot_tmp_copy_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);







#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_dot_tmp_copy_result_0_0 = {
  (MR_String) "base_file_new_or_changed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_dot_tmp_copy_result_0_1 = {
  (MR_String) "base_file_unchanged",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_dot_tmp_copy_result_0_2 = {
  (MR_String) "dot_tmp_copy_error",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_ordinal_ordered_dot_tmp_copy_result_0[3] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_dot_tmp_copy_result_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_dot_tmp_copy_result_0_1,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_dot_tmp_copy_result_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_dot_tmp_copy_result_0[3] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_dot_tmp_copy_result_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_dot_tmp_copy_result_0_1,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_dot_tmp_copy_result_0_2
};

static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_dot_tmp_copy_result_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__module_cmds__parse_tree__module_cmds__type_ctor_info_dot_tmp_copy_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_cmds____Unify____dot_tmp_copy_result_0_0_10001)),
  ((MR_Box) (parse_tree__module_cmds____Compare____dot_tmp_copy_result_0_0_10001)),
  (MR_String) "parse_tree.module_cmds",
  (MR_String) "dot_tmp_copy_result",
  { parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_dot_tmp_copy_result_0 },
  { parse_tree__module_cmds__parse_tree__module_cmds__enum_ordinal_ordered_dot_tmp_copy_result_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_dot_tmp_copy_result_0,

};

void MR_CALL 
parse_tree__module_cmds____Compare____dot_tmp_copy_result_0_0(
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

MR_bool MR_CALL 
parse_tree__module_cmds____Unify____dot_tmp_copy_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(
  MR_Word Globals_3,
  MR_Word * STATE_VARIABLE_StdLibs_9)
{
  MR_Word MaybeStdLibDir_5;

  libs__globals__lookup_maybe_string_option_3_p_0(Globals_3, (MR_Integer) 518, &MaybeStdLibDir_5);
  if ((MaybeStdLibDir_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_StdLibs_9 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String StdLibDir_6 = ((MR_String) ((MR_hl_field(1, MaybeStdLibDir_5, 0))));
    MR_String GradeDir_7;
    MR_Word SourceDebug_8;
    MR_Word STATE_VARIABLE_StdLibs_4_26;
    MR_String Var_31;
    MR_Word STATE_VARIABLE_StdLibs_5_32;
    MR_String Var_33;
    MR_String Var_34;
    MR_String Var_37;
    MR_String Var_39;
    MR_String Var_40;

    libs__globals__get_grade_dir_2_p_0(Globals_3, &GradeDir_7);
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 521, &SourceDebug_8);
    switch (SourceDebug_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_StdLibs_4_26 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_13;
          MR_Word STATE_VARIABLE_StdLibs_2_14;
          MR_String Var_15;
          MR_String Var_16;
          MR_String Var_19;
          MR_Word STATE_VARIABLE_StdLibs_3_20;
          MR_String Var_21;
          MR_String Var_22;
          MR_String Var_25;
          MR_String Var_27;
          MR_String Var_28;

          Var_16 = mercury__dir__f_slash_2_f_0(StdLibDir_6, (MR_String) "lib");
          Var_15 = mercury__dir__f_slash_2_f_0(Var_16, GradeDir_7);
          Var_13 = mercury__dir__f_slash_2_f_0(Var_15, (MR_String) "mer_browser.jar");
          mercury__list__cons_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_13)), (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_StdLibs_2_14);
          Var_22 = mercury__dir__f_slash_2_f_0(StdLibDir_6, (MR_String) "lib");
          Var_21 = mercury__dir__f_slash_2_f_0(Var_22, GradeDir_7);
          Var_19 = mercury__dir__f_slash_2_f_0(Var_21, (MR_String) "mer_mdbcomp.jar");
          mercury__list__cons_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_19)), STATE_VARIABLE_StdLibs_2_14, &STATE_VARIABLE_StdLibs_3_20);
          Var_28 = mercury__dir__f_slash_2_f_0(StdLibDir_6, (MR_String) "lib");
          Var_27 = mercury__dir__f_slash_2_f_0(Var_28, GradeDir_7);
          Var_25 = mercury__dir__f_slash_2_f_0(Var_27, (MR_String) "mer_ssdb.jar");
          mercury__list__cons_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_25)), STATE_VARIABLE_StdLibs_3_20, &STATE_VARIABLE_StdLibs_4_26);
        }
        break;
    }
    Var_34 = mercury__dir__f_slash_2_f_0(StdLibDir_6, (MR_String) "lib");
    Var_33 = mercury__dir__f_slash_2_f_0(Var_34, GradeDir_7);
    Var_31 = mercury__dir__f_slash_2_f_0(Var_33, (MR_String) "mer_std.jar");
    mercury__list__cons_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_31)), STATE_VARIABLE_StdLibs_4_26, &STATE_VARIABLE_StdLibs_5_32);
    Var_40 = mercury__dir__f_slash_2_f_0(StdLibDir_6, (MR_String) "lib");
    Var_39 = mercury__dir__f_slash_2_f_0(Var_40, GradeDir_7);
    Var_37 = mercury__dir__f_slash_2_f_0(Var_39, (MR_String) "mer_rt.jar");
    mercury__list__cons_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_37)), STATE_VARIABLE_StdLibs_5_32, STATE_VARIABLE_StdLibs_9);
  }
}

void MR_CALL 
parse_tree__module_cmds__maybe_set_exit_status_3_p_0(
  MR_Word HeadVar__1_1)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
}

void MR_CALL 
parse_tree__module_cmds__touch_module_ext_datestamp_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word Ext_11,
  MR_Word * Succeeded_12)
{
  MR_String FileName_14;
  MR_String _FileNameProposed_15;

  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.module_cmds.touch_module_ext_datestamp\'/7", Ext_11, ModuleName_10, &FileName_14, &_FileNameProposed_15);
  parse_tree__module_cmds__touch_file_datestamp_6_p_0(ProgressStream_8, Globals_9, FileName_14, Succeeded_12);
}

void MR_CALL 
parse_tree__module_cmds__touch_file_datestamp_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_String FileName_9,
  MR_Word * Succeeded_10)
{
  MR_Word Verbose_12;
  MR_Word Result_13;
  MR_String Var_20;
  MR_String Var_23;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 131, &Verbose_12);
  Var_23 = mercury__string__f_43_43_2_f_0(FileName_9, (MR_String) "\'... ");
  Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "% Touching \140", Var_23);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_12, Var_20);
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_7, Verbose_12);
  mercury__io__open_output_4_p_0(FileName_9, &Result_13);
  if (((MR_tag((MR_Word) Result_13)) == (MR_Integer) 1))
  {
    MR_Word IOError_15 = ((MR_Word) ((MR_hl_field(1, Result_13, 0))));
    MR_String IOErrorMessage_16;

    mercury__io__error_message_2_p_0(IOError_15, &IOErrorMessage_16);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\nError opening \140");
    mercury__io__write_string_4_p_0(ProgressStream_7, FileName_9);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\' for output: ");
    mercury__io__write_string_4_p_0(ProgressStream_7, IOErrorMessage_16);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) ".\n");
    *Succeeded_10 = (MR_Integer) 0;
  }
  else
  {
    MR_Word FileStream_14 = ((MR_Word) ((MR_hl_field(0, Result_13, 0))));

    mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "\n");
    mercury__io__close_output_3_p_0(FileStream_14);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_12, (MR_String) " done.\n");
    *Succeeded_10 = (MR_Integer) 1;
  }
}

void MR_CALL 
parse_tree__module_cmds__make_symlink_or_copy_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String SourceFileName_10,
  MR_String DestinationFileName_11,
  MR_Word * Succeeded_12)
{
  MR_Word UseSymLinks_14;
  MR_Word PrintCommand_15;

  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 646, &UseSymLinks_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 139, &PrintCommand_15);
  switch (UseSymLinks_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        switch (PrintCommand_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "% Copying file \140");
              mercury__io__write_string_4_p_0(ProgressStream_8, SourceFileName_10);
              mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\' -> \140");
              mercury__io__write_string_4_p_0(ProgressStream_8, DestinationFileName_11);
              mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\'\n");
              mercury__io__flush_output_3_p_0(ProgressStream_8);
            }
            break;
        }
        libs__copy_util__copy_file_to_file_name_7_p_0(Globals_9, ProgressStream_8, SourceFileName_10, DestinationFileName_11, Succeeded_12);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Result_17;

        switch (PrintCommand_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "% Linking file \140");
              mercury__io__write_string_4_p_0(ProgressStream_8, SourceFileName_10);
              mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\' -> \140");
              mercury__io__write_string_4_p_0(ProgressStream_8, DestinationFileName_11);
              mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\'\n");
              mercury__io__flush_output_3_p_0(ProgressStream_8);
            }
            break;
        }
        mercury__io__file__make_symlink_5_p_0(SourceFileName_10, DestinationFileName_11, &Result_17);
        if ((Result_17 == (MR_Word) ((MR_Unsigned) 0U)))
          *Succeeded_12 = (MR_Integer) 1;
        else
        {
          MR_Word Error_18 = ((MR_Word) ((MR_hl_field(1, Result_17, 0))));
          MR_String ProgName_19;
          MR_String ErrorMsg_20;

          *Succeeded_12 = (MR_Integer) 0;
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_19);
          mercury__io__error_message_2_p_0(Error_18, &ErrorMsg_20);
          mercury__io__write_string_4_p_0(ProgressStream_8, ProgName_19);
          mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) ": error ");
          mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "linking");
          mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) " \140");
          mercury__io__write_string_4_p_0(ProgressStream_8, SourceFileName_10);
          mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\' to \140");
          mercury__io__write_string_4_p_0(ProgressStream_8, DestinationFileName_11);
          mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\', ");
          mercury__io__write_string_4_p_0(ProgressStream_8, ErrorMsg_20);
          mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\n");
          mercury__io__flush_output_3_p_0(ProgressStream_8);
        }
      }
      break;
  }
}

void MR_CALL 
parse_tree__module_cmds__definitely_make_symlink_5_p_0(
  MR_String LinkTarget_6,
  MR_String LinkName_7,
  MR_Word * Result_8)
{
  MR_bool succeeded;
  MR_Word LinkResult_11;
  MR_Word Var_10;

  mercury__io__file__remove_file_recursively_4_p_0(LinkName_7, &Var_10);
  mercury__io__file__make_symlink_5_p_0(LinkTarget_6, LinkName_7, &LinkResult_11);
  succeeded = (LinkResult_11 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    *Result_8 = (MR_Integer) 1;
  else
    *Result_8 = (MR_Integer) 0;
}

void MR_CALL 
parse_tree__module_cmds__maybe_make_symlink_6_p_0(
  MR_Word Globals_7,
  MR_String LinkTarget_8,
  MR_String LinkName_9,
  MR_Word * Result_10)
{
  MR_bool succeeded;
  MR_Word UseSymLinks_12;

  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 646, &UseSymLinks_12);
  switch (UseSymLinks_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Result_10 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      {
        MR_Word LinkResult_17;
        MR_Word Var_16;

        mercury__io__file__remove_file_recursively_4_p_0(LinkName_9, &Var_16);
        mercury__io__file__make_symlink_5_p_0(LinkTarget_8, LinkName_9, &LinkResult_17);
        succeeded = (LinkResult_17 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          *Result_10 = (MR_Integer) 1;
        else
          *Result_10 = (MR_Integer) 0;
      }
      break;
  }
}

void MR_CALL 
parse_tree__module_cmds__copy_dot_tmp_to_base_file_report_any_error_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String FileKindStr_10,
  MR_String OutputFileName_11,
  MR_Word * Succeeded_12)
{
  MR_Word Result_14;

  parse_tree__module_cmds__copy_dot_tmp_to_base_file_return_changed_6_p_0(ProgressStream_8, Globals_9, OutputFileName_11, &Result_14);
  switch (Result_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      *Succeeded_12 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      {
        MR_String Msg_15;
        MR_String Var_24;

        *Succeeded_12 = (MR_Integer) 0;
        Var_24 = mercury__string__f_43_43_2_f_0(FileKindStr_10, (MR_String) " files.");
        Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "problem updating ", Var_24);
        libs__file_util__report_arbitrary_error_4_p_0(ProgressStream_8, Msg_15);
      }
      break;
  }
}

void MR_CALL 
parse_tree__module_cmds__copy_dot_tmp_to_base_file_return_succeeded_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_String OutputFileName_9,
  MR_Word * Succeeded_10)
{
  MR_Word Result_12;

  parse_tree__module_cmds__copy_dot_tmp_to_base_file_return_changed_6_p_0(ProgressStream_7, Globals_8, OutputFileName_9, &Result_12);
  switch (Result_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      *Succeeded_10 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      *Succeeded_10 = (MR_Integer) 0;
      break;
  }
}

void MR_CALL 
parse_tree__module_cmds__copy_dot_tmp_to_base_file_return_changed_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_String OutputFileName_9,
  MR_Word * Result_10)
{
  MR_bool succeeded;
  MR_Word Verbose_12;
  MR_String TmpOutputFileName_13;
  MR_Word OutputFileRes_14;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 131, &Verbose_12);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_12, (MR_String) "% Updating interface:\n");
  TmpOutputFileName_13 = mercury__string__f_43_43_2_f_0(OutputFileName_9, (MR_String) ".tmp");
  mercury__io__read_named_file_as_string_4_p_0(OutputFileName_9, &OutputFileRes_14);
  if (((MR_tag((MR_Word) OutputFileRes_14)) == (MR_Integer) 1))
  {
    MR_Word Verbose_57;
    MR_String ChangedMsg_58;
    MR_Word MoveRes_59;
    MR_String Var_74;
    MR_Word Var_60;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 131, &Verbose_57);
    Var_74 = mercury__string__f_43_43_2_f_0(OutputFileName_9, (MR_String) "\' has been CREATED.\n");
    ChangedMsg_58 = mercury__string__f_43_43_2_f_0((MR_String) "% \140", Var_74);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_57, ChangedMsg_58);
    libs__copy_util__copy_file_to_file_name_7_p_0(Globals_8, ProgressStream_7, TmpOutputFileName_13, OutputFileName_9, &MoveRes_59);
    switch (MoveRes_59) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Result_10 = (MR_Integer) 2;
        break;
      case (MR_Integer) 1:
        *Result_10 = (MR_Integer) 0;
        break;
    }
    mercury__io__file__remove_file_4_p_0(TmpOutputFileName_13, &Var_60);
  }
  else
  {
    MR_String OutputFileStr_15 = ((MR_String) ((MR_hl_field(0, OutputFileRes_14, 0))));
    MR_Word TmpOutputFileRes_16;

    mercury__io__read_named_file_as_string_4_p_0(TmpOutputFileName_13, &TmpOutputFileRes_16);
    if (((MR_tag((MR_Word) TmpOutputFileRes_16)) == (MR_Integer) 1))
    {
      MR_Word TmpOutputFileError_20 = ((MR_Word) ((MR_hl_field(1, TmpOutputFileRes_16, 0))));
      MR_String TmpOutputFileErrorMsg_21;

      mercury__io__error_message_2_p_0(TmpOutputFileError_20, &TmpOutputFileErrorMsg_21);
      *Result_10 = (MR_Integer) 2;
      mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "Error creating \140");
      mercury__io__write_string_4_p_0(ProgressStream_7, OutputFileName_9);
      mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\': ");
      mercury__io__write_string_4_p_0(ProgressStream_7, TmpOutputFileErrorMsg_21);
      mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\n");
    }
    else
    {
      MR_String TmpOutputFileStr_17 = ((MR_String) ((MR_hl_field(0, TmpOutputFileRes_16, 0))));

      succeeded = (strcmp(OutputFileStr_15, TmpOutputFileStr_17) == 0);
      if (succeeded)
      {
        MR_String NoChangeMsg_18;
        MR_String Var_48;
        MR_Word Var_19;

        *Result_10 = (MR_Integer) 1;
        Var_48 = mercury__string__f_43_43_2_f_0(OutputFileName_9, (MR_String) "\' has not changed.\n");
        NoChangeMsg_18 = mercury__string__f_43_43_2_f_0((MR_String) "% \140", Var_48);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_12, NoChangeMsg_18);
        mercury__io__file__remove_file_4_p_0(TmpOutputFileName_13, &Var_19);
      }
      else
      {
        MR_Word Verbose_76;
        MR_String ChangedMsg_77;
        MR_Word MoveRes_78;
        MR_String Var_93;
        MR_Word Var_79;

        libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 131, &Verbose_76);
        Var_93 = mercury__string__f_43_43_2_f_0(OutputFileName_9, (MR_String) "\' has CHANGED.\n");
        ChangedMsg_77 = mercury__string__f_43_43_2_f_0((MR_String) "% \140", Var_93);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_76, ChangedMsg_77);
        libs__copy_util__copy_file_to_file_name_7_p_0(Globals_8, ProgressStream_7, TmpOutputFileName_13, OutputFileName_9, &MoveRes_78);
        switch (MoveRes_78) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Result_10 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            *Result_10 = (MR_Integer) 0;
            break;
        }
        mercury__io__file__remove_file_4_p_0(TmpOutputFileName_13, &Var_79);
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____dot_tmp_copy_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_cmds____Unify____dot_tmp_copy_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_cmds____Compare____dot_tmp_copy_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_cmds____Compare____dot_tmp_copy_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__module_cmds__init(void)
{
}

void mercury__parse_tree__module_cmds__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__module_cmds__parse_tree__module_cmds__type_ctor_info_dot_tmp_copy_result_0);
}

void mercury__parse_tree__module_cmds__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__module_cmds__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.module_cmds.
