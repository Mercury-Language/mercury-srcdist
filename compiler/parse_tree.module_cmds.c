/*
** Automatically generated from `module_cmds.m'
** by the Mercury compiler,
** version rotd-2017-06-02
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


/* :- module parse_tree.module_cmds. */
/* :- implementation. */

/*
INIT mercury__parse_tree__module_cmds__init
ENDINIT
*/

#include "parse_tree.module_cmds.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.compute_grade.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.process_util.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
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
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__io__pti_res_1__plain_bool__type_ctor_info_bool_0;

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_0;

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_command_verbosity_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_command_verbosity_0[2];

static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_command_verbosity_0[2];

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_0;

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_quote_char_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_quote_char_0[2];

static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_quote_char_0[2];

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_0;

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_1;

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_2;

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_update_interface_result_0[3];

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_update_interface_result_0[3];

static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_update_interface_result_0[3];

static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____command_verbosity_0_0_10001(
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
  MR_Box parse_tree__module_cmds__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_cmds____Compare____command_verbosity_0_0_10001(
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
  MR_Box parse_tree__module_cmds__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____quote_char_0_0_10001(
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
  MR_Box parse_tree__module_cmds__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_cmds____Compare____quote_char_0_0_10001(
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
  MR_Box parse_tree__module_cmds__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____update_interface_result_0_0_10001(
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
  MR_Box parse_tree__module_cmds__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_cmds____Compare____update_interface_result_0_0_10001(
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
  MR_Box parse_tree__module_cmds__wrapper_arg_3);

static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_115_104_101_108_108_95_115_99_114_105_112_116_95_95_104_111_53_95_95_91_54_93_95_48_6_p_0(
  MR_Word parse_tree__module_cmds__Var_50,
  MR_Word parse_tree__module_cmds__Var_51,
  MR_String parse_tree__module_cmds__Var_52,
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_Word parse_tree__module_cmds__MainModuleName_8,
  MR_Word * parse_tree__module_cmds__Succeeded_10);

static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_51_95_95_91_54_93_95_48_6_p_0(
  MR_Word parse_tree__module_cmds__Var_36,
  MR_Word parse_tree__module_cmds__Var_37,
  MR_String parse_tree__module_cmds__Var_38,
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_Word parse_tree__module_cmds__MainModuleName_8,
  MR_Word * parse_tree__module_cmds__Succeeded_10);

static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_49_95_95_91_53_93_95_48_6_p_0(
  MR_Word parse_tree__module_cmds__Var_36,
  MR_Word parse_tree__module_cmds__Var_37,
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_Word parse_tree__module_cmds__MainModuleName_8,
  MR_Word * parse_tree__module_cmds__Succeeded_10);

static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_110_101_115_116_101_100_95_99_108_97_115_115_95_102_105_108_101_115_95_95_91_52_93_95_48_9_p_0(
  MR_Word parse_tree__module_cmds__NestedClassPrefixes_10,
  MR_String parse_tree__module_cmds__DirName_11,
  MR_String parse_tree__module_cmds__BaseName_12,
  MR_Word * parse_tree__module_cmds__Continue_14,
  MR_Word parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19,
  MR_Word * parse_tree__module_cmds__STATE_VARIABLE_Acc_20);

static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_97_114_121_95_105_110_112_117_116_95_115_116_114_101_97_109_95_99_109_112_95_50_95_95_91_52_93_95_48_7_p_0(
  MR_Word parse_tree__module_cmds__TmpOutputFileStream_8,
  MR_Integer parse_tree__module_cmds__Byte_9,
  MR_Word * parse_tree__module_cmds__Continue_10,
  MR_Word * parse_tree__module_cmds__Differ_12);

static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_erlang_batch_file__1154__1_2_f_0(
  MR_String parse_tree__module_cmds__GradeDir_14,
  MR_String parse_tree__module_cmds__LambdaHeadVar__1_42);

static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_erlang_shell_script__1091__1_2_f_0(
  MR_String parse_tree__module_cmds__GradeDir_14,
  MR_String parse_tree__module_cmds__LambdaHeadVar__1_42);

static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_java_msys_shell_script__866__1_1_f_0(
  MR_String parse_tree__module_cmds__LambdaHeadVar__1_33);

static MR_String MR_CALL 
parse_tree__module_cmds__pa_option_3_f_0(
  MR_Word parse_tree__module_cmds__BreakLines_5,
  MR_Word parse_tree__module_cmds__Quote_6,
  MR_String parse_tree__module_cmds__Dir0_7);

static void MR_CALL 
parse_tree__module_cmds__find_erlang_library_path_6_p_0(
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_Word parse_tree__module_cmds__MercuryLibDirs_8,
  MR_String parse_tree__module_cmds__LibName_9,
  MR_String * parse_tree__module_cmds__LibPath_10);

static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_3(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

static void MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_2(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
  MR_Box * parse_tree__module_cmds__wrapper_arg_4);

static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_1(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

static void MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0(
  MR_Word parse_tree__module_cmds__Globals_6,
  MR_Word parse_tree__module_cmds__MainModuleName_7,
  MR_Word parse_tree__module_cmds__Stream_8);

static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_3(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

static void MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_2(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
  MR_Box * parse_tree__module_cmds__wrapper_arg_4);

static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_1(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

static void MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0(
  MR_Word parse_tree__module_cmds__Globals_6,
  MR_Word parse_tree__module_cmds__MainModuleName_7,
  MR_Word parse_tree__module_cmds__Stream_8);

static void MR_CALL 
parse_tree__module_cmds__accumulate_nested_class_files_9_p_0(
  MR_Word parse_tree__module_cmds__NestedClassPrefixes_10,
  MR_String parse_tree__module_cmds__DirName_11,
  MR_String parse_tree__module_cmds__BaseName_12,
  MR_Word parse_tree__module_cmds___FileType_13,
  MR_Word * parse_tree__module_cmds__Continue_14,
  MR_Word parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19,
  MR_Word * parse_tree__module_cmds__STATE_VARIABLE_Acc_20);

static MR_bool MR_CALL 
parse_tree__module_cmds__make_nested_class_prefix_2_p_0(
  MR_String parse_tree__module_cmds__ClassFileName_3,
  MR_String * parse_tree__module_cmds__ClassPrefix_4);

static void MR_CALL 
parse_tree__module_cmds__write_java_batch_file_6_p_0(
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_Word parse_tree__module_cmds__MainModuleName_8,
  MR_String parse_tree__module_cmds__JarFileName_9,
  MR_Word parse_tree__module_cmds__Stream_10);

static MR_Box MR_CALL 
parse_tree__module_cmds__write_java_msys_shell_script_6_p_0_1(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

static void MR_CALL 
parse_tree__module_cmds__write_java_msys_shell_script_6_p_0(
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_Word parse_tree__module_cmds__MainModuleName_8,
  MR_String parse_tree__module_cmds__JarFileName_9,
  MR_Word parse_tree__module_cmds__Stream_10);

static void MR_CALL 
parse_tree__module_cmds__write_java_shell_script_6_p_0(
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_Word parse_tree__module_cmds__MainModuleName_8,
  MR_String parse_tree__module_cmds__JarFileName_9,
  MR_Word parse_tree__module_cmds__Stream_10);

static MR_bool MR_CALL 
parse_tree__module_cmds__use_win32_0_p_0(void);

static MR_bool MR_CALL 
parse_tree__module_cmds__use_dotnet_0_p_0(void);

static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_2_7_p_0(
  MR_Word parse_tree__module_cmds__TmpOutputFileStream_8,
  MR_Integer parse_tree__module_cmds__Byte_9,
  MR_Word * parse_tree__module_cmds__Continue_10,
  MR_Word parse_tree__module_cmds__HeadVar__4_11,
  MR_Word * parse_tree__module_cmds__Differ_12);

static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_5_p_0_1(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
  MR_Box * parse_tree__module_cmds__wrapper_arg_4,
  MR_Box parse_tree__module_cmds__wrapper_arg_5,
  MR_Box * parse_tree__module_cmds__wrapper_arg_6);

static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_5_p_0(
  MR_Word parse_tree__module_cmds__OutputFileStream_6,
  MR_Word parse_tree__module_cmds__TmpOutputFileStream_7,
  MR_Word * parse_tree__module_cmds__FilesDiffer_8);

static void MR_CALL 
parse_tree__module_cmds__update_interface_create_file_7_p_0(
  MR_Word parse_tree__module_cmds__Globals_8,
  MR_String parse_tree__module_cmds__Msg_9,
  MR_String parse_tree__module_cmds__OutputFileName_10,
  MR_String parse_tree__module_cmds__TmpOutputFileName_11,
  MR_Word * parse_tree__module_cmds__Result_12);

static MR_Box MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_3(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

static void MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_2(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
  MR_Box * parse_tree__module_cmds__wrapper_arg_4,
  MR_Box parse_tree__module_cmds__wrapper_arg_5,
  MR_Box * parse_tree__module_cmds__wrapper_arg_6,
  MR_Box parse_tree__module_cmds__wrapper_arg_7,
  MR_Box * parse_tree__module_cmds__wrapper_arg_8);

static MR_bool MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_1(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
  MR_Box * parse_tree__module_cmds__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0_1(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
  MR_Box * parse_tree__module_cmds__wrapper_arg_3);

static void MR_CALL 
parse_tree__module_cmds__copy_file_6_p_0_1(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
  MR_Box * parse_tree__module_cmds__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_1[7][2];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_2[3][7];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_3[3][5];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_4[2][3];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_5[1][12];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_6[1][6];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_7[1][10];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_8[3][1];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_9[1][9];




static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_1[7][2] = {
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
    ((MR_Box) ((MR_String) " 2>&1")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) " \"\044\100\"\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) " %*\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) " -s init stop -extra \"\044\100\"\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) " -s init stop -extra %*\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_2[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__module_cmds_scalar_common_2[2])),
    ((MR_Box) (parse_tree__module_cmds__write_erlang_shell_script_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__module_cmds_scalar_common_2[2])),
    ((MR_Box) (parse_tree__module_cmds__write_erlang_batch_file_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_4[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__module_cmds_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_cmds__list_class_files_for_jar_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__module_cmds_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_cmds__write_java_msys_shell_script_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_5[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
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
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_7[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_input_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__module_cmds__io__pti_res_1__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__module_cmds__io__pti_res_1__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_8[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__module_cmds_scalar_common_8[1]))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__module_cmds__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "libs.process_util.mh"
#include "mdbcomp.rtti_access.mh"
#include "parse_tree.module_cmds.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__io__pti_res_1__plain_bool__type_ctor_info_bool_0 = {
  &mercury__io__io__type_ctor_info_res_1,
  {
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_0 = {
  (MR_String) "cmd_verbose",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_1 = {
  (MR_String) "cmd_verbose_commands",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_command_verbosity_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_cmds____Unify____command_verbosity_0_0_10001)),
  ((MR_Box) (parse_tree__module_cmds____Compare____command_verbosity_0_0_10001)),
  (MR_String) "parse_tree.module_cmds",
  (MR_String) "command_verbosity",
  {     parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_command_verbosity_0 },
  {     parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_command_verbosity_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_command_verbosity_0
};

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_0 = {
  (MR_String) "forward",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_1 = {
  (MR_String) "double",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_quote_char_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_cmds____Unify____quote_char_0_0_10001)),
  ((MR_Box) (parse_tree__module_cmds____Compare____quote_char_0_0_10001)),
  (MR_String) "parse_tree.module_cmds",
  (MR_String) "quote_char",
  {     parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_quote_char_0 },
  {     parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_quote_char_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_quote_char_0
};

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_0 = {
  (MR_String) "interface_new_or_changed",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_1 = {
  (MR_String) "interface_unchanged",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_2 = {
  (MR_String) "interface_error",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_update_interface_result_0[3] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_cmds____Unify____update_interface_result_0_0_10001)),
  ((MR_Box) (parse_tree__module_cmds____Compare____update_interface_result_0_0_10001)),
  (MR_String) "parse_tree.module_cmds",
  (MR_String) "update_interface_result",
  {     parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_update_interface_result_0 },
  {     parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_update_interface_result_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_update_interface_result_0
};

static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____command_verbosity_0_0_10001(
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
  MR_Box parse_tree__module_cmds__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;

    {
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds____Unify____command_verbosity_0_0(((MR_Word) parse_tree__module_cmds__wrapper_arg_1), ((MR_Word) parse_tree__module_cmds__wrapper_arg_2));
    }
    return parse_tree__module_cmds__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_cmds____Compare____command_verbosity_0_0_10001(
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
  MR_Box parse_tree__module_cmds__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_cmds__conv0_HeadVar__1_1;

    {
      parse_tree__module_cmds____Compare____command_verbosity_0_0(&parse_tree__module_cmds__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_cmds__wrapper_arg_2), ((MR_Word) parse_tree__module_cmds__wrapper_arg_3));
    }
    *parse_tree__module_cmds__wrapper_arg_1 = ((MR_Box) (parse_tree__module_cmds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____quote_char_0_0_10001(
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
  MR_Box parse_tree__module_cmds__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;

    {
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds____Unify____quote_char_0_0(((MR_Word) parse_tree__module_cmds__wrapper_arg_1), ((MR_Word) parse_tree__module_cmds__wrapper_arg_2));
    }
    return parse_tree__module_cmds__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_cmds____Compare____quote_char_0_0_10001(
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
  MR_Box parse_tree__module_cmds__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_cmds__conv0_HeadVar__1_1;

    {
      parse_tree__module_cmds____Compare____quote_char_0_0(&parse_tree__module_cmds__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_cmds__wrapper_arg_2), ((MR_Word) parse_tree__module_cmds__wrapper_arg_3));
    }
    *parse_tree__module_cmds__wrapper_arg_1 = ((MR_Box) (parse_tree__module_cmds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____update_interface_result_0_0_10001(
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
  MR_Box parse_tree__module_cmds__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;

    {
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds____Unify____update_interface_result_0_0(((MR_Word) parse_tree__module_cmds__wrapper_arg_1), ((MR_Word) parse_tree__module_cmds__wrapper_arg_2));
    }
    return parse_tree__module_cmds__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_cmds____Compare____update_interface_result_0_0_10001(
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
  MR_Box parse_tree__module_cmds__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_cmds__conv0_HeadVar__1_1;

    {
      parse_tree__module_cmds____Compare____update_interface_result_0_0(&parse_tree__module_cmds__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_cmds__wrapper_arg_2), ((MR_Word) parse_tree__module_cmds__wrapper_arg_3));
    }
    *parse_tree__module_cmds__wrapper_arg_1 = ((MR_Box) (parse_tree__module_cmds__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_115_104_101_108_108_95_115_99_114_105_112_116_95_95_104_111_53_95_95_91_54_93_95_48_6_p_0(
  MR_Word parse_tree__module_cmds__Var_50,
  MR_Word parse_tree__module_cmds__Var_51,
  MR_String parse_tree__module_cmds__Var_52,
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_Word parse_tree__module_cmds__MainModuleName_8,
  MR_Word * parse_tree__module_cmds__Succeeded_10)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_String parse_tree__module_cmds__FileName_13;
    MR_Word parse_tree__module_cmds__Verbose_14;
    MR_Word parse_tree__module_cmds__OpenResult_16;
    MR_String parse_tree__module_cmds__Var_26;
    MR_String parse_tree__module_cmds__Var_29;
    MR_Word parse_tree__module_cmds__Var_15;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__MainModuleName_8, (MR_String) "", (MR_Integer) 0, &parse_tree__module_cmds__FileName_13);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 56, &parse_tree__module_cmds__Verbose_14);
    }
    {
      parse_tree__module_cmds__Var_29 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_13, (MR_String) "\'...\n");
    }
    {
      parse_tree__module_cmds__Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", parse_tree__module_cmds__Var_29);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__Var_26);
    }
    {
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__Var_15);
    }
    {
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__OpenResult_16);
    }
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_16)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String parse_tree__module_cmds__Var_35;
        MR_Word parse_tree__module_cmds__Message_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));

        {
          parse_tree__module_cmds__Var_35 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_49);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__Var_35);
          return;
        }
      }
    else
      {
        MR_Word parse_tree__module_cmds__Stream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
        MR_Word parse_tree__module_cmds__ChmodResult_18;
        MR_String parse_tree__module_cmds__Var_38;

        {
          parse_tree__module_cmds__write_java_msys_shell_script_6_p_0(parse_tree__module_cmds__Var_50, parse_tree__module_cmds__Var_51, parse_tree__module_cmds__Var_52, parse_tree__module_cmds__Stream_17);
        }
        {
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_17);
        }
        {
          parse_tree__module_cmds__Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", parse_tree__module_cmds__FileName_13);
        }
        {
          mercury__io__call_system_4_p_0(parse_tree__module_cmds__Var_38, &parse_tree__module_cmds__ChmodResult_18);
        }
        if (((MR_tag((MR_Word) parse_tree__module_cmds__ChmodResult_18)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__module_cmds__Message_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__ChmodResult_18, (MR_Integer) 0)));
            MR_String parse_tree__module_cmds__Var_43;

            {
              parse_tree__module_cmds__Var_43 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_20);
            }
            {
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__Var_43);
              return;
            }
          }
        else
          {
            MR_Integer parse_tree__module_cmds__Status_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__ChmodResult_18, (MR_Integer) 0)));

            parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__Status_19 == (MR_Integer) 0);
            if (parse_tree__module_cmds__succeeded)
              {
                *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
                {
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, (MR_String) "% done.\n");
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_String) "chmod exit status != 0");
                  return;
                }
              }
          }
      }
  }
}

static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_51_95_95_91_54_93_95_48_6_p_0(
  MR_Word parse_tree__module_cmds__Var_36,
  MR_Word parse_tree__module_cmds__Var_37,
  MR_String parse_tree__module_cmds__Var_38,
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_Word parse_tree__module_cmds__MainModuleName_8,
  MR_Word * parse_tree__module_cmds__Succeeded_10)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_String parse_tree__module_cmds__FileName_13;
    MR_Word parse_tree__module_cmds__Verbose_14;
    MR_Word parse_tree__module_cmds__OpenResult_16;
    MR_String parse_tree__module_cmds__Var_24;
    MR_String parse_tree__module_cmds__Var_27;
    MR_Word parse_tree__module_cmds__Var_15;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__MainModuleName_8, (MR_String) ".bat", (MR_Integer) 0, &parse_tree__module_cmds__FileName_13);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 56, &parse_tree__module_cmds__Verbose_14);
    }
    {
      parse_tree__module_cmds__Var_27 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_13, (MR_String) "\'...\n");
    }
    {
      parse_tree__module_cmds__Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating batch file \140", parse_tree__module_cmds__Var_27);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__Var_24);
    }
    {
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__Var_15);
    }
    {
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__OpenResult_16);
    }
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_16)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__module_cmds__Message_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
        MR_String parse_tree__module_cmds__Var_33;

        {
          parse_tree__module_cmds__Var_33 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_18);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_batch_file\'/6", parse_tree__module_cmds__Var_33);
          return;
        }
      }
    else
      {
        MR_Word parse_tree__module_cmds__Stream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));

        {
          parse_tree__module_cmds__write_java_batch_file_6_p_0(parse_tree__module_cmds__Var_36, parse_tree__module_cmds__Var_37, parse_tree__module_cmds__Var_38, parse_tree__module_cmds__Stream_17);
        }
        {
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_17);
        }
        *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
      }
  }
}

