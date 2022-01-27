/*
** Automatically generated from `module_cmds.m'
** by the Mercury compiler,
** version rotd-2021-11-13
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
#include "bimap.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.compute_grade.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.process_util.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__io__pti_res_1__plain_bool__type_ctor_info_bool_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_0;

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_ordinal_ordered_command_verbosity_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_command_verbosity_0[2];

static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_command_verbosity_0[2];

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_0;

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_ordinal_ordered_quote_char_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_quote_char_0[2];

static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_quote_char_0[2];

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_0;

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_1;

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_2;

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_ordinal_ordered_update_interface_result_0[3];

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_update_interface_result_0[3];

static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_update_interface_result_0[3];

static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_java_msys_shell_script__899__1_1_f_0(
  MR_String LambdaHeadVar__1_33);

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

static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_2_7_p_0(
  MR_Word TmpOutputFileStream_8,
  MR_Integer Byte_9,
  MR_Word * Continue_10,
  MR_Word HeadVar__4_11,
  MR_Word * Differ_12);

static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_97_114_121_95_105_110_112_117_116_95_115_116_114_101_97_109_95_99_109_112_95_50_95_95_91_52_93_95_48_7_p_0(
  MR_Word TmpOutputFileStream_8,
  MR_Integer Byte_9,
  MR_Word * Continue_10,
  MR_Word * Differ_12);

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
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_115_104_101_108_108_95_115_99_114_105_112_116_95_95_104_111_51_95_95_91_54_93_95_48_6_p_0(
  MR_Word Var_52,
  MR_Word Var_53,
  MR_String Var_54,
  MR_Word Globals_7,
  MR_Word MainModuleName_8,
  MR_Word * Succeeded_10);

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
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_49_95_95_91_54_93_95_48_6_p_0(
  MR_Word Var_40,
  MR_Word Var_41,
  MR_String Var_42,
  MR_Word Globals_7,
  MR_Word MainModuleName_8,
  MR_Word * Succeeded_10);

static void MR_CALL 
parse_tree__module_cmds__write_java_batch_file_6_p_0(
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

static void MR_CALL 
parse_tree__module_cmds__copy_dir_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_String Source_12,
  MR_String Destination_13,
  MR_Word * Succeeded_14);

static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_5_p_0(
  MR_Word OutputFileStream_6,
  MR_Word TmpOutputFileStream_7,
  MR_Word * FilesDiffer_8);

static void MR_CALL 
parse_tree__module_cmds__update_interface_create_file_9_p_0(
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_String ChangedStr_13,
  MR_String OutputFileName_14,
  MR_String TmpOutputFileName_15,
  MR_Word * Result_16);

static void MR_CALL 
parse_tree__module_cmds__copy_file_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_cmds__use_win32_0_p_0(void);

static MR_bool MR_CALL 
parse_tree__module_cmds__use_dotnet_0_p_0(void);

static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____command_verbosity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_cmds____Compare____command_verbosity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____quote_char_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_cmds____Compare____quote_char_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____update_interface_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_cmds____Compare____update_interface_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_2[8][1];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_3[1][7];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_4[1][10];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_5[2][5];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_6[2][3];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_7[1][12];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_8[1][6];




static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__io__io__type_ctor_info_res_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_2[2]))),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) " \"\044\100\"\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) " %*\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_2[8][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".jar"))))
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 3 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ""))))
  },
  /* row 4 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".bat"))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__module_cmds_scalar_common_2[6]))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_input_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__module_cmds__io__pti_res_1__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__module_cmds__io__pti_res_1__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_cmds__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__dir__dir__type_ctor_info_file_error_0))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_6[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__module_cmds_scalar_common_5[0])),
    ((MR_Box) (parse_tree__module_cmds__write_java_msys_shell_script_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__module_cmds_scalar_common_5[0])),
    ((MR_Box) (parse_tree__module_cmds__list_class_files_for_jar_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_7[1][12] = {
  /* row 0 */
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

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_8[1][6] = {
  /* row 0 */
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
#include "libs.process_util.mh"
#include "parse_tree.module_cmds.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__io__pti_res_1__plain_bool__type_ctor_info_bool_0 = {
  &mercury__io__io__type_ctor_info_res_1,
  {
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_0 = {
  (MR_String) "cmd_verbose",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_1 = {
  (MR_String) "cmd_verbose_commands",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_ordinal_ordered_command_verbosity_0[2] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_command_verbosity_0[2] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_1
};

static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_command_verbosity_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__module_cmds__parse_tree__module_cmds__type_ctor_info_command_verbosity_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_cmds____Unify____command_verbosity_0_0_10001)),
  ((MR_Box) (parse_tree__module_cmds____Compare____command_verbosity_0_0_10001)),
  (MR_String) "parse_tree.module_cmds",
  (MR_String) "command_verbosity",
  {     parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_command_verbosity_0 },
  {     parse_tree__module_cmds__parse_tree__module_cmds__enum_ordinal_ordered_command_verbosity_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_command_verbosity_0,

};

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_0 = {
  (MR_String) "forward",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_1 = {
  (MR_String) "double",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_ordinal_ordered_quote_char_0[2] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_quote_char_0[2] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_1,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_0
};

static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_quote_char_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_cmds__parse_tree__module_cmds__type_ctor_info_quote_char_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_cmds____Unify____quote_char_0_0_10001)),
  ((MR_Box) (parse_tree__module_cmds____Compare____quote_char_0_0_10001)),
  (MR_String) "parse_tree.module_cmds",
  (MR_String) "quote_char",
  {     parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_quote_char_0 },
  {     parse_tree__module_cmds__parse_tree__module_cmds__enum_ordinal_ordered_quote_char_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_quote_char_0,

};

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_0 = {
  (MR_String) "interface_new_or_changed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_1 = {
  (MR_String) "interface_unchanged",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_2 = {
  (MR_String) "interface_error",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_ordinal_ordered_update_interface_result_0[3] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_1,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_update_interface_result_0[3] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_2,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_1
};

static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_update_interface_result_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_cmds__parse_tree__module_cmds__type_ctor_info_update_interface_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_cmds____Unify____update_interface_result_0_0_10001)),
  ((MR_Box) (parse_tree__module_cmds____Compare____update_interface_result_0_0_10001)),
  (MR_String) "parse_tree.module_cmds",
  (MR_String) "update_interface_result",
  {     parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_update_interface_result_0 },
  {     parse_tree__module_cmds__parse_tree__module_cmds__enum_ordinal_ordered_update_interface_result_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_update_interface_result_0,

};

static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_java_msys_shell_script__899__1_1_f_0(
  MR_String LambdaHeadVar__1_33)
{
  {
    MR_String LambdaHeadVar__2_34;

    LambdaHeadVar__2_34 = mercury__string__replace_all_3_f_0(LambdaHeadVar__1_33, (MR_String) "\\", (MR_String) "/");
    return LambdaHeadVar__2_34;
  }
}

void MR_CALL 
parse_tree__module_cmds____Compare____update_interface_result_0_0(
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

MR_bool MR_CALL 
parse_tree__module_cmds____Unify____update_interface_result_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_cmds____Compare____quote_char_0_0(
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

MR_bool MR_CALL 
parse_tree__module_cmds____Unify____quote_char_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_cmds____Compare____command_verbosity_0_0(
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

MR_bool MR_CALL 
parse_tree__module_cmds____Unify____command_verbosity_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__module_cmds__file_error_is_relevant_2_p_0(
  MR_Word NestedClassPrefixes_3,
  MR_Word FileError_4)
{
  {
    MR_bool succeeded;
    MR_String PathName_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), FileError_4, (MR_Integer) 0))));
    MR_String DirName_8;
    MR_String BaseName_9;

    succeeded = mercury__dir__split_name_3_p_0(PathName_5, &DirName_8, &BaseName_9);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_15_21;
      MR_Integer Dollar_15;
      MR_String BaseNameToDollar_16;
      MR_Integer Var_18;
      MR_Integer Var_19;
      MR_String Var_20;

      succeeded = mercury__string__sub_string_search_3_p_0(BaseName_9, (MR_String) "\044", &Dollar_15);
      if (succeeded)
      {
        Var_19 = (MR_Integer) 1;
        Var_18 = (MR_Integer) ((MR_Unsigned) Dollar_15 + (MR_Unsigned) Var_19);
        BaseNameToDollar_16 = mercury__string__left_2_f_0(BaseName_9, Var_18);
        Var_20 = mercury__dir__f_slash_2_f_0(DirName_8, BaseNameToDollar_16);
        TypeCtorInfo_15_21 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
        succeeded = mercury__set__contains_2_p_0(TypeCtorInfo_15_21, NestedClassPrefixes_3, ((MR_Box) (Var_20)));
      }
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
  }
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
          MR_Word TypeCtorInfo_15_34;
          MR_Integer Dollar_28;
          MR_String BaseNameToDollar_29;
          MR_Integer Var_31;
          MR_Integer Var_32;
          MR_String Var_33;

          succeeded = mercury__string__sub_string_search_3_p_0(BaseName_12, (MR_String) "\044", &Dollar_28);
          if (succeeded)
          {
            Var_32 = (MR_Integer) 1;
            Var_31 = (MR_Integer) ((MR_Unsigned) Dollar_28 + (MR_Unsigned) Var_32);
            BaseNameToDollar_29 = mercury__string__left_2_f_0(BaseName_12, Var_31);
            Var_33 = mercury__dir__f_slash_2_f_0(DirName_11, BaseNameToDollar_29);
            TypeCtorInfo_15_34 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
            succeeded = mercury__set__contains_2_p_0(TypeCtorInfo_15_34, NestedClassPrefixes_10, ((MR_Box) (Var_33)));
          }
          if (succeeded)
          {
            MR_String Var_23;

            Var_23 = mercury__dir__f_slash_2_f_0(DirName_11, BaseName_12);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Acc_19 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_23));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Acc_0_18));
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
}

