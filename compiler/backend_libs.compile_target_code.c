/*
** Automatically generated from `compile_target_code.m'
** by the Mercury compiler,
** version 22.01.5-beta-2022-12-27
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


// :- module backend_libs.compile_target_code.
// :- implementation.

/*
INIT mercury__backend_libs__compile_target_code__init
ENDINIT
*/

#include "backend_libs.compile_target_code.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
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
#include "hlds.mih"
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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "libs.compute_grade.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__compile_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_VA_TypeInfo_Struct4 backend_libs__compile_target_code____vti_pred_4builtin__type_ctor_info_string_0libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_0;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_1;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_2;

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_ordinal_ordered_is_as_new_as_0[3];

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_is_as_new_as_0[3];

static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_is_as_new_as_0[3];

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_0;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_1;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_2;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_3;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_4;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_5;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_6;

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_ordinal_ordered_linked_target_type_0[7];

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_linked_target_type_0[7];

static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_linked_target_type_0[7];

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_0;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_1;

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_ordinal_ordered_pic_0[2];

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_pic_0[2];

static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_pic_0[2];

static MR_String MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__get_link_libraries__2186__1_2_f_0(
  MR_String GradeDir_9,
  MR_String LambdaHeadVar__1_19);

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__referenced_dlls__1076__1_1_f_0(
  MR_Word LambdaHeadVar__1_17);

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__gather_c_include_dir_flags__809__1_1_f_0(
  MR_String LambdaHeadVar__1_11);

static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__link_module_list__1531__1_2_p_0(
  MR_String LambdaHeadVar__1_45,
  MR_Word * LambdaHeadVar__2_46);

static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__compile_csharp_file__1040__1_6_p_0(
  MR_Word Globals_10,
  MR_String Prefix_29,
  MR_Word LambdaHeadVar__1_84,
  MR_Word * LambdaHeadVar__2_85);

static MR_bool MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__compile_csharp_file__1030__1_3_p_0(
  MR_Word ModuleName_28,
  MR_Word LambdaHeadVar__1_78,
  MR_Word * LambdaHeadVar__2_79);

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__1020__1_1_f_0(
  MR_String LambdaHeadVar__1_69);

static void MR_CALL 
backend_libs__compile_target_code____Compare____is_as_new_as_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____is_as_new_as_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__compile_target_code__write_jar_class_argument_5_p_0(
  MR_Word Stream_6,
  MR_String ClassSubDir_7,
  MR_String ClassFileName_8);

static void MR_CALL 
backend_libs__compile_target_code__write_cli_shell_script_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
backend_libs__compile_target_code__write_cli_shell_script_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__write_cli_shell_script_5_p_0(
  MR_Word Globals_6,
  MR_String ExeFileName_7,
  MR_Word Stream_8);

static void MR_CALL 
backend_libs__compile_target_code__process_link_library_8_p_0(
  MR_Word Globals_9,
  MR_Word MercuryLibDirs_10,
  MR_String LibName_11,
  MR_String * LinkerOpt_12,
  MR_Word STATE_VARIABLE_Succeeded_0_36,
  MR_Word * STATE_VARIABLE_Succeeded_37);

static MR_bool MR_CALL 
backend_libs__compile_target_code__has_object_file_extension_3_p_0(
  MR_String ObjExt_4,
  MR_String PicObjExt_5,
  MR_String FileName_6);

static MR_bool MR_CALL 
backend_libs__compile_target_code__is_minus_j_flag_1_p_0(
  MR_String FlagStr_2);

static MR_Box MR_CALL 
backend_libs__compile_target_code__output_library_link_flags_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__compile_target_code__output_library_link_flags_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__make_standalone_int_body_6_p_0(
  MR_Word Globals_7,
  MR_Word ProgressStream_8,
  MR_Word ErrorStream_9,
  MR_String BaseName_10);

static void MR_CALL 
backend_libs__compile_target_code__link_module_list_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
backend_libs__compile_target_code__join_module_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
backend_libs__compile_target_code__create_java_exe_or_lib_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__compile_target_code__create_java_exe_or_lib_10_p_0(
  MR_Word Globals_11,
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word LinkTargetType_14,
  MR_Word MainModuleName_15,
  MR_String JarFileName_16,
  MR_Word ObjectList_17,
  MR_Word * Succeeded_18);

static void MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_10_p_0(
  MR_Word Globals_11,
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word LinkTargetType_14,
  MR_Word MainModuleName_15,
  MR_String OutputFileName0_16,
  MR_Word SourceList0_17,
  MR_Word * Succeeded_18);

static MR_String MR_CALL 
backend_libs__compile_target_code__csharp_file_name_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String HeadVar__3_3);

static void MR_CALL 
backend_libs__compile_target_code__link_exe_or_shared_lib_10_p_0(
  MR_Word Globals_11,
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word LinkTargetType_14,
  MR_Word ModuleName_15,
  MR_String OutputFileName_16,
  MR_Word ObjectsList_17,
  MR_Word * Succeeded_18);

static MR_Box MR_CALL 
backend_libs__compile_target_code__create_archive_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__create_archive_9_p_0(
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_String LibFileName_13,
  MR_Word Quote_14,
  MR_Word ObjectList_15,
  MR_Word * Succeeded_16);

static void MR_CALL 
backend_libs__compile_target_code__invoke_long_system_command_10_p_0(
  MR_Word Globals_11,
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word CmdOutputStream_14,
  MR_Word Verbosity_15,
  MR_String Cmd_16,
  MR_String Args_17,
  MR_Word * Succeeded_18);

static MR_String MR_CALL 
backend_libs__compile_target_code__reserve_stack_size_flags_1_f_0(
  MR_Word Globals_3);

static void MR_CALL 
backend_libs__compile_target_code__get_linker_output_option_3_p_0(
  MR_Word Globals_4,
  MR_Word LinkTargetType_5,
  MR_String * OutputOpt_6);

static MR_Box MR_CALL 
backend_libs__compile_target_code__get_frameworks_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__get_frameworks_2_p_0(
  MR_Word Globals_3,
  MR_String * FrameworkOpts_4);

static MR_bool MR_CALL 
backend_libs__compile_target_code__filter_object_files_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__filter_object_files_4_p_0(
  MR_Word Globals_5,
  MR_Word Files_6,
  MR_Word * ObjectFiles_7,
  MR_Word * NonObjectFiles_8);

static void MR_CALL 
backend_libs__compile_target_code__get_restricted_command_line_link_opts_3_p_0(
  MR_Word Globals_4,
  MR_Word LinkTargetType_5,
  MR_String * ResCmdLinkOpts_6);

static void MR_CALL 
backend_libs__compile_target_code__use_thread_libs_2_p_0(
  MR_Word Globals_3,
  MR_Word * UseThreadLibs_4);

static void MR_CALL 
backend_libs__compile_target_code__get_system_libs_3_p_0(
  MR_Word Globals_4,
  MR_Word TargetType_5,
  MR_String * SystemLibs_6);

static MR_Box MR_CALL 
backend_libs__compile_target_code__get_runtime_library_path_opts_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__get_runtime_library_path_opts_5_p_0(
  MR_Word Globals_6,
  MR_Word LinkTargetType_7,
  MR_Word RpathFlagOpt_8,
  MR_Word RpathSepOpt_9,
  MR_String * RpathOpts_10);

static void MR_CALL 
backend_libs__compile_target_code__get_link_libraries_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
backend_libs__compile_target_code__get_link_libraries_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__get_link_libraries_4_p_0(
  MR_Word Globals_5,
  MR_Word * MaybeLinkLibraries_6);

static void MR_CALL 
backend_libs__compile_target_code__get_mercury_std_libs_3_p_0(
  MR_Word Globals_4,
  MR_Word TargetType_5,
  MR_String * StdLibs_6);

static void MR_CALL 
backend_libs__compile_target_code__link_lib_args_8_p_0(
  MR_Word Globals_9,
  MR_Word TargetType_10,
  MR_String StdLibDir_11,
  MR_String GradeDir_12,
  MR_Word LibOtherExt_13,
  MR_String Name_14,
  MR_String * StaticArg_15,
  MR_String * SharedArg_16);

static void MR_CALL 
backend_libs__compile_target_code__same_timestamp_5_p_0(
  MR_String FileNameA_6,
  MR_String FileNameB_7,
  MR_Word * SameTimestamp_8);

static void MR_CALL 
backend_libs__compile_target_code__link_output_filename_7_p_0(
  MR_Word Globals_8,
  MR_Word LinkTargetType_9,
  MR_Word ModuleName_10,
  MR_Word * OtherExt_11,
  MR_String * OutputFileName_12);

static void MR_CALL 
backend_libs__compile_target_code__do_make_init_obj_file_9_p_0(
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word MustCompile_13,
  MR_Word ModuleName_14,
  MR_Word ModuleNames_15,
  MR_Word * Result_16);

static void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_49_95_95_91_49_48_93_95_48_9_p_0(
  MR_Word Var_32,
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word Var_35,
  MR_String Var_36,
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word MaybeInitTargetFile_12,
  MR_Word MustCompile_13,
  MR_String InitObjFileName_15,
  MR_Word * Result_16);

static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__do_make_init_obj_file__1274__1_9_p_0(
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word PIC_28,
  MR_String InitObjFileName_32,
  MR_String LambdaHeadVar__1_73,
  MR_Word * LambdaHeadVar__2_74);

static MR_String MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1239__1_3_f_0(
  MR_String GradeDir_19,
  MR_String StdLibDir_20,
  MR_String LambdaHeadVar__1_40);

static void MR_CALL 
backend_libs__compile_target_code__make_init_target_file_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
backend_libs__compile_target_code__make_init_target_file_14_p_0(
  MR_Word Globals_15,
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_String MkInit_18,
  MR_Word ModuleName_19,
  MR_Word ModuleNames_20,
  MR_Word TargetOtherExt_21,
  MR_Word InitTargetOtherExt_22,
  MR_Word StdInitFileNames_23,
  MR_Word StdTraceInitFileNames_24,
  MR_Word SourceDebugInitFileNames_25,
  MR_Word * MaybeInitTargetFile_26);

static MR_Box MR_CALL 
backend_libs__compile_target_code__join_quoted_string_list_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__join_quoted_string_list_5_p_0(
  MR_Word Strings_6,
  MR_String Prefix_7,
  MR_String Suffix_8,
  MR_String Separator_9,
  MR_String * Result_10);

static void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_2_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_2_10_p_0(
  MR_Word Globals_11,
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word MainModuleName_14,
  MR_Word AllModules_15,
  MR_Word TargetExt_16,
  MR_String MkInit_17,
  MR_Word * Succeeded_18);

static void MR_CALL 
backend_libs__compile_target_code__invoke_mkinit_11_p_0(
  MR_Word Globals_12,
  MR_Word ProgressStream_13,
  MR_Word ErrorStream_14,
  MR_Word InitFileStream_15,
  MR_Word Verbosity_16,
  MR_String MkInit_17,
  MR_String Args_18,
  MR_Word FileNames_19,
  MR_Word * MkInitSucceeded_20);

static MR_Box MR_CALL 
backend_libs__compile_target_code__make_all_module_command_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__make_all_module_command_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__compile_target_code__referenced_dlls_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
backend_libs__compile_target_code__referenced_dlls_2_f_0(
  MR_Word Module_4,
  MR_Word DepModules0_5);

static MR_bool MR_CALL 
backend_libs__compile_target_code__compile_java_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__invoke_long_system_command_maybe_filter_output_12_p_0(
  MR_Word Globals_13,
  MR_Word ProgressStream_14,
  MR_Word ErrorStream_15,
  MR_Word CmdOutputStream_16,
  MR_Word Verbosity_17,
  MR_String Cmd_18,
  MR_String NonAtArgs_19,
  MR_String Args_20,
  MR_Word MaybeProcessOutput_21,
  MR_Word * Succeeded_22);

static MR_String MR_CALL 
backend_libs__compile_target_code__at_file_name_2_f_0(
  MR_Word Globals_4,
  MR_String FileName_5);

static MR_String MR_CALL 
backend_libs__compile_target_code__java_classpath_separator_0_f_0(void);

static void MR_CALL 
backend_libs__compile_target_code__gather_c_compiler_flags_3_p_0(
  MR_Word Globals_4,
  MR_Word PIC_5,
  MR_String * AllCFlags_6);

static MR_bool MR_CALL 
backend_libs__compile_target_code__arch_is_apple_darwin_1_p_0(
  MR_String FullArch_2);

static MR_Box MR_CALL 
backend_libs__compile_target_code__get_framework_directories_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__get_framework_directories_2_p_0(
  MR_Word Globals_3,
  MR_String * FrameworkDirs_4);

static void MR_CALL 
backend_libs__compile_target_code__gather_compiler_specific_flags_2_p_0(
  MR_Word Globals_3,
  MR_String * Flags_4);

static void MR_CALL 
backend_libs__compile_target_code__join_string_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3,
  MR_String HeadVar__4_4,
  MR_String * HeadVar__5_5);

static MR_Box MR_CALL 
backend_libs__compile_target_code__gather_c_include_dir_flags_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__gather_c_include_dir_flags_2_p_0(
  MR_Word Globals_3,
  MR_String * InclOpt_4);

static void MR_CALL 
backend_libs__compile_target_code__gather_c_grade_defines_2_p_0(
  MR_Word Globals_3,
  MR_String * GradeDefines_4);

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____is_as_new_as_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__compile_target_code____Compare____is_as_new_as_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____linked_target_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__compile_target_code____Compare____linked_target_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____pic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__compile_target_code____Compare____pic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_1[15][2];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_2[3][6];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_3[11][1];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_4[4][5];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_5[16][3];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_6[1][4];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_7[1][9];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_8[3][7];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_9[2][11];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_11[2][8];


/* sealed */ struct backend_libs__compile_target_code__vector_common_type_10_0_s {
  const MR_Word backend_libs__compile_target_code__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct backend_libs__compile_target_code__vector_common_type_10_0_s backend_libs__compile_target_code_vector_common_10[5];



static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_1[15][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) " ")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[5])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "-defaultlib:libcmt")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "-entry:wmainCRTStartup")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "-machine:x86")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "-subsystem:console")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "-nologo")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &backend_libs__compile_target_code_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "\" \"\044\100\"\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "_H */\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) " -s ")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_2[3][6] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_3[11][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".c"))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".dll"))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 3 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 4 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "mercury_il"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "mercury_dotnet"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "mercury"))
  },
  /* row 8 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".init"))))
  },
  /* row 9 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".exe"))))
  },
  /* row 10 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".jar"))))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_4[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__compile_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_5[16][3] = {
  /* row 0 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_4[0])),
    ((MR_Box) (backend_libs__compile_target_code__gather_c_include_dir_flags_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_4[1])),
    ((MR_Box) (backend_libs__compile_target_code__get_framework_directories_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_6[0])),
    ((MR_Box) (backend_libs__compile_target_code__compile_java_files_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_4[2])),
    ((MR_Box) (backend_libs__compile_target_code__referenced_dlls_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_4[0])),
    ((MR_Box) (backend_libs__compile_target_code__compile_csharp_file_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_8[0])),
    ((MR_Box) (backend_libs__compile_target_code__make_all_module_command_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_4[1])),
    ((MR_Box) (backend_libs__compile_target_code__make_all_module_command_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_4[1])),
    ((MR_Box) (backend_libs__compile_target_code__join_quoted_string_list_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_4[1])),
    ((MR_Box) (backend_libs__compile_target_code__get_runtime_library_path_opts_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_4[1])),
    ((MR_Box) (backend_libs__compile_target_code__get_frameworks_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_4[1])),
    ((MR_Box) (backend_libs__compile_target_code__create_archive_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_4[3])),
    ((MR_Box) (backend_libs__compile_target_code__link_module_list_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_4[0])),
    ((MR_Box) (backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_4[1])),
    ((MR_Box) (backend_libs__compile_target_code__output_library_link_flags_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_4[1])),
    ((MR_Box) (backend_libs__compile_target_code__output_library_link_flags_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_4[1])),
    ((MR_Box) (backend_libs__compile_target_code__write_cli_shell_script_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_6[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_7[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_8[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_env_type_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_csharp_compiler_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_9[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_11[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct backend_libs__compile_target_code__vector_common_type_10_0_s backend_libs__compile_target_code_vector_common_10[5] = {
  /* row 0 */   {     (MR_Word) (((MR_Box) ((MR_String) ""))) },
  /* row 1 */   {     (MR_Word) (((MR_Box) ((MR_String) ""))) },
  /* row 2 */   {     (MR_Word) (((MR_Box) ((MR_String) ""))) },
  /* row 3 */   {     (MR_Word) (((MR_Box) ((MR_String) ".bat"))) },
  /* row 4 */   {     (MR_Word) (((MR_Box) ((MR_String) ".bat"))) },
};


#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__compile_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_TypeInfo_Struct4 backend_libs__compile_target_code____vti_pred_4builtin__type_ctor_info_string_0libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_compile_init_file_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0_10001)),
  ((MR_Box) (backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0_10001)),
  (MR_String) "backend_libs.compile_target_code",
  (MR_String) "compile_init_file_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&backend_libs__compile_target_code____vti_pred_4builtin__type_ctor_info_string_0libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0io__type_ctor_info_state_0io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_0 = {
  (MR_String) "is_as_new_as",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_1 = {
  (MR_String) "is_not_as_new_as",
  INT32_C(1)
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_2 = {
  (MR_String) "missing_timestamp",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_ordinal_ordered_is_as_new_as_0[3] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_0,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_1,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_2
};

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_is_as_new_as_0[3] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_0,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_1,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_2
};

static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_is_as_new_as_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_is_as_new_as_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__compile_target_code____Unify____is_as_new_as_0_0_10001)),
  ((MR_Box) (backend_libs__compile_target_code____Compare____is_as_new_as_0_0_10001)),
  (MR_String) "backend_libs.compile_target_code",
  (MR_String) "is_as_new_as",
  {     backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_is_as_new_as_0 },
  {     backend_libs__compile_target_code__backend_libs__compile_target_code__enum_ordinal_ordered_is_as_new_as_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_is_as_new_as_0,

};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_0 = {
  (MR_String) "executable",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_1 = {
  (MR_String) "static_library",
  INT32_C(1)
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_2 = {
  (MR_String) "shared_library",
  INT32_C(2)
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_3 = {
  (MR_String) "csharp_executable",
  INT32_C(3)
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_4 = {
  (MR_String) "csharp_library",
  INT32_C(4)
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_5 = {
  (MR_String) "java_executable",
  INT32_C(5)
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_6 = {
  (MR_String) "java_archive",
  INT32_C(6)
};

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_ordinal_ordered_linked_target_type_0[7] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_0,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_1,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_2,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_3,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_4,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_5,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_6
};

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_linked_target_type_0[7] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_3,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_4,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_0,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_6,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_5,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_2,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_1
};

static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_linked_target_type_0[7] = {
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__compile_target_code____Unify____linked_target_type_0_0_10001)),
  ((MR_Box) (backend_libs__compile_target_code____Compare____linked_target_type_0_0_10001)),
  (MR_String) "backend_libs.compile_target_code",
  (MR_String) "linked_target_type",
  {     backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_linked_target_type_0 },
  {     backend_libs__compile_target_code__backend_libs__compile_target_code__enum_ordinal_ordered_linked_target_type_0 },
  (MR_Integer) 7,
  UINT16_C(12),
  backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_linked_target_type_0,

};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_0 = {
  (MR_String) "pic",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_1 = {
  (MR_String) "non_pic",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_ordinal_ordered_pic_0[2] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_0,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_1
};

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_pic_0[2] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_1,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_0
};

static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_pic_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__compile_target_code____Unify____pic_0_0_10001)),
  ((MR_Box) (backend_libs__compile_target_code____Compare____pic_0_0_10001)),
  (MR_String) "backend_libs.compile_target_code",
  (MR_String) "pic",
  {     backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_pic_0 },
  {     backend_libs__compile_target_code__backend_libs__compile_target_code__enum_ordinal_ordered_pic_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_pic_0,

};

static MR_String MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__get_link_libraries__2186__1_2_f_0(
  MR_String GradeDir_9,
  MR_String LambdaHeadVar__1_19)
{
  {
    MR_String LambdaHeadVar__2_20;
    MR_String Var_21;

    Var_21 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_19, (MR_String) "lib");
    LambdaHeadVar__2_20 = mercury__dir__f_slash_2_f_0(Var_21, GradeDir_9);
    return LambdaHeadVar__2_20;
  }
}

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__referenced_dlls__1076__1_1_f_0(
  MR_Word LambdaHeadVar__1_17)
{
  {
    MR_bool succeeded;
    MR_Word LambdaHeadVar__2_18;

    succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(LambdaHeadVar__1_17);
    if (succeeded)
      LambdaHeadVar__2_18 = (MR_Word) (&backend_libs__compile_target_code_scalar_common_3[7]);
    else
    {
      MR_String Var_20;

      Var_20 = mdbcomp__sym_name__outermost_qualifier_1_f_0(LambdaHeadVar__1_17);
      {
        LambdaHeadVar__2_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), LambdaHeadVar__2_18, 0) = ((MR_Box) (Var_20));
      }
    }
    return LambdaHeadVar__2_18;
  }
}

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__gather_c_include_dir_flags__809__1_1_f_0(
  MR_String LambdaHeadVar__1_11)
{
  {
    MR_Word LambdaHeadVar__2_12;
    MR_Word Var_14;
    MR_String Var_15;

    Var_15 = libs__options__quote_arg_1_f_0(LambdaHeadVar__1_11);
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[1])));
    }
    {
      LambdaHeadVar__2_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_12, 0) = ((MR_Box) ((MR_String) "-I"));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_12, 1) = ((MR_Box) (Var_14));
    }
    return LambdaHeadVar__2_12;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__link_module_list__1531__1_2_p_0(
  MR_String LambdaHeadVar__1_45,
  MR_Word * LambdaHeadVar__2_46)
{
  {
    MR_String Var_47;

    Var_47 = mercury__dir__det_basename_1_f_0(LambdaHeadVar__1_45);
    parse_tree__file_names__file_name_to_module_name_2_p_0(Var_47, LambdaHeadVar__2_46);
  }
}

static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__compile_csharp_file__1040__1_6_p_0(
  MR_Word Globals_10,
  MR_String Prefix_29,
  MR_Word LambdaHeadVar__1_84,
  MR_Word * LambdaHeadVar__2_85)
{
  {
    MR_String FileName_43;
    MR_Word Var_93;

    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140backend_libs.compile_target_code.compile_csharp_file\'/9", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[1])), LambdaHeadVar__1_84, &FileName_43);
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (FileName_43));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[1])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *LambdaHeadVar__2_85 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Prefix_29));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_93));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__compile_csharp_file__1030__1_3_p_0(
  MR_Word ModuleName_28,
  MR_Word LambdaHeadVar__1_78,
  MR_Word * LambdaHeadVar__2_79)
{
  {
    MR_bool succeeded;
    MR_Word Var_80 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_78, (MR_Integer) 0))) & (MR_Integer) 3);

    succeeded = (Var_80 == (MR_Integer) 1);
    if (succeeded)
    {
      *LambdaHeadVar__2_79 = parse_tree__prog_foreign__fim_spec_module_name_from_module_2_f_0(LambdaHeadVar__1_78, ModuleName_28);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__1020__1_1_f_0(
  MR_String LambdaHeadVar__1_69)
{
  {
    MR_Word LambdaHeadVar__2_70;
    MR_Word Var_72;

    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (LambdaHeadVar__1_69));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[1])));
    }
    {
      LambdaHeadVar__2_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_70, 0) = ((MR_Box) ((MR_String) "-lib:"));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_70, 1) = ((MR_Box) (Var_72));
    }
    return LambdaHeadVar__2_70;
  }
}

void MR_CALL 
backend_libs__compile_target_code____Compare____pic_0_0(
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
backend_libs__compile_target_code____Unify____pic_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
backend_libs__compile_target_code____Compare____linked_target_type_0_0(
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
backend_libs__compile_target_code____Unify____linked_target_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
backend_libs__compile_target_code____Compare____is_as_new_as_0_0(
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
backend_libs__compile_target_code____Unify____is_as_new_as_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__compile_target_code_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__write_jar_class_argument_5_p_0(
  MR_Word Stream_6,
  MR_String ClassSubDir_7,
  MR_String ClassFileName_8)
{
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
}

static void MR_CALL 
backend_libs__compile_target_code__write_cli_shell_script_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_string_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__write_cli_shell_script_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__write_cli_shell_script_5_p_0(
  MR_Word Globals_6,
  MR_String ExeFileName_7,
  MR_Word Stream_8)
{
  {
    MR_String CLI_10;
    MR_Word LinkLibraryDirectoriesList_11;
    MR_String LinkLibraryDirectories_12;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_54;
    MR_Box conv1_STATE_VARIABLE_IO_14;

    libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 565, &CLI_10);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_6, (MR_Integer) 571, &LinkLibraryDirectoriesList_11);
    Var_54 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[15]), LinkLibraryDirectoriesList_11);
    backend_libs__compile_target_code__join_string_list_5_p_0(Var_54, (MR_String) "", (MR_String) "", (MR_String) ":", &LinkLibraryDirectories_12);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (backend_libs__compile_target_code__write_cli_shell_script_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Stream_8));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (ExeFileName_7));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[12])));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) ((MR_String) "exec \"\044CLI_INTERPRETER\" \"\044DIR/"));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) ((MR_String) "}\n"));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (CLI_10));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) ((MR_String) "CLI_INTERPRETER=\044{CLI_INTERPRETER:-"));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) ((MR_String) "export MONO_PATH\n"));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (LinkLibraryDirectories_12));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) ((MR_String) "MONO_PATH=\044MONO_PATH:"));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) ((MR_String) "DIR=\044{0%/*}\n"));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_20, Var_21, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_14);
  }
}

