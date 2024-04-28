/*
** Automatically generated from `module_cmds.m'
** by the Mercury compiler,
** version rotd-2024-04-28
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
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
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
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "libs.compute_grade.mih"
#include "libs.copy_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_dot_tmp_copy_result_0_0;

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_dot_tmp_copy_result_0_1;

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_dot_tmp_copy_result_0_2;

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_ordinal_ordered_dot_tmp_copy_result_0[3];

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_dot_tmp_copy_result_0[3];

static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_dot_tmp_copy_result_0[3];

static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_java_msys_shell_script__489__1_1_f_0(
  MR_String LambdaHeadVar__1_36);

static MR_bool MR_CALL 
parse_tree__module_cmds__file_error_is_relevant_2_p_0(
  MR_Word NestedClassPrefixes_3,
  MR_Word FileError_4);

static void MR_CALL 
parse_tree__module_cmds__accumulate_nested_class_files_9_p_0(
  MR_Word NestedClassPrefixes_10,
  MR_String DirName_11,
  MR_String BaseName_12,
  MR_Word FileType_13,
  MR_Word * Continue_14,
  MR_Word STATE_VARIABLE_Acc_0_18,
  MR_Word * STATE_VARIABLE_Acc_19);

static MR_bool MR_CALL 
parse_tree__module_cmds__make_nested_class_prefix_2_p_0(
  MR_String ClassFileName_3,
  MR_String * ClassPrefix_4);

static MR_Box MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_2(
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
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_49_95_95_91_55_93_95_48_7_p_0(
  MR_Word Var_38,
  MR_Word Var_39,
  MR_String Var_40,
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word * Succeeded_12);

static void MR_CALL 
parse_tree__module_cmds__write_java_batch_file_6_p_0(
  MR_Word Globals_7,
  MR_Word MainModuleName_8,
  MR_String JarFileName_9,
  MR_Word Stream_10);

static MR_Box MR_CALL 
parse_tree__module_cmds__write_java_msys_shell_script_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__module_cmds__write_java_msys_shell_script_6_p_0(
  MR_Word Globals_7,
  MR_Word MainModuleName_8,
  MR_String JarFileName_9,
  MR_Word Stream_10);

static void MR_CALL 
parse_tree__module_cmds__write_java_shell_script_6_p_0(
  MR_Word Globals_7,
  MR_Word MainModuleName_8,
  MR_String JarFileName_9,
  MR_Word Stream_10);

static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____dot_tmp_copy_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_cmds____Compare____dot_tmp_copy_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_1[4][2];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_2[4][1];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_4[2][3];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_5[1][12];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_6[1][6];




static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_mkword(1, &parse_tree__module_cmds_scalar_common_2[1]))),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) " \"\044\100\"\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) " %*\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_2[4][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 9U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 2U) },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_3[2][5] = {
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
    ((MR_Box) (&parse_tree__module_cmds__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__dir__dir__type_ctor_info_file_error_0))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_4[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__module_cmds_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_cmds__write_java_msys_shell_script_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__module_cmds_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_cmds__list_class_files_for_jar_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_5[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__module_cmds__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_file_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__module_cmds__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__module_cmds__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_6[1][6] = {
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



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

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

static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_java_msys_shell_script__489__1_1_f_0(
  MR_String LambdaHeadVar__1_36)
{
  MR_String LambdaHeadVar__2_37;

  LambdaHeadVar__2_37 = mercury__string__replace_all_3_f_0(LambdaHeadVar__1_36, (MR_String) "\\", (MR_String) "/");
  return LambdaHeadVar__2_37;
}

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

static MR_bool MR_CALL 
parse_tree__module_cmds__file_error_is_relevant_2_p_0(
  MR_Word NestedClassPrefixes_3,
  MR_Word FileError_4)
{
  MR_bool succeeded;
  MR_String PathName_5 = ((MR_String) ((MR_hl_field(0, FileError_4, (MR_Integer) 0))));
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
parse_tree__module_cmds__accumulate_nested_class_files_9_p_0(
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
        MR_Word TypeCtorInfo_15_30;
        MR_Integer Dollar_24;
        MR_String BaseNameToDollar_25;
        MR_Integer Var_27;
        MR_Integer Var_28;
        MR_String Var_29;

        succeeded = mercury__string__sub_string_search_3_p_0(BaseName_12, (MR_String) "\044", &Dollar_24);
        if (succeeded)
        {
          Var_28 = (MR_Integer) 1;
          Var_27 = (MR_Integer) ((MR_Unsigned) Dollar_24 + (MR_Unsigned) Var_28);
          BaseNameToDollar_25 = mercury__string__left_2_f_0(BaseName_12, Var_27);
          Var_29 = mercury__dir__f_slash_2_f_0(DirName_11, BaseNameToDollar_25);
          TypeCtorInfo_15_30 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
          succeeded = mercury__set__contains_2_p_0(TypeCtorInfo_15_30, NestedClassPrefixes_10, ((MR_Box) (Var_29)));
        }
        if (succeeded)
        {
          MR_String Var_23;

          Var_23 = mercury__dir__f_slash_2_f_0(DirName_11, BaseName_12);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Acc_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_23));
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
parse_tree__module_cmds__make_nested_class_prefix_2_p_0(
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

void MR_CALL 
parse_tree__module_cmds__create_launcher_batch_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word Pred_11,
  MR_Word * Succeeded_12)
{
  MR_String FileName_14;
  MR_Word Verbose_15;
  MR_Word OpenResult_17;
  MR_String Var_27;
  MR_String Var_30;
  MR_Word Var_16;

  parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_9, (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_batch_file\'/7", (MR_Word) (MR_mkword(2, &parse_tree__module_cmds_scalar_common_2[3])), MainModuleName_10, &FileName_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 73, &Verbose_15);
  Var_30 = mercury__string__f_43_43_2_f_0(FileName_14, (MR_String) "\'...\n");
  Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating batch file \140", Var_30);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_15, Var_27);
  mercury__io__file__remove_file_4_p_0(FileName_14, &Var_16);
  mercury__io__open_output_4_p_0(FileName_14, &OpenResult_17);
  if (((MR_tag((MR_Word) OpenResult_17)) == (MR_Integer) 1))
  {
    MR_Word Message_19 = ((MR_Word) ((MR_hl_field(1, OpenResult_17, (MR_Integer) 0))));
    MR_String Var_37;

    Var_37 = mercury__io__error_message_1_f_0(Message_19);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_batch_file\'/7", Var_37);
      return;
    }
  }
  else
  {
    MR_Word Stream_18 = ((MR_Word) ((MR_hl_field(0, OpenResult_17, (MR_Integer) 0))));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_11, (MR_Integer) 1))));
    MR_Box conv1_STATE_VARIABLE_IO_34_34;

    func_0(((MR_Box) (Pred_11)), ((MR_Box) (Stream_18)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_34_34);
    mercury__io__close_output_3_p_0(Stream_18);
    *Succeeded_12 = (MR_Integer) 1;
  }
}

void MR_CALL 
parse_tree__module_cmds__create_launcher_shell_script_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word Pred_11,
  MR_Word * Succeeded_12)
{
  MR_bool succeeded;
  MR_String FileName_14;
  MR_Word Verbose_15;
  MR_Word OpenResult_17;
  MR_String Var_29;
  MR_String Var_32;
  MR_Word Var_16;

  parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_9, (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/7", (MR_Word) (MR_mkword(2, &parse_tree__module_cmds_scalar_common_2[2])), MainModuleName_10, &FileName_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 73, &Verbose_15);
  Var_32 = mercury__string__f_43_43_2_f_0(FileName_14, (MR_String) "\'...\n");
  Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", Var_32);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_15, Var_29);
  mercury__io__file__remove_file_4_p_0(FileName_14, &Var_16);
  mercury__io__open_output_4_p_0(FileName_14, &OpenResult_17);
  if (((MR_tag((MR_Word) OpenResult_17)) == (MR_Integer) 1))
  {
    MR_String Var_48;
    MR_Word Message_49 = ((MR_Word) ((MR_hl_field(1, OpenResult_17, (MR_Integer) 0))));

    Var_48 = mercury__io__error_message_1_f_0(Message_49);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/7", Var_48);
      return;
    }
  }
  else
  {
    MR_Word Stream_18 = ((MR_Word) ((MR_hl_field(0, OpenResult_17, (MR_Integer) 0))));
    MR_Word ChmodResult_19;
    MR_String Var_38;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_11, (MR_Integer) 1))));
    MR_Box conv1_STATE_VARIABLE_IO_36_36;

    func_0(((MR_Box) (Pred_11)), ((MR_Box) (Stream_18)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_36_36);
    mercury__io__close_output_3_p_0(Stream_18);
    Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", FileName_14);
    mercury__io__call_system__call_system_4_p_0(Var_38, &ChmodResult_19);
    if (((MR_tag((MR_Word) ChmodResult_19)) == (MR_Integer) 1))
    {
      MR_Word Message_21 = ((MR_Word) ((MR_hl_field(1, ChmodResult_19, (MR_Integer) 0))));
      MR_String Var_46;

      Var_46 = mercury__io__error_message_1_f_0(Message_21);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/7", Var_46);
        return;
      }
    }
    else
    {
      MR_Integer Status_20 = ((MR_Integer) ((MR_hl_field(0, ChmodResult_19, (MR_Integer) 0))));

      succeeded = (Status_20 == (MR_Integer) 0);
      if (succeeded)
      {
        *Succeeded_12 = (MR_Integer) 1;
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_15, (MR_String) "% done.\n");
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/7", (MR_String) "chmod exit status != 0");
          return;
        }
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__get_env_classpath_3_p_0(
  MR_String * Classpath_4)
{
  MR_Word MaybeCP_6;

  mercury__io__environment__get_environment_var_4_p_0((MR_String) "CLASSPATH", &MaybeCP_6);
  if ((MaybeCP_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MaybeJCP_7;

    mercury__io__environment__get_environment_var_4_p_0((MR_String) "java.class.path", &MaybeJCP_7);
    if ((MaybeJCP_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *Classpath_4 = (MR_String) "";
    else
      *Classpath_4 = ((MR_String) ((MR_hl_field(1, MaybeJCP_7, (MR_Integer) 0))));
  }
  else
    *Classpath_4 = ((MR_String) ((MR_hl_field(1, MaybeCP_6, (MR_Integer) 0))));
}

void MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(
  MR_Word Globals_4,
  MR_String ClassFiles_5,
  MR_String * ListClassFiles_6)
{
  MR_Word ClassSubDirPath_7;

  parse_tree__file_names__get_java_dir_path_3_p_0(Globals_4, (MR_Integer) 1, &ClassSubDirPath_7);
  if ((ClassSubDirPath_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *ListClassFiles_6 = ClassFiles_5;
  else
  {
    MR_String ClassSubDir_10;
    MR_String Var_13;
    MR_String Var_14;
    MR_String Var_16;
    MR_String Var_18;
    MR_String Var_19;
    MR_String Var_21;
    MR_String Var_23;

    ClassSubDir_10 = mercury__dir__relative_path_name_from_components_1_f_0(ClassSubDirPath_7);
    Var_23 = mercury__string__f_43_43_2_f_0(ClassSubDir_10, (MR_String) "/| |\'\140");
    Var_21 = mercury__string__f_43_43_2_f_0((MR_String) " | sed \'s| \'", Var_23);
    Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_21);
    Var_18 = mercury__string__f_43_43_2_f_0(ClassFiles_5, Var_19);
    Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\140echo \" ", Var_18);
    Var_14 = mercury__string__f_43_43_2_f_0((MR_String) " \\\n", Var_16);
    Var_13 = mercury__string__f_43_43_2_f_0(ClassSubDir_10, Var_14);
    *ListClassFiles_6 = mercury__string__f_43_43_2_f_0((MR_String) "-C ", Var_13);
  }
}

static MR_Box MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv4_HeadVar__3_3;

  conv4_HeadVar__3_3 = mercury__string__remove_prefix_if_present_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__module_cmds__file_error_is_relevant_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_2(
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

  parse_tree__module_cmds__accumulate_nested_class_files_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_Continue_14, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_Acc_19);
  *wrapper_arg_4 = ((MR_Box) (conv2_Continue_14));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_Acc_19));
}

static MR_bool MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_String conv0_ClassPrefix_4;

  succeeded = parse_tree__module_cmds__make_nested_class_prefix_2_p_0(((MR_String) (wrapper_arg_1)), &conv0_ClassPrefix_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_ClassPrefix_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0(
  MR_Word Globals_7,
  MR_Word MainClassFiles_8,
  MR_String * ClassSubDir_9,
  MR_Word * ListClassFiles_10)
{
  MR_bool succeeded;
  MR_Word ClassSubDirPath_12;
  MR_Word NestedClassPrefixes_13;
  MR_Word NestedClassPrefixesSet_14;
  MR_String SearchDir_15;
  MR_Word NestedClassFiles_18;
  MR_Word Errors_19;
  MR_Word RelevantErrors_20;
  MR_Word Var_35;
  MR_Word Var_38;
  MR_Box conv3_NestedClassFiles_18;

  parse_tree__file_names__get_java_dir_path_3_p_0(Globals_7, (MR_Integer) 1, &ClassSubDirPath_12);
  *ClassSubDir_9 = mercury__dir__relative_path_name_from_components_1_f_0(ClassSubDirPath_12);
  mercury__list__filter_map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_cmds_scalar_common_4[1]), MainClassFiles_8, &NestedClassPrefixes_13);
  NestedClassPrefixesSet_14 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NestedClassPrefixes_13);
  SearchDir_15 = mercury__dir__f_slash_2_f_0(*ClassSubDir_9, (MR_String) "jmercury");
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_5[0]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (parse_tree__module_cmds__list_class_files_for_jar_6_p_0_2));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (NestedClassPrefixesSet_14));
  }
  mercury__dir__general_foldl2_8_p_0((MR_Word) (&parse_tree__module_cmds_scalar_common_1[0]), (MR_Word) (&parse_tree__module_cmds_scalar_common_1[1]), Var_35, SearchDir_15, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_NestedClassFiles_18, &Errors_19);
  NestedClassFiles_18 = ((MR_Word) (conv3_NestedClassFiles_18));
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_3[1]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (parse_tree__module_cmds__list_class_files_for_jar_6_p_0_3));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (NestedClassPrefixesSet_14));
  }
  mercury__list__filter_3_p_0((MR_Word) (&mercury__dir__dir__type_ctor_info_file_error_0), Var_38, Errors_19, &RelevantErrors_20);
  if ((RelevantErrors_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word AllClassFiles0_21;
    MR_Word AllClassFiles_22;
    MR_String Var_60;

    AllClassFiles0_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MainClassFiles_8, NestedClassFiles_18);
    Var_60 = mercury__dir__this_directory_0_f_0();
    succeeded = (strcmp(*ClassSubDir_9, Var_60) == 0);
    if (succeeded)
      AllClassFiles_22 = AllClassFiles0_21;
    else
    {
      MR_String ClassSubDirSep_23;
      MR_Word Var_40;

      ClassSubDirSep_23 = mercury__dir__f_slash_2_f_0(*ClassSubDir_9, (MR_String) "");
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_40, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_6[0]));
        MR_hl_field(0, Var_40, 1) = ((MR_Box) (parse_tree__module_cmds__list_class_files_for_jar_6_p_0_4));
        MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_40, 3) = ((MR_Box) (ClassSubDirSep_23));
      }
      AllClassFiles_22 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_40, AllClassFiles0_21);
    }
    mercury__list__sort_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllClassFiles_22, ListClassFiles_10);
  }
  else
  {
    MR_Word Error_26;
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(1, RelevantErrors_20, (MR_Integer) 0))));
    MR_String Var_43;

    Error_26 = ((MR_Word) ((MR_hl_field(0, Var_41, (MR_Integer) 2))));
    Var_43 = mercury__io__error_message_1_f_0(Error_26);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.list_class_files_for_jar\'/6", Var_43);
      return;
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__create_java_shell_script_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_Word MainModuleName_9,
  MR_Word * Succeeded_10)
{
  MR_bool succeeded;
  MR_String JarFileName_12;
  MR_Word TargetEnvType_13;

  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_8, (MR_String) "predicate \140parse_tree.module_cmds.create_java_shell_script\'/6", (MR_Word) (MR_mkword(2, &parse_tree__module_cmds_scalar_common_2[0])), MainModuleName_9, &JarFileName_12);
  libs__globals__get_target_env_type_2_p_0(Globals_8, &TargetEnvType_13);
  switch (TargetEnvType_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 0:
      {
        MR_String FileName_24;
        MR_Word Verbose_25;
        MR_Word OpenResult_27;
        MR_String Var_37;
        MR_String Var_40;
        MR_Word Var_26;

        parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_8, (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/7", (MR_Word) (MR_mkword(2, &parse_tree__module_cmds_scalar_common_2[2])), MainModuleName_9, &FileName_24);
        libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 73, &Verbose_25);
        Var_40 = mercury__string__f_43_43_2_f_0(FileName_24, (MR_String) "\'...\n");
        Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", Var_40);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_25, Var_37);
        mercury__io__file__remove_file_4_p_0(FileName_24, &Var_26);
        mercury__io__open_output_4_p_0(FileName_24, &OpenResult_27);
        if (((MR_tag((MR_Word) OpenResult_27)) == (MR_Integer) 1))
        {
          MR_String Var_55;
          MR_Word Message_56 = ((MR_Word) ((MR_hl_field(1, OpenResult_27, (MR_Integer) 0))));

          Var_55 = mercury__io__error_message_1_f_0(Message_56);
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/7", Var_55);
            return;
          }
        }
        else
        {
          MR_Word Stream_28 = ((MR_Word) ((MR_hl_field(0, OpenResult_27, (MR_Integer) 0))));
          MR_Word ChmodResult_29;
          MR_String Var_46;

          parse_tree__module_cmds__write_java_shell_script_6_p_0(Globals_8, MainModuleName_9, JarFileName_12, Stream_28);
          mercury__io__close_output_3_p_0(Stream_28);
          Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", FileName_24);
          mercury__io__call_system__call_system_4_p_0(Var_46, &ChmodResult_29);
          if (((MR_tag((MR_Word) ChmodResult_29)) == (MR_Integer) 1))
          {
            MR_Word Message_31 = ((MR_Word) ((MR_hl_field(1, ChmodResult_29, (MR_Integer) 0))));
            MR_String Var_53;

            Var_53 = mercury__io__error_message_1_f_0(Message_31);
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/7", Var_53);
              return;
            }
          }
          else
          {
            MR_Integer Status_30 = ((MR_Integer) ((MR_hl_field(0, ChmodResult_29, (MR_Integer) 0))));

            succeeded = (Status_30 == (MR_Integer) 0);
            if (succeeded)
            {
              *Succeeded_10 = (MR_Integer) 1;
              libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_25, (MR_String) "% done.\n");
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/7", (MR_String) "chmod exit status != 0");
                return;
              }
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String FileName_57;
        MR_Word Verbose_58;
        MR_Word OpenResult_60;
        MR_String Var_70;
        MR_String Var_73;
        MR_Word Var_59;

        parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_8, (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/7", (MR_Word) (MR_mkword(2, &parse_tree__module_cmds_scalar_common_2[2])), MainModuleName_9, &FileName_57);
        libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 73, &Verbose_58);
        Var_73 = mercury__string__f_43_43_2_f_0(FileName_57, (MR_String) "\'...\n");
        Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", Var_73);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_58, Var_70);
        mercury__io__file__remove_file_4_p_0(FileName_57, &Var_59);
        mercury__io__open_output_4_p_0(FileName_57, &OpenResult_60);
        if (((MR_tag((MR_Word) OpenResult_60)) == (MR_Integer) 1))
        {
          MR_String Var_88;
          MR_Word Message_89 = ((MR_Word) ((MR_hl_field(1, OpenResult_60, (MR_Integer) 0))));

          Var_88 = mercury__io__error_message_1_f_0(Message_89);
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/7", Var_88);
            return;
          }
        }
        else
        {
          MR_Word Stream_61 = ((MR_Word) ((MR_hl_field(0, OpenResult_60, (MR_Integer) 0))));
          MR_Word ChmodResult_62;
          MR_String Var_79;

          parse_tree__module_cmds__write_java_msys_shell_script_6_p_0(Globals_8, MainModuleName_9, JarFileName_12, Stream_61);
          mercury__io__close_output_3_p_0(Stream_61);
          Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", FileName_57);
          mercury__io__call_system__call_system_4_p_0(Var_79, &ChmodResult_62);
          if (((MR_tag((MR_Word) ChmodResult_62)) == (MR_Integer) 1))
          {
            MR_Word Message_64 = ((MR_Word) ((MR_hl_field(1, ChmodResult_62, (MR_Integer) 0))));
            MR_String Var_86;

            Var_86 = mercury__io__error_message_1_f_0(Message_64);
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/7", Var_86);
              return;
            }
          }
          else
          {
            MR_Integer Status_63 = ((MR_Integer) ((MR_hl_field(0, ChmodResult_62, (MR_Integer) 0))));

            succeeded = (Status_63 == (MR_Integer) 0);
            if (succeeded)
            {
              *Succeeded_10 = (MR_Integer) 1;
              libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_58, (MR_String) "% done.\n");
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/7", (MR_String) "chmod exit status != 0");
                return;
              }
          }
        }
      }
      break;
    case (MR_Integer) 4:
    case (MR_Integer) 3:
      parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_49_95_95_91_55_93_95_48_7_p_0(Globals_8, MainModuleName_9, JarFileName_12, ProgressStream_7, Globals_8, MainModuleName_9, Succeeded_10);
      break;
  }
}

static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_49_95_95_91_55_93_95_48_7_p_0(
  MR_Word Var_38,
  MR_Word Var_39,
  MR_String Var_40,
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word * Succeeded_12)
{
  MR_String FileName_14;
  MR_Word Verbose_15;
  MR_Word OpenResult_17;
  MR_String Var_27;
  MR_String Var_30;
  MR_Word Var_16;

  parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_9, (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_batch_file\'/7", (MR_Word) (MR_mkword(2, &parse_tree__module_cmds_scalar_common_2[3])), MainModuleName_10, &FileName_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 73, &Verbose_15);
  Var_30 = mercury__string__f_43_43_2_f_0(FileName_14, (MR_String) "\'...\n");
  Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating batch file \140", Var_30);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_15, Var_27);
  mercury__io__file__remove_file_4_p_0(FileName_14, &Var_16);
  mercury__io__open_output_4_p_0(FileName_14, &OpenResult_17);
  if (((MR_tag((MR_Word) OpenResult_17)) == (MR_Integer) 1))
  {
    MR_Word Message_19 = ((MR_Word) ((MR_hl_field(1, OpenResult_17, (MR_Integer) 0))));
    MR_String Var_37;

    Var_37 = mercury__io__error_message_1_f_0(Message_19);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_batch_file\'/7", Var_37);
      return;
    }
  }
  else
  {
    MR_Word Stream_18 = ((MR_Word) ((MR_hl_field(0, OpenResult_17, (MR_Integer) 0))));

    parse_tree__module_cmds__write_java_batch_file_6_p_0(Var_38, Var_39, Var_40, Stream_18);
    mercury__io__close_output_3_p_0(Stream_18);
    *Succeeded_12 = (MR_Integer) 1;
  }
}

static void MR_CALL 
parse_tree__module_cmds__write_java_batch_file_6_p_0(
  MR_Word Globals_7,
  MR_Word MainModuleName_8,
  MR_String JarFileName_9,
  MR_Word Stream_10)
{
  MR_Word MercuryStdLibs_12;
  MR_Word UserClasspath_13;
  MR_Word Java_Incl_Dirs_14;
  MR_String ClassPath_15;
  MR_Word RuntimeFlags_16;
  MR_String RuntimeOpts_17;
  MR_String Java_18;
  MR_String ClassName_19;
  MR_Word Var_23;
  MR_String Var_24;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_36;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_Word Var_43;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_58;

  parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(Globals_7, &MercuryStdLibs_12);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 578, &UserClasspath_13);
  Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "%DIR%\\", JarFileName_9);
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) ((MR_String) "%CLASSPATH%"));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (UserClasspath_13));
  }
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercuryStdLibs_12, Var_28);
  Java_Incl_Dirs_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, Var_27);
  ClassPath_15 = mercury__string__join_list_2_f_0((MR_String) ";", Java_Incl_Dirs_14);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 579, &RuntimeFlags_16);
  RuntimeOpts_17 = mercury__string__join_list_2_f_0((MR_String) " ", RuntimeFlags_16);
  libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 575, &Java_18);
  parse_tree__java_names__mangle_sym_name_for_java_4_p_0(MainModuleName_8, (MR_Integer) 0, (MR_String) ".", &ClassName_19);
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (ClassName_19));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__module_cmds_scalar_common_1[3])));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) ((MR_String) " %MERCURY_JAVA_OPTIONS% jmercury."));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (Java_18));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_56));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (RuntimeOpts_17));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) ((MR_String) "if not defined MERCURY_JAVA_OPTIONS set MERCURY_JAVA_OPTIONS="));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_50));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (ClassPath_15));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) ((MR_String) "set CLASSPATH="));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) ((MR_String) "set DIR=%~dp0\n"));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_45));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) ((MR_String) "setlocal enableextensions\n"));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_43));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) ((MR_String) "rem Automatically generated by the Mercury compiler.\n"));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_41));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) ((MR_String) "\100echo off\n"));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
  }
  mercury__io__write_strings_4_p_0(Stream_10, Var_36);
}

static MR_Box MR_CALL 
parse_tree__module_cmds__write_java_msys_shell_script_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_37;

  conv0_LambdaHeadVar__2_37 = parse_tree__module_cmds__IntroducedFrom__func__write_java_msys_shell_script__489__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_37));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__module_cmds__write_java_msys_shell_script_6_p_0(
  MR_Word Globals_7,
  MR_Word MainModuleName_8,
  MR_String JarFileName_9,
  MR_Word Stream_10)
{
  MR_bool succeeded;
  MR_Word MercuryStdLibs_12;
  MR_Word UserClasspath_13;
  MR_Word Java_Incl_Dirs0_14;
  MR_Word Java_Incl_Dirs_15;
  MR_String ClassPath_17;
  MR_Word RuntimeFlags_18;
  MR_String RuntimeOpts0_19;
  MR_String RuntimeOpts_20;
  MR_String Java_21;
  MR_String ClassName_22;
  MR_Word Var_26;
  MR_String Var_27;
  MR_String Var_29;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_46;
  MR_Word Var_49;
  MR_Word Var_51;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_58;
  MR_Word Var_60;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_65;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_70;
  MR_Word Var_72;

  parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(Globals_7, &MercuryStdLibs_12);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 578, &UserClasspath_13);
  Var_29 = mercury__string__f_43_43_2_f_0(JarFileName_9, (MR_String) "\"");
  Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "\"\044DIR/", Var_29);
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) ((MR_String) "\044CLASSPATH"));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (UserClasspath_13));
  }
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercuryStdLibs_12, Var_33);
  Java_Incl_Dirs0_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_26, Var_32);
  Java_Incl_Dirs_15 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_cmds_scalar_common_4[0]), Java_Incl_Dirs0_14);
  ClassPath_17 = mercury__string__join_list_2_f_0((MR_String) "\\;", Java_Incl_Dirs_15);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 579, &RuntimeFlags_18);
  RuntimeOpts0_19 = mercury__string__join_list_2_f_0((MR_String) " ", RuntimeFlags_18);
  succeeded = mercury__string__contains_char_2_p_0(RuntimeOpts0_19, (MR_Char) 39);
  if (succeeded)
    RuntimeOpts_20 = mercury__string__replace_all_3_f_0(RuntimeOpts0_19, (MR_String) "\'", (MR_String) "\'\\\'\'");
  else
    RuntimeOpts_20 = RuntimeOpts0_19;
  libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 575, &Java_21);
  parse_tree__java_names__mangle_sym_name_for_java_4_p_0(MainModuleName_8, (MR_Integer) 0, (MR_String) ".", &ClassName_22);
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (ClassName_22));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__module_cmds_scalar_common_1[2])));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) ((MR_String) "exec \"\044MERCURY_JAVA\" \044MERCURY_JAVA_OPTIONS jmercury."));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_72));
  }
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) ((MR_String) "\'}\n"));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_70));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (RuntimeOpts_20));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_68));
  }
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) ((MR_String) "MERCURY_JAVA_OPTIONS=\044{MERCURY_JAVA_OPTIONS:-\'"));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_67));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) ((MR_String) "\'}\n"));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_65));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (Java_21));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) ((MR_String) "MERCURY_JAVA=\044{MERCURY_JAVA:-\'"));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_62));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) ((MR_String) "export CLASSPATH\n"));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_60));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (ClassPath_17));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_56));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) ((MR_String) "CLASSPATH="));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) ((MR_String) "DIR=\044( cd \"\044{DIR}\" && pwd -W )\n"));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) ((MR_String) "DIR=\044{0%/*}\n"));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
  }
  mercury__io__write_strings_4_p_0(Stream_10, Var_46);
}

static void MR_CALL 
parse_tree__module_cmds__write_java_shell_script_6_p_0(
  MR_Word Globals_7,
  MR_Word MainModuleName_8,
  MR_String JarFileName_9,
  MR_Word Stream_10)
{
  MR_bool succeeded;
  MR_Word MaybeStage2Base_12;
  MR_Word MercuryStdLibs_13;
  MR_Word UserClasspath_15;
  MR_Word Java_Incl_Dirs_16;
  MR_String ClassPath_17;
  MR_Word RuntimeFlags_18;
  MR_String RuntimeOpts0_19;
  MR_String RuntimeOpts_20;
  MR_String Java_21;
  MR_String ClassName_22;
  MR_Word Var_34;
  MR_String Var_35;
  MR_String Var_37;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_49;
  MR_Word Var_52;
  MR_Word Var_54;
  MR_Word Var_56;
  MR_Word Var_58;
  MR_Word Var_60;
  MR_Word Var_62;
  MR_Word Var_64;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_69;
  MR_Word Var_71;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_76;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_81;
  MR_Word Var_83;

  mercury__io__environment__get_environment_var_4_p_0((MR_String) "MERCURY_STAGE2_LAUNCHER_BASE", &MaybeStage2Base_12);
  if ((MaybeStage2Base_12 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(Globals_7, &MercuryStdLibs_13);
  else
  {
    MR_String Stage2Base_14 = ((MR_String) ((MR_hl_field(1, MaybeStage2Base_12, (MR_Integer) 0))));
    MR_String Var_27;
    MR_Word Var_29;
    MR_String Var_30;

    Var_27 = mercury__dir__f_slash_2_f_0(Stage2Base_14, (MR_String) "library/mer_rt.jar");
    Var_30 = mercury__dir__f_slash_2_f_0(Stage2Base_14, (MR_String) "library/mer_std.jar");
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MercuryStdLibs_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MercuryStdLibs_13, 0) = ((MR_Box) (Var_27));
      MR_hl_field(1, MercuryStdLibs_13, 1) = ((MR_Box) (Var_29));
    }
  }
  libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 578, &UserClasspath_15);
  Var_37 = mercury__string__f_43_43_2_f_0(JarFileName_9, (MR_String) "\"");
  Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "\"\044DIR/", Var_37);
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) ((MR_String) "\044CLASSPATH"));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (UserClasspath_15));
  }
  Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercuryStdLibs_13, Var_41);
  Java_Incl_Dirs_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_34, Var_40);
  ClassPath_17 = mercury__string__join_list_2_f_0((MR_String) "\044{SEP}", Java_Incl_Dirs_16);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 579, &RuntimeFlags_18);
  RuntimeOpts0_19 = mercury__string__join_list_2_f_0((MR_String) " ", RuntimeFlags_18);
  succeeded = mercury__string__contains_char_2_p_0(RuntimeOpts0_19, (MR_Char) 39);
  if (succeeded)
    RuntimeOpts_20 = mercury__string__replace_all_3_f_0(RuntimeOpts0_19, (MR_String) "\'", (MR_String) "\'\\\'\'");
  else
    RuntimeOpts_20 = RuntimeOpts0_19;
  libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 575, &Java_21);
  parse_tree__java_names__mangle_sym_name_for_java_4_p_0(MainModuleName_8, (MR_Integer) 0, (MR_String) ".", &ClassName_22);
  {
    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_83, 0) = ((MR_Box) (ClassName_22));
    MR_hl_field(1, Var_83, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__module_cmds_scalar_common_1[2])));
  }
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) ((MR_String) "exec \"\044MERCURY_JAVA\" \044MERCURY_JAVA_OPTIONS jmercury."));
    MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_83));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) ((MR_String) "\'}\n"));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_81));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (RuntimeOpts_20));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_79));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) ((MR_String) "MERCURY_JAVA_OPTIONS=\044{MERCURY_JAVA_OPTIONS:-\'"));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_78));
  }
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) ((MR_String) "\'}\n"));
    MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_76));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (Java_21));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_74));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) ((MR_String) "MERCURY_JAVA=\044{MERCURY_JAVA:-\'"));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_73));
  }
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) ((MR_String) "export CLASSPATH\n"));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_71));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_69));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (ClassPath_17));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_67));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) ((MR_String) "CLASSPATH="));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_66));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) ((MR_String) "esac\n"));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) ((MR_String) "   *)  SEP=\';\' ;;\n"));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_62));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) ((MR_String) "   \'\') SEP=\':\' ;;\n"));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_60));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) ((MR_String) "case \044WINDIR in\n"));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) ((MR_String) "DIR=\044( cd \"\044{DIR}\" && pwd -P )\n"));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) ((MR_String) "DIR=\044{0%/*}\n"));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
  }
  mercury__io__write_strings_4_p_0(Stream_10, Var_49);
}

void MR_CALL 
parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(
  MR_Word Globals_3,
  MR_Word * STATE_VARIABLE_StdLibs_9)
{
  MR_Word MaybeStdlibDir_5;

  libs__globals__lookup_maybe_string_option_3_p_0(Globals_3, (MR_Integer) 601, &MaybeStdlibDir_5);
  if ((MaybeStdlibDir_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_StdLibs_9 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String StdLibDir_6 = ((MR_String) ((MR_hl_field(1, MaybeStdlibDir_5, (MR_Integer) 0))));
    MR_String GradeDir_7;
    MR_Word SourceDebug_8;
    MR_Word STATE_VARIABLE_StdLibs_26_26;
    MR_String Var_31;
    MR_Word STATE_VARIABLE_StdLibs_32_32;
    MR_String Var_33;
    MR_String Var_34;
    MR_String Var_37;
    MR_String Var_39;
    MR_String Var_40;

    libs__compute_grade__grade_directory_component_2_p_0(Globals_3, &GradeDir_7);
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 295, &SourceDebug_8);
    switch (SourceDebug_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_StdLibs_26_26 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_13;
          MR_Word STATE_VARIABLE_StdLibs_14_14;
          MR_String Var_15;
          MR_String Var_16;
          MR_String Var_19;
          MR_Word STATE_VARIABLE_StdLibs_20_20;
          MR_String Var_21;
          MR_String Var_22;
          MR_String Var_25;
          MR_String Var_27;
          MR_String Var_28;

          Var_16 = mercury__dir__f_slash_2_f_0(StdLibDir_6, (MR_String) "lib");
          Var_15 = mercury__dir__f_slash_2_f_0(Var_16, GradeDir_7);
          Var_13 = mercury__dir__f_slash_2_f_0(Var_15, (MR_String) "mer_browser.jar");
          mercury__list__cons_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_13)), (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_StdLibs_14_14);
          Var_22 = mercury__dir__f_slash_2_f_0(StdLibDir_6, (MR_String) "lib");
          Var_21 = mercury__dir__f_slash_2_f_0(Var_22, GradeDir_7);
          Var_19 = mercury__dir__f_slash_2_f_0(Var_21, (MR_String) "mer_mdbcomp.jar");
          mercury__list__cons_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_19)), STATE_VARIABLE_StdLibs_14_14, &STATE_VARIABLE_StdLibs_20_20);
          Var_28 = mercury__dir__f_slash_2_f_0(StdLibDir_6, (MR_String) "lib");
          Var_27 = mercury__dir__f_slash_2_f_0(Var_28, GradeDir_7);
          Var_25 = mercury__dir__f_slash_2_f_0(Var_27, (MR_String) "mer_ssdb.jar");
          mercury__list__cons_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_25)), STATE_VARIABLE_StdLibs_20_20, &STATE_VARIABLE_StdLibs_26_26);
        }
        break;
    }
    Var_34 = mercury__dir__f_slash_2_f_0(StdLibDir_6, (MR_String) "lib");
    Var_33 = mercury__dir__f_slash_2_f_0(Var_34, GradeDir_7);
    Var_31 = mercury__dir__f_slash_2_f_0(Var_33, (MR_String) "mer_std.jar");
    mercury__list__cons_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_31)), STATE_VARIABLE_StdLibs_26_26, &STATE_VARIABLE_StdLibs_32_32);
    Var_40 = mercury__dir__f_slash_2_f_0(StdLibDir_6, (MR_String) "lib");
    Var_39 = mercury__dir__f_slash_2_f_0(Var_40, GradeDir_7);
    Var_37 = mercury__dir__f_slash_2_f_0(Var_39, (MR_String) "mer_rt.jar");
    mercury__list__cons_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_37)), STATE_VARIABLE_StdLibs_32_32, STATE_VARIABLE_StdLibs_9);
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
  MR_Word Globals_8,
  MR_Word ProgressStream_9,
  MR_Word ModuleName_10,
  MR_Word Ext_11,
  MR_Word * Succeeded_12)
{
  MR_String FileName_14;

  parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_8, (MR_String) "predicate \140parse_tree.module_cmds.touch_module_ext_datestamp\'/7", Ext_11, ModuleName_10, &FileName_14);
  parse_tree__module_cmds__touch_file_datestamp_6_p_0(Globals_8, ProgressStream_9, FileName_14, Succeeded_12);
}

void MR_CALL 
parse_tree__module_cmds__touch_file_datestamp_6_p_0(
  MR_Word Globals_7,
  MR_Word ProgressStream_8,
  MR_String FileName_9,
  MR_Word * Succeeded_10)
{
  MR_Word Verbose_12;
  MR_Word Result_13;
  MR_String Var_20;
  MR_String Var_23;

  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 73, &Verbose_12);
  Var_23 = mercury__string__f_43_43_2_f_0(FileName_9, (MR_String) "\'... ");
  Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "% Touching \140", Var_23);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_12, Var_20);
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_12);
  mercury__io__open_output_4_p_0(FileName_9, &Result_13);
  if (((MR_tag((MR_Word) Result_13)) == (MR_Integer) 1))
  {
    MR_Word IOError_15 = ((MR_Word) ((MR_hl_field(1, Result_13, (MR_Integer) 0))));
    MR_String IOErrorMessage_16;

    mercury__io__error_message_2_p_0(IOError_15, &IOErrorMessage_16);
    mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\nError opening \140");
    mercury__io__write_string_4_p_0(ProgressStream_8, FileName_9);
    mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\' for output: ");
    mercury__io__write_string_4_p_0(ProgressStream_8, IOErrorMessage_16);
    mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) ".\n");
    *Succeeded_10 = (MR_Integer) 0;
  }
  else
  {
    MR_Word FileStream_14 = ((MR_Word) ((MR_hl_field(0, Result_13, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "\n");
    mercury__io__close_output_3_p_0(FileStream_14);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_12, (MR_String) " done.\n");
    *Succeeded_10 = (MR_Integer) 1;
  }
}

void MR_CALL 
parse_tree__module_cmds__make_symlink_or_copy_file_7_p_0(
  MR_Word Globals_8,
  MR_Word ProgressStream_9,
  MR_String SourceFileName_10,
  MR_String DestinationFileName_11,
  MR_Word * Succeeded_12)
{
  MR_Word UseSymLinks_14;
  MR_Word PrintCommand_15;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 681, &UseSymLinks_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 79, &PrintCommand_15);
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
              mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Copying file \140");
              mercury__io__write_string_4_p_0(ProgressStream_9, SourceFileName_10);
              mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\' -> \140");
              mercury__io__write_string_4_p_0(ProgressStream_9, DestinationFileName_11);
              mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\'\n");
              mercury__io__flush_output_3_p_0(ProgressStream_9);
            }
            break;
        }
        libs__copy_util__copy_file_to_file_name_7_p_0(Globals_8, ProgressStream_9, SourceFileName_10, DestinationFileName_11, Succeeded_12);
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
              mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Linking file \140");
              mercury__io__write_string_4_p_0(ProgressStream_9, SourceFileName_10);
              mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\' -> \140");
              mercury__io__write_string_4_p_0(ProgressStream_9, DestinationFileName_11);
              mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\'\n");
              mercury__io__flush_output_3_p_0(ProgressStream_9);
            }
            break;
        }
        mercury__io__file__make_symlink_5_p_0(SourceFileName_10, DestinationFileName_11, &Result_17);
        if ((Result_17 == (MR_Word) ((MR_Unsigned) 0U)))
          *Succeeded_12 = (MR_Integer) 1;
        else
        {
          MR_Word Error_18 = ((MR_Word) ((MR_hl_field(1, Result_17, (MR_Integer) 0))));
          MR_String ProgName_19;
          MR_String ErrorMsg_20;

          *Succeeded_12 = (MR_Integer) 0;
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_19);
          mercury__io__error_message_2_p_0(Error_18, &ErrorMsg_20);
          mercury__io__write_string_4_p_0(ProgressStream_9, ProgName_19);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) ": error ");
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "linking");
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) " \140");
          mercury__io__write_string_4_p_0(ProgressStream_9, SourceFileName_10);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\' to \140");
          mercury__io__write_string_4_p_0(ProgressStream_9, DestinationFileName_11);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\', ");
          mercury__io__write_string_4_p_0(ProgressStream_9, ErrorMsg_20);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\n");
          mercury__io__flush_output_3_p_0(ProgressStream_9);
        }
      }
      break;
  }
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

  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 681, &UseSymLinks_12);
  switch (UseSymLinks_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Result_10 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      {
        MR_Word LinkResult_14;
        MR_Word Var_13;

        mercury__io__file__remove_file_recursively_4_p_0(LinkName_9, &Var_13);
        mercury__io__file__make_symlink_5_p_0(LinkTarget_8, LinkName_9, &LinkResult_14);
        succeeded = (LinkResult_14 == (MR_Word) ((MR_Unsigned) 0U));
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
        libs__file_util__report_error_4_p_0(ProgressStream_8, Msg_15);
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

  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 73, &Verbose_12);
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

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 73, &Verbose_57);
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
    MR_String OutputFileStr_15 = ((MR_String) ((MR_hl_field(0, OutputFileRes_14, (MR_Integer) 0))));
    MR_Word TmpOutputFileRes_16;

    mercury__io__read_named_file_as_string_4_p_0(TmpOutputFileName_13, &TmpOutputFileRes_16);
    if (((MR_tag((MR_Word) TmpOutputFileRes_16)) == (MR_Integer) 1))
    {
      MR_Word TmpOutputFileError_20 = ((MR_Word) ((MR_hl_field(1, TmpOutputFileRes_16, (MR_Integer) 0))));
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
      MR_String TmpOutputFileStr_17 = ((MR_String) ((MR_hl_field(0, TmpOutputFileRes_16, (MR_Integer) 0))));

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

        libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 73, &Verbose_76);
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