static MR_bool MR_CALL 
parse_tree__module_cmds__make_nested_class_prefix_2_p_0(
  MR_String ClassFileName_3,
  MR_String * ClassPrefix_4)
{
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
}

static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_2_7_p_0(
  MR_Word TmpOutputFileStream_8,
  MR_Integer Byte_9,
  MR_Word * Continue_10,
  MR_Word HeadVar__4_11,
  MR_Word * Differ_12)
{
  parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_97_114_121_95_105_110_112_117_116_95_115_116_114_101_97_109_95_99_109_112_95_50_95_95_91_52_93_95_48_7_p_0(TmpOutputFileStream_8, Byte_9, Continue_10, Differ_12);
}

static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_97_114_121_95_105_110_112_117_116_95_115_116_114_101_97_109_95_99_109_112_95_50_95_95_91_52_93_95_48_7_p_0(
  MR_Word TmpOutputFileStream_8,
  MR_Integer Byte_9,
  MR_Word * Continue_10,
  MR_Word * Differ_12)
{
  {
    MR_bool succeeded;
    MR_Word TmpByteResult_14;

    mercury__io__read_byte_4_p_0(TmpOutputFileStream_8, &TmpByteResult_14);
    switch (MR_tag((MR_Word) TmpByteResult_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Differ_12 = (MR_Word) (&parse_tree__module_cmds_scalar_common_2[6]);
          *Continue_10 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer TmpByte_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TmpByteResult_14, (MR_Integer) 0))));

          succeeded = (TmpByte_15 == Byte_9);
          if (succeeded)
          {
            *Differ_12 = (MR_Word) (&parse_tree__module_cmds_scalar_common_2[5]);
            *Continue_10 = (MR_Integer) 1;
          }
          else
          {
            *Differ_12 = (MR_Word) (&parse_tree__module_cmds_scalar_common_2[6]);
            *Continue_10 = (MR_Integer) 0;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TmpByteError_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TmpByteResult_14, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Differ_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TmpByteError_16));
          }
          *Continue_10 = (MR_Integer) 0;
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__create_launcher_batch_file_6_p_0(
  MR_Word Globals_7,
  MR_Word MainModuleName_8,
  MR_Word Pred_9,
  MR_Word * Succeeded_10)
{
  {
    MR_String FileName_12;
    MR_Word ProgressStream_13;
    MR_Word Verbose_14;
    MR_Word OpenResult_16;
    MR_String Var_29;
    MR_String Var_32;
    MR_Word Var_15;

    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_batch_file\'/6", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_2[4])), MainModuleName_8, &FileName_12);
    libs__globals__get_progress_output_stream_5_p_0(Globals_7, MainModuleName_8, &ProgressStream_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 66, &Verbose_14);
    Var_32 = mercury__string__f_43_43_2_f_0(FileName_12, (MR_String) "\'...\n");
    Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating batch file \140", Var_32);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_14, Var_29);
    mercury__io__remove_file_4_p_0(FileName_12, &Var_15);
    mercury__io__open_output_4_p_0(FileName_12, &OpenResult_16);
    if (((MR_tag((MR_Word) OpenResult_16)) == (MR_Integer) 1))
    {
      MR_Word Message_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenResult_16, (MR_Integer) 0))));
      MR_String Var_37;

      Var_37 = mercury__io__error_message_1_f_0(Message_18);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_batch_file\'/6", Var_37);
        return;
      }
    }
    else
    {
      MR_Word Stream_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_16, (MR_Integer) 0))));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_9, (MR_Integer) 1))));
      MR_Box conv1_STATE_VARIABLE_IO_38_38;

      func_0(((MR_Box) (Pred_9)), ((MR_Box) (Stream_17)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_38_38);
      mercury__io__close_output_3_p_0(Stream_17);
      *Succeeded_10 = (MR_Integer) 1;
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__create_launcher_shell_script_6_p_0(
  MR_Word Globals_7,
  MR_Word MainModuleName_8,
  MR_Word Pred_9,
  MR_Word * Succeeded_10)
{
  {
    MR_bool succeeded;
    MR_String FileName_12;
    MR_Word ProgressStream_13;
    MR_Word Verbose_14;
    MR_Word OpenResult_16;
    MR_String Var_31;
    MR_String Var_34;
    MR_Word Var_15;

    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_2[3])), MainModuleName_8, &FileName_12);
    libs__globals__get_progress_output_stream_5_p_0(Globals_7, MainModuleName_8, &ProgressStream_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 66, &Verbose_14);
    Var_34 = mercury__string__f_43_43_2_f_0(FileName_12, (MR_String) "\'...\n");
    Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", Var_34);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_14, Var_31);
    mercury__io__remove_file_4_p_0(FileName_12, &Var_15);
    mercury__io__open_output_4_p_0(FileName_12, &OpenResult_16);
    if (((MR_tag((MR_Word) OpenResult_16)) == (MR_Integer) 1))
    {
      MR_String Var_39;
      MR_Word Message_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenResult_16, (MR_Integer) 0))));

      Var_39 = mercury__io__error_message_1_f_0(Message_51);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", Var_39);
        return;
      }
    }
    else
    {
      MR_Word Stream_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_16, (MR_Integer) 0))));
      MR_Word ChmodResult_18;
      MR_String Var_42;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_9, (MR_Integer) 1))));
      MR_Box conv1_STATE_VARIABLE_IO_40_40;

      func_0(((MR_Box) (Pred_9)), ((MR_Box) (Stream_17)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_40_40);
      mercury__io__close_output_3_p_0(Stream_17);
      Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", FileName_12);
      mercury__io__call_system_4_p_0(Var_42, &ChmodResult_18);
      if (((MR_tag((MR_Word) ChmodResult_18)) == (MR_Integer) 1))
      {
        MR_Word Message_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ChmodResult_18, (MR_Integer) 0))));
        MR_String Var_46;

        Var_46 = mercury__io__error_message_1_f_0(Message_20);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", Var_46);
          return;
        }
      }
      else
      {
        MR_Integer Status_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ChmodResult_18, (MR_Integer) 0))));

        succeeded = (Status_19 == (MR_Integer) 0);
        if (succeeded)
        {
          *Succeeded_10 = (MR_Integer) 1;
          libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_14, (MR_String) "% done.\n");
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_String) "chmod exit status != 0");
            return;
          }
      }
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__get_env_classpath_3_p_0(
  MR_String * Classpath_4)
{
  {
    MR_Word MaybeCP_6;

    mercury__io__get_environment_var_4_p_0((MR_String) "CLASSPATH", &MaybeCP_6);
    if ((MaybeCP_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeJCP_7;

      mercury__io__get_environment_var_4_p_0((MR_String) "java.class.path", &MaybeJCP_7);
      if ((MaybeJCP_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *Classpath_4 = (MR_String) "";
      else
        *Classpath_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeJCP_7, (MR_Integer) 0))));
    }
    else
      *Classpath_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeCP_6, (MR_Integer) 0))));
  }
}

void MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(
  MR_Word Globals_4,
  MR_String ClassFiles_5,
  MR_String * ListClassFiles_6)
{
  {
    MR_Word UseSubdirs_7;
    MR_Word UseGradeSubdirs_8;
    MR_Word AnySubdirs_9;

    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 682, &UseSubdirs_7);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 683, &UseGradeSubdirs_8);
    AnySubdirs_9 = mercury__bool__or_2_f_0(UseSubdirs_7, UseGradeSubdirs_8);
    switch (AnySubdirs_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ListClassFiles_6 = ClassFiles_5;
        break;
      case (MR_Integer) 1:
        {
          MR_String ClassSubdir_10;
          MR_String Var_14;
          MR_String Var_15;
          MR_String Var_17;
          MR_String Var_19;
          MR_String Var_20;
          MR_String Var_22;
          MR_String Var_24;

          parse_tree__file_names__get_class_dir_name_2_p_0(Globals_4, &ClassSubdir_10);
          Var_24 = mercury__string__f_43_43_2_f_0(ClassSubdir_10, (MR_String) "/| |\'\140");
          Var_22 = mercury__string__f_43_43_2_f_0((MR_String) " | sed \'s| \'", Var_24);
          Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_22);
          Var_19 = mercury__string__f_43_43_2_f_0(ClassFiles_5, Var_20);
          Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\140echo \" ", Var_19);
          Var_15 = mercury__string__f_43_43_2_f_0((MR_String) " \\\n", Var_17);
          Var_14 = mercury__string__f_43_43_2_f_0(ClassSubdir_10, Var_15);
          *ListClassFiles_6 = mercury__string__f_43_43_2_f_0((MR_String) "-C ", Var_14);
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv4_HeadVar__3_3;

    conv4_HeadVar__3_3 = mercury__string__remove_prefix_if_present_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__module_cmds__file_error_is_relevant_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Continue_14;
    MR_Word conv1_STATE_VARIABLE_Acc_19;

    parse_tree__module_cmds__accumulate_nested_class_files_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_Continue_14, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_Acc_19);
    *wrapper_arg_4 = ((MR_Box) (conv2_Continue_14));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_Acc_19));
  }
}