static void MR_CALL 
backend_libs__compile_target_code__process_link_library_8_p_0(
  MR_Word Globals_9,
  MR_Word MercuryLibDirs_10,
  MR_String LibName_11,
  MR_String * LinkerOpt_12,
  MR_Word STATE_VARIABLE_Succeeded_0_36,
  MR_Word * STATE_VARIABLE_Succeeded_37)
{
  {
    MR_bool succeeded;
    MR_Word Target_15;
    MR_String MercuryLinkage_16;
    MR_String LinkOpt_22;
    MR_String LibSuffix_23;
    MR_Word MercuryLibs_25;
    MR_Word TypeCtorInfo_68_68;

    libs__globals__get_target_2_p_0(Globals_9, &Target_15);
    switch (Target_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CCompilerType_17;

          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 589, &MercuryLinkage_16);
          libs__globals__get_c_compiler_type_2_p_0(Globals_9, &CCompilerType_17);
          switch (MR_tag((MR_Word) CCompilerType_17)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                LinkOpt_22 = (MR_String) "-l";
                LibSuffix_23 = (MR_String) "";
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                LinkOpt_22 = (MR_String) "-l";
                LibSuffix_23 = (MR_String) "";
              }
              break;
            case (MR_Integer) 3:
              {
                LinkOpt_22 = (MR_String) "";
                LibSuffix_23 = (MR_String) ".lib";
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MercuryLinkage_16 = (MR_String) "shared";
          LinkOpt_22 = (MR_String) "-r:";
          LibSuffix_23 = (MR_String) ".dll";
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.process_link_library\'/8", (MR_String) "target_java");
          return;
        }
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 580, &MercuryLibs_25);
    succeeded = (strcmp(MercuryLinkage_16, (MR_String) "static") == 0);
    if (succeeded)
    {
      TypeCtorInfo_68_68 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
      succeeded = mercury__list__member_2_p_0(TypeCtorInfo_68_68, ((MR_Box) (LibName_11)), MercuryLibs_25);
    }
    if (succeeded)
    {
      MR_Word LibModuleName_26;
      MR_String LibExtStr_27;
      MR_Word NoSubDirGlobals_28;
      MR_String LibFileName_29;
      MR_Word MaybeDirName_30;
      MR_Word Var_51;

      parse_tree__file_names__file_name_to_module_name_2_p_0(LibName_11, &LibModuleName_26);
      libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 603, &LibExtStr_27);
      libs__globals__set_option_4_p_0((MR_Integer) 677, (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[3])), Globals_9, &NoSubDirGlobals_28);
      Var_51 = (MR_Word) (LibExtStr_27);
      parse_tree__file_names__module_name_to_lib_file_name_9_p_0(NoSubDirGlobals_28, (MR_String) "predicate \140backend_libs.compile_target_code.process_link_library\'/8", (MR_Integer) 1, (MR_String) "lib", Var_51, LibModuleName_26, &LibFileName_29);
      libs__file_util__search_for_file_returning_dir_5_p_0(MercuryLibDirs_10, LibFileName_29, &MaybeDirName_30);
      if (((MR_tag((MR_Word) MaybeDirName_30)) == (MR_Integer) 1))
      {
        MR_String Error_32 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeDirName_30, (MR_Integer) 0))));
        MR_Word Pieces_33;
        MR_Word Spec_34;
        MR_Word StdErr_35;
        MR_Word Var_54;

        *LinkerOpt_12 = (MR_String) "";
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (Error_32));
        }
        {
          Pieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_33, 0) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(1), Pieces_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[11])));
        }
        {
          Spec_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140backend_libs.compile_target_code.process_link_library\'/8"));
          MR_hl_field(MR_mktag(2), Spec_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(2), Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(2), Spec_34, 3) = ((MR_Box) (Pieces_33));
        }
        mercury__io__stderr_stream_3_p_0(&StdErr_35);
        parse_tree__error_util__write_error_spec_5_p_0(StdErr_35, Globals_9, Spec_34);
        *STATE_VARIABLE_Succeeded_37 = (MR_Integer) 0;
      }
      else
      {
        MR_String DirName_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), MaybeDirName_30, (MR_Integer) 0))));

        *LinkerOpt_12 = mercury__dir__f_slash_2_f_0(DirName_31, LibFileName_29);
        *STATE_VARIABLE_Succeeded_37 = STATE_VARIABLE_Succeeded_0_36;
      }
    }
    else
    {
      MR_String Var_67;

      Var_67 = mercury__string__f_43_43_2_f_0(LibName_11, LibSuffix_23);
      *LinkerOpt_12 = mercury__string__f_43_43_2_f_0(LinkOpt_22, Var_67);
      *STATE_VARIABLE_Succeeded_37 = STATE_VARIABLE_Succeeded_0_36;
    }
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code__has_object_file_extension_3_p_0(
  MR_String ObjExt_4,
  MR_String PicObjExt_5,
  MR_String FileName_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string__suffix_2_p_0(FileName_6, ObjExt_4);
    if (!(succeeded))
      succeeded = mercury__string__suffix_2_p_0(FileName_6, PicObjExt_5);
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code__is_minus_j_flag_1_p_0(
  MR_String FlagStr_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string__prefix_2_p_0(FlagStr_2, (MR_String) "-J");
    return succeeded;
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__output_library_link_flags_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__output_library_link_flags_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
backend_libs__compile_target_code__output_library_link_flags_4_p_0(
  MR_Word Globals_5,
  MR_Word Stream_6)
{
  {
    MR_bool succeeded;
    MR_Word LinkLibraryDirectoriesList_11;
    MR_String LinkerPathFlag_12;
    MR_String LinkLibraryDirectories_13;
    MR_String RpathOpts_14;
    MR_Word MaybeLinkLibraries_15;
    MR_String LinkLibraries_17;
    MR_String MercuryStdLibs_18;
    MR_String SystemLibs_19;
    MR_Word Var_62;
    MR_Word UseInstallName_72;
    MR_Word SharedLibsSupported_73;
    MR_String Linkage_74;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 571, &LinkLibraryDirectoriesList_11);
    libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 639, &LinkerPathFlag_12);
    Var_62 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[13]), LinkLibraryDirectoriesList_11);
    backend_libs__compile_target_code__join_string_list_5_p_0(Var_62, LinkerPathFlag_12, (MR_String) "", (MR_String) " ", &LinkLibraryDirectories_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 646, &UseInstallName_72);
    backend_libs__compile_target_code__shared_libraries_supported_2_p_0(Globals_5, &SharedLibsSupported_73);
    libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 587, &Linkage_74);
    succeeded = (UseInstallName_72 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (SharedLibsSupported_73 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (strcmp(Linkage_74, (MR_String) "shared") == 0);
    }
    if (succeeded)
    {
      MR_Word RpathDirs0_75;
      MR_Word RpathDirs_76;

      libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 572, &RpathDirs0_75);
      RpathDirs_76 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[14]), RpathDirs0_75);
      if ((RpathDirs_76 == (MR_Word) ((MR_Unsigned) 0U)))
        RpathOpts_14 = (MR_String) "";
      else
      {
        MR_String RpathSep_79;
        MR_String RpathFlag_80;
        MR_String RpathOpts0_81;

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 641, &RpathSep_79);
        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 640, &RpathFlag_80);
        RpathOpts0_81 = mercury__string__join_list_2_f_0(RpathSep_79, RpathDirs_76);
        RpathOpts_14 = mercury__string__f_43_43_2_f_0(RpathFlag_80, RpathOpts0_81);
      }
    }
    else
      RpathOpts_14 = (MR_String) "";
    backend_libs__compile_target_code__get_link_libraries_4_p_0(Globals_5, &MaybeLinkLibraries_15);
    if ((MaybeLinkLibraries_15 == (MR_Word) ((MR_Unsigned) 0U)))
      LinkLibraries_17 = (MR_String) "";
    else
    {
      MR_Word LinkLibrariesList_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLinkLibraries_15, (MR_Integer) 0))));

      backend_libs__compile_target_code__join_string_list_5_p_0(LinkLibrariesList_16, (MR_String) "", (MR_String) "", (MR_String) " ", &LinkLibraries_17);
    }
    backend_libs__compile_target_code__get_mercury_std_libs_3_p_0(Globals_5, (MR_Integer) 0, &MercuryStdLibs_18);
    backend_libs__compile_target_code__get_system_libs_3_p_0(Globals_5, (MR_Integer) 0, &SystemLibs_19);
    mercury__io__write_string_4_p_0(Stream_6, LinkLibraryDirectories_13);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, RpathOpts_14);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, LinkLibraries_17);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, MercuryStdLibs_18);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, SystemLibs_19);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_12;

    conv0_LambdaHeadVar__2_12 = backend_libs__compile_target_code__IntroducedFrom__func__gather_c_include_dir_flags__809__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_12));
    return wrapper_arg_2;
  }
}

void MR_CALL 
backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0(
  MR_Word Globals_5,
  MR_Word Stream_6)
{
  {
    MR_String InclOpts_8;
    MR_Word C_Incl_Dirs_15;
    MR_Word Var_18;
    MR_Word Var_19;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 533, &C_Incl_Dirs_15);
    Var_19 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_1[0]), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[12]), C_Incl_Dirs_15);
    Var_18 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19);
    InclOpts_8 = mercury__string__append_list_1_f_0(Var_18);
    mercury__io__write_string_4_p_0(Stream_6, InclOpts_8);
    mercury__io__nl_3_p_0(Stream_6);
  }
}

void MR_CALL 
backend_libs__compile_target_code__output_c_grade_defines_4_p_0(
  MR_Word Globals_5,
  MR_Word Stream_6)
{
  {
    MR_String GradeDefines_9;

    backend_libs__compile_target_code__gather_c_grade_defines_2_p_0(Globals_5, &GradeDefines_9);
    mercury__io__write_string_4_p_0(Stream_6, GradeDefines_9);
    mercury__io__nl_3_p_0(Stream_6);
  }
}

void MR_CALL 
backend_libs__compile_target_code__output_c_compiler_flags_4_p_0(
  MR_Word Globals_5,
  MR_Word Stream_6)
{
  {
    MR_String CFlags_9;

    backend_libs__compile_target_code__gather_c_compiler_flags_3_p_0(Globals_5, (MR_Integer) 1, &CFlags_9);
    mercury__io__write_string_4_p_0(Stream_6, CFlags_9);
  }
}

void MR_CALL 
backend_libs__compile_target_code__make_standalone_interface_6_p_0(
  MR_Word Globals_7,
  MR_Word ProgressStream_8,
  MR_Word ErrorStream_9,
  MR_String BaseName_10)
{
  {
    MR_String HdrFileName_23;
    MR_Word OpenResult_24;

    HdrFileName_23 = mercury__string__f_43_43_2_f_0(BaseName_10, (MR_String) ".h");
    mercury__io__open_output_4_p_0(HdrFileName_23, &OpenResult_24);
    if (((MR_tag((MR_Word) OpenResult_24)) == (MR_Integer) 1))
    {
      MR_Word Error_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenResult_24, (MR_Integer) 0))));

      parse_tree__error_util__unable_to_open_file_5_p_0(ErrorStream_9, HdrFileName_23, Error_26);
    }
    else
    {
      MR_Word HdrFileStream_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_24, (MR_Integer) 0))));
      MR_Word Var_30;
      MR_Word Var_33;
      MR_String Var_34;
      MR_Word Var_35;
      MR_Word Var_37;
      MR_Word Var_39;
      MR_String Var_40;
      MR_Word Var_41;
      MR_Word Var_43;
      MR_Word Var_45;
      MR_Word Var_47;
      MR_Word Var_49;
      MR_Word Var_51;
      MR_Word Var_53;
      MR_Word Var_55;
      MR_Word Var_57;
      MR_Word Var_59;
      MR_Word Var_61;
      MR_Word Var_63;
      MR_Word Var_65;
      MR_Word Var_67;
      MR_Word Var_69;
      MR_Word Var_71;
      MR_Word Var_73;
      MR_Word Var_75;
      MR_String Var_76;

      Var_34 = mercury__string__to_upper_1_f_0(BaseName_10);
      Var_40 = mercury__string__to_upper_1_f_0(BaseName_10);
      Var_76 = mercury__string__to_upper_1_f_0(BaseName_10);
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[13])));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) ((MR_String) "#endif /* "));
        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_75));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_73));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) ((MR_String) "#endif\n"));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) ((MR_String) "}\n"));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_69));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) ((MR_String) "#ifdef __cplusplus\n"));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_67));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_65));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) ((MR_String) "mercury_terminate(void);\n"));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_63));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) ((MR_String) "extern int\n"));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_61));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) ((MR_String) "mercury_init(int argc, char **argv, void *stackbottom);\n"));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) ((MR_String) "extern void\n"));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) ((MR_String) "#endif\n"));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) ((MR_String) "extern \"C\" {\n"));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_49));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) ((MR_String) "#ifdef __cplusplus\n"));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_45));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_String) "_H\n"));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) ((MR_String) "#define "));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) ((MR_String) "_H\n"));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) ((MR_String) "#ifndef "));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
      }
      mercury__io__write_strings_4_p_0(HdrFileStream_25, Var_30);
      mercury__io__close_output_3_p_0(HdrFileStream_25);
      backend_libs__compile_target_code__make_standalone_int_body_6_p_0(Globals_7, ProgressStream_8, ErrorStream_9, BaseName_10);
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__make_standalone_int_body_6_p_0(
  MR_Word Globals_7,
  MR_Word ProgressStream_8,
  MR_Word ErrorStream_9,
  MR_String BaseName_10)
{
  {
    MR_bool succeeded;
    MR_Word InitFiles0_12;
    MR_Word InitFiles1_13;
    MR_Word TraceInitFiles0_14;
    MR_Word MaybeStdLibDir_15;
    MR_String GradeDir_16;
    MR_Word InitFiles2_18;
    MR_Word TraceInitFiles_19;
    MR_Word SourceDebugInitFiles_20;
    MR_Word TraceLevel_21;
    MR_Word TraceEnabled_22;
    MR_String TraceOpt_23;
    MR_Word InitFiles3_24;
    MR_Word SourceDebug_25;
    MR_Word InitFiles_26;
    MR_Word RuntimeFlagsList_27;
    MR_String RuntimeFlags_28;
    MR_Word InitFileDirsList_29;
    MR_String InitFileDirs_30;
    MR_String ExperimentalComplexity_31;
    MR_String ExperimentalComplexityOpt_32;
    MR_String Grade_33;
    MR_String MkInit_34;
    MR_String CFileName_35;
    MR_String MkInitArgs_36;
    MR_Word MkInitCmdSucceeded_38;
    MR_Word Var_89;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_103;
    MR_String Var_104;
    MR_Word Var_105;
    MR_Word Var_107;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 585, &InitFiles0_12);
    mercury__list__remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitFiles0_12, &InitFiles1_13);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 586, &TraceInitFiles0_14);
    libs__globals__lookup_maybe_string_option_3_p_0(Globals_7, (MR_Integer) 582, &MaybeStdLibDir_15);
    libs__compute_grade__grade_directory_component_2_p_0(Globals_7, &GradeDir_16);
    if ((MaybeStdLibDir_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      InitFiles2_18 = InitFiles1_13;
      TraceInitFiles_19 = TraceInitFiles0_14;
      SourceDebugInitFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String StdLibDir_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStdLibDir_15, (MR_Integer) 0))));
      MR_String Var_48;
      MR_String Var_49;
      MR_String Var_50;
      MR_Word Var_53;
      MR_String Var_54;
      MR_String Var_55;
      MR_String Var_56;
      MR_String Var_59;
      MR_String Var_60;
      MR_String Var_61;
      MR_Word Var_64;
      MR_String Var_65;
      MR_String Var_66;
      MR_String Var_67;
      MR_String Var_70;
      MR_String Var_71;
      MR_String Var_72;

      Var_50 = mercury__dir__f_slash_2_f_0(StdLibDir_17, (MR_String) "modules");
      Var_49 = mercury__dir__f_slash_2_f_0(Var_50, GradeDir_16);
      Var_48 = mercury__dir__f_slash_2_f_0(Var_49, (MR_String) "mer_rt.init");
      Var_56 = mercury__dir__f_slash_2_f_0(StdLibDir_17, (MR_String) "modules");
      Var_55 = mercury__dir__f_slash_2_f_0(Var_56, GradeDir_16);
      Var_54 = mercury__dir__f_slash_2_f_0(Var_55, (MR_String) "mer_std.init");
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (InitFiles1_13));
      }
      {
        InitFiles2_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), InitFiles2_18, 0) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(1), InitFiles2_18, 1) = ((MR_Box) (Var_53));
      }
      Var_61 = mercury__dir__f_slash_2_f_0(StdLibDir_17, (MR_String) "modules");
      Var_60 = mercury__dir__f_slash_2_f_0(Var_61, GradeDir_16);
      Var_59 = mercury__dir__f_slash_2_f_0(Var_60, (MR_String) "mer_browser.init");
      Var_67 = mercury__dir__f_slash_2_f_0(StdLibDir_17, (MR_String) "modules");
      Var_66 = mercury__dir__f_slash_2_f_0(Var_67, GradeDir_16);
      Var_65 = mercury__dir__f_slash_2_f_0(Var_66, (MR_String) "mer_mdbcomp.init");
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (TraceInitFiles0_14));
      }
      {
        TraceInitFiles_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TraceInitFiles_19, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(1), TraceInitFiles_19, 1) = ((MR_Box) (Var_64));
      }
      Var_72 = mercury__dir__f_slash_2_f_0(StdLibDir_17, (MR_String) "modules");
      Var_71 = mercury__dir__f_slash_2_f_0(Var_72, GradeDir_16);
      Var_70 = mercury__dir__f_slash_2_f_0(Var_71, (MR_String) "mer_ssdb.init");
      {
        SourceDebugInitFiles_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SourceDebugInitFiles_20, 0) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(1), SourceDebugInitFiles_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    libs__globals__get_trace_level_2_p_0(Globals_7, &TraceLevel_21);
    TraceEnabled_22 = libs__trace_params__is_exec_trace_enabled_at_given_trace_level_1_f_0(TraceLevel_21);
    switch (TraceEnabled_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          TraceOpt_23 = (MR_String) "-t";
          InitFiles3_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitFiles2_18, TraceInitFiles_19);
        }
        break;
      case (MR_Integer) 0:
        {
          TraceOpt_23 = (MR_String) "";
          InitFiles3_24 = InitFiles2_18;
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 277, &SourceDebug_25);
    switch (SourceDebug_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        InitFiles_26 = InitFiles3_24;
        break;
      case (MR_Integer) 1:
        InitFiles_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitFiles3_24, SourceDebugInitFiles_20);
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 596, &RuntimeFlagsList_27);
    backend_libs__compile_target_code__join_quoted_string_list_5_p_0(RuntimeFlagsList_27, (MR_String) "-r ", (MR_String) "", (MR_String) " ", &RuntimeFlags_28);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 584, &InitFileDirsList_29);
    backend_libs__compile_target_code__join_quoted_string_list_5_p_0(InitFileDirsList_29, (MR_String) "-I ", (MR_String) "", (MR_String) " ", &InitFileDirs_30);
    libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 256, &ExperimentalComplexity_31);
    succeeded = (strcmp(ExperimentalComplexity_31, (MR_String) "") == 0);
    if (succeeded)
      ExperimentalComplexityOpt_32 = (MR_String) "";
    else
      ExperimentalComplexityOpt_32 = mercury__string__f_43_43_2_f_0((MR_String) "-X ", ExperimentalComplexity_31);
    libs__compute_grade__compute_grade_2_p_0(Globals_7, &Grade_33);
    libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 612, &MkInit_34);
    CFileName_35 = mercury__string__f_43_43_2_f_0(BaseName_10, (MR_String) ".c");
    Var_104 = libs__options__quote_arg_1_f_0(CFileName_35);
    {
      Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (InitFileDirs_30));
      MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[14])));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_107));
    }
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_105));
    }
    {
      Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) ((MR_String) " -o "));
      MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_103));
    }
    {
      Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (RuntimeFlags_28));
      MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_101));
    }
    {
      Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_100));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (ExperimentalComplexityOpt_32));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_98));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_97));
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (TraceOpt_23));
      MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_95));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_94));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Grade_33));
      MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_92));
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) ((MR_String) " -g "));
      MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_91));
    }
    MkInitArgs_36 = mercury__string__append_list_1_f_0(Var_89);
    backend_libs__compile_target_code__invoke_mkinit_11_p_0(Globals_7, ProgressStream_8, ErrorStream_9, ErrorStream_9, (MR_Integer) 1, MkInit_34, MkInitArgs_36, InitFiles_26, &MkInitCmdSucceeded_38);
    switch (MkInitCmdSucceeded_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          mercury__io__write_string_4_p_0(ErrorStream_9, (MR_String) "mercury_compile: error while creating ");
          mercury__io__write_string_4_p_0(ErrorStream_9, (MR_String) "standalone interface in \140");
          mercury__io__write_string_4_p_0(ErrorStream_9, CFileName_35);
          mercury__io__write_string_4_p_0(ErrorStream_9, (MR_String) "\'\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ObjOtherExt_40;
          MR_String ObjFileName_41;
          MR_Word CompileSucceeded_42;
          MR_String Var_123;
          MR_String ExtStr_153;

          libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 552, &ExtStr_153);
          ObjOtherExt_40 = (MR_Word) (ExtStr_153);
          Var_123 = parse_tree__file_names__other_extension_to_string_1_f_0(ObjOtherExt_40);
          ObjFileName_41 = mercury__string__f_43_43_2_f_0(BaseName_10, Var_123);
          backend_libs__compile_target_code__do_compile_c_file_9_p_0(Globals_7, ProgressStream_8, ErrorStream_9, (MR_Integer) 1, CFileName_35, ObjFileName_41, &CompileSucceeded_42);
          switch (CompileSucceeded_42) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                mercury__io__write_string_4_p_0(ErrorStream_9, (MR_String) "mercury_compile: error while compiling");
                mercury__io__write_string_4_p_0(ErrorStream_9, (MR_String) "standalone interface in \140");
                mercury__io__write_string_4_p_0(ErrorStream_9, CFileName_35);
                mercury__io__write_string_4_p_0(ErrorStream_9, (MR_String) "\'\n");
              }
              break;
            case (MR_Integer) 1:
              {
              }
              break;
          }
        }
        break;
    }
  }
}

MR_bool MR_CALL 
backend_libs__compile_target_code__is_pic_object_file_extension_3_p_0(
  MR_Word Globals_4,
  MR_String ExtStr_5,
  MR_Word * PIC_6)
{
  {
    MR_bool succeeded;
    MR_String Var_9;

    libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 552, &Var_9);
    succeeded = (strcmp(ExtStr_5, Var_9) == 0);
    if (succeeded)
    {
      *PIC_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_String Var_10;

      libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 553, &Var_10);
      succeeded = (strcmp(ExtStr_5, Var_10) == 0);
      if (succeeded)
      {
        *PIC_6 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
backend_libs__compile_target_code__pic_object_file_extension_3_p_0(
  MR_Word Globals_4,
  MR_Word PIC_5,
  MR_Word * OtherExt_6)
{
  {
    MR_String ExtStr_7;

    switch (PIC_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 552, &ExtStr_7);
        break;
      case (MR_Integer) 0:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 553, &ExtStr_7);
        break;
    }
    *OtherExt_6 = (MR_Word) (ExtStr_7);
  }
}

void MR_CALL 
backend_libs__compile_target_code__get_linked_target_type_2_p_0(
  MR_Word Globals_3,
  MR_Word * LinkedTargetType_4)
{
  {
    MR_Word MakeSharedLib_5;

    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 126, &MakeSharedLib_5);
    switch (MakeSharedLib_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *LinkedTargetType_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        *LinkedTargetType_4 = (MR_Integer) 2;
        break;
    }
  }
}

void MR_CALL 
backend_libs__compile_target_code__get_object_code_type_3_p_0(
  MR_Word Globals_4,
  MR_Word FileType_5,
  MR_Word * ObjectCodeType_6)
{
  {
    MR_bool succeeded;

    switch (FileType_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 0:
      case (MR_Integer) 6:
      case (MR_Integer) 5:
      case (MR_Integer) 1:
        *ObjectCodeType_6 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        {
          MR_String PicObjExt_7;
          MR_String ObjExt_8;

          libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 553, &PicObjExt_7);
          libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 552, &ObjExt_8);
          succeeded = (strcmp(PicObjExt_7, ObjExt_8) == 0);
          if (succeeded)
            *ObjectCodeType_6 = (MR_Integer) 1;
          else
            *ObjectCodeType_6 = (MR_Integer) 0;
        }
        break;
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__link_module_list_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_46;

    backend_libs__compile_target_code__IntroducedFrom__pred__link_module_list__1531__1_2_p_0(((MR_String) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_46);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_46));
  }
}