static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_49_95_95_91_53_93_95_48_6_p_0(
  MR_Word parse_tree__module_cmds__Var_36,
  MR_Word parse_tree__module_cmds__Var_37,
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_Word parse_tree__module_cmds__MainModuleName_8,
  MR_Word * parse_tree__module_cmds__Succeeded_10)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_String parse_tree__module_cmds__FileName_13;
    MR_Word parse_tree__module_cmds__Verbose_14;
    MR_Word parse_tree__module_cmds__OpenResult_16;
    MR_String parse_tree__module_cmds__Var_24;
    MR_String parse_tree__module_cmds__Var_27;
    MR_Word parse_tree__module_cmds__Var_15;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__MainModuleName_8, (MR_String) ".bat", (MR_Integer) 0, &parse_tree__module_cmds__FileName_13);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 56, &parse_tree__module_cmds__Verbose_14);
    }
    {
      parse_tree__module_cmds__Var_27 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_13, (MR_String) "\'...\n");
    }
    {
      parse_tree__module_cmds__Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating batch file \140", parse_tree__module_cmds__Var_27);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__Var_24);
    }
    {
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__Var_15);
    }
    {
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__OpenResult_16);
    }
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_16)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__module_cmds__Message_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
        MR_String parse_tree__module_cmds__Var_33;

        {
          parse_tree__module_cmds__Var_33 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_18);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_batch_file\'/6", parse_tree__module_cmds__Var_33);
          return;
        }
      }
    else
      {
        MR_Word parse_tree__module_cmds__Stream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));

        {
          parse_tree__module_cmds__write_erlang_batch_file_5_p_0(parse_tree__module_cmds__Var_36, parse_tree__module_cmds__Var_37, parse_tree__module_cmds__Stream_17);
        }
        {
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_17);
        }
        *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
      }
  }
}

static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_110_101_115_116_101_100_95_99_108_97_115_115_95_102_105_108_101_115_95_95_91_52_93_95_48_9_p_0(
  MR_Word parse_tree__module_cmds__NestedClassPrefixes_10,
  MR_String parse_tree__module_cmds__DirName_11,
  MR_String parse_tree__module_cmds__BaseName_12,
  MR_Word * parse_tree__module_cmds__Continue_14,
  MR_Word parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19,
  MR_Word * parse_tree__module_cmds__STATE_VARIABLE_Acc_20)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__TypeCtorInfo_29_29;
    MR_Integer parse_tree__module_cmds__Dollar_17;
    MR_String parse_tree__module_cmds__BaseNameToDollar_18;
    MR_Integer parse_tree__module_cmds__Var_24;
    MR_Integer parse_tree__module_cmds__Var_25;
    MR_String parse_tree__module_cmds__Var_26;

    {
      parse_tree__module_cmds__succeeded = mercury__string__sub_string_search_3_p_0(parse_tree__module_cmds__BaseName_12, (MR_String) "\044", &parse_tree__module_cmds__Dollar_17);
    }
    if (parse_tree__module_cmds__succeeded)
      {
        parse_tree__module_cmds__Var_25 = (MR_Integer) 1;
        parse_tree__module_cmds__Var_24 = (parse_tree__module_cmds__Dollar_17 + parse_tree__module_cmds__Var_25);
        {
          parse_tree__module_cmds__BaseNameToDollar_18 = mercury__string__left_2_f_0(parse_tree__module_cmds__BaseName_12, parse_tree__module_cmds__Var_24);
        }
        {
          parse_tree__module_cmds__Var_26 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__DirName_11, parse_tree__module_cmds__BaseNameToDollar_18);
        }
        parse_tree__module_cmds__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          parse_tree__module_cmds__succeeded = mercury__set__contains_2_p_0(parse_tree__module_cmds__TypeCtorInfo_29_29, parse_tree__module_cmds__NestedClassPrefixes_10, ((MR_Box) (parse_tree__module_cmds__Var_26)));
        }
      }
    if (parse_tree__module_cmds__succeeded)
      {
        MR_String parse_tree__module_cmds__Var_28;

        {
          parse_tree__module_cmds__Var_28 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__DirName_11, parse_tree__module_cmds__BaseName_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_cmds__STATE_VARIABLE_Acc_20 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_cmds__Var_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19));
        }
      }
    else
      *parse_tree__module_cmds__STATE_VARIABLE_Acc_20 = parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19;
    *parse_tree__module_cmds__Continue_14 = (MR_Integer) 1;
  }
}

static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_97_114_121_95_105_110_112_117_116_95_115_116_114_101_97_109_95_99_109_112_95_50_95_95_91_52_93_95_48_7_p_0(
  MR_Word parse_tree__module_cmds__TmpOutputFileStream_8,
  MR_Integer parse_tree__module_cmds__Byte_9,
  MR_Word * parse_tree__module_cmds__Continue_10,
  MR_Word * parse_tree__module_cmds__Differ_12)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__TmpByteResult_14;

    {
      mercury__io__read_byte_4_p_0(parse_tree__module_cmds__TmpOutputFileStream_8, &parse_tree__module_cmds__TmpByteResult_14);
    }
    switch (MR_tag((MR_Word) parse_tree__module_cmds__TmpByteResult_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *parse_tree__module_cmds__Differ_12 = (MR_Word) &parse_tree__module_cmds_scalar_common_8[1];
          *parse_tree__module_cmds__Continue_10 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer parse_tree__module_cmds__TmpByte_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__TmpByteResult_14, (MR_Integer) 0)));

          parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__TmpByte_15 == parse_tree__module_cmds__Byte_9);
          if (parse_tree__module_cmds__succeeded)
            {
              *parse_tree__module_cmds__Differ_12 = (MR_Word) &parse_tree__module_cmds_scalar_common_8[0];
              *parse_tree__module_cmds__Continue_10 = (MR_Integer) 1;
            }
          else
            {
              *parse_tree__module_cmds__Differ_12 = (MR_Word) &parse_tree__module_cmds_scalar_common_8[1];
              *parse_tree__module_cmds__Continue_10 = (MR_Integer) 0;
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__module_cmds__TmpByteError_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_cmds__TmpByteResult_14, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__module_cmds__Differ_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_cmds__TmpByteError_16));
          }
          *parse_tree__module_cmds__Continue_10 = (MR_Integer) 0;
        }
        break;
    }
  }
}

static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_erlang_batch_file__1154__1_2_f_0(
  MR_String parse_tree__module_cmds__GradeDir_14,
  MR_String parse_tree__module_cmds__LambdaHeadVar__1_42)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_String parse_tree__module_cmds__LambdaHeadVar__2_43;
    MR_String parse_tree__module_cmds__Var_44;

    {
      parse_tree__module_cmds__Var_44 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__LambdaHeadVar__1_42, (MR_String) "lib");
    }
    {
      parse_tree__module_cmds__LambdaHeadVar__2_43 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__Var_44, parse_tree__module_cmds__GradeDir_14);
    }
    return parse_tree__module_cmds__LambdaHeadVar__2_43;
  }
}

static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_erlang_shell_script__1091__1_2_f_0(
  MR_String parse_tree__module_cmds__GradeDir_14,
  MR_String parse_tree__module_cmds__LambdaHeadVar__1_42)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_String parse_tree__module_cmds__LambdaHeadVar__2_43;
    MR_String parse_tree__module_cmds__Var_44;

    {
      parse_tree__module_cmds__Var_44 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__LambdaHeadVar__1_42, (MR_String) "lib");
    }
    {
      parse_tree__module_cmds__LambdaHeadVar__2_43 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__Var_44, parse_tree__module_cmds__GradeDir_14);
    }
    return parse_tree__module_cmds__LambdaHeadVar__2_43;
  }
}

static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_java_msys_shell_script__866__1_1_f_0(
  MR_String parse_tree__module_cmds__LambdaHeadVar__1_33)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_String parse_tree__module_cmds__LambdaHeadVar__2_34;

    {
      parse_tree__module_cmds__LambdaHeadVar__2_34 = mercury__string__replace_all_3_f_0(parse_tree__module_cmds__LambdaHeadVar__1_33, (MR_String) "\\", (MR_String) "/");
    }
    return parse_tree__module_cmds__LambdaHeadVar__2_34;
  }
}

void MR_CALL 
parse_tree__module_cmds____Compare____update_interface_result_0_0(
  MR_Word * parse_tree__module_cmds__HeadVar__1_1,
  MR_Word parse_tree__module_cmds__HeadVar__2_2,
  MR_Word parse_tree__module_cmds__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Integer parse_tree__module_cmds__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_cmds__HeadVar__2_2;
    MR_Integer parse_tree__module_cmds__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_cmds__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_cmds__HeadVar__1_1, parse_tree__module_cmds__Cast_HeadVar1_4, parse_tree__module_cmds__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_cmds____Unify____update_interface_result_0_0(
  MR_Word parse_tree__module_cmds__HeadVar__2_1,
  MR_Word parse_tree__module_cmds__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__HeadVar__2_1 == parse_tree__module_cmds__HeadVar__2_2);

    return parse_tree__module_cmds__succeeded;
  }
}

void MR_CALL 
parse_tree__module_cmds____Compare____quote_char_0_0(
  MR_Word * parse_tree__module_cmds__HeadVar__1_1,
  MR_Word parse_tree__module_cmds__HeadVar__2_2,
  MR_Word parse_tree__module_cmds__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Integer parse_tree__module_cmds__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_cmds__HeadVar__2_2;
    MR_Integer parse_tree__module_cmds__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_cmds__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_cmds__HeadVar__1_1, parse_tree__module_cmds__Cast_HeadVar1_4, parse_tree__module_cmds__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_cmds____Unify____quote_char_0_0(
  MR_Word parse_tree__module_cmds__HeadVar__2_1,
  MR_Word parse_tree__module_cmds__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__HeadVar__2_1 == parse_tree__module_cmds__HeadVar__2_2);

    return parse_tree__module_cmds__succeeded;
  }
}

void MR_CALL 
parse_tree__module_cmds____Compare____command_verbosity_0_0(
  MR_Word * parse_tree__module_cmds__HeadVar__1_1,
  MR_Word parse_tree__module_cmds__HeadVar__2_2,
  MR_Word parse_tree__module_cmds__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Integer parse_tree__module_cmds__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_cmds__HeadVar__2_2;
    MR_Integer parse_tree__module_cmds__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_cmds__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_cmds__HeadVar__1_1, parse_tree__module_cmds__Cast_HeadVar1_4, parse_tree__module_cmds__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_cmds____Unify____command_verbosity_0_0(
  MR_Word parse_tree__module_cmds__HeadVar__2_1,
  MR_Word parse_tree__module_cmds__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__HeadVar__2_1 == parse_tree__module_cmds__HeadVar__2_2);

    return parse_tree__module_cmds__succeeded;
  }
}

static MR_String MR_CALL 
parse_tree__module_cmds__pa_option_3_f_0(
  MR_Word parse_tree__module_cmds__BreakLines_5,
  MR_Word parse_tree__module_cmds__Quote_6,
  MR_String parse_tree__module_cmds__Dir0_7)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_String parse_tree__module_cmds__Option_8;
    MR_String parse_tree__module_cmds__Dir_9;
    MR_String parse_tree__module_cmds__LineContinuation_10;
    MR_String parse_tree__module_cmds__Var_12;

    switch (parse_tree__module_cmds__Quote_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__module_cmds__Dir_9 = parse_tree__module_cmds__Dir0_7;
        break;
      case (MR_Integer) 1:
        {
          parse_tree__module_cmds__Dir_9 = libs__options__quote_arg_1_f_0(parse_tree__module_cmds__Dir0_7);
        }
        break;
    }
    switch (parse_tree__module_cmds__BreakLines_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__module_cmds__LineContinuation_10 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        parse_tree__module_cmds__LineContinuation_10 = (MR_String) " \\\n";
        break;
    }
    {
      parse_tree__module_cmds__Var_12 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__Dir_9, parse_tree__module_cmds__LineContinuation_10);
    }
    {
      parse_tree__module_cmds__Option_8 = mercury__string__f_43_43_2_f_0((MR_String) " -pa ", parse_tree__module_cmds__Var_12);
    }
    return parse_tree__module_cmds__Option_8;
  }
}

static void MR_CALL 
parse_tree__module_cmds__find_erlang_library_path_6_p_0(
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_Word parse_tree__module_cmds__MercuryLibDirs_8,
  MR_String parse_tree__module_cmds__LibName_9,
  MR_String * parse_tree__module_cmds__LibPath_10)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__LibModuleName_12;
    MR_Word parse_tree__module_cmds__NoSubdirsGlobals_13;
    MR_String parse_tree__module_cmds__LibFileName_14;
    MR_Word parse_tree__module_cmds__MaybeDirName_15;

    {
      parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__module_cmds__LibName_9, &parse_tree__module_cmds__LibModuleName_12);
    }
    {
      libs__globals__set_option_4_p_0((MR_Integer) 648, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_8[0]), parse_tree__module_cmds__Globals_7, &parse_tree__module_cmds__NoSubdirsGlobals_13);
    }
    {
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__module_cmds__NoSubdirsGlobals_13, (MR_String) "lib", parse_tree__module_cmds__LibModuleName_12, (MR_String) ".beams", (MR_Integer) 1, &parse_tree__module_cmds__LibFileName_14);
    }
    {
      libs__file_util__search_for_file_returning_dir_5_p_0(parse_tree__module_cmds__MercuryLibDirs_8, parse_tree__module_cmds__LibFileName_14, &parse_tree__module_cmds__MaybeDirName_15);
    }
    if (((MR_tag((MR_Word) parse_tree__module_cmds__MaybeDirName_15)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String parse_tree__module_cmds__Error_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeDirName_15, (MR_Integer) 0)));
        MR_Word parse_tree__module_cmds__Var_30;
        MR_Word parse_tree__module_cmds__Var_32;

        *parse_tree__module_cmds__LibPath_10 = (MR_String) "";
        {
          parse_tree__module_cmds__Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__module_cmds__Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), parse_tree__module_cmds__Var_32, 1) = ((MR_Box) (parse_tree__module_cmds__Error_17));
        }
        {
          parse_tree__module_cmds__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_30, 0) = ((MR_Box) (parse_tree__module_cmds__Var_32));
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__error_util__write_error_pieces_maybe_with_context_6_p_0(parse_tree__module_cmds__Globals_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__module_cmds__Var_30);
        }
      }
    else
      {
        MR_String parse_tree__module_cmds__DirName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__MaybeDirName_15, (MR_Integer) 0)));

        {
          *parse_tree__module_cmds__LibPath_10 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__DirName_16, parse_tree__module_cmds__LibFileName_14);
        }
      }
  }
}

static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_3(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
{
  {
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
    MR_String parse_tree__module_cmds__conv3_Option_8;

    {
      parse_tree__module_cmds__conv3_Option_8 = parse_tree__module_cmds__pa_option_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 4))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv3_Option_8));
    return parse_tree__module_cmds__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_2(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
  MR_Box * parse_tree__module_cmds__wrapper_arg_4)
{
  {
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
    MR_String parse_tree__module_cmds__conv1_LibPath_10;

    {
      parse_tree__module_cmds__find_erlang_library_path_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 4))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1), &parse_tree__module_cmds__conv1_LibPath_10);
    }
    *parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv1_LibPath_10));
  }
}