static MR_bool MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
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
}

void MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0(
  MR_Word Globals_7,
  MR_Word MainClassFiles_8,
  MR_String * ClassSubDir_9,
  MR_Word * ListClassFiles_10)
{
  {
    MR_bool succeeded;
    MR_Word UseSubdirs_12;
    MR_Word UseGradeSubdirs_13;
    MR_Word AnySubdirs_14;
    MR_Word NestedClassPrefixes_15;
    MR_Word NestedClassPrefixesSet_16;
    MR_String SearchDir_17;
    MR_Word NestedClassFiles_20;
    MR_Word Errors_21;
    MR_Word RelevantErrors_22;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Box conv3_NestedClassFiles_20;

    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 682, &UseSubdirs_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 683, &UseGradeSubdirs_13);
    AnySubdirs_14 = mercury__bool__or_2_f_0(UseSubdirs_12, UseGradeSubdirs_13);
    switch (AnySubdirs_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ClassSubDir_9 = mercury__dir__this_directory_0_f_0();
        break;
      case (MR_Integer) 1:
        parse_tree__file_names__get_class_dir_name_2_p_0(Globals_7, ClassSubDir_9);
        break;
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_cmds_scalar_common_6[1]), MainClassFiles_8, &NestedClassPrefixes_15);
    NestedClassPrefixesSet_16 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NestedClassPrefixes_15);
    SearchDir_17 = mercury__dir__f_slash_2_f_0(*ClassSubDir_9, (MR_String) "jmercury");
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (parse_tree__module_cmds__list_class_files_for_jar_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (NestedClassPrefixesSet_16));
    }
    mercury__dir__general_foldl2_8_p_0((MR_Word) (&parse_tree__module_cmds_scalar_common_1[0]), (MR_Word) (&parse_tree__module_cmds_scalar_common_1[2]), Var_38, SearchDir_17, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_NestedClassFiles_20, &Errors_21);
    NestedClassFiles_20 = ((MR_Word) (conv3_NestedClassFiles_20));
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (parse_tree__module_cmds__list_class_files_for_jar_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (NestedClassPrefixesSet_16));
    }
    mercury__list__filter_3_p_0((MR_Word) (&mercury__dir__dir__type_ctor_info_file_error_0), Var_41, Errors_21, &RelevantErrors_22);
    if ((RelevantErrors_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word AllClassFiles0_23;
      MR_Word AllClassFiles_24;
      MR_String Var_63;

      AllClassFiles0_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MainClassFiles_8, NestedClassFiles_20);
      Var_63 = mercury__dir__this_directory_0_f_0();
      succeeded = (strcmp(*ClassSubDir_9, Var_63) == 0);
      if (succeeded)
        AllClassFiles_24 = AllClassFiles0_23;
      else
      {
        MR_String ClassSubDirSep_25;
        MR_Word Var_46;

        ClassSubDirSep_25 = mercury__dir__f_slash_2_f_0(*ClassSubDir_9, (MR_String) "");
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (parse_tree__module_cmds__list_class_files_for_jar_6_p_0_4));
          MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (ClassSubDirSep_25));
        }
        AllClassFiles_24 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_46, AllClassFiles0_23);
      }
      mercury__list__sort_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllClassFiles_24, ListClassFiles_10);
    }
    else
    {
      MR_Word Error_28;
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RelevantErrors_22, (MR_Integer) 0))));
      MR_String Var_44;

      Error_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 2))));
      Var_44 = mercury__io__error_message_1_f_0(Error_28);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.list_class_files_for_jar\'/6", Var_44);
        return;
      }
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__create_java_shell_script_5_p_0(
  MR_Word Globals_6,
  MR_Word MainModuleName_7,
  MR_Word * Succeeded_8)
{
  {
    MR_bool succeeded;
    MR_String JarFileName_11;
    MR_Word TargetEnvType_12;

    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_6, (MR_String) "predicate \140parse_tree.module_cmds.create_java_shell_script\'/5", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_2[1])), MainModuleName_7, &JarFileName_11);
    libs__globals__get_target_env_type_2_p_0(Globals_6, &TargetEnvType_12);
    switch (TargetEnvType_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_String FileName_42;
          MR_Word ProgressStream_43;
          MR_Word Verbose_44;
          MR_Word OpenResult_46;
          MR_String Var_59;
          MR_String Var_62;
          MR_Word Var_45;

          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_6, (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_2[3])), MainModuleName_7, &FileName_42);
          libs__globals__get_progress_output_stream_5_p_0(Globals_6, MainModuleName_7, &ProgressStream_43);
          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 66, &Verbose_44);
          Var_62 = mercury__string__f_43_43_2_f_0(FileName_42, (MR_String) "\'...\n");
          Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", Var_62);
          libs__file_util__maybe_write_string_5_p_0(ProgressStream_43, Verbose_44, Var_59);
          mercury__io__remove_file_4_p_0(FileName_42, &Var_45);
          mercury__io__open_output_4_p_0(FileName_42, &OpenResult_46);
          if (((MR_tag((MR_Word) OpenResult_46)) == (MR_Integer) 1))
          {
            MR_String Var_67;
            MR_Word Message_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenResult_46, (MR_Integer) 0))));

            Var_67 = mercury__io__error_message_1_f_0(Message_79);
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", Var_67);
              return;
            }
          }
          else
          {
            MR_Word Stream_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_46, (MR_Integer) 0))));
            MR_Word ChmodResult_48;
            MR_String Var_70;

            parse_tree__module_cmds__write_java_shell_script_6_p_0(Globals_6, MainModuleName_7, JarFileName_11, Stream_47);
            mercury__io__close_output_3_p_0(Stream_47);
            Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", FileName_42);
            mercury__io__call_system_4_p_0(Var_70, &ChmodResult_48);
            if (((MR_tag((MR_Word) ChmodResult_48)) == (MR_Integer) 1))
            {
              MR_Word Message_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ChmodResult_48, (MR_Integer) 0))));
              MR_String Var_74;

              Var_74 = mercury__io__error_message_1_f_0(Message_50);
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", Var_74);
                return;
              }
            }
            else
            {
              MR_Integer Status_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ChmodResult_48, (MR_Integer) 0))));

              succeeded = (Status_49 == (MR_Integer) 0);
              if (succeeded)
              {
                *Succeeded_8 = (MR_Integer) 1;
                libs__file_util__maybe_write_string_5_p_0(ProgressStream_43, Verbose_44, (MR_String) "% done.\n");
              }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_String) "chmod exit status != 0");
                  return;
                }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_115_104_101_108_108_95_115_99_114_105_112_116_95_95_104_111_51_95_95_91_54_93_95_48_6_p_0(Globals_6, MainModuleName_7, JarFileName_11, Globals_6, MainModuleName_7, Succeeded_8);
        break;
      case (MR_Integer) 4:
      case (MR_Integer) 3:
        parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_49_95_95_91_54_93_95_48_6_p_0(Globals_6, MainModuleName_7, JarFileName_11, Globals_6, MainModuleName_7, Succeeded_8);
        break;
    }
  }
}

