/*
** Automatically generated from `link_target_code.m'
** by the Mercury compiler,
** version rotd-2026-07-06
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


// :- module backend_libs.link_target_code.
// :- implementation.

/*
INIT mercury__backend_libs__link_target_code__init
ENDINIT
*/

#include "backend_libs.link_target_code.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
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
#include "require.mih"
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
#include "backend_libs.compile_target_code.mih"
#include "backend_libs.create_launchers.mih"
#include "backend_libs.link_target_code_c.mih"
#include "backend_libs.link_target_util.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.shell_util.mih"
#include "libs.system_cmds.mih"
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
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__link_target_code__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__link_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static void MR_CALL 
backend_libs__link_target_code__write_jar_class_argument_5_p_0(
  MR_Word Stream_6,
  MR_String ClassSubDir_7,
  MR_String ClassFileName_8);

static MR_bool MR_CALL 
backend_libs__link_target_code__file_error_is_relevant_2_p_0(
  MR_Word NestedClassPrefixes_3,
  MR_Word FileError_4);

static void MR_CALL 
backend_libs__link_target_code__accumulate_nested_class_files_9_p_0(
  MR_Word NestedClassPrefixes_10,
  MR_String DirName_11,
  MR_String BaseName_12,
  MR_Word FileType_13,
  MR_Word * Continue_14,
  MR_Word STATE_VARIABLE_Acc_0_18,
  MR_Word * STATE_VARIABLE_Acc_19);

static MR_bool MR_CALL 
backend_libs__link_target_code__make_nested_class_prefix_2_p_0(
  MR_String ClassFileName_3,
  MR_String * ClassPrefix_4);

static void MR_CALL 
backend_libs__link_target_code__get_link_opts_for_library_for_cs_2_p_0(
  MR_String LibName_3,
  MR_String * LinkerOpt_4);

static void MR_CALL 
backend_libs__link_target_code__link_files_into_executable_or_library_for_c_cs_java_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__link_target_code__link_files_into_executable_or_library_for_c_cs_java_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__link_target_code__link_files_into_executable_or_library_for_c_cs_java_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__link_target_code__link_files_into_executable_or_library_for_c_cs_java_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__link_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_109_101_114_99_117_114_121_95_115_116_100_95_108_105_98_115_95_102_111_114_95_99_115_95_95_91_50_93_95_48_3_p_0(
  MR_Word Globals_4,
  MR_String * StdLibs_6);

static void MR_CALL 
backend_libs__link_target_code__create_exe_or_lib_for_java_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
backend_libs__link_target_code__create_exe_or_lib_for_java_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
backend_libs__link_target_code__create_exe_or_lib_for_java_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__link_target_code__create_exe_or_lib_for_java_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_bool MR_CALL 
backend_libs__link_target_code__create_exe_or_lib_for_java_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
backend_libs__link_target_code__create_exe_or_lib_for_java_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word LinkedTargetType_12,
  MR_Word MainModuleName_13,
  MR_String FullJarFileName_14,
  MR_Word ObjectList_15,
  MR_Word * Succeeded_16);

static void MR_CALL 
backend_libs__link_target_code__construct_cli_shell_script_for_csharp_3_p_0(
  MR_Word Globals_4,
  MR_String ExeFileName_5,
  MR_String * ContentStr_6);

static MR_String MR_CALL 
backend_libs__link_target_code__csharp_file_name_3_f_0(
  MR_Word EnvType_5,
  MR_Word CSharpCompiler_6,
  MR_String FileName0_7);


static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_1[3][2];

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_2[1][1];

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_3[2][5];

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_4[3][3];

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_5[1][12];

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_6[1][6];

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_7[1][8];

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_8[1][7];