void MR_CALL 
backend_libs__compile_target_code__link_module_list_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ErrorStream_10,
  MR_Word Modules_11,
  MR_Word ExtraObjFiles_12,
  MR_Word Globals_13,
  MR_Word * Succeeded_14)
{
  {
    MR_bool succeeded;
    MR_String OutputFileName0_16;
    MR_String OutputFileName_19;
    MR_Word MainModuleName_20;
    MR_Word CompileToSharedLib_21;
    MR_Word TargetType_22;
    MR_Word ObjOtherExt_24;
    MR_Word ObjectsList_25;
    MR_Word InitObjResult_30;
    MR_Word Var_41;
    MR_String ExtStr_60;

    libs__globals__lookup_string_option_3_p_0(Globals_13, (MR_Integer) 566, &OutputFileName0_16);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 126, &CompileToSharedLib_21);
    switch (CompileToSharedLib_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          TargetType_22 = (MR_Integer) 0;
          libs__globals__lookup_string_option_3_p_0(Globals_13, (MR_Integer) 552, &ExtStr_60);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String PicObjExt_93;
          MR_String ObjExt_94;

          TargetType_22 = (MR_Integer) 2;
          libs__globals__lookup_string_option_3_p_0(Globals_13, (MR_Integer) 553, &PicObjExt_93);
          libs__globals__lookup_string_option_3_p_0(Globals_13, (MR_Integer) 552, &ObjExt_94);
          succeeded = (strcmp(PicObjExt_93, ObjExt_94) == 0);
          if (succeeded)
            libs__globals__lookup_string_option_3_p_0(Globals_13, (MR_Integer) 552, &ExtStr_60);
          else
            libs__globals__lookup_string_option_3_p_0(Globals_13, (MR_Integer) 553, &ExtStr_60);
        }
        break;
    }
    ObjOtherExt_24 = (MR_Word) (ExtStr_60);
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (ObjOtherExt_24));
    }
    succeeded = (strcmp(OutputFileName0_16, (MR_String) "") == 0);
    if (succeeded)
    {
      MR_String Module_70;
      MR_Word Modules_71;
      MR_String FileName_72;
      MR_Word FileNames_73;
      MR_Word ModuleName_75;
      MR_String Var_78;

      if ((Modules_11 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.link_module_list\'/8", (MR_String) "no modules");
          return;
        }
      else
        OutputFileName_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), Modules_11, (MR_Integer) 0))));
      Module_70 = ((MR_String) ((MR_hl_field(MR_mktag(1), Modules_11, (MR_Integer) 0))));
      Modules_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modules_11, (MR_Integer) 1))));
      Var_78 = mercury__dir__det_basename_1_f_0(Module_70);
      parse_tree__file_names__file_name_to_module_name_2_p_0(Var_78, &ModuleName_75);
      parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_13, (MR_String) "predicate \140backend_libs.compile_target_code.join_module_list\'/6", (MR_Integer) 1, Var_41, ModuleName_75, &FileName_72);
      backend_libs__compile_target_code__join_module_list_6_p_0(Globals_13, Var_41, Modules_71, &FileNames_73);
      {
        ObjectsList_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ObjectsList_25, 0) = ((MR_Box) (FileName_72));
        MR_hl_field(MR_mktag(1), ObjectsList_25, 1) = ((MR_Box) (FileNames_73));
      }
    }
    else
    {
      OutputFileName_19 = OutputFileName0_16;
      backend_libs__compile_target_code__join_module_list_6_p_0(Globals_13, Var_41, Modules_11, &ObjectsList_25);
    }
    parse_tree__file_names__file_name_to_module_name_2_p_0(OutputFileName_19, &MainModuleName_20);
    switch (TargetType_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ModuleNames_28;

          mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[11]), Modules_11, &ModuleNames_28);
          backend_libs__compile_target_code__do_make_init_obj_file_9_p_0(Globals_13, ProgressStream_9, ErrorStream_10, (MR_Integer) 1, MainModuleName_20, ModuleNames_28, &InitObjResult_30);
        }
        break;
      case (MR_Integer) 2:
        InitObjResult_30 = (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[2]));
        break;
    }
    if ((InitObjResult_30 == (MR_Word) ((MR_Unsigned) 0U)))
      *Succeeded_14 = (MR_Integer) 0;
    else
    {
      MR_String InitObjFileName_31 = ((MR_String) ((MR_hl_field(MR_mktag(1), InitObjResult_30, (MR_Integer) 0))));
      MR_Word ExtraLinkObjectsList_32;
      MR_Word AllObjects0_33;
      MR_Word AllObjects_34;
      MR_Word Var_50;

      libs__globals__lookup_accumulating_option_3_p_0(Globals_13, (MR_Integer) 575, &ExtraLinkObjectsList_32);
      Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraLinkObjectsList_32, ExtraObjFiles_12);
      AllObjects0_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ObjectsList_25, Var_50);
      succeeded = (strcmp(InitObjFileName_31, (MR_String) "") == 0);
      if (succeeded)
        AllObjects_34 = AllObjects0_33;
      else
        {
          AllObjects_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AllObjects_34, 0) = ((MR_Box) (InitObjFileName_31));
          MR_hl_field(MR_mktag(1), AllObjects_34, 1) = ((MR_Box) (AllObjects0_33));
        }
      backend_libs__compile_target_code__link_9_p_0(Globals_13, ProgressStream_9, ErrorStream_10, TargetType_22, MainModuleName_20, AllObjects_34, Succeeded_14);
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__join_module_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Module_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Modules_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_String FileName_16;
    MR_Word FileNames_17;
    MR_Word ModuleName_19;
    MR_String Var_22;

    Var_22 = mercury__dir__det_basename_1_f_0(Module_14);
    parse_tree__file_names__file_name_to_module_name_2_p_0(Var_22, &ModuleName_19);
    parse_tree__file_names__module_name_to_file_name_8_p_0(HeadVar__1_1, (MR_String) "predicate \140backend_libs.compile_target_code.join_module_list\'/6", (MR_Integer) 1, HeadVar__2_2, ModuleName_19, &FileName_16);
    backend_libs__compile_target_code__join_module_list_6_p_0(HeadVar__1_1, HeadVar__2_2, Modules_15, &FileNames_17);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FileName_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FileNames_17));
    }
  }
}

void MR_CALL 
backend_libs__compile_target_code__link_9_p_0(
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word LinkTargetType_13,
  MR_Word ModuleName_14,
  MR_Word ObjectsList_15,
  MR_Word * Succeeded_16)
{
  {
    MR_Word Verbose_18;
    MR_Word Stats_19;
    MR_Word LinkSucceeded_22;

    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 70, &Verbose_18);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 80, &Stats_19);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_18, (MR_String) "% Linking...\n");
    switch (LinkTargetType_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          MR_String OutputFileName_21;

          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140backend_libs.compile_target_code.link_output_filename\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[9])), ModuleName_14, &OutputFileName_21);
          backend_libs__compile_target_code__create_csharp_exe_or_lib_10_p_0(Globals_10, ProgressStream_11, ErrorStream_12, LinkTargetType_13, ModuleName_14, OutputFileName_21, ObjectsList_15, &LinkSucceeded_22);
        }
        break;
      case (MR_Integer) 4:
        {
          MR_String OutputFileName_94;

          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140backend_libs.compile_target_code.link_output_filename\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[1])), ModuleName_14, &OutputFileName_94);
          backend_libs__compile_target_code__create_csharp_exe_or_lib_10_p_0(Globals_10, ProgressStream_11, ErrorStream_12, LinkTargetType_13, ModuleName_14, OutputFileName_94, ObjectsList_15, &LinkSucceeded_22);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String ExtStr_47;
          MR_Word Var_81;
          MR_Word _Ext_87;
          MR_String OutputFileName_96;

          libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 604, &ExtStr_47);
          _Ext_87 = (MR_Word) (ExtStr_47);
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (_Ext_87));
          }
          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140backend_libs.compile_target_code.link_output_filename\'/7", (MR_Integer) 0, Var_81, ModuleName_14, &OutputFileName_96);
          backend_libs__compile_target_code__link_exe_or_shared_lib_10_p_0(Globals_10, ProgressStream_11, ErrorStream_12, LinkTargetType_13, ModuleName_14, OutputFileName_96, ObjectsList_15, &LinkSucceeded_22);
        }
        break;
      case (MR_Integer) 6:
        {
          MR_String OutputFileName_98;

          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140backend_libs.compile_target_code.link_output_filename\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[10])), ModuleName_14, &OutputFileName_98);
          backend_libs__compile_target_code__create_java_exe_or_lib_10_p_0(Globals_10, ProgressStream_11, ErrorStream_12, LinkTargetType_13, ModuleName_14, OutputFileName_98, ObjectsList_15, &LinkSucceeded_22);
        }
        break;
      case (MR_Integer) 5:
        {
          MR_String OutputFileName_100;

          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140backend_libs.compile_target_code.link_output_filename\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[10])), ModuleName_14, &OutputFileName_100);
          backend_libs__compile_target_code__create_java_exe_or_lib_10_p_0(Globals_10, ProgressStream_11, ErrorStream_12, LinkTargetType_13, ModuleName_14, OutputFileName_100, ObjectsList_15, &LinkSucceeded_22);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ExtStr_84;
          MR_Word _Ext_92;
          MR_String OutputFileName_102;

          libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 602, &ExtStr_84);
          _Ext_92 = (MR_Word) (ExtStr_84);
          parse_tree__file_names__module_name_to_lib_file_name_9_p_0(Globals_10, (MR_String) "predicate \140backend_libs.compile_target_code.link_output_filename\'/7", (MR_Integer) 0, (MR_String) "lib", _Ext_92, ModuleName_14, &OutputFileName_102);
          backend_libs__compile_target_code__link_exe_or_shared_lib_10_p_0(Globals_10, ProgressStream_11, ErrorStream_12, LinkTargetType_13, ModuleName_14, OutputFileName_102, ObjectsList_15, &LinkSucceeded_22);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ExtStr_83;
          MR_Word _Ext_93;
          MR_String OutputFileName_104;

          libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 603, &ExtStr_83);
          _Ext_93 = (MR_Word) (ExtStr_83);
          parse_tree__file_names__module_name_to_lib_file_name_9_p_0(Globals_10, (MR_String) "predicate \140backend_libs.compile_target_code.link_output_filename\'/7", (MR_Integer) 0, (MR_String) "lib", _Ext_93, ModuleName_14, &OutputFileName_104);
          backend_libs__compile_target_code__create_archive_9_p_0(Globals_10, ProgressStream_11, ErrorStream_12, OutputFileName_104, (MR_Integer) 1, ObjectsList_15, &LinkSucceeded_22);
        }
        break;
    }
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_11, Stats_19);
    switch (LinkSucceeded_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Succeeded_16 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word _MadeSymlinkOrCopy_23;

          backend_libs__compile_target_code__post_link_make_symlink_or_copy_9_p_0(Globals_10, ProgressStream_11, ErrorStream_12, LinkTargetType_13, ModuleName_14, Succeeded_16, &_MadeSymlinkOrCopy_23);
        }
        break;
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__create_java_exe_or_lib_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    backend_libs__compile_target_code__write_jar_class_argument_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
backend_libs__compile_target_code__create_java_exe_or_lib_10_p_0(
  MR_Word Globals_11,
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word LinkTargetType_14,
  MR_Word MainModuleName_15,
  MR_String JarFileName_16,
  MR_Word ObjectList_17,
  MR_Word * Succeeded_18)
{
  {
    MR_bool succeeded;
    MR_String Jar_20;
    MR_String ClassSubDir_21;
    MR_Word ListClassFiles_22;
    MR_Word TempFileResult_25;
    MR_Word Succeeded0_29;

    libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 652, &Jar_20);
    parse_tree__module_cmds__list_class_files_for_jar_6_p_0(Globals_11, ObjectList_17, &ClassSubDir_21, &ListClassFiles_22);
    if ((ListClassFiles_22 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.create_java_exe_or_lib\'/10", (MR_String) "empty list of .class files");
        return;
      }
    libs__file_util__open_temp_output_6_p_0((MR_String) ".", (MR_String) "mtmp", (MR_String) "", &TempFileResult_25);
    if (((MR_tag((MR_Word) TempFileResult_25)) == (MR_Integer) 1))
    {
      MR_String ErrorMessage_32 = ((MR_String) ((MR_hl_field(MR_mktag(1), TempFileResult_25, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(ErrorStream_13, ErrorMessage_32);
      mercury__io__write_string_4_p_0(ErrorStream_13, (MR_String) "\n");
      Succeeded0_29 = (MR_Integer) 0;
    }
    else
    {
      MR_String TempFileName_26;
      MR_Word Stream_27;
      MR_String Cmd_28;
      MR_Tuple Var_48 = ((MR_Tuple) ((MR_hl_field(MR_mktag(0), TempFileResult_25, (MR_Integer) 0))));
      MR_Word Var_49;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_58;
      MR_Box conv0_STATE_VARIABLE_IO_50_50;
      MR_Word Var_30;

      TempFileName_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 0))));
      Stream_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 1))));
      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_11[1]));
        MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (backend_libs__compile_target_code__create_java_exe_or_lib_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Stream_27));
        MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (ClassSubDir_21));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, ListClassFiles_22, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_50_50);
      mercury__io__close_output_3_p_0(Stream_27);
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (TempFileName_26));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) ((MR_String) " \100"));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_58));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (JarFileName_16));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) ((MR_String) " cf "));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Jar_20));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_53));
      }
      Cmd_28 = mercury__string__append_list_1_f_0(Var_52);
      parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_11, ProgressStream_12, ErrorStream_13, ErrorStream_13, (MR_Integer) 1, Cmd_28, &Succeeded0_29);
      mercury__io__remove_file_4_p_0(TempFileName_26, &Var_30);
      switch (Succeeded0_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_31;

            mercury__io__remove_file_4_p_0(JarFileName_16, &Var_31);
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
      }
    }
    succeeded = (Succeeded0_29 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (LinkTargetType_14 == (MR_Integer) 5);
    if (succeeded)
      parse_tree__module_cmds__create_java_shell_script_5_p_0(Globals_11, MainModuleName_15, Succeeded_18);
    else
      *Succeeded_18 = Succeeded0_29;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    backend_libs__compile_target_code__write_cli_shell_script_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__4_4;

    conv0_HeadVar__4_4 = backend_libs__compile_target_code__csharp_file_name_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_10_p_0(
  MR_Word Globals_11,
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word LinkTargetType_14,
  MR_Word MainModuleName_15,
  MR_String OutputFileName0_16,
  MR_Word SourceList0_17,
  MR_Word * Succeeded_18)
{
  {
    MR_bool succeeded;
    MR_Word EnvType_20;
    MR_Word CSharpCompilerType_21;
    MR_String OutputFileName_22;
    MR_Word SourceList_23;
    MR_String NoLogoOpt_24;
    MR_Word LineNumbers_25;
    MR_String NoWarnLineNumberOpt_26;
    MR_Word Debug_28;
    MR_String DebugOpt_29;
    MR_Word CSCFlagsList_30;
    MR_String TargetOption_31;
    MR_String SignAssemblyOpt_32;
    MR_Word LinkLibraryDirectoriesList0_34;
    MR_Word LinkLibraryDirectoriesList_35;
    MR_String LinkLibraryDirectories_37;
    MR_Word MaybeLinkLibraries_38;
    MR_String LinkLibraries_41;
    MR_String MercuryStdLibs_42;
    MR_String Cmd_43;
    MR_String CmdArgs_44;
    MR_Word Succeeded0_45;
    MR_Word TargetEnvType_46;
    MR_String CLI_47;
    MR_Word Var_50;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_String Var_77;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_84;

    libs__globals__get_system_env_type_2_p_0(Globals_11, &EnvType_20);
    libs__globals__get_csharp_compiler_type_2_p_0(Globals_11, &CSharpCompilerType_21);
    OutputFileName_22 = backend_libs__compile_target_code__csharp_file_name_3_f_0(EnvType_20, CSharpCompilerType_21, OutputFileName0_16);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (backend_libs__compile_target_code__create_csharp_exe_or_lib_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (EnvType_20));
      MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (CSharpCompilerType_21));
    }
    SourceList_23 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_50, SourceList0_17);
    switch (CSharpCompilerType_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        NoLogoOpt_24 = (MR_String) "-nologo ";
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        NoLogoOpt_24 = (MR_String) "";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 169, &LineNumbers_25);
    switch (LineNumbers_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        NoWarnLineNumberOpt_26 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        NoWarnLineNumberOpt_26 = (MR_String) "-nowarn:162,219 ";
        break;
    }
    libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 562, &Cmd_43);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 529, &Debug_28);
    switch (Debug_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DebugOpt_29 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        DebugOpt_29 = (MR_String) "-debug ";
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 563, &CSCFlagsList_30);
    switch (LinkTargetType_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          TargetOption_31 = (MR_String) "-target:exe";
          SignAssemblyOpt_32 = (MR_String) "";
        }
        break;
      case (MR_Integer) 4:
        {
          MR_String KeyFile_33;

          TargetOption_31 = (MR_String) "-target:library";
          libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 600, &KeyFile_33);
          succeeded = (strcmp(KeyFile_33, (MR_String) "") == 0);
          if (succeeded)
            SignAssemblyOpt_32 = (MR_String) "";
          else
          {
            MR_String Var_59;

            Var_59 = mercury__string__f_43_43_2_f_0(KeyFile_33, (MR_String) " ");
            SignAssemblyOpt_32 = mercury__string__f_43_43_2_f_0((MR_String) "-keyfile:", Var_59);
          }
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 6:
      case (MR_Integer) 5:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.create_csharp_exe_or_lib\'/10", (MR_String) "wrong target type");
          return;
        }
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 571, &LinkLibraryDirectoriesList0_34);
    LinkLibraryDirectoriesList_35 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_50, LinkLibraryDirectoriesList0_34);
    backend_libs__compile_target_code__join_quoted_string_list_5_p_0(LinkLibraryDirectoriesList_35, (MR_String) "-lib:", (MR_String) "", (MR_String) " ", &LinkLibraryDirectories_37);
    backend_libs__compile_target_code__get_link_libraries_4_p_0(Globals_11, &MaybeLinkLibraries_38);
    if ((MaybeLinkLibraries_38 == (MR_Word) ((MR_Unsigned) 0U)))
      LinkLibraries_41 = (MR_String) "";
    else
    {
      MR_Word LinkLibrariesList0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLinkLibraries_38, (MR_Integer) 0))));
      MR_Word LinkLibrariesList_40;

      LinkLibrariesList_40 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_50, LinkLibrariesList0_39);
      backend_libs__compile_target_code__join_quoted_string_list_5_p_0(LinkLibrariesList_40, (MR_String) "", (MR_String) "", (MR_String) " ", &LinkLibraries_41);
    }
    backend_libs__compile_target_code__get_mercury_std_libs_3_p_0(Globals_11, LinkTargetType_14, &MercuryStdLibs_42);
    Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "-out:", OutputFileName_22);
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (MercuryStdLibs_42));
      MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (LinkLibraries_41));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_82));
    }
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (LinkLibraryDirectories_37));
      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_81));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (SignAssemblyOpt_32));
      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_80));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (TargetOption_31));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_76));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (DebugOpt_29));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_75));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (NoWarnLineNumberOpt_26));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (NoLogoOpt_24));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_73));
    }
    Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CSCFlagsList_30, SourceList_23);
    Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_72, Var_84);
    CmdArgs_44 = mercury__string__join_list_2_f_0((MR_String) " ", Var_71);
    backend_libs__compile_target_code__invoke_long_system_command_10_p_0(Globals_11, ProgressStream_12, ErrorStream_13, ErrorStream_13, (MR_Integer) 1, Cmd_43, CmdArgs_44, &Succeeded0_45);
    libs__globals__get_target_env_type_2_p_0(Globals_11, &TargetEnvType_46);
    libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 565, &CLI_47);
    succeeded = (Succeeded0_45 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (LinkTargetType_14 == (MR_Integer) 3);
      if (succeeded)
      {
        succeeded = (strcmp(CLI_47, (MR_String) "") == 0);
        succeeded = !(succeeded);
        if (succeeded)
          succeeded = (TargetEnvType_46 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      MR_Word Var_89;

      {
        Var_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_11[0]));
        MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (backend_libs__compile_target_code__create_csharp_exe_or_lib_10_p_0_2));
        MR_hl_field(MR_mktag(0), Var_89, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_89, 3) = ((MR_Box) (Globals_11));
        MR_hl_field(MR_mktag(0), Var_89, 4) = ((MR_Box) (OutputFileName_22));
      }
      parse_tree__module_cmds__create_launcher_shell_script_6_p_0(Globals_11, MainModuleName_15, Var_89, Succeeded_18);
    }
    else
      *Succeeded_18 = Succeeded0_45;
  }
}