static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_115_104_101_108_108_95_115_99_114_105_112_116_95_95_104_111_51_95_95_91_54_93_95_48_6_p_0(
  MR_Word Var_52,
  MR_Word Var_53,
  MR_String Var_54,
  MR_Word Globals_7,
  MR_Word MainModuleName_8,
  MR_Word * Succeeded_10)
{
  {
    MR_bool succeeded;
    MR_String FileName_12;
    MR_Word ProgressStream_13;
    MR_Word Verbose_14;
    MR_Word OpenResult_16;
    MR_String Var_31;
    MR_String Var_34;
    MR_Word Var_15;

    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_2[3])), MainModuleName_8, &FileName_12);
    libs__globals__get_progress_output_stream_5_p_0(Globals_7, MainModuleName_8, &ProgressStream_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 66, &Verbose_14);
    Var_34 = mercury__string__f_43_43_2_f_0(FileName_12, (MR_String) "\'...\n");
    Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", Var_34);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_14, Var_31);
    mercury__io__remove_file_4_p_0(FileName_12, &Var_15);
    mercury__io__open_output_4_p_0(FileName_12, &OpenResult_16);
    if (((MR_tag((MR_Word) OpenResult_16)) == (MR_Integer) 1))
    {
      MR_String Var_39;
      MR_Word Message_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenResult_16, (MR_Integer) 0))));

      Var_39 = mercury__io__error_message_1_f_0(Message_51);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", Var_39);
        return;
      }
    }
    else
    {
      MR_Word Stream_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_16, (MR_Integer) 0))));
      MR_Word ChmodResult_18;
      MR_String Var_42;

      parse_tree__module_cmds__write_java_msys_shell_script_6_p_0(Var_52, Var_53, Var_54, Stream_17);
      mercury__io__close_output_3_p_0(Stream_17);
      Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", FileName_12);
      mercury__io__call_system_4_p_0(Var_42, &ChmodResult_18);
      if (((MR_tag((MR_Word) ChmodResult_18)) == (MR_Integer) 1))
      {
        MR_Word Message_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ChmodResult_18, (MR_Integer) 0))));
        MR_String Var_46;

        Var_46 = mercury__io__error_message_1_f_0(Message_20);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", Var_46);
          return;
        }
      }
      else
      {
        MR_Integer Status_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ChmodResult_18, (MR_Integer) 0))));

        succeeded = (Status_19 == (MR_Integer) 0);
        if (succeeded)
        {
          *Succeeded_10 = (MR_Integer) 1;
          libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_14, (MR_String) "% done.\n");
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_String) "chmod exit status != 0");
            return;
          }
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__module_cmds__write_java_msys_shell_script_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_LambdaHeadVar__2_34;

    conv0_LambdaHeadVar__2_34 = parse_tree__module_cmds__IntroducedFrom__func__write_java_msys_shell_script__899__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_34));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__module_cmds__write_java_msys_shell_script_6_p_0(
  MR_Word Globals_7,
  MR_Word MainModuleName_8,
  MR_String JarFileName_9,
  MR_Word Stream_10)
{
  {
    MR_Word MercuryStdLibs_12;
    MR_Word UserClasspath_13;
    MR_Word Java_Incl_Dirs0_14;
    MR_Word Java_Incl_Dirs_15;
    MR_String ClassPath_17;
    MR_String Java_18;
    MR_String ClassName_19;
    MR_Word Var_23;
    MR_String Var_24;
    MR_String Var_26;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_41;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_62;

    parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(Globals_7, &MercuryStdLibs_12);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 558, &UserClasspath_13);
    Var_26 = mercury__string__f_43_43_2_f_0(JarFileName_9, (MR_String) "\"");
    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "\"\044DIR/", Var_26);
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) ((MR_String) "\044CLASSPATH"));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (UserClasspath_13));
    }
    Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercuryStdLibs_12, Var_30);
    Java_Incl_Dirs0_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, Var_29);
    Java_Incl_Dirs_15 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_cmds_scalar_common_6[0]), Java_Incl_Dirs0_14);
    ClassPath_17 = mercury__string__join_list_2_f_0((MR_String) "\\;", Java_Incl_Dirs_15);
    libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 555, &Java_18);
    parse_tree__java_names__mangle_sym_name_for_java_4_p_0(MainModuleName_8, (MR_Integer) 0, (MR_String) ".", &ClassName_19);
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (ClassName_19));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[3])));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) ((MR_String) "exec \"\044JAVA\" jmercury."));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) ((MR_String) "}\n"));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Java_18));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) ((MR_String) "JAVA=\044{JAVA:-"));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) ((MR_String) "export CLASSPATH\n"));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (ClassPath_17));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) ((MR_String) "CLASSPATH="));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) ((MR_String) "DIR=\044( cd \"\044{DIR}\" && pwd -W )\n"));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) ((MR_String) "DIR=\044{0%/*}\n"));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
    }
    mercury__io__write_strings_4_p_0(Stream_10, Var_41);
  }
}

static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_49_95_95_91_54_93_95_48_6_p_0(
  MR_Word Var_40,
  MR_Word Var_41,
  MR_String Var_42,
  MR_Word Globals_7,
  MR_Word MainModuleName_8,
  MR_Word * Succeeded_10)
{
  {
    MR_String FileName_12;
    MR_Word ProgressStream_13;
    MR_Word Verbose_14;
    MR_Word OpenResult_16;
    MR_String Var_29;
    MR_String Var_32;
    MR_Word Var_15;

    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_batch_file\'/6", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_2[4])), MainModuleName_8, &FileName_12);
    libs__globals__get_progress_output_stream_5_p_0(Globals_7, MainModuleName_8, &ProgressStream_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 66, &Verbose_14);
    Var_32 = mercury__string__f_43_43_2_f_0(FileName_12, (MR_String) "\'...\n");
    Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating batch file \140", Var_32);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_14, Var_29);
    mercury__io__remove_file_4_p_0(FileName_12, &Var_15);
    mercury__io__open_output_4_p_0(FileName_12, &OpenResult_16);
    if (((MR_tag((MR_Word) OpenResult_16)) == (MR_Integer) 1))
    {
      MR_Word Message_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenResult_16, (MR_Integer) 0))));
      MR_String Var_37;

      Var_37 = mercury__io__error_message_1_f_0(Message_18);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_cmds.create_launcher_batch_file\'/6", Var_37);
        return;
      }
    }
    else
    {
      MR_Word Stream_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_16, (MR_Integer) 0))));

      parse_tree__module_cmds__write_java_batch_file_6_p_0(Var_40, Var_41, Var_42, Stream_17);
      mercury__io__close_output_3_p_0(Stream_17);
      *Succeeded_10 = (MR_Integer) 1;
    }
  }
}

static void MR_CALL 
parse_tree__module_cmds__write_java_batch_file_6_p_0(
  MR_Word Globals_7,
  MR_Word MainModuleName_8,
  MR_String JarFileName_9,
  MR_Word Stream_10)
{
  {
    MR_Word MercuryStdLibs_12;
    MR_Word UserClasspath_13;
    MR_Word Java_Incl_Dirs_14;
    MR_String ClassPath_15;
    MR_String Java_16;
    MR_String ClassName_17;
    MR_Word Var_21;
    MR_String Var_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_49;

    parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(Globals_7, &MercuryStdLibs_12);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 558, &UserClasspath_13);
    Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "%DIR%\\", JarFileName_9);
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) ((MR_String) "%CLASSPATH%"));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (UserClasspath_13));
    }
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercuryStdLibs_12, Var_26);
    Java_Incl_Dirs_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, Var_25);
    ClassPath_15 = mercury__string__join_list_2_f_0((MR_String) ";", Java_Incl_Dirs_14);
    libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 555, &Java_16);
    parse_tree__java_names__mangle_sym_name_for_java_4_p_0(MainModuleName_8, (MR_Integer) 0, (MR_String) ".", &ClassName_17);
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (ClassName_17));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[4])));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) ((MR_String) " jmercury."));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Java_16));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (ClassPath_15));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_String) "set CLASSPATH="));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) ((MR_String) "set DIR=%~dp0\n"));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) ((MR_String) "setlocal\n"));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) ((MR_String) "rem Automatically generated by the Mercury compiler.\n"));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((MR_String) "\100echo off\n"));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    mercury__io__write_strings_4_p_0(Stream_10, Var_32);
  }
}

static void MR_CALL 
parse_tree__module_cmds__write_java_shell_script_6_p_0(
  MR_Word Globals_7,
  MR_Word MainModuleName_8,
  MR_String JarFileName_9,
  MR_Word Stream_10)
{
  {
    MR_Word MaybeStage2Base_12;
    MR_Word MercuryStdLibs_13;
    MR_Word UserClasspath_15;
    MR_Word Java_Incl_Dirs_16;
    MR_String ClassPath_17;
    MR_String Java_18;
    MR_String ClassName_19;
    MR_Word Var_31;
    MR_String Var_32;
    MR_String Var_34;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_64;
    MR_Word Var_66;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_71;
    MR_Word Var_73;

    mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_STAGE2_LAUNCHER_BASE", &MaybeStage2Base_12);
    if ((MaybeStage2Base_12 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(Globals_7, &MercuryStdLibs_13);
    else
    {
      MR_String Stage2Base_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStage2Base_12, (MR_Integer) 0))));
      MR_String Var_24;
      MR_Word Var_26;
      MR_String Var_27;

      Var_24 = mercury__dir__f_slash_2_f_0(Stage2Base_14, (MR_String) "library/mer_rt.jar");
      Var_27 = mercury__dir__f_slash_2_f_0(Stage2Base_14, (MR_String) "library/mer_std.jar");
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MercuryStdLibs_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MercuryStdLibs_13, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), MercuryStdLibs_13, 1) = ((MR_Box) (Var_26));
      }
    }
    libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 558, &UserClasspath_15);
    Var_34 = mercury__string__f_43_43_2_f_0(JarFileName_9, (MR_String) "\"");
    Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "\"\044DIR/", Var_34);
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) ((MR_String) "\044CLASSPATH"));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (UserClasspath_15));
    }
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercuryStdLibs_13, Var_38);
    Java_Incl_Dirs_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_31, Var_37);
    ClassPath_17 = mercury__string__join_list_2_f_0((MR_String) "\044{SEP}", Java_Incl_Dirs_16);
    libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 555, &Java_18);
    parse_tree__java_names__mangle_sym_name_for_java_4_p_0(MainModuleName_8, (MR_Integer) 0, (MR_String) ".", &ClassName_19);
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (ClassName_19));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[3])));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) ((MR_String) "exec \"\044JAVA\" jmercury."));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) ((MR_String) "}\n"));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Java_18));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_69));
    }
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) ((MR_String) "JAVA=\044{JAVA:-"));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_68));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) ((MR_String) "export CLASSPATH\n"));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_66));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (ClassPath_17));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) ((MR_String) "CLASSPATH="));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) ((MR_String) "esac\n"));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) ((MR_String) "   *)  SEP=\';\' ;;\n"));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) ((MR_String) "   \'\') SEP=\':\' ;;\n"));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) ((MR_String) "case \044WINDIR in\n"));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) ((MR_String) "DIR=\044( cd \"\044{DIR}\" && pwd -P )\n"));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) ((MR_String) "DIR=\044{0%/*}\n"));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
    }
    mercury__io__write_strings_4_p_0(Stream_10, Var_44);
  }
}