static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "\" \"\044\100\"\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_scalar_common_2[0]))),
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 1U) },
};

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__link_target_code__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__dir__dir__type_ctor_info_file_error_0))
  },
};

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_4[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&backend_libs__link_target_code_scalar_common_3[0])),
    ((MR_Box) (backend_libs__link_target_code__create_exe_or_lib_for_java_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&backend_libs__link_target_code_scalar_common_3[0])),
    ((MR_Box) (backend_libs__link_target_code__link_files_into_executable_or_library_for_c_cs_java_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&backend_libs__link_target_code_scalar_common_3[0])),
    ((MR_Box) (backend_libs__link_target_code__link_files_into_executable_or_library_for_c_cs_java_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_5[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&backend_libs__link_target_code__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_file_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&backend_libs__link_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__link_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_6[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_7[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_8[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_env_type_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_csharp_compiler_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__link_target_code__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__link_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static void MR_CALL 
backend_libs__link_target_code__write_jar_class_argument_5_p_0(
  MR_Word Stream_6,
  MR_String ClassSubDir_7,
  MR_String ClassFileName_8)
{
  MR_bool succeeded;

  succeeded = mercury__dir__path_name_is_absolute_1_p_0(ClassFileName_8);
  if (succeeded)
  {
    mercury__io__write_string_4_p_0(Stream_6, ClassFileName_8);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
  else
  {
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "-C ");
    mercury__io__write_string_4_p_0(Stream_6, ClassSubDir_7);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, ClassFileName_8);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
}

static MR_bool MR_CALL 
backend_libs__link_target_code__file_error_is_relevant_2_p_0(
  MR_Word NestedClassPrefixes_3,
  MR_Word FileError_4)
{
  MR_bool succeeded;
  MR_String PathName_5 = ((MR_String) ((MR_hl_field(0, FileError_4, 0))));
  MR_String DirName_8;
  MR_String BaseName_9;

  succeeded = mercury__dir__split_name_3_p_0(PathName_5, &DirName_8, &BaseName_9);
  if (succeeded)
  {
    MR_Word TypeCtorInfo_15_17;
    MR_Integer Dollar_11;
    MR_String BaseNameToDollar_12;
    MR_Integer Var_14;
    MR_Integer Var_15;
    MR_String Var_16;

    succeeded = mercury__string__sub_string_search_3_p_0(BaseName_9, (MR_String) "\044", &Dollar_11);
    if (succeeded)
    {
      Var_15 = (MR_Integer) 1;
      Var_14 = (MR_Integer) ((MR_Unsigned) Dollar_11 + (MR_Unsigned) Var_15);
      BaseNameToDollar_12 = mercury__string__left_2_f_0(BaseName_9, Var_14);
      Var_16 = mercury__dir__f_slash_2_f_0(DirName_8, BaseNameToDollar_12);
      TypeCtorInfo_15_17 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
      succeeded = mercury__set__contains_2_p_0(TypeCtorInfo_15_17, NestedClassPrefixes_3, ((MR_Box) (Var_16)));
    }
  }
  else
    succeeded = MR_TRUE;
  return succeeded;
}

static void MR_CALL 
backend_libs__link_target_code__accumulate_nested_class_files_9_p_0(
  MR_Word NestedClassPrefixes_10,
  MR_String DirName_11,
  MR_String BaseName_12,
  MR_Word FileType_13,
  MR_Word * Continue_14,
  MR_Word STATE_VARIABLE_Acc_0_18,
  MR_Word * STATE_VARIABLE_Acc_19)
{
  MR_bool succeeded;

  switch (FileType_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 6:
      *STATE_VARIABLE_Acc_19 = STATE_VARIABLE_Acc_0_18;
      break;
    case (MR_Integer) 5:
      *STATE_VARIABLE_Acc_19 = STATE_VARIABLE_Acc_0_18;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Acc_19 = STATE_VARIABLE_Acc_0_18;
      break;
    case (MR_Integer) 7:
      *STATE_VARIABLE_Acc_19 = STATE_VARIABLE_Acc_0_18;
      break;
    case (MR_Integer) 3:
      *STATE_VARIABLE_Acc_19 = STATE_VARIABLE_Acc_0_18;
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      {
        MR_Word TypeCtorInfo_15_28;
        MR_Integer Dollar_22;
        MR_String BaseNameToDollar_23;
        MR_Integer Var_25;
        MR_Integer Var_26;
        MR_String Var_27;

        succeeded = mercury__string__sub_string_search_3_p_0(BaseName_12, (MR_String) "\044", &Dollar_22);
        if (succeeded)
        {
          Var_26 = (MR_Integer) 1;
          Var_25 = (MR_Integer) ((MR_Unsigned) Dollar_22 + (MR_Unsigned) Var_26);
          BaseNameToDollar_23 = mercury__string__left_2_f_0(BaseName_12, Var_25);
          Var_27 = mercury__dir__f_slash_2_f_0(DirName_11, BaseNameToDollar_23);
          TypeCtorInfo_15_28 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
          succeeded = mercury__set__contains_2_p_0(TypeCtorInfo_15_28, NestedClassPrefixes_10, ((MR_Box) (Var_27)));
        }
        if (succeeded)
        {
          MR_String Var_21;

          Var_21 = mercury__dir__f_slash_2_f_0(DirName_11, BaseName_12);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Acc_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_21));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Acc_0_18));
          }
        }
        else
          *STATE_VARIABLE_Acc_19 = STATE_VARIABLE_Acc_0_18;
      }
      break;
    case (MR_Integer) 8:
      *STATE_VARIABLE_Acc_19 = STATE_VARIABLE_Acc_0_18;
      break;
    case (MR_Integer) 9:
      *STATE_VARIABLE_Acc_19 = STATE_VARIABLE_Acc_0_18;
      break;
    case (MR_Integer) 4:
      *STATE_VARIABLE_Acc_19 = STATE_VARIABLE_Acc_0_18;
      break;
    case (MR_Integer) 10:
      *STATE_VARIABLE_Acc_19 = STATE_VARIABLE_Acc_0_18;
      break;
  }
  *Continue_14 = (MR_Integer) 1;
}

static MR_bool MR_CALL 
backend_libs__link_target_code__make_nested_class_prefix_2_p_0(
  MR_String ClassFileName_3,
  MR_String * ClassPrefix_4)
{
  MR_bool succeeded;
  MR_String BaseName_5;
  MR_String Var_7;

  succeeded = mercury__string__remove_suffix_3_p_0(ClassFileName_3, (MR_String) ".class", &BaseName_5);
  if (succeeded)
  {
    Var_7 = (MR_String) "\044";
    *ClassPrefix_4 = mercury__string__f_43_43_2_f_0(BaseName_5, Var_7);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
backend_libs__link_target_code__get_link_opts_for_library_for_cs_2_p_0(
  MR_String LibName_3,
  MR_String * LinkerOpt_4)
{
  MR_String Var_6;

  Var_6 = mercury__string__f_43_43_2_f_0(LibName_3, (MR_String) ".dll");
  *LinkerOpt_4 = mercury__string__f_43_43_2_f_0((MR_String) "-r:", Var_6);
}

static void MR_CALL 
backend_libs__link_target_code__link_files_into_executable_or_library_for_c_cs_java_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv3_LinkerOpt_4;

  backend_libs__link_target_code__get_link_opts_for_library_for_cs_2_p_0(((MR_String) (wrapper_arg_1)), &conv3_LinkerOpt_4);
  *wrapper_arg_2 = ((MR_Box) (conv3_LinkerOpt_4));
}

static MR_Box MR_CALL 
backend_libs__link_target_code__link_files_into_executable_or_library_for_c_cs_java_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_FileName_8;

  conv2_FileName_8 = backend_libs__link_target_code__csharp_file_name_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_FileName_8));
  return wrapper_arg_2;
}