static MR_String MR_CALL 
backend_libs__compile_target_code__csharp_file_name_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  {
    MR_String HeadVar__4_4;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        switch (HeadVar__2_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__4_4 = mercury__string__replace_all_3_f_0(HeadVar__3_3, (MR_String) "/", (MR_String) "\\\\");
            break;
          case (MR_Integer) 1:
            HeadVar__4_4 = HeadVar__3_3;
            break;
          case (MR_Integer) 2:
            HeadVar__4_4 = HeadVar__3_3;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (HeadVar__2_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__4_4 = mercury__string__replace_all_3_f_0(HeadVar__3_3, (MR_String) "/", (MR_String) "\\\\");
            break;
          case (MR_Integer) 1:
            HeadVar__4_4 = HeadVar__3_3;
            break;
          case (MR_Integer) 2:
            HeadVar__4_4 = HeadVar__3_3;
            break;
        }
        break;
      case (MR_Integer) 0:
        switch (HeadVar__2_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__4_4 = HeadVar__3_3;
            break;
          case (MR_Integer) 1:
            HeadVar__4_4 = HeadVar__3_3;
            break;
          case (MR_Integer) 2:
            HeadVar__4_4 = HeadVar__3_3;
            break;
        }
        break;
      case (MR_Integer) 4:
        switch (HeadVar__2_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__4_4 = mercury__string__replace_all_3_f_0(HeadVar__3_3, (MR_String) "/", (MR_String) "\\\\");
            break;
          case (MR_Integer) 1:
            HeadVar__4_4 = HeadVar__3_3;
            break;
          case (MR_Integer) 2:
            HeadVar__4_4 = mercury__string__replace_all_3_f_0(HeadVar__3_3, (MR_String) "/", (MR_String) "\\\\");
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (HeadVar__2_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__4_4 = mercury__string__replace_all_3_f_0(HeadVar__3_3, (MR_String) "/", (MR_String) "\\\\");
            break;
          case (MR_Integer) 1:
            HeadVar__4_4 = HeadVar__3_3;
            break;
          case (MR_Integer) 2:
            HeadVar__4_4 = mercury__string__replace_all_3_f_0(HeadVar__3_3, (MR_String) "/", (MR_String) "\\\\");
            break;
        }
        break;
    }
    return HeadVar__4_4;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__link_exe_or_shared_lib_10_p_0(
  MR_Word Globals_11,
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word LinkTargetType_14,
  MR_Word ModuleName_15,
  MR_String OutputFileName_16,
  MR_Word ObjectsList_17,
  MR_Word * Succeeded_18)
{
  {
    MR_bool succeeded;
    MR_Word CommandOpt_20;
    MR_Word RpathFlagOpt_21;
    MR_Word RpathSepOpt_22;
    MR_Word LDFlagsOpt_23;
    MR_Word ThreadFlagsOpt_24;
    MR_Word DebugFlagsOpt_25;
    MR_Word TraceFlagsOpt_26;
    MR_String UndefOpt_28;
    MR_String ReserveStackSizeOpt_29;
    MR_String LTOOpts_30;
    MR_Word Strip_31;
    MR_String LinkerStripOpt_32;
    MR_String StripExeCommand_33;
    MR_String StripExeFlags_36;
    MR_Word TargetDebug_37;
    MR_String DebugOpts_38;
    MR_String SanitizerOpts_39;
    MR_String Linkage_40;
    MR_String StaticOpts_41;
    MR_Word UseThreadLibs_42;
    MR_String ThreadOpts_43;
    MR_String HwlocOpts_45;
    MR_String MercuryStdLibs_46;
    MR_String SystemLibs_47;
    MR_String ResCmdLinkOpts_48;
    MR_Word LDFlagsList_49;
    MR_String LDFlags_50;
    MR_Word LinkLibraryDirectoriesList_51;
    MR_String LinkerPathFlag_52;
    MR_String LinkLibraryDirectories_53;
    MR_String RpathOpts_54;
    MR_String FrameworkDirectories_55;
    MR_Word UseInstallName_56;
    MR_String InstallNameOpt_60;
    MR_Word TraceLevel_61;
    MR_Word TraceEnabled_62;
    MR_String TraceOpts_63;
    MR_String Frameworks_64;
    MR_Word MaybeLinkLibraries_65;
    MR_String LinkOptSep_66;

    switch (LinkTargetType_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          CommandOpt_20 = (MR_Integer) 605;
          RpathFlagOpt_21 = (MR_Integer) 640;
          RpathSepOpt_22 = (MR_Integer) 641;
          LDFlagsOpt_23 = (MR_Integer) 567;
          ThreadFlagsOpt_24 = (MR_Integer) 625;
          DebugFlagsOpt_25 = (MR_Integer) 634;
          TraceFlagsOpt_26 = (MR_Integer) 637;
          UndefOpt_28 = (MR_String) "";
          ReserveStackSizeOpt_29 = backend_libs__compile_target_code__reserve_stack_size_flags_1_f_0(Globals_11);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word AllowUndef_27;

          CommandOpt_20 = (MR_Integer) 606;
          RpathFlagOpt_21 = (MR_Integer) 642;
          RpathSepOpt_22 = (MR_Integer) 643;
          LDFlagsOpt_23 = (MR_Integer) 569;
          ThreadFlagsOpt_24 = (MR_Integer) 626;
          DebugFlagsOpt_25 = (MR_Integer) 635;
          TraceFlagsOpt_26 = (MR_Integer) 638;
          libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 594, &AllowUndef_27);
          switch (AllowUndef_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 645, &UndefOpt_28);
              break;
            case (MR_Integer) 1:
              libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 644, &UndefOpt_28);
              break;
          }
          ReserveStackSizeOpt_29 = (MR_String) "";
        }
        break;
    }
    libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 627, &LTOOpts_30);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 591, &Strip_31);
    succeeded = (LinkTargetType_14 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Strip_31 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_String MercuryLinkage_34;
      MR_Word StripExeFlagsOpt_35;

      libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 629, &LinkerStripOpt_32);
      libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 649, &StripExeCommand_33);
      libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 589, &MercuryLinkage_34);
      succeeded = (strcmp(MercuryLinkage_34, (MR_String) "shared") == 0);
      if (succeeded)
        StripExeFlagsOpt_35 = (MR_Integer) 650;
      else
        StripExeFlagsOpt_35 = (MR_Integer) 651;
      libs__globals__lookup_string_option_3_p_0(Globals_11, StripExeFlagsOpt_35, &StripExeFlags_36);
    }
    else
    {
      LinkerStripOpt_32 = (MR_String) "";
      StripExeCommand_33 = (MR_String) "";
      StripExeFlags_36 = (MR_String) "";
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 529, &TargetDebug_37);
    switch (TargetDebug_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DebugOpts_38 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        libs__globals__lookup_string_option_3_p_0(Globals_11, DebugFlagsOpt_25, &DebugOpts_38);
        break;
    }
    libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 636, &SanitizerOpts_39);
    libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 587, &Linkage_40);
    succeeded = (LinkTargetType_14 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (strcmp(Linkage_40, (MR_String) "static") == 0);
    if (succeeded)
      libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 628, &StaticOpts_41);
    else
      StaticOpts_41 = (MR_String) "";
    backend_libs__compile_target_code__use_thread_libs_2_p_0(Globals_11, &UseThreadLibs_42);
    switch (UseThreadLibs_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ThreadOpts_43 = (MR_String) "";
          HwlocOpts_45 = (MR_String) "";
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HwlocFlagsOpt_44;

          libs__globals__lookup_string_option_3_p_0(Globals_11, ThreadFlagsOpt_24, &ThreadOpts_43);
          succeeded = (strcmp(Linkage_40, (MR_String) "shared") == 0);
          if (succeeded)
            HwlocFlagsOpt_44 = (MR_Integer) 619;
          else
          {
            succeeded = (strcmp(Linkage_40, (MR_String) "static") == 0);
            if (succeeded)
              HwlocFlagsOpt_44 = (MR_Integer) 620;
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.link_exe_or_shared_lib\'/10", (MR_String) "Invalid linkage");
                return;
              }
          }
          libs__globals__lookup_string_option_3_p_0(Globals_11, HwlocFlagsOpt_44, &HwlocOpts_45);
        }
        break;
    }
    backend_libs__compile_target_code__get_mercury_std_libs_3_p_0(Globals_11, LinkTargetType_14, &MercuryStdLibs_46);
    backend_libs__compile_target_code__get_system_libs_3_p_0(Globals_11, LinkTargetType_14, &SystemLibs_47);
    backend_libs__compile_target_code__get_restricted_command_line_link_opts_3_p_0(Globals_11, LinkTargetType_14, &ResCmdLinkOpts_48);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_11, LDFlagsOpt_23, &LDFlagsList_49);
    backend_libs__compile_target_code__join_string_list_5_p_0(LDFlagsList_49, (MR_String) "", (MR_String) "", (MR_String) " ", &LDFlags_50);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 571, &LinkLibraryDirectoriesList_51);
    libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 639, &LinkerPathFlag_52);
    backend_libs__compile_target_code__join_quoted_string_list_5_p_0(LinkLibraryDirectoriesList_51, LinkerPathFlag_52, (MR_String) "", (MR_String) " ", &LinkLibraryDirectories_53);
    backend_libs__compile_target_code__get_runtime_library_path_opts_5_p_0(Globals_11, LinkTargetType_14, RpathFlagOpt_21, RpathSepOpt_22, &RpathOpts_54);
    backend_libs__compile_target_code__get_framework_directories_2_p_0(Globals_11, &FrameworkDirectories_55);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 646, &UseInstallName_56);
    succeeded = (UseInstallName_56 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (LinkTargetType_14 == (MR_Integer) 2);
    if (succeeded)
    {
      MR_String BaseFileName_57;
      MR_String SharedLibExt_58;
      MR_String ShLibFileName_59;
      MR_String Var_117;

      BaseFileName_57 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_15);
      libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 602, &SharedLibExt_58);
      Var_117 = mercury__string__f_43_43_2_f_0(BaseFileName_57, SharedLibExt_58);
      ShLibFileName_59 = mercury__string__f_43_43_2_f_0((MR_String) "lib", Var_117);
      libs__file_util__get_install_name_option_3_p_0(Globals_11, ShLibFileName_59, &InstallNameOpt_60);
    }
    else
      InstallNameOpt_60 = (MR_String) "";
    libs__globals__get_trace_level_2_p_0(Globals_11, &TraceLevel_61);
    TraceEnabled_62 = libs__trace_params__is_exec_trace_enabled_at_given_trace_level_1_f_0(TraceLevel_61);
    switch (TraceEnabled_62) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        libs__globals__lookup_string_option_3_p_0(Globals_11, TraceFlagsOpt_26, &TraceOpts_63);
        break;
      case (MR_Integer) 0:
        TraceOpts_63 = (MR_String) "";
        break;
    }
    backend_libs__compile_target_code__get_frameworks_2_p_0(Globals_11, &Frameworks_64);
    backend_libs__compile_target_code__get_link_libraries_4_p_0(Globals_11, &MaybeLinkLibraries_65);
    libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 624, &LinkOptSep_66);
    if ((MaybeLinkLibraries_65 == (MR_Word) ((MR_Unsigned) 0U)))
      *Succeeded_18 = (MR_Integer) 0;
    else
    {
      MR_Word LinkLibrariesList_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLinkLibraries_65, (MR_Integer) 0))));
      MR_String LinkLibraries_68;
      MR_Word RestrictedCommandLine_69;
      MR_Word ArchiveSucceeded_77;
      MR_Word MaybeDeleteTmpArchive_78;
      MR_String Objects_79;

      backend_libs__compile_target_code__join_quoted_string_list_5_p_0(LinkLibrariesList_67, (MR_String) "", (MR_String) "", (MR_String) " ", &LinkLibraries_68);
      libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 685, &RestrictedCommandLine_69);
      switch (RestrictedCommandLine_69) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            ArchiveSucceeded_77 = (MR_Integer) 1;
            MaybeDeleteTmpArchive_78 = (MR_Word) ((MR_Unsigned) 0U);
            backend_libs__compile_target_code__join_quoted_string_list_5_p_0(ObjectsList_17, (MR_String) "", (MR_String) "", (MR_String) " ", &Objects_79);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String LibExt_70;
            MR_String TempDir_71;
            MR_Word TmpArchiveResult_72;

            libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 603, &LibExt_70);
            mercury__io__get_temp_directory_3_p_0(&TempDir_71);
            mercury__io__make_temp_file_6_p_0(TempDir_71, (MR_String) "mtmp", LibExt_70, &TmpArchiveResult_72);
            if (((MR_tag((MR_Word) TmpArchiveResult_72)) == (MR_Integer) 1))
            {
              MR_Word Error_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TmpArchiveResult_72, (MR_Integer) 0))));
              MR_String Var_135;

              Var_135 = mercury__io__error_message_1_f_0(Error_80);
              mercury__io__write_string_4_p_0(ErrorStream_13, (MR_String) "Could not create temporary file: ");
              mercury__io__write_string_4_p_0(ErrorStream_13, Var_135);
              mercury__io__write_string_4_p_0(ErrorStream_13, (MR_String) "\n");
              ArchiveSucceeded_77 = (MR_Integer) 0;
              MaybeDeleteTmpArchive_78 = (MR_Word) ((MR_Unsigned) 0U);
              backend_libs__compile_target_code__join_quoted_string_list_5_p_0(ObjectsList_17, (MR_String) "", (MR_String) "", (MR_String) " ", &Objects_79);
            }
            else
            {
              MR_String TmpArchive_73 = ((MR_String) ((MR_hl_field(MR_mktag(0), TmpArchiveResult_72, (MR_Integer) 0))));
              MR_Word ProperObjectFiles_74;
              MR_Word NonObjectFiles_75;
              MR_Word Var_143;
              MR_Word Var_76;

              backend_libs__compile_target_code__filter_object_files_4_p_0(Globals_11, ObjectsList_17, &ProperObjectFiles_74, &NonObjectFiles_75);
              mercury__io__remove_file_4_p_0(TmpArchive_73, &Var_76);
              backend_libs__compile_target_code__create_archive_9_p_0(Globals_11, ProgressStream_12, ErrorStream_13, TmpArchive_73, (MR_Integer) 1, ProperObjectFiles_74, &ArchiveSucceeded_77);
              {
                MaybeDeleteTmpArchive_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeDeleteTmpArchive_78, 0) = ((MR_Box) (TmpArchive_73));
              }
              {
                Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (TmpArchive_73));
                MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (NonObjectFiles_75));
              }
              backend_libs__compile_target_code__join_quoted_string_list_5_p_0(Var_143, (MR_String) "", (MR_String) "", (MR_String) " ", &Objects_79);
            }
          }
          break;
      }
      switch (ArchiveSucceeded_77) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Succeeded_18 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          {
            MR_String Command_81;
            MR_String OutputOpt_82;
            MR_String LinkCmd_83;
            MR_Word Demangle_84;
            MR_Word MaybeDemangleCmd_86;
            MR_Word LinkSucceeded_87;
            MR_Word Var_147;
            MR_Word Var_148;
            MR_Word Var_150;
            MR_Word Var_151;
            MR_Word Var_153;
            MR_Word Var_154;
            MR_Word Var_156;
            MR_Word Var_157;
            MR_Word Var_159;
            MR_Word Var_160;
            MR_Word Var_162;
            MR_Word Var_163;
            MR_Word Var_165;
            MR_Word Var_166;
            MR_Word Var_168;
            MR_Word Var_169;
            MR_Word Var_171;
            MR_Word Var_172;
            MR_String Var_173;
            MR_Word Var_174;
            MR_Word Var_176;
            MR_Word Var_177;
            MR_Word Var_179;
            MR_Word Var_180;
            MR_Word Var_182;
            MR_Word Var_183;
            MR_Word Var_185;
            MR_Word Var_186;
            MR_Word Var_188;
            MR_Word Var_189;
            MR_Word Var_191;
            MR_Word Var_192;
            MR_Word Var_194;
            MR_Word Var_195;
            MR_Word Var_197;
            MR_Word Var_198;
            MR_Word Var_200;
            MR_Word Var_201;
            MR_Word Var_203;
            MR_Word Var_204;
            MR_Word Var_206;
            MR_Word Var_207;
            MR_Word Var_209;
            MR_Word Var_210;
            MR_Word Var_212;
            MR_Word Var_213;
            MR_Word Var_215;
            MR_Word Var_216;
            MR_Word Var_218;

            libs__globals__lookup_string_option_3_p_0(Globals_11, CommandOpt_20, &Command_81);
            backend_libs__compile_target_code__get_linker_output_option_3_p_0(Globals_11, LinkTargetType_14, &OutputOpt_82);
            Var_173 = libs__options__quote_arg_1_f_0(OutputFileName_16);
            {
              Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_218, 0) = ((MR_Box) (SystemLibs_47));
              MR_hl_field(MR_mktag(1), Var_218, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_216, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_216, 1) = ((MR_Box) (Var_218));
            }
            {
              Var_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_215, 0) = ((MR_Box) (HwlocOpts_45));
              MR_hl_field(MR_mktag(1), Var_215, 1) = ((MR_Box) (Var_216));
            }
            {
              Var_213 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_213, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_213, 1) = ((MR_Box) (Var_215));
            }
            {
              Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (MercuryStdLibs_46));
              MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) (Var_213));
            }
            {
              Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) (Var_212));
            }
            {
              Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_209, 0) = ((MR_Box) (LinkLibraries_68));
              MR_hl_field(MR_mktag(1), Var_209, 1) = ((MR_Box) (Var_210));
            }
            {
              Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_207, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_207, 1) = ((MR_Box) (Var_209));
            }
            {
              Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) (LDFlags_50));
              MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) (Var_207));
            }
            {
              Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) (Var_206));
            }
            {
              Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_203, 0) = ((MR_Box) (ResCmdLinkOpts_48));
              MR_hl_field(MR_mktag(1), Var_203, 1) = ((MR_Box) (Var_204));
            }
            {
              Var_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_201, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_201, 1) = ((MR_Box) (Var_203));
            }
            {
              Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) (Frameworks_64));
              MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) (Var_201));
            }
            {
              Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) (Var_200));
            }
            {
              Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_197, 0) = ((MR_Box) (SanitizerOpts_39));
              MR_hl_field(MR_mktag(1), Var_197, 1) = ((MR_Box) (Var_198));
            }
            {
              Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_195, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_195, 1) = ((MR_Box) (Var_197));
            }
            {
              Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_194, 0) = ((MR_Box) (DebugOpts_38));
              MR_hl_field(MR_mktag(1), Var_194, 1) = ((MR_Box) (Var_195));
            }
            {
              Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) (Var_194));
            }
            {
              Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (InstallNameOpt_60));
              MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) (Var_192));
            }
            {
              Var_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_189, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_189, 1) = ((MR_Box) (Var_191));
            }
            {
              Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) (FrameworkDirectories_55));
              MR_hl_field(MR_mktag(1), Var_188, 1) = ((MR_Box) (Var_189));
            }
            {
              Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_186, 1) = ((MR_Box) (Var_188));
            }
            {
              Var_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_185, 0) = ((MR_Box) (RpathOpts_54));
              MR_hl_field(MR_mktag(1), Var_185, 1) = ((MR_Box) (Var_186));
            }
            {
              Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) (Var_185));
            }
            {
              Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_182, 0) = ((MR_Box) (LinkLibraryDirectories_53));
              MR_hl_field(MR_mktag(1), Var_182, 1) = ((MR_Box) (Var_183));
            }
            {
              Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_180, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_180, 1) = ((MR_Box) (Var_182));
            }
            {
              Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (LinkOptSep_66));
              MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) (Var_180));
            }
            {
              Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_177, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_177, 1) = ((MR_Box) (Var_179));
            }
            {
              Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_176, 0) = ((MR_Box) (Objects_79));
              MR_hl_field(MR_mktag(1), Var_176, 1) = ((MR_Box) (Var_177));
            }
            {
              Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_174, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_174, 1) = ((MR_Box) (Var_176));
            }
            {
              Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (Var_173));
              MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (Var_174));
            }
            {
              Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (OutputOpt_82));
              MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) (Var_172));
            }
            {
              Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_169, 1) = ((MR_Box) (Var_171));
            }
            {
              Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (ReserveStackSizeOpt_29));
              MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) (Var_169));
            }
            {
              Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) (Var_168));
            }
            {
              Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (TraceOpts_63));
              MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) (Var_166));
            }
            {
              Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) (Var_165));
            }
            {
              Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (LTOOpts_30));
              MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) (Var_163));
            }
            {
              Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_160, 1) = ((MR_Box) (Var_162));
            }
            {
              Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (ThreadOpts_43));
              MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (Var_160));
            }
            {
              Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) (Var_159));
            }
            {
              Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (UndefOpt_28));
              MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) (Var_157));
            }
            {
              Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (Var_156));
            }
            {
              Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (LinkerStripOpt_32));
              MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) (Var_154));
            }
            {
              Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (Var_153));
            }
            {
              Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (StaticOpts_41));
              MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (Var_151));
            }
            {
              Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (Var_150));
            }
            {
              Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Command_81));
              MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_148));
            }
            mercury__string__append_list_2_p_0(Var_147, &LinkCmd_83);
            libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 592, &Demangle_84);
            switch (Demangle_84) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                MaybeDemangleCmd_86 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                {
                  MR_String DemangleCmd_85;

                  libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 614, &DemangleCmd_85);
                  {
                    MaybeDemangleCmd_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeDemangleCmd_86, 0) = ((MR_Box) (DemangleCmd_85));
                  }
                }
                break;
            }
            parse_tree__module_cmds__invoke_system_command_maybe_filter_output_10_p_0(Globals_11, ProgressStream_12, ErrorStream_13, ErrorStream_13, (MR_Integer) 1, LinkCmd_83, MaybeDemangleCmd_86, &LinkSucceeded_87);
            succeeded = (LinkSucceeded_87 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = (strcmp(LinkerStripOpt_32, (MR_String) "") == 0);
              if (succeeded)
              {
                succeeded = (strcmp(StripExeCommand_33, (MR_String) "") == 0);
                succeeded = !(succeeded);
              }
            }
            if (succeeded)
            {
              MR_String StripCmd_88;
              MR_String Var_232;
              MR_String Var_244;
              MR_String Var_245;
              MR_String Var_247;

              Var_232 = libs__options__quote_arg_1_f_0(OutputFileName_16);
              Var_244 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_232);
              Var_245 = mercury__string__f_43_43_2_f_0(StripExeFlags_36, Var_244);
              Var_247 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_245);
              StripCmd_88 = mercury__string__f_43_43_2_f_0(StripExeCommand_33, Var_247);
              parse_tree__module_cmds__invoke_system_command_maybe_filter_output_10_p_0(Globals_11, ProgressStream_12, ErrorStream_13, ErrorStream_13, (MR_Integer) 1, StripCmd_88, (MR_Word) ((MR_Unsigned) 0U), Succeeded_18);
            }
            else
              *Succeeded_18 = LinkSucceeded_87;
          }
          break;
      }
      if (!((MaybeDeleteTmpArchive_78 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_String FileToDelete_89 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeDeleteTmpArchive_78, (MR_Integer) 0))));
        MR_Word Var_90;

        mercury__io__remove_file_4_p_0(FileToDelete_89, &Var_90);
      }
    }
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__create_archive_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__create_archive_9_p_0(
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_String LibFileName_13,
  MR_Word Quote_14,
  MR_Word ObjectList_15,
  MR_Word * Succeeded_16)
{
  {
    MR_bool succeeded;
    MR_String ArCmd_18;
    MR_Word ArFlagsList_19;
    MR_String ArFlags_20;
    MR_String ArOutputFlag_21;
    MR_String RanLib_22;
    MR_String Objects_23;
    MR_Word C_CompilerType_24;
    MR_String ArOutputSpace_26;
    MR_String MakeLibCmdArgs_31;
    MR_Word MakeLibCmdSucceeded_32;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_57;

    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 607, &ArCmd_18);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 609, &ArFlagsList_19);
    backend_libs__compile_target_code__join_string_list_5_p_0(ArFlagsList_19, (MR_String) "", (MR_String) "", (MR_String) " ", &ArFlags_20);
    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 608, &ArOutputFlag_21);
    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 610, &RanLib_22);
    switch (Quote_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__join_string_list_5_p_0(ObjectList_15, (MR_String) "", (MR_String) "", (MR_String) " ", &Objects_23);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_75;

          Var_75 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[10]), ObjectList_15);
          backend_libs__compile_target_code__join_string_list_5_p_0(Var_75, (MR_String) "", (MR_String) "", (MR_String) " ", &Objects_23);
        }
        break;
    }
    libs__globals__get_c_compiler_type_2_p_0(Globals_10, &C_CompilerType_24);
    switch (MR_tag((MR_Word) C_CompilerType_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ArOutputSpace_26 = (MR_String) " ";
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        ArOutputSpace_26 = (MR_String) " ";
        break;
      case (MR_Integer) 3:
        ArOutputSpace_26 = (MR_String) "";
        break;
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Objects_23));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (LibFileName_13));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (ArOutputSpace_26));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (ArOutputFlag_21));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (ArFlags_20));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_50));
    }
    MakeLibCmdArgs_31 = mercury__string__append_list_1_f_0(Var_49);
    backend_libs__compile_target_code__invoke_long_system_command_10_p_0(Globals_10, ProgressStream_11, ErrorStream_12, ErrorStream_12, (MR_Integer) 1, ArCmd_18, MakeLibCmdArgs_31, &MakeLibCmdSucceeded_32);
    succeeded = (strcmp(RanLib_22, (MR_String) "") == 0);
    if (!(succeeded))
      succeeded = (MakeLibCmdSucceeded_32 == (MR_Integer) 0);
    if (succeeded)
      *Succeeded_16 = MakeLibCmdSucceeded_32;
    else
    {
      MR_String RanLibCmd_33;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_65;

      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (LibFileName_13));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_65));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (RanLib_22));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
      }
      RanLibCmd_33 = mercury__string__append_list_1_f_0(Var_62);
      parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_10, ProgressStream_11, ErrorStream_12, ErrorStream_12, (MR_Integer) 1, RanLibCmd_33, Succeeded_16);
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__invoke_long_system_command_10_p_0(
  MR_Word Globals_11,
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word CmdOutputStream_14,
  MR_Word Verbosity_15,
  MR_String Cmd_16,
  MR_String Args_17,
  MR_Word * Succeeded_18)
{
  backend_libs__compile_target_code__invoke_long_system_command_maybe_filter_output_12_p_0(Globals_11, ProgressStream_12, ErrorStream_13, CmdOutputStream_14, Verbosity_15, Cmd_16, (MR_String) "", Args_17, (MR_Word) ((MR_Unsigned) 0U), Succeeded_18);
}

static MR_String MR_CALL 
backend_libs__compile_target_code__reserve_stack_size_flags_1_f_0(
  MR_Word Globals_3)
{
  {
    MR_bool succeeded;
    MR_String Flags_4;
    MR_Integer ReserveStackSize_5;

    libs__globals__lookup_int_option_3_p_0(Globals_3, (MR_Integer) 601, &ReserveStackSize_5);
    succeeded = (ReserveStackSize_5 == (MR_Integer) -1);
    if (succeeded)
      Flags_4 = (MR_String) "";
    else
    {
      MR_Word C_CompilerType_6;

      libs__globals__get_c_compiler_type_2_p_0(Globals_3, &C_CompilerType_6);
      switch (MR_tag((MR_Word) C_CompilerType_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_21;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__compile_target_code_scalar_common_3[4]), ReserveStackSize_5, &Var_21);
            Flags_4 = mercury__string__f_43_43_2_f_0((MR_String) "-Wl,--stack=", Var_21);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_String Var_21;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__compile_target_code_scalar_common_3[4]), ReserveStackSize_5, &Var_21);
            Flags_4 = mercury__string__f_43_43_2_f_0((MR_String) "-Wl,--stack=", Var_21);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_29;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__compile_target_code_scalar_common_3[4]), ReserveStackSize_5, &Var_29);
            Flags_4 = mercury__string__f_43_43_2_f_0((MR_String) "-stack:", Var_29);
          }
          break;
      }
    }
    return Flags_4;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__get_linker_output_option_3_p_0(
  MR_Word Globals_4,
  MR_Word LinkTargetType_5,
  MR_String * OutputOpt_6)
{
  {
    MR_bool succeeded;
    MR_Word C_CompilerType_7;

    libs__globals__get_c_compiler_type_2_p_0(Globals_4, &C_CompilerType_7);
    switch (MR_tag((MR_Word) C_CompilerType_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *OutputOpt_6 = (MR_String) " -o ";
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *OutputOpt_6 = (MR_String) " -o ";
        break;
      case (MR_Integer) 3:
        {
          succeeded = (LinkTargetType_5 == (MR_Integer) 0);
          if (succeeded)
            *OutputOpt_6 = (MR_String) " -Fe";
          else
            *OutputOpt_6 = (MR_String) " -o ";
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__get_frameworks_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__get_frameworks_2_p_0(
  MR_Word Globals_3,
  MR_String * FrameworkOpts_4)
{
  {
    MR_Word Frameworks_5;
    MR_Word Var_15;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_3, (MR_Integer) 598, &Frameworks_5);
    Var_15 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[9]), Frameworks_5);
    backend_libs__compile_target_code__join_string_list_5_p_0(Var_15, (MR_String) "-framework ", (MR_String) "", (MR_String) " ", FrameworkOpts_4);
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code__filter_object_files_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__compile_target_code__has_object_file_extension_3_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__filter_object_files_4_p_0(
  MR_Word Globals_5,
  MR_Word Files_6,
  MR_Word * ObjectFiles_7,
  MR_Word * NonObjectFiles_8)
{
  {
    MR_bool succeeded;
    MR_String ObjExt_9;
    MR_String PicObjExt_10;
    MR_Word Var_13;

    libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 552, &ObjExt_9);
    libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 553, &PicObjExt_10);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_2[2]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (backend_libs__compile_target_code__filter_object_files_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (ObjExt_9));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (PicObjExt_10));
    }
    mercury__list__filter_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_13, Files_6, ObjectFiles_7, NonObjectFiles_8);
  }
}

static void MR_CALL 
backend_libs__compile_target_code__get_restricted_command_line_link_opts_3_p_0(
  MR_Word Globals_4,
  MR_Word LinkTargetType_5,
  MR_String * ResCmdLinkOpts_6)
{
  {
    MR_Word RestrictedCommandLine_7;

    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 685, &RestrictedCommandLine_7);
    switch (RestrictedCommandLine_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ResCmdLinkOpts_6 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        switch (LinkTargetType_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 6:
          case (MR_Integer) 5:
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            *ResCmdLinkOpts_6 = (MR_String) "";
            break;
          case (MR_Integer) 0:
            {
              MR_Word C_CompilerType_8;

              libs__globals__get_c_compiler_type_2_p_0(Globals_4, &C_CompilerType_8);
              switch (MR_tag((MR_Word) C_CompilerType_8)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ResCmdLinkOpts_6 = (MR_String) "";
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *ResCmdLinkOpts_6 = (MR_String) "";
                  break;
                case (MR_Integer) 3:
                  backend_libs__compile_target_code__join_string_list_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[8])), (MR_String) "", (MR_String) "", (MR_String) " ", ResCmdLinkOpts_6);
                  break;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__use_thread_libs_2_p_0(
  MR_Word Globals_3,
  MR_Word * UseThreadLibs_4)
{
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 258, UseThreadLibs_4);
}

static void MR_CALL 
backend_libs__compile_target_code__get_system_libs_3_p_0(
  MR_Word Globals_4,
  MR_Word TargetType_5,
  MR_String * SystemLibs_6)
{
  {
    MR_Word TraceLevel_7;
    MR_Word TraceEnabled_8;
    MR_String SystemTraceLibs_9;
    MR_Word UseThreadLibs_13;
    MR_String ThreadLibs_14;
    MR_String OtherSystemLibs_15;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;

    libs__globals__get_trace_level_2_p_0(Globals_4, &TraceLevel_7);
    TraceEnabled_8 = libs__trace_params__is_exec_trace_enabled_at_given_trace_level_1_f_0(TraceLevel_7);
    switch (TraceEnabled_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String SystemTraceLibs0_10;
          MR_Word UseReadline_11;

          libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 617, &SystemTraceLibs0_10);
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 595, &UseReadline_11);
          switch (UseReadline_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              SystemTraceLibs_9 = SystemTraceLibs0_10;
              break;
            case (MR_Integer) 1:
              {
                MR_String ReadlineLibs_12;
                MR_String Var_19;

                libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 623, &ReadlineLibs_12);
                Var_19 = mercury__string__f_43_43_2_f_0((MR_String) " ", ReadlineLibs_12);
                SystemTraceLibs_9 = mercury__string__f_43_43_2_f_0(SystemTraceLibs0_10, Var_19);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        SystemTraceLibs_9 = (MR_String) "";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 258, &UseThreadLibs_13);
    switch (UseThreadLibs_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ThreadLibs_14 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 618, &ThreadLibs_14);
        break;
    }
    switch (TargetType_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 6:
      case (MR_Integer) 5:
      case (MR_Integer) 1:
        {
          MR_String Var_23;

          Var_23 = mercury__string__string_1_f_0((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), ((MR_Box) (TargetType_5)));
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.get_system_libs\'/3", Var_23);
            return;
          }
        }
        break;
      case (MR_Integer) 0:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 622, &OtherSystemLibs_15);
        break;
      case (MR_Integer) 2:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 621, &OtherSystemLibs_15);
        break;
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (ThreadLibs_14));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (OtherSystemLibs_15));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (SystemTraceLibs_9));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_28));
    }
    *SystemLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", Var_27);
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__get_runtime_library_path_opts_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__get_runtime_library_path_opts_5_p_0(
  MR_Word Globals_6,
  MR_Word LinkTargetType_7,
  MR_Word RpathFlagOpt_8,
  MR_Word RpathSepOpt_9,
  MR_String * RpathOpts_10)
{
  {
    MR_bool succeeded;
    MR_Word UseInstallName_11;
    MR_Word SharedLibsSupported_12;
    MR_String Linkage_13;

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 646, &UseInstallName_11);
    backend_libs__compile_target_code__shared_libraries_supported_2_p_0(Globals_6, &SharedLibsSupported_12);
    libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 587, &Linkage_13);
    succeeded = (UseInstallName_11 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (SharedLibsSupported_12 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (strcmp(Linkage_13, (MR_String) "shared") == 0);
        if (!(succeeded))
          succeeded = (LinkTargetType_7 == (MR_Integer) 2);
      }
    }
    if (succeeded)
    {
      MR_Word RpathDirs0_14;
      MR_Word RpathDirs_15;

      libs__globals__lookup_accumulating_option_3_p_0(Globals_6, (MR_Integer) 572, &RpathDirs0_14);
      RpathDirs_15 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[8]), RpathDirs0_14);
      if ((RpathDirs_15 == (MR_Word) ((MR_Unsigned) 0U)))
        *RpathOpts_10 = (MR_String) "";
      else
      {
        MR_String RpathSep_18;
        MR_String RpathFlag_19;
        MR_String RpathOpts0_20;

        libs__globals__lookup_string_option_3_p_0(Globals_6, RpathSepOpt_9, &RpathSep_18);
        libs__globals__lookup_string_option_3_p_0(Globals_6, RpathFlagOpt_8, &RpathFlag_19);
        RpathOpts0_20 = mercury__string__join_list_2_f_0(RpathSep_18, RpathDirs_15);
        *RpathOpts_10 = mercury__string__f_43_43_2_f_0(RpathFlag_19, RpathOpts0_20);
      }
    }
    else
      *RpathOpts_10 = (MR_String) "";
  }
}