void MR_CALL 
parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(
  MR_Word Globals_3,
  MR_Word * STATE_VARIABLE_StdLibs_9)
{
  {
    MR_Word MaybeStdlibDir_5;

    libs__globals__lookup_maybe_string_option_3_p_0(Globals_3, (MR_Integer) 588, &MaybeStdlibDir_5);
    if ((MaybeStdlibDir_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_StdLibs_9 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String StdLibDir_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStdlibDir_5, (MR_Integer) 0))));
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
      libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 273, &SourceDebug_8);
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
}

void MR_CALL 
parse_tree__module_cmds__make_command_string_3_p_0(
  MR_String String0_4,
  MR_Word QuoteType_5,
  MR_String * String_6)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL parse_tree__module_cmds__make_command_string_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef MR_WIN32
    SUCCESS_INDICATOR = 1;
#else
    SUCCESS_INDICATOR = 0;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String Quote_7;
      MR_Word Var_8;
      MR_Word Var_10;
      MR_Word Var_11;
      MR_Word Var_12;

      switch (QuoteType_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Quote_7 = (MR_String) " \"";
          break;
        case (MR_Integer) 0:
          Quote_7 = (MR_String) " \'";
          break;
      }
      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Quote_7));
        MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (String0_4));
        MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_12));
      }
      {
        Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (Quote_7));
        MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (Var_11));
      }
      {
        Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) ((MR_String) "sh -c "));
        MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_10));
      }
      mercury__string__append_list_2_p_0(Var_8, String_6);
    }
    else
      *String_6 = String0_4;
  }
}

void MR_CALL 
parse_tree__module_cmds__invoke_system_command_9_p_0(
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word CmdOutputStream_13,
  MR_Word Verbosity_14,
  MR_String Command_15,
  MR_Word * Succeeded_16)
{
  parse_tree__module_cmds__invoke_system_command_maybe_filter_output_10_p_0(Globals_10, ProgressStream_11, ErrorStream_12, CmdOutputStream_13, Verbosity_14, Command_15, (MR_Word) ((MR_Unsigned) 0U), Succeeded_16);
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
parse_tree__module_cmds__touch_interface_datestamp_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word ModuleName_12,
  MR_Word OtherExt_13,
  MR_Word * Succeeded_14)
{
  {
    MR_String OutputFileName_16;
    MR_Word Var_21;

    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (OtherExt_13));
    }
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.module_cmds.touch_interface_datestamp\'/8", (MR_Integer) 0, Var_21, ModuleName_12, &OutputFileName_16);
    parse_tree__module_cmds__touch_datestamp_7_p_0(Globals_9, ProgressStream_10, ErrorStream_11, OutputFileName_16, Succeeded_14);
  }
}

void MR_CALL 
parse_tree__module_cmds__touch_datestamp_7_p_0(
  MR_Word Globals_8,
  MR_Word ProgressStream_9,
  MR_Word ErrorStream_10,
  MR_String OutputFileName_11,
  MR_Word * Succeeded_12)
{
  {
    MR_Word Verbose_14;
    MR_Word Result_15;
    MR_String Var_22;
    MR_String Var_25;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 66, &Verbose_14);
    Var_25 = mercury__string__f_43_43_2_f_0(OutputFileName_11, (MR_String) "\'... ");
    Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "% Touching \140", Var_25);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_14, Var_22);
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_9, Verbose_14);
    mercury__io__open_output_4_p_0(OutputFileName_11, &Result_15);
    if (((MR_tag((MR_Word) Result_15)) == (MR_Integer) 1))
    {
      MR_Word IOError_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_15, (MR_Integer) 0))));
      MR_String IOErrorMessage_18;

      mercury__io__error_message_2_p_0(IOError_17, &IOErrorMessage_18);
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\nError opening \140");
      mercury__io__write_string_4_p_0(ErrorStream_10, OutputFileName_11);
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\' for output: ");
      mercury__io__write_string_4_p_0(ErrorStream_10, IOErrorMessage_18);
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) ".\n");
      *Succeeded_12 = (MR_Integer) 0;
    }
    else
    {
      MR_Word OutputStream_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_15, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(OutputStream_16, (MR_String) "\n");
      mercury__io__close_output_3_p_0(OutputStream_16);
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_14, (MR_String) " done.\n");
      *Succeeded_12 = (MR_Integer) 1;
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__make_symlink_or_copy_dir_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_String SourceDirName_12,
  MR_String DestinationDirName_13,
  MR_Word * Succeeded_14)
{
  {
    MR_Word UseSymLinks_16;

    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 668, &UseSymLinks_16);
    switch (UseSymLinks_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__module_cmds__copy_dir_8_p_0(Globals_9, ProgressStream_10, ErrorStream_11, SourceDirName_12, DestinationDirName_13, Succeeded_14);
          switch (*Succeeded_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ProgName_52;

                mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_52);
                mercury__io__write_string_4_p_0(ErrorStream_11, ProgName_52);
                mercury__io__write_string_4_p_0(ErrorStream_11, (MR_String) ": error copying directory \140");
                mercury__io__write_string_4_p_0(ErrorStream_11, SourceDirName_12);
                mercury__io__write_string_4_p_0(ErrorStream_11, (MR_String) "\' to \140");
                mercury__io__write_string_4_p_0(ErrorStream_11, DestinationDirName_13);
                mercury__io__write_string_4_p_0(ErrorStream_11, (MR_String) "\'\n");
                mercury__io__flush_output_3_p_0(ErrorStream_11);
              }
              break;
            case (MR_Integer) 1:
              {
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Result_17;

          mercury__io__make_symlink_5_p_0(SourceDirName_12, DestinationDirName_13, &Result_17);
          if ((Result_17 == (MR_Word) ((MR_Unsigned) 0U)))
            *Succeeded_14 = (MR_Integer) 1;
          else
          {
            MR_Word Error_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_17, (MR_Integer) 0))));
            MR_String ProgName_19;
            MR_String Var_49;

            *Succeeded_14 = (MR_Integer) 0;
            mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_19);
            Var_49 = mercury__io__error_message_1_f_0(Error_18);
            mercury__io__write_string_4_p_0(ErrorStream_11, ProgName_19);
            mercury__io__write_string_4_p_0(ErrorStream_11, (MR_String) ": error linking \140");
            mercury__io__write_string_4_p_0(ErrorStream_11, SourceDirName_12);
            mercury__io__write_string_4_p_0(ErrorStream_11, (MR_String) "\' to \140");
            mercury__io__write_string_4_p_0(ErrorStream_11, DestinationDirName_13);
            mercury__io__write_string_4_p_0(ErrorStream_11, (MR_String) "\': ");
            mercury__io__write_string_4_p_0(ErrorStream_11, Var_49);
            mercury__io__write_string_4_p_0(ErrorStream_11, (MR_String) "\n");
            mercury__io__flush_output_3_p_0(ErrorStream_11);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__module_cmds__copy_dir_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_String Source_12,
  MR_String Destination_13,
  MR_Word * Succeeded_14)
{
  {
    MR_String Command_16;

    Command_16 = libs__file_util__make_install_dir_command_3_f_0(Globals_9, Source_12, Destination_13);
    parse_tree__module_cmds__invoke_system_command_maybe_filter_output_10_p_0(Globals_9, ProgressStream_10, ErrorStream_11, ErrorStream_11, (MR_Integer) 0, Command_16, (MR_Word) ((MR_Unsigned) 0U), Succeeded_14);
  }
}