static void MR_CALL 
backend_libs__link_target_code__link_files_into_executable_or_library_for_c_cs_java_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv1_LinkerOpt_4;

  backend_libs__link_target_code__get_link_opts_for_library_for_cs_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_LinkerOpt_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_LinkerOpt_4));
}

static MR_Box MR_CALL 
backend_libs__link_target_code__link_files_into_executable_or_library_for_c_cs_java_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_FileName_8;

  conv0_FileName_8 = backend_libs__link_target_code__csharp_file_name_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_FileName_8));
  return wrapper_arg_2;
}

void MR_CALL 
backend_libs__link_target_code__link_files_into_executable_or_library_for_c_cs_java_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word LinkedTargetType_12,
  MR_Word ModuleName_13,
  MR_Word FilesToLink_14,
  MR_Word * Specs_15,
  MR_Word * Succeeded_16)
{
  MR_bool succeeded;
  MR_String FullOutputFileName_18;
  MR_String CurDirOutputFileName_19;
  MR_Word LinkSucceeded_20;

  backend_libs__link_target_util__pre_link_msg_4_p_0(ProgressStream_10, Globals_11);
  backend_libs__link_target_util__linked_target_file_name_full_curdir_7_p_0(Globals_11, ModuleName_13, LinkedTargetType_12, &FullOutputFileName_18, &CurDirOutputFileName_19);
  switch (LinkedTargetType_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      backend_libs__link_target_code_c__create_exe_or_shared_lib_for_c_10_p_0(ProgressStream_10, Globals_11, LinkedTargetType_12, ModuleName_13, FullOutputFileName_18, FilesToLink_14, Specs_15, &LinkSucceeded_20);
      break;
    case (MR_Integer) 1:
      {
        backend_libs__link_target_code_c__create_static_lib_for_c_8_p_0(ProgressStream_10, Globals_11, FullOutputFileName_18, (MR_Integer) 1, FilesToLink_14, &LinkSucceeded_20);
        *Specs_15 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word EnvType_31;
        MR_Word CSharpCompilerType_32;
        MR_String FullOutputFileName_33;
        MR_Word SourceList_34;
        MR_String NoLogoOpt_35;
        MR_Word LineNumbers_36;
        MR_String NoWarnLineNumberOpt_37;
        MR_Word Debug_38;
        MR_String DebugOpt_39;
        MR_Word LinkLibraryDirectoriesList0_43;
        MR_Word LinkLibraryDirectoriesList_44;
        MR_String LinkLibraryDirectories_46;
        MR_Word LinkLibOpts0_47;
        MR_Word LinkLibOpts_48;
        MR_String LinkLibraries_49;
        MR_String CSharpCompilerCmd_50;
        MR_String MercuryStdLibs_51;
        MR_Word CSCFlagsList_52;
        MR_String CmdArgs_53;
        MR_Word Succeeded0_54;
        MR_Word TargetEnvType_55;
        MR_String CLI_56;
        MR_Word Var_58;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_String Var_82;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_89;
        MR_Word LinkLibraries_94;

        libs__globals__get_system_env_type_2_p_0(Globals_11, &EnvType_31);
        libs__globals__get_csharp_compiler_type_2_p_0(Globals_11, &CSharpCompilerType_32);
        FullOutputFileName_33 = backend_libs__link_target_code__csharp_file_name_3_f_0(EnvType_31, CSharpCompilerType_32, FullOutputFileName_18);
        {
          Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_58, 0) = ((MR_Box) (&backend_libs__link_target_code_scalar_common_8[0]));
          MR_hl_field(0, Var_58, 1) = ((MR_Box) (backend_libs__link_target_code__link_files_into_executable_or_library_for_c_cs_java_9_p_0_1));
          MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_58, 3) = ((MR_Box) (EnvType_31));
          MR_hl_field(0, Var_58, 4) = ((MR_Box) (CSharpCompilerType_32));
        }
        SourceList_34 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_58, FilesToLink_14);
        switch (CSharpCompilerType_32) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            NoLogoOpt_35 = (MR_String) "-nologo ";
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            NoLogoOpt_35 = (MR_String) "";
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 458, &LineNumbers_36);
        switch (LineNumbers_36) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            NoWarnLineNumberOpt_37 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            NoWarnLineNumberOpt_37 = (MR_String) "-nowarn:162,219 ";
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 470, &Debug_38);
        switch (Debug_38) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            DebugOpt_39 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            DebugOpt_39 = (MR_String) "-debug ";
            break;
        }
        libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 517, &LinkLibraryDirectoriesList0_43);
        LinkLibraryDirectoriesList_44 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_58, LinkLibraryDirectoriesList0_43);
        backend_libs__compile_target_code__join_quoted_string_list_5_p_0(LinkLibraryDirectoriesList_44, (MR_String) "-lib:", (MR_String) "", (MR_String) " ", &LinkLibraryDirectories_46);
        libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 518, &LinkLibraries_94);
        mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__link_target_code_scalar_common_4[1]), LinkLibraries_94, &LinkLibOpts0_47);
        LinkLibOpts_48 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_58, LinkLibOpts0_47);
        backend_libs__compile_target_code__join_quoted_string_list_5_p_0(LinkLibOpts_48, (MR_String) "", (MR_String) "", (MR_String) " ", &LinkLibraries_49);
        libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 503, &CSharpCompilerCmd_50);
        backend_libs__link_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_109_101_114_99_117_114_121_95_115_116_100_95_108_105_98_115_95_102_111_114_95_99_115_95_95_91_50_93_95_48_3_p_0(Globals_11, &MercuryStdLibs_51);
        libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 506, &CSCFlagsList_52);
        Var_82 = mercury__string__f_43_43_2_f_0((MR_String) "-out:", FullOutputFileName_33);
        {
          Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_87, 0) = ((MR_Box) (MercuryStdLibs_51));
          MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_86, 0) = ((MR_Box) (LinkLibraries_49));
          MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_87));
        }
        {
          Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_85, 0) = ((MR_Box) (LinkLibraryDirectories_46));
          MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_86));
        }
        {
          Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_84, 0) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_85));
        }
        {
          Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
          MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_84));
        }
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) ((MR_String) "-target:exe"));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_81));
        }
        {
          Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_79, 0) = ((MR_Box) (DebugOpt_39));
          MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_80));
        }
        {
          Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_78, 0) = ((MR_Box) (NoWarnLineNumberOpt_37));
          MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_79));
        }
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (NoLogoOpt_35));
          MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_78));
        }
        Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CSCFlagsList_52, SourceList_34);
        Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_77, Var_89);
        CmdArgs_53 = mercury__string__join_list_2_f_0((MR_String) " ", Var_76);
        libs__system_cmds__invoke_long_system_command_9_p_0(Globals_11, ProgressStream_10, ProgressStream_10, (MR_Integer) 1, CSharpCompilerCmd_50, CmdArgs_53, &Succeeded0_54);
        libs__globals__get_target_env_type_2_p_0(Globals_11, &TargetEnvType_55);
        libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 504, &CLI_56);
        succeeded = (Succeeded0_54 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (LinkedTargetType_12 == (MR_Integer) 3);
          if (succeeded)
          {
            succeeded = (strcmp(CLI_56, (MR_String) "") == 0);
            succeeded = !(succeeded);
            if (succeeded)
              succeeded = (TargetEnvType_55 == (MR_Integer) 0);
          }
        }
        if (succeeded)
        {
          MR_String ContentStr_57;

          backend_libs__link_target_code__construct_cli_shell_script_for_csharp_3_p_0(Globals_11, FullOutputFileName_33, &ContentStr_57);
          backend_libs__create_launchers__create_shell_script_as_executable_7_p_0(ProgressStream_10, Globals_11, ModuleName_13, ContentStr_57, &LinkSucceeded_20);
        }
        else
          LinkSucceeded_20 = Succeeded0_54;
        *Specs_15 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 4:
      {
        MR_String KeyFile_42;
        MR_Word EnvType_100;
        MR_Word CSharpCompilerType_101;
        MR_String FullOutputFileName_102;
        MR_Word SourceList_103;
        MR_String NoLogoOpt_104;
        MR_Word LineNumbers_105;
        MR_String NoWarnLineNumberOpt_106;
        MR_Word Debug_107;
        MR_String DebugOpt_108;
        MR_String SignAssemblyOpt_110;
        MR_Word LinkLibraryDirectoriesList0_111;
        MR_Word LinkLibraryDirectoriesList_112;
        MR_String LinkLibraryDirectories_114;
        MR_Word LinkLibOpts0_115;
        MR_Word LinkLibOpts_116;
        MR_String LinkLibraries_117;
        MR_String CSharpCompilerCmd_118;
        MR_String MercuryStdLibs_119;
        MR_Word CSCFlagsList_120;
        MR_String CmdArgs_121;
        MR_Word Succeeded0_122;
        MR_Word TargetEnvType_123;
        MR_String CLI_124;
        MR_Word Var_126;
        MR_Word Var_138;
        MR_Word Var_139;
        MR_Word Var_140;
        MR_Word Var_141;
        MR_Word Var_142;
        MR_Word Var_143;
        MR_String Var_144;
        MR_Word Var_146;
        MR_Word Var_147;
        MR_Word Var_148;
        MR_Word Var_149;
        MR_Word Var_151;
        MR_Word LinkLibraries_156;

        libs__globals__get_system_env_type_2_p_0(Globals_11, &EnvType_100);
        libs__globals__get_csharp_compiler_type_2_p_0(Globals_11, &CSharpCompilerType_101);
        FullOutputFileName_102 = backend_libs__link_target_code__csharp_file_name_3_f_0(EnvType_100, CSharpCompilerType_101, FullOutputFileName_18);
        {
          Var_126 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_126, 0) = ((MR_Box) (&backend_libs__link_target_code_scalar_common_8[0]));
          MR_hl_field(0, Var_126, 1) = ((MR_Box) (backend_libs__link_target_code__link_files_into_executable_or_library_for_c_cs_java_9_p_0_3));
          MR_hl_field(0, Var_126, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_126, 3) = ((MR_Box) (EnvType_100));
          MR_hl_field(0, Var_126, 4) = ((MR_Box) (CSharpCompilerType_101));
        }
        SourceList_103 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_126, FilesToLink_14);
        switch (CSharpCompilerType_101) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            NoLogoOpt_104 = (MR_String) "-nologo ";
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            NoLogoOpt_104 = (MR_String) "";
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 458, &LineNumbers_105);
        switch (LineNumbers_105) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            NoWarnLineNumberOpt_106 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            NoWarnLineNumberOpt_106 = (MR_String) "-nowarn:162,219 ";
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 470, &Debug_107);
        switch (Debug_107) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            DebugOpt_108 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            DebugOpt_108 = (MR_String) "-debug ";
            break;
        }
        libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 553, &KeyFile_42);
        succeeded = (strcmp(KeyFile_42, (MR_String) "") == 0);
        if (succeeded)
          SignAssemblyOpt_110 = (MR_String) "";
        else
        {
          MR_String Var_63;

          Var_63 = mercury__string__f_43_43_2_f_0(KeyFile_42, (MR_String) " ");
          SignAssemblyOpt_110 = mercury__string__f_43_43_2_f_0((MR_String) "-keyfile:", Var_63);
        }
        libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 517, &LinkLibraryDirectoriesList0_111);
        LinkLibraryDirectoriesList_112 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_126, LinkLibraryDirectoriesList0_111);
        backend_libs__compile_target_code__join_quoted_string_list_5_p_0(LinkLibraryDirectoriesList_112, (MR_String) "-lib:", (MR_String) "", (MR_String) " ", &LinkLibraryDirectories_114);
        libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 518, &LinkLibraries_156);
        mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__link_target_code_scalar_common_4[2]), LinkLibraries_156, &LinkLibOpts0_115);
        LinkLibOpts_116 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_126, LinkLibOpts0_115);
        backend_libs__compile_target_code__join_quoted_string_list_5_p_0(LinkLibOpts_116, (MR_String) "", (MR_String) "", (MR_String) " ", &LinkLibraries_117);
        libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 503, &CSharpCompilerCmd_118);
        backend_libs__link_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_109_101_114_99_117_114_121_95_115_116_100_95_108_105_98_115_95_102_111_114_95_99_115_95_95_91_50_93_95_48_3_p_0(Globals_11, &MercuryStdLibs_119);
        libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 506, &CSCFlagsList_120);
        Var_144 = mercury__string__f_43_43_2_f_0((MR_String) "-out:", FullOutputFileName_102);
        {
          Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_149, 0) = ((MR_Box) (MercuryStdLibs_119));
          MR_hl_field(1, Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_148, 0) = ((MR_Box) (LinkLibraries_117));
          MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_149));
        }
        {
          Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_147, 0) = ((MR_Box) (LinkLibraryDirectories_114));
          MR_hl_field(1, Var_147, 1) = ((MR_Box) (Var_148));
        }
        {
          Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_146, 0) = ((MR_Box) (SignAssemblyOpt_110));
          MR_hl_field(1, Var_146, 1) = ((MR_Box) (Var_147));
        }
        {
          Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_143, 0) = ((MR_Box) (Var_144));
          MR_hl_field(1, Var_143, 1) = ((MR_Box) (Var_146));
        }
        {
          Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_142, 0) = ((MR_Box) ((MR_String) "-target:library"));
          MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_143));
        }
        {
          Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_141, 0) = ((MR_Box) (DebugOpt_108));
          MR_hl_field(1, Var_141, 1) = ((MR_Box) (Var_142));
        }
        {
          Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_140, 0) = ((MR_Box) (NoWarnLineNumberOpt_106));
          MR_hl_field(1, Var_140, 1) = ((MR_Box) (Var_141));
        }
        {
          Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_139, 0) = ((MR_Box) (NoLogoOpt_104));
          MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_140));
        }
        Var_151 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CSCFlagsList_120, SourceList_103);
        Var_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_139, Var_151);
        CmdArgs_121 = mercury__string__join_list_2_f_0((MR_String) " ", Var_138);
        libs__system_cmds__invoke_long_system_command_9_p_0(Globals_11, ProgressStream_10, ProgressStream_10, (MR_Integer) 1, CSharpCompilerCmd_118, CmdArgs_121, &Succeeded0_122);
        libs__globals__get_target_env_type_2_p_0(Globals_11, &TargetEnvType_123);
        libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 504, &CLI_124);
        succeeded = (Succeeded0_122 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (LinkedTargetType_12 == (MR_Integer) 3);
        if (succeeded)
        {
          MR_String ContentStr_98;

          backend_libs__link_target_code__construct_cli_shell_script_for_csharp_3_p_0(Globals_11, FullOutputFileName_102, &ContentStr_98);
        }
        else
          LinkSucceeded_20 = Succeeded0_122;
        *Specs_15 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 6:
    case (MR_Integer) 5:
      {
        backend_libs__link_target_code__create_exe_or_lib_for_java_9_p_0(ProgressStream_10, Globals_11, LinkedTargetType_12, ModuleName_13, FullOutputFileName_18, FilesToLink_14, &LinkSucceeded_20);
        *Specs_15 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
  backend_libs__link_target_util__post_link_msg_4_p_0(ProgressStream_10, Globals_11);
  backend_libs__link_target_util__post_link_maybe_make_symlink_10_p_0(ProgressStream_10, Globals_11, LinkedTargetType_12, ModuleName_13, FullOutputFileName_18, CurDirOutputFileName_19, LinkSucceeded_20, Succeeded_16);
}

static void MR_CALL 
backend_libs__link_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_109_101_114_99_117_114_121_95_115_116_100_95_108_105_98_115_95_102_111_114_95_99_115_95_95_91_50_93_95_48_3_p_0(
  MR_Word Globals_4,
  MR_String * StdLibs_6)
{
  MR_Word MaybeStdLibDir_7;

  libs__globals__lookup_maybe_string_option_3_p_0(Globals_4, (MR_Integer) 516, &MaybeStdLibDir_7);
  if ((MaybeStdLibDir_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *StdLibs_6 = (MR_String) "";
  else
  {
    MR_Word SourceDebug_11;
    MR_String SharedSourceDebugLibs_15;
    MR_String StdLib_16;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_String GradeDir_9;

    libs__globals__get_grade_dir_2_p_0(Globals_4, &GradeDir_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 519, &SourceDebug_11);
    switch (SourceDebug_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        SharedSourceDebugLibs_15 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_String SsdbLib_12;
          MR_String BrowserLib_13;
          MR_String MdbCompLib_14;
          MR_Word Var_24;
          MR_Word Var_25;
          MR_Word Var_26;

          SsdbLib_12 = libs__shell_util__quote_shell_cmd_arg_1_f_0((MR_String) "-r:mer_ssdb.dll");
          BrowserLib_13 = libs__shell_util__quote_shell_cmd_arg_1_f_0((MR_String) "-r:mer_browser.dll");
          MdbCompLib_14 = libs__shell_util__quote_shell_cmd_arg_1_f_0((MR_String) "-r:mer_mdbcomp.dll");
          {
            Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_26, 0) = ((MR_Box) (MdbCompLib_14));
            MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_25, 0) = ((MR_Box) (BrowserLib_13));
            MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_26));
          }
          {
            Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_24, 0) = ((MR_Box) (SsdbLib_12));
            MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_25));
          }
          SharedSourceDebugLibs_15 = mercury__string__join_list_2_f_0((MR_String) " ", Var_24);
        }
        break;
    }
    StdLib_16 = libs__shell_util__quote_shell_cmd_arg_1_f_0((MR_String) "-r:mer_std.dll");
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (StdLib_16));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (SharedSourceDebugLibs_15));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_31));
    }
    *StdLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", Var_30);
  }
}