void MR_CALL 
backend_libs__compile_target_code__shared_libraries_supported_2_p_0(
  MR_Word Globals_3,
  MR_Word * Supported_4)
{
  {
    MR_bool succeeded;
    MR_String LibExt_5;
    MR_String SharedLibExt_6;

    libs__globals__lookup_string_option_3_p_0(Globals_3, (MR_Integer) 603, &LibExt_5);
    libs__globals__lookup_string_option_3_p_0(Globals_3, (MR_Integer) 602, &SharedLibExt_6);
    succeeded = (strcmp(LibExt_5, SharedLibExt_6) == 0);
    succeeded = !(succeeded);
    if (succeeded)
      *Supported_4 = (MR_Integer) 1;
    else
      *Supported_4 = (MR_Integer) 0;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__get_link_libraries_4_p_0_2(
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
    MR_String conv2_LinkerOpt_12;
    MR_Word conv1_STATE_VARIABLE_Succeeded_37;

    backend_libs__compile_target_code__process_link_library_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), &conv2_LinkerOpt_12, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Succeeded_37);
    *wrapper_arg_2 = ((MR_Box) (conv2_LinkerOpt_12));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Succeeded_37));
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__get_link_libraries_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_LambdaHeadVar__2_20;

    conv0_LambdaHeadVar__2_20 = backend_libs__compile_target_code__IntroducedFrom__func__get_link_libraries__2186__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_20));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__get_link_libraries_4_p_0(
  MR_Word Globals_5,
  MR_Word * MaybeLinkLibraries_6)
{
  {
    MR_Word MercuryLibDirs0_8;
    MR_String GradeDir_9;
    MR_Word MercuryLibDirs_10;
    MR_Word LinkLibrariesList0_12;
    MR_Word LinkLibrariesList_13;
    MR_Word LibrariesSucceeded_14;
    MR_Word Var_18;
    MR_Word Var_24;
    MR_Box conv4_LibrariesSucceeded_14;
    MR_Box conv3_STATE_VARIABLE_IO_16;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 576, &MercuryLibDirs0_8);
    libs__compute_grade__grade_directory_component_2_p_0(Globals_5, &GradeDir_9);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_2[2]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (backend_libs__compile_target_code__get_link_libraries_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (GradeDir_9));
    }
    MercuryLibDirs_10 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_18, MercuryLibDirs0_8);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 574, &LinkLibrariesList0_12);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (backend_libs__compile_target_code__get_link_libraries_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Globals_5));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (MercuryLibDirs_10));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, LinkLibrariesList0_12, &LinkLibrariesList_13, ((MR_Box) ((MR_Integer) 1)), &conv4_LibrariesSucceeded_14, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_16);
    LibrariesSucceeded_14 = ((MR_Word) (conv4_LibrariesSucceeded_14));
    switch (LibrariesSucceeded_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *MaybeLinkLibraries_6 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeLinkLibraries_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LinkLibrariesList_13));
        }
        break;
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__get_mercury_std_libs_3_p_0(
  MR_Word Globals_4,
  MR_Word TargetType_5,
  MR_String * StdLibs_6)
{
  {
    MR_bool succeeded;
    MR_Word MaybeStdlibDir_7;

    libs__globals__lookup_maybe_string_option_3_p_0(Globals_4, (MR_Integer) 582, &MaybeStdlibDir_7);
    if ((MaybeStdlibDir_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *StdLibs_6 = (MR_String) "";
    else
    {
      MR_String StdLibDir_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStdlibDir_7, (MR_Integer) 0))));
      MR_Word GCMethod_9;
      MR_Word LibOtherExt_11;
      MR_String MercuryOrCsharpLinkage_12;
      MR_String GradeDir_13;
      MR_String StaticGCLibs_14;
      MR_String SharedGCLibs_15;
      MR_Word TraceLevel_24;
      MR_Word TraceEnabled_25;
      MR_String StaticTraceLibs_26;
      MR_String SharedTraceLibs_27;
      MR_Word SourceDebug_36;
      MR_String StaticSourceDebugLibs_43;
      MR_String SharedSourceDebugLibs_44;
      MR_String StaticStdLib_45;
      MR_String StdLib_46;
      MR_String StaticRuntimeLib_47;
      MR_String RuntimeLib_48;

      libs__globals__get_gc_method_2_p_0(Globals_4, &GCMethod_9);
      switch (TargetType_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
        case (MR_Integer) 4:
          {
            LibOtherExt_11 = (MR_Word) (((MR_Box) ((MR_String) ".dll")));
            MercuryOrCsharpLinkage_12 = (MR_String) "csharp";
          }
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_String LibExtStr_10;

            libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 603, &LibExtStr_10);
            LibOtherExt_11 = (MR_Word) (LibExtStr_10);
            libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 589, &MercuryOrCsharpLinkage_12);
          }
          break;
        case (MR_Integer) 6:
        case (MR_Integer) 5:
          {
            MR_String Var_51;

            Var_51 = mercury__string__string_1_f_0((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), ((MR_Box) (TargetType_5)));
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.get_mercury_std_libs\'/3", Var_51);
              return;
            }
          }
          break;
      }
      libs__compute_grade__grade_directory_component_2_p_0(Globals_4, &GradeDir_13);
      switch (GCMethod_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 5:
          {
            StaticGCLibs_14 = (MR_String) "";
            SharedGCLibs_15 = (MR_String) "";
          }
          break;
        case (MR_Integer) 0:
          {
            StaticGCLibs_14 = (MR_String) "";
            SharedGCLibs_15 = (MR_String) "";
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word LLDebug_17;
            MR_String GCGrade1_18;
            MR_Word ProfTime_19;
            MR_Word ProfDeep_20;
            MR_String GCGrade2_21;
            MR_Word Parallel_22;
            MR_String GCGrade_23;

            libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 338, &LLDebug_17);
            switch (LLDebug_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                GCGrade1_18 = (MR_String) "gc";
                break;
              case (MR_Integer) 1:
                GCGrade1_18 = mercury__string__f_43_43_2_f_0((MR_String) "gc", (MR_String) "_ll_debug");
                break;
            }
            libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 235, &ProfTime_19);
            libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 237, &ProfDeep_20);
            succeeded = (ProfTime_19 == (MR_Integer) 1);
            if (!(succeeded))
              succeeded = (ProfDeep_20 == (MR_Integer) 1);
            if (succeeded)
              GCGrade2_21 = mercury__string__f_43_43_2_f_0(GCGrade1_18, (MR_String) "_prof");
            else
              GCGrade2_21 = GCGrade1_18;
            libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 258, &Parallel_22);
            switch (Parallel_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                GCGrade_23 = GCGrade2_21;
                break;
              case (MR_Integer) 1:
                GCGrade_23 = mercury__string__f_43_43_2_f_0((MR_String) "par_", GCGrade2_21);
                break;
            }
            backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, (MR_String) "", LibOtherExt_11, GCGrade_23, &StaticGCLibs_14, &SharedGCLibs_15);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word LLDebug_125;
            MR_String GCGrade1_126;
            MR_Word ProfTime_127;
            MR_Word ProfDeep_128;
            MR_String GCGrade2_129;
            MR_Word Parallel_130;
            MR_String GCGrade_131;

            libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 338, &LLDebug_125);
            switch (LLDebug_125) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                GCGrade1_126 = (MR_String) "gc_debug";
                break;
              case (MR_Integer) 1:
                GCGrade1_126 = mercury__string__f_43_43_2_f_0((MR_String) "gc_debug", (MR_String) "_ll_debug");
                break;
            }
            libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 235, &ProfTime_127);
            libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 237, &ProfDeep_128);
            succeeded = (ProfTime_127 == (MR_Integer) 1);
            if (!(succeeded))
              succeeded = (ProfDeep_128 == (MR_Integer) 1);
            if (succeeded)
              GCGrade2_129 = mercury__string__f_43_43_2_f_0(GCGrade1_126, (MR_String) "_prof");
            else
              GCGrade2_129 = GCGrade1_126;
            libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 258, &Parallel_130);
            switch (Parallel_130) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                GCGrade_131 = GCGrade2_129;
                break;
              case (MR_Integer) 1:
                GCGrade_131 = mercury__string__f_43_43_2_f_0((MR_String) "par_", GCGrade2_129);
                break;
            }
            backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, (MR_String) "", LibOtherExt_11, GCGrade_131, &StaticGCLibs_14, &SharedGCLibs_15);
          }
          break;
        case (MR_Integer) 4:
          {
            StaticGCLibs_14 = (MR_String) "";
            SharedGCLibs_15 = (MR_String) "";
          }
          break;
        case (MR_Integer) 1:
          {
            StaticGCLibs_14 = (MR_String) "";
            SharedGCLibs_15 = (MR_String) "";
          }
          break;
      }
      libs__globals__get_trace_level_2_p_0(Globals_4, &TraceLevel_24);
      TraceEnabled_25 = libs__trace_params__is_exec_trace_enabled_at_given_trace_level_1_f_0(TraceLevel_24);
      switch (TraceEnabled_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_String StaticTraceLib_28;
            MR_String TraceLib_29;
            MR_String StaticEventSpecLib_30;
            MR_String EventSpecLib_31;
            MR_String StaticBrowserLib_32;
            MR_String BrowserLib_33;
            MR_String StaticMdbCompLib_34;
            MR_String MdbCompLib_35;
            MR_Word Var_68;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Var_74;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_77;

            backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, GradeDir_13, LibOtherExt_11, (MR_String) "mer_trace", &StaticTraceLib_28, &TraceLib_29);
            backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, GradeDir_13, LibOtherExt_11, (MR_String) "mer_eventspec", &StaticEventSpecLib_30, &EventSpecLib_31);
            backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, GradeDir_13, LibOtherExt_11, (MR_String) "mer_browser", &StaticBrowserLib_32, &BrowserLib_33);
            backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, GradeDir_13, LibOtherExt_11, (MR_String) "mer_mdbcomp", &StaticMdbCompLib_34, &MdbCompLib_35);
            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (StaticMdbCompLib_34));
              MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (StaticBrowserLib_32));
              MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_71));
            }
            {
              Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (StaticEventSpecLib_30));
              MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_70));
            }
            {
              Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (StaticTraceLib_28));
              MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_69));
            }
            StaticTraceLibs_26 = mercury__string__join_list_2_f_0((MR_String) " ", Var_68);
            {
              Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MdbCompLib_35));
              MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (BrowserLib_33));
              MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_77));
            }
            {
              Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (EventSpecLib_31));
              MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_76));
            }
            {
              Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (TraceLib_29));
              MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_75));
            }
            SharedTraceLibs_27 = mercury__string__join_list_2_f_0((MR_String) " ", Var_74);
          }
          break;
        case (MR_Integer) 0:
          {
            StaticTraceLibs_26 = (MR_String) "";
            SharedTraceLibs_27 = (MR_String) "";
          }
          break;
      }
      libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 277, &SourceDebug_36);
      switch (SourceDebug_36) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            StaticSourceDebugLibs_43 = (MR_String) "";
            SharedSourceDebugLibs_44 = (MR_String) "";
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String StaticSsdbLib_37;
            MR_String SsdbLib_38;
            MR_String StaticBrowserLib2_39;
            MR_String BrowserLib2_40;
            MR_String StaticMdbCompLib2_41;
            MR_String MdbCompLib2_42;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_86;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_91;

            backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, GradeDir_13, LibOtherExt_11, (MR_String) "mer_ssdb", &StaticSsdbLib_37, &SsdbLib_38);
            backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, GradeDir_13, LibOtherExt_11, (MR_String) "mer_browser", &StaticBrowserLib2_39, &BrowserLib2_40);
            backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, GradeDir_13, LibOtherExt_11, (MR_String) "mer_mdbcomp", &StaticMdbCompLib2_41, &MdbCompLib2_42);
            {
              Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (StaticMdbCompLib2_41));
              MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (StaticBrowserLib2_39));
              MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_86));
            }
            {
              Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (StaticSsdbLib_37));
              MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_85));
            }
            StaticSourceDebugLibs_43 = mercury__string__join_list_2_f_0((MR_String) " ", Var_84);
            {
              Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (MdbCompLib2_42));
              MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (BrowserLib2_40));
              MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_91));
            }
            {
              Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (SsdbLib_38));
              MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_90));
            }
            SharedSourceDebugLibs_44 = mercury__string__join_list_2_f_0((MR_String) " ", Var_89);
          }
          break;
      }
      backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, GradeDir_13, LibOtherExt_11, (MR_String) "mer_std", &StaticStdLib_45, &StdLib_46);
      backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, GradeDir_13, LibOtherExt_11, (MR_String) "mer_rt", &StaticRuntimeLib_47, &RuntimeLib_48);
      succeeded = (strcmp(MercuryOrCsharpLinkage_12, (MR_String) "static") == 0);
      if (succeeded)
      {
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_100;

        {
          Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (StaticGCLibs_14));
          MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (StaticRuntimeLib_47));
          MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_100));
        }
        {
          Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (StaticStdLib_45));
          MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_99));
        }
        {
          Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (StaticSourceDebugLibs_43));
          MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_98));
        }
        {
          Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (StaticTraceLibs_26));
          MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_97));
        }
        *StdLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", Var_96);
      }
      else
      {
        succeeded = (strcmp(MercuryOrCsharpLinkage_12, (MR_String) "shared") == 0);
        if (succeeded)
        {
          MR_Word Var_103;
          MR_Word Var_104;
          MR_Word Var_105;
          MR_Word Var_106;
          MR_Word Var_107;

          {
            Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (SharedGCLibs_15));
            MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (RuntimeLib_48));
            MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_107));
          }
          {
            Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (StdLib_46));
            MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_106));
          }
          {
            Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (SharedSourceDebugLibs_44));
            MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_105));
          }
          {
            Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (SharedTraceLibs_27));
            MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_104));
          }
          *StdLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", Var_103);
        }
        else
        {
          succeeded = (strcmp(MercuryOrCsharpLinkage_12, (MR_String) "csharp") == 0);
          if (succeeded)
          {
            MR_Word Var_110;
            MR_Word Var_111;
            MR_Word Var_112;

            {
              Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (StdLib_46));
              MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (SharedSourceDebugLibs_44));
              MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_112));
            }
            {
              Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (SharedTraceLibs_27));
              MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_111));
            }
            *StdLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", Var_110);
          }
          else
          {
            MR_String Var_115;

            Var_115 = mercury__string__f_43_43_2_f_0((MR_String) "unknown linkage ", MercuryOrCsharpLinkage_12);
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.get_mercury_std_libs\'/3", Var_115);
              return;
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__link_lib_args_8_p_0(
  MR_Word Globals_9,
  MR_Word TargetType_10,
  MR_String StdLibDir_11,
  MR_String GradeDir_12,
  MR_Word LibOtherExt_13,
  MR_String Name_14,
  MR_String * StaticArg_15,
  MR_String * SharedArg_16)
{
  {
    MR_String LibPrefix_17;
    MR_String StaticLibName_18;
    MR_String Var_21;
    MR_String Var_22;
    MR_String Var_23;
    MR_String Var_24;
    MR_String Var_25;

    switch (TargetType_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
        LibPrefix_17 = (MR_String) "";
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        LibPrefix_17 = (MR_String) "lib";
        break;
      case (MR_Integer) 6:
      case (MR_Integer) 5:
        {
          MR_String Var_20;

          Var_20 = mercury__string__string_1_f_0((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), ((MR_Box) (TargetType_10)));
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.link_lib_args\'/8", Var_20);
            return;
          }
        }
        break;
    }
    Var_22 = parse_tree__file_names__other_extension_to_string_1_f_0(LibOtherExt_13);
    Var_21 = mercury__string__f_43_43_2_f_0(Name_14, Var_22);
    StaticLibName_18 = mercury__string__f_43_43_2_f_0(LibPrefix_17, Var_21);
    Var_25 = mercury__dir__f_slash_2_f_0(StdLibDir_11, (MR_String) "lib");
    Var_24 = mercury__dir__f_slash_2_f_0(Var_25, GradeDir_12);
    Var_23 = mercury__dir__f_slash_2_f_0(Var_24, StaticLibName_18);
    *StaticArg_15 = libs__options__quote_arg_1_f_0(Var_23);
    switch (TargetType_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
        {
          MR_String Var_38;
          MR_String Var_39;

          Var_39 = mercury__string__f_43_43_2_f_0(Name_14, (MR_String) ".dll");
          Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "-r:", Var_39);
          *SharedArg_16 = libs__options__quote_arg_1_f_0(Var_38);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String LinkLibOpt_34;
          MR_String Suffix_35;
          MR_String Var_40;
          MR_String Var_41;

          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 630, &LinkLibOpt_34);
          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 631, &Suffix_35);
          Var_41 = mercury__string__f_43_43_2_f_0(Name_14, Suffix_35);
          Var_40 = mercury__string__f_43_43_2_f_0(LinkLibOpt_34, Var_41);
          *SharedArg_16 = libs__options__quote_arg_1_f_0(Var_40);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_37;

          Var_37 = mercury__string__string_1_f_0((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), ((MR_Box) (TargetType_10)));
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.make_link_lib\'/4", Var_37);
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String LinkLibOpt_47;
          MR_String Suffix_48;
          MR_String Var_49;
          MR_String Var_50;

          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 632, &LinkLibOpt_47);
          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 633, &Suffix_48);
          Var_50 = mercury__string__f_43_43_2_f_0(Name_14, Suffix_48);
          Var_49 = mercury__string__f_43_43_2_f_0(LinkLibOpt_47, Var_50);
          *SharedArg_16 = libs__options__quote_arg_1_f_0(Var_49);
        }
        break;
    }
  }
}

void MR_CALL 
backend_libs__compile_target_code__post_link_make_symlink_or_copy_9_p_0(
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word LinkTargetType_13,
  MR_Word ModuleName_14,
  MR_Word * Succeeded_15,
  MR_Word * MadeSymlinkOrCopy_16)
{
  {
    MR_bool succeeded;
    MR_Word UseGradeSubdirs_18;

    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 677, &UseGradeSubdirs_18);
    switch (UseGradeSubdirs_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_15 = (MR_Integer) 1;
          *MadeSymlinkOrCopy_16 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word OtherExt_19;
          MR_String OutputFileName_20;
          MR_Word NoSubdirGlobals0_21;
          MR_Word NoSubdirGlobals_22;
          MR_String UserDirFileName_23;
          MR_Word Succeeded0_25;
          MR_Word MaybeCompare_71;
          MR_Word TimeResultA_80;
          MR_Word TimeResultB_81;
          MR_Word TimeA_82;
          MR_Word TimeB_83;
          MR_Word Var_73;

          backend_libs__compile_target_code__link_output_filename_7_p_0(Globals_10, LinkTargetType_13, ModuleName_14, &OtherExt_19, &OutputFileName_20);
          libs__globals__set_option_4_p_0((MR_Integer) 676, (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[3])), Globals_10, &NoSubdirGlobals0_21);
          libs__globals__set_option_4_p_0((MR_Integer) 677, (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[3])), NoSubdirGlobals0_21, &NoSubdirGlobals_22);
          switch (LinkTargetType_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 0:
            case (MR_Integer) 6:
            case (MR_Integer) 5:
              {
                MR_Word Var_49;

                {
                  Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (OtherExt_19));
                }
                parse_tree__file_names__module_name_to_file_name_8_p_0(NoSubdirGlobals_22, (MR_String) "predicate \140backend_libs.compile_target_code.post_link_make_symlink_or_copy\'/9", (MR_Integer) 1, Var_49, ModuleName_14, &UserDirFileName_23);
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              parse_tree__file_names__module_name_to_lib_file_name_9_p_0(NoSubdirGlobals_22, (MR_String) "predicate \140backend_libs.compile_target_code.post_link_make_symlink_or_copy\'/9", (MR_Integer) 1, (MR_String) "lib", OtherExt_19, ModuleName_14, &UserDirFileName_23);
              break;
          }
          mercury__io__file_modification_time_4_p_0(OutputFileName_20, &TimeResultA_80);
          mercury__io__file_modification_time_4_p_0(UserDirFileName_23, &TimeResultB_81);
          succeeded = ((MR_tag((MR_Word) TimeResultA_80)) == (MR_Integer) 0);
          if (succeeded)
          {
            TimeA_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TimeResultA_80, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) TimeResultB_81)) == (MR_Integer) 0);
            if (succeeded)
              TimeB_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TimeResultB_81, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word Compare_84;

            mercury__time____Compare____time_t_0_0(&Compare_84, TimeA_82, TimeB_83);
            {
              MaybeCompare_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeCompare_71, 0) = ((MR_Box) (Compare_84));
            }
          }
          else
            MaybeCompare_71 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = (MaybeCompare_71 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCompare_71, (MR_Integer) 0))));
            succeeded = (Var_73 == (MR_Integer) 0);
          }
          if (succeeded)
          {
            Succeeded0_25 = (MR_Integer) 1;
            *MadeSymlinkOrCopy_16 = (MR_Integer) 0;
          }
          else
          {
            MR_Word Var_26;

            mercury__io__remove_file_recursively_4_p_0(UserDirFileName_23, &Var_26);
            parse_tree__module_cmds__make_symlink_or_copy_file_8_p_0(Globals_10, ProgressStream_11, ErrorStream_12, OutputFileName_20, UserDirFileName_23, &Succeeded0_25);
            *MadeSymlinkOrCopy_16 = (MR_Integer) 1;
          }
          succeeded = (Succeeded0_25 == (MR_Integer) 1);
          if (succeeded)
            switch (LinkTargetType_13) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word TargetEnvType_27;

                  libs__globals__get_target_env_type_2_p_0(Globals_10, &TargetEnvType_27);
                  succeeded = (TargetEnvType_27 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 5:
                succeeded = MR_TRUE;
                break;
            }
          if (succeeded)
          {
            MR_Word ScriptOtherExt_28;
            MR_String OutputScriptName_29;
            MR_String UserDirScriptName_30;
            MR_Word ScriptSameTimestamp_31;
            MR_Word Var_56;
            MR_Word TargetEnvType_90;

            libs__globals__get_target_env_type_2_p_0(Globals_10, &TargetEnvType_90);
            ScriptOtherExt_28 = ((&backend_libs__compile_target_code_vector_common_10[0 + TargetEnvType_90]))->backend_libs__compile_target_code__vector_common_type_10_0__vct_10_f_0;
            {
              Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (ScriptOtherExt_28));
            }
            parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140backend_libs.compile_target_code.post_link_make_symlink_or_copy\'/9", (MR_Integer) 1, Var_56, ModuleName_14, &OutputScriptName_29);
            parse_tree__file_names__module_name_to_file_name_8_p_0(NoSubdirGlobals_22, (MR_String) "predicate \140backend_libs.compile_target_code.post_link_make_symlink_or_copy\'/9", (MR_Integer) 1, Var_56, ModuleName_14, &UserDirScriptName_30);
            backend_libs__compile_target_code__same_timestamp_5_p_0(OutputScriptName_29, UserDirScriptName_30, &ScriptSameTimestamp_31);
            switch (ScriptSameTimestamp_31) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_32;

                  mercury__io__remove_file_recursively_4_p_0(UserDirScriptName_30, &Var_32);
                  parse_tree__module_cmds__make_symlink_or_copy_file_8_p_0(Globals_10, ProgressStream_11, ErrorStream_12, OutputScriptName_29, UserDirScriptName_30, Succeeded_15);
                }
                break;
              case (MR_Integer) 1:
                *Succeeded_15 = (MR_Integer) 1;
                break;
            }
          }
          else
            *Succeeded_15 = Succeeded0_25;
        }
        break;
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__same_timestamp_5_p_0(
  MR_String FileNameA_6,
  MR_String FileNameB_7,
  MR_Word * SameTimestamp_8)
{
  {
    MR_bool succeeded;
    MR_Word MaybeCompare_10;
    MR_Word TimeResultA_21;
    MR_Word TimeResultB_22;
    MR_Word TimeA_23;
    MR_Word TimeB_24;
    MR_Word Var_14;

    mercury__io__file_modification_time_4_p_0(FileNameA_6, &TimeResultA_21);
    mercury__io__file_modification_time_4_p_0(FileNameB_7, &TimeResultB_22);
    succeeded = ((MR_tag((MR_Word) TimeResultA_21)) == (MR_Integer) 0);
    if (succeeded)
    {
      TimeA_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TimeResultA_21, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) TimeResultB_22)) == (MR_Integer) 0);
      if (succeeded)
        TimeB_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TimeResultB_22, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Compare_25;

      mercury__time____Compare____time_t_0_0(&Compare_25, TimeA_23, TimeB_24);
      {
        MaybeCompare_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeCompare_10, 0) = ((MR_Box) (Compare_25));
      }
    }
    else
      MaybeCompare_10 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (MaybeCompare_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCompare_10, (MR_Integer) 0))));
      succeeded = (Var_14 == (MR_Integer) 0);
    }
    if (succeeded)
      *SameTimestamp_8 = (MR_Integer) 1;
    else
      *SameTimestamp_8 = (MR_Integer) 0;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__link_output_filename_7_p_0(
  MR_Word Globals_8,
  MR_Word LinkTargetType_9,
  MR_Word ModuleName_10,
  MR_Word * OtherExt_11,
  MR_String * OutputFileName_12)
{
  switch (LinkTargetType_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        *OtherExt_11 = (MR_Word) (((MR_Box) ((MR_String) ".exe")));
        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140backend_libs.compile_target_code.link_output_filename\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[9])), ModuleName_10, OutputFileName_12);
      }
      break;
    case (MR_Integer) 4:
      {
        *OtherExt_11 = (MR_Word) (((MR_Box) ((MR_String) ".dll")));
        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140backend_libs.compile_target_code.link_output_filename\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[1])), ModuleName_10, OutputFileName_12);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String ExtStr_14;
        MR_Word Var_50;

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 604, &ExtStr_14);
        *OtherExt_11 = (MR_Word) (ExtStr_14);
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (*OtherExt_11));
        }
        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140backend_libs.compile_target_code.link_output_filename\'/7", (MR_Integer) 0, Var_50, ModuleName_10, OutputFileName_12);
      }
      break;
    case (MR_Integer) 6:
      {
        *OtherExt_11 = (MR_Word) (((MR_Box) ((MR_String) ".jar")));
        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140backend_libs.compile_target_code.link_output_filename\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[10])), ModuleName_10, OutputFileName_12);
      }
      break;
    case (MR_Integer) 5:
      {
        *OtherExt_11 = (MR_Word) (((MR_Box) ((MR_String) ".jar")));
        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140backend_libs.compile_target_code.link_output_filename\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[10])), ModuleName_10, OutputFileName_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String ExtStr_53;

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 602, &ExtStr_53);
        *OtherExt_11 = (MR_Word) (ExtStr_53);
        parse_tree__file_names__module_name_to_lib_file_name_9_p_0(Globals_8, (MR_String) "predicate \140backend_libs.compile_target_code.link_output_filename\'/7", (MR_Integer) 0, (MR_String) "lib", *OtherExt_11, ModuleName_10, OutputFileName_12);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String ExtStr_52;

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 603, &ExtStr_52);
        *OtherExt_11 = (MR_Word) (ExtStr_52);
        parse_tree__file_names__module_name_to_lib_file_name_9_p_0(Globals_8, (MR_String) "predicate \140backend_libs.compile_target_code.link_output_filename\'/7", (MR_Integer) 0, (MR_String) "lib", *OtherExt_11, ModuleName_10, OutputFileName_12);
      }
      break;
  }
}