static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_1(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
{
  {
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
    MR_String parse_tree__module_cmds__conv0_LambdaHeadVar__2_43;

    {
      parse_tree__module_cmds__conv0_LambdaHeadVar__2_43 = parse_tree__module_cmds__IntroducedFrom__func__write_erlang_batch_file__1154__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv0_LambdaHeadVar__2_43));
    return parse_tree__module_cmds__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0(
  MR_Word parse_tree__module_cmds__Globals_6,
  MR_Word parse_tree__module_cmds__MainModuleName_7,
  MR_Word parse_tree__module_cmds__Stream_8)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__TypeCtorInfo_85_85;
    MR_String parse_tree__module_cmds__BeamExt_10;
    MR_String parse_tree__module_cmds__BeamFileName_11;
    MR_String parse_tree__module_cmds__BeamDirName_12;
    MR_String parse_tree__module_cmds__BeamBaseNameNoExt_13;
    MR_String parse_tree__module_cmds__GradeDir_14;
    MR_Word parse_tree__module_cmds__MaybeStdLibDir_15;
    MR_String parse_tree__module_cmds__SearchStdLib_18;
    MR_String parse_tree__module_cmds__MainFunc_19;
    MR_Word parse_tree__module_cmds__MercuryLibDirs0_20;
    MR_Word parse_tree__module_cmds__MercuryLibDirs_21;
    MR_Word parse_tree__module_cmds__LinkLibrariesList0_23;
    MR_Word parse_tree__module_cmds__LinkLibrariesList_24;
    MR_String parse_tree__module_cmds__Erlang_25;
    MR_String parse_tree__module_cmds__SearchLibs_26;
    MR_String parse_tree__module_cmds__SearchProg_27;
    MR_Word parse_tree__module_cmds__Var_41;
    MR_Word parse_tree__module_cmds__Var_47;
    MR_Word parse_tree__module_cmds__Var_50;
    MR_Word parse_tree__module_cmds__Var_54;
    MR_String parse_tree__module_cmds__Var_57;
    MR_String parse_tree__module_cmds__Var_59;
    MR_Word parse_tree__module_cmds__Var_60;
    MR_Word parse_tree__module_cmds__Var_63;
    MR_Word parse_tree__module_cmds__Var_65;
    MR_Word parse_tree__module_cmds__Var_67;
    MR_Word parse_tree__module_cmds__Var_69;
    MR_Word parse_tree__module_cmds__Var_70;
    MR_Word parse_tree__module_cmds__Var_72;
    MR_Word parse_tree__module_cmds__Var_73;
    MR_Word parse_tree__module_cmds__Var_74;
    MR_Word parse_tree__module_cmds__Var_75;
    MR_Word parse_tree__module_cmds__Var_77;
    MR_Word parse_tree__module_cmds__Var_78;
    MR_Word parse_tree__module_cmds__Var_80;
    MR_Box parse_tree__module_cmds__conv2_STATE_VARIABLE_IO_48_48;

    {
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 535, &parse_tree__module_cmds__BeamExt_10);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__BeamExt_10, (MR_Integer) 1, &parse_tree__module_cmds__BeamFileName_11);
    }
    {
      parse_tree__module_cmds__BeamDirName_12 = mercury__dir__dirname_1_f_0(parse_tree__module_cmds__BeamFileName_11);
    }
    {
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__module_cmds__MainModuleName_7, &parse_tree__module_cmds__BeamBaseNameNoExt_13);
    }
    {
      libs__compute_grade__grade_directory_component_2_p_0(parse_tree__module_cmds__Globals_6, &parse_tree__module_cmds__GradeDir_14);
    }
    {
      libs__globals__lookup_maybe_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 554, &parse_tree__module_cmds__MaybeStdLibDir_15);
    }
    if ((parse_tree__module_cmds__MaybeStdLibDir_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        parse_tree__module_cmds__SearchStdLib_18 = (MR_String) "";
        parse_tree__module_cmds__MainFunc_19 = (MR_String) "main_2_p_0";
      }
    else
      {
        MR_String parse_tree__module_cmds__StdLibDir_16 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeStdLibDir_15, (MR_Integer) 0)));
        MR_String parse_tree__module_cmds__StdLibBeamsPath_17;
        MR_String parse_tree__module_cmds__Var_34;
        MR_String parse_tree__module_cmds__Var_35;

        {
          parse_tree__module_cmds__Var_35 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_16, (MR_String) "lib");
        }
        {
          parse_tree__module_cmds__Var_34 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__Var_35, parse_tree__module_cmds__GradeDir_14);
        }
        {
          parse_tree__module_cmds__StdLibBeamsPath_17 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__Var_34, (MR_String) "libmer_std.beams");
        }
        {
          parse_tree__module_cmds__SearchStdLib_18 = parse_tree__module_cmds__pa_option_3_f_0((MR_Integer) 0, (MR_Integer) 1, parse_tree__module_cmds__StdLibBeamsPath_17);
        }
        parse_tree__module_cmds__MainFunc_19 = (MR_String) "mercury__main_wrapper";
      }
    {
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 548, &parse_tree__module_cmds__MercuryLibDirs0_20);
    }
    parse_tree__module_cmds__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      parse_tree__module_cmds__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_41, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_41, 1) = ((MR_Box) (parse_tree__module_cmds__write_erlang_batch_file_5_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_41, 3) = ((MR_Box) (parse_tree__module_cmds__GradeDir_14));
    }
    {
      parse_tree__module_cmds__MercuryLibDirs_21 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__Var_41, parse_tree__module_cmds__MercuryLibDirs0_20);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 546, &parse_tree__module_cmds__LinkLibrariesList0_23);
    }
    {
      parse_tree__module_cmds__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_47, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_47, 1) = ((MR_Box) (parse_tree__module_cmds__write_erlang_batch_file_5_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_47, 3) = ((MR_Box) (parse_tree__module_cmds__Globals_6));
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_47, 4) = ((MR_Box) (parse_tree__module_cmds__MercuryLibDirs_21));
    }
    {
      mercury__list__map_foldl_5_p_2(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__module_cmds__Var_47, parse_tree__module_cmds__LinkLibrariesList0_23, &parse_tree__module_cmds__LinkLibrariesList_24, ((MR_Box) ((MR_Integer) 0)), &parse_tree__module_cmds__conv2_STATE_VARIABLE_IO_48_48);
    }
    {
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 531, &parse_tree__module_cmds__Erlang_25);
    }
    {
      parse_tree__module_cmds__Var_54 = mercury__list__sort_and_remove_dups_1_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__LinkLibrariesList_24);
    }
    {
      parse_tree__module_cmds__Var_50 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, (MR_Word) &parse_tree__module_cmds_scalar_common_3[2], parse_tree__module_cmds__Var_54);
    }
    {
      parse_tree__module_cmds__SearchLibs_26 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__Var_50);
    }
    {
      parse_tree__module_cmds__Var_59 = libs__options__quote_arg_1_f_0(parse_tree__module_cmds__BeamDirName_12);
    }
    {
      parse_tree__module_cmds__Var_57 = mercury__string__f_43_43_2_f_0((MR_String) "%DIR%\\", parse_tree__module_cmds__Var_59);
    }
    {
      parse_tree__module_cmds__SearchProg_27 = parse_tree__module_cmds__pa_option_3_f_0((MR_Integer) 0, (MR_Integer) 0, parse_tree__module_cmds__Var_57);
    }
    {
      parse_tree__module_cmds__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_80, 0) = ((MR_Box) (parse_tree__module_cmds__MainFunc_19));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[6])));
    }
    {
      parse_tree__module_cmds__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_78, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_78, 1) = ((MR_Box) (parse_tree__module_cmds__Var_80));
    }
    {
      parse_tree__module_cmds__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_77, 0) = ((MR_Box) (parse_tree__module_cmds__BeamBaseNameNoExt_13));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_77, 1) = ((MR_Box) (parse_tree__module_cmds__Var_78));
    }
    {
      parse_tree__module_cmds__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_75, 0) = ((MR_Box) ((MR_String) " -s "));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_75, 1) = ((MR_Box) (parse_tree__module_cmds__Var_77));
    }
    {
      parse_tree__module_cmds__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_74, 0) = ((MR_Box) (parse_tree__module_cmds__SearchProg_27));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_74, 1) = ((MR_Box) (parse_tree__module_cmds__Var_75));
    }
    {
      parse_tree__module_cmds__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_73, 0) = ((MR_Box) (parse_tree__module_cmds__SearchLibs_26));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_73, 1) = ((MR_Box) (parse_tree__module_cmds__Var_74));
    }
    {
      parse_tree__module_cmds__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_72, 0) = ((MR_Box) (parse_tree__module_cmds__SearchStdLib_18));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_72, 1) = ((MR_Box) (parse_tree__module_cmds__Var_73));
    }
    {
      parse_tree__module_cmds__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_70, 0) = ((MR_Box) ((MR_String) " -noshell "));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_70, 1) = ((MR_Box) (parse_tree__module_cmds__Var_72));
    }
    {
      parse_tree__module_cmds__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_69, 0) = ((MR_Box) (parse_tree__module_cmds__Erlang_25));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_69, 1) = ((MR_Box) (parse_tree__module_cmds__Var_70));
    }
    {
      parse_tree__module_cmds__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_67, 0) = ((MR_Box) ((MR_String) "set DIR=%~dp0\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_67, 1) = ((MR_Box) (parse_tree__module_cmds__Var_69));
    }
    {
      parse_tree__module_cmds__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_65, 0) = ((MR_Box) ((MR_String) "setlocal\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_65, 1) = ((MR_Box) (parse_tree__module_cmds__Var_67));
    }
    {
      parse_tree__module_cmds__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_63, 0) = ((MR_Box) ((MR_String) "rem Generated by the Mercury compiler.\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_63, 1) = ((MR_Box) (parse_tree__module_cmds__Var_65));
    }
    {
      parse_tree__module_cmds__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_60, 0) = ((MR_Box) ((MR_String) "\100echo off\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_60, 1) = ((MR_Box) (parse_tree__module_cmds__Var_63));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__module_cmds__Stream_8, parse_tree__module_cmds__Var_60);
    }
  }
}

static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_3(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
{
  {
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
    MR_String parse_tree__module_cmds__conv3_Option_8;

    {
      parse_tree__module_cmds__conv3_Option_8 = parse_tree__module_cmds__pa_option_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 4))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv3_Option_8));
    return parse_tree__module_cmds__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_2(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
  MR_Box * parse_tree__module_cmds__wrapper_arg_4)
{
  {
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
    MR_String parse_tree__module_cmds__conv1_LibPath_10;

    {
      parse_tree__module_cmds__find_erlang_library_path_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 4))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1), &parse_tree__module_cmds__conv1_LibPath_10);
    }
    *parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv1_LibPath_10));
  }
}

static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_1(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
{
  {
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
    MR_String parse_tree__module_cmds__conv0_LambdaHeadVar__2_43;

    {
      parse_tree__module_cmds__conv0_LambdaHeadVar__2_43 = parse_tree__module_cmds__IntroducedFrom__func__write_erlang_shell_script__1091__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv0_LambdaHeadVar__2_43));
    return parse_tree__module_cmds__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0(
  MR_Word parse_tree__module_cmds__Globals_6,
  MR_Word parse_tree__module_cmds__MainModuleName_7,
  MR_Word parse_tree__module_cmds__Stream_8)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__TypeCtorInfo_85_85;
    MR_String parse_tree__module_cmds__BeamExt_10;
    MR_String parse_tree__module_cmds__BeamFileName_11;
    MR_String parse_tree__module_cmds__BeamDirName_12;
    MR_String parse_tree__module_cmds__BeamBaseNameNoExt_13;
    MR_String parse_tree__module_cmds__GradeDir_14;
    MR_Word parse_tree__module_cmds__MaybeStdLibDir_15;
    MR_String parse_tree__module_cmds__SearchStdLib_18;
    MR_String parse_tree__module_cmds__MainFunc_19;
    MR_Word parse_tree__module_cmds__MercuryLibDirs0_20;
    MR_Word parse_tree__module_cmds__MercuryLibDirs_21;
    MR_Word parse_tree__module_cmds__LinkLibrariesList0_23;
    MR_Word parse_tree__module_cmds__LinkLibrariesList_24;
    MR_String parse_tree__module_cmds__Erlang_25;
    MR_String parse_tree__module_cmds__SearchLibs_26;
    MR_String parse_tree__module_cmds__SearchProg_27;
    MR_Word parse_tree__module_cmds__Var_41;
    MR_Word parse_tree__module_cmds__Var_47;
    MR_Word parse_tree__module_cmds__Var_50;
    MR_Word parse_tree__module_cmds__Var_54;
    MR_String parse_tree__module_cmds__Var_57;
    MR_String parse_tree__module_cmds__Var_59;
    MR_Word parse_tree__module_cmds__Var_60;
    MR_Word parse_tree__module_cmds__Var_63;
    MR_Word parse_tree__module_cmds__Var_65;
    MR_Word parse_tree__module_cmds__Var_67;
    MR_Word parse_tree__module_cmds__Var_69;
    MR_Word parse_tree__module_cmds__Var_70;
    MR_Word parse_tree__module_cmds__Var_72;
    MR_Word parse_tree__module_cmds__Var_73;
    MR_Word parse_tree__module_cmds__Var_74;
    MR_Word parse_tree__module_cmds__Var_75;
    MR_Word parse_tree__module_cmds__Var_77;
    MR_Word parse_tree__module_cmds__Var_78;
    MR_Word parse_tree__module_cmds__Var_80;
    MR_Box parse_tree__module_cmds__conv2_STATE_VARIABLE_IO_48_48;

    {
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 535, &parse_tree__module_cmds__BeamExt_10);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__BeamExt_10, (MR_Integer) 1, &parse_tree__module_cmds__BeamFileName_11);
    }
    {
      parse_tree__module_cmds__BeamDirName_12 = mercury__dir__dirname_1_f_0(parse_tree__module_cmds__BeamFileName_11);
    }
    {
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__module_cmds__MainModuleName_7, &parse_tree__module_cmds__BeamBaseNameNoExt_13);
    }
    {
      libs__compute_grade__grade_directory_component_2_p_0(parse_tree__module_cmds__Globals_6, &parse_tree__module_cmds__GradeDir_14);
    }
    {
      libs__globals__lookup_maybe_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 554, &parse_tree__module_cmds__MaybeStdLibDir_15);
    }
    if ((parse_tree__module_cmds__MaybeStdLibDir_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        parse_tree__module_cmds__SearchStdLib_18 = (MR_String) "";
        parse_tree__module_cmds__MainFunc_19 = (MR_String) "main_2_p_0";
      }
    else
      {
        MR_String parse_tree__module_cmds__StdLibDir_16 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeStdLibDir_15, (MR_Integer) 0)));
        MR_String parse_tree__module_cmds__StdLibBeamsPath_17;
        MR_String parse_tree__module_cmds__Var_34;
        MR_String parse_tree__module_cmds__Var_35;

        {
          parse_tree__module_cmds__Var_35 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_16, (MR_String) "lib");
        }
        {
          parse_tree__module_cmds__Var_34 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__Var_35, parse_tree__module_cmds__GradeDir_14);
        }
        {
          parse_tree__module_cmds__StdLibBeamsPath_17 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__Var_34, (MR_String) "libmer_std.beams");
        }
        {
          parse_tree__module_cmds__SearchStdLib_18 = parse_tree__module_cmds__pa_option_3_f_0((MR_Integer) 1, (MR_Integer) 1, parse_tree__module_cmds__StdLibBeamsPath_17);
        }
        parse_tree__module_cmds__MainFunc_19 = (MR_String) "mercury__main_wrapper";
      }
    {
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 548, &parse_tree__module_cmds__MercuryLibDirs0_20);
    }
    parse_tree__module_cmds__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      parse_tree__module_cmds__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_41, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_41, 1) = ((MR_Box) (parse_tree__module_cmds__write_erlang_shell_script_5_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_41, 3) = ((MR_Box) (parse_tree__module_cmds__GradeDir_14));
    }
    {
      parse_tree__module_cmds__MercuryLibDirs_21 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__Var_41, parse_tree__module_cmds__MercuryLibDirs0_20);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 546, &parse_tree__module_cmds__LinkLibrariesList0_23);
    }
    {
      parse_tree__module_cmds__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_47, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_47, 1) = ((MR_Box) (parse_tree__module_cmds__write_erlang_shell_script_5_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_47, 3) = ((MR_Box) (parse_tree__module_cmds__Globals_6));
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_47, 4) = ((MR_Box) (parse_tree__module_cmds__MercuryLibDirs_21));
    }
    {
      mercury__list__map_foldl_5_p_2(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__module_cmds__Var_47, parse_tree__module_cmds__LinkLibrariesList0_23, &parse_tree__module_cmds__LinkLibrariesList_24, ((MR_Box) ((MR_Integer) 0)), &parse_tree__module_cmds__conv2_STATE_VARIABLE_IO_48_48);
    }
    {
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 531, &parse_tree__module_cmds__Erlang_25);
    }
    {
      parse_tree__module_cmds__Var_54 = mercury__list__sort_and_remove_dups_1_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__LinkLibrariesList_24);
    }
    {
      parse_tree__module_cmds__Var_50 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, (MR_Word) &parse_tree__module_cmds_scalar_common_3[1], parse_tree__module_cmds__Var_54);
    }
    {
      parse_tree__module_cmds__SearchLibs_26 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__Var_50);
    }
    {
      parse_tree__module_cmds__Var_59 = libs__options__quote_arg_1_f_0(parse_tree__module_cmds__BeamDirName_12);
    }
    {
      parse_tree__module_cmds__Var_57 = mercury__string__f_43_43_2_f_0((MR_String) "\"\044DIR\"/", parse_tree__module_cmds__Var_59);
    }
    {
      parse_tree__module_cmds__SearchProg_27 = parse_tree__module_cmds__pa_option_3_f_0((MR_Integer) 1, (MR_Integer) 0, parse_tree__module_cmds__Var_57);
    }
    {
      parse_tree__module_cmds__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_80, 0) = ((MR_Box) (parse_tree__module_cmds__MainFunc_19));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[5])));
    }
    {
      parse_tree__module_cmds__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_78, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_78, 1) = ((MR_Box) (parse_tree__module_cmds__Var_80));
    }
    {
      parse_tree__module_cmds__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_77, 0) = ((MR_Box) (parse_tree__module_cmds__BeamBaseNameNoExt_13));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_77, 1) = ((MR_Box) (parse_tree__module_cmds__Var_78));
    }
    {
      parse_tree__module_cmds__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_75, 0) = ((MR_Box) ((MR_String) " -s "));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_75, 1) = ((MR_Box) (parse_tree__module_cmds__Var_77));
    }
    {
      parse_tree__module_cmds__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_74, 0) = ((MR_Box) (parse_tree__module_cmds__SearchProg_27));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_74, 1) = ((MR_Box) (parse_tree__module_cmds__Var_75));
    }
    {
      parse_tree__module_cmds__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_73, 0) = ((MR_Box) (parse_tree__module_cmds__SearchLibs_26));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_73, 1) = ((MR_Box) (parse_tree__module_cmds__Var_74));
    }
    {
      parse_tree__module_cmds__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_72, 0) = ((MR_Box) (parse_tree__module_cmds__SearchStdLib_18));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_72, 1) = ((MR_Box) (parse_tree__module_cmds__Var_73));
    }
    {
      parse_tree__module_cmds__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_70, 0) = ((MR_Box) ((MR_String) " -noshell \\\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_70, 1) = ((MR_Box) (parse_tree__module_cmds__Var_72));
    }
    {
      parse_tree__module_cmds__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_69, 0) = ((MR_Box) (parse_tree__module_cmds__Erlang_25));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_69, 1) = ((MR_Box) (parse_tree__module_cmds__Var_70));
    }
    {
      parse_tree__module_cmds__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_67, 0) = ((MR_Box) ((MR_String) "exec "));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_67, 1) = ((MR_Box) (parse_tree__module_cmds__Var_69));
    }
    {
      parse_tree__module_cmds__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_65, 0) = ((MR_Box) ((MR_String) "DIR=\140dirname \"\0440\"\140\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_65, 1) = ((MR_Box) (parse_tree__module_cmds__Var_67));
    }
    {
      parse_tree__module_cmds__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_63, 0) = ((MR_Box) ((MR_String) "# Generated by the Mercury compiler.\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_63, 1) = ((MR_Box) (parse_tree__module_cmds__Var_65));
    }
    {
      parse_tree__module_cmds__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_60, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_60, 1) = ((MR_Box) (parse_tree__module_cmds__Var_63));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__module_cmds__Stream_8, parse_tree__module_cmds__Var_60);
    }
  }
}