void MR_CALL 
parse_tree__module_cmds__make_symlink_or_copy_file_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_String SourceFileName_12,
  MR_String DestinationFileName_13,
  MR_Word * Succeeded_14)
{
  {
    MR_Word UseSymLinks_16;
    MR_Word PrintCommand_17;
    MR_String LinkOrCopy_18;
    MR_Word Result_19;

    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 668, &UseSymLinks_16);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 72, &PrintCommand_17);
    switch (UseSymLinks_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          LinkOrCopy_18 = (MR_String) "copying";
          switch (PrintCommand_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "% Copying file \140");
                mercury__io__write_string_4_p_0(ProgressStream_10, SourceFileName_12);
                mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "\' -> \140");
                mercury__io__write_string_4_p_0(ProgressStream_10, DestinationFileName_13);
                mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "\'\n");
                mercury__io__flush_output_3_p_0(ProgressStream_10);
              }
              break;
          }
          parse_tree__module_cmds__copy_file_8_p_0(Globals_9, ProgressStream_10, ErrorStream_11, SourceFileName_12, DestinationFileName_13, &Result_19);
        }
        break;
      case (MR_Integer) 1:
        {
          LinkOrCopy_18 = (MR_String) "linking";
          switch (PrintCommand_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "% Linking file \140");
                mercury__io__write_string_4_p_0(ProgressStream_10, SourceFileName_12);
                mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "\' -> \140");
                mercury__io__write_string_4_p_0(ProgressStream_10, DestinationFileName_13);
                mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "\'\n");
                mercury__io__flush_output_3_p_0(ProgressStream_10);
              }
              break;
          }
          mercury__io__make_symlink_5_p_0(SourceFileName_12, DestinationFileName_13, &Result_19);
        }
        break;
    }
    if ((Result_19 == (MR_Word) ((MR_Unsigned) 0U)))
      *Succeeded_14 = (MR_Integer) 1;
    else
    {
      MR_Word Error_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_19, (MR_Integer) 0))));
      MR_String ProgName_21;
      MR_String ErrorMsg_22;

      *Succeeded_14 = (MR_Integer) 0;
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_21);
      mercury__io__error_message_2_p_0(Error_20, &ErrorMsg_22);
      mercury__io__write_string_4_p_0(ErrorStream_11, ProgName_21);
      mercury__io__write_string_4_p_0(ErrorStream_11, (MR_String) ": error ");
      mercury__io__write_string_4_p_0(ErrorStream_11, LinkOrCopy_18);
      mercury__io__write_string_4_p_0(ErrorStream_11, (MR_String) " \140");
      mercury__io__write_string_4_p_0(ErrorStream_11, SourceFileName_12);
      mercury__io__write_string_4_p_0(ErrorStream_11, (MR_String) "\' to \140");
      mercury__io__write_string_4_p_0(ErrorStream_11, DestinationFileName_13);
      mercury__io__write_string_4_p_0(ErrorStream_11, (MR_String) "\', ");
      mercury__io__write_string_4_p_0(ErrorStream_11, ErrorMsg_22);
      mercury__io__write_string_4_p_0(ErrorStream_11, (MR_String) "\n");
      mercury__io__flush_output_3_p_0(ErrorStream_11);
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__maybe_make_symlink_6_p_0(
  MR_Word Globals_7,
  MR_String LinkTarget_8,
  MR_String LinkName_9,
  MR_Word * Result_10)
{
  {
    MR_bool succeeded;
    MR_Word UseSymLinks_12;

    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 668, &UseSymLinks_12);
    switch (UseSymLinks_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Result_10 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word LinkResult_14;
          MR_Word Var_13;

          mercury__io__remove_file_recursively_4_p_0(LinkName_9, &Var_13);
          mercury__io__make_symlink_5_p_0(LinkTarget_8, LinkName_9, &LinkResult_14);
          succeeded = (LinkResult_14 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            *Result_10 = (MR_Integer) 1;
          else
            *Result_10 = (MR_Integer) 0;
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__update_interface_report_any_error_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_String OutputFileName_9,
  MR_Word * Succeeded_10)
{
  {
    MR_Word Result_26;

    parse_tree__module_cmds__update_interface_return_changed_6_p_0(Globals_7, ModuleName_8, OutputFileName_9, &Result_26);
    switch (Result_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word ErrorStream_12;

          *Succeeded_10 = (MR_Integer) 0;
          libs__globals__get_error_output_stream_5_p_0(Globals_7, ModuleName_8, &ErrorStream_12);
          libs__file_util__report_error_4_p_0(ErrorStream_12, (MR_String) "problem updating interface files.");
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        *Succeeded_10 = (MR_Integer) 1;
        break;
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__update_interface_return_succeeded_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_String OutputFileName_9,
  MR_Word * Succeeded_10)
{
  {
    MR_Word Result_12;

    parse_tree__module_cmds__update_interface_return_changed_6_p_0(Globals_7, ModuleName_8, OutputFileName_9, &Result_12);
    switch (Result_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        *Succeeded_10 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        *Succeeded_10 = (MR_Integer) 1;
        break;
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__update_interface_return_changed_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_String OutputFileName_9,
  MR_Word * Result_10)
{
  {
    MR_Word Verbose_12;
    MR_Word ProgressStream_13;
    MR_Word ErrorStream_14;
    MR_String TmpOutputFileName_15;
    MR_Word OutputFileRes_16;

    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 66, &Verbose_12);
    libs__globals__get_progress_output_stream_5_p_0(Globals_7, ModuleName_8, &ProgressStream_13);
    libs__globals__get_error_output_stream_5_p_0(Globals_7, ModuleName_8, &ErrorStream_14);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_12, (MR_String) "% Updating interface:\n");
    TmpOutputFileName_15 = mercury__string__f_43_43_2_f_0(OutputFileName_9, (MR_String) ".tmp");
    mercury__io__open_binary_input_4_p_0(OutputFileName_9, &OutputFileRes_16);
    if (((MR_tag((MR_Word) OutputFileRes_16)) == (MR_Integer) 1))
      parse_tree__module_cmds__update_interface_create_file_9_p_0(Globals_7, ProgressStream_13, ErrorStream_14, (MR_String) "been CREATED", OutputFileName_9, TmpOutputFileName_15, Result_10);
    else
    {
      MR_Word OutputFileStream_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutputFileRes_16, (MR_Integer) 0))));
      MR_Word TmpOutputFileRes_18;

      mercury__io__open_binary_input_4_p_0(TmpOutputFileName_15, &TmpOutputFileRes_18);
      if (((MR_tag((MR_Word) TmpOutputFileRes_18)) == (MR_Integer) 1))
      {
        MR_Word TmpOutputFileError_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TmpOutputFileRes_18, (MR_Integer) 0))));
        MR_String TmpOutputFileErrorMsg_28;

        mercury__io__error_message_2_p_0(TmpOutputFileError_27, &TmpOutputFileErrorMsg_28);
        *Result_10 = (MR_Integer) 2;
        mercury__io__close_binary_input_3_p_0(OutputFileStream_17);
        mercury__io__write_string_4_p_0(ErrorStream_14, (MR_String) "Error creating \140");
        mercury__io__write_string_4_p_0(ErrorStream_14, OutputFileName_9);
        mercury__io__write_string_4_p_0(ErrorStream_14, (MR_String) "\': ");
        mercury__io__write_string_4_p_0(ErrorStream_14, TmpOutputFileErrorMsg_28);
        mercury__io__write_string_4_p_0(ErrorStream_14, (MR_String) "\n");
      }
      else
      {
        MR_Word TmpOutputFileStream_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TmpOutputFileRes_18, (MR_Integer) 0))));
        MR_Word FilesDiffer_20;

        parse_tree__module_cmds__binary_input_stream_cmp_5_p_0(OutputFileStream_17, TmpOutputFileStream_19, &FilesDiffer_20);
        mercury__io__close_binary_input_3_p_0(OutputFileStream_17);
        mercury__io__close_binary_input_3_p_0(TmpOutputFileStream_19);
        if (((MR_tag((MR_Word) FilesDiffer_20)) == (MR_Integer) 1))
          parse_tree__module_cmds__update_interface_create_file_9_p_0(Globals_7, ProgressStream_13, ErrorStream_14, (MR_String) "been CREATED", OutputFileName_9, TmpOutputFileName_15, Result_10);
        else
        {
          MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FilesDiffer_20, (MR_Integer) 0))));

          if (((MR_tag((MR_Word) Var_75)) == (MR_Integer) 1))
          {
            MR_Word TmpFileError_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_75, (MR_Integer) 0))));
            MR_String TmpFileErrorMsg_24;

            mercury__io__error_message_2_p_0(TmpFileError_23, &TmpFileErrorMsg_24);
            *Result_10 = (MR_Integer) 2;
            mercury__io__write_string_4_p_0(ErrorStream_14, (MR_String) "Error reading \140");
            mercury__io__write_string_4_p_0(ErrorStream_14, TmpOutputFileName_15);
            mercury__io__write_string_4_p_0(ErrorStream_14, (MR_String) "\': ");
            mercury__io__write_string_4_p_0(ErrorStream_14, TmpFileErrorMsg_24);
            mercury__io__write_string_4_p_0(ErrorStream_14, (MR_String) "\n");
          }
          else
          {
            MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 0))));

            switch (Var_76) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String NoChangeMsg_21;
                  MR_String Var_78;
                  MR_Word Var_22;

                  *Result_10 = (MR_Integer) 1;
                  Var_78 = mercury__string__f_43_43_2_f_0(OutputFileName_9, (MR_String) "\' has not changed.\n");
                  NoChangeMsg_21 = mercury__string__f_43_43_2_f_0((MR_String) "% \140", Var_78);
                  libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_12, NoChangeMsg_21);
                  mercury__io__remove_file_4_p_0(TmpOutputFileName_15, &Var_22);
                }
                break;
              case (MR_Integer) 1:
                parse_tree__module_cmds__update_interface_create_file_9_p_0(Globals_7, ProgressStream_13, ErrorStream_14, (MR_String) "CHANGED", OutputFileName_9, TmpOutputFileName_15, Result_10);
                break;
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Continue_10;
    MR_Word conv0_Differ_12;

    parse_tree__module_cmds__binary_input_stream_cmp_2_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), &conv1_Continue_10, ((MR_Word) (wrapper_arg_3)), &conv0_Differ_12);
    *wrapper_arg_2 = ((MR_Box) (conv1_Continue_10));
    *wrapper_arg_4 = ((MR_Box) (conv0_Differ_12));
  }
}