void MR_CALL 
backend_libs__compile_target_code__make_init_obj_file_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word ModuleName_12,
  MR_Word ModuleNames_13,
  MR_Word * Result_14)
{
  {
    MR_Word MustCompile_16;

    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 654, &MustCompile_16);
    backend_libs__compile_target_code__do_make_init_obj_file_9_p_0(Globals_9, ProgressStream_10, ErrorStream_11, MustCompile_16, ModuleName_12, ModuleNames_13, Result_14);
  }
}

static void MR_CALL 
backend_libs__compile_target_code__do_make_init_obj_file_9_p_0(
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word MustCompile_13,
  MR_Word ModuleName_14,
  MR_Word ModuleNames_15,
  MR_Word * Result_16)
{
  {
    MR_Word MaybeStdLibDir_18;
    MR_String GradeDir_19;
    MR_Word StdInitFileNames_23;
    MR_Word StdTraceInitFileNames_24;
    MR_Word SourceDebugInitFileNames_25;
    MR_String MkInit_26;
    MR_Word MaybeInitTargetFile_27;
    MR_String ObjExtStr_30;
    MR_Word InitObjOtherExt_31;
    MR_String InitObjFileName_32;
    MR_String Var_67;
    MR_Word Var_71;

    libs__globals__lookup_maybe_string_option_3_p_0(Globals_10, (MR_Integer) 582, &MaybeStdLibDir_18);
    libs__compute_grade__grade_directory_component_2_p_0(Globals_10, &GradeDir_19);
    if ((MaybeStdLibDir_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      StdInitFileNames_23 = (MR_Word) ((MR_Unsigned) 0U);
      StdTraceInitFileNames_24 = (MR_Word) ((MR_Unsigned) 0U);
      SourceDebugInitFileNames_25 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String StdLibDir_20 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStdLibDir_18, (MR_Integer) 0))));
      MR_String Var_45;
      MR_Word Var_47;
      MR_String Var_48;
      MR_String Var_51;
      MR_Word Var_53;
      MR_String Var_54;
      MR_String Var_57;

      Var_45 = backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1239__1_3_f_0(GradeDir_19, StdLibDir_20, (MR_String) "mer_rt.init");
      Var_48 = backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1239__1_3_f_0(GradeDir_19, StdLibDir_20, (MR_String) "mer_std.init");
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        StdInitFileNames_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), StdInitFileNames_23, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(1), StdInitFileNames_23, 1) = ((MR_Box) (Var_47));
      }
      Var_51 = backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1239__1_3_f_0(GradeDir_19, StdLibDir_20, (MR_String) "mer_browser.init");
      Var_54 = backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1239__1_3_f_0(GradeDir_19, StdLibDir_20, (MR_String) "mer_mdbcomp.init");
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        StdTraceInitFileNames_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), StdTraceInitFileNames_24, 0) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(1), StdTraceInitFileNames_24, 1) = ((MR_Box) (Var_53));
      }
      Var_57 = backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1239__1_3_f_0(GradeDir_19, StdLibDir_20, (MR_String) "mer_ssdb.init");
      {
        SourceDebugInitFileNames_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SourceDebugInitFileNames_25, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(1), SourceDebugInitFileNames_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 612, &MkInit_26);
    backend_libs__compile_target_code__make_init_target_file_14_p_0(Globals_10, ProgressStream_11, ErrorStream_12, MkInit_26, ModuleName_14, ModuleNames_15, (MR_Word) (((MR_Box) ((MR_String) ".c"))), (MR_Word) (((MR_Box) ((MR_String) "_init.c"))), StdInitFileNames_23, StdTraceInitFileNames_24, SourceDebugInitFileNames_25, &MaybeInitTargetFile_27);
    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 552, &ObjExtStr_30);
    Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "_init", ObjExtStr_30);
    InitObjOtherExt_31 = (MR_Word) (Var_67);
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (InitObjOtherExt_31));
    }
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140backend_libs.compile_target_code.do_make_init_obj_file\'/9", (MR_Integer) 0, Var_71, ModuleName_14, &InitObjFileName_32);
    backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_49_95_95_91_49_48_93_95_48_9_p_0(Globals_10, ProgressStream_11, ErrorStream_12, (MR_Integer) 1, InitObjFileName_32, Globals_10, ProgressStream_11, MaybeInitTargetFile_27, MustCompile_13, InitObjFileName_32, Result_16);
  }
}

static void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_49_95_95_91_49_48_93_95_48_9_p_0(
  MR_Word Var_32,
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word Var_35,
  MR_String Var_36,
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word MaybeInitTargetFile_12,
  MR_Word MustCompile_13,
  MR_String InitObjFileName_15,
  MR_Word * Result_16)
{
  {
    MR_bool succeeded;
    MR_Word Verbose_18;
    MR_Word Stats_19;

    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 70, &Verbose_18);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 80, &Stats_19);
    if ((MaybeInitTargetFile_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *Result_16 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String InitTargetFileName_20 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeInitTargetFile_12, (MR_Integer) 0))));
      MR_Word Rel_21;
      MR_Word TimeResultA_55;
      MR_Word TimeResultB_56;
      MR_Word TimeA_57;
      MR_Word TimeB_58;

      mercury__io__file_modification_time_4_p_0(InitObjFileName_15, &TimeResultA_55);
      mercury__io__file_modification_time_4_p_0(InitTargetFileName_20, &TimeResultB_56);
      succeeded = ((MR_tag((MR_Word) TimeResultA_55)) == (MR_Integer) 0);
      if (succeeded)
      {
        TimeA_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TimeResultA_55, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) TimeResultB_56)) == (MR_Integer) 0);
        if (succeeded)
          TimeB_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TimeResultB_56, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Compare_59;

        mercury__time____Compare____time_t_0_0(&Compare_59, TimeA_57, TimeB_58);
        switch (Compare_59) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Rel_21 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            Rel_21 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            Rel_21 = (MR_Integer) 0;
            break;
        }
      }
      else
        Rel_21 = (MR_Integer) 2;
      switch (Rel_21) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
      }
      if (!(succeeded))
        succeeded = (MustCompile_13 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word CompileSucceeded_22;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_18, (MR_String) "% Compiling initialization file...\n");
        backend_libs__compile_target_code__IntroducedFrom__pred__do_make_init_obj_file__1274__1_9_p_0(Var_32, Var_33, Var_34, Var_35, Var_36, InitTargetFileName_20, &CompileSucceeded_22);
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_11, Stats_19);
        switch (CompileSucceeded_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Result_16 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InitObjFileName_15));
            }
            break;
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InitObjFileName_15));
        }
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__do_make_init_obj_file__1274__1_9_p_0(
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word PIC_28,
  MR_String InitObjFileName_32,
  MR_String LambdaHeadVar__1_73,
  MR_Word * LambdaHeadVar__2_74)
{
  backend_libs__compile_target_code__do_compile_c_file_9_p_0(Globals_10, ProgressStream_11, ErrorStream_12, PIC_28, LambdaHeadVar__1_73, InitObjFileName_32, LambdaHeadVar__2_74);
}

static MR_String MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1239__1_3_f_0(
  MR_String GradeDir_19,
  MR_String StdLibDir_20,
  MR_String LambdaHeadVar__1_40)
{
  {
    MR_String LambdaHeadVar__2_41;
    MR_String Var_42;
    MR_String Var_43;

    Var_43 = mercury__dir__f_slash_2_f_0(StdLibDir_20, (MR_String) "modules");
    Var_42 = mercury__dir__f_slash_2_f_0(Var_43, GradeDir_19);
    LambdaHeadVar__2_41 = mercury__dir__f_slash_2_f_0(Var_42, LambdaHeadVar__1_40);
    return LambdaHeadVar__2_41;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__make_init_target_file_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__6_6;

    parse_tree__file_names__module_name_to_file_name_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__6_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
backend_libs__compile_target_code__make_init_target_file_14_p_0(
  MR_Word Globals_15,
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_String MkInit_18,
  MR_Word ModuleName_19,
  MR_Word ModuleNames_20,
  MR_Word TargetOtherExt_21,
  MR_Word InitTargetOtherExt_22,
  MR_Word StdInitFileNames_23,
  MR_Word StdTraceInitFileNames_24,
  MR_Word SourceDebugInitFileNames_25,
  MR_Word * MaybeInitTargetFile_26)
{
  {
    MR_bool succeeded;
    MR_Word Verbose_28;
    MR_Word Stats_29;
    MR_String Grade_30;
    MR_String InitTargetFileName_31;
    MR_Word TargetFileNameList_32;
    MR_Word InitFileDirsList_33;
    MR_String InitFileDirs_34;
    MR_Word InitFileNamesList0_35;
    MR_Word InitFileNamesList1_36;
    MR_Word TraceInitFileNamesList0_37;
    MR_Word InitFileNamesList2_38;
    MR_Word TraceInitFileNamesList_39;
    MR_Word TraceLevel_40;
    MR_Word TraceEnabled_41;
    MR_String TraceOpt_42;
    MR_Word InitFileNamesList3_43;
    MR_Word SourceDebug_44;
    MR_Word InitFileNamesList_45;
    MR_Word RuntimeFlagsList_46;
    MR_String RuntimeFlags_47;
    MR_Word ExtraInits_48;
    MR_String ExtraInitsOpt_49;
    MR_Word Main_50;
    MR_String NoMainOpt_51;
    MR_String ExperimentalComplexity_52;
    MR_String ExperimentalComplexityOpt_53;
    MR_String TmpInitTargetFileName_54;
    MR_String MkInitArgs_55;
    MR_Word MkInitSucceeded_57;
    MR_Word Var_67;
    MR_Word Var_69;
    MR_Word Var_73;
    MR_Word Var_90;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_110;
    MR_String Var_111;
    MR_Word Var_112;
    MR_Word Var_114;
    MR_Word Var_117;
    MR_Box conv1_STATE_VARIABLE_IO_70_70;

    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 70, &Verbose_28);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 80, &Stats_29);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_16, Verbose_28, (MR_String) "% Creating initialization file...\n");
    libs__compute_grade__compute_grade_2_p_0(Globals_15, &Grade_30);
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (InitTargetOtherExt_22));
    }
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_15, (MR_String) "predicate \140backend_libs.compile_target_code.make_init_target_file\'/14", (MR_Integer) 0, Var_67, ModuleName_19, &InitTargetFileName_31);
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (TargetOtherExt_21));
    }
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (backend_libs__compile_target_code__make_init_target_file_14_p_0_1));
      MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (Globals_15));
      MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) ((MR_String) "predicate \140backend_libs.compile_target_code.make_init_target_file\'/14"));
      MR_hl_field(MR_mktag(0), Var_69, 5) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_69, 6) = ((MR_Box) (Var_73));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_69, ModuleNames_20, &TargetFileNameList_32, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_70_70);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_15, (MR_Integer) 584, &InitFileDirsList_33);
    backend_libs__compile_target_code__join_quoted_string_list_5_p_0(InitFileDirsList_33, (MR_String) "-I ", (MR_String) "", (MR_String) " ", &InitFileDirs_34);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_15, (MR_Integer) 585, &InitFileNamesList0_35);
    mercury__list__remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitFileNamesList0_35, &InitFileNamesList1_36);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_15, (MR_Integer) 586, &TraceInitFileNamesList0_37);
    InitFileNamesList2_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdInitFileNames_23, InitFileNamesList1_36);
    TraceInitFileNamesList_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdTraceInitFileNames_24, TraceInitFileNamesList0_37);
    libs__globals__get_trace_level_2_p_0(Globals_15, &TraceLevel_40);
    TraceEnabled_41 = libs__trace_params__is_exec_trace_enabled_at_given_trace_level_1_f_0(TraceLevel_40);
    switch (TraceEnabled_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          TraceOpt_42 = (MR_String) "-t";
          InitFileNamesList3_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitFileNamesList2_38, TraceInitFileNamesList_39);
        }
        break;
      case (MR_Integer) 0:
        {
          TraceOpt_42 = (MR_String) "";
          InitFileNamesList3_43 = InitFileNamesList2_38;
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 277, &SourceDebug_44);
    switch (SourceDebug_44) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        InitFileNamesList_45 = InitFileNamesList3_43;
        break;
      case (MR_Integer) 1:
        InitFileNamesList_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitFileNamesList3_43, SourceDebugInitFileNames_25);
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(Globals_15, (MR_Integer) 596, &RuntimeFlagsList_46);
    backend_libs__compile_target_code__join_quoted_string_list_5_p_0(RuntimeFlagsList_46, (MR_String) "-r ", (MR_String) "", (MR_String) " ", &RuntimeFlags_47);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 597, &ExtraInits_48);
    switch (ExtraInits_48) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ExtraInitsOpt_49 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        ExtraInitsOpt_49 = (MR_String) "-x";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 593, &Main_50);
    switch (Main_50) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        NoMainOpt_51 = (MR_String) "-l";
        break;
      case (MR_Integer) 1:
        NoMainOpt_51 = (MR_String) "";
        break;
    }
    libs__globals__lookup_string_option_3_p_0(Globals_15, (MR_Integer) 256, &ExperimentalComplexity_52);
    succeeded = (strcmp(ExperimentalComplexity_52, (MR_String) "") == 0);
    if (succeeded)
      ExperimentalComplexityOpt_53 = (MR_String) "";
    else
      ExperimentalComplexityOpt_53 = mercury__string__f_43_43_2_f_0((MR_String) "-X ", ExperimentalComplexity_52);
    TmpInitTargetFileName_54 = mercury__string__f_43_43_2_f_0(InitTargetFileName_31, (MR_String) ".tmp");
    Var_111 = libs__options__quote_arg_1_f_0(TmpInitTargetFileName_54);
    {
      Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (InitFileDirs_34));
      MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Var_114));
    }
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_112));
    }
    {
      Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) ((MR_String) " -o "));
      MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_110));
    }
    {
      Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (RuntimeFlags_47));
      MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_108));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_107));
    }
    {
      Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (ExperimentalComplexityOpt_53));
      MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_105));
    }
    {
      Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_104));
    }
    {
      Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (NoMainOpt_51));
      MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_102));
    }
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_101));
    }
    {
      Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (ExtraInitsOpt_49));
      MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_99));
    }
    {
      Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_98));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (TraceOpt_42));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_96));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_95));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Grade_30));
      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_93));
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) ((MR_String) " -g "));
      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_92));
    }
    MkInitArgs_55 = mercury__string__append_list_1_f_0(Var_90);
    Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TargetFileNameList_32, InitFileNamesList_45);
    backend_libs__compile_target_code__invoke_mkinit_11_p_0(Globals_15, ProgressStream_16, ErrorStream_17, ErrorStream_17, (MR_Integer) 1, MkInit_18, MkInitArgs_55, Var_117, &MkInitSucceeded_57);
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_16, Stats_29);
    switch (MkInitSucceeded_57) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *MaybeInitTargetFile_26 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word UpdateResult_58;

          parse_tree__module_cmds__update_interface_return_succeeded_6_p_0(Globals_15, ModuleName_19, InitTargetFileName_31, &UpdateResult_58);
          switch (UpdateResult_58) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *MaybeInitTargetFile_26 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInitTargetFile_26 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InitTargetFileName_31));
              }
              break;
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__join_quoted_string_list_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__join_quoted_string_list_5_p_0(
  MR_Word Strings_6,
  MR_String Prefix_7,
  MR_String Suffix_8,
  MR_String Separator_9,
  MR_String * Result_10)
{
  {
    MR_Word Var_11;

    Var_11 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[7]), Strings_6);
    backend_libs__compile_target_code__join_string_list_5_p_0(Var_11, Prefix_7, Suffix_8, Separator_9, Result_10);
  }
}

void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word MainModuleName_12,
  MR_Word AllModules_13,
  MR_Word * Succeeded_14)
{
  {
    MR_String MkInit_16;

    libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 612, &MkInit_16);
    backend_libs__compile_target_code__make_library_init_file_2_10_p_0(Globals_9, ProgressStream_10, ErrorStream_11, MainModuleName_12, AllModules_13, (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[0])), MkInit_16, Succeeded_14);
  }
}

static void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_2_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__6_6;

    parse_tree__file_names__module_name_to_file_name_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__6_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_2_10_p_0(
  MR_Word Globals_11,
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word MainModuleName_14,
  MR_Word AllModules_15,
  MR_Word TargetExt_16,
  MR_String MkInit_17,
  MR_Word * Succeeded_18)
{
  {
    MR_String InitFileName_20;
    MR_String TmpInitFileName_21;
    MR_Word InitFileRes_22;

    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_11, (MR_String) "predicate \140backend_libs.compile_target_code.make_library_init_file_2\'/10", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[8])), MainModuleName_14, &InitFileName_20);
    TmpInitFileName_21 = mercury__string__f_43_43_2_f_0(InitFileName_20, (MR_String) ".tmp");
    mercury__io__open_output_4_p_0(TmpInitFileName_21, &InitFileRes_22);
    if (((MR_tag((MR_Word) InitFileRes_22)) == (MR_Integer) 1))
    {
      MR_Word Error_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InitFileRes_22, (MR_Integer) 0))));
      MR_String ProgName_38;
      MR_String Var_59;

      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_38);
      Var_59 = mercury__io__error_message_1_f_0(Error_37);
      mercury__io__write_string_4_p_0(ErrorStream_13, ProgName_38);
      mercury__io__write_string_4_p_0(ErrorStream_13, (MR_String) ": can\'t open \140");
      mercury__io__write_string_4_p_0(ErrorStream_13, TmpInitFileName_21);
      mercury__io__write_string_4_p_0(ErrorStream_13, (MR_String) "\' for output: ");
      mercury__io__write_string_4_p_0(ErrorStream_13, Var_59);
      mercury__io__write_string_4_p_0(ErrorStream_13, (MR_String) "\n");
      *Succeeded_18 = (MR_Integer) 0;
    }
    else
    {
      MR_Word InitFileStream_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InitFileRes_22, (MR_Integer) 0))));
      MR_Word AllTargetFilesList_24;
      MR_Word MkInitSucceeded_25;
      MR_Word Succeeded0_29;
      MR_Word Succeeded1_30;
      MR_Word Succeeded2_31;
      MR_Word Var_61;
      MR_Box conv1_STATE_VARIABLE_IO_62_62;

      {
        Var_61 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (backend_libs__compile_target_code__make_library_init_file_2_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (Globals_11));
        MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) ((MR_String) "predicate \140backend_libs.compile_target_code.make_library_init_file_2\'/10"));
        MR_hl_field(MR_mktag(0), Var_61, 5) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_61, 6) = ((MR_Box) (TargetExt_16));
      }
      mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, AllModules_15, &AllTargetFilesList_24, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_62_62);
      backend_libs__compile_target_code__invoke_mkinit_11_p_0(Globals_11, ProgressStream_12, ErrorStream_13, InitFileStream_23, (MR_Integer) 1, MkInit_17, (MR_String) " -k ", AllTargetFilesList_24, &MkInitSucceeded_25);
      switch (MkInitSucceeded_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Succeeded0_29 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          {
            MR_Word MaybeInitFileCommand_26;

            libs__globals__lookup_maybe_string_option_3_p_0(Globals_11, (MR_Integer) 659, &MaybeInitFileCommand_26);
            if ((MaybeInitFileCommand_26 == (MR_Word) ((MR_Unsigned) 0U)))
              Succeeded0_29 = (MR_Integer) 1;
            else
            {
              MR_String InitFileCommand_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeInitFileCommand_26, (MR_Integer) 0))));
              MR_String CommandString_28;

              backend_libs__compile_target_code__make_all_module_command_6_p_0(InitFileCommand_27, MainModuleName_14, AllModules_15, &CommandString_28);
              parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_11, ProgressStream_12, ErrorStream_13, InitFileStream_23, (MR_Integer) 1, CommandString_28, &Succeeded0_29);
            }
          }
          break;
      }
      mercury__io__close_output_3_p_0(InitFileStream_23);
      parse_tree__module_cmds__update_interface_return_succeeded_6_p_0(Globals_11, MainModuleName_14, InitFileName_20, &Succeeded1_30);
      Succeeded2_31 = libs__maybe_succeeded__and_2_f_0(Succeeded0_29, Succeeded1_30);
      switch (Succeeded2_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Succeeded_18 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          {
            MR_Word UseGradeSubDirs_32;

            libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 677, &UseGradeSubDirs_32);
            switch (UseGradeSubDirs_32) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *Succeeded_18 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word NoSubdirGlobals0_33;
                  MR_Word NoSubdirGlobals_34;
                  MR_String UserDirFileName_35;
                  MR_Word Var_36;

                  libs__globals__set_option_4_p_0((MR_Integer) 676, (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[3])), Globals_11, &NoSubdirGlobals0_33);
                  libs__globals__set_option_4_p_0((MR_Integer) 677, (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[3])), NoSubdirGlobals0_33, &NoSubdirGlobals_34);
                  parse_tree__file_names__module_name_to_file_name_8_p_0(NoSubdirGlobals_34, (MR_String) "predicate \140backend_libs.compile_target_code.make_library_init_file_2\'/10", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[8])), MainModuleName_14, &UserDirFileName_35);
                  mercury__io__remove_file_4_p_0(UserDirFileName_35, &Var_36);
                  parse_tree__module_cmds__make_symlink_or_copy_file_8_p_0(Globals_11, ProgressStream_12, ErrorStream_13, InitFileName_20, UserDirFileName_35, Succeeded_18);
                }
                break;
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__invoke_mkinit_11_p_0(
  MR_Word Globals_12,
  MR_Word ProgressStream_13,
  MR_Word ErrorStream_14,
  MR_Word InitFileStream_15,
  MR_Word Verbosity_16,
  MR_String MkInit_17,
  MR_String Args_18,
  MR_Word FileNames_19,
  MR_Word * MkInitSucceeded_20)
{
  {
    MR_String TargetFileNames_22;
    MR_Word TmpFileResult_23;

    backend_libs__compile_target_code__join_string_list_5_p_0(FileNames_19, (MR_String) "", (MR_String) "\n", (MR_String) "", &TargetFileNames_22);
    libs__file_util__open_temp_output_3_p_0(&TmpFileResult_23);
    if (((MR_tag((MR_Word) TmpFileResult_23)) == (MR_Integer) 1))
    {
      MR_String ErrorMessage_30 = ((MR_String) ((MR_hl_field(MR_mktag(1), TmpFileResult_23, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(ErrorStream_14, ErrorMessage_30);
      mercury__io__write_string_4_p_0(ErrorStream_14, (MR_String) "\n");
      *MkInitSucceeded_20 = (MR_Integer) 0;
    }
    else
    {
      MR_String TmpFile_24;
      MR_Word TmpStream_25;
      MR_String MkInitCmd_26;
      MR_Word MkInitSucceeded0_27;
      MR_Word RemoveResult_28;
      MR_Tuple Var_42 = ((MR_Tuple) ((MR_hl_field(MR_mktag(0), TmpFileResult_23, (MR_Integer) 0))));
      MR_String Var_56;
      MR_String Var_57;
      MR_String Var_59;

      TmpFile_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 0))));
      TmpStream_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 1))));
      mercury__io__write_string_4_p_0(TmpStream_25, TargetFileNames_22);
      mercury__io__close_output_3_p_0(TmpStream_25);
      Var_56 = mercury__string__f_43_43_2_f_0((MR_String) " -f ", TmpFile_24);
      Var_57 = mercury__string__f_43_43_2_f_0(Args_18, Var_56);
      Var_59 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_57);
      MkInitCmd_26 = mercury__string__f_43_43_2_f_0(MkInit_17, Var_59);
      parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_12, ProgressStream_13, ErrorStream_14, InitFileStream_15, Verbosity_16, MkInitCmd_26, &MkInitSucceeded0_27);
      mercury__io__remove_file_4_p_0(TmpFile_24, &RemoveResult_28);
      if ((RemoveResult_28 == (MR_Word) ((MR_Unsigned) 0U)))
        *MkInitSucceeded_20 = MkInitSucceeded0_27;
      else
        *MkInitSucceeded_20 = (MR_Integer) 0;
    }
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__make_all_module_command_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__make_all_module_command_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    parse_tree__file_names__module_name_to_source_file_name_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