static void MR_CALL 
parse_tree__module_cmds__accumulate_nested_class_files_9_p_0(
  MR_Word parse_tree__module_cmds__NestedClassPrefixes_10,
  MR_String parse_tree__module_cmds__DirName_11,
  MR_String parse_tree__module_cmds__BaseName_12,
  MR_Word parse_tree__module_cmds___FileType_13,
  MR_Word * parse_tree__module_cmds__Continue_14,
  MR_Word parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19,
  MR_Word * parse_tree__module_cmds__STATE_VARIABLE_Acc_20)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;

    {
      parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_110_101_115_116_101_100_95_99_108_97_115_115_95_102_105_108_101_115_95_95_91_52_93_95_48_9_p_0(parse_tree__module_cmds__NestedClassPrefixes_10, parse_tree__module_cmds__DirName_11, parse_tree__module_cmds__BaseName_12, parse_tree__module_cmds__Continue_14, parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19, parse_tree__module_cmds__STATE_VARIABLE_Acc_20);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__module_cmds__make_nested_class_prefix_2_p_0(
  MR_String parse_tree__module_cmds__ClassFileName_3,
  MR_String * parse_tree__module_cmds__ClassPrefix_4)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_String parse_tree__module_cmds__BaseName_5;
    MR_String parse_tree__module_cmds__Var_7;

    {
      parse_tree__module_cmds__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__module_cmds__ClassFileName_3, (MR_String) ".class", &parse_tree__module_cmds__BaseName_5);
    }
    if (parse_tree__module_cmds__succeeded)
      {
        parse_tree__module_cmds__Var_7 = (MR_String) "\044";
        {
          *parse_tree__module_cmds__ClassPrefix_4 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__BaseName_5, parse_tree__module_cmds__Var_7);
        }
        parse_tree__module_cmds__succeeded = MR_TRUE;
      }
    return parse_tree__module_cmds__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_cmds__write_java_batch_file_6_p_0(
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_Word parse_tree__module_cmds__MainModuleName_8,
  MR_String parse_tree__module_cmds__JarFileName_9,
  MR_Word parse_tree__module_cmds__Stream_10)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__TypeCtorInfo_53_53;
    MR_Word parse_tree__module_cmds__MercuryStdLibs_12;
    MR_Word parse_tree__module_cmds__UserClasspath_13;
    MR_Word parse_tree__module_cmds__Java_Incl_Dirs_14;
    MR_String parse_tree__module_cmds__ClassPath_15;
    MR_String parse_tree__module_cmds__Java_16;
    MR_String parse_tree__module_cmds__ClassName_17;
    MR_Word parse_tree__module_cmds__Var_21;
    MR_String parse_tree__module_cmds__Var_22;
    MR_Word parse_tree__module_cmds__Var_25;
    MR_Word parse_tree__module_cmds__Var_26;
    MR_Word parse_tree__module_cmds__Var_32;
    MR_Word parse_tree__module_cmds__Var_35;
    MR_Word parse_tree__module_cmds__Var_37;
    MR_Word parse_tree__module_cmds__Var_39;
    MR_Word parse_tree__module_cmds__Var_41;
    MR_Word parse_tree__module_cmds__Var_43;
    MR_Word parse_tree__module_cmds__Var_44;
    MR_Word parse_tree__module_cmds__Var_46;
    MR_Word parse_tree__module_cmds__Var_47;
    MR_Word parse_tree__module_cmds__Var_49;

    {
      parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(parse_tree__module_cmds__Globals_7, &parse_tree__module_cmds__MercuryStdLibs_12);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 524, &parse_tree__module_cmds__UserClasspath_13);
    }
    parse_tree__module_cmds__TypeCtorInfo_53_53 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      parse_tree__module_cmds__Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "%DIR%\\", parse_tree__module_cmds__JarFileName_9);
    }
    {
      parse_tree__module_cmds__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_21, 0) = ((MR_Box) (parse_tree__module_cmds__Var_22));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__module_cmds__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_26, 0) = ((MR_Box) ((MR_String) "%CLASSPATH%"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_26, 1) = ((MR_Box) (parse_tree__module_cmds__UserClasspath_13));
    }
    {
      parse_tree__module_cmds__Var_25 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_53_53, parse_tree__module_cmds__MercuryStdLibs_12, parse_tree__module_cmds__Var_26);
    }
    {
      parse_tree__module_cmds__Java_Incl_Dirs_14 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_53_53, parse_tree__module_cmds__Var_21, parse_tree__module_cmds__Var_25);
    }
    {
      parse_tree__module_cmds__ClassPath_15 = mercury__string__join_list_2_f_0((MR_String) ";", parse_tree__module_cmds__Java_Incl_Dirs_14);
    }
    {
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 521, &parse_tree__module_cmds__Java_16);
    }
    {
      parse_tree__java_names__mangle_sym_name_for_java_4_p_0(parse_tree__module_cmds__MainModuleName_8, (MR_Integer) 0, (MR_String) ".", &parse_tree__module_cmds__ClassName_17);
    }
    {
      parse_tree__module_cmds__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_49, 0) = ((MR_Box) (parse_tree__module_cmds__ClassName_17));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[4])));
    }
    {
      parse_tree__module_cmds__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_47, 0) = ((MR_Box) ((MR_String) " jmercury."));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_47, 1) = ((MR_Box) (parse_tree__module_cmds__Var_49));
    }
    {
      parse_tree__module_cmds__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_46, 0) = ((MR_Box) (parse_tree__module_cmds__Java_16));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_46, 1) = ((MR_Box) (parse_tree__module_cmds__Var_47));
    }
    {
      parse_tree__module_cmds__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_44, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_44, 1) = ((MR_Box) (parse_tree__module_cmds__Var_46));
    }
    {
      parse_tree__module_cmds__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_43, 0) = ((MR_Box) (parse_tree__module_cmds__ClassPath_15));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_43, 1) = ((MR_Box) (parse_tree__module_cmds__Var_44));
    }
    {
      parse_tree__module_cmds__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_41, 0) = ((MR_Box) ((MR_String) "set CLASSPATH="));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_41, 1) = ((MR_Box) (parse_tree__module_cmds__Var_43));
    }
    {
      parse_tree__module_cmds__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_39, 0) = ((MR_Box) ((MR_String) "set DIR=%~dp0\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_39, 1) = ((MR_Box) (parse_tree__module_cmds__Var_41));
    }
    {
      parse_tree__module_cmds__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_37, 0) = ((MR_Box) ((MR_String) "setlocal\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_37, 1) = ((MR_Box) (parse_tree__module_cmds__Var_39));
    }
    {
      parse_tree__module_cmds__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_35, 0) = ((MR_Box) ((MR_String) "rem Automatically generated by the Mercury compiler.\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_35, 1) = ((MR_Box) (parse_tree__module_cmds__Var_37));
    }
    {
      parse_tree__module_cmds__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_32, 0) = ((MR_Box) ((MR_String) "\100echo off\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_32, 1) = ((MR_Box) (parse_tree__module_cmds__Var_35));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__module_cmds__Stream_10, parse_tree__module_cmds__Var_32);
    }
  }
}

static MR_Box MR_CALL 
parse_tree__module_cmds__write_java_msys_shell_script_6_p_0_1(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
{
  {
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
    MR_String parse_tree__module_cmds__conv0_LambdaHeadVar__2_34;

    {
      parse_tree__module_cmds__conv0_LambdaHeadVar__2_34 = parse_tree__module_cmds__IntroducedFrom__func__write_java_msys_shell_script__866__1_1_f_0(((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv0_LambdaHeadVar__2_34));
    return parse_tree__module_cmds__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__module_cmds__write_java_msys_shell_script_6_p_0(
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_Word parse_tree__module_cmds__MainModuleName_8,
  MR_String parse_tree__module_cmds__JarFileName_9,
  MR_Word parse_tree__module_cmds__Stream_10)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__TypeCtorInfo_67_67;
    MR_Word parse_tree__module_cmds__MercuryStdLibs_12;
    MR_Word parse_tree__module_cmds__UserClasspath_13;
    MR_Word parse_tree__module_cmds__Java_Incl_Dirs0_14;
    MR_Word parse_tree__module_cmds__Java_Incl_Dirs_15;
    MR_String parse_tree__module_cmds__ClassPath_17;
    MR_String parse_tree__module_cmds__Java_18;
    MR_String parse_tree__module_cmds__ClassName_19;
    MR_Word parse_tree__module_cmds__Var_23;
    MR_String parse_tree__module_cmds__Var_24;
    MR_String parse_tree__module_cmds__Var_26;
    MR_Word parse_tree__module_cmds__Var_29;
    MR_Word parse_tree__module_cmds__Var_30;
    MR_Word parse_tree__module_cmds__Var_41;
    MR_Word parse_tree__module_cmds__Var_44;
    MR_Word parse_tree__module_cmds__Var_46;
    MR_Word parse_tree__module_cmds__Var_48;
    MR_Word parse_tree__module_cmds__Var_50;
    MR_Word parse_tree__module_cmds__Var_51;
    MR_Word parse_tree__module_cmds__Var_53;
    MR_Word parse_tree__module_cmds__Var_55;
    MR_Word parse_tree__module_cmds__Var_57;
    MR_Word parse_tree__module_cmds__Var_58;
    MR_Word parse_tree__module_cmds__Var_60;
    MR_Word parse_tree__module_cmds__Var_62;

    {
      parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(parse_tree__module_cmds__Globals_7, &parse_tree__module_cmds__MercuryStdLibs_12);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 524, &parse_tree__module_cmds__UserClasspath_13);
    }
    parse_tree__module_cmds__TypeCtorInfo_67_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      parse_tree__module_cmds__Var_26 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__JarFileName_9, (MR_String) "\"");
    }
    {
      parse_tree__module_cmds__Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "\"\044DIR/", parse_tree__module_cmds__Var_26);
    }
    {
      parse_tree__module_cmds__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_23, 0) = ((MR_Box) (parse_tree__module_cmds__Var_24));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__module_cmds__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_30, 0) = ((MR_Box) ((MR_String) "\044CLASSPATH"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_30, 1) = ((MR_Box) (parse_tree__module_cmds__UserClasspath_13));
    }
    {
      parse_tree__module_cmds__Var_29 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_67_67, parse_tree__module_cmds__MercuryStdLibs_12, parse_tree__module_cmds__Var_30);
    }
    {
      parse_tree__module_cmds__Java_Incl_Dirs0_14 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_67_67, parse_tree__module_cmds__Var_23, parse_tree__module_cmds__Var_29);
    }
    {
      parse_tree__module_cmds__Java_Incl_Dirs_15 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_67_67, parse_tree__module_cmds__TypeCtorInfo_67_67, (MR_Word) &parse_tree__module_cmds_scalar_common_4[1], parse_tree__module_cmds__Java_Incl_Dirs0_14);
    }
    {
      parse_tree__module_cmds__ClassPath_17 = mercury__string__join_list_2_f_0((MR_String) "\\;", parse_tree__module_cmds__Java_Incl_Dirs_15);
    }
    {
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 521, &parse_tree__module_cmds__Java_18);
    }
    {
      parse_tree__java_names__mangle_sym_name_for_java_4_p_0(parse_tree__module_cmds__MainModuleName_8, (MR_Integer) 0, (MR_String) ".", &parse_tree__module_cmds__ClassName_19);
    }
    {
      parse_tree__module_cmds__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_62, 0) = ((MR_Box) (parse_tree__module_cmds__ClassName_19));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[3])));
    }
    {
      parse_tree__module_cmds__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_60, 0) = ((MR_Box) ((MR_String) "exec \"\044JAVA\" jmercury."));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_60, 1) = ((MR_Box) (parse_tree__module_cmds__Var_62));
    }
    {
      parse_tree__module_cmds__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_58, 0) = ((MR_Box) ((MR_String) "}\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_58, 1) = ((MR_Box) (parse_tree__module_cmds__Var_60));
    }
    {
      parse_tree__module_cmds__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_57, 0) = ((MR_Box) (parse_tree__module_cmds__Java_18));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_57, 1) = ((MR_Box) (parse_tree__module_cmds__Var_58));
    }
    {
      parse_tree__module_cmds__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_55, 0) = ((MR_Box) ((MR_String) "JAVA=\044{JAVA:-"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_55, 1) = ((MR_Box) (parse_tree__module_cmds__Var_57));
    }
    {
      parse_tree__module_cmds__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_53, 0) = ((MR_Box) ((MR_String) "export CLASSPATH\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_53, 1) = ((MR_Box) (parse_tree__module_cmds__Var_55));
    }
    {
      parse_tree__module_cmds__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_51, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_51, 1) = ((MR_Box) (parse_tree__module_cmds__Var_53));
    }
    {
      parse_tree__module_cmds__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_50, 0) = ((MR_Box) (parse_tree__module_cmds__ClassPath_17));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_50, 1) = ((MR_Box) (parse_tree__module_cmds__Var_51));
    }
    {
      parse_tree__module_cmds__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_48, 0) = ((MR_Box) ((MR_String) "CLASSPATH="));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_48, 1) = ((MR_Box) (parse_tree__module_cmds__Var_50));
    }
    {
      parse_tree__module_cmds__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_46, 0) = ((MR_Box) ((MR_String) "DIR=\044( cd \"\044{DIR}\" && pwd -W )\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_46, 1) = ((MR_Box) (parse_tree__module_cmds__Var_48));
    }
    {
      parse_tree__module_cmds__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_44, 0) = ((MR_Box) ((MR_String) "DIR=\044{0%/*}\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_44, 1) = ((MR_Box) (parse_tree__module_cmds__Var_46));
    }
    {
      parse_tree__module_cmds__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_41, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_41, 1) = ((MR_Box) (parse_tree__module_cmds__Var_44));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__module_cmds__Stream_10, parse_tree__module_cmds__Var_41);
    }
  }
}

static void MR_CALL 
parse_tree__module_cmds__write_java_shell_script_6_p_0(
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_Word parse_tree__module_cmds__MainModuleName_8,
  MR_String parse_tree__module_cmds__JarFileName_9,
  MR_Word parse_tree__module_cmds__Stream_10)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__TypeCtorInfo_67_67;
    MR_Word parse_tree__module_cmds__MercuryStdLibs_12;
    MR_Word parse_tree__module_cmds__UserClasspath_13;
    MR_Word parse_tree__module_cmds__Java_Incl_Dirs_14;
    MR_String parse_tree__module_cmds__ClassPath_15;
    MR_String parse_tree__module_cmds__Java_16;
    MR_String parse_tree__module_cmds__ClassName_17;
    MR_Word parse_tree__module_cmds__Var_21;
    MR_String parse_tree__module_cmds__Var_22;
    MR_String parse_tree__module_cmds__Var_24;
    MR_Word parse_tree__module_cmds__Var_27;
    MR_Word parse_tree__module_cmds__Var_28;
    MR_Word parse_tree__module_cmds__Var_34;
    MR_Word parse_tree__module_cmds__Var_37;
    MR_Word parse_tree__module_cmds__Var_39;
    MR_Word parse_tree__module_cmds__Var_41;
    MR_Word parse_tree__module_cmds__Var_43;
    MR_Word parse_tree__module_cmds__Var_45;
    MR_Word parse_tree__module_cmds__Var_47;
    MR_Word parse_tree__module_cmds__Var_49;
    MR_Word parse_tree__module_cmds__Var_51;
    MR_Word parse_tree__module_cmds__Var_52;
    MR_Word parse_tree__module_cmds__Var_54;
    MR_Word parse_tree__module_cmds__Var_56;
    MR_Word parse_tree__module_cmds__Var_58;
    MR_Word parse_tree__module_cmds__Var_59;
    MR_Word parse_tree__module_cmds__Var_61;
    MR_Word parse_tree__module_cmds__Var_63;

    {
      parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(parse_tree__module_cmds__Globals_7, &parse_tree__module_cmds__MercuryStdLibs_12);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 524, &parse_tree__module_cmds__UserClasspath_13);
    }
    parse_tree__module_cmds__TypeCtorInfo_67_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      parse_tree__module_cmds__Var_24 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__JarFileName_9, (MR_String) "\"");
    }
    {
      parse_tree__module_cmds__Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "\"\044DIR/", parse_tree__module_cmds__Var_24);
    }
    {
      parse_tree__module_cmds__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_21, 0) = ((MR_Box) (parse_tree__module_cmds__Var_22));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__module_cmds__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_28, 0) = ((MR_Box) ((MR_String) "\044CLASSPATH"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_28, 1) = ((MR_Box) (parse_tree__module_cmds__UserClasspath_13));
    }
    {
      parse_tree__module_cmds__Var_27 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_67_67, parse_tree__module_cmds__MercuryStdLibs_12, parse_tree__module_cmds__Var_28);
    }
    {
      parse_tree__module_cmds__Java_Incl_Dirs_14 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_67_67, parse_tree__module_cmds__Var_21, parse_tree__module_cmds__Var_27);
    }
    {
      parse_tree__module_cmds__ClassPath_15 = mercury__string__join_list_2_f_0((MR_String) "\044{SEP}", parse_tree__module_cmds__Java_Incl_Dirs_14);
    }
    {
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 521, &parse_tree__module_cmds__Java_16);
    }
    {
      parse_tree__java_names__mangle_sym_name_for_java_4_p_0(parse_tree__module_cmds__MainModuleName_8, (MR_Integer) 0, (MR_String) ".", &parse_tree__module_cmds__ClassName_17);
    }
    {
      parse_tree__module_cmds__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_63, 0) = ((MR_Box) (parse_tree__module_cmds__ClassName_17));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[3])));
    }
    {
      parse_tree__module_cmds__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_61, 0) = ((MR_Box) ((MR_String) "exec \"\044JAVA\" jmercury."));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_61, 1) = ((MR_Box) (parse_tree__module_cmds__Var_63));
    }
    {
      parse_tree__module_cmds__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_59, 0) = ((MR_Box) ((MR_String) "}\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_59, 1) = ((MR_Box) (parse_tree__module_cmds__Var_61));
    }
    {
      parse_tree__module_cmds__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_58, 0) = ((MR_Box) (parse_tree__module_cmds__Java_16));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_58, 1) = ((MR_Box) (parse_tree__module_cmds__Var_59));
    }
    {
      parse_tree__module_cmds__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_56, 0) = ((MR_Box) ((MR_String) "JAVA=\044{JAVA:-"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_56, 1) = ((MR_Box) (parse_tree__module_cmds__Var_58));
    }
    {
      parse_tree__module_cmds__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_54, 0) = ((MR_Box) ((MR_String) "export CLASSPATH\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_54, 1) = ((MR_Box) (parse_tree__module_cmds__Var_56));
    }
    {
      parse_tree__module_cmds__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_52, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_52, 1) = ((MR_Box) (parse_tree__module_cmds__Var_54));
    }
    {
      parse_tree__module_cmds__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_51, 0) = ((MR_Box) (parse_tree__module_cmds__ClassPath_15));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_51, 1) = ((MR_Box) (parse_tree__module_cmds__Var_52));
    }
    {
      parse_tree__module_cmds__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_49, 0) = ((MR_Box) ((MR_String) "CLASSPATH="));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_49, 1) = ((MR_Box) (parse_tree__module_cmds__Var_51));
    }
    {
      parse_tree__module_cmds__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_47, 0) = ((MR_Box) ((MR_String) "esac\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_47, 1) = ((MR_Box) (parse_tree__module_cmds__Var_49));
    }
    {
      parse_tree__module_cmds__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_45, 0) = ((MR_Box) ((MR_String) "   *)  SEP=\';\' ;;\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_45, 1) = ((MR_Box) (parse_tree__module_cmds__Var_47));
    }
    {
      parse_tree__module_cmds__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_43, 0) = ((MR_Box) ((MR_String) "   \'\') SEP=\':\' ;;\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_43, 1) = ((MR_Box) (parse_tree__module_cmds__Var_45));
    }
    {
      parse_tree__module_cmds__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_41, 0) = ((MR_Box) ((MR_String) "case \044WINDIR in\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_41, 1) = ((MR_Box) (parse_tree__module_cmds__Var_43));
    }
    {
      parse_tree__module_cmds__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_39, 0) = ((MR_Box) ((MR_String) "DIR=\044( cd \"\044{DIR}\" && pwd -P )\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_39, 1) = ((MR_Box) (parse_tree__module_cmds__Var_41));
    }
    {
      parse_tree__module_cmds__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_37, 0) = ((MR_Box) ((MR_String) "DIR=\044{0%/*}\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_37, 1) = ((MR_Box) (parse_tree__module_cmds__Var_39));
    }
    {
      parse_tree__module_cmds__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_34, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_34, 1) = ((MR_Box) (parse_tree__module_cmds__Var_37));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__module_cmds__Stream_10, parse_tree__module_cmds__Var_34);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__module_cmds__use_win32_0_p_0(void)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;

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
	if (SUCCESS_INDICATOR) {
	}
parse_tree__module_cmds__succeeded  = SUCCESS_INDICATOR;
}
    return parse_tree__module_cmds__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__module_cmds__use_dotnet_0_p_0(void)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;

    {
      parse_tree__module_cmds__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
    return parse_tree__module_cmds__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_2_7_p_0(
  MR_Word parse_tree__module_cmds__TmpOutputFileStream_8,
  MR_Integer parse_tree__module_cmds__Byte_9,
  MR_Word * parse_tree__module_cmds__Continue_10,
  MR_Word parse_tree__module_cmds__HeadVar__4_11,
  MR_Word * parse_tree__module_cmds__Differ_12)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;

    {
      parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_97_114_121_95_105_110_112_117_116_95_115_116_114_101_97_109_95_99_109_112_95_50_95_95_91_52_93_95_48_7_p_0(parse_tree__module_cmds__TmpOutputFileStream_8, parse_tree__module_cmds__Byte_9, parse_tree__module_cmds__Continue_10, parse_tree__module_cmds__Differ_12);
    }
  }
}

static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_5_p_0_1(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
  MR_Box * parse_tree__module_cmds__wrapper_arg_4,
  MR_Box parse_tree__module_cmds__wrapper_arg_5,
  MR_Box * parse_tree__module_cmds__wrapper_arg_6)
{
  {
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
    MR_Word parse_tree__module_cmds__conv1_Continue_10;
    MR_Word parse_tree__module_cmds__conv0_Differ_12;

    {
      parse_tree__module_cmds__binary_input_stream_cmp_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Integer) parse_tree__module_cmds__wrapper_arg_1), &parse_tree__module_cmds__conv1_Continue_10, ((MR_Word) parse_tree__module_cmds__wrapper_arg_3), &parse_tree__module_cmds__conv0_Differ_12);
    }
    *parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv1_Continue_10));
    *parse_tree__module_cmds__wrapper_arg_4 = ((MR_Box) (parse_tree__module_cmds__conv0_Differ_12));
  }
}