static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_5_p_0(
  MR_Word OutputFileStream_6,
  MR_Word TmpOutputFileStream_7,
  MR_Word * FilesDiffer_8)
{
  {
    MR_bool succeeded;
    MR_Word FilesDiffer0_10;
    MR_Word Var_16;
    MR_Word Var_20;
    MR_Word Var_21;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (parse_tree__module_cmds__binary_input_stream_cmp_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (TmpOutputFileStream_7));
    }
    mercury__io__binary_input_stream_foldl2_io_maybe_stop_6_p_0((MR_Word) (&parse_tree__module_cmds_scalar_common_1[1]), OutputFileStream_6, Var_16, ((MR_Box) (&parse_tree__module_cmds_scalar_common_2[5])), &FilesDiffer0_10);
    succeeded = ((MR_tag((MR_Word) FilesDiffer0_10)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FilesDiffer0_10, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0))));
        succeeded = (Var_21 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      MR_Word TmpByteResult2_11;

      mercury__io__read_byte_4_p_0(TmpOutputFileStream_7, &TmpByteResult2_11);
      switch (MR_tag((MR_Word) TmpByteResult2_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *FilesDiffer_8 = FilesDiffer0_10;
          break;
        case (MR_Integer) 1:
          *FilesDiffer_8 = (MR_Word) (&parse_tree__module_cmds_scalar_common_2[7]);
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TmpByteResult2_11, (MR_Integer) 0))));
            MR_Word Var_23;

            {
              Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Error_13));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *FilesDiffer_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_23));
            }
          }
          break;
      }
    }
    else
      *FilesDiffer_8 = FilesDiffer0_10;
  }
}

static void MR_CALL 
parse_tree__module_cmds__update_interface_create_file_9_p_0(
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_String ChangedStr_13,
  MR_String OutputFileName_14,
  MR_String TmpOutputFileName_15,
  MR_Word * Result_16)
{
  {
    MR_Word Verbose_18;
    MR_String ChangedMsg_19;
    MR_Word MoveRes_20;
    MR_String Var_44;
    MR_String Var_46;
    MR_String Var_47;
    MR_Word Var_22;

    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 66, &Verbose_18);
    Var_44 = mercury__string__f_43_43_2_f_0(ChangedStr_13, (MR_String) ".\n");
    Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "\' has ", Var_44);
    Var_47 = mercury__string__f_43_43_2_f_0(OutputFileName_14, Var_46);
    ChangedMsg_19 = mercury__string__f_43_43_2_f_0((MR_String) "% \140", Var_47);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_18, ChangedMsg_19);
    parse_tree__module_cmds__copy_file_8_p_0(Globals_10, ProgressStream_11, ErrorStream_12, TmpOutputFileName_15, OutputFileName_14, &MoveRes_20);
    if ((MoveRes_20 == (MR_Word) ((MR_Unsigned) 0U)))
      *Result_16 = (MR_Integer) 0;
    else
    {
      MR_Word MoveError_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MoveRes_20, (MR_Integer) 0))));
      MR_String Var_40;

      *Result_16 = (MR_Integer) 2;
      Var_40 = mercury__io__error_message_1_f_0(MoveError_21);
      mercury__io__write_string_4_p_0(ErrorStream_12, (MR_String) "Error creating \140");
      mercury__io__write_string_4_p_0(ErrorStream_12, OutputFileName_14);
      mercury__io__write_string_4_p_0(ErrorStream_12, (MR_String) "\': ");
      mercury__io__write_string_4_p_0(ErrorStream_12, Var_40);
      mercury__io__write_string_4_p_0(ErrorStream_12, (MR_String) "\n");
    }
    mercury__io__remove_file_4_p_0(TmpOutputFileName_15, &Var_22);
  }
}