static void MR_CALL 
backend_libs__link_target_code__create_exe_or_lib_for_java_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  backend_libs__link_target_code__write_jar_class_argument_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)));
}

static MR_Box MR_CALL 
backend_libs__link_target_code__create_exe_or_lib_for_java_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv4_HeadVar__3_3;

  conv4_HeadVar__3_3 = mercury__string__remove_prefix_if_present_2_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
backend_libs__link_target_code__create_exe_or_lib_for_java_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__link_target_code__file_error_is_relevant_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
backend_libs__link_target_code__create_exe_or_lib_for_java_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Continue_14;
  MR_Word conv1_STATE_VARIABLE_Acc_19;

  backend_libs__link_target_code__accumulate_nested_class_files_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_Continue_14, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_Acc_19);
  *wrapper_arg_4 = ((MR_Box) (conv2_Continue_14));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_Acc_19));
}

static MR_bool MR_CALL 
backend_libs__link_target_code__create_exe_or_lib_for_java_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_String conv0_ClassPrefix_4;

  succeeded = backend_libs__link_target_code__make_nested_class_prefix_2_p_0(((MR_String) (wrapper_arg_1)), &conv0_ClassPrefix_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_ClassPrefix_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
backend_libs__link_target_code__create_exe_or_lib_for_java_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word LinkedTargetType_12,
  MR_Word MainModuleName_13,
  MR_String FullJarFileName_14,
  MR_Word ObjectList_15,
  MR_Word * Succeeded_16)
{
  MR_bool succeeded;
  MR_String ClassSubDir_18;
  MR_Word ListClassFiles_19;
  MR_Word TempFileResult_22;
  MR_Word Succeeded0_27;
  MR_Word ClassSubDirPath_70;
  MR_Word NestedClassPrefixes_72;
  MR_Word NestedClassPrefixesSet_73;
  MR_String SearchDir_74;
  MR_Word NestedClassFiles_76;
  MR_Word Errors_77;
  MR_Word RelevantErrors_78;
  MR_Word Var_89;
  MR_Word Var_91;
  MR_Word _ClassSubDirPathProposed_71;
  MR_Box conv3_NestedClassFiles_76;

  parse_tree__file_names__get_java_dir_path_4_p_0(Globals_11, (MR_Integer) 1, &ClassSubDirPath_70, &_ClassSubDirPathProposed_71);
  ClassSubDir_18 = mercury__dir__relative_path_name_from_components_1_f_0(ClassSubDirPath_70);
  mercury__list__filter_map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__link_target_code_scalar_common_4[0]), ObjectList_15, &NestedClassPrefixes_72);
  NestedClassPrefixesSet_73 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NestedClassPrefixes_72);
  SearchDir_74 = mercury__dir__f_slash_2_f_0(ClassSubDir_18, (MR_String) "jmercury");
  {
    Var_89 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_89, 0) = ((MR_Box) (&backend_libs__link_target_code_scalar_common_5[0]));
    MR_hl_field(0, Var_89, 1) = ((MR_Box) (backend_libs__link_target_code__create_exe_or_lib_for_java_9_p_0_2));
    MR_hl_field(0, Var_89, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_89, 3) = ((MR_Box) (NestedClassPrefixesSet_73));
  }
  mercury__dir__general_foldl2_8_p_0((MR_Word) (&backend_libs__link_target_code_scalar_common_1[0]), (MR_Word) (&backend_libs__link_target_code_scalar_common_1[2]), Var_89, SearchDir_74, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_NestedClassFiles_76, &Errors_77);
  NestedClassFiles_76 = ((MR_Word) (conv3_NestedClassFiles_76));
  {
    Var_91 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_91, 0) = ((MR_Box) (&backend_libs__link_target_code_scalar_common_3[1]));
    MR_hl_field(0, Var_91, 1) = ((MR_Box) (backend_libs__link_target_code__create_exe_or_lib_for_java_9_p_0_3));
    MR_hl_field(0, Var_91, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_91, 3) = ((MR_Box) (NestedClassPrefixesSet_73));
  }
  mercury__list__filter_3_p_0((MR_Word) (&mercury__dir__dir__type_ctor_info_file_error_0), Var_91, Errors_77, &RelevantErrors_78);
  if ((RelevantErrors_78 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word AllClassFiles0_79;
    MR_Word AllClassFiles_80;
    MR_String Var_100;

    AllClassFiles0_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ObjectList_15, NestedClassFiles_76);
    Var_100 = mercury__dir__this_directory_0_f_0();
    succeeded = (strcmp(ClassSubDir_18, Var_100) == 0);
    if (succeeded)
      AllClassFiles_80 = AllClassFiles0_79;
    else
    {
      MR_String ClassSubDirSep_81;
      MR_Word Var_93;

      ClassSubDirSep_81 = mercury__dir__f_slash_2_f_0(ClassSubDir_18, (MR_String) "");
      {
        Var_93 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_93, 0) = ((MR_Box) (&backend_libs__link_target_code_scalar_common_6[0]));
        MR_hl_field(0, Var_93, 1) = ((MR_Box) (backend_libs__link_target_code__create_exe_or_lib_for_java_9_p_0_4));
        MR_hl_field(0, Var_93, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_93, 3) = ((MR_Box) (ClassSubDirSep_81));
      }
      AllClassFiles_80 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_93, AllClassFiles0_79);
    }
    mercury__list__sort_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllClassFiles_80, &ListClassFiles_19);
  }
  else
  {
    MR_Word Error_84;
    MR_Word Var_94 = ((MR_Word) ((MR_hl_field(1, RelevantErrors_78, 0))));
    MR_String Var_96;

    Error_84 = ((MR_Word) ((MR_hl_field(0, Var_94, 2))));
    Var_96 = mercury__io__error_message_1_f_0(Error_84);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.link_target_code.list_class_files_for_jar\'/6", Var_96);
      return;
    }
  }
  if ((ListClassFiles_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.link_target_code.create_exe_or_lib_for_java\'/9", (MR_String) "empty list of .class files");
      return;
    }
  libs__file_util__open_temp_output_with_naming_scheme_6_p_0((MR_String) ".", (MR_String) "mtmp", (MR_String) "", &TempFileResult_22);
  if (((MR_tag((MR_Word) TempFileResult_22)) == (MR_Integer) 1))
  {
    MR_String ErrorMessage_30 = ((MR_String) ((MR_hl_field(1, TempFileResult_22, 0))));

    mercury__io__write_string_4_p_0(ProgressStream_10, ErrorMessage_30);
    mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "\n");
    Succeeded0_27 = (MR_Integer) 0;
  }
  else
  {
    MR_String TempFileName_23;
    MR_Word Stream_24;
    MR_String JarCmd_25;
    MR_String Cmd_26;
    MR_Tuple Var_40 = ((MR_Tuple) ((MR_hl_field(0, TempFileResult_22, 0))));
    MR_Word Var_41;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Box conv5_STATE_VARIABLE_IO_3_42;
    MR_Word Var_28;

    TempFileName_23 = ((MR_String) ((MR_hl_field(0, Var_40, 0))));
    Stream_24 = ((MR_Word) ((MR_hl_field(0, Var_40, 1))));
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (&backend_libs__link_target_code_scalar_common_7[0]));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) (backend_libs__link_target_code__create_exe_or_lib_for_java_9_p_0_5));
      MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_41, 3) = ((MR_Box) (Stream_24));
      MR_hl_field(0, Var_41, 4) = ((MR_Box) (ClassSubDir_18));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_41, ListClassFiles_19, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_3_42);
    mercury__io__close_output_3_p_0(Stream_24);
    libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 552, &JarCmd_25);
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (TempFileName_23));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) ((MR_String) " \100"));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (FullJarFileName_14));
      MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) ((MR_String) " cf "));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (JarCmd_25));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_46));
    }
    Cmd_26 = mercury__string__append_list_1_f_0(Var_45);
    libs__system_cmds__invoke_system_command_8_p_0(Globals_11, ProgressStream_10, ProgressStream_10, (MR_Integer) 1, Cmd_26, &Succeeded0_27);
    mercury__io__file__remove_file_4_p_0(TempFileName_23, &Var_28);
    switch (Succeeded0_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_29;

          mercury__io__file__remove_file_4_p_0(FullJarFileName_14, &Var_29);
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
  }
  succeeded = (Succeeded0_27 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (LinkedTargetType_12 == (MR_Integer) 5);
  if (succeeded)
    backend_libs__create_launchers__create_java_shell_script_6_p_0(ProgressStream_10, Globals_11, MainModuleName_13, Succeeded_16);
  else
    *Succeeded_16 = Succeeded0_27;
}