static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_5_p_0(
  MR_Word parse_tree__module_cmds__OutputFileStream_6,
  MR_Word parse_tree__module_cmds__TmpOutputFileStream_7,
  MR_Word * parse_tree__module_cmds__FilesDiffer_8)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__FilesDiffer0_10;
    MR_Word parse_tree__module_cmds__Var_16;
    MR_Word parse_tree__module_cmds__Var_20;
    MR_Word parse_tree__module_cmds__Var_21;

    {
      parse_tree__module_cmds__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_16, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_16, 1) = ((MR_Box) (parse_tree__module_cmds__binary_input_stream_cmp_5_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_16, 3) = ((MR_Box) (parse_tree__module_cmds__TmpOutputFileStream_7));
    }
    {
      mercury__io__binary_input_stream_foldl2_io_maybe_stop_6_p_0((MR_Word) &parse_tree__module_cmds_scalar_common_1[1], parse_tree__module_cmds__OutputFileStream_6, parse_tree__module_cmds__Var_16, ((MR_Box) (&parse_tree__module_cmds_scalar_common_8[0])), &parse_tree__module_cmds__FilesDiffer0_10);
    }
    parse_tree__module_cmds__succeeded = ((MR_tag((MR_Word) parse_tree__module_cmds__FilesDiffer0_10)) == (MR_mktag((MR_Integer) 0)));
    if (parse_tree__module_cmds__succeeded)
      {
        parse_tree__module_cmds__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__FilesDiffer0_10, (MR_Integer) 0)));
        parse_tree__module_cmds__succeeded = ((MR_tag((MR_Word) parse_tree__module_cmds__Var_20)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__module_cmds__succeeded)
          {
            parse_tree__module_cmds__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_20, (MR_Integer) 0)));
            parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__Var_21 == (MR_Integer) 0);
          }
      }
    if (parse_tree__module_cmds__succeeded)
      {
        MR_Word parse_tree__module_cmds__TmpByteResult2_11;

        {
          mercury__io__read_byte_4_p_0(parse_tree__module_cmds__TmpOutputFileStream_7, &parse_tree__module_cmds__TmpByteResult2_11);
        }
        switch (MR_tag((MR_Word) parse_tree__module_cmds__TmpByteResult2_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *parse_tree__module_cmds__FilesDiffer_8 = parse_tree__module_cmds__FilesDiffer0_10;
            break;
          case (MR_Integer) 1:
            {
              *parse_tree__module_cmds__FilesDiffer_8 = (MR_Word) &parse_tree__module_cmds_scalar_common_8[2];
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__module_cmds__Error_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_cmds__TmpByteResult2_11, (MR_Integer) 0)));
              MR_Word parse_tree__module_cmds__Var_23;

              {
                parse_tree__module_cmds__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_23, 0) = ((MR_Box) (parse_tree__module_cmds__Error_13));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__module_cmds__FilesDiffer_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_cmds__Var_23));
              }
            }
            break;
        }
      }
    else
      *parse_tree__module_cmds__FilesDiffer_8 = parse_tree__module_cmds__FilesDiffer0_10;
  }
}

static void MR_CALL 
parse_tree__module_cmds__update_interface_create_file_7_p_0(
  MR_Word parse_tree__module_cmds__Globals_8,
  MR_String parse_tree__module_cmds__Msg_9,
  MR_String parse_tree__module_cmds__OutputFileName_10,
  MR_String parse_tree__module_cmds__TmpOutputFileName_11,
  MR_Word * parse_tree__module_cmds__Result_12)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__Verbose_14;
    MR_Word parse_tree__module_cmds__MoveRes_15;
    MR_String parse_tree__module_cmds__Var_21;
    MR_String parse_tree__module_cmds__Var_24;
    MR_String parse_tree__module_cmds__Var_25;
    MR_String parse_tree__module_cmds__Var_27;
    MR_Word parse_tree__module_cmds__Var_17;

    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_8, (MR_Integer) 56, &parse_tree__module_cmds__Verbose_14);
    }
    {
      parse_tree__module_cmds__Var_27 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__Msg_9, (MR_String) ".\n");
    }
    {
      parse_tree__module_cmds__Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "\' has ", parse_tree__module_cmds__Var_27);
    }
    {
      parse_tree__module_cmds__Var_24 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__OutputFileName_10, parse_tree__module_cmds__Var_25);
    }
    {
      parse_tree__module_cmds__Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "% \140", parse_tree__module_cmds__Var_24);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__Var_21);
    }
    {
      parse_tree__module_cmds__copy_file_6_p_0(parse_tree__module_cmds__Globals_8, parse_tree__module_cmds__TmpOutputFileName_11, parse_tree__module_cmds__OutputFileName_10, &parse_tree__module_cmds__MoveRes_15);
    }
    if ((parse_tree__module_cmds__MoveRes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__module_cmds__Result_12 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__module_cmds__MoveError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MoveRes_15, (MR_Integer) 0)));
        MR_String parse_tree__module_cmds__Var_30;
        MR_String parse_tree__module_cmds__Var_33;
        MR_String parse_tree__module_cmds__Var_34;
        MR_String parse_tree__module_cmds__Var_36;

        *parse_tree__module_cmds__Result_12 = (MR_Integer) 2;
        {
          parse_tree__module_cmds__Var_36 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__MoveError_16);
        }
        {
          parse_tree__module_cmds__Var_34 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", parse_tree__module_cmds__Var_36);
        }
        {
          parse_tree__module_cmds__Var_33 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__OutputFileName_10, parse_tree__module_cmds__Var_34);
        }
        {
          parse_tree__module_cmds__Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "Error creating \140", parse_tree__module_cmds__Var_33);
        }
        {
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__Var_30);
        }
        {
          mercury__io__nl_2_p_0();
        }
      }
    {
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__TmpOutputFileName_11, &parse_tree__module_cmds__Var_17);
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__create_launcher_batch_file_6_p_0(
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_Word parse_tree__module_cmds__MainModuleName_8,
  MR_Word parse_tree__module_cmds__Pred_9,
  MR_Word * parse_tree__module_cmds__Succeeded_10)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_String parse_tree__module_cmds__FileName_13;
    MR_Word parse_tree__module_cmds__Verbose_14;
    MR_Word parse_tree__module_cmds__OpenResult_16;
    MR_String parse_tree__module_cmds__Var_24;
    MR_String parse_tree__module_cmds__Var_27;
    MR_Word parse_tree__module_cmds__Var_15;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__MainModuleName_8, (MR_String) ".bat", (MR_Integer) 0, &parse_tree__module_cmds__FileName_13);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 56, &parse_tree__module_cmds__Verbose_14);
    }
    {
      parse_tree__module_cmds__Var_27 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_13, (MR_String) "\'...\n");
    }
    {
      parse_tree__module_cmds__Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating batch file \140", parse_tree__module_cmds__Var_27);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__Var_24);
    }
    {
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__Var_15);
    }
    {
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__OpenResult_16);
    }
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_16)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__module_cmds__Message_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
        MR_String parse_tree__module_cmds__Var_33;

        {
          parse_tree__module_cmds__Var_33 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_18);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_batch_file\'/6", parse_tree__module_cmds__Var_33);
          return;
        }
      }
    else
      {
        MR_Word parse_tree__module_cmds__Stream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
        void MR_CALL (* parse_tree__module_cmds__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Pred_9, (MR_Integer) 1)));
        MR_Box parse_tree__module_cmds__conv1_STATE_VARIABLE_IO_34_34;

        {
          parse_tree__module_cmds__func_0(((MR_Box) parse_tree__module_cmds__Pred_9), ((MR_Box) (parse_tree__module_cmds__Stream_17)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__module_cmds__conv1_STATE_VARIABLE_IO_34_34);
        }
        {
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_17);
        }
        *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
      }
  }
}

void MR_CALL 
parse_tree__module_cmds__create_launcher_shell_script_6_p_0(
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_Word parse_tree__module_cmds__MainModuleName_8,
  MR_Word parse_tree__module_cmds__Pred_9,
  MR_Word * parse_tree__module_cmds__Succeeded_10)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_String parse_tree__module_cmds__FileName_13;
    MR_Word parse_tree__module_cmds__Verbose_14;
    MR_Word parse_tree__module_cmds__OpenResult_16;
    MR_String parse_tree__module_cmds__Var_26;
    MR_String parse_tree__module_cmds__Var_29;
    MR_Word parse_tree__module_cmds__Var_15;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__MainModuleName_8, (MR_String) "", (MR_Integer) 0, &parse_tree__module_cmds__FileName_13);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 56, &parse_tree__module_cmds__Verbose_14);
    }
    {
      parse_tree__module_cmds__Var_29 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_13, (MR_String) "\'...\n");
    }
    {
      parse_tree__module_cmds__Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", parse_tree__module_cmds__Var_29);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__Var_26);
    }
    {
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__Var_15);
    }
    {
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__OpenResult_16);
    }
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_16)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String parse_tree__module_cmds__Var_35;
        MR_Word parse_tree__module_cmds__Message_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));

        {
          parse_tree__module_cmds__Var_35 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_49);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__Var_35);
          return;
        }
      }
    else
      {
        MR_Word parse_tree__module_cmds__Stream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
        MR_Word parse_tree__module_cmds__ChmodResult_18;
        MR_String parse_tree__module_cmds__Var_38;
        void MR_CALL (* parse_tree__module_cmds__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Pred_9, (MR_Integer) 1)));
        MR_Box parse_tree__module_cmds__conv1_STATE_VARIABLE_IO_36_36;

        {
          parse_tree__module_cmds__func_0(((MR_Box) parse_tree__module_cmds__Pred_9), ((MR_Box) (parse_tree__module_cmds__Stream_17)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__module_cmds__conv1_STATE_VARIABLE_IO_36_36);
        }
        {
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_17);
        }
        {
          parse_tree__module_cmds__Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", parse_tree__module_cmds__FileName_13);
        }
        {
          mercury__io__call_system_4_p_0(parse_tree__module_cmds__Var_38, &parse_tree__module_cmds__ChmodResult_18);
        }
        if (((MR_tag((MR_Word) parse_tree__module_cmds__ChmodResult_18)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__module_cmds__Message_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__ChmodResult_18, (MR_Integer) 0)));
            MR_String parse_tree__module_cmds__Var_43;

            {
              parse_tree__module_cmds__Var_43 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_20);
            }
            {
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__Var_43);
              return;
            }
          }
        else
          {
            MR_Integer parse_tree__module_cmds__Status_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__ChmodResult_18, (MR_Integer) 0)));

            parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__Status_19 == (MR_Integer) 0);
            if (parse_tree__module_cmds__succeeded)
              {
                *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
                {
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, (MR_String) "% done.\n");
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_String) "chmod exit status != 0");
                  return;
                }
              }
          }
      }
  }
}

void MR_CALL 
parse_tree__module_cmds__create_erlang_shell_script_5_p_0(
  MR_Word parse_tree__module_cmds__Globals_6,
  MR_Word parse_tree__module_cmds__MainModuleName_7,
  MR_Word * parse_tree__module_cmds__Succeeded_8)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__TargetEnvType_10;

    {
      libs__globals__get_target_env_type_2_p_0(parse_tree__module_cmds__Globals_6, &parse_tree__module_cmds__TargetEnvType_10);
    }
    switch (parse_tree__module_cmds__TargetEnvType_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 2:
      case (MR_Integer) 0:
        {
          MR_String parse_tree__module_cmds__FileName_31;
          MR_Word parse_tree__module_cmds__Verbose_32;
          MR_Word parse_tree__module_cmds__OpenResult_34;
          MR_String parse_tree__module_cmds__Var_42;
          MR_String parse_tree__module_cmds__Var_45;
          MR_Word parse_tree__module_cmds__Var_33;

          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, (MR_String) "", (MR_Integer) 0, &parse_tree__module_cmds__FileName_31);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 56, &parse_tree__module_cmds__Verbose_32);
          }
          {
            parse_tree__module_cmds__Var_45 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_31, (MR_String) "\'...\n");
          }
          {
            parse_tree__module_cmds__Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", parse_tree__module_cmds__Var_45);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_32, parse_tree__module_cmds__Var_42);
          }
          {
            mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_31, &parse_tree__module_cmds__Var_33);
          }
          {
            mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_31, &parse_tree__module_cmds__OpenResult_34);
          }
          if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_34)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_String parse_tree__module_cmds__Var_51;
              MR_Word parse_tree__module_cmds__Message_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_34, (MR_Integer) 0)));

              {
                parse_tree__module_cmds__Var_51 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_65);
              }
              {
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__Var_51);
                return;
              }
            }
          else
            {
              MR_Word parse_tree__module_cmds__Stream_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_34, (MR_Integer) 0)));
              MR_Word parse_tree__module_cmds__ChmodResult_36;
              MR_String parse_tree__module_cmds__Var_54;

              {
                parse_tree__module_cmds__write_erlang_shell_script_5_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Stream_35);
              }
              {
                mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_35);
              }
              {
                parse_tree__module_cmds__Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", parse_tree__module_cmds__FileName_31);
              }
              {
                mercury__io__call_system_4_p_0(parse_tree__module_cmds__Var_54, &parse_tree__module_cmds__ChmodResult_36);
              }
              if (((MR_tag((MR_Word) parse_tree__module_cmds__ChmodResult_36)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word parse_tree__module_cmds__Message_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__ChmodResult_36, (MR_Integer) 0)));
                  MR_String parse_tree__module_cmds__Var_59;

                  {
                    parse_tree__module_cmds__Var_59 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_38);
                  }
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__Var_59);
                    return;
                  }
                }
              else
                {
                  MR_Integer parse_tree__module_cmds__Status_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__ChmodResult_36, (MR_Integer) 0)));

                  parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__Status_37 == (MR_Integer) 0);
                  if (parse_tree__module_cmds__succeeded)
                    {
                      *parse_tree__module_cmds__Succeeded_8 = (MR_Integer) 1;
                      {
                        libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_32, (MR_String) "% done.\n");
                      }
                    }
                  else
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_String) "chmod exit status != 0");
                        return;
                      }
                    }
                }
            }
        }
        break;
      case (MR_Integer) 4:
      case (MR_Integer) 3:
        {
          parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_49_95_95_91_53_93_95_48_6_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Succeeded_8);
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__get_env_classpath_3_p_0(
  MR_String * parse_tree__module_cmds__Classpath_4)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__MaybeCP_6;

    {
      mercury__io__get_environment_var_4_p_0((MR_String) "CLASSPATH", &parse_tree__module_cmds__MaybeCP_6);
    }
    if ((parse_tree__module_cmds__MaybeCP_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word parse_tree__module_cmds__MaybeJCP_7;

        {
          mercury__io__get_environment_var_4_p_0((MR_String) "java.class.path", &parse_tree__module_cmds__MaybeJCP_7);
        }
        if ((parse_tree__module_cmds__MaybeJCP_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__module_cmds__Classpath_4 = (MR_String) "";
        else
          *parse_tree__module_cmds__Classpath_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeJCP_7, (MR_Integer) 0)));
      }
    else
      *parse_tree__module_cmds__Classpath_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeCP_6, (MR_Integer) 0)));
  }
}

void MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(
  MR_Word parse_tree__module_cmds__Globals_4,
  MR_String parse_tree__module_cmds__ClassFiles_5,
  MR_String * parse_tree__module_cmds__ListClassFiles_6)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__UseSubdirs_7;
    MR_Word parse_tree__module_cmds__UseGradeSubdirs_8;
    MR_Word parse_tree__module_cmds__AnySubdirs_9;

    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_4, (MR_Integer) 647, &parse_tree__module_cmds__UseSubdirs_7);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_4, (MR_Integer) 648, &parse_tree__module_cmds__UseGradeSubdirs_8);
    }
    {
      parse_tree__module_cmds__AnySubdirs_9 = mercury__bool__or_2_f_0(parse_tree__module_cmds__UseSubdirs_7, parse_tree__module_cmds__UseGradeSubdirs_8);
    }
    switch (parse_tree__module_cmds__AnySubdirs_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *parse_tree__module_cmds__ListClassFiles_6 = parse_tree__module_cmds__ClassFiles_5;
        break;
      case (MR_Integer) 1:
        {
          MR_String parse_tree__module_cmds__ClassSubdir_10;
          MR_String parse_tree__module_cmds__Var_14;
          MR_String parse_tree__module_cmds__Var_15;
          MR_String parse_tree__module_cmds__Var_17;
          MR_String parse_tree__module_cmds__Var_19;
          MR_String parse_tree__module_cmds__Var_20;
          MR_String parse_tree__module_cmds__Var_22;
          MR_String parse_tree__module_cmds__Var_24;

          {
            parse_tree__file_names__get_class_dir_name_2_p_0(parse_tree__module_cmds__Globals_4, &parse_tree__module_cmds__ClassSubdir_10);
          }
          {
            parse_tree__module_cmds__Var_24 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__ClassSubdir_10, (MR_String) "/| |\'\140");
          }
          {
            parse_tree__module_cmds__Var_22 = mercury__string__f_43_43_2_f_0((MR_String) " | sed \'s| \'", parse_tree__module_cmds__Var_24);
          }
          {
            parse_tree__module_cmds__Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "\"", parse_tree__module_cmds__Var_22);
          }
          {
            parse_tree__module_cmds__Var_19 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__ClassFiles_5, parse_tree__module_cmds__Var_20);
          }
          {
            parse_tree__module_cmds__Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\140echo \" ", parse_tree__module_cmds__Var_19);
          }
          {
            parse_tree__module_cmds__Var_15 = mercury__string__f_43_43_2_f_0((MR_String) " \\\n", parse_tree__module_cmds__Var_17);
          }
          {
            parse_tree__module_cmds__Var_14 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__ClassSubdir_10, parse_tree__module_cmds__Var_15);
          }
          {
            *parse_tree__module_cmds__ListClassFiles_6 = mercury__string__f_43_43_2_f_0((MR_String) "-C ", parse_tree__module_cmds__Var_14);
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_3(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
{
  {
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
    MR_String parse_tree__module_cmds__conv3_HeadVar__3_3;

    {
      parse_tree__module_cmds__conv3_HeadVar__3_3 = mercury__string__remove_prefix_if_present_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv3_HeadVar__3_3));
    return parse_tree__module_cmds__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_2(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
  MR_Box * parse_tree__module_cmds__wrapper_arg_4,
  MR_Box parse_tree__module_cmds__wrapper_arg_5,
  MR_Box * parse_tree__module_cmds__wrapper_arg_6,
  MR_Box parse_tree__module_cmds__wrapper_arg_7,
  MR_Box * parse_tree__module_cmds__wrapper_arg_8)
{
  {
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
    MR_Word parse_tree__module_cmds__conv2_Continue_14;
    MR_Word parse_tree__module_cmds__conv1_STATE_VARIABLE_Acc_20;

    {
      parse_tree__module_cmds__accumulate_nested_class_files_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1), ((MR_String) parse_tree__module_cmds__wrapper_arg_2), ((MR_Word) parse_tree__module_cmds__wrapper_arg_3), &parse_tree__module_cmds__conv2_Continue_14, ((MR_Word) parse_tree__module_cmds__wrapper_arg_5), &parse_tree__module_cmds__conv1_STATE_VARIABLE_Acc_20);
    }
    *parse_tree__module_cmds__wrapper_arg_4 = ((MR_Box) (parse_tree__module_cmds__conv2_Continue_14));
    *parse_tree__module_cmds__wrapper_arg_6 = ((MR_Box) (parse_tree__module_cmds__conv1_STATE_VARIABLE_Acc_20));
  }
}

static MR_bool MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_1(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
  MR_Box * parse_tree__module_cmds__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
    MR_String parse_tree__module_cmds__conv0_ClassPrefix_4;

    {
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds__make_nested_class_prefix_2_p_0(((MR_String) parse_tree__module_cmds__wrapper_arg_1), &parse_tree__module_cmds__conv0_ClassPrefix_4);
    }
    if (parse_tree__module_cmds__succeeded)
      {
        *parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv0_ClassPrefix_4));
        parse_tree__module_cmds__succeeded = MR_TRUE;
      }
    return parse_tree__module_cmds__succeeded;
  }
}

void MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0(
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_Word parse_tree__module_cmds__MainClassFiles_8,
  MR_String * parse_tree__module_cmds__ClassSubDir_9,
  MR_Word * parse_tree__module_cmds__ListClassFiles_10)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__TypeCtorInfo_42_42;
    MR_Word parse_tree__module_cmds__UseSubdirs_12;
    MR_Word parse_tree__module_cmds__UseGradeSubdirs_13;
    MR_Word parse_tree__module_cmds__AnySubdirs_14;
    MR_Word parse_tree__module_cmds__NestedClassPrefixes_15;
    MR_Word parse_tree__module_cmds__NestedClassPrefixesSet_16;
    MR_String parse_tree__module_cmds__SearchDir_17;
    MR_Word parse_tree__module_cmds__Result_19;
    MR_Word parse_tree__module_cmds__Var_32;

    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 647, &parse_tree__module_cmds__UseSubdirs_12);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 648, &parse_tree__module_cmds__UseGradeSubdirs_13);
    }
    {
      parse_tree__module_cmds__AnySubdirs_14 = mercury__bool__or_2_f_0(parse_tree__module_cmds__UseSubdirs_12, parse_tree__module_cmds__UseGradeSubdirs_13);
    }
    switch (parse_tree__module_cmds__AnySubdirs_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *parse_tree__module_cmds__ClassSubDir_9 = mercury__dir__this_directory_0_f_0();
        }
        break;
      case (MR_Integer) 1:
        {
          parse_tree__file_names__get_class_dir_name_2_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__ClassSubDir_9);
        }
        break;
    }
    parse_tree__module_cmds__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__filter_map_3_p_0(parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__TypeCtorInfo_42_42, (MR_Word) &parse_tree__module_cmds_scalar_common_4[0], parse_tree__module_cmds__MainClassFiles_8, &parse_tree__module_cmds__NestedClassPrefixes_15);
    }
    {
      parse_tree__module_cmds__NestedClassPrefixesSet_16 = mercury__set__from_list_1_f_0(parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__NestedClassPrefixes_15);
    }
    {
      parse_tree__module_cmds__SearchDir_17 = mercury__dir__f_slash_2_f_0(*parse_tree__module_cmds__ClassSubDir_9, (MR_String) "jmercury");
    }
    {
      parse_tree__module_cmds__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_32, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_32, 1) = ((MR_Box) (parse_tree__module_cmds__list_class_files_for_jar_6_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_32, 3) = ((MR_Box) (parse_tree__module_cmds__NestedClassPrefixesSet_16));
    }
    {
      mercury__dir__recursive_foldl2_7_p_0((MR_Word) &parse_tree__module_cmds_scalar_common_1[0], parse_tree__module_cmds__Var_32, parse_tree__module_cmds__SearchDir_17, (MR_Integer) 1, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &parse_tree__module_cmds__Result_19);
    }
    if (((MR_tag((MR_Word) parse_tree__module_cmds__Result_19)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__module_cmds__Error_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_19, (MR_Integer) 1)));
        MR_String parse_tree__module_cmds__Var_37;
        MR_Word parse_tree__module_cmds__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_19, (MR_Integer) 0)));

        {
          parse_tree__module_cmds__Var_37 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Error_25);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.list_class_files_for_jar\'/6", parse_tree__module_cmds__Var_37);
          return;
        }
      }
    else
      {
        MR_Word parse_tree__module_cmds__NestedClassFiles_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Result_19, (MR_Integer) 0)));
        MR_Word parse_tree__module_cmds__AllClassFiles0_21;
        MR_Word parse_tree__module_cmds__AllClassFiles_22;
        MR_String parse_tree__module_cmds__Var_54;

        {
          parse_tree__module_cmds__AllClassFiles0_21 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__MainClassFiles_8, parse_tree__module_cmds__NestedClassFiles_20);
        }
        {
          parse_tree__module_cmds__Var_54 = mercury__dir__this_directory_0_f_0();
        }
        parse_tree__module_cmds__succeeded = (strcmp(*parse_tree__module_cmds__ClassSubDir_9, parse_tree__module_cmds__Var_54) == 0);
        if (parse_tree__module_cmds__succeeded)
          parse_tree__module_cmds__AllClassFiles_22 = parse_tree__module_cmds__AllClassFiles0_21;
        else
          {
            MR_String parse_tree__module_cmds__ClassSubDirSep_23;
            MR_Word parse_tree__module_cmds__Var_39;

            {
              parse_tree__module_cmds__ClassSubDirSep_23 = mercury__dir__f_slash_2_f_0(*parse_tree__module_cmds__ClassSubDir_9, (MR_String) "");
            }
            {
              parse_tree__module_cmds__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_39, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_39, 1) = ((MR_Box) (parse_tree__module_cmds__list_class_files_for_jar_6_p_0_3));
              MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_39, 3) = ((MR_Box) (parse_tree__module_cmds__ClassSubDirSep_23));
            }
            {
              parse_tree__module_cmds__AllClassFiles_22 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__Var_39, parse_tree__module_cmds__AllClassFiles0_21);
            }
          }
        {
          mercury__list__sort_2_p_0(parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__AllClassFiles_22, parse_tree__module_cmds__ListClassFiles_10);
        }
      }
  }
}

void MR_CALL 
parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(
  MR_Word parse_tree__module_cmds__Globals_3,
  MR_Word * parse_tree__module_cmds__STATE_VARIABLE_StdLibs_9)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__MaybeStdlibDir_5;
    MR_Word parse_tree__module_cmds__STATE_VARIABLE_StdLibs_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      libs__globals__lookup_maybe_string_option_3_p_0(parse_tree__module_cmds__Globals_3, (MR_Integer) 554, &parse_tree__module_cmds__MaybeStdlibDir_5);
    }
    if ((parse_tree__module_cmds__MaybeStdlibDir_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__module_cmds__STATE_VARIABLE_StdLibs_9 = parse_tree__module_cmds__STATE_VARIABLE_StdLibs_10_10;
    else
      {
        MR_Word parse_tree__module_cmds__TypeCtorInfo_44_44;
        MR_String parse_tree__module_cmds__StdLibDir_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeStdlibDir_5, (MR_Integer) 0)));
        MR_String parse_tree__module_cmds__GradeDir_7;
        MR_Word parse_tree__module_cmds__SourceDebug_8;
        MR_Word parse_tree__module_cmds__STATE_VARIABLE_StdLibs_26_26;
        MR_String parse_tree__module_cmds__Var_31;
        MR_Word parse_tree__module_cmds__STATE_VARIABLE_StdLibs_32_32;
        MR_String parse_tree__module_cmds__Var_33;
        MR_String parse_tree__module_cmds__Var_34;
        MR_String parse_tree__module_cmds__Var_37;
        MR_String parse_tree__module_cmds__Var_39;
        MR_String parse_tree__module_cmds__Var_40;

        {
          libs__compute_grade__grade_directory_component_2_p_0(parse_tree__module_cmds__Globals_3, &parse_tree__module_cmds__GradeDir_7);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_3, (MR_Integer) 244, &parse_tree__module_cmds__SourceDebug_8);
        }
        switch (parse_tree__module_cmds__SourceDebug_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__module_cmds__STATE_VARIABLE_StdLibs_26_26 = parse_tree__module_cmds__STATE_VARIABLE_StdLibs_10_10;
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__module_cmds__TypeCtorInfo_43_43;
              MR_String parse_tree__module_cmds__Var_13;
              MR_Word parse_tree__module_cmds__STATE_VARIABLE_StdLibs_14_14;
              MR_String parse_tree__module_cmds__Var_15;
              MR_String parse_tree__module_cmds__Var_16;
              MR_String parse_tree__module_cmds__Var_19;
              MR_Word parse_tree__module_cmds__STATE_VARIABLE_StdLibs_20_20;
              MR_String parse_tree__module_cmds__Var_21;
              MR_String parse_tree__module_cmds__Var_22;
              MR_String parse_tree__module_cmds__Var_25;
              MR_String parse_tree__module_cmds__Var_27;
              MR_String parse_tree__module_cmds__Var_28;

              {
                parse_tree__module_cmds__Var_16 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_6, (MR_String) "lib");
              }
              {
                parse_tree__module_cmds__Var_15 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__Var_16, parse_tree__module_cmds__GradeDir_7);
              }
              {
                parse_tree__module_cmds__Var_13 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__Var_15, (MR_String) "mer_browser.jar");
              }
              parse_tree__module_cmds__TypeCtorInfo_43_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              {
                mercury__list__cons_3_p_0(parse_tree__module_cmds__TypeCtorInfo_43_43, ((MR_Box) (parse_tree__module_cmds__Var_13)), parse_tree__module_cmds__STATE_VARIABLE_StdLibs_10_10, &parse_tree__module_cmds__STATE_VARIABLE_StdLibs_14_14);
              }
              {
                parse_tree__module_cmds__Var_22 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_6, (MR_String) "lib");
              }
              {
                parse_tree__module_cmds__Var_21 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__Var_22, parse_tree__module_cmds__GradeDir_7);
              }
              {
                parse_tree__module_cmds__Var_19 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__Var_21, (MR_String) "mer_mdbcomp.jar");
              }
              {
                mercury__list__cons_3_p_0(parse_tree__module_cmds__TypeCtorInfo_43_43, ((MR_Box) (parse_tree__module_cmds__Var_19)), parse_tree__module_cmds__STATE_VARIABLE_StdLibs_14_14, &parse_tree__module_cmds__STATE_VARIABLE_StdLibs_20_20);
              }
              {
                parse_tree__module_cmds__Var_28 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_6, (MR_String) "lib");
              }
              {
                parse_tree__module_cmds__Var_27 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__Var_28, parse_tree__module_cmds__GradeDir_7);
              }
              {
                parse_tree__module_cmds__Var_25 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__Var_27, (MR_String) "mer_ssdb.jar");
              }
              {
                mercury__list__cons_3_p_0(parse_tree__module_cmds__TypeCtorInfo_43_43, ((MR_Box) (parse_tree__module_cmds__Var_25)), parse_tree__module_cmds__STATE_VARIABLE_StdLibs_20_20, &parse_tree__module_cmds__STATE_VARIABLE_StdLibs_26_26);
              }
            }
            break;
        }
        {
          parse_tree__module_cmds__Var_34 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_6, (MR_String) "lib");
        }
        {
          parse_tree__module_cmds__Var_33 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__Var_34, parse_tree__module_cmds__GradeDir_7);
        }
        {
          parse_tree__module_cmds__Var_31 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__Var_33, (MR_String) "mer_std.jar");
        }
        parse_tree__module_cmds__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          mercury__list__cons_3_p_0(parse_tree__module_cmds__TypeCtorInfo_44_44, ((MR_Box) (parse_tree__module_cmds__Var_31)), parse_tree__module_cmds__STATE_VARIABLE_StdLibs_26_26, &parse_tree__module_cmds__STATE_VARIABLE_StdLibs_32_32);
        }
        {
          parse_tree__module_cmds__Var_40 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_6, (MR_String) "lib");
        }
        {
          parse_tree__module_cmds__Var_39 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__Var_40, parse_tree__module_cmds__GradeDir_7);
        }
        {
          parse_tree__module_cmds__Var_37 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__Var_39, (MR_String) "mer_rt.jar");
        }
        {
          mercury__list__cons_3_p_0(parse_tree__module_cmds__TypeCtorInfo_44_44, ((MR_Box) (parse_tree__module_cmds__Var_37)), parse_tree__module_cmds__STATE_VARIABLE_StdLibs_32_32, parse_tree__module_cmds__STATE_VARIABLE_StdLibs_9);
        }
      }
  }
}

void MR_CALL 
parse_tree__module_cmds__create_java_shell_script_5_p_0(
  MR_Word parse_tree__module_cmds__Globals_6,
  MR_Word parse_tree__module_cmds__MainModuleName_7,
  MR_Word * parse_tree__module_cmds__Succeeded_8)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_String parse_tree__module_cmds__JarFileName_11;
    MR_Word parse_tree__module_cmds__TargetEnvType_12;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, (MR_String) ".jar", (MR_Integer) 1, &parse_tree__module_cmds__JarFileName_11);
    }
    {
      libs__globals__get_target_env_type_2_p_0(parse_tree__module_cmds__Globals_6, &parse_tree__module_cmds__TargetEnvType_12);
    }
    switch (parse_tree__module_cmds__TargetEnvType_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_String parse_tree__module_cmds__FileName_40;
          MR_Word parse_tree__module_cmds__Verbose_41;
          MR_Word parse_tree__module_cmds__OpenResult_43;
          MR_String parse_tree__module_cmds__Var_51;
          MR_String parse_tree__module_cmds__Var_54;
          MR_Word parse_tree__module_cmds__Var_42;

          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, (MR_String) "", (MR_Integer) 0, &parse_tree__module_cmds__FileName_40);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 56, &parse_tree__module_cmds__Verbose_41);
          }
          {
            parse_tree__module_cmds__Var_54 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_40, (MR_String) "\'...\n");
          }
          {
            parse_tree__module_cmds__Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", parse_tree__module_cmds__Var_54);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_41, parse_tree__module_cmds__Var_51);
          }
          {
            mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_40, &parse_tree__module_cmds__Var_42);
          }
          {
            mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_40, &parse_tree__module_cmds__OpenResult_43);
          }
          if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_43)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_String parse_tree__module_cmds__Var_60;
              MR_Word parse_tree__module_cmds__Message_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_43, (MR_Integer) 0)));

              {
                parse_tree__module_cmds__Var_60 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_74);
              }
              {
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__Var_60);
                return;
              }
            }
          else
            {
              MR_Word parse_tree__module_cmds__Stream_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_43, (MR_Integer) 0)));
              MR_Word parse_tree__module_cmds__ChmodResult_45;
              MR_String parse_tree__module_cmds__Var_63;

              {
                parse_tree__module_cmds__write_java_shell_script_6_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__JarFileName_11, parse_tree__module_cmds__Stream_44);
              }
              {
                mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_44);
              }
              {
                parse_tree__module_cmds__Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", parse_tree__module_cmds__FileName_40);
              }
              {
                mercury__io__call_system_4_p_0(parse_tree__module_cmds__Var_63, &parse_tree__module_cmds__ChmodResult_45);
              }
              if (((MR_tag((MR_Word) parse_tree__module_cmds__ChmodResult_45)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word parse_tree__module_cmds__Message_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__ChmodResult_45, (MR_Integer) 0)));
                  MR_String parse_tree__module_cmds__Var_68;

                  {
                    parse_tree__module_cmds__Var_68 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_47);
                  }
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__Var_68);
                    return;
                  }
                }
              else
                {
                  MR_Integer parse_tree__module_cmds__Status_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__ChmodResult_45, (MR_Integer) 0)));

                  parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__Status_46 == (MR_Integer) 0);
                  if (parse_tree__module_cmds__succeeded)
                    {
                      *parse_tree__module_cmds__Succeeded_8 = (MR_Integer) 1;
                      {
                        libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_41, (MR_String) "% done.\n");
                      }
                    }
                  else
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_String) "chmod exit status != 0");
                        return;
                      }
                    }
                }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_115_104_101_108_108_95_115_99_114_105_112_116_95_95_104_111_53_95_95_91_54_93_95_48_6_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__JarFileName_11, parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Succeeded_8);
        }
        break;
      case (MR_Integer) 4:
      case (MR_Integer) 3:
        {
          parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_51_95_95_91_54_93_95_48_6_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__JarFileName_11, parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Succeeded_8);
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__make_command_string_3_p_0(
  MR_String parse_tree__module_cmds__String0_4,
  MR_Word parse_tree__module_cmds__QuoteType_5,
  MR_String * parse_tree__module_cmds__String_6)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;

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
	if (SUCCESS_INDICATOR) {
	}
parse_tree__module_cmds__succeeded  = SUCCESS_INDICATOR;
}
    if (parse_tree__module_cmds__succeeded)
      {
        MR_String parse_tree__module_cmds__Quote_7;
        MR_Word parse_tree__module_cmds__Var_8;
        MR_Word parse_tree__module_cmds__Var_10;
        MR_Word parse_tree__module_cmds__Var_11;
        MR_Word parse_tree__module_cmds__Var_12;

        switch (parse_tree__module_cmds__QuoteType_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            parse_tree__module_cmds__Quote_7 = (MR_String) " \"";
            break;
          case (MR_Integer) 0:
            parse_tree__module_cmds__Quote_7 = (MR_String) " \'";
            break;
        }
        {
          parse_tree__module_cmds__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_12, 0) = ((MR_Box) (parse_tree__module_cmds__Quote_7));
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__module_cmds__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_11, 0) = ((MR_Box) (parse_tree__module_cmds__String0_4));
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_11, 1) = ((MR_Box) (parse_tree__module_cmds__Var_12));
        }
        {
          parse_tree__module_cmds__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_10, 0) = ((MR_Box) (parse_tree__module_cmds__Quote_7));
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_10, 1) = ((MR_Box) (parse_tree__module_cmds__Var_11));
        }
        {
          parse_tree__module_cmds__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_8, 0) = ((MR_Box) ((MR_String) "sh -c "));
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_8, 1) = ((MR_Box) (parse_tree__module_cmds__Var_10));
        }
        {
          mercury__string__append_list_2_p_0(parse_tree__module_cmds__Var_8, parse_tree__module_cmds__String_6);
        }
      }
    else
      *parse_tree__module_cmds__String_6 = parse_tree__module_cmds__String0_4;
  }
}