void MR_CALL 
backend_libs__compile_target_code__make_all_module_command_6_p_0(
  MR_String Command0_7,
  MR_Word MainModule_8,
  MR_Word AllModules_9,
  MR_String * Command_10)
{
  {
    MR_Word ModuleNameStrings_12;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Box conv1_STATE_VARIABLE_IO_14;

    Var_18 = mercury__list__delete_all_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_9, ((MR_Box) (MainModule_8)));
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MainModule_8));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_18));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[5]), Var_16, &ModuleNameStrings_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_14);
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Command0_7));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (ModuleNameStrings_12));
    }
    Var_20 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[6]), Var_22);
    *Command_10 = mercury__string__join_list_2_f_0((MR_String) " ", Var_20);
  }
}

static void MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_85;

    backend_libs__compile_target_code__IntroducedFrom__pred__compile_csharp_file__1040__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_85);
    *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_85));
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_79;

    succeeded = backend_libs__compile_target_code__IntroducedFrom__pred__compile_csharp_file__1030__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_79);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_79));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_70;

    conv0_LambdaHeadVar__2_70 = backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__1020__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_70));
    return wrapper_arg_2;
  }
}

void MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_9_p_0(
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word ModuleAndImports_13,
  MR_String CSharpFileName0_14,
  MR_String DLLFileName_15,
  MR_Word * Succeeded_16)
{
  {
    MR_bool succeeded;
    MR_Word Verbose_18;
    MR_String CSharpFileName_19;
    MR_String CSC_20;
    MR_Word CSCFlagsList_21;
    MR_String CSCFlags_22;
    MR_Word Debug_23;
    MR_String DebugOpt_24;
    MR_Word DLLDirs_25;
    MR_String DLLDirOpts_26;
    MR_Word ModuleName_28;
    MR_String Prefix_29;
    MR_Word FIMSpes_30;
    MR_Word ForeignDeps_34;
    MR_Word IntDeps_35;
    MR_Word ImpDeps_36;
    MR_Word IntImpDeps_37;
    MR_Word IntImpForeignDeps_38;
    MR_Word ReferencedDlls_39;
    MR_Word ReferencedDllsList_44;
    MR_String ReferencedDllsStr_45;
    MR_String Command_46;
    MR_String Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_110;
    MR_Box conv3_STATE_VARIABLE_IO_83_83;

    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 70, &Verbose_18);
    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 562, &CSC_20);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 563, &CSCFlagsList_21);
    backend_libs__compile_target_code__join_string_list_5_p_0(CSCFlagsList_21, (MR_String) "", (MR_String) "", (MR_String) " ", &CSCFlags_22);
    CSharpFileName_19 = mercury__string__replace_all_3_f_0(CSharpFileName0_14, (MR_String) "/", (MR_String) "\\\\");
    switch (Verbose_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) "% Compiling \140");
          mercury__io__write_string_4_p_0(ProgressStream_11, CSharpFileName_19);
          mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) "\':\n");
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 529, &Debug_23);
    switch (Debug_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DebugOpt_24 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        DebugOpt_24 = (MR_String) "";
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 571, &DLLDirs_25);
    Var_67 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_1[0]), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[4]), DLLDirs_25);
    Var_66 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_67);
    Var_65 = mercury__string__append_list_1_f_0(Var_66);
    DLLDirOpts_26 = mercury__string__f_43_43_2_f_0((MR_String) "-lib:Mercury/dlls ", Var_65);
    parse_tree__module_imports__module_dep_info_get_module_name_2_p_0(ModuleAndImports_13, &ModuleName_28);
    succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName_28);
    if (succeeded)
      Prefix_29 = (MR_String) "-addmodule:";
    else
      Prefix_29 = (MR_String) "-r:";
    parse_tree__module_imports__module_dep_info_get_fims_2_p_0(ModuleAndImports_13, &FIMSpes_30);
    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (backend_libs__compile_target_code__compile_csharp_file_9_p_0_2));
      MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (ModuleName_28));
    }
    Var_77 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), FIMSpes_30);
    mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_76, Var_77, &ForeignDeps_34);
    parse_tree__module_imports__module_dep_info_get_int_deps_2_p_0(ModuleAndImports_13, &IntDeps_35);
    parse_tree__module_imports__module_dep_info_get_imp_deps_2_p_0(ModuleAndImports_13, &ImpDeps_36);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDeps_35, ImpDeps_36, &IntImpDeps_37);
    mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ForeignDeps_34, IntImpDeps_37, &IntImpForeignDeps_38);
    ReferencedDlls_39 = backend_libs__compile_target_code__referenced_dlls_2_f_0(ModuleName_28, IntImpForeignDeps_38);
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (backend_libs__compile_target_code__compile_csharp_file_9_p_0_3));
      MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (Globals_10));
      MR_hl_field(MR_mktag(0), Var_81, 4) = ((MR_Box) (Prefix_29));
    }
    Var_82 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ReferencedDlls_39);
    mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_81, Var_82, &ReferencedDllsList_44, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_83_83);
    Var_97 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ReferencedDllsList_44);
    ReferencedDllsStr_45 = mercury__string__append_list_1_f_0(Var_97);
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (CSharpFileName_19));
      MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_110));
    }
    {
      Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (DLLFileName_15));
      MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_108));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) ((MR_String) " -out:"));
      MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_107));
    }
    {
      Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (ReferencedDllsStr_45));
      MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_105));
    }
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (CSCFlags_22));
      MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_104));
    }
    {
      Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (DLLDirOpts_26));
      MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_103));
    }
    {
      Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) ((MR_String) " -t:library "));
      MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_102));
    }
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (DebugOpt_24));
      MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_100));
    }
    {
      Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (CSC_20));
      MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_99));
    }
    mercury__string__append_list_2_p_0(Var_98, &Command_46);
    parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_10, ProgressStream_11, ErrorStream_12, ErrorStream_12, (MR_Integer) 1, Command_46, Succeeded_16);
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__referenced_dlls_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_18;

    conv0_LambdaHeadVar__2_18 = backend_libs__compile_target_code__IntroducedFrom__func__referenced_dlls__1076__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_18));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
backend_libs__compile_target_code__referenced_dlls_2_f_0(
  MR_Word Module_4,
  MR_Word DepModules0_5)
{
  {
    MR_bool succeeded;
    MR_Word Modules_6;
    MR_Word DepModules_7;

    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Module_4)), DepModules0_5, &DepModules_7);
    succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(Module_4);
    if (succeeded)
      mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[3])), DepModules_7, &Modules_6);
    else
      Modules_6 = mercury__set__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[3]), DepModules_7);
    return Modules_6;
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code__compile_java_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__compile_target_code__is_minus_j_flag_1_p_0(((MR_String) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
backend_libs__compile_target_code__compile_java_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_String HeadJavaFile_12,
  MR_Word TailJavaFiles_13,
  MR_Word * Succeeded_14)
{
  {
    MR_bool succeeded;
    MR_Word Verbose_16;
    MR_String JavaCompiler_19;
    MR_Word JavaFlagsList_20;
    MR_Word RestrictedCommandLine_21;
    MR_String JAVAFLAGS_25;
    MR_Word MercuryStdLibs_26;
    MR_Word UserClasspath_27;
    MR_Word Java_Incl_Dirs_28;
    MR_String EnvClasspath_29;
    MR_Word ClassPathList_30;
    MR_String ClassPath_31;
    MR_String InclOpt_32;
    MR_Word Target_Debug_33;
    MR_String Target_DebugOpt_34;
    MR_Word UseSubdirs_35;
    MR_Word UseGradeSubdirs_36;
    MR_String TargetArch_37;
    MR_String DirOpts_42;
    MR_String MFilterJavac_43;
    MR_Word MaybeMFilterJavac_44;
    MR_String NonAtFileCommandArgs_45;
    MR_String JoinedJavaFiles_46;
    MR_String CommandArgs_47;
    MR_String Var_76;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_125;

    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 70, &Verbose_16);
    switch (Verbose_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        if ((TailJavaFiles_13 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "% Compiling \140");
          mercury__io__write_string_4_p_0(ProgressStream_10, HeadJavaFile_12);
          mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "\':\n");
        }
        else
        {
          mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "% Compiling \140");
          mercury__io__write_string_4_p_0(ProgressStream_10, HeadJavaFile_12);
          mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "\', etc.:\n");
        }
        break;
    }
    libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 556, &JavaCompiler_19);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 558, &JavaFlagsList_20);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 685, &RestrictedCommandLine_21);
    switch (RestrictedCommandLine_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          backend_libs__compile_target_code__join_string_list_5_p_0(JavaFlagsList_20, (MR_String) "", (MR_String) "", (MR_String) " ", &JAVAFLAGS_25);
          NonAtFileCommandArgs_45 = (MR_String) "";
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word JRT_JavaFlagsList_22;
          MR_Word NonJRT_JavaFlagsList_23;

          mercury__list__filter_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[2]), JavaFlagsList_20, &JRT_JavaFlagsList_22, &NonJRT_JavaFlagsList_23);
          backend_libs__compile_target_code__join_string_list_5_p_0(JRT_JavaFlagsList_22, (MR_String) "", (MR_String) "", (MR_String) " ", &NonAtFileCommandArgs_45);
          backend_libs__compile_target_code__join_string_list_5_p_0(NonJRT_JavaFlagsList_23, (MR_String) "", (MR_String) "", (MR_String) " ", &JAVAFLAGS_25);
        }
        break;
    }
    parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(Globals_9, &MercuryStdLibs_26);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 560, &UserClasspath_27);
    Java_Incl_Dirs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercuryStdLibs_26, UserClasspath_27);
    parse_tree__module_cmds__get_env_classpath_3_p_0(&EnvClasspath_29);
    succeeded = (strcmp(EnvClasspath_29, (MR_String) "") == 0);
    if (succeeded)
      ClassPathList_30 = Java_Incl_Dirs_28;
    else
      {
        ClassPathList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ClassPathList_30, 0) = ((MR_Box) (EnvClasspath_29));
        MR_hl_field(MR_mktag(1), ClassPathList_30, 1) = ((MR_Box) (Java_Incl_Dirs_28));
      }
    Var_76 = backend_libs__compile_target_code__java_classpath_separator_0_f_0();
    ClassPath_31 = mercury__string__join_list_2_f_0(Var_76, ClassPathList_30);
    succeeded = (strcmp(ClassPath_31, (MR_String) "") == 0);
    if (succeeded)
      InclOpt_32 = (MR_String) "";
    else
    {
      MR_Word Var_77;
      MR_Word Var_79;
      MR_String Var_80;

      Var_80 = libs__options__quote_arg_1_f_0(ClassPath_31);
      {
        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[1])));
      }
      {
        Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) ((MR_String) "-classpath "));
        MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_79));
      }
      InclOpt_32 = mercury__string__append_list_1_f_0(Var_77);
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 529, &Target_Debug_33);
    switch (Target_Debug_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Target_DebugOpt_34 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        Target_DebugOpt_34 = (MR_String) "-g ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 676, &UseSubdirs_35);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 677, &UseGradeSubdirs_36);
    libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 695, &TargetArch_37);
    switch (UseSubdirs_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DirOpts_42 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_String SourceDirName_39;
          MR_String DestDirName_40;
          MR_Word Var_105;
          MR_Word Var_107;
          MR_Word Var_108;
          MR_Word Var_110;
          MR_Word Var_112;
          MR_Word Var_41;

          switch (UseGradeSubdirs_36) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                SourceDirName_39 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", (MR_String) "javas");
                DestDirName_40 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", (MR_String) "classs");
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Grade_38;
                MR_String Var_92;
                MR_String Var_93;
                MR_String Var_94;
                MR_String Var_98;
                MR_String Var_99;
                MR_String Var_100;

                libs__compute_grade__grade_directory_component_2_p_0(Globals_9, &Grade_38);
                Var_94 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", Grade_38);
                Var_93 = mercury__dir__f_slash_2_f_0(Var_94, TargetArch_37);
                Var_92 = mercury__dir__f_slash_2_f_0(Var_93, (MR_String) "Mercury");
                SourceDirName_39 = mercury__dir__f_slash_2_f_0(Var_92, (MR_String) "javas");
                Var_100 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", Grade_38);
                Var_99 = mercury__dir__f_slash_2_f_0(Var_100, TargetArch_37);
                Var_98 = mercury__dir__f_slash_2_f_0(Var_99, (MR_String) "Mercury");
                DestDirName_40 = mercury__dir__f_slash_2_f_0(Var_98, (MR_String) "classs");
              }
              break;
          }
          mercury__dir__make_directory_4_p_0(DestDirName_40, &Var_41);
          {
            Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (DestDirName_40));
            MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[1])));
          }
          {
            Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) ((MR_String) "-d "));
            MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_112));
          }
          {
            Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) ((MR_String) " "));
            MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_110));
          }
          {
            Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (SourceDirName_39));
            MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_108));
          }
          {
            Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) ((MR_String) "-sourcepath "));
            MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_107));
          }
          DirOpts_42 = mercury__string__append_list_1_f_0(Var_105);
        }
        break;
    }
    libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 616, &MFilterJavac_43);
    succeeded = (strcmp(MFilterJavac_43, (MR_String) "") == 0);
    if (succeeded)
      MaybeMFilterJavac_44 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        MaybeMFilterJavac_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeMFilterJavac_44, 0) = ((MR_Box) (MFilterJavac_43));
      }
    {
      Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (HeadJavaFile_12));
      MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (TailJavaFiles_13));
    }
    JoinedJavaFiles_46 = mercury__string__join_list_2_f_0((MR_String) " ", Var_118);
    {
      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (JoinedJavaFiles_46));
      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_125));
    }
    {
      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (JAVAFLAGS_25));
      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_123));
    }
    {
      Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Target_DebugOpt_34));
      MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_122));
    }
    {
      Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (DirOpts_42));
      MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_121));
    }
    {
      Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (InclOpt_32));
      MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_120));
    }
    mercury__string__append_list_2_p_0(Var_119, &CommandArgs_47);
    backend_libs__compile_target_code__invoke_long_system_command_maybe_filter_output_12_p_0(Globals_9, ProgressStream_10, ErrorStream_11, ErrorStream_11, (MR_Integer) 1, JavaCompiler_19, NonAtFileCommandArgs_45, CommandArgs_47, MaybeMFilterJavac_44, Succeeded_14);
  }
}

static void MR_CALL 
backend_libs__compile_target_code__invoke_long_system_command_maybe_filter_output_12_p_0(
  MR_Word Globals_13,
  MR_Word ProgressStream_14,
  MR_Word ErrorStream_15,
  MR_Word CmdOutputStream_16,
  MR_Word Verbosity_17,
  MR_String Cmd_18,
  MR_String NonAtArgs_19,
  MR_String Args_20,
  MR_Word MaybeProcessOutput_21,
  MR_Word * Succeeded_22)
{
  {
    MR_bool succeeded;
    MR_Word RestrictedCommandLine_24;

    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 685, &RestrictedCommandLine_24);
    switch (RestrictedCommandLine_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String FullCmd_87;

          succeeded = (strcmp(NonAtArgs_19, (MR_String) "") == 0);
          if (succeeded)
          {
            MR_String Var_103;

            Var_103 = mercury__string__f_43_43_2_f_0((MR_String) " ", Args_20);
            FullCmd_87 = mercury__string__f_43_43_2_f_0(Cmd_18, Var_103);
          }
          else
          {
            MR_String Var_105;
            MR_String Var_106;
            MR_String Var_108;

            Var_105 = mercury__string__f_43_43_2_f_0((MR_String) " ", Args_20);
            Var_106 = mercury__string__f_43_43_2_f_0(NonAtArgs_19, Var_105);
            Var_108 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_106);
            FullCmd_87 = mercury__string__f_43_43_2_f_0(Cmd_18, Var_108);
          }
          parse_tree__module_cmds__invoke_system_command_maybe_filter_output_10_p_0(Globals_13, ProgressStream_14, ErrorStream_15, CmdOutputStream_16, Verbosity_17, FullCmd_87, MaybeProcessOutput_21, Succeeded_22);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TmpFileResult_25;

          libs__file_util__open_temp_output_3_p_0(&TmpFileResult_25);
          if (((MR_tag((MR_Word) TmpFileResult_25)) == (MR_Integer) 1))
          {
            MR_String ErrorMessage_35 = ((MR_String) ((MR_hl_field(MR_mktag(1), TmpFileResult_25, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(ErrorStream_15, ErrorMessage_35);
            mercury__io__nl_3_p_0(ErrorStream_15);
            *Succeeded_22 = (MR_Integer) 0;
          }
          else
          {
            MR_String TmpFile_26;
            MR_Word TmpStream_27;
            MR_String TmpFileArgs_28;
            MR_Word VeryVerbose_29;
            MR_String AtFileName_30;
            MR_String FullCmd_31;
            MR_Word Succeeded0_32;
            MR_Word RemoveResult_33;
            MR_Tuple Var_57 = ((MR_Tuple) ((MR_hl_field(MR_mktag(0), TmpFileResult_25, (MR_Integer) 0))));

            TmpFile_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 0))));
            TmpStream_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 1))));
            TmpFileArgs_28 = mercury__string__replace_all_3_f_0(Args_20, (MR_String) "\\", (MR_String) "\\\\");
            mercury__io__write_string_4_p_0(TmpStream_27, TmpFileArgs_28);
            mercury__io__close_output_3_p_0(TmpStream_27);
            libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 71, &VeryVerbose_29);
            AtFileName_30 = backend_libs__compile_target_code__at_file_name_2_f_0(Globals_13, TmpFile_26);
            switch (VeryVerbose_29) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(ProgressStream_14, (MR_String) "% Args placed in ");
                  mercury__io__write_string_4_p_0(ProgressStream_14, AtFileName_30);
                  mercury__io__write_string_4_p_0(ProgressStream_14, (MR_String) ": \140");
                  mercury__io__write_string_4_p_0(ProgressStream_14, TmpFileArgs_28);
                  mercury__io__write_string_4_p_0(ProgressStream_14, (MR_String) "\'\n");
                  mercury__io__flush_output_3_p_0(ProgressStream_14);
                }
                break;
            }
            succeeded = (strcmp(NonAtArgs_19, (MR_String) "") == 0);
            if (succeeded)
            {
              MR_String Var_96;

              Var_96 = mercury__string__f_43_43_2_f_0((MR_String) " ", AtFileName_30);
              FullCmd_31 = mercury__string__f_43_43_2_f_0(Cmd_18, Var_96);
            }
            else
            {
              MR_String Var_98;
              MR_String Var_99;
              MR_String Var_101;

              Var_98 = mercury__string__f_43_43_2_f_0((MR_String) " ", AtFileName_30);
              Var_99 = mercury__string__f_43_43_2_f_0(NonAtArgs_19, Var_98);
              Var_101 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_99);
              FullCmd_31 = mercury__string__f_43_43_2_f_0(Cmd_18, Var_101);
            }
            parse_tree__module_cmds__invoke_system_command_maybe_filter_output_10_p_0(Globals_13, ProgressStream_14, ErrorStream_15, CmdOutputStream_16, Verbosity_17, FullCmd_31, MaybeProcessOutput_21, &Succeeded0_32);
            mercury__io__remove_file_4_p_0(TmpFile_26, &RemoveResult_33);
            if ((RemoveResult_33 == (MR_Word) ((MR_Unsigned) 0U)))
              *Succeeded_22 = Succeeded0_32;
            else
              *Succeeded_22 = (MR_Integer) 0;
          }
        }
        break;
    }
  }
}

static MR_String MR_CALL 
backend_libs__compile_target_code__at_file_name_2_f_0(
  MR_Word Globals_4,
  MR_String FileName_5)
{
  {
    MR_String AtFileName_6;
    MR_Word EnvType_7;

    libs__globals__get_system_env_type_2_p_0(Globals_4, &EnvType_7);
    switch (EnvType_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 2:
      case (MR_Integer) 0:
      case (MR_Integer) 3:
        AtFileName_6 = mercury__string__f_43_43_2_f_0((MR_String) "\100", FileName_5);
        break;
      case (MR_Integer) 4:
        AtFileName_6 = mercury__string__f_43_43_2_f_0((MR_String) "\140\100", FileName_5);
        break;
    }
    return AtFileName_6;
  }
}

static MR_String MR_CALL 
backend_libs__compile_target_code__java_classpath_separator_0_f_0(void)
{
  {
    MR_bool succeeded;
    MR_String PathSeparator_2;

    succeeded = mercury__dir__use_windows_paths_0_p_0();
    if (!(succeeded))
      succeeded = mercury__io__have_cygwin_0_p_0();
    if (succeeded)
      PathSeparator_2 = (MR_String) ";";
    else
      PathSeparator_2 = (MR_String) ":";
    return PathSeparator_2;
  }
}

void MR_CALL 
backend_libs__compile_target_code__compile_c_file_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_Word * Succeeded_14)
{
  {
    MR_String C_File_16;
    MR_Word ObjOtherExt_17;
    MR_String O_File_18;
    MR_Word Var_29;
    MR_String ExtStr_35;

    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140backend_libs.compile_target_code.compile_c_file\'/8", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[0])), ModuleName_13, &C_File_16);
    switch (PIC_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 552, &ExtStr_35);
        break;
      case (MR_Integer) 0:
        libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 553, &ExtStr_35);
        break;
    }
    ObjOtherExt_17 = (MR_Word) (ExtStr_35);
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (ObjOtherExt_17));
    }
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140backend_libs.compile_target_code.compile_c_file\'/8", (MR_Integer) 0, Var_29, ModuleName_13, &O_File_18);
    backend_libs__compile_target_code__do_compile_c_file_9_p_0(Globals_9, ProgressStream_10, ErrorStream_11, PIC_12, C_File_16, O_File_18, Succeeded_14);
  }
}

void MR_CALL 
backend_libs__compile_target_code__do_compile_c_file_9_p_0(
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word PIC_13,
  MR_String C_File_14,
  MR_String O_File_15,
  MR_Word * Succeeded_16)
{
  {
    MR_bool succeeded;
    MR_Word Verbose_18;
    MR_String NameObjectFile_19;
    MR_String CC_20;
    MR_String AllCFlags_21;
    MR_String Command_22;
    MR_Word MaybeFilterCmd_23;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_String Var_41;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_String Var_46;
    MR_String FilterCmd_57;
    MR_Word Var_60;

    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 70, &Verbose_18);
    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 551, &NameObjectFile_19);
    switch (Verbose_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) "% Compiling \140");
          mercury__io__write_string_4_p_0(ProgressStream_11, C_File_14);
          mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) "\':\n");
        }
        break;
    }
    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 530, &CC_20);
    backend_libs__compile_target_code__gather_c_compiler_flags_3_p_0(Globals_10, PIC_13, &AllCFlags_21);
    Var_41 = libs__options__quote_arg_1_f_0(C_File_14);
    Var_46 = libs__options__quote_arg_1_f_0(O_File_15);
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (NameObjectFile_19));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) ((MR_String) " -c "));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (AllCFlags_21));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (CC_20));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_35));
    }
    mercury__string__append_list_2_p_0(Var_34, &Command_22);
    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_10, (MR_Integer) 300, (MR_Integer) 1);
    if (succeeded)
    {
      Var_60 = (MR_Integer) 615;
      libs__globals__lookup_string_option_3_p_0(Globals_10, Var_60, &FilterCmd_57);
      succeeded = (strcmp(FilterCmd_57, (MR_String) "") == 0);
      succeeded = !(succeeded);
    }
    if (succeeded)
      {
        MaybeFilterCmd_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeFilterCmd_23, 0) = ((MR_Box) (FilterCmd_57));
      }
    else
      MaybeFilterCmd_23 = (MR_Word) ((MR_Unsigned) 0U);
    parse_tree__module_cmds__invoke_system_command_maybe_filter_output_10_p_0(Globals_10, ProgressStream_11, ErrorStream_12, ErrorStream_12, (MR_Integer) 1, Command_22, MaybeFilterCmd_23, Succeeded_16);
  }
}