static void MR_CALL 
backend_libs__link_target_code__construct_cli_shell_script_for_csharp_3_p_0(
  MR_Word Globals_4,
  MR_String ExeFileName_5,
  MR_String * ContentStr_6)
{
  MR_String CLI_7;
  MR_Word LinkLibraryDirectoriesList_8;
  MR_Word MonoPathDirectoriesList_9;
  MR_Word AllSearchPaths_10;
  MR_String MonoPathDirectories_11;
  MR_Word Var_18;
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_34;
  MR_Word Var_36;

  libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 504, &CLI_7);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 517, &LinkLibraryDirectoriesList_8);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 508, &MonoPathDirectoriesList_9);
  AllSearchPaths_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LinkLibraryDirectoriesList_8, MonoPathDirectoriesList_9);
  backend_libs__compile_target_code__join_quoted_string_list_5_p_0(AllSearchPaths_10, (MR_String) "", (MR_String) "", (MR_String) ":", &MonoPathDirectories_11);
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (ExeFileName_5));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_scalar_common_1[1])));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) ((MR_String) "exec \"\044CLI_INTERPRETER\" \"\044DIR/"));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) ((MR_String) "}\n"));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (CLI_7));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) ((MR_String) "CLI_INTERPRETER=\044{CLI_INTERPRETER:-"));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) ((MR_String) "export MONO_PATH\n"));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_27));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (MonoPathDirectories_11));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_25));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) ((MR_String) "MONO_PATH=\044MONO_PATH:"));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) ((MR_String) "DIR=\044{0%/*}\n"));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_22));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_20));
  }
  *ContentStr_6 = mercury__string__append_list_1_f_0(Var_18);
}

static MR_String MR_CALL 
backend_libs__link_target_code__csharp_file_name_3_f_0(
  MR_Word EnvType_5,
  MR_Word CSharpCompiler_6,
  MR_String FileName0_7)
{
  MR_String FileName_8;

  switch (EnvType_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 4:
    case (MR_Integer) 3:
      switch (CSharpCompiler_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          FileName_8 = mercury__string__replace_all_3_f_0(FileName0_7, (MR_String) "/", (MR_String) "\\\\");
          break;
        case (MR_Integer) 1:
          FileName_8 = FileName0_7;
          break;
      }
      break;
    case (MR_Integer) 2:
      switch (CSharpCompiler_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          FileName_8 = mercury__string__replace_all_3_f_0(FileName0_7, (MR_String) "/", (MR_String) "\\\\");
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          FileName_8 = FileName0_7;
          break;
      }
      break;
    case (MR_Integer) 0:
      FileName_8 = FileName0_7;
      break;
  }
  return FileName_8;
}

void mercury__backend_libs__link_target_code__init(void)
{
}

void mercury__backend_libs__link_target_code__init_type_tables(void)
{
}

void mercury__backend_libs__link_target_code__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__link_target_code__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module backend_libs.link_target_code.