static void MR_CALL 
parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0_1(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
  MR_Box * parse_tree__module_cmds__wrapper_arg_3)
{
  {
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;

    {
      mercury__io__write_char_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) parse_tree__module_cmds__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(
  MR_Word parse_tree__module_cmds__Globals_9,
  MR_Word parse_tree__module_cmds__ErrorStream_10,
  MR_Word parse_tree__module_cmds__Verbosity_11,
  MR_String parse_tree__module_cmds__Command_12,
  MR_Word parse_tree__module_cmds__MaybeProcessOutput_13,
  MR_Word * parse_tree__module_cmds__Succeeded_14)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Integer parse_tree__module_cmds__OldStatus_16;
    MR_Word parse_tree__module_cmds__Verbose_17;
    MR_Word parse_tree__module_cmds__PrintCommand_18;
    MR_Word parse_tree__module_cmds__TmpFileResult_19;
    MR_String parse_tree__module_cmds__TmpFile_20;
    MR_Word parse_tree__module_cmds__CommandSucceeded_24;
    MR_String parse_tree__module_cmds__ProcessedTmpFile_29;
    MR_Word parse_tree__module_cmds__ProcessOutputSucceeded_35;
    MR_Word parse_tree__module_cmds__TmpFileRes_39;
    MR_String parse_tree__module_cmds__ProcessOutput_27;
    MR_Word parse_tree__module_cmds__Var_44;

    {
      mercury__io__get_exit_status_3_p_0(&parse_tree__module_cmds__OldStatus_16);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_9, (MR_Integer) 56, &parse_tree__module_cmds__Verbose_17);
    }
    switch (parse_tree__module_cmds__Verbosity_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__module_cmds__PrintCommand_18 = parse_tree__module_cmds__Verbose_17;
        break;
      case (MR_Integer) 1:
        {
          {
            libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_9, (MR_Integer) 62, &parse_tree__module_cmds__PrintCommand_18);
          }
        }
        break;
    }
    switch (parse_tree__module_cmds__PrintCommand_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "% Invoking system command \140");
          }
          {
            mercury__io__write_string_3_p_0(parse_tree__module_cmds__Command_12);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\'...\n");
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
    {
      mercury__io__make_temp_file_3_p_0(&parse_tree__module_cmds__TmpFileResult_19);
    }
    if (((MR_tag((MR_Word) parse_tree__module_cmds__TmpFileResult_19)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String parse_tree__module_cmds__Var_57;
        MR_String parse_tree__module_cmds__Var_60;
        MR_Word parse_tree__module_cmds__Error_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__TmpFileResult_19, (MR_Integer) 0)));

        {
          parse_tree__module_cmds__Var_60 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Error_152);
        }
        {
          parse_tree__module_cmds__Var_57 = mercury__string__f_43_43_2_f_0((MR_String) "Could not create temporary file: ", parse_tree__module_cmds__Var_60);
        }
        {
          libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__Var_57);
        }
        parse_tree__module_cmds__TmpFile_20 = (MR_String) "";
        parse_tree__module_cmds__CommandSucceeded_24 = (MR_Integer) 0;
      }
    else
      {
        MR_String parse_tree__module_cmds__CommandRedirected_21;
        MR_Word parse_tree__module_cmds__Result_22;

        parse_tree__module_cmds__TmpFile_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__TmpFileResult_19, (MR_Integer) 0)));
        {
          parse_tree__module_cmds__succeeded = parse_tree__module_cmds__use_dotnet_0_p_0();
        }
        if (parse_tree__module_cmds__succeeded)
          parse_tree__module_cmds__CommandRedirected_21 = parse_tree__module_cmds__Command_12;
        else
          {
            {
              parse_tree__module_cmds__succeeded = parse_tree__module_cmds__use_win32_0_p_0();
            }
            if (parse_tree__module_cmds__succeeded)
              {
                MR_String parse_tree__module_cmds__Var_61;

                {
                  parse_tree__module_cmds__Var_61 = mercury__string__f_43_43_2_f_0((MR_String) " > ", parse_tree__module_cmds__TmpFile_20);
                }
                {
                  parse_tree__module_cmds__CommandRedirected_21 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__Command_12, parse_tree__module_cmds__Var_61);
                }
              }
            else
              {
                MR_Word parse_tree__module_cmds__Var_63;
                MR_Word parse_tree__module_cmds__Var_64;
                MR_Word parse_tree__module_cmds__Var_66;

                {
                  parse_tree__module_cmds__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_66, 0) = ((MR_Box) (parse_tree__module_cmds__TmpFile_20));
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[2])));
                }
                {
                  parse_tree__module_cmds__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_64, 0) = ((MR_Box) ((MR_String) " > "));
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_64, 1) = ((MR_Box) (parse_tree__module_cmds__Var_66));
                }
                {
                  parse_tree__module_cmds__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_63, 0) = ((MR_Box) (parse_tree__module_cmds__Command_12));
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_63, 1) = ((MR_Box) (parse_tree__module_cmds__Var_64));
                }
                {
                  parse_tree__module_cmds__CommandRedirected_21 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__Var_63);
                }
              }
          }
        {
          mercury__io__call_system_return_signal_4_p_0(parse_tree__module_cmds__CommandRedirected_21, &parse_tree__module_cmds__Result_22);
        }
        if (((MR_tag((MR_Word) parse_tree__module_cmds__Result_22)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__module_cmds__Error_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_22, (MR_Integer) 0)));
            MR_String parse_tree__module_cmds__Var_71;

            {
              parse_tree__module_cmds__Var_71 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Error_26);
            }
            {
              libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__Var_71);
            }
            parse_tree__module_cmds__CommandSucceeded_24 = (MR_Integer) 0;
          }
        else
          {
            MR_Word parse_tree__module_cmds__Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Result_22, (MR_Integer) 0)));

            if (((MR_tag((MR_Word) parse_tree__module_cmds__Var_156)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Integer parse_tree__module_cmds__Status_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_156, (MR_Integer) 0)));

                {
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__PrintCommand_18, (MR_String) "% done.\n");
                }
                parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__Status_23 == (MR_Integer) 0);
                if (parse_tree__module_cmds__succeeded)
                  parse_tree__module_cmds__CommandSucceeded_24 = (MR_Integer) 1;
                else
                  parse_tree__module_cmds__CommandSucceeded_24 = (MR_Integer) 0;
              }
            else
              {
                MR_Integer parse_tree__module_cmds__Signal_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_156, (MR_Integer) 0)));
                MR_String parse_tree__module_cmds__Var_74;
                MR_String parse_tree__module_cmds__Var_77;
                MR_String parse_tree__module_cmds__Var_78;
                MR_String parse_tree__module_cmds__Var_80;
                MR_String parse_tree__module_cmds__Var_83;
                MR_String parse_tree__module_cmds__Var_84;

                {
                  parse_tree__module_cmds__Var_78 = mercury__string__int_to_string_1_f_0(parse_tree__module_cmds__Signal_25);
                }
                {
                  parse_tree__module_cmds__Var_77 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__Var_78, (MR_String) ".");
                }
                {
                  parse_tree__module_cmds__Var_74 = mercury__string__f_43_43_2_f_0((MR_String) "system command received signal ", parse_tree__module_cmds__Var_77);
                }
                {
                  libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__Var_74);
                }
                {
                  parse_tree__module_cmds__Var_84 = mercury__string__int_to_string_1_f_0(parse_tree__module_cmds__Signal_25);
                }
                {
                  parse_tree__module_cmds__Var_83 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__Var_84, (MR_String) ".");
                }
                {
                  parse_tree__module_cmds__Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "system command received signal ", parse_tree__module_cmds__Var_83);
                }
                {
                  libs__file_util__report_error_3_p_0(parse_tree__module_cmds__Var_80);
                }
                {
                  libs__process_util__raise_signal_3_p_0(parse_tree__module_cmds__Signal_25);
                }
                parse_tree__module_cmds__CommandSucceeded_24 = (MR_Integer) 0;
              }
          }
      }
    {
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds__use_dotnet_0_p_0();
    }
    parse_tree__module_cmds__succeeded = !(parse_tree__module_cmds__succeeded);
    if (parse_tree__module_cmds__succeeded)
      {
        parse_tree__module_cmds__succeeded = ((MR_tag((MR_Word) parse_tree__module_cmds__MaybeProcessOutput_13)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__module_cmds__succeeded)
          parse_tree__module_cmds__ProcessOutput_27 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeProcessOutput_13, (MR_Integer) 0)));
      }
    if (parse_tree__module_cmds__succeeded)
      {
        MR_Word parse_tree__module_cmds__ProcessedTmpFileResult_28;

        {
          mercury__io__make_temp_file_3_p_0(&parse_tree__module_cmds__ProcessedTmpFileResult_28);
        }
        if (((MR_tag((MR_Word) parse_tree__module_cmds__ProcessedTmpFileResult_28)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__module_cmds__ProcessTmpError_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__ProcessedTmpFileResult_28, (MR_Integer) 0)));
            MR_String parse_tree__module_cmds__Var_91;

            {
              parse_tree__module_cmds__Var_91 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__ProcessTmpError_38);
            }
            {
              libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__Var_91);
            }
            parse_tree__module_cmds__ProcessOutputSucceeded_35 = (MR_Integer) 0;
            parse_tree__module_cmds__ProcessedTmpFile_29 = (MR_String) "";
          }
        else
          {
            MR_String parse_tree__module_cmds__ProcessOutputRedirected_31;
            MR_Word parse_tree__module_cmds__ProcessOutputResult_32;
            MR_Word parse_tree__module_cmds__Var_33;

            parse_tree__module_cmds__ProcessedTmpFile_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__ProcessedTmpFileResult_28, (MR_Integer) 0)));
            {
              parse_tree__module_cmds__succeeded = parse_tree__module_cmds__use_win32_0_p_0();
            }
            if (parse_tree__module_cmds__succeeded)
              {
                MR_Word parse_tree__module_cmds__SystemEnvType_30;

                {
                  libs__globals__get_system_env_type_2_p_0(parse_tree__module_cmds__Globals_9, &parse_tree__module_cmds__SystemEnvType_30);
                }
                parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__SystemEnvType_30 == (MR_Integer) 4);
                if (parse_tree__module_cmds__succeeded)
                  {
                    MR_Word parse_tree__module_cmds__Var_93;
                    MR_Word parse_tree__module_cmds__Var_95;
                    MR_Word parse_tree__module_cmds__Var_96;
                    MR_Word parse_tree__module_cmds__Var_98;
                    MR_Word parse_tree__module_cmds__Var_99;
                    MR_Word parse_tree__module_cmds__Var_101;

                    {
                      parse_tree__module_cmds__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_101, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessedTmpFile_29));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[2])));
                    }
                    {
                      parse_tree__module_cmds__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_99, 0) = ((MR_Box) ((MR_String) " > "));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_99, 1) = ((MR_Box) (parse_tree__module_cmds__Var_101));
                    }
                    {
                      parse_tree__module_cmds__Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_98, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessOutput_27));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_98, 1) = ((MR_Box) (parse_tree__module_cmds__Var_99));
                    }
                    {
                      parse_tree__module_cmds__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_96, 0) = ((MR_Box) ((MR_String) " | "));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_96, 1) = ((MR_Box) (parse_tree__module_cmds__Var_98));
                    }
                    {
                      parse_tree__module_cmds__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_95, 0) = ((MR_Box) (parse_tree__module_cmds__TmpFile_20));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_95, 1) = ((MR_Box) (parse_tree__module_cmds__Var_96));
                    }
                    {
                      parse_tree__module_cmds__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_93, 0) = ((MR_Box) ((MR_String) "Get-Content "));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_93, 1) = ((MR_Box) (parse_tree__module_cmds__Var_95));
                    }
                    {
                      parse_tree__module_cmds__ProcessOutputRedirected_31 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__Var_93);
                    }
                  }
                else
                  {
                    MR_Word parse_tree__module_cmds__Var_105;
                    MR_Word parse_tree__module_cmds__Var_106;
                    MR_Word parse_tree__module_cmds__Var_108;
                    MR_Word parse_tree__module_cmds__Var_109;
                    MR_Word parse_tree__module_cmds__Var_111;

                    {
                      parse_tree__module_cmds__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_111, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessedTmpFile_29));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__module_cmds__Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_109, 0) = ((MR_Box) ((MR_String) " > "));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_109, 1) = ((MR_Box) (parse_tree__module_cmds__Var_111));
                    }
                    {
                      parse_tree__module_cmds__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_108, 0) = ((MR_Box) (parse_tree__module_cmds__TmpFile_20));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_108, 1) = ((MR_Box) (parse_tree__module_cmds__Var_109));
                    }
                    {
                      parse_tree__module_cmds__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_106, 0) = ((MR_Box) ((MR_String) " < "));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_106, 1) = ((MR_Box) (parse_tree__module_cmds__Var_108));
                    }
                    {
                      parse_tree__module_cmds__Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_105, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessOutput_27));
                      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_105, 1) = ((MR_Box) (parse_tree__module_cmds__Var_106));
                    }
                    {
                      parse_tree__module_cmds__ProcessOutputRedirected_31 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__Var_105);
                    }
                  }
              }
            else
              {
                MR_Word parse_tree__module_cmds__Var_113;
                MR_Word parse_tree__module_cmds__Var_114;
                MR_Word parse_tree__module_cmds__Var_116;
                MR_Word parse_tree__module_cmds__Var_117;
                MR_Word parse_tree__module_cmds__Var_119;

                {
                  parse_tree__module_cmds__Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_119, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessedTmpFile_29));
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[2])));
                }
                {
                  parse_tree__module_cmds__Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_117, 0) = ((MR_Box) ((MR_String) " > "));
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_117, 1) = ((MR_Box) (parse_tree__module_cmds__Var_119));
                }
                {
                  parse_tree__module_cmds__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_116, 0) = ((MR_Box) (parse_tree__module_cmds__TmpFile_20));
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_116, 1) = ((MR_Box) (parse_tree__module_cmds__Var_117));
                }
                {
                  parse_tree__module_cmds__Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_114, 0) = ((MR_Box) ((MR_String) " < "));
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_114, 1) = ((MR_Box) (parse_tree__module_cmds__Var_116));
                }
                {
                  parse_tree__module_cmds__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_113, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessOutput_27));
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_113, 1) = ((MR_Box) (parse_tree__module_cmds__Var_114));
                }
                {
                  parse_tree__module_cmds__ProcessOutputRedirected_31 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__Var_113);
                }
              }
            {
              mercury__io__call_system_return_signal_4_p_0(parse_tree__module_cmds__ProcessOutputRedirected_31, &parse_tree__module_cmds__ProcessOutputResult_32);
            }
            {
              mercury__io__remove_file_4_p_0(parse_tree__module_cmds__TmpFile_20, &parse_tree__module_cmds__Var_33);
            }
            if (((MR_tag((MR_Word) parse_tree__module_cmds__ProcessOutputResult_32)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word parse_tree__module_cmds__ProcessOutputError_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__ProcessOutputResult_32, (MR_Integer) 0)));
                MR_String parse_tree__module_cmds__Var_125;

                {
                  parse_tree__module_cmds__Var_125 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__ProcessOutputError_37);
                }
                {
                  libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__Var_125);
                }
                parse_tree__module_cmds__ProcessOutputSucceeded_35 = (MR_Integer) 0;
              }
            else
              {
                MR_Word parse_tree__module_cmds__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__ProcessOutputResult_32, (MR_Integer) 0)));

                if (((MR_tag((MR_Word) parse_tree__module_cmds__Var_157)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Integer parse_tree__module_cmds__ProcessOutputStatus_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_157, (MR_Integer) 0)));

                    {
                      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__PrintCommand_18, (MR_String) "% done.\n");
                    }
                    parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__ProcessOutputStatus_34 == (MR_Integer) 0);
                    if (parse_tree__module_cmds__succeeded)
                      parse_tree__module_cmds__ProcessOutputSucceeded_35 = (MR_Integer) 1;
                    else
                      parse_tree__module_cmds__ProcessOutputSucceeded_35 = (MR_Integer) 0;
                  }
                else
                  {
                    MR_Integer parse_tree__module_cmds__ProcessOutputSignal_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_157, (MR_Integer) 0)));
                    MR_String parse_tree__module_cmds__Var_129;
                    MR_String parse_tree__module_cmds__Var_132;
                    MR_String parse_tree__module_cmds__Var_133;

                    {
                      libs__process_util__raise_signal_3_p_0(parse_tree__module_cmds__ProcessOutputSignal_36);
                    }
                    {
                      parse_tree__module_cmds__Var_133 = mercury__string__int_to_string_1_f_0(parse_tree__module_cmds__ProcessOutputSignal_36);
                    }
                    {
                      parse_tree__module_cmds__Var_132 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__Var_133, (MR_String) ".");
                    }
                    {
                      parse_tree__module_cmds__Var_129 = mercury__string__f_43_43_2_f_0((MR_String) "system command received signal ", parse_tree__module_cmds__Var_132);
                    }
                    {
                      libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__Var_129);
                    }
                    parse_tree__module_cmds__ProcessOutputSucceeded_35 = (MR_Integer) 0;
                  }
              }
          }
      }
    else
      {
        parse_tree__module_cmds__ProcessOutputSucceeded_35 = (MR_Integer) 1;
        parse_tree__module_cmds__ProcessedTmpFile_29 = parse_tree__module_cmds__TmpFile_20;
      }
    {
      *parse_tree__module_cmds__Succeeded_14 = mercury__bool__and_2_f_0(parse_tree__module_cmds__CommandSucceeded_24, parse_tree__module_cmds__ProcessOutputSucceeded_35);
    }
    {
      mercury__io__open_input_4_p_0(parse_tree__module_cmds__ProcessedTmpFile_29, &parse_tree__module_cmds__TmpFileRes_39);
    }
    if (((MR_tag((MR_Word) parse_tree__module_cmds__TmpFileRes_39)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__module_cmds__TmpFileError_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__TmpFileRes_39, (MR_Integer) 0)));
        MR_String parse_tree__module_cmds__Var_139;
        MR_String parse_tree__module_cmds__Var_142;

        {
          parse_tree__module_cmds__Var_142 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__TmpFileError_43);
        }
        {
          parse_tree__module_cmds__Var_139 = mercury__string__f_43_43_2_f_0((MR_String) "error opening command output: ", parse_tree__module_cmds__Var_142);
        }
        {
          libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__Var_139);
        }
      }
    else
      {
        MR_Word parse_tree__module_cmds__TmpFileStream_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__TmpFileRes_39, (MR_Integer) 0)));
        MR_Word parse_tree__module_cmds__Res_41;
        MR_Word parse_tree__module_cmds__Var_143;

        {
          parse_tree__module_cmds__Var_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_143, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_2[1]));
          MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_143, 1) = ((MR_Box) (parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_143, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_143, 3) = ((MR_Box) (parse_tree__module_cmds__ErrorStream_10));
        }
        {
          mercury__io__input_stream_foldl_io_5_p_0(parse_tree__module_cmds__TmpFileStream_40, parse_tree__module_cmds__Var_143, &parse_tree__module_cmds__Res_41);
        }
        if ((parse_tree__module_cmds__Res_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word parse_tree__module_cmds__TmpFileReadError_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Res_41, (MR_Integer) 0)));
            MR_String parse_tree__module_cmds__Var_145;
            MR_String parse_tree__module_cmds__Var_148;

            {
              parse_tree__module_cmds__Var_148 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__TmpFileReadError_42);
            }
            {
              parse_tree__module_cmds__Var_145 = mercury__string__f_43_43_2_f_0((MR_String) "error reading command output: ", parse_tree__module_cmds__Var_148);
            }
            {
              libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__Var_145);
            }
          }
        {
          mercury__io__close_input_3_p_0(parse_tree__module_cmds__TmpFileStream_40);
        }
      }
    {
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__ProcessedTmpFile_29, &parse_tree__module_cmds__Var_44);
    }
    {
      mercury__io__set_exit_status_3_p_0(parse_tree__module_cmds__OldStatus_16);
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__invoke_system_command_7_p_0(
  MR_Word parse_tree__module_cmds__Globals_8,
  MR_Word parse_tree__module_cmds__ErrorStream_9,
  MR_Word parse_tree__module_cmds__Verbosity_10,
  MR_String parse_tree__module_cmds__Command_11,
  MR_Word * parse_tree__module_cmds__Succeeded_12)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;

    {
      parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(parse_tree__module_cmds__Globals_8, parse_tree__module_cmds__ErrorStream_9, parse_tree__module_cmds__Verbosity_10, parse_tree__module_cmds__Command_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__module_cmds__Succeeded_12);
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__maybe_set_exit_status_3_p_0(
  MR_Word parse_tree__module_cmds__HeadVar__1_1)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;

    switch (parse_tree__module_cmds__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__touch_datestamp_4_p_0(
  MR_Word parse_tree__module_cmds__Globals_5,
  MR_String parse_tree__module_cmds__OutputFileName_6)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__Verbose_8;
    MR_Word parse_tree__module_cmds__Result_9;
    MR_String parse_tree__module_cmds__Var_16;
    MR_String parse_tree__module_cmds__Var_19;

    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_5, (MR_Integer) 56, &parse_tree__module_cmds__Verbose_8);
    }
    {
      parse_tree__module_cmds__Var_19 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__OutputFileName_6, (MR_String) "\'... ");
    }
    {
      parse_tree__module_cmds__Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "% Touching \140", parse_tree__module_cmds__Var_19);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_8, parse_tree__module_cmds__Var_16);
    }
    {
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__module_cmds__Verbose_8);
    }
    {
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__OutputFileName_6, &parse_tree__module_cmds__Result_9);
    }
    if (((MR_tag((MR_Word) parse_tree__module_cmds__Result_9)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__module_cmds__IOError_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_9, (MR_Integer) 0)));
        MR_String parse_tree__module_cmds__IOErrorMessage_12;
        MR_String parse_tree__module_cmds__Var_23;
        MR_String parse_tree__module_cmds__Var_26;
        MR_String parse_tree__module_cmds__Var_27;
        MR_String parse_tree__module_cmds__Var_29;

        {
          mercury__io__error_message_2_p_0(parse_tree__module_cmds__IOError_11, &parse_tree__module_cmds__IOErrorMessage_12);
        }
        {
          parse_tree__module_cmds__Var_29 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__IOErrorMessage_12, (MR_String) ".\n");
        }
        {
          parse_tree__module_cmds__Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", parse_tree__module_cmds__Var_29);
        }
        {
          parse_tree__module_cmds__Var_26 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__OutputFileName_6, parse_tree__module_cmds__Var_27);
        }
        {
          parse_tree__module_cmds__Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "\nError opening \140", parse_tree__module_cmds__Var_26);
        }
        {
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__Var_23);
        }
      }
    else
      {
        MR_Word parse_tree__module_cmds__OutputStream_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Result_9, (MR_Integer) 0)));

        {
          mercury__io__write_string_4_p_0(parse_tree__module_cmds__OutputStream_10, (MR_String) "\n");
        }
        {
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__OutputStream_10);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_8, (MR_String) " done.\n");
        }
      }
  }
}