static void MR_CALL 
parse_tree__module_cmds__copy_file_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_byte_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__module_cmds__copy_file_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_String Source_12,
  MR_String Destination_13,
  MR_Word * Res_14)
{
  {
    MR_String Command_16;
    MR_Word Succeeded_17;

    Command_16 = libs__file_util__make_install_file_command_3_f_0(Globals_9, Source_12, Destination_13);
    parse_tree__module_cmds__invoke_system_command_maybe_filter_output_10_p_0(Globals_9, ProgressStream_10, ErrorStream_11, ErrorStream_11, (MR_Integer) 0, Command_16, (MR_Word) ((MR_Unsigned) 0U), &Succeeded_17);
    switch (Succeeded_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SourceRes_18;

          mercury__io__open_binary_input_4_p_0(Source_12, &SourceRes_18);
          if (((MR_tag((MR_Word) SourceRes_18)) == (MR_Integer) 1))
          {
            MR_Word Error_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SourceRes_18, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Res_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_34));
            }
          }
          else
          {
            MR_Word SourceStream_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SourceRes_18, (MR_Integer) 0))));
            MR_Word DestRes_20;

            mercury__io__open_binary_output_4_p_0(Destination_13, &DestRes_20);
            if (((MR_tag((MR_Word) DestRes_20)) == (MR_Integer) 1))
            {
              MR_Word Error_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DestRes_20, (MR_Integer) 0))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Res_14 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_23));
              }
            }
            else
            {
              MR_Word DestStream_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DestRes_20, (MR_Integer) 0))));
              MR_Word WriteByte_22;

              {
                WriteByte_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), WriteByte_22, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), WriteByte_22, 1) = ((MR_Box) (parse_tree__module_cmds__copy_file_8_p_0_1));
                MR_hl_field(MR_mktag(0), WriteByte_22, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), WriteByte_22, 3) = ((MR_Box) (DestStream_21));
              }
              mercury__io__binary_input_stream_foldl_io_5_p_0(SourceStream_19, WriteByte_22, Res_14);
              mercury__io__close_binary_input_3_p_0(SourceStream_19);
              mercury__io__close_binary_output_3_p_0(DestStream_21);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        *Res_14 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__invoke_system_command_maybe_filter_output_10_p_0(
  MR_Word Globals_11,
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word CmdOutputStream_14,
  MR_Word Verbosity_15,
  MR_String Command_16,
  MR_Word MaybeProcessOutput_17,
  MR_Word * Succeeded_18)
{
  {
    MR_bool succeeded;
    MR_Integer OldStatus_20;
    MR_Word Verbose_21;
    MR_Word PrintCommand_22;
    MR_Word TmpFileResult_23;
    MR_String TmpFile_24;
    MR_Word CommandSucceeded_28;
    MR_String ProcessedTmpFile_35;
    MR_Word ProcessOutputSucceeded_41;
    MR_Word TmpFileRes_47;
    MR_String ProcessOutput_33;
    MR_Word Var_50;

    mercury__io__get_exit_status_3_p_0(&OldStatus_20);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 66, &Verbose_21);
    switch (Verbosity_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        PrintCommand_22 = Verbose_21;
        break;
      case (MR_Integer) 1:
        libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 72, &PrintCommand_22);
        break;
    }
    switch (PrintCommand_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(ProgressStream_12, (MR_String) "%s Invoking system command \140");
          mercury__io__write_string_4_p_0(ProgressStream_12, Command_16);
          mercury__io__write_string_4_p_0(ProgressStream_12, (MR_String) "\'...\n");
          mercury__io__flush_output_3_p_0(ProgressStream_12);
        }
        break;
    }
    mercury__io__make_temp_file_3_p_0(&TmpFileResult_23);
    if (((MR_tag((MR_Word) TmpFileResult_23)) == (MR_Integer) 1))
    {
      MR_String Var_63;
      MR_String Var_66;
      MR_Word Error_142 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TmpFileResult_23, (MR_Integer) 0))));

      Var_66 = mercury__io__error_message_1_f_0(Error_142);
      Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "Could not create temporary file: ", Var_66);
      libs__file_util__report_error_4_p_0(ErrorStream_13, Var_63);
      TmpFile_24 = (MR_String) "";
      CommandSucceeded_28 = (MR_Integer) 0;
    }
    else
    {
      MR_String CommandRedirected_25;
      MR_Word Result_26;

      TmpFile_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), TmpFileResult_23, (MR_Integer) 0))));
      succeeded = parse_tree__module_cmds__use_dotnet_0_p_0();
      if (succeeded)
        CommandRedirected_25 = Command_16;
      else
      {
        succeeded = parse_tree__module_cmds__use_win32_0_p_0();
        if (succeeded)
        {
          MR_String Var_150;

          Var_150 = mercury__string__f_43_43_2_f_0((MR_String) " > ", TmpFile_24);
          CommandRedirected_25 = mercury__string__f_43_43_2_f_0(Command_16, Var_150);
        }
        else
        {
          MR_String Var_152;
          MR_String Var_154;

          Var_152 = mercury__string__f_43_43_2_f_0(TmpFile_24, (MR_String) " 2>&1");
          Var_154 = mercury__string__f_43_43_2_f_0((MR_String) " > ", Var_152);
          CommandRedirected_25 = mercury__string__f_43_43_2_f_0(Command_16, Var_154);
        }
      }
      mercury__io__call_system_return_signal_4_p_0(CommandRedirected_25, &Result_26);
      if (((MR_tag((MR_Word) Result_26)) == (MR_Integer) 1))
      {
        MR_Word Error_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_26, (MR_Integer) 0))));
        MR_String Var_80;

        Var_80 = mercury__io__error_message_1_f_0(Error_32);
        libs__file_util__report_error_4_p_0(ErrorStream_13, Var_80);
        CommandSucceeded_28 = (MR_Integer) 0;
      }
      else
      {
        MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_26, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) Var_143)) == (MR_Integer) 0))
        {
          MR_Integer Status_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_143, (MR_Integer) 0))));

          libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, PrintCommand_22, (MR_String) "% done.\n");
          succeeded = (Status_27 == (MR_Integer) 0);
          if (succeeded)
            CommandSucceeded_28 = (MR_Integer) 1;
          else
            CommandSucceeded_28 = (MR_Integer) 0;
        }
        else
        {
          MR_Integer Signal_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_143, (MR_Integer) 0))));
          MR_String ErrorMsg_30;
          MR_Word StdOut_31;
          MR_String Var_156;
          MR_String Var_163;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__module_cmds_scalar_common_2[0]), Signal_29, &Var_156);
          Var_163 = mercury__string__f_43_43_2_f_0(Var_156, (MR_String) ".");
          ErrorMsg_30 = mercury__string__f_43_43_2_f_0((MR_String) "system command received signal ", Var_163);
          libs__file_util__report_error_4_p_0(ErrorStream_13, ErrorMsg_30);
          mercury__io__stdout_stream_3_p_0(&StdOut_31);
          libs__file_util__report_error_4_p_0(StdOut_31, ErrorMsg_30);
          libs__process_util__raise_signal_3_p_0(Signal_29);
          CommandSucceeded_28 = (MR_Integer) 0;
        }
      }
    }
    succeeded = (MaybeProcessOutput_17 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ProcessOutput_33 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeProcessOutput_17, (MR_Integer) 0))));
      succeeded = parse_tree__module_cmds__use_dotnet_0_p_0();
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word ProcessedTmpFileResult_34;

      mercury__io__make_temp_file_3_p_0(&ProcessedTmpFileResult_34);
      if (((MR_tag((MR_Word) ProcessedTmpFileResult_34)) == (MR_Integer) 1))
      {
        MR_Word ProcessTmpError_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcessedTmpFileResult_34, (MR_Integer) 0))));
        MR_String ProcessTmpErrorMsg_46;

        ProcessTmpErrorMsg_46 = mercury__io__error_message_1_f_0(ProcessTmpError_45);
        libs__file_util__report_error_4_p_0(ErrorStream_13, ProcessTmpErrorMsg_46);
        ProcessOutputSucceeded_41 = (MR_Integer) 0;
        ProcessedTmpFile_35 = (MR_String) "";
      }
      else
      {
        MR_String ProcessOutputRedirected_37;
        MR_Word ProcessOutputResult_38;
        MR_Word Var_39;

        ProcessedTmpFile_35 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcessedTmpFileResult_34, (MR_Integer) 0))));
        succeeded = parse_tree__module_cmds__use_win32_0_p_0();
        if (succeeded)
        {
          MR_Word SystemEnvType_36;

          libs__globals__get_system_env_type_2_p_0(Globals_11, &SystemEnvType_36);
          succeeded = (SystemEnvType_36 == (MR_Integer) 4);
          if (succeeded)
          {
            MR_String Var_166;
            MR_String Var_168;
            MR_String Var_169;
            MR_String Var_171;
            MR_String Var_172;

            Var_166 = mercury__string__f_43_43_2_f_0(ProcessedTmpFile_35, (MR_String) " 2>&1");
            Var_168 = mercury__string__f_43_43_2_f_0((MR_String) " > ", Var_166);
            Var_169 = mercury__string__f_43_43_2_f_0(ProcessOutput_33, Var_168);
            Var_171 = mercury__string__f_43_43_2_f_0((MR_String) " | ", Var_169);
            Var_172 = mercury__string__f_43_43_2_f_0(TmpFile_24, Var_171);
            ProcessOutputRedirected_37 = mercury__string__f_43_43_2_f_0((MR_String) "Get-context ", Var_172);
          }
          else
          {
            MR_String Var_175;
            MR_String Var_176;
            MR_String Var_178;

            Var_175 = mercury__string__f_43_43_2_f_0((MR_String) " > ", ProcessedTmpFile_35);
            Var_176 = mercury__string__f_43_43_2_f_0(TmpFile_24, Var_175);
            Var_178 = mercury__string__f_43_43_2_f_0((MR_String) " < ", Var_176);
            ProcessOutputRedirected_37 = mercury__string__f_43_43_2_f_0(ProcessOutput_33, Var_178);
          }
        }
        else
        {
          MR_String Var_180;
          MR_String Var_182;
          MR_String Var_183;
          MR_String Var_185;

          Var_180 = mercury__string__f_43_43_2_f_0(ProcessedTmpFile_35, (MR_String) " 2>&1");
          Var_182 = mercury__string__f_43_43_2_f_0((MR_String) " > ", Var_180);
          Var_183 = mercury__string__f_43_43_2_f_0(TmpFile_24, Var_182);
          Var_185 = mercury__string__f_43_43_2_f_0((MR_String) " < ", Var_183);
          ProcessOutputRedirected_37 = mercury__string__f_43_43_2_f_0(ProcessOutput_33, Var_185);
        }
        mercury__io__call_system_return_signal_4_p_0(ProcessOutputRedirected_37, &ProcessOutputResult_38);
        mercury__io__remove_file_4_p_0(TmpFile_24, &Var_39);
        if (((MR_tag((MR_Word) ProcessOutputResult_38)) == (MR_Integer) 1))
        {
          MR_Word ProcessOutputError_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcessOutputResult_38, (MR_Integer) 0))));
          MR_String ProcessOutputErrorMsg_44;

          ProcessOutputErrorMsg_44 = mercury__io__error_message_1_f_0(ProcessOutputError_43);
          libs__file_util__report_error_4_p_0(ErrorStream_13, ProcessOutputErrorMsg_44);
          ProcessOutputSucceeded_41 = (MR_Integer) 0;
        }
        else
        {
          MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcessOutputResult_38, (MR_Integer) 0))));

          if (((MR_tag((MR_Word) Var_144)) == (MR_Integer) 0))
          {
            MR_Integer ProcessOutputStatus_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_144, (MR_Integer) 0))));

            libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, PrintCommand_22, (MR_String) "% done.\n");
            succeeded = (ProcessOutputStatus_40 == (MR_Integer) 0);
            if (succeeded)
              ProcessOutputSucceeded_41 = (MR_Integer) 1;
            else
              ProcessOutputSucceeded_41 = (MR_Integer) 0;
          }
          else
          {
            MR_Integer ProcessOutputSignal_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_144, (MR_Integer) 0))));
            MR_String Var_125;
            MR_String Var_128;
            MR_String Var_129;

            libs__process_util__raise_signal_3_p_0(ProcessOutputSignal_42);
            Var_129 = mercury__string__int_to_string_1_f_0(ProcessOutputSignal_42);
            Var_128 = mercury__string__f_43_43_2_f_0(Var_129, (MR_String) ".");
            Var_125 = mercury__string__f_43_43_2_f_0((MR_String) "system command received signal ", Var_128);
            libs__file_util__report_error_4_p_0(ErrorStream_13, Var_125);
            ProcessOutputSucceeded_41 = (MR_Integer) 0;
          }
        }
      }
    }
    else
    {
      ProcessOutputSucceeded_41 = (MR_Integer) 1;
      ProcessedTmpFile_35 = TmpFile_24;
    }
    *Succeeded_18 = libs__maybe_succeeded__and_2_f_0(CommandSucceeded_28, ProcessOutputSucceeded_41);
    mercury__io__read_named_file_as_string_4_p_0(ProcessedTmpFile_35, &TmpFileRes_47);
    if (((MR_tag((MR_Word) TmpFileRes_47)) == (MR_Integer) 1))
    {
      MR_Word TmpFileError_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TmpFileRes_47, (MR_Integer) 0))));
      MR_String Var_135;
      MR_String Var_138;

      Var_138 = mercury__io__error_message_1_f_0(TmpFileError_49);
      Var_135 = mercury__string__f_43_43_2_f_0((MR_String) "error opening command output: ", Var_138);
      libs__file_util__report_error_4_p_0(ErrorStream_13, Var_135);
    }
    else
    {
      MR_String TmpFileString_48 = ((MR_String) ((MR_hl_field(MR_mktag(0), TmpFileRes_47, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(CmdOutputStream_14, TmpFileString_48);
    }
    mercury__io__remove_file_4_p_0(ProcessedTmpFile_35, &Var_50);
    mercury__io__set_exit_status_3_p_0(OldStatus_20);
  }
}

static MR_bool MR_CALL 
parse_tree__module_cmds__use_win32_0_p_0(void)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL parse_tree__module_cmds__use_win32_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef MR_WIN32
    SUCCESS_INDICATOR = 1;
#else
    SUCCESS_INDICATOR = 0;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__module_cmds__use_dotnet_0_p_0(void)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__semidet_fail_0_p_0();
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____command_verbosity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_cmds____Unify____command_verbosity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_cmds____Compare____command_verbosity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_cmds____Compare____command_verbosity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____quote_char_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_cmds____Unify____quote_char_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_cmds____Compare____quote_char_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_cmds____Compare____quote_char_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____update_interface_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_cmds____Unify____update_interface_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_cmds____Compare____update_interface_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_cmds____Compare____update_interface_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__module_cmds__init(void)
{
}

void mercury__parse_tree__module_cmds__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__module_cmds__parse_tree__module_cmds__type_ctor_info_command_verbosity_0);
	MR_register_type_ctor_info(&parse_tree__module_cmds__parse_tree__module_cmds__type_ctor_info_quote_char_0);
	MR_register_type_ctor_info(&parse_tree__module_cmds__parse_tree__module_cmds__type_ctor_info_update_interface_result_0);
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