static void MR_CALL 
backend_libs__compile_target_code__gather_c_compiler_flags_3_p_0(
  MR_Word Globals_4,
  MR_Word PIC_5,
  MR_String * AllCFlags_6)
{
  {
    MR_bool succeeded;
    MR_Word C_Flags_List_7;
    MR_String CFLAGS_8;
    MR_String CC_Specific_CFLAGS_9;
    MR_Word UseSubdirs_10;
    MR_String SubDirInclOpt_11;
    MR_String InclOpt_12;
    MR_String FrameworkInclOpt_13;
    MR_String GradeDefinesOpts_14;
    MR_Word GCC_Regs_15;
    MR_String CFLAGS_FOR_REGS_16;
    MR_Word GCC_Gotos_17;
    MR_String CFLAGS_FOR_GOTOS_18;
    MR_Word Parallel_19;
    MR_String CFLAGS_FOR_THREADS_20;
    MR_String CFLAGS_FOR_PIC_21;
    MR_String CFLAGS_FOR_LTO_22;
    MR_Word Target_Debug_23;
    MR_String Target_DebugOpt_25;
    MR_String SanitizerOpts_26;
    MR_Word C_CompilerType_27;
    MR_Word UseTrail_28;
    MR_String C_FnAlignOpt_33;
    MR_Word TypeLayoutOption_36;
    MR_String TypeLayoutOpt_37;
    MR_Word OptTuple_38;
    MR_Word OptimizeC_39;
    MR_String OptimizeOpt_40;
    MR_Word Ansi_41;
    MR_String AnsiOpt_42;
    MR_Word InlineAlloc_43;
    MR_String InlineAllocOpt_44;
    MR_Word Warn_45;
    MR_String WarningOpt_46;
    MR_Word ExecTrace_47;
    MR_String TargetArch_48;
    MR_String OverrideOpts_51;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_131;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 531, &C_Flags_List_7);
    backend_libs__compile_target_code__join_string_list_5_p_0(C_Flags_List_7, (MR_String) "", (MR_String) "", (MR_String) " ", &CFLAGS_8);
    backend_libs__compile_target_code__gather_compiler_specific_flags_2_p_0(Globals_4, &CC_Specific_CFLAGS_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 676, &UseSubdirs_10);
    switch (UseSubdirs_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        SubDirInclOpt_11 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        SubDirInclOpt_11 = (MR_String) "-I. ";
        break;
    }
    backend_libs__compile_target_code__gather_c_include_dir_flags_2_p_0(Globals_4, &InclOpt_12);
    backend_libs__compile_target_code__get_framework_directories_2_p_0(Globals_4, &FrameworkInclOpt_13);
    backend_libs__compile_target_code__gather_c_grade_defines_2_p_0(Globals_4, &GradeDefinesOpts_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 299, &GCC_Regs_15);
    switch (GCC_Regs_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CFLAGS_FOR_REGS_16 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 544, &CFLAGS_FOR_REGS_16);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 298, &GCC_Gotos_17);
    switch (GCC_Gotos_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CFLAGS_FOR_GOTOS_18 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 545, &CFLAGS_FOR_GOTOS_18);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 258, &Parallel_19);
    switch (Parallel_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CFLAGS_FOR_THREADS_20 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 546, &CFLAGS_FOR_THREADS_20);
        break;
    }
    switch (PIC_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CFLAGS_FOR_PIC_21 = (MR_String) "";
        break;
      case (MR_Integer) 0:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 549, &CFLAGS_FOR_PIC_21);
        break;
    }
    libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 550, &CFLAGS_FOR_LTO_22);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 529, &Target_Debug_23);
    switch (Target_Debug_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Target_DebugOpt_25 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_String Target_DebugOpt0_24;

          libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 547, &Target_DebugOpt0_24);
          Target_DebugOpt_25 = mercury__string__f_43_43_2_f_0(Target_DebugOpt0_24, (MR_String) " ");
        }
        break;
    }
    libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 548, &SanitizerOpts_26);
    libs__globals__get_c_compiler_type_2_p_0(Globals_4, &C_CompilerType_27);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 260, &UseTrail_28);
    switch (UseTrail_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        C_FnAlignOpt_33 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) C_CompilerType_27)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            C_FnAlignOpt_33 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            {
              MR_Integer BytesPerWord_32;
              MR_String Var_382;
              MR_String Var_389;

              libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 280, &BytesPerWord_32);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__compile_target_code_scalar_common_3[4]), BytesPerWord_32, &Var_382);
              Var_389 = mercury__string__f_43_43_2_f_0(Var_382, (MR_String) " ");
              C_FnAlignOpt_33 = mercury__string__f_43_43_2_f_0((MR_String) "-falign-functions=", Var_389);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            C_FnAlignOpt_33 = (MR_String) "";
            break;
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 267, &TypeLayoutOption_36);
    switch (TypeLayoutOption_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        TypeLayoutOpt_37 = (MR_String) "-DMR_NO_TYPE_LAYOUT ";
        break;
      case (MR_Integer) 1:
        TypeLayoutOpt_37 = (MR_String) "";
        break;
    }
    libs__globals__get_opt_tuple_2_p_0(Globals_4, &OptTuple_38);
    OptimizeC_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_38, (MR_Integer) 2))) & (MR_Integer) 1);
    switch (OptimizeC_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        OptimizeOpt_40 = (MR_String) "";
        break;
      case (MR_Integer) 0:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 542, &OptimizeOpt_40);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 534, &Ansi_41);
    switch (Ansi_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        AnsiOpt_42 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 543, &AnsiOpt_42);
        break;
    }
    InlineAlloc_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_38, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    switch (InlineAlloc_43) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        InlineAllocOpt_44 = (MR_String) "";
        break;
      case (MR_Integer) 0:
        InlineAllocOpt_44 = (MR_String) "";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 39, &Warn_45);
    switch (Warn_45) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        WarningOpt_46 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 541, &WarningOpt_46);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 228, &ExecTrace_47);
    libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 695, &TargetArch_48);
    succeeded = (ExecTrace_47 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = backend_libs__compile_target_code__arch_is_apple_darwin_1_p_0(TargetArch_48);
      if (!(succeeded))
      {
        MR_Word Var_83;
        MR_Integer Var_84;
        MR_String Var_85;

        succeeded = (GCC_Regs_15 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) C_CompilerType_27)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), C_CompilerType_27, (MR_Integer) 0))));
            succeeded = (Var_83 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_83, (MR_Integer) 0))));
              succeeded = (Var_84 == (MR_Integer) 9);
              if (succeeded)
              {
                Var_85 = (MR_String) "x86_64";
                succeeded = mercury__string__prefix_2_p_0(TargetArch_48, Var_85);
              }
            }
          }
        }
      }
    }
    if (succeeded)
      OverrideOpts_51 = (MR_String) "-O0";
    else
      OverrideOpts_51 = (MR_String) "";
    {
      Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (OverrideOpts_51));
      MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_131));
    }
    {
      Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (CC_Specific_CFLAGS_9));
      MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_129));
    }
    {
      Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_128));
    }
    {
      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (CFLAGS_8));
      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_126));
    }
    {
      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_125));
    }
    {
      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (WarningOpt_46));
      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_123));
    }
    {
      Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (C_FnAlignOpt_33));
      MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_122));
    }
    {
      Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_121));
    }
    {
      Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (AnsiOpt_42));
      MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_119));
    }
    {
      Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (InlineAllocOpt_44));
      MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_118));
    }
    {
      Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (TypeLayoutOpt_37));
      MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_117));
    }
    {
      Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_116));
    }
    {
      Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (SanitizerOpts_26));
      MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_114));
    }
    {
      Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Target_DebugOpt_25));
      MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Var_113));
    }
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_112));
    }
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (CFLAGS_FOR_LTO_22));
      MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_110));
    }
    {
      Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_109));
    }
    {
      Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (CFLAGS_FOR_PIC_21));
      MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_107));
    }
    {
      Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_106));
    }
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (CFLAGS_FOR_THREADS_20));
      MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_104));
    }
    {
      Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_103));
    }
    {
      Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (CFLAGS_FOR_GOTOS_18));
      MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_101));
    }
    {
      Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_100));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (CFLAGS_FOR_REGS_16));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_98));
    }
    {
      Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (GradeDefinesOpts_14));
      MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_97));
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_96));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (OptimizeOpt_40));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_94));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_93));
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (FrameworkInclOpt_13));
      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_91));
    }
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_90));
    }
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (InclOpt_12));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_88));
    }
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (SubDirInclOpt_11));
      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_87));
    }
    mercury__string__append_list_2_p_0(Var_86, AllCFlags_6);
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code__arch_is_apple_darwin_1_p_0(
  MR_String FullArch_2)
{
  {
    MR_bool succeeded;
    MR_Word ArchComponents_3;
    MR_String Mfr_5;
    MR_String OS_6;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_String Var_11;

    ArchComponents_3 = mercury__string__split_at_char_2_f_0((MR_Char) 45, FullArch_2);
    succeeded = (ArchComponents_3 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArchComponents_3, (MR_Integer) 1))));
      succeeded = (Var_8 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Mfr_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_8, (MR_Integer) 0))));
        Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_8, (MR_Integer) 1))));
        succeeded = (strcmp(Mfr_5, (MR_String) "apple") == 0);
        if (succeeded)
        {
          succeeded = (Var_9 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OS_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_9, (MR_Integer) 0))));
            Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_9, (MR_Integer) 1))));
            succeeded = (Var_10 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_11 = (MR_String) "darwin";
              succeeded = mercury__string__prefix_2_p_0(OS_6, Var_11);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__get_framework_directories_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__get_framework_directories_2_p_0(
  MR_Word Globals_3,
  MR_String * FrameworkDirs_4)
{
  {
    MR_Word FrameworkDirs0_5;
    MR_Word Var_15;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_3, (MR_Integer) 599, &FrameworkDirs0_5);
    Var_15 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[1]), FrameworkDirs0_5);
    backend_libs__compile_target_code__join_string_list_5_p_0(Var_15, (MR_String) "-F", (MR_String) "", (MR_String) " ", FrameworkDirs_4);
  }
}

static void MR_CALL 
backend_libs__compile_target_code__gather_compiler_specific_flags_2_p_0(
  MR_Word Globals_3,
  MR_String * Flags_4)
{
  {
    MR_Word C_CompilerType_5;
    MR_Word FlagsList_9;

    libs__globals__get_c_compiler_type_2_p_0(Globals_3, &C_CompilerType_5);
    switch (MR_tag((MR_Word) C_CompilerType_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FlagsList_9 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        libs__globals__lookup_accumulating_option_3_p_0(Globals_3, (MR_Integer) 535, &FlagsList_9);
        break;
      case (MR_Integer) 2:
        libs__globals__lookup_accumulating_option_3_p_0(Globals_3, (MR_Integer) 537, &FlagsList_9);
        break;
      case (MR_Integer) 3:
        libs__globals__lookup_accumulating_option_3_p_0(Globals_3, (MR_Integer) 539, &FlagsList_9);
        break;
    }
    backend_libs__compile_target_code__join_string_list_5_p_0(FlagsList_9, (MR_String) "", (MR_String) "", (MR_String) " ", Flags_4);
  }
}

static void MR_CALL 
backend_libs__compile_target_code__join_string_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3,
  MR_String HeadVar__4_4,
  MR_String * HeadVar__5_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_String) "";
  else
  {
    MR_String String_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Strings_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

    if ((Strings_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;

      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (HeadVar__3_3));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (String_9));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_26));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_25));
      }
      mercury__string__append_list_2_p_0(Var_24, HeadVar__5_5);
    }
    else
    {
      MR_String Result0_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_22;

      backend_libs__compile_target_code__join_string_list_5_p_0(Strings_10, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, &Result0_17);
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Result0_17));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (HeadVar__4_4));
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_22));
      }
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (HeadVar__3_3));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_21));
      }
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (String_9));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_20));
      }
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_19));
      }
      mercury__string__append_list_2_p_0(Var_18, HeadVar__5_5);
    }
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__gather_c_include_dir_flags_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_12;

    conv0_LambdaHeadVar__2_12 = backend_libs__compile_target_code__IntroducedFrom__func__gather_c_include_dir_flags__809__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_12));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__gather_c_include_dir_flags_2_p_0(
  MR_Word Globals_3,
  MR_String * InclOpt_4)
{
  {
    MR_Word C_Incl_Dirs_5;
    MR_Word Var_8;
    MR_Word Var_9;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_3, (MR_Integer) 533, &C_Incl_Dirs_5);
    Var_9 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_1[0]), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[0]), C_Incl_Dirs_5);
    Var_8 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_9);
    *InclOpt_4 = mercury__string__append_list_1_f_0(Var_8);
  }
}

static void MR_CALL 
backend_libs__compile_target_code__gather_c_grade_defines_2_p_0(
  MR_Word Globals_3,
  MR_String * GradeDefines_4)
{
  {
    MR_bool succeeded;
    MR_Word HighLevelCode_5;
    MR_String HighLevelCodeOpt_6;
    MR_Word GCC_Regs_7;
    MR_String RegOpt_8;
    MR_Word GCC_Gotos_9;
    MR_String GotoOpt_10;
    MR_Word ASM_Labels_11;
    MR_String AsmOpt_12;
    MR_Word Parallel_13;
    MR_String ParallelOpt_14;
    MR_Word Threadscope_15;
    MR_String ThreadscopeOpt_16;
    MR_Word GC_Method_17;
    MR_String GC_Opt_19;
    MR_Word ProfileCalls_20;
    MR_String ProfileCallsOpt_21;
    MR_Word ProfileTime_22;
    MR_String ProfileTimeOpt_23;
    MR_Word ProfileMemory_24;
    MR_String ProfileMemoryOpt_25;
    MR_Word ProfileDeep_26;
    MR_String ProfileDeepOpt_27;
    MR_Word RecordTermSizesAsWords_28;
    MR_Word RecordTermSizesAsCells_29;
    MR_String RecordTermSizesOpt_30;
    MR_Integer NumPtagBits_31;
    MR_String NumPtagBitsString_32;
    MR_String NumPtagBitsOpt_33;
    MR_Word DeclDebug_34;
    MR_String DeclDebugOpt_35;
    MR_Word SourceDebug_36;
    MR_String SourceDebugOpt_37;
    MR_Word ExecTrace_38;
    MR_String ExecTraceOpt_39;
    MR_Word Extend_40;
    MR_Word StackSegments_41;
    MR_String ExtendOpt_42;
    MR_Word LL_Debug_43;
    MR_String LL_DebugOpt_44;
    MR_Word UseTrail_45;
    MR_String UseTrailOpt_46;
    MR_Word MinimalModelStackCopy_47;
    MR_Word MinimalModelOwnStacks_48;
    MR_String MinimalModelBaseOpt_49;
    MR_Word MinimalModelDebug_50;
    MR_String MinimalModelOpt_51;
    MR_Word PregeneratedDist_52;
    MR_String PregeneratedDistOpt_53;
    MR_Word SinglePrecFloat_54;
    MR_String SinglePrecFloatOpt_55;
    MR_Word UseRegions_56;
    MR_String UseRegionsOpt_61;
    MR_String Var_81;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_127;

    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 302, &HighLevelCode_5);
    switch (HighLevelCode_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HighLevelCodeOpt_6 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        HighLevelCodeOpt_6 = (MR_String) "-DMR_HIGHLEVEL_CODE ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 299, &GCC_Regs_7);
    switch (GCC_Regs_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        RegOpt_8 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        RegOpt_8 = (MR_String) "-DMR_USE_GCC_GLOBAL_REGISTERS ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 298, &GCC_Gotos_9);
    switch (GCC_Gotos_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        GotoOpt_10 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        GotoOpt_10 = (MR_String) "-DMR_USE_GCC_NONLOCAL_GOTOS ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 300, &ASM_Labels_11);
    switch (ASM_Labels_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        AsmOpt_12 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        AsmOpt_12 = (MR_String) "-DMR_USE_ASM_LABELS ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 258, &Parallel_13);
    switch (Parallel_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ParallelOpt_14 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        ParallelOpt_14 = (MR_String) "-DMR_THREAD_SAFE ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 259, &Threadscope_15);
    switch (Threadscope_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ThreadscopeOpt_16 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        ThreadscopeOpt_16 = (MR_String) "-DMR_THREADSCOPE ";
        break;
    }
    libs__globals__get_gc_method_2_p_0(Globals_3, &GC_Method_17);
    switch (GC_Method_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
        GC_Opt_19 = (MR_String) "-DMR_NATIVE_GC ";
        break;
      case (MR_Integer) 0:
        GC_Opt_19 = (MR_String) "";
        break;
      case (MR_Integer) 2:
        GC_Opt_19 = (MR_String) "-DMR_CONSERVATIVE_GC -DMR_BOEHM_GC ";
        break;
      case (MR_Integer) 3:
        GC_Opt_19 = mercury__string__f_43_43_2_f_0((MR_String) "-DMR_CONSERVATIVE_GC -DMR_BOEHM_GC ", (MR_String) "-DMR_BOEHM_GC_DEBUG -DGC_DEBUG -DKEEP_BACKPTRS ");
        break;
      case (MR_Integer) 4:
        GC_Opt_19 = (MR_String) "-DMR_CONSERVATIVE_GC -DMR_HGC ";
        break;
      case (MR_Integer) 1:
        GC_Opt_19 = (MR_String) "";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 234, &ProfileCalls_20);
    switch (ProfileCalls_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ProfileCallsOpt_21 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        ProfileCallsOpt_21 = (MR_String) "-DMR_MPROF_PROFILE_CALLS ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 235, &ProfileTime_22);
    switch (ProfileTime_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ProfileTimeOpt_23 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        ProfileTimeOpt_23 = (MR_String) "-DMR_MPROF_PROFILE_TIME ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 236, &ProfileMemory_24);
    switch (ProfileMemory_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ProfileMemoryOpt_25 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        ProfileMemoryOpt_25 = (MR_String) "-DMR_MPROF_PROFILE_MEMORY ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 237, &ProfileDeep_26);
    switch (ProfileDeep_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ProfileDeepOpt_27 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        ProfileDeepOpt_27 = (MR_String) "-DMR_DEEP_PROFILING ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 254, &RecordTermSizesAsWords_28);
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 255, &RecordTermSizesAsCells_29);
    switch (RecordTermSizesAsWords_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (RecordTermSizesAsCells_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            RecordTermSizesOpt_30 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            RecordTermSizesOpt_30 = mercury__string__f_43_43_2_f_0((MR_String) "-DMR_RECORD_TERM_SIZES ", (MR_String) "-DMR_RECORD_TERM_SIZES_AS_CELLS ");
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (RecordTermSizesAsCells_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            RecordTermSizesOpt_30 = (MR_String) "-DMR_RECORD_TERM_SIZES ";
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.gather_c_grade_defines\'/2", (MR_String) "inconsistent record term size options");
              return;
            }
            break;
        }
        break;
    }
    libs__globals__lookup_int_option_3_p_0(Globals_3, (MR_Integer) 278, &NumPtagBits_31);
    mercury__string__int_to_string_2_p_0(NumPtagBits_31, &NumPtagBitsString_32);
    Var_81 = mercury__string__f_43_43_2_f_0(NumPtagBitsString_32, (MR_String) " ");
    NumPtagBitsOpt_33 = mercury__string__f_43_43_2_f_0((MR_String) "-DMR_TAGBITS=", Var_81);
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 229, &DeclDebug_34);
    switch (DeclDebug_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DeclDebugOpt_35 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        DeclDebugOpt_35 = (MR_String) "-DMR_DECL_DEBUG ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 275, &SourceDebug_36);
    switch (SourceDebug_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        SourceDebugOpt_37 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        SourceDebugOpt_37 = (MR_String) "-DMR_SS_DEBUG ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 228, &ExecTrace_38);
    switch (ExecTrace_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ExecTraceOpt_39 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        ExecTraceOpt_39 = (MR_String) "-DMR_EXEC_TRACE ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 269, &Extend_40);
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 270, &StackSegments_41);
    switch (Extend_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (StackSegments_41) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ExtendOpt_42 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            ExtendOpt_42 = (MR_String) "-DMR_STACK_SEGMENTS ";
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (StackSegments_41) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ExtendOpt_42 = (MR_String) "-DMR_EXTEND_STACKS_WHEN_NEEDED ";
            break;
          case (MR_Integer) 1:
            {
              MR_Box conv0_ExtendOpt_42;

              {
                conv0_ExtendOpt_42 = mercury__require__unexpected_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_String) "predicate \140backend_libs.compile_target_code.gather_c_grade_defines\'/2", (MR_String) "--extend-stacks-when-needed and --stack-segments");
                return;
              }
              ExtendOpt_42 = ((MR_String) (conv0_ExtendOpt_42));
            }
            break;
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 338, &LL_Debug_43);
    switch (LL_Debug_43) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        LL_DebugOpt_44 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        LL_DebugOpt_44 = (MR_String) "-DMR_LL_DEBUG ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 260, &UseTrail_45);
    switch (UseTrail_45) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UseTrailOpt_46 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        UseTrailOpt_46 = (MR_String) "-DMR_USE_TRAIL ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 262, &MinimalModelStackCopy_47);
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 263, &MinimalModelOwnStacks_48);
    switch (MinimalModelStackCopy_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MinimalModelOwnStacks_48) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MinimalModelBaseOpt_49 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            MinimalModelBaseOpt_49 = (MR_String) "-DMR_USE_MINIMAL_MODEL_OWN_STACKS ";
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MinimalModelOwnStacks_48) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MinimalModelBaseOpt_49 = (MR_String) "-DMR_USE_MINIMAL_MODEL_STACK_COPY ";
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.gather_c_grade_defines\'/2", (MR_String) "inconsistent minimal model options");
              return;
            }
            break;
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 264, &MinimalModelDebug_50);
    switch (MinimalModelDebug_50) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MinimalModelOpt_51 = MinimalModelBaseOpt_49;
        break;
      case (MR_Integer) 1:
        {
          succeeded = (strcmp(MinimalModelBaseOpt_49, (MR_String) "") == 0);
          if (succeeded)
            MinimalModelOpt_51 = MinimalModelBaseOpt_49;
          else
            MinimalModelOpt_51 = mercury__string__f_43_43_2_f_0(MinimalModelBaseOpt_49, (MR_String) "-DMR_MINIMAL_MODEL_DEBUG ");
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 265, &PregeneratedDist_52);
    switch (PregeneratedDist_52) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        PregeneratedDistOpt_53 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        PregeneratedDistOpt_53 = (MR_String) "-DMR_PREGENERATED_DIST ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 266, &SinglePrecFloat_54);
    switch (SinglePrecFloat_54) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        SinglePrecFloatOpt_55 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        SinglePrecFloatOpt_55 = (MR_String) "-DMR_USE_SINGLE_PREC_FLOAT ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 271, &UseRegions_56);
    switch (UseRegions_56) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UseRegionsOpt_61 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_Word UseRegionsDebug_58;
          MR_String UseRegionsOpt1_59;
          MR_Word UseRegionsProfiling_60;

          libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 273, &UseRegionsDebug_58);
          switch (UseRegionsDebug_58) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              UseRegionsOpt1_59 = (MR_String) "-DMR_USE_REGIONS ";
              break;
            case (MR_Integer) 1:
              UseRegionsOpt1_59 = mercury__string__f_43_43_2_f_0((MR_String) "-DMR_USE_REGIONS ", (MR_String) "-DMR_RBMM_DEBUG ");
              break;
          }
          libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 274, &UseRegionsProfiling_60);
          switch (UseRegionsProfiling_60) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              UseRegionsOpt_61 = UseRegionsOpt1_59;
              break;
            case (MR_Integer) 1:
              UseRegionsOpt_61 = mercury__string__f_43_43_2_f_0(UseRegionsOpt1_59, (MR_String) "-DMR_RBMM_PROFILING ");
              break;
          }
        }
        break;
    }
    {
      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (UseRegionsOpt_61));
      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (SinglePrecFloatOpt_55));
      MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_127));
    }
    {
      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (PregeneratedDistOpt_53));
      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_126));
    }
    {
      Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (MinimalModelOpt_51));
      MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_125));
    }
    {
      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (UseTrailOpt_46));
      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_124));
    }
    {
      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (ExecTraceOpt_39));
      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_123));
    }
    {
      Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (SourceDebugOpt_37));
      MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_122));
    }
    {
      Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (DeclDebugOpt_35));
      MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_121));
    }
    {
      Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (LL_DebugOpt_44));
      MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_120));
    }
    {
      Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (ExtendOpt_42));
      MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_119));
    }
    {
      Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (NumPtagBitsOpt_33));
      MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_118));
    }
    {
      Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (RecordTermSizesOpt_30));
      MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_117));
    }
    {
      Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (ProfileDeepOpt_27));
      MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
    }
    {
      Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (ProfileMemoryOpt_25));
      MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_115));
    }
    {
      Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (ProfileTimeOpt_23));
      MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_114));
    }
    {
      Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (ProfileCallsOpt_21));
      MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Var_113));
    }
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (GC_Opt_19));
      MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_112));
    }
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (ThreadscopeOpt_16));
      MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_111));
    }
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (ParallelOpt_14));
      MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_110));
    }
    {
      Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (AsmOpt_12));
      MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_109));
    }
    {
      Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (GotoOpt_10));
      MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_108));
    }
    {
      Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (RegOpt_8));
      MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_107));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (HighLevelCodeOpt_6));
      MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_106));
    }
    mercury__string__append_list_2_p_0(Var_105, GradeDefines_4);
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____is_as_new_as_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__compile_target_code____Unify____is_as_new_as_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__compile_target_code____Compare____is_as_new_as_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__compile_target_code____Compare____is_as_new_as_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____linked_target_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__compile_target_code____Unify____linked_target_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__compile_target_code____Compare____linked_target_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__compile_target_code____Compare____linked_target_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____pic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__compile_target_code____Unify____pic_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__compile_target_code____Compare____pic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__compile_target_code____Compare____pic_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__backend_libs__compile_target_code__init(void)
{
}

void mercury__backend_libs__compile_target_code__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_compile_init_file_pred_0);
	MR_register_type_ctor_info(&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_is_as_new_as_0);
	MR_register_type_ctor_info(&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0);
	MR_register_type_ctor_info(&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0);
}

void mercury__backend_libs__compile_target_code__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__compile_target_code__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module backend_libs.compile_target_code.