void MR_CALL 
parse_tree__module_cmds__touch_interface_datestamp_5_p_0(
  MR_Word parse_tree__module_cmds__Globals_6,
  MR_Word parse_tree__module_cmds__ModuleName_7,
  MR_String parse_tree__module_cmds__Ext_8)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_String parse_tree__module_cmds__OutputFileName_10;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__ModuleName_7, parse_tree__module_cmds__Ext_8, (MR_Integer) 0, &parse_tree__module_cmds__OutputFileName_10);
    }
    {
      parse_tree__module_cmds__touch_datestamp_4_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__OutputFileName_10);
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__make_symlink_or_copy_dir_6_p_0(
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_String parse_tree__module_cmds__SourceDirName_8,
  MR_String parse_tree__module_cmds__DestinationDirName_9,
  MR_Word * parse_tree__module_cmds__Succeeded_10)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__UseSymLinks_12;

    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 633, &parse_tree__module_cmds__UseSymLinks_12);
    }
    switch (parse_tree__module_cmds__UseSymLinks_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String parse_tree__module_cmds__Command_61;
          MR_Word parse_tree__module_cmds__OutputStream_62;

          {
            parse_tree__module_cmds__Command_61 = libs__file_util__make_install_dir_command_3_f_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__SourceDirName_8, parse_tree__module_cmds__DestinationDirName_9);
          }
          {
            mercury__io__output_stream_3_p_0(&parse_tree__module_cmds__OutputStream_62);
          }
          {
            parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__OutputStream_62, (MR_Integer) 0, parse_tree__module_cmds__Command_61, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__module_cmds__Succeeded_10);
          }
          switch (*parse_tree__module_cmds__Succeeded_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String parse_tree__module_cmds__ProgName_51;

                {
                  mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__module_cmds__ProgName_51);
                }
                {
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__ProgName_51);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ": error copying directory");
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) " \140");
                }
                {
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__SourceDirName_8);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\' to \140");
                }
                {
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__DestinationDirName_9);
                }
                {
                  mercury__io__nl_2_p_0();
                }
                {
                  mercury__io__flush_output_2_p_0();
                }
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
          MR_Word parse_tree__module_cmds__Result_13;

          {
            mercury__io__make_symlink_5_p_0(parse_tree__module_cmds__SourceDirName_8, parse_tree__module_cmds__DestinationDirName_9, &parse_tree__module_cmds__Result_13);
          }
          if ((parse_tree__module_cmds__Result_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
          else
            {
              MR_Word parse_tree__module_cmds__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_13, (MR_Integer) 0)));
              MR_String parse_tree__module_cmds__ProgName_15;
              MR_String parse_tree__module_cmds__Var_47;

              *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 0;
              {
                mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__module_cmds__ProgName_15);
              }
              {
                mercury__io__write_string_3_p_0(parse_tree__module_cmds__ProgName_15);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ": error linking");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " \140");
              }
              {
                mercury__io__write_string_3_p_0(parse_tree__module_cmds__SourceDirName_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\' to \140");
              }
              {
                mercury__io__write_string_3_p_0(parse_tree__module_cmds__DestinationDirName_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\': ");
              }
              {
                parse_tree__module_cmds__Var_47 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Error_14);
              }
              {
                mercury__io__write_string_3_p_0(parse_tree__module_cmds__Var_47);
              }
              {
                mercury__io__nl_2_p_0();
              }
              {
                mercury__io__flush_output_2_p_0();
              }
            }
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__make_symlink_or_copy_file_6_p_0(
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_String parse_tree__module_cmds__SourceFileName_8,
  MR_String parse_tree__module_cmds__DestinationFileName_9,
  MR_Word * parse_tree__module_cmds__Succeeded_10)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__UseSymLinks_12;
    MR_Word parse_tree__module_cmds__PrintCommand_13;
    MR_String parse_tree__module_cmds__LinkOrCopy_14;
    MR_Word parse_tree__module_cmds__Result_15;

    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 633, &parse_tree__module_cmds__UseSymLinks_12);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 62, &parse_tree__module_cmds__PrintCommand_13);
    }
    switch (parse_tree__module_cmds__UseSymLinks_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__module_cmds__LinkOrCopy_14 = (MR_String) "copying";
          switch (parse_tree__module_cmds__PrintCommand_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "% Copying file \140");
                }
                {
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__SourceFileName_8);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\' -> \140");
                }
                {
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__DestinationFileName_9);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\'\n");
                }
                {
                  mercury__io__flush_output_2_p_0();
                }
              }
              break;
          }
          {
            parse_tree__module_cmds__copy_file_6_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__SourceFileName_8, parse_tree__module_cmds__DestinationFileName_9, &parse_tree__module_cmds__Result_15);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          parse_tree__module_cmds__LinkOrCopy_14 = (MR_String) "linking";
          switch (parse_tree__module_cmds__PrintCommand_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "% Linking file \140");
                }
                {
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__SourceFileName_8);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\' -> \140");
                }
                {
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__DestinationFileName_9);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\'\n");
                }
                {
                  mercury__io__flush_output_2_p_0();
                }
              }
              break;
          }
          {
            mercury__io__make_symlink_5_p_0(parse_tree__module_cmds__SourceFileName_8, parse_tree__module_cmds__DestinationFileName_9, &parse_tree__module_cmds__Result_15);
          }
        }
        break;
    }
    if ((parse_tree__module_cmds__Result_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
    else
      {
        MR_Word parse_tree__module_cmds__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_15, (MR_Integer) 0)));
        MR_String parse_tree__module_cmds__ProgName_17;
        MR_String parse_tree__module_cmds__ErrorMsg_18;

        *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 0;
        {
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__module_cmds__ProgName_17);
        }
        {
          mercury__io__error_message_2_p_0(parse_tree__module_cmds__Error_16, &parse_tree__module_cmds__ErrorMsg_18);
        }
        {
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__ProgName_17);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ": error ");
        }
        {
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__LinkOrCopy_14);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " \140");
        }
        {
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__SourceFileName_8);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\' to \140");
        }
        {
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__DestinationFileName_9);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\', ");
        }
        {
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__ErrorMsg_18);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        {
          mercury__io__flush_output_2_p_0();
        }
      }
  }
}

void MR_CALL 
parse_tree__module_cmds__maybe_make_symlink_6_p_0(
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_String parse_tree__module_cmds__LinkTarget_8,
  MR_String parse_tree__module_cmds__LinkName_9,
  MR_Word * parse_tree__module_cmds__Result_10)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__UseSymLinks_12;

    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 633, &parse_tree__module_cmds__UseSymLinks_12);
    }
    switch (parse_tree__module_cmds__UseSymLinks_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *parse_tree__module_cmds__Result_10 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__module_cmds__LinkResult_14;
          MR_Word parse_tree__module_cmds__Var_13;

          {
            mercury__io__remove_file_recursively_4_p_0(parse_tree__module_cmds__LinkName_9, &parse_tree__module_cmds__Var_13);
          }
          {
            mercury__io__make_symlink_5_p_0(parse_tree__module_cmds__LinkTarget_8, parse_tree__module_cmds__LinkName_9, &parse_tree__module_cmds__LinkResult_14);
          }
          parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__LinkResult_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (parse_tree__module_cmds__succeeded)
            *parse_tree__module_cmds__Result_10 = (MR_Integer) 1;
          else
            *parse_tree__module_cmds__Result_10 = (MR_Integer) 0;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__module_cmds__copy_file_6_p_0_1(
  MR_Box parse_tree__module_cmds__closure_arg,
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
  MR_Box * parse_tree__module_cmds__wrapper_arg_3)
{
  {
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;

    {
      mercury__io__write_byte_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Integer) parse_tree__module_cmds__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__copy_file_6_p_0(
  MR_Word parse_tree__module_cmds__Globals_7,
  MR_String parse_tree__module_cmds__Source_8,
  MR_String parse_tree__module_cmds__Destination_9,
  MR_Word * parse_tree__module_cmds__Res_10)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_String parse_tree__module_cmds__Command_12;
    MR_Word parse_tree__module_cmds__OutputStream_13;
    MR_Word parse_tree__module_cmds__Succeeded_14;

    {
      parse_tree__module_cmds__Command_12 = libs__file_util__make_install_file_command_3_f_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__Source_8, parse_tree__module_cmds__Destination_9);
    }
    {
      mercury__io__output_stream_3_p_0(&parse_tree__module_cmds__OutputStream_13);
    }
    {
      parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__OutputStream_13, (MR_Integer) 0, parse_tree__module_cmds__Command_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__module_cmds__Succeeded_14);
    }
    switch (parse_tree__module_cmds__Succeeded_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__module_cmds__SourceRes_15;

          {
            mercury__io__open_binary_input_4_p_0(parse_tree__module_cmds__Source_8, &parse_tree__module_cmds__SourceRes_15);
          }
          if (((MR_tag((MR_Word) parse_tree__module_cmds__SourceRes_15)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word parse_tree__module_cmds__Error_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__SourceRes_15, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_cmds__Res_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_cmds__Error_31));
              }
            }
          else
            {
              MR_Word parse_tree__module_cmds__SourceStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__SourceRes_15, (MR_Integer) 0)));
              MR_Word parse_tree__module_cmds__DestRes_17;

              {
                mercury__io__open_binary_output_4_p_0(parse_tree__module_cmds__Destination_9, &parse_tree__module_cmds__DestRes_17);
              }
              if (((MR_tag((MR_Word) parse_tree__module_cmds__DestRes_17)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word parse_tree__module_cmds__Error_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__DestRes_17, (MR_Integer) 0)));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__module_cmds__Res_10 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_cmds__Error_20));
                  }
                }
              else
                {
                  MR_Word parse_tree__module_cmds__DestStream_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__DestRes_17, (MR_Integer) 0)));
                  MR_Word parse_tree__module_cmds__WriteByte_19;

                  {
                    parse_tree__module_cmds__WriteByte_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__module_cmds__WriteByte_19, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_2[0]));
                    MR_hl_field(MR_mktag(0), parse_tree__module_cmds__WriteByte_19, 1) = ((MR_Box) (parse_tree__module_cmds__copy_file_6_p_0_1));
                    MR_hl_field(MR_mktag(0), parse_tree__module_cmds__WriteByte_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), parse_tree__module_cmds__WriteByte_19, 3) = ((MR_Box) (parse_tree__module_cmds__DestStream_18));
                  }
                  {
                    mercury__io__binary_input_stream_foldl_io_5_p_0(parse_tree__module_cmds__SourceStream_16, parse_tree__module_cmds__WriteByte_19, parse_tree__module_cmds__Res_10);
                  }
                  {
                    mercury__io__close_binary_input_3_p_0(parse_tree__module_cmds__SourceStream_16);
                  }
                  {
                    mercury__io__close_binary_output_3_p_0(parse_tree__module_cmds__DestStream_18);
                  }
                }
            }
        }
        break;
      case (MR_Integer) 1:
        *parse_tree__module_cmds__Res_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__update_interface_4_p_0(
  MR_Word parse_tree__module_cmds__Globals_5,
  MR_String parse_tree__module_cmds__OutputFileName_6)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__Result_20;

    {
      parse_tree__module_cmds__update_interface_return_changed_5_p_0(parse_tree__module_cmds__Globals_5, parse_tree__module_cmds__OutputFileName_6, &parse_tree__module_cmds__Result_20);
    }
    switch (parse_tree__module_cmds__Result_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          {
            libs__file_util__report_error_3_p_0((MR_String) "problem updating interface files.");
          }
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__update_interface_return_succeeded_5_p_0(
  MR_Word parse_tree__module_cmds__Globals_6,
  MR_String parse_tree__module_cmds__OutputFileName_7,
  MR_Word * parse_tree__module_cmds__Succeeded_8)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__Result_10;

    {
      parse_tree__module_cmds__update_interface_return_changed_5_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__OutputFileName_7, &parse_tree__module_cmds__Result_10);
    }
    switch (parse_tree__module_cmds__Result_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        *parse_tree__module_cmds__Succeeded_8 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        *parse_tree__module_cmds__Succeeded_8 = (MR_Integer) 1;
        break;
    }
  }
}

void MR_CALL 
parse_tree__module_cmds__update_interface_return_changed_5_p_0(
  MR_Word parse_tree__module_cmds__Globals_6,
  MR_String parse_tree__module_cmds__OutputFileName_7,
  MR_Word * parse_tree__module_cmds__Result_8)
{
  {
    MR_bool parse_tree__module_cmds__succeeded;
    MR_Word parse_tree__module_cmds__Verbose_10;
    MR_String parse_tree__module_cmds__TmpOutputFileName_11;
    MR_Word parse_tree__module_cmds__OutputFileRes_12;

    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 56, &parse_tree__module_cmds__Verbose_10);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_10, (MR_String) "% Updating interface:\n");
    }
    {
      parse_tree__module_cmds__TmpOutputFileName_11 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__OutputFileName_7, (MR_String) ".tmp");
    }
    {
      mercury__io__open_binary_input_4_p_0(parse_tree__module_cmds__OutputFileName_7, &parse_tree__module_cmds__OutputFileRes_12);
    }
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OutputFileRes_12)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          parse_tree__module_cmds__update_interface_create_file_7_p_0(parse_tree__module_cmds__Globals_6, (MR_String) "been CREATED", parse_tree__module_cmds__OutputFileName_7, parse_tree__module_cmds__TmpOutputFileName_11, parse_tree__module_cmds__Result_8);
        }
      }
    else
      {
        MR_Word parse_tree__module_cmds__OutputFileStream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OutputFileRes_12, (MR_Integer) 0)));
        MR_Word parse_tree__module_cmds__TmpOutputFileRes_14;

        {
          mercury__io__open_binary_input_4_p_0(parse_tree__module_cmds__TmpOutputFileName_11, &parse_tree__module_cmds__TmpOutputFileRes_14);
        }
        if (((MR_tag((MR_Word) parse_tree__module_cmds__TmpOutputFileRes_14)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__module_cmds__TmpOutputFileError_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__TmpOutputFileRes_14, (MR_Integer) 0)));
            MR_String parse_tree__module_cmds__Var_39;

            *parse_tree__module_cmds__Result_8 = (MR_Integer) 2;
            {
              mercury__io__close_binary_input_3_p_0(parse_tree__module_cmds__OutputFileStream_13);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "Error creating \140");
            }
            {
              mercury__io__write_string_3_p_0(parse_tree__module_cmds__OutputFileName_7);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\': ");
            }
            {
              parse_tree__module_cmds__Var_39 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__TmpOutputFileError_21);
            }
            {
              mercury__io__write_string_3_p_0(parse_tree__module_cmds__Var_39);
            }
            {
              mercury__io__nl_2_p_0();
            }
          }
        else
          {
            MR_Word parse_tree__module_cmds__TmpOutputFileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__TmpOutputFileRes_14, (MR_Integer) 0)));
            MR_Word parse_tree__module_cmds__FilesDiffer_16;

            {
              parse_tree__module_cmds__binary_input_stream_cmp_5_p_0(parse_tree__module_cmds__OutputFileStream_13, parse_tree__module_cmds__TmpOutputFileStream_15, &parse_tree__module_cmds__FilesDiffer_16);
            }
            {
              mercury__io__close_binary_input_3_p_0(parse_tree__module_cmds__OutputFileStream_13);
            }
            {
              mercury__io__close_binary_input_3_p_0(parse_tree__module_cmds__TmpOutputFileStream_15);
            }
            if (((MR_tag((MR_Word) parse_tree__module_cmds__FilesDiffer_16)) == (MR_mktag((MR_Integer) 1))))
              {
                {
                  parse_tree__module_cmds__update_interface_create_file_7_p_0(parse_tree__module_cmds__Globals_6, (MR_String) "been CREATED", parse_tree__module_cmds__OutputFileName_7, parse_tree__module_cmds__TmpOutputFileName_11, parse_tree__module_cmds__Result_8);
                }
              }
            else
              {
                MR_Word parse_tree__module_cmds__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__FilesDiffer_16, (MR_Integer) 0)));

                if (((MR_tag((MR_Word) parse_tree__module_cmds__Var_68)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_Word parse_tree__module_cmds__TmpFileError_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Var_68, (MR_Integer) 0)));
                    MR_String parse_tree__module_cmds__Var_53;

                    *parse_tree__module_cmds__Result_8 = (MR_Integer) 2;
                    {
                      mercury__io__write_string_3_p_0((MR_String) "Error reading \140");
                    }
                    {
                      mercury__io__write_string_3_p_0(parse_tree__module_cmds__TmpOutputFileName_11);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\': ");
                    }
                    {
                      parse_tree__module_cmds__Var_53 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__TmpFileError_18);
                    }
                    {
                      mercury__io__write_string_3_p_0(parse_tree__module_cmds__Var_53);
                    }
                    {
                      mercury__io__nl_2_p_0();
                    }
                  }
                else
                  {
                    MR_Word parse_tree__module_cmds__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Var_68, (MR_Integer) 0)));

                    switch (parse_tree__module_cmds__Var_69) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word parse_tree__module_cmds__Var_17;

                          *parse_tree__module_cmds__Result_8 = (MR_Integer) 1;
                          {
                            libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_10, (MR_String) "% ");
                          }
                          {
                            libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_10, parse_tree__module_cmds__OutputFileName_7);
                          }
                          {
                            libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_10, (MR_String) "\' has not changed.\n");
                          }
                          {
                            mercury__io__remove_file_4_p_0(parse_tree__module_cmds__TmpOutputFileName_11, &parse_tree__module_cmds__Var_17);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            parse_tree__module_cmds__update_interface_create_file_7_p_0(parse_tree__module_cmds__Globals_6, (MR_String) "CHANGED", parse_tree__module_cmds__OutputFileName_7, parse_tree__module_cmds__TmpOutputFileName_11, parse_tree__module_cmds__Result_8);
                          }
                        }
                        break;
                    }
                  }
              }
          }
      }
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

/* :- end_module parse_tree.module_cmds. */
